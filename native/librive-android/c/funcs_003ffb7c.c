// ===== 003ffb7c  FUN_003ffb7c =====

void FUN_003ffb7c(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ffbc0  rive::ViewModelPropertyAssetImageBase::clone =====

/* rive::ViewModelPropertyAssetImageBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertyAssetImageBase::clone(ViewModelPropertyAssetImageBase *this)

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
  *puVar1 = &PTR_FUN_00664178;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003ffc20  FUN_003ffc20 =====

void FUN_003ffc20(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ffc64  rive::ViewModelPropertyBooleanBase::clone =====

/* rive::ViewModelPropertyBooleanBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertyBooleanBase::clone(ViewModelPropertyBooleanBase *this)

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
  *puVar1 = &PTR_FUN_00664268;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003ffcc4  FUN_003ffcc4 =====

void FUN_003ffcc4(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ffd08  rive::ViewModelPropertyColorBase::clone =====

/* rive::ViewModelPropertyColorBase::clone() const */

undefined8 * __thiscall rive::ViewModelPropertyColorBase::clone(ViewModelPropertyColorBase *this)

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
  *puVar1 = &PTR_FUN_00664358;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003ffd68  FUN_003ffd68 =====

void FUN_003ffd68(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ffdac  rive::ViewModelPropertyEnumCustomBase::clone =====

/* rive::ViewModelPropertyEnumCustomBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertyEnumCustomBase::clone(ViewModelPropertyEnumCustomBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  uVar3 = *(undefined8 *)(this + 0x28);
  *puVar2 = &PTR_FUN_00664458;
  uVar1 = *(undefined4 *)(this + 0x38);
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = uVar1;
  puVar2[5] = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)(this + 0x10));
  return puVar2;
}


// ===== 003ffe18  FUN_003ffe18 =====

void FUN_003ffe18(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[6];
  *param_1 = (long)(PTR_vtable_0067d290 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xc), iVar1 == 1))
  {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ffe94  rive::ViewModelPropertyEnumSystemBase::clone =====

/* rive::ViewModelPropertyEnumSystemBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertyEnumSystemBase::clone(ViewModelPropertyEnumSystemBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  uVar3 = *(undefined8 *)(this + 0x28);
  *puVar2 = &PTR_FUN_00664568;
  uVar1 = *(undefined4 *)(this + 0x38);
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = uVar1;
  puVar2[5] = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)(this + 0x10));
  return puVar2;
}


// ===== 003fff00  FUN_003fff00 =====

void FUN_003fff00(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[6];
  *param_1 = (long)(PTR_vtable_0067d290 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xc), iVar1 == 1))
  {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003fff7c  rive::ViewModelPropertyListBase::clone =====

/* rive::ViewModelPropertyListBase::clone() const */

undefined8 * __thiscall rive::ViewModelPropertyListBase::clone(ViewModelPropertyListBase *this)

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
  *puVar1 = &PTR_FUN_00664668;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003fffdc  FUN_003fffdc =====

void FUN_003fffdc(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00400020  rive::ViewModelPropertyNumberBase::clone =====

/* rive::ViewModelPropertyNumberBase::clone() const */

undefined8 * __thiscall rive::ViewModelPropertyNumberBase::clone(ViewModelPropertyNumberBase *this)

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
  *puVar1 = &PTR_FUN_00664758;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 00400080  FUN_00400080 =====

void FUN_00400080(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004000c4  rive::ViewModelPropertyStringBase::clone =====

/* rive::ViewModelPropertyStringBase::clone() const */

undefined8 * __thiscall rive::ViewModelPropertyStringBase::clone(ViewModelPropertyStringBase *this)

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
  *puVar1 = &PTR_FUN_00664848;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 00400124  FUN_00400124 =====

void FUN_00400124(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00400168  rive::ViewModelPropertySymbolListIndexBase::clone =====

/* rive::ViewModelPropertySymbolListIndexBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertySymbolListIndexBase::clone(ViewModelPropertySymbolListIndexBase *this)

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
  *puVar1 = &PTR_FUN_00664938;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 004001c8  FUN_004001c8 =====

void FUN_004001c8(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040020c  rive::ViewModelPropertyTriggerBase::clone =====

/* rive::ViewModelPropertyTriggerBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertyTriggerBase::clone(ViewModelPropertyTriggerBase *this)

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
  *puVar1 = &PTR_FUN_00664a28;
  puVar1[5] = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 0040026c  FUN_0040026c =====

void FUN_0040026c(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004002b0  rive::ViewModelPropertyViewModelBase::clone =====

/* rive::ViewModelPropertyViewModelBase::clone() const */

undefined8 * __thiscall
rive::ViewModelPropertyViewModelBase::clone(ViewModelPropertyViewModelBase *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *puVar2 = &PTR_FUN_00664b20;
  uVar1 = *(undefined4 *)(this + 0x30);
  puVar2[5] = 0;
  puVar2[4] = 0;
  uVar3 = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(puVar2 + 6) = uVar1;
  puVar2[5] = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)(this + 0x10));
  return puVar2;
}


// ===== 0040031c  FUN_0040031c =====

void FUN_0040031c(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00400360  rive::ArtboardImporter::ArtboardImporter =====

/* rive::ArtboardImporter::ArtboardImporter(rive::Artboard*) */

void __thiscall rive::ArtboardImporter::ArtboardImporter(ArtboardImporter *this,Artboard *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5a8 + 0x10;
  *(Artboard **)(this + 8) = param_1;
  return;
}


// ===== 00400374  FUN_00400374 =====

void FUN_00400374(void)

{
  return;
}


// ===== 00400378  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0040037c  rive::ArtboardImporter::resolve =====

/* rive::ArtboardImporter::resolve() */

void __thiscall rive::ArtboardImporter::resolve(ArtboardImporter *this)

{
  Artboard::validateObjects(*(Artboard **)(this + 8));
  Artboard::initialize(*(Artboard **)(this + 8));
  return;
}


// ===== 004003a4  rive::ArtboardImporter::readNullObject =====

/* rive::ArtboardImporter::readNullObject() */

undefined8 __thiscall rive::ArtboardImporter::readNullObject(ArtboardImporter *this)

{
  Artboard::addObject(*(Artboard **)(this + 8),(Core *)0x0);
  return 1;
}


// ===== 004003c4  rive::ArtboardImporter::addComponent =====

/* rive::ArtboardImporter::addComponent(rive::Core*) */

void __thiscall rive::ArtboardImporter::addComponent(ArtboardImporter *this,Core *param_1)

{
  Artboard::addObject(*(Artboard **)(this + 8),param_1);
  return;
}


// ===== 004003cc  rive::ArtboardImporter::addAnimation =====

/* rive::ArtboardImporter::addAnimation(rive::LinearAnimation*) */

void __thiscall
rive::ArtboardImporter::addAnimation(ArtboardImporter *this,LinearAnimation *param_1)

{
  Artboard::addAnimation(*(Artboard **)(this + 8),param_1);
  return;
}


// ===== 004003d4  rive::ArtboardImporter::addStateMachine =====

/* rive::ArtboardImporter::addStateMachine(rive::StateMachine*) */

void __thiscall
rive::ArtboardImporter::addStateMachine(ArtboardImporter *this,StateMachine *param_1)

{
  Artboard::addStateMachine(*(Artboard **)(this + 8),param_1);
  return;
}


// ===== 004003dc  rive::ArtboardImporter::addDataBind =====

/* rive::ArtboardImporter::addDataBind(rive::DataBind*) */

void __thiscall rive::ArtboardImporter::addDataBind(ArtboardImporter *this,DataBind *param_1)

{
  DataBindContainer::addDataBind((DataBindContainer *)(*(long *)(this + 8) + 0x9b0),param_1);
  return;
}


// ===== 004003e8  rive::BackboardImporter::BackboardImporter =====

/* rive::BackboardImporter::BackboardImporter(rive::Backboard*) */

void __thiscall
rive::BackboardImporter::BackboardImporter(BackboardImporter *this,Backboard *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d5b0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(Backboard **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  return;
}


// ===== 00400440  FUN_00400440 =====

void FUN_00400440(long *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  pvVar2 = (void *)param_1[0x1c];
  *param_1 = (long)(PTR_vtable_0067d5b0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0x1d] = (long)pvVar2;
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
  pvVar2 = (void *)param_1[0x13];
  if (pvVar2 != (void *)0x0) {
    param_1[0x14] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x10];
  if (pvVar2 != (void *)0x0) {
    param_1[0x11] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xd];
  if (pvVar2 != (void *)0x0) {
    param_1[0xe] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  puVar5 = (undefined8 *)param_1[10];
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0xb];
    puVar3 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -1;
        plVar4 = (long *)*puVar6;
        if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 9), iVar1 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      } while (puVar6 != puVar5);
      puVar3 = (undefined8 *)param_1[10];
    }
    param_1[0xb] = (long)puVar5;
    operator_delete(puVar3);
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)0x0) {
    param_1[8] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  puVar5 = (undefined8 *)param_1[4];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[2];
  param_1[2] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00400578  FUN_00400578 =====

void FUN_00400578(void *param_1)

{
  FUN_00400440();
  operator_delete(param_1);
  return;
}


// ===== 0040059c  rive::BackboardImporter::resolve =====

/* rive::BackboardImporter::resolve() */

undefined8 __thiscall rive::BackboardImporter::resolve(BackboardImporter *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x40);
  for (puVar13 = *(undefined8 **)(this + 0x38); puVar13 != puVar1; puVar13 = puVar13 + 1) {
    plVar12 = (long *)*puVar13;
    iVar5 = (**(code **)(*plVar12 + 0x18))(plVar12);
    uVar6 = *(ulong *)(this + 0x18);
    if (uVar6 != 0) {
      uVar8 = (ulong)iVar5;
      uVar16 = NEON_cnt(uVar6,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar7 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      if (uVar7 < 2) {
        uVar9 = uVar6 - 1 & uVar8;
      }
      else {
        uVar9 = uVar8;
        if (uVar6 <= uVar8) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar8 / uVar6;
          }
          uVar9 = uVar8 - uVar9 * uVar6;
        }
      }
      plVar10 = *(long **)(*(long *)(this + 0x10) + uVar9 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar8) {
            if ((int)plVar10[2] == iVar5) {
              if (plVar10[3] != 0) {
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
              break;
            }
          }
          else {
            if (uVar7 < 2) {
              uVar11 = uVar11 & uVar6 - 1;
            }
            else if (uVar6 <= uVar11) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar11 / uVar6;
              }
              uVar11 = uVar11 - uVar3 * uVar6;
            }
            if (uVar11 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  puVar1 = *(undefined8 **)(this + 0x70);
  for (puVar13 = *(undefined8 **)(this + 0x68); puVar13 != puVar1; puVar13 = puVar13 + 1) {
    plVar12 = (long *)*puVar13;
    uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12);
    if ((uVar6 & 0xffffffff) < (ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3)) {
      plVar10 = *(long **)(*(long *)(this + 0x50) + (uVar6 & 0xffffffff) * 8);
      if (plVar10 != (long *)0x0) {
        FUN_00340fb0(1,plVar10 + 9);
        FUN_00340fb0(1,plVar10 + 9);
      }
      local_50 = plVar10;
      (**(code **)(*plVar12 + 0x10))(plVar12,&local_50);
      plVar12 = local_50;
      if ((local_50 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,local_50 + 9), iVar5 == 1))
      {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
      if ((plVar10 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,plVar10 + 9), iVar5 == 1)) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  puVar1 = *(undefined8 **)(this + 0x88);
  for (puVar13 = *(undefined8 **)(this + 0x80); puVar13 != puVar1; puVar13 = puVar13 + 1) {
    while( true ) {
      plVar12 = (long *)*puVar13;
      uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12,0x207);
      if ((uVar6 & 1) == 0) break;
      if ((ulong)(*(long *)(this + 0xd0) - *(long *)(this + 200) >> 3) <=
          (ulong)*(uint *)((long)plVar12 + 0xdc)) goto LAB_004007d0;
      puVar13 = puVar13 + 1;
      plVar12[0x1f] = *(long *)(*(long *)(this + 200) + (ulong)*(uint *)((long)plVar12 + 0xdc) * 8);
      if (puVar13 == puVar1) goto LAB_0040078c;
    }
    uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12,0x216);
    if ((uVar6 & 1) != 0) {
      if ((ulong)*(uint *)((long)plVar12 + 0xdc) <
          (ulong)(*(long *)(this + 0xd0) - *(long *)(this + 200) >> 3)) {
        plVar12[0x1d] =
             *(long *)(*(long *)(this + 200) + (ulong)*(uint *)((long)plVar12 + 0xdc) * 8);
      }
    }
LAB_004007d0:
  }
LAB_0040078c:
  plVar12 = *(long **)(this + 0xb0);
  plVar10 = *(long **)(this + 0xb8);
  if (plVar12 != plVar10) {
    lVar14 = *(long *)(this + 0x80);
    lVar2 = *(long *)(this + 0x88);
    do {
      uVar6 = (ulong)*(uint *)(*plVar12 + 0xc);
      if (uVar6 < (ulong)(lVar2 - lVar14 >> 3)) {
        *(undefined8 *)(*plVar12 + 0x10) = *(undefined8 *)(lVar14 + uVar6 * 8);
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar10);
  }
  plVar10 = *(long **)(this + 0xa0);
  for (plVar12 = *(long **)(this + 0x98); plVar12 != plVar10; plVar12 = plVar12 + 1) {
    lVar14 = *plVar12;
    uVar6 = (ulong)*(uint *)(lVar14 + 0x14);
    if (uVar6 < (ulong)(*(long *)(this + 0x88) - *(long *)(this + 0x80) >> 3)) {
      uVar16 = (**(code **)(**(long **)(*(long *)(this + 0x80) + uVar6 * 8) + 0x28))();
      *(undefined8 *)(lVar14 + 0x48) = uVar16;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004008d0  FUN_004008d0 =====

undefined8 FUN_004008d0(void)

{
  return 0;
}


// ===== 004008d8  rive::BackboardImporter::addArtboardReferencer =====

/* rive::BackboardImporter::addArtboardReferencer(rive::ArtboardReferencer*) */

void __thiscall
rive::BackboardImporter::addArtboardReferencer(BackboardImporter *this,ArtboardReferencer *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x40);
  if (puVar10 < *(undefined8 **)(this + 0x48)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_00400a18;
  }
  puVar9 = *(undefined8 **)(this + 0x38);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00400a3c();
LAB_00400a38:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x48) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_00400a38;
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
      if (uVar6 == uVar7) goto LAB_00400a04;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x38);
  }
LAB_00400a04:
  *(undefined8 **)(this + 0x38) = puVar4;
  *(undefined8 **)(this + 0x40) = puVar13;
  *(void **)(this + 0x48) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00400a18:
  *(undefined8 **)(this + 0x40) = puVar13;
  return;
}


// ===== 00400a3c  FUN_00400a3c =====

void FUN_00400a3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00400a50  rive::BackboardImporter::addFileAsset =====

/* rive::BackboardImporter::addFileAsset(rive::rcp<rive::FileAsset>) */

void __thiscall rive::BackboardImporter::addFileAsset(BackboardImporter *this,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  void *local_70;
  ulong uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar16 = *(long **)(this + 0x58);
  lVar15 = *param_2;
  if (plVar16 < *(long **)(this + 0x60)) {
    if (lVar15 != 0) {
      FUN_00340fb0(1,lVar15 + 0x48);
    }
    plVar7 = plVar16 + 1;
    *plVar16 = lVar15;
  }
  else {
    plVar7 = (long *)FUN_00400c5c(this + 0x50,lVar15);
  }
  plVar16 = *(long **)(this + 0x50);
  *(long **)(this + 0x58) = plVar7;
  local_50 = 0x3f800000;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  uStack_58 = 0;
  local_60 = (undefined8 *)0x0;
  if (plVar16 != plVar7) {
    uVar17 = 1;
    do {
      plVar14 = (long *)*plVar16;
      if (plVar14 != (long *)0x0) {
        FUN_00340fb0(1,plVar14 + 9);
      }
      uVar1 = *(uint *)(plVar14 + 5);
      uVar8 = (ulong)uVar1;
      if (uStack_68 != 0) {
        uVar19 = NEON_cnt(uStack_68,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        uVar9 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
        if (uVar9 < 2) {
          uVar10 = (ulong)((int)uStack_68 - 1U & uVar1);
        }
        else {
          uVar10 = uVar8;
          if (uStack_68 <= uVar8) {
            uVar10 = 0;
            if (uStack_68 != 0) {
              uVar10 = uVar8 / uStack_68;
            }
            uVar10 = uVar8 - uVar10 * uStack_68;
          }
        }
        plVar11 = *(long **)((long)local_70 + uVar10 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          do {
            uVar12 = plVar11[1];
            if (uVar12 == uVar8) {
              if (*(uint *)(plVar11 + 2) == uVar1) {
                if (uVar1 == uVar17) {
                  if (plVar14 == (long *)0x0) goto LAB_00400ad8;
                }
                else {
                  *(uint *)(plVar14 + 5) = uVar17;
                  (**(code **)(*plVar14 + 0x68))(plVar14);
                }
                goto LAB_00400bb8;
              }
            }
            else {
              if (uVar9 < 2) {
                uVar12 = uVar12 & uStack_68 - 1;
              }
              else if (uStack_68 <= uVar12) {
                uVar2 = 0;
                if (uStack_68 != 0) {
                  uVar2 = uVar12 / uStack_68;
                }
                uVar12 = uVar12 - uVar2 * uStack_68;
              }
              if (uVar12 != uVar10) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      FUN_00400e34(&local_70,uVar8,uVar8);
      if (uVar17 <= *(uint *)(plVar14 + 5)) {
        uVar17 = *(uint *)(plVar14 + 5) + 1;
      }
LAB_00400bb8:
      iVar6 = FUN_00340fe0(0xffffffff,plVar14 + 9);
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
LAB_00400ad8:
      plVar16 = plVar16 + 1;
      pvVar4 = local_70;
      puVar5 = local_60;
    } while (plVar16 != plVar7);
    while (puVar5 != (undefined8 *)0x0) {
      pvVar13 = (void *)*puVar5;
      local_70 = pvVar4;
      operator_delete(puVar5);
      pvVar4 = local_70;
      puVar5 = (undefined8 *)pvVar13;
    }
    local_70 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00400c5c  FUN_00400c5c =====

long * FUN_00400c5c(ulong *param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  plVar11 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  lVar15 = (long)plVar6 - (long)plVar11;
  lVar14 = lVar15 >> 3;
  uVar5 = lVar14 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_003c9ba0();
LAB_00400e30:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar7 = (long)(param_1[2] - (long)plVar11) >> 2;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (0x7ffffffffffffff7 < param_1[2] - (long)plVar11) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar4 = (void *)0x0;
    plVar12 = (long *)(lVar14 << 3);
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_00400e30;
    pvVar4 = operator_new(uVar7 << 3);
    plVar12 = (long *)((long)pvVar4 + lVar14 * 8);
  }
  if (param_2 != 0) {
    FUN_00340fb0(1,param_2 + 0x48);
    plVar11 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
  }
  pvVar1 = (void *)((long)pvVar4 + uVar7 * 8);
  plVar13 = plVar12 + 1;
  *plVar12 = param_2;
  if (plVar6 == plVar11) {
    *param_1 = (ulong)plVar12;
    param_1[1] = (ulong)plVar13;
    param_1[2] = (ulong)pvVar1;
    goto LAB_00400db4;
  }
  uVar5 = (long)plVar6 + (-8 - (long)plVar11);
  if ((uVar5 < 0x78) ||
     (((long *)((long)plVar6 + (-8 - (uVar5 & 0xfffffffffffffff8))) < plVar12 &&
      ((long *)((long)pvVar4 + (lVar15 - (uVar5 & 0xfffffffffffffff8)) + -8) < plVar6)))) {
LAB_00400d38:
    do {
      plVar6 = plVar6 + -1;
      lVar14 = *plVar6;
      *plVar6 = 0;
      plVar12 = plVar12 + -1;
      *plVar12 = lVar14;
    } while (plVar6 != plVar11);
  }
  else {
    plVar9 = plVar12 + -2;
    uVar5 = (uVar5 >> 3) + 1;
    uVar8 = uVar5 & 0x3ffffffffffffffc;
    uVar7 = uVar8;
    plVar2 = plVar6;
    do {
      plVar10 = plVar2 + -4;
      lVar17 = plVar2[-3];
      lVar16 = *plVar10;
      lVar15 = plVar2[-1];
      lVar14 = plVar2[-2];
      uVar7 = uVar7 - 4;
      plVar2[-3] = 0;
      *plVar10 = 0;
      plVar2[-1] = 0;
      plVar2[-2] = 0;
      plVar9[-1] = lVar17;
      plVar9[-2] = lVar16;
      plVar9[1] = lVar15;
      *plVar9 = lVar14;
      plVar9 = plVar9 + -4;
      plVar2 = plVar10;
    } while (uVar7 != 0);
    plVar12 = plVar12 + -uVar8;
    plVar6 = plVar6 + -uVar8;
    if (uVar5 != uVar8) goto LAB_00400d38;
  }
  plVar11 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  *param_1 = (ulong)plVar12;
  param_1[1] = (ulong)plVar13;
  param_1[2] = (ulong)pvVar1;
  while (plVar6 != plVar11) {
    plVar6 = plVar6 + -1;
    plVar12 = (long *)*plVar6;
    if ((plVar12 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar12 + 9), iVar3 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
LAB_00400db4:
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  return plVar13;
}


// ===== 00400e34  FUN_00400e34 =====

void FUN_00400e34(long *param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  
  uVar8 = param_1[1];
  uVar9 = (ulong)param_2;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)((int)uVar8 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar7 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar7 = plVar5[1];
        if (uVar7 == uVar9) {
          if (*(uint *)(plVar5 + 2) == param_2) {
            return;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar8 - 1;
          }
          else if (uVar8 <= uVar7) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar7 / uVar8;
            }
            uVar7 = uVar7 - uVar1 * uVar8;
          }
          if (uVar7 != unaff_x24) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = (long *)operator_new(0x18);
  lVar2 = param_1[3];
  fVar12 = *(float *)(param_1 + 4);
  plVar5[1] = uVar9;
  *(undefined4 *)(plVar5 + 2) = param_3;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar2 + 1))) {
    if (uVar8 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar7 = (ulong)((float)(lVar2 + 1) / fVar12);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__ndk1::__next_prime(uVar6);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_00400f98:
      FUN_004010d0(param_1);
    }
    else if (uVar6 < uVar8) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_00400ffc:
        uVar7 = std::__ndk1::__next_prime(uVar7);
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10)) goto LAB_00400ffc;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar8) goto LAB_00400f98;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar8 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
    }
  }
  lVar2 = *param_1;
  plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    lVar4 = *plVar3;
    *plVar3 = (long)plVar5;
    *plVar5 = lVar4;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar3;
    if (lVar4 == 0) goto LAB_004010b0;
    uVar9 = *(ulong *)(lVar4 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar6 * uVar8;
    }
    plVar3 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_004010b0:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 004010d0  FUN_004010d0 =====

void FUN_004010d0(long *param_1,ulong param_2)

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


// ===== 0040122c  rive::BackboardImporter::addFileAssetReferencer =====

/* rive::BackboardImporter::addFileAssetReferencer(rive::FileAssetReferencer*) */

void __thiscall
rive::BackboardImporter::addFileAssetReferencer
          (BackboardImporter *this,FileAssetReferencer *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x70);
  if (puVar10 < *(undefined8 **)(this + 0x78)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_0040136c;
  }
  puVar9 = *(undefined8 **)(this + 0x68);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00381f4c();
LAB_0040138c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x78) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_0040138c;
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
      if (uVar6 == uVar7) goto LAB_00401358;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x68);
  }
LAB_00401358:
  *(undefined8 **)(this + 0x68) = puVar4;
  *(undefined8 **)(this + 0x70) = puVar13;
  *(void **)(this + 0x78) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_0040136c:
  *(undefined8 **)(this + 0x70) = puVar13;
  return;
}


// ===== 00401390  rive::BackboardImporter::addArtboard =====

/* rive::BackboardImporter::addArtboard(rive::Artboard*) */

void __thiscall rive::BackboardImporter::addArtboard(BackboardImporter *this,Artboard *param_1)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  BackboardImporter *pBVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x22;
  ulong uVar16;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  
  iVar1 = *(int *)(this + 0xf8);
  uVar17 = *(ulong *)(this + 0x18);
  uVar16 = (ulong)iVar1;
  *(int *)(this + 0xf8) = iVar1 + 1;
  if (uVar17 != 0) {
    uVar19 = NEON_cnt(uVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar9 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x22 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x22 = uVar16;
      if (uVar17 <= uVar16) {
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar16 / uVar17;
        }
        unaff_x22 = uVar16 - uVar11 * uVar17;
      }
    }
    puVar8 = *(undefined8 **)(*(long *)(this + 0x10) + unaff_x22 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar8, plVar15 != (long *)0x0)) {
      do {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if ((int)plVar15[2] == iVar1) goto LAB_0040171c;
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar17 - 1;
          }
          else if (uVar17 <= uVar11) {
            uVar6 = 0;
            if (uVar17 != 0) {
              uVar6 = uVar11 / uVar17;
            }
            uVar11 = uVar11 - uVar6 * uVar17;
          }
          if (uVar11 != unaff_x22) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)operator_new(0x20);
  lVar4 = *(long *)(this + 0x28);
  fVar20 = *(float *)(this + 0x30);
  *plVar15 = 0;
  plVar15[1] = uVar16;
  *(int *)(plVar15 + 2) = iVar1;
  plVar15[3] = 0;
  if ((uVar17 == 0) || (fVar20 * (float)uVar17 < (float)(lVar4 + 1))) {
    if (uVar17 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar17 & uVar17 - 1) != 0);
    }
    uVar9 = uVar9 | uVar17 << 1;
    uVar11 = (ulong)((float)(lVar4 + 1) / fVar20);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar17 = *(ulong *)(this + 0x18);
    }
    if (uVar17 < uVar9) {
LAB_00401508:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar3 = operator_new(uVar9 << 3);
      pvVar5 = *(void **)(this + 0x10);
      *(void **)(this + 0x10) = pvVar3;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      uVar17 = 0;
      *(ulong *)(this + 0x18) = uVar9;
      do {
        *(undefined8 *)(*(long *)(this + 0x10) + uVar17 * 8) = 0;
        uVar17 = uVar17 + 1;
      } while (uVar9 != uVar17);
      plVar10 = *(long **)(this + 0x20);
      uVar17 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar19 = NEON_cnt(uVar9,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        uVar6 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
        if (uVar6 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar14 * uVar9;
        }
        *(BackboardImporter **)(*(long *)(this + 0x10) + uVar11 * 8) = this + 0x20;
        plVar13 = (long *)*plVar10;
        if (plVar13 != (long *)0x0) {
          do {
            uVar14 = plVar13[1];
            if (uVar6 < 2) {
              uVar14 = uVar14 & uVar9 - 1;
            }
            else if (uVar9 <= uVar14) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar14 / uVar9;
              }
              uVar14 = uVar14 - uVar2 * uVar9;
            }
            if (uVar14 != uVar11) {
              if (*(long *)(*(long *)(this + 0x10) + uVar14 * 8) == 0) {
                *(long **)(*(long *)(this + 0x10) + uVar14 * 8) = plVar10;
                uVar11 = uVar14;
              }
              else {
                *plVar10 = *plVar13;
                *plVar13 = **(long **)(*(long *)(this + 0x10) + uVar14 * 8);
                **(undefined8 **)(*(long *)(this + 0x10) + uVar14 * 8) = plVar13;
                plVar13 = plVar10;
              }
            }
            plVar10 = plVar13;
            plVar13 = (long *)*plVar10;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar17) {
      uVar11 = (ulong)((float)*(ulong *)(this + 0x28) / *(float *)(this + 0x30));
      if (uVar17 < 3) {
LAB_00401738:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar19 = NEON_cnt(uVar17,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_00401738;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar17) {
        if (uVar9 != 0) goto LAB_00401508;
        pvVar3 = *(void **)(this + 0x10);
        *(undefined8 *)(this + 0x10) = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        *(undefined8 *)(this + 0x18) = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = *(ulong *)(this + 0x18);
      }
    }
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x22 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x22 = uVar16;
      if (uVar17 <= uVar16) {
        uVar9 = 0;
        if (uVar17 != 0) {
          uVar9 = uVar16 / uVar17;
        }
        unaff_x22 = uVar16 - uVar9 * uVar17;
      }
    }
  }
  lVar4 = *(long *)(this + 0x10);
  plVar10 = *(long **)(lVar4 + unaff_x22 * 8);
  if (plVar10 == (long *)0x0) {
    pBVar12 = this + 0x20;
    lVar7 = *(long *)pBVar12;
    *(long **)pBVar12 = plVar15;
    *plVar15 = lVar7;
    *(BackboardImporter **)(lVar4 + unaff_x22 * 8) = pBVar12;
    if (lVar7 == 0) goto LAB_00401710;
    uVar16 = *(ulong *)(lVar7 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar16 = uVar16 & uVar17 - 1;
    }
    else if (uVar17 <= uVar16) {
      uVar9 = 0;
      if (uVar17 != 0) {
        uVar9 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar9 * uVar17;
    }
    plVar10 = (long *)(*(long *)(this + 0x10) + uVar16 * 8);
  }
  else {
    *plVar15 = *plVar10;
  }
  *plVar10 = (long)plVar15;
LAB_00401710:
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
LAB_0040171c:
  plVar15[3] = (long)param_1;
  return;
}


// ===== 00401778  rive::BackboardImporter::addMissingArtboard =====

/* rive::BackboardImporter::addMissingArtboard() */

void __thiscall rive::BackboardImporter::addMissingArtboard(BackboardImporter *this)

{
  *(int *)(this + 0xf8) = *(int *)(this + 0xf8) + 1;
  return;
}


// ===== 00401788  rive::BackboardImporter::addDataConverter =====

/* rive::BackboardImporter::addDataConverter(rive::DataConverter*) */

void __thiscall
rive::BackboardImporter::addDataConverter(BackboardImporter *this,DataConverter *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x88);
  if (puVar10 < *(undefined8 **)(this + 0x90)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004018c8;
  }
  puVar9 = *(undefined8 **)(this + 0x80);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003c9574();
LAB_004018e8:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x90) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004018e8;
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
      if (uVar6 == uVar7) goto LAB_004018b4;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x80);
  }
LAB_004018b4:
  *(undefined8 **)(this + 0x80) = puVar4;
  *(undefined8 **)(this + 0x88) = puVar13;
  *(void **)(this + 0x90) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004018c8:
  *(undefined8 **)(this + 0x88) = puVar13;
  return;
}


// ===== 004018ec  rive::BackboardImporter::addDataConverterReferencer =====

/* rive::BackboardImporter::addDataConverterReferencer(rive::DataBind*) */

void __thiscall
rive::BackboardImporter::addDataConverterReferencer(BackboardImporter *this,DataBind *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xa0);
  if (puVar10 < *(undefined8 **)(this + 0xa8)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_00401a2c;
  }
  puVar9 = *(undefined8 **)(this + 0x98);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00345418();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xa8) - (long)puVar9;
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
      if (uVar6 == uVar7) goto LAB_00401a18;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x98);
  }
LAB_00401a18:
  *(undefined8 **)(this + 0x98) = puVar4;
  *(undefined8 **)(this + 0xa0) = puVar13;
  *(void **)(this + 0xa8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00401a2c:
  *(undefined8 **)(this + 0xa0) = puVar13;
  return;
}


// ===== 00401a50  rive::BackboardImporter::addDataConverterGroupItemReferencer =====

/* rive::BackboardImporter::addDataConverterGroupItemReferencer(rive::DataConverterGroupItem*) */

void __thiscall
rive::BackboardImporter::addDataConverterGroupItemReferencer
          (BackboardImporter *this,DataConverterGroupItem *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xb8);
  if (puVar10 < *(undefined8 **)(this + 0xc0)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_00401b90;
  }
  puVar9 = *(undefined8 **)(this + 0xb0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003f0b70();
LAB_00401bb0:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xc0) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_00401bb0;
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
      if (uVar6 == uVar7) goto LAB_00401b7c;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xb0);
  }
LAB_00401b7c:
  *(undefined8 **)(this + 0xb0) = puVar4;
  *(undefined8 **)(this + 0xb8) = puVar13;
  *(void **)(this + 0xc0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00401b90:
  *(undefined8 **)(this + 0xb8) = puVar13;
  return;
}


// ===== 00401bb4  rive::BackboardImporter::addInterpolator =====

/* rive::BackboardImporter::addInterpolator(rive::KeyFrameInterpolator*) */

