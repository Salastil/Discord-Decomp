// ===== 003f8f74  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f8f78  rive::BlendState1DInputBase::clone =====

/* rive::BlendState1DInputBase::clone() const */

void __thiscall rive::BlendState1DInputBase::clone(BlendState1DInputBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x80);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
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
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  puVar2 = PTR_vtable_0067cd20;
  uVar1 = *(undefined4 *)(this + 0x40);
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0xf) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(plVar3 + 8) = uVar1;
  return;
}


// ===== 003f8fe4  FUN_003f8fe4 =====

void FUN_003f8fe4(LayerState *param_1)

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


// ===== 003f9070  rive::BlendState1DViewModelBase::clone =====

/* rive::BlendState1DViewModelBase::clone() const */

void __thiscall rive::BlendState1DViewModelBase::clone(BlendState1DViewModelBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x80);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
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
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  puVar2 = PTR_vtable_0067cd30;
  uVar1 = *(undefined4 *)(this + 0x40);
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 8) = uVar1;
  return;
}


// ===== 003f90d4  FUN_003f90d4 =====

void FUN_003f90d4(LayerState *param_1)

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


// ===== 003f9160  rive::BlendStateDirectBase::clone =====

/* rive::BlendStateDirectBase::clone() const */

void __thiscall rive::BlendStateDirectBase::clone(BlendStateDirectBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x78);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  puVar2 = PTR_vtable_0067cd38;
  uVar1 = *(undefined4 *)(this + 0x40);
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 8) = uVar1;
  return;
}


// ===== 003f91c0  FUN_003f91c0 =====

void FUN_003f91c0(LayerState *param_1)

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


// ===== 003f924c  rive::BlendStateTransitionBase::clone =====

/* rive::BlendStateTransitionBase::clone() const */

void __thiscall rive::BlendStateTransitionBase::clone(BlendStateTransitionBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)operator_new(0xa0);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  *(undefined4 *)(plVar3 + 0xd) = 1;
  puVar2 = PTR_vtable_0067cd48;
  lVar5 = *(long *)(this + 0x48);
  lVar4 = *(long *)(this + 0x40);
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[9] = lVar5;
  plVar3[8] = lVar4;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  lVar4 = *(long *)(this + 0x50);
  *plVar3 = (long)(puVar2 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x90);
  plVar3[10] = lVar4;
  *(undefined4 *)(plVar3 + 0x12) = uVar1;
  *(undefined4 *)(plVar3 + 0xb) = *(undefined4 *)(this + 0x58);
  return;
}


// ===== 003f92c4  FUN_003f92c4 =====

void FUN_003f92c4(StateTransition *param_1)

{
  rive::StateTransition::~StateTransition(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f92e8  rive::CubicEaseInterpolatorBase::clone =====

/* rive::CubicEaseInterpolatorBase::clone() const */

void __thiscall rive::CubicEaseInterpolatorBase::clone(CubicEaseInterpolatorBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)operator_new(0x50);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[3] = 0;
  plVar2[2] = 0;
  puVar1 = PTR_vtable_0067cd50;
  uVar4 = *(undefined8 *)(this + 0x14);
  uVar3 = *(undefined8 *)(this + 0xc);
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0x14) = uVar4;
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003f933c  FUN_003f933c =====

void FUN_003f933c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9340);
  (*pcVar1)();
}


// ===== 003f9340  rive::CubicInterpolatorComponentBase::clone =====

/* rive::CubicInterpolatorComponentBase::clone() const */

long * __thiscall rive::CubicInterpolatorComponentBase::clone(CubicInterpolatorComponentBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)operator_new(0xd0);
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
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  puVar1 = PTR_vtable_0067cd58;
  lVar4 = *(long *)(this + 0x90);
  lVar3 = *(long *)(this + 0x88);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x12] = lVar4;
  plVar2[0x11] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003f93d4  FUN_003f93d4 =====

void FUN_003f93d4(long *param_1)

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


// ===== 003f9440  rive::CubicValueInterpolatorBase::clone =====

/* rive::CubicValueInterpolatorBase::clone() const */

CubicValueInterpolator * __thiscall
rive::CubicValueInterpolatorBase::clone(CubicValueInterpolatorBase *this)

{
  CubicValueInterpolator *this_00;
  undefined8 uVar1;
  
  this_00 = (CubicValueInterpolator *)operator_new(0x68);
  CubicValueInterpolator::CubicValueInterpolator(this_00);
  uVar1 = *(undefined8 *)(this + 0xc);
  *(undefined8 *)(this_00 + 0x14) = *(undefined8 *)(this + 0x14);
  *(undefined8 *)(this_00 + 0xc) = uVar1;
  return this_00;
}


// ===== 003f9478  FUN_003f9478 =====

void FUN_003f9478(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f947c);
  (*pcVar1)();
}


// ===== 003f947c  rive::ElasticInterpolatorBase::clone =====

/* rive::ElasticInterpolatorBase::clone() const */

ElasticInterpolator * __thiscall rive::ElasticInterpolatorBase::clone(ElasticInterpolatorBase *this)

{
  ElasticInterpolator *this_00;
  undefined8 uVar1;
  
  this_00 = (ElasticInterpolator *)operator_new(0x28);
  ElasticInterpolator::ElasticInterpolator(this_00);
  uVar1 = *(undefined8 *)(this + 0x10);
  *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined8 *)(this_00 + 0x10) = uVar1;
  return this_00;
}


// ===== 003f94bc  FUN_003f94bc =====

void FUN_003f94bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f94c0);
  (*pcVar1)();
}


// ===== 003f94c0  rive::EntryStateBase::clone =====

/* rive::EntryStateBase::clone() const */

void __thiscall rive::EntryStateBase::clone(EntryStateBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x60);
  uVar1 = *(undefined4 *)(this + 0x40);
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[9] = 0;
  *puVar2 = &PTR__LayerState_00656be0;
  *(undefined4 *)(puVar2 + 8) = uVar1;
  return;
}


// ===== 003f9518  FUN_003f9518 =====

void FUN_003f9518(LayerState *param_1)

{
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f953c  rive::ExitStateBase::clone =====

/* rive::ExitStateBase::clone() const */

void __thiscall rive::ExitStateBase::clone(ExitStateBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x60);
  uVar1 = *(undefined4 *)(this + 0x40);
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[9] = 0;
  *puVar2 = &PTR__LayerState_00656cc0;
  *(undefined4 *)(puVar2 + 8) = uVar1;
  return;
}


// ===== 003f9594  FUN_003f9594 =====

void FUN_003f9594(LayerState *param_1)

{
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f95b8  rive::FocusActionTargetBase::clone =====

/* rive::FocusActionTargetBase::clone() const */

void __thiscall rive::FocusActionTargetBase::clone(FocusActionTargetBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067cd70;
  uVar3 = *(undefined8 *)(this + 0xc);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003f9600  FUN_003f9600 =====

void FUN_003f9600(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9604);
  (*pcVar1)();
}


// ===== 003f9604  rive::FocusActionTraversalBase::clone =====

/* rive::FocusActionTraversalBase::clone() const */

void __thiscall rive::FocusActionTraversalBase::clone(FocusActionTraversalBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067cd78;
  uVar3 = *(undefined8 *)(this + 0xc);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003f964c  FUN_003f964c =====

void FUN_003f964c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9650);
  (*pcVar1)();
}


// ===== 003f9650  rive::KeyedObjectBase::clone =====

/* rive::KeyedObjectBase::clone() const */

KeyedObject * __thiscall rive::KeyedObjectBase::clone(KeyedObjectBase *this)

{
  KeyedObject *this_00;
  
  this_00 = (KeyedObject *)operator_new(0x28);
  KeyedObject::KeyedObject(this_00);
  *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this + 0xc);
  return this_00;
}


// ===== 003f9688  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f968c  rive::KeyedPropertyBase::clone =====

/* rive::KeyedPropertyBase::clone() const */

KeyedProperty * __thiscall rive::KeyedPropertyBase::clone(KeyedPropertyBase *this)

{
  KeyedProperty *this_00;
  
  this_00 = (KeyedProperty *)operator_new(0x28);
  KeyedProperty::KeyedProperty(this_00);
  *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this + 0xc);
  return this_00;
}


// ===== 003f96c4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f96c8  rive::KeyFrameBoolBase::clone =====

/* rive::KeyFrameBoolBase::clone() const */

void __thiscall rive::KeyFrameBoolBase::clone(KeyFrameBoolBase *this)

{
  undefined4 uVar1;
  KeyFrameBoolBase KVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)operator_new(0x30);
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar3 = (long)(PTR_vtable_0067cda0 + 0x10);
  KVar2 = this[0x28];
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  uVar4 = *(undefined8 *)(this + 0x14);
  *(KeyFrameBoolBase *)(plVar3 + 5) = KVar2;
  *(undefined8 *)((long)plVar3 + 0x14) = uVar4;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003f9720  FUN_003f9720 =====

void FUN_003f9720(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9724);
  (*pcVar1)();
}


// ===== 003f9724  rive::KeyFrameCallbackBase::clone =====

/* rive::KeyFrameCallbackBase::clone() const */

void __thiscall rive::KeyFrameCallbackBase::clone(KeyFrameCallbackBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  *puVar2 = &PTR_FUN_00657168;
  uVar1 = *(undefined4 *)(this + 0xc);
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003f9764  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f9768  rive::KeyFrameColorBase::clone =====

/* rive::KeyFrameColorBase::clone() const */

void __thiscall rive::KeyFrameColorBase::clone(KeyFrameColorBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)operator_new(0x30);
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar3 = (long)(PTR_vtable_0067cda8 + 0x10);
  uVar2 = *(undefined4 *)(this + 0x28);
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  uVar4 = *(undefined8 *)(this + 0x14);
  *(undefined4 *)(plVar3 + 5) = uVar2;
  *(undefined8 *)((long)plVar3 + 0x14) = uVar4;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003f97c0  FUN_003f97c0 =====

void FUN_003f97c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f97c4);
  (*pcVar1)();
}


// ===== 003f97c4  rive::KeyFrameDoubleBase::clone =====

/* rive::KeyFrameDoubleBase::clone() const */

void __thiscall rive::KeyFrameDoubleBase::clone(KeyFrameDoubleBase *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  plVar3 = (long *)operator_new(0x30);
  uVar5 = *(undefined4 *)(this + 0x28);
  uVar2 = *(undefined4 *)(this + 0xc);
  puVar1 = PTR_vtable_0067cdb0 + 0x10;
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  uVar4 = *(undefined8 *)(this + 0x14);
  *plVar3 = (long)puVar1;
  *(undefined4 *)(plVar3 + 5) = uVar5;
  *(undefined8 *)((long)plVar3 + 0x14) = uVar4;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar2;
  return;
}


// ===== 003f981c  FUN_003f981c =====

void FUN_003f981c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9820);
  (*pcVar1)();
}


// ===== 003f9820  rive::KeyFrameIdBase::clone =====

/* rive::KeyFrameIdBase::clone() const */

void __thiscall rive::KeyFrameIdBase::clone(KeyFrameIdBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)operator_new(0x30);
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar3 = (long)(PTR_vtable_0067cdb8 + 0x10);
  uVar2 = *(undefined4 *)(this + 0x28);
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  uVar4 = *(undefined8 *)(this + 0x14);
  *(undefined4 *)(plVar3 + 5) = uVar2;
  *(undefined8 *)((long)plVar3 + 0x14) = uVar4;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003f9878  FUN_003f9878 =====

void FUN_003f9878(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f987c);
  (*pcVar1)();
}


// ===== 003f987c  rive::KeyFrameStringBase::clone =====

/* rive::KeyFrameStringBase::clone() const */

long * __thiscall rive::KeyFrameStringBase::clone(KeyFrameStringBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x40);
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  puVar2 = PTR_vtable_0067cdc0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[1] = 0xffffffff;
  *(undefined4 *)(plVar3 + 3) = 0xffffffff;
  *plVar3 = (long)(puVar2 + 0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 5),(basic_string *)(this + 0x28));
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined8 *)((long)plVar3 + 0x14) = *(undefined8 *)(this + 0x14);
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return plVar3;
}


// ===== 003f98ec  FUN_003f98ec =====

void FUN_003f98ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f98f0);
  (*pcVar1)();
}


// ===== 003f98f0  rive::KeyFrameUintBase::clone =====

/* rive::KeyFrameUintBase::clone() const */

void __thiscall rive::KeyFrameUintBase::clone(KeyFrameUintBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)operator_new(0x30);
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar3 = (long)(PTR_vtable_0067cdc8 + 0x10);
  uVar2 = *(undefined4 *)(this + 0x28);
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  uVar4 = *(undefined8 *)(this + 0x14);
  *(undefined4 *)(plVar3 + 5) = uVar2;
  *(undefined8 *)((long)plVar3 + 0x14) = uVar4;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003f9948  FUN_003f9948 =====

void FUN_003f9948(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f994c);
  (*pcVar1)();
}


// ===== 003f994c  rive::LinearAnimationBase::clone =====

/* rive::LinearAnimationBase::clone() const */

LinearAnimation * __thiscall rive::LinearAnimationBase::clone(LinearAnimationBase *this)

{
  undefined4 uVar1;
  undefined2 uVar2;
  LinearAnimation *this_00;
  undefined4 uVar3;
  undefined8 uVar4;
  
  this_00 = (LinearAnimation *)operator_new(0x60);
  LinearAnimation::LinearAnimation(this_00);
  uVar3 = *(undefined4 *)(this + 0x30);
  uVar4 = *(undefined8 *)(this + 0x34);
  uVar1 = *(undefined4 *)(this + 0x3c);
  uVar2 = *(undefined2 *)(this + 0x40);
  *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(this_00 + 0x30) = uVar3;
  *(undefined8 *)(this_00 + 0x34) = uVar4;
  *(undefined4 *)(this_00 + 0x3c) = uVar1;
  *(undefined2 *)(this_00 + 0x40) = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  return this_00;
}


// ===== 003f99b0  FUN_003f99b0 =====

void FUN_003f99b0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067cde8 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003f99f4  rive::ListenerAlignTargetBase::clone =====

/* rive::ListenerAlignTargetBase::clone() const */

void __thiscall rive::ListenerAlignTargetBase::clone(ListenerAlignTargetBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ListenerAlignTargetBase LVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = (long *)operator_new(0x18);
  puVar4 = PTR_vtable_0067cdf8;
  LVar3 = this[0x14];
  plVar5[2] = 0;
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x10);
  *(ListenerAlignTargetBase *)((long)plVar5 + 0x14) = LVar3;
  *plVar5 = (long)(puVar4 + 0x10);
  *(undefined4 *)((long)plVar5 + 0xc) = uVar1;
  *(undefined4 *)(plVar5 + 2) = uVar2;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  return;
}


// ===== 003f9a44  FUN_003f9a44 =====

void FUN_003f9a44(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9a48);
  (*pcVar1)();
}


// ===== 003f9a48  rive::ListenerBoolChangeBase::clone =====

/* rive::ListenerBoolChangeBase::clone() const */

void __thiscall rive::ListenerBoolChangeBase::clone(ListenerBoolChangeBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_0067ce00;
  uVar4 = *(undefined8 *)(this + 0x14);
  uVar3 = *(undefined8 *)(this + 0xc);
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0x14) = uVar4;
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003f9a90  FUN_003f9a90 =====

void FUN_003f9a90(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9a94);
  (*pcVar1)();
}


// ===== 003f9a94  rive::ListenerFireEventBase::clone =====

/* rive::ListenerFireEventBase::clone() const */

void __thiscall rive::ListenerFireEventBase::clone(ListenerFireEventBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067ce08;
  uVar3 = *(undefined8 *)(this + 0xc);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003f9adc  FUN_003f9adc =====

void FUN_003f9adc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9ae0);
  (*pcVar1)();
}


// ===== 003f9ae0  rive::ListenerNumberChangeBase::clone =====

