// ===== 003d0cec  FUN_003d0cec =====

undefined8 FUN_003d0cec(void)

{
  return 0x1ad;
}


// ===== 003d0cf4  FUN_003d0cf4 =====

bool FUN_003d0cf4(undefined8 param_1,short param_2)

{
  return param_2 == 0x1ad;
}


// ===== 003d0d04  FUN_003d0d04 =====

void FUN_003d0d04(long param_1,short param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0x22d) {
    pcVar4 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar4) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003d0d98;
      }
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 < '\0');
    param_3[2] = (long)pcVar5;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_003d0d98:
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_48;
    *(undefined8 *)(param_1 + 0x10) = local_50;
    *(undefined8 *)(param_1 + 0x20) = local_40;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2 == 0x22d);
}


// ===== 003d0df4  rive::File::setScriptingVM =====

/* rive::File::setScriptingVM(rive::rcp<rive::ScriptingVM>) */

void __thiscall rive::File::setScriptingVM(File *this,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ScriptingVM *this_00;
  
  uVar2 = *param_2;
  *param_2 = 0;
  this_00 = *(ScriptingVM **)(this + 0x110);
  *(undefined8 *)(this + 0x110) = uVar2;
  if ((this_00 != (ScriptingVM *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this_00), iVar1 == 1)) {
    ScriptingVM::~ScriptingVM(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


// ===== 003d0e4c  rive::File::addFileViewModelInstance =====

/* rive::File::addFileViewModelInstance(rive::ViewModelInstance*) */

void __thiscall rive::File::addFileViewModelInstance(File *this,ViewModelInstance *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = *(undefined8 **)(this + 0xc0);
  if (puVar1 < *(undefined8 **)(this + 200)) {
    puVar16 = puVar1 + 1;
    *puVar1 = param_1;
    goto LAB_003d0fac;
  }
  puVar12 = *(undefined8 **)(this + 0xb8);
  lVar15 = (long)puVar1 - (long)puVar12 >> 3;
  uVar7 = lVar15 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_003d1008();
LAB_003d1004:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = (long)*(undefined8 **)(this + 200) - (long)puVar12;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_003d1004;
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar15 * 8);
  puVar16 = puVar5 + 1;
  *puVar5 = param_1;
  if ((long)puVar1 - (long)puVar12 != 0) {
    uVar7 = ((long)puVar1 - (long)puVar12) - 8;
    puVar13 = puVar1;
    if ((0x77 < uVar7) &&
       ((puVar5 <= (undefined8 *)((long)puVar1 + (-8 - (uVar7 & 0xfffffffffffffff8))) ||
        (puVar1 <= (undefined8 *)
                   ((long)pvVar3 +
                   (((long)puVar1 - (long)puVar12) - (uVar7 & 0xfffffffffffffff8)) + -8))))) {
      uVar7 = (uVar7 >> 3) + 1;
      uVar9 = uVar7 & 0x3ffffffffffffffc;
      puVar13 = puVar1 + -uVar9;
      puVar10 = puVar5 + -2;
      uVar4 = uVar9;
      do {
        puVar11 = puVar1 + -4;
        uVar19 = puVar1[-3];
        uVar18 = *puVar11;
        uVar17 = puVar1[-1];
        uVar8 = puVar1[-2];
        uVar4 = uVar4 - 4;
        puVar1[-3] = 0;
        *puVar11 = 0;
        puVar1[-1] = 0;
        puVar1[-2] = 0;
        puVar10[-1] = uVar19;
        puVar10[-2] = uVar18;
        puVar10[1] = uVar17;
        *puVar10 = uVar8;
        puVar10 = puVar10 + -4;
        puVar1 = puVar11;
      } while (uVar4 != 0);
      puVar5 = puVar5 + -uVar9;
      if (uVar7 == uVar9) goto LAB_003d0f8c;
    }
    do {
      puVar13 = puVar13 + -1;
      uVar8 = *puVar13;
      *puVar13 = 0;
      puVar5 = puVar5 + -1;
      *puVar5 = uVar8;
    } while (puVar13 != puVar12);
  }
LAB_003d0f8c:
  puVar1 = *(undefined8 **)(this + 0xb8);
  puVar12 = *(undefined8 **)(this + 0xc0);
  *(undefined8 **)(this + 0xb8) = puVar5;
  *(undefined8 **)(this + 0xc0) = puVar16;
  *(void **)(this + 200) = (void *)((long)pvVar3 + uVar6 * 8);
  while (puVar12 != puVar1) {
    puVar12 = puVar12 + -1;
    plVar14 = (long *)*puVar12;
    if ((plVar14 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0xa4), iVar2 == 1)) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
LAB_003d0fac:
  *(undefined8 **)(this + 0xc0) = puVar16;
  return;
}


// ===== 003d1008  FUN_003d1008 =====

void FUN_003d1008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003d101c  rive::File::scriptingState =====

/* rive::File::scriptingState() */

undefined8 __thiscall rive::File::scriptingState(File *this)

{
  if (*(long *)(this + 0x110) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x110) + 8);
  }
  return 0;
}


// ===== 003d1034  rive::File::artboard =====

/* rive::File::artboard(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) const */

long __thiscall rive::File::artboard(File *this,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(this + 0x88);
  plVar3 = *(long **)(this + 0x90);
  if (plVar9 != plVar3) {
    bVar4 = *param_2;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 8);
    }
    do {
      lVar8 = *plVar9;
      bVar5 = *(byte *)(lVar8 + 0x10);
      sVar2 = (ulong)(bVar5 >> 1);
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
            return lVar8;
          }
          uVar7 = 0;
          while (*(byte *)(lVar8 + uVar7 + 0x11) == __s2[uVar7]) {
            uVar7 = uVar7 + 1;
            if (bVar5 >> 1 == uVar7) {
              return lVar8;
            }
          }
        }
        else {
          iVar6 = memcmp(*(void **)(lVar8 + 0x20),__s2,*(size_t *)(lVar8 + 0x18));
          if (iVar6 == 0) {
            return lVar8;
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar3);
  }
  return 0;
}


// ===== 003d1110  rive::File::artboard =====

/* rive::File::artboard() const */

undefined8 __thiscall rive::File::artboard(File *this)

{
  if (*(undefined8 **)(this + 0x88) != *(undefined8 **)(this + 0x90)) {
    return **(undefined8 **)(this + 0x88);
  }
  return 0;
}


// ===== 003d112c  rive::File::artboard =====

/* rive::File::artboard(unsigned long) const */

undefined8 __thiscall rive::File::artboard(File *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x88) + param_1 * 8);
  }
  return 0;
}


// ===== 003d114c  rive::File::artboardNameAt =====

/* rive::File::artboardNameAt(unsigned long) const */

void rive::File::artboardNameAt(ulong param_1)

{
  ulong in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((in_x1 < (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x88) + in_x1 * 8), lVar1 != 0)) {
    if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(in_x8 + 8) = uVar3;
      *(undefined8 *)in_x8 = uVar2;
      return;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(in_x8,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
    return;
  }
  *(undefined2 *)in_x8 = 0;
  return;
}


// ===== 003d1198  rive::File::instanceArtboard =====

/* rive::File::instanceArtboard(rive::Artboard*) const */

void rive::File::instanceArtboard(Artboard *param_1)

{
  int iVar1;
  long in_x1;
  long *in_x8;
  File *this;
  long lVar2;
  
  if (in_x1 == 0) {
    *in_x8 = 0;
  }
  else {
    FUN_00370c6c();
    lVar2 = *in_x8;
    *(undefined8 *)(lVar2 + 0xbc8) = *(undefined8 *)(param_1 + 0x110);
    FUN_00340fb0(1,param_1);
    this = *(File **)(lVar2 + 0xc70);
    *(Artboard **)(lVar2 + 0xc70) = param_1;
    if ((this != (File *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      ~File(this);
      operator_delete(this);
      return;
    }
  }
  return;
}


// ===== 003d1224  rive::File::artboardDefault =====

/* rive::File::artboardDefault() const */

void rive::File::artboardDefault(void)

{
  int iVar1;
  long in_x0;
  long *in_x8;
  File *this;
  long lVar2;
  
  if ((*(long **)(in_x0 + 0x88) == *(long **)(in_x0 + 0x90)) || (**(long **)(in_x0 + 0x88) == 0)) {
    *in_x8 = 0;
  }
  else {
    FUN_00370c6c();
    lVar2 = *in_x8;
    *(undefined8 *)(lVar2 + 0xbc8) = *(undefined8 *)(in_x0 + 0x110);
    FUN_00340fb0(1);
    this = *(File **)(lVar2 + 0xc70);
    *(long *)(lVar2 + 0xc70) = in_x0;
    if ((this != (File *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      ~File(this);
      operator_delete(this);
      return;
    }
  }
  return;
}


// ===== 003d12c0  rive::File::artboardAt =====

/* rive::File::artboardAt(unsigned long) const */

void rive::File::artboardAt(ulong param_1)

{
  int iVar1;
  ulong in_x1;
  long *in_x8;
  File *this;
  long lVar2;
  
  if ((in_x1 < (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3)) &&
     (*(long *)(*(long *)(param_1 + 0x88) + in_x1 * 8) != 0)) {
    FUN_00370c6c();
    lVar2 = *in_x8;
    *(undefined8 *)(lVar2 + 0xbc8) = *(undefined8 *)(param_1 + 0x110);
    FUN_00340fb0(1,param_1);
    this = *(File **)(lVar2 + 0xc70);
    *(ulong *)(lVar2 + 0xc70) = param_1;
    if ((this != (File *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      ~File(this);
      operator_delete(this);
      return;
    }
  }
  else {
    *in_x8 = 0;
  }
  return;
}


// ===== 003d1360  rive::File::artboardNamed =====

/* rive::File::artboardNamed(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) const */

void rive::File::artboardNamed(long *param_1,long param_2,ulong *param_3)

{
  void *__s2;
  size_t sVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  File *this;
  long lVar9;
  long *plVar10;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*param_3 & 1) == 0) {
    sStack_78 = param_3[1];
    local_80 = *param_3;
    local_70 = (void *)param_3[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(char *)param_3[2],param_3[1]);
  }
  uVar6 = local_80;
  plVar10 = *(long **)(param_2 + 0x88);
  plVar2 = *(long **)(param_2 + 0x90);
  if (plVar10 != plVar2) {
    sVar5 = local_80 >> 1 & 0x7f;
    __s2 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      sVar5 = sStack_78;
      __s2 = local_70;
    }
    do {
      lVar9 = *plVar10;
      bVar3 = *(byte *)(lVar9 + 0x10);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar9 + 0x18);
      }
      if (sVar1 == sVar5) {
        if ((bVar3 & 1) == 0) {
          if (bVar3 < 2) goto joined_r0x003d145c;
          uVar8 = 0;
          while (*(char *)(lVar9 + uVar8 + 0x11) == *(char *)((long)__s2 + uVar8)) {
            uVar8 = uVar8 + 1;
            if (bVar3 >> 1 == uVar8) goto joined_r0x003d145c;
          }
        }
        else {
          iVar7 = memcmp(*(void **)(lVar9 + 0x20),__s2,*(size_t *)(lVar9 + 0x18));
          if (iVar7 == 0) goto joined_r0x003d145c;
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  lVar9 = 0;
joined_r0x003d145c:
  if ((uVar6 & 1) != 0) {
    operator_delete(local_70);
  }
  if (lVar9 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_00370c6c(param_1,lVar9);
    lVar9 = *param_1;
    *(undefined8 *)(lVar9 + 0xbc8) = *(undefined8 *)(param_2 + 0x110);
    FUN_00340fb0(1,param_2);
    this = *(File **)(lVar9 + 0xc70);
    *(long *)(lVar9 + 0xc70) = param_2;
    if ((this != (File *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,this), iVar7 == 1)) {
      ~File(this);
      operator_delete(this);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d1508  rive::File::bindableArtboardNamed =====

/* rive::File::bindableArtboardNamed(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) const */

void rive::File::bindableArtboardNamed(undefined8 *param_1,File *param_2,ulong *param_3)

{
  long lVar1;
  long *plVar2;
  File *this;
  int iVar3;
  BindableArtboard *pBVar4;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long *local_60;
  long *local_58;
  File *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*param_3 & 1) == 0) {
    uStack_78 = param_3[1];
    local_80 = *param_3;
    local_70 = (void *)param_3[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(char *)param_3[2],param_3[1]);
  }
  artboardNamed(&local_60,param_2,&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_60 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_00340fb0(1,param_2);
    pBVar4 = (BindableArtboard *)operator_new(0x18);
    local_58 = local_60;
    local_60 = (long *)0x0;
    local_50 = param_2;
    BindableArtboard::BindableArtboard(pBVar4,&local_50,&local_58);
    plVar2 = local_58;
    *param_1 = pBVar4;
    local_58 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    this = local_50;
    if ((local_50 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_50), iVar3 == 1)) {
      ~File(this);
      operator_delete(this);
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d1644  rive::File::bindableArtboardDefault =====

/* rive::File::bindableArtboardDefault() const */

void rive::File::bindableArtboardDefault(void)

{
  long lVar1;
  int iVar2;
  File *in_x0;
  BindableArtboard *pBVar3;
  undefined8 *in_x8;
  File *this;
  long *plVar4;
  long *local_60;
  long *local_58;
  File *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(in_x0 + 0x88) == *(long **)(in_x0 + 0x90)) || (**(long **)(in_x0 + 0x88) == 0)) {
LAB_003d1768:
    *in_x8 = 0;
  }
  else {
    FUN_00370c6c(&local_60);
    plVar4 = local_60;
    local_60[0x179] = *(long *)(in_x0 + 0x110);
    FUN_00340fb0(1);
    this = (File *)plVar4[0x18e];
    plVar4[0x18e] = (long)in_x0;
    if (this != (File *)0x0) {
      iVar2 = FUN_00340fe0(0xffffffff,this);
      if (iVar2 == 1) {
        ~File(this);
        operator_delete(this);
      }
      plVar4 = local_60;
      if (local_60 == (long *)0x0) goto LAB_003d1768;
    }
    FUN_00340fb0(1);
    pBVar3 = (BindableArtboard *)operator_new(0x18);
    local_60 = (long *)0x0;
    local_58 = plVar4;
    local_50 = in_x0;
    BindableArtboard::BindableArtboard(pBVar3,&local_50,&local_58);
    plVar4 = local_58;
    *in_x8 = pBVar3;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if ((local_50 != (File *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_50), iVar2 == 1)) {
      ~File(local_50);
      operator_delete(local_50);
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d1798  rive::File::internalBindableArtboardFromArtboard =====

/* rive::File::internalBindableArtboardFromArtboard(rive::Artboard*) const */

void rive::File::internalBindableArtboardFromArtboard(Artboard *param_1)

{
  long lVar1;
  Artboard *pAVar2;
  File *this;
  int iVar3;
  BindableArtboard *pBVar4;
  long in_x1;
  undefined8 *in_x8;
  Artboard *local_50;
  Artboard *local_48;
  File *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (in_x1 != 0) {
    param_1 = (Artboard *)FUN_00370c6c(&local_50);
    if (local_50 != (Artboard *)0x0) {
      pBVar4 = (BindableArtboard *)operator_new(0x18);
      local_48 = local_50;
      local_40 = (File *)0x0;
      local_50 = (Artboard *)0x0;
      BindableArtboard::BindableArtboard(pBVar4,&local_40,&local_48);
      pAVar2 = local_48;
      *in_x8 = pBVar4;
      local_48 = (Artboard *)0x0;
      if (pAVar2 != (Artboard *)0x0) {
        (**(code **)(*(long *)pAVar2 + 8))();
      }
      this = local_40;
      if ((local_40 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40), iVar3 == 1)) {
        ~File(this);
        operator_delete(this);
      }
      param_1 = local_50;
      if (local_50 != (Artboard *)0x0) {
        param_1 = (Artboard *)(**(code **)(*(long *)local_50 + 8))();
      }
      goto LAB_003d1854;
    }
  }
  *in_x8 = 0;
LAB_003d1854:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003d187c  rive::File::completeViewModelInstance =====

/* rive::File::completeViewModelInstance(rive::rcp<rive::ViewModelInstance>) const */

void __thiscall rive::File::completeViewModelInstance(File *this,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  long *local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)*param_2;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  local_50 = (undefined8 *)0x0;
  local_40 = 0x3f800000;
  if (plVar5 == (long *)0x0) {
    local_68 = (long *)0x0;
    completeViewModelInstance(this,&local_68,&local_60);
    pvVar2 = local_60;
    puVar3 = local_50;
  }
  else {
    FUN_00340fb0(1,(long)plVar5 + 0xa4);
    local_68 = plVar5;
    completeViewModelInstance(this,&local_68,&local_60);
    iVar4 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0xa4);
    pvVar2 = local_60;
    puVar3 = local_50;
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
      pvVar2 = local_60;
      puVar3 = local_50;
    }
  }
  while (puVar3 != (undefined8 *)0x0) {
    plVar5 = (long *)puVar3[3];
    pvVar6 = (void *)*puVar3;
    local_60 = pvVar2;
    if ((plVar5 != (long *)0x0) &&
       (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0xa4), iVar4 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    operator_delete(puVar3);
    pvVar2 = local_60;
    puVar3 = (undefined8 *)pvVar6;
  }
  local_60 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d199c  rive::File::completeViewModelInstance =====

/* WARNING: Removing unreachable block (ram,0x003d2268) */
/* WARNING: Removing unreachable block (ram,0x003d20f0) */
/* rive::File::completeViewModelInstance(rive::rcp<rive::ViewModelInstance>,
   std::__ndk1::unordered_map<rive::ViewModelInstance*, rive::rcp<rive::ViewModelInstance>,
   std::__ndk1::hash<rive::ViewModelInstance*>, std::__ndk1::equal_to<rive::ViewModelInstance*>,
   std::__ndk1::allocator<std::__ndk1::pair<rive::ViewModelInstance* const,
   rive::rcp<rive::ViewModelInstance> > > >&) const */

void __thiscall rive::File::completeViewModelInstance(File *this,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ViewModelInstance *pVVar7;
  long lVar8;
  ViewModelInstance *pVVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  long *local_78;
  ViewModelInstance *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar12 = *param_2;
  lVar8 = *(long *)(lVar12 + 0xa8);
  lVar11 = *(long *)(lVar12 + 0xb0);
  uVar5 = lVar11 - lVar8;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
      FUN_003d236c();
                    /* WARNING: Subroutine does not return */
      FUN_0031fb04("vector");
    }
    lVar24 = *(long *)(*(long *)(this + 0xa0) + (ulong)*(uint *)(lVar12 + 0xa0) * 8);
    plVar4 = (long *)operator_new(uVar5);
    lVar12 = 0;
    do {
      lVar23 = lVar12;
      lVar12 = *(long *)(lVar8 + lVar23);
      if (lVar12 != 0) {
        FUN_00340fb0(1,lVar12 + 0x8c);
      }
      *(long *)((long)plVar4 + lVar23) = lVar12;
      lVar12 = lVar23 + 8;
    } while (lVar8 + lVar12 != lVar11);
    plVar20 = plVar4;
LAB_003d1a64:
    uVar5 = (**(code **)(*(long *)*plVar20 + 0x18))((long *)*plVar20,0x1bc);
    plVar6 = (long *)*plVar20;
    if ((uVar5 & 1) != 0) {
      plVar6 = *(long **)(*(long *)(lVar24 + 0x30) + (ulong)*(uint *)(plVar6 + 0x11) * 8);
      uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1b4);
      if ((uVar5 & 1) == 0) goto LAB_003d1e6c;
      plVar21 = (long *)*plVar20;
      lVar11 = *(long *)(*(long *)(this + 0xa0) + (ulong)*(uint *)(plVar6 + 6) * 8);
      lVar8 = *(long *)(lVar11 + 0x48);
      if ((ulong)(*(long *)(lVar11 + 0x50) - lVar8 >> 3) <= (ulong)*(uint *)(plVar21 + 0x22)) {
        plVar21[0x25] = *param_2;
        goto LAB_003d1e6c;
      }
      plVar6 = *(long **)(lVar8 + (ulong)*(uint *)(plVar21 + 0x22) * 8);
      plVar21[0x25] = *param_2;
      local_78 = plVar6;
      if (plVar6 == (long *)0x0) goto LAB_003d1e6c;
      uVar5 = param_3[1];
      if (uVar5 != 0) {
        uVar13 = ((ulong)(uint)((int)plVar6 << 3) + 8 ^ (ulong)plVar6 >> 0x20) * -0x622015f714c7d297
        ;
        uVar26 = NEON_cnt(uVar5,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        uVar13 = ((ulong)plVar6 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
        uVar15 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
        uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
        if (uVar15 < 2) {
          uVar16 = uVar5 - 1 & uVar13;
        }
        else {
          uVar16 = uVar13;
          if (uVar5 <= uVar13) {
            uVar16 = 0;
            if (uVar5 != 0) {
              uVar16 = uVar13 / uVar5;
            }
            uVar16 = uVar13 - uVar16 * uVar5;
          }
        }
        plVar18 = *(long **)(*param_3 + uVar16 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          do {
            uVar19 = plVar18[1];
            if (uVar19 == uVar13) {
              if ((long *)plVar18[2] == plVar6) {
                pVVar7 = (ViewModelInstance *)plVar18[3];
                if (pVVar7 != (ViewModelInstance *)0x0) {
                  FUN_00340fb0(1,pVVar7 + 0xa4);
                }
                lVar8 = plVar21[0x24];
                if ((lVar8 == 0) || (lVar11 = plVar21[0x25], lVar11 == 0)) goto LAB_003d227c;
                plVar6 = *(long **)(lVar8 + 0xc0);
                plVar18 = *(long **)(lVar8 + 200);
                plVar17 = plVar6;
                if (plVar6 == plVar18) goto LAB_003d220c;
                goto LAB_003d21f0;
              }
            }
            else {
              if (uVar15 < 2) {
                uVar19 = uVar19 & uVar5 - 1;
              }
              else if (uVar5 <= uVar19) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar19 / uVar5;
                }
                uVar19 = uVar19 - uVar1 * uVar5;
              }
              if (uVar19 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
      pVVar7 = (ViewModelInstance *)(**(code **)(*plVar6 + 0x28))(plVar6);
      if (pVVar7 == (ViewModelInstance *)0x0) {
        local_70 = (ViewModelInstance *)0x0;
        completeViewModelInstance(this,&local_70,param_3);
        lVar8 = FUN_003d2380(param_3,plVar6,&local_78);
      }
      else {
        FUN_00340fb0(1,pVVar7 + 0xa4);
        local_70 = pVVar7;
        completeViewModelInstance(this,&local_70,param_3);
        iVar3 = FUN_00340fe0(0xffffffff,pVVar7 + 0xa4);
        if (iVar3 == 1) {
          (**(code **)(*(long *)pVVar7 + 8))(pVVar7);
        }
        lVar8 = FUN_003d2380(param_3,local_78,&local_78);
        FUN_00340fb0(1,pVVar7 + 0xa4);
      }
      plVar6 = *(long **)(lVar8 + 0x18);
      *(ViewModelInstance **)(lVar8 + 0x18) = pVVar7;
      if ((plVar6 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4), iVar3 == 1)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      if (pVVar7 != (ViewModelInstance *)0x0) {
        FUN_00340fb0(1,pVVar7 + 0xa4);
      }
      lVar8 = plVar21[0x24];
      if ((lVar8 != 0) && (lVar11 = plVar21[0x25], lVar11 != 0)) {
        plVar18 = *(long **)(lVar8 + 200);
        plVar6 = *(long **)(lVar8 + 0xc0);
        plVar17 = plVar6;
        for (; (plVar6 != plVar18 && (plVar17 = plVar6, *plVar6 != lVar11)); plVar6 = plVar6 + 1) {
          plVar17 = plVar18;
        }
        if ((plVar17 != plVar18) && (plVar6 = plVar17 + 1, plVar14 = plVar17, plVar6 != plVar18)) {
          do {
            plVar17 = plVar14;
            if (*plVar6 != lVar11) {
              plVar17 = plVar14 + 1;
              *plVar14 = *plVar6;
            }
            plVar6 = plVar6 + 1;
            plVar14 = plVar17;
          } while (plVar6 != plVar18);
          plVar18 = *(long **)(lVar8 + 200);
        }
        if (plVar17 != plVar18) {
          *(long **)(lVar8 + 200) = plVar17;
        }
      }
      if (pVVar7 != (ViewModelInstance *)0x0) {
        FUN_00340fb0(1,pVVar7 + 0xa4);
      }
      plVar6 = (long *)plVar21[0x24];
      plVar21[0x24] = (long)pVVar7;
      pVVar9 = pVVar7;
      if (plVar6 != (long *)0x0) {
        iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4);
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        pVVar9 = (ViewModelInstance *)plVar21[0x24];
      }
      if ((pVVar9 != (ViewModelInstance *)0x0) &&
         ((ViewModelInstance *)plVar21[0x25] != (ViewModelInstance *)0x0)) {
        ViewModelInstance::addParent(pVVar9,(ViewModelInstance *)plVar21[0x25]);
      }
      (**(code **)(*plVar21 + 0xa8))(plVar21);
      if (pVVar7 == (ViewModelInstance *)0x0) goto LAB_003d1e6c;
      iVar3 = FUN_00340fe0(0xffffffff,pVVar7 + 0xa4);
      if (iVar3 == 1) {
        (**(code **)(*(long *)pVVar7 + 8))(pVVar7);
      }
      goto LAB_003d2194;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1b9);
    if ((uVar5 & 1) != 0) {
      lVar8 = *plVar20;
      plVar6 = *(long **)(lVar8 + 0x120);
      plVar21 = *(long **)(lVar8 + 0x128);
      *(long *)(lVar8 + 0x138) = *param_2;
      for (; plVar21 != plVar6; plVar6 = plVar6 + 1) {
        lVar22 = *plVar6;
        lVar11 = *(long *)(*(long *)(this + 0xa0) + (ulong)*(uint *)(lVar22 + 0xc) * 8);
        lVar8 = *(long *)(lVar11 + 0x48);
        if (((ulong)*(uint *)(lVar22 + 0x10) < (ulong)(*(long *)(lVar11 + 0x50) - lVar8 >> 3)) &&
           (plVar18 = *(long **)(lVar8 + (ulong)*(uint *)(lVar22 + 0x10) * 8), local_78 = plVar18,
           plVar18 != (long *)0x0)) {
          uVar5 = param_3[1];
          if (uVar5 != 0) {
            uVar13 = ((ulong)(uint)((int)plVar18 << 3) + 8 ^ (ulong)plVar18 >> 0x20) *
                     -0x622015f714c7d297;
            uVar26 = NEON_cnt(uVar5,1);
            uVar25 = NEON_uaddlv(uVar26,1);
            uVar13 = ((ulong)plVar18 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
            uVar15 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
            uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
            if (uVar15 < 2) {
              uVar16 = uVar5 - 1 & uVar13;
            }
            else {
              uVar16 = uVar13;
              if (uVar5 <= uVar13) {
                uVar16 = 0;
                if (uVar5 != 0) {
                  uVar16 = uVar13 / uVar5;
                }
                uVar16 = uVar13 - uVar16 * uVar5;
              }
            }
            plVar17 = *(long **)(*param_3 + uVar16 * 8);
            if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
              do {
                uVar19 = plVar17[1];
                if (uVar19 == uVar13) {
                  if ((long *)plVar17[2] == plVar18) {
                    pVVar7 = (ViewModelInstance *)plVar17[3];
                    if (pVVar7 != (ViewModelInstance *)0x0) {
                      FUN_00340fb0(1,pVVar7 + 0xa4);
                      FUN_00340fb0(1,pVVar7 + 0xa4);
                    }
                    plVar18 = *(long **)(lVar22 + 0x18);
                    *(ViewModelInstance **)(lVar22 + 0x18) = pVVar7;
                    if ((plVar18 != (long *)0x0) &&
                       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar18 + 0xa4), iVar3 == 1)) {
                      (**(code **)(*plVar18 + 8))(plVar18);
                    }
                    if (pVVar7 != (ViewModelInstance *)0x0) goto LAB_003d1de0;
                    goto LAB_003d1b7c;
                  }
                }
                else {
                  if (uVar15 < 2) {
                    uVar19 = uVar19 & uVar5 - 1;
                  }
                  else if (uVar5 <= uVar19) {
                    uVar1 = 0;
                    if (uVar5 != 0) {
                      uVar1 = uVar19 / uVar5;
                    }
                    uVar19 = uVar19 - uVar1 * uVar5;
                  }
                  if (uVar19 != uVar16) break;
                }
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
          pVVar7 = (ViewModelInstance *)(**(code **)(*plVar18 + 0x28))(plVar18);
          if (pVVar7 == (ViewModelInstance *)0x0) {
            local_70 = (ViewModelInstance *)0x0;
            completeViewModelInstance(this,&local_70,param_3);
            lVar8 = FUN_003d2380(param_3,plVar18,&local_78);
          }
          else {
            FUN_00340fb0(1,pVVar7 + 0xa4);
            local_70 = pVVar7;
            completeViewModelInstance(this,&local_70,param_3);
            iVar3 = FUN_00340fe0(0xffffffff,pVVar7 + 0xa4);
            if (iVar3 == 1) {
              (**(code **)(*(long *)pVVar7 + 8))(pVVar7);
            }
            lVar8 = FUN_003d2380(param_3,local_78,&local_78);
            FUN_00340fb0(1,pVVar7 + 0xa4);
          }
          plVar18 = *(long **)(lVar8 + 0x18);
          *(ViewModelInstance **)(lVar8 + 0x18) = pVVar7;
          if ((plVar18 != (long *)0x0) &&
             (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar18 + 0xa4), iVar3 == 1)) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
          lVar8 = *plVar6;
          if (pVVar7 != (ViewModelInstance *)0x0) {
            FUN_00340fb0(1,pVVar7 + 0xa4);
            FUN_00340fb0(1,pVVar7 + 0xa4);
          }
          plVar18 = *(long **)(lVar8 + 0x18);
          *(ViewModelInstance **)(lVar8 + 0x18) = pVVar7;
          if ((plVar18 != (long *)0x0) &&
             (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar18 + 0xa4), iVar3 == 1)) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
          if (pVVar7 != (ViewModelInstance *)0x0) {
            iVar3 = FUN_00340fe0(0xffffffff,pVVar7 + 0xa4);
            if (iVar3 == 1) {
              (**(code **)(*(long *)pVVar7 + 8))(pVVar7);
            }
LAB_003d1de0:
            iVar3 = FUN_00340fe0(0xffffffff,pVVar7 + 0xa4);
            if (iVar3 == 1) {
              (**(code **)(*(long *)pVVar7 + 8))(pVVar7);
            }
          }
        }
LAB_003d1b7c:
      }
    }
    goto LAB_003d1e6c;
  }
LAB_003d2334:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while (plVar6 = plVar6 + 1, plVar17 = plVar18, plVar6 != plVar18) {
LAB_003d21f0:
    plVar17 = plVar6;
    if (*plVar6 == lVar11) break;
  }
LAB_003d220c:
  if ((plVar17 != plVar18) && (plVar6 = plVar17 + 1, plVar14 = plVar17, plVar6 != plVar18)) {
    do {
      plVar17 = plVar14;
      if (*plVar6 != lVar11) {
        plVar17 = plVar14 + 1;
        *plVar14 = *plVar6;
      }
      plVar6 = plVar6 + 1;
      plVar14 = plVar17;
    } while (plVar6 != plVar18);
    plVar18 = *(long **)(lVar8 + 200);
  }
  if (plVar17 != plVar18) {
    *(long **)(lVar8 + 200) = plVar17;
  }
LAB_003d227c:
  if (pVVar7 != (ViewModelInstance *)0x0) {
    FUN_00340fb0(1,pVVar7 + 0xa4);
  }
  plVar6 = (long *)plVar21[0x24];
  plVar21[0x24] = (long)pVVar7;
  pVVar9 = pVVar7;
  if (plVar6 != (long *)0x0) {
    iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4);
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    pVVar9 = (ViewModelInstance *)plVar21[0x24];
  }
  if ((pVVar9 != (ViewModelInstance *)0x0) &&
     ((ViewModelInstance *)plVar21[0x25] != (ViewModelInstance *)0x0)) {
    ViewModelInstance::addParent(pVVar9,(ViewModelInstance *)plVar21[0x25]);
  }
  (**(code **)(*plVar21 + 0xa8))(plVar21);
  if (pVVar7 != (ViewModelInstance *)0x0) {
LAB_003d2194:
    iVar3 = FUN_00340fe0(0xffffffff,pVVar7 + 0xa4);
    if (iVar3 == 1) {
      (**(code **)(*(long *)pVVar7 + 8))(pVVar7);
    }
  }
LAB_003d1e6c:
  lVar8 = *plVar20;
  if ((ulong)*(uint *)(lVar8 + 0x88) <
      (ulong)(*(long *)(lVar24 + 0x38) - *(long *)(lVar24 + 0x30) >> 3)) {
    plVar6 = *(long **)(*(long *)(lVar24 + 0x30) + (ulong)*(uint *)(lVar8 + 0x88) * 8);
    *(long **)(lVar8 + 0xa8) = plVar6;
    if ((plVar6 != (long *)0x0) && (*(long *)(lVar8 + 0x108) != 0)) {
      uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x234);
      if ((uVar5 & 1) == 0) {
        cVar10 = *(char *)(*(long *)(lVar8 + 0xa8) + 0x28);
        if (cVar10 == '\0') goto LAB_003d1a54;
        lVar11 = *(long *)(lVar8 + 0x108);
        local_70 = (ViewModelInstance *)CONCAT71(local_70._1_7_,cVar10);
        if (cVar10 == '\0') goto LAB_003d1a54;
      }
      else {
        lVar11 = *(long *)(lVar8 + 0x108);
        local_70 = (ViewModelInstance *)CONCAT71(local_70._1_7_,0xf);
        cVar10 = '\x0f';
      }
      lVar11 = FUN_004f2ac8(lVar11 + 0xf0,cVar10,&local_70);
      *(long *)(lVar11 + 0x18) = lVar8;
    }
  }
  else {
    *(undefined8 *)(lVar8 + 0xa8) = 0;
  }
LAB_003d1a54:
  plVar20 = plVar20 + 1;
  if (plVar20 == (long *)((long)plVar4 + lVar12)) goto LAB_003d22f8;
  goto LAB_003d1a64;
LAB_003d22f8:
  do {
    plVar20 = *(long **)((long)plVar4 + lVar23);
    if ((plVar20 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar20 + 0x8c), iVar3 == 1)) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
    lVar23 = lVar23 + -8;
  } while (lVar23 != -8);
  operator_delete(plVar4);
  goto LAB_003d2334;
}


// ===== 003d236c  FUN_003d236c =====

void FUN_003d236c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003d2380  FUN_003d2380 =====

void FUN_003d2380(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar11 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if (plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar14 - 1;
          }
          else if (uVar14 <= uVar11) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar5 * uVar14;
          }
          if (uVar11 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar3 = param_1[3];
  lVar8 = *param_3;
  fVar17 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[2] = lVar8;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar9 = uVar9 | uVar14 << 1;
    uVar11 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar9) {
LAB_003d2520:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar9 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar9;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
      plVar10 = (long *)param_1[2];
      uVar14 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar16 = NEON_cnt(uVar9,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar13 * uVar9;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar5 < 2) {
              uVar13 = uVar13 & uVar9 - 1;
            }
            else if (uVar9 <= uVar13) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar1 * uVar9;
            }
            if (uVar13 != uVar11) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar10;
                uVar11 = uVar13;
              }
              else {
                *plVar10 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar10;
              }
            }
            plVar10 = plVar12;
            plVar12 = (long *)*plVar10;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar14) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_003d2764:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_003d2764;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_003d2520;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar9 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar8 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar8;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_003d2738;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_003d2738:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 003d27c0  rive::File::copyViewModelInstance =====

/* rive::File::copyViewModelInstance(rive::ViewModelInstance*,
   std::__ndk1::unordered_map<rive::ViewModelInstance*, rive::rcp<rive::ViewModelInstance>,
   std::__ndk1::hash<rive::ViewModelInstance*>, std::__ndk1::equal_to<rive::ViewModelInstance*>,
   std::__ndk1::allocator<std::__ndk1::pair<rive::ViewModelInstance* const,
   rive::rcp<rive::ViewModelInstance> > > >&) const */

void rive::File::copyViewModelInstance(ViewModelInstance *param_1,unordered_map *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *in_x8;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)param_2 + 0x28))(param_2);
  *in_x8 = (long)plVar3;
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
    completeViewModelInstance((File *)param_1,&local_50);
  }
  else {
    FUN_00340fb0(1,(long)plVar3 + 0xa4);
    local_50 = plVar3;
    completeViewModelInstance((File *)param_1,&local_50);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4);
    if (iVar2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x003d2870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
      goto LAB_003d28b0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_003d28b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d28b4  rive::File::completeViewModelProperties =====

/* rive::File::completeViewModelProperties(rive::ViewModelInstance*) */

void __thiscall rive::File::completeViewModelProperties(File *this,ViewModelInstance *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ViewModel *pVVar10;
  char cVar11;
  ViewModelInstance *pVVar12;
  byte *pbVar13;
  byte *__s2;
  char *pcVar14;
  long lVar15;
  undefined8 *extraout_x8;
  long lVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  char local_70 [4];
  char local_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar19 = *(long *)(param_1 + 0xa8);
  lVar15 = *(long *)(param_1 + 0xb0);
  uVar8 = lVar15 - lVar19;
  if (uVar8 == 0) {
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
  }
  else {
    if ((long)uVar8 < 0) {
      auVar23 = FUN_003d236c();
      pbVar13 = auVar23._8_8_;
      pVVar10 = auVar23._0_8_;
      plVar7 = *(long **)(pVVar10 + 0xa0);
      plVar18 = *(long **)(pVVar10 + 0xa8);
      if (plVar7 != plVar18) {
        do {
          uVar8 = (**(code **)(*(long *)*plVar7 + 0x18))((long *)*plVar7,0x1b3);
          if ((uVar8 & 1) != 0) {
            lVar19 = *plVar7;
            bVar3 = *pbVar13;
            bVar4 = *(byte *)(lVar19 + 0x10);
            uVar8 = (ulong)(bVar4 >> 1);
            sVar1 = uVar8;
            if ((bVar4 & 1) != 0) {
              sVar1 = *(size_t *)(lVar19 + 0x18);
            }
            sVar2 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar13 + 8);
            }
            if (sVar1 == sVar2) {
              __s2 = pbVar13 + 1;
              if ((bVar3 & 1) != 0) {
                __s2 = *(byte **)(pbVar13 + 0x10);
              }
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) {
LAB_003d2c48:
                  createViewModelInstance(pVVar10);
                  return;
                }
                pbVar17 = (byte *)(lVar19 + 0x11);
                while (*pbVar17 == *__s2) {
                  uVar8 = uVar8 - 1;
                  pbVar17 = pbVar17 + 1;
                  __s2 = __s2 + 1;
                  if (uVar8 == 0) goto LAB_003d2c48;
                }
              }
              else {
                iVar6 = memcmp(*(void **)(lVar19 + 0x20),__s2,*(size_t *)(lVar19 + 0x18));
                if (iVar6 == 0) goto LAB_003d2c48;
              }
            }
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar18);
      }
      *extraout_x8 = 0;
      return;
    }
    lVar20 = *(long *)(*(long *)(this + 0xa0) + (ulong)*(uint *)(param_1 + 0xa0) * 8);
    plVar7 = (long *)operator_new(uVar8);
    lVar22 = 0;
    do {
      lVar21 = lVar22;
      lVar22 = *(long *)(lVar19 + lVar21);
      if (lVar22 != 0) {
        FUN_00340fb0(1,lVar22 + 0x8c);
      }
      *(long *)((long)plVar7 + lVar21) = lVar22;
      lVar22 = lVar21 + 8;
    } while (lVar19 + lVar22 != lVar15);
    plVar18 = plVar7;
    do {
      uVar8 = (**(code **)(*(long *)*plVar18 + 0x18))((long *)*plVar18,0x1bc);
      plVar9 = (long *)*plVar18;
      if ((uVar8 & 1) == 0) {
        uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,0x1b9);
        if ((uVar8 & 1) != 0) {
          plVar9 = *(long **)(*plVar18 + 0x120);
          for (lVar19 = *(long *)(*plVar18 + 0x128) - (long)plVar9; lVar19 != 0;
              lVar19 = lVar19 + -8) {
            uVar8 = (ulong)*(uint *)(*plVar9 + 0x10);
            lVar16 = *(long *)(*(long *)(this + 0xa0) + (ulong)*(uint *)(*plVar9 + 0xc) * 8);
            lVar15 = *(long *)(lVar16 + 0x48);
            if ((uVar8 < (ulong)(*(long *)(lVar16 + 0x50) - lVar15 >> 3)) &&
               (pVVar12 = *(ViewModelInstance **)(lVar15 + uVar8 * 8),
               pVVar12 != (ViewModelInstance *)0x0)) {
              completeViewModelProperties(this,pVVar12);
            }
            plVar9 = plVar9 + 1;
          }
        }
      }
      else {
        plVar9 = *(long **)(*(long *)(lVar20 + 0x30) + (ulong)*(uint *)(plVar9 + 0x11) * 8);
        uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,0x1b4);
        if ((uVar8 & 1) != 0) {
          lVar15 = *(long *)(*(long *)(this + 0xa0) + (ulong)*(uint *)(plVar9 + 6) * 8);
          lVar19 = *(long *)(lVar15 + 0x48);
          if (((ulong)*(uint *)(*plVar18 + 0x110) < (ulong)(*(long *)(lVar15 + 0x50) - lVar19 >> 3))
             && (pVVar12 = *(ViewModelInstance **)(lVar19 + (ulong)*(uint *)(*plVar18 + 0x110) * 8),
                pVVar12 != (ViewModelInstance *)0x0)) {
            completeViewModelProperties(this,pVVar12);
          }
        }
      }
      lVar19 = *plVar18;
      if ((ulong)*(uint *)(lVar19 + 0x88) <
          (ulong)(*(long *)(lVar20 + 0x38) - *(long *)(lVar20 + 0x30) >> 3)) {
        plVar9 = *(long **)(*(long *)(lVar20 + 0x30) + (ulong)*(uint *)(lVar19 + 0x88) * 8);
        *(long **)(lVar19 + 0xa8) = plVar9;
        if ((plVar9 != (long *)0x0) && (*(long *)(lVar19 + 0x108) != 0)) {
          uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,0x234);
          if ((uVar8 & 1) == 0) {
            cVar11 = *(char *)(*(long *)(lVar19 + 0xa8) + 0x28);
            if ((cVar11 == '\0') ||
               (lVar15 = *(long *)(lVar19 + 0x108), local_6c[0] = cVar11, cVar11 == '\0'))
            goto LAB_003d2958;
            pcVar14 = local_6c;
          }
          else {
            lVar15 = *(long *)(lVar19 + 0x108);
            local_70[0] = '\x0f';
            cVar11 = '\x0f';
            pcVar14 = local_70;
          }
          lVar15 = FUN_004f2ac8(lVar15 + 0xf0,cVar11,pcVar14);
          *(long *)(lVar15 + 0x18) = lVar19;
        }
      }
      else {
        *(undefined8 *)(lVar19 + 0xa8) = 0;
      }
LAB_003d2958:
      plVar18 = plVar18 + 1;
    } while (plVar18 != (long *)((long)plVar7 + lVar22));
    do {
      plVar18 = *(long **)((long)plVar7 + lVar21);
      if ((plVar18 != (long *)0x0) &&
         (iVar6 = FUN_00340fe0(0xffffffff,(long)plVar18 + 0x8c), iVar6 == 1)) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      lVar21 = lVar21 + -8;
    } while (lVar21 != -8);
    if (*(long *)(lVar5 + 0x28) == local_68) {
      operator_delete(plVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d2b70  rive::File::createViewModelInstance =====

/* rive::File::createViewModelInstance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) const */

void rive::File::createViewModelInstance(undefined8 *param_1,ViewModel *param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *__s2;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = *(long **)(param_2 + 0xa0);
  plVar3 = *(long **)(param_2 + 0xa8);
  if (plVar10 != plVar3) {
    do {
      uVar7 = (**(code **)(*(long *)*plVar10 + 0x18))((long *)*plVar10,0x1b3);
      if ((uVar7 & 1) != 0) {
        lVar9 = *plVar10;
        bVar4 = *param_3;
        bVar5 = *(byte *)(lVar9 + 0x10);
        uVar7 = (ulong)(bVar5 >> 1);
        sVar1 = uVar7;
        if ((bVar5 & 1) != 0) {
          sVar1 = *(size_t *)(lVar9 + 0x18);
        }
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = *(size_t *)(param_3 + 8);
        }
        if (sVar1 == sVar2) {
          __s2 = param_3 + 1;
          if ((bVar4 & 1) != 0) {
            __s2 = *(byte **)(param_3 + 0x10);
          }
          if ((bVar5 & 1) == 0) {
            if (bVar5 < 2) {
LAB_003d2c48:
              createViewModelInstance(param_2);
              return;
            }
            pbVar8 = (byte *)(lVar9 + 0x11);
            while (*pbVar8 == *__s2) {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              __s2 = __s2 + 1;
              if (uVar7 == 0) goto LAB_003d2c48;
            }
          }
          else {
            iVar6 = memcmp(*(void **)(lVar9 + 0x20),__s2,*(size_t *)(lVar9 + 0x18));
            if (iVar6 == 0) goto LAB_003d2c48;
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar3);
  }
  *param_1 = 0;
  return;
}


// ===== 003d2c88  rive::File::createViewModelInstance =====

/* WARNING: Removing unreachable block (ram,0x003d349c) */
/* rive::File::createViewModelInstance(rive::ViewModel*) const */

void rive::File::createViewModelInstance(ViewModel *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *__src;
  char cVar9;
  ulong __n;
  long lVar10;
  ViewModelInstance *pVVar11;
  undefined *puVar12;
  ushort uVar13;
  int iVar14;
  ViewModelInstance *this;
  long *__dest;
  ViewModelInstanceAssetImage *this_00;
  long *plVar15;
  ulong uVar16;
  ViewModelInstance *this_01;
  long in_x1;
  undefined8 *in_x8;
  long *plVar17;
  undefined *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  int iVar24;
  undefined *puVar25;
  char local_70;
  undefined7 uStack_6f;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  if (in_x1 == 0) {
    *in_x8 = 0;
  }
  else {
    plVar17 = *(long **)(param_1 + 0xa0);
    if (plVar17 == *(long **)(param_1 + 0xa8)) {
      iVar24 = 0;
    }
    else {
      iVar24 = 0;
      do {
        if (*plVar17 == in_x1) break;
        plVar17 = plVar17 + 1;
        iVar24 = iVar24 + 1;
      } while (plVar17 != *(long **)(param_1 + 0xa8));
    }
    this = (ViewModelInstance *)operator_new(0x120);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 8) = 0xffffffff;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined2 *)(this + 0x60) = 0xfffe;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
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
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0x100000000;
    puVar1 = PTR_vtable_0067d518;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined **)this = puVar1 + 0x10;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined4 *)(this + 0x110) = 0x3f800000;
    if (iVar24 != 0) {
      *(int *)(this + 0xa0) = iVar24;
    }
    __src = *(void **)(in_x1 + 0x30);
    lVar19 = *(long *)(in_x1 + 0x38);
    FUN_00340fb0(1,in_x1 + 0x28);
    __n = lVar19 - (long)__src;
    *(long *)(this + 0x118) = in_x1;
    if (__n != 0) {
      if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003d35f8();
      }
      __dest = (long *)operator_new(__n);
      memcpy(__dest,__src,__n);
      puVar12 = PTR_vtable_0067d540;
      puVar1 = PTR_vtable_0067d528 + 0x10;
      puVar2 = PTR_vtable_0067d538 + 0x10;
      puVar3 = PTR_vtable_0067d520 + 0x10;
      puVar4 = PTR_vtable_0067d548 + 0x10;
      puVar5 = PTR_vtable_0067d530 + 0x10;
      puVar6 = PTR_vtable_0067d550 + 0x10;
      puVar7 = PTR_vtable_0067d560 + 0x10;
      iVar24 = 0;
      puVar8 = PTR_vtable_0067d568 + 0x10;
      puVar25 = PTR_vtable_0067d558;
      plVar17 = __dest;
      do {
        uVar13 = (**(code **)(*(long *)*plVar17 + 0x10))();
        if (uVar13 < 0x1c0) {
          if (0x1b6 < uVar13) {
            if (uVar13 == 0x1b7) goto LAB_003d3118;
            if (uVar13 == 0x1b8) {
              this_00 = (ViewModelInstanceAssetImage *)operator_new(0x118);
              *(long *)(this_00 + 0x110) = 0;
              *(long *)(this_00 + 8) = 0;
              *(long *)this_00 = 0;
              *(long *)(this_00 + 0x18) = 0;
              *(long *)(this_00 + 0x10) = 0;
              *(long *)(this_00 + 0x28) = 0;
              *(long *)(this_00 + 0x20) = 0;
              *(long *)(this_00 + 0x38) = 0;
              *(long *)(this_00 + 0x30) = 0;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x68) = 0;
              *(long *)(this_00 + 0x60) = 0;
              *(long *)(this_00 + 0x78) = 0;
              *(long *)(this_00 + 0x70) = 0;
              *(undefined2 *)(this_00 + 0x60) = 0xfffe;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x88) = 0;
              *(long *)(this_00 + 0x80) = 0;
              *(long *)(this_00 + 0x98) = 0;
              *(long *)(this_00 + 0x90) = 0;
              *(undefined4 *)(this_00 + 0x8c) = 1;
              *(undefined4 *)(this_00 + 0x110) = 0xff000000;
              puVar18 = puVar2;
              goto LAB_003d33a8;
            }
            if (uVar13 != 0x1bb) goto LAB_003d2e78;
            this_00 = (ViewModelInstanceAssetImage *)operator_new(0x128);
            *(long *)(this_00 + 0x120) = 0;
            *(long *)(this_00 + 8) = 0;
            *(long *)this_00 = 0;
            *(long *)(this_00 + 0x18) = 0;
            *(long *)(this_00 + 0x10) = 0;
            *(long *)(this_00 + 0x28) = 0;
            *(long *)(this_00 + 0x20) = 0;
            *(long *)(this_00 + 0x38) = 0;
            *(long *)(this_00 + 0x30) = 0;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x68) = 0;
            *(long *)(this_00 + 0x60) = 0;
            *(long *)(this_00 + 0x78) = 0;
            *(long *)(this_00 + 0x70) = 0;
            *(undefined2 *)(this_00 + 0x60) = 0xfffe;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x88) = 0;
            *(long *)(this_00 + 0x80) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(undefined4 *)(this_00 + 0x8c) = 1;
            *(long *)(this_00 + 0xa8) = 0;
            *(long *)(this_00 + 0xa0) = 0;
            *(long *)(this_00 + 0xb8) = 0;
            *(long *)(this_00 + 0xb0) = 0;
            *(long *)(this_00 + 200) = 0;
            *(long *)(this_00 + 0xc0) = 0;
            *(long *)(this_00 + 0xd8) = 0;
            *(long *)(this_00 + 0xd0) = 0;
            *(long *)(this_00 + 0xc0) = 0;
            *(long *)(this_00 + 0xb8) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(long *)(this_00 + 0xa8) = 0;
            *(long *)(this_00 + 0xa0) = 0;
            *(long *)(this_00 + 0xe8) = 0;
            *(long *)(this_00 + 0xe0) = 0;
            *(long *)(this_00 + 0xf8) = 0;
            *(long *)(this_00 + 0xf0) = 0;
            *(long *)(this_00 + 0x108) = 0;
            *(long *)(this_00 + 0x100) = 0;
            *(long *)(this_00 + 0x118) = 0;
            *(long *)(this_00 + 0x110) = 0;
            puVar18 = puVar3;
            goto LAB_003d33c0;
          }
          if (uVar13 == 0x1af) {
            this_00 = (ViewModelInstanceAssetImage *)operator_new(0x118);
            *(long *)(this_00 + 0x110) = 0;
            *(long *)(this_00 + 8) = 0;
            *(long *)this_00 = 0;
            *(long *)(this_00 + 0x18) = 0;
            *(long *)(this_00 + 0x10) = 0;
            *(long *)(this_00 + 0x28) = 0;
            *(long *)(this_00 + 0x20) = 0;
            *(long *)(this_00 + 0x38) = 0;
            *(long *)(this_00 + 0x30) = 0;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x68) = 0;
            *(long *)(this_00 + 0x60) = 0;
            *(long *)(this_00 + 0x78) = 0;
            *(long *)(this_00 + 0x70) = 0;
            *(undefined2 *)(this_00 + 0x60) = 0xfffe;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x88) = 0;
            *(long *)(this_00 + 0x80) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(undefined4 *)(this_00 + 0x8c) = 1;
            puVar18 = puVar1;
            goto LAB_003d33a8;
          }
          if (uVar13 == 0x1b2) {
            this_00 = (ViewModelInstanceAssetImage *)operator_new(0x140);
            *(long *)(this_00 + 0x128) = 0;
            *(long *)(this_00 + 0x130) = 0;
            *(ViewModelInstance **)(this_00 + 0x138) = this;
            *(long *)(this_00 + 8) = 0;
            *(long *)this_00 = 0;
            *(long *)(this_00 + 0x18) = 0;
            *(long *)(this_00 + 0x10) = 0;
            *(long *)(this_00 + 0x68) = 0;
            *(long *)(this_00 + 0x60) = 0;
            *(long *)(this_00 + 0x78) = 0;
            *(long *)(this_00 + 0x70) = 0;
            *(undefined2 *)(this_00 + 0x60) = 0xfffe;
            *(undefined **)this_00 = puVar12 + 0x10;
            *(long *)(this_00 + 0x28) = 0;
            *(long *)(this_00 + 0x20) = 0;
            *(long *)(this_00 + 0x38) = 0;
            *(long *)(this_00 + 0x30) = 0;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x88) = 0;
            *(long *)(this_00 + 0x80) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0xa8) = 0;
            *(long *)(this_00 + 0xa0) = 0;
            *(long *)(this_00 + 0xb8) = 0;
            *(long *)(this_00 + 0xb0) = 0;
            *(long *)(this_00 + 200) = 0;
            *(long *)(this_00 + 0xc0) = 0;
            *(long *)(this_00 + 0xd8) = 0;
            *(long *)(this_00 + 0xd0) = 0;
            *(long *)(this_00 + 0xc0) = 0;
            *(long *)(this_00 + 0xb8) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(long *)(this_00 + 0xa8) = 0;
            *(long *)(this_00 + 0xa0) = 0;
            *(long *)(this_00 + 0xe8) = 0;
            *(long *)(this_00 + 0xe0) = 0;
            *(long *)(this_00 + 0xf8) = 0;
            *(long *)(this_00 + 0xf0) = 0;
            *(long *)(this_00 + 0x108) = 0;
            *(long *)(this_00 + 0x100) = 0;
            *(long *)(this_00 + 0x118) = 0;
            *(long *)(this_00 + 0x110) = 0;
            *(undefined4 *)(this_00 + 8) = 0xffffffff;
            *(long *)(this_00 + 0x30) = 0;
            *(long *)(this_00 + 0x70) = 0;
            *(long *)(this_00 + 0x78) = 0;
            *(long *)(this_00 + 0x68) = 0;
            *(undefined4 *)(this_00 + 0x8c) = 1;
            *(long *)(this_00 + 0xd0) = 0;
            *(long *)(this_00 + 200) = 0;
            *(long *)(this_00 + 0xe0) = 0;
            *(long *)(this_00 + 0xd8) = 0;
            *(long *)(this_00 + 0xf0) = 0;
            *(long *)(this_00 + 0xe8) = 0;
            *(long *)(this_00 + 0xf8) = 0;
            *(undefined4 *)(this_00 + 0x110) = 0xffffffff;
            *(undefined **)(this_00 + 0x118) = puVar12 + 0xd8;
            *(long *)(this_00 + 0x120) = 0;
            goto LAB_003d33e4;
          }
          if (uVar13 != 0x1b4) goto LAB_003d2e78;
          this_00 = (ViewModelInstanceAssetImage *)operator_new(0x130);
          *(long *)(this_00 + 0x120) = 0;
          *(long *)(this_00 + 0x128) = 0;
          *(long *)(this_00 + 8) = 0;
          *(long *)this_00 = 0;
          *(long *)(this_00 + 0x18) = 0;
          *(long *)(this_00 + 0x10) = 0;
          *(long *)(this_00 + 0x68) = 0;
          *(long *)(this_00 + 0x60) = 0;
          *(long *)(this_00 + 0x78) = 0;
          *(long *)(this_00 + 0x70) = 0;
          *(undefined2 *)(this_00 + 0x60) = 0xfffe;
          *(undefined **)this_00 = puVar25 + 0x10;
          *(long *)(this_00 + 0x28) = 0;
          *(long *)(this_00 + 0x20) = 0;
          *(long *)(this_00 + 0x38) = 0;
          *(long *)(this_00 + 0x30) = 0;
          *(long *)(this_00 + 0x48) = 0;
          *(long *)(this_00 + 0x40) = 0;
          *(long *)(this_00 + 0x58) = 0;
          *(long *)(this_00 + 0x50) = 0;
          *(long *)(this_00 + 0x88) = 0;
          *(long *)(this_00 + 0x80) = 0;
          *(long *)(this_00 + 0x98) = 0;
          *(long *)(this_00 + 0x90) = 0;
          *(undefined4 *)(this_00 + 0x8c) = 1;
          *(long *)(this_00 + 0xa8) = 0;
          *(long *)(this_00 + 0xa0) = 0;
          *(long *)(this_00 + 0xb8) = 0;
          *(long *)(this_00 + 0xb0) = 0;
          *(long *)(this_00 + 0x48) = 0;
          *(long *)(this_00 + 0x40) = 0;
          *(long *)(this_00 + 0x58) = 0;
          *(long *)(this_00 + 0x50) = 0;
          *(long *)(this_00 + 200) = 0;
          *(long *)(this_00 + 0xc0) = 0;
          *(long *)(this_00 + 0xd8) = 0;
          *(long *)(this_00 + 0xd0) = 0;
          *(long *)(this_00 + 0xc0) = 0;
          *(long *)(this_00 + 0xb8) = 0;
          *(long *)(this_00 + 0x98) = 0;
          *(long *)(this_00 + 0x90) = 0;
          *(long *)(this_00 + 0xa8) = 0;
          *(long *)(this_00 + 0xa0) = 0;
          *(long *)(this_00 + 0xe8) = 0;
          *(long *)(this_00 + 0xe0) = 0;
          *(long *)(this_00 + 0xf8) = 0;
          *(long *)(this_00 + 0xf0) = 0;
          *(long *)(this_00 + 0x108) = 0;
          *(long *)(this_00 + 0x100) = 0;
          *(long *)(this_00 + 0x118) = 0;
          *(long *)(this_00 + 0x110) = 0;
          *(undefined4 *)(this_00 + 8) = 0xffffffff;
          *(long *)(this_00 + 0x30) = 0;
          *(long *)(this_00 + 0x70) = 0;
          *(long *)(this_00 + 0x78) = 0;
          *(long *)(this_00 + 0x68) = 0;
          *(long *)(this_00 + 0xd0) = 0;
          *(long *)(this_00 + 200) = 0;
          *(long *)(this_00 + 0xe0) = 0;
          *(long *)(this_00 + 0xd8) = 0;
          *(long *)(this_00 + 0xf0) = 0;
          *(long *)(this_00 + 0xe8) = 0;
          *(long *)(this_00 + 0xf8) = 0;
          *(undefined **)(this_00 + 0x118) = puVar25 + 0xd8;
          createViewModelInstance(param_1);
          pVVar11 = (ViewModelInstance *)CONCAT71(uStack_6f,local_70);
          if (pVVar11 == (ViewModelInstance *)0x0) goto LAB_003d33e4;
          *(ViewModelInstance **)(this_00 + 0x128) = this;
          FUN_00340fb0(1,pVVar11 + 0xa4);
          lVar19 = *(long *)(this_00 + 0x120);
          if ((lVar19 != 0) && (lVar23 = *(long *)(this_00 + 0x128), lVar23 != 0)) {
            plVar20 = *(long **)(lVar19 + 200);
            plVar15 = *(long **)(lVar19 + 0xc0);
            plVar21 = plVar15;
            for (; (plVar15 != plVar20 && (plVar21 = plVar15, *plVar15 != lVar23));
                plVar15 = plVar15 + 1) {
              plVar21 = plVar20;
            }
            if ((plVar21 != plVar20) &&
               (plVar15 = plVar21 + 1, plVar22 = plVar21, plVar15 != plVar20)) {
              do {
                plVar21 = plVar22;
                if (*plVar15 != lVar23) {
                  plVar21 = plVar22 + 1;
                  *plVar22 = *plVar15;
                }
                plVar15 = plVar15 + 1;
                plVar22 = plVar21;
              } while (plVar15 != plVar20);
              plVar20 = *(long **)(lVar19 + 200);
            }
            if (plVar21 != plVar20) {
              *(long **)(lVar19 + 200) = plVar21;
            }
          }
          FUN_00340fb0(1,pVVar11 + 0xa4);
          plVar15 = *(long **)(this_00 + 0x120);
          *(ViewModelInstance **)(this_00 + 0x120) = pVVar11;
          puVar25 = PTR_vtable_0067d558;
          this_01 = pVVar11;
          if (plVar15 == (long *)0x0) {
LAB_003d3508:
            if (*(ViewModelInstance **)(this_00 + 0x128) != (ViewModelInstance *)0x0) {
              ViewModelInstance::addParent(this_01,*(ViewModelInstance **)(this_00 + 0x128));
            }
          }
          else {
            iVar14 = FUN_00340fe0(0xffffffff,(long)plVar15 + 0xa4);
            if (iVar14 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
            this_01 = *(ViewModelInstance **)(this_00 + 0x120);
            if (this_01 != (ViewModelInstance *)0x0) goto LAB_003d3508;
          }
          (**(code **)(*(long *)this_00 + 0xa8))(this_00);
          iVar14 = FUN_00340fe0(0xffffffff,pVVar11 + 0xa4);
          if (iVar14 == 1) {
            (**(code **)(*(long *)pVVar11 + 8))(pVVar11);
          }
          plVar15 = (long *)CONCAT71(uStack_6f,local_70);
          if ((plVar15 != (long *)0x0) &&
             (iVar14 = FUN_00340fe0(0xffffffff,(long)plVar15 + 0xa4), iVar14 == 1)) {
            (**(code **)(*plVar15 + 8))(plVar15);
          }
LAB_003d33e4:
          plVar15 = (long *)*plVar17;
          *(long **)(this_00 + 0xa8) = plVar15;
          if ((plVar15 != (long *)0x0) && (*(long *)(this_00 + 0x108) != 0)) {
            uVar16 = (**(code **)(*plVar15 + 0x18))(plVar15,0x234);
            if ((uVar16 & 1) == 0) {
              cVar9 = *(char *)(*(long *)(this_00 + 0xa8) + 0x28);
              if ((cVar9 == '\0') ||
                 (lVar19 = *(long *)(this_00 + 0x108), local_70 = cVar9, cVar9 == '\0'))
              goto LAB_003d3450;
            }
            else {
              lVar19 = *(long *)(this_00 + 0x108);
              local_70 = '\x0f';
            }
            lVar19 = FUN_004f2ac8(lVar19 + 0xf0,local_70,&local_70);
            *(ViewModelInstanceAssetImage **)(lVar19 + 0x18) = this_00;
          }
LAB_003d3450:
          if (*(int *)(this_00 + 0x88) != iVar24) {
            *(int *)(this_00 + 0x88) = iVar24;
            (**(code **)(*(long *)this_00 + 0x90))(this_00);
          }
        }
        else {
          if (uVar13 < 0x1ff) {
            if (uVar13 == 0x1c0) {
              this_00 = (ViewModelInstanceAssetImage *)operator_new(0x118);
              *(long *)(this_00 + 0x110) = 0;
              *(long *)(this_00 + 8) = 0;
              *(long *)this_00 = 0;
              *(long *)(this_00 + 0x18) = 0;
              *(long *)(this_00 + 0x10) = 0;
              *(long *)(this_00 + 0x28) = 0;
              *(long *)(this_00 + 0x20) = 0;
              *(long *)(this_00 + 0x38) = 0;
              *(long *)(this_00 + 0x30) = 0;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x68) = 0;
              *(long *)(this_00 + 0x60) = 0;
              *(long *)(this_00 + 0x78) = 0;
              *(long *)(this_00 + 0x70) = 0;
              *(undefined2 *)(this_00 + 0x60) = 0xfffe;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x88) = 0;
              *(long *)(this_00 + 0x80) = 0;
              *(long *)(this_00 + 0x98) = 0;
              *(long *)(this_00 + 0x90) = 0;
              *(undefined4 *)(this_00 + 0x8c) = 1;
              puVar18 = puVar5;
            }
            else {
              if (uVar13 != 0x1f6) {
                if (uVar13 != 0x1fd) goto LAB_003d2e78;
                goto LAB_003d3118;
              }
              this_00 = (ViewModelInstanceAssetImage *)operator_new(0x118);
              *(long *)(this_00 + 0x110) = 0;
              *(long *)(this_00 + 8) = 0;
              *(long *)this_00 = 0;
              *(long *)(this_00 + 0x18) = 0;
              *(long *)(this_00 + 0x10) = 0;
              *(long *)(this_00 + 0x28) = 0;
              *(long *)(this_00 + 0x20) = 0;
              *(long *)(this_00 + 0x38) = 0;
              *(long *)(this_00 + 0x30) = 0;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x68) = 0;
              *(long *)(this_00 + 0x60) = 0;
              *(long *)(this_00 + 0x78) = 0;
              *(long *)(this_00 + 0x70) = 0;
              *(undefined2 *)(this_00 + 0x60) = 0xfffe;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x88) = 0;
              *(long *)(this_00 + 0x80) = 0;
              *(long *)(this_00 + 0x98) = 0;
              *(long *)(this_00 + 0x90) = 0;
              *(undefined4 *)(this_00 + 0x8c) = 1;
              puVar18 = puVar6;
            }
LAB_003d33a8:
            *(long *)(this_00 + 0xa8) = 0;
            *(long *)(this_00 + 0xa0) = 0;
            *(long *)(this_00 + 0xb8) = 0;
            *(long *)(this_00 + 0xb0) = 0;
            *(long *)(this_00 + 200) = 0;
            *(long *)(this_00 + 0xc0) = 0;
            *(long *)(this_00 + 0xd8) = 0;
            *(long *)(this_00 + 0xd0) = 0;
            *(long *)(this_00 + 0xc0) = 0;
            *(long *)(this_00 + 0xb8) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(long *)(this_00 + 0xa8) = 0;
            *(long *)(this_00 + 0xa0) = 0;
            *(long *)(this_00 + 0xe8) = 0;
            *(long *)(this_00 + 0xe0) = 0;
            *(long *)(this_00 + 0xf8) = 0;
            *(long *)(this_00 + 0xf0) = 0;
            *(long *)(this_00 + 0x108) = 0;
            *(long *)(this_00 + 0x100) = 0;
LAB_003d33c0:
            *(undefined4 *)(this_00 + 8) = 0xffffffff;
            *(long *)(this_00 + 0x30) = 0;
            *(long *)(this_00 + 0x70) = 0;
            *(long *)(this_00 + 0x78) = 0;
            *(long *)(this_00 + 0x68) = 0;
            *(long *)(this_00 + 0xd0) = 0;
            *(long *)(this_00 + 200) = 0;
            *(long *)(this_00 + 0xe0) = 0;
            *(long *)(this_00 + 0xd8) = 0;
            *(long *)(this_00 + 0xf0) = 0;
            *(long *)(this_00 + 0xe8) = 0;
            *(long *)(this_00 + 0xf8) = 0;
            *(undefined **)this_00 = puVar18;
            goto LAB_003d33e4;
          }
          if (0x248 < uVar13) {
            if (uVar13 == 0x249) {
              this_00 = (ViewModelInstanceAssetImage *)operator_new(0x138);
              ViewModelInstanceAssetImage::ViewModelInstanceAssetImage(this_00);
            }
            else {
              if (uVar13 != 0x256) goto LAB_003d2e78;
              this_00 = (ViewModelInstanceAssetImage *)operator_new(0x128);
              *(long *)(this_00 + 8) = 0;
              *(long *)this_00 = 0;
              *(long *)(this_00 + 0x18) = 0;
              *(long *)(this_00 + 0x10) = 0;
              *(long *)(this_00 + 0x28) = 0;
              *(long *)(this_00 + 0x20) = 0;
              *(long *)(this_00 + 0x38) = 0;
              *(long *)(this_00 + 0x30) = 0;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x68) = 0;
              *(long *)(this_00 + 0x60) = 0;
              *(long *)(this_00 + 0x78) = 0;
              *(long *)(this_00 + 0x70) = 0;
              *(undefined2 *)(this_00 + 0x60) = 0xfffe;
              *(long *)(this_00 + 0x48) = 0;
              *(long *)(this_00 + 0x40) = 0;
              *(long *)(this_00 + 0x58) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(long *)(this_00 + 0x88) = 0;
              *(long *)(this_00 + 0x80) = 0;
              *(long *)(this_00 + 0x98) = 0;
              *(long *)(this_00 + 0x90) = 0;
              *(undefined4 *)(this_00 + 0x8c) = 1;
              *(long *)(this_00 + 0xa8) = 0;
              *(long *)(this_00 + 0xa0) = 0;
              *(long *)(this_00 + 0xb8) = 0;
              *(long *)(this_00 + 0xb0) = 0;
              *(long *)(this_00 + 0x98) = 0;
              *(long *)(this_00 + 0x90) = 0;
              *(long *)(this_00 + 0xa8) = 0;
              *(long *)(this_00 + 0xa0) = 0;
              *(long *)(this_00 + 200) = 0;
              *(long *)(this_00 + 0xc0) = 0;
              *(long *)(this_00 + 0xd8) = 0;
              *(long *)(this_00 + 0xd0) = 0;
              *(long *)(this_00 + 0xe8) = 0;
              *(long *)(this_00 + 0xe0) = 0;
              *(long *)(this_00 + 0xf8) = 0;
              *(long *)(this_00 + 0xf0) = 0;
              *(long *)(this_00 + 0x108) = 0;
              *(long *)(this_00 + 0x100) = 0;
              *(long *)(this_00 + 0x118) = 0;
              *(long *)(this_00 + 0x110) = 0;
              *(undefined4 *)(this_00 + 8) = 0xffffffff;
              *(long *)(this_00 + 0x30) = 0;
              *(long *)(this_00 + 0x70) = 0;
              *(long *)(this_00 + 0x78) = 0;
              *(long *)(this_00 + 0x68) = 0;
              *(long *)(this_00 + 0xc0) = 0;
              *(long *)(this_00 + 0xb8) = 0;
              *(long *)(this_00 + 0xd0) = 0;
              *(long *)(this_00 + 200) = 0;
              *(long *)(this_00 + 0xe0) = 0;
              *(long *)(this_00 + 0xd8) = 0;
              *(long *)(this_00 + 0xf0) = 0;
              *(long *)(this_00 + 0xe8) = 0;
              *(long *)(this_00 + 0xf8) = 0;
              *(undefined4 *)(this_00 + 0x110) = 0xffffffff;
              *(undefined **)this_00 = puVar8;
              *(long *)(this_00 + 0x118) = 0;
              *(long *)(this_00 + 0x120) = 0;
            }
            goto LAB_003d33e4;
          }
          if (uVar13 == 0x1ff) {
LAB_003d3118:
            this_00 = (ViewModelInstanceAssetImage *)operator_new(0x118);
            *(long *)(this_00 + 0x110) = 0;
            *(long *)(this_00 + 8) = 0;
            *(long *)this_00 = 0;
            *(long *)(this_00 + 0x18) = 0;
            *(long *)(this_00 + 0x10) = 0;
            *(long *)(this_00 + 0x28) = 0;
            *(long *)(this_00 + 0x20) = 0;
            *(long *)(this_00 + 0x38) = 0;
            *(long *)(this_00 + 0x30) = 0;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x68) = 0;
            *(long *)(this_00 + 0x60) = 0;
            *(long *)(this_00 + 0x78) = 0;
            *(long *)(this_00 + 0x70) = 0;
            *(undefined2 *)(this_00 + 0x60) = 0xfffe;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x88) = 0;
            *(long *)(this_00 + 0x80) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(undefined4 *)(this_00 + 0x8c) = 1;
            puVar18 = puVar4;
            goto LAB_003d33a8;
          }
          if (uVar13 == 0x234) {
            this_00 = (ViewModelInstanceAssetImage *)operator_new(0x118);
            *(long *)(this_00 + 0x110) = 0;
            *(long *)(this_00 + 8) = 0;
            *(long *)this_00 = 0;
            *(long *)(this_00 + 0x18) = 0;
            *(long *)(this_00 + 0x10) = 0;
            *(long *)(this_00 + 0x28) = 0;
            *(long *)(this_00 + 0x20) = 0;
            *(long *)(this_00 + 0x38) = 0;
            *(long *)(this_00 + 0x30) = 0;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x68) = 0;
            *(long *)(this_00 + 0x60) = 0;
            *(long *)(this_00 + 0x78) = 0;
            *(long *)(this_00 + 0x70) = 0;
            *(undefined2 *)(this_00 + 0x60) = 0xfffe;
            *(long *)(this_00 + 0x48) = 0;
            *(long *)(this_00 + 0x40) = 0;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x50) = 0;
            *(long *)(this_00 + 0x88) = 0;
            *(long *)(this_00 + 0x80) = 0;
            *(long *)(this_00 + 0x98) = 0;
            *(long *)(this_00 + 0x90) = 0;
            *(undefined4 *)(this_00 + 0x8c) = 1;
            puVar18 = puVar7;
            goto LAB_003d33a8;
          }
LAB_003d2e78:
          fwrite("Missing view model property type\n",0x21,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
          this_00 = (ViewModelInstanceAssetImage *)0x0;
        }
        ViewModelInstance::addValue(this,(ViewModelInstanceValue *)this_00);
        plVar17 = plVar17 + 1;
        iVar24 = iVar24 + 1;
      } while (plVar17 != (long *)((long)__dest + __n));
      *in_x8 = this;
      if (*(long *)(lVar10 + 0x28) == local_68) {
        operator_delete(__dest);
        return;
      }
      goto LAB_003d35f0;
    }
    *in_x8 = this;
  }
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
LAB_003d35f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d35f8  FUN_003d35f8 =====

void FUN_003d35f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003d360c  rive::File::createViewModelInstance =====

/* rive::File::createViewModelInstance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

void rive::File::createViewModelInstance(basic_string *param_1,basic_string *param_2)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte *__s2;
  basic_string *__s2_00;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  long *plVar10;
  byte *in_x2;
  long *in_x8;
  ulong uVar11;
  basic_string *pbVar12;
  byte *pbVar13;
  basic_string *pbVar14;
  byte *pbVar15;
  long lVar16;
  void *pvVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  plVar10 = *(long **)(param_1 + 0xa0);
  plVar4 = *(long **)(param_1 + 0xa8);
  if (plVar10 != plVar4) {
    sVar2 = *(size_t *)(in_x2 + 8);
    __s2 = *(byte **)(in_x2 + 0x10);
    sVar3 = *(size_t *)(param_2 + 8);
    __s2_00 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      __s2_00 = param_2 + 1;
      sVar3 = (ulong)((byte)*param_2 >> 1);
    }
    if ((*in_x2 & 1) == 0) {
      __s2 = in_x2 + 1;
      sVar2 = (ulong)(*in_x2 >> 1);
    }
    do {
      lVar16 = *plVar10;
      bVar6 = *(byte *)(lVar16 + 0x10);
      uVar11 = (ulong)(bVar6 >> 1);
      sVar1 = uVar11;
      if ((bVar6 & 1) != 0) {
        sVar1 = *(size_t *)(lVar16 + 0x18);
      }
      if (sVar1 == sVar3) {
        if ((bVar6 & 1) == 0) {
          if (1 < bVar6) {
            pbVar12 = (basic_string *)(lVar16 + 0x11);
            pbVar14 = __s2_00;
            do {
              if (*pbVar12 != *pbVar14) goto LAB_003d3694;
              uVar11 = uVar11 - 1;
              pbVar12 = pbVar12 + 1;
              pbVar14 = pbVar14 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          iVar9 = memcmp(*(void **)(lVar16 + 0x20),__s2_00,*(size_t *)(lVar16 + 0x18));
          if (iVar9 != 0) goto LAB_003d3694;
        }
        puVar5 = *(undefined8 **)(lVar16 + 0x50);
        for (puVar19 = *(undefined8 **)(lVar16 + 0x48); puVar19 != puVar5; puVar19 = puVar19 + 1) {
          plVar18 = (long *)*puVar19;
          bVar6 = *(byte *)(plVar18 + 2);
          uVar11 = (ulong)(bVar6 >> 1);
          sVar1 = uVar11;
          if ((bVar6 & 1) != 0) {
            sVar1 = plVar18[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar6 & 1) == 0) {
              if (bVar6 < 2) {
LAB_003d3770:
                local_70 = 0x3f800000;
                uStack_88 = 0;
                local_90 = (void *)0x0;
                uStack_78 = 0;
                local_80 = (undefined8 *)0x0;
                plVar10 = (long *)(**(code **)(*plVar18 + 0x28))(plVar18);
                *in_x8 = (long)plVar10;
                if (plVar10 == (long *)0x0) {
                  local_98 = (long *)0x0;
                  completeViewModelInstance((File *)param_1,&local_98,&local_90);
                  pvVar8 = local_90;
                  puVar19 = local_80;
                }
                else {
                  FUN_00340fb0(1,(long)plVar10 + 0xa4);
                  local_98 = plVar10;
                  completeViewModelInstance((File *)param_1,&local_98,&local_90);
                  iVar9 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4);
                  pvVar8 = local_90;
                  puVar19 = local_80;
                  if (iVar9 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10);
                    pvVar8 = local_90;
                    puVar19 = local_80;
                  }
                }
                while (puVar19 != (undefined8 *)0x0) {
                  plVar10 = (long *)puVar19[3];
                  pvVar17 = (void *)*puVar19;
                  local_90 = pvVar8;
                  if ((plVar10 != (long *)0x0) &&
                     (iVar9 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4), iVar9 == 1)) {
                    (**(code **)(*plVar10 + 8))(plVar10);
                  }
                  operator_delete(puVar19);
                  pvVar8 = local_90;
                  puVar19 = (undefined8 *)pvVar17;
                }
                local_90 = (void *)0x0;
                if (pvVar8 != (void *)0x0) {
                  operator_delete(pvVar8);
                }
                goto LAB_003d37f0;
              }
              pbVar13 = (byte *)((long)plVar18 + 0x11);
              pbVar15 = __s2;
              while (*pbVar13 == *pbVar15) {
                uVar11 = uVar11 - 1;
                pbVar13 = pbVar13 + 1;
                pbVar15 = pbVar15 + 1;
                if (uVar11 == 0) {
                  if (plVar18 == (long *)0x0) goto LAB_003d3694;
                  goto LAB_003d3770;
                }
              }
            }
            else {
              iVar9 = memcmp((void *)plVar18[4],__s2,plVar18[3]);
              if (iVar9 == 0) goto LAB_003d3770;
            }
          }
        }
      }
LAB_003d3694:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar4);
  }
  *in_x8 = 0;
LAB_003d37f0:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003d389c  rive::File::createViewModelInstance =====

/* rive::File::createViewModelInstance(unsigned long, unsigned long) const */

void rive::File::createViewModelInstance(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong in_x2;
  long *in_x8;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long *local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((param_2 < (ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3)) &&
      (lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + param_2 * 8), lVar1 = *(long *)(lVar6 + 0x48),
      in_x2 < (ulong)(*(long *)(lVar6 + 0x50) - lVar1 >> 3))) &&
     (plVar7 = *(long **)(lVar1 + in_x2 * 8), plVar7 != (long *)0x0)) {
    local_40 = 0x3f800000;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (undefined8 *)0x0;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x28))(plVar7);
    *in_x8 = (long)plVar7;
    if (plVar7 == (long *)0x0) {
      local_68 = (long *)0x0;
      completeViewModelInstance((File *)param_1,&local_68,&local_60);
      pvVar3 = local_60;
      puVar4 = local_50;
    }
    else {
      FUN_00340fb0(1,(long)plVar7 + 0xa4);
      local_68 = plVar7;
      completeViewModelInstance((File *)param_1,&local_68,&local_60);
      iVar5 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4);
      pvVar3 = local_60;
      puVar4 = local_50;
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
        pvVar3 = local_60;
        puVar4 = local_50;
      }
    }
    while (puVar4 != (undefined8 *)0x0) {
      plVar7 = (long *)puVar4[3];
      pvVar8 = (void *)*puVar4;
      local_60 = pvVar3;
      if ((plVar7 != (long *)0x0) &&
         (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4), iVar5 == 1)) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      operator_delete(puVar4);
      pvVar3 = local_60;
      puVar4 = (undefined8 *)pvVar8;
    }
    local_60 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  else {
    *in_x8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d3a04  rive::File::findViewModelId =====

/* rive::File::findViewModelId(rive::ViewModel*) const */

int __thiscall rive::File::findViewModelId(File *this,ViewModel *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0xa0);
  if (puVar2 == *(undefined8 **)(this + 0xa8)) {
    return 0;
  }
  iVar1 = 0;
  do {
    if ((ViewModel *)*puVar2 == param_1) {
      return iVar1;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (puVar2 != *(undefined8 **)(this + 0xa8));
  return iVar1;
}


// ===== 003d3a3c  rive::File::createViewModelInstance =====

/* rive::File::createViewModelInstance(rive::Artboard*) const */

void rive::File::createViewModelInstance(Artboard *param_1)

{
  long in_x1;
  undefined8 *in_x8;
  
  if (((ulong)*(uint *)(in_x1 + 0x990) <
       (ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3)) &&
     (*(long *)(*(long *)(param_1 + 0xa0) + (ulong)*(uint *)(in_x1 + 0x990) * 8) != 0)) {
    createViewModelInstance((ViewModel *)param_1);
    return;
  }
  *in_x8 = 0;
  return;
}


// ===== 003d3a64  rive::File::createDefaultViewModelInstance =====

/* rive::File::createDefaultViewModelInstance(rive::Artboard*) const */

void rive::File::createDefaultViewModelInstance(Artboard *param_1)

{
  long lVar1;
  int iVar2;
  long in_x1;
  long lVar3;
  long *in_x8;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((ulong)*(uint *)(in_x1 + 0x990) <
       (ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + (ulong)*(uint *)(in_x1 + 0x990) * 8), lVar3 != 0
     )) {
    if ((*(long **)(lVar3 + 0x50) == *(long **)(lVar3 + 0x48)) ||
       (plVar4 = (long *)**(long **)(lVar3 + 0x48), plVar4 == (long *)0x0)) {
      createViewModelInstance((ViewModel *)param_1);
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4);
      *in_x8 = (long)plVar4;
      if (plVar4 == (long *)0x0) {
        local_40 = (long *)0x0;
        completeViewModelInstance((File *)param_1,&local_40);
      }
      else {
        FUN_00340fb0(1,(long)plVar4 + 0xa4);
        local_40 = plVar4;
        completeViewModelInstance((File *)param_1,&local_40);
        iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0xa4);
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  else {
    *in_x8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d3b64  rive::File::createDefaultViewModelInstance =====

/* rive::File::createDefaultViewModelInstance(rive::ViewModel*) const */

void rive::File::createDefaultViewModelInstance(ViewModel *param_1)

{
  long lVar1;
  int iVar2;
  long in_x1;
  long *in_x8;
  long *plVar3;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(in_x1 + 0x50) == *(long **)(in_x1 + 0x48)) ||
     (plVar3 = (long *)**(long **)(in_x1 + 0x48), plVar3 == (long *)0x0)) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      createViewModelInstance(param_1);
      return;
    }
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3);
    *in_x8 = (long)plVar3;
    if (plVar3 == (long *)0x0) {
      local_40 = (long *)0x0;
      completeViewModelInstance((File *)param_1,&local_40);
    }
    else {
      FUN_00340fb0(1,(long)plVar3 + 0xa4);
      local_40 = plVar3;
      completeViewModelInstance((File *)param_1,&local_40);
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4);
      if (iVar2 == 1) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x003d3c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 8))(plVar3);
          return;
        }
        goto LAB_003d3c74;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
LAB_003d3c74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d3c78  rive::File::viewModelInstanceListItem =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::File::viewModelInstanceListItem(rive::rcp<rive::ViewModelInstance>) */

long * __thiscall rive::File::viewModelInstanceListItem(File *this,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = *(long **)(this + 0x88);
  if (plVar5 != *(long **)(this + 0x90)) {
    plVar6 = (long *)*param_2;
    do {
      if (*(int *)(*plVar5 + 0x990) == (int)plVar6[0x14]) {
        FUN_00340fb0(1,(long)plVar6 + 0xa4);
        lVar7 = *plVar5;
        plVar5 = (long *)operator_new(0x28);
        puVar3 = PTR_vtable_0067d270;
        lVar2 = _UNK_0024df18;
        lVar1 = _DAT_0024df10;
        plVar5[4] = 0;
        plVar5[2] = lVar2;
        plVar5[1] = lVar1;
        *plVar5 = (long)(puVar3 + 0x10);
        FUN_00340fb0(1,(long)plVar6 + 0xa4);
        FUN_00340fb0(1,(long)plVar6 + 0xa4);
        plVar5[3] = (long)plVar6;
        iVar4 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4);
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        plVar5[4] = lVar7;
        iVar4 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4);
        if (iVar4 != 1) {
          return plVar5;
        }
        (**(code **)(*plVar6 + 8))(plVar6);
        return plVar5;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != *(long **)(this + 0x90));
  }
  return (long *)0x0;
}


// ===== 003d3d78  rive::File::viewModelInstanceListItem =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::File::viewModelInstanceListItem(rive::rcp<rive::ViewModelInstance>, rive::Artboard*) */

long * __thiscall
rive::File::viewModelInstanceListItem(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)operator_new(0x28);
  puVar3 = PTR_vtable_0067d270;
  lVar2 = _UNK_0024df18;
  lVar1 = _DAT_0024df10;
  plVar6 = (long *)*param_2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = lVar2;
  plVar5[1] = lVar1;
  *plVar5 = (long)(puVar3 + 0x10);
  if (plVar6 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar6 + 0xa4);
    FUN_00340fb0(1,(long)plVar6 + 0xa4);
    plVar5[3] = (long)plVar6;
    iVar4 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4);
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  plVar5[4] = param_3;
  return plVar5;
}


// ===== 003d3e1c  rive::File::viewModel =====

/* rive::File::viewModel(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

long __thiscall rive::File::viewModel(File *this,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(this + 0xa0);
  plVar3 = *(long **)(this + 0xa8);
  if (plVar9 != plVar3) {
    bVar4 = *param_2;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 8);
    }
    do {
      lVar8 = *plVar9;
      bVar5 = *(byte *)(lVar8 + 0x10);
      sVar2 = (ulong)(bVar5 >> 1);
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
            return lVar8;
          }
          uVar7 = 0;
          while (*(byte *)(lVar8 + uVar7 + 0x11) == __s2[uVar7]) {
            uVar7 = uVar7 + 1;
            if (bVar5 >> 1 == uVar7) {
              return lVar8;
            }
          }
        }
        else {
          iVar6 = memcmp(*(void **)(lVar8 + 0x20),__s2,*(size_t *)(lVar8 + 0x18));
          if (iVar6 == 0) {
            return lVar8;
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar3);
  }
  return 0;
}


// ===== 003d3ef8  rive::File::viewModel =====

/* rive::File::viewModel(unsigned long) */

undefined8 __thiscall rive::File::viewModel(File *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0xa0) + param_1 * 8);
  }
  return 0;
}


// ===== 003d3f18  rive::File::viewModelByIndex =====

/* rive::File::viewModelByIndex(unsigned long) const */

ViewModelRuntime * __thiscall rive::File::viewModelByIndex(File *this,ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ViewModelRuntime *this_00;
  undefined8 *puVar3;
  ViewModel *pVVar4;
  
  if (param_1 < (ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0) >> 3)) {
    pVVar4 = *(ViewModel **)(*(long *)(this + 0xa0) + param_1 * 8);
    this_00 = (ViewModelRuntime *)operator_new(0x18);
    ViewModelRuntime::ViewModelRuntime(this_00,pVVar4,this);
    puVar1 = *(undefined8 **)(this + 0xd8);
    if (puVar1 < *(undefined8 **)(this + 0xe0)) {
      FUN_00340fb0(1,this_00);
      puVar3 = puVar1 + 1;
      *puVar1 = this_00;
    }
    else {
      puVar3 = (undefined8 *)FUN_003d3fe0(this + 0xd0,this_00);
    }
    *(undefined8 **)(this + 0xd8) = puVar3;
    iVar2 = FUN_00340fe0(0xffffffff,this_00);
    if (iVar2 == 1) {
      operator_delete(this_00);
    }
  }
  else {
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
            "Could not find View Model. Index %zu is out of range.\n");
    this_00 = (ViewModelRuntime *)0x0;
  }
  return this_00;
}


// ===== 003d3fe0  FUN_003d3fe0 =====

long * FUN_003d3fe0(ulong *param_1,long param_2)

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
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  plVar11 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  lVar15 = (long)plVar6 - (long)plVar11;
  lVar13 = lVar15 >> 3;
  uVar5 = lVar13 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_003d41b0();
LAB_003d41ac:
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
    plVar14 = (long *)(lVar13 << 3);
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_003d41ac;
    pvVar4 = operator_new(uVar7 << 3);
    plVar14 = (long *)((long)pvVar4 + lVar13 * 8);
  }
  if (param_2 != 0) {
    FUN_00340fb0(1,param_2);
    plVar11 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
  }
  pvVar1 = (void *)((long)pvVar4 + uVar7 * 8);
  plVar12 = plVar14 + 1;
  *plVar14 = param_2;
  if (plVar6 == plVar11) {
    *param_1 = (ulong)plVar14;
    param_1[1] = (ulong)plVar12;
    param_1[2] = (ulong)pvVar1;
    goto LAB_003d4130;
  }
  uVar5 = (long)plVar6 + (-8 - (long)plVar11);
  if ((uVar5 < 0x78) ||
     (((long *)((long)plVar6 + (-8 - (uVar5 & 0xfffffffffffffff8))) < plVar14 &&
      ((long *)((long)pvVar4 + (lVar15 - (uVar5 & 0xfffffffffffffff8)) + -8) < plVar6)))) {
LAB_003d40bc:
    do {
      plVar6 = plVar6 + -1;
      lVar13 = *plVar6;
      *plVar6 = 0;
      plVar14 = plVar14 + -1;
      *plVar14 = lVar13;
    } while (plVar6 != plVar11);
  }
  else {
    plVar9 = plVar14 + -2;
    uVar5 = (uVar5 >> 3) + 1;
    uVar8 = uVar5 & 0x3ffffffffffffffc;
    uVar7 = uVar8;
    plVar2 = plVar6;
    do {
      plVar10 = plVar2 + -4;
      lVar17 = plVar2[-3];
      lVar16 = *plVar10;
      lVar15 = plVar2[-1];
      lVar13 = plVar2[-2];
      uVar7 = uVar7 - 4;
      plVar2[-3] = 0;
      *plVar10 = 0;
      plVar2[-1] = 0;
      plVar2[-2] = 0;
      plVar9[-1] = lVar17;
      plVar9[-2] = lVar16;
      plVar9[1] = lVar15;
      *plVar9 = lVar13;
      plVar9 = plVar9 + -4;
      plVar2 = plVar10;
    } while (uVar7 != 0);
    plVar14 = plVar14 + -uVar8;
    plVar6 = plVar6 + -uVar8;
    if (uVar5 != uVar8) goto LAB_003d40bc;
  }
  plVar11 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  *param_1 = (ulong)plVar14;
  param_1[1] = (ulong)plVar12;
  param_1[2] = (ulong)pvVar1;
  while (plVar6 != plVar11) {
    plVar6 = plVar6 + -1;
    pvVar4 = (void *)*plVar6;
    if ((pvVar4 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pvVar4), iVar3 == 1)) {
      operator_delete(pvVar4);
    }
  }
LAB_003d4130:
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  return plVar12;
}


// ===== 003d41b0  FUN_003d41b0 =====

void FUN_003d41b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003d41c4  rive::File::createViewModelRuntime =====

/* rive::File::createViewModelRuntime(rive::ViewModel*) const */

void rive::File::createViewModelRuntime(ViewModel *param_1)

{
  undefined8 *puVar1;
  ViewModelRuntime *this;
  undefined8 *puVar2;
  ViewModel *in_x1;
  undefined8 *in_x8;
  
  this = (ViewModelRuntime *)operator_new(0x18);
  ViewModelRuntime::ViewModelRuntime(this,in_x1,(File *)param_1);
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  puVar2 = *(undefined8 **)(param_1 + 0xe0);
  *in_x8 = this;
  if (puVar1 < puVar2) {
    FUN_00340fb0(1,this);
    puVar2 = puVar1 + 1;
    *puVar1 = this;
  }
  else {
    puVar2 = (undefined8 *)FUN_003d3fe0(param_1 + 0xd0,this);
  }
  *(undefined8 **)(param_1 + 0xd8) = puVar2;
  return;
}


// ===== 003d4240  rive::File::viewModelByName =====

/* rive::File::viewModelByName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) const */

ViewModelRuntime * __thiscall rive::File::viewModelByName(File *this,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ViewModel VVar4;
  int iVar5;
  ViewModelRuntime *this_00;
  undefined8 *puVar6;
  ViewModel *__s2;
  ulong uVar7;
  byte *pbVar8;
  ViewModel *pVVar9;
  ViewModel *pVVar10;
  undefined8 *puVar11;
  
  puVar11 = *(undefined8 **)(this + 0xa0);
  puVar6 = *(undefined8 **)(this + 0xa8);
  bVar3 = *param_2;
  if (puVar11 != puVar6) {
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 8);
    }
    do {
      pVVar10 = (ViewModel *)*puVar11;
      VVar4 = pVVar10[0x10];
      uVar7 = (ulong)((byte)VVar4 >> 1);
      sVar2 = uVar7;
      if (((byte)VVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pVVar10 + 0x18);
      }
      if (sVar2 == sVar1) {
        __s2 = (ViewModel *)(param_2 + 1);
        if ((bVar3 & 1) != 0) {
          __s2 = *(ViewModel **)(param_2 + 0x10);
        }
        if (((byte)VVar4 & 1) == 0) {
          if ((byte)VVar4 < 2) {
LAB_003d42fc:
            this_00 = (ViewModelRuntime *)operator_new(0x18);
            ViewModelRuntime::ViewModelRuntime(this_00,pVVar10,this);
            puVar11 = *(undefined8 **)(this + 0xd8);
            if (puVar11 < *(undefined8 **)(this + 0xe0)) {
              FUN_00340fb0(1,this_00);
              puVar6 = puVar11 + 1;
              *puVar11 = this_00;
            }
            else {
              puVar6 = (undefined8 *)FUN_003d3fe0(this + 0xd0,this_00);
            }
            *(undefined8 **)(this + 0xd8) = puVar6;
            iVar5 = FUN_00340fe0(0xffffffff,this_00);
            if (iVar5 != 1) {
              return this_00;
            }
            operator_delete(this_00);
            return this_00;
          }
          pVVar9 = pVVar10 + 0x11;
          while (*pVVar9 == *__s2) {
            uVar7 = uVar7 - 1;
            pVVar9 = pVVar9 + 1;
            __s2 = __s2 + 1;
            if (uVar7 == 0) goto LAB_003d42fc;
          }
        }
        else {
          iVar5 = memcmp(*(void **)(pVVar10 + 0x20),__s2,*(size_t *)(pVVar10 + 0x18));
          if (iVar5 == 0) goto LAB_003d42fc;
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar6);
  }
  pbVar8 = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),"Could not find View Model named %s.\n",pbVar8);
  return (ViewModelRuntime *)0x0;
}


// ===== 003d43ac  rive::File::defaultArtboardViewModel =====

/* rive::File::defaultArtboardViewModel(rive::Artboard*) const */

ViewModelRuntime * __thiscall rive::File::defaultArtboardViewModel(File *this,Artboard *param_1)

{
  Artboard *pAVar1;
  undefined8 *puVar2;
  int iVar3;
  ViewModelRuntime *this_00;
  undefined8 *puVar4;
  ViewModel *pVVar5;
  
  if (param_1 == (Artboard *)0x0) {
    fwrite("Invalid Artboard\n",0x11,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
  }
  else {
    if ((ulong)*(uint *)(param_1 + 0x990) <
        (ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0) >> 3)) {
      pVVar5 = *(ViewModel **)(*(long *)(this + 0xa0) + (ulong)*(uint *)(param_1 + 0x990) * 8);
      this_00 = (ViewModelRuntime *)operator_new(0x18);
      ViewModelRuntime::ViewModelRuntime(this_00,pVVar5,this);
      puVar2 = *(undefined8 **)(this + 0xd8);
      if (puVar2 < *(undefined8 **)(this + 0xe0)) {
        FUN_00340fb0(1,this_00);
        puVar4 = puVar2 + 1;
        *puVar2 = this_00;
      }
      else {
        puVar4 = (undefined8 *)FUN_003d3fe0(this + 0xd0,this_00);
      }
      *(undefined8 **)(this + 0xd8) = puVar4;
      iVar3 = FUN_00340fe0(0xffffffff,this_00);
      if (iVar3 != 1) {
        return this_00;
      }
      operator_delete(this_00);
      return this_00;
    }
    pAVar1 = param_1 + 0x11;
    if (((byte)param_1[0x10] & 1) != 0) {
      pAVar1 = *(Artboard **)(param_1 + 0x20);
    }
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
            "Could not find a View Model linked to Artboard %s.\n",pAVar1);
  }
  return (ViewModelRuntime *)0x0;
}


// ===== 003d44b0  rive::File::assets =====

/* rive::File::assets() const */

undefined1  [16] __thiscall rive::File::assets(File *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3;
  auVar1._0_8_ = *(long *)(this + 0x10);
  return auVar1;
}


// ===== 003d44c4  rive::File::enums =====

/* rive::File::enums() const */

File * __thiscall rive::File::enums(File *this)

{
  return this + 0xe8;
}


// ===== 003d44cc  rive::File::asset =====

/* rive::File::asset(unsigned long) */

void rive::File::asset(ulong param_1)

{
  ulong in_x1;
  long *in_x8;
  long lVar1;
  
  if (in_x1 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + in_x1 * 8);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1 + 0x48);
    }
  }
  else {
    lVar1 = 0;
  }
  *in_x8 = lVar1;
  return;
}


// ===== 003d451c  rive::DataConverterNumberToList::convert =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::DataConverterNumberToList::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterNumberToList::convert(DataValue *param_1,DataBind *param_2)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ViewModel *pVVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  DataBind *pDVar18;
  ulong uVar19;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = (**(code **)(*(long *)param_2 + 0x10))(param_2,5);
  pDVar18 = param_2;
  if ((uVar6 & 1) != 0) goto LAB_003d4a00;
  uVar6 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
  if ((uVar6 & 1) == 0) {
    pDVar18 = (DataBind *)0x0;
    goto LAB_003d4a00;
  }
  puVar17 = *(undefined8 **)(param_1 + 0xf0);
  puVar8 = *(undefined8 **)(param_1 + 0xf8);
  while (puVar8 != puVar17) {
    puVar8 = puVar8 + -1;
    plVar12 = (long *)*puVar8;
    if ((plVar12 != (long *)0x0) &&
       (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14), iVar5 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  lVar10 = *(long *)(param_1 + 0xe0);
  pDVar18 = (DataBind *)(param_1 + 0xe8);
  *(undefined8 **)(param_1 + 0xf8) = puVar17;
  lVar4 = _UNK_0024df18;
  lVar11 = _DAT_0024df10;
  if (lVar10 == 0) {
LAB_003d4814:
    puVar17 = *(undefined8 **)(param_1 + 0x108);
    puVar15 = *(undefined8 **)(param_1 + 0x110);
    puVar8 = puVar17;
    if (puVar17 != puVar15) {
      do {
        plVar12 = (long *)*puVar17;
        iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14);
        if (iVar5 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar15);
      puVar15 = *(undefined8 **)(param_1 + 0x108);
      puVar17 = *(undefined8 **)(param_1 + 0x110);
      puVar8 = puVar17;
      if (puVar17 != puVar15) {
        do {
          puVar17 = puVar17 + -1;
          plVar12 = (long *)*puVar17;
          if ((plVar12 != (long *)0x0) &&
             (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14), iVar5 == 1)) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        } while (puVar17 != puVar15);
        puVar17 = puVar15;
        puVar8 = *(undefined8 **)(param_1 + 0x108);
      }
    }
    *(undefined8 **)(param_1 + 0x110) = puVar17;
  }
  else {
    if (((ulong)(*(long *)(lVar10 + 0xa8) - *(long *)(lVar10 + 0xa0) >> 3) <=
         (ulong)*(uint *)(param_1 + 0xd8)) ||
       (lVar10 = *(long *)(*(long *)(lVar10 + 0xa0) + (ulong)*(uint *)(param_1 + 0xd8) * 8),
       lVar10 == 0)) goto LAB_003d4814;
    puVar8 = *(undefined8 **)(param_1 + 0x108);
    puVar17 = *(undefined8 **)(param_1 + 0x110);
    uVar19 = (ulong)((int)*(float *)(param_2 + 8) &
                    ((int)*(float *)(param_2 + 8) >> 0x1f ^ 0xffffffffU));
    uVar6 = (long)puVar17 - (long)puVar8 >> 3;
    if (uVar6 < uVar19) {
      puVar1 = PTR_vtable_0067d270 + 0x10;
      do {
        plVar7 = (long *)operator_new(0x28);
        plVar7[3] = 0;
        plVar7[4] = 0;
        pVVar14 = *(ViewModel **)(param_1 + 0xe0);
        plVar7[2] = lVar4;
        plVar7[1] = lVar11;
        plVar12 = *(long **)(lVar10 + 0x48);
        plVar16 = *(long **)(lVar10 + 0x50);
        *plVar7 = (long)puVar1;
        if ((plVar16 == plVar12) || (plVar12 = (long *)*plVar12, plVar12 == (long *)0x0)) {
          File::createViewModelInstance(pVVar14);
          plVar12 = local_78;
          if (local_78 == (long *)0x0) goto LAB_003d4730;
LAB_003d46fc:
          FUN_00340fb0(1,(long)local_78 + 0xa4);
          FUN_00340fb0(1,(long)local_78 + 0xa4);
          bVar3 = false;
          plVar12 = local_78;
        }
        else {
          local_78 = (long *)(**(code **)(*plVar12 + 0x28))();
          if (local_78 == (long *)0x0) {
            local_70 = (long *)0x0;
            File::completeViewModelInstance((File *)pVVar14,&local_70);
            plVar12 = (long *)0x0;
          }
          else {
            FUN_00340fb0(1,(long)local_78 + 0xa4);
            local_70 = local_78;
            File::completeViewModelInstance((File *)pVVar14,&local_70);
            iVar5 = FUN_00340fe0(0xffffffff,(long)local_78 + 0xa4);
            if (iVar5 == 1) {
              (**(code **)(*local_78 + 8))(local_78);
            }
            plVar12 = local_78;
            if (local_78 != (long *)0x0) goto LAB_003d46fc;
          }
LAB_003d4730:
          bVar3 = true;
        }
        plVar16 = (long *)plVar7[3];
        plVar7[3] = (long)plVar12;
        if ((plVar16 != (long *)0x0) &&
           (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar16 + 0xa4), iVar5 == 1)) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
        if ((!bVar3) && (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0xa4), iVar5 == 1)) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        puVar17 = *(undefined8 **)(param_1 + 0x110);
        if (puVar17 < *(undefined8 **)(param_1 + 0x118)) {
          FUN_00340fb0(1,(long)plVar7 + 0x14);
          puVar8 = puVar17 + 1;
          *puVar17 = plVar7;
        }
        else {
          puVar8 = (undefined8 *)FUN_003bbd00(param_1 + 0x108,plVar7);
        }
        *(undefined8 **)(param_1 + 0x110) = puVar8;
        if ((local_78 != (long *)0x0) &&
           (iVar5 = FUN_00340fe0(0xffffffff,(long)local_78 + 0xa4), iVar5 == 1)) {
          (**(code **)(*local_78 + 8))(local_78);
        }
        iVar5 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x14);
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x108);
        puVar17 = *(undefined8 **)(param_1 + 0x110);
      } while ((ulong)((long)puVar17 - (long)puVar8 >> 3) < uVar19);
    }
    else if (uVar19 < uVar6) {
      puVar13 = puVar17 + -1;
      puVar15 = puVar13;
      do {
        puVar17 = puVar15;
        plVar12 = (long *)*puVar17;
        if ((plVar12 != (long *)0x0) &&
           (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14), iVar5 == 1)) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x108);
        *(undefined8 **)(param_1 + 0x110) = puVar17;
        lVar11 = (long)puVar13 - (long)puVar8;
        puVar13 = puVar13 + -1;
        puVar15 = puVar17 + -1;
      } while (uVar19 < (ulong)(lVar11 >> 3));
    }
  }
  for (; puVar8 != puVar17; puVar8 = puVar8 + 1) {
    plVar12 = (long *)*puVar8;
    if (plVar12 == (long *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0xf8);
      plVar7 = (long *)0x0;
      plVar16 = (long *)0x0;
      if (*(undefined8 **)(param_1 + 0x100) <= puVar15) goto LAB_003d4990;
LAB_003d4980:
      *puVar15 = plVar12;
      *(undefined8 **)(param_1 + 0xf8) = puVar15 + 1;
      plVar16 = plVar7;
    }
    else {
      FUN_00340fb0(1,(long)plVar12 + 0x14);
      FUN_00340fb0(1,(long)plVar12 + 0x14);
      puVar15 = *(undefined8 **)(param_1 + 0xf8);
      plVar16 = plVar12;
      if (puVar15 < *(undefined8 **)(param_1 + 0x100)) {
        FUN_00340fb0(1,(long)plVar12 + 0x14);
        plVar7 = plVar12;
        goto LAB_003d4980;
      }
LAB_003d4990:
      uVar9 = FUN_003bbd00(param_1 + 0xf0,plVar16);
      *(undefined8 *)(param_1 + 0xf8) = uVar9;
    }
    if ((plVar16 != (long *)0x0) &&
       (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar16 + 0x14), iVar5 == 1)) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
    if ((plVar12 != (long *)0x0) &&
       (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14), iVar5 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
LAB_003d4a00:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (DataValue *)pDVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d4a38  rive::DataConverterNumberToList::clearItems =====

/* rive::DataConverterNumberToList::clearItems() */

void __thiscall rive::DataConverterNumberToList::clearItems(DataConverterNumberToList *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  if (puVar5 != puVar1) {
    do {
      plVar3 = (long *)*puVar5;
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14);
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x108);
    puVar4 = *(undefined8 **)(this + 0x110);
    puVar5 = puVar4;
    while (puVar4 != puVar1) {
      puVar4 = puVar4 + -1;
      plVar3 = (long *)*puVar4;
      puVar5 = puVar1;
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14), iVar2 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  *(undefined8 **)(this + 0x110) = puVar5;
  return;
}


// ===== 003d4af4  rive::DataConverterNumberToList::viewModelIdChanged =====

/* rive::DataConverterNumberToList::viewModelIdChanged() */

void __thiscall rive::DataConverterNumberToList::viewModelIdChanged(DataConverterNumberToList *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  if (puVar5 != puVar1) {
    do {
      plVar3 = (long *)*puVar5;
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14);
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x108);
    puVar4 = *(undefined8 **)(this + 0x110);
    puVar5 = puVar4;
    while (puVar4 != puVar1) {
      puVar4 = puVar4 + -1;
      plVar3 = (long *)*puVar4;
      puVar5 = puVar1;
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14), iVar2 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  plVar3 = *(long **)(this + 0xd0);
  *(undefined8 **)(this + 0x110) = puVar5;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003d4bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x88))(plVar3,0x1002,0);
  return;
}


// ===== 003d4bd8  rive::DataConverterNumberToList::file =====

/* rive::DataConverterNumberToList::file(rive::File*) */

void __thiscall rive::DataConverterNumberToList::file(DataConverterNumberToList *this,File *param_1)

{
  *(File **)(this + 0xe0) = param_1;
  return;
}


// ===== 003d4be0  rive::DataConverterNumberToList::file =====

/* rive::DataConverterNumberToList::file() const */

undefined8 __thiscall rive::DataConverterNumberToList::file(DataConverterNumberToList *this)

{
  return *(undefined8 *)(this + 0xe0);
}


// ===== 003d4be8  rive::DataConverterNumberToList::clone =====

/* rive::DataConverterNumberToList::clone() const */

DataConverter * __thiscall rive::DataConverterNumberToList::clone(DataConverterNumberToList *this)

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
  *(undefined8 *)(this_00 + 0xe0) = *(undefined8 *)(this + 0xe0);
  return this_00;
}


// ===== 003d4c84  FUN_003d4c84 =====

void FUN_003d4c84(DataConverter *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x108);
  puVar1 = PTR_vtable_0067d1d8 + 200;
  *(undefined **)param_1 = PTR_vtable_0067d1d8 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x110);
    puVar3 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -1;
        plVar4 = (long *)*puVar6;
        if ((plVar4 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar2 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      } while (puVar6 != puVar5);
      puVar3 = *(undefined8 **)(param_1 + 0x108);
    }
    *(undefined8 **)(param_1 + 0x110) = puVar5;
    operator_delete(puVar3);
  }
  puVar5 = *(undefined8 **)(param_1 + 0xf0);
  *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_00660630;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0xf8);
    puVar3 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -1;
        plVar4 = (long *)*puVar6;
        if ((plVar4 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar2 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      } while (puVar6 != puVar5);
      puVar3 = *(undefined8 **)(param_1 + 0xf0);
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar5;
    operator_delete(puVar3);
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003d4d90  FUN_003d4d90 =====

void FUN_003d4d90(DataConverter *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x108);
  puVar1 = PTR_vtable_0067d1d8 + 200;
  *(undefined **)param_1 = PTR_vtable_0067d1d8 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x110);
    puVar3 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -1;
        plVar4 = (long *)*puVar6;
        if ((plVar4 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar2 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      } while (puVar6 != puVar5);
      puVar3 = *(undefined8 **)(param_1 + 0x108);
    }
    *(undefined8 **)(param_1 + 0x110) = puVar5;
    operator_delete(puVar3);
  }
  puVar5 = *(undefined8 **)(param_1 + 0xf0);
  *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_00660630;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0xf8);
    puVar3 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -1;
        plVar4 = (long *)*puVar6;
        if ((plVar4 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar2 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      } while (puVar6 != puVar5);
      puVar3 = *(undefined8 **)(param_1 + 0xf0);
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar5;
    operator_delete(puVar3);
  }
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003d4ea4  FUN_003d4ea4 =====

undefined8 FUN_003d4ea4(void)

{
  return 0x238;
}


// ===== 003d4eac  FUN_003d4eac =====

bool FUN_003d4eac(undefined8 param_1,short param_2)

{
  return param_2 == 0x238 || param_2 == 0x1e8;
}


// ===== 003d4ec4  FUN_003d4ec4 =====

void FUN_003d4ec4(long param_1,short param_2,long *param_3)

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
  if (param_2 == 0x296) {
    pcVar10 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003d4fcc;
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
LAB_003d4fcc:
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
    if (param_2 != 0x330) {
      uVar5 = 0;
      goto LAB_003d4ffc;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003d4fb0;
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
LAB_003d4fb0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xd8) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003d4ffc:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003d5020  FUN_003d5020 =====

undefined8 FUN_003d5020(void)

{
  return 5;
}


// ===== 003d5028  rive::CoreColorType::deserialize =====

/* rive::CoreColorType::deserialize(rive::BinaryReader&) */

undefined4 rive::CoreColorType::deserialize(BinaryReader *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if ((*(long *)param_1 + *(long *)(param_1 + 8)) - (long)puVar2 < 4) {
    *(long *)(param_1 + 0x10) = *(long *)param_1 + *(long *)(param_1 + 8);
    param_1[0x18] = (BinaryReader)0x1;
    return 0;
  }
  uVar1 = *puVar2;
  *(undefined4 **)(param_1 + 0x10) = puVar2 + 1;
  return uVar1;
}


// ===== 003d5064  rive::CubicValueInterpolator::CubicValueInterpolator =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::CubicValueInterpolator::CubicValueInterpolator() */

void __thiscall rive::CubicValueInterpolator::CubicValueInterpolator(CubicValueInterpolator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_0067cd60;
  uVar2 = _UNK_0024e0f8;
  uVar1 = _DAT_0024e0f0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar2 = _UNK_0024e228;
  uVar1 = _DAT_0024e220;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar1;
  return;
}


// ===== 003d509c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d50a0  FUN_003d50a0 =====

undefined8 FUN_003d50a0(void)

{
  return 0x8a;
}


// ===== 003d50a8  FUN_003d50a8 =====

uint FUN_003d50a8(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x8aU & 0xffff) < 0x26) &
         (uint)(0x2000000003 >> ((ulong)(param_2 - 0x8aU) & 0x3f));
}


// ===== 003d50cc  FUN_003d50cc =====

undefined4 FUN_003d50cc(long param_1,ushort param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  if (param_2 < 0x41) {
    if (param_2 == 0x3f) {
      puVar2 = (undefined4 *)param_3[2];
      puVar1 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar1 - (long)puVar2 < 4) {
        uVar3 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar1 = puVar2 + 1;
        uVar3 = *puVar2;
      }
      param_3[2] = (long)puVar1;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      return 1;
    }
    if (param_2 == 0x40) {
      puVar2 = (undefined4 *)param_3[2];
      puVar1 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar1 - (long)puVar2 < 4) {
        uVar3 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar1 = puVar2 + 1;
        uVar3 = *puVar2;
      }
      param_3[2] = (long)puVar1;
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      return 1;
    }
  }
  else {
    if (param_2 == 0x41) {
      puVar2 = (undefined4 *)param_3[2];
      puVar1 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar1 - (long)puVar2 < 4) {
        uVar3 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar1 = puVar2 + 1;
        uVar3 = *puVar2;
      }
      param_3[2] = (long)puVar1;
      *(undefined4 *)(param_1 + 0x14) = uVar3;
      return 1;
    }
    if (param_2 == 0x42) {
      puVar2 = (undefined4 *)param_3[2];
      puVar1 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar1 - (long)puVar2 < 4) {
        uVar4 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar1 = puVar2 + 1;
        uVar4 = *puVar2;
      }
      param_3[2] = (long)puVar1;
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x18) = uVar4;
    }
  }
  return uVar3;
}


// ===== 003d520c  rive::CubicValueInterpolator::onAddedDirty =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::CubicValueInterpolator::onAddedDirty(rive::CoreContext*) */

undefined8 rive::CubicValueInterpolator::onAddedDirty(CoreContext *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar4 = _UNK_0024e3f8;
  uVar3 = _DAT_0024e3f0;
  uVar2 = _UNK_0024df28;
  uVar1 = _DAT_0024df20;
  fVar5 = *(float *)(param_1 + 0xc);
  fVar10 = *(float *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = NEON_fmadd(uVar6,0xc0400000,0x3f800000);
  fVar11 = (float)NEON_fmadd(fVar10,0xc0000000,*(float *)(param_1 + 0x18));
  fVar16 = *(float *)(param_1 + 0x5c);
  fVar13 = fVar5 * 3.0;
  fVar9 = (float)NEON_fmadd(uVar6,0x40400000,fVar5 * -6.0);
  fVar8 = (float)NEON_fmadd(fVar5,0x40400000,uVar7);
  fVar12 = (float)NEON_fmadd(fVar10 - *(float *)(param_1 + 0x18),0x40400000,
                             *(undefined4 *)(param_1 + 0x60));
  fVar21 = (float)DAT_0024e8f8;
  fVar22 = (float)((ulong)DAT_0024e8f8 >> 0x20);
  *(float *)(param_1 + 0x54) = (fVar16 + fVar11) * 3.0;
  *(float *)(param_1 + 0x58) = (fVar10 - fVar16) * 3.0;
  fVar10 = (float)uVar3;
  fVar11 = (float)((ulong)uVar3 >> 0x20);
  fVar14 = (float)uVar4;
  fVar15 = (float)((ulong)uVar4 >> 0x20);
  fVar17 = (float)uVar1;
  fVar18 = (float)((ulong)uVar1 >> 0x20);
  fVar19 = (float)uVar2;
  fVar20 = (float)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(float *)(param_1 + 0x50) = fVar12 - fVar16;
  *(float *)(param_1 + 0x44) = fVar8 + fVar9 + fVar13;
  *(float *)(param_1 + 0x48) = fVar5;
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44((fVar13 + fVar22 * (fVar9 + fVar22 * fVar8)) * fVar22,
                (fVar13 + fVar21 * (fVar9 + fVar21 * fVar8)) * fVar21);
  *(ulong *)(param_1 + 0x24) =
       CONCAT44((fVar13 + fVar15 * (fVar9 + fVar15 * fVar8)) * fVar15,
                (fVar13 + fVar14 * (fVar9 + fVar14 * fVar8)) * fVar14);
  *(ulong *)(param_1 + 0x1c) =
       CONCAT44((fVar13 + fVar11 * (fVar9 + fVar11 * fVar8)) * fVar11,
                (fVar13 + fVar10 * (fVar9 + fVar10 * fVar8)) * fVar10);
  *(ulong *)(param_1 + 0x34) =
       CONCAT44((fVar13 + fVar20 * (fVar9 + fVar20 * fVar8)) * fVar20,
                (fVar13 + fVar19 * (fVar9 + fVar19 * fVar8)) * fVar19);
  *(ulong *)(param_1 + 0x2c) =
       CONCAT44((fVar13 + fVar18 * (fVar9 + fVar18 * fVar8)) * fVar18,
                (fVar13 + fVar17 * (fVar9 + fVar17 * fVar8)) * fVar17);
  return 0;
}


// ===== 003d52e4  rive::CubicValueInterpolator::transformValue =====

/* rive::CubicValueInterpolator::transformValue(float, float, float) */

undefined4 __thiscall
rive::CubicValueInterpolator::transformValue
          (CubicValueInterpolator *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(this + 0x5c);
  bVar1 = false;
  if ((fVar6 == param_1) && (bVar1 = false, !NAN(*(float *)(this + 0x60)) && !NAN(param_2))) {
    bVar1 = *(float *)(this + 0x60) == param_2;
  }
  if (bVar1) {
    fVar5 = *(float *)(this + 0x50);
    fVar4 = *(float *)(this + 0x54);
    fVar7 = *(float *)(this + 0x58);
  }
  else {
    fVar6 = *(float *)(this + 0x10);
    *(float *)(this + 0x5c) = param_1;
    *(float *)(this + 0x60) = param_2;
    fVar4 = (float)NEON_fmadd(fVar6,0xc0000000,*(float *)(this + 0x18));
    fVar5 = (float)NEON_fmadd(fVar6 - *(float *)(this + 0x18),0x40400000,param_2);
    fVar7 = (fVar6 - param_1) * 3.0;
    fVar5 = fVar5 - param_1;
    fVar4 = (fVar4 + param_1) * 3.0;
    *(float *)(this + 0x58) = fVar7;
    *(float *)(this + 0x50) = fVar5;
    *(float *)(this + 0x54) = fVar4;
    fVar6 = param_1;
  }
  uVar2 = CubicInterpolatorSolver::getT((CubicInterpolatorSolver *)(this + 0x1c),param_3);
  uVar3 = NEON_fmadd(fVar5,uVar2,fVar4);
  uVar3 = NEON_fmadd(uVar3,uVar2,fVar7);
  uVar2 = NEON_fmadd(uVar3,uVar2,fVar6);
  return uVar2;
}


// ===== 003d537c  rive::CubicValueInterpolator::transform =====

/* rive::CubicValueInterpolator::transform(float) const */

void rive::CubicValueInterpolator::transform(float param_1)

{
  return;
}


// ===== 003d5380  FUN_003d5380 =====

void FUN_003d5380(void)

{
  return;
}


// ===== 003d5384  FUN_003d5384 =====

void FUN_003d5384(void)

{
  return;
}


// ===== 003d5388  FUN_003d5388 =====

void FUN_003d5388(void)

{
  return;
}


// ===== 003d538c  FUN_003d538c =====

void FUN_003d538c(void)

{
  return;
}


// ===== 003d5390  rive::CubicValueInterpolator::computeParameters =====

/* rive::CubicValueInterpolator::computeParameters() */

void __thiscall rive::CubicValueInterpolator::computeParameters(CubicValueInterpolator *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(this + 0x10);
  fVar1 = (float)NEON_fmadd(fVar2,0xc0000000,*(float *)(this + 0x18));
  fVar4 = *(float *)(this + 0x5c);
  fVar3 = (float)NEON_fmadd(fVar2 - *(float *)(this + 0x18),0x40400000,*(undefined4 *)(this + 0x60))
  ;
  *(float *)(this + 0x58) = (fVar2 - fVar4) * 3.0;
  *(float *)(this + 0x50) = fVar3 - fVar4;
  *(float *)(this + 0x54) = (fVar4 + fVar1) * 3.0;
  return;
}


// ===== 003d53d0  rive::CubicInterpolatorSolver::calcBezier =====

/* rive::CubicInterpolatorSolver::calcBezier(float, float, float) */

float rive::CubicInterpolatorSolver::calcBezier(float param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = NEON_fmadd(param_3,0xc0400000,0x3f800000);
  uVar3 = NEON_fmadd(param_2,0x40400000,uVar2);
  uVar2 = NEON_fmadd(param_3,0x40400000,param_2 * -6.0);
  uVar2 = NEON_fmadd(uVar3,param_1,uVar2);
  fVar1 = (float)NEON_fmadd(uVar2,param_1,param_2 * 3.0);
  return fVar1 * param_1;
}


// ===== 003d5404  rive::CubicInterpolatorSolver::build =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::CubicInterpolatorSolver::build(float, float) */

void __thiscall
rive::CubicInterpolatorSolver::build(CubicInterpolatorSolver *this,float param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar3 = DAT_0024e8f8;
  uVar2 = _UNK_0024e3f8;
  uVar1 = _DAT_0024e3f0;
  *(float *)(this + 0x2c) = param_1;
  *(float *)(this + 0x30) = param_2;
  uVar4 = NEON_fmadd(param_2,0xc0400000,0x3f800000);
  fVar5 = (float)NEON_fmadd(param_1,0x40400000,uVar4);
  fVar6 = (float)NEON_fmadd(param_2,0x40400000,param_1 * -6.0);
  fVar7 = param_1 * 3.0;
  fVar8 = (float)uVar3;
  fVar9 = (float)((ulong)uVar3 >> 0x20);
  fVar10 = (float)uVar1;
  fVar11 = (float)((ulong)uVar1 >> 0x20);
  fVar12 = (float)uVar2;
  fVar13 = (float)((ulong)uVar2 >> 0x20);
  fVar14 = (float)_DAT_0024df20;
  fVar15 = (float)((ulong)_DAT_0024df20 >> 0x20);
  fVar16 = (float)_UNK_0024df28;
  fVar17 = (float)((ulong)_UNK_0024df28 >> 0x20);
  *(float *)(this + 0x28) = fVar5 + fVar6 + fVar7;
  *(ulong *)(this + 0x20) =
       CONCAT44((fVar7 + fVar9 * (fVar6 + fVar9 * fVar5)) * fVar9,
                (fVar7 + fVar8 * (fVar6 + fVar8 * fVar5)) * fVar8);
  *(ulong *)(this + 8) =
       CONCAT44((fVar7 + fVar13 * (fVar6 + fVar13 * fVar5)) * fVar13,
                (fVar7 + fVar12 * (fVar6 + fVar12 * fVar5)) * fVar12);
  *(ulong *)this =
       CONCAT44((fVar7 + fVar11 * (fVar6 + fVar11 * fVar5)) * fVar11,
                (fVar7 + fVar10 * (fVar6 + fVar10 * fVar5)) * fVar10);
  *(ulong *)(this + 0x18) =
       CONCAT44((fVar7 + fVar17 * (fVar6 + fVar17 * fVar5)) * fVar17,
                (fVar7 + fVar16 * (fVar6 + fVar16 * fVar5)) * fVar16);
  *(ulong *)(this + 0x10) =
       CONCAT44((fVar7 + fVar15 * (fVar6 + fVar15 * fVar5)) * fVar15,
                (fVar7 + fVar14 * (fVar6 + fVar14 * fVar5)) * fVar14);
  return;
}


// ===== 003d549c  rive::CubicInterpolatorSolver::getT =====

/* rive::CubicInterpolatorSolver::getT(float) const */

float __thiscall rive::CubicInterpolatorSolver::getT(CubicInterpolatorSolver *this,float param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = *(float *)(this + 4);
  if (fVar4 <= param_1) {
    fVar4 = *(float *)(this + 8);
    if (fVar4 <= param_1) {
      fVar4 = *(float *)(this + 0xc);
      if (fVar4 <= param_1) {
        fVar4 = *(float *)(this + 0x10);
        if (fVar4 <= param_1) {
          fVar4 = *(float *)(this + 0x14);
          if (fVar4 <= param_1) {
            fVar4 = *(float *)(this + 0x18);
            if (fVar4 <= param_1) {
              fVar4 = *(float *)(this + 0x1c);
              if (fVar4 <= param_1) {
                fVar4 = *(float *)(this + 0x20);
                if (fVar4 <= param_1) {
                  fVar4 = *(float *)(this + 0x24);
                  if (fVar4 <= param_1) {
                    fVar4 = *(float *)(this + 0x28);
                    fVar5 = 0.9000001;
                    lVar3 = 9;
                  }
                  else {
                    fVar5 = 0.8000001;
                    lVar3 = 8;
                  }
                }
                else {
                  fVar5 = 0.70000005;
                  lVar3 = 7;
                }
              }
              else {
                fVar5 = 0.6;
                lVar3 = 6;
              }
            }
            else {
              fVar5 = 0.5;
              lVar3 = 5;
            }
          }
          else {
            fVar5 = 0.4;
            lVar3 = 4;
          }
        }
        else {
          fVar5 = 0.3;
          lVar3 = 3;
        }
      }
      else {
        fVar5 = 0.2;
        lVar3 = 2;
      }
    }
    else {
      fVar5 = 0.1;
      lVar3 = 1;
    }
  }
  else {
    fVar5 = 0.0;
    lVar3 = 0;
  }
  fVar9 = *(float *)(this + 0x2c);
  uVar6 = NEON_fmadd(*(undefined4 *)(this + 0x30),0xc0400000,0x3f800000);
  fVar7 = (float)NEON_fmadd(fVar9,0x40400000,uVar6);
  fVar8 = (float)NEON_fmadd(*(undefined4 *)(this + 0x30),0x40400000,fVar9 * -6.0);
  fVar11 = fVar8 + fVar8;
  fVar4 = (float)NEON_fmadd((param_1 - *(float *)(this + lVar3 * 4)) /
                            (fVar4 - *(float *)(this + lVar3 * 4)),0x3dcccccd,fVar5);
  fVar10 = fVar7 * 3.0;
  uVar6 = NEON_fmadd(fVar4 * fVar10,fVar4,fVar4 * fVar11);
  fVar12 = (float)NEON_fmadd(fVar9,0x40400000,uVar6);
  if (fVar12 < 0.001 == NAN(fVar12)) {
    if (fVar12 != 0.0) {
      fVar5 = fVar9 * 3.0;
      uVar6 = NEON_fmadd(fVar7,fVar4,fVar8);
      fVar13 = (float)NEON_fmadd(uVar6,fVar4,fVar5);
      fVar4 = fVar4 - (fVar4 * fVar13 - param_1) / fVar12;
      uVar6 = NEON_fmadd(fVar10 * fVar4,fVar4,fVar11 * fVar4);
      fVar12 = (float)NEON_fmadd(fVar9,0x40400000,uVar6);
      if (fVar12 != 0.0) {
        uVar6 = NEON_fmadd(fVar7,fVar4,fVar8);
        fVar13 = (float)NEON_fmadd(uVar6,fVar4,fVar5);
        fVar4 = fVar4 - (fVar4 * fVar13 - param_1) / fVar12;
        uVar6 = NEON_fmadd(fVar10 * fVar4,fVar4,fVar11 * fVar4);
        fVar12 = (float)NEON_fmadd(fVar9,0x40400000,uVar6);
        if (fVar12 != 0.0) {
          uVar6 = NEON_fmadd(fVar7,fVar4,fVar8);
          fVar13 = (float)NEON_fmadd(uVar6,fVar4,fVar5);
          fVar4 = fVar4 - (fVar4 * fVar13 - param_1) / fVar12;
          uVar6 = NEON_fmadd(fVar10 * fVar4,fVar4,fVar11 * fVar4);
          fVar9 = (float)NEON_fmadd(fVar9,0x40400000,uVar6);
          if (fVar9 != 0.0) {
            uVar6 = NEON_fmadd(fVar7,fVar4,fVar8);
            fVar5 = (float)NEON_fmadd(uVar6,fVar4,fVar5);
            return fVar4 - (fVar4 * fVar5 - param_1) / fVar9;
          }
        }
      }
    }
  }
  else if (fVar12 != 0.0) {
    uVar2 = 0;
    fVar10 = fVar5 + 0.1;
    do {
      fVar4 = fVar5 + (fVar10 - fVar5) * 0.5;
      uVar6 = NEON_fmadd(fVar7,fVar4,fVar8);
      fVar11 = (float)NEON_fmadd(uVar6,fVar4,fVar9 * 3.0);
      fVar13 = fVar4 * fVar11 - param_1;
      fVar12 = ABS(fVar4 * fVar11 - param_1);
      fVar11 = fVar4;
      if (fVar13 == 0.0 || fVar13 < 0.0 != NAN(fVar13)) {
        fVar5 = fVar4;
        fVar11 = fVar10;
      }
      fVar10 = fVar11;
      bVar1 = uVar2 < 9;
      uVar2 = uVar2 + 1;
    } while ((fVar12 != 1e-07 && fVar12 < 1e-07 == NAN(fVar12)) && bVar1);
  }
  return fVar4;
}


// ===== 003d576c  rive::CubicInterpolator::onAddedDirty =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::CubicInterpolator::onAddedDirty(rive::CoreContext*) */

undefined8 rive::CubicInterpolator::onAddedDirty(CoreContext *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar5 = DAT_0024e8f8;
  uVar4 = _UNK_0024e3f8;
  uVar3 = _DAT_0024e3f0;
  uVar2 = _UNK_0024df28;
  uVar1 = _DAT_0024df20;
  fVar6 = *(float *)(param_1 + 0xc);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = NEON_fmadd(uVar10,0xc0400000,0x3f800000);
  *(float *)(param_1 + 0x48) = fVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar10;
  fVar8 = (float)NEON_fmadd(fVar6,0x40400000,uVar7);
  fVar9 = (float)NEON_fmadd(uVar10,0x40400000,fVar6 * -6.0);
  fVar6 = fVar6 * 3.0;
  fVar11 = (float)uVar5;
  fVar12 = (float)((ulong)uVar5 >> 0x20);
  fVar13 = (float)uVar3;
  fVar14 = (float)((ulong)uVar3 >> 0x20);
  fVar15 = (float)uVar4;
  fVar16 = (float)((ulong)uVar4 >> 0x20);
  fVar17 = (float)uVar1;
  fVar18 = (float)((ulong)uVar1 >> 0x20);
  fVar19 = (float)uVar2;
  fVar20 = (float)((ulong)uVar2 >> 0x20);
  *(float *)(param_1 + 0x44) = fVar8 + fVar9 + fVar6;
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44((fVar6 + fVar12 * (fVar9 + fVar12 * fVar8)) * fVar12,
                (fVar6 + fVar11 * (fVar9 + fVar11 * fVar8)) * fVar11);
  *(ulong *)(param_1 + 0x24) =
       CONCAT44((fVar6 + fVar16 * (fVar9 + fVar16 * fVar8)) * fVar16,
                (fVar6 + fVar15 * (fVar9 + fVar15 * fVar8)) * fVar15);
  *(ulong *)(param_1 + 0x1c) =
       CONCAT44((fVar6 + fVar14 * (fVar9 + fVar14 * fVar8)) * fVar14,
                (fVar6 + fVar13 * (fVar9 + fVar13 * fVar8)) * fVar13);
  *(ulong *)(param_1 + 0x34) =
       CONCAT44((fVar6 + fVar20 * (fVar9 + fVar20 * fVar8)) * fVar20,
                (fVar6 + fVar19 * (fVar9 + fVar19 * fVar8)) * fVar19);
  *(ulong *)(param_1 + 0x2c) =
       CONCAT44((fVar6 + fVar18 * (fVar9 + fVar18 * fVar8)) * fVar18,
                (fVar6 + fVar17 * (fVar9 + fVar17 * fVar8)) * fVar17);
  return 0;
}


// ===== 003d5818  rive::CubicInterpolator::initialize =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::CubicInterpolator::initialize() */

void __thiscall rive::CubicInterpolator::initialize(CubicInterpolator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar5 = DAT_0024e8f8;
  uVar4 = _UNK_0024e3f8;
  uVar3 = _DAT_0024e3f0;
  uVar2 = _UNK_0024df28;
  uVar1 = _DAT_0024df20;
  fVar6 = *(float *)(this + 0xc);
  uVar10 = *(undefined4 *)(this + 0x14);
  uVar7 = NEON_fmadd(uVar10,0xc0400000,0x3f800000);
  *(float *)(this + 0x48) = fVar6;
  *(undefined4 *)(this + 0x4c) = uVar10;
  fVar8 = (float)NEON_fmadd(fVar6,0x40400000,uVar7);
  fVar9 = (float)NEON_fmadd(uVar10,0x40400000,fVar6 * -6.0);
  fVar6 = fVar6 * 3.0;
  fVar11 = (float)uVar5;
  fVar12 = (float)((ulong)uVar5 >> 0x20);
  fVar13 = (float)uVar3;
  fVar14 = (float)((ulong)uVar3 >> 0x20);
  fVar15 = (float)uVar4;
  fVar16 = (float)((ulong)uVar4 >> 0x20);
  fVar17 = (float)uVar1;
  fVar18 = (float)((ulong)uVar1 >> 0x20);
  fVar19 = (float)uVar2;
  fVar20 = (float)((ulong)uVar2 >> 0x20);
  *(float *)(this + 0x44) = fVar8 + fVar9 + fVar6;
  *(ulong *)(this + 0x3c) =
       CONCAT44((fVar6 + fVar12 * (fVar9 + fVar12 * fVar8)) * fVar12,
                (fVar6 + fVar11 * (fVar9 + fVar11 * fVar8)) * fVar11);
  *(ulong *)(this + 0x24) =
       CONCAT44((fVar6 + fVar16 * (fVar9 + fVar16 * fVar8)) * fVar16,
                (fVar6 + fVar15 * (fVar9 + fVar15 * fVar8)) * fVar15);
  *(ulong *)(this + 0x1c) =
       CONCAT44((fVar6 + fVar14 * (fVar9 + fVar14 * fVar8)) * fVar14,
                (fVar6 + fVar13 * (fVar9 + fVar13 * fVar8)) * fVar13);
  *(ulong *)(this + 0x34) =
       CONCAT44((fVar6 + fVar20 * (fVar9 + fVar20 * fVar8)) * fVar20,
                (fVar6 + fVar19 * (fVar9 + fVar19 * fVar8)) * fVar19);
  *(ulong *)(this + 0x2c) =
       CONCAT44((fVar6 + fVar18 * (fVar9 + fVar18 * fVar8)) * fVar18,
                (fVar6 + fVar17 * (fVar9 + fVar17 * fVar8)) * fVar17);
  return;
}


// ===== 003d58bc  FUN_003d58bc =====

void FUN_003d58bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3d58c0);
  (*pcVar1)();
}


// ===== 003d58c0  FUN_003d58c0 =====

undefined8 FUN_003d58c0(void)

{
  return 0x8b;
}


// ===== 003d58c8  FUN_003d58c8 =====

bool FUN_003d58c8(undefined8 param_1,short param_2)

{
  return param_2 == 0x8b || param_2 == 0xaf;
}


// ===== 003d58e0  rive::ElasticInterpolator::ElasticInterpolator =====

/* rive::ElasticInterpolator::ElasticInterpolator() */

void __thiscall rive::ElasticInterpolator::ElasticInterpolator(ElasticInterpolator *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_vtable_0067cd68;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 8) = DAT_0024e6c8;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined **)this = puVar1 + 0x10;
  ElasticEase::ElasticEase((ElasticEase *)(this + 0x18),1.0,0.5);
  return;
}


// ===== 003d5918  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d591c  FUN_003d591c =====

undefined8 FUN_003d591c(void)

{
  return 0xae;
}


// ===== 003d5924  FUN_003d5924 =====

bool FUN_003d5924(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffe) == 0xae;
}


// ===== 003d5934  FUN_003d5934 =====

undefined8 FUN_003d5934(long param_1,short param_2,long *param_3)

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
  
  if (param_2 == 0x197) {
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
    *(undefined4 *)(param_1 + 0x14) = uVar9;
    return 1;
  }
  if (param_2 == 0x196) {
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
    *(undefined4 *)(param_1 + 0x10) = uVar9;
    return 1;
  }
  if (param_2 != 0x195) {
    return 0;
  }
  uVar8 = 0;
  uVar3 = 0;
  pbVar6 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003d5a00;
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
LAB_003d5a00:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  return 1;
}


// ===== 003d5a4c  rive::ElasticInterpolator::onAddedDirty =====

/* rive::ElasticInterpolator::onAddedDirty(rive::CoreContext*) */

undefined8 rive::ElasticInterpolator::onAddedDirty(CoreContext *param_1)

{
  (**(code **)(*(long *)param_1 + 0x60))();
  return 0;
}


// ===== 003d5a6c  rive::ElasticInterpolator::transformValue =====

/* rive::ElasticInterpolator::transformValue(float, float, float) */

undefined4 __thiscall
rive::ElasticInterpolator::transformValue
          (ElasticInterpolator *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x58))(param_3);
  uVar1 = NEON_fmadd(param_2 - param_1,uVar1,param_1);
  return uVar1;
}


// ===== 003d5aa0  rive::ElasticInterpolator::transform =====

/* rive::ElasticInterpolator::transform(float) const */

float __thiscall rive::ElasticInterpolator::transform(ElasticInterpolator *this,float param_1)

{
  ElasticInterpolator EVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  EVar1 = this[0xc];
  if (EVar1 == (ElasticInterpolator)0x2) {
    fVar4 = *(float *)(this + 0x18);
    fVar5 = (float)NEON_fmadd(param_1,0x40000000,0xbf800000);
    if (fVar4 < 1.0) {
      if (ABS(fVar5) < ABS(*(float *)(this + 0x20))) {
        fVar6 = ABS(fVar5) / ABS(*(float *)(this + 0x20));
        fVar4 = (float)NEON_fmadd(fVar4,fVar6,1.0 - fVar6);
      }
    }
    if (0.0 <= fVar5) {
      fVar6 = exp2f(fVar5 * -10.0);
      fVar5 = sinf(((fVar5 - *(float *)(this + 0x20)) * 6.2831855) / *(float *)(this + 0x1c));
      param_1 = (float)NEON_fmadd(fVar6 * fVar4 * fVar5,0x3f000000,0x3f800000);
    }
    else {
      fVar6 = exp2f(fVar5 * 10.0);
      fVar5 = sinf(((-fVar5 - *(float *)(this + 0x20)) * 6.2831855) / *(float *)(this + 0x1c));
      param_1 = fVar6 * fVar4 * -0.5 * fVar5;
    }
  }
  else if (EVar1 == (ElasticInterpolator)0x1) {
    fVar5 = *(float *)(this + 0x18);
    fVar4 = *(float *)(this + 0x20);
    if (fVar5 < 1.0) {
      fVar6 = ABS(fVar4);
      if (ABS(param_1) < fVar6) {
        fVar6 = ABS(param_1) / fVar6;
        fVar5 = (float)NEON_fmadd(fVar5,fVar6,1.0 - fVar6);
      }
    }
    fVar6 = exp2f(param_1 * -10.0);
    fVar4 = sinf(((param_1 - fVar4) * 6.2831855) / *(float *)(this + 0x1c));
    param_1 = (float)NEON_fmadd(fVar6 * fVar5,fVar4,0x3f800000);
  }
  else if (EVar1 == (ElasticInterpolator)0x0) {
    fVar5 = *(float *)(this + 0x18);
    fVar6 = *(float *)(this + 0x20);
    fVar4 = param_1 + -1.0;
    if ((fVar5 < 1.0) &&
       (fVar2 = ABS(fVar6), fVar3 = ABS(fVar4) / fVar2,
       fVar3 = (float)NEON_fmadd(fVar5,fVar3,1.0 - fVar3), ABS(fVar4) < fVar2)) {
      fVar5 = fVar3;
    }
    fVar2 = exp2f(fVar4 * 10.0);
    fVar4 = sinf(((-fVar4 - fVar6) * -6.2831855) / *(float *)(this + 0x1c));
    param_1 = fVar2 * fVar5 * fVar4;
  }
  return param_1;
}


// ===== 003d5cac  rive::ElasticInterpolator::initialize =====

/* rive::ElasticInterpolator::initialize() */

void __thiscall rive::ElasticInterpolator::initialize(ElasticInterpolator *this)

{
  long lVar1;
  float fVar2;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = 0.5;
  if (*(float *)(this + 0x14) != 0.0) {
    fVar2 = *(float *)(this + 0x14);
  }
  ElasticEase::ElasticEase((ElasticEase *)&local_34,*(float *)(this + 0x10),fVar2);
  *(undefined8 *)(this + 0x18) = local_34;
  *(undefined4 *)(this + 0x20) = local_2c;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d5d18  FUN_003d5d18 =====

void FUN_003d5d18(void)

{
  return;
}


// ===== 003d5d1c  FUN_003d5d1c =====

void FUN_003d5d1c(void)

{
  return;
}


// ===== 003d5d20  FUN_003d5d20 =====

void FUN_003d5d20(void)

{
  return;
}


// ===== 003d5d24  rive::ElasticEase::ElasticEase =====

/* rive::ElasticEase::ElasticEase(float, float) */

void __thiscall rive::ElasticEase::ElasticEase(ElasticEase *this,float param_1,float param_2)

{
  float fVar1;
  
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  if (1.0 <= param_1) {
    fVar1 = asinf(1.0 / param_1);
    fVar1 = (param_2 / 6.2831855) * fVar1;
  }
  else {
    fVar1 = param_2 * 0.25;
  }
  *(float *)(this + 8) = fVar1;
  return;
}


// ===== 003d5d84  rive::ElasticEase::computeActualAmplitude =====

/* rive::ElasticEase::computeActualAmplitude(float) const */

float __thiscall rive::ElasticEase::computeActualAmplitude(ElasticEase *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)this;
  if (fVar2 < 1.0) {
    if (ABS(param_1) < ABS(*(float *)(this + 8))) {
      fVar1 = ABS(param_1) / ABS(*(float *)(this + 8));
      fVar2 = (float)NEON_fmadd(fVar2,fVar1,1.0 - fVar1);
      return fVar2;
    }
  }
  return fVar2;
}


// ===== 003d5dc4  rive::ElasticEase::easeOut =====

/* rive::ElasticEase::easeOut(float) const */

undefined4 __thiscall rive::ElasticEase::easeOut(ElasticEase *this,float param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(this + 8);
  fVar5 = *(float *)this;
  fVar2 = ABS(fVar6);
  fVar4 = ABS(param_1);
  bVar1 = false;
  if ((fVar5 < 1.0) && (bVar1 = false, !NAN(fVar4) && !NAN(fVar2))) {
    bVar1 = fVar4 < fVar2;
  }
  if (bVar1) {
    fVar5 = (float)NEON_fmadd(fVar5,fVar4 / fVar2,1.0 - fVar4 / fVar2);
  }
  fVar2 = exp2f(param_1 * -10.0);
  fVar4 = sinf(((param_1 - fVar6) * 6.2831855) / *(float *)(this + 4));
  uVar3 = NEON_fmadd(fVar2 * fVar5,fVar4,0x3f800000);
  return uVar3;
}


// ===== 003d5e58  rive::ElasticEase::easeIn =====

/* rive::ElasticEase::easeIn(float) const */

float __thiscall rive::ElasticEase::easeIn(ElasticEase *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)this;
  fVar5 = *(float *)(this + 8);
  fVar3 = param_1 + -1.0;
  if ((fVar4 < 1.0) &&
     (fVar1 = ABS(fVar5), fVar2 = ABS(fVar3) / fVar1,
     fVar2 = (float)NEON_fmadd(fVar4,fVar2,1.0 - fVar2), ABS(fVar3) < fVar1)) {
    fVar4 = fVar2;
  }
  fVar1 = exp2f(fVar3 * 10.0);
  fVar3 = sinf(((-fVar3 - fVar5) * -6.2831855) / *(float *)(this + 4));
  return fVar1 * fVar4 * fVar3;
}


// ===== 003d5efc  rive::ElasticEase::easeInOut =====

/* rive::ElasticEase::easeInOut(float) const */

float __thiscall rive::ElasticEase::easeInOut(ElasticEase *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)this;
  fVar2 = (float)NEON_fmadd(param_1,0x40000000,0xbf800000);
  if (fVar3 < 1.0) {
    if (ABS(fVar2) < ABS(*(float *)(this + 8))) {
      fVar1 = ABS(fVar2) / ABS(*(float *)(this + 8));
      fVar3 = (float)NEON_fmadd(fVar3,fVar1,1.0 - fVar1);
    }
  }
  if (0.0 <= fVar2) {
    fVar1 = exp2f(fVar2 * -10.0);
    fVar2 = sinf(((fVar2 - *(float *)(this + 8)) * 6.2831855) / *(float *)(this + 4));
    fVar2 = (float)NEON_fmadd(fVar1 * fVar3 * fVar2,0x3f000000,0x3f800000);
  }
  else {
    fVar1 = exp2f(fVar2 * 10.0);
    fVar2 = sinf(((-fVar2 - *(float *)(this + 8)) * 6.2831855) / *(float *)(this + 4));
    fVar2 = fVar1 * fVar3 * -0.5 * fVar2;
  }
  return fVar2;
}


// ===== 003d5ff4  rive::AudioAsset::AudioAsset =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::AudioAsset::AudioAsset() */

void __thiscall rive::AudioAsset::AudioAsset(AudioAsset *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char *pcVar8;
  
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  pcVar8 = (char *)operator_new(0x30);
  *(char **)(this + 0x40) = pcVar8;
  uVar6 = _UNK_0024e0e8;
  uVar5 = _DAT_0024e0e0;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar2 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar1 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar8[0x20] = '\0';
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined8 *)(pcVar8 + 8) = uVar2;
  *(undefined8 *)pcVar8 = uVar1;
  *(undefined8 *)(pcVar8 + 0x18) = uVar4;
  *(undefined8 *)(pcVar8 + 0x10) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x30) = uVar5;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  puVar7 = PTR_vtable_0067cfd8;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  *(undefined **)this = puVar7 + 0x10;
  *(undefined8 *)(this + 0x88) = 0;
  return;
}


// ===== 003d607c  rive::AudioAsset::~AudioAsset =====

/* rive::AudioAsset::~AudioAsset() */

void __thiscall rive::AudioAsset::~AudioAsset(AudioAsset *this)

{
  ~AudioAsset(this);
  operator_delete(this);
  return;
}


// ===== 003d60a0  FUN_003d60a0 =====

undefined8 FUN_003d60a0(void)

{
  return 0x196;
}


// ===== 003d60a8  FUN_003d60a8 =====

undefined8 FUN_003d60a8(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0x196) {
    if ((param_2 != 99) && (param_2 != 0x67)) {
      return 0;
    }
  }
  else if ((param_2 != 0x196) && (param_2 != 0x1a6)) {
    return 0;
  }
  return 1;
}


// ===== 003d60e4  FUN_003d60e4 =====

undefined8 FUN_003d60e4(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0x212) {
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
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    return 1;
  }
  uVar1 = FUN_0037ab68();
  return uVar1;
}


// ===== 003d613c  rive::AudioAsset::decode =====

/* rive::AudioAsset::decode(rive::SimpleArray<unsigned char>&, rive::Factory*) */

undefined8 rive::AudioAsset::decode(SimpleArray *param_1,Factory *param_2)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = *(void **)param_2;
  uStack_48 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  AudioSource::MakeAudioSource((AudioSource *)&local_40,&local_50);
  pvVar2 = local_40;
  pvVar4 = *(void **)(param_1 + 0x88);
  local_40 = (void *)0x0;
  *(void **)(param_1 + 0x88) = pvVar2;
  if (pvVar4 != (void *)0x0) {
    iVar3 = FUN_00340fe0(0xffffffff,pvVar4);
    if (iVar3 == 1) {
      free(*(void **)((long)pvVar4 + 0x28));
      operator_delete(pvVar4);
    }
    pvVar2 = local_40;
    if ((local_40 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40), iVar3 == 1)) {
      free(*(void **)((long)pvVar2 + 0x28));
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    free(local_50);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d6210  rive::AudioAsset::fileExtension =====

/* rive::AudioAsset::fileExtension() const */

void __thiscall rive::AudioAsset::fileExtension(AudioAsset *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 6;
  *(undefined4 *)(in_x8 + 1) = 0x766177;
  return;
}


// ===== 003d6228  FUN_003d6228 =====

void FUN_003d6228(void)

{
  return;
}


// ===== 003d622c  rive::AudioAsset::~AudioAsset =====

/* rive::AudioAsset::~AudioAsset() */

void __thiscall rive::AudioAsset::~AudioAsset(AudioAsset *this)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x88);
  *(undefined **)this = PTR_vtable_0067cfd8 + 0x10;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar2), iVar1 == 1)) {
    free(*(void **)((long)pvVar2 + 0x28));
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cfe8 + 0x10;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x50);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR_FUN_0065be68;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  *(undefined ***)this = &PTR_FUN_0065bef8;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


// ===== 003d62f4  rive::TransitionComparator::import =====

/* rive::TransitionComparator::import(rive::ImportStack&) */

undefined8 __thiscall
rive::TransitionComparator::import(TransitionComparator *this,ImportStack *param_1)

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
      uVar8 = (ulong)((uint)uVar5 - 1) & 0x1e2;
    }
    else {
      uVar8 = 0x1e2;
      if (uVar5 < 0x1e3) {
        uVar1 = (uint)uVar5 & 0xffff;
        uVar3 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar3 = 0x1e2 / uVar1;
        }
        uVar8 = (ulong)(0x1e2 - uVar3 * uVar1);
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x1e2) {
          if ((short)plVar9[2] == 0x1e2) {
            if (plVar9[3] == 0) {
              return 1;
            }
            lVar6 = *(long *)(plVar9[3] + 8);
            lVar2 = 0x10;
            if (*(long *)(lVar6 + 0x10) != 0) {
              lVar2 = 0x18;
            }
            *(TransitionComparator **)(lVar6 + lVar2) = this;
            return 0;
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


// ===== 003d63dc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d63e0  FUN_003d63e0 =====

undefined8 FUN_003d63e0(void)

{
  return 0x1dd;
}


// ===== 003d63e8  FUN_003d63e8 =====

bool FUN_003d63e8(undefined8 param_1,short param_2)

{
  return param_2 == 0x1dd;
}


// ===== 003d63f8  rive::KeyFrame::computeSeconds =====

/* rive::KeyFrame::computeSeconds(int) */

void __thiscall rive::KeyFrame::computeSeconds(KeyFrame *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xc));
  *(float *)(this + 0x10) = fVar1 / (float)param_1;
  return;
}


// ===== 003d6410  rive::KeyFrame::import =====

/* rive::KeyFrame::import(rive::ImportStack&) */

void __thiscall rive::KeyFrame::import(KeyFrame *this,ImportStack *param_1)

{
  uint uVar1;
  KeyedProperty *pKVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  float fVar13;
  undefined8 uVar14;
  KeyFrame *local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    uVar14 = NEON_cnt(uVar6,1);
    uVar12 = NEON_uaddlv(uVar14,1);
    uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar12) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = (ulong)((uint)uVar6 - 1) & 0x1a;
    }
    else {
      uVar9 = 0x1a;
      if (uVar6 < 0x1b) {
        uVar1 = (uint)uVar6 & 0xff;
        uVar3 = 0;
        if ((uVar6 & 0xff) != 0) {
          uVar3 = 0x1a / uVar1;
        }
        uVar9 = (ulong)(0x1a - uVar3 * uVar1);
      }
    }
    plVar10 = *(long **)(*(long *)param_1 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == 0x1a) {
          if ((short)plVar10[2] == 0x1a) {
            lVar7 = plVar10[3];
            if (lVar7 != 0) {
              pKVar2 = *(KeyedProperty **)(lVar7 + 0x10);
              fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xc));
              *(float *)(this + 0x10) = fVar13 / (float)*(int *)(*(long *)(lVar7 + 8) + 0x28);
              local_30 = this;
              KeyedProperty::addKeyFrame(pKVar2,&local_30);
              if (local_30 != (KeyFrame *)0x0) {
                (**(code **)(*(long *)local_30 + 8))();
              }
              uVar14 = 0;
              goto LAB_003d6530;
            }
            break;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar6 - 1;
          }
          else if (uVar6 <= uVar11) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar11 / uVar6;
            }
            uVar11 = uVar11 - uVar4 * uVar6;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar14 = 1;
LAB_003d6530:
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar14);
  }
  return;
}


// ===== 003d6554  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d6558  FUN_003d6558 =====

undefined8 FUN_003d6558(void)

{
  return 0x1d;
}


// ===== 003d6560  FUN_003d6560 =====

bool FUN_003d6560(undefined8 param_1,short param_2)

{
  return param_2 == 0x1d;
}


// ===== 003d6570  rive::NestedLinearAnimation::NestedLinearAnimation =====

/* rive::NestedLinearAnimation::NestedLinearAnimation() */

void __thiscall rive::NestedLinearAnimation::NestedLinearAnimation(NestedLinearAnimation *this)

{
  undefined *puVar1;
  
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0x3f800000ffffffff;
  puVar1 = PTR_vtable_0067ce40;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


// ===== 003d65c4  rive::NestedLinearAnimation::~NestedLinearAnimation =====

/* rive::NestedLinearAnimation::~NestedLinearAnimation() */

void __thiscall rive::NestedLinearAnimation::~NestedLinearAnimation(NestedLinearAnimation *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3d65c8);
  (*pcVar1)();
}


// ===== 003d65c8  FUN_003d65c8 =====

undefined8 FUN_003d65c8(void)

{
  return 0x61;
}


// ===== 003d65d0  FUN_003d65d0 =====

undefined8 FUN_003d65d0(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 10) && (param_2 != 0x5d)) && (param_2 != 0x61)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003d65fc  FUN_003d65fc =====

undefined8 FUN_003d65fc(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0xc6) {
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003d6790;
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
LAB_003d6790:
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
      if (param_2 != 5) goto LAB_003d67f0;
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003d6774;
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
LAB_003d6774:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0xc6) {
      if (param_2 == 200) {
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
      goto LAB_003d67f0;
    }
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003d67c8;
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
LAB_003d67c8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xa0) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003d67f0:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d6818  rive::NestedLinearAnimation::initializeAnimation =====

/* rive::NestedLinearAnimation::initializeAnimation(rive::ArtboardInstance*) */

void __thiscall
rive::NestedLinearAnimation::initializeAnimation
          (NestedLinearAnimation *this,ArtboardInstance *param_1)

{
  LinearAnimationInstance *this_00;
  long *plVar1;
  LinearAnimation *pLVar2;
  
  if ((ulong)*(uint *)(this + 0xa0) <
      (ulong)(*(long *)(param_1 + 0xa90) - *(long *)(param_1 + 0xa88) >> 3)) {
    pLVar2 = *(LinearAnimation **)(*(long *)(param_1 + 0xa88) + (ulong)*(uint *)(this + 0xa0) * 8);
  }
  else {
    pLVar2 = (LinearAnimation *)0x0;
  }
  this_00 = (LinearAnimationInstance *)operator_new(0x80);
  LinearAnimationInstance::LinearAnimationInstance(this_00,pLVar2,param_1,1.0);
  plVar1 = *(long **)(this + 0xa8);
  *(LinearAnimationInstance **)(this + 0xa8) = this_00;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d6890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 003d68a4  FUN_003d68a4 =====

void FUN_003d68a4(void)

{
  return;
}


// ===== 003d68a8  FUN_003d68a8 =====

void FUN_003d68a8(void)

{
  return;
}


// ===== 003d68ac  rive::NestedLinearAnimation::~NestedLinearAnimation =====

/* rive::NestedLinearAnimation::~NestedLinearAnimation() */

void __thiscall rive::NestedLinearAnimation::~NestedLinearAnimation(NestedLinearAnimation *this)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_vtable_0067ce40;
  plVar2 = *(long **)(this + 0xa8);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar3 = *(void **)(this + 0x88);
  *(undefined **)this = PTR_vtable_0067ced8 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cee0 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x48);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar3;
    operator_delete(pvVar3);
  }
  *(undefined ***)this = &PTR_FUN_00678650;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


// ===== 003d6964  rive::LayerState::~LayerState =====

/* rive::LayerState::~LayerState() */

void __thiscall rive::LayerState::~LayerState(LayerState *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x48);
  plVar1 = *(long **)(this + 0x50);
  *(undefined **)this = PTR_vtable_0067cdd0 + 0x10;
  if (plVar3 != plVar1) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = *(long **)(this + 0x48);
  }
  if (plVar3 != (long *)0x0) {
    *(long **)(this + 0x50) = plVar3;
    operator_delete(plVar3);
  }
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


// ===== 003d6a8c  rive::LayerState::~LayerState =====

/* rive::LayerState::~LayerState() */

void __thiscall rive::LayerState::~LayerState(LayerState *this)

{
  ~LayerState(this);
  operator_delete(this);
  return;
}


// ===== 003d6ab0  FUN_003d6ab0 =====

undefined8 FUN_003d6ab0(void)

{
  return 0x3c;
}


// ===== 003d6ab8  FUN_003d6ab8 =====

bool FUN_003d6ab8(undefined8 param_1,short param_2)

{
  return param_2 == 0x3c || param_2 == 0x42;
}


// ===== 003d6ad0  rive::LayerState::onAddedDirty =====

/* rive::LayerState::onAddedDirty(rive::CoreContext*) */

ulong __thiscall rive::LayerState::onAddedDirty(LayerState *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x48);
  puVar2 = *(undefined8 **)(this + 0x50);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x38))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return uVar3;
}


// ===== 003d6b2c  rive::LayerState::onAddedClean =====

/* rive::LayerState::onAddedClean(rive::CoreContext*) */

ulong __thiscall rive::LayerState::onAddedClean(LayerState *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x48);
  puVar2 = *(undefined8 **)(this + 0x50);
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


// ===== 003d6b88  rive::LayerState::import =====

/* rive::LayerState::import(rive::ImportStack&) */

undefined8 __thiscall rive::LayerState::import(LayerState *this,ImportStack *param_1)

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
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x39;
  }
  else {
    uVar5 = 0x39;
    if (uVar4 < 0x3a) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x39 / uVar1;
      }
      uVar5 = (ulong)(0x39 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x39) {
        if ((short)plVar6[2] == 0x39) {
          if (plVar6[3] == 0) {
            return 1;
          }
          StateMachineLayer::addState(*(StateMachineLayer **)(plVar6[3] + 8),this);
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


// ===== 003d6c78  rive::LayerState::makeInstance =====

/* rive::LayerState::makeInstance(rive::ArtboardInstance*) const */

void rive::LayerState::makeInstance(ArtboardInstance *param_1)

{
  SystemStateInstance *this;
  ArtboardInstance *in_x1;
  undefined8 *in_x8;
  
  this = (SystemStateInstance *)operator_new(0x10);
  SystemStateInstance::SystemStateInstance(this,(LayerState *)param_1,in_x1);
  *in_x8 = this;
  return;
}


// ===== 003d6cc0  rive::LayerState::addTransition =====

/* rive::LayerState::addTransition(rive::StateTransition*) */

void __thiscall rive::LayerState::addTransition(LayerState *this,StateTransition *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x50);
  if (puVar10 < *(undefined8 **)(this + 0x58)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003d6e00;
  }
  puVar9 = *(undefined8 **)(this + 0x48);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003d6e24();
LAB_003d6e20:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x58) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003d6e20;
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
      if (uVar6 == uVar7) goto LAB_003d6dec;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x48);
  }
LAB_003d6dec:
  *(undefined8 **)(this + 0x48) = puVar4;
  *(undefined8 **)(this + 0x50) = puVar13;
  *(void **)(this + 0x58) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003d6e00:
  *(undefined8 **)(this + 0x50) = puVar13;
  return;
}


// ===== 003d6e24  FUN_003d6e24 =====

void FUN_003d6e24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003d6e38  rive::SystemStateInstance::SystemStateInstance =====

/* rive::SystemStateInstance::SystemStateInstance(rive::LayerState const*, rive::ArtboardInstance*)
    */

void __thiscall
rive::SystemStateInstance::SystemStateInstance
          (SystemStateInstance *this,LayerState *param_1,ArtboardInstance *param_2)

{
  *(undefined **)this = PTR_vtable_0067cf28 + 0x10;
  *(LayerState **)(this + 8) = param_1;
  return;
}


// ===== 003d6e4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d6e50  rive::SystemStateInstance::advance =====

/* rive::SystemStateInstance::advance(float, rive::StateMachineInstance*) */

void rive::SystemStateInstance::advance(float param_1,StateMachineInstance *param_2)

{
  return;
}


// ===== 003d6e54  rive::SystemStateInstance::apply =====

/* rive::SystemStateInstance::apply(rive::ArtboardInstance*, float) */

void rive::SystemStateInstance::apply(ArtboardInstance *param_1,float param_2)

{
  return;
}


// ===== 003d6e58  rive::SystemStateInstance::keepGoing =====

/* rive::SystemStateInstance::keepGoing() const */

undefined8 rive::SystemStateInstance::keepGoing(void)

{
  return 0;
}


// ===== 003d6e60  rive::StateMachineInput::onAddedDirty =====

/* rive::StateMachineInput::onAddedDirty(rive::CoreContext*) */

undefined8 rive::StateMachineInput::onAddedDirty(CoreContext *param_1)

{
  return 0;
}


// ===== 003d6e68  rive::StateMachineInput::onAddedClean =====

/* rive::StateMachineInput::onAddedClean(rive::CoreContext*) */

undefined8 rive::StateMachineInput::onAddedClean(CoreContext *param_1)

{
  return 0;
}


// ===== 003d6e70  rive::StateMachineInput::import =====

/* rive::StateMachineInput::import(rive::ImportStack&) */

void __thiscall rive::StateMachineInput::import(StateMachineInput *this,ImportStack *param_1)

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
  StateMachineInput *local_30;
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
              StateMachine::addInput(*(StateMachine **)(plVar8[3] + 8),&local_30);
              if (local_30 != (StateMachineInput *)0x0) {
                (**(code **)(*(long *)local_30 + 8))();
              }
              uVar11 = 0;
              goto LAB_003d6f78;
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
LAB_003d6f78:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 003d6f9c  FUN_003d6f9c =====

void FUN_003d6f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003d6fdc  FUN_003d6fdc =====

undefined8 FUN_003d6fdc(void)

{
  return 0x37;
}


// ===== 003d6fe4  FUN_003d6fe4 =====

bool FUN_003d6fe4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffe) == 0x36;
}


// ===== 003d6ff4  rive::TransitionCondition::onAddedDirty =====

/* rive::TransitionCondition::onAddedDirty(rive::CoreContext*) */

undefined8 rive::TransitionCondition::onAddedDirty(CoreContext *param_1)

{
  return 0;
}


// ===== 003d6ffc  rive::TransitionCondition::onAddedClean =====

/* rive::TransitionCondition::onAddedClean(rive::CoreContext*) */

undefined8 rive::TransitionCondition::onAddedClean(CoreContext *param_1)

{
  return 0;
}


// ===== 003d7004  rive::TransitionCondition::import =====

/* rive::TransitionCondition::import(rive::ImportStack&) */

undefined8 __thiscall
rive::TransitionCondition::import(TransitionCondition *this,ImportStack *param_1)

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
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x41;
  }
  else {
    uVar5 = 0x41;
    if (uVar4 < 0x42) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x41 / uVar1;
      }
      uVar5 = (ulong)(0x41 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x41) {
        if ((short)plVar6[2] == 0x41) {
          if (plVar6[3] == 0) {
            return 1;
          }
          StateTransition::addCondition(*(StateTransition **)(plVar6[3] + 8),this);
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


// ===== 003d70f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d70f8  FUN_003d70f8 =====

undefined8 FUN_003d70f8(void)

{
  return 0x1dc;
}


// ===== 003d7100  FUN_003d7100 =====

bool FUN_003d7100(undefined8 param_1,short param_2)

{
  return param_2 == 0x1dc;
}


// ===== 003d7110  FUN_003d7110 =====

undefined8 FUN_003d7110(void)

{
  return 0;
}


// ===== 003d7118  FUN_003d7118 =====

undefined8 FUN_003d7118(void)

{
  return 1;
}


// ===== 003d7120  FUN_003d7120 =====

void FUN_003d7120(void)

{
  return;
}


// ===== 003d7124  rive::TransitionViewModelCondition::~TransitionViewModelCondition =====

/* rive::TransitionViewModelCondition::~TransitionViewModelCondition() */

void __thiscall
rive::TransitionViewModelCondition::~TransitionViewModelCondition
          (TransitionViewModelCondition *this)

{
  *(undefined **)this = PTR_vtable_0067cf58 + 0x10;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  return;
}


// ===== 003d7198  rive::TransitionViewModelCondition::~TransitionViewModelCondition =====

/* rive::TransitionViewModelCondition::~TransitionViewModelCondition() */

void __thiscall
rive::TransitionViewModelCondition::~TransitionViewModelCondition
          (TransitionViewModelCondition *this)

{
  ~TransitionViewModelCondition(this);
  operator_delete(this);
  return;
}


// ===== 003d71bc  FUN_003d71bc =====

undefined8 FUN_003d71bc(void)

{
  return 0x1e2;
}


// ===== 003d71c4  FUN_003d71c4 =====

bool FUN_003d71c4(undefined8 param_1,short param_2)

{
  return param_2 == 0x1e2 || param_2 == 0x1dc;
}


// ===== 003d71dc  rive::TransitionViewModelCondition::evaluate =====

/* rive::TransitionViewModelCondition::evaluate(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

undefined8 __thiscall
rive::TransitionViewModelCondition::evaluate
          (TransitionViewModelCondition *this,StateMachineInstance *param_1,
          StateMachineLayerInstance *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(long *)(this + 0x10) != 0) && (plVar1 = *(long **)(this + 0x18), plVar1 != (long *)0x0)) {
    lVar4 = *(long *)(param_1 + 0xe8);
    if (lVar4 == 0) {
      uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,0x1df);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x18))(*(long **)(this + 0x10),0x1df);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
    }
    else {
      FUN_00340fb0(1,lVar4);
      FUN_003462d8(lVar4);
    }
    plVar1 = *(long **)(this + 0x20);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d7248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


// ===== 003d728c  rive::TransitionViewModelCondition::useInLayer =====

/* rive::TransitionViewModelCondition::useInLayer(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

void rive::TransitionViewModelCondition::useInLayer
               (StateMachineInstance *param_1,StateMachineLayerInstance *param_2)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d729c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
    return;
  }
  return;
}


// ===== 003d72a4  rive::TransitionViewModelCondition::canEvaluate =====

/* rive::TransitionViewModelCondition::canEvaluate(rive::StateMachineInstance const*) const */

undefined8 __thiscall
rive::TransitionViewModelCondition::canEvaluate
          (TransitionViewModelCondition *this,StateMachineInstance *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(long *)(this + 0x10) == 0) || (plVar2 = *(long **)(this + 0x18), plVar2 == (long *)0x0)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 == 0) {
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x1df);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x18))(*(long **)(this + 0x10),0x1df),
       (uVar1 & 1) != 0)) {
      return 0;
    }
  }
  else {
    FUN_00340fb0(1,lVar3);
    FUN_003462d8(lVar3);
  }
  return 1;
}


// ===== 003d7330  rive::TransitionViewModelCondition::operation =====

/* rive::TransitionViewModelCondition::operation(rive::TransitionConditionOp) */

void __thiscall rive::TransitionViewModelCondition::operation(undefined8 param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (param_2 < 6) {
    ppuVar2 = (undefined **)(&PTR_PTR_FUN_006558f0)[param_2];
  }
  else {
    ppuVar2 = &PTR_FUN_006552a0;
  }
  *puVar1 = ppuVar2;
  return;
}


// ===== 003d7378  FUN_003d7378 =====

void FUN_003d7378(void)

{
  return;
}


// ===== 003d737c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d7380  FUN_003d7380 =====

undefined8 FUN_003d7380(void)

{
  return 0;
}


// ===== 003d7388  FUN_003d7388 =====

undefined8 FUN_003d7388(void)

{
  return 0;
}


// ===== 003d7390  FUN_003d7390 =====

undefined8 FUN_003d7390(void)

{
  return 0;
}


// ===== 003d7398  FUN_003d7398 =====

undefined8 FUN_003d7398(void)

{
  return 0;
}


// ===== 003d73a0  FUN_003d73a0 =====

undefined8 FUN_003d73a0(void)

{
  return 0;
}


// ===== 003d73a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d73ac  FUN_003d73ac =====

bool FUN_003d73ac(float param_1,float param_2)

{
  return param_1 != param_2 && param_1 < param_2 == (NAN(param_1) || NAN(param_2));
}


// ===== 003d73b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d73bc  FUN_003d73bc =====

bool FUN_003d73bc(float param_1,float param_2)

{
  return param_1 < param_2;
}


// ===== 003d73c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d73cc  FUN_003d73cc =====

bool FUN_003d73cc(float param_1,float param_2)

{
  return param_1 < param_2 == (NAN(param_1) || NAN(param_2));
}


// ===== 003d73d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d73dc  FUN_003d73dc =====

bool FUN_003d73dc(float param_1,float param_2)

{
  return param_1 <= param_2;
}


// ===== 003d73e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d73ec  FUN_003d73ec =====

bool FUN_003d73ec(float param_1,float param_2)

{
  return param_1 != param_2;
}


// ===== 003d73f8  FUN_003d73f8 =====

uint FUN_003d73f8(undefined8 param_1,uint param_2,uint param_3)

{
  return (param_2 ^ param_3) & 1;
}


// ===== 003d7404  FUN_003d7404 =====

bool FUN_003d7404(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  char *__s2;
  char *pcVar9;
  ulong uVar10;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (void *)param_2[2];
    bVar3 = (byte)*param_3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,(char *)param_2[2],param_2[1]);
    bVar3 = (byte)*param_3;
  }
  if ((bVar3 & 1) == 0) {
    uStack_68 = param_3[1];
    local_70 = *param_3;
    local_60 = (char *)param_3[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,(char *)param_3[2],param_3[1]);
  }
  uVar6 = local_70;
  bVar5 = local_50._0_1_;
  uVar10 = (ulong)((byte)local_50._0_1_ >> 1);
  uVar1 = uVar10;
  if ((local_50 & 1) != 0) {
    uVar1 = uStack_48;
  }
  uVar2 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar2 = uStack_68;
  }
  if (uVar1 == uVar2) {
    __s2 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      __s2 = local_60;
    }
    if ((local_50 & 1) == 0) {
      if ((byte)local_50._0_1_ < 2) {
        bVar7 = false;
      }
      else {
        pcVar9 = (char *)((ulong)&local_50 | 1);
        do {
          uVar10 = uVar10 - 1;
          bVar7 = *pcVar9 != *__s2;
          if (bVar7) break;
          __s2 = __s2 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar10 != 0);
      }
    }
    else {
      iVar8 = memcmp(local_40,__s2,uStack_48);
      bVar7 = iVar8 != 0;
    }
  }
  else {
    bVar7 = true;
  }
  if ((uVar6 & 1) != 0) {
    operator_delete(local_60);
    bVar5 = local_50._0_1_;
  }
  if (((byte)bVar5 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d756c  FUN_003d756c =====

bool FUN_003d756c(undefined8 param_1,int param_2,int param_3)

{
  return param_2 != param_3;
}


// ===== 003d7578  FUN_003d7578 =====

bool FUN_003d7578(undefined8 param_1,int param_2,int param_3)

{
  return param_2 != param_3;
}


// ===== 003d7584  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d7588  FUN_003d7588 =====

bool FUN_003d7588(float param_1,float param_2)

{
  return param_1 == param_2;
}


// ===== 003d7594  FUN_003d7594 =====

uint FUN_003d7594(undefined8 param_1,uint param_2,uint param_3)

{
  return (param_2 ^ param_3 ^ 0xffffffff) & 1;
}


// ===== 003d75a4  FUN_003d75a4 =====

bool FUN_003d75a4(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  char *__s2;
  char *pcVar9;
  ulong uVar10;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (void *)param_2[2];
    bVar3 = (byte)*param_3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,(char *)param_2[2],param_2[1]);
    bVar3 = (byte)*param_3;
  }
  if ((bVar3 & 1) == 0) {
    uStack_68 = param_3[1];
    local_70 = *param_3;
    local_60 = (char *)param_3[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,(char *)param_3[2],param_3[1]);
  }
  uVar6 = local_70;
  bVar5 = local_50._0_1_;
  uVar10 = (ulong)((byte)local_50._0_1_ >> 1);
  uVar1 = uVar10;
  if ((local_50 & 1) != 0) {
    uVar1 = uStack_48;
  }
  uVar2 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar2 = uStack_68;
  }
  if (uVar1 == uVar2) {
    __s2 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      __s2 = local_60;
    }
    if ((local_50 & 1) == 0) {
      if ((byte)local_50._0_1_ < 2) {
        bVar7 = true;
      }
      else {
        pcVar9 = (char *)((ulong)&local_50 | 1);
        do {
          uVar10 = uVar10 - 1;
          bVar7 = *pcVar9 == *__s2;
          if (!bVar7) break;
          __s2 = __s2 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar10 != 0);
      }
    }
    else {
      iVar8 = memcmp(local_40,__s2,uStack_48);
      bVar7 = iVar8 == 0;
    }
  }
  else {
    bVar7 = false;
  }
  if ((uVar6 & 1) != 0) {
    operator_delete(local_60);
    bVar5 = local_50._0_1_;
  }
  if (((byte)bVar5 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d770c  FUN_003d770c =====

bool FUN_003d770c(undefined8 param_1,int param_2,int param_3)

{
  return param_2 == param_3;
}


// ===== 003d7718  FUN_003d7718 =====

bool FUN_003d7718(undefined8 param_1,int param_2,int param_3)

{
  return param_2 == param_3;
}


// ===== 003d7724  rive::TransitionViewModelCondition::initialize =====

/* rive::TransitionViewModelCondition::initialize() */

void __thiscall rive::TransitionViewModelCondition::initialize(TransitionViewModelCondition *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined **ppuVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint *local_100;
  uint *local_f8;
  undefined8 local_f0;
  uint *local_e8;
  uint *puStack_e0;
  undefined8 local_d8;
  long *local_d0;
  long *plStack_c8;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long *local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar25 = *(long **)(this + 0x10);
  if ((plVar25 != (long *)0x0) && (plVar23 = *(long **)(this + 0x18), plVar23 != (long *)0x0)) {
    uVar15 = (**(code **)(*plVar23 + 0x18))(plVar23,0x251);
    uVar16 = (**(code **)(*plVar25 + 0x18))(plVar25,0x1df);
    if ((uVar15 & 1) == 0) {
      if (((((uVar16 & 1) == 0) ||
           (uVar15 = (**(code **)(*plVar23 + 0x18))(plVar23,0x1f9), (uVar15 & 1) == 0)) ||
          (plVar22 = (long *)plVar25[2], plVar22 == (long *)0x0)) ||
         (uVar15 = (**(code **)(*plVar22 + 0x18))(plVar22,0x1f7), (uVar15 & 1) == 0)) {
        local_e8 = (uint *)0x0;
        puStack_e0 = (uint *)0x0;
        local_d8 = 0;
        local_100 = (uint *)0x0;
        local_f8 = (uint *)0x0;
        local_f0 = 0;
        FUN_003d7c10(plVar25,0,&local_e8);
        FUN_003d7c10(plVar23,1,&local_100);
        puVar8 = local_e8;
        puVar7 = local_100;
        for (puVar1 = local_e8; puVar1 != puStack_e0; puVar1 = puVar1 + 1) {
          uVar3 = *puVar1;
          for (puVar2 = local_100; puVar2 != local_f8; puVar2 = puVar2 + 1) {
            uVar4 = *puVar2;
            if ((uVar3 == uVar4) || ((uVar4 | uVar3) < 2)) {
              uVar5 = *(uint *)(this + 0xc);
              puVar17 = (undefined8 *)operator_new(8);
              if (uVar5 < 6) {
                ppuVar20 = (undefined **)(&PTR_PTR_FUN_006558f0)[uVar5];
              }
              else {
                ppuVar20 = &PTR_FUN_006552a0;
              }
              *puVar17 = ppuVar20;
              if ((uVar4 | uVar3) < 2) {
                iVar19 = 5;
                if (uVar4 != 1 || uVar3 != 1) {
                  iVar19 = 0;
                }
LAB_003d78f4:
                plStack_88 = (long *)0x0;
                local_90 = (long *)0x0;
                local_78 = (long *)0x0;
                local_80 = (long *)0x0;
                plStack_98 = (long *)0x0;
                local_a0 = (long *)0x0;
                plStack_b8 = (long *)0x0;
                local_c0 = (long *)0x0;
                local_a8 = (long *)0x0;
                local_b0 = (long *)0x0;
                plStack_c8 = (long *)0x0;
                local_d0 = (long *)0x0;
                uVar15 = FUN_003d837c(plVar25,uVar3,iVar19,&local_a0);
                if (((uVar15 & 1) == 0) ||
                   (uVar15 = FUN_003d837c(plVar23,uVar4,iVar19,&local_d0), plVar14 = local_78,
                   plVar13 = plStack_88, plVar12 = local_90, plVar11 = plStack_98,
                   plVar24 = local_a0, plVar10 = local_a8, plVar9 = plStack_b8, plVar22 = local_c0,
                   plVar23 = plStack_c8, plVar25 = local_d0, (uVar15 & 1) == 0)) {
                  if (local_a0 != (long *)0x0) {
                    lVar21 = *local_a0;
                    goto LAB_003d79a8;
                  }
                }
                else {
                  if (iVar19 < 3) {
                    if (iVar19 == 0) {
                      if ((local_a0 != (long *)0x0) && (local_d0 != (long *)0x0)) {
                        puVar18 = (undefined8 *)operator_new(0x20);
                        ppuVar20 = &PTR_FUN_006557e8;
                        goto LAB_003d7be4;
                      }
                    }
                    else if (iVar19 == 1) {
                      if ((plStack_98 != (long *)0x0) && (plStack_c8 != (long *)0x0)) {
                        puVar18 = (undefined8 *)operator_new(0x20);
                        ppuVar20 = &PTR_FUN_00655810;
                        plVar24 = plVar11;
                        plVar25 = plVar23;
LAB_003d7be4:
                        *puVar18 = ppuVar20;
                        puVar18[1] = puVar17;
                        puVar18[2] = plVar24;
                        puVar18[3] = plVar25;
                        *(undefined8 **)(this + 0x20) = puVar18;
                        goto joined_r0x003d7bf0;
                      }
                    }
                    else if ((local_90 != (long *)0x0) && (local_c0 != (long *)0x0)) {
                      puVar18 = (undefined8 *)operator_new(0x20);
                      ppuVar20 = &PTR_FUN_00655838;
                      plVar24 = plVar12;
                      plVar25 = plVar22;
                      goto LAB_003d7be4;
                    }
                  }
                  else {
                    plVar25 = local_b0;
                    plVar24 = local_80;
                    if (iVar19 < 5) {
                      if (iVar19 == 3) {
                        if ((plStack_88 != (long *)0x0) && (plStack_b8 != (long *)0x0)) {
                          puVar18 = (undefined8 *)operator_new(0x20);
                          ppuVar20 = &PTR_FUN_00655860;
                          plVar24 = plVar13;
                          plVar25 = plVar9;
                          goto LAB_003d7be4;
                        }
                      }
                      else if ((local_80 != (long *)0x0) && (local_b0 != (long *)0x0)) {
                        puVar18 = (undefined8 *)operator_new(0x20);
                        ppuVar20 = &PTR_FUN_00655888;
                        goto LAB_003d7be4;
                      }
                    }
                    else if (iVar19 == 5) {
                      if ((local_80 != (long *)0x0) && (local_b0 != (long *)0x0)) {
                        puVar18 = (undefined8 *)operator_new(0x20);
                        ppuVar20 = &PTR_FUN_006558b0;
                        goto LAB_003d7be4;
                      }
                    }
                    else if ((local_78 != (long *)0x0) && (local_a8 != (long *)0x0)) {
                      puVar18 = (undefined8 *)operator_new(0x20);
                      ppuVar20 = &PTR_FUN_006558d8;
                      plVar24 = plVar14;
                      plVar25 = plVar10;
                      goto LAB_003d7be4;
                    }
                  }
                  if (local_a0 != (long *)0x0) {
                    lVar21 = *local_a0;
LAB_003d79a8:
                    (**(code **)(lVar21 + 8))(local_a0);
                  }
                }
                if (plStack_98 != (long *)0x0) {
                  (**(code **)(*plStack_98 + 8))();
                }
                if (local_90 != (long *)0x0) {
                  (**(code **)(*local_90 + 8))();
                }
                if (plStack_88 != (long *)0x0) {
                  (**(code **)(*plStack_88 + 8))();
                }
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 8))();
                }
                if (local_78 != (long *)0x0) {
                  (**(code **)(*local_78 + 8))();
                }
                if (local_d0 != (long *)0x0) {
                  (**(code **)(*local_d0 + 8))();
                }
                if (plStack_c8 != (long *)0x0) {
                  (**(code **)(*plStack_c8 + 8))();
                }
                if (local_c0 != (long *)0x0) {
                  (**(code **)(*local_c0 + 8))();
                }
                if (plStack_b8 != (long *)0x0) {
                  (**(code **)(*plStack_b8 + 8))();
                }
                if (local_b0 != (long *)0x0) {
                  (**(code **)(*local_b0 + 8))();
                }
                if (local_a8 != (long *)0x0) {
                  (**(code **)(*local_a8 + 8))();
                }
                ppuVar20 = (undefined **)*puVar17;
              }
              else if ((uVar3 == uVar4) && (uVar3 - 2 < 8)) {
                iVar19 = *(int *)(&DAT_00253504 + (ulong)(uVar3 - 2) * 4);
                goto LAB_003d78f4;
              }
              (*(code *)ppuVar20[1])(puVar17);
              goto LAB_003d7a9c;
            }
          }
        }
LAB_003d7a9c:
        puVar17 = (undefined8 *)operator_new(0x10);
        *puVar17 = &PTR_FUN_006554a0;
        puVar17[1] = 0;
        *(undefined8 **)(this + 0x20) = puVar17;
joined_r0x003d7bf0:
        if (puVar7 != (uint *)0x0) {
          operator_delete(puVar7);
        }
        if (puVar8 != (uint *)0x0) {
          operator_delete(puVar8);
        }
        goto LAB_003d7acc;
      }
    }
    else if (((uVar16 & 1) == 0) || (plVar22 = (long *)plVar25[2], plVar22 == (long *)0x0)) {
      puVar17 = (undefined8 *)operator_new(0x10);
      *(undefined8 **)(this + 0x20) = puVar17;
      *puVar17 = &PTR_FUN_006554a0;
      puVar17[1] = 0;
      goto LAB_003d7acc;
    }
    puVar17 = (undefined8 *)operator_new(0x18);
    puVar17[2] = plVar22;
    *puVar17 = &PTR_FUN_00655450;
    puVar17[1] = 0;
    *(undefined8 **)(this + 0x20) = puVar17;
  }
LAB_003d7acc:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003d7c10  FUN_003d7c10 =====

void FUN_003d7c10(long *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1f0);
  if ((uVar5 & 1) == 0) {
    uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x29b);
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1df);
      if ((uVar5 & 1) == 0) {
        if (param_2 != 1) {
          return;
        }
        uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1e4);
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1e1);
          if ((uVar5 & 1) == 0) {
            uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1e6);
            if ((uVar5 & 1) == 0) {
              uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1e3);
              if ((uVar5 & 1) == 0) {
                uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1e5);
                if ((uVar5 & 1) == 0) {
                  uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x25a);
                  if ((uVar5 & 1) == 0) {
                    uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x276);
                    if ((uVar5 & 1) == 0) {
                      uVar5 = (**(code **)(*param_1 + 0x18))(param_1,0x1f9);
                      if ((uVar5 & 1) == 0) {
                        return;
                      }
                      uVar7 = 6;
                    }
                    else {
                      uVar7 = 8;
                    }
                  }
                  else {
                    uVar7 = 7;
                  }
                }
                else {
                  uVar7 = 5;
                }
              }
              else {
                uVar7 = 4;
              }
            }
            else {
              uVar7 = 3;
            }
          }
          else {
            uVar7 = 2;
          }
          FUN_003da684(param_3,uVar7);
          return;
        }
        puVar15 = (undefined4 *)param_3[1];
        if (puVar15 < (undefined4 *)param_3[2]) goto LAB_003d7c58;
        puVar14 = (undefined4 *)*param_3;
        lVar16 = (long)puVar15 - (long)puVar14 >> 2;
        uVar5 = lVar16 + 1;
        if (uVar5 >> 0x3e != 0) goto LAB_003d8374;
        uVar8 = (long)param_3[2] - (long)puVar14;
        uVar11 = (long)uVar8 >> 1;
        if (uVar11 <= uVar5) {
          uVar11 = uVar5;
        }
        if (0x7ffffffffffffffb < uVar8) {
          uVar11 = 0x3fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar11 >> 0x3e != 0) goto LAB_003d8378;
          pvVar6 = operator_new(uVar11 << 2);
        }
        puVar10 = (undefined4 *)((long)pvVar6 + lVar16 * 4);
        pvVar9 = (void *)((long)pvVar6 + uVar11 * 4);
        puVar17 = puVar10 + 1;
        *puVar10 = 0;
        if ((long)puVar15 - (long)puVar14 == 0) goto LAB_003d8258;
        uVar5 = ((long)puVar15 - (long)puVar14) - 4;
        puVar18 = puVar15;
        if ((0x1b < uVar5) &&
           (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar14) - (long)pvVar6)))) {
          puVar12 = (undefined8 *)(puVar10 + -4);
          puVar13 = (undefined8 *)(puVar15 + -4);
          uVar5 = (uVar5 >> 2) + 1;
          uVar8 = uVar5 & 0x7ffffffffffffff8;
          puVar18 = puVar15 + -uVar8;
          uVar11 = uVar8;
          do {
            puVar3 = puVar13 + -1;
            uVar21 = puVar13[-2];
            uVar20 = puVar13[1];
            uVar7 = *puVar13;
            uVar11 = uVar11 - 8;
            puVar13 = puVar13 + -4;
            puVar12[-1] = *puVar3;
            puVar12[-2] = uVar21;
            puVar12[1] = uVar20;
            *puVar12 = uVar7;
            puVar12 = puVar12 + -4;
          } while (uVar11 != 0);
          puVar10 = puVar10 + -uVar8;
          puVar15 = puVar14;
          if (uVar5 == uVar8) goto LAB_003d8258;
        }
        do {
          puVar18 = puVar18 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar18;
        } while (puVar18 != puVar14);
      }
      else {
        if ((long *)param_1[2] == (long *)0x0) {
          return;
        }
        uVar4 = (**(code **)(*(long *)param_1[2] + 0x10))();
        if (uVar4 < 0x1f7) {
          if (uVar4 < 0x1d9) {
            if (uVar4 == 0x1d7) {
              uVar19 = 3;
            }
            else {
              if (uVar4 != 0x1d8) {
                return;
              }
              uVar19 = 2;
            }
          }
          else if (uVar4 == 0x1d9) {
            uVar19 = 0;
          }
          else if (uVar4 == 0x1da) {
            uVar19 = 5;
          }
          else {
            if (uVar4 != 0x1db) {
              return;
            }
            uVar19 = 4;
          }
        }
        else if (uVar4 < 0x24c) {
          if (uVar4 == 0x1f7) {
            uVar19 = 6;
          }
          else {
            if (uVar4 != 0x237) {
              return;
            }
            uVar19 = 1;
          }
        }
        else if (uVar4 == 0x24c) {
          uVar19 = 7;
        }
        else if (uVar4 == 0x255) {
          uVar19 = 8;
        }
        else {
          if (uVar4 != 0x296) {
            return;
          }
          uVar19 = 9;
        }
        puVar15 = (undefined4 *)param_3[1];
        if (puVar15 < (undefined4 *)param_3[2]) goto LAB_003d80c4;
        puVar14 = (undefined4 *)*param_3;
        lVar16 = (long)puVar15 - (long)puVar14 >> 2;
        uVar5 = lVar16 + 1;
        if (uVar5 >> 0x3e != 0) {
LAB_003d8374:
          FUN_003da670();
LAB_003d8378:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        uVar8 = (long)param_3[2] - (long)puVar14;
        uVar11 = (long)uVar8 >> 1;
        if (uVar11 <= uVar5) {
          uVar11 = uVar5;
        }
        if (0x7ffffffffffffffb < uVar8) {
          uVar11 = 0x3fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar11 >> 0x3e != 0) goto LAB_003d8378;
          pvVar6 = operator_new(uVar11 << 2);
        }
        puVar10 = (undefined4 *)((long)pvVar6 + lVar16 * 4);
        pvVar9 = (void *)((long)pvVar6 + uVar11 * 4);
        puVar17 = puVar10 + 1;
        *puVar10 = uVar19;
        if ((long)puVar15 - (long)puVar14 == 0) goto LAB_003d8258;
        uVar5 = ((long)puVar15 - (long)puVar14) - 4;
        puVar18 = puVar15;
        if ((0x1b < uVar5) &&
           (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar14) - (long)pvVar6)))) {
          puVar12 = (undefined8 *)(puVar10 + -4);
          puVar13 = (undefined8 *)(puVar15 + -4);
          uVar5 = (uVar5 >> 2) + 1;
          uVar8 = uVar5 & 0x7ffffffffffffff8;
          puVar18 = puVar15 + -uVar8;
          uVar11 = uVar8;
          do {
            puVar3 = puVar13 + -1;
            uVar21 = puVar13[-2];
            uVar20 = puVar13[1];
            uVar7 = *puVar13;
            uVar11 = uVar11 - 8;
            puVar13 = puVar13 + -4;
            puVar12[-1] = *puVar3;
            puVar12[-2] = uVar21;
            puVar12[1] = uVar20;
            *puVar12 = uVar7;
            puVar12 = puVar12 + -4;
          } while (uVar11 != 0);
          puVar10 = puVar10 + -uVar8;
          puVar15 = puVar14;
          if (uVar5 == uVar8) goto LAB_003d8258;
        }
        do {
          puVar18 = puVar18 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar18;
        } while (puVar18 != puVar14);
      }
    }
    else {
      iVar1 = (int)param_1[2];
      if (0x3f3 < iVar1 - 4U) {
        return;
      }
      iVar2 = *(int *)(&DAT_00252478 + (ulong)(iVar1 - 4U) * 4);
      if (iVar2 < 0) {
        return;
      }
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          uVar19 = 5;
          if (iVar1 < 0x338) {
            if (iVar1 != 0x230) {
              if (iVar1 != 0x241) {
                if (iVar1 == 0x2af) goto LAB_003d82dc;
                goto LAB_003d82a0;
              }
              uVar19 = 9;
            }
          }
          else if (iVar1 < 0x366) {
            if (iVar1 == 0x338) {
              uVar19 = 7;
            }
            else if (iVar1 == 0x34e) {
              uVar19 = 8;
            }
            else {
LAB_003d82a0:
              uVar19 = 1;
            }
          }
          else if (iVar1 != 0x368) {
            if (iVar1 != 0x366) goto LAB_003d82a0;
LAB_003d82dc:
            uVar19 = 6;
          }
        }
        else {
          if (iVar2 != 1) {
            return;
          }
          uVar19 = 3;
        }
      }
      else if (iVar2 == 2) {
        uVar19 = 0;
      }
      else if (iVar2 == 3) {
        uVar19 = 4;
      }
      else {
        if (iVar2 != 4) {
          return;
        }
        uVar19 = 2;
      }
      puVar15 = (undefined4 *)param_3[1];
      if (puVar15 < (undefined4 *)param_3[2]) {
LAB_003d80c4:
        puVar17 = puVar15 + 1;
        *puVar15 = uVar19;
        goto LAB_003d826c;
      }
      puVar14 = (undefined4 *)*param_3;
      lVar16 = (long)puVar15 - (long)puVar14 >> 2;
      uVar5 = lVar16 + 1;
      if (uVar5 >> 0x3e != 0) goto LAB_003d8374;
      uVar8 = (long)param_3[2] - (long)puVar14;
      uVar11 = (long)uVar8 >> 1;
      if (uVar11 <= uVar5) {
        uVar11 = uVar5;
      }
      if (0x7ffffffffffffffb < uVar8) {
        uVar11 = 0x3fffffffffffffff;
      }
      if (uVar11 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        if (uVar11 >> 0x3e != 0) goto LAB_003d8378;
        pvVar6 = operator_new(uVar11 << 2);
      }
      puVar10 = (undefined4 *)((long)pvVar6 + lVar16 * 4);
      pvVar9 = (void *)((long)pvVar6 + uVar11 * 4);
      puVar17 = puVar10 + 1;
      *puVar10 = uVar19;
      if ((long)puVar15 - (long)puVar14 == 0) goto LAB_003d8258;
      uVar5 = ((long)puVar15 - (long)puVar14) - 4;
      puVar18 = puVar15;
      if ((0x1b < uVar5) &&
         (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar14) - (long)pvVar6)))) {
        puVar12 = (undefined8 *)(puVar10 + -4);
        puVar13 = (undefined8 *)(puVar15 + -4);
        uVar5 = (uVar5 >> 2) + 1;
        uVar8 = uVar5 & 0x7ffffffffffffff8;
        puVar18 = puVar15 + -uVar8;
        uVar11 = uVar8;
        do {
          puVar3 = puVar13 + -1;
          uVar21 = puVar13[-2];
          uVar20 = puVar13[1];
          uVar7 = *puVar13;
          uVar11 = uVar11 - 8;
          puVar13 = puVar13 + -4;
          puVar12[-1] = *puVar3;
          puVar12[-2] = uVar21;
          puVar12[1] = uVar20;
          *puVar12 = uVar7;
          puVar12 = puVar12 + -4;
        } while (uVar11 != 0);
        puVar10 = puVar10 + -uVar8;
        puVar15 = puVar14;
        if (uVar5 == uVar8) goto LAB_003d8258;
      }
      do {
        puVar18 = puVar18 + -1;
        puVar10 = puVar10 + -1;
        *puVar10 = *puVar18;
      } while (puVar18 != puVar14);
    }
LAB_003d824c:
    puVar15 = (undefined4 *)*param_3;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    puVar15 = (undefined4 *)param_3[1];
    if (puVar15 < (undefined4 *)param_3[2]) {
LAB_003d7c58:
      puVar17 = puVar15 + 1;
      *puVar15 = 0;
      goto LAB_003d826c;
    }
    puVar14 = (undefined4 *)*param_3;
    lVar16 = (long)puVar15 - (long)puVar14 >> 2;
    uVar5 = lVar16 + 1;
    if (uVar5 >> 0x3e != 0) goto LAB_003d8374;
    uVar8 = (long)param_3[2] - (long)puVar14;
    uVar11 = (long)uVar8 >> 1;
    if (uVar11 <= uVar5) {
      uVar11 = uVar5;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar11 = 0x3fffffffffffffff;
    }
    if (uVar11 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar11 >> 0x3e != 0) goto LAB_003d8378;
      pvVar6 = operator_new(uVar11 << 2);
    }
    puVar10 = (undefined4 *)((long)pvVar6 + lVar16 * 4);
    pvVar9 = (void *)((long)pvVar6 + uVar11 * 4);
    puVar17 = puVar10 + 1;
    *puVar10 = 0;
    if ((long)puVar15 - (long)puVar14 != 0) {
      uVar5 = ((long)puVar15 - (long)puVar14) - 4;
      puVar18 = puVar15;
      if ((0x1b < uVar5) &&
         (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar14) - (long)pvVar6)))) {
        puVar12 = (undefined8 *)(puVar10 + -4);
        puVar13 = (undefined8 *)(puVar15 + -4);
        uVar5 = (uVar5 >> 2) + 1;
        uVar8 = uVar5 & 0x7ffffffffffffff8;
        puVar18 = puVar15 + -uVar8;
        uVar11 = uVar8;
        do {
          puVar3 = puVar13 + -1;
          uVar21 = puVar13[-2];
          uVar20 = puVar13[1];
          uVar7 = *puVar13;
          uVar11 = uVar11 - 8;
          puVar13 = puVar13 + -4;
          puVar12[-1] = *puVar3;
          puVar12[-2] = uVar21;
          puVar12[1] = uVar20;
          *puVar12 = uVar7;
          puVar12 = puVar12 + -4;
        } while (uVar11 != 0);
        puVar10 = puVar10 + -uVar8;
        puVar15 = puVar14;
        if (uVar5 == uVar8) goto LAB_003d8258;
      }
      do {
        puVar18 = puVar18 + -1;
        puVar10 = puVar10 + -1;
        *puVar10 = *puVar18;
      } while (puVar18 != puVar14);
      goto LAB_003d824c;
    }
  }
LAB_003d8258:
  *param_3 = puVar10;
  param_3[1] = puVar17;
  param_3[2] = pvVar9;
  if (puVar15 != (undefined4 *)0x0) {
    operator_delete(puVar15);
  }
LAB_003d826c:
  param_3[1] = puVar17;
  return;
}


// ===== 003d837c  FUN_003d837c =====

undefined8
FUN_003d837c(TransitionPropertyComponentComparator *param_1,int param_2,int param_3,
            undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ConditionComparandComponentCoreColor *this;
  ConditionComparandComponentCoreString *this_00;
  ConditionComparandComponentCoreBoolean *this_01;
  ConditionComparandComponentCoreNumber *this_02;
  ConditionComparandComponentCoreUint *this_03;
  undefined **ppuVar3;
  long *plVar4;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1f0);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1df);
        if ((uVar1 & 1) == 0) {
          uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1e4);
          if ((uVar1 & 1) == 0) {
            uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x29b);
            if ((uVar1 & 1) == 0) {
              return 0;
            }
            if (param_2 == 1) {
              this_02 = (ConditionComparandComponentCoreNumber *)operator_new(0x10);
              rive::ConditionComparandComponentCoreUintAsNumber::
              ConditionComparandComponentCoreUintAsNumber
                        ((ConditionComparandComponentCoreUintAsNumber *)this_02,param_1);
            }
            else {
              if (param_2 != 0) {
                return 0;
              }
              this_02 = (ConditionComparandComponentCoreNumber *)operator_new(0x10);
              rive::ConditionComparandComponentCoreNumber::ConditionComparandComponentCoreNumber
                        (this_02,param_1);
            }
            *param_4 = this_02;
            return 1;
          }
          puVar2 = (undefined8 *)operator_new(0x10);
          ppuVar3 = &PTR_FUN_00655540;
        }
        else {
          param_1 = *(TransitionPropertyComponentComparator **)(param_1 + 0x10);
          if (param_1 == (TransitionPropertyComponentComparator *)0x0) {
            return 0;
          }
          uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1d9);
          if ((uVar1 & 1) == 0) {
            uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x237);
            if ((uVar1 & 1) == 0) {
              return 0;
            }
            puVar2 = (undefined8 *)operator_new(0x10);
            ppuVar3 = &PTR_FUN_00655518;
          }
          else {
            puVar2 = (undefined8 *)operator_new(0x10);
            ppuVar3 = &PTR_FUN_006554f0;
          }
        }
      }
      else {
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_006554c8;
      }
      *puVar2 = ppuVar3;
      puVar2[1] = param_1;
      *param_4 = puVar2;
      return 1;
    }
    if (param_3 == 1) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1df);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1e1);
        if ((uVar1 & 1) == 0) {
          uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x29b);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          this_01 = (ConditionComparandComponentCoreBoolean *)operator_new(0x10);
          rive::ConditionComparandComponentCoreBoolean::ConditionComparandComponentCoreBoolean
                    (this_01,param_1);
          param_4[1] = this_01;
          return 1;
        }
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_00655590;
      }
      else {
        param_1 = *(TransitionPropertyComponentComparator **)(param_1 + 0x10);
        if (param_1 == (TransitionPropertyComponentComparator *)0x0) {
          return 0;
        }
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1d8);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_00655568;
      }
      *puVar2 = ppuVar3;
      puVar2[1] = param_1;
      param_4[1] = puVar2;
      return 1;
    }
    if (param_3 != 2) {
      return 0;
    }
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1df);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1e6);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x29b);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        this_00 = (ConditionComparandComponentCoreString *)operator_new(0x10);
        rive::ConditionComparandComponentCoreString::ConditionComparandComponentCoreString
                  (this_00,param_1);
        param_4[2] = this_00;
        return 1;
      }
      puVar2 = (undefined8 *)operator_new(0x10);
      ppuVar3 = &PTR_FUN_006555e0;
    }
    else {
      param_1 = *(TransitionPropertyComponentComparator **)(param_1 + 0x10);
      if (param_1 == (TransitionPropertyComponentComparator *)0x0) {
        return 0;
      }
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1d7);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      puVar2 = (undefined8 *)operator_new(0x10);
      ppuVar3 = &PTR_FUN_006555b8;
    }
    *puVar2 = ppuVar3;
    puVar2[1] = param_1;
    param_4[2] = puVar2;
    return 1;
  }
  if (param_3 < 5) {
    if (param_3 == 3) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1df);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1e3);
        if ((uVar1 & 1) == 0) {
          uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x29b);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          this = (ConditionComparandComponentCoreColor *)operator_new(0x10);
          rive::ConditionComparandComponentCoreColor::ConditionComparandComponentCoreColor
                    (this,param_1);
          param_4[3] = this;
          return 1;
        }
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_00655630;
      }
      else {
        param_1 = *(TransitionPropertyComponentComparator **)(param_1 + 0x10);
        if (param_1 == (TransitionPropertyComponentComparator *)0x0) {
          return 0;
        }
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1db);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_00655608;
      }
      *puVar2 = ppuVar3;
      puVar2[1] = param_1;
      param_4[3] = puVar2;
      return 1;
    }
    if (param_3 != 4) {
      return 0;
    }
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1df);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1e5);
      if ((uVar1 & 1) == 0) {
LAB_003d8948:
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x29b);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        this_03 = (ConditionComparandComponentCoreUint *)operator_new(0x10);
        rive::ConditionComparandComponentCoreUint::ConditionComparandComponentCoreUint
                  (this_03,param_1);
        param_4[4] = this_03;
        return 1;
      }
      puVar2 = (undefined8 *)operator_new(0x10);
      ppuVar3 = &PTR_FUN_00655680;
    }
    else {
      param_1 = *(TransitionPropertyComponentComparator **)(param_1 + 0x10);
      if (param_1 == (TransitionPropertyComponentComparator *)0x0) {
        return 0;
      }
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1da);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      puVar2 = (undefined8 *)operator_new(0x10);
      ppuVar3 = &PTR_FUN_00655658;
    }
  }
  else {
    if (param_3 != 5) {
      if (param_3 != 6) {
        return 0;
      }
      if (param_2 != 9) {
        return 0;
      }
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1df);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) {
        return 0;
      }
      uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,0x296);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      puVar2 = (undefined8 *)operator_new(0x10);
      *puVar2 = &PTR_FUN_006557c0;
      puVar2[1] = plVar4;
      param_4[5] = puVar2;
      return 1;
    }
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1df);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1f9);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x25a);
        if ((uVar1 & 1) == 0) {
          uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x276);
          if ((uVar1 & 1) == 0) goto LAB_003d8948;
          puVar2 = (undefined8 *)operator_new(0x10);
          ppuVar3 = &PTR_FUN_00655798;
        }
        else {
          puVar2 = (undefined8 *)operator_new(0x10);
          ppuVar3 = &PTR_FUN_00655770;
        }
      }
      else {
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_00655748;
      }
    }
    else {
      param_1 = *(TransitionPropertyComponentComparator **)(param_1 + 0x10);
      if (param_1 == (TransitionPropertyComponentComparator *)0x0) {
        return 0;
      }
      if (param_2 < 7) {
        if (param_2 == 1) {
          uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x237);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          puVar2 = (undefined8 *)operator_new(0x10);
          ppuVar3 = &PTR_FUN_006556a8;
        }
        else {
          if (param_2 != 6) {
            return 0;
          }
          uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1f7);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          puVar2 = (undefined8 *)operator_new(0x10);
          ppuVar3 = &PTR_FUN_006556d0;
        }
      }
      else if (param_2 == 7) {
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x24c);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_006556f8;
      }
      else {
        if (param_2 != 8) {
          return 0;
        }
        uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x255);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        puVar2 = (undefined8 *)operator_new(0x10);
        ppuVar3 = &PTR_FUN_00655720;
      }
    }
  }
  *puVar2 = ppuVar3;
  puVar2[1] = param_1;
  param_4[4] = puVar2;
  return 1;
}


// ===== 003d8a50  FUN_003d8a50 =====

void FUN_003d8a50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006558d8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d8ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d8ac8  FUN_003d8ac8 =====

void FUN_003d8ac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006558d8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003d8b3c  FUN_003d8b3c =====

void FUN_003d8b3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x003d8ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),lVar1 == lVar2,1);
  return;
}


// ===== 003d8bac  FUN_003d8bac =====

void FUN_003d8bac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d8bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d8bd4  FUN_003d8bd4 =====

void FUN_003d8bd4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3d8bd8);
  (*pcVar1)();
}


// ===== 003d8bd8  FUN_003d8bd8 =====

void FUN_003d8bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006558b0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d8c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d8c50  FUN_003d8c50 =====

void FUN_003d8c50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006558b0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003d8cc4  FUN_003d8cc4 =====

void FUN_003d8cc4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x003d8d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),uVar1,uVar2);
  return;
}


// ===== 003d8d2c  FUN_003d8d2c =====

void FUN_003d8d2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655888;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d8d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d8da4  FUN_003d8da4 =====

void FUN_003d8da4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655888;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003d8e18  FUN_003d8e18 =====

void FUN_003d8e18(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x003d8e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),uVar1,uVar2);
  return;
}


// ===== 003d8e80  FUN_003d8e80 =====

void FUN_003d8e80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655860;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d8ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d8ef8  FUN_003d8ef8 =====

void FUN_003d8ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655860;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003d8f6c  FUN_003d8f6c =====

void FUN_003d8f6c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x003d8fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),uVar1,uVar2);
  return;
}


// ===== 003d8fd4  FUN_003d8fd4 =====

void FUN_003d8fd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655838;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d903c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d904c  FUN_003d904c =====

void FUN_003d904c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655838;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003d90c0  FUN_003d90c0 =====

uint FUN_003d90c0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(local_50);
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(local_68,*(long **)(param_1 + 0x18),param_2);
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003d917c  FUN_003d917c =====

void FUN_003d917c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655810;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d91e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d91f4  FUN_003d91f4 =====

void FUN_003d91f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00655810;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003d9268  FUN_003d9268 =====

void FUN_003d9268(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x003d92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar1 & 1,uVar2 & 1);
  return;
}


// ===== 003d92d4  FUN_003d92d4 =====

void FUN_003d92d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006557e8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d933c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 003d934c  FUN_003d934c =====

void FUN_003d934c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006557e8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = &PTR_FUN_00655478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 003d93c0  FUN_003d93c0 =====

void FUN_003d93c0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x003d9420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(uVar1,uVar2);
  return;
}


// ===== 003d9424  FUN_003d9424 =====

void FUN_003d9424(void)

{
  return;
}


// ===== 003d9428  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d942c  FUN_003d942c =====

long * FUN_003d942c(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar3 = *(ulong *)(param_2 + 0x200);
  if (uVar3 == 0) {
    return (long *)0x0;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  uVar12 = NEON_cnt(uVar3,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar7 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  uVar7 = (uVar4 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  if (uVar5 < 2) {
    uVar6 = uVar3 - 1 & uVar7;
  }
  else {
    uVar6 = uVar7;
    if (uVar3 <= uVar7) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar7 / uVar3;
      }
      uVar6 = uVar7 - uVar6 * uVar3;
    }
  }
  plVar8 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    do {
      uVar9 = plVar8[1];
      if (uVar7 - uVar9 == 0) {
        if (plVar8[2] == uVar4) {
          uVar3 = plVar8[3];
          if (uVar3 == 0) {
            return (long *)0x0;
          }
          uVar4 = *(ulong *)(param_2 + 0x250);
          if (uVar4 == 0) goto LAB_003d9740;
          uVar12 = NEON_cnt(uVar4,1);
          uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
          uVar11 = NEON_uaddlv(uVar12,1);
          uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
          uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
          uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
          if (uVar5 < 2) {
            uVar6 = uVar4 - 1 & uVar7;
          }
          else {
            uVar6 = uVar7;
            if (uVar4 <= uVar7) {
              uVar6 = 0;
              if (uVar4 != 0) {
                uVar6 = uVar7 / uVar4;
              }
              uVar6 = uVar7 - uVar6 * uVar4;
            }
          }
          plVar8 = *(long **)(*(long *)(param_2 + 0x248) + uVar6 * 8);
          if ((plVar8 == (long *)0x0) || (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0))
          goto LAB_003d9740;
          goto LAB_003d95c8;
        }
      }
      else {
        if (uVar5 < 2) {
          uVar9 = uVar9 & uVar3 - 1;
        }
        else if (uVar3 <= uVar9) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar9 / uVar3;
          }
          uVar9 = uVar9 - uVar1 * uVar3;
        }
        if (uVar9 != uVar6) {
          return (long *)0x0;
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return (long *)0x0;
LAB_003d95c8:
  do {
    uVar9 = plVar8[1];
    if (uVar7 - uVar9 == 0) {
      if (plVar8[2] == uVar3) {
        plVar8 = (long *)plVar8[3];
        if (plVar8 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,0x1bf);
          if (((uVar4 & 1) != 0) && (plVar8[0xd] - plVar8[0xc] == 4)) {
            lVar10 = *(long *)(param_2 + 0xe8);
            if (lVar10 == 0) {
              return (long *)0x0;
            }
            FUN_00340fb0(1,lVar10);
            plVar8 = *(long **)(lVar10 + 0x10);
            if (plVar8 != (long *)0x0) {
              FUN_00340fb0(1,(long)plVar8 + 0xa4);
              iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4);
              if (iVar2 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8);
              }
              plVar8 = *(long **)(lVar10 + 0x10);
              if (plVar8 == (long *)0x0) {
                plVar8 = (long *)0x0;
              }
              else {
                FUN_00340fb0(1,(long)plVar8 + 0xa4);
                iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4);
                if (iVar2 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8);
                }
              }
            }
            FUN_003462d8(lVar10);
            return plVar8;
          }
          plVar8 = (long *)plVar8[7];
          if (((plVar8 != (long *)0x0) &&
              (uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,0x1bc), (uVar4 & 1) != 0)) &&
             (plVar8 = (long *)plVar8[0x24], plVar8 != (long *)0x0)) {
            FUN_00340fb0(1,(long)plVar8 + 0xa4);
            iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4);
            if (iVar2 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8);
              return plVar8;
            }
            return plVar8;
          }
        }
        break;
      }
    }
    else {
      if (uVar5 < 2) {
        uVar9 = uVar9 & uVar4 - 1;
      }
      else if (uVar4 <= uVar9) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar9 / uVar4;
        }
        uVar9 = uVar9 - uVar1 * uVar4;
      }
      if (uVar9 != uVar6) break;
    }
    plVar8 = (long *)*plVar8;
  } while (plVar8 != (long *)0x0);
LAB_003d9740:
  return *(long **)(uVar3 + 0x10);
}


// ===== 003d975c  FUN_003d975c =====

void FUN_003d975c(void)

{
  return;
}


// ===== 003d9760  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9764  FUN_003d9764 =====

undefined4 FUN_003d9764(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
}


// ===== 003d9770  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9774  FUN_003d9774 =====

undefined4 FUN_003d9774(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
}


// ===== 003d9780  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9784  FUN_003d9784 =====

undefined4 FUN_003d9784(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
}


// ===== 003d9790  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9794  FUN_003d9794 =====

undefined4 FUN_003d9794(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            return *(undefined4 *)(plVar7[3] + 0xc);
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003d9890  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9894  FUN_003d9894 =====

undefined4 FUN_003d9894(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            return *(undefined4 *)(plVar7[3] + 0xc);
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003d9990  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9994  FUN_003d9994 =====

undefined4 FUN_003d9994(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            return *(undefined4 *)(plVar7[3] + 0xc);
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003d9a90  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9a94  FUN_003d9a94 =====

undefined4 FUN_003d9a94(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            return *(undefined4 *)(plVar7[3] + 0xc);
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003d9b90  rive::ConditionComparandComponentCoreUint::ConditionComparandComponentCoreUint =====

/* rive::ConditionComparandComponentCoreUint::ConditionComparandComponentCoreUint(rive::TransitionPropertyComponentComparator*)
    */

void __thiscall
rive::ConditionComparandComponentCoreUint::ConditionComparandComponentCoreUint
          (ConditionComparandComponentCoreUint *this,TransitionPropertyComponentComparator *param_1)

{
  *(undefined **)this = PTR_vtable_0067cf88 + 0x10;
  *(TransitionPropertyComponentComparator **)(this + 8) = param_1;
  return;
}


// ===== 003d9ba4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9ba8  rive::ConditionComparandComponentCoreUint::value =====

/* rive::ConditionComparandComponentCoreUint::value(rive::StateMachineInstance const*) */

undefined8 __thiscall
rive::ConditionComparandComponentCoreUint::value
          (ConditionComparandComponentCoreUint *this,StateMachineInstance *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((((param_1 != (StateMachineInstance *)0x0) && (lVar5 = *(long *)(this + 8), lVar5 != 0)) &&
      (plVar1 = *(long **)(param_1 + 0x10), plVar1 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,*(undefined4 *)(lVar5 + 0xc)), lVar2 != 0 &&
      (uVar3 = FUN_00342668(lVar2,*(undefined4 *)(lVar5 + 0x10)), (uVar3 & 1) != 0)))) {
    uVar4 = FUN_003758ac(lVar2,*(undefined4 *)(*(long *)(this + 8) + 0x10));
    return uVar4;
  }
  return 0;
}


// ===== 003d9c24  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9c28  FUN_003d9c28 =====

undefined4 FUN_003d9c28(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
}


// ===== 003d9c34  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9c38  FUN_003d9c38 =====

undefined4 FUN_003d9c38(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            return *(undefined4 *)(plVar7[3] + 0xc);
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003d9d34  rive::ConditionComparandComponentCoreColor::ConditionComparandComponentCoreColor =====

/* rive::ConditionComparandComponentCoreColor::ConditionComparandComponentCoreColor(rive::TransitionPropertyComponentComparator*)
    */

void __thiscall
rive::ConditionComparandComponentCoreColor::ConditionComparandComponentCoreColor
          (ConditionComparandComponentCoreColor *this,TransitionPropertyComponentComparator *param_1
          )

{
  *(undefined **)this = PTR_vtable_0067cf80 + 0x10;
  *(TransitionPropertyComponentComparator **)(this + 8) = param_1;
  return;
}


// ===== 003d9d48  FUN_003d9d48 =====

void FUN_003d9d48(void)

{
  return;
}


// ===== 003d9d4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9d50  rive::ConditionComparandComponentCoreColor::value =====

/* rive::ConditionComparandComponentCoreColor::value(rive::StateMachineInstance const*) */

undefined4 __thiscall
rive::ConditionComparandComponentCoreColor::value
          (ConditionComparandComponentCoreColor *this,StateMachineInstance *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 == (StateMachineInstance *)0x0) {
    return 0;
  }
  lVar6 = *(long *)(this + 8);
  if (lVar6 == 0) {
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  lVar4 = (**(code **)(*plVar3 + 0x348))(plVar3,*(undefined4 *)(lVar6 + 0xc));
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_00342668(lVar4,*(undefined4 *)(lVar6 + 0x10));
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(long *)(this + 8) + 0x10);
  if (iVar1 < 0x22b) {
    if ((iVar1 != 0x25) && (iVar1 != 0x26)) {
      if (iVar1 != 0x58) {
        return 0;
      }
      return *(undefined4 *)(lVar4 + 0x28);
    }
LAB_003d9e08:
    uVar2 = *(undefined4 *)(lVar4 + 0x88);
  }
  else {
    if (iVar1 < 0x28b) {
      if (iVar1 == 0x22b) {
        return *(undefined4 *)(lVar4 + 0x110);
      }
      if (iVar1 != 0x27e) {
        return 0;
      }
    }
    else if (iVar1 != 0x28b) {
      if (iVar1 != 0x344) {
        return 0;
      }
      goto LAB_003d9e08;
    }
    uVar2 = *(undefined4 *)(lVar4 + 0xc);
  }
  return uVar2;
}


// ===== 003d9e2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9e30  FUN_003d9e30 =====

undefined4 FUN_003d9e30(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
}


// ===== 003d9e3c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9e40  FUN_003d9e40 =====

undefined4 FUN_003d9e40(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            return *(undefined4 *)(plVar7[3] + 0xc);
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003d9f3c  rive::ConditionComparandComponentCoreString::ConditionComparandComponentCoreString =====

/* rive::ConditionComparandComponentCoreString::ConditionComparandComponentCoreString(rive::TransitionPropertyComponentComparator*)
    */

void __thiscall
rive::ConditionComparandComponentCoreString::ConditionComparandComponentCoreString
          (ConditionComparandComponentCoreString *this,
          TransitionPropertyComponentComparator *param_1)

{
  *(undefined **)this = PTR_vtable_0067cf78 + 0x10;
  *(TransitionPropertyComponentComparator **)(this + 8) = param_1;
  return;
}


// ===== 003d9f50  FUN_003d9f50 =====

void FUN_003d9f50(void)

{
  return;
}


// ===== 003d9f54  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9f58  rive::ConditionComparandComponentCoreString::value =====

/* rive::ConditionComparandComponentCoreString::value(rive::StateMachineInstance const*) */

void rive::ConditionComparandComponentCoreString::value(StateMachineInstance *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long in_x1;
  undefined8 *in_x8;
  long lVar4;
  
  if ((((in_x1 != 0) && (lVar4 = *(long *)(param_1 + 8), lVar4 != 0)) &&
      (plVar1 = *(long **)(in_x1 + 0x10), plVar1 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,*(undefined4 *)(lVar4 + 0xc)), lVar2 != 0 &&
      (uVar3 = FUN_00342668(lVar2,*(undefined4 *)(lVar4 + 0x10)), (uVar3 & 1) != 0)))) {
    FUN_00375c88();
    return;
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 003d9fe0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003d9fe4  FUN_003d9fe4 =====

void FUN_003d9fe4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)param_1 = uVar2;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external(param_1,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
  return;
}


// ===== 003da014  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da018  FUN_003da018 =====

void FUN_003da018(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(ulong *)(param_3 + 0x200);
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
    uVar11 = NEON_cnt(uVar2,1);
    uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar5 = (uVar4 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar7 = uVar2 - 1 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar2 <= uVar5) {
        uVar7 = 0;
        if (uVar2 != 0) {
          uVar7 = uVar5 / uVar2;
        }
        uVar7 = uVar5 - uVar7 * uVar2;
      }
    }
    plVar8 = *(long **)(*(long *)(param_3 + 0x1f8) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar5 - uVar9 == 0) {
          if (plVar8[2] == uVar4) {
            lVar3 = plVar8[3];
            if (lVar3 != 0) {
              if ((*(byte *)(lVar3 + 0x10) & 1) != 0) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external(param_1,*(char **)(lVar3 + 0x20),*(ulong *)(lVar3 + 0x18))
                ;
                return;
              }
              uVar12 = *(undefined8 *)(lVar3 + 0x18);
              uVar11 = *(undefined8 *)(lVar3 + 0x10);
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 0x20);
              *(undefined8 *)(param_1 + 8) = uVar12;
              *(undefined8 *)param_1 = uVar11;
              return;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar2 - 1;
          }
          else if (uVar2 <= uVar9) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar9 / uVar2;
            }
            uVar9 = uVar9 - uVar1 * uVar2;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 003da13c  rive::ConditionComparandComponentCoreBoolean::ConditionComparandComponentCoreBoolean =====

/* rive::ConditionComparandComponentCoreBoolean::ConditionComparandComponentCoreBoolean(rive::TransitionPropertyComponentComparator*)
    */

void __thiscall
rive::ConditionComparandComponentCoreBoolean::ConditionComparandComponentCoreBoolean
          (ConditionComparandComponentCoreBoolean *this,
          TransitionPropertyComponentComparator *param_1)

{
  *(undefined **)this = PTR_vtable_0067cf70 + 0x10;
  *(TransitionPropertyComponentComparator **)(this + 8) = param_1;
  return;
}


// ===== 003da150  FUN_003da150 =====

void FUN_003da150(void)

{
  return;
}


// ===== 003da154  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da158  rive::ConditionComparandComponentCoreBoolean::value =====

/* rive::ConditionComparandComponentCoreBoolean::value(rive::StateMachineInstance const*) */

undefined8 __thiscall
rive::ConditionComparandComponentCoreBoolean::value
          (ConditionComparandComponentCoreBoolean *this,StateMachineInstance *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((((param_1 != (StateMachineInstance *)0x0) && (lVar5 = *(long *)(this + 8), lVar5 != 0)) &&
      (plVar1 = *(long **)(param_1 + 0x10), plVar1 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,*(undefined4 *)(lVar5 + 0xc)), lVar2 != 0 &&
      (uVar3 = FUN_00342668(lVar2,*(undefined4 *)(lVar5 + 0x10)), (uVar3 & 1) != 0)))) {
    uVar4 = FUN_00375ed4(lVar2,*(undefined4 *)(*(long *)(this + 8) + 0x10));
    return uVar4;
  }
  return 0;
}


// ===== 003da1d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da1d8  FUN_003da1d8 =====

undefined1 FUN_003da1d8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0xc);
}


// ===== 003da1e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da1e8  FUN_003da1e8 =====

bool FUN_003da1e8(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return false;
            }
            return *(char *)(plVar7[3] + 0xc) != '\0';
          }
        }
        else {
          if (uVar5 < 2) {
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
            return false;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return false;
}


// ===== 003da2ec  rive::ConditionComparandComponentCoreUintAsNumber::ConditionComparandComponentCoreUintAsNumber =====

/* rive::ConditionComparandComponentCoreUintAsNumber::ConditionComparandComponentCoreUintAsNumber(rive::TransitionPropertyComponentComparator*)
    */

void __thiscall
rive::ConditionComparandComponentCoreUintAsNumber::ConditionComparandComponentCoreUintAsNumber
          (ConditionComparandComponentCoreUintAsNumber *this,
          TransitionPropertyComponentComparator *param_1)

{
  *(undefined **)this = PTR_vtable_0067cf68 + 0x10;
  *(TransitionPropertyComponentComparator **)(this + 8) = param_1;
  return;
}


// ===== 003da300  FUN_003da300 =====

void FUN_003da300(void)

{
  return;
}


// ===== 003da304  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da308  rive::ConditionComparandComponentCoreUintAsNumber::value =====

/* rive::ConditionComparandComponentCoreUintAsNumber::value(rive::StateMachineInstance const*) */

float __thiscall
rive::ConditionComparandComponentCoreUintAsNumber::value
          (ConditionComparandComponentCoreUintAsNumber *this,StateMachineInstance *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if (((param_1 != (StateMachineInstance *)0x0) && (lVar5 = *(long *)(this + 8), lVar5 != 0)) &&
     (plVar4 = *(long **)(param_1 + 0x10), plVar4 != (long *)0x0)) {
    lVar2 = (**(code **)(*plVar4 + 0x348))(0,plVar4,*(undefined4 *)(lVar5 + 0xc));
    if (lVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      uVar3 = FUN_00342668(lVar2,*(undefined4 *)(lVar5 + 0x10));
      fVar6 = 0.0;
      if ((uVar3 & 1) != 0) {
        uVar1 = FUN_003758ac(0,lVar2,*(undefined4 *)(*(long *)(this + 8) + 0x10));
        fVar6 = (float)uVar1;
      }
    }
  }
  return fVar6;
}


// ===== 003da384  rive::ConditionComparandComponentCoreNumber::ConditionComparandComponentCoreNumber =====

/* rive::ConditionComparandComponentCoreNumber::ConditionComparandComponentCoreNumber(rive::TransitionPropertyComponentComparator*)
    */

void __thiscall
rive::ConditionComparandComponentCoreNumber::ConditionComparandComponentCoreNumber
          (ConditionComparandComponentCoreNumber *this,
          TransitionPropertyComponentComparator *param_1)

{
  *(undefined **)this = PTR_vtable_0067cf60 + 0x10;
  *(TransitionPropertyComponentComparator **)(this + 8) = param_1;
  return;
}


// ===== 003da398  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da39c  rive::ConditionComparandComponentCoreNumber::value =====

/* rive::ConditionComparandComponentCoreNumber::value(rive::StateMachineInstance const*) */

undefined1  [16] __thiscall
rive::ConditionComparandComponentCoreNumber::value
          (ConditionComparandComponentCoreNumber *this,StateMachineInstance *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((((param_1 != (StateMachineInstance *)0x0) && (lVar4 = *(long *)(this + 8), lVar4 != 0)) &&
      (plVar1 = *(long **)(param_1 + 0x10), plVar1 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,*(undefined4 *)(lVar4 + 0xc)), lVar2 != 0 &&
      (uVar3 = FUN_00342668(lVar2,*(undefined4 *)(lVar4 + 0x10)), (uVar3 & 1) != 0)))) {
    auVar5 = FUN_003567b0(lVar2,*(undefined4 *)(*(long *)(this + 8) + 0x10));
    return auVar5;
  }
  return ZEXT816(0);
}


// ===== 003da418  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da41c  FUN_003da41c =====

undefined4 FUN_003da41c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
}


// ===== 003da428  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da42c  FUN_003da42c =====

undefined4 FUN_003da42c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar11 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            uVar9 = NEON_ucvtf(*(undefined4 *)(plVar7[3] + 0xc));
            return uVar9;
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003da528  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da52c  FUN_003da52c =====

undefined4 FUN_003da52c(long param_1,long param_2)

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
  
  uVar2 = *(ulong *)(param_2 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar10 = NEON_cnt(uVar2,1);
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar6 = uVar2 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            if (plVar7[3] == 0) {
              return 0;
            }
            return *(undefined4 *)(plVar7[3] + 0xc);
          }
        }
        else {
          if (uVar5 < 2) {
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
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003da624  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003da628  FUN_003da628 =====

float FUN_003da628(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = 0.0;
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 8) + 0xc);
    if (iVar1 == 2) {
      return *(float *)(lVar2 + 0x200) / *(float *)(lVar2 + 0x204);
    }
    if (iVar1 == 1) {
      fVar3 = *(float *)(lVar2 + 0x204);
    }
    else if (iVar1 == 0) {
      return *(float *)(lVar2 + 0x200);
    }
  }
  return fVar3;
}


// ===== 003da670  FUN_003da670 =====

void FUN_003da670(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003da684  FUN_003da684 =====

void FUN_003da684(ulong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = (undefined4 *)param_1[1];
  if (puVar11 < (undefined4 *)param_1[2]) {
    puVar14 = puVar11 + 1;
    *puVar11 = param_2;
    goto LAB_003da7c4;
  }
  puVar10 = (undefined4 *)*param_1;
  lVar13 = (long)puVar11 - (long)puVar10 >> 2;
  uVar6 = lVar13 + 1;
  if (uVar6 >> 0x3e != 0) {
    FUN_003da670();
LAB_003da7e4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)param_1[2] - (long)puVar10;
  uVar5 = (long)uVar3 >> 1;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffffb < uVar3) {
    uVar5 = 0x3fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) goto LAB_003da7e4;
    pvVar2 = operator_new(uVar5 << 2);
  }
  puVar4 = (undefined4 *)((long)pvVar2 + lVar13 * 4);
  puVar14 = puVar4 + 1;
  *puVar4 = param_2;
  if ((long)puVar11 - (long)puVar10 != 0) {
    uVar6 = ((long)puVar11 - (long)puVar10) - 4;
    puVar12 = puVar11;
    if ((0x1b < uVar6) &&
       (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar2)))) {
      puVar9 = (undefined8 *)(puVar11 + -4);
      uVar6 = (uVar6 >> 2) + 1;
      uVar7 = uVar6 & 0x7ffffffffffffff8;
      puVar12 = puVar11 + -uVar7;
      puVar8 = (undefined8 *)(puVar4 + -4);
      uVar3 = uVar7;
      do {
        puVar1 = puVar9 + -1;
        uVar17 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar3 = uVar3 - 8;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar1;
        puVar8[-2] = uVar17;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar11 = puVar10;
      if (uVar6 == uVar7) goto LAB_003da7b0;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar12;
    } while (puVar12 != puVar10);
    puVar11 = (undefined4 *)*param_1;
  }
LAB_003da7b0:
  *param_1 = (ulong)puVar4;
  param_1[1] = (ulong)puVar14;
  param_1[2] = (ulong)((long)pvVar2 + uVar5 * 4);
  if (puVar11 != (undefined4 *)0x0) {
    operator_delete(puVar11);
  }
LAB_003da7c4:
  param_1[1] = (ulong)puVar14;
  return;
}


// ===== 003da7e8  FUN_003da7e8 =====

void FUN_003da7e8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00655478;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003da82c  FUN_003da82c =====

undefined8 FUN_003da82c(void)

{
  return 0;
}


// ===== 003da834  FUN_003da834 =====

void FUN_003da834(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00655478;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003da878  FUN_003da878 =====

undefined8 FUN_003da878(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar4 = *(ulong *)(param_2 + 0x200);
  if (uVar4 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    uVar13 = NEON_cnt(uVar4,1);
    uVar7 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar7 = (uVar6 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar9 = uVar4 - 1 & uVar7;
    }
    else {
      uVar9 = uVar7;
      if (uVar4 <= uVar7) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar7 / uVar4;
        }
        uVar9 = uVar7 - uVar9 * uVar4;
      }
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar9 * 8);
    if ((plVar10 == (long *)0x0) || (plVar10 = (long *)*plVar10, plVar10 == (long *)0x0)) {
LAB_003da958:
      uVar4 = 0;
      uVar6 = *(ulong *)(param_2 + 0x250);
      goto joined_r0x003daa94;
    }
    do {
      uVar11 = plVar10[1];
      if (uVar7 - uVar11 == 0) {
        if (plVar10[2] == uVar6) {
          uVar4 = plVar10[3];
          uVar6 = *(ulong *)(param_2 + 0x250);
          goto joined_r0x003daa94;
        }
      }
      else {
        if (uVar8 < 2) {
          uVar11 = uVar11 & uVar4 - 1;
        }
        else if (uVar4 <= uVar11) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar11 / uVar4;
          }
          uVar11 = uVar11 - uVar2 * uVar4;
        }
        if (uVar11 != uVar9) goto LAB_003da958;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
    uVar4 = 0;
  }
  uVar6 = *(ulong *)(param_2 + 0x250);
joined_r0x003daa94:
  if (uVar6 != 0) {
    uVar13 = NEON_cnt(uVar6,1);
    uVar7 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = (uVar4 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
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
    plVar10 = *(long **)(*(long *)(param_2 + 0x248) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar7 - uVar11 == 0) {
          if (plVar10[2] == uVar4) {
            if (plVar10[3] == 0) {
              return 0;
            }
            lVar3 = *(long *)(plVar10[3] + 0x38);
            if (lVar3 == 0) {
              return 0;
            }
            if ((*(byte *)(lVar3 + 0xb0) >> 1 & 1) == 0) {
              return 0;
            }
            plVar1 = *(long **)(lVar3 + 0x98);
            plVar10 = *(long **)(lVar3 + 0x90);
            plVar5 = plVar10;
            for (; (plVar10 != plVar1 && (plVar5 = plVar10, *plVar10 != param_3));
                plVar10 = plVar10 + 1) {
              plVar5 = plVar1;
            }
            if (plVar5 != plVar1) {
              return 0;
            }
            return 1;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar6 - 1;
          }
          else if (uVar6 <= uVar11) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar11 / uVar6;
            }
            uVar11 = uVar11 - uVar2 * uVar6;
          }
          if (uVar11 != uVar9) {
            return 0;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003daaa0  rive::ConditionComparison::compareNumbers =====

/* rive::ConditionComparison::compareNumbers(float, float) */

void rive::ConditionComparison::compareNumbers(float param_1,float param_2)

{
  long in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x003daaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(in_x0 + 8) + 0x10))();
  return;
}


// ===== 003daab0  rive::ConditionComparison::compareStrings =====

/* rive::ConditionComparison::compareStrings(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void rive::ConditionComparison::compareStrings(basic_string *param_1,basic_string *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003daabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


// ===== 003daac0  rive::ConditionComparison::compareBooleans =====

/* rive::ConditionComparison::compareBooleans(bool, bool) */

void rive::ConditionComparison::compareBooleans(bool param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003daacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((ulong)param_1 + 8) + 0x18))(*(long **)((ulong)param_1 + 8),param_2);
  return;
}


// ===== 003daad0  rive::ConditionComparison::compareColors =====

/* rive::ConditionComparison::compareColors(int, int) */

void rive::ConditionComparison::compareColors(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003daadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((ulong)(uint)param_1 + 8) + 0x28))
            (*(long **)((ulong)(uint)param_1 + 8),param_2);
  return;
}


// ===== 003daae0  rive::ConditionComparison::compareUints32 =====

/* rive::ConditionComparison::compareUints32(unsigned int, unsigned int) */

void rive::ConditionComparison::compareUints32(uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003daaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((ulong)param_1 + 8) + 0x30))(*(long **)((ulong)param_1 + 8),param_2);
  return;
}


// ===== 003daaf0  rive::ConditionComparison::comparePointers =====

/* rive::ConditionComparison::comparePointers(void const*, void const*) */

void __thiscall
rive::ConditionComparison::comparePointers(ConditionComparison *this,void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003dab08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),param_1 == param_2,1);
  return;
}


// ===== 003dab0c  rive::ListenerInputType::import =====

/* rive::ListenerInputType::import(rive::ImportStack&) */

void __thiscall rive::ListenerInputType::import(ListenerInputType *this,ImportStack *param_1)

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
  ListenerInputType *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x28e;
    }
    else {
      uVar7 = 0x28e;
      if (uVar5 < 0x28f) {
        uVar1 = (uint)uVar5 & 0xffff;
        uVar2 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar2 = 0x28e / uVar1;
        }
        uVar7 = (ulong)(0x28e - uVar2 * uVar1);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x28e) {
          if ((short)plVar8[2] == 0x28e) {
            if (plVar8[3] != 0) {
              local_30 = this;
              StateMachineListener::addListenerInputType
                        (*(StateMachineListener **)(plVar8[3] + 8),&local_30);
              if (local_30 != (ListenerInputType *)0x0) {
                (**(code **)(*(long *)local_30 + 8))();
              }
              uVar11 = 0;
              goto LAB_003dac14;
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
LAB_003dac14:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 003dac38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003dac3c  FUN_003dac3c =====

undefined8 FUN_003dac3c(void)

{
  return 0x292;
}


// ===== 003dac44  FUN_003dac44 =====

bool FUN_003dac44(undefined8 param_1,short param_2)

{
  return param_2 == 0x292;
}


// ===== 003dac54  rive::Weight::onAddedDirty =====

/* rive::Weight::onAddedDirty(rive::CoreContext*) */

bool __thiscall rive::Weight::onAddedDirty(Weight *this,CoreContext *param_1)

{
  bool bVar1;
  Weight *pWVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  pWVar2 = (Weight *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pWVar2 = (Weight *)(param_1 + -0x998);
  }
  *(Weight **)(this + 0x40) = pWVar2;
  *(Weight **)(this + 0x80) = pWVar2;
  if (pWVar2 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar5 + 0x90))(plVar3,this);
  }
  uVar4 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x6b);
  bVar1 = (uVar4 & 1) == 0;
  if (!bVar1) {
    *(Weight **)(*(long *)(this + 0x30) + 0xa8) = this;
  }
  return bVar1;
}


// ===== 003dace4  rive::Weight::deform =====

/* rive::Weight::deform(rive::Vec2D, unsigned int, unsigned int, rive::Mat2D const&, float const*)
    */

void __thiscall
rive::Weight::deform
          (undefined4 param_1,float param_2,uint param_3,uint param_4,undefined4 *param_5,
          long param_6)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_4 & 0xff) == 0) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)(param_4 & 0xff) / 255.0;
    lVar1 = param_6 + (ulong)(((param_3 & 0xff) + (param_3 & 0xff) * 2) * 2) * 4;
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    uVar10 = *(undefined8 *)(lVar1 + 8);
    fVar5 = (float)uVar10 * fVar8 + 0.0;
    fVar6 = (float)((ulong)uVar10 >> 0x20) * fVar8 + 0.0;
    fVar7 = (float)uVar11 * fVar8 + 0.0;
    fVar8 = (float)((ulong)uVar11 >> 0x20) * fVar8 + 0.0;
  }
  uVar2 = param_4 >> 8 & 0xff;
  if (uVar2 != 0) {
    fVar9 = (float)uVar2 / 255.0;
    lVar1 = param_6 + (ulong)(((param_3 >> 8 & 0xff) + (param_3 >> 8 & 0xff) * 2) * 2) * 4;
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    uVar10 = *(undefined8 *)(lVar1 + 8);
    fVar5 = fVar5 + (float)uVar10 * fVar9;
    fVar6 = fVar6 + (float)((ulong)uVar10 >> 0x20) * fVar9;
    fVar7 = fVar7 + (float)uVar11 * fVar9;
    fVar8 = fVar8 + (float)((ulong)uVar11 >> 0x20) * fVar9;
  }
  uVar2 = param_4 >> 0x10 & 0xff;
  if (uVar2 != 0) {
    fVar9 = (float)uVar2 / 255.0;
    lVar1 = param_6 + (ulong)(((param_3 >> 0x10 & 0xff) + (param_3 >> 0x10 & 0xff) * 2) * 2) * 4;
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    uVar10 = *(undefined8 *)(lVar1 + 8);
    fVar5 = fVar5 + (float)uVar10 * fVar9;
    fVar6 = fVar6 + (float)((ulong)uVar10 >> 0x20) * fVar9;
    fVar7 = fVar7 + (float)uVar11 * fVar9;
    fVar8 = fVar8 + (float)((ulong)uVar11 >> 0x20) * fVar9;
  }
  if (param_4 >> 0x18 != 0) {
    fVar9 = (float)(param_4 >> 0x18) / 255.0;
    param_6 = param_6 + (ulong)((param_3 >> 0x18) * 6) * 4;
    uVar11 = *(undefined8 *)(param_6 + 0x10);
    uVar10 = *(undefined8 *)(param_6 + 8);
    fVar5 = fVar5 + (float)uVar10 * fVar9;
    fVar6 = fVar6 + (float)((ulong)uVar10 >> 0x20) * fVar9;
    fVar7 = fVar7 + (float)uVar11 * fVar9;
    fVar8 = fVar8 + (float)((ulong)uVar11 >> 0x20) * fVar9;
  }
  NEON_fmadd(param_5[1],param_1,param_2 * (float)param_5[3]);
  NEON_fmadd(*param_5,param_1,param_2 * (float)param_5[2]);
  auVar3._4_4_ = fVar6;
  auVar3._0_4_ = fVar5;
  auVar3._8_4_ = fVar7;
  auVar3._12_4_ = fVar8;
  auVar4._4_4_ = fVar6;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar8;
  NEON_ext(auVar3,auVar4,8,1);
  return;
}


// ===== 003dae3c  FUN_003dae3c =====

void FUN_003dae3c(long *param_1)

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


// ===== 003daea8  FUN_003daea8 =====

undefined8 FUN_003daea8(void)

{
  return 0x2d;
}


// ===== 003daeb0  FUN_003daeb0 =====

bool FUN_003daeb0(undefined8 param_1,short param_2)

{
  return param_2 == 0x2d || param_2 == 10;
}


// ===== 003daec4  rive::ShaderAsset::decode =====

/* rive::ShaderAsset::decode(rive::Span<unsigned char>, rive::Factory*) */

undefined8 __thiscall rive::ShaderAsset::decode(ShaderAsset *this,char *param_2,ulong param_3)

{
  ShaderAsset *pSVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  void *pvVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  byte *pbVar21;
  int *piVar22;
  int *piVar23;
  byte *pbVar24;
  size_t __size;
  void *pvVar25;
  long *plVar26;
  ulong uVar27;
  uint uVar28;
  int *piVar29;
  uint uVar30;
  int *piVar31;
  undefined2 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  if (param_3 != 0) {
    if (*param_2 < '\0') {
      if (param_3 < 0x41) {
        return 0;
      }
      uVar27 = 0x41;
    }
    else {
      uVar27 = 1;
    }
    __size = 0;
    if (param_3 >= uVar27) {
      __size = param_3 - uVar27;
    }
    if (param_3 < uVar27 || param_3 - uVar27 == 0) {
      __size = 0;
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)malloc(__size);
      if (piVar10 == (int *)0x0) {
        __size = 0;
      }
      else {
        memcpy(piVar10,param_2 + uVar27,__size);
      }
    }
    free(*(void **)(this + 0xa0));
    *(int **)(this + 0xa0) = piVar10;
    *(size_t *)(this + 0xa8) = __size;
    if (*(long *)(this + 200) != 0) {
      puVar16 = (undefined8 *)*(void **)(this + 0xc0);
      while (puVar16 != (undefined8 *)0x0) {
        pvVar25 = (void *)*puVar16;
        operator_delete(puVar16);
        puVar16 = (undefined8 *)pvVar25;
      }
      lVar11 = *(long *)(this + 0xb8);
      *(undefined8 *)(this + 0xc0) = 0;
      if (lVar11 != 0) {
        lVar15 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xb0) + lVar15 * 8) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar11 != lVar15);
      }
      piVar10 = *(int **)(this + 0xa0);
      __size = *(size_t *)(this + 0xa8);
      *(undefined8 *)(this + 200) = 0;
    }
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(this + 0xd8);
    if (((7 < __size) && (*piVar10 == 0x52535442)) && ((short)piVar10[1] == 3)) {
      bVar4 = *(byte *)((long)piVar10 + 6);
      pbVar21 = (byte *)(piVar10 + 2);
      pbVar3 = (byte *)((long)piVar10 + __size);
      if (pbVar21 + (ulong)bVar4 * 9 <= pbVar3) {
        bVar5 = *(byte *)((long)piVar10 + 7);
        if (bVar4 != 0) {
          uVar30 = 0;
          pSVar1 = this + 0xc0;
          do {
            piVar29 = *(int **)(this + 0xb8);
            bVar6 = *pbVar21;
            piVar31 = (int *)(ulong)bVar6;
            uVar36 = *(undefined8 *)(pbVar21 + 1);
            if (piVar29 != (int *)0x0) {
              uVar33 = NEON_cnt(piVar29,1);
              uVar32 = NEON_uaddlv(uVar33,1);
              uVar27 = CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) & 0xffffffff;
              if (uVar27 < 2) {
                piVar10 = (int *)((ulong)((int)piVar29 - 1) & (ulong)piVar31);
              }
              else {
                piVar10 = piVar31;
                if (piVar29 <= piVar31) {
                  uVar18 = 0;
                  if (piVar29 != (int *)0x0) {
                    uVar18 = (ulong)piVar31 / (ulong)piVar29;
                  }
                  piVar10 = (int *)((long)piVar31 - uVar18 * (long)piVar29);
                }
              }
              puVar16 = *(undefined8 **)(*(long *)(this + 0xb0) + (long)piVar10 * 8);
              if ((puVar16 != (undefined8 *)0x0) &&
                 (plVar26 = (long *)*puVar16, plVar26 != (long *)0x0)) {
                do {
                  piVar17 = (int *)plVar26[1];
                  if (piVar17 == piVar31) {
                    if (*(byte *)(plVar26 + 2) == bVar6) goto LAB_003db3e0;
                  }
                  else {
                    if (uVar27 < 2) {
                      piVar17 = (int *)((ulong)piVar17 & (long)piVar29 - 1U);
                    }
                    else if (piVar29 <= piVar17) {
                      uVar18 = 0;
                      if (piVar29 != (int *)0x0) {
                        uVar18 = (ulong)piVar17 / (ulong)piVar29;
                      }
                      piVar17 = (int *)((long)piVar17 - uVar18 * (long)piVar29);
                    }
                    if (piVar17 != piVar10) break;
                  }
                  plVar26 = (long *)*plVar26;
                } while (plVar26 != (long *)0x0);
              }
            }
            plVar26 = (long *)operator_new(0x20);
            lVar11 = *(long *)(this + 200);
            fVar34 = *(float *)(this + 0xd0);
            *plVar26 = 0;
            plVar26[1] = (long)piVar31;
            *(byte *)(plVar26 + 2) = bVar6;
            *(undefined8 *)((long)plVar26 + 0x14) = 0;
            if ((piVar29 == (int *)0x0) || (fVar34 * (float)piVar29 < (float)(lVar11 + 1))) {
              if (piVar29 < (int *)0x3) {
                uVar27 = 1;
              }
              else {
                uVar27 = (ulong)(((ulong)piVar29 & (long)piVar29 - 1U) != 0);
              }
              piVar10 = (int *)(uVar27 | (long)piVar29 << 1);
              piVar17 = (int *)(long)((float)(lVar11 + 1) / fVar34);
              if (piVar10 <= piVar17) {
                piVar10 = piVar17;
              }
              if ((long)piVar10 - 1U == 0) {
                piVar10 = (int *)0x2;
              }
              else if (((ulong)piVar10 & (long)piVar10 - 1U) != 0) {
                piVar10 = (int *)std::__ndk1::__next_prime((ulong)piVar10);
                piVar29 = *(int **)(this + 0xb8);
              }
              if (piVar29 < piVar10) {
LAB_003db188:
                if ((ulong)piVar10 >> 0x3d != 0) {
LAB_003db680:
                    /* WARNING: Subroutine does not return */
                  FUN_00324008();
                }
                pvVar25 = operator_new((long)piVar10 << 3);
                pvVar12 = *(void **)(this + 0xb0);
                *(void **)(this + 0xb0) = pvVar25;
                if (pvVar12 != (void *)0x0) {
                  operator_delete(pvVar12);
                }
                piVar29 = (int *)0x0;
                *(int **)(this + 0xb8) = piVar10;
                do {
                  *(undefined8 *)(*(long *)(this + 0xb0) + (long)piVar29 * 8) = 0;
                  piVar29 = (int *)((long)piVar29 + 1);
                } while (piVar10 != piVar29);
                plVar13 = *(long **)pSVar1;
                piVar29 = piVar10;
                if (plVar13 != (long *)0x0) {
                  piVar17 = (int *)plVar13[1];
                  uVar33 = NEON_cnt(piVar10,1);
                  uVar32 = NEON_uaddlv(uVar33,1);
                  uVar27 = CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) & 0xffffffff;
                  if (uVar27 < 2) {
                    piVar17 = (int *)((ulong)piVar17 & (long)piVar10 - 1U);
                  }
                  else if (piVar10 <= piVar17) {
                    uVar18 = 0;
                    if (piVar10 != (int *)0x0) {
                      uVar18 = (ulong)piVar17 / (ulong)piVar10;
                    }
                    piVar17 = (int *)((long)piVar17 - uVar18 * (long)piVar10);
                  }
                  *(ShaderAsset **)(*(long *)(this + 0xb0) + (long)piVar17 * 8) = pSVar1;
                  plVar19 = (long *)*plVar13;
                  if (plVar19 != (long *)0x0) {
                    do {
                      piVar22 = (int *)plVar19[1];
                      if (uVar27 < 2) {
                        piVar22 = (int *)((ulong)piVar22 & (long)piVar10 - 1U);
                      }
                      else if (piVar10 <= piVar22) {
                        uVar18 = 0;
                        if (piVar10 != (int *)0x0) {
                          uVar18 = (ulong)piVar22 / (ulong)piVar10;
                        }
                        piVar22 = (int *)((long)piVar22 - uVar18 * (long)piVar10);
                      }
                      if (piVar22 != piVar17) {
                        if (*(long *)(*(long *)(this + 0xb0) + (long)piVar22 * 8) == 0) {
                          *(long **)(*(long *)(this + 0xb0) + (long)piVar22 * 8) = plVar13;
                          piVar17 = piVar22;
                        }
                        else {
                          *plVar13 = *plVar19;
                          *plVar19 = **(long **)(*(long *)(this + 0xb0) + (long)piVar22 * 8);
                          **(undefined8 **)(*(long *)(this + 0xb0) + (long)piVar22 * 8) = plVar19;
                          plVar19 = plVar13;
                        }
                      }
                      plVar13 = plVar19;
                      plVar19 = (long *)*plVar13;
                    } while (plVar19 != (long *)0x0);
                  }
                }
              }
              else if (piVar10 < piVar29) {
                piVar17 = (int *)(long)((float)*(ulong *)(this + 200) / *(float *)(this + 0xd0));
                if (piVar29 < (int *)0x3) {
LAB_003db304:
                  piVar17 = (int *)std::__ndk1::__next_prime((ulong)piVar17);
                }
                else {
                  uVar33 = NEON_cnt(piVar29,1);
                  uVar32 = NEON_uaddlv(uVar33,1);
                  if (1 < (uint)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32)) goto LAB_003db304;
                  if ((int *)0x1 < piVar17) {
                    piVar17 = (int *)(1L << (-LZCOUNT((long)piVar17 + -1) & 0x3fU));
                  }
                }
                if (piVar10 <= piVar17) {
                  piVar10 = piVar17;
                }
                if (piVar10 < piVar29) {
                  if (piVar10 != (int *)0x0) goto LAB_003db188;
                  pvVar25 = *(void **)(this + 0xb0);
                  *(undefined8 *)(this + 0xb0) = 0;
                  if (pvVar25 != (void *)0x0) {
                    operator_delete(pvVar25);
                  }
                  *(undefined8 *)(this + 0xb8) = 0;
                  piVar29 = (int *)0x0;
                }
                else {
                  piVar29 = *(int **)(this + 0xb8);
                }
              }
              if (((ulong)piVar29 & (long)piVar29 - 1U) == 0) {
                piVar10 = (int *)((ulong)((int)piVar29 - 1) & (ulong)piVar31);
              }
              else {
                piVar10 = piVar31;
                if (piVar29 <= piVar31) {
                  uVar27 = 0;
                  if (piVar29 != (int *)0x0) {
                    uVar27 = (ulong)piVar31 / (ulong)piVar29;
                  }
                  piVar10 = (int *)((long)piVar31 - uVar27 * (long)piVar29);
                }
              }
            }
            lVar11 = *(long *)(this + 0xb0);
            plVar13 = *(long **)(lVar11 + (long)piVar10 * 8);
            if (plVar13 == (long *)0x0) {
              lVar15 = *(long *)pSVar1;
              *(long **)pSVar1 = plVar26;
              *plVar26 = lVar15;
              *(ShaderAsset **)(lVar11 + (long)piVar10 * 8) = pSVar1;
              if (*plVar26 != 0) {
                piVar31 = *(int **)(*plVar26 + 8);
                if (((ulong)piVar29 & (long)piVar29 - 1U) == 0) {
                  piVar31 = (int *)((ulong)piVar31 & (long)piVar29 - 1U);
                }
                else if (piVar29 <= piVar31) {
                  uVar27 = 0;
                  if (piVar29 != (int *)0x0) {
                    uVar27 = (ulong)piVar31 / (ulong)piVar29;
                  }
                  piVar31 = (int *)((long)piVar31 - uVar27 * (long)piVar29);
                }
                plVar13 = (long *)(*(long *)(this + 0xb0) + (long)piVar31 * 8);
                goto LAB_003db3d0;
              }
            }
            else {
              *plVar26 = *plVar13;
LAB_003db3d0:
              *plVar13 = (long)plVar26;
            }
            *(long *)(this + 200) = *(long *)(this + 200) + 1;
LAB_003db3e0:
            uVar30 = uVar30 + 1;
            pbVar21 = pbVar21 + 9;
            *(undefined8 *)((long)plVar26 + 0x14) = uVar36;
          } while (uVar30 < bVar4);
        }
        if (bVar5 != 0) {
          uVar30 = 0;
          pbVar24 = pbVar21;
          do {
            pbVar2 = pbVar24 + 3;
            if (pbVar3 < pbVar2) {
              return 0;
            }
            uVar7 = *(ushort *)(pbVar24 + 1);
            pbVar21 = pbVar2 + uVar7;
            if (pbVar3 < pbVar21) {
              return 0;
            }
            if ((((uVar7 != 0) && (*pbVar24 == 1)) &&
                (bVar4 = *pbVar2, ((ulong)bVar4 << 2 | 1) <= (ulong)uVar7)) && (bVar4 != 0)) {
              piVar10 = *(int **)(this + 0xe0);
              uVar28 = 0;
              do {
                pbVar24 = pbVar24 + 4;
                iVar9 = *(int *)pbVar24;
                if (piVar10 < *(int **)(this + 0xe8)) {
                  *piVar10 = *(int *)pbVar24;
                  piVar10 = piVar10 + 1;
                }
                else {
                  piVar29 = *(int **)(this + 0xd8);
                  lVar11 = (long)piVar10 - (long)piVar29;
                  uVar27 = (lVar11 >> 2) + 1;
                  if (uVar27 >> 0x3e != 0) {
                    FUN_003db684();
                    goto LAB_003db680;
                  }
                  uVar14 = (long)*(int **)(this + 0xe8) - (long)piVar29;
                  uVar18 = (long)uVar14 >> 1;
                  if (uVar18 <= uVar27) {
                    uVar18 = uVar27;
                  }
                  if (0x7ffffffffffffffb < uVar14) {
                    uVar18 = 0x3fffffffffffffff;
                  }
                  if (uVar18 == 0) {
                    pvVar25 = (void *)0x0;
                  }
                  else {
                    if (uVar18 >> 0x3e != 0) goto LAB_003db680;
                    pvVar25 = operator_new(uVar18 << 2);
                  }
                  piVar31 = (int *)((long)pvVar25 + (lVar11 >> 2) * 4);
                  piVar22 = piVar31 + 1;
                  *piVar31 = iVar9;
                  piVar17 = piVar10;
                  if ((long)piVar10 - (long)piVar29 != 0) {
                    uVar27 = ((long)piVar10 - (long)piVar29) - 4;
                    if (((0xab < uVar27) &&
                        (uVar14 = (long)pvVar25 + lVar11 + -4,
                        uVar14 - (uVar27 & 0xfffffffffffffffc) <= uVar14)) &&
                       (((int *)((long)(piVar10 + -1) - (uVar27 & 0xfffffffffffffffc)) <=
                         piVar10 + -1 && (0x1f < (ulong)((long)piVar10 + (-lVar11 - (long)pvVar25)))
                        ))) {
                      piVar17 = piVar31 + -4;
                      piVar23 = piVar10 + -4;
                      uVar27 = (uVar27 >> 2) + 1;
                      uVar20 = uVar27 & 0x7ffffffffffffff8;
                      piVar10 = piVar10 + -uVar20;
                      uVar14 = uVar20;
                      do {
                        piVar8 = piVar23 + -2;
                        uVar35 = *(undefined8 *)(piVar23 + -4);
                        uVar33 = *(undefined8 *)(piVar23 + 2);
                        uVar36 = *(undefined8 *)piVar23;
                        uVar14 = uVar14 - 8;
                        piVar23 = piVar23 + -8;
                        *(undefined8 *)(piVar17 + -2) = *(undefined8 *)piVar8;
                        *(undefined8 *)(piVar17 + -4) = uVar35;
                        *(undefined8 *)(piVar17 + 2) = uVar33;
                        *(undefined8 *)piVar17 = uVar36;
                        piVar17 = piVar17 + -8;
                      } while (uVar14 != 0);
                      piVar31 = piVar31 + -uVar20;
                      piVar17 = piVar29;
                      if (uVar27 == uVar20) goto LAB_003db578;
                    }
                    do {
                      piVar10 = piVar10 + -1;
                      piVar31 = piVar31 + -1;
                      *piVar31 = *piVar10;
                    } while (piVar10 != piVar29);
                    piVar17 = *(int **)(this + 0xd8);
                  }
LAB_003db578:
                  *(int **)(this + 0xd8) = piVar31;
                  *(int **)(this + 0xe0) = piVar22;
                  *(void **)(this + 0xe8) = (void *)((long)pvVar25 + uVar18 * 4);
                  piVar10 = piVar22;
                  if (piVar17 != (int *)0x0) {
                    operator_delete(piVar17);
                  }
                }
                uVar28 = uVar28 + 1;
                *(int **)(this + 0xe0) = piVar10;
              } while (uVar28 < bVar4);
            }
            uVar30 = uVar30 + 1;
            pbVar24 = pbVar21;
          } while (uVar30 < bVar5);
        }
        plVar26 = *(long **)(this + 0xc0);
        if (plVar26 == (long *)0x0) {
          return 1;
        }
        lVar11 = *(long *)(this + 0xa0);
        pbVar3 = *(byte **)(this + 0xa8);
        while( true ) {
          pbVar24 = pbVar21 + ((ulong)*(uint *)((long)plVar26 + 0x14) - lVar11);
          if ((pbVar3 < pbVar24) ||
             ((ulong)((long)pbVar3 - (long)pbVar24) < (ulong)*(uint *)(plVar26 + 3))) break;
          *(int *)((long)plVar26 + 0x14) = (int)pbVar24;
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) {
            return 1;
          }
        }
        FUN_003db698(this + 0xb0);
      }
    }
  }
  return 0;
}


// ===== 003db684  FUN_003db684 =====

void FUN_003db684(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003db698  FUN_003db698 =====

void FUN_003db698(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[2];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar4;
    }
    lVar2 = param_1[1];
    param_1[2] = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}


// ===== 003db6fc  rive::ShaderAsset::findShader =====

/* rive::ShaderAsset::findShader(unsigned char) const */

undefined1  [16] __thiscall rive::ShaderAsset::findShader(ShaderAsset *this,uchar param_1)

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
  undefined1 auVar10 [16];
  
  uVar2 = (ulong)param_1;
  uVar3 = *(ulong *)(this + 0xb8);
  if (uVar3 != 0) {
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar4 < 2) {
      uVar5 = (int)uVar3 - 1 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (uVar3 <= uVar2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar2 / uVar3;
        }
        uVar5 = uVar2 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0xb0) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar2) {
          if ((uchar)plVar6[2] == param_1) {
            auVar10._8_4_ = (int)plVar6[3];
            auVar10._0_8_ = *(long *)(this + 0xa0) + (ulong)*(uint *)((long)plVar6 + 0x14);
            auVar10._12_4_ = 0;
            return auVar10;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return ZEXT816(0);
}


// ===== 003db7c0  rive::BindableArtboard::BindableArtboard =====

/* rive::BindableArtboard::BindableArtboard(rive::rcp<rive::File const>,
   std::__ndk1::unique_ptr<rive::ArtboardInstance,
   std::__ndk1::default_delete<rive::ArtboardInstance> >) */

void __thiscall
rive::BindableArtboard::BindableArtboard(BindableArtboard *this,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *(undefined4 *)this = 1;
  if (lVar2 != 0) {
    FUN_00340fb0(1,lVar2);
  }
  *(long *)(this + 8) = lVar2;
  uVar1 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


// ===== 003db814  rive::DistanceConstraint::constrain =====

/* rive::DistanceConstraint::constrain(rive::TransformComponent*) */

void __thiscall
rive::DistanceConstraint::constrain(DistanceConstraint *this,TransformComponent *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((*(long **)(this + 0x90) != (long *)0x0) &&
     (uVar4 = (**(code **)(**(long **)(this + 0x90) + 0x80))(), (uVar4 & 1) == 0)) {
    fVar5 = (float)*(undefined8 *)(param_1 + 0xb4);
    fVar7 = (float)*(undefined8 *)(*(long *)(this + 0x90) + 0xb4);
    fVar9 = fVar5 - fVar7;
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(*(long *)(this + 0x90) + 0xb4) >> 0x20);
    fVar10 = fVar6 - fVar8;
    fVar11 = (float)NEON_fmadd(fVar9,fVar9,fVar10 * fVar10);
    fVar11 = SQRT(fVar11);
    if (*(int *)(this + 0x9c) == 1) {
      fVar12 = *(float *)(this + 0x98);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.001 <= fVar11) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar11) && !NAN(fVar12)) {
          bVar1 = fVar11 < fVar12;
          bVar2 = fVar11 == fVar12;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        return;
      }
    }
    else if (*(int *)(this + 0x9c) == 0) {
      fVar12 = *(float *)(this + 0x98);
      bVar1 = true;
      if ((0.001 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar12))) {
        bVar1 = fVar11 < fVar12;
      }
      if (bVar1) {
        return;
      }
    }
    else {
      if (fVar11 < 0.001) {
        return;
      }
      fVar12 = *(float *)(this + 0x98);
    }
    *(ulong *)(param_1 + 0xb4) =
         CONCAT44(fVar6 + ((fVar8 + fVar10 * (fVar12 / fVar11)) - fVar6) *
                          (float)*(undefined8 *)(this + 0x88),
                  fVar5 + ((fVar7 + fVar9 * (fVar12 / fVar11)) - fVar5) *
                          (float)*(undefined8 *)(this + 0x88));
  }
  return;
}


// ===== 003db8f4  rive::DistanceConstraint::distanceChanged =====

/* rive::DistanceConstraint::distanceChanged() */

void __thiscall rive::DistanceConstraint::distanceChanged(DistanceConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003db8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003db900  rive::DistanceConstraint::modeValueChanged =====

/* rive::DistanceConstraint::modeValueChanged() */

void __thiscall rive::DistanceConstraint::modeValueChanged(DistanceConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003db908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003db90c  FUN_003db90c =====

void FUN_003db90c(long *param_1)

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


// ===== 003db978  FUN_003db978 =====

undefined8 FUN_003db978(void)

{
  return 0x52;
}


// ===== 003db980  FUN_003db980 =====

bool FUN_003db980(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x4f;
  if ((uVar1 < 4) && (uVar1 != 2)) {
    return true;
  }
  return (param_2 & 0xffff) == 10;
}


// ===== 003db9ac  FUN_003db9ac =====

undefined8 FUN_003db9ac(long param_1,short param_2,long *param_3)

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
  
  if (param_2 != 0xb2) {
    if (param_2 == 0xb1) {
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
      *(undefined4 *)(param_1 + 0x98) = uVar10;
      param_3[2] = (long)puVar5;
      return 1;
    }
    uVar3 = FUN_003b4320();
    return uVar3;
  }
  uVar9 = 0;
  uVar4 = 0;
  pbVar7 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003dba44;
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
LAB_003dba44:
    uVar4 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x9c) = (int)uVar4;
  return 1;
}


// ===== 003dba70  rive::FollowPathConstraint::distanceChanged =====

/* rive::FollowPathConstraint::distanceChanged() */

void __thiscall rive::FollowPathConstraint::distanceChanged(FollowPathConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003dba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003dba7c  rive::FollowPathConstraint::orientChanged =====

/* rive::FollowPathConstraint::orientChanged() */

void __thiscall rive::FollowPathConstraint::orientChanged(FollowPathConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003dba84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003dba88  rive::FollowPathConstraint::targetTransform =====

/* rive::FollowPathConstraint::targetTransform(float) const */

void rive::FollowPathConstraint::targetTransform(float param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long in_x0;
  ulong uVar4;
  float fVar5;
  float *in_x8;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float local_78;
  float afStack_74 [3];
  float local_68;
  float fStack_64;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(**(long **)(in_x0 + 0x90) + 0x18))(*(long **)(in_x0 + 0x90),3);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = (**(code **)(**(long **)(in_x0 + 0x90) + 0x18))(*(long **)(in_x0 + 0x90),0xc),
     (uVar4 & 1) == 0)) {
    lVar6 = *(long *)(in_x0 + 0x90);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      uVar10 = *(undefined8 *)(lVar6 + 0xa4);
      uVar7 = *(undefined8 *)(lVar6 + 0xb4);
      *(undefined8 *)(in_x8 + 2) = *(undefined8 *)(lVar6 + 0xac);
      *(undefined8 *)in_x8 = uVar10;
      *(undefined8 *)(in_x8 + 4) = uVar7;
      return;
    }
    goto LAB_003dbc88;
  }
  fVar8 = fmodf(param_1,1.0);
  fVar9 = fVar8 + 1.0;
  if (0.0 <= fVar8) {
    fVar9 = fVar8;
  }
  bVar3 = true;
  if ((fVar9 == 0.0) && (bVar3 = false, !NAN(param_1))) {
    bVar3 = param_1 == 0.0;
  }
  fVar8 = 1.0;
  if (bVar3) {
    fVar8 = fVar9;
  }
  PathMeasure::atDistance(fVar8 * *(float *)(in_x0 + 0xe8));
  lVar6 = *(long *)(in_x0 + 0x90);
  cVar1 = *(char *)(in_x0 + 0xa4);
  uVar10 = *(undefined8 *)(lVar6 + 0xa4);
  uVar7 = *(undefined8 *)(lVar6 + 0xb4);
  *(undefined8 *)(in_x8 + 2) = *(undefined8 *)(lVar6 + 0xac);
  *(undefined8 *)in_x8 = uVar10;
  *(undefined8 *)(in_x8 + 4) = uVar7;
  if (cVar1 != '\0') {
    fVar9 = atan2f(in_x8[1],*in_x8);
    fVar8 = atan2f(fStack_64,local_68);
    fVar9 = fmodf(fVar9,6.2831855);
    fVar8 = fVar8 - fVar9;
    if (fVar8 == 3.1415927 || fVar8 < 3.1415927 != NAN(fVar8)) {
      if (fVar8 < -3.1415927) {
        fVar5 = 6.2831855;
        goto LAB_003dbbe8;
      }
    }
    else {
      fVar5 = -6.2831855;
LAB_003dbbe8:
      fVar8 = fVar8 + fVar5;
    }
    fVar9 = (float)NEON_fmadd(fVar8,*(undefined4 *)(in_x0 + 0x88),fVar9);
    if (fVar9 == 0.0) {
      afStack_74[0] = 0.0;
      local_78 = 1.0;
    }
    else {
      sincosf(fVar9,afStack_74,&local_78);
    }
    *in_x8 = local_78;
    in_x8[1] = afStack_74[0];
    in_x8[2] = -afStack_74[0];
    in_x8[3] = local_78;
  }
  uVar7 = 0;
  if ((*(char *)(in_x0 + 0xa5) != '\0') &&
     (uVar4 = (**(code **)(**(long **)(in_x0 + 0x30) + 0x18))(*(long **)(in_x0 + 0x30),0x26),
     (uVar4 & 1) != 0)) {
    uVar7 = *(undefined8 *)(*(long *)(in_x0 + 0x30) + 0xe0);
  }
  *(ulong *)(in_x8 + 4) =
       CONCAT44(SUB84(afStack_74._4_8_,4) + (float)((ulong)uVar7 >> 0x20),
                (float)afStack_74._4_8_ + (float)uVar7);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_003dbc88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003dbc8c  rive::FollowPathConstraint::constrain =====

/* rive::FollowPathConstraint::constrain(rive::TransformComponent*) */

void __thiscall
rive::FollowPathConstraint::constrain(FollowPathConstraint *this,TransformComponent *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  Mat2D aMStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(this + 0x90) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(this + 0x90) + 0x80))(), (uVar2 & 1) == 0)) {
    targetTransform(*(float *)(this + 0xa0));
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),0x5b);
    constrainHelper((Mat2D *)this,(Mat2D *)(param_1 + 0xa4),aMStack_50);
    if (local_58 == 0.0) {
      fStack_6c = 0.0;
      local_70 = 1.0;
    }
    else {
      sincosf(local_58,&fStack_6c,&local_70);
    }
    fVar4 = (float)NEON_fmadd(local_70 * local_60,local_54,-(fStack_6c * fStack_5c));
    fVar3 = (float)NEON_fmadd(fStack_6c * local_60,local_54,local_70 * fStack_5c);
    *(float *)(param_1 + 0xa4) = local_70 * local_60;
    *(float *)(param_1 + 0xa8) = fStack_6c * local_60;
    *(undefined8 *)(param_1 + 0xb4) = local_68;
    if (local_54 == 0.0) {
      fVar3 = local_70 * fStack_5c;
      fVar4 = -(fStack_6c * fStack_5c);
    }
    *(float *)(param_1 + 0xac) = fVar4;
    *(float *)(param_1 + 0xb0) = fVar3;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003dbda4  rive::FollowPathConstraint::constrainHelper =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::FollowPathConstraint::constrainHelper(rive::Mat2D const&, rive::Mat2D&, rive::Mat2D const&)
    */

void rive::FollowPathConstraint::constrainHelper(Mat2D *param_1,Mat2D *param_2,Mat2D *param_3)

{
  Mat2D *pMVar1;
  float *pfVar2;
  Mat2D MVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  ulong uVar6;
  undefined8 *in_x3;
  undefined8 *in_x8;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (*(int *)(param_1 + 0x98) == 1) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x90) + 0x30);
    uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5b);
    pfVar2 = (float *)((long)plVar5 + 0xa4);
    if ((uVar6 & 1) == 0) {
      pfVar2 = (float *)0x686140;
    }
    fVar13 = *pfVar2;
    fVar8 = pfVar2[3];
    fVar10 = (float)*(undefined8 *)(pfVar2 + 1);
    fVar14 = -fVar10;
    fVar15 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
    fVar16 = (float)NEON_fmadd(fVar13,fVar8,fVar14 * fVar15);
    if (fVar16 == 0.0) {
      in_x8[2] = 0;
      uVar19 = _DAT_0024deb0;
      in_x8[1] = _UNK_0024deb8;
      *in_x8 = uVar19;
      return;
    }
    fVar16 = 1.0 / fVar16;
    fVar17 = (float)*(undefined8 *)(pfVar2 + 4);
    fVar18 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
    fVar9 = fVar8 * fVar16;
    fVar14 = fVar14 * fVar16;
    fVar11 = -fVar15 * fVar16;
    fVar12 = fVar13 * fVar16;
    uVar19 = NEON_rev64(CONCAT44(fVar18 * -fVar13,fVar17 * -fVar8),4);
    auVar7._4_4_ = fVar14;
    auVar7._0_4_ = fVar9;
    auVar7._8_4_ = fVar11;
    auVar7._12_4_ = fVar12;
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = fVar11;
    auVar4._12_4_ = fVar12;
    auVar7 = NEON_ext(auVar7,auVar4,8,1);
    pMVar1 = param_3 + 4;
    fVar8 = (float)((ulong)*(undefined8 *)pMVar1 >> 0x20);
    fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    uVar19 = NEON_rev64(CONCAT44(fVar16 * ((float)((ulong)uVar19 >> 0x20) + fVar18 * fVar15),
                                 fVar16 * ((float)uVar19 + fVar17 * fVar10)),4);
    fVar10 = (float)*(undefined8 *)(param_3 + 0x10);
    *(ulong *)(param_3 + 8) =
         CONCAT44(fVar12 * SUB124(*(undefined1 (*) [12])pMVar1,8) + fVar8 * fVar14,
                  fVar11 * SUB124(*(undefined1 (*) [12])pMVar1,8) + fVar8 * fVar9);
    *(ulong *)param_3 =
         CONCAT44(fVar12 * SUB124(*(undefined1 (*) [12])pMVar1,0) +
                  (float)*(undefined8 *)param_3 * fVar14,
                  fVar11 * SUB124(*(undefined1 (*) [12])pMVar1,0) +
                  (float)*(undefined8 *)param_3 * fVar9);
    *(ulong *)(param_3 + 0x10) =
         CONCAT44((float)((ulong)uVar19 >> 0x20) + auVar7._4_4_ * fVar13 + fVar14 * fVar10,
                  (float)uVar19 + auVar7._0_4_ * fVar13 + fVar9 * fVar10);
  }
  if (*(int *)(param_1 + 0x9c) == 1) {
    fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
    fVar9 = (float)in_x3[1];
    fVar11 = (float)((ulong)in_x3[1] >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_3 + 4);
    fVar15 = (float)*in_x3;
    fVar14 = (float)((ulong)*in_x3 >> 0x20);
    fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    fVar13 = (float)*(undefined8 *)(param_3 + 0x10);
    uVar19 = in_x3[2];
    *(ulong *)(param_3 + 8) =
         CONCAT44(fVar11 * (float)*(undefined8 *)(param_3 + 0xc) + fVar8 * fVar14,
                  fVar9 * (float)*(undefined8 *)(param_3 + 0xc) + fVar8 * fVar15);
    *(ulong *)param_3 =
         CONCAT44(fVar11 * fVar10 + (float)*(undefined8 *)param_3 * fVar14,
                  fVar9 * fVar10 + (float)*(undefined8 *)param_3 * fVar15);
    *(ulong *)(param_3 + 0x10) =
         CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar11 * fVar16 + fVar14 * fVar13,
                  (float)uVar19 + fVar9 * fVar16 + fVar15 * fVar13);
  }
  fVar13 = *(float *)param_2;
  fVar14 = *(float *)(param_2 + 4);
  fVar15 = 0.0;
  fVar10 = (float)NEON_fmadd(fVar13,fVar13,fVar14 * fVar14);
  fVar8 = SQRT(fVar10);
  if (fVar8 != 0.0) {
    fVar15 = (float)NEON_fmadd(fVar13,*(float *)(param_2 + 0xc),-(*(float *)(param_2 + 8) * fVar14))
    ;
    fVar15 = fVar15 / fVar8;
  }
  fVar16 = (float)NEON_fmadd(fVar13,*(float *)(param_2 + 8),fVar14 * *(float *)(param_2 + 0xc));
  fVar10 = atan2f(fVar16,fVar10);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  fVar16 = atan2f(*(float *)(param_3 + 4),*(float *)param_3);
  fVar9 = *(float *)(param_1 + 0x88);
  MVar3 = param_1[0xa4];
  uVar20 = *(undefined8 *)(param_3 + 0x10);
  *(float *)(in_x8 + 2) = fVar16;
  if (MVar3 == (Mat2D)0x0) {
    fVar14 = atan2f(fVar14,fVar13);
    fVar14 = fmodf(fVar14,6.2831855);
    *(float *)(in_x8 + 2) = fVar14;
  }
  *(float *)((long)in_x8 + 0x14) = fVar10;
  *in_x8 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar9 +
                    (float)((ulong)uVar19 >> 0x20) * (1.0 - fVar9),
                    (float)uVar20 * fVar9 + (float)uVar19 * (1.0 - fVar9));
  in_x8[1] = CONCAT44(fVar15,fVar8);
  return;
}


// ===== 003dc008  rive::FollowPathConstraint::update =====

/* rive::FollowPathConstraint::update(rive::ComponentDirt) */

void rive::FollowPathConstraint::update(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  Mat2D *pMVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  RawPath *this;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),3);
  plVar5 = *(long **)(param_1 + 0x90);
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0xc);
    if ((uVar4 & 1) == 0) goto LAB_003dc2b0;
    uVar16 = *(undefined8 *)(param_1 + 0x90);
    puVar7 = (undefined8 *)operator_new(8);
    puVar17 = puVar7 + 1;
    *puVar7 = uVar16;
LAB_003dc210:
    this = (RawPath *)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)this;
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
    puVar13 = puVar7;
    do {
      puVar14 = puVar13 + 1;
      plVar5 = (long *)*puVar13;
      pMVar8 = (Mat2D *)(**(code **)(*plVar5 + 0x1d8))(plVar5);
      RawPath::addPath(this,(RawPath *)(plVar5 + 0x2d),pMVar8);
      puVar13 = puVar14;
    } while (puVar14 != puVar17);
    PathMeasure::PathMeasure((PathMeasure *)local_90,this,0.5);
    *(undefined4 *)(param_1 + 0xe8) = local_90[0];
    FUN_003dc300(param_1 + 0xf0);
    uVar19 = local_78;
    uVar16 = uStack_80;
    uStack_80 = 0;
    local_78 = 0;
    *(undefined8 *)(param_1 + 0xf8) = uVar16;
    *(undefined8 *)(param_1 + 0xf0) = local_88;
    *(undefined8 *)(param_1 + 0x100) = uVar19;
    local_88 = 0;
    local_70 = &local_88;
    FUN_003dc3a8(&local_70);
  }
  else {
    puVar13 = (undefined8 *)plVar5[0x68];
    puVar14 = (undefined8 *)plVar5[0x69];
    if (puVar13 == puVar14) goto LAB_003dc2b0;
    puVar18 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x0;
    do {
      uVar16 = *puVar13;
      if (puVar17 < puVar18) {
        *puVar17 = uVar16;
        puVar7 = puVar12;
        puVar1 = puVar17;
      }
      else {
        lVar15 = (long)puVar17 - (long)puVar12;
        uVar4 = (lVar15 >> 3) + 1;
        if (uVar4 >> 0x3d != 0) {
          FUN_003dc2ec();
LAB_003dc2e4:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        uVar9 = (long)puVar18 - (long)puVar12 >> 2;
        if (uVar9 <= uVar4) {
          uVar9 = uVar4;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puVar18 - (long)puVar12)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar9 >> 0x3d != 0) goto LAB_003dc2e4;
          pvVar6 = operator_new(uVar9 << 3);
        }
        puVar1 = (undefined8 *)((long)pvVar6 + (lVar15 >> 3) * 8);
        *puVar1 = uVar16;
        puVar7 = puVar1;
        if ((long)puVar17 - (long)puVar12 != 0) {
          uVar4 = ((long)puVar17 - (long)puVar12) - 8;
          if ((((0x147 < uVar4) &&
               (uVar10 = (long)pvVar6 + lVar15 + -8, uVar10 - (uVar4 & 0xfffffffffffffff8) <= uVar10
               )) && ((undefined8 *)((long)(puVar17 + -1) - (uVar4 & 0xfffffffffffffff8)) <=
                      puVar17 + -1)) && (0x1f < (ulong)((long)puVar17 + (-lVar15 - (long)pvVar6))))
          {
            puVar7 = puVar1 + -2;
            puVar18 = puVar17 + -2;
            uVar4 = (uVar4 >> 3) + 1;
            uVar11 = uVar4 & 0x3ffffffffffffffc;
            puVar17 = puVar17 + -uVar11;
            uVar10 = uVar11;
            do {
              puVar3 = puVar18 + -1;
              uVar20 = puVar18[-2];
              uVar19 = puVar18[1];
              uVar16 = *puVar18;
              uVar10 = uVar10 - 4;
              puVar18 = puVar18 + -4;
              puVar7[-1] = *puVar3;
              puVar7[-2] = uVar20;
              puVar7[1] = uVar19;
              *puVar7 = uVar16;
              puVar7 = puVar7 + -4;
            } while (uVar10 != 0);
            puVar7 = puVar1 + -uVar11;
            if (uVar4 == uVar11) goto LAB_003dc11c;
          }
          do {
            puVar17 = puVar17 + -1;
            puVar7 = puVar7 + -1;
            *puVar7 = *puVar17;
          } while (puVar17 != puVar12);
        }
LAB_003dc11c:
        puVar18 = (undefined8 *)((long)pvVar6 + uVar9 * 8);
        if (puVar12 != (undefined8 *)0x0) {
          operator_delete(puVar12);
        }
      }
      puVar17 = puVar1 + 1;
      puVar13 = puVar13 + 1;
      puVar12 = puVar7;
    } while (puVar13 != puVar14);
    if (puVar17 != puVar7) goto LAB_003dc210;
  }
  if (puVar7 != (undefined8 *)0x0) {
    operator_delete(puVar7);
  }
LAB_003dc2b0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003dc2ec  FUN_003dc2ec =====

void FUN_003dc2ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003dc300  FUN_003dc300 =====

void FUN_003dc300(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    puVar3 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -1;
        pvVar4 = (void *)*puVar6;
        if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar4), iVar1 == 1)) {
          pvVar2 = *(void **)((long)pvVar4 + 0x20);
          if (pvVar2 != (void *)0x0) {
            *(void **)((long)pvVar4 + 0x28) = pvVar2;
            operator_delete(pvVar2);
          }
          pvVar2 = *(void **)((long)pvVar4 + 8);
          if (pvVar2 != (void *)0x0) {
            *(void **)((long)pvVar4 + 0x10) = pvVar2;
            operator_delete(pvVar2);
          }
          operator_delete(pvVar4);
        }
      } while (puVar6 != puVar5);
      puVar3 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar5;
    operator_delete(puVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 003dc3a8  FUN_003dc3a8 =====

void FUN_003dc3a8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)*puVar5;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  puVar7 = (undefined8 *)puVar5[1];
  puVar3 = puVar6;
  if (puVar7 != puVar6) {
    do {
      puVar7 = puVar7 + -1;
      pvVar4 = (void *)*puVar7;
      if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar4), iVar1 == 1)) {
        pvVar2 = *(void **)((long)pvVar4 + 0x20);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar4 + 0x28) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar2 = *(void **)((long)pvVar4 + 8);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar4 + 0x10) = pvVar2;
          operator_delete(pvVar2);
        }
        operator_delete(pvVar4);
      }
    } while (puVar7 != puVar6);
    puVar3 = *(undefined8 **)*param_1;
  }
  puVar5[1] = puVar6;
  operator_delete(puVar3);
  return;
}


// ===== 003dc464  rive::FollowPathConstraint::onAddedClean =====

/* rive::FollowPathConstraint::onAddedClean(rive::CoreContext*) */

undefined8 rive::FollowPathConstraint::onAddedClean(CoreContext *param_1)

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


// ===== 003dc4dc  rive::FollowPathConstraint::buildDependencies =====

/* rive::FollowPathConstraint::buildDependencies() */

void __thiscall rive::FollowPathConstraint::buildDependencies(FollowPathConstraint *this)

{
  long *plVar1;
  ulong uVar2;
  Component *this_00;
  long lVar3;
  
  plVar1 = *(long **)(this + 0x90);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,3);
    plVar1 = *(long **)(this + 0x90);
    if ((uVar2 & 1) == 0) {
      if ((plVar1 == (long *)0x0) ||
         (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xc), (uVar2 & 1) == 0)) goto LAB_003dc54c;
      lVar3 = *(long *)(*(Component **)(this + 0x90) + 0x140);
      this_00 = *(Component **)(this + 0x90);
      if (lVar3 != 0) {
        this_00 = (Component *)(lVar3 + 0x1a0);
      }
    }
    else {
      this_00 = (Component *)(plVar1 + 0x34);
    }
    Component::addDependent(this_00,(Component *)this);
  }
LAB_003dc54c:
  Component::addDependent((Component *)this,*(Component **)(this + 0x30));
  return;
}


// ===== 003dc560  FUN_003dc560 =====

void FUN_003dc560(long *param_1)

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


// ===== 003dc64c  FUN_003dc64c =====

void FUN_003dc64c(long *param_1)

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


// ===== 003dc720  FUN_003dc720 =====

undefined8 FUN_003dc720(void)

{
  return 0xa5;
}


// ===== 003dc728  FUN_003dc728 =====

undefined8 FUN_003dc728(undefined8 param_1,uint param_2)

{
  param_2 = param_2 & 0xffff;
  if ((((0xb < param_2 - 0x4f) || ((1 << (ulong)(param_2 - 0x4f & 0x1f) & 0x803U) == 0)) &&
      (param_2 != 10)) && (param_2 != 0xa5)) {
    return 0;
  }
  return 1;
}


// ===== 003dc768  FUN_003dc768 =====

undefined8 FUN_003dc768(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  if (param_2 < 0x16b) {
    if (param_2 == 0xb3) {
      uVar11 = 0;
      uVar4 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003dc8e0;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar2 = uVar11 & 0x3f;
        uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar9 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003dc8e0:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x98) = (int)uVar4;
      return 1;
    }
    if (param_2 == 0xb4) {
      uVar11 = 0;
      uVar4 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003dc8fc;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar2 = uVar11 & 0x3f;
        uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar9 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003dc8fc:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x9c) = (int)uVar4;
      return 1;
    }
LAB_003dc8d4:
    uVar3 = FUN_003b4320();
    return uVar3;
  }
  if (param_2 == 0x16d) {
    pcVar5 = (char *)param_3[2];
    lVar8 = *param_3 + param_3[1];
    if (0 < lVar8 - (long)pcVar5) {
      param_3[2] = (long)(pcVar5 + 1);
      *(bool *)(param_1 + 0xa5) = *pcVar5 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0xa5) = 0;
  }
  else {
    if (param_2 != 0x16c) {
      if (param_2 == 0x16b) {
        puVar7 = (undefined4 *)param_3[2];
        puVar6 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar6 - (long)puVar7 < 4) {
          uVar12 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar6 = puVar7 + 1;
          uVar12 = *puVar7;
        }
        *(undefined4 *)(param_1 + 0xa0) = uVar12;
        param_3[2] = (long)puVar6;
        return 1;
      }
      goto LAB_003dc8d4;
    }
    pcVar5 = (char *)param_3[2];
    lVar8 = *param_3 + param_3[1];
    if (0 < lVar8 - (long)pcVar5) {
      param_3[2] = (long)(pcVar5 + 1);
      *(bool *)(param_1 + 0xa4) = *pcVar5 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0xa4) = 0;
  }
  param_3[2] = lVar8;
  *(undefined1 *)(param_3 + 3) = 1;
  return 1;
}


// ===== 003dc94c  FUN_003dc94c =====

void FUN_003dc94c(void)

{
  return;
}


// ===== 003dc950  rive::ListFollowPathConstraint::distanceEndChanged =====

/* rive::ListFollowPathConstraint::distanceEndChanged() */

void __thiscall rive::ListFollowPathConstraint::distanceEndChanged(ListFollowPathConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003dc958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003dc95c  rive::ListFollowPathConstraint::distanceOffsetChanged =====

/* rive::ListFollowPathConstraint::distanceOffsetChanged() */

void __thiscall
rive::ListFollowPathConstraint::distanceOffsetChanged(ListFollowPathConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003dc964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003dc968  rive::ListFollowPathConstraint::constrainList =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ListFollowPathConstraint::constrainList(rive::ConstrainableList*) */

void __thiscall
rive::ListFollowPathConstraint::constrainList
          (ListFollowPathConstraint *this,ConstrainableList *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  Mat2D *pMVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Mat2D aMStack_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)param_1)(param_1);
  uStack_88 = puVar4[1];
  local_90 = *puVar4;
  local_80 = puVar4[2];
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_a8 = (void *)0x0;
  (**(code **)(*(long *)param_1 + 8))(param_1,&local_a8);
  uVar3 = _UNK_0024deb8;
  uVar2 = _DAT_0024deb0;
  fVar16 = 0.0;
  fVar10 = *(float *)(this + 0xa0);
  uVar7 = (long)local_a0 - (long)local_a8 >> 3;
  if (1 < uVar7) {
    fVar16 = (*(float *)(this + 0x108) - fVar10) / ((float)uVar7 + -1.0);
  }
  pvVar6 = local_a0;
  if (local_a0 != local_a8) {
    fVar12 = *(float *)(this + 0x10c);
    uVar9 = 0;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    do {
      pMVar8 = *(Mat2D **)((long)local_a8 + uVar9 * 8);
      if ((*(long **)(this + 0x90) == (long *)0x0) ||
         (uVar5 = (**(code **)(**(long **)(this + 0x90) + 0x80))(), (uVar5 & 1) != 0)) {
        local_b0 = 0;
        uStack_b8 = uVar3;
        local_c0 = uVar2;
LAB_003dcaf4:
        fVar11 = 0.0;
        fVar13 = 1.0;
      }
      else {
        fVar11 = (float)NEON_fmadd((float)(int)uVar9,fVar16,fVar12 + fVar10);
        FollowPathConstraint::targetTransform(fVar11);
        FollowPathConstraint::constrainHelper((Mat2D *)this,pMVar8,aMStack_70);
        if ((float)local_b0 == 0.0) goto LAB_003dcaf4;
        sincosf((float)local_b0,&fStack_c4,&local_c8);
        fVar11 = fStack_c4;
        fVar13 = local_c8;
      }
      uVar9 = uVar9 + 1;
      fVar15 = (float)NEON_fmadd(fVar13 * (float)uStack_b8,local_b0._4_4_,
                                 -(fVar11 * uStack_b8._4_4_));
      fVar14 = (float)NEON_fmadd(fVar11 * (float)uStack_b8,local_b0._4_4_,fVar13 * uStack_b8._4_4_);
      *(float *)pMVar8 = fVar13 * (float)uStack_b8;
      *(float *)(pMVar8 + 4) = fVar11 * (float)uStack_b8;
      *(undefined8 *)(pMVar8 + 0x10) = local_c0;
      if (local_b0._4_4_ == 0.0) {
        fVar14 = fVar13 * uStack_b8._4_4_;
        fVar15 = -(fVar11 * uStack_b8._4_4_);
      }
      *(float *)(pMVar8 + 8) = fVar15;
      *(float *)(pMVar8 + 0xc) = fVar14;
      pvVar6 = local_a8;
    } while (uVar7 != uVar9);
  }
  if (pvVar6 != (void *)0x0) {
    local_a0 = pvVar6;
    operator_delete(pvVar6);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003dcb44  rive::ListFollowPathConstraint::constrainAtOffset =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ListFollowPathConstraint::constrainAtOffset(rive::Mat2D const&, rive::Mat2D const&, float)
    */

void __thiscall
rive::ListFollowPathConstraint::constrainAtOffset
          (ListFollowPathConstraint *this,Mat2D *param_1,Mat2D *param_2,float param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x8;
  Mat2D aMStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(this + 0x90) == (long *)0x0) ||
     (uVar3 = (**(code **)(**(long **)(this + 0x90) + 0x80))(), (uVar3 & 1) != 0)) {
    in_x8[2] = 0;
    uVar2 = _DAT_0024deb0;
    in_x8[1] = _UNK_0024deb8;
    *in_x8 = uVar2;
  }
  else {
    FollowPathConstraint::targetTransform(param_3);
    FollowPathConstraint::constrainHelper((Mat2D *)this,param_1,aMStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003dcc04  rive::ListFollowPathConstraint::constrainList =====

/* non-virtual thunk to rive::ListFollowPathConstraint::constrainList(rive::ConstrainableList*) */

void __thiscall
rive::ListFollowPathConstraint::constrainList
          (ListFollowPathConstraint *this,ConstrainableList *param_1)

{
  constrainList(this + -0x110,param_1);
  return;
}


// ===== 003dcc0c  rive::ListFollowPathConstraint::buildDependencies =====

/* rive::ListFollowPathConstraint::buildDependencies() */

void __thiscall rive::ListFollowPathConstraint::buildDependencies(ListFollowPathConstraint *this)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  Component *this_00;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x90);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,3);
    plVar2 = *(long **)(this + 0x90);
    if ((uVar3 & 1) == 0) {
      if ((plVar2 == (long *)0x0) ||
         (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0xc), (uVar3 & 1) == 0)) goto LAB_003dcc7c;
      lVar4 = *(long *)(*(Component **)(this + 0x90) + 0x140);
      this_00 = *(Component **)(this + 0x90);
      if (lVar4 != 0) {
        this_00 = (Component *)(lVar4 + 0x1a0);
      }
    }
    else {
      this_00 = (Component *)(plVar2 + 0x34);
    }
    Component::addDependent(this_00,(Component *)this);
  }
LAB_003dcc7c:
  Component::addDependent((Component *)this,*(Component **)(this + 0x30));
  plVar2 = *(long **)(this + 0x30);
  sVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (sVar1 != 0x22f) {
    return;
  }
  ConstrainableList::addListConstraint
            ((ConstrainableList *)(plVar2 + 0x39),(ListConstraint *)(this + 0x110));
  return;
}


// ===== 003dccc8  FUN_003dccc8 =====

void FUN_003dccc8(long *param_1)

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


// ===== 003dcd9c  FUN_003dcd9c =====

undefined8 FUN_003dcd9c(void)

{
  return 0x271;
}


// ===== 003dcda4  FUN_003dcda4 =====

undefined8 FUN_003dcda4(undefined8 param_1,uint param_2)

{
  param_2 = param_2 & 0xffff;
  if (param_2 < 0xa5) {
    if (((0xb < param_2 - 0x4f) || ((1 << (ulong)(param_2 - 0x4f & 0x1f) & 0x803U) == 0)) &&
       (param_2 != 10)) {
      return 0;
    }
  }
  else if ((param_2 != 0xa5) && (param_2 != 0x271)) {
    return 0;
  }
  return 1;
}


// ===== 003dcdfc  FUN_003dcdfc =====

undefined8 FUN_003dcdfc(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0x379) {
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
    *(undefined4 *)(param_1 + 0x10c) = uVar4;
  }
  else {
    if (param_2 != 0x378) {
      uVar1 = FUN_003dc768();
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
    *(undefined4 *)(param_1 + 0x108) = uVar4;
  }
  param_3[2] = (long)puVar2;
  return 1;
}


// ===== 003dce8c  rive::ConstrainableList::from =====

/* rive::ConstrainableList::from(rive::Component*) */

Component * rive::ConstrainableList::from(Component *param_1)

{
  Component *pCVar1;
  short sVar2;
  
  sVar2 = (**(code **)(*(long *)param_1 + 0x10))();
  pCVar1 = param_1 + 0x1c8;
  if (sVar2 != 0x22f) {
    pCVar1 = (Component *)0x0;
  }
  return pCVar1;
}


// ===== 003dcec4  rive::ConstrainableList::addListConstraint =====

/* rive::ConstrainableList::addListConstraint(rive::ListConstraint*) */

void __thiscall
rive::ConstrainableList::addListConstraint(ConstrainableList *this,ListConstraint *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x10);
  if (puVar10 < *(undefined8 **)(this + 0x18)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003dd004;
  }
  puVar9 = *(undefined8 **)(this + 8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003dd028();
LAB_003dd024:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x18) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003dd024;
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
      if (uVar6 == uVar7) goto LAB_003dcff0;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 8);
  }
LAB_003dcff0:
  *(undefined8 **)(this + 8) = puVar4;
  *(undefined8 **)(this + 0x10) = puVar13;
  *(void **)(this + 0x18) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003dd004:
  *(undefined8 **)(this + 0x10) = puVar13;
  return;
}


// ===== 003dd028  FUN_003dd028 =====

void FUN_003dd028(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003dd03c  rive::IKConstraint::buildDependencies =====

/* rive::IKConstraint::buildDependencies() */

void __thiscall rive::IKConstraint::buildDependencies(IKConstraint *this)

{
  if (*(Component **)(this + 0x90) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x90),*(Component **)(this + 0x30));
    if (*(Component **)(this + 0x90) != (Component *)0x0) {
      Component::addDependent(*(Component **)(this + 0x90),(Component *)this);
      return;
    }
  }
  return;
}


// ===== 003dd080  rive::IKConstraint::onAddedClean =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::IKConstraint::onAddedClean(rive::CoreContext*) */

undefined8 rive::IKConstraint::onAddedClean(CoreContext *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  Component *this;
  long lVar19;
  Bone *pBVar20;
  ulong uVar21;
  Component *pCVar22;
  int iVar23;
  long *plVar24;
  Component *pCVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),0x28);
  if ((uVar5 & 1) == 0) {
    uVar9 = 2;
  }
  else {
    iVar23 = *(int *)(param_1 + 0x9c);
    lVar19 = *(long *)(param_1 + 0x30);
    plVar6 = (long *)operator_new(8);
    plVar10 = plVar6 + 1;
    *plVar6 = lVar19;
    pBVar20 = (Bone *)(lVar19 + 0x30);
    uVar5 = (**(code **)(**(long **)pBVar20 + 0x18))(*(long **)pBVar20,0x28);
    plVar24 = plVar10;
    if ((uVar5 & 1) != 0) {
      for (; iVar23 != 0; iVar23 = iVar23 + -1) {
        pBVar20 = *(Bone **)pBVar20;
        Bone::addPeerConstraint(pBVar20,(Constraint *)param_1);
        if (plVar10 < plVar24) {
          *plVar10 = (long)pBVar20;
          plVar17 = plVar6;
          plVar1 = plVar10;
        }
        else {
          lVar19 = (long)plVar10 - (long)plVar6;
          uVar5 = (lVar19 >> 3) + 1;
          if (uVar5 >> 0x3d != 0) {
            FUN_003dd530();
            goto LAB_003dd528;
          }
          uVar14 = (long)plVar24 - (long)plVar6 >> 2;
          if (uVar14 <= uVar5) {
            uVar14 = uVar5;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plVar24 - (long)plVar6)) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar14 >> 0x3d != 0) goto LAB_003dd528;
            pvVar7 = operator_new(uVar14 << 3);
          }
          plVar1 = (long *)((long)pvVar7 + (lVar19 >> 3) * 8);
          plVar24 = (long *)((long)pvVar7 + uVar14 * 8);
          *plVar1 = (long)pBVar20;
          plVar17 = plVar1;
          if ((long)plVar10 - (long)plVar6 != 0) {
            uVar5 = ((long)plVar10 - (long)plVar6) - 8;
            if ((((uVar5 < 0x148) ||
                 (uVar14 = (long)pvVar7 + lVar19 + -8,
                 uVar14 < uVar14 - (uVar5 & 0xfffffffffffffff8))) ||
                (plVar10 + -1 < (long *)((long)(plVar10 + -1) - (uVar5 & 0xfffffffffffffff8)))) ||
               ((ulong)((long)plVar10 + (-lVar19 - (long)pvVar7)) < 0x20)) {
LAB_003dd190:
              do {
                plVar10 = plVar10 + -1;
                plVar17 = plVar17 + -1;
                *plVar17 = *plVar10;
              } while (plVar10 != plVar6);
            }
            else {
              plVar17 = plVar1 + -2;
              plVar18 = plVar10 + -2;
              uVar5 = (uVar5 >> 3) + 1;
              uVar21 = uVar5 & 0x3ffffffffffffffc;
              plVar10 = plVar10 + -uVar21;
              uVar14 = uVar21;
              do {
                plVar3 = plVar18 + -1;
                lVar27 = plVar18[-2];
                lVar16 = plVar18[1];
                lVar19 = *plVar18;
                uVar14 = uVar14 - 4;
                plVar18 = plVar18 + -4;
                plVar17[-1] = *plVar3;
                plVar17[-2] = lVar27;
                plVar17[1] = lVar16;
                *plVar17 = lVar19;
                plVar17 = plVar17 + -4;
              } while (uVar14 != 0);
              plVar17 = plVar1 + -uVar21;
              if (uVar5 != uVar21) goto LAB_003dd190;
            }
            if (plVar6 == (long *)0x0) goto LAB_003dd1b0;
          }
          operator_delete(plVar6);
        }
LAB_003dd1b0:
        plVar10 = plVar1 + 1;
        pBVar20 = pBVar20 + 0x30;
        uVar5 = (**(code **)(**(long **)pBVar20 + 0x18))(*(long **)pBVar20,0x28);
        plVar6 = plVar17;
        if ((uVar5 & 1) == 0) break;
      }
    }
    uVar26 = _UNK_00281c00;
    uVar9 = _DAT_00281bf8;
    lVar19 = *(long *)(param_1 + 0xa0);
    puVar12 = *(undefined8 **)(param_1 + 0xa8);
    uVar21 = (long)plVar10 - (long)plVar6;
    uVar5 = (long)(uVar21 * 0x20000000) >> 0x20;
    lVar16 = (long)puVar12 - lVar19 >> 3;
    bVar4 = uVar5 < (ulong)(lVar16 * -0x71c71c71c71c71c7);
    uVar14 = uVar5 + lVar16 * 0x71c71c71c71c71c7;
    iVar23 = (int)(uVar21 * 0x20000000 >> 0x20);
    if (bVar4 || uVar14 == 0) {
      if (bVar4) {
        *(long *)(param_1 + 0xa8) = lVar19 + (long)iVar23 * 0x48;
      }
    }
    else if ((ulong)((*(long *)(param_1 + 0xb0) - (long)puVar12 >> 3) * -0x71c71c71c71c71c7) <
             uVar14) {
      if (0x38e38e38e38e38e < uVar5) {
        FUN_003dd544();
                    /* WARNING: Subroutine does not return */
        FUN_0031fb04("vector");
      }
      lVar16 = *(long *)(param_1 + 0xb0) - lVar19 >> 3;
      uVar14 = lVar16 * 0x1c71c71c71c71c72;
      if (uVar14 < uVar5 || uVar14 - uVar5 == 0) {
        uVar14 = uVar5;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar16 * -0x71c71c71c71c71c7)) {
        uVar14 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar14) {
LAB_003dd528:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar7 = operator_new(uVar14 * 0x48);
      uVar26 = _UNK_00281c00;
      uVar9 = _DAT_00281bf8;
      uVar28 = NEON_fmov(0x3f800000,4);
      puVar11 = (undefined8 *)((long)pvVar7 + (long)iVar23 * 0x48);
      puVar13 = (undefined8 *)((long)pvVar7 + ((long)puVar12 - lVar19));
      puVar12 = puVar13;
      do {
        puVar12[8] = 0;
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        puVar12[5] = 0;
        puVar12[4] = 0;
        puVar12[7] = 0;
        puVar12[6] = 0;
        *(undefined8 *)((long)puVar12 + 0x1c) = uVar28;
        *(undefined8 *)((long)puVar12 + 0x3c) = 0;
        *(undefined8 *)((long)puVar12 + 0x34) = uVar26;
        *(undefined8 *)((long)puVar12 + 0x2c) = uVar9;
        puVar12 = puVar12 + 9;
      } while (puVar12 != puVar11);
      pvVar2 = *(void **)(param_1 + 0xa0);
      pvVar8 = *(void **)(param_1 + 0xa8);
      if (pvVar8 != pvVar2) {
        lVar19 = 0;
        do {
          lVar16 = lVar19 + -0x48;
          uVar26 = *(undefined8 *)((long)pvVar8 + lVar19 + -0x40);
          uVar9 = *(undefined8 *)((long)pvVar8 + lVar19 + -0x48);
          *(undefined4 *)((long)puVar13 + lVar19 + -0x38) =
               *(undefined4 *)((long)pvVar8 + lVar19 + -0x38);
          *(undefined8 *)((long)puVar13 + lVar19 + -0x40) = uVar26;
          *(undefined8 *)((long)puVar13 + lVar19 + -0x48) = uVar9;
          uVar9 = *(undefined8 *)((long)pvVar8 + lVar19 + -0x34);
          *(undefined8 *)((long)puVar13 + lVar19 + -0x2c) =
               *(undefined8 *)((long)pvVar8 + lVar19 + -0x2c);
          *(undefined8 *)((long)puVar13 + lVar19 + -0x34) = uVar9;
          *(undefined8 *)((long)puVar13 + lVar19 + -0x24) =
               *(undefined8 *)((long)pvVar8 + lVar19 + -0x24);
          uVar26 = *(undefined8 *)((long)pvVar8 + lVar19 + -0x14);
          uVar9 = *(undefined8 *)((long)pvVar8 + lVar19 + -0x1c);
          *(undefined8 *)((long)puVar13 + lVar19 + -0xc) =
               *(undefined8 *)((long)pvVar8 + lVar19 + -0xc);
          *(undefined8 *)((long)puVar13 + lVar19 + -0x14) = uVar26;
          *(undefined8 *)((long)puVar13 + lVar19 + -0x1c) = uVar9;
          lVar19 = lVar16;
        } while ((void *)((long)pvVar8 + lVar16) != pvVar2);
        pvVar8 = *(void **)(param_1 + 0xa0);
        puVar13 = (undefined8 *)((long)puVar13 + lVar16);
      }
      *(undefined8 **)(param_1 + 0xa0) = puVar13;
      *(undefined8 **)(param_1 + 0xa8) = puVar11;
      *(void **)(param_1 + 0xb0) = (void *)((long)pvVar7 + uVar14 * 0x48);
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
    }
    else {
      uVar28 = NEON_fmov(0x3f800000,4);
      puVar13 = puVar12 + uVar14 * 9;
      do {
        puVar12[8] = 0;
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        puVar12[5] = 0;
        puVar12[4] = 0;
        puVar12[7] = 0;
        puVar12[6] = 0;
        *(undefined8 *)((long)puVar12 + 0x1c) = uVar28;
        *(undefined8 *)((long)puVar12 + 0x3c) = 0;
        *(undefined8 *)((long)puVar12 + 0x34) = uVar26;
        *(undefined8 *)((long)puVar12 + 0x2c) = uVar9;
        puVar12 = puVar12 + 9;
      } while (puVar12 != puVar13);
      *(undefined8 **)(param_1 + 0xa8) = puVar13;
    }
    if (plVar10 != plVar6) {
      iVar23 = 0;
      puVar15 = (undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
      do {
        plVar10 = plVar10 + -1;
        lVar19 = *plVar10;
        puVar15[-4] = iVar23;
        iVar23 = iVar23 + 1;
        *(long *)(puVar15 + -2) = lVar19;
        *puVar15 = 0;
        puVar15 = puVar15 + 0x12;
      } while (plVar10 != plVar6);
    }
    if (1 < (int)(uVar21 >> 3)) {
      this = *(Component **)(param_1 + 0x30);
      uVar5 = 1;
      do {
        puVar12 = *(undefined8 **)(plVar6[uVar5] + 0x88);
        puVar13 = *(undefined8 **)(plVar6[uVar5] + 0x90);
        if (puVar12 != puVar13) {
          pCVar25 = (Component *)plVar6[uVar5 - 1];
          do {
            pCVar22 = (Component *)*puVar12;
            uVar14 = (**(code **)(*(long *)pCVar22 + 0x18))(pCVar22,0x26);
            if (((uVar14 & 1) != 0) && (pCVar22 != pCVar25)) {
              Component::addDependent(this,pCVar22);
            }
            puVar12 = puVar12 + 1;
          } while (puVar12 != puVar13);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != (uVar21 >> 3 & 0xffffffff));
    }
    if (plVar6 != (long *)0x0) {
      operator_delete(plVar6);
    }
    uVar9 = 0;
  }
  return uVar9;
}


// ===== 003dd530  FUN_003dd530 =====

void FUN_003dd530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003dd544  FUN_003dd544 =====

void FUN_003dd544(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003dd558  rive::IKConstraint::markConstraintDirty =====

/* rive::IKConstraint::markConstraintDirty() */

void __thiscall rive::IKConstraint::markConstraintDirty(IKConstraint *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Component *pCVar5;
  ulong uVar6;
  
  pCVar5 = *(Component **)(this + 0x30);
  if ((*(ushort *)(pCVar5 + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(pCVar5 + 0x60) = *(ushort *)(pCVar5 + 0x60) | 0x40;
    (**(code **)(*(long *)pCVar5 + 0x70))(pCVar5);
    lVar3 = *(long *)(pCVar5 + 0x80);
    uVar1 = *(uint *)(pCVar5 + 0x38);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
    Component::addDirt(pCVar5,0x80,1);
  }
  iVar2 = (int)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0) >> 3) * 0x38e38e39;
  if (1 < iVar2) {
    uVar6 = (ulong)(iVar2 - 1);
    lVar3 = 8;
    do {
      pCVar5 = *(Component **)(*(long *)(this + 0xa0) + lVar3);
      if ((*(ushort *)(pCVar5 + 0x60) >> 6 & 1) == 0) {
        *(ushort *)(pCVar5 + 0x60) = *(ushort *)(pCVar5 + 0x60) | 0x40;
        (**(code **)(*(long *)pCVar5 + 0x70))(pCVar5);
        lVar4 = *(long *)(pCVar5 + 0x80);
        uVar1 = *(uint *)(pCVar5 + 0x38);
        *(undefined1 *)(lVar4 + 0xc32) = 1;
        *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
          *(uint *)(lVar4 + 0xbd4) = uVar1;
        }
        Component::addDirt(pCVar5,0x80,1);
      }
      uVar6 = uVar6 - 1;
      lVar3 = lVar3 + 0x48;
    } while (uVar6 != 0);
  }
  return;
}


// ===== 003dd68c  rive::IKConstraint::solve1 =====

/* rive::IKConstraint::solve1(rive::IKConstraint::BoneChainLink*, rive::Vec2D const&) */

void __thiscall rive::IKConstraint::solve1(IKConstraint *this,BoneChainLink *param_1,Vec2D *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_38;
  float local_34;
  
  lVar5 = *(long *)(param_1 + 8);
  fVar6 = (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(lVar5 + 0xb4);
  fVar7 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) -
          (float)((ulong)*(undefined8 *)(lVar5 + 0xb4) >> 0x20);
  fVar6 = atan2f((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar7 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) * fVar6,
                 (float)*(undefined8 *)(param_1 + 0x34) * fVar7 +
                 (float)*(undefined8 *)(param_1 + 0x2c) * fVar6);
  plVar4 = *(long **)(lVar5 + 0x30);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0x5b);
  if (fVar6 == 0.0) {
    local_34 = 0.0;
    local_38 = 1.0;
  }
  else {
    sincosf(fVar6,&local_34,&local_38);
  }
  *(float *)(lVar5 + 0xd0) = local_38;
  *(float *)(lVar5 + 0xd4) = local_34;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(float *)(lVar5 + 0xd8) = -local_34;
  *(float *)(lVar5 + 0xdc) = local_38;
  *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(lVar5 + 0xe4) = *(undefined4 *)(param_1 + 0x18);
  fVar7 = (float)*(undefined8 *)(lVar5 + 0xd0) * (float)*(undefined8 *)(param_1 + 0x1c);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 0xd0) >> 0x20) *
           (float)*(undefined8 *)(param_1 + 0x1c);
  fVar8 = (float)*(undefined8 *)(lVar5 + 0xd8) * (float)*(undefined8 *)(param_1 + 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar5 + 0xd8) >> 0x20) *
          (float)*(undefined8 *)(param_1 + 0x20);
  *(ulong *)(lVar5 + 0xd8) = CONCAT44(fVar9,fVar8);
  *(ulong *)(lVar5 + 0xd0) = CONCAT44(fVar10,fVar7);
  fVar12 = *(float *)(param_1 + 0x28);
  if (fVar12 != 0.0) {
    *(ulong *)(lVar5 + 0xd8) = CONCAT44(fVar9 + fVar10 * fVar12,fVar8 + fVar7 * fVar12);
    fVar7 = (float)*(undefined8 *)(lVar5 + 0xd0);
  }
  pauVar1 = (undefined1 (*) [12])(lVar5 + 0xd4);
  fVar8 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  puVar2 = (undefined8 *)((long)plVar4 + 0xa4);
  if ((uVar3 & 1) == 0) {
    puVar2 = (undefined8 *)0x686140;
  }
  fVar13 = (float)*puVar2;
  fVar14 = (float)((ulong)*puVar2 >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 0xe0) >> 0x20);
  fVar12 = (float)puVar2[1];
  fVar11 = (float)((ulong)puVar2[1] >> 0x20);
  fVar9 = (float)*(undefined8 *)(lVar5 + 0xe0);
  *(ulong *)(lVar5 + 0xb4) =
       CONCAT44((float)((ulong)puVar2[2] >> 0x20) + fVar11 * fVar10 + fVar14 * fVar9,
                (float)puVar2[2] + fVar12 * fVar10 + fVar13 * fVar9);
  *(ulong *)(lVar5 + 0xac) =
       CONCAT44(fVar11 * SUB124(*pauVar1,8) + fVar8 * fVar14,
                fVar12 * SUB124(*pauVar1,8) + fVar8 * fVar13);
  *(ulong *)(lVar5 + 0xa4) =
       CONCAT44(fVar11 * SUB124(*pauVar1,0) + fVar7 * fVar14,
                fVar12 * SUB124(*pauVar1,0) + fVar7 * fVar13);
  *(float *)(param_1 + 0x10) = fVar6;
  return;
}


// ===== 003dd7e0  rive::IKConstraint::constrainRotation =====

/* rive::IKConstraint::constrainRotation(rive::IKConstraint::BoneChainLink&, float) */

void __thiscall
rive::IKConstraint::constrainRotation(IKConstraint *this,BoneChainLink *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_38;
  float local_34;
  
  lVar5 = *(long *)(param_1 + 8);
  plVar4 = *(long **)(lVar5 + 0x30);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0x5b);
  if (param_2 == 0.0) {
    local_34 = 0.0;
    local_38 = 1.0;
  }
  else {
    sincosf(param_2,&local_34,&local_38);
  }
  *(float *)(lVar5 + 0xd0) = local_38;
  *(float *)(lVar5 + 0xd4) = local_34;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(float *)(lVar5 + 0xd8) = -local_34;
  *(float *)(lVar5 + 0xdc) = local_38;
  *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(lVar5 + 0xe4) = *(undefined4 *)(param_1 + 0x18);
  fVar9 = (float)*(undefined8 *)(lVar5 + 0xd0) * (float)*(undefined8 *)(param_1 + 0x1c);
  fVar11 = (float)((ulong)*(undefined8 *)(lVar5 + 0xd0) >> 0x20) *
           (float)*(undefined8 *)(param_1 + 0x1c);
  fVar6 = (float)*(undefined8 *)(lVar5 + 0xd8) * (float)*(undefined8 *)(param_1 + 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)(lVar5 + 0xd8) >> 0x20) *
          (float)*(undefined8 *)(param_1 + 0x20);
  *(ulong *)(lVar5 + 0xd8) = CONCAT44(fVar7,fVar6);
  *(ulong *)(lVar5 + 0xd0) = CONCAT44(fVar11,fVar9);
  fVar13 = *(float *)(param_1 + 0x28);
  if (fVar13 != 0.0) {
    *(ulong *)(lVar5 + 0xd8) = CONCAT44(fVar7 + fVar11 * fVar13,fVar6 + fVar9 * fVar13);
    fVar9 = (float)*(undefined8 *)(lVar5 + 0xd0);
  }
  fVar6 = (float)((ulong)*(undefined8 *)(lVar5 + 0xd4) >> 0x20);
  puVar1 = (undefined8 *)((long)plVar4 + 0xa4);
  if ((uVar3 & 1) == 0) {
    puVar1 = (undefined8 *)0x686140;
  }
  fVar7 = (float)*(undefined8 *)(lVar5 + 0xd4);
  fVar11 = (float)*(undefined8 *)(lVar5 + 0xdc);
  fVar10 = (float)*puVar1;
  fVar12 = (float)((ulong)*puVar1 >> 0x20);
  fVar15 = (float)((ulong)*(undefined8 *)(lVar5 + 0xe0) >> 0x20);
  fVar13 = (float)puVar1[1];
  fVar8 = (float)((ulong)puVar1[1] >> 0x20);
  fVar14 = (float)*(undefined8 *)(lVar5 + 0xe0);
  uVar2 = puVar1[2];
  *(ulong *)(lVar5 + 0xac) =
       CONCAT44(fVar8 * fVar11 + fVar6 * fVar12,fVar13 * fVar11 + fVar6 * fVar10);
  *(ulong *)(lVar5 + 0xa4) =
       CONCAT44(fVar8 * fVar7 + fVar9 * fVar12,fVar13 * fVar7 + fVar9 * fVar10);
  *(ulong *)(lVar5 + 0xb4) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar8 * fVar15 + fVar12 * fVar14,
                (float)uVar2 + fVar13 * fVar15 + fVar10 * fVar14);
  return;
}


// ===== 003dd914  rive::IKConstraint::solve2 =====

/* rive::IKConstraint::solve2(rive::IKConstraint::BoneChainLink*,
   rive::IKConstraint::BoneChainLink*, rive::Vec2D const&) */

void __thiscall
rive::IKConstraint::solve2
          (IKConstraint *this,BoneChainLink *param_1,BoneChainLink *param_2,Vec2D *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  IKConstraint IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
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
  float fVar24;
  float __x;
  float __y;
  float local_78;
  float fStack_74;
  float local_38;
  float fStack_34;
  
  lVar9 = *(long *)(param_1 + 8);
  fVar17 = (float)*(undefined8 *)param_3;
  fVar23 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar18 = (float)*(undefined8 *)(param_1 + 0x34);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  lVar10 = *(long *)(param_2 + 8);
  lVar8 = *(long *)(this + 0xa0) + (long)*(int *)param_1 * 0x48;
  fVar20 = (float)*(undefined8 *)(param_1 + 0x2c);
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x3c);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20);
  lVar11 = *(long *)(lVar8 + 0x50);
  fVar15 = fVar13 + fVar18 * *(float *)(lVar9 + 0xb8) + fVar20 * *(float *)(lVar9 + 0xb4);
  fVar16 = fVar12 + fVar14 * *(float *)(lVar9 + 0xb8) + fVar21 * *(float *)(lVar9 + 0xb4);
  __x = (fVar13 + fVar18 * fVar23 + fVar20 * fVar17) - fVar15;
  __y = (fVar12 + fVar14 * fVar23 + fVar21 * fVar17) - fVar16;
  fVar17 = (float)*(undefined8 *)(lVar10 + 0x110);
  fVar22 = (float)NEON_fmadd(__x,__x,__y * __y);
  fVar23 = (float)*(undefined8 *)(lVar10 + 0xb4) +
           (float)*(undefined8 *)(lVar10 + 0xac) * 0.0 +
           (float)*(undefined8 *)(lVar10 + 0xa4) * fVar17;
  fVar24 = (float)((ulong)*(undefined8 *)(lVar10 + 0xb4) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar10 + 0xac) >> 0x20) * 0.0 +
           (float)((ulong)*(undefined8 *)(lVar10 + 0xa4) >> 0x20) * fVar17;
  fVar22 = SQRT(fVar22);
  fVar17 = fVar13 + fVar18 * *(float *)(lVar11 + 0xb8) + fVar20 * *(float *)(lVar11 + 0xb4);
  fVar19 = fVar12 + fVar14 * *(float *)(lVar11 + 0xb8) + fVar21 * *(float *)(lVar11 + 0xb4);
  fVar15 = fVar17 - fVar15;
  fVar16 = fVar19 - fVar16;
  fVar17 = (fVar13 + fVar18 * fVar24 + fVar20 * fVar23) - fVar17;
  fVar19 = (fVar12 + fVar14 * fVar24 + fVar21 * fVar23) - fVar19;
  uVar4 = NEON_fsqrt(CONCAT44(fVar16 * fVar16 + fVar15 * fVar15,fVar19 * fVar19 + fVar17 * fVar17),4
                    );
  fVar17 = (float)uVar4;
  fVar13 = (float)((ulong)uVar4 >> 0x20);
  uVar4 = NEON_fmov(0x3f800000,4);
  uVar5 = NEON_fminnm(CONCAT44((fVar13 * fVar13 + -fVar17 * fVar17 + fVar22 * fVar22) /
                               ((fVar13 + fVar13) * fVar22),
                               (fVar13 * fVar13 + fVar17 * fVar17 + -fVar22 * fVar22) /
                               ((fVar17 + fVar17) * fVar13)),uVar4,4);
  fVar17 = (float)((ulong)uVar5 >> 0x20);
  uVar4 = NEON_fmov(0xbf800000,4);
  uVar7 = NEON_fcmgt(uVar5,uVar4,4);
  if ((uVar7 & 0x100000000) == 0) {
    fVar17 = -1.0;
  }
  fVar17 = acosf(fVar17);
  fVar13 = (float)uVar5;
  if ((uVar7 & 1) == 0) {
    fVar13 = -1.0;
  }
  fVar13 = acosf(fVar13);
  if (*(long *)(lVar10 + 0x30) == lVar9) {
    IVar3 = this[0x98];
    fVar19 = atan2f(__y,__x);
    fVar23 = fVar17 + fVar19;
    fVar12 = fVar13 + -3.1415927;
    if (IVar3 != (IKConstraint)0x0) {
      fVar23 = fVar19 - fVar17;
      fVar12 = 3.1415927 - fVar13;
    }
  }
  else {
    lVar9 = *(long *)(this + 0xa0) + (long)*(int *)param_1 * 0x48;
    fVar23 = fVar23 - (float)*(undefined8 *)(lVar11 + 0xb4);
    fVar24 = fVar24 - (float)((ulong)*(undefined8 *)(lVar11 + 0xb4) >> 0x20);
    uVar4 = *(undefined8 *)(lVar9 + 0xc4);
    uVar5 = *(undefined8 *)(lVar9 + 0xbc);
    fVar19 = atan2f((float)((ulong)uVar4 >> 0x20) * fVar24 + (float)((ulong)uVar5 >> 0x20) * fVar23,
                    (float)uVar4 * fVar24 + (float)uVar5 * fVar23);
    IVar3 = this[0x98];
    fVar23 = atan2f(__y,__x);
    fVar12 = fVar13 + -3.1415927;
    if (IVar3 != (IKConstraint)0x0) {
      fVar17 = -fVar17;
      fVar12 = 3.1415927 - fVar13;
    }
    fVar23 = fVar23 + fVar17;
    fVar12 = fVar12 - fVar19;
  }
  lVar9 = *(long *)(param_1 + 8);
  plVar6 = *(long **)(lVar9 + 0x30);
  uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x5b);
  puVar1 = (undefined8 *)0x686140;
  puVar2 = (undefined8 *)((long)plVar6 + 0xa4);
  if ((uVar7 & 1) == 0) {
    puVar2 = puVar1;
  }
  if (fVar23 == 0.0) {
    fStack_34 = 0.0;
    local_38 = 1.0;
  }
  else {
    sincosf(fVar23,&fStack_34,&local_38);
  }
  *(float *)(lVar9 + 0xd0) = local_38;
  *(float *)(lVar9 + 0xd4) = fStack_34;
  *(undefined8 *)(lVar9 + 0xe0) = 0;
  *(float *)(lVar9 + 0xd8) = -fStack_34;
  *(float *)(lVar9 + 0xdc) = local_38;
  *(undefined4 *)(lVar9 + 0xe0) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(lVar9 + 0xe4) = *(undefined4 *)(param_1 + 0x18);
  fVar17 = (float)*(undefined8 *)(lVar9 + 0xd0) * (float)*(undefined8 *)(param_1 + 0x1c);
  fVar24 = (float)((ulong)*(undefined8 *)(lVar9 + 0xd0) >> 0x20) *
           (float)*(undefined8 *)(param_1 + 0x1c);
  fVar13 = (float)*(undefined8 *)(lVar9 + 0xd8) * (float)*(undefined8 *)(param_1 + 0x20);
  fVar19 = (float)((ulong)*(undefined8 *)(lVar9 + 0xd8) >> 0x20) *
           (float)*(undefined8 *)(param_1 + 0x20);
  *(ulong *)(lVar9 + 0xd8) = CONCAT44(fVar19,fVar13);
  *(ulong *)(lVar9 + 0xd0) = CONCAT44(fVar24,fVar17);
  fVar18 = *(float *)(param_1 + 0x28);
  if (fVar18 != 0.0) {
    *(ulong *)(lVar9 + 0xd8) = CONCAT44(fVar19 + fVar24 * fVar18,fVar13 + fVar17 * fVar18);
    fVar17 = (float)*(undefined8 *)(lVar9 + 0xd0);
  }
  fVar24 = (float)puVar2[1];
  fVar18 = (float)((ulong)puVar2[1] >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)(lVar9 + 0xd4) >> 0x20);
  fVar13 = (float)*(undefined8 *)(lVar9 + 0xd4);
  fVar19 = (float)*(undefined8 *)(lVar9 + 0xdc);
  fVar15 = (float)*puVar2;
  fVar16 = (float)((ulong)*puVar2 >> 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)(lVar9 + 0xe0) >> 0x20);
  fVar22 = (float)*(undefined8 *)(lVar9 + 0xe0);
  uVar4 = puVar2[2];
  *(ulong *)(lVar9 + 0xac) =
       CONCAT44(fVar18 * fVar19 + fVar14 * fVar16,fVar24 * fVar19 + fVar14 * fVar15);
  *(ulong *)(lVar9 + 0xa4) =
       CONCAT44(fVar18 * fVar13 + fVar17 * fVar16,fVar24 * fVar13 + fVar17 * fVar15);
  *(ulong *)(lVar9 + 0xb4) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar18 * fVar20 + fVar16 * fVar22,
                (float)uVar4 + fVar24 * fVar20 + fVar15 * fVar22);
  lVar9 = *(long *)(lVar8 + 0x50);
  plVar6 = *(long **)(lVar9 + 0x30);
  uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x5b);
  puVar2 = (undefined8 *)((long)plVar6 + 0xa4);
  if ((uVar7 & 1) == 0) {
    puVar2 = puVar1;
  }
  if (fVar12 == 0.0) {
    fStack_74 = 0.0;
    local_78 = 1.0;
  }
  else {
    sincosf(fVar12,&fStack_74,&local_78);
  }
  *(float *)(lVar9 + 0xd0) = local_78;
  *(float *)(lVar9 + 0xd4) = fStack_74;
  *(undefined8 *)(lVar9 + 0xe0) = 0;
  *(float *)(lVar9 + 0xd8) = -fStack_74;
  *(float *)(lVar9 + 0xdc) = local_78;
  *(undefined4 *)(lVar9 + 0xe0) = *(undefined4 *)(lVar8 + 0x5c);
  *(undefined4 *)(lVar9 + 0xe4) = *(undefined4 *)(lVar8 + 0x60);
  fVar17 = (float)*(undefined8 *)(lVar8 + 100);
  fVar13 = (float)*(undefined8 *)(lVar9 + 0xd0) * fVar17;
  fVar17 = (float)((ulong)*(undefined8 *)(lVar9 + 0xd0) >> 0x20) * fVar17;
  fVar24 = (float)*(undefined8 *)(lVar8 + 0x68);
  fVar19 = (float)*(undefined8 *)(lVar9 + 0xd8) * fVar24;
  fVar24 = (float)((ulong)*(undefined8 *)(lVar9 + 0xd8) >> 0x20) * fVar24;
  *(ulong *)(lVar9 + 0xd8) = CONCAT44(fVar24,fVar19);
  *(ulong *)(lVar9 + 0xd0) = CONCAT44(fVar17,fVar13);
  fVar18 = *(float *)(lVar8 + 0x70);
  if (fVar18 != 0.0) {
    *(ulong *)(lVar9 + 0xd8) = CONCAT44(fVar24 + fVar17 * fVar18,fVar19 + fVar13 * fVar18);
    fVar13 = (float)*(undefined8 *)(lVar9 + 0xd0);
  }
  fVar24 = (float)puVar2[1];
  fVar18 = (float)((ulong)puVar2[1] >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)(lVar9 + 0xd4) >> 0x20);
  fVar17 = (float)*(undefined8 *)(lVar9 + 0xd4);
  fVar19 = (float)*(undefined8 *)(lVar9 + 0xdc);
  fVar15 = (float)*puVar2;
  fVar16 = (float)((ulong)*puVar2 >> 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)(lVar9 + 0xe0) >> 0x20);
  fVar22 = (float)*(undefined8 *)(lVar9 + 0xe0);
  uVar4 = puVar2[2];
  *(ulong *)(lVar9 + 0xac) =
       CONCAT44(fVar18 * fVar19 + fVar14 * fVar16,fVar24 * fVar19 + fVar14 * fVar15);
  *(ulong *)(lVar9 + 0xa4) =
       CONCAT44(fVar18 * fVar17 + fVar13 * fVar16,fVar24 * fVar17 + fVar13 * fVar15);
  *(ulong *)(lVar9 + 0xb4) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar18 * fVar20 + fVar16 * fVar22,
                (float)uVar4 + fVar24 * fVar20 + fVar15 * fVar22);
  if ((BoneChainLink *)(lVar8 + 0x48) != param_2) {
    lVar9 = *(long *)(param_2 + 8);
    plVar6 = *(long **)(lVar9 + 0x30);
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x5b);
    fVar17 = (float)*(undefined8 *)(lVar9 + 0xd0);
    fVar13 = (float)((ulong)*(undefined8 *)(lVar9 + 0xd4) >> 0x20);
    puVar2 = (undefined8 *)((long)plVar6 + 0xa4);
    if ((uVar7 & 1) == 0) {
      puVar2 = puVar1;
    }
    fVar18 = (float)puVar2[1];
    fVar15 = (float)((ulong)puVar2[1] >> 0x20);
    fVar19 = (float)*(undefined8 *)(lVar9 + 0xd4);
    fVar24 = (float)*(undefined8 *)(lVar9 + 0xdc);
    fVar14 = (float)*puVar2;
    fVar16 = (float)((ulong)*puVar2 >> 0x20);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar9 + 0xe0) >> 0x20);
    fVar22 = (float)*(undefined8 *)(lVar9 + 0xe0);
    uVar4 = puVar2[2];
    *(ulong *)(lVar9 + 0xac) =
         CONCAT44(fVar15 * fVar24 + fVar13 * fVar16,fVar18 * fVar24 + fVar13 * fVar14);
    *(ulong *)(lVar9 + 0xa4) =
         CONCAT44(fVar15 * fVar19 + fVar17 * fVar16,fVar18 * fVar19 + fVar17 * fVar14);
    *(ulong *)(lVar9 + 0xb4) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar15 * fVar20 + fVar16 * fVar22,
                  (float)uVar4 + fVar18 * fVar20 + fVar14 * fVar22);
  }
  *(float *)(param_1 + 0x10) = fVar23;
  *(float *)(lVar8 + 0x58) = fVar12;
  return;
}


// ===== 003dddf8  rive::IKConstraint::invertDirectionChanged =====

/* rive::IKConstraint::invertDirectionChanged() */

void __thiscall rive::IKConstraint::invertDirectionChanged(IKConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003dde00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003dde04  rive::IKConstraint::constrain =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::IKConstraint::constrain(rive::TransformComponent*) */

void rive::IKConstraint::constrain(TransformComponent *param_1)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  undefined8 *puVar3;
  BoneChainLink *pBVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  BoneChainLink *pBVar14;
  BoneChainLink *pBVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float __x;
  undefined8 uVar37;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  long local_a0;
  
  lVar8 = tpidr_el0;
  local_a0 = *(long *)(lVar8 + 0x28);
  if ((*(long **)(param_1 + 0x90) != (long *)0x0) &&
     (uVar11 = (**(code **)(**(long **)(param_1 + 0x90) + 0x80))(), uVar10 = _UNK_0024e5b8,
     uVar9 = _DAT_0024e5b0, (uVar11 & 1) == 0)) {
    pBVar15 = *(BoneChainLink **)(param_1 + 0xa0);
    pBVar4 = *(BoneChainLink **)(param_1 + 0xa8);
    uVar37 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0xb4);
    pBVar14 = pBVar15;
    local_a8 = uVar37;
    if (pBVar15 != pBVar4) {
      do {
        lVar16 = *(long *)(pBVar15 + 8);
        plVar12 = *(long **)(lVar16 + 0x30);
        uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12,0x5b);
        pfVar2 = (float *)((long)plVar12 + 0xa4);
        if ((uVar11 & 1) == 0) {
          pfVar2 = (float *)0x686140;
        }
        fVar20 = (float)*(undefined8 *)(pfVar2 + 1);
        fVar21 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
        fVar28 = *pfVar2;
        fVar25 = pfVar2[3];
        fVar30 = -fVar20;
        fVar33 = (float)NEON_fmadd(fVar28,fVar25,fVar30 * fVar21);
        if (fVar33 == 0.0) {
          fVar20 = 0.0;
          fVar23 = 0.0;
          uVar26 = uVar9;
          uVar27 = uVar10;
        }
        else {
          fVar33 = 1.0 / fVar33;
          fVar23 = (float)*(undefined8 *)(pfVar2 + 4);
          fVar19 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
          uVar26 = NEON_rev64(CONCAT44(fVar19 * -fVar28,fVar23 * -fVar25),4);
          uVar26 = NEON_rev64(CONCAT44(fVar33 * ((float)((ulong)uVar26 >> 0x20) + fVar19 * fVar21),
                                       fVar33 * ((float)uVar26 + fVar23 * fVar20)),4);
          fVar20 = (float)uVar26;
          fVar23 = (float)((ulong)uVar26 >> 0x20);
          uVar26 = CONCAT44(fVar30 * fVar33,fVar25 * fVar33);
          uVar27 = CONCAT44(fVar28 * fVar33,-fVar21 * fVar33);
        }
        *(undefined8 *)(pBVar15 + 0x34) = uVar27;
        *(undefined8 *)(pBVar15 + 0x2c) = uVar26;
        *(ulong *)(pBVar15 + 0x3c) = CONCAT44(fVar23,fVar20);
        fVar21 = (float)*(undefined8 *)(lVar16 + 0xa4);
        pauVar1 = (undefined1 (*) [12])(lVar16 + 0xa8);
        fVar33 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        fVar31 = (float)uVar26;
        fVar32 = (float)((ulong)uVar26 >> 0x20);
        fVar34 = (float)uVar27;
        fVar36 = (float)((ulong)uVar27 >> 0x20);
        fVar25 = fVar34 * SUB124(*pauVar1,0) + fVar21 * fVar31;
        fVar28 = fVar36 * SUB124(*pauVar1,0) + fVar21 * fVar32;
        fVar30 = fVar34 * SUB124(*pauVar1,8) + fVar33 * fVar31;
        fVar33 = fVar36 * SUB124(*pauVar1,8) + fVar33 * fVar32;
        *(ulong *)(lVar16 + 0xd8) = CONCAT44(fVar33,fVar30);
        *(ulong *)(lVar16 + 0xd0) = CONCAT44(fVar28,fVar25);
        __x = (float)NEON_fmadd(fVar25,fVar25,fVar28 * fVar28);
        fVar19 = (float)*(undefined8 *)(lVar16 + 0xb4);
        fVar29 = (float)((ulong)*(undefined8 *)(lVar16 + 0xb4) >> 0x20);
        fVar35 = SQRT(__x);
        fVar21 = 0.0;
        fVar20 = fVar20 + fVar34 * fVar29 + fVar31 * fVar19;
        fVar23 = fVar23 + fVar36 * fVar29 + fVar32 * fVar19;
        *(ulong *)(lVar16 + 0xe0) = CONCAT44(fVar23,fVar20);
        if (fVar35 != 0.0) {
          fVar21 = (float)NEON_fmadd(fVar25,fVar33,-(fVar30 * fVar28));
          fVar21 = fVar21 / fVar35;
        }
        fVar19 = atan2f(fVar28,fVar25);
        fVar25 = (float)NEON_fmadd(fVar25,fVar30,fVar28 * fVar33);
        fVar25 = atan2f(fVar25,__x);
        *(ulong *)(pBVar15 + 0x24) = CONCAT44(fVar25,fVar19);
        *(ulong *)(pBVar15 + 0x1c) = CONCAT44(fVar21,fVar35);
        *(ulong *)(pBVar15 + 0x14) = CONCAT44(fVar23,fVar20);
        pBVar15 = pBVar15 + 0x48;
      } while (pBVar15 != pBVar4);
      pBVar15 = *(BoneChainLink **)(param_1 + 0xa8);
      pBVar14 = *(BoneChainLink **)(param_1 + 0xa0);
    }
    uVar10 = _UNK_0024e5b8;
    uVar9 = _DAT_0024e5b0;
    iVar6 = (int)((ulong)((long)pBVar15 - (long)pBVar14) >> 3) * 0x38e38e39;
    uVar7 = iVar6 - 1;
    if (uVar7 == 0) {
      lVar16 = *(long *)(pBVar14 + 8);
      fVar20 = (float)uVar37 - (float)*(undefined8 *)(lVar16 + 0xb4);
      fVar21 = (float)((ulong)uVar37 >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar16 + 0xb4) >> 0x20);
      fVar20 = atan2f((float)((ulong)*(undefined8 *)(pBVar14 + 0x34) >> 0x20) * fVar21 +
                      (float)((ulong)*(undefined8 *)(pBVar14 + 0x2c) >> 0x20) * fVar20,
                      (float)*(undefined8 *)(pBVar14 + 0x34) * fVar21 +
                      (float)*(undefined8 *)(pBVar14 + 0x2c) * fVar20);
      plVar12 = *(long **)(lVar16 + 0x30);
      uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12,0x5b);
      puVar3 = (undefined8 *)((long)plVar12 + 0xa4);
      if ((uVar11 & 1) == 0) {
        puVar3 = (undefined8 *)0x686140;
      }
      if (fVar20 == 0.0) {
        fStack_ac = 0.0;
        local_b0 = 1.0;
      }
      else {
        sincosf(fVar20,&fStack_ac,&local_b0);
      }
      *(float *)(lVar16 + 0xd0) = local_b0;
      *(float *)(lVar16 + 0xd4) = fStack_ac;
      *(undefined8 *)(lVar16 + 0xe0) = 0;
      *(float *)(lVar16 + 0xd8) = -fStack_ac;
      *(float *)(lVar16 + 0xdc) = local_b0;
      *(undefined4 *)(lVar16 + 0xe0) = *(undefined4 *)(pBVar14 + 0x14);
      *(undefined4 *)(lVar16 + 0xe4) = *(undefined4 *)(pBVar14 + 0x18);
      fVar21 = (float)*(undefined8 *)(lVar16 + 0xd0) * (float)*(undefined8 *)(pBVar14 + 0x1c);
      fVar30 = (float)((ulong)*(undefined8 *)(lVar16 + 0xd0) >> 0x20) *
               (float)*(undefined8 *)(pBVar14 + 0x1c);
      fVar25 = (float)*(undefined8 *)(lVar16 + 0xd8) * (float)*(undefined8 *)(pBVar14 + 0x20);
      fVar28 = (float)((ulong)*(undefined8 *)(lVar16 + 0xd8) >> 0x20) *
               (float)*(undefined8 *)(pBVar14 + 0x20);
      *(ulong *)(lVar16 + 0xd8) = CONCAT44(fVar28,fVar25);
      *(ulong *)(lVar16 + 0xd0) = CONCAT44(fVar30,fVar21);
      fVar33 = *(float *)(pBVar14 + 0x28);
      if (fVar33 != 0.0) {
        *(ulong *)(lVar16 + 0xd8) = CONCAT44(fVar28 + fVar30 * fVar33,fVar25 + fVar21 * fVar33);
        fVar21 = (float)*(undefined8 *)(lVar16 + 0xd0);
      }
      fVar30 = (float)puVar3[1];
      fVar33 = (float)((ulong)puVar3[1] >> 0x20);
      pauVar1 = (undefined1 (*) [12])(lVar16 + 0xd4);
      fVar19 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar28 = (float)((ulong)*(undefined8 *)(lVar16 + 0xe0) >> 0x20);
      fVar23 = (float)*puVar3;
      fVar29 = (float)((ulong)*puVar3 >> 0x20);
      fVar25 = (float)*(undefined8 *)(lVar16 + 0xe0);
      *(ulong *)(lVar16 + 0xb4) =
           CONCAT44((float)((ulong)puVar3[2] >> 0x20) + fVar33 * fVar28 + fVar29 * fVar25,
                    (float)puVar3[2] + fVar30 * fVar28 + fVar23 * fVar25);
      *(ulong *)(lVar16 + 0xac) =
           CONCAT44(fVar33 * SUB124(*pauVar1,8) + fVar19 * fVar29,
                    fVar30 * SUB124(*pauVar1,8) + fVar19 * fVar23);
      *(ulong *)(lVar16 + 0xa4) =
           CONCAT44(fVar33 * SUB124(*pauVar1,0) + fVar21 * fVar29,
                    fVar30 * SUB124(*pauVar1,0) + fVar21 * fVar23);
      *(float *)(pBVar14 + 0x10) = fVar20;
    }
    else if (iVar6 == 2) {
      solve2((IKConstraint *)param_1,pBVar14,pBVar14 + 0x48,(Vec2D *)&local_a8);
    }
    else if (1 < iVar6) {
      uVar11 = 0;
      do {
        pBVar15 = (BoneChainLink *)(*(long *)(param_1 + 0xa0) + uVar11 * 0x48);
        solve2((IKConstraint *)param_1,pBVar15,pBVar14 + (long)(int)uVar7 * 0x48,(Vec2D *)&local_a8)
        ;
        iVar6 = *(int *)pBVar15;
        iVar18 = (int)((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0)) >> 3) *
                 0x38e38e39;
        if (iVar6 + 1 < iVar18 + -1) {
          iVar18 = (iVar18 - iVar6) + -2;
          lVar16 = (long)iVar6 * 0x48;
          do {
            lVar5 = *(long *)(param_1 + 0xa0) + lVar16;
            plVar12 = *(long **)(*(long *)(lVar5 + 0x50) + 0x30);
            uVar13 = (**(code **)(*plVar12 + 0x18))(plVar12,0x5b);
            pfVar2 = (float *)((long)plVar12 + 0xa4);
            if ((uVar13 & 1) == 0) {
              pfVar2 = (float *)0x686140;
            }
            fVar20 = (float)*(undefined8 *)(pfVar2 + 1);
            fVar21 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
            fVar28 = *pfVar2;
            fVar25 = pfVar2[3];
            fVar30 = -fVar20;
            fVar33 = (float)NEON_fmadd(fVar28,fVar25,fVar30 * fVar21);
            if (fVar33 == 0.0) {
              uVar22 = 0;
              uVar24 = 0;
              uVar26 = uVar9;
              uVar27 = uVar10;
            }
            else {
              fVar33 = 1.0 / fVar33;
              fVar23 = (float)*(undefined8 *)(pfVar2 + 4);
              fVar19 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
              uVar37 = NEON_rev64(CONCAT44(fVar19 * -fVar28,fVar23 * -fVar25),4);
              uVar26 = CONCAT44(fVar30 * fVar33,fVar25 * fVar33);
              uVar27 = CONCAT44(fVar28 * fVar33,-fVar21 * fVar33);
              uVar37 = NEON_rev64(CONCAT44(fVar33 * ((float)((ulong)uVar37 >> 0x20) +
                                                    fVar19 * fVar21),
                                           fVar33 * ((float)uVar37 + fVar23 * fVar20)),4);
              uVar22 = (undefined4)uVar37;
              uVar24 = (undefined4)((ulong)uVar37 >> 0x20);
            }
            iVar18 = iVar18 + -1;
            lVar16 = lVar16 + 0x48;
            *(undefined8 *)(lVar5 + 0x7c) = uVar27;
            *(undefined8 *)(lVar5 + 0x74) = uVar26;
            *(ulong *)(lVar5 + 0x84) = CONCAT44(uVar24,uVar22);
          } while (iVar18 != 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar7);
    }
    if (*(float *)(param_1 + 0x88) != 1.0) {
      lVar16 = *(long *)(param_1 + 0xa0);
      lVar5 = *(long *)(param_1 + 0xa8);
      if (lVar16 != lVar5) {
        do {
          fVar20 = fmodf(*(float *)(lVar16 + 0x24),6.2831855);
          fVar21 = fmodf(*(float *)(lVar16 + 0x10),6.2831855);
          fVar21 = fVar21 - fVar20;
          if (fVar21 == 3.1415927 || fVar21 < 3.1415927 != NAN(fVar21)) {
            if (fVar21 < -3.1415927) {
              fVar21 = fVar21 + 6.2831855;
            }
          }
          else {
            fVar21 = fVar21 + -6.2831855;
          }
          lVar17 = *(long *)(lVar16 + 8);
          plVar12 = *(long **)(lVar17 + 0x30);
          fVar20 = (float)NEON_fmadd(fVar21,*(undefined4 *)(param_1 + 0x88),fVar20);
          uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12,0x5b);
          puVar3 = (undefined8 *)((long)plVar12 + 0xa4);
          if ((uVar11 & 1) == 0) {
            puVar3 = (undefined8 *)0x686140;
          }
          if (fVar20 == 0.0) {
            fVar20 = 0.0;
            fVar21 = 1.0;
          }
          else {
            sincosf(fVar20,&fStack_b4,&local_b8);
            fVar20 = fStack_b4;
            fVar21 = local_b8;
          }
          *(float *)(lVar17 + 0xd0) = fVar21;
          *(float *)(lVar17 + 0xd4) = fVar20;
          *(undefined8 *)(lVar17 + 0xe0) = 0;
          *(float *)(lVar17 + 0xd8) = -fVar20;
          *(float *)(lVar17 + 0xdc) = fVar21;
          *(undefined4 *)(lVar17 + 0xe0) = *(undefined4 *)(lVar16 + 0x14);
          *(undefined4 *)(lVar17 + 0xe4) = *(undefined4 *)(lVar16 + 0x18);
          fVar21 = (float)*(undefined8 *)(lVar16 + 0x1c);
          fVar28 = (float)*(undefined8 *)(lVar16 + 0x20);
          fVar20 = (float)*(undefined8 *)(lVar17 + 0xd0) * fVar21;
          fVar21 = (float)((ulong)*(undefined8 *)(lVar17 + 0xd0) >> 0x20) * fVar21;
          fVar25 = (float)*(undefined8 *)(lVar17 + 0xd8) * fVar28;
          fVar28 = (float)((ulong)*(undefined8 *)(lVar17 + 0xd8) >> 0x20) * fVar28;
          *(ulong *)(lVar17 + 0xd8) = CONCAT44(fVar28,fVar25);
          *(ulong *)(lVar17 + 0xd0) = CONCAT44(fVar21,fVar20);
          fVar30 = *(float *)(lVar16 + 0x28);
          if (fVar30 != 0.0) {
            *(ulong *)(lVar17 + 0xd8) = CONCAT44(fVar28 + fVar21 * fVar30,fVar25 + fVar20 * fVar30);
            fVar20 = (float)*(undefined8 *)(lVar17 + 0xd0);
          }
          pauVar1 = (undefined1 (*) [12])(lVar17 + 0xd4);
          fVar30 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          lVar16 = lVar16 + 0x48;
          fVar23 = (float)*(undefined8 *)(lVar17 + 0xe0);
          fVar19 = (float)((ulong)*(undefined8 *)(lVar17 + 0xe0) >> 0x20);
          fVar28 = (float)*puVar3;
          fVar33 = (float)((ulong)*puVar3 >> 0x20);
          fVar21 = (float)puVar3[1];
          fVar25 = (float)((ulong)puVar3[1] >> 0x20);
          uVar9 = puVar3[2];
          *(ulong *)(lVar17 + 0xac) =
               CONCAT44(fVar25 * SUB124(*pauVar1,8) + fVar30 * fVar33,
                        fVar21 * SUB124(*pauVar1,8) + fVar30 * fVar28);
          *(ulong *)(lVar17 + 0xa4) =
               CONCAT44(fVar25 * SUB124(*pauVar1,0) + fVar20 * fVar33,
                        fVar21 * SUB124(*pauVar1,0) + fVar20 * fVar28);
          *(ulong *)(lVar17 + 0xb4) =
               CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar25 * fVar19 + fVar33 * fVar23,
                        (float)uVar9 + fVar21 * fVar19 + fVar28 * fVar23);
        } while (lVar16 != lVar5);
      }
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003de494  FUN_003de494 =====

void FUN_003de494(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x14];
  *param_1 = (long)(PTR_vtable_0067d0c0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = (long)pvVar1;
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


// ===== 003de524  FUN_003de524 =====

void FUN_003de524(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x14];
  *param_1 = (long)(PTR_vtable_0067d0c0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = (long)pvVar1;
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


// ===== 003de5b0  FUN_003de5b0 =====

undefined8 FUN_003de5b0(void)

{
  return 0x51;
}


// ===== 003de5b8  FUN_003de5b8 =====

bool FUN_003de5b8(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x4f < 3 || (param_2 & 0xffff) == 10;
}


// ===== 003de5d8  FUN_003de5d8 =====

undefined8 FUN_003de5d8(long param_1,short param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  if (param_2 != 0xaf) {
    if (param_2 != 0xae) {
      uVar5 = FUN_003b4320();
      return uVar5;
    }
    lVar1 = *param_3;
    lVar2 = param_3[1];
    pcVar6 = (char *)param_3[2];
    if (0 < (lVar1 + lVar2) - (long)pcVar6) {
      param_3[2] = (long)(pcVar6 + 1);
      *(bool *)(param_1 + 0x98) = *pcVar6 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0x98) = 0;
    param_3[2] = lVar1 + lVar2;
    *(undefined1 *)(param_3 + 3) = 1;
    return 1;
  }
  uVar10 = 0;
  uVar7 = 0;
  pbVar8 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003de680;
    }
    pbVar9 = pbVar8 + 1;
    bVar3 = *pbVar8;
    uVar4 = uVar10 & 0x3f;
    uVar10 = (ulong)(((uint)uVar10 & 0xff) + 7);
    uVar7 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar7;
    pbVar8 = pbVar9;
  } while ((char)bVar3 < '\0');
  param_3[2] = (long)pbVar9;
  if (uVar7 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003de680:
    uVar7 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x9c) = (int)uVar7;
  return 1;
}


// ===== 003de6ac  FUN_003de6ac =====

void FUN_003de6ac(void)

{
  return;
}


// ===== 003de6b0  rive::Bone::addChildBone =====

/* rive::Bone::addChildBone(rive::Bone*) */

void __thiscall rive::Bone::addChildBone(Bone *this,Bone *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x120);
  if (puVar10 < *(undefined8 **)(this + 0x128)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003de7f0;
  }
  puVar9 = *(undefined8 **)(this + 0x118);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003dd530();
LAB_003de810:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x128) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003de810;
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
      if (uVar6 == uVar7) goto LAB_003de7dc;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x118);
  }
LAB_003de7dc:
  *(undefined8 **)(this + 0x118) = puVar4;
  *(undefined8 **)(this + 0x120) = puVar13;
  *(void **)(this + 0x128) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003de7f0:
  *(undefined8 **)(this + 0x120) = puVar13;
  return;
}


// ===== 003de814  rive::Bone::onAddedClean =====

/* rive::Bone::onAddedClean(rive::CoreContext*) */

bool rive::Bone::onAddedClean(CoreContext *param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),0x5b);
  plVar4 = *(long **)(param_1 + 0x30);
  plVar2 = plVar4;
  if ((uVar3 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  lVar5 = *plVar4;
  *(long **)(param_1 + 0xf0) = plVar2;
  uVar3 = (**(code **)(lVar5 + 0x18))(plVar4,0x28);
  bVar1 = (uVar3 & 1) == 0;
  if (!bVar1) {
    addChildBone(*(Bone **)(param_1 + 0x30),(Bone *)param_1);
  }
  return bVar1;
}


// ===== 003de884  rive::Bone::lengthChanged =====

/* rive::Bone::lengthChanged() */

void __thiscall rive::Bone::lengthChanged(Bone *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  Component *pCVar5;
  
  puVar2 = *(undefined8 **)(this + 0x120);
  for (puVar1 = *(undefined8 **)(this + 0x118); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    pCVar5 = (Component *)*puVar1;
    if ((*(ushort *)(pCVar5 + 0x60) >> 6 & 1) == 0) {
      *(ushort *)(pCVar5 + 0x60) = *(ushort *)(pCVar5 + 0x60) | 0x40;
      (**(code **)(*(long *)pCVar5 + 0x70))(pCVar5);
      lVar4 = *(long *)(pCVar5 + 0x80);
      uVar3 = *(uint *)(pCVar5 + 0x38);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar3 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar3;
      }
      Component::addDirt(pCVar5,0x80,1);
    }
  }
  return;
}


// ===== 003de924  rive::Bone::x =====

/* rive::Bone::x() const */

undefined4 __thiscall rive::Bone::x(Bone *this)

{
  return *(undefined4 *)(*(long *)(this + 0x30) + 0x110);
}


// ===== 003de930  rive::Bone::y =====

/* rive::Bone::y() const */

undefined1  [16] rive::Bone::y(void)

{
  return ZEXT816(0);
}


// ===== 003de938  rive::Bone::tipWorldTranslation =====

/* rive::Bone::tipWorldTranslation() const */

undefined1  [16] __thiscall rive::Bone::tipWorldTranslation(Bone *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)*(undefined8 *)(this + 0xb4) +
                 (float)*(undefined8 *)(this + 0xac) * 0.0 +
                 (float)*(undefined8 *)(this + 0xa4) * (float)*(undefined8 *)(this + 0x110);
  auVar1._4_4_ = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20) * 0.0 +
                 (float)((ulong)*(undefined8 *)(this + 0xa4) >> 0x20) *
                 (float)*(undefined8 *)(this + 0x110);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 003de960  rive::Bone::addPeerConstraint =====

/* rive::Bone::addPeerConstraint(rive::Constraint*) */

void __thiscall rive::Bone::addPeerConstraint(Bone *this,Constraint *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x138);
  if (puVar10 < *(undefined8 **)(this + 0x140)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003deaa0;
  }
  puVar9 = *(undefined8 **)(this + 0x130);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003deac4();
LAB_003deac0:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x140) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003deac0;
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
      if (uVar6 == uVar7) goto LAB_003dea8c;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x130);
  }
LAB_003dea8c:
  *(undefined8 **)(this + 0x130) = puVar4;
  *(undefined8 **)(this + 0x138) = puVar13;
  *(void **)(this + 0x140) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003deaa0:
  *(undefined8 **)(this + 0x138) = puVar13;
  return;
}


// ===== 003deac4  FUN_003deac4 =====

void FUN_003deac4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003dead8  FUN_003dead8 =====

void FUN_003dead8(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x26];
  puVar1 = PTR_vtable_0067d070 + 0x120;
  *param_1 = (long)(PTR_vtable_0067d070 + 0x10);
  param_1[0x19] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x27] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x23];
  if (pvVar2 != (void *)0x0) {
    param_1[0x24] = (long)pvVar2;
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


// ===== 003debc8  FUN_003debc8 =====

void FUN_003debc8(void *param_1)

{
  FUN_003dead8();
  operator_delete(param_1);
  return;
}


// ===== 003debec  FUN_003debec =====

undefined8 FUN_003debec(void)

{
  return 0x28;
}


// ===== 003debf4  FUN_003debf4 =====

bool FUN_003debf4(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x26;
  if ((uVar1 < 0x36) && ((1L << ((ulong)uVar1 & 0x3f) & 0x20000000000007U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) - 10 < 2;
}


// ===== 003dec34  FUN_003dec34 =====

undefined8 FUN_003dec34(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0x59) {
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
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    return 1;
  }
  uVar1 = FUN_0035ea44();
  return uVar1;
}


// ===== 003dec8c  rive::TranslationConstraint::constrain =====

/* rive::TranslationConstraint::constrain(rive::TransformComponent*) */

void __thiscall
rive::TranslationConstraint::constrain(TranslationConstraint *this,TransformComponent *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  long *plVar8;
  long lVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (*(long **)(this + 0x90) == (long *)0x0) {
    uVar17 = *(undefined8 *)(param_1 + 0xb4);
  }
  else {
    uVar7 = (**(code **)(**(long **)(this + 0x90) + 0x80))();
    if ((uVar7 & 1) != 0) {
      return;
    }
    lVar9 = *(long *)(this + 0x90);
    uVar17 = *(undefined8 *)(param_1 + 0xb4);
    if (lVar9 != 0) {
      fVar13 = (float)*(undefined8 *)(lVar9 + 0xb4);
      fVar15 = (float)((ulong)*(undefined8 *)(lVar9 + 0xb4) >> 0x20);
      if (*(int *)(this + 0x98) == 1) {
        plVar8 = *(long **)(lVar9 + 0x30);
        uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,0x5b);
        pfVar1 = (float *)((long)plVar8 + 0xa4);
        if ((uVar7 & 1) == 0) {
          pfVar1 = (float *)0x686140;
        }
        fVar16 = *pfVar1;
        fVar12 = pfVar1[3];
        fVar14 = (float)*(undefined8 *)(pfVar1 + 1);
        fVar19 = -fVar14;
        fVar11 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
        fVar20 = (float)NEON_fmadd(fVar16,fVar12,fVar19 * fVar11);
        if (fVar20 == 0.0) {
          return;
        }
        fVar20 = 1.0 / fVar20;
        fVar21 = (float)*(undefined8 *)(pfVar1 + 4);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
        uVar18 = NEON_rev64(CONCAT44(fVar22 * -fVar16,fVar21 * -fVar12),4);
        fVar12 = fVar12 * fVar20;
        fVar19 = fVar19 * fVar20;
        auVar10._4_4_ = fVar19;
        auVar10._0_4_ = fVar12;
        auVar10._8_4_ = -fVar11 * fVar20;
        auVar10._12_4_ = fVar16 * fVar20;
        auVar4._4_4_ = fVar19;
        auVar4._0_4_ = fVar12;
        auVar4._8_4_ = -fVar11 * fVar20;
        auVar4._12_4_ = fVar16 * fVar20;
        auVar10 = NEON_ext(auVar10,auVar4,8,1);
        uVar18 = NEON_rev64(CONCAT44(fVar20 * ((float)((ulong)uVar18 >> 0x20) + fVar22 * fVar11),
                                     fVar20 * ((float)uVar18 + fVar21 * fVar14)),4);
        fVar19 = fVar19 * fVar13;
        fVar13 = (float)uVar18 + auVar10._0_4_ * fVar15 + fVar12 * fVar13;
        fVar15 = (float)((ulong)uVar18 >> 0x20) + auVar10._4_4_ * fVar15 + fVar19;
      }
      if (this[0xb1] == (TranslationConstraint)0x0) {
        fVar13 = 0.0;
        if (*(int *)(this + 0x9c) != 1) {
          fVar13 = (float)uVar17;
        }
        if (this[0xc0] != (TranslationConstraint)0x0) goto LAB_003dedd4;
LAB_003defe0:
        fVar19 = 0.0;
        if (*(int *)(this + 0x9c) != 1) {
          fVar19 = (float)((ulong)uVar17 >> 0x20);
        }
      }
      else {
        fVar13 = *(float *)(this + 0xa4) * fVar13;
        if (this[0xb0] != (TranslationConstraint)0x0) {
          fVar19 = (float)(**(code **)(*(long *)param_1 + 0xd8))(param_1);
          fVar13 = fVar13 + fVar19;
        }
        if (this[0xc0] == (TranslationConstraint)0x0) goto LAB_003defe0;
LAB_003dedd4:
        fVar14 = *(float *)(this + 0xb4);
        fVar19 = fVar15 * fVar14;
        if (this[0xb0] != (TranslationConstraint)0x0) {
          fVar19 = (float)(**(code **)(*(long *)param_1 + 0xe0))(param_1);
          fVar19 = fVar15 * fVar14 + fVar19;
        }
      }
      if (*(int *)(this + 0x9c) == 1) {
        plVar8 = *(long **)(param_1 + 0x30);
        uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,0x5b);
        puVar2 = (undefined8 *)((long)plVar8 + 0xa4);
        if ((uVar7 & 1) == 0) {
          puVar2 = (undefined8 *)0x686140;
        }
        fVar15 = (float)((ulong)*puVar2 >> 0x20) * fVar13;
        fVar13 = (float)puVar2[2] + (float)puVar2[1] * fVar19 + (float)*puVar2 * fVar13;
        fVar19 = (float)((ulong)puVar2[2] >> 0x20) +
                 (float)((ulong)puVar2[1] >> 0x20) * fVar19 + fVar15;
      }
      goto LAB_003dee20;
    }
  }
  fVar13 = (float)uVar17;
  fVar19 = (float)((ulong)uVar17 >> 0x20);
LAB_003dee20:
  iVar3 = *(int *)(this + 0xa0);
  if (iVar3 == 1) {
    plVar8 = *(long **)(param_1 + 0x30);
    uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,0x5b);
    pfVar1 = (float *)((long)plVar8 + 0xa4);
    if ((uVar7 & 1) == 0) {
      pfVar1 = (float *)0x686140;
    }
    fVar16 = *pfVar1;
    fVar12 = pfVar1[3];
    fVar14 = (float)*(undefined8 *)(pfVar1 + 1);
    fVar15 = -fVar14;
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
    fVar20 = (float)NEON_fmadd(fVar16,fVar12,fVar15 * fVar11);
    if (fVar20 == 0.0) {
      return;
    }
    fVar20 = 1.0 / fVar20;
    fVar21 = (float)*(undefined8 *)(pfVar1 + 4);
    fVar22 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
    uVar18 = NEON_rev64(CONCAT44(fVar22 * -fVar16,fVar21 * -fVar12),4);
    fVar12 = fVar12 * fVar20;
    fVar15 = fVar15 * fVar20;
    auVar5._4_4_ = fVar15;
    auVar5._0_4_ = fVar12;
    auVar5._8_4_ = -fVar11 * fVar20;
    auVar5._12_4_ = fVar16 * fVar20;
    auVar6._4_4_ = fVar15;
    auVar6._0_4_ = fVar12;
    auVar6._8_4_ = -fVar11 * fVar20;
    auVar6._12_4_ = fVar16 * fVar20;
    auVar10 = NEON_ext(auVar5,auVar6,8,1);
    uVar18 = NEON_rev64(CONCAT44(fVar20 * ((float)((ulong)uVar18 >> 0x20) + fVar22 * fVar11),
                                 fVar20 * ((float)uVar18 + fVar21 * fVar14)),4);
    fVar15 = fVar15 * fVar13;
    fVar13 = (float)uVar18 + auVar10._0_4_ * fVar19 + fVar12 * fVar13;
    fVar19 = (float)((ulong)uVar18 >> 0x20) + auVar10._4_4_ * fVar19 + fVar15;
  }
  if ((this[0xb3] != (TranslationConstraint)0x0) &&
     (fVar15 = *(float *)(this + 0xac),
     fVar13 != fVar15 && fVar13 < fVar15 == (NAN(fVar13) || NAN(fVar15)))) {
    fVar13 = fVar15;
  }
  if ((this[0xb2] != (TranslationConstraint)0x0) && (fVar13 < *(float *)(this + 0xa8))) {
    fVar13 = *(float *)(this + 0xa8);
  }
  if ((this[0xc2] != (TranslationConstraint)0x0) &&
     (fVar15 = *(float *)(this + 0xbc),
     fVar19 != fVar15 && fVar19 < fVar15 == (NAN(fVar19) || NAN(fVar15)))) {
    fVar19 = fVar15;
  }
  if ((this[0xc1] != (TranslationConstraint)0x0) && (fVar19 < *(float *)(this + 0xb8))) {
    fVar19 = *(float *)(this + 0xb8);
  }
  if (iVar3 == 1) {
    plVar8 = *(long **)(param_1 + 0x30);
    uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,0x5b);
    puVar2 = (undefined8 *)((long)plVar8 + 0xa4);
    if ((uVar7 & 1) == 0) {
      puVar2 = (undefined8 *)0x686140;
    }
    fVar15 = (float)((ulong)*puVar2 >> 0x20) * fVar13;
    fVar13 = (float)puVar2[2] + (float)puVar2[1] * fVar19 + (float)*puVar2 * fVar13;
    fVar19 = (float)((ulong)puVar2[2] >> 0x20) + (float)((ulong)puVar2[1] >> 0x20) * fVar19 + fVar15
    ;
  }
  fVar15 = *(float *)(this + 0x88);
  *(ulong *)(param_1 + 0xb4) =
       CONCAT44(fVar19 * fVar15 + (float)((ulong)uVar17 >> 0x20) * (1.0 - fVar15),
                fVar13 * fVar15 + (float)uVar17 * (1.0 - fVar15));
  return;
}


// ===== 003df058  FUN_003df058 =====

void FUN_003df058(long *param_1)

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


// ===== 003df0c4  FUN_003df0c4 =====

undefined8 FUN_003df0c4(void)

{
  return 0x57;
}


// ===== 003df0cc  FUN_003df0cc =====

bool FUN_003df0cc(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x4f;
  if ((uVar1 < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0x9c3U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 10;
}


// ===== 003df100  FUN_003df100 =====

undefined8 FUN_003df100(long param_1,ushort param_2,long *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  
  if (0xbf < param_2) {
    if (param_2 == 0xc0) {
      pcVar2 = (char *)param_3[2];
      lVar5 = *param_3 + param_3[1];
      if (0 < lVar5 - (long)pcVar2) {
        param_3[2] = (long)(pcVar2 + 1);
        *(bool *)(param_1 + 0xc0) = *pcVar2 == '\x01';
        return 1;
      }
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    else if (param_2 == 0xc1) {
      pcVar2 = (char *)param_3[2];
      lVar5 = *param_3 + param_3[1];
      if (0 < lVar5 - (long)pcVar2) {
        param_3[2] = (long)(pcVar2 + 1);
        *(bool *)(param_1 + 0xc1) = *pcVar2 == '\x01';
        return 1;
      }
      *(undefined1 *)(param_1 + 0xc1) = 0;
    }
    else {
      if (param_2 != 0xc2) goto LAB_003df1fc;
      pcVar2 = (char *)param_3[2];
      lVar5 = *param_3 + param_3[1];
      if (0 < lVar5 - (long)pcVar2) {
        param_3[2] = (long)(pcVar2 + 1);
        *(bool *)(param_1 + 0xc2) = *pcVar2 == '\x01';
        return 1;
      }
      *(undefined1 *)(param_1 + 0xc2) = 0;
    }
    param_3[2] = lVar5;
    *(undefined1 *)(param_3 + 3) = 1;
    return 1;
  }
  if (param_2 == 0xb9) {
    puVar4 = (undefined4 *)param_3[2];
    puVar3 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar3 - (long)puVar4 < 4) {
      uVar6 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar3 = puVar4 + 1;
      uVar6 = *puVar4;
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar6;
  }
  else if (param_2 == 0xba) {
    puVar4 = (undefined4 *)param_3[2];
    puVar3 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar3 - (long)puVar4 < 4) {
      uVar6 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar3 = puVar4 + 1;
      uVar6 = *puVar4;
    }
    *(undefined4 *)(param_1 + 0xb8) = uVar6;
  }
  else {
    if (param_2 != 0xbb) {
LAB_003df1fc:
      uVar1 = FUN_003df2c8();
      return uVar1;
    }
    puVar4 = (undefined4 *)param_3[2];
    puVar3 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar3 - (long)puVar4 < 4) {
      uVar6 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar3 = puVar4 + 1;
      uVar6 = *puVar4;
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar6;
  }
  param_3[2] = (long)puVar3;
  return 1;
}


// ===== 003df2c8  FUN_003df2c8 =====

undefined8 FUN_003df2c8(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  if (0xbb < param_2) {
    if (param_2 < 0xbe) {
      if (param_2 == 0xbc) {
        pcVar5 = (char *)param_3[2];
        lVar8 = *param_3 + param_3[1];
        if (0 < lVar8 - (long)pcVar5) {
          param_3[2] = (long)(pcVar5 + 1);
          *(bool *)(param_1 + 0xb0) = *pcVar5 == '\x01';
          return 1;
        }
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      else {
        if (param_2 != 0xbd) goto LAB_003df57c;
        pcVar5 = (char *)param_3[2];
        lVar8 = *param_3 + param_3[1];
        if (0 < lVar8 - (long)pcVar5) {
          param_3[2] = (long)(pcVar5 + 1);
          *(bool *)(param_1 + 0xb1) = *pcVar5 == '\x01';
          return 1;
        }
        *(undefined1 *)(param_1 + 0xb1) = 0;
      }
    }
    else if (param_2 == 0xbe) {
      pcVar5 = (char *)param_3[2];
      lVar8 = *param_3 + param_3[1];
      if (0 < lVar8 - (long)pcVar5) {
        param_3[2] = (long)(pcVar5 + 1);
        *(bool *)(param_1 + 0xb2) = *pcVar5 == '\x01';
        return 1;
      }
      *(undefined1 *)(param_1 + 0xb2) = 0;
    }
    else {
      if (param_2 != 0xbf) {
        if (param_2 == 0xc3) {
          uVar11 = 0;
          uVar4 = 0;
          pbVar9 = (byte *)param_3[2];
          do {
            if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
              *(undefined1 *)(param_3 + 3) = 1;
              goto LAB_003df5c0;
            }
            pbVar10 = pbVar9 + 1;
            bVar1 = *pbVar9;
            uVar2 = uVar11 & 0x3f;
            uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
            uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
            pbVar9 = pbVar10;
          } while ((char)bVar1 < '\0');
          param_3[2] = (long)pbVar10;
          if (uVar4 >> 0x20 != 0) {
            *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003df5c0:
            uVar4 = 0;
            param_3[2] = *param_3 + param_3[1];
          }
          *(int *)(param_1 + 0xa0) = (int)uVar4;
          return 1;
        }
        goto LAB_003df57c;
      }
      pcVar5 = (char *)param_3[2];
      lVar8 = *param_3 + param_3[1];
      if (0 < lVar8 - (long)pcVar5) {
        param_3[2] = (long)(pcVar5 + 1);
        *(bool *)(param_1 + 0xb3) = *pcVar5 == '\x01';
        return 1;
      }
      *(undefined1 *)(param_1 + 0xb3) = 0;
    }
    param_3[2] = lVar8;
    *(undefined1 *)(param_3 + 3) = 1;
    return 1;
  }
  if (0xb5 < param_2) {
    if (param_2 == 0xb6) {
      puVar7 = (undefined4 *)param_3[2];
      puVar6 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar6 - (long)puVar7 < 4) {
        uVar12 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar6 = puVar7 + 1;
        uVar12 = *puVar7;
      }
      *(undefined4 *)(param_1 + 0xa4) = uVar12;
    }
    else if (param_2 == 0xb7) {
      puVar7 = (undefined4 *)param_3[2];
      puVar6 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar6 - (long)puVar7 < 4) {
        uVar12 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar6 = puVar7 + 1;
        uVar12 = *puVar7;
      }
      *(undefined4 *)(param_1 + 0xa8) = uVar12;
    }
    else {
      if (param_2 != 0xb8) goto LAB_003df57c;
      puVar7 = (undefined4 *)param_3[2];
      puVar6 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar6 - (long)puVar7 < 4) {
        uVar12 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar6 = puVar7 + 1;
        uVar12 = *puVar7;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar12;
    }
    param_3[2] = (long)puVar6;
    return 1;
  }
  if (param_2 == 0xb3) {
    uVar11 = 0;
    uVar4 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003df588;
      }
      pbVar10 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar2 = uVar11 & 0x3f;
      uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
      uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
      pbVar9 = pbVar10;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar10;
    if (uVar4 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003df588:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x98) = (int)uVar4;
    return 1;
  }
  if (param_2 == 0xb4) {
    uVar11 = 0;
    uVar4 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003df5a4;
      }
      pbVar10 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar2 = uVar11 & 0x3f;
      uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
      uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
      pbVar9 = pbVar10;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar10;
    if (uVar4 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003df5a4:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x9c) = (int)uVar4;
    return 1;
  }
LAB_003df57c:
  uVar3 = FUN_003b4320();
  return uVar3;
}


// ===== 003df648  FUN_003df648 =====

undefined8 FUN_003df648(void)

{
  return 0;
}


// ===== 003df650  FUN_003df650 =====

void FUN_003df650(void)

{
  return;
}


// ===== 003df654  FUN_003df654 =====

void FUN_003df654(void)

{
  return;
}


// ===== 003df658  FUN_003df658 =====

void FUN_003df658(void)

{
  return;
}


// ===== 003df65c  FUN_003df65c =====

void FUN_003df65c(void)

{
  return;
}


// ===== 003df660  FUN_003df660 =====

void FUN_003df660(void)

{
  return;
}


// ===== 003df664  FUN_003df664 =====

void FUN_003df664(void)

{
  return;
}


// ===== 003df668  FUN_003df668 =====

void FUN_003df668(void)

{
  return;
}


// ===== 003df66c  FUN_003df66c =====

void FUN_003df66c(void)

{
  return;
}


// ===== 003df670  FUN_003df670 =====

void FUN_003df670(void)

{
  return;
}


// ===== 003df674  FUN_003df674 =====

void FUN_003df674(void)

{
  return;
}


// ===== 003df678  FUN_003df678 =====

void FUN_003df678(void)

{
  return;
}


// ===== 003df67c  FUN_003df67c =====

void FUN_003df67c(void)

{
  return;
}


// ===== 003df680  FUN_003df680 =====

void FUN_003df680(void)

{
  return;
}


// ===== 003df684  FUN_003df684 =====

void FUN_003df684(void)

{
  return;
}


// ===== 003df688  rive::ClampedScrollPhysics::advance =====

/* rive::ClampedScrollPhysics::advance(float) */

undefined4 rive::ClampedScrollPhysics::advance(float param_1)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0xd0))();
  return *(undefined4 *)((long)in_x0 + 0xac);
}


// ===== 003df6b4  rive::ClampedScrollPhysics::run =====

/* rive::ClampedScrollPhysics::run(rive::Vec2D, rive::Vec2D, rive::Vec2D,
   std::__ndk1::vector<rive::Vec2D, std::__ndk1::allocator<rive::Vec2D> >, float, float) */

void rive::ClampedScrollPhysics::run
               (undefined1 param_1 [16],undefined4 param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  
  if ((param_4[1] != *param_4) && (param_4[1] - *param_4 < 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00371ef8();
  }
  *(undefined1 *)((long)param_3 + 0x8c) = 1;
  uVar1 = (**(code **)(*param_3 + 0xb0))(param_3);
  *(undefined4 *)((long)param_3 + 0xac) = uVar1;
  *(undefined4 *)(param_3 + 0x16) = param_2;
  return;
}


// ===== 003df700  rive::ClampedScrollPhysics::clamp =====

/* rive::ClampedScrollPhysics::clamp(rive::Vec2D, rive::Vec2D, rive::Vec2D) */

undefined4
rive::ClampedScrollPhysics::clamp
          (float param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
          float param_6)

{
  undefined4 uVar1;
  
  if (param_1 <= param_5) {
    param_1 = param_5;
  }
  if (param_2 <= param_6) {
    param_2 = param_6;
  }
  uVar1 = NEON_fminnm(param_1,param_3);
  NEON_fminnm(param_2,param_4);
  return uVar1;
}


// ===== 003df714  FUN_003df714 =====

void FUN_003df714(long *param_1)

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


// ===== 003df780  FUN_003df780 =====

undefined8 FUN_003df780(void)

{
  return 0x20c;
}


// ===== 003df788  FUN_003df788 =====

bool FUN_003df788(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x20b < 2 || (param_2 & 0xffff) == 10;
}


// ===== 003df7a8  FUN_003df7a8 =====

void FUN_003df7a8(long param_1,short param_2,long *param_3)

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
        goto LAB_003df908;
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
LAB_003df908:
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
        goto LAB_003df8ec;
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
LAB_003df8ec:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x2db) {
      uVar5 = 0;
      goto LAB_003df950;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003df940;
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
LAB_003df940:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003df950:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003df974  FUN_003df974 =====

void FUN_003df974(void)

{
  return;
}