void __thiscall
rive::BackboardImporter::addInterpolator(BackboardImporter *this,KeyFrameInterpolator *param_1)

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
  
  (**(code **)(*(long *)param_1 + 0x60))(param_1);
  puVar10 = *(undefined8 **)(this + 0xd0);
  if (puVar10 < *(undefined8 **)(this + 0xd8)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_00401d00;
  }
  puVar9 = *(undefined8 **)(this + 200);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003c9588();
LAB_00401d20:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00401d20;
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
      if (uVar6 == uVar7) goto LAB_00401cec;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 200);
  }
LAB_00401cec:
  *(undefined8 **)(this + 200) = puVar4;
  *(undefined8 **)(this + 0xd0) = puVar13;
  *(void **)(this + 0xd8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00401d00:
  *(undefined8 **)(this + 0xd0) = puVar13;
  return;
}


// ===== 00401d24  rive::BackboardImporter::addPhysics =====

/* rive::BackboardImporter::addPhysics(rive::ScrollPhysics*) */

void __thiscall rive::BackboardImporter::addPhysics(BackboardImporter *this,ScrollPhysics *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xe8);
  if (puVar10 < *(undefined8 **)(this + 0xf0)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_00401e64;
  }
  puVar9 = *(undefined8 **)(this + 0xe0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003affcc();
LAB_00401e84:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xf0) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_00401e84;
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
      if (uVar6 == uVar7) goto LAB_00401e50;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xe0);
  }
LAB_00401e50:
  *(undefined8 **)(this + 0xe0) = puVar4;
  *(undefined8 **)(this + 0xe8) = puVar13;
  *(void **)(this + 0xf0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00401e64:
  *(undefined8 **)(this + 0xe8) = puVar13;
  return;
}


// ===== 00401e88  rive::BackboardImporter::file =====

/* rive::BackboardImporter::file(rive::File*) */

void __thiscall rive::BackboardImporter::file(BackboardImporter *this,File *param_1)

{
  *(File **)(this + 0x100) = param_1;
  return;
}


// ===== 00401e90  rive::BindablePropertyImporter::BindablePropertyImporter =====

/* rive::BindablePropertyImporter::BindablePropertyImporter(rive::BindableProperty*) */

void __thiscall
rive::BindablePropertyImporter::BindablePropertyImporter
          (BindablePropertyImporter *this,BindableProperty *param_1)

{
  *(undefined ***)this = &PTR_FUN_00664c00;
  *(BindableProperty **)(this + 8) = param_1;
  return;
}


// ===== 00401ea0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00401ea4  FUN_00401ea4 =====

undefined8 FUN_00401ea4(void)

{
  return 0;
}


// ===== 00401eac  rive::DataBindPathImporter::DataBindPathImporter =====

/* rive::DataBindPathImporter::DataBindPathImporter(rive::DataBindPath*) */

void __thiscall
rive::DataBindPathImporter::DataBindPathImporter(DataBindPathImporter *this,DataBindPath *param_1)

{
  *(undefined ***)this = &PTR_FUN_00664c30;
  *(DataBindPath **)(this + 8) = param_1;
  return;
}


// ===== 00401ebc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00401ec0  rive::DataBindPathImporter::claim =====

/* rive::DataBindPathImporter::claim() */

undefined8 __thiscall rive::DataBindPathImporter::claim(DataBindPathImporter *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  return uVar1;
}


// ===== 00401ed0  rive::DataConverterFormulaImporter::DataConverterFormulaImporter =====

/* rive::DataConverterFormulaImporter::DataConverterFormulaImporter(rive::DataConverterFormula*) */

void __thiscall
rive::DataConverterFormulaImporter::DataConverterFormulaImporter
          (DataConverterFormulaImporter *this,DataConverterFormula *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5b8 + 0x10;
  *(DataConverterFormula **)(this + 8) = param_1;
  return;
}


// ===== 00401ee4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00401ee8  rive::DataConverterFormulaImporter::resolve =====

/* rive::DataConverterFormulaImporter::resolve() */

undefined8 __thiscall
rive::DataConverterFormulaImporter::resolve(DataConverterFormulaImporter *this)

{
  DataConverterFormula::calculateFormula(*(DataConverterFormula **)(this + 8));
  return 0;
}


// ===== 00401f04  rive::DataConverterGroupImporter::DataConverterGroupImporter =====

/* rive::DataConverterGroupImporter::DataConverterGroupImporter(rive::DataConverterGroup*) */

void __thiscall
rive::DataConverterGroupImporter::DataConverterGroupImporter
          (DataConverterGroupImporter *this,DataConverterGroup *param_1)

{
  *(undefined ***)this = &PTR_FUN_00664c90;
  *(DataConverterGroup **)(this + 8) = param_1;
  return;
}


// ===== 00401f14  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00401f18  rive::EnumImporter::EnumImporter =====

/* rive::EnumImporter::EnumImporter(rive::DataEnum*) */

void __thiscall rive::EnumImporter::EnumImporter(EnumImporter *this,DataEnum *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5c0 + 0x10;
  *(DataEnum **)(this + 8) = param_1;
  return;
}


// ===== 00401f2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00401f30  rive::EnumImporter::resolve =====

/* rive::EnumImporter::resolve() */

undefined8 rive::EnumImporter::resolve(void)

{
  return 0;
}


// ===== 00401f38  rive::EnumImporter::addValue =====

/* rive::EnumImporter::addValue(rive::DataEnumValue*) */

void __thiscall rive::EnumImporter::addValue(EnumImporter *this,DataEnumValue *param_1)

{
  DataEnum::addValue(*(DataEnum **)(this + 8),param_1);
  return;
}


// ===== 00401f40  rive::FileAssetImporter::FileAssetImporter =====

/* rive::FileAssetImporter::FileAssetImporter(rive::FileAsset*, rive::rcp<rive::FileAssetLoader>,
   rive::Factory*) */

void __thiscall
rive::FileAssetImporter::FileAssetImporter
          (FileAssetImporter *this,undefined8 param_1,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_vtable_0067d5c8;
  uVar2 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = param_4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = param_1;
  return;
}


// ===== 00401f64  FUN_00401f64 =====

void FUN_00401f64(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  puVar1 = PTR_vtable_0067d5c8;
  plVar3 = (long *)param_1[4];
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00401fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 00401fdc  FUN_00401fdc =====

void FUN_00401fdc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  puVar1 = PTR_vtable_0067d5c8;
  plVar3 = (long *)param_1[4];
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00402050  rive::FileAssetImporter::resolve =====

/* rive::FileAssetImporter::resolve() */

undefined8 __thiscall rive::FileAssetImporter::resolve(FileAssetImporter *this)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(this + 0x20);
  if (lVar4 == 0) {
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    uVar3 = 0;
    lVar5 = 0;
  }
  else {
    plVar1 = *(long **)(this + 0x10);
    lVar5 = *(long *)(lVar4 + 0x18);
    if (plVar1 == (long *)0x0) {
      if (lVar5 == 0) {
        return 0;
      }
      goto LAB_004020b8;
    }
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
  }
  uVar2 = (**(code **)(*plVar1 + 0x10))
                    (plVar1,*(undefined8 *)(this + 8),uVar3,lVar5,*(undefined8 *)(this + 0x18));
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar4 = *(long *)(this + 0x20);
LAB_004020b8:
  (**(code **)(**(long **)(this + 8) + 0x88))
            (*(long **)(this + 8),lVar4 + 0x10,*(undefined8 *)(this + 0x18));
  return 0;
}


// ===== 004020e0  rive::FileAssetImporter::onFileAssetContents =====

/* rive::FileAssetImporter::onFileAssetContents(std::__ndk1::unique_ptr<rive::FileAssetContents,
   std::__ndk1::default_delete<rive::FileAssetContents> >) */

void __thiscall
rive::FileAssetImporter::onFileAssetContents(FileAssetImporter *this,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00402100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00402108  rive::KeyedObjectImporter::KeyedObjectImporter =====

/* rive::KeyedObjectImporter::KeyedObjectImporter(rive::KeyedObject*) */

void __thiscall
rive::KeyedObjectImporter::KeyedObjectImporter(KeyedObjectImporter *this,KeyedObject *param_1)

{
  *(undefined ***)this = &PTR_FUN_00664cf0;
  *(KeyedObject **)(this + 8) = param_1;
  return;
}


// ===== 00402118  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0040211c  rive::KeyedObjectImporter::addKeyedProperty =====

/* rive::KeyedObjectImporter::addKeyedProperty(std::__ndk1::unique_ptr<rive::KeyedProperty,
   std::__ndk1::default_delete<rive::KeyedProperty> >) */

void __thiscall
rive::KeyedObjectImporter::addKeyedProperty(KeyedObjectImporter *this,undefined8 *param_2)

{
  long lVar1;
  KeyedObject *pKVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long *)*param_2;
  pKVar2 = *(KeyedObject **)(this + 8);
  *param_2 = 0;
  KeyedObject::addKeyedProperty(pKVar2,&local_30);
  if (local_30 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x0040217c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_30 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004021a4  rive::KeyedPropertyImporter::KeyedPropertyImporter =====

/* rive::KeyedPropertyImporter::KeyedPropertyImporter(rive::LinearAnimation*, rive::KeyedProperty*)
    */

void __thiscall
rive::KeyedPropertyImporter::KeyedPropertyImporter
          (KeyedPropertyImporter *this,LinearAnimation *param_1,KeyedProperty *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d5d0;
  *(KeyedProperty **)(this + 0x10) = param_2;
  *(undefined **)this = puVar1 + 0x10;
  *(LinearAnimation **)(this + 8) = param_1;
  return;
}


// ===== 004021bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004021c0  rive::KeyedPropertyImporter::readNullObject =====

/* rive::KeyedPropertyImporter::readNullObject() */

undefined8 rive::KeyedPropertyImporter::readNullObject(void)

{
  return 1;
}


// ===== 004021c8  rive::KeyedPropertyImporter::addKeyFrame =====

/* rive::KeyedPropertyImporter::addKeyFrame(std::__ndk1::unique_ptr<rive::KeyFrame,
   std::__ndk1::default_delete<rive::KeyFrame> >) */

void __thiscall rive::KeyedPropertyImporter::addKeyFrame(KeyedPropertyImporter *this,long *param_2)

{
  KeyedProperty *pKVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pKVar1 = *(KeyedProperty **)(this + 0x10);
  local_30 = (long *)*param_2;
  uVar3 = *(undefined4 *)((long)local_30 + 0xc);
  iVar5 = *(int *)(*(long *)(this + 8) + 0x28);
  *param_2 = 0;
  fVar4 = (float)NEON_ucvtf(uVar3);
  *(float *)(local_30 + 2) = fVar4 / (float)iVar5;
  KeyedProperty::addKeyFrame(pKVar1,&local_30);
  if (local_30 == (long *)0x0) {
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00402240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_30 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402268  rive::LayerStateImporter::LayerStateImporter =====

/* rive::LayerStateImporter::LayerStateImporter(rive::LayerState*) */

void __thiscall
rive::LayerStateImporter::LayerStateImporter(LayerStateImporter *this,LayerState *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5d8 + 0x10;
  *(LayerState **)(this + 8) = param_1;
  return;
}


// ===== 0040227c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402280  rive::LayerStateImporter::resolve =====

/* rive::LayerStateImporter::resolve() */

undefined8 __thiscall rive::LayerStateImporter::resolve(LayerStateImporter *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar2 = (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),0x48);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(this + 8);
    puVar1 = *(undefined8 **)(lVar4 + 0x50);
    for (puVar5 = *(undefined8 **)(lVar4 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      plVar3 = (long *)*puVar5;
      uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,0x4e);
      if ((uVar2 & 1) != 0) {
        if ((ulong)*(uint *)(plVar3 + 0x12) <
            (ulong)(*(long *)(lVar4 + 0x68) - *(long *)(lVar4 + 0x60) >> 3)) {
          plVar3[0x13] = *(long *)(*(long *)(lVar4 + 0x60) + (ulong)*(uint *)(plVar3 + 0x12) * 8);
        }
      }
    }
  }
  return 0;
}


// ===== 00402314  rive::LayerStateImporter::addTransition =====

/* rive::LayerStateImporter::addTransition(rive::StateTransition*) */

void __thiscall
rive::LayerStateImporter::addTransition(LayerStateImporter *this,StateTransition *param_1)

{
  LayerState::addTransition(*(LayerState **)(this + 8),param_1);
  return;
}


// ===== 0040231c  rive::LayerStateImporter::addBlendAnimation =====

/* rive::LayerStateImporter::addBlendAnimation(rive::BlendAnimation*) */

uint __thiscall
rive::LayerStateImporter::addBlendAnimation(LayerStateImporter *this,BlendAnimation *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),0x48);
  if ((uVar1 & 1) != 0) {
    BlendState::addAnimation(*(BlendState **)(this + 8),param_1);
  }
  return uVar1 & 1;
}


// ===== 00402370  rive::LinearAnimationImporter::LinearAnimationImporter =====

/* rive::LinearAnimationImporter::LinearAnimationImporter(rive::LinearAnimation*) */

void __thiscall
rive::LinearAnimationImporter::LinearAnimationImporter
          (LinearAnimationImporter *this,LinearAnimation *param_1)

{
  *(undefined ***)this = &PTR_FUN_00664d80;
  *(LinearAnimation **)(this + 8) = param_1;
  return;
}


// ===== 00402380  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402384  rive::LinearAnimationImporter::addKeyedObject =====

/* rive::LinearAnimationImporter::addKeyedObject(std::__ndk1::unique_ptr<rive::KeyedObject,
   std::__ndk1::default_delete<rive::KeyedObject> >) */

void __thiscall
rive::LinearAnimationImporter::addKeyedObject(LinearAnimationImporter *this,undefined8 *param_2)

{
  long lVar1;
  LinearAnimation *pLVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long *)*param_2;
  pLVar2 = *(LinearAnimation **)(this + 8);
  *param_2 = 0;
  LinearAnimation::addKeyedObject(pLVar2,&local_30);
  if (local_30 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x004023e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_30 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040240c  rive::ListenerInputTypeKeyboardImporter::ListenerInputTypeKeyboardImporter =====

/* rive::ListenerInputTypeKeyboardImporter::ListenerInputTypeKeyboardImporter(rive::ListenerInputTypeKeyboard*)
    */

void __thiscall
rive::ListenerInputTypeKeyboardImporter::ListenerInputTypeKeyboardImporter
          (ListenerInputTypeKeyboardImporter *this,ListenerInputTypeKeyboard *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5e0 + 0x10;
  *(ListenerInputTypeKeyboard **)(this + 8) = param_1;
  return;
}


// ===== 00402420  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402424  rive::ListenerInputTypeKeyboardImporter::resolve =====

/* rive::ListenerInputTypeKeyboardImporter::resolve() */

undefined8 rive::ListenerInputTypeKeyboardImporter::resolve(void)

{
  return 0;
}


// ===== 0040242c  rive::ListenerInputTypeSemanticImporter::ListenerInputTypeSemanticImporter =====

/* rive::ListenerInputTypeSemanticImporter::ListenerInputTypeSemanticImporter(rive::ListenerInputTypeSemantic*)
    */

void __thiscall
rive::ListenerInputTypeSemanticImporter::ListenerInputTypeSemanticImporter
          (ListenerInputTypeSemanticImporter *this,ListenerInputTypeSemantic *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5e8 + 0x10;
  *(ListenerInputTypeSemantic **)(this + 8) = param_1;
  return;
}


// ===== 00402440  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402444  rive::ListenerInputTypeSemanticImporter::resolve =====

/* rive::ListenerInputTypeSemanticImporter::resolve() */

undefined8 rive::ListenerInputTypeSemanticImporter::resolve(void)

{
  return 0;
}


// ===== 0040244c  rive::ScriptedObjectImporter::ScriptedObjectImporter =====

/* rive::ScriptedObjectImporter::ScriptedObjectImporter(rive::ScriptedObject*) */

void __thiscall
rive::ScriptedObjectImporter::ScriptedObjectImporter
          (ScriptedObjectImporter *this,ScriptedObject *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5f0 + 0x10;
  *(ScriptedObject **)(this + 8) = param_1;
  return;
}


// ===== 00402460  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402464  rive::ScriptedObjectImporter::resolve =====

/* rive::ScriptedObjectImporter::resolve() */

undefined8 rive::ScriptedObjectImporter::resolve(void)

{
  return 0;
}


// ===== 0040246c  rive::ScriptedObjectImporter::addInput =====

/* rive::ScriptedObjectImporter::addInput(rive::CustomProperty*) */

void __thiscall
rive::ScriptedObjectImporter::addInput(ScriptedObjectImporter *this,CustomProperty *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  uVar1 = (uVar1 & 0xffff) - 0x263;
  if (uVar1 < 0x15 && (1 << (ulong)(uVar1 & 0x1f) & 0x118483U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004024d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(this + 8) + 0x10))
              ((undefined8 *)(*(long *)(this + 8) + 0x10),param_1);
    return;
  }
  return;
}


// ===== 004024e0  rive::StateMachineImporter::StateMachineImporter =====

/* rive::StateMachineImporter::StateMachineImporter(rive::StateMachine*) */

void __thiscall
rive::StateMachineImporter::StateMachineImporter(StateMachineImporter *this,StateMachine *param_1)

{
  *(undefined **)this = PTR_vtable_0067d5f8 + 0x10;
  *(StateMachine **)(this + 8) = param_1;
  return;
}


// ===== 004024f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004024f8  rive::StateMachineImporter::resolve =====

/* rive::StateMachineImporter::resolve() */

undefined8 rive::StateMachineImporter::resolve(void)

{
  return 0;
}


// ===== 00402500  rive::StateMachineImporter::readNullObject =====

/* rive::StateMachineImporter::readNullObject() */

undefined8 __thiscall rive::StateMachineImporter::readNullObject(StateMachineImporter *this)

{
  long lVar1;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long *)0x0;
  StateMachine::addInput(*(StateMachine **)(this + 8),&local_30);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402568  rive::StateMachineImporter::addLayer =====

/* rive::StateMachineImporter::addLayer(std::__ndk1::unique_ptr<rive::StateMachineLayer,
   std::__ndk1::default_delete<rive::StateMachineLayer> >) */

void __thiscall rive::StateMachineImporter::addLayer(StateMachineImporter *this,undefined8 *param_2)

{
  long lVar1;
  StateMachine *pSVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long *)*param_2;
  pSVar2 = *(StateMachine **)(this + 8);
  *param_2 = 0;
  StateMachine::addLayer(pSVar2,&local_30);
  if (local_30 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x004025c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_30 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004025f0  rive::StateMachineImporter::addInput =====

/* rive::StateMachineImporter::addInput(std::__ndk1::unique_ptr<rive::StateMachineInput,
   std::__ndk1::default_delete<rive::StateMachineInput> >) */

void __thiscall rive::StateMachineImporter::addInput(StateMachineImporter *this,undefined8 *param_2)

{
  long lVar1;
  StateMachine *pSVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long *)*param_2;
  pSVar2 = *(StateMachine **)(this + 8);
  *param_2 = 0;
  StateMachine::addInput(pSVar2,&local_30);
  if (local_30 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00402650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_30 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402678  rive::StateMachineImporter::addListener =====

/* rive::StateMachineImporter::addListener(std::__ndk1::unique_ptr<rive::StateMachineListener,
   std::__ndk1::default_delete<rive::StateMachineListener> >) */

void __thiscall
rive::StateMachineImporter::addListener(StateMachineImporter *this,undefined8 *param_2)

{
  long lVar1;
  StateMachine *pSVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long *)*param_2;
  pSVar2 = *(StateMachine **)(this + 8);
  *param_2 = 0;
  StateMachine::addListener(pSVar2,&local_30);
  if (local_30 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x004026d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_30 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402700  rive::StateMachineImporter::addDataBind =====

/* rive::StateMachineImporter::addDataBind(std::__ndk1::unique_ptr<rive::DataBind,
   std::__ndk1::default_delete<rive::DataBind> >) */

void __thiscall
rive::StateMachineImporter::addDataBind(StateMachineImporter *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 8);
  local_30 = (long *)*param_2;
  *param_2 = 0;
  puVar1 = *(undefined8 **)(lVar4 + 0x78);
  if (puVar1 < *(undefined8 **)(lVar4 + 0x80)) {
    *puVar1 = local_30;
    *(undefined8 **)(lVar4 + 0x78) = puVar1 + 1;
  }
  else {
    uVar3 = FUN_003516cc(lVar4 + 0x70,&local_30);
    *(undefined8 *)(lVar4 + 0x78) = uVar3;
    if (local_30 != (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00402784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*local_30 + 8))(local_30);
        return;
      }
      goto LAB_004027a8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
LAB_004027a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004027ac  rive::StateMachineImporter::addScriptedObject =====

/* rive::StateMachineImporter::addScriptedObject(rive::ScriptedObject*) */

void __thiscall
rive::StateMachineImporter::addScriptedObject(StateMachineImporter *this,ScriptedObject *param_1)

{
  StateMachine::addScriptedObject(*(StateMachine **)(this + 8),param_1);
  return;
}


// ===== 004027b4  rive::StateMachineLayerComponent::~StateMachineLayerComponent =====

/* rive::StateMachineLayerComponent::~StateMachineLayerComponent() */

void __thiscall
rive::StateMachineLayerComponent::~StateMachineLayerComponent(StateMachineLayerComponent *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x10);
  plVar1 = *(long **)(this + 0x18);
  *(undefined **)this = PTR_vtable_0067d600 + 0x10;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x28);
  if (plVar3 != (long *)0x0) {
    plVar4 = *(long **)(this + 0x30);
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
      plVar1 = *(long **)(this + 0x28);
    }
    *(long **)(this + 0x30) = plVar3;
    operator_delete(plVar1);
  }
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00402880  rive::StateMachineLayerComponent::~StateMachineLayerComponent =====

/* rive::StateMachineLayerComponent::~StateMachineLayerComponent() */

void __thiscall
rive::StateMachineLayerComponent::~StateMachineLayerComponent(StateMachineLayerComponent *this)

{
  ~StateMachineLayerComponent(this);
  operator_delete(this);
  return;
}


// ===== 004028a4  FUN_004028a4 =====

undefined8 FUN_004028a4(void)

{
  return 0x42;
}


// ===== 004028ac  FUN_004028ac =====

bool FUN_004028ac(undefined8 param_1,short param_2)

{
  return param_2 == 0x42;
}


// ===== 004028bc  FUN_004028bc =====

undefined8 FUN_004028bc(void)

{
  return 0;
}


// ===== 004028c4  rive::StateMachineLayerComponentImporter::StateMachineLayerComponentImporter =====

/* rive::StateMachineLayerComponentImporter::StateMachineLayerComponentImporter(rive::StateMachineLayerComponent*)
    */

void __thiscall
rive::StateMachineLayerComponentImporter::StateMachineLayerComponentImporter
          (StateMachineLayerComponentImporter *this,StateMachineLayerComponent *param_1)

{
  *(undefined ***)this = &PTR_FUN_00664ed0;
  *(StateMachineLayerComponent **)(this + 8) = param_1;
  return;
}


// ===== 004028d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004028d8  rive::StateMachineLayerComponentImporter::addFireEvent =====

/* rive::StateMachineLayerComponentImporter::addFireEvent(rive::StateMachineFireAction*) */

void __thiscall
rive::StateMachineLayerComponentImporter::addFireEvent
          (StateMachineLayerComponentImporter *this,StateMachineFireAction *param_1)

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
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar11 = *(long *)(this + 8);
  puVar10 = *(undefined8 **)(lVar11 + 0x18);
  if (puVar10 < *(undefined8 **)(lVar11 + 0x20)) {
    puVar14 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_00402a18;
  }
  puVar9 = *(undefined8 **)(lVar11 + 0x10);
  lVar13 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar13 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00402a3c();
LAB_00402a38:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(lVar11 + 0x20) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_00402a38;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar13 * 8);
  puVar14 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar10 - (long)puVar9) - 8;
    puVar12 = puVar10;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar10 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar12 = puVar10 + -uVar7;
      puVar10 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar17 = puVar8[-2];
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar17;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar10 = puVar9;
      if (uVar6 == uVar7) goto LAB_00402a04;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar12;
    } while (puVar12 != puVar9);
    puVar10 = *(undefined8 **)(lVar11 + 0x10);
  }
LAB_00402a04:
  *(undefined8 **)(lVar11 + 0x10) = puVar4;
  *(undefined8 **)(lVar11 + 0x18) = puVar14;
  *(void **)(lVar11 + 0x20) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00402a18:
  *(undefined8 **)(lVar11 + 0x18) = puVar14;
  return;
}


// ===== 00402a3c  FUN_00402a3c =====

void FUN_00402a3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00402a50  rive::StateMachineLayerComponentImporter::addListenerAction =====

/* rive::StateMachineLayerComponentImporter::addListenerAction(std::__ndk1::unique_ptr<rive::ListenerAction,
   std::__ndk1::default_delete<rive::ListenerAction> >) */

void __thiscall
rive::StateMachineLayerComponentImporter::addListenerAction
          (StateMachineLayerComponentImporter *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 8);
  puVar1 = *(undefined8 **)(lVar4 + 0x30);
  if (puVar1 < *(undefined8 **)(lVar4 + 0x38)) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = (undefined8 *)FUN_0035a370(lVar4 + 0x28);
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar2;
  return;
}


// ===== 00402a94  rive::StateMachineLayerImporter::StateMachineLayerImporter =====

/* rive::StateMachineLayerImporter::StateMachineLayerImporter(rive::StateMachineLayer*,
   rive::Artboard const*) */

void __thiscall
rive::StateMachineLayerImporter::StateMachineLayerImporter
          (StateMachineLayerImporter *this,StateMachineLayer *param_1,Artboard *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d608;
  *(Artboard **)(this + 0x10) = param_2;
  *(undefined **)this = puVar1 + 0x10;
  *(StateMachineLayer **)(this + 8) = param_1;
  return;
}


// ===== 00402aac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402ab0  rive::StateMachineLayerImporter::resolve =====

/* rive::StateMachineLayerImporter::resolve() */