/* rive::ListenerNumberChangeBase::clone() const */

void __thiscall rive::ListenerNumberChangeBase::clone(ListenerNumberChangeBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_0067ce10;
  uVar3 = *(undefined4 *)(this + 0x18);
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined4 *)(plVar2 + 3) = uVar3;
  uVar4 = *(undefined8 *)(this + 0xc);
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)plVar2 + 0x14) = *(undefined4 *)(this + 0x14);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar4;
  return;
}


// ===== 003f9b38  FUN_003f9b38 =====

void FUN_003f9b38(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9b3c);
  (*pcVar1)();
}


// ===== 003f9b3c  rive::ListenerTriggerChangeBase::clone =====

/* rive::ListenerTriggerChangeBase::clone() const */

void __thiscall rive::ListenerTriggerChangeBase::clone(ListenerTriggerChangeBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)operator_new(0x18);
  puVar2 = PTR_vtable_0067ce18;
  uVar1 = *(undefined4 *)(this + 0x14);
  uVar4 = *(undefined8 *)(this + 0xc);
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar3 + 0xc) = uVar4;
  return;
}


// ===== 003f9b88  FUN_003f9b88 =====

void FUN_003f9b88(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9b8c);
  (*pcVar1)();
}


// ===== 003f9b8c  rive::ListenerInputTypeBase::clone =====

/* rive::ListenerInputTypeBase::clone() const */

void __thiscall rive::ListenerInputTypeBase::clone(ListenerInputTypeBase *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar2 = (long)(PTR_vtable_0067ce20 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar2 + 0xc) = uVar1;
  return;
}


// ===== 003f9bcc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f9bd0  rive::ListenerInputTypeEventBase::clone =====

/* rive::ListenerInputTypeEventBase::clone() const */

void __thiscall rive::ListenerInputTypeEventBase::clone(ListenerInputTypeEventBase *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar2 = *(undefined8 *)(this + 0xc);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00657ec8;
  *(undefined8 *)((long)puVar1 + 0xc) = uVar2;
  return;
}


// ===== 003f9c14  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f9c18  rive::ListenerInputTypeKeyboardBase::clone =====

/* rive::ListenerInputTypeKeyboardBase::clone() const */

void __thiscall rive::ListenerInputTypeKeyboardBase::clone(ListenerInputTypeKeyboardBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_00657fa0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003f9c5c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f9c60  rive::ListenerInputTypeSemanticBase::clone =====

/* rive::ListenerInputTypeSemanticBase::clone() const */

void __thiscall rive::ListenerInputTypeSemanticBase::clone(ListenerInputTypeSemanticBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_00658070;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003f9ca4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f9ca8  rive::ListenerInputTypeTextBase::clone =====

/* rive::ListenerInputTypeTextBase::clone() const */

void __thiscall rive::ListenerInputTypeTextBase::clone(ListenerInputTypeTextBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_00658140;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003f9ce4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f9ce8  rive::ListenerInputTypeViewModelBase::clone =====

/* rive::ListenerInputTypeViewModelBase::clone() const */

long * __thiscall rive::ListenerInputTypeViewModelBase::clone(ListenerInputTypeViewModelBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067ce28;
  plVar5 = *(long **)(this + 0x10);
  plVar2[2] = 0;
  plVar2[1] = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
    lVar4 = plVar5[5];
    plVar2[2] = lVar3;
    *(long *)(lVar3 + 0x28) = lVar4;
  }
  *(undefined4 *)((long)plVar2 + 0xc) = *(undefined4 *)(this + 0xc);
  return plVar2;
}


// ===== 003f9d64  FUN_003f9d64 =====

void FUN_003f9d64(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9d68);
  (*pcVar1)();
}


// ===== 003f9d68  rive::ListenerViewModelChangeBase::clone =====

/* rive::ListenerViewModelChangeBase::clone() const */

void __thiscall rive::ListenerViewModelChangeBase::clone(ListenerViewModelChangeBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x18);
  puVar2 = PTR_vtable_0067ce30;
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003f9dac  FUN_003f9dac =====

void FUN_003f9dac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9db0);
  (*pcVar1)();
}


// ===== 003f9db0  rive::NestedBoolBase::clone =====

/* rive::NestedBoolBase::clone() const */

long * __thiscall rive::NestedBoolBase::clone(NestedBoolBase *this)

{
  NestedBoolBase NVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x90);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  puVar2 = PTR_vtable_0067ce38;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[6] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  NVar1 = this[0x8c];
  plVar3[0xf] = 0;
  *(NestedBoolBase *)((long)plVar3 + 0x8c) = NVar1;
  *(undefined4 *)(plVar3 + 0x11) = *(undefined4 *)(this + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003f9e44  FUN_003f9e44 =====

void FUN_003f9e44(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9e48);
  (*pcVar1)();
}


// ===== 003f9e48  FUN_003f9e48 =====

void FUN_003f9e48(void)

{
  return;
}


// ===== 003f9e4c  FUN_003f9e4c =====

undefined1 FUN_003f9e4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8c);
}


// ===== 003f9e54  rive::NestedNumberBase::clone =====

/* rive::NestedNumberBase::clone() const */

long * __thiscall rive::NestedNumberBase::clone(NestedNumberBase *this)

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
  puVar1 = PTR_vtable_0067ce48;
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


// ===== 003f9ee8  FUN_003f9ee8 =====

void FUN_003f9ee8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9eec);
  (*pcVar1)();
}


// ===== 003f9eec  FUN_003f9eec =====

undefined4 FUN_003f9eec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}


// ===== 003f9ef4  rive::NestedRemapAnimationBase::clone =====

/* rive::NestedRemapAnimationBase::clone() const */

long * __thiscall rive::NestedRemapAnimationBase::clone(NestedRemapAnimationBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)operator_new(0xb8);
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0x11) = 0;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  puVar1 = PTR_vtable_0067ce50;
  uVar3 = *(undefined4 *)(this + 0xb0);
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  *(undefined4 *)(plVar2 + 0x16) = uVar3;
  uVar4 = *(undefined4 *)(this + 0xa4);
  *plVar2 = (long)(puVar1 + 0x10);
  uVar3 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar2 + 0xa4) = uVar4;
  *(undefined4 *)(plVar2 + 0x14) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003f9fa4  FUN_003f9fa4 =====

void FUN_003f9fa4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f9fa8);
  (*pcVar1)();
}


// ===== 003f9fa8  FUN_003f9fa8 =====

void FUN_003f9fa8(void)

{
  return;
}


// ===== 003f9fac  rive::NestedSimpleAnimationBase::clone =====

/* rive::NestedSimpleAnimationBase::clone() const */

long * __thiscall rive::NestedSimpleAnimationBase::clone(NestedSimpleAnimationBase *this)

{
  NestedSimpleAnimationBase NVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  
  plVar3 = (long *)operator_new(0xb8);
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
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined1 *)((long)plVar3 + 0x11) = 0;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  puVar2 = PTR_vtable_0067ce58;
  uVar4 = *(undefined4 *)(this + 0xb0);
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  *(undefined4 *)(plVar3 + 0x16) = uVar4;
  uVar4 = *(undefined4 *)(this + 0xa4);
  *plVar3 = (long)(puVar2 + 0x10);
  NVar1 = this[0xb4];
  *(undefined4 *)((long)plVar3 + 0xa4) = uVar4;
  *(NestedSimpleAnimationBase *)((long)plVar3 + 0xb4) = NVar1;
  *(undefined4 *)(plVar3 + 0x14) = *(undefined4 *)(this + 0xa0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fa064  FUN_003fa064 =====

void FUN_003fa064(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fa068);
  (*pcVar1)();
}


// ===== 003fa068  rive::NestedStateMachineBase::clone =====

/* rive::NestedStateMachineBase::clone() const */

NestedStateMachine * __thiscall rive::NestedStateMachineBase::clone(NestedStateMachineBase *this)

{
  NestedStateMachine *this_00;
  
  this_00 = (NestedStateMachine *)operator_new(200);
  NestedStateMachine::NestedStateMachine(this_00);
  *(undefined4 *)(this_00 + 0xa0) = *(undefined4 *)(this + 0xa0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 003fa0b4  FUN_003fa0b4 =====

void FUN_003fa0b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fa0b8);
  (*pcVar1)();
}


// ===== 003fa0b8  rive::NestedTriggerBase::clone =====

/* rive::NestedTriggerBase::clone() const */

long * __thiscall rive::NestedTriggerBase::clone(NestedTriggerBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
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
  puVar1 = PTR_vtable_0067ce68;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x11) = *(undefined4 *)(this + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003fa144  FUN_003fa144 =====

void FUN_003fa144(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fa148);
  (*pcVar1)();
}


// ===== 003fa148  rive::ScriptedListenerActionBase::clone =====

/* rive::ScriptedListenerActionBase::clone() const */

void __thiscall rive::ScriptedListenerActionBase::clone(ScriptedListenerActionBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)operator_new(0x90);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0xc] = 0;
  plVar2[0xb] = 0;
  plVar2[0xe] = 0;
  plVar2[0xd] = 0;
  plVar2[0x10] = 0;
  plVar2[0xf] = 0;
  *(undefined2 *)(plVar2 + 0x11) = 0;
  puVar1 = PTR_vtable_0067ce70;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  uVar3 = *(undefined8 *)(this + 0xc);
  *(undefined4 *)(plVar2 + 10) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[3] = (long)(puVar1 + 0xc0);
  plVar2[5] = (long)(puVar1 + 0x140);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003fa1c4  FUN_003fa1c4 =====

void FUN_003fa1c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fa1c8);
  (*pcVar1)();
}


// ===== 003fa1c8  rive::ScriptedTransitionConditionBase::clone =====

/* rive::ScriptedTransitionConditionBase::clone() const */

void __thiscall rive::ScriptedTransitionConditionBase::clone(ScriptedTransitionConditionBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x88);
  plVar3[0x10] = 0;
  *(undefined2 *)(plVar3 + 0x10) = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  puVar2 = PTR_vtable_0067ce88;
  *(undefined4 *)(plVar3 + 9) = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = (long)(puVar2 + 0x148);
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar3[2] = (long)(puVar2 + 200);
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003fa238  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fa23c  rive::StateMachineBase::clone =====

/* rive::StateMachineBase::clone() const */

StateMachine * __thiscall rive::StateMachineBase::clone(StateMachineBase *this)

{
  StateMachine *this_00;
  
  this_00 = (StateMachine *)operator_new(0xa0);
  StateMachine::StateMachine(this_00);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  return this_00;
}


// ===== 003fa278  FUN_003fa278 =====

void FUN_003fa278(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067cde8 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fa2bc  rive::StateMachineBoolBase::clone =====

/* rive::StateMachineBoolBase::clone() const */

undefined8 * __thiscall rive::StateMachineBoolBase::clone(StateMachineBoolBase *this)

{
  StateMachineBoolBase SVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  SVar1 = this[0x28];
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *puVar2 = &PTR_FUN_00659140;
  *(StateMachineBoolBase *)(puVar2 + 5) = SVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)(this + 0x10));
  return puVar2;
}


// ===== 003fa31c  FUN_003fa31c =====

void FUN_003fa31c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fa35c  rive::StateMachineFireEvent::perform =====

/* rive::StateMachineFireEvent::perform(rive::StateMachineInstance*) const */

void __thiscall
rive::StateMachineFireEvent::perform(StateMachineFireEvent *this,StateMachineInstance *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x348))
                             (*(long **)(param_1 + 0x10),*(undefined4 *)(this + 0x10));
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x80), (uVar2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003fa3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0xa0))(0,param_1,plVar1);
    return;
  }
  return;
}


// ===== 003fa3cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fa3d0  FUN_003fa3d0 =====

undefined8 FUN_003fa3d0(void)

{
  return 0xa9;
}


// ===== 003fa3d8  FUN_003fa3d8 =====

bool FUN_003fa3d8(undefined8 param_1,short param_2)

{
  return param_2 == 0xa9 || param_2 == 0x267;
}


// ===== 003fa3f0  FUN_003fa3f0 =====

undefined8 FUN_003fa3f0(long param_1,short param_2,long *param_3)

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
        goto LAB_003fa4d0;
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
LAB_003fa4d0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x188) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003fa4b4;
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
LAB_003fa4b4:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003fa4e4  FUN_003fa4e4 =====

void FUN_003fa4e4(void)

{
  return;
}


// ===== 003fa4e8  rive::StateMachineFireEventBase::clone =====

/* rive::StateMachineFireEventBase::clone() const */

void __thiscall rive::StateMachineFireEventBase::clone(StateMachineFireEventBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067d368;
  uVar3 = *(undefined8 *)(this + 0xc);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003fa530  FUN_003fa530 =====

void FUN_003fa530(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fa534);
  (*pcVar1)();
}


// ===== 003fa534  rive::StateMachineFireTriggerBase::clone =====

/* rive::StateMachineFireTriggerBase::clone() const */

long * __thiscall rive::StateMachineFireTriggerBase::clone(StateMachineFireTriggerBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067cea8;
  plVar5 = *(long **)(this + 0x10);
  plVar2[2] = 0;
  plVar2[1] = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
    lVar4 = plVar5[5];
    plVar2[2] = lVar3;
    *(long *)(lVar3 + 0x28) = lVar4;
  }
  *(undefined4 *)((long)plVar2 + 0xc) = *(undefined4 *)(this + 0xc);
  return plVar2;
}


// ===== 003fa5b0  FUN_003fa5b0 =====

void FUN_003fa5b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fa5b4);
  (*pcVar1)();
}


// ===== 003fa5b4  rive::StateMachineLayerBase::clone =====

/* rive::StateMachineLayerBase::clone() const */

long * __thiscall rive::StateMachineLayerBase::clone(StateMachineLayerBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x58);
  puVar1 = PTR_vtable_0067cf08 + 0x10;
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)puVar1;
  plVar2[8] = 0;
  plVar2[7] = 0;
  plVar2[10] = 0;
  plVar2[9] = 0;
  plVar2[6] = 0;
  plVar2[5] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  return plVar2;
}


// ===== 003fa61c  FUN_003fa61c =====

void FUN_003fa61c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fa65c  rive::StateMachineListenerBase::clone =====

/* rive::StateMachineListenerBase::clone() const */

StateMachineListener * __thiscall
rive::StateMachineListenerBase::clone(StateMachineListenerBase *this)

{
  StateMachineListener *this_00;
  
  this_00 = (StateMachineListener *)operator_new(0x60);
  StateMachineListener::StateMachineListener(this_00);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  return this_00;
}


// ===== 003fa6a0  FUN_003fa6a0 =====

void FUN_003fa6a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fa6e0  rive::StateMachineListenerSingleBase::clone =====

/* rive::StateMachineListenerSingleBase::clone() const */

long * __thiscall rive::StateMachineListenerSingleBase::clone(StateMachineListenerSingleBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)operator_new(0x70);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0x11) = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  puVar1 = PTR_vtable_0067cf18;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  lVar5 = *(long *)(this + 0x60);
  plVar4 = *(long **)(this + 0x68);
  plVar2[0xd] = 0;
  plVar2[0xc] = lVar5;
  *plVar2 = (long)(puVar1 + 0x10);
  if (plVar4 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
    lVar3 = plVar4[5];
    plVar2[0xd] = lVar5;
    *(long *)(lVar5 + 0x28) = lVar3;
  }
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  return plVar2;
}


// ===== 003fa784  FUN_003fa784 =====

void FUN_003fa784(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fa788);
  (*pcVar1)();
}


// ===== 003fa788  rive::StateMachineNumberBase::clone =====

/* rive::StateMachineNumberBase::clone() const */

undefined8 * __thiscall rive::StateMachineNumberBase::clone(StateMachineNumberBase *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uVar2 = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_006596a0;
  *(undefined4 *)(puVar1 + 5) = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003fa7e8  FUN_003fa7e8 =====

void FUN_003fa7e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fa828  rive::StateMachineTriggerBase::clone =====

/* rive::StateMachineTriggerBase::clone() const */

undefined8 * __thiscall rive::StateMachineTriggerBase::clone(StateMachineTriggerBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00659778;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003fa880  FUN_003fa880 =====

void FUN_003fa880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fa8c0  rive::StateTransitionBase::clone =====

/* rive::StateTransitionBase::clone() const */

void __thiscall rive::StateTransitionBase::clone(StateTransitionBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)operator_new(0x90);
  plVar3[1] = 0;
  *plVar3 = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  puVar2 = PTR_vtable_0067cf20;
  lVar5 = *(long *)(this + 0x48);
  lVar4 = *(long *)(this + 0x40);
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = lVar5;
  plVar3[8] = lVar4;
  lVar4 = *(long *)(this + 0x50);
  *(undefined4 *)(plVar3 + 0xd) = 1;
  uVar1 = *(undefined4 *)(this + 0x58);
  plVar3[10] = lVar4;
  *(undefined4 *)(plVar3 + 0xb) = uVar1;
  return;
}


// ===== 003fa934  FUN_003fa934 =====

void FUN_003fa934(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[2];
  plVar1 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d600 + 0x10);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 8))();
    }
  }
  plVar3 = (long *)param_1[5];
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[6];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = (long *)param_1[5];
    }
    param_1[6] = (long)plVar3;
    operator_delete(plVar1);
  }
  pvVar2 = (void *)param_1[2];
  if (pvVar2 != (void *)0x0) {
    param_1[3] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fa9f8  rive::TransitionArtboardConditionBase::clone =====

/* rive::TransitionArtboardConditionBase::clone() const */

void __thiscall rive::TransitionArtboardConditionBase::clone(TransitionArtboardConditionBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = &PTR__TransitionViewModelCondition_00659a08;
  uVar1 = *(undefined4 *)(this + 0xc);
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003faa3c  FUN_003faa3c =====

void FUN_003faa3c(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067cf58 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
    param_1[3] = 0;
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003faab0  rive::TransitionBoolConditionBase::clone =====

/* rive::TransitionBoolConditionBase::clone() const */

void __thiscall rive::TransitionBoolConditionBase::clone(TransitionBoolConditionBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067cf38;
  uVar3 = *(undefined8 *)(this + 0xc);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 003faaf8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003faafc  rive::TransitionNumberConditionBase::clone =====

/* rive::TransitionNumberConditionBase::clone() const */

void __thiscall rive::TransitionNumberConditionBase::clone(TransitionNumberConditionBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067cf40;
  uVar3 = *(undefined4 *)(this + 0x14);
  uVar4 = *(undefined8 *)(this + 0xc);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar2 + 0x14) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar4;
  return;
}


// ===== 003fab48  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fab4c  rive::TransitionPropertyArtboardComparatorBase::clone =====

/* rive::TransitionPropertyArtboardComparatorBase::clone() const */

void __thiscall
rive::TransitionPropertyArtboardComparatorBase::clone
          (TransitionPropertyArtboardComparatorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_00659d28;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fab88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fab8c  rive::TransitionPropertyComponentComparatorBase::clone =====

/* rive::TransitionPropertyComponentComparatorBase::clone() const */

void __thiscall
rive::TransitionPropertyComponentComparatorBase::clone
          (TransitionPropertyComponentComparatorBase *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar2 = *(undefined8 *)(this + 0xc);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00659e10;
  *(undefined8 *)((long)puVar1 + 0xc) = uVar2;
  return;
}


// ===== 003fabd0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fabd4  rive::TransitionPropertyViewModelComparatorBase::clone =====

/* rive::TransitionPropertyViewModelComparatorBase::clone() const */

void rive::TransitionPropertyViewModelComparatorBase::clone(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067cf48;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


// ===== 003fac08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fac0c  rive::TransitionSelfComparatorBase::clone =====

/* rive::TransitionSelfComparatorBase::clone() const */

void rive::TransitionSelfComparatorBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00659fc0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  return;
}


// ===== 003fac38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fac3c  rive::TransitionTriggerConditionBase::clone =====

/* rive::TransitionTriggerConditionBase::clone() const */

void __thiscall rive::TransitionTriggerConditionBase::clone(TransitionTriggerConditionBase *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar2 = (long)(PTR_vtable_0067cf50 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fac7c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fac80  rive::TransitionValueArtboardComparatorBase::clone =====

/* rive::TransitionValueArtboardComparatorBase::clone() const */

void __thiscall
rive::TransitionValueArtboardComparatorBase::clone(TransitionValueArtboardComparatorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065a198;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003facbc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003facc0  rive::TransitionValueAssetComparatorBase::clone =====

/* rive::TransitionValueAssetComparatorBase::clone() const */

void __thiscall
rive::TransitionValueAssetComparatorBase::clone(TransitionValueAssetComparatorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065a278;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003facfc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fad00  rive::TransitionValueBooleanComparatorBase::clone =====

/* rive::TransitionValueBooleanComparatorBase::clone() const */

void __thiscall
rive::TransitionValueBooleanComparatorBase::clone(TransitionValueBooleanComparatorBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0065a358;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(TransitionValueBooleanComparatorBase *)((long)puVar1 + 0xc) = this[0xc];
  return;
}


// ===== 003fad40  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fad44  rive::TransitionValueColorComparatorBase::clone =====

/* rive::TransitionValueColorComparatorBase::clone() const */

void __thiscall
rive::TransitionValueColorComparatorBase::clone(TransitionValueColorComparatorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065a438;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fad80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fad84  rive::TransitionValueEnumComparatorBase::clone =====

/* rive::TransitionValueEnumComparatorBase::clone() const */

void __thiscall
rive::TransitionValueEnumComparatorBase::clone(TransitionValueEnumComparatorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065a518;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fadc0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fadc4  rive::TransitionValueIdComparatorBase::clone =====

/* rive::TransitionValueIdComparatorBase::clone() const */

void __thiscall rive::TransitionValueIdComparatorBase::clone(TransitionValueIdComparatorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065a5f8;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fae00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fae04  rive::TransitionValueNumberComparatorBase::clone =====

/* rive::TransitionValueNumberComparatorBase::clone() const */

void __thiscall
rive::TransitionValueNumberComparatorBase::clone(TransitionValueNumberComparatorBase *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_0065a6d8;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
  return;
}


// ===== 003fae44  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fae48  rive::TransitionValueStringComparatorBase::clone =====

/* rive::TransitionValueStringComparatorBase::clone() const */

undefined8 * __thiscall
rive::TransitionValueStringComparatorBase::clone(TransitionValueStringComparatorBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_0065a7b8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003faea0  FUN_003faea0 =====

void FUN_003faea0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d370 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003faee4  rive::TransitionValueTriggerComparatorBase::clone =====

/* rive::TransitionValueTriggerComparatorBase::clone() const */

void __thiscall
rive::TransitionValueTriggerComparatorBase::clone(TransitionValueTriggerComparatorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065a898;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003faf20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003faf24  rive::TransitionViewModelConditionBase::clone =====

/* rive::TransitionViewModelConditionBase::clone() const */

void __thiscall
rive::TransitionViewModelConditionBase::clone(TransitionViewModelConditionBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067cf58;
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003faf6c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003faf70  rive::ArtboardBase::clone =====

/* rive::ArtboardBase::clone() const */

Artboard * __thiscall rive::ArtboardBase::clone(ArtboardBase *this)

{
  undefined4 uVar1;
  ArtboardBase AVar2;
  Artboard *this_00;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  this_00 = (Artboard *)operator_new(0xc70);
  Artboard::Artboard(this_00);
  uVar1 = *(undefined4 *)(this + 0x98c);
  uVar5 = *(undefined4 *)(this + 0x988);
  *(undefined4 *)(this_00 + 0x984) = *(undefined4 *)(this + 0x984);
  uVar3 = *(undefined4 *)(this + 0x174);
  *(undefined4 *)(this_00 + 0x98c) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x990);
  *(undefined4 *)(this_00 + 0x174) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x178);
  *(undefined4 *)(this_00 + 0x990) = uVar1;
  AVar2 = this[0x171];
  *(undefined4 *)(this_00 + 0x178) = uVar3;
  uVar4 = *(undefined8 *)(this + 0x180);
  *(ArtboardBase *)(this_00 + 0x171) = AVar2;
  uVar1 = *(undefined4 *)(this + 0x17c);
  *(undefined8 *)(this_00 + 0x180) = uVar4;
  uVar4 = *(undefined8 *)(this + 0x110);
  *(undefined4 *)(this_00 + 0x17c) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)(this_00 + 0x110) = uVar4;
  uVar4 = *(undefined8 *)(this + 0xbc);
  *(undefined4 *)(this_00 + 0x134) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)(this_00 + 0xbc) = uVar4;
  uVar3 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(this_00 + 0x988) = uVar5;
  *(undefined4 *)(this_00 + 0xc4) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0x138) = uVar1;
  *(undefined4 *)(this_00 + 0xa0) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 003fb02c  FUN_003fb02c =====

void FUN_003fb02c(LayoutComponent *param_1)

{
  rive::LayoutComponent::~LayoutComponent(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fb050  FUN_003fb050 =====

undefined8 FUN_003fb050(long param_1,ushort param_2,long *param_3)

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
  
  if (param_2 < 0xec) {
    if (param_2 == 0xb) {
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
      *(undefined4 *)(param_1 + 0x984) = uVar10;
    }
    else {
      if (param_2 != 0xc) goto LAB_003fb0f4;
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
      *(undefined4 *)(param_1 + 0x988) = uVar10;
    }
    param_3[2] = (long)puVar5;
    return 1;
  }
  if (param_2 == 0xec) {
    uVar9 = 0;
    uVar4 = 0;
    pbVar7 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003fb194;
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
LAB_003fb194:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x98c) = (int)uVar4;
    return 1;
  }
  if (param_2 == 0x247) {
    uVar9 = 0;
    uVar4 = 0;
    pbVar7 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003fb178;
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
LAB_003fb178:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x990) = (int)uVar4;
    return 1;
  }
LAB_003fb0f4:
  uVar3 = FUN_0035ecc8();
  return uVar3;
}


// ===== 003fb1d0  FUN_003fb1d0 =====

long FUN_003fb1d0(long param_1)

{
  return param_1 + 0xa4;
}


// ===== 003fb1d8  FUN_003fb1d8 =====

undefined4 FUN_003fb1d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}


// ===== 003fb1f0  FUN_003fb1f0 =====

undefined8 FUN_003fb1f0(void)

{
  return 0;
}


// ===== 003fb1f8  FUN_003fb1f8 =====

void FUN_003fb1f8(long param_1)

{
  rive::LayoutComponent::~LayoutComponent((LayoutComponent *)(param_1 + -400));
  return;
}


// ===== 003fb200  FUN_003fb200 =====

void FUN_003fb200(long param_1)

{
  rive::LayoutComponent::~LayoutComponent((LayoutComponent *)(param_1 + -400));
  operator_delete((LayoutComponent *)(param_1 + -400));
  return;
}


// ===== 003fb228  FUN_003fb228 =====

long FUN_003fb228(long param_1)

{
  return param_1 + -0xec;
}


// ===== 003fb230  FUN_003fb230 =====

void FUN_003fb230(long param_1)

{
  rive::LayoutComponent::~LayoutComponent((LayoutComponent *)(param_1 + -0x1c0));
  return;
}


// ===== 003fb238  FUN_003fb238 =====

void FUN_003fb238(long param_1)

{
  rive::LayoutComponent::~LayoutComponent((LayoutComponent *)(param_1 + -0x1c0));
  operator_delete((LayoutComponent *)(param_1 + -0x1c0));
  return;
}


// ===== 003fb260  rive::ArtboardComponentListBase::clone =====

/* rive::ArtboardComponentListBase::clone() const */

ArtboardComponentList * __thiscall
rive::ArtboardComponentListBase::clone(ArtboardComponentListBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArtboardComponentList *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  this_00 = (ArtboardComponentList *)operator_new(0x450);
  ArtboardComponentList::ArtboardComponentList(this_00);
  uVar6 = *(undefined8 *)(this + 0xbc);
  uVar1 = *(undefined4 *)(this + 0x174);
  uVar2 = *(undefined4 *)(this + 0x134);
  uVar3 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(this + 0x110);
  uVar4 = *(undefined4 *)(this + 0xc4);
  *(undefined8 *)(this_00 + 0xbc) = uVar6;
  uVar5 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0x174) = uVar1;
  *(undefined4 *)(this_00 + 0x134) = uVar2;
  *(undefined4 *)(this_00 + 0x138) = uVar3;
  *(undefined4 *)(this_00 + 0xc4) = uVar4;
  *(undefined4 *)(this_00 + 0xa0) = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 003fb2dc  FUN_003fb2dc =====

void FUN_003fb2dc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb2e0);
  (*pcVar1)();
}


// ===== 003fb2e0  rive::ArtboardListMapRuleBase::clone =====

/* rive::ArtboardListMapRuleBase::clone() const */

long * __thiscall rive::ArtboardListMapRuleBase::clone(ArtboardListMapRuleBase *this)

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
  puVar1 = PTR_vtable_0067cfd0;
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


// ===== 003fb36c  FUN_003fb36c =====

void FUN_003fb36c(long *param_1)

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


// ===== 003fb3d8  rive::AudioAssetBase::clone =====

/* rive::AudioAssetBase::clone() const */

AudioAsset * __thiscall rive::AudioAssetBase::clone(AudioAssetBase *this)

{
  undefined4 uVar1;
  AudioAsset *this_00;
  
  this_00 = (AudioAsset *)operator_new(0x90);
  AudioAsset::AudioAsset(this_00);
  uVar1 = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(this_00 + 0x80) = *(undefined4 *)(this + 0x80);
  *(undefined4 *)(this_00 + 0x28) = uVar1;
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x30),(basic_string *)(this + 0x30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  return this_00;
}


// ===== 003fb444  FUN_003fb444 =====

void FUN_003fb444(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb448);
  (*pcVar1)();
}


// ===== 003fb448  rive::BlobAssetBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::BlobAssetBase::clone() const */

long * __thiscall rive::BlobAssetBase::clone(BlobAssetBase *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  char *pcVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  plVar8 = (long *)operator_new(0x90);
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[3] = 0;
  *(undefined8 *)(plVar8 + 2) = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 6);
  plVar8[7] = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)(plVar8 + 1) = 0xffffffff;
  pcVar9 = (char *)operator_new(0x30);
  plVar8[8] = (long)pcVar9;
  uVar5 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar2 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar9[0x20] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  lVar6 = _UNK_0024e0e8;
  uVar2 = _DAT_0024e0e0;
  *(undefined4 *)(plVar8 + 9) = 1;
  plVar8[7] = lVar6;
  *(undefined8 *)this_00 = uVar2;
  puVar7 = PTR_vtable_0067cfe0;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x28);
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)(plVar8 + 5) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_00,(basic_string *)(this + 0x30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 2),(basic_string *)(this + 0x10));
  return plVar8;
}


// ===== 003fb518  FUN_003fb518 =====

void FUN_003fb518(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb51c);
  (*pcVar1)();
}


// ===== 003fb51c  rive::FileAssetContentsBase::clone =====

/* rive::FileAssetContentsBase::clone() const */

void rive::FileAssetContentsBase::clone(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x30);
  *plVar1 = (long)(PTR_vtable_0067d000 + 0x10);
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 1) = 0xffffffff;
  plVar1[3] = 0;
  plVar1[2] = 0;
  plVar1[5] = 0;
  plVar1[4] = 0;
  return;
}


// ===== 003fb554  FUN_003fb554 =====

void FUN_003fb554(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb558);
  (*pcVar1)();
}


// ===== 003fb558  rive::FolderBase::clone =====

/* rive::FolderBase::clone() const */