undefined8 __thiscall rive::StateMachineLayerImporter::resolve(StateMachineLayerImporter *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = *(undefined8 **)(*(long *)(this + 8) + 0x28);
  puVar2 = *(undefined8 **)(*(long *)(this + 8) + 0x30);
  do {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar8 = (long *)*puVar1;
    uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,0x3d);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(this + 0x10) + 0xa88);
      if (((ulong)*(uint *)((long)plVar8 + 100) <
           (ulong)(*(long *)(*(long *)(this + 0x10) + 0xa90) - lVar5 >> 3)) &&
         (lVar5 = *(long *)(lVar5 + (ulong)*(uint *)((long)plVar8 + 100) * 8), plVar8[0xd] = lVar5,
         lVar5 == 0)) {
        return 1;
      }
    }
    plVar6 = (long *)plVar8[9];
    plVar8 = (long *)plVar8[10];
    if (plVar6 != plVar8) {
      lVar5 = *(long *)(*(long *)(this + 8) + 0x28);
      lVar3 = *(long *)(*(long *)(this + 8) + 0x30);
      do {
        lVar7 = *plVar6;
        uVar4 = (ulong)*(uint *)(lVar7 + 0x40);
        if ((ulong)(lVar3 - lVar5 >> 3) <= uVar4) {
          return 2;
        }
        plVar6 = plVar6 + 1;
        *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(lVar5 + uVar4 * 8);
      } while (plVar6 != plVar8);
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


// ===== 00402b90  rive::StateMachineLayerImporter::readNullObject =====

/* rive::StateMachineLayerImporter::readNullObject() */

undefined8 __thiscall
rive::StateMachineLayerImporter::readNullObject(StateMachineLayerImporter *this)

{
  undefined *puVar1;
  LayerState *pLVar2;
  StateMachineLayer *this_00;
  
  pLVar2 = (LayerState *)operator_new(0x60);
  *(undefined8 *)(pLVar2 + 0x48) = 0;
  *(undefined8 *)(pLVar2 + 0x40) = 0;
  *(undefined8 *)(pLVar2 + 8) = 0;
  *(undefined8 *)pLVar2 = 0;
  *(undefined8 *)(pLVar2 + 0x18) = 0;
  *(undefined8 *)(pLVar2 + 0x10) = 0;
  *(undefined4 *)(pLVar2 + 8) = 0xffffffff;
  puVar1 = PTR_vtable_0067cdd0;
  *(undefined8 *)(pLVar2 + 0x28) = 0;
  *(undefined8 *)(pLVar2 + 0x20) = 0;
  *(undefined8 *)(pLVar2 + 0x38) = 0;
  *(undefined8 *)(pLVar2 + 0x30) = 0;
  *(undefined4 *)(pLVar2 + 0x40) = 0;
  *(undefined8 *)(pLVar2 + 0x58) = 0;
  *(undefined **)pLVar2 = puVar1 + 0x10;
  this_00 = *(StateMachineLayer **)(this + 8);
  *(undefined8 *)(pLVar2 + 0x48) = 0;
  *(undefined8 *)(pLVar2 + 0x50) = 0;
  StateMachineLayer::addState(this_00,pLVar2);
  return 1;
}


// ===== 00402bf8  rive::StateMachineLayerImporter::addState =====

/* rive::StateMachineLayerImporter::addState(rive::LayerState*) */

void __thiscall
rive::StateMachineLayerImporter::addState(StateMachineLayerImporter *this,LayerState *param_1)

{
  StateMachineLayer::addState(*(StateMachineLayer **)(this + 8),param_1);
  return;
}


// ===== 00402c00  rive::StateMachineListenerImporter::StateMachineListenerImporter =====

/* rive::StateMachineListenerImporter::StateMachineListenerImporter(rive::StateMachineListener*) */

void __thiscall
rive::StateMachineListenerImporter::StateMachineListenerImporter
          (StateMachineListenerImporter *this,StateMachineListener *param_1)

{
  *(undefined **)this = PTR_vtable_0067d610 + 0x10;
  *(StateMachineListener **)(this + 8) = param_1;
  return;
}


// ===== 00402c14  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402c18  rive::StateMachineListenerImporter::resolve =====

/* rive::StateMachineListenerImporter::resolve() */

undefined8 rive::StateMachineListenerImporter::resolve(void)

{
  return 0;
}


// ===== 00402c20  rive::StateMachineListenerImporter::addAction =====

/* rive::StateMachineListenerImporter::addAction(std::__ndk1::unique_ptr<rive::ListenerAction,
   std::__ndk1::default_delete<rive::ListenerAction> >) */

void __thiscall
rive::StateMachineListenerImporter::addAction
          (StateMachineListenerImporter *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 8);
  local_30 = (long *)*param_2;
  *param_2 = 0;
  puVar1 = *(undefined8 **)(lVar4 + 0x38);
  if (puVar1 < *(undefined8 **)(lVar4 + 0x40)) {
    *puVar1 = local_30;
    *(undefined8 **)(lVar4 + 0x38) = puVar1 + 1;
  }
  else {
    uVar3 = FUN_0035a370(lVar4 + 0x30,&local_30);
    *(undefined8 *)(lVar4 + 0x38) = uVar3;
    if (local_30 != (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00402ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*local_30 + 8))(local_30);
        return;
      }
      goto LAB_00402cc8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
LAB_00402cc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402ccc  rive::StateMachineListenerImporter::addListenerInputType =====

/* rive::StateMachineListenerImporter::addListenerInputType(std::__ndk1::unique_ptr<rive::ListenerInputType,
   std::__ndk1::default_delete<rive::ListenerInputType> >) */

void __thiscall
rive::StateMachineListenerImporter::addListenerInputType
          (StateMachineListenerImporter *this,undefined8 *param_2)

{
  long lVar1;
  StateMachineListener *pSVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long *)*param_2;
  pSVar2 = *(StateMachineListener **)(this + 8);
  *param_2 = 0;
  StateMachineListener::addListenerInputType(pSVar2,&local_30);
  if (local_30 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00402d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_30 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402d54  rive::StateTransitionImporter::StateTransitionImporter =====

/* rive::StateTransitionImporter::StateTransitionImporter(rive::StateTransition*) */

void __thiscall
rive::StateTransitionImporter::StateTransitionImporter
          (StateTransitionImporter *this,StateTransition *param_1)

{
  *(undefined **)this = PTR_vtable_0067d618 + 0x10;
  *(StateTransition **)(this + 8) = param_1;
  return;
}


// ===== 00402d68  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00402d6c  rive::StateTransitionImporter::resolve =====

/* rive::StateTransitionImporter::resolve() */

undefined8 rive::StateTransitionImporter::resolve(void)

{
  return 0;
}


// ===== 00402d74  rive::StateTransitionImporter::addCondition =====

/* rive::StateTransitionImporter::addCondition(rive::TransitionCondition*) */

void __thiscall
rive::StateTransitionImporter::addCondition
          (StateTransitionImporter *this,TransitionCondition *param_1)

{
  StateTransition::addCondition(*(StateTransition **)(this + 8),param_1);
  return;
}


// ===== 00402d7c  rive::TextAssetImporter::TextAssetImporter =====

/* rive::TextAssetImporter::TextAssetImporter(rive::TextAsset*, rive::rcp<rive::FileAssetLoader>,
   rive::Factory*, std::__ndk1::vector<rive::InBandContent,
   std::__ndk1::allocator<rive::InBandContent> >*) */

void __thiscall
rive::TextAssetImporter::TextAssetImporter
          (TextAssetImporter *this,undefined8 param_1,long *param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    FUN_00340fb0(1,lVar2 + 8);
  }
  puVar1 = PTR_vtable_0067d620;
  *(long *)(this + 0x10) = lVar2;
  *(undefined8 *)(this + 0x18) = param_4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = param_5;
  return;
}


// ===== 00402de0  FUN_00402de0 =====

void FUN_00402de0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  puVar1 = PTR_vtable_0067d5c8;
  plVar3 = (long *)param_1[4];
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00402e54  rive::TextAssetImporter::resolve =====

/* rive::TextAssetImporter::resolve() */

undefined8 __thiscall rive::TextAssetImporter::resolve(TextAssetImporter *this)

{
  undefined1 *__dest;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  void *__src;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  undefined1 *__dest_00;
  size_t __n;
  undefined1 *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 *local_80;
  undefined1 *local_78;
  long local_70;
  long local_68;
  long *plVar18;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar11 = *(long *)(this + 0x20);
  if (lVar11 == 0) {
    plVar7 = *(long **)(this + 0x10);
    if (plVar7 == (long *)0x0) goto LAB_004031ac;
    uVar10 = 0;
    lVar22 = 0;
LAB_00402eb0:
    uVar8 = (**(code **)(*plVar7 + 0x10))
                      (plVar7,*(undefined8 *)(this + 8),uVar10,lVar22,*(undefined8 *)(this + 0x18));
    lVar11 = *(long *)(this + 0x20);
    if (((uVar8 & 1) == 0) && (lVar22 != 0)) {
LAB_00402ee0:
      (**(code **)(**(long **)(this + 8) + 0x88))
                (*(long **)(this + 8),lVar11 + 0x10,*(undefined8 *)(this + 0x18));
      lVar11 = *(long *)(this + 0x20);
    }
    if (lVar11 == 0) goto LAB_004031ac;
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    lVar22 = *(long *)(lVar11 + 0x18);
    if (plVar7 != (long *)0x0) {
      uVar10 = *(undefined8 *)(lVar11 + 0x10);
      goto LAB_00402eb0;
    }
    if (lVar22 != 0) goto LAB_00402ee0;
  }
  lVar22 = *(long *)(lVar11 + 0x28);
  if (lVar22 == 0) goto LAB_004031ac;
  local_80 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  lVar25 = **(long **)(this + 0x28);
  lVar1 = (*(long **)(this + 0x28))[1];
  if (lVar25 == lVar1) {
    __dest_00 = (undefined1 *)0x0;
  }
  else {
    __dest_00 = (undefined1 *)0x0;
    do {
      puVar4 = local_80;
      __n = *(size_t *)(lVar25 + 0x10);
      if (0 < (long)__n) {
        __src = *(void **)(lVar25 + 8);
        if (local_70 - (long)__dest_00 < (long)__n) {
          uVar24 = (long)__dest_00 - (long)local_80;
          uVar8 = uVar24 + __n;
          if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00327f8c(&local_80);
          }
          uVar16 = (local_70 - (long)local_80) * 2;
          if (uVar16 < uVar8 || uVar16 - uVar8 == 0) {
            uVar16 = uVar8;
          }
          if (0x3ffffffffffffffe < (ulong)(local_70 - (long)local_80)) {
            uVar16 = 0x7fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = operator_new(uVar16);
          }
          __dest = (undefined1 *)((long)pvVar9 + uVar24);
          memcpy(__dest,__src,__n);
          puVar15 = __dest_00;
          puVar23 = __dest;
          if (puVar4 != __dest_00) {
            puVar12 = __dest_00;
            if ((0x1f < uVar24) && (0x1f < (ulong)((long)puVar4 - (long)pvVar9))) {
              uVar14 = uVar24 & 0xffffffffffffffe0;
              puVar19 = (undefined8 *)(puVar4 + (uVar24 - 0x10));
              puVar20 = (undefined8 *)((long)pvVar9 + (uVar24 - 0x10));
              uVar8 = uVar14;
              do {
                puVar3 = puVar19 + -1;
                uVar27 = puVar19[-2];
                uVar26 = puVar19[1];
                uVar10 = *puVar19;
                uVar8 = uVar8 - 0x20;
                puVar19 = puVar19 + -4;
                puVar20[-1] = *puVar3;
                puVar20[-2] = uVar27;
                puVar20[1] = uVar26;
                *puVar20 = uVar10;
                puVar20 = puVar20 + -4;
              } while (uVar8 != 0);
              puVar23 = __dest + -uVar14;
              puVar12 = __dest_00 + -uVar14;
              if (uVar24 == uVar14) goto LAB_00403064;
            }
            do {
              puVar12 = puVar12 + -1;
              puVar23 = puVar23 + -1;
              *puVar23 = *puVar12;
              puVar15 = local_78;
            } while (puVar12 != puVar4);
          }
LAB_00403064:
          if (puVar15 != __dest_00) {
            memmove(__dest + __n,__dest_00,(long)puVar15 - (long)__dest_00);
          }
          puVar4 = local_80;
          __dest_00 = __dest + __n + ((long)puVar15 - (long)__dest_00);
          local_70 = (long)pvVar9 + uVar16;
          bVar5 = local_80 != (undefined1 *)0x0;
          local_80 = puVar23;
          local_78 = __dest_00;
          if (bVar5) {
            operator_delete(puVar4);
          }
        }
        else {
          memmove(__dest_00,__src,__n);
          __dest_00 = __dest_00 + __n;
          local_78 = __dest_00;
        }
      }
      lVar25 = lVar25 + 0x18;
    } while (lVar25 != lVar1);
    lVar11 = *(long *)(this + 0x20);
    lVar22 = *(long *)(lVar11 + 0x28);
  }
  puVar4 = local_80;
  if (lVar22 == 0x40) {
    iVar6 = hydro_sign_verify(*(undefined8 *)(lVar11 + 0x20),local_80,
                              (long)__dest_00 - (long)local_80,"RiveCode",
                              PTR_g_scriptVerificationPublicKey_0067d048);
    plVar21 = *(long **)(this + 0x28);
    plVar7 = (long *)*plVar21;
    plVar13 = (long *)plVar21[1];
    if (plVar7 != plVar13) {
      bVar5 = iVar6 == 0;
      uVar8 = (long)plVar13 + (-0x18 - (long)plVar7);
      plVar17 = plVar7;
      if (uVar8 < 0x18) {
LAB_00403168:
        do {
          plVar18 = plVar17 + 3;
          *(bool *)(*plVar17 + 0x98) = bVar5;
          plVar17 = plVar18;
        } while (plVar18 != plVar13);
      }
      else {
        uVar8 = uVar8 / 0x18 + 1;
        uVar16 = uVar8 & 0x1ffffffffffffffe;
        uVar24 = uVar16;
        do {
          lVar11 = *plVar17;
          lVar22 = plVar17[3];
          uVar24 = uVar24 - 2;
          plVar17 = plVar17 + 6;
          *(bool *)(lVar11 + 0x98) = bVar5;
          *(bool *)(lVar22 + 0x98) = bVar5;
        } while (uVar24 != 0);
        if (uVar8 != uVar16) {
          plVar17 = plVar7 + uVar16 * 3;
          goto LAB_00403168;
        }
      }
      do {
        plVar17 = plVar13 + -2;
        plVar13 = plVar13 + -3;
        free((void *)*plVar17);
      } while (plVar13 != plVar7);
    }
    plVar21[1] = (long)plVar7;
  }
  if (puVar4 != (undefined1 *)0x0) {
    operator_delete(puVar4);
  }
LAB_004031ac:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 004031ec  rive::TextAssetImporter::onFileAssetContents =====

/* rive::TextAssetImporter::onFileAssetContents(std::__ndk1::unique_ptr<rive::FileAssetContents,
   std::__ndk1::default_delete<rive::FileAssetContents> >) */

void __thiscall rive::TextAssetImporter::onFileAssetContents(TextAssetImporter *this,long *param_2)

{
  undefined8 *puVar1;
  size_t __size;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *local_78;
  size_t local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar7 = *param_2;
  uVar9 = *(ulong *)(lVar7 + 0x18);
  if (uVar9 != 0) {
    pcVar11 = *(char **)(lVar7 + 0x10);
    if (*pcVar11 < '\0') {
      if (uVar9 < 0x41) goto LAB_004033e0;
      uVar12 = 0x41;
    }
    else {
      uVar12 = 1;
    }
    local_78 = (void *)0x0;
    local_70 = 0;
    __size = 0;
    if (uVar12 <= uVar9) {
      __size = uVar9 - uVar12;
    }
    if ((uVar12 <= uVar9 && uVar9 - uVar12 != 0) &&
       (local_78 = malloc(__size), local_78 != (void *)0x0)) {
      local_70 = __size;
      memcpy(local_78,pcVar11 + uVar12,__size);
    }
    puVar13 = *(ulong **)(this + 0x28);
    InBandContent::InBandContent
              ((InBandContent *)&local_90,*(TextAsset **)(this + 8),(SimpleArray *)&local_78);
    puVar2 = (undefined8 *)puVar13[1];
    if (puVar2 < (undefined8 *)puVar13[2]) {
      puVar14 = puVar2 + 3;
      puVar2[1] = pvStack_88;
      *puVar2 = local_90;
      puVar2[2] = local_80;
      pvStack_88 = (void *)0x0;
      local_80 = 0;
    }
    else {
      puVar15 = (undefined8 *)*puVar13;
      lVar7 = (long)puVar2 - (long)puVar15 >> 3;
      uVar9 = lVar7 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar9) {
        FUN_00403448();
LAB_00403444:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      lVar8 = (long)puVar13[2] - (long)puVar15 >> 3;
      uVar12 = lVar8 * 0x5555555555555556;
      if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
        uVar12 = uVar9;
      }
      if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar12 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_00403444;
      pvVar5 = operator_new(uVar12 * 0x18);
      uVar10 = local_80;
      pvVar4 = pvStack_88;
      puVar1 = (undefined8 *)((long)pvVar5 + ((long)puVar2 - (long)puVar15));
      puVar14 = puVar1 + 3;
      *puVar1 = local_90;
      pvStack_88 = (void *)0x0;
      local_80 = 0;
      *(void **)((long)pvVar5 + lVar7 * 8 + 8) = pvVar4;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x10) = uVar10;
      pvVar5 = (void *)((long)pvVar5 + uVar12 * 0x18);
      if (puVar2 == puVar15) {
        *puVar13 = (ulong)puVar1;
        puVar13[1] = (ulong)puVar14;
        puVar13[2] = (ulong)pvVar5;
      }
      else {
        lVar7 = 0;
        do {
          lVar8 = lVar7 + -0x18;
          uVar16 = *(undefined8 *)((long)puVar2 + lVar7 + -0x18);
          uVar10 = *(undefined8 *)((long)puVar2 + lVar7 + -8);
          *(undefined8 *)((long)puVar1 + lVar7 + -0x10) =
               *(undefined8 *)((long)puVar2 + lVar7 + -0x10);
          *(undefined8 *)((long)puVar1 + lVar7 + -0x18) = uVar16;
          *(undefined8 *)((long)puVar1 + lVar7 + -8) = uVar10;
          *(undefined8 *)((long)puVar2 + lVar7 + -0x10) = 0;
          *(undefined8 *)((long)puVar2 + lVar7 + -8) = 0;
          lVar7 = lVar8;
        } while ((undefined8 *)((long)puVar2 + lVar8) != puVar15);
        puVar2 = (undefined8 *)*puVar13;
        puVar15 = (undefined8 *)puVar13[1];
        *puVar13 = (long)puVar1 + lVar8;
        puVar13[1] = (ulong)puVar14;
        puVar13[2] = (ulong)pvVar5;
        for (; puVar15 != puVar2; puVar15 = puVar15 + -3) {
          free((void *)puVar15[-2]);
        }
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2);
      }
    }
    puVar13[1] = (ulong)puVar14;
    free(pvStack_88);
    free(local_78);
    lVar7 = *param_2;
  }
LAB_004033e0:
  *param_2 = 0;
  plVar6 = *(long **)(this + 0x20);
  *(long *)(this + 0x20) = lVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403448  FUN_00403448 =====

void FUN_00403448(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0040345c  rive::InBandContent::InBandContent =====

/* rive::InBandContent::InBandContent(rive::TextAsset*, rive::SimpleArray<unsigned char>&) */

void __thiscall
rive::InBandContent::InBandContent(InBandContent *this,TextAsset *param_1,SimpleArray *param_2)

{
  void *__src;
  size_t __size;
  void *__dest;
  
  __src = *(void **)param_2;
  __size = *(size_t *)(param_2 + 8);
  *(TextAsset **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (__size != 0) {
    __dest = malloc(__size);
    *(void **)(this + 8) = __dest;
    if (__dest != (void *)0x0) {
      *(size_t *)(this + 0x10) = __size;
      memcpy(__dest,__src,__size);
      return;
    }
  }
  return;
}


// ===== 004034c4  rive::TextAssetImporter::textAsset =====

/* rive::TextAssetImporter::textAsset() */

undefined8 __thiscall rive::TextAssetImporter::textAsset(TextAssetImporter *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 004034cc  rive::TransitionViewModelConditionImporter::TransitionViewModelConditionImporter =====

/* rive::TransitionViewModelConditionImporter::TransitionViewModelConditionImporter(rive::TransitionViewModelCondition*)
    */

void __thiscall
rive::TransitionViewModelConditionImporter::TransitionViewModelConditionImporter
          (TransitionViewModelConditionImporter *this,TransitionViewModelCondition *param_1)

{
  *(undefined **)this = PTR_vtable_0067d628 + 0x10;
  *(TransitionViewModelCondition **)(this + 8) = param_1;
  return;
}


// ===== 004034e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004034e4  rive::TransitionViewModelConditionImporter::resolve =====

/* rive::TransitionViewModelConditionImporter::resolve() */

undefined8 __thiscall
rive::TransitionViewModelConditionImporter::resolve(TransitionViewModelConditionImporter *this)

{
  TransitionViewModelCondition::initialize(*(TransitionViewModelCondition **)(this + 8));
  return 0;
}


// ===== 00403500  rive::TransitionViewModelConditionImporter::setComparator =====

/* rive::TransitionViewModelConditionImporter::setComparator(rive::TransitionComparator*) */

void __thiscall
rive::TransitionViewModelConditionImporter::setComparator
          (TransitionViewModelConditionImporter *this,TransitionComparator *param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (*(long *)(*(long *)(this + 8) + 0x10) != 0) {
    lVar1 = 0x18;
  }
  *(TransitionComparator **)(*(long *)(this + 8) + lVar1) = param_1;
  return;
}


// ===== 00403520  rive::ViewModelImporter::ViewModelImporter =====

/* rive::ViewModelImporter::ViewModelImporter(rive::ViewModel*) */

void __thiscall
rive::ViewModelImporter::ViewModelImporter(ViewModelImporter *this,ViewModel *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d630;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(ViewModel **)(this + 8) = param_1;
  return;
}


// ===== 00403538  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0040353c  rive::ViewModelImporter::resolve =====

/* rive::ViewModelImporter::resolve() */

undefined8 rive::ViewModelImporter::resolve(void)

{
  return 0;
}


// ===== 00403544  rive::ViewModelImporter::addProperty =====

/* rive::ViewModelImporter::addProperty(rive::ViewModelProperty*) */

void __thiscall
rive::ViewModelImporter::addProperty(ViewModelImporter *this,ViewModelProperty *param_1)

{
  ViewModel::addProperty(*(ViewModel **)(this + 8),param_1);
  return;
}


// ===== 0040354c  rive::ViewModelImporter::addInstance =====

/* rive::ViewModelImporter::addInstance(rive::ViewModelInstance*) */

void __thiscall
rive::ViewModelImporter::addInstance(ViewModelImporter *this,ViewModelInstance *param_1)

{
  ViewModel::addInstance(*(ViewModel **)(this + 8),param_1);
  return;
}


// ===== 00403554  rive::ViewModelInstanceImporter::ViewModelInstanceImporter =====

/* rive::ViewModelInstanceImporter::ViewModelInstanceImporter(rive::ViewModelInstance*) */

void __thiscall
rive::ViewModelInstanceImporter::ViewModelInstanceImporter
          (ViewModelInstanceImporter *this,ViewModelInstance *param_1)

{
  *(undefined **)this = PTR_vtable_0067d638 + 0x10;
  *(ViewModelInstance **)(this + 8) = param_1;
  return;
}


// ===== 00403568  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0040356c  rive::ViewModelInstanceImporter::resolve =====

/* rive::ViewModelInstanceImporter::resolve() */

undefined8 rive::ViewModelInstanceImporter::resolve(void)

{
  return 0;
}


// ===== 00403574  rive::ViewModelInstanceImporter::addValue =====

/* rive::ViewModelInstanceImporter::addValue(rive::ViewModelInstanceValue*) */

void __thiscall
rive::ViewModelInstanceImporter::addValue
          (ViewModelInstanceImporter *this,ViewModelInstanceValue *param_1)

{
  ViewModelInstance::addValue(*(ViewModelInstance **)(this + 8),param_1);
  return;
}


// ===== 0040357c  rive::ViewModelInstanceListImporter::ViewModelInstanceListImporter =====

/* rive::ViewModelInstanceListImporter::ViewModelInstanceListImporter(rive::ViewModelInstanceList*)
    */

void __thiscall
rive::ViewModelInstanceListImporter::ViewModelInstanceListImporter
          (ViewModelInstanceListImporter *this,ViewModelInstanceList *param_1)

{
  *(undefined **)this = PTR_vtable_0067d640 + 0x10;
  *(ViewModelInstanceList **)(this + 8) = param_1;
  return;
}


// ===== 00403590  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00403594  rive::ViewModelInstanceListImporter::resolve =====

/* rive::ViewModelInstanceListImporter::resolve() */

undefined8 rive::ViewModelInstanceListImporter::resolve(void)

{
  return 0;
}


// ===== 0040359c  rive::ViewModelInstanceListImporter::addItem =====

/* rive::ViewModelInstanceListImporter::addItem(rive::rcp<rive::ViewModelInstanceListItem>) */

void __thiscall
rive::ViewModelInstanceListImporter::addItem
          (ViewModelInstanceListImporter *this,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ViewModelInstance *this_00;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  plVar3 = (long *)*param_2;
  lVar5 = *(long *)(this + 8);
  if (plVar3 == (long *)0x0) {
    puVar4 = *(undefined8 **)(lVar5 + 0x128);
    if (*(undefined8 **)(lVar5 + 0x130) <= puVar4) goto LAB_004035fc;
  }
  else {
    FUN_00340fb0(1,(long)plVar3 + 0x14);
    puVar4 = *(undefined8 **)(lVar5 + 0x128);
    if (*(undefined8 **)(lVar5 + 0x130) <= puVar4) {
LAB_004035fc:
      puVar2 = (undefined8 *)FUN_003bbd00(lVar5 + 0x120,plVar3);
      goto LAB_0040360c;
    }
    FUN_00340fb0(1,(long)plVar3 + 0x14);
  }
  puVar2 = puVar4 + 1;
  *puVar4 = plVar3;
LAB_0040360c:
  this_00 = (ViewModelInstance *)plVar3[3];
  *(undefined8 **)(lVar5 + 0x128) = puVar2;
  if (this_00 != (ViewModelInstance *)0x0) {
    ViewModelInstance::addParent(this_00,*(ViewModelInstance **)(lVar5 + 0x138));
  }
  iVar1 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14);
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0040364c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 00403660  rive::FocusManager::dropFocusIfFocusTargetHidden =====

/* rive::FocusManager::dropFocusIfFocusTargetHidden() */

void __thiscall rive::FocusManager::dropFocusIfFocusTargetHidden(FocusManager *this)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar5 = *(void **)this;
  if ((pvVar5 != (void *)0x0) &&
     ((((*(byte *)((long)pvVar5 + 0x60) ^ 0xff) & 5) != 0 ||
      (((plVar4 = *(long **)((long)pvVar5 + 8), plVar4 != (long *)0x0 &&
        (uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4), (uVar3 & 1) == 0)) &&
       (pvVar5 = *(void **)this, pvVar5 != (void *)0x0)))))) {
    *(undefined8 *)this = 0;
    pvVar6 = pvVar5;
    do {
      if ((*(byte *)((long)pvVar6 + 0x60) >> 5 & 1) == 0) break;
      *(byte *)((long)pvVar6 + 0x60) = *(byte *)((long)pvVar6 + 0x60) & 0xdf;
      if (*(long **)((long)pvVar6 + 8) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar6 + 8) + 0x30))();
      }
      pvVar6 = *(void **)((long)pvVar6 + 0x10);
    } while (pvVar6 != (void *)0x0);
    iVar2 = FUN_00340fe0(0xffffffff,pvVar5);
    if (iVar2 == 1) {
      if ((*(byte *)((long)pvVar5 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + 0x48));
      }
      local_40 = (long)pvVar5 + 0x20;
      FUN_0034b070(&local_40);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        operator_delete(pvVar5);
        return;
      }
      goto LAB_00403784;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00403784:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403788  rive::FocusManager::clearFocus =====

/* rive::FocusManager::clearFocus() */

void __thiscall rive::FocusManager::clearFocus(FocusManager *this)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)this = 0;
    pvVar4 = pvVar3;
    do {
      if ((*(byte *)((long)pvVar4 + 0x60) >> 5 & 1) == 0) break;
      *(byte *)((long)pvVar4 + 0x60) = *(byte *)((long)pvVar4 + 0x60) & 0xdf;
      if (*(long **)((long)pvVar4 + 8) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar4 + 8) + 0x30))();
      }
      pvVar4 = *(void **)((long)pvVar4 + 0x10);
    } while (pvVar4 != (void *)0x0);
    iVar2 = FUN_00340fe0(0xffffffff,pvVar3);
    if (iVar2 == 1) {
      if ((*(byte *)((long)pvVar3 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + 0x48));
      }
      local_40 = (long)pvVar3 + 0x20;
      FUN_0034b070(&local_40);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        operator_delete(pvVar3);
        return;
      }
      goto LAB_0040386c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0040386c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403870  rive::FocusManager::primaryFocusArtboard =====

/* rive::FocusManager::primaryFocusArtboard() const */

long __thiscall rive::FocusManager::primaryFocusArtboard(FocusManager *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)this == 0) || (plVar1 = *(long **)(*(long *)this + 8), plVar1 == (long *)0x0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 != 0) {
      plVar1 = *(long **)(lVar2 + 0xc38);
      while ((plVar1 != (long *)0x0 && (lVar3 = (**(code **)(*plVar1 + 0x40))(), lVar3 != 0))) {
        lVar2 = (**(code **)(**(long **)(lVar2 + 0xc38) + 0x40))();
        plVar1 = *(long **)(lVar2 + 0xc38);
      }
    }
  }
  return lVar2;
}


// ===== 004038ec  rive::FocusManager::~FocusManager =====

/* rive::FocusManager::~FocusManager() */

void __thiscall rive::FocusManager::~FocusManager(FocusManager *this)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *local_58;
  FocusManager *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x10);
  for (puVar5 = *(undefined8 **)(this + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    while (pvVar4 = (void *)*puVar5, pvVar4 == (void *)0x0) {
      local_58 = (void *)0x0;
      removeManager(this,&local_58);
      puVar5 = puVar5 + 1;
      if (puVar5 == puVar1) goto LAB_004039fc;
    }
    FUN_00340fb0(1,pvVar4);
    FUN_00340fb0(1,pvVar4);
    local_58 = pvVar4;
    removeManager(this,&local_58);
    iVar3 = FUN_00340fe0(0xffffffff,pvVar4);
    if (iVar3 == 1) {
      if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + 0x48));
      }
      local_50 = (FocusManager *)((long)pvVar4 + 0x20);
      FUN_0034b070(&local_50);
      operator_delete(pvVar4);
    }
    iVar3 = FUN_00340fe0(0xffffffff,pvVar4);
    if (iVar3 == 1) {
      if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + 0x48));
      }
      local_50 = (FocusManager *)((long)pvVar4 + 0x20);
      FUN_0034b070(&local_50);
      operator_delete(pvVar4);
    }
  }
LAB_004039fc:
  pvVar4 = *(void **)this;
  *(undefined8 *)this = 0;
  if ((pvVar4 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pvVar4), iVar3 == 1)) {
    if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + 0x48));
    }
    local_50 = (FocusManager *)((long)pvVar4 + 0x20);
    FUN_0034b070(&local_50);
    operator_delete(pvVar4);
  }
  local_50 = this + 8;
  FUN_0034b070(&local_50);
  pvVar4 = *(void **)this;
  if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_00340fe0(0xffffffff,pvVar4), iVar3 != 1)) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + 0x48));
    }
    local_50 = (FocusManager *)((long)pvVar4 + 0x20);
    FUN_0034b070(&local_50);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403ae4  rive::FocusManager::removeManager =====

/* rive::FocusManager::removeManager(rive::rcp<rive::FocusNode>) */