undefined8 * __thiscall rive::FolderBase::clone(FolderBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_0065b5d0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003fb5b0  FUN_003fb5b0 =====

void FUN_003fb5b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fb5f0  rive::FontAssetBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::FontAssetBase::clone() const */

long * __thiscall rive::FontAssetBase::clone(FontAssetBase *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  char *pcVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  plVar8 = (long *)operator_new(0x88);
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[3] = 0;
  *(undefined8 *)(plVar8 + 2) = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 6);
  plVar8[7] = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)(plVar8 + 1) = 0xffffffff;
  pcVar9 = (char *)operator_new(0x30);
  plVar8[8] = (long)pcVar9;
  uVar5 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar2 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar9[0x20] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  lVar6 = _UNK_0024e0e8;
  uVar2 = _DAT_0024e0e0;
  *(undefined4 *)(plVar8 + 9) = 1;
  plVar8[7] = lVar6;
  *(undefined8 *)this_00 = uVar2;
  puVar7 = PTR_vtable_0067d010;
  plVar8[0x10] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x28);
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)(plVar8 + 5) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_00,(basic_string *)(this + 0x30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 2),(basic_string *)(this + 0x10));
  return plVar8;
}


// ===== 003fb6c0  FUN_003fb6c0 =====

void FUN_003fb6c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb6c4);
  (*pcVar1)();
}


// ===== 003fb6c4  rive::ImageAssetBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ImageAssetBase::clone() const */

long * __thiscall rive::ImageAssetBase::clone(ImageAssetBase *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  
  plVar8 = (long *)operator_new(0x90);
  *(undefined4 *)(plVar8 + 1) = 0xffffffff;
  *(undefined2 *)(plVar8 + 2) = 0;
  pcVar9 = (char *)operator_new(0x30);
  lVar10 = _UNK_0024e0e8;
  uVar6 = _DAT_0024e0e0;
  uVar5 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar2 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  plVar8[8] = (long)pcVar9;
  plVar8[7] = lVar10;
  *(undefined8 *)(plVar8 + 6) = uVar6;
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  pcVar9[0x20] = '\0';
  *(undefined4 *)(plVar8 + 9) = 1;
  puVar7 = PTR_vtable_0067d018;
  plVar8[0x11] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  lVar10 = *(long *)(this + 0x80);
  *plVar8 = (long)(puVar7 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x28);
  plVar8[0x10] = lVar10;
  *(undefined4 *)(plVar8 + 5) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 6),(basic_string *)(this + 0x30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 2),(basic_string *)(this + 0x10));
  return plVar8;
}


// ===== 003fb788  FUN_003fb788 =====

void FUN_003fb788(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb78c);
  (*pcVar1)();
}


// ===== 003fb78c  rive::ManifestAssetBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ManifestAssetBase::clone() const */

long * __thiscall rive::ManifestAssetBase::clone(ManifestAssetBase *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  plVar8 = (long *)operator_new(0xd8);
  plVar8[0x1a] = 0;
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  plVar8[0x11] = 0;
  plVar8[0x10] = 0;
  plVar8[0x13] = 0;
  plVar8[0x12] = 0;
  plVar8[0x15] = 0;
  plVar8[0x14] = 0;
  plVar8[0x17] = 0;
  plVar8[0x16] = 0;
  plVar8[0x19] = 0;
  plVar8[0x18] = 0;
  plVar8[3] = 0;
  *(undefined8 *)(plVar8 + 2) = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 6);
  plVar8[7] = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)(plVar8 + 1) = 0xffffffff;
  pcVar9 = (char *)operator_new(0x30);
  plVar8[8] = (long)pcVar9;
  uVar6 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar5 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar9[0x20] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  lVar7 = _UNK_0024e0e8;
  uVar3 = _DAT_0024e0e0;
  *(undefined4 *)(plVar8 + 9) = 1;
  plVar8[7] = lVar7;
  *(undefined8 *)this_00 = uVar3;
  puVar1 = PTR_vtable_0067d030 + 200;
  *plVar8 = (long)(PTR_vtable_0067d030 + 0x10);
  uVar2 = *(undefined4 *)(this + 0x28);
  plVar8[0x10] = (long)puVar1;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  plVar8[0x12] = 0;
  plVar8[0x11] = 0;
  plVar8[0x14] = 0;
  plVar8[0x13] = 0;
  *(undefined4 *)(plVar8 + 0x15) = 0x3f800000;
  plVar8[0x17] = 0;
  plVar8[0x16] = 0;
  plVar8[0x19] = 0;
  plVar8[0x18] = 0;
  *(undefined4 *)(plVar8 + 0x1a) = 0x3f800000;
  *(undefined4 *)(plVar8 + 5) = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_00,(basic_string *)(this + 0x30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 2),(basic_string *)(this + 0x10));
  return plVar8;
}


// ===== 003fb88c  FUN_003fb88c =====

void FUN_003fb88c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb890);
  (*pcVar1)();
}


// ===== 003fb890  rive::ScriptAssetBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ScriptAssetBase::clone() const */

long * __thiscall rive::ScriptAssetBase::clone(ScriptAssetBase *this)

{
  undefined4 uVar1;
  ScriptAssetBase SVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  char *pcVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  
  plVar9 = (long *)operator_new(0x100);
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[9] = 0;
  plVar9[8] = 0;
  plVar9[0xb] = 0;
  plVar9[10] = 0;
  plVar9[0xd] = 0;
  plVar9[0xc] = 0;
  plVar9[0xf] = 0;
  plVar9[0xe] = 0;
  plVar9[0x13] = 0;
  plVar9[0x12] = 0;
  plVar9[0x15] = 0;
  plVar9[0x14] = 0;
  plVar9[0x17] = 0;
  plVar9[0x16] = 0;
  plVar9[0x19] = 0;
  plVar9[0x18] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1f] = 0;
  plVar9[0x1e] = 0;
  plVar9[3] = 0;
  *(undefined8 *)(plVar9 + 2) = 0;
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar9 + 0x10);
  plVar9[0x11] = 0;
  *(undefined8 *)this_01 = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar9 + 6);
  plVar9[7] = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)(plVar9 + 1) = 0xffffffff;
  pcVar10 = (char *)operator_new(0x30);
  plVar9[8] = (long)pcVar10;
  uVar6 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar5 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar10[0x20] = '\0';
  *(undefined2 *)this_01 = 0;
  *(undefined8 *)(pcVar10 + 8) = uVar4;
  *(undefined8 *)pcVar10 = uVar3;
  *(undefined8 *)(pcVar10 + 0x18) = uVar6;
  *(undefined8 *)(pcVar10 + 0x10) = uVar5;
  lVar7 = _UNK_0024e0e8;
  uVar3 = _DAT_0024e0e0;
  *(undefined4 *)(plVar9 + 9) = 1;
  plVar9[7] = lVar7;
  *(undefined8 *)this_00 = uVar3;
  *(undefined1 *)(plVar9 + 0x13) = 0;
  *(undefined4 *)((long)plVar9 + 0xa4) = 0;
  plVar9[0xb] = 0;
  plVar9[10] = 0;
  plVar9[0xd] = 0;
  plVar9[0xc] = 0;
  plVar9[0xf] = 0;
  plVar9[0xe] = 0;
  puVar8 = PTR_vtable_0067d040;
  *(undefined4 *)(plVar9 + 0x1a) = 0x3f800000;
  plVar9[0x17] = 0;
  plVar9[0x16] = 0;
  plVar9[0x19] = 0;
  plVar9[0x18] = 0;
  plVar9[0x1b] = 0;
  *plVar9 = (long)(puVar8 + 0x10);
  SVar2 = this[0xa0];
  plVar9[0x15] = (long)(puVar8 + 0xf8);
  uVar1 = *(undefined4 *)(this + 0x9c);
  *(undefined1 *)(plVar9 + 0x1c) = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  *(undefined1 *)(plVar9 + 0x1f) = 0;
  *(undefined4 *)((long)plVar9 + 0x9c) = uVar1;
  *(ScriptAssetBase *)(plVar9 + 0x14) = SVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_01,(basic_string *)(this + 0x80));
  *(undefined4 *)(plVar9 + 5) = *(undefined4 *)(this + 0x28);
  (**(code **)(*plVar9 + 0x60))(plVar9,this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_00,(basic_string *)(this + 0x30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar9 + 2),(basic_string *)(this + 0x10));
  return plVar9;
}


// ===== 003fb9e0  FUN_003fb9e0 =====

void FUN_003fb9e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fb9e4);
  (*pcVar1)();
}


// ===== 003fb9e4  rive::ShaderAssetBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ShaderAssetBase::clone() const */

long * __thiscall rive::ShaderAssetBase::clone(ShaderAssetBase *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  
  plVar6 = (long *)operator_new(0xf0);
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x13] = 0;
  plVar6[0x12] = 0;
  plVar6[0x15] = 0;
  plVar6[0x14] = 0;
  plVar6[0x17] = 0;
  plVar6[0x16] = 0;
  plVar6[0x19] = 0;
  plVar6[0x18] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1a] = 0;
  plVar6[3] = 0;
  *(undefined8 *)(plVar6 + 2) = 0;
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar6 + 0x10);
  plVar6[0x11] = 0;
  *(undefined8 *)this_01 = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar6 + 6);
  plVar6[7] = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)(plVar6 + 1) = 0xffffffff;
  pcVar7 = (char *)operator_new(0x30);
  plVar6[8] = (long)pcVar7;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar2 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar1 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar7[0x20] = '\0';
  *(undefined2 *)this_01 = 0;
  *(undefined8 *)(pcVar7 + 8) = uVar2;
  *(undefined8 *)pcVar7 = uVar1;
  *(undefined8 *)(pcVar7 + 0x18) = uVar4;
  *(undefined8 *)(pcVar7 + 0x10) = uVar3;
  lVar5 = _UNK_0024e0e8;
  uVar1 = _DAT_0024e0e0;
  *(undefined4 *)(plVar6 + 9) = 1;
  plVar6[7] = lVar5;
  *(undefined8 *)this_00 = uVar1;
  *plVar6 = (long)&PTR_FUN_0065bc60;
  *(undefined1 *)(plVar6 + 0x13) = 0;
  *(undefined4 *)(plVar6 + 0x1a) = 0x3f800000;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x15] = 0;
  plVar6[0x14] = 0;
  plVar6[0x17] = 0;
  plVar6[0x16] = 0;
  plVar6[0x19] = 0;
  plVar6[0x18] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_01,(basic_string *)(this + 0x80));
  *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(this + 0x28);
  (**(code **)(*plVar6 + 0x60))(plVar6,this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_00,(basic_string *)(this + 0x30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar6 + 2),(basic_string *)(this + 0x10));
  return plVar6;
}


// ===== 003fbb0c  FUN_003fbb0c =====

void FUN_003fbb0c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fbb10);
  (*pcVar1)();
}


// ===== 003fbb10  rive::AudioEventBase::clone =====

/* rive::AudioEventBase::clone() const */

long * __thiscall rive::AudioEventBase::clone(AudioEventBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0xd8);
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
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  puVar2 = PTR_vtable_0067d060;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x14] = (long)(puVar2 + 0xd8);
  plVar3[0x15] = 0;
  uVar1 = *(undefined4 *)(this + 0xc0);
  plVar3[0x19] = (long)(puVar2 + 0x100);
  plVar3[0x1a] = 0;
  *(undefined4 *)(plVar3 + 0x18) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fbbc0  FUN_003fbbc0 =====

void FUN_003fbbc0(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x15];
  param_1[0x14] = (long)(PTR_vtable_0067d068 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x16] = (long)pvVar1;
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


// ===== 003fbc6c  rive::BackboardBase::clone =====

/* rive::BackboardBase::clone() const */

void rive::BackboardBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0065c1c8;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  return;
}


// ===== 003fbc98  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fbc9c  rive::BoneBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::BoneBase::clone() const */

long * __thiscall rive::BoneBase::clone(BoneBase *this)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  plVar4 = (long *)operator_new(0x148);
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
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  lVar2 = _UNK_00281c00;
  lVar1 = _DAT_00281bf8;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x11] = 0;
  *(undefined8 *)((long)plVar4 + 0xb4) = 0;
  *(long *)((long)plVar4 + 0xac) = lVar2;
  *(long *)((long)plVar4 + 0xa4) = lVar1;
  plVar4[0x1b] = lVar2;
  plVar4[0x1a] = lVar1;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1c] = 0;
  puVar3 = PTR_vtable_0067d070;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  *(undefined4 *)(plVar4 + 0x22) = *(undefined4 *)(this + 0x110);
  plVar4[0x19] = (long)(puVar3 + 0x120);
  uVar7 = *(undefined4 *)(this + 0xc4);
  plVar4[0x26] = 0;
  plVar4[0x25] = 0;
  plVar4[0x28] = 0;
  plVar4[0x27] = 0;
  plVar4[0x24] = 0;
  plVar4[0x23] = 0;
  uVar6 = *(undefined8 *)(this + 0xbc);
  *plVar4 = (long)(puVar3 + 0x10);
  *(undefined8 *)((long)plVar4 + 0xbc) = uVar6;
  uVar5 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar4 + 0xc4) = uVar7;
  *(undefined4 *)(plVar4 + 0x14) = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 003fbd90  FUN_003fbd90 =====

void FUN_003fbd90(long *param_1)

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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 003fbe48  FUN_003fbe48 =====

void FUN_003fbe48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fbe4c);
  (*pcVar1)();
}


// ===== 003fbe4c  FUN_003fbe4c =====

void FUN_003fbe4c(void)

{
  return;
}


// ===== 003fbe50  rive::CubicWeightBase::clone =====

/* rive::CubicWeightBase::clone() const */

undefined8 * __thiscall rive::CubicWeightBase::clone(CubicWeightBase *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0xb8);
  puVar1[0x16] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uVar3 = *(undefined8 *)(this + 0xa0);
  uVar2 = *(undefined8 *)(this + 0x98);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  puVar1[0x14] = uVar3;
  puVar1[0x13] = uVar2;
  uVar2 = *(undefined8 *)(this + 0x88);
  *(undefined2 *)(puVar1 + 0xc) = 0xfffe;
  puVar1[6] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_0065c430;
  puVar1[0x11] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(this + 0x28);
  return puVar1;
}


// ===== 003fbee8  FUN_003fbee8 =====

void FUN_003fbee8(long *param_1)

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


// ===== 003fbf54  rive::RootBoneBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::RootBoneBase::clone() const */

long * __thiscall rive::RootBoneBase::clone(RootBoneBase *this)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  plVar4 = (long *)operator_new(0x150);
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
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  lVar2 = _UNK_00281c00;
  lVar1 = _DAT_00281bf8;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x11] = 0;
  *(undefined8 *)((long)plVar4 + 0xb4) = 0;
  *(long *)((long)plVar4 + 0xac) = lVar2;
  *(long *)((long)plVar4 + 0xa4) = lVar1;
  plVar4[0x1b] = lVar2;
  plVar4[0x1a] = lVar1;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x28] = 0;
  plVar4[0x27] = 0;
  puVar3 = PTR_vtable_0067d078;
  plVar4[0x24] = 0;
  plVar4[0x23] = 0;
  plVar4[0x26] = 0;
  plVar4[0x25] = 0;
  uVar6 = *(undefined4 *)(this + 0x110);
  plVar4[0x29] = *(long *)(this + 0x148);
  uVar5 = *(undefined8 *)(this + 0xbc);
  *(undefined4 *)(plVar4 + 0x22) = uVar6;
  uVar7 = *(undefined4 *)(this + 0xc4);
  *(undefined8 *)((long)plVar4 + 0xbc) = uVar5;
  uVar6 = *(undefined4 *)(this + 0xa0);
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[0x19] = (long)(puVar3 + 0x130);
  *(undefined4 *)((long)plVar4 + 0xc4) = uVar7;
  *(undefined4 *)(plVar4 + 0x14) = uVar6;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 003fc050  FUN_003fc050 =====

void FUN_003fc050(void *param_1)

{
  FUN_003dead8();
  operator_delete(param_1);
  return;
}


// ===== 003fc074  FUN_003fc074 =====

void FUN_003fc074(void)

{
  return;
}


// ===== 003fc078  FUN_003fc078 =====

void FUN_003fc078(void)

{
  return;
}


// ===== 003fc07c  rive::SkinBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::SkinBase::clone() const */

long * __thiscall rive::SkinBase::clone(SkinBase *this)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)operator_new(0xf8);
  plVar3[0x1e] = 0;
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
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x13] = 0;
  puVar2 = PTR_vtable_0067d080;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  lVar4 = *(long *)(this + 0xb0);
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  lVar1 = _UNK_00281c00;
  lVar5 = _DAT_00281bf8;
  plVar3[0x19] = 0;
  plVar3[0x16] = lVar4;
  plVar3[0x18] = lVar1;
  plVar3[0x17] = lVar5;
  lVar5 = *(long *)(this + 0xa0);
  plVar3[0x15] = *(long *)(this + 0xa8);
  plVar3[0x14] = lVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fc140  FUN_003fc140 =====

void FUN_003fc140(long *param_1)

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


// ===== 003fc1cc  rive::TendonBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TendonBase::clone() const */

long * __thiscall rive::TendonBase::clone(TendonBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  puVar2 = PTR_vtable_0067d088;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *(undefined8 *)((long)plVar3 + 0xb4) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  uVar5 = _UNK_00281c00;
  uVar4 = _DAT_00281bf8;
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0x18] = 0;
  *(undefined8 *)((long)plVar3 + 0xac) = uVar5;
  *(undefined8 *)((long)plVar3 + 0xa4) = uVar4;
  uVar5 = *(undefined8 *)(this + 0x94);
  uVar4 = *(undefined8 *)(this + 0x8c);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined8 *)((long)plVar3 + 0x94) = uVar5;
  *(undefined8 *)((long)plVar3 + 0x8c) = uVar4;
  *(undefined8 *)((long)plVar3 + 0x9c) = *(undefined8 *)(this + 0x9c);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fc284  FUN_003fc284 =====

void FUN_003fc284(long *param_1)

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


// ===== 003fc2f0  rive::WeightBase::clone =====

/* rive::WeightBase::clone() const */

long * __thiscall rive::WeightBase::clone(WeightBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(0x98);
  plVar2[0x12] = 0;
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
  puVar1 = PTR_vtable_0067d090;
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


// ===== 003fc380  FUN_003fc380 =====

void FUN_003fc380(long *param_1)

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


// ===== 003fc3ec  rive::DistanceConstraintBase::clone =====

/* rive::DistanceConstraintBase::clone() const */

long * __thiscall rive::DistanceConstraintBase::clone(DistanceConstraintBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)operator_new(0xa0);
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  puVar1 = PTR_vtable_0067d0a8;
  uVar3 = *(undefined4 *)(this + 0x98);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  *(undefined4 *)(plVar2 + 0x13) = uVar3;
  uVar4 = *(undefined4 *)(this + 0x88);
  *plVar2 = (long)(puVar1 + 0x10);
  uVar3 = *(undefined4 *)(this + 0x9c);
  plVar2[0x12] = 0;
  *(undefined4 *)((long)plVar2 + 0x9c) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(plVar2 + 0x11) = uVar4;
  *(undefined4 *)((long)plVar2 + 0x8c) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003fc494  FUN_003fc494 =====

void FUN_003fc494(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fc498);
  (*pcVar1)();
}


// ===== 003fc498  FUN_003fc498 =====

void FUN_003fc498(void)

{
  return;
}


// ===== 003fc49c  FUN_003fc49c =====

void FUN_003fc49c(void)

{
  return;
}


// ===== 003fc4a0  rive::FollowPathConstraintBase::clone =====

/* rive::FollowPathConstraintBase::clone() const */

long * __thiscall rive::FollowPathConstraintBase::clone(FollowPathConstraintBase *this)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  
  plVar4 = (long *)operator_new(0x108);
  plVar4[0x20] = 0;
  plVar4[1] = 0;
  *plVar4 = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
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
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  plVar4[0x13] = 0;
  *(undefined1 *)((long)plVar4 + 0xa4) = 1;
  puVar3 = PTR_vtable_0067d0b8;
  plVar4[0x11] = -0xc0800000;
  plVar4[0x12] = 0;
  *(undefined4 *)(plVar4 + 0x14) = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  PathMeasure::PathMeasure((PathMeasure *)(plVar4 + 0x1d));
  uVar2 = *(undefined2 *)(this + 0xa4);
  lVar6 = *(long *)(this + 0x98);
  uVar1 = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(plVar4 + 0x14) = *(undefined4 *)(this + 0xa0);
  uVar5 = *(undefined4 *)(this + 0x88);
  *(undefined2 *)((long)plVar4 + 0xa4) = uVar2;
  plVar4[0x13] = lVar6;
  *(undefined4 *)((long)plVar4 + 0x8c) = uVar1;
  *(undefined4 *)(plVar4 + 0x11) = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 003fc5a0  FUN_003fc5a0 =====

void FUN_003fc5a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fc5a4);
  (*pcVar1)();
}


// ===== 003fc5a4  FUN_003fc5a4 =====

void FUN_003fc5a4(void)

{
  return;
}


// ===== 003fc5a8  FUN_003fc5a8 =====

void FUN_003fc5a8(void)

{
  return;
}


// ===== 003fc5ac  rive::IKConstraintBase::clone =====

/* rive::IKConstraintBase::clone() const */

long * __thiscall rive::IKConstraintBase::clone(IKConstraintBase *this)

{
  undefined4 uVar1;
  IKConstraintBase IVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  
  plVar4 = (long *)operator_new(0xb8);
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
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  plVar4[6] = 0;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  puVar3 = PTR_vtable_0067d0c0;
  uVar5 = *(undefined4 *)(this + 0x88);
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  IVar2 = this[0x98];
  plVar4[0x14] = 0;
  *(IKConstraintBase *)(plVar4 + 0x13) = IVar2;
  uVar1 = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)(plVar4 + 0x11) = uVar5;
  *(undefined4 *)((long)plVar4 + 0x9c) = uVar1;
  *(undefined4 *)((long)plVar4 + 0x8c) = *(undefined4 *)(this + 0x8c);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 003fc658  FUN_003fc658 =====

void FUN_003fc658(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fc65c);
  (*pcVar1)();
}


// ===== 003fc65c  FUN_003fc65c =====

void FUN_003fc65c(void)

{
  return;
}


// ===== 003fc660  rive::ListFollowPathConstraintBase::clone =====

/* rive::ListFollowPathConstraintBase::clone() const */

long * __thiscall rive::ListFollowPathConstraintBase::clone(ListFollowPathConstraintBase *this)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  plVar3 = (long *)operator_new(0x118);
  plVar3[0x22] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
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
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
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
  plVar3[6] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x13] = 0;
  *(undefined1 *)((long)plVar3 + 0xa4) = 1;
  puVar2 = PTR_vtable_0067d0b8;
  plVar3[0x11] = -0xc0800000;
  plVar3[0x12] = 0;
  *(undefined4 *)(plVar3 + 0x14) = 0;
  plVar3[0x16] = 0;
  plVar3[0x15] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  PathMeasure::PathMeasure((PathMeasure *)(plVar3 + 0x1d));
  puVar2 = PTR_vtable_0067d0c8;
  plVar3[0x21] = *(long *)(this + 0x108);
  uVar4 = *(undefined4 *)(this + 0xa0);
  *plVar3 = (long)(puVar2 + 0x10);
  uVar1 = *(undefined2 *)(this + 0xa4);
  *(undefined4 *)(plVar3 + 0x14) = uVar4;
  lVar6 = *(long *)(this + 0x98);
  plVar3[0x22] = (long)(puVar2 + 0x118);
  uVar4 = *(undefined4 *)(this + 0x8c);
  plVar3[0x13] = lVar6;
  uVar5 = *(undefined4 *)(this + 0x88);
  *(undefined2 *)((long)plVar3 + 0xa4) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x8c) = uVar4;
  *(undefined4 *)(plVar3 + 0x11) = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fc784  FUN_003fc784 =====

void FUN_003fc784(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1 + 0x1e;
  *param_1 = (long)(PTR_vtable_0067d0b8 + 0x10);
  FUN_003dc3a8(&local_30);
  pvVar2 = (void *)param_1[0x18];
  if (pvVar2 != (void *)0x0) {
    param_1[0x19] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x15];
  if (pvVar2 != (void *)0x0) {
    param_1[0x16] = (long)pvVar2;
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
  if (*(long *)(lVar1 + 0x28) == local_28) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003fc858  FUN_003fc858 =====

void FUN_003fc858(void)

{
  return;
}


// ===== 003fc85c  FUN_003fc85c =====

void FUN_003fc85c(void)

{
  return;
}


// ===== 003fc860  rive::RotationConstraintBase::clone =====

/* rive::RotationConstraintBase::clone() const */

long * __thiscall rive::RotationConstraintBase::clone(RotationConstraintBase *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
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
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  lVar2 = DAT_0024e658;
  plVar4[6] = 0;
  plVar4[0xf] = 0;
  puVar3 = PTR_vtable_0067d0d0;
  plVar4[0x17] = lVar2;
  uVar6 = NEON_fmov(0x3f800000,4);
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *(undefined8 *)((long)plVar4 + 0xcc) = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  *(undefined8 *)((long)plVar4 + 0xd4) = uVar6;
  uVar6 = *(undefined8 *)(this + 0xa4);
  *(undefined4 *)(plVar4 + 0x18) = 0x3f800000;
  uVar1 = *(undefined4 *)(this + 0xa0);
  *(undefined8 *)((long)plVar4 + 0xa4) = uVar6;
  uVar5 = *(undefined4 *)(this + 0xac);
  *(undefined8 *)((long)plVar4 + 0xc4) = 0;
  *(undefined4 *)(plVar4 + 0x14) = uVar1;
  *(undefined4 *)((long)plVar4 + 0xac) = uVar5;
  uVar1 = *(undefined4 *)(this + 0xb0);
  plVar4[0x13] = *(long *)(this + 0x98);
  uVar5 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(plVar4 + 0x16) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(plVar4 + 0x11) = uVar5;
  *(undefined4 *)((long)plVar4 + 0x8c) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 003fc94c  FUN_003fc94c =====

void FUN_003fc94c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fc950);
  (*pcVar1)();
}


// ===== 003fc950  rive::ScaleConstraintBase::clone =====

/* rive::ScaleConstraintBase::clone() const */

long * __thiscall rive::ScaleConstraintBase::clone(ScaleConstraintBase *this)

{
  ScaleConstraintBase SVar1;
  undefined2 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  plVar5 = (long *)operator_new(0xf8);
  plVar5[0x1e] = 0;
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
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  lVar3 = DAT_0024e658;
  plVar5[6] = 0;
  plVar5[0xf] = 0;
  puVar4 = PTR_vtable_0067d0d8;
  plVar5[0x19] = lVar3;
  uVar8 = NEON_fmov(0x3f800000,4);
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  *(undefined8 *)((long)plVar5 + 0xd4) = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  *(undefined8 *)((long)plVar5 + 0xe4) = uVar8;
  uVar8 = *(undefined8 *)(this + 0xb4);
  *(undefined4 *)(plVar5 + 0x1a) = 0x3f800000;
  uVar2 = *(undefined2 *)(this + 0xc0);
  *(undefined8 *)((long)plVar5 + 0xb4) = uVar8;
  uVar6 = *(undefined4 *)(this + 0xbc);
  *(undefined2 *)(plVar5 + 0x18) = uVar2;
  SVar1 = this[0xc2];
  *(undefined4 *)((long)plVar5 + 0xbc) = uVar6;
  uVar8 = *(undefined8 *)(this + 0xa4);
  *(ScaleConstraintBase *)((long)plVar5 + 0xc2) = SVar1;
  uVar6 = *(undefined4 *)(this + 0xa0);
  *(undefined8 *)((long)plVar5 + 0xa4) = uVar8;
  uVar7 = *(undefined4 *)(this + 0xac);
  *(undefined8 *)((long)plVar5 + 0xdc) = 0;
  *(undefined4 *)(plVar5 + 0x14) = uVar6;
  *(undefined4 *)((long)plVar5 + 0xac) = uVar7;
  uVar6 = *(undefined4 *)(this + 0xb0);
  plVar5[0x13] = *(long *)(this + 0x98);
  uVar7 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(plVar5 + 0x16) = uVar6;
  uVar6 = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(plVar5 + 0x11) = uVar7;
  *(undefined4 *)((long)plVar5 + 0x8c) = uVar6;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 003fca60  FUN_003fca60 =====

void FUN_003fca60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fca64);
  (*pcVar1)();
}


// ===== 003fca64  rive::ClampedScrollPhysicsBase::clone =====

/* rive::ClampedScrollPhysicsBase::clone() const */

long * __thiscall rive::ClampedScrollPhysicsBase::clone(ClampedScrollPhysicsBase *this)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(0xb8);
  plVar2[0x16] = 0;
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
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
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  lVar3 = std::__ndk1::chrono::steady_clock::now();
  *plVar2 = (long)(PTR_vtable_0067d0e0 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar2[0x12] = lVar3 / 1000;
  *(undefined4 *)(plVar2 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003fcb2c  FUN_003fcb2c =====

void FUN_003fcb2c(long *param_1)

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


// ===== 003fcb98  rive::ElasticScrollPhysicsBase::clone =====

/* rive::ElasticScrollPhysicsBase::clone() const */

long * __thiscall rive::ElasticScrollPhysicsBase::clone(ElasticScrollPhysicsBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)operator_new(200);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
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
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  lVar4 = std::__ndk1::chrono::steady_clock::now();
  puVar2 = PTR_vtable_0067d0e8;
  uVar5 = *(undefined8 *)(this + 0xac);
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  *(undefined8 *)((long)plVar3 + 0xac) = uVar5;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)plVar3 + 0xb4) = *(undefined4 *)(this + 0xb4);
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0x12] = lVar4 / 1000;
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fcc70  FUN_003fcc70 =====

void FUN_003fcc70(long *param_1)

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


// ===== 003fccdc  rive::ScrollBarConstraintBase::clone =====

/* rive::ScrollBarConstraintBase::clone() const */

long * __thiscall rive::ScrollBarConstraintBase::clone(ScrollBarConstraintBase *this)

{
  undefined4 uVar1;
  ScrollBarConstraintBase SVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  
  plVar5 = (long *)operator_new(0xd8);
  plVar5[0x1a] = 0;
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
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  plVar5[6] = 0;
  puVar4 = PTR_vtable_0067d0f0;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xd] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  uVar3 = DAT_0024e658;
  plVar5[0x12] = (long)(puVar4 + 0xf8);
  *(undefined4 *)((long)plVar5 + 0xac) = 0x3f800000;
  uVar1 = *(undefined4 *)(this + 0x98);
  SVar2 = this[0x9c];
  *(undefined8 *)((long)plVar5 + 0xa4) = uVar3;
  lVar7 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(plVar5 + 0x13) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x8c);
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  *(ScrollBarConstraintBase *)((long)plVar5 + 0x9c) = SVar2;
  plVar5[0x18] = lVar7;
  uVar6 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)plVar5 + 0x8c) = uVar1;
  *(undefined4 *)(plVar5 + 0x11) = uVar6;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 003fcdb4  FUN_003fcdb4 =====

void FUN_003fcdb4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fcdb8);
  (*pcVar1)();
}


// ===== 003fcdb8  rive::ScrollConstraintBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ScrollConstraintBase::clone() const */

long * __thiscall rive::ScrollConstraintBase::clone(ScrollConstraintBase *this)