void __thiscall rive::FocusManager::removeManager(FocusManager *this,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_2;
  puVar6 = *(undefined8 **)(lVar4 + 0x20);
  puVar1 = *(undefined8 **)(lVar4 + 0x28);
  if (puVar6 != puVar1) {
    do {
      pvVar5 = (void *)*puVar6;
      if (pvVar5 == (void *)0x0) {
        local_58 = (void *)0x0;
        removeManager(this,&local_58);
      }
      else {
        FUN_00340fb0(1,pvVar5);
        local_58 = pvVar5;
        removeManager(this,&local_58);
        iVar3 = FUN_00340fe0(0xffffffff,pvVar5);
        if (iVar3 == 1) {
          if ((*(byte *)((long)pvVar5 + 0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + 0x48));
          }
          local_50 = (long)pvVar5 + 0x20;
          FUN_0034b070(&local_50);
          operator_delete(pvVar5);
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
    lVar4 = *param_2;
  }
  *(undefined8 *)(lVar4 + 0x18) = 0;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00403bd8  rive::FocusManager::setFocus =====

/* rive::FocusManager::setFocus(rive::rcp<rive::FocusNode>) */

void __thiscall rive::FocusManager::setFocus(FocusManager *this,long *param_2)

{
  long lVar1;
  FocusManager *this_00;
  FocusNode *pFVar2;
  FocusNode *pFVar3;
  FocusManager *pFVar4;
  FocusManager *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pFVar2 = (FocusNode *)*param_2;
  pFVar3 = *(FocusNode **)this;
  if (pFVar2 == pFVar3) {
LAB_00403cb8:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    this_00 = this;
    if (pFVar2 != (FocusNode *)0x0) {
      if (((byte)pFVar2[0x60] & 1) == 0) goto LAB_00403cb8;
      this_00 = *(FocusManager **)(pFVar2 + 8);
      if (this_00 != (FocusManager *)0x0) {
        this_00 = (FocusManager *)(**(code **)(*(long *)this_00 + 0x48))();
        if (((ulong)this_00 & 1) == 0) goto LAB_00403cb8;
        pFVar3 = *(FocusNode **)this;
        pFVar2 = (FocusNode *)*param_2;
      }
    }
    *param_2 = 0;
    pFVar4 = *(FocusManager **)this;
    *(FocusNode **)this = pFVar2;
    if ((pFVar4 != (FocusManager *)0x0) &&
       (this_00 = (FocusManager *)FUN_00340fe0(0xffffffff,pFVar4), (int)this_00 == 1)) {
      if (((byte)pFVar4[0x38] & 1) != 0) {
        operator_delete(*(void **)(pFVar4 + 0x48));
      }
      local_40 = pFVar4 + 0x20;
      FUN_0034b070(&local_40);
      operator_delete(pFVar4);
      this_00 = pFVar4;
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      notifyFocusChange(this_00,pFVar3,*(FocusNode **)this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403ce0  rive::FocusManager::notifyFocusChange =====

/* rive::FocusManager::notifyFocusChange(rive::FocusNode*, rive::FocusNode*) */

void __thiscall
rive::FocusManager::notifyFocusChange(FocusManager *this,FocusNode *param_1,FocusNode *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  FocusNode *pFVar11;
  ulong uVar12;
  ulong unaff_x26;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  void *local_90;
  ulong uStack_88;
  long *local_80;
  ulong local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pFVar11 = (FocusNode *)0x0;
  if ((param_1 != (FocusNode *)0x0) && (param_2 != (FocusNode *)0x0)) {
    uVar13 = 0;
    uVar12 = 0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_78 = 0;
    local_80 = (long *)0x0;
    local_70 = 1.0;
    pFVar11 = param_1;
    do {
      pvVar3 = local_90;
      uVar4 = ((ulong)(uint)((int)pFVar11 << 3) + 8 ^ (ulong)pFVar11 >> 0x20) * -0x622015f714c7d297;
      uVar4 = ((ulong)pFVar11 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
      if (uVar13 != 0) {
        uVar15 = NEON_cnt(uVar13,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        uVar5 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
        if (uVar5 < 2) {
          unaff_x26 = uVar4 & uVar13 - 1;
        }
        else {
          unaff_x26 = uVar4;
          if (uVar13 <= uVar4) {
            uVar8 = 0;
            if (uVar13 != 0) {
              uVar8 = uVar4 / uVar13;
            }
            unaff_x26 = uVar4 - uVar8 * uVar13;
          }
        }
        plVar6 = *(long **)((long)local_90 + unaff_x26 * 8);
        if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
          do {
            uVar8 = plVar6[1];
            if (uVar8 == uVar4) {
              if ((FocusNode *)plVar6[2] == pFVar11) goto LAB_004040cc;
            }
            else {
              if (uVar5 < 2) {
                uVar8 = uVar8 & uVar13 - 1;
              }
              else if (uVar13 <= uVar8) {
                uVar10 = 0;
                if (uVar13 != 0) {
                  uVar10 = uVar8 / uVar13;
                }
                uVar8 = uVar8 - uVar10 * uVar13;
              }
              if (uVar8 != unaff_x26) break;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
      plVar6 = (long *)operator_new(0x18);
      *plVar6 = 0;
      plVar6[1] = uVar4;
      plVar6[2] = (long)pFVar11;
      if ((uVar13 == 0) || (local_70 * (float)uVar13 < (float)(uVar12 + 1))) {
        if (uVar13 < 3) {
          uVar5 = 1;
        }
        else {
          uVar5 = (ulong)((uVar13 & uVar13 - 1) != 0);
        }
        uVar5 = uVar5 | uVar13 << 1;
        uVar12 = (ulong)((float)(uVar12 + 1) / local_70);
        if (uVar5 <= uVar12) {
          uVar5 = uVar12;
        }
        uVar12 = uVar13;
        if (uVar5 - 1 == 0) {
          uVar5 = 2;
        }
        else if ((uVar5 & uVar5 - 1) != 0) {
          uVar5 = std::__ndk1::__next_prime(uVar5);
          uVar12 = uStack_88;
        }
        if (uVar12 < uVar5) {
LAB_00403eb8:
          if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar3 = operator_new(uVar5 << 3);
          if (local_90 != (void *)0x0) {
            operator_delete(local_90);
          }
          uVar12 = 0;
          do {
            *(undefined8 *)((long)pvVar3 + uVar12 * 8) = 0;
            uVar12 = uVar12 + 1;
          } while (uVar5 != uVar12);
          uVar13 = uVar5;
          local_90 = pvVar3;
          uStack_88 = uVar5;
          if (local_80 != (long *)0x0) {
            uVar12 = local_80[1];
            uVar15 = NEON_cnt(uVar5,1);
            uVar14 = NEON_uaddlv(uVar15,1);
            uVar8 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
            if (uVar8 < 2) {
              uVar12 = uVar12 & uVar5 - 1;
            }
            else if (uVar5 <= uVar12) {
              uVar10 = 0;
              if (uVar5 != 0) {
                uVar10 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar10 * uVar5;
            }
            *(long ***)((long)pvVar3 + uVar12 * 8) = &local_80;
            plVar9 = (long *)*local_80;
            if (plVar9 != (long *)0x0) {
              plVar7 = local_80;
              do {
                uVar10 = plVar9[1];
                if (uVar8 < 2) {
                  uVar10 = uVar10 & uVar5 - 1;
                }
                else if (uVar5 <= uVar10) {
                  uVar1 = 0;
                  if (uVar5 != 0) {
                    uVar1 = uVar10 / uVar5;
                  }
                  uVar10 = uVar10 - uVar1 * uVar5;
                }
                if (uVar10 != uVar12) {
                  if (*(long *)((long)pvVar3 + uVar10 * 8) == 0) {
                    *(long **)((long)pvVar3 + uVar10 * 8) = plVar7;
                    uVar12 = uVar10;
                  }
                  else {
                    *plVar7 = *plVar9;
                    *plVar9 = **(long **)((long)pvVar3 + uVar10 * 8);
                    **(undefined8 **)((long)pvVar3 + uVar10 * 8) = plVar9;
                    plVar9 = plVar7;
                  }
                }
                plVar7 = plVar9;
                plVar9 = (long *)*plVar7;
              } while (plVar9 != (long *)0x0);
            }
          }
        }
        else {
          uVar13 = uVar12;
          if (uVar5 < uVar12) {
            uVar13 = (ulong)((float)local_78 / local_70);
            if (uVar12 < 3) {
LAB_004040d8:
              uVar13 = std::__ndk1::__next_prime(uVar13);
            }
            else {
              uVar15 = NEON_cnt(uVar12,1);
              uVar14 = NEON_uaddlv(uVar15,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14)) goto LAB_004040d8;
              if (1 < uVar13) {
                uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
              }
            }
            if (uVar5 <= uVar13) {
              uVar5 = uVar13;
            }
            uVar13 = uStack_88;
            if (uVar5 < uVar12) {
              if (uVar5 != 0) goto LAB_00403eb8;
              local_90 = (void *)0x0;
              if (pvVar3 != (void *)0x0) {
                operator_delete(pvVar3);
              }
              uStack_88 = 0;
              uVar13 = 0;
            }
          }
        }
        if ((uVar13 & uVar13 - 1) == 0) {
          unaff_x26 = uVar13 - 1 & uVar4;
        }
        else {
          unaff_x26 = uVar4;
          if (uVar13 <= uVar4) {
            uVar12 = 0;
            if (uVar13 != 0) {
              uVar12 = uVar4 / uVar13;
            }
            unaff_x26 = uVar4 - uVar12 * uVar13;
          }
        }
      }
      plVar9 = *(long **)((long)local_90 + unaff_x26 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar6 = (long)local_80;
        *(long ***)((long)local_90 + unaff_x26 * 8) = &local_80;
        local_80 = plVar6;
        if (*plVar6 != 0) {
          uVar12 = *(ulong *)(*plVar6 + 8);
          if ((uVar13 & uVar13 - 1) == 0) {
            uVar12 = uVar12 & uVar13 - 1;
          }
          else if (uVar13 <= uVar12) {
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar12 / uVar13;
            }
            uVar12 = uVar12 - uVar4 * uVar13;
          }
          plVar9 = (long *)((long)local_90 + uVar12 * 8);
          goto LAB_004040bc;
        }
      }
      else {
        *plVar6 = *plVar9;
LAB_004040bc:
        *plVar9 = (long)plVar6;
      }
      uVar12 = local_78 + 1;
      local_78 = uVar12;
LAB_004040cc:
      pFVar11 = *(FocusNode **)(pFVar11 + 0x10);
    } while (pFVar11 != (FocusNode *)0x0);
    uVar15 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    pFVar11 = param_2;
    do {
      plVar6 = local_80;
      if (uVar13 != 0) {
        uVar4 = ((ulong)(uint)((int)pFVar11 << 3) + 8 ^ (ulong)pFVar11 >> 0x20) *
                -0x622015f714c7d297;
        uVar4 = ((ulong)pFVar11 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
        uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
        if (uVar12 < 2) {
          uVar5 = uVar13 - 1 & uVar4;
        }
        else {
          uVar5 = uVar4;
          if (uVar13 <= uVar4) {
            uVar5 = 0;
            if (uVar13 != 0) {
              uVar5 = uVar4 / uVar13;
            }
            uVar5 = uVar4 - uVar5 * uVar13;
          }
        }
        plVar9 = *(long **)((long)local_90 + uVar5 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_00404134;
              uVar8 = plVar9[1];
              if (uVar4 - uVar8 != 0) break;
              if ((FocusNode *)plVar9[2] == pFVar11) goto joined_r0x004041ec;
            }
            if (uVar12 < 2) {
              uVar8 = uVar8 & uVar13 - 1;
            }
            else if (uVar13 <= uVar8) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar8 / uVar13;
              }
              uVar8 = uVar8 - uVar10 * uVar13;
            }
          } while (uVar8 == uVar5);
        }
      }
LAB_00404134:
      pFVar11 = *(FocusNode **)(pFVar11 + 0x10);
    } while (pFVar11 != (FocusNode *)0x0);
joined_r0x004041ec:
    while (plVar6 != (long *)0x0) {
      plVar9 = (long *)*plVar6;
      operator_delete(plVar6);
      plVar6 = plVar9;
    }
    if (local_90 != (void *)0x0) {
      operator_delete(local_90);
    }
  }
  if ((param_1 != (FocusNode *)0x0) && (pFVar11 != param_1)) {
    while (((byte)param_1[0x60] >> 5 & 1) != 0) {
      param_1[0x60] = (FocusNode)((byte)param_1[0x60] & 0xdf);
      if (*(long **)(param_1 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 8) + 0x30))();
      }
      param_1 = *(FocusNode **)(param_1 + 0x10);
      if ((param_1 == (FocusNode *)0x0) || (param_1 == pFVar11)) break;
    }
  }
  if ((param_2 != (FocusNode *)0x0) && (pFVar11 != param_2)) {
    while (((byte)param_2[0x60] >> 5 & 1) == 0) {
      param_2[0x60] = (FocusNode)((byte)param_2[0x60] | 0x20);
      if (*(long **)(param_2 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(param_2 + 8) + 0x28))();
      }
      param_2 = *(FocusNode **)(param_2 + 0x10);
      if ((param_2 == (FocusNode *)0x0) || (param_2 == pFVar11)) break;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004042d0  rive::FocusManager::hasFocus =====

/* rive::FocusManager::hasFocus(rive::rcp<rive::FocusNode>) const */

byte __thiscall rive::FocusManager::hasFocus(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    return *(byte *)(*param_2 + 0x60) >> 5 & 1;
  }
  return 0;
}


// ===== 004042ec  rive::FocusManager::hasPrimaryFocus =====

/* rive::FocusManager::hasPrimaryFocus(rive::rcp<rive::FocusNode>) const */

bool __thiscall rive::FocusManager::hasPrimaryFocus(FocusManager *this,long *param_2)

{
  return *(long *)this == *param_2;
}


// ===== 00404300  rive::FocusManager::addChild =====

/* rive::FocusManager::addChild(rive::rcp<rive::FocusNode>, rive::rcp<rive::FocusNode>) */

void __thiscall rive::FocusManager::addChild(FocusManager *this,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  FocusNode *pFVar9;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar8 = (void *)*param_3;
  if (pvVar8 != (void *)0x0) {
    pFVar9 = *(FocusNode **)((long)pvVar8 + 0x10);
    if (pFVar9 == (FocusNode *)0x0) {
      plVar5 = *(long **)(this + 0x10);
      plVar1 = *(long **)(this + 8);
      plVar6 = plVar1;
      for (; (plVar1 != plVar5 && (plVar6 = plVar1, (void *)*plVar1 != pvVar8)); plVar1 = plVar1 + 1
          ) {
        plVar6 = plVar5;
      }
      if (plVar6 != plVar5) {
        FUN_004044f8();
      }
    }
    else {
      FUN_00340fb0(1,pvVar8);
      local_50 = pvVar8;
      FocusNode::removeChild(pFVar9,&local_50);
      iVar3 = FUN_00340fe0(0xffffffff,pvVar8);
      if (iVar3 == 1) {
        FUN_00406a5c(pvVar8);
      }
    }
    pvVar8 = (void *)*param_3;
    *(FocusManager **)((long)pvVar8 + 0x18) = this;
    lVar7 = *param_2;
    if (lVar7 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 < *(long **)(this + 0x18)) {
        *param_3 = 0;
        plVar5 = plVar1 + 1;
        *plVar1 = (long)pvVar8;
      }
      else {
        plVar5 = (long *)FUN_0040461c(this + 8,param_3);
      }
      *(long **)(this + 0x10) = plVar5;
    }
    else {
      *param_3 = 0;
      pFVar9 = *(FocusNode **)((long)pvVar8 + 0x10);
      local_58 = pvVar8;
      if (pFVar9 != (FocusNode *)0x0) {
        FUN_00340fb0(1,pvVar8);
        local_50 = pvVar8;
        FocusNode::removeChild(pFVar9,&local_50);
        iVar3 = FUN_00340fe0(0xffffffff,pvVar8);
        if (iVar3 == 1) {
          FUN_00406a5c(pvVar8);
        }
      }
      *(long *)((long)local_58 + 0x10) = lVar7;
      plVar1 = *(long **)(lVar7 + 0x28);
      if (plVar1 < *(long **)(lVar7 + 0x30)) {
        *plVar1 = (long)local_58;
        *(long **)(lVar7 + 0x28) = plVar1 + 1;
      }
      else {
        uVar4 = FUN_0040461c(lVar7 + 0x20,&local_58);
        pvVar8 = local_58;
        *(undefined8 *)(lVar7 + 0x28) = uVar4;
        if ((local_58 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_58), iVar3 == 1)) {
          if ((*(byte *)((long)pvVar8 + 0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar8 + 0x48));
          }
          local_50 = (void *)((long)pvVar8 + 0x20);
          FUN_0034b070(&local_50);
          if (*(long *)(lVar2 + 0x28) == local_48) {
            operator_delete(pvVar8);
            return;
          }
          goto LAB_004044f4;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004044f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004044f8  FUN_004044f8 =====

void FUN_004044f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  puVar4 = param_2 + 1;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != puVar5) {
    do {
      param_2 = puVar4;
      pvVar3 = (void *)param_2[-1];
      param_2[-1] = *param_2;
      *param_2 = 0;
      if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pvVar3), iVar2 == 1)) {
        if ((*(byte *)((long)pvVar3 + 0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + 0x48));
        }
        local_50 = (long)pvVar3 + 0x20;
        FUN_0034b070(&local_50);
        operator_delete(pvVar3);
      }
      puVar4 = param_2 + 1;
    } while (param_2 + 1 != puVar5);
    puVar4 = *(undefined8 **)(param_1 + 8);
  }
  while (puVar4 != param_2) {
    puVar4 = puVar4 + -1;
    pvVar3 = (void *)*puVar4;
    if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pvVar3), iVar2 == 1)) {
      if ((*(byte *)((long)pvVar3 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + 0x48));
      }
      local_50 = (long)pvVar3 + 0x20;
      FUN_0034b070(&local_50);
      operator_delete(pvVar3);
    }
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0040461c  FUN_0040461c =====

undefined8 * FUN_0040461c(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  lVar16 = (long)puVar15 - (long)puVar1 >> 3;
  uVar7 = lVar16 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_00404808();
    goto LAB_00404800;
  }
  uVar6 = (long)(param_1[2] - (long)puVar1) >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < param_1[2] - (long)puVar1) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar4 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar4 + lVar16 * 8);
  uVar8 = *param_2;
  *param_2 = 0;
  puVar13 = puVar5 + 1;
  *puVar5 = uVar8;
  if ((long)puVar15 - (long)puVar1 != 0) {
    uVar7 = ((long)puVar15 - (long)puVar1) - 8;
    puVar14 = puVar15;
    if ((0x77 < uVar7) &&
       ((puVar5 <= (undefined8 *)((long)puVar15 + (-8 - (uVar7 & 0xfffffffffffffff8))) ||
        (puVar15 <=
         (undefined8 *)
         ((long)pvVar4 + (((long)puVar15 - (long)puVar1) - (uVar7 & 0xfffffffffffffff8)) + -8))))) {
      puVar10 = puVar5 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar9 = uVar7 & 0x3ffffffffffffffc;
      puVar14 = puVar15 + -uVar9;
      uVar12 = uVar9;
      do {
        puVar11 = puVar15 + -4;
        uVar19 = puVar15[-3];
        uVar18 = *puVar11;
        uVar17 = puVar15[-1];
        uVar8 = puVar15[-2];
        uVar12 = uVar12 - 4;
        puVar15[-3] = 0;
        *puVar11 = 0;
        puVar15[-1] = 0;
        puVar15[-2] = 0;
        puVar10[-1] = uVar19;
        puVar10[-2] = uVar18;
        puVar10[1] = uVar17;
        *puVar10 = uVar8;
        puVar10 = puVar10 + -4;
        puVar15 = puVar11;
      } while (uVar12 != 0);
      puVar5 = puVar5 + -uVar9;
      if (uVar7 == uVar9) goto LAB_0040475c;
    }
    do {
      puVar14 = puVar14 + -1;
      uVar8 = *puVar14;
      *puVar14 = 0;
      puVar5 = puVar5 + -1;
      *puVar5 = uVar8;
    } while (puVar14 != puVar1);
  }
LAB_0040475c:
  puVar1 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  *param_1 = (ulong)puVar5;
  param_1[1] = (ulong)puVar13;
  param_1[2] = (ulong)((long)pvVar4 + uVar6 * 8);
  while (puVar15 != puVar1) {
    puVar15 = puVar15 + -1;
    pvVar4 = (void *)*puVar15;
    if ((pvVar4 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pvVar4), iVar3 == 1)) {
      if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + 0x48));
      }
      local_60 = (long)pvVar4 + 0x20;
      FUN_0034b070(&local_60);
      operator_delete(pvVar4);
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return puVar13;
  }
LAB_00404800:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00404808  FUN_00404808 =====

void FUN_00404808(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0040481c  rive::FocusManager::removeChild =====

/* rive::FocusManager::removeChild(rive::rcp<rive::FocusNode>) */

void __thiscall rive::FocusManager::removeChild(FocusManager *this,long *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  FocusNode *pFVar9;
  void *pvVar10;
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pvVar8 = (void *)*param_2;
  if (pvVar8 != (void *)0x0) {
    FUN_00340fb0(1,pvVar8);
    bVar3 = *(byte *)((long)pvVar8 + 0x60);
    iVar5 = FUN_00340fe0(0xffffffff,pvVar8);
    if (iVar5 == 1) {
      if ((*(byte *)((long)pvVar8 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar8 + 0x48));
      }
      local_50 = (long)pvVar8 + 0x20;
      FUN_0034b070(&local_50);
      operator_delete(pvVar8);
    }
    if (((bVar3 >> 5 & 1) != 0) && (pvVar8 = *(void **)this, pvVar8 != (void *)0x0)) {
      *(undefined8 *)this = 0;
      pvVar10 = pvVar8;
      do {
        if ((*(byte *)((long)pvVar10 + 0x60) >> 5 & 1) == 0) break;
        *(byte *)((long)pvVar10 + 0x60) = *(byte *)((long)pvVar10 + 0x60) & 0xdf;
        if (*(long **)((long)pvVar10 + 8) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar10 + 8) + 0x30))();
        }
        pvVar10 = *(void **)((long)pvVar10 + 0x10);
      } while (pvVar10 != (void *)0x0);
      iVar5 = FUN_00340fe0(0xffffffff,pvVar8);
      if (iVar5 == 1) {
        if ((*(byte *)((long)pvVar8 + 0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + 0x48));
        }
        local_50 = (long)pvVar8 + 0x20;
        FUN_0034b070(&local_50);
        operator_delete(pvVar8);
      }
    }
    lVar7 = *param_2;
    pFVar9 = *(FocusNode **)(lVar7 + 0x10);
    *(undefined8 *)(lVar7 + 0x18) = 0;
    if (pFVar9 == (FocusNode *)0x0) {
      plVar2 = *(long **)(this + 0x10);
      plVar1 = *(long **)(this + 8);
      plVar6 = plVar1;
      for (; (plVar1 != plVar2 && (plVar6 = plVar1, *plVar1 != lVar7)); plVar1 = plVar1 + 1) {
        plVar6 = plVar2;
      }
      if (plVar6 != plVar2) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
          FUN_004044f8(this + 8);
          return;
        }
        goto LAB_004049f0;
      }
    }
    else {
      FUN_00340fb0(1,lVar7);
      local_50 = lVar7;
      FocusNode::removeChild(pFVar9,&local_50);
      iVar5 = FUN_00340fe0(0xffffffff,lVar7);
      if (iVar5 == 1) {
        FUN_00406a5c(lVar7);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_004049f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004049f4  rive::FocusManager::focusNext =====

/* rive::FocusManager::focusNext() */

bool __thiscall rive::FocusManager::focusNext(FocusManager *this)

{
  long lVar1;
  
  dropFocusIfFocusTargetHidden(this);
  lVar1 = findNextFocusable(this,*(FocusNode **)this,true);
  return lVar1 != 0;
}


// ===== 00404a2c  rive::FocusManager::findNextFocusable =====

/* rive::FocusManager::findNextFocusable(rive::FocusNode*, bool) const */

void __thiscall
rive::FocusManager::findNextFocusable(FocusManager *this,FocusNode *param_1,bool param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  FocusNode *pFVar4;
  long lVar5;
  FocusNode *pFVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  FocusNode *local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  FocusNode *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (FocusNode *)0x0) {
    pFVar6 = (FocusNode *)0x0;
  }
  else {
    pFVar6 = *(FocusNode **)(param_1 + 0x10);
  }
  getTraversableNodes((FocusNode *)this);
  puVar8 = local_88;
  puVar7 = local_88;
  if (local_88 == puStack_80) {
    if (pFVar6 != (FocusNode *)0x0) {
      pFVar4 = (FocusNode *)findNextFocusable(this,pFVar6,param_2);
      goto LAB_00404ce8;
    }
    goto LAB_00404c64;
  }
  do {
    puVar9 = puVar7;
    if ((FocusNode *)*puVar7 == param_1) break;
    puVar7 = puVar7 + 1;
    puVar9 = puStack_80;
  } while (puVar7 != puStack_80);
  if (puVar9 != puStack_80) {
    uVar10 = (long)puVar9 - (long)local_88;
    if (param_2) {
      uVar10 = (long)uVar10 >> 3;
      lVar5 = (long)puStack_80 - (long)local_88;
      uVar11 = uVar10;
      do {
        uVar11 = uVar11 + 1;
        if ((ulong)(lVar5 >> 3) <= uVar11) {
          if (pFVar6 == (FocusNode *)0x0) {
            pFVar4 = (FocusNode *)0x0;
          }
          else {
            bVar2 = (byte)pFVar6[0x60] >> 3 & 3;
            if (bVar2 == 0) {
              pFVar4 = (FocusNode *)findNextFocusable(this,pFVar6,true);
              goto LAB_00404ce8;
            }
            pFVar4 = (FocusNode *)0x0;
            if (bVar2 == 2) goto LAB_00404ce8;
            if (bVar2 == 1) {
              if (puVar9 == puVar8) goto LAB_00404bd8;
              puVar7 = puVar8;
              if (uVar10 < 2) {
                uVar10 = 1;
              }
              goto LAB_00404bac;
            }
          }
          break;
        }
        pFVar4 = (FocusNode *)FUN_0040500c(puVar8[uVar11],this);
      } while (pFVar4 == (FocusNode *)0x0);
    }
    else {
      uVar11 = uVar10 >> 3 & 0xffffffff;
      do {
        if ((int)uVar11 < 1) {
          if (pFVar6 == (FocusNode *)0x0) goto LAB_00404c58;
          bVar2 = (byte)pFVar6[0x60] >> 3 & 3;
          if (bVar2 == 0) {
            pFVar4 = (FocusNode *)findNextFocusable(this,pFVar6,false);
            goto LAB_00404ce8;
          }
          pFVar4 = (FocusNode *)0x0;
          if (bVar2 == 2) goto LAB_00404ce8;
          if (bVar2 == 1) {
            lVar5 = ((long)puStack_80 - (long)puVar8) * 0x20000000 >> 0x20;
            goto LAB_00404c20;
          }
          break;
        }
        pFVar4 = (FocusNode *)FUN_00405144(puVar8[uVar11 - 1],this);
        uVar11 = uVar11 - 1;
      } while (pFVar4 == (FocusNode *)0x0);
    }
    goto LAB_00404c70;
  }
  puVar7 = local_88;
  puVar9 = puStack_80;
  if (!param_2) {
    do {
      if (puVar9 == puVar8) goto LAB_00404c58;
      puVar9 = puVar9 + -1;
      pFVar4 = (FocusNode *)FUN_00405144(*puVar9,this);
    } while (pFVar4 == (FocusNode *)0x0);
    goto LAB_00404c70;
  }
  do {
    pFVar4 = (FocusNode *)FUN_0040500c(*puVar7,this);
    if (pFVar4 != (FocusNode *)0x0) goto LAB_00404c70;
    puVar7 = puVar7 + 1;
  } while (puVar7 != puStack_80);
LAB_00404c58:
  pFVar4 = (FocusNode *)0x0;
  if (param_1 == (FocusNode *)0x0) goto LAB_00404c64;
  goto LAB_00404c78;
  while (pFVar4 = (FocusNode *)FUN_00405144(puVar8[lVar5],this), pFVar4 == (FocusNode *)0x0) {
LAB_00404c20:
    lVar5 = lVar5 + -1;
    puVar7 = puStack_80;
    if (lVar5 <= (long)(uVar10 * 0x20000000) >> 0x20) goto LAB_00404c50;
  }
  goto LAB_00404c70;
  while( true ) {
    puVar7 = puVar7 + -1;
    pFVar4 = (FocusNode *)FUN_00405144(*puVar7,this);
    if (pFVar4 != (FocusNode *)0x0) break;
LAB_00404c50:
    if (puVar7 == puVar8) goto LAB_00404c58;
  }
  goto LAB_00404c70;
  while( true ) {
    uVar10 = uVar10 - 1;
    puVar7 = puVar7 + 1;
    if (uVar10 == 0) break;
LAB_00404bac:
    pFVar4 = (FocusNode *)FUN_0040500c(*puVar7,this);
    if (pFVar4 != (FocusNode *)0x0) goto LAB_00404c70;
  }
LAB_00404bd8:
  do {
    pFVar4 = (FocusNode *)FUN_0040500c(*puVar8,this);
    if (pFVar4 != (FocusNode *)0x0) break;
    puVar8 = puVar8 + 1;
  } while (puVar8 != puStack_80);
LAB_00404c70:
  if (pFVar4 == param_1) {
LAB_00404c64:
    pFVar4 = (FocusNode *)0x0;
  }
  else {
LAB_00404c78:
    if (pFVar4 != (FocusNode *)0x0) {
      FUN_00340fb0(1,pFVar4);
    }
    local_90 = pFVar4;
    setFocus(this,&local_90);
    pFVar6 = local_90;
    if ((local_90 != (FocusNode *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_90), iVar3 == 1)) {
      if (((byte)pFVar6[0x38] & 1) != 0) {
        operator_delete(*(void **)(pFVar6 + 0x48));
      }
      local_70 = pFVar6 + 0x20;
      FUN_0034b070(&local_70);
      operator_delete(pFVar6);
    }
  }
LAB_00404ce8:
  if (local_88 != (undefined8 *)0x0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pFVar4);
  }
  return;
}


// ===== 00404d5c  rive::FocusManager::getTraversableNodes =====

/* rive::FocusManager::getTraversableNodes(rive::FocusNode*) const */

void rive::FocusManager::getTraversableNodes(FocusNode *param_1)

{
  bool bVar1;
  FocusNode *pFVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  void *pvVar7;
  long in_x1;
  long *in_x8;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  
  plVar14 = (long *)0x0;
  *in_x8 = 0;
  in_x8[1] = 0;
  pFVar2 = param_1 + 8;
  if (in_x1 != 0) {
    pFVar2 = (FocusNode *)(in_x1 + 0x20);
  }
  in_x8[2] = 0;
  plVar16 = *(long **)pFVar2;
  plVar3 = *(long **)(pFVar2 + 8);
  if (plVar16 == plVar3) {
    lVar17 = 0;
  }
  else {
    do {
      lVar17 = *plVar16;
      if ((lVar17 != 0) && (((*(byte *)(lVar17 + 0x60) ^ 0xff) & 5) == 0)) {
        if (*(long **)(lVar17 + 8) != (long *)0x0) {
          uVar6 = (**(code **)(**(long **)(lVar17 + 8) + 0x48))();
          if ((uVar6 & 1) == 0) goto LAB_00404dbc;
          lVar17 = *plVar16;
        }
        if (plVar14 < (long *)in_x8[2]) {
          *plVar14 = lVar17;
          plVar14 = plVar14 + 1;
        }
        else {
          plVar15 = (long *)*in_x8;
          lVar18 = (long)plVar14 - (long)plVar15;
          uVar6 = (lVar18 >> 3) + 1;
          if (uVar6 >> 0x3d != 0) {
            FUN_00405580();
LAB_00405008:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar8 = in_x8[2] - (long)plVar15;
          uVar10 = (long)uVar8 >> 2;
          if (uVar10 <= uVar6) {
            uVar10 = uVar6;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar10 >> 0x3d != 0) goto LAB_00405008;
            pvVar7 = operator_new(uVar10 << 3);
          }
          plVar9 = (long *)((long)pvVar7 + (lVar18 >> 3) * 8);
          plVar19 = plVar9 + 1;
          *plVar9 = lVar17;
          plVar12 = plVar14;
          if ((long)plVar14 - (long)plVar15 != 0) {
            uVar6 = ((long)plVar14 - (long)plVar15) - 8;
            if ((((0x147 < uVar6) &&
                 (uVar8 = (long)pvVar7 + lVar18 + -8, uVar8 - (uVar6 & 0xfffffffffffffff8) <= uVar8)
                 ) && ((long *)((long)(plVar14 + -1) - (uVar6 & 0xfffffffffffffff8)) <= plVar14 + -1
                      )) && (0x1f < (ulong)((long)plVar14 + (-lVar18 - (long)pvVar7)))) {
              plVar12 = plVar9 + -2;
              plVar13 = plVar14 + -2;
              uVar6 = (uVar6 >> 3) + 1;
              uVar11 = uVar6 & 0x3ffffffffffffffc;
              plVar14 = plVar14 + -uVar11;
              uVar8 = uVar11;
              do {
                plVar4 = plVar13 + -1;
                lVar20 = plVar13[-2];
                lVar18 = plVar13[1];
                lVar17 = *plVar13;
                uVar8 = uVar8 - 4;
                plVar13 = plVar13 + -4;
                plVar12[-1] = *plVar4;
                plVar12[-2] = lVar20;
                plVar12[1] = lVar18;
                *plVar12 = lVar17;
                plVar12 = plVar12 + -4;
              } while (uVar8 != 0);
              plVar9 = plVar9 + -uVar11;
              plVar12 = plVar15;
              if (uVar6 == uVar11) goto LAB_00404e98;
            }
            do {
              plVar14 = plVar14 + -1;
              plVar9 = plVar9 + -1;
              *plVar9 = *plVar14;
            } while (plVar14 != plVar15);
            plVar12 = (long *)*in_x8;
          }
LAB_00404e98:
          *in_x8 = (long)plVar9;
          in_x8[1] = (long)plVar19;
          in_x8[2] = (long)((long)pvVar7 + uVar10 * 8);
          plVar14 = plVar19;
          if (plVar12 != (long *)0x0) {
            operator_delete(plVar12);
          }
        }
        in_x8[1] = (long)plVar14;
      }
LAB_00404dbc:
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar3);
    lVar17 = *in_x8;
  }
  puVar5 = PTR_nothrow_0067d648;
  uVar10 = (long)plVar14 - lVar17 >> 3;
  uVar6 = uVar10;
  if (0x80 < (long)uVar10) {
    do {
      pvVar7 = operator_new(uVar6 << 3,(nothrow_t *)puVar5);
      if (pvVar7 != (void *)0x0) {
        FUN_0040526c(lVar17,plVar14,uVar10,pvVar7,uVar6);
        operator_delete(pvVar7);
        return;
      }
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar1);
  }
  FUN_0040526c(lVar17,plVar14,uVar10,0,0);
  return;
}


// ===== 0040500c  FUN_0040500c =====

long FUN_0040500c(long param_1,FocusNode *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *local_60;
  undefined8 *puStack_58;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (param_1 != 0) {
    rive::FocusManager::getTraversableNodes(param_2);
    puVar7 = local_60;
    if (local_60 != puStack_58) {
      do {
        lVar4 = FUN_0040500c(*puVar7,param_2);
        if (lVar4 != 0) goto joined_r0x004050fc;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puStack_58);
    }
    if (((*(byte *)(param_1 + 0x60) ^ 0xff) & 5) == 0) {
      if ((*(long **)(param_1 + 8) == (long *)0x0) ||
         (uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x48))(), (uVar5 & 1) != 0)) {
        plVar2 = *(long **)(param_1 + 0x28);
        for (plVar1 = *(long **)(param_1 + 0x20); lVar4 = param_1, plVar1 != plVar2;
            plVar1 = plVar1 + 1) {
          lVar4 = *plVar1;
          if (((lVar4 != 0) && (((*(byte *)(lVar4 + 0x60) ^ 0xff) & 5) == 0)) &&
             ((*(long **)(lVar4 + 8) == (long *)0x0 ||
              (uVar5 = (**(code **)(**(long **)(lVar4 + 8) + 0x48))(), (uVar5 & 1) != 0))))
          goto LAB_004050ec;
        }
      }
      else {
        lVar4 = 0;
      }
    }
    else {
LAB_004050ec:
      lVar4 = 0;
    }
joined_r0x004050fc:
    param_1 = lVar4;
    if (local_60 != (undefined8 *)0x0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00405144  FUN_00405144 =====

long FUN_00405144(long param_1,FocusNode *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *local_60;
  undefined8 *puStack_58;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) goto LAB_0040523c;
  rive::FocusManager::getTraversableNodes(param_2);
  do {
    if (puStack_58 == local_60) {
      if (((*(byte *)(param_1 + 0x60) ^ 0xff) & 5) != 0) goto LAB_00405220;
      if ((*(long **)(param_1 + 8) != (long *)0x0) &&
         (uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x48))(), (uVar5 & 1) == 0)) {
        param_1 = 0;
        goto LAB_00405230;
      }
      plVar1 = *(long **)(param_1 + 0x20);
      plVar2 = *(long **)(param_1 + 0x28);
      goto joined_r0x004051dc;
    }
    puStack_58 = puStack_58 + -1;
    lVar4 = FUN_00405144(*puStack_58,param_2);
  } while (lVar4 == 0);
  goto joined_r0x00405224;
joined_r0x004051dc:
  if (plVar1 == plVar2) goto LAB_00405230;
  lVar4 = *plVar1;
  if (((lVar4 != 0) && (((*(byte *)(lVar4 + 0x60) ^ 0xff) & 5) == 0)) &&
     ((*(long **)(lVar4 + 8) == (long *)0x0 ||
      (uVar5 = (**(code **)(**(long **)(lVar4 + 8) + 0x48))(), (uVar5 & 1) != 0))))
  goto LAB_00405220;
  plVar1 = plVar1 + 1;
  goto joined_r0x004051dc;
LAB_00405230:
  if (local_60 == (undefined8 *)0x0) goto LAB_0040523c;
  goto LAB_00405234;
LAB_00405220:
  lVar4 = 0;
joined_r0x00405224:
  param_1 = lVar4;
  if (local_60 != (undefined8 *)0x0) {
LAB_00405234:
    operator_delete(local_60);
  }
LAB_0040523c:
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040526c  FUN_0040526c =====

void FUN_0040526c(long *param_1,long *param_2,ulong param_3,long *param_4,long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  short sVar5;
  short sVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      lVar9 = *param_1;
      if (*(short *)(param_2[-1] + 0x62) < *(short *)(lVar9 + 0x62)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar9;
      }
    }
    else if ((long)param_3 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar9 = 0;
        plVar10 = param_1;
        plVar11 = param_1 + 1;
        do {
          lVar12 = *plVar11;
          lVar14 = *plVar10;
          sVar5 = *(short *)(lVar12 + 0x62);
          lVar4 = lVar9;
          if (sVar5 < *(short *)(lVar14 + 0x62)) {
            do {
              lVar15 = lVar4;
              *(long *)((long)param_1 + lVar15 + 8) = lVar14;
              plVar10 = param_1;
              if (lVar15 == 0) goto LAB_004052f8;
              lVar14 = *(long *)((long)param_1 + lVar15 + -8);
              lVar4 = lVar15 + -8;
            } while (sVar5 < *(short *)(lVar14 + 0x62));
            plVar10 = (long *)((long)param_1 + lVar15);
LAB_004052f8:
            *plVar10 = lVar12;
          }
          plVar1 = plVar11 + 1;
          lVar9 = lVar9 + 8;
          plVar10 = plVar11;
          plVar11 = plVar1;
        } while (plVar1 != param_2);
      }
    }
    else {
      uVar18 = param_3 >> 1;
      plVar10 = param_1 + uVar18;
      lVar9 = param_3 - uVar18;
      if (param_5 < (long)param_3) {
        FUN_0040526c(param_1,plVar10,uVar18);
        FUN_0040526c(plVar10,param_2,lVar9,param_4,param_5);
        FUN_00405874(param_1,plVar10,param_2,uVar18,lVar9,param_4,param_5);
        return;
      }
      FUN_00405594(param_1,plVar10,uVar18);
      plVar11 = param_4 + uVar18;
      FUN_00405594(plVar10,param_2,lVar9,plVar11);
      plVar1 = param_4 + param_3;
      lVar9 = -1;
      plVar8 = param_1;
      plVar10 = plVar11;
      do {
        plVar13 = plVar10;
        lVar9 = lVar9 + 1;
        if (plVar13 == plVar1) {
          if (param_4 == plVar11) {
            return;
          }
          uVar18 = (long)plVar11 + (-8 - (long)param_4);
          if ((0x37 < uVar18) && (0x1f < (ulong)((long)param_1 + (lVar9 * 8 - (long)param_4)))) {
            lVar9 = 0;
            uVar18 = (uVar18 >> 3) + 1;
            uVar17 = uVar18 & 0x3ffffffffffffffc;
            uVar16 = uVar17;
            do {
              puVar2 = (undefined8 *)((long)param_4 + lVar9);
              puVar3 = (undefined8 *)((long)plVar8 + lVar9);
              uVar16 = uVar16 - 4;
              uVar19 = *puVar2;
              uVar21 = puVar2[3];
              uVar20 = puVar2[2];
              lVar9 = lVar9 + 0x20;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar19;
              puVar3[3] = uVar21;
              puVar3[2] = uVar20;
            } while (uVar16 != 0);
            if (uVar18 == uVar17) {
              return;
            }
            plVar8 = plVar8 + uVar17;
            param_4 = param_4 + uVar17;
          }
          do {
            plVar10 = param_4 + 1;
            *plVar8 = *param_4;
            plVar8 = plVar8 + 1;
            param_4 = plVar10;
          } while (plVar10 != plVar11);
          return;
        }
        sVar5 = *(short *)(*plVar13 + 0x62);
        sVar6 = *(short *)(*param_4 + 0x62);
        lVar4 = *param_4;
        if (sVar5 < sVar6) {
          lVar4 = *plVar13;
        }
        param_4 = param_4 + (sVar6 <= sVar5);
        plVar10 = plVar13 + (sVar5 < sVar6);
        plVar7 = plVar8 + 1;
        *plVar8 = lVar4;
        plVar8 = plVar7;
      } while (param_4 != plVar11);
      if (plVar10 != plVar1) {
        lVar4 = 0;
        if (sVar5 < sVar6) {
          lVar4 = -8;
        }
        uVar18 = (long)plVar1 + (lVar4 - (long)plVar13) + -8;
        if ((0x77 < uVar18) &&
           (0x1f < (ulong)((long)param_1 + lVar4 + (lVar9 * 8 - (long)plVar13) + 8))) {
          lVar9 = 0;
          uVar18 = (uVar18 >> 3) + 1;
          uVar17 = uVar18 & 0x3ffffffffffffffc;
          uVar16 = uVar17;
          do {
            puVar2 = (undefined8 *)((long)plVar10 + lVar9);
            puVar3 = (undefined8 *)((long)plVar7 + lVar9);
            uVar16 = uVar16 - 4;
            uVar19 = *puVar2;
            uVar21 = puVar2[3];
            uVar20 = puVar2[2];
            lVar9 = lVar9 + 0x20;
            puVar3[1] = puVar2[1];
            *puVar3 = uVar19;
            puVar3[3] = uVar21;
            puVar3[2] = uVar20;
          } while (uVar16 != 0);
          if (uVar18 == uVar17) {
            return;
          }
          plVar7 = plVar7 + uVar17;
          plVar10 = plVar10 + uVar17;
        }
        do {
          plVar11 = plVar10 + 1;
          *plVar7 = *plVar10;
          plVar7 = plVar7 + 1;
          plVar10 = plVar11;
        } while (plVar11 != plVar1);
      }
    }
  }
  return;
}


// ===== 00405580  FUN_00405580 =====

void FUN_00405580(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00405594  FUN_00405594 =====

void FUN_00405594(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  short sVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_3 == 0) {
    return;
  }
  plVar5 = param_4;
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (8 < (long)param_3) {
        uVar15 = param_3 >> 1;
        plVar10 = param_1 + uVar15;
        FUN_0040526c(param_1,plVar10,uVar15,param_4,uVar15);
        FUN_0040526c(plVar10,param_2,param_3 - uVar15,param_4 + uVar15,param_3 - uVar15);
        lVar6 = -1;
        plVar7 = param_4;
        plVar5 = param_1;
        plVar12 = plVar10;
        while (plVar11 = plVar12, lVar6 = lVar6 + 1, plVar11 != param_2) {
          sVar3 = *(short *)(*plVar11 + 0x62);
          sVar4 = *(short *)(*plVar5 + 0x62);
          lVar9 = *plVar11;
          if (sVar4 <= sVar3) {
            lVar9 = *plVar5;
          }
          plVar5 = plVar5 + (sVar4 <= sVar3);
          plVar12 = plVar11 + (sVar3 < sVar4);
          plVar8 = plVar7 + 1;
          *plVar7 = lVar9;
          plVar7 = plVar8;
          if (plVar5 == plVar10) {
            if (plVar12 != param_2) {
              lVar9 = -8;
              if (sVar4 <= sVar3) {
                lVar9 = 0;
              }
              uVar15 = (long)param_2 + (lVar9 - (long)plVar11) + -8;
              if ((0x67 < uVar15) &&
                 (0x1f < (ulong)((long)param_4 + lVar9 + (lVar6 * 8 - (long)plVar11) + 8))) {
                lVar6 = 0;
                uVar15 = (uVar15 >> 3) + 1;
                uVar13 = uVar15 & 0x3ffffffffffffffc;
                uVar14 = uVar13;
                do {
                  puVar1 = (undefined8 *)((long)plVar12 + lVar6);
                  puVar2 = (undefined8 *)((long)plVar8 + lVar6);
                  uVar14 = uVar14 - 4;
                  uVar16 = *puVar1;
                  uVar18 = puVar1[3];
                  uVar17 = puVar1[2];
                  lVar6 = lVar6 + 0x20;
                  puVar2[1] = puVar1[1];
                  *puVar2 = uVar16;
                  puVar2[3] = uVar18;
                  puVar2[2] = uVar17;
                } while (uVar14 != 0);
                if (uVar15 == uVar13) {
                  return;
                }
                plVar8 = plVar8 + uVar13;
                plVar12 = plVar12 + uVar13;
              }
              do {
                plVar5 = plVar12 + 1;
                *plVar8 = *plVar12;
                plVar8 = plVar8 + 1;
                plVar12 = plVar5;
              } while (plVar5 != param_2);
            }
            return;
          }
        }
        if (plVar5 == plVar10) {
          return;
        }
        uVar15 = (long)param_1 + (uVar15 * 8 - (long)plVar5) + -8;
        if ((0x37 < uVar15) && (0x1f < (ulong)((long)param_4 + (lVar6 * 8 - (long)plVar5)))) {
          lVar6 = 0;
          uVar15 = (uVar15 >> 3) + 1;
          uVar13 = uVar15 & 0x3ffffffffffffffc;
          uVar14 = uVar13;
          do {
            puVar1 = (undefined8 *)((long)plVar5 + lVar6);
            puVar2 = (undefined8 *)((long)plVar7 + lVar6);
            uVar14 = uVar14 - 4;
            uVar16 = *puVar1;
            uVar18 = puVar1[3];
            uVar17 = puVar1[2];
            lVar6 = lVar6 + 0x20;
            puVar2[1] = puVar1[1];
            *puVar2 = uVar16;
            puVar2[3] = uVar18;
            puVar2[2] = uVar17;
          } while (uVar14 != 0);
          if (uVar15 == uVar13) {
            return;
          }
          plVar5 = plVar5 + uVar13;
          plVar7 = plVar7 + uVar13;
        }
        do {
          plVar12 = plVar5 + 1;
          *plVar7 = *plVar5;
          plVar5 = plVar12;
          plVar7 = plVar7 + 1;
        } while (plVar12 != plVar10);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      plVar5 = param_1 + 1;
      *param_4 = *param_1;
      if (plVar5 == param_2) {
        return;
      }
      lVar6 = 0;
      plVar12 = param_4;
      do {
        if (*(short *)(*plVar5 + 0x62) < *(short *)(*plVar12 + 0x62)) {
          plVar12[1] = *plVar12;
          plVar10 = param_4;
          lVar9 = lVar6;
          if (plVar12 != param_4) {
            do {
              plVar10 = (long *)((long)param_4 + lVar9);
              if (*(short *)(plVar10[-1] + 0x62) <= *(short *)(*plVar5 + 0x62)) break;
              lVar9 = lVar9 + -8;
              *plVar10 = plVar10[-1];
              plVar10 = param_4;
            } while (lVar9 != 0);
          }
          *plVar10 = *plVar5;
        }
        else {
          plVar12[1] = *plVar5;
        }
        plVar5 = plVar5 + 1;
        lVar6 = lVar6 + 8;
        plVar12 = plVar12 + 1;
        if (plVar5 == param_2) {
          return;
        }
      } while( true );
    }
    lVar6 = param_2[-1];
    lVar9 = *param_1;
    if (*(short *)(lVar9 + 0x62) <= *(short *)(lVar6 + 0x62)) {
      param_1 = param_2 + -1;
      lVar6 = lVar9;
    }
    plVar5 = param_4 + 1;
    *param_4 = lVar6;
  }
  *plVar5 = *param_1;
  return;
}


// ===== 00405874  FUN_00405874 =====

void FUN_00405874(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6,
                 long param_7)

{
  short sVar1;
  short sVar2;
  size_t __n;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (param_5 == 0) {
    return;
  }
  while ((param_7 < param_5 && (param_7 < param_4))) {
    if (param_4 == 0) {
      return;
    }
    lVar14 = param_4;
    while (lVar10 = *param_1, *(short *)(lVar10 + 0x62) <= *(short *)(*param_2 + 0x62)) {
      lVar14 = lVar14 + -1;
      param_1 = param_1 + 1;
      if (lVar14 == 0) {
        return;
      }
    }
    if (lVar14 < param_5) {
      lVar10 = param_5;
      if (param_5 < 0) {
        lVar10 = param_5 + 1;
      }
      lVar10 = lVar10 >> 1;
      plVar5 = param_2 + lVar10;
      plVar9 = param_2;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar6 = (long)param_2 - (long)param_1 >> 3;
        plVar9 = param_1;
        do {
          uVar11 = uVar6 >> 1;
          uVar13 = uVar6 + ~uVar11;
          uVar6 = uVar11;
          if (*(short *)(plVar9[uVar11] + 0x62) <= *(short *)(*plVar5 + 0x62)) {
            plVar9 = plVar9 + uVar11 + 1;
            uVar6 = uVar13;
          }
        } while (uVar6 != 0);
      }
      param_4 = (long)plVar9 - (long)param_1 >> 3;
    }
    else {
      if (lVar14 == 1) {
        *param_1 = *param_2;
        *param_2 = lVar10;
        return;
      }
      param_4 = lVar14;
      if (lVar14 < 0) {
        param_4 = lVar14 + 1;
      }
      param_4 = param_4 >> 1;
      plVar9 = param_1 + param_4;
      plVar5 = param_2;
      if (param_2 != param_3) {
        uVar6 = (long)param_3 - (long)param_2 >> 3;
        plVar4 = param_2;
        do {
          uVar13 = uVar6 >> 1;
          plVar5 = plVar4 + uVar13 + 1;
          uVar6 = uVar6 + ~uVar13;
          if (*(short *)(*plVar9 + 0x62) <= *(short *)(plVar4[uVar13] + 0x62)) {
            plVar5 = plVar4;
            uVar6 = uVar13;
          }
          plVar4 = plVar5;
        } while (uVar6 != 0);
      }
      lVar10 = (long)plVar5 - (long)param_2 >> 3;
    }
    plVar4 = plVar5;
    if ((plVar9 != param_2) && (__n = (long)plVar5 - (long)param_2, plVar4 = plVar9, __n != 0)) {
      plVar12 = plVar9 + 1;
      if (plVar12 == param_2) {
        lVar8 = *plVar9;
        memmove(plVar9,param_2,__n);
        *(long *)((long)plVar9 + __n) = lVar8;
        plVar4 = (long *)((long)plVar9 + __n);
      }
      else {
        plVar15 = param_2 + 1;
        if (plVar15 == plVar5) {
          plVar12 = plVar5 + -1;
          lVar8 = *plVar12;
          plVar4 = (long *)((long)plVar5 - ((long)plVar12 - (long)plVar9));
          if ((long)plVar12 - (long)plVar9 != 0) {
            memmove(plVar4,plVar9,(long)plVar12 - (long)plVar9);
          }
          *plVar9 = lVar8;
        }
        else {
          lVar7 = (long)param_2 - (long)plVar9 >> 3;
          lVar8 = lVar7;
          lVar17 = (long)__n >> 3;
          if (lVar7 == (long)__n >> 3) {
            do {
              lVar8 = plVar12[-1];
              plVar12[-1] = plVar15[-1];
              plVar15[-1] = lVar8;
              plVar4 = param_2;
              if (plVar12 == param_2) break;
              bVar3 = plVar15 != plVar5;
              plVar15 = plVar15 + 1;
              plVar12 = plVar12 + 1;
            } while (bVar3);
          }
          else {
            do {
              lVar16 = lVar17;
              lVar17 = 0;
              if (lVar16 != 0) {
                lVar17 = lVar8 / lVar16;
              }
              lVar17 = lVar8 - lVar17 * lVar16;
              lVar8 = lVar16;
            } while (lVar17 != 0);
            plVar4 = plVar9 + lVar16;
            do {
              plVar4 = plVar4 + -1;
              lVar8 = *plVar4;
              plVar15 = plVar4;
              plVar12 = (long *)((long)plVar4 + ((long)param_2 - (long)plVar9));
              do {
                plVar18 = plVar12;
                lVar17 = (long)plVar5 - (long)plVar18 >> 3;
                *plVar15 = *plVar18;
                plVar12 = plVar18 + lVar7;
                if (lVar17 <= lVar7) {
                  plVar12 = plVar9 + (lVar7 - lVar17);
                }
                plVar15 = plVar18;
              } while (plVar12 != plVar4);
              *plVar18 = lVar8;
            } while (plVar4 != plVar9);
            plVar4 = (long *)((long)plVar9 + __n);
          }
        }
      }
    }
    param_5 = param_5 - lVar10;
    if (param_4 + lVar10 < (lVar14 - param_4) + param_5) {
      FUN_00405874(param_1,plVar9,plVar4,param_4,lVar10,param_6,param_7);
      param_1 = plVar4;
      param_2 = plVar5;
      param_4 = lVar14 - param_4;
      if (param_5 == 0) {
        return;
      }
    }
    else {
      FUN_00405874(plVar4,plVar5);
      param_2 = plVar9;
      param_3 = plVar4;
      param_5 = lVar10;
      if (lVar10 == 0) {
        return;
      }
    }
  }
  if (param_5 < param_4) {
    if ((long)param_3 - (long)param_2 == 0) {
      return;
    }
    uVar6 = ((long)param_3 - (long)param_2) - 8;
    plVar5 = param_6;
    plVar9 = param_2;
    if ((0x17 < uVar6) && (0x1f < (ulong)((long)param_6 - (long)param_2))) {
      plVar5 = param_2 + 2;
      plVar9 = param_6 + 2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar11 = uVar6 & 0x3ffffffffffffffc;
      plVar4 = param_6 + uVar11;
      uVar13 = uVar11;
      do {
        plVar12 = plVar5 + -1;
        lVar14 = plVar5[-2];
        lVar8 = plVar5[1];
        lVar10 = *plVar5;
        uVar13 = uVar13 - 4;
        plVar5 = plVar5 + 4;
        plVar9[-1] = *plVar12;
        plVar9[-2] = lVar14;
        plVar9[1] = lVar8;
        *plVar9 = lVar10;
        plVar9 = plVar9 + 4;
      } while (uVar13 != 0);
      if (uVar6 == uVar11) goto LAB_00405d50;
      plVar5 = plVar4;
      plVar9 = param_2 + uVar11;
    }
    do {
      plVar12 = plVar9 + 1;
      plVar4 = plVar5 + 1;
      *plVar5 = *plVar9;
      plVar5 = plVar4;
      plVar9 = plVar12;
    } while (plVar12 != param_3);
LAB_00405d50:
    lVar14 = 0;
    plVar5 = param_3;
    do {
      if (param_2 == param_1) {
        uVar6 = (long)plVar4 + (-8 - (long)param_6);
        if ((0x47 < uVar6) && (0x1f < (ulong)((long)plVar4 + (lVar14 * 8 - (long)param_3)))) {
          uVar6 = (uVar6 >> 3) + 1;
          uVar11 = uVar6 & 0x3ffffffffffffffc;
          lVar14 = 0;
          uVar13 = uVar11;
          do {
            uVar13 = uVar13 - 4;
            uVar21 = *(undefined8 *)((long)plVar4 + lVar14 + -0x20);
            uVar20 = *(undefined8 *)((long)plVar4 + lVar14 + -8);
            uVar19 = *(undefined8 *)((long)plVar4 + lVar14 + -0x10);
            *(undefined8 *)((long)plVar5 + lVar14 + -0x18) =
                 *(undefined8 *)((long)plVar4 + lVar14 + -0x18);
            *(undefined8 *)((long)plVar5 + lVar14 + -0x20) = uVar21;
            *(undefined8 *)((long)plVar5 + lVar14 + -8) = uVar20;
            *(undefined8 *)((long)plVar5 + lVar14 + -0x10) = uVar19;
            lVar14 = lVar14 + -0x20;
          } while (uVar13 != 0);
          if (uVar6 == uVar11) {
            return;
          }
          plVar5 = plVar5 + -uVar11;
          plVar4 = plVar4 + -uVar11;
        }
        do {
          plVar5 = plVar5 + -1;
          plVar4 = plVar4 + -1;
          *plVar5 = *plVar4;
        } while (plVar4 != param_6);
        return;
      }
      lVar14 = lVar14 + 1;
      lVar8 = plVar4[-1];
      lVar10 = param_2[-1];
      plVar9 = param_2 + -1;
      if (*(short *)(lVar10 + 0x62) <= *(short *)(lVar8 + 0x62)) {
        plVar9 = param_2;
        plVar4 = plVar4 + -1;
        lVar10 = lVar8;
      }
      plVar5 = plVar5 + -1;
      *plVar5 = lVar10;
      param_2 = plVar9;
    } while (plVar4 != param_6);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  uVar6 = (long)param_2 + (-8 - (long)param_1);
  plVar5 = param_6;
  plVar9 = param_1;
  if ((0x17 < uVar6) && (0x1f < (ulong)((long)param_6 - (long)param_1))) {
    plVar5 = param_1 + 2;
    plVar9 = param_6 + 2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar11 = uVar6 & 0x3ffffffffffffffc;
    plVar4 = param_6 + uVar11;
    uVar13 = uVar11;
    do {
      plVar12 = plVar5 + -1;
      lVar14 = plVar5[-2];
      lVar8 = plVar5[1];
      lVar10 = *plVar5;
      uVar13 = uVar13 - 4;
      plVar5 = plVar5 + 4;
      plVar9[-1] = *plVar12;
      plVar9[-2] = lVar14;
      plVar9[1] = lVar8;
      *plVar9 = lVar10;
      plVar9 = plVar9 + 4;
    } while (uVar13 != 0);
    if (uVar6 == uVar11) goto LAB_00405cc4;
    plVar5 = plVar4;
    plVar9 = param_1 + uVar11;
  }
  do {
    plVar12 = plVar9 + 1;
    plVar4 = plVar5 + 1;
    *plVar5 = *plVar9;
    plVar5 = plVar4;
    plVar9 = plVar12;
  } while (plVar12 != param_2);
LAB_00405cc4:
  do {
    if (param_2 == param_3) {
      memmove(param_1,param_6,(long)plVar4 - (long)param_6);
      return;
    }
    sVar1 = *(short *)(*param_2 + 0x62);
    sVar2 = *(short *)(*param_6 + 0x62);
    lVar14 = *param_2;
    if (sVar2 <= sVar1) {
      lVar14 = *param_6;
    }
    param_6 = param_6 + (sVar2 <= sVar1);
    param_2 = param_2 + (sVar1 < sVar2);
    *param_1 = lVar14;
    param_1 = param_1 + 1;
  } while (param_6 != plVar4);
  return;
}


// ===== 00405e40  rive::FocusManager::focusPrevious =====

/* rive::FocusManager::focusPrevious() */

bool __thiscall rive::FocusManager::focusPrevious(FocusManager *this)

{
  long lVar1;
  
  dropFocusIfFocusTargetHidden(this);
  lVar1 = findNextFocusable(this,*(FocusNode **)this,false);
  return lVar1 != 0;
}


// ===== 00405e78  rive::FocusManager::findNodeInDirection =====

/* rive::FocusManager::findNodeInDirection(rive::FocusNode*, rive::Direction) const */

long __thiscall
rive::FocusManager::findNodeInDirection(FocusManager *this,long param_1,byte param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *plStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    lVar8 = 0;
    goto LAB_00406250;
  }
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_80 = 0;
  FUN_0040628c(this + 8,&local_90);
  local_a0 = 0;
  uStack_98 = 0;
  fVar14 = *(float *)(param_1 + 0x50);
  fVar16 = *(float *)(param_1 + 0x5c);
  fVar15 = *(float *)(param_1 + 0x54);
  fVar11 = *(float *)(param_1 + 0x58);
  fVar19 = fVar11 - fVar14;
  fVar18 = fVar16 - fVar15;
  if ((fVar19 == 0.0 || fVar19 < 0.0 != NAN(fVar19)) ||
     (fVar18 == 0.0 || fVar18 < 0.0 != NAN(fVar18))) {
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_a0);
      if ((uVar6 & 1) != 0) {
        bVar2 = true;
        goto LAB_00405f90;
      }
      fVar11 = *(float *)(param_1 + 0x58);
      fVar16 = *(float *)(param_1 + 0x5c);
      fVar14 = *(float *)(param_1 + 0x50);
      fVar15 = *(float *)(param_1 + 0x54);
      fVar19 = fVar11 - fVar14;
      fVar18 = fVar16 - fVar15;
    }
    if ((fVar19 != 0.0 && fVar19 < 0.0 == NAN(fVar19)) &&
       (fVar18 != 0.0 && fVar18 < 0.0 == NAN(fVar18))) {
      bVar2 = false;
      local_a8 = (fVar11 + fVar14) * 0.5;
      fStack_a4 = (fVar16 + fVar15) * 0.5;
      goto LAB_00405f90;
    }
    plVar4 = *(long **)(param_1 + 8);
    if ((plVar4 != (long *)0x0) &&
       (uVar6 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_a8), (uVar6 & 1) != 0)) {
      bVar2 = false;
      goto LAB_00405f90;
    }
    lVar8 = 0;
  }
  else {
    uStack_98 = *(undefined8 *)(param_1 + 0x58);
    local_a0 = *(undefined8 *)(param_1 + 0x50);
    bVar2 = true;
LAB_00405f90:
    plVar4 = plStack_88;
    if (local_90 == plStack_88) {
      lVar8 = 0;
    }
    else {
      fVar11 = 3.4028235e+38;
      lVar7 = 0;
      plVar9 = local_90;
      do {
        lVar10 = *plVar9;
        lVar8 = lVar7;
        fVar14 = fVar11;
        if (lVar10 != param_1) {
          local_c0 = 0;
          uStack_b8 = 0;
          if (bVar2) {
            if (lVar10 == 0) goto LAB_00405fcc;
            uVar13 = *(undefined8 *)(lVar10 + 0x50);
            uVar13 = NEON_fcmgt(CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x58) >> 0x20) -
                                         (float)((ulong)uVar13 >> 0x20),
                                         (float)*(undefined8 *)(lVar10 + 0x58) - (float)uVar13),0,4)
            ;
            if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
              plVar5 = *(long **)(lVar10 + 8);
              if ((plVar5 == (long *)0x0) ||
                 (uVar6 = (**(code **)(*plVar5 + 0x40))(plVar5,&local_c0), (uVar6 & 1) == 0))
              goto LAB_00406020;
            }
            else {
              uStack_b8 = *(undefined8 *)(lVar10 + 0x58);
              local_c0 = *(undefined8 *)(lVar10 + 0x50);
            }
            fVar15 = 0.0;
            if (param_3 < 2) {
              fVar14 = (float)local_a0;
              fVar16 = (float)uStack_b8;
              if (param_3 == 0) {
LAB_0040618c:
                fVar12 = fVar14 - fVar16;
                if (fVar12 < 0.0) goto LAB_00405fb8;
                fVar19 = local_a0._4_4_ - uStack_b8._4_4_;
                if (local_a0._4_4_ - uStack_b8._4_4_ <= local_c0._4_4_ - uStack_98._4_4_) {
                  fVar19 = local_c0._4_4_ - uStack_98._4_4_;
                }
                fVar14 = local_c0._4_4_;
                if (local_c0._4_4_ <= local_a0._4_4_) {
                  fVar14 = local_a0._4_4_;
                }
                bVar3 = uStack_b8._4_4_ < uStack_98._4_4_;
                uVar17 = 0x41f00000;
                fVar18 = uStack_b8._4_4_;
                fVar16 = uStack_98._4_4_;
LAB_00406210:
                fVar15 = fVar18;
                if (!bVar3) {
                  fVar15 = fVar16;
                }
                fVar15 = fVar15 - fVar14;
                if (fVar19 <= 0.0) {
                  fVar19 = 0.0;
                }
                if (fVar15 <= 0.0) {
                  fVar15 = 0.0;
                }
              }
              else {
                fVar19 = 0.0;
                uVar17 = 0;
                fVar12 = 0.0;
                fVar14 = (float)local_c0;
                fVar16 = (float)uStack_98;
                if (param_3 == 1) goto LAB_0040618c;
              }
LAB_00406220:
              fVar14 = (float)NEON_fmadd(uVar17,fVar19,fVar12);
              fVar14 = fVar14 - SQRT(fVar15);
            }
            else {
              fVar14 = local_a0._4_4_;
              fVar16 = uStack_b8._4_4_;
              if (param_3 != 2) {
                fVar19 = 0.0;
                uVar17 = 0;
                fVar12 = 0.0;
                fVar14 = local_c0._4_4_;
                fVar16 = uStack_98._4_4_;
                if (param_3 != 3) goto LAB_00406220;
              }
              fVar12 = fVar14 - fVar16;
              if (0.0 <= fVar12) {
                fVar19 = (float)local_a0 - (float)uStack_b8;
                if ((float)local_a0 - (float)uStack_b8 <= (float)local_c0 - (float)uStack_98) {
                  fVar19 = (float)local_c0 - (float)uStack_98;
                }
                fVar14 = (float)local_c0;
                if ((float)local_c0 <= (float)local_a0) {
                  fVar14 = (float)local_a0;
                }
                bVar3 = (float)uStack_b8 < (float)uStack_98;
                uVar17 = 0x40000000;
                fVar18 = (float)uStack_b8;
                fVar16 = (float)uStack_98;
                goto LAB_00406210;
              }
LAB_00405fb8:
              fVar14 = 3.4028235e+38;
            }
          }
          else {
            if (lVar10 == 0) goto LAB_00405fcc;
LAB_00406020:
            fVar15 = (float)*(undefined8 *)(lVar10 + 0x58);
            fVar19 = (float)*(undefined8 *)(lVar10 + 0x50);
            fVar16 = (float)((ulong)*(undefined8 *)(lVar10 + 0x58) >> 0x20);
            fVar12 = (float)((ulong)*(undefined8 *)(lVar10 + 0x50) >> 0x20);
            uVar13 = NEON_fcmgt(CONCAT44(fVar16 - fVar12,fVar15 - fVar19),0,4);
            if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
              plVar5 = *(long **)(lVar10 + 8);
              if ((plVar5 == (long *)0x0) ||
                 (uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,&local_c8), (uVar6 & 1) == 0))
              goto LAB_00405fcc;
            }
            else {
              local_c8 = CONCAT44((fVar16 + fVar12) * 0.5,(fVar15 + fVar19) * 0.5);
            }
            fVar16 = local_c8._4_4_;
            fVar14 = local_a8;
            fVar15 = fStack_a4;
            if (bVar2) {
              fVar16 = (local_a0._4_4_ + uStack_98._4_4_) * 0.5;
              fVar14 = ((float)local_a0 + (float)uStack_98) * 0.5;
              fVar15 = fVar16;
            }
            fVar15 = local_c8._4_4_ - fVar15;
            fVar14 = (float)local_c8 - fVar14;
            if (param_3 < 2) {
              fVar16 = 30.0;
              if (param_3 == 0) {
                fVar16 = 30.0;
                fVar19 = -fVar14;
                goto LAB_00406170;
              }
              fVar19 = fVar14;
              if (param_3 == 1) goto LAB_00406170;
            }
            else {
              if (param_3 == 2) {
                fVar15 = -fVar15;
              }
              else if (param_3 != 3) goto LAB_0040617c;
              fVar16 = 2.0;
              fVar19 = fVar15;
              fVar15 = fVar14;
LAB_00406170:
              fVar14 = fVar19;
              if (fVar14 <= 0.0) goto LAB_00405fb8;
              fVar18 = ABS(fVar15);
            }
LAB_0040617c:
            fVar14 = (float)NEON_fmadd(fVar16,fVar18,fVar14);
          }
          lVar8 = lVar10;
          if (fVar11 <= fVar14) {
            lVar8 = lVar7;
            fVar14 = fVar11;
          }
        }
LAB_00405fcc:
        fVar11 = fVar14;
        plVar9 = plVar9 + 1;
        lVar7 = lVar8;
      } while (plVar9 != plVar4);
    }
  }
  if (local_90 != (long *)0x0) {
    operator_delete(local_90);
  }
LAB_00406250:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040628c  FUN_0040628c =====

void FUN_0040628c(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar13 = *plVar1;
    if (((*(byte *)(lVar13 + 0x60) ^ 0xff) & 5) == 0) {
      plVar12 = *(long **)(lVar13 + 0x20);
      if (plVar12 != *(long **)(lVar13 + 0x28)) {
        do {
          if (((*(byte *)(*plVar12 + 0x60) ^ 0xff) & 5) == 0) goto LAB_004062d0;
          plVar12 = plVar12 + 1;
        } while (plVar12 != *(long **)(lVar13 + 0x28));
        if (lVar13 == 0) goto LAB_004062d0;
      }
      if (*(long **)(lVar13 + 8) != (long *)0x0) {
        uVar3 = (**(code **)(**(long **)(lVar13 + 8) + 0x48))();
        lVar13 = *plVar1;
        if ((uVar3 & 1) == 0) goto LAB_004062d0;
      }
      plVar12 = (long *)param_2[1];
      if (plVar12 < (long *)param_2[2]) {
        plVar14 = plVar12 + 1;
        *plVar12 = lVar13;
      }
      else {
        plVar11 = (long *)*param_2;
        lVar15 = (long)plVar12 - (long)plVar11 >> 3;
        uVar3 = lVar15 + 1;
        if (uVar3 >> 0x3d != 0) {
          FUN_00405580();
LAB_00406474:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        uVar5 = (long)param_2[2] - (long)plVar11;
        uVar7 = (long)uVar5 >> 2;
        if (uVar7 <= uVar3) {
          uVar7 = uVar3;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar7 = 0x1fffffffffffffff;
        }
        if (uVar7 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar7 >> 0x3d != 0) goto LAB_00406474;
          pvVar4 = operator_new(uVar7 << 3);
        }
        plVar6 = (long *)((long)pvVar4 + lVar15 * 8);
        plVar14 = plVar6 + 1;
        *plVar6 = lVar13;
        if ((long)plVar12 - (long)plVar11 != 0) {
          uVar3 = ((long)plVar12 - (long)plVar11) - 8;
          plVar16 = plVar12;
          if ((0x37 < uVar3) &&
             (0x1f < (ulong)((long)plVar12 + (-((long)plVar12 - (long)plVar11) - (long)pvVar4)))) {
            plVar9 = plVar6 + -2;
            plVar10 = plVar12 + -2;
            uVar3 = (uVar3 >> 3) + 1;
            uVar8 = uVar3 & 0x3ffffffffffffffc;
            plVar16 = plVar12 + -uVar8;
            uVar5 = uVar8;
            do {
              plVar12 = plVar10 + -1;
              lVar17 = plVar10[-2];
              lVar15 = plVar10[1];
              lVar13 = *plVar10;
              uVar5 = uVar5 - 4;
              plVar10 = plVar10 + -4;
              plVar9[-1] = *plVar12;
              plVar9[-2] = lVar17;
              plVar9[1] = lVar15;
              *plVar9 = lVar13;
              plVar9 = plVar9 + -4;
            } while (uVar5 != 0);
            plVar6 = plVar6 + -uVar8;
            plVar12 = plVar11;
            if (uVar3 == uVar8) goto LAB_00406438;
          }
          do {
            plVar16 = plVar16 + -1;
            plVar6 = plVar6 + -1;
            *plVar6 = *plVar16;
          } while (plVar16 != plVar11);
          plVar12 = (long *)*param_2;
        }
LAB_00406438:
        *param_2 = (ulong)plVar6;
        param_2[1] = (ulong)plVar14;
        param_2[2] = (ulong)((long)pvVar4 + uVar7 * 8);
        if (plVar12 != (long *)0x0) {
          operator_delete(plVar12);
        }
      }
      lVar13 = *plVar1;
      param_2[1] = (ulong)plVar14;
    }
LAB_004062d0:
    FUN_0040628c(lVar13 + 0x20,param_2);
    plVar1 = plVar1 + 1;
  } while( true );
}