{
  undefined4 uVar1;
  ScrollConstraintBase SVar2;
  undefined2 uVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  plVar6 = (long *)operator_new(0x150);
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[0x13] = 0;
  plVar6[0x12] = 0;
  plVar6[0x15] = 0;
  plVar6[0x14] = 0;
  plVar6[0x17] = 0;
  plVar6[0x16] = 0;
  plVar6[0x19] = 0;
  plVar6[0x18] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1f] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x21] = 0;
  plVar6[0x20] = 0;
  plVar6[0x23] = 0;
  plVar6[0x22] = 0;
  plVar6[0x25] = 0;
  plVar6[0x24] = 0;
  plVar6[0x27] = 0;
  plVar6[0x26] = 0;
  plVar6[0x29] = 0;
  plVar6[0x28] = 0;
  plVar6[3] = 0;
  *(undefined8 *)(plVar6 + 2) = 0;
  *(undefined4 *)(plVar6 + 1) = 0xffffffff;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  puVar5 = PTR_vtable_0067d108;
  *(undefined2 *)(plVar6 + 0xc) = 0xfffe;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0xd] = 0;
  *plVar6 = (long)(puVar5 + 0x10);
  plVar6[0x12] = (long)(puVar5 + 0x198);
  uVar8 = DAT_0024e658;
  plVar6[0x17] = (long)(puVar5 + 0x1b8);
  plVar6[0x18] = (long)(puVar5 + 0x1d0);
  *(undefined4 *)((long)plVar6 + 0xd4) = 0x3f800000;
  *(undefined8 *)((long)plVar6 + 0xcc) = uVar8;
  lVar9 = NEON_fmov(0x3f800000,4);
  uVar3 = *(undefined2 *)(this + 0xad);
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  plVar6[0x23] = 0;
  plVar6[0x1d] = lVar9;
  lVar4 = _UNK_00281c00;
  lVar9 = _DAT_00281bf8;
  *(undefined2 *)((long)plVar6 + 0xad) = uVar3;
  plVar6[0x22] = lVar4;
  plVar6[0x21] = lVar9;
  plVar6[0x26] = 0;
  plVar6[0x25] = 0;
  plVar6[0x28] = 0;
  plVar6[0x27] = 0;
  lVar9 = *(long *)(this + 0x98);
  *(undefined8 *)((long)plVar6 + 0x145) = 0;
  SVar2 = this[0xa0];
  plVar6[0x13] = lVar9;
  uVar8 = *(undefined8 *)(this + 0xa4);
  *(ScrollConstraintBase *)(plVar6 + 0x14) = SVar2;
  SVar2 = this[0xac];
  *(undefined8 *)((long)plVar6 + 0xa4) = uVar8;
  uVar7 = *(undefined4 *)(this + 0xb0);
  *(ScrollConstraintBase *)((long)plVar6 + 0xac) = SVar2;
  uVar1 = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(plVar6 + 0x16) = uVar7;
  uVar7 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)plVar6 + 0x8c) = uVar1;
  *(undefined4 *)(plVar6 + 0x11) = uVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar6 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(this + 0x28);
  return plVar6;
}


// ===== 003fcef4  FUN_003fcef4 =====

void FUN_003fcef4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fcef8);
  (*pcVar1)();
}


// ===== 003fcef8  FUN_003fcef8 =====

void FUN_003fcef8(void)

{
  return;
}


// ===== 003fcefc  FUN_003fcefc =====

void FUN_003fcefc(void)

{
  return;
}


// ===== 003fcf00  rive::TransformConstraintBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TransformConstraintBase::clone() const */

long * __thiscall rive::TransformConstraintBase::clone(TransformConstraintBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)operator_new(0xd8);
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
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  lVar5 = _UNK_0024deb8;
  lVar4 = _DAT_0024deb0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  puVar2 = PTR_vtable_0067d120;
  plVar3[0x16] = lVar5;
  plVar3[0x15] = lVar4;
  plVar3[0xf] = 0;
  plVar3[0x12] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  lVar5 = _UNK_0024e1d8;
  lVar4 = _DAT_0024e1d0;
  uVar1 = *(undefined4 *)(this + 0x8c);
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1a] = lVar5;
  plVar3[0x19] = lVar4;
  lVar4 = *(long *)(this + 0x98);
  lVar5 = *(long *)(this + 0xa0);
  *(undefined4 *)((long)plVar3 + 0x8c) = uVar1;
  plVar3[0x13] = lVar4;
  plVar3[0x14] = lVar5;
  *(undefined4 *)(plVar3 + 0x11) = *(undefined4 *)(this + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fcfbc  FUN_003fcfbc =====

void FUN_003fcfbc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fcfc0);
  (*pcVar1)();
}


// ===== 003fcfc0  FUN_003fcfc0 =====

void FUN_003fcfc0(void)

{
  return;
}


// ===== 003fcfc4  FUN_003fcfc4 =====

void FUN_003fcfc4(void)

{
  return;
}


// ===== 003fcfc8  rive::TranslationConstraintBase::clone =====

/* rive::TranslationConstraintBase::clone() const */

long * __thiscall rive::TranslationConstraintBase::clone(TranslationConstraintBase *this)

{
  TranslationConstraintBase TVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  
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
  puVar2 = PTR_vtable_0067d128;
  uVar6 = *(undefined8 *)(this + 0xb4);
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *(undefined8 *)((long)plVar3 + 0xb4) = uVar6;
  uVar4 = *(undefined4 *)(this + 0xbc);
  *plVar3 = (long)(puVar2 + 0x10);
  TVar1 = this[0xc0];
  *(undefined4 *)((long)plVar3 + 0xbc) = uVar4;
  uVar6 = *(undefined8 *)(this + 0xa4);
  *(TranslationConstraintBase *)(plVar3 + 0x18) = TVar1;
  TVar1 = this[0xc1];
  *(undefined8 *)((long)plVar3 + 0xa4) = uVar6;
  uVar4 = *(undefined4 *)(this + 0xac);
  *(TranslationConstraintBase *)((long)plVar3 + 0xc1) = TVar1;
  TVar1 = this[0xc2];
  *(undefined4 *)((long)plVar3 + 0xac) = uVar4;
  lVar7 = *(long *)(this + 0x98);
  *(TranslationConstraintBase *)((long)plVar3 + 0xc2) = TVar1;
  *(undefined4 *)(plVar3 + 0x14) = *(undefined4 *)(this + 0xa0);
  uVar4 = *(undefined4 *)(this + 0xb0);
  plVar3[0x13] = lVar7;
  uVar5 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(plVar3 + 0x16) = uVar4;
  uVar4 = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(plVar3 + 0x11) = uVar5;
  *(undefined4 *)((long)plVar3 + 0x8c) = uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 003fd0b4  FUN_003fd0b4 =====

void FUN_003fd0b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fd0b8);
  (*pcVar1)();
}


// ===== 003fd0b8  rive::CustomPropertyBooleanBase::clone =====

/* rive::CustomPropertyBooleanBase::clone() const */

undefined8 * __thiscall rive::CustomPropertyBooleanBase::clone(CustomPropertyBooleanBase *this)

{
  CustomPropertyBooleanBase CVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x90);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined2 *)(puVar2 + 0xc) = 0xfffe;
  *puVar2 = &PTR_FUN_0065e8c8;
  CVar1 = this[0x88];
  puVar2[6] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(CustomPropertyBooleanBase *)(puVar2 + 0x11) = CVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(this + 0x28);
  return puVar2;
}


// ===== 003fd140  FUN_003fd140 =====

void FUN_003fd140(long *param_1)

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


// ===== 003fd1ac  rive::CustomPropertyColorBase::clone =====

/* rive::CustomPropertyColorBase::clone() const */

undefined8 * __thiscall rive::CustomPropertyColorBase::clone(CustomPropertyColorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x90);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined2 *)(puVar2 + 0xc) = 0xfffe;
  *puVar2 = &PTR_FUN_0065ea18;
  uVar1 = *(undefined4 *)(this + 0x88);
  puVar2[6] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(this + 0x28);
  return puVar2;
}


// ===== 003fd234  FUN_003fd234 =====

void FUN_003fd234(long *param_1)

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


// ===== 003fd2a0  rive::CustomPropertyEnumBase::clone =====

/* rive::CustomPropertyEnumBase::clone() const */

undefined8 * __thiscall rive::CustomPropertyEnumBase::clone(CustomPropertyEnumBase *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uVar2 = *(undefined8 *)(this + 0x88);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)(puVar1 + 0xc) = 0xfffe;
  puVar1[6] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_0065eb70;
  puVar1[0x11] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(this + 0x28);
  return puVar1;
}


// ===== 003fd328  FUN_003fd328 =====

void FUN_003fd328(long *param_1)

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


// ===== 003fd394  rive::CustomPropertyGroupBase::clone =====

/* rive::CustomPropertyGroupBase::clone() const */

undefined8 * __thiscall rive::CustomPropertyGroupBase::clone(CustomPropertyGroupBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0);
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)(puVar1 + 0xc) = 0xfffe;
  *puVar1 = &PTR_FUN_0065ecc8;
  puVar1[6] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = &PTR_addProperty_0065ed70;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(this + 0x28);
  return puVar1;
}


// ===== 003fd428  FUN_003fd428 =====

void FUN_003fd428(long *param_1)

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


// ===== 003fd4b4  rive::CustomPropertyNumberBase::clone =====

/* rive::CustomPropertyNumberBase::clone() const */

undefined8 * __thiscall rive::CustomPropertyNumberBase::clone(CustomPropertyNumberBase *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uVar2 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)(puVar1 + 0xc) = 0xfffe;
  puVar1[6] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_0065ee40;
  *(undefined4 *)(puVar1 + 0x11) = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(this + 0x28);
  return puVar1;
}


// ===== 003fd53c  FUN_003fd53c =====

void FUN_003fd53c(long *param_1)

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


// ===== 003fd5a8  rive::CustomPropertyStringBase::clone =====

/* rive::CustomPropertyStringBase::clone() const */

undefined8 * __thiscall rive::CustomPropertyStringBase::clone(CustomPropertyStringBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xa0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined2 *)(puVar1 + 0xc) = 0xfffe;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[6] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_0065eee8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 0x11),(basic_string *)(this + 0x88));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(this + 0x28);
  return puVar1;
}


// ===== 003fd640  FUN_003fd640 =====

void FUN_003fd640(long *param_1)

{
  void *pvVar1;
  
  *param_1 = (long)(PTR_vtable_0067d460 + 0x10);
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    operator_delete((void *)param_1[0x13]);
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


// ===== 003fd6cc  rive::CustomPropertyTriggerBase::clone =====

/* rive::CustomPropertyTriggerBase::clone() const */

undefined8 * __thiscall rive::CustomPropertyTriggerBase::clone(CustomPropertyTriggerBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x98);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined2 *)(puVar2 + 0xc) = 0xfffe;
  *puVar2 = &PTR_FUN_0065f040;
  puVar2[0x12] = &PTR_FUN_0065f0f8;
  uVar1 = *(undefined4 *)(this + 0x88);
  puVar2[6] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(this + 0x28);
  return puVar2;
}


// ===== 003fd75c  FUN_003fd75c =====

void FUN_003fd75c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fd760);
  (*pcVar1)();
}


// ===== 003fd760  rive::BindablePropertyArtboardBase::clone =====

/* rive::BindablePropertyArtboardBase::clone() const */

void __thiscall rive::BindablePropertyArtboardBase::clone(BindablePropertyArtboardBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065f178;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fd79c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd7a0  rive::BindablePropertyAssetBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::BindablePropertyAssetBase::clone() const */

undefined8 * __thiscall rive::BindablePropertyAssetBase::clone(BindablePropertyAssetBase *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  
  puVar8 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar8 + 1) = 0xffffffff;
  *puVar8 = &PTR_FUN_0065f248;
  plVar9 = (long *)operator_new(0x90);
  *(undefined4 *)(plVar9 + 1) = 0xffffffff;
  *(undefined2 *)(plVar9 + 2) = 0;
  *(undefined4 *)(plVar9 + 5) = 0;
  pcVar10 = (char *)operator_new(0x30);
  plVar9[8] = (long)pcVar10;
  lVar6 = _UNK_0024e0e8;
  lVar5 = _DAT_0024e0e0;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar2 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar1 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar10[0x20] = '\0';
  *(undefined4 *)(plVar9 + 9) = 1;
  *(undefined8 *)(pcVar10 + 8) = uVar2;
  *(undefined8 *)pcVar10 = uVar1;
  *(undefined8 *)(pcVar10 + 0x18) = uVar4;
  *(undefined8 *)(pcVar10 + 0x10) = uVar3;
  plVar9[7] = lVar6;
  plVar9[6] = lVar5;
  plVar9[0xb] = 0;
  plVar9[10] = 0;
  plVar9[0xd] = 0;
  plVar9[0xc] = 0;
  plVar9[0xf] = 0;
  plVar9[0xe] = 0;
  puVar7 = PTR_vtable_0067d018;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  puVar8[2] = plVar9;
  *plVar9 = (long)(puVar7 + 0x10);
  *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)(this + 0xc);
  return puVar8;
}


// ===== 003fd860  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd864  rive::BindablePropertyBooleanBase::clone =====

/* rive::BindablePropertyBooleanBase::clone() const */

void __thiscall rive::BindablePropertyBooleanBase::clone(BindablePropertyBooleanBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0065f318;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(BindablePropertyBooleanBase *)((long)puVar1 + 0xc) = this[0xc];
  return;
}


// ===== 003fd8a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd8a8  rive::BindablePropertyColorBase::clone =====

/* rive::BindablePropertyColorBase::clone() const */