// ===== 00406478  rive::FocusManager::focusLeft =====

/* rive::FocusManager::focusLeft() */

void __thiscall rive::FocusManager::focusLeft(FocusManager *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  dropFocusIfFocusTargetHidden(this);
  pvVar4 = (void *)findNodeInDirection(this,*(undefined8 *)this,0);
  if (pvVar4 != (void *)0x0) {
    FUN_00340fb0(1,pvVar4);
    local_48 = pvVar4;
    setFocus(this,&local_48);
    pvVar2 = local_48;
    if ((local_48 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_48), iVar3 == 1)) {
      if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x48));
      }
      local_40 = (long)pvVar2 + 0x20;
      FUN_0034b070(&local_40);
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar4 != (void *)0x0);
}


// ===== 00406548  rive::FocusManager::focusRight =====

/* rive::FocusManager::focusRight() */

void __thiscall rive::FocusManager::focusRight(FocusManager *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  dropFocusIfFocusTargetHidden(this);
  pvVar4 = (void *)findNodeInDirection(this,*(undefined8 *)this,1);
  if (pvVar4 != (void *)0x0) {
    FUN_00340fb0(1,pvVar4);
    local_48 = pvVar4;
    setFocus(this,&local_48);
    pvVar2 = local_48;
    if ((local_48 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_48), iVar3 == 1)) {
      if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x48));
      }
      local_40 = (long)pvVar2 + 0x20;
      FUN_0034b070(&local_40);
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar4 != (void *)0x0);
}


// ===== 00406618  rive::FocusManager::focusUp =====

/* rive::FocusManager::focusUp() */

void __thiscall rive::FocusManager::focusUp(FocusManager *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  dropFocusIfFocusTargetHidden(this);
  pvVar4 = (void *)findNodeInDirection(this,*(undefined8 *)this,2);
  if (pvVar4 != (void *)0x0) {
    FUN_00340fb0(1,pvVar4);
    local_48 = pvVar4;
    setFocus(this,&local_48);
    pvVar2 = local_48;
    if ((local_48 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_48), iVar3 == 1)) {
      if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x48));
      }
      local_40 = (long)pvVar2 + 0x20;
      FUN_0034b070(&local_40);
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar4 != (void *)0x0);
}


// ===== 004066e8  rive::FocusManager::focusDown =====

/* rive::FocusManager::focusDown() */

void __thiscall rive::FocusManager::focusDown(FocusManager *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  dropFocusIfFocusTargetHidden(this);
  pvVar4 = (void *)findNodeInDirection(this,*(undefined8 *)this,3);
  if (pvVar4 != (void *)0x0) {
    FUN_00340fb0(1,pvVar4);
    local_48 = pvVar4;
    setFocus(this,&local_48);
    pvVar2 = local_48;
    if ((local_48 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_48), iVar3 == 1)) {
      if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x48));
      }
      local_40 = (long)pvVar2 + 0x20;
      FUN_0034b070(&local_40);
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar4 != (void *)0x0);
}


// ===== 004067b8  rive::FocusManager::keyInput =====

/* rive::FocusManager::keyInput(rive::Key, rive::KeyModifiers, bool, bool) */

undefined8 __thiscall
rive::FocusManager::keyInput
          (FocusManager *this,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  dropFocusIfFocusTargetHidden(this);
  lVar3 = *(long *)this;
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    plVar1 = *(long **)(lVar3 + 8);
    if ((plVar1 != (long *)0x0) &&
       (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4 & 1,param_5 & 1),
       (uVar2 & 1) != 0)) break;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  return 1;
}


// ===== 0040683c  rive::FocusManager::textInput =====

/* rive::FocusManager::textInput(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall rive::FocusManager::textInput(FocusManager *this,basic_string *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  dropFocusIfFocusTargetHidden(this);
  lVar3 = *(long *)this;
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    plVar1 = *(long **)(lVar3 + 8);
    if ((plVar1 != (long *)0x0) &&
       (uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1), (uVar2 & 1) != 0)) break;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  return 1;
}


// ===== 00406898  rive::FocusNode::addChild =====

/* rive::FocusNode::addChild(rive::rcp<rive::FocusNode>) */

void __thiscall rive::FocusNode::addChild(FocusNode *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  FocusNode *pFVar6;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    pFVar6 = *(FocusNode **)(lVar5 + 0x10);
    if (pFVar6 != (FocusNode *)0x0) {
      FUN_00340fb0(1,lVar5);
      local_50 = lVar5;
      removeChild(pFVar6,&local_50);
      iVar3 = FUN_00340fe0(0xffffffff,lVar5);
      if (iVar3 == 1) {
        FUN_00406a5c(lVar5);
      }
    }
    lVar5 = *param_2;
    *(FocusNode **)(lVar5 + 0x10) = this;
    plVar1 = *(long **)(this + 0x28);
    if (plVar1 < *(long **)(this + 0x30)) {
      *param_2 = 0;
      plVar4 = plVar1 + 1;
      *plVar1 = lVar5;
    }
    else {
      plVar4 = (long *)FUN_0040461c(this + 0x20,param_2);
    }
    *(long **)(this + 0x28) = plVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00406968  rive::FocusNode::removeChild =====

/* rive::FocusNode::removeChild(rive::rcp<rive::FocusNode>) */

void __thiscall rive::FocusNode::removeChild(FocusNode *this,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (*(FocusNode **)(lVar3 + 0x10) == this)) {
    plVar1 = *(long **)(this + 0x20);
    plVar4 = *(long **)(this + 0x28);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    plVar5 = plVar1;
    for (; (plVar1 != plVar4 && (plVar5 = plVar1, *plVar1 != lVar3)); plVar1 = plVar1 + 1) {
      plVar5 = plVar4;
    }
    if (plVar5 != plVar4) {
      plVar1 = plVar5 + 1;
      if (plVar5 + 1 != plVar4) {
        do {
          plVar5 = plVar1;
          lVar3 = plVar5[-1];
          plVar5[-1] = *plVar5;
          *plVar5 = 0;
          if ((lVar3 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar3), iVar2 == 1)) {
            FUN_00406a5c(lVar3);
          }
          plVar1 = plVar5 + 1;
        } while (plVar5 + 1 != plVar4);
        plVar4 = *(long **)(this + 0x28);
      }
      while (plVar4 != plVar5) {
        plVar4 = plVar4 + -1;
        lVar3 = *plVar4;
        if ((lVar3 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar3), iVar2 == 1)) {
          FUN_00406a5c(lVar3);
        }
      }
      *(long **)(this + 0x28) = plVar5;
    }
  }
  return;
}


// ===== 00406a5c  FUN_00406a5c =====

void FUN_00406a5c(void *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x48));
  }
  plVar4 = *(long **)((long)param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)((long)param_1 + 0x28);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = plVar5 + -1;
        lVar3 = *plVar5;
        if ((lVar3 != 0) && (iVar1 = FUN_00340fe0(0xffffffff,lVar3), iVar1 == 1)) {
          FUN_00406a5c(lVar3);
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)((long)param_1 + 0x20);
    }
    *(long **)((long)param_1 + 0x28) = plVar4;
    operator_delete(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00406aec  rive::FocusNode::removeFromParent =====

/* rive::FocusNode::removeFromParent() */

void __thiscall rive::FocusNode::removeFromParent(FocusNode *this)

{
  long lVar1;
  int iVar2;
  FocusNode *pFVar3;
  FocusNode *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pFVar3 = *(FocusNode **)(this + 0x10);
  if (pFVar3 != (FocusNode *)0x0) {
    FUN_00340fb0(1,this);
    local_40 = this;
    removeChild(pFVar3,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,this);
    if (iVar2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_00406a5c(this);
        return;
      }
      goto LAB_00406b94;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00406b94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00406b98  rive::KeyboardInput::import =====

/* rive::KeyboardInput::import(rive::ImportStack&) */

undefined8 __thiscall rive::KeyboardInput::import(KeyboardInput *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar10 = NEON_cnt(uVar4,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar5 < 2) {
    uVar6 = (ulong)((uint)uVar4 - 1) & 0x299;
  }
  else {
    uVar6 = 0x299;
    if (uVar4 < 0x29a) {
      uVar1 = (uint)uVar4 & 0xffff;
      uVar2 = 0;
      if ((uVar4 & 0xffff) != 0) {
        uVar2 = 0x299 / uVar1;
      }
      uVar6 = (ulong)(0x299 - uVar2 * uVar1);
    }
  }
  plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
  if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
    do {
      uVar8 = plVar7[1];
      if (uVar8 == 0x299) {
        if ((short)plVar7[2] == 0x299) {
          if (plVar7[3] == 0) {
            return 1;
          }
          ListenerInputTypeKeyboard::addKeyboardInput
                    (*(ListenerInputTypeKeyboard **)(plVar7[3] + 8),this);
          uVar4 = *(ulong *)(param_1 + 8);
          if (uVar4 == 0) {
            return 1;
          }
          uVar10 = NEON_cnt(uVar4,1);
          uVar9 = NEON_uaddlv(uVar10,1);
          uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
          uVar5 = (ulong)~(uint)uVar4 & 1;
          if (1 < uVar6) {
            uVar5 = (ulong)(uVar4 - 1 != 0);
          }
          plVar7 = *(long **)(*(long *)param_1 + uVar5 * 8);
          if (plVar7 == (long *)0x0) {
            return 1;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 1;
          }
          do {
            uVar8 = plVar7[1];
            if (uVar8 == 1) {
              if ((short)plVar7[2] == 1) {
                if (plVar7[3] == 0) {
                  return 1;
                }
                Artboard::addObject(*(Artboard **)(plVar7[3] + 8),(Core *)this);
                return 0;
              }
            }
            else {
              if (uVar6 < 2) {
                uVar8 = uVar8 & uVar4 - 1;
              }
              else if (uVar4 <= uVar8) {
                uVar3 = 0;
                if (uVar4 != 0) {
                  uVar3 = uVar8 / uVar4;
                }
                uVar8 = uVar8 - uVar3 * uVar4;
              }
              if (uVar8 != uVar5) {
                return 1;
              }
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return 1;
            }
          } while( true );
        }
      }
      else {
        if (uVar5 < 2) {
          uVar8 = uVar8 & uVar4 - 1;
        }
        else if (uVar4 <= uVar8) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar8 / uVar4;
          }
          uVar8 = uVar8 - uVar3 * uVar4;
        }
        if (uVar8 != uVar6) {
          return 1;
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return 1;
}


// ===== 00406d48  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00406d4c  FUN_00406d4c =====

undefined8 FUN_00406d4c(void)

{
  return 0x298;
}


// ===== 00406d54  FUN_00406d54 =====

bool FUN_00406d54(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x297 < 2;
}


// ===== 00406d68  FUN_00406d68 =====

undefined8 FUN_00406d68(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3cd) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00406ea0;
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
LAB_00406ea0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x14) = (int)uVar3;
    return 1;
  }
  if (param_2 == 0x3cc) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00406e84;
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
LAB_00406e84:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x10) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x3cb) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_00406ebc;
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
LAB_00406ebc:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  return 1;
}


// ===== 00406ed0  FUN_00406ed0 =====

void FUN_00406ed0(void)

{
  return;
}


// ===== 00406ed4  FUN_00406ed4 =====

void FUN_00406ed4(void)

{
  return;
}


// ===== 00406ed8  FUN_00406ed8 =====

void FUN_00406ed8(void)

{
  return;
}


// ===== 00406edc  rive::KeyboardInputBase::clone =====

/* rive::KeyboardInputBase::clone() const */

void __thiscall rive::KeyboardInputBase::clone(KeyboardInputBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)operator_new(0x18);
  puVar2 = PTR_vtable_0067d500;
  uVar4 = *(undefined8 *)(this + 0xc);
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined8 *)((long)plVar3 + 0xc) = uVar4;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  return;
}


// ===== 00406f28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00406f2c  rive::SemanticInput::import =====

/* rive::SemanticInput::import(rive::ImportStack&) */

undefined8 __thiscall rive::SemanticInput::import(SemanticInput *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar10 = NEON_cnt(uVar4,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar5 < 2) {
    uVar6 = (ulong)((uint)uVar4 - 1) & 0x29d;
  }
  else {
    uVar6 = 0x29d;
    if (uVar4 < 0x29e) {
      uVar1 = (uint)uVar4 & 0xffff;
      uVar2 = 0;
      if ((uVar4 & 0xffff) != 0) {
        uVar2 = 0x29d / uVar1;
      }
      uVar6 = (ulong)(0x29d - uVar2 * uVar1);
    }
  }
  plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
  if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
    do {
      uVar8 = plVar7[1];
      if (uVar8 == 0x29d) {
        if ((short)plVar7[2] == 0x29d) {
          if (plVar7[3] == 0) {
            return 1;
          }
          ListenerInputTypeSemantic::addSemanticInput
                    (*(ListenerInputTypeSemantic **)(plVar7[3] + 8),this);
          uVar4 = *(ulong *)(param_1 + 8);
          if (uVar4 == 0) {
            return 1;
          }
          uVar10 = NEON_cnt(uVar4,1);
          uVar9 = NEON_uaddlv(uVar10,1);
          uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
          uVar5 = (ulong)~(uint)uVar4 & 1;
          if (1 < uVar6) {
            uVar5 = (ulong)(uVar4 - 1 != 0);
          }
          plVar7 = *(long **)(*(long *)param_1 + uVar5 * 8);
          if (plVar7 == (long *)0x0) {
            return 1;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 1;
          }
          do {
            uVar8 = plVar7[1];
            if (uVar8 == 1) {
              if ((short)plVar7[2] == 1) {
                if (plVar7[3] == 0) {
                  return 1;
                }
                Artboard::addObject(*(Artboard **)(plVar7[3] + 8),(Core *)this);
                return 0;
              }
            }
            else {
              if (uVar6 < 2) {
                uVar8 = uVar8 & uVar4 - 1;
              }
              else if (uVar4 <= uVar8) {
                uVar3 = 0;
                if (uVar4 != 0) {
                  uVar3 = uVar8 / uVar4;
                }
                uVar8 = uVar8 - uVar3 * uVar4;
              }
              if (uVar8 != uVar5) {
                return 1;
              }
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return 1;
            }
          } while( true );
        }
      }
      else {
        if (uVar5 < 2) {
          uVar8 = uVar8 & uVar4 - 1;
        }
        else if (uVar4 <= uVar8) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar8 / uVar4;
          }
          uVar8 = uVar8 - uVar3 * uVar4;
        }
        if (uVar8 != uVar6) {
          return 1;
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return 1;
}


// ===== 004070dc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004070e0  FUN_004070e0 =====

undefined8 FUN_004070e0(void)

{
  return 0x29e;
}


// ===== 004070e8  FUN_004070e8 =====

bool FUN_004070e8(undefined8 param_1,short param_2)

{
  return param_2 == 0x29e || param_2 == 0x297;
}


// ===== 00407100  FUN_00407100 =====

bool FUN_00407100(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3f2) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00407164;
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
LAB_00407164:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x3f2;
}


// ===== 0040717c  FUN_0040717c =====

void FUN_0040717c(void)

{
  return;
}


// ===== 00407180  rive::SemanticInputBase::clone =====

/* rive::SemanticInputBase::clone() const */

void __thiscall rive::SemanticInputBase::clone(SemanticInputBase *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x10);
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar2 = (long)(PTR_vtable_0067d508 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar2 + 0xc) = uVar1;
  return;
}


// ===== 004071c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004071c4  rive::Joystick::onAddedDirty =====

/* rive::Joystick::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::Joystick::onAddedDirty(Joystick *this,CoreContext *param_1)

{
  Joystick *pJVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  pJVar1 = (Joystick *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pJVar1 = (Joystick *)(param_1 + -0x998);
  }
  *(Joystick **)(this + 0x40) = pJVar1;
  *(Joystick **)(this + 0x80) = pJVar1;
  if (pJVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  if (*(int *)(this + 0xb4) == *(int *)(this + 8)) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    if ((plVar2 == (long *)0x0) ||
       (uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,0x26), (uVar4 & 1) == 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      *(long **)(this + 0x100) = plVar2;
    }
  }
  return uVar3;
}


// ===== 0040727c  rive::Joystick::onAddedClean =====

/* rive::Joystick::onAddedClean(rive::CoreContext*) */

undefined8 rive::Joystick::onAddedClean(CoreContext *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0xa88);
  uVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0xa90) - lVar1 >> 3;
  if (*(uint *)(param_1 + 0xa8) < uVar2) {
    uVar3 = *(undefined8 *)(lVar1 + (ulong)*(uint *)(param_1 + 0xa8) * 8);
  }
  else {
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  if (*(uint *)(param_1 + 0xac) < uVar2) {
    uVar3 = *(undefined8 *)(lVar1 + (ulong)*(uint *)(param_1 + 0xac) * 8);
  }
  else {
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  return 0;
}


// ===== 004072d4  rive::Joystick::buildDependencies =====

/* rive::Joystick::buildDependencies() */

void __thiscall rive::Joystick::buildDependencies(Joystick *this)

{
  if ((*(long *)(this + 0x100) != 0) && (*(Component **)(this + 0x30) != (Component *)0x0)) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    Component::addDependent(*(Component **)(this + 0x100),(Component *)this);
    return;
  }
  return;
}


// ===== 0040731c  rive::Joystick::update =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Joystick::update(rive::ComponentDirt) */

void __thiscall rive::Joystick::update(Joystick *this,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  ushort uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  undefined4 uVar25;
  float fVar26;
  float local_60;
  float fStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  if (((param_2 & 0xc0) == 0) || (*(long *)(this + 0x100) == 0)) goto LAB_004075bc;
  uVar24 = 0;
  local_40 = *(undefined8 *)(this + 0x90);
  fVar22 = (float)_UNK_0024e5b8;
  fVar23 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
  fVar19 = (float)_DAT_0024e5b0;
  fVar21 = (float)((ulong)_DAT_0024e5b0 >> 0x20);
  plVar6 = *(long **)(this + 0x30);
  uStack_48 = _UNK_0024e5b8;
  local_50 = _DAT_0024e5b0;
  if (plVar6 != (long *)0x0) {
    uVar24 = (**(code **)(*plVar6 + 0x18))(plVar6,0x5b);
    if ((uVar24 & 1) == 0) {
      uVar24 = 0;
    }
    else {
      lVar8 = *(long *)(this + 0x30);
      fVar16 = (float)*(undefined8 *)(lVar8 + 0xac);
      fVar20 = (float)((ulong)*(undefined8 *)(lVar8 + 0xac) >> 0x20);
      fVar26 = (float)*(undefined8 *)(lVar8 + 0xa4);
      fVar18 = (float)((ulong)*(undefined8 *)(lVar8 + 0xa4) >> 0x20);
      fVar9 = fVar22 * fVar18;
      fVar19 = fVar16 * fVar21 + fVar26 * 1.0;
      fVar21 = fVar20 * fVar21 + fVar18 * 1.0;
      fVar22 = fVar16 * fVar23 + fVar22 * fVar26;
      fVar23 = fVar20 * fVar23 + fVar9;
      local_60 = (float)local_40;
      fStack_5c = (float)((ulong)local_40 >> 0x20);
      uStack_48 = CONCAT44(fVar23,fVar22);
      local_50 = CONCAT44(fVar21,fVar19);
      uVar24 = (ulong)(uint)fVar21 | CONCAT44(fVar23,fVar22) << 0x20;
      local_40 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0xb4) >> 0x20) +
                          fVar20 * fStack_5c + fVar18 * local_60,
                          (float)*(undefined8 *)(lVar8 + 0xb4) +
                          fVar16 * fStack_5c + fVar26 * local_60);
    }
  }
  auVar12._4_4_ = fVar21;
  auVar12._0_4_ = fVar19;
  auVar12._8_4_ = fVar22;
  auVar12._12_4_ = fVar23;
  auVar12 = NEON_fcmeq(*(undefined1 (*) [16])(this + 0xc0),auVar12,4);
  uVar11 = NEON_cmlt(CONCAT26((ushort)(byte)~auVar12[0xc] << 0xf,
                              CONCAT24((ushort)(byte)~auVar12[8] << 0xf,
                                       CONCAT22((ushort)(byte)~auVar12[4] << 0xf,
                                                (ushort)(byte)~auVar12[0] << 0xf))),0,2);
  uVar10 = NEON_umaxv(uVar11,2);
  if ((uVar10 & 1) == 0) {
    uVar11 = NEON_fcmeq(*(undefined8 *)(this + 0xd0),local_40,4);
    if (((~(byte)uVar11 & 1) != 0) || ((~(byte)((ulong)uVar11 >> 0x20) & 1) != 0))
    goto LAB_00407464;
    uVar13 = *(undefined4 *)(this + 0xdc);
    fVar21 = *(float *)(this + 0xe4);
    fVar19 = *(float *)(this + 0xec);
  }
  else {
LAB_00407464:
    fVar9 = -(float)uVar24;
    *(undefined8 *)(this + 0xd0) = local_40;
    fVar20 = (float)(uVar24 >> 0x20);
    fVar16 = (float)NEON_fmadd(fVar19,fVar23,fVar9 * fVar20);
    *(undefined8 *)(this + 200) = uStack_48;
    *(undefined8 *)(this + 0xc0) = local_50;
    if (fVar16 == 0.0) {
      uVar14 = 0;
      uVar11 = _DAT_0024e5b0;
      uVar17 = _UNK_0024e5b8;
    }
    else {
      auVar15._4_4_ = fVar21;
      auVar15._0_4_ = fVar19;
      auVar15._8_4_ = fVar22;
      auVar15._12_4_ = fVar23;
      auVar2._4_4_ = fVar21;
      auVar2._0_4_ = fVar19;
      auVar2._8_4_ = fVar22;
      auVar2._12_4_ = fVar23;
      auVar12 = NEON_ext(auVar15,auVar2,0xc,1);
      fVar16 = 1.0 / fVar16;
      auVar3._4_4_ = fVar21;
      auVar3._0_4_ = fVar19;
      auVar3._8_4_ = fVar22;
      auVar3._12_4_ = fVar23;
      auVar4._4_4_ = fVar21;
      auVar4._0_4_ = fVar19;
      auVar4._8_4_ = fVar22;
      auVar4._12_4_ = fVar23;
      auVar15 = NEON_ext(auVar3,auVar4,8,1);
      auVar5._4_4_ = fVar21;
      auVar5._0_4_ = fVar19;
      auVar5._8_4_ = fVar22;
      auVar5._12_4_ = fVar23;
      auVar15 = NEON_ext(auVar5,auVar15,0xc,1);
      fVar19 = (float)((ulong)local_40 >> 0x20);
      uVar11 = NEON_rev64(CONCAT44(fVar19 * -auVar12._4_4_,(float)local_40 * -auVar12._0_4_),4);
      uVar14 = NEON_rev64(CONCAT44(fVar16 * ((float)((ulong)uVar11 >> 0x20) + fVar19 * fVar20),
                                   fVar16 * ((float)uVar11 + (float)local_40 * (float)uVar24)),4);
      uVar11 = CONCAT44(fVar9 * fVar16,auVar15._0_4_ * fVar16);
      uVar17 = CONCAT44(auVar15._12_4_ * fVar16,-fVar20 * fVar16);
    }
    uVar13 = (undefined4)((ulong)uVar11 >> 0x20);
    fVar21 = (float)((ulong)uVar17 >> 0x20);
    *(undefined8 *)(this + 0xe0) = uVar17;
    *(undefined8 *)(this + 0xd8) = uVar11;
    fVar19 = (float)((ulong)uVar14 >> 0x20);
    *(undefined8 *)(this + 0xe8) = uVar14;
  }
  fVar22 = *(float *)(this + 0xa0);
  fVar26 = *(float *)(this + 0xa4);
  uVar25 = *(undefined4 *)(*(long *)(this + 0x100) + 0xb4);
  fVar23 = *(float *)(*(long *)(this + 0x100) + 0xb8);
  fVar9 = -(fVar22 * *(float *)(this + 0x98));
  fVar16 = (float)NEON_fmsub(fVar22,*(float *)(this + 0x98),fVar22);
  fVar16 = fVar16 - fVar9;
  fVar20 = (float)NEON_fmadd(uVar13,uVar25,fVar23 * fVar21);
  fVar21 = -(fVar26 * *(float *)(this + 0x9c));
  fVar22 = (float)NEON_fmsub(fVar26,*(float *)(this + 0x9c),fVar26);
  fVar26 = 0.0;
  if (fVar16 != 0.0) {
    fVar23 = (float)NEON_fmadd(*(undefined4 *)(this + 0xd8),uVar25,fVar23 * *(float *)(this + 0xe0))
    ;
    fVar9 = (*(float *)(this + 0xe8) + fVar23) - fVar9;
    fVar26 = (fVar9 + fVar9) / fVar16 + -1.0;
  }
  fVar23 = (fVar19 + fVar20) - fVar21;
  fVar22 = fVar22 - fVar21;
  fVar19 = 0.0;
  if (fVar22 != 0.0) {
    fVar19 = fVar23 + fVar23;
  }
  fVar19 = fVar19 / fVar22 + -1.0;
  if (*(float *)(this + 0x88) != fVar26) {
    *(float *)(this + 0x88) = fVar26;
    (**(code **)(*(long *)this + 0x90))(this);
  }
  if (*(float *)(this + 0x8c) != fVar19) {
    *(float *)(this + 0x8c) = fVar19;
    (**(code **)(*(long *)this + 0x98))(this);
  }
LAB_004075bc:
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004075e8  rive::Joystick::apply =====

/* rive::Joystick::apply(rive::Artboard*) const */

void __thiscall rive::Joystick::apply(Joystick *this,Artboard *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  Core *pCVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar7 = *(long *)(this + 0xf0);
  if (lVar7 != 0) {
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x38));
    fVar13 = *(float *)(this + 0x88);
    if (((byte)this[0xb0] & 1) != 0) {
      fVar13 = -*(float *)(this + 0x88);
    }
    bVar5 = *(char *)(lVar7 + 0x40) != '\0';
    puVar1 = (undefined4 *)(lVar7 + 0x2c);
    if (bVar5) {
      puVar1 = (undefined4 *)(lVar7 + 0x3c);
    }
    fVar12 = 0.0;
    if (bVar5) {
      fVar12 = fVar11;
    }
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x28));
    fVar10 = (float)NEON_ucvtf(*puVar1);
    fVar13 = ABS(fVar10 / fVar11 - fVar12 / fVar11) * (fVar13 + 1.0) * 0.5;
    if (*(char *)(lVar7 + 0x41) != '\0') {
      fVar13 = (float)(int)(fVar13 * fVar11) / fVar11;
    }
    plVar2 = *(long **)(lVar7 + 0x50);
    for (plVar9 = *(long **)(lVar7 + 0x48); plVar9 != plVar2; plVar9 = plVar9 + 1) {
      lVar7 = *plVar9;
      pCVar6 = (Core *)(**(code **)(*(long *)param_1 + 0x348))(param_1,*(undefined4 *)(lVar7 + 0xc))
      ;
      if (pCVar6 != (Core *)0x0) {
        puVar3 = *(undefined8 **)(lVar7 + 0x18);
        for (puVar8 = *(undefined8 **)(lVar7 + 0x10); puVar8 != puVar3; puVar8 = puVar8 + 1) {
          iVar4 = *(int *)((KeyedProperty *)*puVar8 + 0xc);
          if (iVar4 < 0x365) {
            if ((iVar4 != 0x18b) && (iVar4 != 0x191)) {
LAB_004076d4:
              KeyedProperty::apply
                        ((KeyedProperty *)*puVar8,pCVar6,fVar13,1.0,(LinearAnimationInstance *)0x0);
            }
          }
          else if ((iVar4 != 0x365) && (iVar4 != 0x3f8)) goto LAB_004076d4;
        }
      }
    }
  }
  lVar7 = *(long *)(this + 0xf8);
  if (lVar7 != 0) {
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x38));
    fVar13 = *(float *)(this + 0x8c);
    if (((byte)this[0xb0] & 2) != 0) {
      fVar13 = -*(float *)(this + 0x8c);
    }
    bVar5 = *(char *)(lVar7 + 0x40) != '\0';
    puVar1 = (undefined4 *)(lVar7 + 0x2c);
    if (bVar5) {
      puVar1 = (undefined4 *)(lVar7 + 0x3c);
    }
    fVar12 = 0.0;
    if (bVar5) {
      fVar12 = fVar11;
    }
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x28));
    fVar10 = (float)NEON_ucvtf(*puVar1);
    fVar13 = ABS(fVar10 / fVar11 - fVar12 / fVar11) * (fVar13 + 1.0) * 0.5;
    if (*(char *)(lVar7 + 0x41) != '\0') {
      fVar13 = (float)(int)(fVar13 * fVar11) / fVar11;
    }
    plVar2 = *(long **)(lVar7 + 0x50);
    for (plVar9 = *(long **)(lVar7 + 0x48); plVar9 != plVar2; plVar9 = plVar9 + 1) {
      lVar7 = *plVar9;
      pCVar6 = (Core *)(**(code **)(*(long *)param_1 + 0x348))(param_1,*(undefined4 *)(lVar7 + 0xc))
      ;
      if (pCVar6 != (Core *)0x0) {
        puVar3 = *(undefined8 **)(lVar7 + 0x18);
        for (puVar8 = *(undefined8 **)(lVar7 + 0x10); puVar8 != puVar3; puVar8 = puVar8 + 1) {
          iVar4 = *(int *)((KeyedProperty *)*puVar8 + 0xc);
          if (iVar4 < 0x365) {
            if ((iVar4 != 0x18b) && (iVar4 != 0x191)) {
LAB_004077f4:
              KeyedProperty::apply
                        ((KeyedProperty *)*puVar8,pCVar6,fVar13,1.0,(LinearAnimationInstance *)0x0);
            }
          }
          else if ((iVar4 != 0x365) && (iVar4 != 0x3f8)) goto LAB_004077f4;
        }
      }
    }
  }
  puVar3 = *(undefined8 **)(this + 0x110);
  for (puVar8 = *(undefined8 **)(this + 0x108); puVar8 != puVar3; puVar8 = puVar8 + 1) {
    (**(code **)(*(long *)*puVar8 + 0xa0))(0,(long *)*puVar8,0);
  }
  return;
}


// ===== 00407894  rive::Joystick::measureLayout =====

/* rive::Joystick::measureLayout(float, rive::LayoutMeasureMode, float, rive::LayoutMeasureMode) */

float rive::Joystick::measureLayout(float param_1,long param_2,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 3.4028235e+38;
  if (param_3 != '\0') {
    fVar1 = param_1;
  }
  fVar2 = *(float *)(param_2 + 0xa0);
  if (fVar1 <= *(float *)(param_2 + 0xa0)) {
    fVar2 = fVar1;
  }
  return fVar2;
}


// ===== 004078c4  rive::Joystick::measureLayout =====

/* non-virtual thunk to rive::Joystick::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

float __thiscall rive::Joystick::measureLayout(float param_1,Joystick *this,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 3.4028235e+38;
  if (param_3 != '\0') {
    fVar1 = param_1;
  }
  fVar2 = *(float *)(this + -0x18);
  if (fVar1 <= *(float *)(this + -0x18)) {
    fVar2 = fVar1;
  }
  return fVar2;
}


// ===== 004078f4  rive::Joystick::controlSize =====

/* rive::Joystick::controlSize(rive::Vec2D, rive::LayoutScaleType, rive::LayoutScaleType,
   rive::LayoutDirection) */