void __thiscall rive::BindablePropertyColorBase::clone(BindablePropertyColorBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065f3e8;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fd8e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd8e8  rive::BindablePropertyEnumBase::clone =====

/* rive::BindablePropertyEnumBase::clone() const */

void __thiscall rive::BindablePropertyEnumBase::clone(BindablePropertyEnumBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065f4b8;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fd924  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd928  rive::BindablePropertyIntegerBase::clone =====

/* rive::BindablePropertyIntegerBase::clone() const */

void __thiscall rive::BindablePropertyIntegerBase::clone(BindablePropertyIntegerBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065f588;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fd964  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd968  rive::BindablePropertyListBase::clone =====

/* rive::BindablePropertyListBase::clone() const */

void __thiscall rive::BindablePropertyListBase::clone(BindablePropertyListBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065f658;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fd9a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd9a8  rive::BindablePropertyNumberBase::clone =====

/* rive::BindablePropertyNumberBase::clone() const */

void __thiscall rive::BindablePropertyNumberBase::clone(BindablePropertyNumberBase *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_0065f728;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
  return;
}


// ===== 003fd9e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fd9ec  rive::BindablePropertyStringBase::clone =====

/* rive::BindablePropertyStringBase::clone() const */

undefined8 * __thiscall rive::BindablePropertyStringBase::clone(BindablePropertyStringBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_0065f7f8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003fda44  FUN_003fda44 =====

void FUN_003fda44(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d480 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fda88  rive::BindablePropertyTriggerBase::clone =====

/* rive::BindablePropertyTriggerBase::clone() const */

void __thiscall rive::BindablePropertyTriggerBase::clone(BindablePropertyTriggerBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065f8c8;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fdac4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fdac8  rive::BindablePropertyViewModelBase::clone =====

/* rive::BindablePropertyViewModelBase::clone() const */

void __thiscall rive::BindablePropertyViewModelBase::clone(BindablePropertyViewModelBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined4 *)(this + 0xc);
  *puVar2 = &PTR_FUN_0065f998;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 003fdb08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fdb0c  rive::DataConverterBooleanNegateBase::clone =====

/* rive::DataConverterBooleanNegateBase::clone() const */

DataConverter * __thiscall
rive::DataConverterBooleanNegateBase::clone(DataConverterBooleanNegateBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xe8);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  puVar1 = PTR_vtable_0067d1a8;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xc0;
  *(undefined ***)(this_00 + 0xd8) = &PTR_FUN_0066b048;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fdb90  FUN_003fdb90 =====

void FUN_003fdb90(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fdbb4  rive::DataConverterFormulaBase::clone =====

/* rive::DataConverterFormulaBase::clone() const */

DataConverter * __thiscall rive::DataConverterFormulaBase::clone(DataConverterFormulaBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0x178);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  puVar2 = PTR_vtable_0067d1b0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar2 + 0xd8;
  *(undefined **)(this_00 + 0xe0) = puVar2 + 0x110;
  *(undefined ***)(this_00 + 0xe8) = &PTR_FUN_0066af48;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined4 *)(this_00 + 0x160) = 0x3f800000;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fdc8c  FUN_003fdc8c =====

void FUN_003fdc8c(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fdcb0  rive::DataConverterGroupBase::clone =====

/* rive::DataConverterGroupBase::clone() const */

DataConverter * __thiscall rive::DataConverterGroupBase::clone(DataConverterGroupBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xf0);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  puVar1 = PTR_vtable_0067d1b8;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xc0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fdd30  FUN_003fdd30 =====

void FUN_003fdd30(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fdd54  rive::DataConverterGroupItemBase::clone =====

/* rive::DataConverterGroupItemBase::clone() const */

void __thiscall rive::DataConverterGroupItemBase::clone(DataConverterGroupItemBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x20);
  puVar2 = PTR_vtable_0067d1c0;
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003fdd98  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fdd9c  rive::DataConverterInterpolatorBase::clone =====

/* rive::DataConverterInterpolatorBase::clone() const */

DataConverter * __thiscall
rive::DataConverterInterpolatorBase::clone(DataConverterInterpolatorBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  this_00 = (DataConverter *)operator_new(0x148);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  puVar1 = PTR_vtable_0067d1c8;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  uVar4 = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xd8;
  uVar2 = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)(this_00 + 0xd8) = uVar4;
  uVar3 = *(undefined4 *)(this + 0xe0);
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined4 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined2 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  this_00[0xf8] = (DataConverter)0x0;
  *(undefined8 *)(this_00 + 0xe8) = uVar2;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined4 *)(this_00 + 0xe0) = uVar3;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fde64  FUN_003fde64 =====

void FUN_003fde64(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fde88  FUN_003fde88 =====

void FUN_003fde88(void)

{
  return;
}


// ===== 003fde8c  rive::DataConverterListToLengthBase::clone =====

/* rive::DataConverterListToLengthBase::clone() const */

DataConverter * __thiscall
rive::DataConverterListToLengthBase::clone(DataConverterListToLengthBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xe8);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  puVar1 = PTR_vtable_0067d1d0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xc0;
  *(undefined ***)(this_00 + 0xd8) = &PTR_FUN_0066af48;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fdf10  FUN_003fdf10 =====

void FUN_003fdf10(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fdf34  rive::DataConverterNumberToListBase::clone =====

/* rive::DataConverterNumberToListBase::clone() const */

DataConverter * __thiscall
rive::DataConverterNumberToListBase::clone(DataConverterNumberToListBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0x120);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  puVar2 = PTR_vtable_0067d1d8;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar2 + 200;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined ***)(this_00 + 0xe8) = &PTR_FUN_00660630;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fdfc8  FUN_003fdfc8 =====

void FUN_003fdfc8(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fdfec  FUN_003fdfec =====

void FUN_003fdfec(void)

{
  return;
}


// ===== 003fdff0  rive::DataConverterOperationBase::clone =====

/* rive::DataConverterOperationBase::clone() const */

DataConverter * __thiscall rive::DataConverterOperationBase::clone(DataConverterOperationBase *this)

{
  undefined4 uVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xf0);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined ***)this_00 = &PTR__DataConverter_00660760;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined ***)(this_00 + 0x28) = &PTR_updateDataBinds_00660818;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined ***)(this_00 + 0xe0) = &PTR_FUN_0066af48;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe07c  FUN_003fe07c =====

void FUN_003fe07c(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe0a0  rive::DataConverterOperationValueBase::clone =====

/* rive::DataConverterOperationValueBase::clone() const */

DataConverter * __thiscall
rive::DataConverterOperationValueBase::clone(DataConverterOperationValueBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  undefined4 uVar3;
  
  this_00 = (DataConverter *)operator_new(0xf8);
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  puVar2 = PTR_vtable_0067d1e0;
  *(undefined ***)(this_00 + 0xe0) = &PTR_FUN_0066af48;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  uVar3 = *(undefined4 *)(this + 0xf0);
  *(undefined **)(this_00 + 0x28) = puVar2 + 0xd0;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined4 *)(this_00 + 0xf0) = uVar3;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe13c  FUN_003fe13c =====

void FUN_003fe13c(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe160  FUN_003fe160 =====

void FUN_003fe160(void)

{
  return;
}


// ===== 003fe164  rive::DataConverterOperationViewModelBase::clone =====

/* rive::DataConverterOperationViewModelBase::clone() const */

DataConverter * __thiscall
rive::DataConverterOperationViewModelBase::clone(DataConverterOperationViewModelBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0x110);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  puVar1 = PTR_vtable_0067d1e8;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined ***)(this_00 + 0xe0) = &PTR_FUN_0066af48;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xe0;
  if (this_00 != (DataConverter *)this) {
    FUN_003bf3d0(this_00 + 0xf8,*(long *)(this + 0xf8),*(long *)(this + 0x100),
                 *(long *)(this + 0x100) - *(long *)(this + 0xf8) >> 2);
  }
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe218  FUN_003fe218 =====

void FUN_003fe218(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fe21c);
  (*pcVar1)();
}


// ===== 003fe21c  rive::DataConverterRangeMapperBase::clone =====

/* rive::DataConverterRangeMapperBase::clone() const */

DataConverter * __thiscall
rive::DataConverterRangeMapperBase::clone(DataConverterRangeMapperBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  
  this_00 = (DataConverter *)operator_new(0x110);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  puVar2 = PTR_vtable_0067d1f0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  uVar4 = *(undefined8 *)(this + 0xd8);
  *(undefined **)this_00 = puVar2 + 0x10;
  uVar3 = *(undefined8 *)(this + 0xf8);
  *(undefined **)(this_00 + 0x28) = puVar2 + 0xf8;
  *(undefined8 *)(this_00 + 0xf8) = uVar3;
  *(undefined ***)(this_00 + 0x100) = &PTR_FUN_0066af48;
  uVar1 = *(undefined4 *)(this + 0xe0);
  *(undefined8 *)(this_00 + 0xd8) = uVar4;
  uVar4 = *(undefined8 *)(this + 0xec);
  uVar3 = *(undefined8 *)(this + 0xe4);
  *(undefined4 *)(this_00 + 0xe0) = uVar1;
  *(undefined8 *)(this_00 + 0xec) = uVar4;
  *(undefined8 *)(this_00 + 0xe4) = uVar3;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe2d4  FUN_003fe2d4 =====

void FUN_003fe2d4(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe2f8  FUN_003fe2f8 =====

void FUN_003fe2f8(void)

{
  return;
}


// ===== 003fe2fc  FUN_003fe2fc =====

void FUN_003fe2fc(void)

{
  return;
}


// ===== 003fe300  FUN_003fe300 =====

void FUN_003fe300(void)

{
  return;
}


// ===== 003fe304  FUN_003fe304 =====

void FUN_003fe304(void)

{
  return;
}


// ===== 003fe308  rive::DataConverterRounderBase::clone =====

/* rive::DataConverterRounderBase::clone() const */

DataConverter * __thiscall rive::DataConverterRounderBase::clone(DataConverterRounderBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xf0);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  puVar2 = PTR_vtable_0067d1f8;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar2 + 200;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined ***)(this_00 + 0xe0) = &PTR_FUN_0066af48;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe398  FUN_003fe398 =====

void FUN_003fe398(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe3bc  rive::DataConverterStringPadBase::clone =====

/* rive::DataConverterStringPadBase::clone() const */

DataConverter * __thiscall rive::DataConverterStringPadBase::clone(DataConverterStringPadBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0x120);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  puVar2 = PTR_vtable_0067d200;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined4 *)(this_00 + 0xf8) = 0;
  *(undefined **)(this_00 + 0x28) = puVar2 + 0xd8;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined ***)(this_00 + 0x100) = &PTR_FUN_0066afc8;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0xe0),(basic_string *)(this + 0xe0));
  *(undefined4 *)(this_00 + 0xf8) = *(undefined4 *)(this + 0xf8);
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe480  FUN_003fe480 =====

void FUN_003fe480(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d470 + 0xd8;
  *(undefined **)param_1 = PTR_vtable_0067d470 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003fe4cc  FUN_003fe4cc =====

void FUN_003fe4cc(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d470 + 0xd8;
  *(undefined **)param_1 = PTR_vtable_0067d470 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe51c  FUN_003fe51c =====

void FUN_003fe51c(void)

{
  return;
}


// ===== 003fe520  FUN_003fe520 =====

void FUN_003fe520(void)

{
  return;
}


// ===== 003fe524  FUN_003fe524 =====

void FUN_003fe524(void)

{
  return;
}


// ===== 003fe528  rive::DataConverterStringRemoveZerosBase::clone =====

/* rive::DataConverterStringRemoveZerosBase::clone() const */

DataConverter * __thiscall
rive::DataConverterStringRemoveZerosBase::clone(DataConverterStringRemoveZerosBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xf8);
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  puVar1 = PTR_vtable_0067d208;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xc0;
  *(undefined ***)(this_00 + 0xd8) = &PTR_FUN_0066afc8;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe5b4  FUN_003fe5b4 =====

void FUN_003fe5b4(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe5d8  rive::DataConverterStringTrimBase::clone =====

/* rive::DataConverterStringTrimBase::clone() const */

DataConverter * __thiscall
rive::DataConverterStringTrimBase::clone(DataConverterStringTrimBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0x100);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  puVar2 = PTR_vtable_0067d210;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar2 + 200;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined ***)(this_00 + 0xe0) = &PTR_FUN_0066afc8;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe668  FUN_003fe668 =====

void FUN_003fe668(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe68c  FUN_003fe68c =====

void FUN_003fe68c(void)

{
  return;
}


// ===== 003fe690  rive::DataConverterSystemDegsToRadsBase::clone =====

/* rive::DataConverterSystemDegsToRadsBase::clone() const */

DataConverter * __thiscall
rive::DataConverterSystemDegsToRadsBase::clone(DataConverterSystemDegsToRadsBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  undefined4 uVar3;
  
  this_00 = (DataConverter *)operator_new(0xf8);
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  puVar2 = PTR_vtable_0067d218;
  *(undefined ***)(this_00 + 0xe0) = &PTR_FUN_0066af48;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  uVar3 = *(undefined4 *)(this + 0xf0);
  *(undefined **)(this_00 + 0x28) = puVar2 + 0xd0;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined4 *)(this_00 + 0xf0) = uVar3;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe72c  FUN_003fe72c =====

void FUN_003fe72c(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe750  rive::DataConverterSystemNormalizerBase::clone =====

/* rive::DataConverterSystemNormalizerBase::clone() const */

DataConverter * __thiscall
rive::DataConverterSystemNormalizerBase::clone(DataConverterSystemNormalizerBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  undefined4 uVar3;
  
  this_00 = (DataConverter *)operator_new(0xf8);
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  puVar2 = PTR_vtable_0067d220;
  *(undefined ***)(this_00 + 0xe0) = &PTR_FUN_0066af48;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  uVar3 = *(undefined4 *)(this + 0xf0);
  *(undefined **)(this_00 + 0x28) = puVar2 + 0xd0;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined4 *)(this_00 + 0xf0) = uVar3;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe7ec  FUN_003fe7ec =====

void FUN_003fe7ec(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe810  rive::DataConverterToNumberBase::clone =====

/* rive::DataConverterToNumberBase::clone() const */

DataConverter * __thiscall rive::DataConverterToNumberBase::clone(DataConverterToNumberBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xe8);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  puVar1 = PTR_vtable_0067d228;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xc0;
  *(undefined ***)(this_00 + 0xd8) = &PTR_FUN_0066af48;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe894  FUN_003fe894 =====

void FUN_003fe894(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fe8b8  rive::DataConverterToStringBase::clone =====

/* rive::DataConverterToStringBase::clone() const */

DataConverter * __thiscall rive::DataConverterToStringBase::clone(DataConverterToStringBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  undefined8 uVar2;
  
  this_00 = (DataConverter *)operator_new(0x128);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  puVar1 = PTR_vtable_0067d230;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  uVar2 = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xd8;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined ***)(this_00 + 0xf8) = &PTR_FUN_0066afc8;
  *(undefined8 *)(this_00 + 0xd8) = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0xe0),(basic_string *)(this + 0xe0));
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fe974  FUN_003fe974 =====

void FUN_003fe974(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d478 + 0xd8;
  *(undefined **)param_1 = PTR_vtable_0067d478 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003fe9c0  FUN_003fe9c0 =====

void FUN_003fe9c0(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d478 + 0xd8;
  *(undefined **)param_1 = PTR_vtable_0067d478 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003fea10  FUN_003fea10 =====

void FUN_003fea10(void)

{
  return;
}


// ===== 003fea14  FUN_003fea14 =====

void FUN_003fea14(void)

{
  return;
}


// ===== 003fea18  rive::DataConverterTriggerBase::clone =====

/* rive::DataConverterTriggerBase::clone() const */

DataConverter * __thiscall rive::DataConverterTriggerBase::clone(DataConverterTriggerBase *this)

{
  undefined *puVar1;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0xe8);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  puVar1 = PTR_vtable_0067d238;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar1 + 0xc0;
  *(undefined ***)(this_00 + 0xd8) = &PTR_FUN_00661fa0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 003fea9c  FUN_003fea9c =====

void FUN_003fea9c(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003feac0  rive::FormulaTokenArgumentSeparatorBase::clone =====

/* rive::FormulaTokenArgumentSeparatorBase::clone() const */

void rive::FormulaTokenArgumentSeparatorBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00662040;
  return;
}


// ===== 003feaf0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003feaf4  rive::FormulaTokenBase::clone =====

/* rive::FormulaTokenBase::clone() const */

void rive::FormulaTokenBase::clone(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_0067d240;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


// ===== 003feb28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003feb2c  rive::FormulaTokenFunctionBase::clone =====

/* rive::FormulaTokenFunctionBase::clone() const */

void __thiscall rive::FormulaTokenFunctionBase::clone(FormulaTokenFunctionBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar1 = *(undefined4 *)(this + 0x18);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *puVar2 = &PTR_FUN_006621c8;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  return;
}


// ===== 003feb74  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003feb78  rive::FormulaTokenInputBase::clone =====

/* rive::FormulaTokenInputBase::clone() const */

void rive::FormulaTokenInputBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00662290;
  return;
}


// ===== 003feba8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003febac  rive::FormulaTokenOperationBase::clone =====

/* rive::FormulaTokenOperationBase::clone() const */

void __thiscall rive::FormulaTokenOperationBase::clone(FormulaTokenOperationBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar1 = *(undefined4 *)(this + 0x18);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *puVar2 = &PTR_FUN_00662358;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  return;
}


// ===== 003febf4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003febf8  rive::FormulaTokenParenthesisBase::clone =====

/* rive::FormulaTokenParenthesisBase::clone() const */

void rive::FormulaTokenParenthesisBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00662420;
  return;
}


// ===== 003fec28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fec2c  rive::FormulaTokenParenthesisCloseBase::clone =====

/* rive::FormulaTokenParenthesisCloseBase::clone() const */

void rive::FormulaTokenParenthesisCloseBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_006624e0;
  return;
}


// ===== 003fec5c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fec60  rive::FormulaTokenParenthesisOpenBase::clone =====

/* rive::FormulaTokenParenthesisOpenBase::clone() const */

void rive::FormulaTokenParenthesisOpenBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_006625a0;
  return;
}


// ===== 003fec90  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fec94  rive::FormulaTokenValueBase::clone =====

/* rive::FormulaTokenValueBase::clone() const */

void __thiscall rive::FormulaTokenValueBase::clone(FormulaTokenValueBase *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uVar2 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00662668;
  *(undefined4 *)(puVar1 + 3) = uVar2;
  return;
}


// ===== 003fecdc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fece0  rive::DataBindBase::clone =====

/* rive::DataBindBase::clone() const */

void __thiscall rive::DataBindBase::clone(DataBindBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)operator_new(0x60);
  puVar2 = PTR_vtable_0067cfc8;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  *(undefined4 *)((long)plVar3 + 0x27) = 0;
  plVar3[3] = (long)(puVar2 + 0xb8);
  plVar3[4] = 0;
  uVar1 = *(undefined4 *)(this + 0x14);
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  uVar4 = *(undefined8 *)(this + 0xc);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined1 *)(plVar3 + 10) = 0;
  *(undefined8 *)((long)plVar3 + 0xc) = uVar4;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  return;
}


// ===== 003fed48  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003fed4c  rive::DataBindContextBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::DataBindContextBase::clone() const */

DataBindContextBase * __thiscall rive::DataBindContextBase::clone(DataBindContextBase *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  DataBindContextBase *pDVar4;
  undefined8 uVar5;
  
  pDVar4 = (DataBindContextBase *)operator_new(0x80);
  lVar2 = _DAT_0024e150;
  *(long *)(pDVar4 + 0x10) = _UNK_0024e158;
  *(long *)(pDVar4 + 8) = lVar2;
  *(long *)(pDVar4 + 0x78) = 0;
  *(long *)(pDVar4 + 0x70) = 0;
  *(long *)(pDVar4 + 0x68) = 0;
  *(long *)(pDVar4 + 0x60) = 0;
  *(long *)(pDVar4 + 0x28) = 0;
  *(long *)(pDVar4 + 0x20) = 0;
  *(long *)(pDVar4 + 0x38) = 0;
  *(long *)(pDVar4 + 0x30) = 0;
  *(undefined4 *)(pDVar4 + 0x27) = 0;
  *(long *)(pDVar4 + 0x20) = 0;
  puVar3 = PTR_vtable_0067d248;
  *(long *)(pDVar4 + 0x48) = 0;
  *(long *)(pDVar4 + 0x40) = 0;
  *(long *)(pDVar4 + 0x58) = 0;
  *(long *)(pDVar4 + 0x50) = 0;
  pDVar4[0x50] = (DataBindContextBase)0x0;
  *(long *)(pDVar4 + 0x60) = 0;
  *(undefined **)pDVar4 = puVar3 + 0x10;
  *(undefined **)(pDVar4 + 0x18) = puVar3 + 0xd0;
  *(long *)(pDVar4 + 0x68) = 0;
  *(long *)(pDVar4 + 0x70) = 0;
  pDVar4[0x78] = (DataBindContextBase)0x0;
  if (pDVar4 != this) {
    FUN_003bf3d0();
  }
  uVar5 = *(undefined8 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 0x14);
  pDVar4[0x78] = this[0x78];
  *(undefined8 *)(pDVar4 + 0xc) = uVar5;
  *(undefined4 *)(pDVar4 + 0x14) = uVar1;
  return pDVar4;
}


// ===== 003fedf8  FUN_003fedf8 =====

void FUN_003fedf8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fedfc);
  (*pcVar1)();
}


// ===== 003fedfc  rive::DataBindPathBase::clone =====

/* rive::DataBindPathBase::clone() const */

DataBindPathBase * __thiscall rive::DataBindPathBase::clone(DataBindPathBase *this)

{
  DataBindPathBase DVar1;
  undefined *puVar2;
  DataBindPathBase *pDVar3;
  
  pDVar3 = (DataBindPathBase *)operator_new(0x38);
  *(long *)(pDVar3 + 0x30) = 0;
  puVar2 = PTR_vtable_0067d250;
  pDVar3[0x30] = (DataBindPathBase)0x0;
  *(long *)(pDVar3 + 8) = 0;
  *(long *)pDVar3 = 0;
  *(long *)(pDVar3 + 0x28) = 0;
  *(long *)(pDVar3 + 0x20) = 0;
  *(long *)(pDVar3 + 0x18) = 0;
  *(long *)(pDVar3 + 0x10) = 0;
  *(undefined4 *)(pDVar3 + 8) = 0xffffffff;
  *(undefined **)pDVar3 = puVar2 + 0x10;
  if (pDVar3 != this) {
    FUN_003bf3d0();
  }
  DVar1 = this[0xc];
  pDVar3[0x30] = this[0x30];
  pDVar3[0xc] = DVar1;
  return pDVar3;
}


// ===== 003fee80  FUN_003fee80 =====

void FUN_003fee80(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3fee84);
  (*pcVar1)();
}


// ===== 003fee84  rive::DrawRulesBase::clone =====

/* rive::DrawRulesBase::clone() const */

long * __thiscall rive::DrawRulesBase::clone(DrawRulesBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0xb0);
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  puVar1 = PTR_vtable_0067d258;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x14) = *(undefined4 *)(this + 0xa0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003fef1c  FUN_003fef1c =====

void FUN_003fef1c(long *param_1)

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


// ===== 003fefa8  FUN_003fefa8 =====

void FUN_003fefa8(void)

{
  return;
}


// ===== 003fefac  rive::DrawTargetBase::clone =====

/* rive::DrawTargetBase::clone() const */

long * __thiscall rive::DrawTargetBase::clone(DrawTargetBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(0xa8);
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  puVar1 = PTR_vtable_0067cfa8;
  lVar3 = *(long *)(this + 0x88);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x12] = 0;
  plVar2[0x11] = lVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003ff040  FUN_003ff040 =====

void FUN_003ff040(long *param_1)

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


// ===== 003ff0ac  FUN_003ff0ac =====

void FUN_003ff0ac(void)

{
  return;
}


// ===== 003ff0b0  rive::EventBase::clone =====

/* rive::EventBase::clone() const */

long * __thiscall rive::EventBase::clone(EventBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0xc0);
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
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  puVar1 = PTR_vtable_0067d268;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  plVar2[0x17] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x13] = 0;
  plVar2[0x14] = (long)(puVar1 + 0xc0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 003ff148  FUN_003ff148 =====

void FUN_003ff148(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3ff14c);
  (*pcVar1)();
}


// ===== 003ff14c  rive::FocusDataBase::clone =====

/* rive::FocusDataBase::clone() const */

long * __thiscall rive::FocusDataBase::clone(FocusDataBase *this)

{
  undefined4 uVar1;
  FocusDataBase FVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = (long *)operator_new(0xe8);
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
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  plVar5[6] = 0;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  puVar4 = PTR_vtable_0067d430;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0x14] = 0;
  plVar5[0x13] = 0;
  plVar5[0x12] = (long)(puVar4 + 0x110);
  FVar2 = this[0x88];
  *plVar5 = (long)(puVar4 + 0x10);
  uVar3 = *(undefined2 *)(this + 0x89);
  *(FocusDataBase *)(plVar5 + 0x11) = FVar2;
  uVar1 = *(undefined4 *)(this + 0x8c);
  plVar5[0x16] = 0;
  plVar5[0x15] = 0;
  plVar5[0x18] = 0;
  plVar5[0x17] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x19] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1b] = 0;
  *(undefined2 *)((long)plVar5 + 0x89) = uVar3;
  *(undefined4 *)((long)plVar5 + 0x8c) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 003ff204  FUN_003ff204 =====

void FUN_003ff204(long *param_1)

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


// ===== 003ff270  FUN_003ff270 =====

void FUN_003ff270(void)

{
  return;
}


// ===== 003ff274  FUN_003ff274 =====

void FUN_003ff274(void)

{
  return;
}


// ===== 003ff278  FUN_003ff278 =====

void FUN_003ff278(void)

{
  return;
}


// ===== 003ff27c  FUN_003ff27c =====

void FUN_003ff27c(void)

{
  return;
}


// ===== 003ff280  rive::ForegroundLayoutDrawableBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ForegroundLayoutDrawableBase::clone() const */

long * __thiscall rive::ForegroundLayoutDrawableBase::clone(ForegroundLayoutDrawableBase *this)

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
  puVar4 = PTR_vtable_0067d2e0;
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


// ===== 003ff3b0  FUN_003ff3b0 =====

void FUN_003ff3b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3ff3b4);
  (*pcVar1)();
}


// ===== 003ff3b4  rive::UserInputBase::clone =====

/* rive::UserInputBase::clone() const */

void rive::UserInputBase::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00663718;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  return;
}


// ===== 003ff3e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003ff3e4  rive::NodeBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::NodeBase::clone() const */

long * __thiscall rive::NodeBase::clone(NodeBase *this)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  plVar4 = (long *)operator_new(0x138);
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
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  lVar2 = _UNK_00281c00;
  lVar1 = _DAT_00281bf8;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x11] = 0;
  *(undefined8 *)((long)plVar4 + 0xb4) = 0;
  *(long *)((long)plVar4 + 0xac) = lVar2;
  *(long *)((long)plVar4 + 0xa4) = lVar1;
  plVar4[0x1b] = lVar2;
  plVar4[0x1a] = lVar1;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1c] = 0;
  puVar3 = PTR_vtable_0067d2d8;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  lVar6 = *(long *)(this + 0x110);
  plVar4[0x25] = 0;
  plVar4[0x26] = 0;
  plVar4[0x22] = lVar6;
  plVar4[0x19] = (long)(puVar3 + 0x1e8);
  uVar5 = *(undefined4 *)(this + 0xc4);
  plVar4[0x24] = lVar2;
  plVar4[0x23] = lVar1;
  uVar8 = *(undefined8 *)(this + 0xbc);
  *plVar4 = (long)(puVar3 + 0x10);
  *(undefined8 *)((long)plVar4 + 0xbc) = uVar8;
  uVar7 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar4 + 0xc4) = uVar5;
  *(undefined4 *)(plVar4 + 0x14) = uVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 003ff4d8  FUN_003ff4d8 =====

void FUN_003ff4d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3ff4dc);
  (*pcVar1)();
}


// ===== 003ff4dc  FUN_003ff4dc =====

undefined8 FUN_003ff4dc(void)

{
  return 2;
}


// ===== 003ff4e4  FUN_003ff4e4 =====

bool FUN_003ff4e4(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000000c04U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 003ff520  FUN_003ff520 =====

undefined8 FUN_003ff520(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0xe) {
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
    *(undefined4 *)(param_1 + 0x114) = uVar4;
  }
  else {
    if (param_2 != 0xd) {
      uVar1 = FUN_0035ea44();
      return uVar1;
    }
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
    *(undefined4 *)(param_1 + 0x110) = uVar4;
  }
  param_3[2] = (long)puVar2;
  return 1;
}


// ===== 003ff5b0  FUN_003ff5b0 =====

void FUN_003ff5b0(void)

{
  return;
}


// ===== 003ff5b4  FUN_003ff5b4 =====

void FUN_003ff5b4(void)

{
  return;
}


// ===== 003ff5b8  FUN_003ff5b8 =====

void FUN_003ff5b8(void)

{
  return;
}


// ===== 003ff5bc  FUN_003ff5bc =====

void FUN_003ff5bc(void)

{
  return;
}


// ===== 003ff5c0  FUN_003ff5c0 =====

void FUN_003ff5c0(void)

{
  return;
}


// ===== 003ff5c4  FUN_003ff5c4 =====

void FUN_003ff5c4(void)

{
  return;
}


// ===== 003ff5c8  FUN_003ff5c8 =====

void FUN_003ff5c8(void)

{
  return;
}


// ===== 003ff5cc  FUN_003ff5cc =====

void FUN_003ff5cc(void)

{
  return;
}


// ===== 003ff5d0  FUN_003ff5d0 =====

void FUN_003ff5d0(void)

{
  return;
}


// ===== 003ff5d4  FUN_003ff5d4 =====

void FUN_003ff5d4(void)

{
  return;
}


// ===== 003ff5d8  rive::OpenUrlEventBase::clone =====

/* rive::OpenUrlEventBase::clone() const */

undefined8 * __thiscall rive::OpenUrlEventBase::clone(OpenUrlEventBase *this)

{
  undefined8 *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 0x18);
  puVar1[0x19] = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)(puVar1 + 0xc) = 0xfffe;
  *puVar1 = &PTR_FUN_00663a60;
  puVar1[6] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0xd] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined2 *)this_00 = 0;
  puVar1[0x15] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = &PTR_addProperty_00663b20;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this_00,(basic_string *)(this + 0xc0));
  *(undefined4 *)(puVar1 + 0x1b) = *(undefined4 *)(this + 0xd8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(this + 0x28);
  return puVar1;
}


// ===== 003ff69c  FUN_003ff69c =====

void FUN_003ff69c(void *param_1)

{
  FUN_003cd688();
  operator_delete(param_1);
  return;
}


// ===== 003ff6c0  rive::ContourMeshVertexBase::clone =====

/* rive::ContourMeshVertexBase::clone() const */

undefined8 * __thiscall rive::ContourMeshVertexBase::clone(ContourMeshVertexBase *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0xb8);
  puVar1[0x15] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  uVar2 = *(undefined8 *)(this + 0xb0);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  puVar1[0x16] = uVar2;
  uVar2 = *(undefined8 *)(this + 0xa0);
  *(undefined2 *)(puVar1 + 0xc) = 0xfffe;
  puVar1[6] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_00663c20;
  puVar1[0x14] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(this + 0x28);
  return puVar1;
}


// ===== 003ff75c  FUN_003ff75c =====

void FUN_003ff75c(long *param_1)

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


// ===== 003ff7e8  rive::DataEnumCustomBase::clone =====

/* rive::DataEnumCustomBase::clone() const */

undefined8 * __thiscall rive::DataEnumCustomBase::clone(DataEnumCustomBase *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x58);
  uVar1 = DAT_0024e6c8;
  puVar2[10] = 0;
  puVar2[1] = uVar1;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined2 *)(puVar2 + 5) = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_00663d68;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 8),(basic_string *)(this + 0x40));
  return puVar2;
}


// ===== 003ff850  FUN_003ff850 =====

void FUN_003ff850(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = (long)(PTR_vtable_0067d2a0 + 0x10);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  plVar1 = (long *)param_1[2];
  plVar2 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d298 + 0x10);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 != (void *)0x0) {
    param_1[3] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ff8f8  rive::DataEnumSystemBase::clone =====

/* rive::DataEnumSystemBase::clone() const */

void __thiscall rive::DataEnumSystemBase::clone(DataEnumSystemBase *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x48);
  uVar2 = DAT_0024e6c8;
  uVar1 = *(undefined4 *)(this + 0x40);
  puVar3[8] = 0;
  puVar3[1] = uVar2;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined2 *)(puVar3 + 5) = 0;
  puVar3[4] = 0;
  *puVar3 = &PTR__DataEnum_00663e48;
  *(undefined4 *)(puVar3 + 8) = uVar1;
  return;
}


// ===== 003ff954  FUN_003ff954 =====

void FUN_003ff954(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar1 = (long *)param_1[2];
  plVar2 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d298 + 0x10);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 != (void *)0x0) {
    param_1[3] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ff9dc  rive::ViewModelComponentBase::clone =====

/* rive::ViewModelComponentBase::clone() const */

undefined8 * __thiscall rive::ViewModelComponentBase::clone(ViewModelComponentBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00663eb8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003ffa34  FUN_003ffa34 =====

void FUN_003ffa34(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ffa78  rive::ViewModelPropertyArtboardBase::clone =====

/* rive::ViewModelPropertyArtboardBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertyArtboardBase::clone(ViewModelPropertyArtboardBase *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uVar2 = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00663f98;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003ffad8  FUN_003ffad8 =====

void FUN_003ffad8(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ffb1c  rive::ViewModelPropertyAssetBase::clone =====

/* rive::ViewModelPropertyAssetBase::clone() const */

undefined8 * __thiscall rive::ViewModelPropertyAssetBase::clone(ViewModelPropertyAssetBase *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uVar2 = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00664088;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