void rive::Joystick::controlSize(float param_1,float param_2,long *param_3)

{
  if (*(float *)(param_3 + 0x14) != param_1) {
    *(float *)(param_3 + 0x14) = param_1;
    (**(code **)(*param_3 + 0xc0))(param_3);
  }
  if (*(float *)((long)param_3 + 0xa4) != param_2) {
    *(float *)((long)param_3 + 0xa4) = param_2;
    (**(code **)(*param_3 + 200))(param_3);
  }
  if (*(float *)(param_3 + 0x12) != param_1 * *(float *)(param_3 + 0x13)) {
    *(float *)(param_3 + 0x12) = param_1 * *(float *)(param_3 + 0x13);
    (**(code **)(*param_3 + 0xa0))(param_3);
  }
  param_2 = param_2 * *(float *)((long)param_3 + 0x9c);
  if (*(float *)((long)param_3 + 0x94) == param_2) {
    return;
  }
  *(float *)((long)param_3 + 0x94) = param_2;
                    /* WARNING: Could not recover jumptable at 0x004079b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0xa8))(param_3);
  return;
}


// ===== 004079bc  rive::Joystick::controlSize =====

/* non-virtual thunk to rive::Joystick::controlSize(rive::Vec2D, rive::LayoutScaleType,
   rive::LayoutScaleType, rive::LayoutDirection) */

void __thiscall rive::Joystick::controlSize(float param_1,float param_2,Joystick *this)

{
  Joystick *pJVar1;
  
  pJVar1 = this + -0xb8;
  if (*(float *)(this + -0x18) != param_1) {
    *(float *)(this + -0x18) = param_1;
    (**(code **)(*(long *)(this + -0xb8) + 0xc0))(pJVar1);
  }
  if (*(float *)(this + -0x14) != param_2) {
    *(float *)(this + -0x14) = param_2;
    (**(code **)(*(long *)(this + -0xb8) + 200))(pJVar1);
  }
  if (*(float *)(this + -0x28) != param_1 * *(float *)(this + -0x20)) {
    *(float *)(this + -0x28) = param_1 * *(float *)(this + -0x20);
    (**(code **)(*(long *)(this + -0xb8) + 0xa0))(pJVar1);
  }
  if (*(float *)(this + -0x24) == param_2 * *(float *)(this + -0x1c)) {
    return;
  }
  *(float *)(this + -0x24) = param_2 * *(float *)(this + -0x1c);
                    /* WARNING: Could not recover jumptable at 0x00407a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xb8) + 0xa8))(pJVar1);
  return;
}


// ===== 00407a88  rive::Joystick::xChanged =====

/* rive::Joystick::xChanged() */

void __thiscall rive::Joystick::xChanged(Joystick *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((*(ushort *)(plVar3 + 0xc) >> 2 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 4;
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


// ===== 00407af0  rive::Joystick::yChanged =====

/* rive::Joystick::yChanged() */

void __thiscall rive::Joystick::yChanged(Joystick *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((*(ushort *)(plVar3 + 0xc) >> 2 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 4;
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


// ===== 00407b58  rive::Joystick::posXChanged =====

/* rive::Joystick::posXChanged() */

void __thiscall rive::Joystick::posXChanged(Joystick *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((*(ushort *)(plVar3 + 0xc) >> 2 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 4;
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


// ===== 00407bc0  rive::Joystick::posYChanged =====

/* rive::Joystick::posYChanged() */

void __thiscall rive::Joystick::posYChanged(Joystick *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((*(ushort *)(plVar3 + 0xc) >> 2 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 4;
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


// ===== 00407c28  rive::Joystick::widthChanged =====

/* rive::Joystick::widthChanged() */

void __thiscall rive::Joystick::widthChanged(Joystick *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((*(ushort *)(plVar3 + 0xc) >> 2 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 4;
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


// ===== 00407c90  rive::Joystick::heightChanged =====

/* rive::Joystick::heightChanged() */

void __thiscall rive::Joystick::heightChanged(Joystick *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((*(ushort *)(plVar3 + 0xc) >> 2 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 4;
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


// ===== 00407cf8  rive::Joystick::addAnimationDependents =====

/* rive::Joystick::addAnimationDependents(rive::Artboard*, rive::LinearAnimation*) */

void __thiscall
rive::Joystick::addAnimationDependents(Joystick *this,Artboard *param_1,LinearAnimation *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if (*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) != 0) {
    uVar4 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3;
    uVar13 = 0;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x348))
                                 (param_1,*(undefined4 *)
                                           (*(long *)(*(long *)(param_2 + 0x48) + uVar13 * 8) + 0xc)
                                 );
      if ((plVar1 != (long *)0x0) &&
         (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x62), (uVar2 & 1) != 0)) {
        plVar12 = *(long **)(this + 0x110);
        if (plVar12 < *(long **)(this + 0x118)) {
          plVar14 = plVar12 + 1;
          *plVar12 = (long)plVar1;
        }
        else {
          plVar11 = *(long **)(this + 0x108);
          lVar15 = (long)plVar12 - (long)plVar11 >> 3;
          uVar2 = lVar15 + 1;
          if (uVar2 >> 0x3d != 0) {
            FUN_00407ed8();
LAB_00407ed4:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar5 = (long)*(long **)(this + 0x118) - (long)plVar11;
          uVar7 = (long)uVar5 >> 2;
          if (uVar7 <= uVar2) {
            uVar7 = uVar2;
          }
          if (0x7ffffffffffffff7 < uVar5) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            if (uVar7 >> 0x3d != 0) goto LAB_00407ed4;
            pvVar3 = operator_new(uVar7 << 3);
          }
          plVar6 = (long *)((long)pvVar3 + lVar15 * 8);
          plVar14 = plVar6 + 1;
          *plVar6 = (long)plVar1;
          if ((long)plVar12 - (long)plVar11 != 0) {
            uVar2 = ((long)plVar12 - (long)plVar11) - 8;
            plVar1 = plVar12;
            if ((0x37 < uVar2) &&
               (0x1f < (ulong)((long)plVar12 + (-((long)plVar12 - (long)plVar11) - (long)pvVar3))))
            {
              plVar9 = plVar6 + -2;
              plVar10 = plVar12 + -2;
              uVar2 = (uVar2 >> 3) + 1;
              uVar8 = uVar2 & 0x3ffffffffffffffc;
              plVar1 = plVar12 + -uVar8;
              uVar5 = uVar8;
              do {
                plVar12 = plVar10 + -1;
                lVar17 = plVar10[-2];
                lVar16 = plVar10[1];
                lVar15 = *plVar10;
                uVar5 = uVar5 - 4;
                plVar10 = plVar10 + -4;
                plVar9[-1] = *plVar12;
                plVar9[-2] = lVar17;
                plVar9[1] = lVar16;
                *plVar9 = lVar15;
                plVar9 = plVar9 + -4;
              } while (uVar5 != 0);
              plVar6 = plVar6 + -uVar8;
              plVar12 = plVar11;
              if (uVar2 == uVar8) goto LAB_00407e90;
            }
            do {
              plVar1 = plVar1 + -1;
              plVar6 = plVar6 + -1;
              *plVar6 = *plVar1;
            } while (plVar1 != plVar11);
            plVar12 = *(long **)(this + 0x108);
          }
LAB_00407e90:
          *(long **)(this + 0x108) = plVar6;
          *(long **)(this + 0x110) = plVar14;
          *(void **)(this + 0x118) = (void *)((long)pvVar3 + uVar7 * 8);
          if (plVar12 != (long *)0x0) {
            operator_delete(plVar12);
          }
        }
        *(long **)(this + 0x110) = plVar14;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  return;
}


// ===== 00407ed8  FUN_00407ed8 =====

void FUN_00407ed8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00407eec  rive::Joystick::addDependents =====

/* rive::Joystick::addDependents(rive::Artboard*) */

void __thiscall rive::Joystick::addDependents(Joystick *this,Artboard *param_1)

{
  if (*(LinearAnimation **)(this + 0xf8) != (LinearAnimation *)0x0) {
    addAnimationDependents(this,param_1,*(LinearAnimation **)(this + 0xf8));
  }
  if (*(LinearAnimation **)(this + 0xf0) != (LinearAnimation *)0x0) {
    addAnimationDependents(this,param_1,*(LinearAnimation **)(this + 0xf0));
    return;
  }
  return;
}


// ===== 00407f3c  FUN_00407f3c =====

void FUN_00407f3c(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x21];
  puVar1 = PTR_vtable_0067d448 + 0x128;
  *param_1 = (long)(PTR_vtable_0067d448 + 0x10);
  param_1[0x17] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x22] = (long)pvVar2;
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


// ===== 00407fd4  FUN_00407fd4 =====

void FUN_00407fd4(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x21];
  puVar1 = PTR_vtable_0067d448 + 0x128;
  *param_1 = (long)(PTR_vtable_0067d448 + 0x10);
  param_1[0x17] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x22] = (long)pvVar2;
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


// ===== 00408068  FUN_00408068 =====

undefined8 FUN_00408068(void)

{
  return 0x94;
}


// ===== 00408070  FUN_00408070 =====

bool FUN_00408070(undefined8 param_1,short param_2)

{
  return param_2 == 0x94 || param_2 == 10;
}


// ===== 00408084  FUN_00408084 =====

undefined8 FUN_00408084(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x130) {
    if (param_2 < 300) {
      if (param_2 == 4) {
        pcVar12 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004084a8;
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
LAB_004084a8:
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
          if (param_2 == 299) {
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
          goto LAB_00408520;
        }
        uVar14 = 0;
        uVar6 = 0;
        pbVar11 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00408510;
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
LAB_00408510:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x28) = (int)uVar6;
      }
    }
    else if (param_2 < 0x12e) {
      if (param_2 == 300) {
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
        goto LAB_00408520;
      }
      if (param_2 != 0x12d) goto LAB_00408520;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004084e0;
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
LAB_004084e0:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xa8) = (int)uVar6;
    }
    else {
      if (param_2 != 0x12e) {
        if (param_2 == 0x12f) {
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
        goto LAB_00408520;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00408474;
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
LAB_00408474:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xac) = (int)uVar6;
    }
  }
  else {
    if (param_2 < 0x133) {
      if (param_2 == 0x130) {
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
      else if (param_2 == 0x131) {
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
      else if (param_2 == 0x132) {
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
      goto LAB_00408520;
    }
    if (param_2 < 0x138) {
      if (param_2 == 0x133) {
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
        *(undefined4 *)(param_1 + 0x98) = uVar15;
      }
      else if (param_2 == 0x134) {
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
        *(undefined4 *)(param_1 + 0x9c) = uVar15;
      }
      goto LAB_00408520;
    }
    if (param_2 == 0x138) {
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0040848c;
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
LAB_0040848c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xb0) = (int)uVar6;
    }
    else {
      if (param_2 != 0x139) goto LAB_00408520;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004084f8;
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
LAB_004084f8:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xb4) = (int)uVar6;
    }
  }
  uVar5 = 1;
LAB_00408520:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00408608  FUN_00408608 =====

void FUN_00408608(void)

{
  return;
}


// ===== 0040860c  FUN_0040860c =====

void FUN_0040860c(void)

{
  return;
}


// ===== 00408610  FUN_00408610 =====

void FUN_00408610(void)

{
  return;
}


// ===== 00408614  FUN_00408614 =====

void FUN_00408614(void)

{
  return;
}


// ===== 00408618  FUN_00408618 =====

void FUN_00408618(void)

{
  return;
}


// ===== 0040861c  FUN_0040861c =====

void FUN_0040861c(void)

{
  return;
}


// ===== 00408620  FUN_00408620 =====

undefined8 FUN_00408620(void)

{
  return 0;
}


// ===== 00408628  FUN_00408628 =====

undefined8 FUN_00408628(void)

{
  return 0;
}


// ===== 00408630  rive::JoystickBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::JoystickBase::clone() const */

long * __thiscall rive::JoystickBase::clone(JoystickBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)operator_new(0x120);
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
  puVar1 = PTR_vtable_0067d448;
  plVar2[0x21] = 0;
  plVar2[0x20] = 0;
  plVar2[0x23] = 0;
  plVar2[0x22] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1e] = 0;
  lVar4 = *(long *)(this + 0xa0);
  lVar3 = *(long *)(this + 0x98);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0x17] = (long)(puVar1 + 0x128);
  lVar6 = _UNK_00281c00;
  lVar5 = _DAT_00281bf8;
  plVar2[0xf] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x19] = lVar6;
  plVar2[0x18] = lVar5;
  plVar2[0x1c] = lVar6;
  plVar2[0x1b] = lVar5;
  lVar6 = *(long *)(this + 0x90);
  lVar5 = *(long *)(this + 0x88);
  plVar2[0x1a] = 0;
  plVar2[0x12] = lVar6;
  plVar2[0x11] = lVar5;
  lVar6 = *(long *)(this + 0xb0);
  lVar5 = *(long *)(this + 0xa8);
  plVar2[0x1d] = 0;
  plVar2[0x14] = lVar4;
  plVar2[0x13] = lVar3;
  plVar2[0x16] = lVar6;
  plVar2[0x15] = lVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004086f8  FUN_004086f8 =====

void FUN_004086f8(long *param_1)

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


// ===== 00408764  FUN_00408764 =====

void FUN_00408764(void)

{
  return;
}


// ===== 00408768  FUN_00408768 =====

void FUN_00408768(void)

{
  return;
}


// ===== 0040876c  FUN_0040876c =====

void FUN_0040876c(void)

{
  return;
}


// ===== 00408770  FUN_00408770 =====

void FUN_00408770(void)

{
  return;
}


// ===== 00408774  FUN_00408774 =====

void FUN_00408774(void)

{
  return;
}


// ===== 00408778  FUN_00408778 =====

void FUN_00408778(void)

{
  return;
}


// ===== 0040877c  rive::ArtboardComponentListOverride::addArtboard =====

/* rive::ArtboardComponentListOverride::addArtboard(rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentListOverride::addArtboard
          (ArtboardComponentListOverride *this,ArtboardInstance *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xb0);
  if (puVar10 < *(undefined8 **)(this + 0xb8)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004088b8;
  }
  puVar9 = *(undefined8 **)(this + 0xa8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003702dc();
LAB_004088ec:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xb8) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004088ec;
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
      if (uVar6 == uVar7) goto LAB_004088a4;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xa8);
  }
LAB_004088a4:
  *(undefined8 **)(this + 0xa8) = puVar4;
  *(undefined8 **)(this + 0xb0) = puVar13;
  *(void **)(this + 0xb8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004088b8:
  *(undefined8 **)(this + 0xb0) = puVar13;
  FUN_004088f0(this + 0xc0,param_1);
  FUN_00408ad4(this + 0xc0,param_1);
  return;
}


// ===== 004088f0  FUN_004088f0 =====

void FUN_004088f0(long *param_1,LayoutComponent *param_2)

{
  int iVar1;
  uint uVar2;
  LayoutComponent LVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  Artboard *this;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  
  if (param_2 == (LayoutComponent *)0x0) {
    return;
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + 0x30);
  uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x22f);
  if ((uVar6 & 1) == 0) {
LAB_00408970:
    LVar3 = (LayoutComponent)0x1;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x30);
    plVar5 = *(long **)(lVar8 + 0x30);
    if (plVar5 == (long *)0x0) goto LAB_00408970;
    uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x199);
    LVar3 = (LayoutComponent)0x1;
    if ((((uVar6 & 1) != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x1e8), lVar8 != 0)) {
      LVar3 = (LayoutComponent)((*(uint *)(lVar8 + 0x11c) & 0xfffffffe) == 2);
    }
  }
  iVar1 = *(int *)(*param_1 + 0x9c);
  if (iVar1 == 2) {
    param_2[0x975] = (LayoutComponent)0x1;
    *(undefined4 *)(param_2 + 0x968) = 3;
  }
  else {
    if (iVar1 == 1) {
      param_2[0x975] = (LayoutComponent)0x0;
      *(undefined4 *)(param_2 + 0x968) = 1;
      (**(code **)(*(long *)param_2 + 0x2e0))(param_2,0);
      fVar9 = *(float *)(*param_1 + 0x8c);
      if (fVar9 == -1.0) {
        fVar9 = *(float *)(param_2 + 0xc28);
      }
      uVar7 = 3;
    }
    else {
      if (iVar1 != 0) goto LAB_00408a3c;
      param_2[0x975] = (LayoutComponent)0x0;
      *(undefined4 *)(param_2 + 0x968) = 1;
      (**(code **)(*(long *)param_2 + 0x2e0))(param_2,0);
      fVar9 = *(float *)(*param_1 + 0x8c);
      if (fVar9 == -1.0) {
        fVar9 = *(float *)(param_2 + 0xc28);
      }
      uVar7 = *(undefined4 *)(*param_1 + 0x94);
    }
    *(float *)(param_2 + 0x964) = fVar9;
    *(undefined4 *)(param_2 + 0x968) = uVar7;
    param_2[0x974] = LVar3;
  }
  (**(code **)(*(long *)param_2 + 0x2e0))(param_2,0);
LAB_00408a3c:
  lVar8 = *param_1;
  this = *(Artboard **)(lVar8 + 0x40);
  if (this != (Artboard *)0x0) {
    rive::Artboard::markLayoutDirty(this,param_2);
    plVar5 = *(long **)(lVar8 + 0x40);
    do {
      *(undefined1 *)(plVar5 + 0x4e) = 0;
      plVar5[0x4d] = 0;
      *(undefined4 *)((long)plVar5 + 0x274) = 0;
      if ((*(ushort *)(plVar5 + 0xc) >> 0xb & 1) == 0) {
        *(ushort *)(plVar5 + 0xc) = *(ushort *)(plVar5 + 0xc) | 0x800;
        (**(code **)(*plVar5 + 0x70))(plVar5);
        lVar8 = plVar5[0x10];
        uVar2 = *(uint *)(plVar5 + 7);
        *(undefined1 *)(lVar8 + 0xc32) = 1;
        *(ushort *)(lVar8 + 0x60) = *(ushort *)(lVar8 + 0x60) | 4;
        if (uVar2 < *(uint *)(lVar8 + 0xbd4)) {
          *(uint *)(lVar8 + 0xbd4) = uVar2;
        }
      }
      bVar4 = (long *)plVar5[8] != plVar5;
      plVar5 = (long *)plVar5[8];
    } while (bVar4);
  }
  return;
}


// ===== 00408ad4  FUN_00408ad4 =====

void FUN_00408ad4(long *param_1,LayoutComponent *param_2)

{
  int iVar1;
  uint uVar2;
  LayoutComponent LVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  Artboard *this;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  
  if (param_2 == (LayoutComponent *)0x0) {
    return;
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + 0x30);
  uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x22f);
  if ((uVar6 & 1) == 0) {
LAB_00408b54:
    LVar3 = (LayoutComponent)0x1;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x30);
    plVar5 = *(long **)(lVar8 + 0x30);
    if (plVar5 == (long *)0x0) goto LAB_00408b54;
    uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x199);
    LVar3 = (LayoutComponent)0x1;
    if ((((uVar6 & 1) != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x1e8), lVar8 != 0)) {
      LVar3 = (LayoutComponent)((*(uint *)(lVar8 + 0x11c) & 0xfffffffe) == 2);
    }
  }
  iVar1 = *(int *)(*param_1 + 0xa0);
  if (iVar1 == 1) {
    param_2[0x976] = (LayoutComponent)0x0;
    *(undefined4 *)(param_2 + 0x970) = 1;
    (**(code **)(*(long *)param_2 + 0x2e0))(param_2,0);
    fVar9 = *(float *)(*param_1 + 0x90);
    if (fVar9 == -1.0) {
      fVar9 = *(float *)(param_2 + 0xc2c);
    }
    uVar7 = 3;
LAB_00408be8:
    *(float *)(param_2 + 0x96c) = fVar9;
    *(undefined4 *)(param_2 + 0x970) = uVar7;
    param_2[0x974] = LVar3;
  }
  else {
    if (iVar1 == 0) {
      param_2[0x976] = (LayoutComponent)0x0;
      *(undefined4 *)(param_2 + 0x970) = 1;
      (**(code **)(*(long *)param_2 + 0x2e0))(param_2,0);
      fVar9 = *(float *)(*param_1 + 0x90);
      if (fVar9 == -1.0) {
        fVar9 = *(float *)(param_2 + 0xc2c);
      }
      uVar7 = *(undefined4 *)(*param_1 + 0x98);
      goto LAB_00408be8;
    }
    if (*(int *)(*param_1 + 0x9c) != 2) goto LAB_00408c08;
    param_2[0x976] = (LayoutComponent)0x1;
    *(undefined4 *)(param_2 + 0x970) = 3;
  }
  (**(code **)(*(long *)param_2 + 0x2e0))(param_2,0);
LAB_00408c08:
  lVar8 = *param_1;
  this = *(Artboard **)(lVar8 + 0x40);
  if (this != (Artboard *)0x0) {
    rive::Artboard::markLayoutDirty(this,param_2);
    plVar5 = *(long **)(lVar8 + 0x40);
    do {
      *(undefined1 *)(plVar5 + 0x4e) = 0;
      plVar5[0x4d] = 0;
      *(undefined4 *)((long)plVar5 + 0x274) = 0;
      if ((*(ushort *)(plVar5 + 0xc) >> 0xb & 1) == 0) {
        *(ushort *)(plVar5 + 0xc) = *(ushort *)(plVar5 + 0xc) | 0x800;
        (**(code **)(*plVar5 + 0x70))(plVar5);
        lVar8 = plVar5[0x10];
        uVar2 = *(uint *)(plVar5 + 7);
        *(undefined1 *)(lVar8 + 0xc32) = 1;
        *(ushort *)(lVar8 + 0x60) = *(ushort *)(lVar8 + 0x60) | 4;
        if (uVar2 < *(uint *)(lVar8 + 0xbd4)) {
          *(uint *)(lVar8 + 0xbd4) = uVar2;
        }
      }
      bVar4 = (long *)plVar5[8] != plVar5;
      plVar5 = (long *)plVar5[8];
    } while (bVar4);
  }
  return;
}


// ===== 00408cc0  rive::ArtboardComponentListOverride::removeArtboard =====

/* WARNING: Removing unreachable block (ram,0x00408d5c) */
/* rive::ArtboardComponentListOverride::removeArtboard(rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentListOverride::removeArtboard
          (ArtboardComponentListOverride *this,ArtboardInstance *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  puVar4 = *(undefined8 **)(this + 0xa8);
  puVar2 = puVar4;
  for (; (puVar4 != puVar1 && (puVar2 = puVar4, (ArtboardInstance *)*puVar4 != param_1));
      puVar4 = puVar4 + 1) {
    puVar2 = puVar1;
  }
  if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
    do {
      puVar2 = puVar3;
      if ((ArtboardInstance *)*puVar4 != param_1) {
        puVar2 = puVar3 + 1;
        *puVar3 = (ArtboardInstance *)*puVar4;
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar2;
    } while (puVar4 != puVar1);
    puVar1 = *(undefined8 **)(this + 0xb0);
  }
  if (puVar2 != puVar1) {
    *(undefined8 **)(this + 0xb0) = puVar2;
  }
  return;
}


// ===== 00408d80  rive::ArtboardComponentListOverride::isRow =====

/* rive::ArtboardComponentListOverride::isRow() */

bool __thiscall rive::ArtboardComponentListOverride::isRow(ArtboardComponentListOverride *this)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x22f);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar3 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
      if ((uVar1 & 1) == 0) {
        return true;
      }
      lVar3 = *(long *)(lVar3 + 0x30);
      if (lVar3 == 0) {
        return true;
      }
      lVar3 = *(long *)(lVar3 + 0x1e8);
      if (lVar3 == 0) {
        return true;
      }
      return (*(uint *)(lVar3 + 0x11c) & 0xfffffffe) == 2;
    }
  }
  return true;
}


// ===== 00408e04  rive::ArtboardComponentListOverride::updateWidthOverride =====

/* rive::ArtboardComponentListOverride::updateWidthOverride() */

void __thiscall
rive::ArtboardComponentListOverride::updateWidthOverride(ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_004088f0(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00408e48  rive::ArtboardComponentListOverride::updateHeightOverride =====

/* rive::ArtboardComponentListOverride::updateHeightOverride() */

void __thiscall
rive::ArtboardComponentListOverride::updateHeightOverride(ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00408ad4(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00408e8c  rive::ArtboardComponentListOverride::instanceWidthChanged =====

/* rive::ArtboardComponentListOverride::instanceWidthChanged() */

void __thiscall
rive::ArtboardComponentListOverride::instanceWidthChanged(ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_004088f0(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00408ed0  rive::ArtboardComponentListOverride::instanceHeightChanged =====

/* rive::ArtboardComponentListOverride::instanceHeightChanged() */

void __thiscall
rive::ArtboardComponentListOverride::instanceHeightChanged(ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00408ad4(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00408f14  rive::ArtboardComponentListOverride::instanceWidthUnitsValueChanged =====

/* rive::ArtboardComponentListOverride::instanceWidthUnitsValueChanged() */

void __thiscall
rive::ArtboardComponentListOverride::instanceWidthUnitsValueChanged
          (ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_004088f0(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00408f58  rive::ArtboardComponentListOverride::instanceHeightUnitsValueChanged =====

/* rive::ArtboardComponentListOverride::instanceHeightUnitsValueChanged() */

void __thiscall
rive::ArtboardComponentListOverride::instanceHeightUnitsValueChanged
          (ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00408ad4(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00408f9c  rive::ArtboardComponentListOverride::instanceWidthScaleTypeChanged =====

/* rive::ArtboardComponentListOverride::instanceWidthScaleTypeChanged() */

void __thiscall
rive::ArtboardComponentListOverride::instanceWidthScaleTypeChanged
          (ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_004088f0(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00408fe0  rive::ArtboardComponentListOverride::instanceHeightScaleTypeChanged =====

/* rive::ArtboardComponentListOverride::instanceHeightScaleTypeChanged() */

void __thiscall
rive::ArtboardComponentListOverride::instanceHeightScaleTypeChanged
          (ArtboardComponentListOverride *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00408ad4(this + 0xc0,*puVar2);
  }
  return;
}


// ===== 00409024  rive::ArtboardComponentListOverride::markHostingLayoutDirty =====

/* rive::ArtboardComponentListOverride::markHostingLayoutDirty(rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentListOverride::markHostingLayoutDirty
          (ArtboardComponentListOverride *this,ArtboardInstance *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  if (*(Artboard **)(this + 0x40) != (Artboard *)0x0) {
    Artboard::markLayoutDirty(*(Artboard **)(this + 0x40),(LayoutComponent *)param_1);
    plVar4 = *(long **)(this + 0x40);
    do {
      *(undefined1 *)(plVar4 + 0x4e) = 0;
      plVar4[0x4d] = 0;
      *(undefined4 *)((long)plVar4 + 0x274) = 0;
      if ((*(ushort *)(plVar4 + 0xc) >> 0xb & 1) == 0) {
        *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x800;
        (**(code **)(*plVar4 + 0x70))(plVar4);
        lVar3 = plVar4[0x10];
        uVar1 = *(uint *)(plVar4 + 7);
        *(undefined1 *)(lVar3 + 0xc32) = 1;
        *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
          *(uint *)(lVar3 + 0xbd4) = uVar1;
        }
      }
      bVar2 = (long *)plVar4[8] != plVar4;
      plVar4 = (long *)plVar4[8];
    } while (bVar2);
  }
  return;
}


// ===== 004090c0  FUN_004090c0 =====

void FUN_004090c0(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x15];
  *param_1 = (long)(PTR_vtable_0067d350 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x16] = (long)pvVar1;
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


// ===== 00409150  FUN_00409150 =====

void FUN_00409150(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x15];
  *param_1 = (long)(PTR_vtable_0067d350 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x16] = (long)pvVar1;
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


// ===== 004091dc  FUN_004091dc =====

undefined8 FUN_004091dc(void)

{
  return 0x25e;
}


// ===== 004091e4  FUN_004091e4 =====

bool FUN_004091e4(undefined8 param_1,short param_2)

{
  return param_2 == 0x25e || param_2 == 10;
}


// ===== 004091f8  FUN_004091f8 =====

undefined8 FUN_004091f8(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x35b) {
    if (param_2 < 0x358) {
      if (param_2 == 4) {
        pcVar12 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00409544;
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
LAB_00409544:
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
        if (param_2 != 5) goto LAB_004095d4;
        uVar14 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00409510;
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
LAB_00409510:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x28) = (int)uVar6;
      }
    }
    else if (param_2 == 0x358) {
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0040957c;
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
LAB_0040957c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x94) = (int)uVar6;
    }
    else {
      if (param_2 != 0x35a) goto LAB_004095d4;
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00409528;
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
LAB_00409528:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x88) = (int)uVar6;
    }
  }
  else {
    if (param_2 < 0x35d) {
      if (param_2 == 0x35b) {
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
      else if (param_2 == 0x35c) {
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
      goto LAB_004095d4;
    }
    if (param_2 == 0x35d) {
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00409594;
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
LAB_00409594:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x98) = (int)uVar6;
    }
    else if (param_2 == 0x35e) {
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004095c4;
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
LAB_004095c4:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x9c) = (int)uVar6;
    }
    else {
      if (param_2 != 0x35f) goto LAB_004095d4;
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004095ac;
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
LAB_004095ac:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xa0) = (int)uVar6;
    }
  }
  uVar5 = 1;
LAB_004095d4:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040962c  FUN_0040962c =====

void FUN_0040962c(void)

{
  return;
}


// ===== 00409630  rive::ArtboardComponentListOverrideBase::clone =====

/* rive::ArtboardComponentListOverrideBase::clone() const */

long * __thiscall
rive::ArtboardComponentListOverrideBase::clone(ArtboardComponentListOverrideBase *this)

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
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  puVar2 = PTR_vtable_0067d350;
  uVar4 = *(undefined8 *)(this + 0x8c);
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *(undefined8 *)((long)plVar3 + 0x8c) = uVar4;
  uVar5 = *(undefined8 *)(this + 0x9c);
  uVar4 = *(undefined8 *)(this + 0x94);
  *plVar3 = (long)(puVar2 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = (long)plVar3;
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined8 *)((long)plVar3 + 0x9c) = uVar5;
  *(undefined8 *)((long)plVar3 + 0x94) = uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004096d8  FUN_004096d8 =====

void FUN_004096d8(long *param_1)

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


// ===== 00409744  FUN_00409744 =====

void FUN_00409744(void)

{
  return;
}


// ===== 00409748  FUN_00409748 =====

void FUN_00409748(void)

{
  return;
}


// ===== 0040974c  FUN_0040974c =====

void FUN_0040974c(void)

{
  return;
}


// ===== 00409750  FUN_00409750 =====

void FUN_00409750(void)

{
  return;
}


// ===== 00409754  FUN_00409754 =====

void FUN_00409754(void)

{
  return;
}


// ===== 00409758  FUN_00409758 =====

void FUN_00409758(void)

{
  return;
}


// ===== 0040975c  rive::AxisX::onAddedDirty =====

/* rive::AxisX::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::AxisX::onAddedDirty(AxisX *this,CoreContext *param_1)

{
  AxisX *pAVar1;
  short sVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  pAVar1 = (AxisX *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pAVar1 = (AxisX *)(param_1 + -0x998);
  }
  *(AxisX **)(this + 0x40) = pAVar1;
  *(AxisX **)(this + 0x80) = pAVar1;
  if (pAVar1 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar5 + 0x90))(plVar3,this);
  }
  sVar2 = (**(code **)(**(long **)(this + 0x30) + 0x10))();
  if ((sVar2 == 0x1fc) || (sVar2 == 0x1ed)) {
    plVar3 = *(long **)(this + 0x30);
    sVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = 0xa0;
    if (sVar2 != 0x1ed) {
      lVar5 = 0x148;
    }
    NSlicerDetails::addAxisX((NSlicerDetails *)((long)plVar3 + lVar5),(Axis *)this);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 00409824  FUN_00409824 =====

void FUN_00409824(long *param_1)

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


// ===== 00409890  FUN_00409890 =====

undefined8 FUN_00409890(void)

{
  return 0x1ef;
}


// ===== 00409898  FUN_00409898 =====

undefined8 FUN_00409898(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ec)) && (param_2 != 0x1ef)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004098c0  FUN_004098c0 =====

undefined8 FUN_004098c0(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2a3) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00409a38;
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
LAB_00409a38:
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
      if (param_2 != 5) goto LAB_00409a98;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00409a1c;
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
LAB_00409a1c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0x2a4) {
      if (param_2 == 0x2a3) {
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
        *(undefined4 *)(param_1 + 0x88) = uVar15;
      }
      goto LAB_00409a98;
    }
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
LAB_00409a98:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00409ac0  FUN_00409ac0 =====

void FUN_00409ac0(void)

{
  return;
}


// ===== 00409ac4  rive::Axis::onAddedDirty =====

/* rive::Axis::onAddedDirty(rive::CoreContext*) */

bool __thiscall rive::Axis::onAddedDirty(Axis *this,CoreContext *param_1)

{
  Axis *pAVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  
  pAVar1 = (Axis *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pAVar1 = (Axis *)(param_1 + -0x998);
  }
  *(Axis **)(this + 0x40) = pAVar1;
  *(Axis **)(this + 0x80) = pAVar1;
  if (pAVar1 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar4 + 0x90))(plVar3,this);
  }
  sVar2 = (**(code **)(**(long **)(this + 0x30) + 0x10))();
  return sVar2 != 0x1ed && sVar2 != 0x1fc;
}


// ===== 00409b4c  rive::Axis::offsetChanged =====

/* rive::Axis::offsetChanged() */

void __thiscall rive::Axis::offsetChanged(Axis *this)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  sVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
  if (sVar1 == 0x1ed) {
    lVar2 = 0xa0;
  }
  else {
    if (sVar1 != 0x1fc) {
      return;
    }
    lVar2 = 0x148;
  }
                    /* WARNING: Could not recover jumptable at 0x00409ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)((long)plVar3 + lVar2))((long)plVar3 + lVar2);
  return;
}


// ===== 00409bb0  FUN_00409bb0 =====

void FUN_00409bb0(long *param_1)

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


// ===== 00409c1c  FUN_00409c1c =====

undefined8 FUN_00409c1c(void)

{
  return 0x1ec;
}


// ===== 00409c24  FUN_00409c24 =====

bool FUN_00409c24(undefined8 param_1,short param_2)

{
  return param_2 == 0x1ec || param_2 == 10;
}


// ===== 00409c38  rive::AxisXBase::clone =====

/* rive::AxisXBase::clone() const */

long * __thiscall rive::AxisXBase::clone(AxisXBase *this)

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
  puVar1 = PTR_vtable_0067d340;
  uVar3 = *(undefined4 *)(this + 0x88);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  *(undefined4 *)(plVar2 + 0x11) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(AxisXBase *)((long)plVar2 + 0x8c) = this[0x8c];
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 00409ccc  FUN_00409ccc =====

void FUN_00409ccc(long *param_1)

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


// ===== 00409d38  rive::AxisY::onAddedDirty =====

/* rive::AxisY::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::AxisY::onAddedDirty(AxisY *this,CoreContext *param_1)

{
  AxisY *pAVar1;
  short sVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  pAVar1 = (AxisY *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pAVar1 = (AxisY *)(param_1 + -0x998);
  }
  *(AxisY **)(this + 0x40) = pAVar1;
  *(AxisY **)(this + 0x80) = pAVar1;
  if (pAVar1 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar5 + 0x90))(plVar3,this);
  }
  sVar2 = (**(code **)(**(long **)(this + 0x30) + 0x10))();
  if ((sVar2 == 0x1fc) || (sVar2 == 0x1ed)) {
    plVar3 = *(long **)(this + 0x30);
    sVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = 0xa0;
    if (sVar2 != 0x1ed) {
      lVar5 = 0x148;
    }
    NSlicerDetails::addAxisY((NSlicerDetails *)((long)plVar3 + lVar5),(Axis *)this);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 00409e00  FUN_00409e00 =====

void FUN_00409e00(long *param_1)

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


// ===== 00409e6c  FUN_00409e6c =====

undefined8 FUN_00409e6c(void)

{
  return 0x1ee;
}


// ===== 00409e74  FUN_00409e74 =====

undefined8 FUN_00409e74(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ec)) && (param_2 != 0x1ee)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00409e9c  rive::AxisYBase::clone =====

/* rive::AxisYBase::clone() const */

long * __thiscall rive::AxisYBase::clone(AxisYBase *this)

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
  puVar1 = PTR_vtable_0067d330;
  uVar3 = *(undefined4 *)(this + 0x88);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  *(undefined4 *)(plVar2 + 0x11) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(AxisYBase *)((long)plVar2 + 0x8c) = this[0x8c];
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 00409f30  FUN_00409f30 =====

void FUN_00409f30(long *param_1)

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


// ===== 00409f9c  rive::LayoutComponentStyle::interpolator =====

/* rive::LayoutComponentStyle::interpolator() */

undefined8 __thiscall rive::LayoutComponentStyle::interpolator(LayoutComponentStyle *this)

{
  return *(undefined8 *)(this + 0x1b8);
}


// ===== 00409fa4  rive::LayoutComponentStyle::interpolation =====

/* rive::LayoutComponentStyle::interpolation() */

undefined4 __thiscall rive::LayoutComponentStyle::interpolation(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x108);
}


// ===== 00409fac  rive::LayoutComponentStyle::animationStyle =====

/* rive::LayoutComponentStyle::animationStyle() */

undefined4 __thiscall rive::LayoutComponentStyle::animationStyle(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x104);
}


// ===== 00409fb4  rive::LayoutComponentStyle::alignmentType =====

/* rive::LayoutComponentStyle::alignmentType() */

undefined4 __thiscall rive::LayoutComponentStyle::alignmentType(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x100);
}


// ===== 00409fbc  rive::LayoutComponentStyle::widthScaleType =====

/* rive::LayoutComponentStyle::widthScaleType() */

undefined4 __thiscall rive::LayoutComponentStyle::widthScaleType(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0xf8);
}


// ===== 00409fc4  rive::LayoutComponentStyle::heightScaleType =====

/* rive::LayoutComponentStyle::heightScaleType() */

undefined4 __thiscall rive::LayoutComponentStyle::heightScaleType(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0xfc);
}


// ===== 00409fcc  rive::LayoutComponentStyle::display =====

/* rive::LayoutComponentStyle::display() */

undefined4 __thiscall rive::LayoutComponentStyle::display(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x114);
}


// ===== 00409fd4  rive::LayoutComponentStyle::positionType =====

/* rive::LayoutComponentStyle::positionType() */

undefined4 __thiscall rive::LayoutComponentStyle::positionType(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x118);
}


// ===== 00409fdc  rive::LayoutComponentStyle::flexDirection =====

/* rive::LayoutComponentStyle::flexDirection() */

undefined4 __thiscall rive::LayoutComponentStyle::flexDirection(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x11c);
}


// ===== 00409fe4  rive::LayoutComponentStyle::direction =====

/* rive::LayoutComponentStyle::direction() */

undefined4 __thiscall rive::LayoutComponentStyle::direction(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x120);
}


// ===== 00409fec  rive::LayoutComponentStyle::flexWrap =====

/* rive::LayoutComponentStyle::flexWrap() */

undefined4 __thiscall rive::LayoutComponentStyle::flexWrap(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x134);
}


// ===== 00409ff4  rive::LayoutComponentStyle::alignItems =====

/* rive::LayoutComponentStyle::alignItems() */

undefined4 __thiscall rive::LayoutComponentStyle::alignItems(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x128);
}


// ===== 00409ffc  rive::LayoutComponentStyle::alignSelf =====

/* rive::LayoutComponentStyle::alignSelf() */

undefined4 __thiscall rive::LayoutComponentStyle::alignSelf(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 300);
}


// ===== 0040a004  rive::LayoutComponentStyle::alignContent =====

/* rive::LayoutComponentStyle::alignContent() */

undefined4 __thiscall rive::LayoutComponentStyle::alignContent(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x124);
}


// ===== 0040a00c  rive::LayoutComponentStyle::justifyContent =====

/* rive::LayoutComponentStyle::justifyContent() */

undefined4 __thiscall rive::LayoutComponentStyle::justifyContent(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x130);
}


// ===== 0040a014  rive::LayoutComponentStyle::overflow =====

/* rive::LayoutComponentStyle::overflow() */

undefined4 __thiscall rive::LayoutComponentStyle::overflow(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x138);
}


// ===== 0040a01c  rive::LayoutComponentStyle::intrinsicallySized =====

/* rive::LayoutComponentStyle::intrinsicallySized() */

LayoutComponentStyle __thiscall
rive::LayoutComponentStyle::intrinsicallySized(LayoutComponentStyle *this)

{
  return this[0x13c];
}


// ===== 0040a024  rive::LayoutComponentStyle::widthUnits =====

/* rive::LayoutComponentStyle::widthUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::widthUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x140);
}


// ===== 0040a02c  rive::LayoutComponentStyle::heightUnits =====

/* rive::LayoutComponentStyle::heightUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::heightUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x144);
}


// ===== 0040a034  rive::LayoutComponentStyle::borderLeftUnits =====

/* rive::LayoutComponentStyle::borderLeftUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::borderLeftUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x148);
}


// ===== 0040a03c  rive::LayoutComponentStyle::borderRightUnits =====

/* rive::LayoutComponentStyle::borderRightUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::borderRightUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x14c);
}


// ===== 0040a044  rive::LayoutComponentStyle::borderTopUnits =====

/* rive::LayoutComponentStyle::borderTopUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::borderTopUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x150);
}


// ===== 0040a04c  rive::LayoutComponentStyle::borderBottomUnits =====

/* rive::LayoutComponentStyle::borderBottomUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::borderBottomUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x154);
}


// ===== 0040a054  rive::LayoutComponentStyle::marginLeftUnits =====

/* rive::LayoutComponentStyle::marginLeftUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::marginLeftUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x158);
}


// ===== 0040a05c  rive::LayoutComponentStyle::marginRightUnits =====

/* rive::LayoutComponentStyle::marginRightUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::marginRightUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x15c);
}


// ===== 0040a064  rive::LayoutComponentStyle::marginTopUnits =====

/* rive::LayoutComponentStyle::marginTopUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::marginTopUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x160);
}


// ===== 0040a06c  rive::LayoutComponentStyle::marginBottomUnits =====

/* rive::LayoutComponentStyle::marginBottomUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::marginBottomUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x164);
}


// ===== 0040a074  rive::LayoutComponentStyle::paddingLeftUnits =====

/* rive::LayoutComponentStyle::paddingLeftUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::paddingLeftUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x168);
}


// ===== 0040a07c  rive::LayoutComponentStyle::paddingRightUnits =====

/* rive::LayoutComponentStyle::paddingRightUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::paddingRightUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x16c);
}


// ===== 0040a084  rive::LayoutComponentStyle::paddingTopUnits =====

/* rive::LayoutComponentStyle::paddingTopUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::paddingTopUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x170);
}


// ===== 0040a08c  rive::LayoutComponentStyle::paddingBottomUnits =====

/* rive::LayoutComponentStyle::paddingBottomUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::paddingBottomUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x174);
}


// ===== 0040a094  rive::LayoutComponentStyle::positionLeftUnits =====

/* rive::LayoutComponentStyle::positionLeftUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::positionLeftUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x178);
}


// ===== 0040a09c  rive::LayoutComponentStyle::positionRightUnits =====

/* rive::LayoutComponentStyle::positionRightUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::positionRightUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x17c);
}


// ===== 0040a0a4  rive::LayoutComponentStyle::positionTopUnits =====

/* rive::LayoutComponentStyle::positionTopUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::positionTopUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x180);
}


// ===== 0040a0ac  rive::LayoutComponentStyle::positionBottomUnits =====

/* rive::LayoutComponentStyle::positionBottomUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::positionBottomUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x184);
}


// ===== 0040a0b4  rive::LayoutComponentStyle::gapHorizontalUnits =====

/* rive::LayoutComponentStyle::gapHorizontalUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::gapHorizontalUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x188);
}


// ===== 0040a0bc  rive::LayoutComponentStyle::gapVerticalUnits =====

/* rive::LayoutComponentStyle::gapVerticalUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::gapVerticalUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x18c);
}


// ===== 0040a0c4  rive::LayoutComponentStyle::maxWidthUnits =====

/* rive::LayoutComponentStyle::maxWidthUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::maxWidthUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x198);
}


// ===== 0040a0cc  rive::LayoutComponentStyle::maxHeightUnits =====

/* rive::LayoutComponentStyle::maxHeightUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::maxHeightUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x19c);
}


// ===== 0040a0d4  rive::LayoutComponentStyle::minWidthUnits =====

/* rive::LayoutComponentStyle::minWidthUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::minWidthUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 400);
}


// ===== 0040a0dc  rive::LayoutComponentStyle::minHeightUnits =====

/* rive::LayoutComponentStyle::minHeightUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::minHeightUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0x194);
}


// ===== 0040a0e4  rive::LayoutComponentStyle::flexBasisUnits =====

/* rive::LayoutComponentStyle::flexBasisUnits() */

undefined4 __thiscall rive::LayoutComponentStyle::flexBasisUnits(LayoutComponentStyle *this)

{
  return *(undefined4 *)(this + 0xf0);
}


// ===== 0040a0ec  rive::LayoutComponentStyle::markLayoutNodeDirty =====

/* rive::LayoutComponentStyle::markLayoutNodeDirty() */

void __thiscall rive::LayoutComponentStyle::markLayoutNodeDirty(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a13c  rive::LayoutComponentStyle::markLayoutStyleDirty =====

/* rive::LayoutComponentStyle::markLayoutStyleDirty() */

void __thiscall rive::LayoutComponentStyle::markLayoutStyleDirty(LayoutComponentStyle *this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(this + 0x30);
    do {
      *(undefined1 *)(plVar5 + 0x4e) = 0;
      plVar5[0x4d] = 0;
      *(undefined4 *)((long)plVar5 + 0x274) = 0;
      if ((*(ushort *)(plVar5 + 0xc) >> 0xb & 1) == 0) {
        *(ushort *)(plVar5 + 0xc) = *(ushort *)(plVar5 + 0xc) | 0x800;
        (**(code **)(*plVar5 + 0x70))(plVar5);
        lVar4 = plVar5[0x10];
        uVar1 = *(uint *)(plVar5 + 7);
        *(undefined1 *)(lVar4 + 0xc32) = 1;
        *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
          *(uint *)(lVar4 + 0xbd4) = uVar1;
        }
      }
      bVar2 = (long *)plVar5[8] != plVar5;
      plVar5 = (long *)plVar5[8];
    } while (bVar2);
  }
  return;
}


// ===== 0040a1e4  rive::LayoutComponentStyle::scaleTypeChanged =====

/* rive::LayoutComponentStyle::scaleTypeChanged() */

void __thiscall rive::LayoutComponentStyle::scaleTypeChanged(LayoutComponentStyle *this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar2 & 1) != 0) {
    plVar4 = *(long **)(this + 0x30);
    plVar3 = (long *)plVar4[0x3d];
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[0x1f] == '\x02') {
        bVar1 = true;
      }
      else {
        bVar1 = *(char *)((long)plVar3 + 0xfc) == '\x02';
      }
      if ((bool)*(char *)((long)plVar3 + 0x13c) != bVar1) {
        *(bool *)((long)plVar3 + 0x13c) = bVar1;
        (**(code **)(*plVar3 + 0x1f8))();
      }
                    /* WARNING: Could not recover jumptable at 0x0040a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x2e0))(plVar4,0);
      return;
    }
  }
  return;
}


// ===== 0040a27c  rive::LayoutComponentStyle::displayChanged =====

/* rive::LayoutComponentStyle::displayChanged() */

void __thiscall rive::LayoutComponentStyle::displayChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
    LayoutComponent::displayChanged(*(LayoutComponent **)(this + 0x30));
    return;
  }
  return;
}


// ===== 0040a2c0  rive::LayoutComponentStyle::positionTypeValueChanged =====

/* rive::LayoutComponentStyle::positionTypeValueChanged() */

void __thiscall rive::LayoutComponentStyle::positionTypeValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
    LayoutComponent::positionTypeChanged();
    return;
  }
  return;
}


// ===== 0040a304  rive::LayoutComponentStyle::flexDirectionValueChanged =====

/* rive::LayoutComponentStyle::flexDirectionValueChanged() */

void __thiscall rive::LayoutComponentStyle::flexDirectionValueChanged(LayoutComponentStyle *this)

{
  undefined8 *puVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(this + 0x30);
    (**(code **)(*plVar5 + 0x2e0))(plVar5,0);
    puVar1 = (undefined8 *)plVar5[0x12];
    for (puVar6 = (undefined8 *)plVar5[0x11]; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      plVar5 = (long *)*puVar6;
      sVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (sVar2 == 0x199) {
        lVar4 = 0x1c8;
LAB_0040a354:
        (**(code **)(*(long *)((long)plVar5 + lVar4) + 0x30))((long)plVar5 + lVar4,0);
      }
      else {
        if (sVar2 == 0x22f) {
          lVar4 = 0x198;
          goto LAB_0040a354;
        }
        if (sVar2 == 0x1c4) {
          lVar4 = 0x228;
          goto LAB_0040a354;
        }
      }
    }
  }
  return;
}


// ===== 0040a3c4  rive::LayoutComponentStyle::directionValueChanged =====

/* rive::LayoutComponentStyle::directionValueChanged() */

void __thiscall rive::LayoutComponentStyle::directionValueChanged(LayoutComponentStyle *this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(this + 0x30);
    plVar6 = plVar5;
    do {
      *(undefined1 *)(plVar6 + 0x4e) = 0;
      plVar6[0x4d] = 0;
      *(undefined4 *)((long)plVar6 + 0x274) = 0;
      if ((*(ushort *)(plVar6 + 0xc) >> 0xb & 1) == 0) {
        *(ushort *)(plVar6 + 0xc) = *(ushort *)(plVar6 + 0xc) | 0x800;
        (**(code **)(*plVar6 + 0x70))(plVar6);
        lVar4 = plVar6[0x10];
        uVar1 = *(uint *)(plVar6 + 7);
        *(undefined1 *)(lVar4 + 0xc32) = 1;
        *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
          *(uint *)(lVar4 + 0xbd4) = uVar1;
        }
      }
      bVar2 = (long *)plVar6[8] != plVar6;
      plVar6 = (long *)plVar6[8];
    } while (bVar2);
                    /* WARNING: Could not recover jumptable at 0x0040a494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x2e0))(plVar5,1);
    return;
  }
  return;
}


// ===== 0040a498  rive::LayoutComponentStyle::onAddedDirty =====

/* rive::LayoutComponentStyle::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::LayoutComponentStyle::onAddedDirty(LayoutComponentStyle *this,CoreContext *param_1)

{
  LayoutComponentStyle *pLVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  pLVar1 = (LayoutComponentStyle *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pLVar1 = (LayoutComponentStyle *)(param_1 + -0x998);
  }
  *(LayoutComponentStyle **)(this + 0x40) = pLVar1;
  *(LayoutComponentStyle **)(this + 0x80) = pLVar1;
  if (pLVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar4 + 0x90))(plVar2,this);
  }
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x10c));
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0xaf), (uVar3 & 1) != 0)) {
    *(long **)(this + 0x1b8) = plVar2;
  }
  return 0;
}


// ===== 0040a534  rive::LayoutComponentStyle::interpolationTimeChanged =====

/* rive::LayoutComponentStyle::interpolationTimeChanged() */

void __thiscall rive::LayoutComponentStyle::interpolationTimeChanged(LayoutComponentStyle *this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(this + 0x30);
    do {
      *(undefined1 *)(plVar5 + 0x4e) = 0;
      plVar5[0x4d] = 0;
      *(undefined4 *)((long)plVar5 + 0x274) = 0;
      if ((*(ushort *)(plVar5 + 0xc) >> 0xb & 1) == 0) {
        *(ushort *)(plVar5 + 0xc) = *(ushort *)(plVar5 + 0xc) | 0x800;
        (**(code **)(*plVar5 + 0x70))(plVar5);
        lVar4 = plVar5[0x10];
        uVar1 = *(uint *)(plVar5 + 7);
        *(undefined1 *)(lVar4 + 0xc32) = 1;
        *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
          *(uint *)(lVar4 + 0xbd4) = uVar1;
        }
      }
      bVar2 = (long *)plVar5[8] != plVar5;
      plVar5 = (long *)plVar5[8];
    } while (bVar2);
  }
  return;
}


// ===== 0040a5dc  rive::LayoutComponentStyle::layoutAlignmentTypeChanged =====

/* rive::LayoutComponentStyle::layoutAlignmentTypeChanged() */

void __thiscall rive::LayoutComponentStyle::layoutAlignmentTypeChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a62c  rive::LayoutComponentStyle::layoutWidthScaleTypeChanged =====

/* rive::LayoutComponentStyle::layoutWidthScaleTypeChanged() */

void __thiscall rive::LayoutComponentStyle::layoutWidthScaleTypeChanged(LayoutComponentStyle *this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar2 & 1) != 0) {
    plVar4 = *(long **)(this + 0x30);
    plVar3 = (long *)plVar4[0x3d];
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[0x1f] == '\x02') {
        bVar1 = true;
      }
      else {
        bVar1 = *(char *)((long)plVar3 + 0xfc) == '\x02';
      }
      if ((bool)*(char *)((long)plVar3 + 0x13c) != bVar1) {
        *(bool *)((long)plVar3 + 0x13c) = bVar1;
        (**(code **)(*plVar3 + 0x1f8))();
      }
                    /* WARNING: Could not recover jumptable at 0x0040a6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x2e0))(plVar4,0);
      return;
    }
  }
  return;
}


// ===== 0040a6c4  rive::LayoutComponentStyle::layoutHeightScaleTypeChanged =====

/* rive::LayoutComponentStyle::layoutHeightScaleTypeChanged() */

void __thiscall rive::LayoutComponentStyle::layoutHeightScaleTypeChanged(LayoutComponentStyle *this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar2 & 1) != 0) {
    plVar4 = *(long **)(this + 0x30);
    plVar3 = (long *)plVar4[0x3d];
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[0x1f] == '\x02') {
        bVar1 = true;
      }
      else {
        bVar1 = *(char *)((long)plVar3 + 0xfc) == '\x02';
      }
      if ((bool)*(char *)((long)plVar3 + 0x13c) != bVar1) {
        *(bool *)((long)plVar3 + 0x13c) = bVar1;
        (**(code **)(*plVar3 + 0x1f8))();
      }
                    /* WARNING: Could not recover jumptable at 0x0040a758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x2e0))(plVar4,0);
      return;
    }
  }
  return;
}


// ===== 0040a75c  rive::LayoutComponentStyle::displayValueChanged =====

/* rive::LayoutComponentStyle::displayValueChanged() */

void __thiscall rive::LayoutComponentStyle::displayValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
    LayoutComponent::displayChanged(*(LayoutComponent **)(this + 0x30));
    return;
  }
  return;
}


// ===== 0040a7a0  rive::LayoutComponentStyle::overflowValueChanged =====

/* rive::LayoutComponentStyle::overflowValueChanged() */

void __thiscall rive::LayoutComponentStyle::overflowValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a7f0  rive::LayoutComponentStyle::intrinsicallySizedValueChanged =====

/* rive::LayoutComponentStyle::intrinsicallySizedValueChanged() */

void __thiscall
rive::LayoutComponentStyle::intrinsicallySizedValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a840  rive::LayoutComponentStyle::alignContentValueChanged =====

/* rive::LayoutComponentStyle::alignContentValueChanged() */

void __thiscall rive::LayoutComponentStyle::alignContentValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a890  rive::LayoutComponentStyle::alignItemsValueChanged =====

/* rive::LayoutComponentStyle::alignItemsValueChanged() */

void __thiscall rive::LayoutComponentStyle::alignItemsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a8e0  rive::LayoutComponentStyle::alignSelfValueChanged =====

/* rive::LayoutComponentStyle::alignSelfValueChanged() */

void __thiscall rive::LayoutComponentStyle::alignSelfValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a930  rive::LayoutComponentStyle::justifyContentValueChanged =====

/* rive::LayoutComponentStyle::justifyContentValueChanged() */

void __thiscall rive::LayoutComponentStyle::justifyContentValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a980  rive::LayoutComponentStyle::flexWrapValueChanged =====

/* rive::LayoutComponentStyle::flexWrapValueChanged() */

void __thiscall rive::LayoutComponentStyle::flexWrapValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040a9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040a9d0  rive::LayoutComponentStyle::flexChanged =====

/* rive::LayoutComponentStyle::flexChanged() */

void __thiscall rive::LayoutComponentStyle::flexChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040aa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040aa20  rive::LayoutComponentStyle::flexGrowChanged =====

/* rive::LayoutComponentStyle::flexGrowChanged() */

void __thiscall rive::LayoutComponentStyle::flexGrowChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040aa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040aa70  rive::LayoutComponentStyle::flexShrinkChanged =====

/* rive::LayoutComponentStyle::flexShrinkChanged() */

void __thiscall rive::LayoutComponentStyle::flexShrinkChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040aac0  rive::LayoutComponentStyle::flexBasisChanged =====

/* rive::LayoutComponentStyle::flexBasisChanged() */

void __thiscall rive::LayoutComponentStyle::flexBasisChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ab00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ab10  rive::LayoutComponentStyle::aspectRatioChanged =====

/* rive::LayoutComponentStyle::aspectRatioChanged() */

void __thiscall rive::LayoutComponentStyle::aspectRatioChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ab60  rive::LayoutComponentStyle::gapHorizontalChanged =====

/* rive::LayoutComponentStyle::gapHorizontalChanged() */

void __thiscall rive::LayoutComponentStyle::gapHorizontalChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040abb0  rive::LayoutComponentStyle::gapVerticalChanged =====

/* rive::LayoutComponentStyle::gapVerticalChanged() */

void __thiscall rive::LayoutComponentStyle::gapVerticalChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ac00  rive::LayoutComponentStyle::maxWidthChanged =====

/* rive::LayoutComponentStyle::maxWidthChanged() */

void __thiscall rive::LayoutComponentStyle::maxWidthChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ac40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ac50  rive::LayoutComponentStyle::maxHeightChanged =====

/* rive::LayoutComponentStyle::maxHeightChanged() */

void __thiscall rive::LayoutComponentStyle::maxHeightChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040aca0  rive::LayoutComponentStyle::minWidthChanged =====

/* rive::LayoutComponentStyle::minWidthChanged() */

void __thiscall rive::LayoutComponentStyle::minWidthChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ace0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040acf0  rive::LayoutComponentStyle::minHeightChanged =====

/* rive::LayoutComponentStyle::minHeightChanged() */

void __thiscall rive::LayoutComponentStyle::minHeightChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ad40  rive::LayoutComponentStyle::borderLeftChanged =====

/* rive::LayoutComponentStyle::borderLeftChanged() */

void __thiscall rive::LayoutComponentStyle::borderLeftChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ad80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ad90  rive::LayoutComponentStyle::borderRightChanged =====

/* rive::LayoutComponentStyle::borderRightChanged() */

void __thiscall rive::LayoutComponentStyle::borderRightChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ade0  rive::LayoutComponentStyle::borderTopChanged =====

/* rive::LayoutComponentStyle::borderTopChanged() */

void __thiscall rive::LayoutComponentStyle::borderTopChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ae30  rive::LayoutComponentStyle::borderBottomChanged =====

/* rive::LayoutComponentStyle::borderBottomChanged() */

void __thiscall rive::LayoutComponentStyle::borderBottomChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040ae80  rive::LayoutComponentStyle::marginLeftChanged =====

/* rive::LayoutComponentStyle::marginLeftChanged() */

void __thiscall rive::LayoutComponentStyle::marginLeftChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040aed0  rive::LayoutComponentStyle::marginRightChanged =====

/* rive::LayoutComponentStyle::marginRightChanged() */

void __thiscall rive::LayoutComponentStyle::marginRightChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040af10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040af20  rive::LayoutComponentStyle::marginTopChanged =====

/* rive::LayoutComponentStyle::marginTopChanged() */

void __thiscall rive::LayoutComponentStyle::marginTopChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040af60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040af70  rive::LayoutComponentStyle::marginBottomChanged =====

/* rive::LayoutComponentStyle::marginBottomChanged() */

void __thiscall rive::LayoutComponentStyle::marginBottomChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040afc0  rive::LayoutComponentStyle::paddingLeftChanged =====

/* rive::LayoutComponentStyle::paddingLeftChanged() */

void __thiscall rive::LayoutComponentStyle::paddingLeftChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b010  rive::LayoutComponentStyle::paddingRightChanged =====

/* rive::LayoutComponentStyle::paddingRightChanged() */

void __thiscall rive::LayoutComponentStyle::paddingRightChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b060  rive::LayoutComponentStyle::paddingTopChanged =====

/* rive::LayoutComponentStyle::paddingTopChanged() */

void __thiscall rive::LayoutComponentStyle::paddingTopChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b0b0  rive::LayoutComponentStyle::paddingBottomChanged =====

/* rive::LayoutComponentStyle::paddingBottomChanged() */

void __thiscall rive::LayoutComponentStyle::paddingBottomChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b100  rive::LayoutComponentStyle::positionLeftChanged =====

/* rive::LayoutComponentStyle::positionLeftChanged() */

void __thiscall rive::LayoutComponentStyle::positionLeftChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  plVar2 = *(long **)(this + 0x30);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)((long)plVar2 + 0x981) = 1;
  }
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b174  rive::LayoutComponentStyle::positionRightChanged =====

/* rive::LayoutComponentStyle::positionRightChanged() */

void __thiscall rive::LayoutComponentStyle::positionRightChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b1c4  rive::LayoutComponentStyle::positionTopChanged =====

/* rive::LayoutComponentStyle::positionTopChanged() */

void __thiscall rive::LayoutComponentStyle::positionTopChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  plVar2 = *(long **)(this + 0x30);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)((long)plVar2 + 0x982) = 1;
  }
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b238  rive::LayoutComponentStyle::positionBottomChanged =====

/* rive::LayoutComponentStyle::positionBottomChanged() */

void __thiscall rive::LayoutComponentStyle::positionBottomChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b288  rive::LayoutComponentStyle::widthUnitsValueChanged =====

/* rive::LayoutComponentStyle::widthUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::widthUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b2d8  rive::LayoutComponentStyle::heightUnitsValueChanged =====

/* rive::LayoutComponentStyle::heightUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::heightUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b328  rive::LayoutComponentStyle::gapHorizontalUnitsValueChanged =====

/* rive::LayoutComponentStyle::gapHorizontalUnitsValueChanged() */

void __thiscall
rive::LayoutComponentStyle::gapHorizontalUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b378  rive::LayoutComponentStyle::gapVerticalUnitsValueChanged =====

/* rive::LayoutComponentStyle::gapVerticalUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::gapVerticalUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b3c8  rive::LayoutComponentStyle::maxWidthUnitsValueChanged =====

/* rive::LayoutComponentStyle::maxWidthUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::maxWidthUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b418  rive::LayoutComponentStyle::maxHeightUnitsValueChanged =====

/* rive::LayoutComponentStyle::maxHeightUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::maxHeightUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b468  rive::LayoutComponentStyle::minWidthUnitsValueChanged =====

/* rive::LayoutComponentStyle::minWidthUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::minWidthUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b4b8  rive::LayoutComponentStyle::minHeightUnitsValueChanged =====

/* rive::LayoutComponentStyle::minHeightUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::minHeightUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b508  rive::LayoutComponentStyle::borderLeftUnitsValueChanged =====

/* rive::LayoutComponentStyle::borderLeftUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::borderLeftUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b558  rive::LayoutComponentStyle::borderRightUnitsValueChanged =====

/* rive::LayoutComponentStyle::borderRightUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::borderRightUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b5a8  rive::LayoutComponentStyle::borderTopUnitsValueChanged =====

/* rive::LayoutComponentStyle::borderTopUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::borderTopUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b5f8  rive::LayoutComponentStyle::borderBottomUnitsValueChanged =====

/* rive::LayoutComponentStyle::borderBottomUnitsValueChanged() */

void __thiscall
rive::LayoutComponentStyle::borderBottomUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b648  rive::LayoutComponentStyle::marginLeftUnitsValueChanged =====

/* rive::LayoutComponentStyle::marginLeftUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::marginLeftUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b698  rive::LayoutComponentStyle::marginRightUnitsValueChanged =====

/* rive::LayoutComponentStyle::marginRightUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::marginRightUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b6e8  rive::LayoutComponentStyle::marginTopUnitsValueChanged =====

/* rive::LayoutComponentStyle::marginTopUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::marginTopUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b738  rive::LayoutComponentStyle::marginBottomUnitsValueChanged =====

/* rive::LayoutComponentStyle::marginBottomUnitsValueChanged() */

void __thiscall
rive::LayoutComponentStyle::marginBottomUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


// ===== 0040b788  rive::LayoutComponentStyle::paddingLeftUnitsValueChanged =====

/* rive::LayoutComponentStyle::paddingLeftUnitsValueChanged() */

void __thiscall rive::LayoutComponentStyle::paddingLeftUnitsValueChanged(LayoutComponentStyle *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040b7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),0);
    return;
  }
  return;
}


