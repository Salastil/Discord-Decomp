// ===== 00487894  rive::Renderer::scale =====

/* rive::Renderer::scale(float, float) */

void __thiscall rive::Renderer::scale(Renderer *this,float param_1,float param_2)

{
  long lVar1;
  float local_40 [4];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[1] = 0.0;
  local_40[2] = 0.0;
  local_30 = 0;
  local_40[0] = param_1;
  local_40[3] = param_2;
  (**(code **)(*(long *)this + 0x20))(this,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004878f8  rive::Renderer::rotate =====

/* rive::Renderer::rotate(float) */

void __thiscall rive::Renderer::rotate(Renderer *this,float param_1)

{
  long lVar1;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  sincosf(param_1,&fStack_44,&local_48);
  local_30 = 0;
  local_38 = -fStack_44;
  local_40 = local_48;
  fStack_3c = fStack_44;
  fStack_34 = local_48;
  (**(code **)(*(long *)this + 0x20))(this,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00487970  rive::RenderBuffer::RenderBuffer =====

/* rive::RenderBuffer::RenderBuffer(rive::RenderBufferType, rive::RenderBufferFlags, unsigned long)
    */

void __thiscall
rive::RenderBuffer::RenderBuffer
          (RenderBuffer *this,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_0067d6c0;
  uVar1 = DAT_0024e670;
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = param_3;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x18) = param_4;
  *(undefined **)this = puVar2 + 0x10;
  this[0x20] = (RenderBuffer)0x0;
  return;
}


// ===== 0048799c  rive::RenderBuffer::~RenderBuffer =====

/* rive::RenderBuffer::~RenderBuffer() */

void __thiscall rive::RenderBuffer::~RenderBuffer(RenderBuffer *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4879a0);
  (*pcVar1)();
}


// ===== 004879a0  rive::RenderBuffer::~RenderBuffer =====

/* rive::RenderBuffer::~RenderBuffer() */

void __thiscall rive::RenderBuffer::~RenderBuffer(RenderBuffer *this)

{
  return;
}


// ===== 004879a4  rive::RenderBuffer::map =====

/* rive::RenderBuffer::map() */

void __thiscall rive::RenderBuffer::map(RenderBuffer *this)

{
  this[0x20] = (RenderBuffer)0x1;
                    /* WARNING: Could not recover jumptable at 0x004879b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}


// ===== 004879b8  rive::RenderBuffer::unmap =====

/* rive::RenderBuffer::unmap() */

void __thiscall rive::RenderBuffer::unmap(RenderBuffer *this)

{
                    /* WARNING: Could not recover jumptable at 0x004879c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))();
  return;
}


// ===== 004879c4  rive::RenderShader::RenderShader =====

/* rive::RenderShader::RenderShader() */

void __thiscall rive::RenderShader::RenderShader(RenderShader *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d6c8 + 0x10;
  *(undefined8 *)(this + 8) = DAT_0024e6a0;
  *(undefined **)this = puVar1;
  return;
}


// ===== 004879e4  rive::RenderShader::~RenderShader =====

/* rive::RenderShader::~RenderShader() */

void __thiscall rive::RenderShader::~RenderShader(RenderShader *this)

{
  ~RenderShader(this);
  operator_delete(this);
  return;
}


// ===== 00487a08  rive::RenderShader::~RenderShader =====

/* rive::RenderShader::~RenderShader() */

void __thiscall rive::RenderShader::~RenderShader(RenderShader *this)

{
  return;
}


// ===== 00487a0c  rive::RenderPaint::RenderPaint =====

/* rive::RenderPaint::RenderPaint() */

void __thiscall rive::RenderPaint::RenderPaint(RenderPaint *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d6d0 + 0x10;
  *(undefined8 *)(this + 8) = DAT_0024e810;
  *(undefined **)this = puVar1;
  return;
}


// ===== 00487a2c  rive::RenderPaint::~RenderPaint =====

/* rive::RenderPaint::~RenderPaint() */

void __thiscall rive::RenderPaint::~RenderPaint(RenderPaint *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x487a30);
  (*pcVar1)();
}


// ===== 00487a30  rive::RenderPaint::~RenderPaint =====

/* rive::RenderPaint::~RenderPaint() */

void __thiscall rive::RenderPaint::~RenderPaint(RenderPaint *this)

{
  return;
}


// ===== 00487a34  rive::RenderImage::RenderImage =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::RenderImage::RenderImage(rive::Mat2D const&) */

void __thiscall rive::RenderImage::RenderImage(RenderImage *this,Mat2D *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _DAT_0024e1a0;
  puVar1 = PTR_vtable_0067d6d8 + 0x10;
  *(undefined8 *)(this + 0x10) = _UNK_0024e1a8;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined **)this = puVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}


// ===== 00487a64  rive::RenderImage::~RenderImage =====

/* rive::RenderImage::~RenderImage() */

void __thiscall rive::RenderImage::~RenderImage(RenderImage *this)

{
  ~RenderImage(this);
  operator_delete(this);
  return;
}


// ===== 00487a88  rive::RenderImage::~RenderImage =====

/* rive::RenderImage::~RenderImage() */

void __thiscall rive::RenderImage::~RenderImage(RenderImage *this)

{
  return;
}


// ===== 00487a8c  rive::RenderImage::RenderImage =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::RenderImage::RenderImage() */

void __thiscall rive::RenderImage::RenderImage(RenderImage *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_vtable_0067d6d8;
  uVar4 = _UNK_00281c00;
  uVar3 = _DAT_00281bf8;
  uVar2 = _UNK_0024e1a8;
  uVar1 = _DAT_0024e1a0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar3;
  return;
}


// ===== 00487ac0  rive::RenderPath::RenderPath =====

/* rive::RenderPath::RenderPath() */

void __thiscall rive::RenderPath::RenderPath(RenderPath *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d6e0 + 0x10;
  *(undefined8 *)(this + 8) = DAT_0024e728;
  *(undefined **)this = puVar1;
  return;
}


// ===== 00487ae0  rive::RenderPath::~RenderPath =====

/* rive::RenderPath::~RenderPath() */

void __thiscall rive::RenderPath::~RenderPath(RenderPath *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x487ae4);
  (*pcVar1)();
}


// ===== 00487ae4  rive::RenderPath::~RenderPath =====

/* rive::RenderPath::~RenderPath() */

void __thiscall rive::RenderPath::~RenderPath(RenderPath *this)

{
  return;
}


// ===== 00487ae8  rive::isWhiteSpace =====

/* rive::isWhiteSpace(unsigned int) */

bool rive::isWhiteSpace(uint param_1)

{
  return (param_1 == 0x2028 || param_1 == 0x200b) || param_1 < 0x21;
}


// ===== 00487b08  rive::Font::shapeText =====

/* rive::Font::shapeText(rive::Span<unsigned int const>, rive::Span<rive::TextRun const>, int) const
    */

void __thiscall rive::Font::shapeText(long *param_1,Font *this,long param_3,ulong param_4)

{
  size_t __size;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *__ptr;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  (**(code **)(*(long *)this + 0x78))();
  uVar17 = param_4 >> 2;
  if (uVar17 - 1 < 0x3fffffffffffffff) {
    puVar3 = (undefined4 *)malloc(param_4 & 0xfffffffffffffffc);
    uVar16 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      uVar16 = uVar17;
    }
    puVar4 = (uint *)malloc(param_4 & 0xfffffffffffffffc);
    uVar21 = 0;
    if (puVar4 != (uint *)0x0) {
      uVar21 = uVar17;
    }
    lVar8 = param_1[1];
  }
  else {
    puVar3 = (undefined4 *)0x0;
    uVar16 = 0;
    uVar21 = 0;
    puVar4 = (uint *)0x0;
    lVar8 = param_1[1];
  }
  __ptr = puVar4;
  if (lVar8 != 0) {
    param_1 = (long *)*param_1;
    bVar11 = false;
    plVar9 = param_1 + lVar8 * 3;
    lVar8 = 0;
    puVar18 = puVar3;
    do {
      lVar10 = param_1[1];
      if (lVar10 != 0) {
        lVar19 = *param_1;
        lVar15 = lVar8;
        lVar20 = lVar19;
        do {
          lVar8 = lVar20;
          if (lVar15 != 0) {
            uVar14 = (long)puVar18 - (long)puVar3 >> 2;
            if (uVar16 != uVar14) {
              puVar3 = (undefined4 *)realloc(puVar3,(long)puVar18 - (long)puVar3);
            }
            *(undefined4 **)(lVar15 + 0x68) = puVar3;
            *(ulong *)(lVar15 + 0x70) = uVar14;
            uVar16 = (long)puVar4 - (long)__ptr >> 2;
            if (uVar21 != uVar16) {
              __ptr = (uint *)realloc(__ptr,(long)puVar4 - (long)__ptr);
            }
            *(uint **)(lVar15 + 0x80) = __ptr;
            *(ulong *)(lVar15 + 0x88) = uVar16;
            if (uVar17 - 1 < 0x3fffffffffffffff) {
              puVar3 = (undefined4 *)malloc(param_4 & 0xfffffffffffffffc);
              uVar16 = 0;
              if (puVar3 != (undefined4 *)0x0) {
                uVar16 = uVar17;
              }
              puVar4 = (uint *)malloc(param_4 & 0xfffffffffffffffc);
              __ptr = puVar4;
              puVar18 = puVar3;
              uVar21 = uVar17;
              if (puVar4 == (uint *)0x0) {
                __ptr = (uint *)0x0;
                uVar21 = 0;
              }
            }
            else {
              puVar4 = (uint *)0x0;
              uVar16 = 0;
              puVar3 = (undefined4 *)0x0;
              __ptr = (uint *)0x0;
              puVar18 = (undefined4 *)0x0;
              uVar21 = 0;
            }
          }
          if (*(long *)(lVar8 + 0x30) != 0) {
            lVar12 = *(long *)(lVar8 + 0x28);
            lVar20 = *(long *)(lVar8 + 0x30) << 2;
            lVar15 = 0;
            do {
              uVar1 = *(uint *)(lVar12 + lVar15 * 4);
              uVar2 = *(uint *)(param_3 + (ulong)uVar1 * 4);
              uVar13 = (undefined4)lVar15;
              if (uVar2 == 10) {
LAB_00487d80:
                puVar5 = puVar3;
                if (puVar18 == puVar3 + uVar16) {
                  uVar14 = uVar16 * 2;
                  if (uVar14 < 2) {
                    uVar14 = 1;
                  }
                  if (uVar16 != uVar14) {
                    puVar5 = (undefined4 *)realloc(puVar3,uVar14 << 2);
                    uVar16 = uVar14;
                  }
                  puVar18 = (undefined4 *)((long)puVar5 + ((long)puVar18 - (long)puVar3));
                }
                puVar3 = puVar18 + 1;
                *puVar18 = uVar13;
                puVar6 = puVar5;
                if (puVar3 == puVar5 + uVar16) {
                  uVar14 = uVar16 * 2;
                  if (uVar14 < 2) {
                    uVar14 = 1;
                  }
                  if (uVar16 != uVar14) {
                    puVar6 = (undefined4 *)realloc(puVar5,uVar14 << 2);
                    uVar16 = uVar14;
                  }
                  puVar3 = (undefined4 *)((long)puVar6 + ((long)puVar3 - (long)puVar5));
                }
                *puVar3 = uVar13;
                puVar5 = puVar3 + 1;
              }
              else {
                puVar6 = puVar3;
                puVar5 = puVar18;
                if (uVar2 == 0x2060) {
                  puVar7 = __ptr;
                  if (puVar4 == __ptr + uVar21) {
                    uVar14 = uVar21 * 2;
                    if (uVar14 < 2) {
                      uVar14 = 1;
                    }
                    if (uVar21 != uVar14) {
                      puVar7 = (uint *)realloc(__ptr,uVar14 << 2);
                      uVar21 = uVar14;
                    }
                    puVar4 = (uint *)((long)puVar7 + ((long)puVar4 - (long)__ptr));
                  }
                  *puVar4 = uVar1;
                  puVar4 = puVar4 + 1;
                  __ptr = puVar7;
                }
                else if (uVar2 == 0x2028) goto LAB_00487d80;
              }
              puVar3 = puVar6;
              puVar18 = puVar5;
              if (bVar11 == ((uVar2 == 0x2028 || uVar2 == 0x200b) || uVar2 < 0x21)) {
                if (puVar5 == puVar6 + uVar16) {
                  uVar14 = uVar16 * 2;
                  if (uVar14 < 2) {
                    uVar14 = 1;
                  }
                  if (uVar16 != uVar14) {
                    puVar3 = (undefined4 *)realloc(puVar6,uVar14 << 2);
                    uVar16 = uVar14;
                  }
                  puVar5 = (undefined4 *)((long)puVar3 + ((long)puVar5 - (long)puVar6));
                }
                bVar11 = (bool)(bVar11 ^ 1);
                puVar18 = puVar5 + 1;
                *puVar5 = uVar13;
              }
              lVar20 = lVar20 + -4;
              lVar15 = lVar15 + 1;
            } while (lVar20 != 0);
          }
          lVar15 = lVar8;
          lVar20 = lVar8 + 0x90;
        } while (lVar8 + 0x90 != lVar19 + lVar10 * 0x90);
      }
      param_1 = param_1 + 3;
    } while (param_1 != plVar9);
    if (lVar8 != 0) {
      if (bVar11 == false) {
        lVar10 = (long)puVar18 - (long)puVar3;
        if (lVar10 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = puVar18[-1];
        }
        if (puVar18 == puVar3 + uVar16) {
          uVar17 = uVar16 * 2;
          if (uVar17 < 2) {
            uVar17 = 1;
          }
          if (uVar16 != uVar17) {
            puVar3 = (undefined4 *)realloc(puVar3,uVar17 << 2);
            uVar16 = uVar17;
          }
          puVar18 = (undefined4 *)((long)puVar3 + lVar10);
        }
        puVar5 = puVar3 + uVar16;
        puVar6 = puVar18 + 1;
        *puVar18 = uVar13;
      }
      else {
        puVar5 = puVar3 + uVar16;
        puVar6 = puVar18;
      }
      uVar13 = *(undefined4 *)(lVar8 + 0x20);
      if (puVar6 == puVar5) {
        uVar17 = uVar16 * 2;
        lVar10 = (long)puVar6 - (long)puVar3;
        if (uVar17 < 2) {
          uVar17 = 1;
        }
        if (uVar16 != uVar17) {
          puVar3 = (undefined4 *)realloc(puVar3,uVar17 << 2);
          uVar16 = uVar17;
        }
        puVar6 = (undefined4 *)((long)puVar3 + lVar10);
      }
      *puVar6 = uVar13;
      __size = (long)puVar6 + (4 - (long)puVar3);
      uVar17 = (long)__size >> 2;
      if (uVar16 != uVar17) {
        puVar3 = (undefined4 *)realloc(puVar3,__size);
      }
      *(undefined4 **)(lVar8 + 0x68) = puVar3;
      *(ulong *)(lVar8 + 0x70) = uVar17;
      uVar17 = (long)puVar4 - (long)__ptr >> 2;
      if (uVar21 != uVar17) {
        __ptr = (uint *)realloc(__ptr,(long)puVar4 - (long)__ptr);
      }
      puVar3 = (undefined4 *)0x0;
      *(uint **)(lVar8 + 0x80) = __ptr;
      *(ulong *)(lVar8 + 0x88) = uVar17;
      __ptr = (uint *)0x0;
    }
  }
  free(__ptr);
  free(puVar3);
  return;
}


// ===== 004880b8  rive::ResettingComponent::from =====

/* rive::ResettingComponent::from(rive::Component*) */

Component * rive::ResettingComponent::from(Component *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 < 0x22f) {
    if ((1 < uVar1 - 0x1c3) && (uVar1 != 0x5c)) {
      return (Component *)0x0;
    }
  }
  else if (uVar1 != 0x22f) {
    if (uVar1 != 0x265) {
      return (Component *)0x0;
    }
    return param_1 + 0x90;
  }
  return param_1 + 400;
}


// ===== 00488124  rive::Scene::Scene =====

/* rive::Scene::Scene(rive::ArtboardInstance*) */

void __thiscall rive::Scene::Scene(Scene *this,ArtboardInstance *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d6e8;
  *(ArtboardInstance **)(this + 0x10) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 8) = puVar1 + 0xb0;
  return;
}


// ===== 00488140  FUN_00488140 =====

void FUN_00488140(void)

{
  return;
}


// ===== 00488144  FUN_00488144 =====

void FUN_00488144(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x488148);
  (*pcVar1)();
}


// ===== 00488148  rive::Scene::reportKeyedCallback =====

/* rive::Scene::reportKeyedCallback(unsigned int, unsigned int, float) */

void __thiscall
rive::Scene::reportKeyedCallback(Scene *this,uint param_1,uint param_2,float param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  Scene *local_48;
  ulong uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x10) + 0x348))(*(long **)(this + 0x10),param_1);
  uStack_40 = (ulong)(uint)param_3;
  local_48 = this + 8;
  if ((int)param_2 < 0x365) {
    if (param_2 == 0x18b) {
      pcVar3 = *(code **)(*plVar2 + 0x98);
    }
    else {
      if (param_2 != 0x191) goto LAB_004881f0;
      pcVar3 = *(code **)(*plVar2 + 0xa0);
    }
  }
  else if (param_2 == 0x365) {
    pcVar3 = *(code **)(*plVar2 + 0x90);
  }
  else {
    if (param_2 != 0x3f8) goto LAB_004881f0;
    pcVar3 = *(code **)(*plVar2 + 0xa8);
  }
  (*pcVar3)(plVar2,&local_48);
LAB_004881f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048821c  rive::Scene::bindViewModelInstance =====

/* rive::Scene::bindViewModelInstance(rive::rcp<rive::ViewModelInstance>) */

void rive::Scene::bindViewModelInstance(void)

{
  return;
}


// ===== 00488220  rive::Scene::pointerDown =====

/* rive::Scene::pointerDown(rive::Vec2D, int) */

undefined8 rive::Scene::pointerDown(void)

{
  return 0;
}


// ===== 00488228  rive::Scene::pointerMove =====

/* rive::Scene::pointerMove(rive::Vec2D, float, int) */

undefined8 rive::Scene::pointerMove(void)

{
  return 0;
}


// ===== 00488230  rive::Scene::pointerUp =====

/* rive::Scene::pointerUp(rive::Vec2D, int) */

undefined8 rive::Scene::pointerUp(void)

{
  return 0;
}


// ===== 00488238  rive::Scene::pointerExit =====

/* rive::Scene::pointerExit(rive::Vec2D, int) */

undefined8 rive::Scene::pointerExit(void)

{
  return 0;
}


// ===== 00488240  rive::Scene::inputCount =====

/* rive::Scene::inputCount() const */

undefined8 rive::Scene::inputCount(void)

{
  return 0;
}


// ===== 00488248  rive::Scene::input =====

/* rive::Scene::input(unsigned long) const */

undefined8 rive::Scene::input(ulong param_1)

{
  return 0;
}


// ===== 00488250  rive::Scene::getBool =====

/* rive::Scene::getBool(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

undefined8 rive::Scene::getBool(basic_string *param_1)

{
  return 0;
}


// ===== 00488258  rive::Scene::getNumber =====

/* rive::Scene::getNumber(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

undefined8 rive::Scene::getNumber(basic_string *param_1)

{
  return 0;
}


// ===== 00488260  rive::Scene::getTrigger =====

/* rive::Scene::getTrigger(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

undefined8 rive::Scene::getTrigger(basic_string *param_1)

{
  return 0;
}


// ===== 00488268  FUN_00488268 =====

void FUN_00488268(void)

{
  return;
}


// ===== 0048826c  FUN_0048826c =====

void FUN_0048826c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x488270);
  (*pcVar1)();
}


// ===== 00488270  FUN_00488270 =====

void FUN_00488270(void)

{
  return;
}


// ===== 00488274  rive::Scene::width =====

/* rive::Scene::width() const */

undefined4 __thiscall rive::Scene::width(Scene *this)

{
  return *(undefined4 *)(*(long *)(this + 0x10) + 0x174);
}


// ===== 00488280  rive::Scene::height =====

/* rive::Scene::height() const */

undefined4 __thiscall rive::Scene::height(Scene *this)

{
  return *(undefined4 *)(*(long *)(this + 0x10) + 0x178);
}


// ===== 0048828c  rive::Scene::draw =====

/* rive::Scene::draw(rive::Renderer*) */

void rive::Scene::draw(Renderer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00488298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1d8))();
  return;
}


// ===== 0048829c  rive::ScriptInputArtboard::~ScriptInputArtboard =====

/* rive::ScriptInputArtboard::~ScriptInputArtboard() */

void __thiscall rive::ScriptInputArtboard::~ScriptInputArtboard(ScriptInputArtboard *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_vtable_0067d510 + 0xf0;
  puVar2 = PTR_vtable_0067d510 + 0x138;
  *(undefined **)this = PTR_vtable_0067d510 + 0x10;
  *(undefined **)(this + 0x90) = puVar1;
  *(undefined **)(this + 0xb0) = puVar2;
  if (*(long *)(this + 0x98) != 0) {
    plVar3 = (long *)(*(long *)(this + 0x98) + 0x10);
    (**(code **)(*plVar3 + 8))(plVar3,this);
  }
  puVar1 = PTR_vtable_0067d038;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined **)(this + 0x90) = puVar1 + 0x10;
  if ((this[0xa8] != (ScriptInputArtboard)0x0) && (*(long **)(this + 0xa0) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0xa0) + 8))();
  }
  pvVar4 = *(void **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cee0 + 0x10;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x48);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar4;
    operator_delete(pvVar4);
  }
  *(undefined ***)this = &PTR_FUN_00678650;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


// ===== 00488374  rive::ScriptInputArtboard::~ScriptInputArtboard =====

/* rive::ScriptInputArtboard::~ScriptInputArtboard() */

void __thiscall rive::ScriptInputArtboard::~ScriptInputArtboard(ScriptInputArtboard *this)

{
  ~ScriptInputArtboard(this);
  operator_delete(this);
  return;
}


// ===== 00488398  FUN_00488398 =====

undefined8 FUN_00488398(void)

{
  return 0x26d;
}


// ===== 004883a0  FUN_004883a0 =====

undefined8 FUN_004883a0(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0xa7)) && (param_2 != 0x26d)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004883c8  FUN_004883c8 =====

void FUN_004883c8(long param_1,short param_2,long *param_3)

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
        goto LAB_00488528;
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
LAB_00488528:
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
        goto LAB_0048850c;
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
LAB_0048850c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x36c) {
      uVar5 = 0;
      goto LAB_00488570;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00488560;
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
LAB_00488560:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_00488570:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00488594  rive::ScriptInputArtboard::clone =====

/* rive::ScriptInputArtboard::clone() const */

long * __thiscall rive::ScriptInputArtboard::clone(ScriptInputArtboard *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(200);
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
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  puVar1 = PTR_vtable_0067d510;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  *(undefined1 *)(plVar2 + 0x15) = 0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0;
  plVar2[0x16] = (long)(puVar1 + 0x138);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x12] = (long)(puVar1 + 0xf0);
  *(undefined4 *)(plVar2 + 0x11) = *(undefined4 *)(this + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  lVar3 = *(long *)(this + 0xb8);
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  if (lVar3 != 0) {
    (**(code **)(plVar2[0x16] + 0x20))(plVar2 + 0x16);
    plVar2[0x18] = *(long *)(this + 0xc0);
  }
  return plVar2;
}


// ===== 0048866c  rive::ScriptInputArtboard::onAddedClean =====

/* rive::ScriptInputArtboard::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptInputArtboard::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        lVar3 = 0xe0;
        goto LAB_00488704;
      }
      if (uVar1 != 0x27d) {
        return 0;
      }
    }
    lVar3 = 0x178;
  }
  else if (uVar1 < 0x287) {
    if (uVar1 == 0x280) {
      lVar3 = 0xa8;
    }
    else {
      if (uVar1 != 0x286) {
        return 0;
      }
      lVar3 = 0x18;
    }
  }
  else {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return 0;
    }
    lVar3 = 0x10;
  }
LAB_00488704:
  puVar2 = (undefined8 *)((long)plVar4 + lVar3 + 0x10);
  (**(code **)*puVar2)(puVar2,param_1);
  return 0;
}


// ===== 00488728  rive::ScriptInputArtboard::import =====

/* rive::ScriptInputArtboard::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptInputArtboard::import(ScriptInputArtboard *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    if ((uVar11 & 0xffffffff) < 2) {
      uVar6 = (ulong)((uint)uVar5 - 1) & 0x17;
    }
    else {
      uVar6 = 0x17;
      if (uVar5 < 0x18) {
        uVar1 = (uint)uVar5 & 0xff;
        uVar2 = 0;
        if ((uVar5 & 0xff) != 0) {
          uVar2 = 0x17 / uVar1;
        }
        uVar6 = (ulong)(0x17 - uVar2 * uVar1);
      }
    }
    plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == 0x17) {
          if ((short)plVar7[2] == 0x17) {
            if ((BackboardImporter *)plVar7[3] == (BackboardImporter *)0x0) {
              return 1;
            }
            BackboardImporter::addArtboardReferencer
                      ((BackboardImporter *)plVar7[3],(ArtboardReferencer *)(this + 0xb0));
            uVar5 = *(ulong *)(param_1 + 8);
            if (uVar5 == 0) {
              return 1;
            }
            uVar10 = NEON_cnt(uVar5,1);
            uVar9 = NEON_uaddlv(uVar10,1);
            uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
            if ((uVar11 & 0xffffffff) < 2) {
              uVar6 = (ulong)((uint)uVar5 - 1) & 0x25b;
            }
            else {
              uVar6 = 0x25b;
              if (uVar5 < 0x25c) {
                uVar1 = (uint)uVar5 & 0xffff;
                uVar2 = 0;
                if ((uVar5 & 0xffff) != 0) {
                  uVar2 = 0x25b / uVar1;
                }
                uVar6 = (ulong)(0x25b - uVar2 * uVar1);
              }
            }
            plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
            if (plVar7 == (long *)0x0) {
              return 1;
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return 1;
            }
            do {
              uVar8 = plVar7[1];
              if (uVar8 == 0x25b) {
                if ((short)plVar7[2] == 0x25b) {
                  if ((ScriptedObjectImporter *)plVar7[3] == (ScriptedObjectImporter *)0x0) {
                    return 1;
                  }
                  ScriptedObjectImporter::addInput
                            ((ScriptedObjectImporter *)plVar7[3],(CustomProperty *)this);
                  if (*(long **)(this + 0x98) != (long *)0x0) {
                    lVar4 = (**(code **)(**(long **)(this + 0x98) + 0x50))();
                    if (lVar4 != 0) {
                      uVar10 = Component::import((Component *)this,param_1);
                      return uVar10;
                    }
                    return 0;
                  }
                  return 0;
                }
              }
              else {
                if ((uVar11 & 0xffffffff) < 2) {
                  uVar8 = uVar8 & uVar5 - 1;
                }
                else if (uVar5 <= uVar8) {
                  uVar3 = 0;
                  if (uVar5 != 0) {
                    uVar3 = uVar8 / uVar5;
                  }
                  uVar8 = uVar8 - uVar3 * uVar5;
                }
                if (uVar8 != uVar6) {
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
          if ((uVar11 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar5 - 1;
          }
          else if (uVar5 <= uVar8) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar8 / uVar5;
            }
            uVar8 = uVar8 - uVar3 * uVar5;
          }
          if (uVar8 != uVar6) {
            return 1;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 00488914  rive::ScriptInputArtboard::artboardIdChanged =====

/* rive::ScriptInputArtboard::artboardIdChanged() */

void __thiscall rive::ScriptInputArtboard::artboardIdChanged(ScriptInputArtboard *this)

{
  long lVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0xc0);
  if (lVar2 != 0) {
    if ((ulong)*(uint *)(this + 0x88) <
        (ulong)(*(long *)(lVar2 + 0x90) - *(long *)(lVar2 + 0x88) >> 3)) {
      lVar2 = *(long *)(*(long *)(lVar2 + 0x88) + (ulong)*(uint *)(this + 0x88) * 8);
      *(long *)(this + 0xb8) = lVar2;
      if ((lVar2 != 0) &&
         (pSVar3 = *(ScriptedObject **)(this + 0x98), pSVar3 != (ScriptedObject *)0x0)) {
        if (((byte)this[0x10] & 1) == 0) {
          uStack_48 = *(undefined8 *)(this + 0x18);
          local_50 = *(ulong *)(this + 0x10);
          local_40 = *(void **)(this + 0x20);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
          lVar2 = *(long *)(this + 0xb8);
        }
        ScriptedObject::setArtboardInput(pSVar3,&local_50,lVar2);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
      }
    }
    else {
      *(undefined8 *)(this + 0xb8) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004889e4  rive::ScriptInputArtboard::initScriptedValue =====

/* rive::ScriptInputArtboard::initScriptedValue() */

void __thiscall rive::ScriptInputArtboard::initScriptedValue(ScriptInputArtboard *this)

{
  long lVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0xb8);
  if ((lVar2 != 0) && (pSVar3 = *(ScriptedObject **)(this + 0x98), pSVar3 != (ScriptedObject *)0x0))
  {
    if (((byte)this[0x10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x18);
      local_50 = *(ulong *)(this + 0x10);
      local_40 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
      lVar2 = *(long *)(this + 0xb8);
    }
    ScriptedObject::setArtboardInput(pSVar3,&local_50,lVar2);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488a8c  FUN_00488a8c =====

bool FUN_00488a8c(long param_1)

{
  return *(long *)(param_1 + 0xb8) != 0;
}


// ===== 00488a9c  rive::ScriptInputArtboard::validateForColdScriptInit =====

/* rive::ScriptInputArtboard::validateForColdScriptInit() */

undefined8 rive::ScriptInputArtboard::validateForColdScriptInit(void)

{
  return 1;
}


// ===== 00488aa4  rive::ScriptInputArtboard::hydrateScriptInput =====

/* rive::ScriptInputArtboard::hydrateScriptInput() */

bool __thiscall rive::ScriptInputArtboard::hydrateScriptInput(ScriptInputArtboard *this)

{
  (**(code **)(*(long *)this + 0x98))();
  return *(long *)(this + 0xb8) != 0;
}


// ===== 00488ad8  rive::ScriptInputArtboard::validateHydrationPrerequisites =====

/* rive::ScriptInputArtboard::validateHydrationPrerequisites() */

bool __thiscall rive::ScriptInputArtboard::validateHydrationPrerequisites(ScriptInputArtboard *this)

{
  return *(long *)(this + 0xb8) != 0;
}


// ===== 00488ae8  rive::ScriptInputArtboard::updateArtboard =====

/* rive::ScriptInputArtboard::updateArtboard(rive::ViewModelInstanceArtboard*) */

void __thiscall
rive::ScriptInputArtboard::updateArtboard
          (ScriptInputArtboard *this,ViewModelInstanceArtboard *param_1)

{
  long lVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = ArtboardReferencer::findArtboard
                    ((ArtboardReferencer *)this,param_1,*(Artboard **)(this + 0x40),
                     *(File **)(this + 0xc0));
  if (lVar2 != 0) {
    pSVar3 = *(ScriptedObject **)(this + 0x98);
    *(long *)(this + 0xb8) = lVar2;
    if (pSVar3 != (ScriptedObject *)0x0) {
      if (((byte)this[0x10] & 1) == 0) {
        uStack_48 = *(undefined8 *)(this + 0x18);
        local_50 = *(ulong *)(this + 0x10);
        local_40 = *(void **)(this + 0x20);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
        lVar2 = *(long *)(this + 0xb8);
      }
      ScriptedObject::setArtboardInput(pSVar3,&local_50,lVar2);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488ba0  rive::ScriptInputArtboard::referencedArtboardId =====

/* rive::ScriptInputArtboard::referencedArtboardId() */

undefined4 __thiscall rive::ScriptInputArtboard::referencedArtboardId(ScriptInputArtboard *this)

{
  return *(undefined4 *)(this + 0x88);
}


// ===== 00488ba8  rive::ScriptInputArtboard::~ScriptInputArtboard =====

/* non-virtual thunk to rive::ScriptInputArtboard::~ScriptInputArtboard() */

void __thiscall rive::ScriptInputArtboard::~ScriptInputArtboard(ScriptInputArtboard *this)

{
  ~ScriptInputArtboard(this + -0x90);
  return;
}


// ===== 00488bb0  rive::ScriptInputArtboard::~ScriptInputArtboard =====

/* non-virtual thunk to rive::ScriptInputArtboard::~ScriptInputArtboard() */

void __thiscall rive::ScriptInputArtboard::~ScriptInputArtboard(ScriptInputArtboard *this)

{
  ~ScriptInputArtboard(this + -0x90);
  operator_delete(this + -0x90);
  return;
}


// ===== 00488bd8  rive::ScriptInputArtboard::initScriptedValue =====

/* non-virtual thunk to rive::ScriptInputArtboard::initScriptedValue() */

void __thiscall rive::ScriptInputArtboard::initScriptedValue(ScriptInputArtboard *this)

{
  long lVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x28);
  if ((lVar2 != 0) && (pSVar3 = *(ScriptedObject **)(this + 8), pSVar3 != (ScriptedObject *)0x0)) {
    if (((byte)this[-0x80] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + -0x78);
      local_50 = *(ulong *)(this + -0x80);
      local_40 = *(void **)(this + -0x70);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + -0x70),*(ulong *)(this + -0x78));
      lVar2 = *(long *)(this + 0x28);
    }
    ScriptedObject::setArtboardInput(pSVar3,&local_50,lVar2);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488c80  FUN_00488c80 =====

bool FUN_00488c80(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}


// ===== 00488c90  rive::ScriptInputArtboard::validateForColdScriptInit =====

/* non-virtual thunk to rive::ScriptInputArtboard::validateForColdScriptInit() */

undefined8 __thiscall
rive::ScriptInputArtboard::validateForColdScriptInit(ScriptInputArtboard *this)

{
  return 1;
}


// ===== 00488c98  rive::ScriptInputArtboard::hydrateScriptInput =====

/* non-virtual thunk to rive::ScriptInputArtboard::hydrateScriptInput() */

bool __thiscall rive::ScriptInputArtboard::hydrateScriptInput(ScriptInputArtboard *this)

{
  (**(code **)(*(long *)(this + -0x90) + 0x98))(this + -0x90);
  return *(long *)(this + 0x28) != 0;
}


// ===== 00488cd0  rive::ScriptInputArtboard::validateHydrationPrerequisites =====

/* non-virtual thunk to rive::ScriptInputArtboard::validateHydrationPrerequisites() */

bool __thiscall rive::ScriptInputArtboard::validateHydrationPrerequisites(ScriptInputArtboard *this)

{
  return *(long *)(this + 0x28) != 0;
}


// ===== 00488ce0  rive::ScriptInputArtboard::~ScriptInputArtboard =====

/* non-virtual thunk to rive::ScriptInputArtboard::~ScriptInputArtboard() */

void __thiscall rive::ScriptInputArtboard::~ScriptInputArtboard(ScriptInputArtboard *this)

{
  ~ScriptInputArtboard(this + -0xb0);
  return;
}


// ===== 00488ce8  rive::ScriptInputArtboard::~ScriptInputArtboard =====

/* non-virtual thunk to rive::ScriptInputArtboard::~ScriptInputArtboard() */

void __thiscall rive::ScriptInputArtboard::~ScriptInputArtboard(ScriptInputArtboard *this)

{
  ~ScriptInputArtboard(this + -0xb0);
  operator_delete(this + -0xb0);
  return;
}


// ===== 00488d10  rive::ScriptInputArtboard::updateArtboard =====

/* non-virtual thunk to rive::ScriptInputArtboard::updateArtboard(rive::ViewModelInstanceArtboard*)
    */

void __thiscall
rive::ScriptInputArtboard::updateArtboard
          (ScriptInputArtboard *this,ViewModelInstanceArtboard *param_1)

{
  updateArtboard(this + -0xb0,param_1);
  return;
}


// ===== 00488d18  rive::ScriptInputArtboard::referencedArtboardId =====

/* non-virtual thunk to rive::ScriptInputArtboard::referencedArtboardId() */

undefined4 __thiscall rive::ScriptInputArtboard::referencedArtboardId(ScriptInputArtboard *this)

{
  return *(undefined4 *)(this + -0x28);
}


// ===== 00488d20  FUN_00488d20 =====

void FUN_00488d20(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 00488d28  rive::ScriptInputArtboard::syncReferencedArtboard =====

/* rive::ScriptInputArtboard::syncReferencedArtboard() */

void __thiscall rive::ScriptInputArtboard::syncReferencedArtboard(ScriptInputArtboard *this)

{
  long lVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0xb8);
  if ((lVar2 != 0) && (pSVar3 = *(ScriptedObject **)(this + 0x98), pSVar3 != (ScriptedObject *)0x0))
  {
    if (((byte)this[0x10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x18);
      local_50 = *(ulong *)(this + 0x10);
      local_40 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
      lVar2 = *(long *)(this + 0xb8);
    }
    ScriptedObject::setArtboardInput(pSVar3,&local_50,lVar2);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488dd0  rive::ScriptInputArtboardBase::clone =====

/* rive::ScriptInputArtboardBase::clone() const */

long * __thiscall rive::ScriptInputArtboardBase::clone(ScriptInputArtboardBase *this)

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
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  puVar2 = PTR_vtable_0067d510;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *(undefined1 *)(plVar3 + 0x15) = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x12] = (long)(puVar2 + 0xf0);
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0x16] = (long)(puVar2 + 0x138);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 00488e7c  FUN_00488e7c =====

void FUN_00488e7c(long *param_1)

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


// ===== 00488ee8  FUN_00488ee8 =====

void FUN_00488ee8(void)

{
  return;
}


// ===== 00488eec  rive::ScriptInputBoolean::~ScriptInputBoolean =====

/* rive::ScriptInputBoolean::~ScriptInputBoolean() */

void __thiscall rive::ScriptInputBoolean::~ScriptInputBoolean(ScriptInputBoolean *this)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_vtable_0067d438 + 200;
  *(undefined **)this = PTR_vtable_0067d438 + 0x10;
  *(undefined **)(this + 0x90) = puVar1;
  if (*(long *)(this + 0x98) != 0) {
    plVar2 = (long *)(*(long *)(this + 0x98) + 0x10);
    (**(code **)(*plVar2 + 8))(plVar2,this);
  }
  *(undefined **)(this + 0x90) = PTR_vtable_0067d038 + 0x10;
  if ((this[0xa8] != (ScriptInputBoolean)0x0) && (*(long **)(this + 0xa0) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0xa0) + 8))();
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


// ===== 00488fb8  rive::ScriptInputBoolean::~ScriptInputBoolean =====

/* rive::ScriptInputBoolean::~ScriptInputBoolean() */

void __thiscall rive::ScriptInputBoolean::~ScriptInputBoolean(ScriptInputBoolean *this)

{
  ~ScriptInputBoolean(this);
  operator_delete(this);
  return;
}


// ===== 00488fdc  FUN_00488fdc =====

undefined8 FUN_00488fdc(void)

{
  return 0x277;
}


// ===== 00488fe4  FUN_00488fe4 =====

undefined8 FUN_00488fe4(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0xa7) {
    if ((param_2 != 10) && (param_2 != 0x81)) {
      return 0;
    }
  }
  else if ((param_2 != 0xa7) && (param_2 != 0x277)) {
    return 0;
  }
  return 1;
}


// ===== 00489020  rive::ScriptInputBoolean::onAddedClean =====

/* rive::ScriptInputBoolean::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptInputBoolean::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        lVar3 = 0xe0;
        goto LAB_004890b8;
      }
      if (uVar1 != 0x27d) {
        return 0;
      }
    }
    lVar3 = 0x178;
  }
  else if (uVar1 < 0x287) {
    if (uVar1 == 0x280) {
      lVar3 = 0xa8;
    }
    else {
      if (uVar1 != 0x286) {
        return 0;
      }
      lVar3 = 0x18;
    }
  }
  else {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return 0;
    }
    lVar3 = 0x10;
  }
LAB_004890b8:
  puVar2 = (undefined8 *)((long)plVar4 + lVar3 + 0x10);
  (**(code **)*puVar2)(puVar2,param_1);
  return 0;
}


// ===== 004890dc  rive::ScriptInputBoolean::import =====

/* rive::ScriptInputBoolean::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptInputBoolean::import(ScriptInputBoolean *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x25b;
    }
    else {
      uVar7 = 0x25b;
      if (uVar5 < 0x25c) {
        uVar3 = (uint)uVar5 & 0xffff;
        uVar1 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar1 = 0x25b / uVar3;
        }
        uVar7 = (ulong)(0x25b - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x25b) {
          if ((short)plVar8[2] == 0x25b) {
            lVar10 = plVar8[3];
            if (lVar10 == 0) {
              return 1;
            }
            uVar3 = (**(code **)(*(long *)this + 0x10))();
            uVar3 = (uVar3 & 0xffff) - 0x263;
            if ((uVar3 < 0x15) && ((1 << (ulong)(uVar3 & 0x1f) & 0x118483U) != 0)) {
              puVar4 = (undefined8 *)(*(long *)(lVar10 + 8) + 0x10);
              (**(code **)*puVar4)(puVar4,this);
            }
            if (*(long **)(this + 0x98) != (long *)0x0) {
              lVar10 = (**(code **)(**(long **)(this + 0x98) + 0x50))();
              if (lVar10 != 0) {
                uVar12 = Component::import((Component *)this,param_1);
                return uVar12;
              }
              return 0;
            }
            return 0;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar7) {
            return 1;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 0048923c  rive::ScriptInputBoolean::propertyValueChanged =====

/* rive::ScriptInputBoolean::propertyValueChanged() */

void __thiscall rive::ScriptInputBoolean::propertyValueChanged(ScriptInputBoolean *this)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(this + 0x98);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if (((byte)this[0x10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x18);
      local_50 = *(ulong *)(this + 0x10);
      local_40 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
    }
    ScriptedObject::setBooleanInput(pSVar2,&local_50,this[0x88]);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004892e0  FUN_004892e0 =====

void FUN_004892e0(long param_1)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(param_1 + 0x98);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      local_50 = *(ulong *)(param_1 + 0x10);
      local_40 = *(void **)(param_1 + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
    }
    rive::ScriptedObject::setBooleanInput(pSVar2,&local_50,*(undefined1 *)(param_1 + 0x88));
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00489384  FUN_00489384 =====

undefined8 FUN_00489384(void)

{
  return 1;
}


// ===== 0048938c  rive::ScriptInputBoolean::~ScriptInputBoolean =====

/* non-virtual thunk to rive::ScriptInputBoolean::~ScriptInputBoolean() */

void __thiscall rive::ScriptInputBoolean::~ScriptInputBoolean(ScriptInputBoolean *this)

{
  ~ScriptInputBoolean(this + -0x90);
  return;
}


// ===== 00489394  rive::ScriptInputBoolean::~ScriptInputBoolean =====

/* non-virtual thunk to rive::ScriptInputBoolean::~ScriptInputBoolean() */

void __thiscall rive::ScriptInputBoolean::~ScriptInputBoolean(ScriptInputBoolean *this)

{
  ~ScriptInputBoolean(this + -0x90);
  operator_delete(this + -0x90);
  return;
}


// ===== 004893bc  FUN_004893bc =====

void FUN_004893bc(long param_1)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(param_1 + 8);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if ((*(byte *)(param_1 + -0x80) & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + -0x78);
      local_50 = *(ulong *)(param_1 + -0x80);
      local_40 = *(void **)(param_1 + -0x70);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_1 + -0x70),*(ulong *)(param_1 + -0x78));
    }
    rive::ScriptedObject::setBooleanInput(pSVar2,&local_50,*(undefined1 *)(param_1 + -8));
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00489460  FUN_00489460 =====

undefined8 FUN_00489460(void)

{
  return 1;
}


// ===== 00489468  rive::ScriptInputBooleanBase::clone =====

/* rive::ScriptInputBooleanBase::clone() const */

long * __thiscall rive::ScriptInputBooleanBase::clone(ScriptInputBooleanBase *this)

{
  ScriptInputBooleanBase SVar1;
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
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  puVar2 = PTR_vtable_0067d438;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *(undefined1 *)(plVar3 + 0x15) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  SVar1 = this[0x88];
  plVar3[0x12] = (long)(puVar2 + 200);
  *(ScriptInputBooleanBase *)(plVar3 + 0x11) = SVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 00489508  FUN_00489508 =====

void FUN_00489508(long *param_1)

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


// ===== 00489574  rive::ScriptInputColor::~ScriptInputColor =====

/* rive::ScriptInputColor::~ScriptInputColor() */

void __thiscall rive::ScriptInputColor::~ScriptInputColor(ScriptInputColor *this)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_vtable_0067d440 + 200;
  *(undefined **)this = PTR_vtable_0067d440 + 0x10;
  *(undefined **)(this + 0x90) = puVar1;
  if (*(long *)(this + 0x98) != 0) {
    plVar2 = (long *)(*(long *)(this + 0x98) + 0x10);
    (**(code **)(*plVar2 + 8))(plVar2,this);
  }
  *(undefined **)(this + 0x90) = PTR_vtable_0067d038 + 0x10;
  if ((this[0xa8] != (ScriptInputColor)0x0) && (*(long **)(this + 0xa0) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0xa0) + 8))();
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


// ===== 00489640  rive::ScriptInputColor::~ScriptInputColor =====

/* rive::ScriptInputColor::~ScriptInputColor() */

void __thiscall rive::ScriptInputColor::~ScriptInputColor(ScriptInputColor *this)

{
  ~ScriptInputColor(this);
  operator_delete(this);
  return;
}


// ===== 00489664  FUN_00489664 =====

undefined8 FUN_00489664(void)

{
  return 0x272;
}


// ===== 0048966c  FUN_0048966c =====

undefined8 FUN_0048966c(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0x250) {
    if ((param_2 != 10) && (param_2 != 0xa7)) {
      return 0;
    }
  }
  else if ((param_2 != 0x250) && (param_2 != 0x272)) {
    return 0;
  }
  return 1;
}


// ===== 004896a8  rive::ScriptInputColor::onAddedClean =====

/* rive::ScriptInputColor::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptInputColor::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        lVar3 = 0xe0;
        goto LAB_00489740;
      }
      if (uVar1 != 0x27d) {
        return 0;
      }
    }
    lVar3 = 0x178;
  }
  else if (uVar1 < 0x287) {
    if (uVar1 == 0x280) {
      lVar3 = 0xa8;
    }
    else {
      if (uVar1 != 0x286) {
        return 0;
      }
      lVar3 = 0x18;
    }
  }
  else {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return 0;
    }
    lVar3 = 0x10;
  }
LAB_00489740:
  puVar2 = (undefined8 *)((long)plVar4 + lVar3 + 0x10);
  (**(code **)*puVar2)(puVar2,param_1);
  return 0;
}


// ===== 00489764  rive::ScriptInputColor::import =====

/* rive::ScriptInputColor::import(rive::ImportStack&) */

undefined8 __thiscall rive::ScriptInputColor::import(ScriptInputColor *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x25b;
    }
    else {
      uVar7 = 0x25b;
      if (uVar5 < 0x25c) {
        uVar3 = (uint)uVar5 & 0xffff;
        uVar1 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar1 = 0x25b / uVar3;
        }
        uVar7 = (ulong)(0x25b - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x25b) {
          if ((short)plVar8[2] == 0x25b) {
            lVar10 = plVar8[3];
            if (lVar10 == 0) {
              return 1;
            }
            uVar3 = (**(code **)(*(long *)this + 0x10))();
            uVar3 = (uVar3 & 0xffff) - 0x263;
            if ((uVar3 < 0x15) && ((1 << (ulong)(uVar3 & 0x1f) & 0x118483U) != 0)) {
              puVar4 = (undefined8 *)(*(long *)(lVar10 + 8) + 0x10);
              (**(code **)*puVar4)(puVar4,this);
            }
            if (*(long **)(this + 0x98) != (long *)0x0) {
              lVar10 = (**(code **)(**(long **)(this + 0x98) + 0x50))();
              if (lVar10 != 0) {
                uVar12 = Component::import((Component *)this,param_1);
                return uVar12;
              }
              return 0;
            }
            return 0;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar7) {
            return 1;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 004898c4  rive::ScriptInputColor::propertyValueChanged =====

/* rive::ScriptInputColor::propertyValueChanged() */

void __thiscall rive::ScriptInputColor::propertyValueChanged(ScriptInputColor *this)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(this + 0x98);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if (((byte)this[0x10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x18);
      local_50 = *(ulong *)(this + 0x10);
      local_40 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
    }
    ScriptedObject::setIntegerInput(pSVar2,&local_50,*(undefined4 *)(this + 0x88));
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00489968  FUN_00489968 =====

void FUN_00489968(long param_1)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(param_1 + 0x98);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      local_50 = *(ulong *)(param_1 + 0x10);
      local_40 = *(void **)(param_1 + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
    }
    rive::ScriptedObject::setIntegerInput(pSVar2,&local_50,*(undefined4 *)(param_1 + 0x88));
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00489a0c  FUN_00489a0c =====

undefined8 FUN_00489a0c(void)

{
  return 1;
}


// ===== 00489a14  rive::ScriptInputColor::~ScriptInputColor =====

/* non-virtual thunk to rive::ScriptInputColor::~ScriptInputColor() */

void __thiscall rive::ScriptInputColor::~ScriptInputColor(ScriptInputColor *this)

{
  ~ScriptInputColor(this + -0x90);
  return;
}


// ===== 00489a1c  rive::ScriptInputColor::~ScriptInputColor =====

/* non-virtual thunk to rive::ScriptInputColor::~ScriptInputColor() */

void __thiscall rive::ScriptInputColor::~ScriptInputColor(ScriptInputColor *this)

{
  ~ScriptInputColor(this + -0x90);
  operator_delete(this + -0x90);
  return;
}


// ===== 00489a44  FUN_00489a44 =====

void FUN_00489a44(long param_1)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(param_1 + 8);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if ((*(byte *)(param_1 + -0x80) & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + -0x78);
      local_50 = *(ulong *)(param_1 + -0x80);
      local_40 = *(void **)(param_1 + -0x70);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_1 + -0x70),*(ulong *)(param_1 + -0x78));
    }
    rive::ScriptedObject::setIntegerInput(pSVar2,&local_50,*(undefined4 *)(param_1 + -8));
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00489ae8  FUN_00489ae8 =====

undefined8 FUN_00489ae8(void)

{
  return 1;
}


// ===== 00489af0  rive::ScriptInputColorBase::clone =====

/* rive::ScriptInputColorBase::clone() const */

long * __thiscall rive::ScriptInputColorBase::clone(ScriptInputColorBase *this)

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
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  puVar2 = PTR_vtable_0067d440;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *(undefined1 *)(plVar3 + 0x15) = 0;
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


// ===== 00489b90  FUN_00489b90 =====

void FUN_00489b90(long *param_1)

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


// ===== 00489bfc  rive::ScriptInputNumber::~ScriptInputNumber =====

/* rive::ScriptInputNumber::~ScriptInputNumber() */

void __thiscall rive::ScriptInputNumber::~ScriptInputNumber(ScriptInputNumber *this)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_vtable_0067d318 + 200;
  *(undefined **)this = PTR_vtable_0067d318 + 0x10;
  *(undefined **)(this + 0x90) = puVar1;
  if (*(long *)(this + 0x98) != 0) {
    plVar2 = (long *)(*(long *)(this + 0x98) + 0x10);
    (**(code **)(*plVar2 + 8))(plVar2,this);
  }
  *(undefined **)(this + 0x90) = PTR_vtable_0067d038 + 0x10;
  if ((this[0xa8] != (ScriptInputNumber)0x0) && (*(long **)(this + 0xa0) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0xa0) + 8))();
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


// ===== 00489cc8  rive::ScriptInputNumber::~ScriptInputNumber =====

/* rive::ScriptInputNumber::~ScriptInputNumber() */

void __thiscall rive::ScriptInputNumber::~ScriptInputNumber(ScriptInputNumber *this)

{
  ~ScriptInputNumber(this);
  operator_delete(this);
  return;
}


// ===== 00489cec  FUN_00489cec =====

undefined8 FUN_00489cec(void)

{
  return 0x263;
}


// ===== 00489cf4  FUN_00489cf4 =====

undefined8 FUN_00489cf4(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0xa7) {
    if ((param_2 != 10) && (param_2 != 0x7f)) {
      return 0;
    }
  }
  else if ((param_2 != 0xa7) && (param_2 != 0x263)) {
    return 0;
  }
  return 1;
}


// ===== 00489d30  rive::ScriptInputNumber::onAddedClean =====

/* rive::ScriptInputNumber::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptInputNumber::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        lVar3 = 0xe0;
        goto LAB_00489dc8;
      }
      if (uVar1 != 0x27d) {
        return 0;
      }
    }
    lVar3 = 0x178;
  }
  else if (uVar1 < 0x287) {
    if (uVar1 == 0x280) {
      lVar3 = 0xa8;
    }
    else {
      if (uVar1 != 0x286) {
        return 0;
      }
      lVar3 = 0x18;
    }
  }
  else {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return 0;
    }
    lVar3 = 0x10;
  }
LAB_00489dc8:
  puVar2 = (undefined8 *)((long)plVar4 + lVar3 + 0x10);
  (**(code **)*puVar2)(puVar2,param_1);
  return 0;
}


// ===== 00489dec  rive::ScriptInputNumber::import =====

/* rive::ScriptInputNumber::import(rive::ImportStack&) */

undefined8 __thiscall rive::ScriptInputNumber::import(ScriptInputNumber *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x25b;
    }
    else {
      uVar7 = 0x25b;
      if (uVar5 < 0x25c) {
        uVar3 = (uint)uVar5 & 0xffff;
        uVar1 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar1 = 0x25b / uVar3;
        }
        uVar7 = (ulong)(0x25b - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x25b) {
          if ((short)plVar8[2] == 0x25b) {
            lVar10 = plVar8[3];
            if (lVar10 == 0) {
              return 1;
            }
            uVar3 = (**(code **)(*(long *)this + 0x10))();
            uVar3 = (uVar3 & 0xffff) - 0x263;
            if ((uVar3 < 0x15) && ((1 << (ulong)(uVar3 & 0x1f) & 0x118483U) != 0)) {
              puVar4 = (undefined8 *)(*(long *)(lVar10 + 8) + 0x10);
              (**(code **)*puVar4)(puVar4,this);
            }
            if (*(long **)(this + 0x98) != (long *)0x0) {
              lVar10 = (**(code **)(**(long **)(this + 0x98) + 0x50))();
              if (lVar10 != 0) {
                uVar12 = Component::import((Component *)this,param_1);
                return uVar12;
              }
              return 0;
            }
            return 0;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar7) {
            return 1;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 00489f4c  rive::ScriptInputNumber::propertyValueChanged =====

/* rive::ScriptInputNumber::propertyValueChanged() */

void __thiscall rive::ScriptInputNumber::propertyValueChanged(ScriptInputNumber *this)

{
  long lVar1;
  long lVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x98);
  if (lVar2 != 0) {
    if (((byte)this[0x10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x18);
      local_50 = *(ulong *)(this + 0x10);
      local_40 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
    }
    ScriptedObject::setNumberInput(*(undefined4 *)(this + 0x88),lVar2,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00489ff0  FUN_00489ff0 =====

void FUN_00489ff0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      local_50 = *(ulong *)(param_1 + 0x10);
      local_40 = *(void **)(param_1 + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
    }
    rive::ScriptedObject::setNumberInput(*(undefined4 *)(param_1 + 0x88),lVar2,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048a094  FUN_0048a094 =====

undefined8 FUN_0048a094(void)

{
  return 1;
}


// ===== 0048a09c  rive::ScriptInputNumber::~ScriptInputNumber =====

/* non-virtual thunk to rive::ScriptInputNumber::~ScriptInputNumber() */

void __thiscall rive::ScriptInputNumber::~ScriptInputNumber(ScriptInputNumber *this)

{
  ~ScriptInputNumber(this + -0x90);
  return;
}


// ===== 0048a0a4  rive::ScriptInputNumber::~ScriptInputNumber =====

/* non-virtual thunk to rive::ScriptInputNumber::~ScriptInputNumber() */

void __thiscall rive::ScriptInputNumber::~ScriptInputNumber(ScriptInputNumber *this)

{
  ~ScriptInputNumber(this + -0x90);
  operator_delete(this + -0x90);
  return;
}


// ===== 0048a0cc  FUN_0048a0cc =====

void FUN_0048a0cc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    if ((*(byte *)(param_1 + -0x80) & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + -0x78);
      local_50 = *(ulong *)(param_1 + -0x80);
      local_40 = *(void **)(param_1 + -0x70);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_1 + -0x70),*(ulong *)(param_1 + -0x78));
    }
    rive::ScriptedObject::setNumberInput(*(undefined4 *)(param_1 + -8),lVar2,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048a170  FUN_0048a170 =====

undefined8 FUN_0048a170(void)

{
  return 1;
}


// ===== 0048a178  rive::ScriptInputNumberBase::clone =====

/* rive::ScriptInputNumberBase::clone() const */

long * __thiscall rive::ScriptInputNumberBase::clone(ScriptInputNumberBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  
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
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  puVar1 = PTR_vtable_0067d318;
  uVar3 = *(undefined4 *)(this + 0x88);
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  *(undefined1 *)(plVar2 + 0x15) = 0;
  *(undefined4 *)(plVar2 + 0x11) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x12] = (long)(puVar1 + 200);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 0048a218  FUN_0048a218 =====

void FUN_0048a218(long *param_1)

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


// ===== 0048a284  rive::ScriptInputString::~ScriptInputString =====

/* rive::ScriptInputString::~ScriptInputString() */

void __thiscall rive::ScriptInputString::~ScriptInputString(ScriptInputString *this)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_vtable_0067d468 + 200;
  *(undefined **)this = PTR_vtable_0067d468 + 0x10;
  *(undefined **)(this + 0xa0) = puVar1;
  if (*(long *)(this + 0xa8) != 0) {
    plVar2 = (long *)(*(long *)(this + 0xa8) + 0x10);
    (**(code **)(*plVar2 + 8))(plVar2,this);
  }
  *(undefined **)(this + 0xa0) = PTR_vtable_0067d038 + 0x10;
  if ((this[0xb8] != (ScriptInputString)0x0) && (*(long **)(this + 0xb0) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
  }
  *(undefined **)this = PTR_vtable_0067d460 + 0x10;
  if (((byte)this[0x88] & 1) != 0) {
    operator_delete(*(void **)(this + 0x98));
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


// ===== 0048a370  rive::ScriptInputString::~ScriptInputString =====

/* rive::ScriptInputString::~ScriptInputString() */

void __thiscall rive::ScriptInputString::~ScriptInputString(ScriptInputString *this)

{
  ~ScriptInputString(this);
  operator_delete(this);
  return;
}


// ===== 0048a394  FUN_0048a394 =====

undefined8 FUN_0048a394(void)

{
  return 0x273;
}


// ===== 0048a39c  FUN_0048a39c =====

undefined8 FUN_0048a39c(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0xa7) {
    if ((param_2 != 10) && (param_2 != 0x82)) {
      return 0;
    }
  }
  else if ((param_2 != 0xa7) && (param_2 != 0x273)) {
    return 0;
  }
  return 1;
}


// ===== 0048a3d8  rive::ScriptInputString::onAddedClean =====

/* rive::ScriptInputString::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptInputString::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        lVar3 = 0xe0;
        goto LAB_0048a470;
      }
      if (uVar1 != 0x27d) {
        return 0;
      }
    }
    lVar3 = 0x178;
  }
  else if (uVar1 < 0x287) {
    if (uVar1 == 0x280) {
      lVar3 = 0xa8;
    }
    else {
      if (uVar1 != 0x286) {
        return 0;
      }
      lVar3 = 0x18;
    }
  }
  else {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return 0;
    }
    lVar3 = 0x10;
  }
LAB_0048a470:
  puVar2 = (undefined8 *)((long)plVar4 + lVar3 + 0x10);
  (**(code **)*puVar2)(puVar2,param_1);
  return 0;
}


// ===== 0048a494  rive::ScriptInputString::import =====

/* rive::ScriptInputString::import(rive::ImportStack&) */

undefined8 __thiscall rive::ScriptInputString::import(ScriptInputString *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x25b;
    }
    else {
      uVar7 = 0x25b;
      if (uVar5 < 0x25c) {
        uVar3 = (uint)uVar5 & 0xffff;
        uVar1 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar1 = 0x25b / uVar3;
        }
        uVar7 = (ulong)(0x25b - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x25b) {
          if ((short)plVar8[2] == 0x25b) {
            lVar10 = plVar8[3];
            if (lVar10 == 0) {
              return 1;
            }
            uVar3 = (**(code **)(*(long *)this + 0x10))();
            uVar3 = (uVar3 & 0xffff) - 0x263;
            if ((uVar3 < 0x15) && ((1 << (ulong)(uVar3 & 0x1f) & 0x118483U) != 0)) {
              puVar4 = (undefined8 *)(*(long *)(lVar10 + 8) + 0x10);
              (**(code **)*puVar4)(puVar4,this);
            }
            if (*(long **)(this + 0xa8) != (long *)0x0) {
              lVar10 = (**(code **)(**(long **)(this + 0xa8) + 0x50))();
              if (lVar10 != 0) {
                uVar12 = Component::import((Component *)this,param_1);
                return uVar12;
              }
              return 0;
            }
            return 0;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar7) {
            return 1;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 0048a5f4  rive::ScriptInputString::propertyValueChanged =====

/* rive::ScriptInputString::propertyValueChanged() */

void __thiscall rive::ScriptInputString::propertyValueChanged(ScriptInputString *this)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(this + 0xa8);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if (((byte)this[0x10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x18);
      local_50 = *(ulong *)(this + 0x10);
      local_40 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
    }
    if (((byte)this[0x88] & 1) == 0) {
      uStack_68 = *(undefined8 *)(this + 0x90);
      local_70 = *(ulong *)(this + 0x88);
      local_60 = *(void **)(this + 0x98);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,*(char **)(this + 0x98),*(ulong *)(this + 0x90));
    }
    ScriptedObject::setStringInput(pSVar2,&local_50,&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048a6d4  FUN_0048a6d4 =====

void FUN_0048a6d4(long param_1)

{
  long lVar1;
  ScriptedObject *pSVar2;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(ScriptedObject **)(param_1 + 0xa8);
  if (pSVar2 != (ScriptedObject *)0x0) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      local_50 = *(ulong *)(param_1 + 0x10);
      local_40 = *(void **)(param_1 + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
    }
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      uStack_68 = *(undefined8 *)(param_1 + 0x90);
      local_70 = *(ulong *)(param_1 + 0x88);
      local_60 = *(void **)(param_1 + 0x98);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,*(char **)(param_1 + 0x98),*(ulong *)(param_1 + 0x90));
    }
    rive::ScriptedObject::setStringInput(pSVar2,&local_50,&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048a7b4  FUN_0048a7b4 =====

undefined8 FUN_0048a7b4(void)

{
  return 1;
}


// ===== 0048a7bc  rive::ScriptInputString::~ScriptInputString =====

/* non-virtual thunk to rive::ScriptInputString::~ScriptInputString() */

void __thiscall rive::ScriptInputString::~ScriptInputString(ScriptInputString *this)

{
  ~ScriptInputString(this + -0xa0);
  return;
}


// ===== 0048a7c4  rive::ScriptInputString::~ScriptInputString =====

/* non-virtual thunk to rive::ScriptInputString::~ScriptInputString() */

void __thiscall rive::ScriptInputString::~ScriptInputString(ScriptInputString *this)

{
  ~ScriptInputString(this + -0xa0);
  operator_delete(this + -0xa0);
  return;
}


// ===== 0048a7ec  FUN_0048a7ec =====

void FUN_0048a7ec(long param_1)

{
  FUN_0048a6d4(param_1 + -0xa0);
  return;
}


// ===== 0048a7f4  FUN_0048a7f4 =====

undefined8 FUN_0048a7f4(void)

{
  return 1;
}


// ===== 0048a7fc  rive::ScriptInputStringBase::clone =====

/* rive::ScriptInputStringBase::clone() const */

long * __thiscall rive::ScriptInputStringBase::clone(ScriptInputStringBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0xc0);
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
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  puVar1 = PTR_vtable_0067d468;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  *(undefined1 *)(plVar2 + 0x17) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x14] = (long)(puVar1 + 200);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 0x11),(basic_string *)(this + 0x88));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 0048a8b0  FUN_0048a8b0 =====

void FUN_0048a8b0(long *param_1)

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


// ===== 0048a93c  rive::ScriptInputTrigger::~ScriptInputTrigger =====

/* rive::ScriptInputTrigger::~ScriptInputTrigger() */

void __thiscall rive::ScriptInputTrigger::~ScriptInputTrigger(ScriptInputTrigger *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_vtable_0067d2c8 + 0xd0;
  puVar2 = PTR_vtable_0067d2c8 + 0xe8;
  *(undefined **)this = PTR_vtable_0067d2c8 + 0x10;
  *(undefined **)(this + 0x90) = puVar1;
  *(undefined **)(this + 0x98) = puVar2;
  if (*(long *)(this + 0xa0) != 0) {
    plVar3 = (long *)(*(long *)(this + 0xa0) + 0x10);
    (**(code **)(*plVar3 + 8))(plVar3,this);
  }
  *(undefined **)(this + 0x98) = PTR_vtable_0067d038 + 0x10;
  if ((this[0xb0] != (ScriptInputTrigger)0x0) && (*(long **)(this + 0xa8) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0xa8) + 8))();
  }
  pvVar4 = *(void **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cee0 + 0x10;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x48);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar4;
    operator_delete(pvVar4);
  }
  *(undefined ***)this = &PTR_FUN_00678650;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


// ===== 0048aa0c  rive::ScriptInputTrigger::~ScriptInputTrigger =====

/* rive::ScriptInputTrigger::~ScriptInputTrigger() */

void __thiscall rive::ScriptInputTrigger::~ScriptInputTrigger(ScriptInputTrigger *this)

{
  ~ScriptInputTrigger(this);
  operator_delete(this);
  return;
}


// ===== 0048aa30  FUN_0048aa30 =====

undefined8 FUN_0048aa30(void)

{
  return 0x26a;
}


// ===== 0048aa38  FUN_0048aa38 =====

undefined8 FUN_0048aa38(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0x265) {
    if ((param_2 != 10) && (param_2 != 0xa7)) {
      return 0;
    }
  }
  else if ((param_2 != 0x265) && (param_2 != 0x26a)) {
    return 0;
  }
  return 1;
}


// ===== 0048aa74  rive::ScriptInputTrigger::onAddedClean =====

/* rive::ScriptInputTrigger::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptInputTrigger::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        lVar3 = 0xe0;
        goto LAB_0048ab0c;
      }
      if (uVar1 != 0x27d) {
        return 0;
      }
    }
    lVar3 = 0x178;
  }
  else if (uVar1 < 0x287) {
    if (uVar1 == 0x280) {
      lVar3 = 0xa8;
    }
    else {
      if (uVar1 != 0x286) {
        return 0;
      }
      lVar3 = 0x18;
    }
  }
  else {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return 0;
    }
    lVar3 = 0x10;
  }
LAB_0048ab0c:
  puVar2 = (undefined8 *)((long)plVar4 + lVar3 + 0x10);
  (**(code **)*puVar2)(puVar2,param_1);
  return 0;
}


// ===== 0048ab30  rive::ScriptInputTrigger::import =====

/* rive::ScriptInputTrigger::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptInputTrigger::import(ScriptInputTrigger *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x25b;
    }
    else {
      uVar7 = 0x25b;
      if (uVar5 < 0x25c) {
        uVar3 = (uint)uVar5 & 0xffff;
        uVar1 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar1 = 0x25b / uVar3;
        }
        uVar7 = (ulong)(0x25b - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x25b) {
          if ((short)plVar8[2] == 0x25b) {
            lVar10 = plVar8[3];
            if (lVar10 == 0) {
              return 1;
            }
            uVar3 = (**(code **)(*(long *)this + 0x10))();
            uVar3 = (uVar3 & 0xffff) - 0x263;
            if ((uVar3 < 0x15) && ((1 << (ulong)(uVar3 & 0x1f) & 0x118483U) != 0)) {
              puVar4 = (undefined8 *)(*(long *)(lVar10 + 8) + 0x10);
              (**(code **)*puVar4)(puVar4,this);
            }
            if (*(long **)(this + 0xa0) != (long *)0x0) {
              lVar10 = (**(code **)(**(long **)(this + 0xa0) + 0x50))();
              if (lVar10 != 0) {
                uVar12 = Component::import((Component *)this,param_1);
                return uVar12;
              }
              return 0;
            }
            return 0;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar7) {
            return 1;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 0048ac90  rive::ScriptInputTrigger::propertyValueChanged =====

/* rive::ScriptInputTrigger::propertyValueChanged() */

void __thiscall rive::ScriptInputTrigger::propertyValueChanged(ScriptInputTrigger *this)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x88) != 0) {
    uVar2 = *(undefined8 *)(this + 0xa0);
    if (((byte)this[0x10] & 1) == 0) {
      uStack_38 = *(undefined8 *)(this + 0x18);
      local_40 = *(ulong *)(this + 0x10);
      local_30 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_40,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
    }
    ScriptedObject::trigger(uVar2,&local_40);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048ad24  FUN_0048ad24 =====

undefined8 FUN_0048ad24(void)

{
  return 1;
}


// ===== 0048ad2c  rive::ScriptInputTrigger::~ScriptInputTrigger =====

/* non-virtual thunk to rive::ScriptInputTrigger::~ScriptInputTrigger() */

void __thiscall rive::ScriptInputTrigger::~ScriptInputTrigger(ScriptInputTrigger *this)

{
  ~ScriptInputTrigger(this + -0x98);
  return;
}


// ===== 0048ad34  rive::ScriptInputTrigger::~ScriptInputTrigger =====

/* non-virtual thunk to rive::ScriptInputTrigger::~ScriptInputTrigger() */

void __thiscall rive::ScriptInputTrigger::~ScriptInputTrigger(ScriptInputTrigger *this)

{
  ~ScriptInputTrigger(this + -0x98);
  operator_delete(this + -0x98);
  return;
}


// ===== 0048ad5c  FUN_0048ad5c =====

undefined8 FUN_0048ad5c(void)

{
  return 1;
}


// ===== 0048ad64  rive::ScriptInputTriggerBase::clone =====

/* rive::ScriptInputTriggerBase::clone() const */

long * __thiscall rive::ScriptInputTriggerBase::clone(ScriptInputTriggerBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0xb8);
  plVar3[0x16] = 0;
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
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  puVar2 = PTR_vtable_0067d2c8;
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  *(undefined1 *)(plVar3 + 0x16) = 0;
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x12] = (long)(puVar2 + 0xd0);
  plVar3[0x13] = (long)(puVar2 + 0xe8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 0048ae0c  FUN_0048ae0c =====

void FUN_0048ae0c(long *param_1)

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


// ===== 0048ae78  rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty =====

/* rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty() */

void __thiscall
rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty
          (ScriptInputViewModelProperty *this)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_vtable_0067d2d0 + 0xf0;
  *(undefined **)this = PTR_vtable_0067d2d0 + 0x10;
  *(undefined **)(this + 0x88) = puVar1;
  if (*(long *)(this + 0x90) != 0) {
    plVar2 = (long *)(*(long *)(this + 0x90) + 0x10);
    (**(code **)(*plVar2 + 8))(plVar2,this);
  }
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 8))();
  }
  *(undefined **)(this + 0x88) = PTR_vtable_0067d038 + 0x10;
  if ((this[0xa0] != (ScriptInputViewModelProperty)0x0) && (*(long **)(this + 0x98) != (long *)0x0))
  {
    (**(code **)(**(long **)(this + 0x98) + 8))();
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


// ===== 0048af58  rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty =====

/* rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty() */

void __thiscall
rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty
          (ScriptInputViewModelProperty *this)

{
  ~ScriptInputViewModelProperty(this);
  operator_delete(this);
  return;
}


// ===== 0048af7c  FUN_0048af7c =====

undefined8 FUN_0048af7c(void)

{
  return 0x264;
}


// ===== 0048af84  FUN_0048af84 =====

undefined8 FUN_0048af84(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0xa7)) && (param_2 != 0x264)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0048afac  FUN_0048afac =====

void FUN_0048afac(long *param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 == 4) {
    pcVar13 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar13) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0048b10c;
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
LAB_0048b10c:
      local_40 = 0;
      lStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      operator_delete((void *)param_1[4]);
    }
    param_1[3] = lStack_38;
    param_1[2] = local_40;
    param_1[4] = local_30;
  }
  else if (param_2 == 5) {
    uVar11 = 0;
    uVar7 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0048b0f0;
      }
      pbVar12 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar3 = uVar11 & 0x3f;
      uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
      uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
      pbVar6 = pbVar12;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar12;
    if (uVar7 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_0048b0f0:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 5) = (int)uVar7;
  }
  else {
    if (param_2 != 0x362) {
      uVar5 = 0;
      goto LAB_0048b164;
    }
    uVar11 = 0;
    uVar7 = 0;
    pbVar6 = (byte *)(*param_3 + param_3[1]);
    pbVar12 = (byte *)param_3[2];
    do {
      if (pbVar6 <= pbVar12) {
        uVar7 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
        pbVar12 = pbVar6;
        goto LAB_0048b14c;
      }
      pbVar9 = pbVar12 + 1;
      bVar1 = *pbVar12;
      uVar3 = uVar11 & 0x3f;
      uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
      uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
      pbVar12 = pbVar9;
    } while ((char)bVar1 < '\0');
    if ((char)param_3[3] != '\0') {
      uVar7 = 0;
    }
    pbVar6 = pbVar9;
    pbVar12 = pbVar9 + uVar7;
LAB_0048b14c:
    lVar10 = *param_1;
    param_3[2] = (long)pbVar12;
    (**(code **)(lVar10 + 0x90))(param_1,pbVar6,uVar7);
  }
  uVar5 = 1;
LAB_0048b164:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0048b188  rive::ScriptInputViewModelProperty::onAddedClean =====

/* rive::ScriptInputViewModelProperty::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptInputViewModelProperty::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        lVar3 = 0xe0;
        goto LAB_0048b220;
      }
      if (uVar1 != 0x27d) {
        return 0;
      }
    }
    lVar3 = 0x178;
  }
  else if (uVar1 < 0x287) {
    if (uVar1 == 0x280) {
      lVar3 = 0xa8;
    }
    else {
      if (uVar1 != 0x286) {
        return 0;
      }
      lVar3 = 0x18;
    }
  }
  else {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return 0;
    }
    lVar3 = 0x10;
  }
LAB_0048b220:
  puVar2 = (undefined8 *)((long)plVar4 + lVar3 + 0x10);
  (**(code **)*puVar2)(puVar2,param_1);
  return 0;
}


// ===== 0048b244  rive::ScriptInputViewModelProperty::import =====

/* rive::ScriptInputViewModelProperty::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptInputViewModelProperty::import(ScriptInputViewModelProperty *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar13 = NEON_cnt(uVar5,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar3 = (uint)uVar5;
    if (uVar6 < 2) {
      uVar7 = (ulong)(uVar3 - 1) & 0x283;
    }
    else {
      uVar7 = 0x283;
      if (uVar5 < 0x284) {
        uVar1 = 0;
        if ((uVar5 & 0xffff) != 0) {
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
            lVar11 = plVar9[3];
            if (lVar11 != 0) {
              lVar8 = *(long *)(lVar11 + 8);
              *(undefined8 *)(lVar11 + 8) = 0;
              if (lVar8 != 0) {
                *(long *)(this + 0xa8) = lVar8;
              }
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar2 * uVar5;
          }
          if (uVar10 != uVar7) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
      if (uVar5 == 0) {
        return 1;
      }
    }
    uVar13 = NEON_cnt(uVar5,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)(uVar3 - 1) & 0x25b;
    }
    else {
      uVar7 = 0x25b;
      if (uVar5 < 0x25c) {
        uVar1 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar1 = 0x25b / (uVar3 & 0xffff);
        }
        uVar7 = (ulong)(0x25b - uVar1 * (uVar3 & 0xffff));
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x25b) {
          if ((short)plVar9[2] == 0x25b) {
            lVar11 = plVar9[3];
            if (lVar11 == 0) {
              return 1;
            }
            uVar3 = (**(code **)(*(long *)this + 0x10))();
            uVar3 = (uVar3 & 0xffff) - 0x263;
            if ((uVar3 < 0x15) && ((1 << (ulong)(uVar3 & 0x1f) & 0x118483U) != 0)) {
              puVar4 = (undefined8 *)(*(long *)(lVar11 + 8) + 0x10);
              (**(code **)*puVar4)(puVar4,this);
            }
            if (*(long **)(this + 0x90) != (long *)0x0) {
              lVar11 = (**(code **)(**(long **)(this + 0x90) + 0x50))();
              if (lVar11 != 0) {
                uVar13 = Component::import((Component *)this,param_1);
                return uVar13;
              }
              return 0;
            }
            return 0;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar2 * uVar5;
          }
          if (uVar10 != uVar7) {
            return 1;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 0048b468  rive::ScriptInputViewModelProperty::decodeDataBindPathIds =====

/* rive::ScriptInputViewModelProperty::decodeDataBindPathIds(rive::Span<unsigned char const>) */

void rive::ScriptInputViewModelProperty::decodeDataBindPathIds
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
  *(long **)(param_1 + 0xa8) = plVar2;
  DataBindPath::decodePath(plVar2,param_2,param_3);
  *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x30) = 1;
  return;
}


// ===== 0048b4e4  rive::ScriptInputViewModelProperty::copyDataBindPathIds =====

/* rive::ScriptInputViewModelProperty::copyDataBindPathIds(rive::ScriptInputViewModelPropertyBase
   const&) */

void __thiscall
rive::ScriptInputViewModelProperty::copyDataBindPathIds
          (ScriptInputViewModelProperty *this,ScriptInputViewModelPropertyBase *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa8);
  if (plVar3 != (long *)0x0) {
    lVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    lVar2 = plVar3[5];
    *(long *)(this + 0xa8) = lVar1;
    *(long *)(lVar1 + 0x28) = lVar2;
  }
  return;
}


// ===== 0048b524  FUN_0048b524 =====

void FUN_0048b524(void)

{
  return;
}


// ===== 0048b528  rive::ScriptInputViewModelProperty::initScriptedValue =====

/* rive::ScriptInputViewModelProperty::initScriptedValue() */

void __thiscall
rive::ScriptInputViewModelProperty::initScriptedValue(ScriptInputViewModelProperty *this)

{
  long lVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0xb0);
  if ((lVar2 != 0) && (pSVar3 = *(ScriptedObject **)(this + 0x90), pSVar3 != (ScriptedObject *)0x0))
  {
    if (((byte)this[0x10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x18);
      local_50 = *(ulong *)(this + 0x10);
      local_40 = *(void **)(this + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + 0x20),*(ulong *)(this + 0x18));
      lVar2 = *(long *)(this + 0xb0);
    }
    ScriptedObject::setViewModelInput(pSVar3,&local_50,lVar2);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048b5d0  rive::ScriptInputViewModelProperty::validateForScriptInit =====

/* rive::ScriptInputViewModelProperty::validateForScriptInit() */

undefined8 __thiscall
rive::ScriptInputViewModelProperty::validateForScriptInit(ScriptInputViewModelProperty *this)

{
  *(undefined8 *)(this + 0xb0) = 0;
  return 1;
}


// ===== 0048b5e0  rive::ScriptInputViewModelProperty::validateForColdScriptInit =====

/* rive::ScriptInputViewModelProperty::validateForColdScriptInit() */

undefined8 __thiscall
rive::ScriptInputViewModelProperty::validateForColdScriptInit(ScriptInputViewModelProperty *this)

{
  *(undefined8 *)(this + 0xb0) = 0;
  return 1;
}


// ===== 0048b5f0  rive::ScriptInputViewModelProperty::hydrateScriptInput =====

/* rive::ScriptInputViewModelProperty::hydrateScriptInput() */

void __thiscall
rive::ScriptInputViewModelProperty::hydrateScriptInput(ScriptInputViewModelProperty *this)

{
  long lVar1;
  DataContext *pDVar2;
  DataContext *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pDVar2 = *(DataContext **)(this + 0x90);
  *(undefined8 *)(this + 0xb0) = 0;
  if ((pDVar2 != (DataContext *)0x0) &&
     ((**(code **)(*(long *)pDVar2 + 0x38))(&local_30), pDVar2 = local_30,
     local_30 != (DataContext *)0x0)) {
    if (*(DataBindPath **)(this + 0xa8) == (DataBindPath *)0x0) {
      pDVar2 = (DataContext *)0x0;
    }
    else {
      pDVar2 = (DataContext *)
               DataContext::getViewModelProperty(local_30,*(DataBindPath **)(this + 0xa8));
      if (pDVar2 != (DataContext *)0x0) {
        if (*(long *)(pDVar2 + 0xa8) == 0) {
          pDVar2 = (DataContext *)0x0;
        }
        else {
          *(DataContext **)(this + 0xb0) = pDVar2;
          (**(code **)(*(long *)this + 0xa8))(this);
          pDVar2 = (DataContext *)0x1;
        }
      }
    }
    if (local_30 != (DataContext *)0x0) {
      pDVar2 = (DataContext *)((ulong)pDVar2 & 0xffffffff);
      FUN_003462d8(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pDVar2);
}


// ===== 0048b6c0  rive::ScriptInputViewModelProperty::validateHydrationPrerequisites =====

/* rive::ScriptInputViewModelProperty::validateHydrationPrerequisites() */

void __thiscall
rive::ScriptInputViewModelProperty::validateHydrationPrerequisites
          (ScriptInputViewModelProperty *this)

{
  long lVar1;
  DataContext *pDVar2;
  DataContext *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pDVar2 = *(DataContext **)(this + 0x90);
  if ((pDVar2 != (DataContext *)0x0) &&
     ((**(code **)(*(long *)pDVar2 + 0x38))(&local_30), pDVar2 = local_30,
     local_30 != (DataContext *)0x0)) {
    if (*(DataBindPath **)(this + 0xa8) == (DataBindPath *)0x0) {
      pDVar2 = (DataContext *)0x0;
    }
    else {
      pDVar2 = (DataContext *)
               DataContext::getViewModelProperty(local_30,*(DataBindPath **)(this + 0xa8));
      if (pDVar2 != (DataContext *)0x0) {
        pDVar2 = (DataContext *)(ulong)(*(long *)(pDVar2 + 0xa8) != 0);
      }
    }
    if (local_30 != (DataContext *)0x0) {
      pDVar2 = (DataContext *)((ulong)pDVar2 & 0xffffffff);
      FUN_003462d8(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pDVar2);
  }
  return;
}


// ===== 0048b768  rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty =====

/* non-virtual thunk to rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty() */

void __thiscall
rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty
          (ScriptInputViewModelProperty *this)

{
  ~ScriptInputViewModelProperty(this + -0x88);
  return;
}


// ===== 0048b770  rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty =====

/* non-virtual thunk to rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty() */

void __thiscall
rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty
          (ScriptInputViewModelProperty *this)

{
  ~ScriptInputViewModelProperty(this + -0x88);
  operator_delete(this + -0x88);
  return;
}


// ===== 0048b798  rive::ScriptInputViewModelProperty::initScriptedValue =====

/* non-virtual thunk to rive::ScriptInputViewModelProperty::initScriptedValue() */

void __thiscall
rive::ScriptInputViewModelProperty::initScriptedValue(ScriptInputViewModelProperty *this)

{
  long lVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x28);
  if ((lVar2 != 0) && (pSVar3 = *(ScriptedObject **)(this + 8), pSVar3 != (ScriptedObject *)0x0)) {
    if (((byte)this[-0x78] & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + -0x70);
      local_50 = *(ulong *)(this + -0x78);
      local_40 = *(void **)(this + -0x68);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(this + -0x68),*(ulong *)(this + -0x70));
      lVar2 = *(long *)(this + 0x28);
    }
    ScriptedObject::setViewModelInput(pSVar3,&local_50,lVar2);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048b840  rive::ScriptInputViewModelProperty::validateForScriptInit =====

/* non-virtual thunk to rive::ScriptInputViewModelProperty::validateForScriptInit() */

undefined8 __thiscall
rive::ScriptInputViewModelProperty::validateForScriptInit(ScriptInputViewModelProperty *this)

{
  *(undefined8 *)(this + 0x28) = 0;
  return 1;
}


// ===== 0048b850  rive::ScriptInputViewModelProperty::validateForColdScriptInit =====

/* non-virtual thunk to rive::ScriptInputViewModelProperty::validateForColdScriptInit() */

undefined8 __thiscall
rive::ScriptInputViewModelProperty::validateForColdScriptInit(ScriptInputViewModelProperty *this)

{
  *(undefined8 *)(this + 0x28) = 0;
  return 1;
}


// ===== 0048b860  rive::ScriptInputViewModelProperty::hydrateScriptInput =====

/* non-virtual thunk to rive::ScriptInputViewModelProperty::hydrateScriptInput() */

void __thiscall
rive::ScriptInputViewModelProperty::hydrateScriptInput(ScriptInputViewModelProperty *this)

{
  long lVar1;
  DataContext *pDVar2;
  DataContext *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pDVar2 = *(DataContext **)(this + 8);
  *(undefined8 *)(this + 0x28) = 0;
  if ((pDVar2 != (DataContext *)0x0) &&
     ((**(code **)(*(long *)pDVar2 + 0x38))(&local_30), pDVar2 = local_30,
     local_30 != (DataContext *)0x0)) {
    if (*(DataBindPath **)(this + 0x20) == (DataBindPath *)0x0) {
      pDVar2 = (DataContext *)0x0;
    }
    else {
      pDVar2 = (DataContext *)
               DataContext::getViewModelProperty(local_30,*(DataBindPath **)(this + 0x20));
      if (pDVar2 != (DataContext *)0x0) {
        if (*(long *)(pDVar2 + 0xa8) == 0) {
          pDVar2 = (DataContext *)0x0;
        }
        else {
          *(DataContext **)(this + 0x28) = pDVar2;
          (**(code **)(*(long *)(this + -0x88) + 0xa8))(this + -0x88);
          pDVar2 = (DataContext *)0x1;
        }
      }
    }
    if (local_30 != (DataContext *)0x0) {
      pDVar2 = (DataContext *)((ulong)pDVar2 & 0xffffffff);
      FUN_003462d8(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pDVar2);
}


// ===== 0048b930  rive::ScriptInputViewModelProperty::validateHydrationPrerequisites =====

/* non-virtual thunk to rive::ScriptInputViewModelProperty::validateHydrationPrerequisites() */

void __thiscall
rive::ScriptInputViewModelProperty::validateHydrationPrerequisites
          (ScriptInputViewModelProperty *this)

{
  long lVar1;
  DataContext *pDVar2;
  DataContext *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pDVar2 = *(DataContext **)(this + 8);
  if ((pDVar2 != (DataContext *)0x0) &&
     ((**(code **)(*(long *)pDVar2 + 0x38))(&local_30), pDVar2 = local_30,
     local_30 != (DataContext *)0x0)) {
    if (*(DataBindPath **)(this + 0x20) == (DataBindPath *)0x0) {
      pDVar2 = (DataContext *)0x0;
    }
    else {
      pDVar2 = (DataContext *)
               DataContext::getViewModelProperty(local_30,*(DataBindPath **)(this + 0x20));
      if (pDVar2 != (DataContext *)0x0) {
        pDVar2 = (DataContext *)(ulong)(*(long *)(pDVar2 + 0xa8) != 0);
      }
    }
    if (local_30 != (DataContext *)0x0) {
      pDVar2 = (DataContext *)((ulong)pDVar2 & 0xffffffff);
      FUN_003462d8(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pDVar2);
  }
  return;
}


// ===== 0048b9d8  rive::ScriptInputViewModelPropertyBase::clone =====

/* rive::ScriptInputViewModelPropertyBase::clone() const */

long * __thiscall
rive::ScriptInputViewModelPropertyBase::clone(ScriptInputViewModelPropertyBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = (long *)operator_new(0xb8);
  plVar2[0x16] = 0;
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
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
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  puVar1 = PTR_vtable_0067d2d0;
  plVar5 = *(long **)(this + 0xa8);
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  *(undefined1 *)(plVar2 + 0x14) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x11] = (long)(puVar1 + 0xf0);
  if (plVar5 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
    lVar4 = plVar5[5];
    plVar2[0x15] = lVar3;
    *(long *)(lVar3 + 0x28) = lVar4;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 0048baa0  FUN_0048baa0 =====

void FUN_0048baa0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x48baa4);
  (*pcVar1)();
}


// ===== 0048baa4  rive::ScriptedDataConverter::~ScriptedDataConverter =====

/* rive::ScriptedDataConverter::~ScriptedDataConverter() */

void __thiscall rive::ScriptedDataConverter::~ScriptedDataConverter(ScriptedDataConverter *this)

{
  undefined *puVar1;
  size_t __n;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  ScriptedObject *this_00;
  long *plVar6;
  long *__dest;
  
  puVar2 = PTR_vtable_0067d2f8;
  puVar1 = PTR_vtable_0067d2f8 + 0x118;
  *(undefined **)this = PTR_vtable_0067d2f8 + 0x10;
  *(undefined **)(this + 0x28) = puVar1;
  this_00 = (ScriptedObject *)(this + 0xe0);
  *(undefined **)this_00 = puVar2 + 0x150;
  *(undefined **)(this + 0xf0) = puVar2 + 0x1d0;
  *(undefined **)(this + 0x158) = puVar2 + 0x1f8;
  disposeScriptInputs(this);
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 8))();
  }
  if (*(long *)(this + 0x160) != 0) {
    FUN_003462d8();
  }
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)(this + 0xe0) = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
  ScriptedObject::scriptDispose(this_00);
  pvVar4 = *(void **)(this + 0x138);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x140) = pvVar4;
    operator_delete(pvVar4);
  }
  if (*(long *)(this + 0x130) != 0) {
    FUN_003462d8();
  }
  pvVar4 = *(void **)(this + 0xf8);
  *(undefined **)(this + 0xf0) = PTR_vtable_0067d068 + 0x10;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar4;
    operator_delete(pvVar4);
  }
  plVar6 = *(long **)(this + 0xe8);
  *(undefined **)(this + 0xe0) = PTR_vtable_0067d008 + 0x10;
  if (plVar6 != (long *)0x0) {
    __dest = (long *)plVar6[0xd];
    plVar5 = (long *)plVar6[0xe];
    if (__dest != plVar5) {
      do {
        while ((ScriptedObject *)*__dest != this_00) {
          __dest = __dest + 1;
          if (__dest == plVar5) goto LAB_0048bbd8;
        }
        __n = (long)plVar5 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        plVar5 = (long *)((long)__dest + __n);
        plVar6[0xe] = (long)plVar5;
      } while (__dest != plVar5);
LAB_0048bbd8:
      plVar6 = *(long **)(this + 0xe8);
      if (plVar6 == (long *)0x0) goto LAB_0048bc04;
    }
    iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 9);
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
LAB_0048bc04:
  DataConverter::~DataConverter((DataConverter *)this);
  return;
}


// ===== 0048bc1c  rive::ScriptedDataConverter::disposeScriptInputs =====

/* rive::ScriptedDataConverter::disposeScriptInputs() */

void __thiscall rive::ScriptedDataConverter::disposeScriptInputs(ScriptedDataConverter *this)

{
  undefined8 *puVar1;
  ulong __n;
  ushort uVar2;
  void *__dest;
  long lVar3;
  undefined8 *__src;
  ulong uVar4;
  long *plVar5;
  
  __src = *(undefined8 **)(this + 0xf8);
  puVar1 = *(undefined8 **)(this + 0x100);
  __n = (long)puVar1 - (long)__src;
  if (__n == 0) {
    *(undefined8 **)(this + 0x100) = __src;
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
          if (uVar2 != 0x26a) goto LAB_0048bc6c;
          lVar3 = 0x98;
        }
      }
LAB_0048bc64:
      *(undefined8 *)((long)plVar5 + lVar3 + 8) = 0;
    }
    else {
      if (0x272 < uVar2) {
        lVar3 = 0x90;
        if (uVar2 != 0x277) {
          if (uVar2 != 0x273) goto LAB_0048bc6c;
          lVar3 = 0xa0;
        }
        goto LAB_0048bc64;
      }
      if (uVar2 == 0x26d) {
        lVar3 = 0x90;
        goto LAB_0048bc64;
      }
      lVar3 = 0x90;
      if (uVar2 == 0x272) goto LAB_0048bc64;
    }
LAB_0048bc6c:
    __src = __src + 1;
  } while (__src != puVar1);
  uVar4 = 0;
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(this + 0xf8);
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
          if (uVar2 != 0x26a) goto LAB_0048bd24;
          lVar3 = 0x98;
        }
      }
LAB_0048bd14:
      (**(code **)(*(long *)((long)plVar5 + lVar3) + 8))((long)plVar5 + lVar3);
    }
    else {
      if (0x272 < uVar2) {
        lVar3 = 0x90;
        if (uVar2 != 0x277) {
          if (uVar2 != 0x273) goto LAB_0048bd24;
          lVar3 = 0xa0;
        }
        goto LAB_0048bd14;
      }
      if (uVar2 == 0x26d) {
        lVar3 = 0x90;
        goto LAB_0048bd14;
      }
      lVar3 = 0x90;
      if (uVar2 == 0x272) goto LAB_0048bd14;
    }
LAB_0048bd24:
    uVar4 = uVar4 + 8;
    if (__n == uVar4) {
      operator_delete(__dest);
      return;
    }
  } while( true );
}


// ===== 0048bdec  rive::ScriptedDataConverter::~ScriptedDataConverter =====

/* rive::ScriptedDataConverter::~ScriptedDataConverter() */

void __thiscall rive::ScriptedDataConverter::~ScriptedDataConverter(ScriptedDataConverter *this)

{
  ~ScriptedDataConverter(this);
  operator_delete(this);
  return;
}


// ===== 0048be10  FUN_0048be10 =====

undefined8 FUN_0048be10(void)

{
  return 0x275;
}


// ===== 0048be18  FUN_0048be18 =====

bool FUN_0048be18(undefined8 param_1,short param_2)

{
  return param_2 == 0x275 || param_2 == 0x1e8;
}


// ===== 0048be30  FUN_0048be30 =====

void FUN_0048be30(long param_1,short param_2,long *param_3)

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
        goto LAB_0048bf38;
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
LAB_0048bf38:
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
    if (param_2 != 0x37c) {
      uVar5 = 0;
      goto LAB_0048bf68;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0048bf1c;
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
LAB_0048bf1c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xd8) = (int)uVar6;
  }
  uVar5 = 1;
LAB_0048bf68:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0048bf8c  rive::ScriptedDataConverter::clone =====

/* rive::ScriptedDataConverter::clone() const */

DataConverter * __thiscall rive::ScriptedDataConverter::clone(ScriptedDataConverter *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  DataConverter *this_00;
  long *plVar8;
  long *__dest;
  void *__dest_00;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  DataConverter *pDVar14;
  long *plVar15;
  long local_80;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this_00 = (DataConverter *)operator_new(0x170);
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
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  pDVar14 = this_00 + 0xe0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(long *)pDVar14 = 0;
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
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined2 *)(this_00 + 0x150) = 0;
  *(undefined4 *)(this_00 + 0x118) = 0;
  puVar5 = PTR_vtable_0067d2f8;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined **)this_00 = puVar5 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar5 + 0x118;
  *(undefined **)pDVar14 = puVar5 + 0x150;
  *(undefined **)(this_00 + 0xf0) = puVar5 + 0x1d0;
  uVar3 = *(undefined4 *)(this + 0xd8);
  *(undefined **)(this_00 + 0x158) = puVar5 + 0x1f8;
  *(undefined4 *)(this_00 + 0xd8) = uVar3;
  DataConverter::copy(this_00,(DataConverter *)this);
  plVar11 = *(long **)(this + 0xe8);
  if (plVar11 != (long *)0x0) {
    FUN_00340fb0(1,plVar11 + 9);
    local_70 = plVar11;
    (**(code **)(*(long *)pDVar14 + 0x10))(pDVar14,&local_70);
    plVar11 = local_70;
    if ((local_70 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,local_70 + 9), iVar7 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  puVar12 = *(undefined8 **)(this + 0xf8);
  puVar2 = *(undefined8 **)(this + 0x100);
  do {
    if (puVar12 == puVar2) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar15 = (long *)*puVar12;
    plVar8 = (long *)(**(code **)(*plVar15 + 0x28))(plVar15);
    (**(code **)(*(long *)this_00 + 0xd0))(this_00,plVar8);
    uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar11 = (long *)0x0;
    if (uVar6 < 0x26d) {
      if (uVar6 == 0x263) {
LAB_0048c194:
        plVar11 = plVar8 + 0x12;
      }
      else if (uVar6 == 0x264) {
        plVar11 = plVar8 + 0x11;
      }
      else if (uVar6 == 0x26a) {
        plVar11 = plVar8 + 0x13;
      }
    }
    else if (uVar6 < 0x273) {
      if ((uVar6 == 0x26d) || (uVar6 == 0x272)) goto LAB_0048c194;
    }
    else if (uVar6 == 0x273) {
      plVar11 = plVar8 + 0x14;
    }
    else if (uVar6 == 0x277) goto LAB_0048c194;
    uVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
    plVar10 = (long *)0x0;
    if (uVar6 < 0x26d) {
      if (uVar6 == 0x263) {
LAB_0048c204:
        plVar10 = plVar15 + 0x12;
      }
      else if (uVar6 == 0x264) {
        plVar10 = plVar15 + 0x11;
      }
      else if (uVar6 == 0x26a) {
        plVar10 = plVar15 + 0x13;
      }
    }
    else if (uVar6 < 0x273) {
      if ((uVar6 == 0x26d) || (uVar6 == 0x272)) goto LAB_0048c204;
    }
    else if (uVar6 == 0x273) {
      plVar10 = plVar15 + 0x14;
    }
    else if (uVar6 == 0x277) goto LAB_0048c204;
    pvVar1 = *(void **)(this + 0x30);
    uVar9 = *(long *)(this + 0x38) - (long)pvVar1;
    if (uVar9 == 0) {
      plVar13 = (long *)0x0;
      __dest = (long *)0x0;
    }
    else {
      if ((long)uVar9 < 0) goto LAB_0048c374;
      __dest = (long *)operator_new(uVar9);
      plVar13 = (long *)((long)__dest + uVar9);
      memcpy(__dest,pvVar1,uVar9);
    }
    pvVar1 = *(void **)(this_00 + 0x30);
    uVar9 = *(long *)(this_00 + 0x38) - (long)pvVar1;
    if (uVar9 == 0) {
      __dest_00 = (void *)0x0;
      local_80 = 0;
    }
    else {
      if ((long)uVar9 < 0) {
LAB_0048c374:
                    /* WARNING: Subroutine does not return */
        FUN_00345418();
      }
      __dest_00 = operator_new(uVar9);
      local_80 = (long)__dest_00 + uVar9;
      memcpy(__dest_00,pvVar1,uVar9);
    }
    if ((((plVar11 != (long *)0x0) && (plVar10 != (long *)0x0)) && (plVar10[2] != 0)) &&
       (__dest != plVar13)) {
      uVar9 = 0;
      plVar10 = __dest;
      do {
        if (*(long **)(*plVar10 + 0x30) == plVar15 &&
            uVar9 < (ulong)(local_80 - (long)__dest_00 >> 3)) {
          *(undefined1 *)(plVar11 + 3) = 0;
          *(long **)(*(long *)((long)__dest_00 + uVar9 * 8) + 0x30) = plVar8;
          plVar11[2] = *(long *)((long)__dest_00 + uVar9 * 8);
        }
        plVar10 = plVar10 + 1;
        uVar9 = uVar9 + 1;
      } while (plVar10 != plVar13);
    }
    if (__dest_00 != (void *)0x0) {
      operator_delete(__dest_00);
    }
    if (__dest != (long *)0x0) {
      operator_delete(__dest);
    }
    puVar12 = puVar12 + 1;
  } while( true );
}


// ===== 0048c37c  rive::ScriptedDataConverter::import =====

/* rive::ScriptedDataConverter::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptedDataConverter::import(ScriptedDataConverter *this,ImportStack *param_1)

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
          BackboardImporter::addFileAssetReferencer
                    ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 0xe0));
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
                BackboardImporter::addDataConverter
                          ((BackboardImporter *)plVar6[3],(DataConverter *)this);
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
    } while (plVar6 != (long *)0x0);
  }
  return 1;
}


// ===== 0048c53c  rive::ScriptedDataConverter::convert =====

/* rive::ScriptedDataConverter::convert(rive::DataValue*, rive::DataBind*) */

DataBind * rive::ScriptedDataConverter::convert(DataValue *param_1,DataBind *param_2)

{
  long lVar1;
  basic_string local_40;
  undefined4 local_3f;
  undefined3 uStack_3b;
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[0x111] >> 2 & 1) != 0) {
    local_40 = (basic_string)0xe;
    local_3f = 0x766e6f63;
    uStack_3b = 0x747265;
    local_38 = 0;
    param_2 = (DataBind *)
              applyConversion((ScriptedDataConverter *)param_1,(DataValue *)param_2,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048c5b8  rive::ScriptedDataConverter::reverseConvert =====

/* rive::ScriptedDataConverter::reverseConvert(rive::DataValue*, rive::DataBind*) */

DataBind * rive::ScriptedDataConverter::reverseConvert(DataValue *param_1,DataBind *param_2)

{
  long lVar1;
  basic_string local_40;
  char local_3f [6];
  char acStack_39 [2];
  char acStack_37 [6];
  undefined1 local_31;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[0x111] >> 3 & 1) != 0) {
    local_40 = (basic_string)0x1c;
    local_3f = (char  [6])s_reverseConvert_002485a4._0_6_;
    acStack_39 = (char  [2])s_reverseConvert_002485a4._6_2_;
    acStack_37 = (char  [6])s_reverseConvert_002485a4._8_6_;
    local_31 = 0;
    param_2 = (DataBind *)
              applyConversion((ScriptedDataConverter *)param_1,(DataValue *)param_2,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048c634  FUN_0048c634 =====

undefined8 FUN_0048c634(void)

{
  return 100;
}


// ===== 0048c63c  rive::ScriptedDataConverter::bindFromContext =====

/* rive::ScriptedDataConverter::bindFromContext(rive::DataContext*, rive::DataBind*) */

void __thiscall
rive::ScriptedDataConverter::bindFromContext
          (ScriptedDataConverter *this,DataContext *param_1,DataBind *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  ScriptedObject *pSVar4;
  DataBindContext *this_00;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (param_1 != (DataContext *)0x0) {
    FUN_00340fb0(1,param_1);
  }
  lVar3 = *(long *)(this + 0x160);
  *(DataContext **)(this + 0x160) = param_1;
  if (lVar3 != 0) {
    FUN_003462d8();
  }
  puVar7 = *(undefined8 **)(this + 0x30);
  puVar1 = *(undefined8 **)(this + 0x38);
  *(DataBind **)(this + 0xd0) = param_2;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    uVar5 = (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,0x1bf);
    if ((uVar5 & 1) != 0) {
      DataBindContext::bindFromContext((DataBindContext *)*puVar7,param_1);
    }
  }
  pSVar4 = *(ScriptedObject **)(this + 0xe8);
  *(DataContext **)(this + 0xc0) = param_1;
  if (pSVar4 != (ScriptedObject *)0x0) {
    if ((*(long *)(pSVar4 + 0xd8) != 0) && (*(long *)(*(long *)(pSVar4 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar4);
    }
    ScriptedObject::hydrateScriptInputs((ScriptedObject *)(this + 0xe0));
  }
  puVar7 = *(undefined8 **)(this + 0xf8);
  puVar1 = *(undefined8 **)(this + 0x100);
  do {
    if (puVar7 == puVar1) {
      return;
    }
    plVar6 = (long *)*puVar7;
    uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (uVar2 < 0x26d) {
      lVar3 = 0x90;
      if (uVar2 != 0x263) {
        if (uVar2 == 0x264) {
          lVar3 = 0x88;
        }
        else {
          if (uVar2 != 0x26a) goto LAB_0048c6c0;
          lVar3 = 0x98;
        }
      }
LAB_0048c758:
      this_00 = *(DataBindContext **)((long)plVar6 + lVar3 + 0x10);
      if (this_00 != (DataBindContext *)0x0) {
        DataBindContext::bindFromContext(this_00,param_1);
      }
    }
    else {
      if (0x272 < uVar2) {
        lVar3 = 0x90;
        if (uVar2 != 0x277) {
          if (uVar2 != 0x273) goto LAB_0048c6c0;
          lVar3 = 0xa0;
        }
        goto LAB_0048c758;
      }
      if (uVar2 == 0x26d) {
        lVar3 = 0x90;
        goto LAB_0048c758;
      }
      lVar3 = 0x90;
      if (uVar2 == 0x272) goto LAB_0048c758;
    }
LAB_0048c6c0:
    puVar7 = puVar7 + 1;
  } while( true );
}


// ===== 0048c7b8  rive::ScriptedDataConverter::advance =====

/* rive::ScriptedDataConverter::advance(float) */

undefined8 __thiscall
rive::ScriptedDataConverter::advance(ScriptedDataConverter *this,float param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1 == 0.0) {
    return 0;
  }
  uVar1 = ScriptedObject::scriptAdvance(param_1);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = *(long **)(this + 0xd0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x88))(plVar2,0x1002,0);
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0048c818  FUN_0048c818 =====

void FUN_0048c818(void)

{
  return;
}


// ===== 0048c81c  rive::ScriptedDataConverter::didHydrateScriptInputs =====

/* rive::ScriptedDataConverter::didHydrateScriptInputs() */

void __thiscall rive::ScriptedDataConverter::didHydrateScriptInputs(ScriptedDataConverter *this)

{
                    /* WARNING: Could not recover jumptable at 0x0048c82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xd8))(this,0x1000,0);
  return;
}


// ===== 0048c830  FUN_0048c830 =====

void FUN_0048c830(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x160);
  if (lVar1 != 0) {
    FUN_00340fb0(1,lVar1);
  }
  *param_1 = lVar1;
  return;
}


// ===== 0048c864  FUN_0048c864 =====

undefined4 FUN_0048c864(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}


// ===== 0048c86c  rive::ScriptedDataConverter::advanceComponent =====

/* rive::ScriptedDataConverter::advanceComponent(float, rive::AdvanceFlags) */

void __thiscall
rive::ScriptedDataConverter::advanceComponent
          (undefined4 param_1,ScriptedDataConverter *this,ulong param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_3 & 1) != 0) {
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0048c880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))(uVar1);
  return;
}


// ===== 0048c884  rive::ScriptedDataConverter::addProperty =====

/* rive::ScriptedDataConverter::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedDataConverter::addProperty(ScriptedDataConverter *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_0048c91c;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_0048c91c;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_0048c91c;
    lVar2 = 0xa0;
  }
  *(ScriptedDataConverter **)(param_1 + lVar2 + 8) = this + 0xe0;
LAB_0048c91c:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)(this + 0xf0),param_1);
  return;
}


// ===== 0048c930  FUN_0048c930 =====

undefined8 FUN_0048c930(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xd0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
  }
  return 1;
}


// ===== 0048c960  FUN_0048c960 =====

undefined8 FUN_0048c960(void)

{
  return 3;
}


// ===== 0048c968  FUN_0048c968 =====

undefined8 FUN_0048c968(void)

{
  return 0;
}


// ===== 0048c970  rive::ScriptedDataConverter::addDataBindFromScriptedObject =====

/* rive::ScriptedDataConverter::addDataBindFromScriptedObject(rive::DataBind*) */

undefined8 __thiscall
rive::ScriptedDataConverter::addDataBindFromScriptedObject
          (ScriptedDataConverter *this,DataBind *param_1)

{
  DataBindContainer::addDataBind((DataBindContainer *)(this + 0x28),param_1);
  return 1;
}


// ===== 0048c98c  rive::ScriptedDataConverter::~ScriptedDataConverter =====

/* non-virtual thunk to rive::ScriptedDataConverter::~ScriptedDataConverter() */

void __thiscall rive::ScriptedDataConverter::~ScriptedDataConverter(ScriptedDataConverter *this)

{
  ~ScriptedDataConverter(this + -0xe0);
  return;
}


// ===== 0048c994  rive::ScriptedDataConverter::~ScriptedDataConverter =====

/* non-virtual thunk to rive::ScriptedDataConverter::~ScriptedDataConverter() */

void __thiscall rive::ScriptedDataConverter::~ScriptedDataConverter(ScriptedDataConverter *this)

{
  ~ScriptedDataConverter(this + -0xe0);
  operator_delete(this + -0xe0);
  return;
}


// ===== 0048c9bc  FUN_0048c9bc =====

undefined4 FUN_0048c9bc(long param_1)

{
  return *(undefined4 *)(param_1 + -8);
}


// ===== 0048c9c4  rive::ScriptedDataConverter::disposeScriptInputs =====

/* non-virtual thunk to rive::ScriptedDataConverter::disposeScriptInputs() */

void __thiscall rive::ScriptedDataConverter::disposeScriptInputs(ScriptedDataConverter *this)

{
  disposeScriptInputs(this + -0xe0);
  return;
}


// ===== 0048c9cc  FUN_0048c9cc =====

void FUN_0048c9cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x80);
  if (lVar1 != 0) {
    FUN_00340fb0(1,lVar1);
  }
  *param_1 = lVar1;
  return;
}


// ===== 0048ca00  FUN_0048ca00 =====

undefined8 FUN_0048ca00(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + -0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
  }
  return 1;
}


// ===== 0048ca30  FUN_0048ca30 =====

undefined8 FUN_0048ca30(void)

{
  return 3;
}


// ===== 0048ca38  FUN_0048ca38 =====

undefined8 FUN_0048ca38(void)

{
  return 0;
}


// ===== 0048ca40  FUN_0048ca40 =====

undefined8 FUN_0048ca40(void)

{
  return 0;
}


// ===== 0048ca48  rive::ScriptedDataConverter::addDataBindFromScriptedObject =====

/* non-virtual thunk to rive::ScriptedDataConverter::addDataBindFromScriptedObject(rive::DataBind*)
    */

undefined8 __thiscall
rive::ScriptedDataConverter::addDataBindFromScriptedObject
          (ScriptedDataConverter *this,DataBind *param_1)

{
  DataBindContainer::addDataBind((DataBindContainer *)(this + -0xb8),param_1);
  return 1;
}


// ===== 0048ca64  rive::ScriptedDataConverter::didHydrateScriptInputs =====

/* non-virtual thunk to rive::ScriptedDataConverter::didHydrateScriptInputs() */

void __thiscall rive::ScriptedDataConverter::didHydrateScriptInputs(ScriptedDataConverter *this)

{
                    /* WARNING: Could not recover jumptable at 0x0048ca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xe0) + 0xd8))(this + -0xe0,0x1000,0);
  return;
}


// ===== 0048ca78  rive::ScriptedDataConverter::addProperty =====

/* non-virtual thunk to rive::ScriptedDataConverter::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedDataConverter::addProperty(ScriptedDataConverter *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_0048cb10;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_0048cb10;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_0048cb10;
    lVar2 = 0xa0;
  }
  *(ScriptedDataConverter **)(param_1 + lVar2 + 8) = this + -0x10;
LAB_0048cb10:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)this,param_1);
  return;
}


// ===== 0048cb24  rive::ScriptedDataConverter::advanceComponent =====

/* non-virtual thunk to rive::ScriptedDataConverter::advanceComponent(float, rive::AdvanceFlags) */

void __thiscall
rive::ScriptedDataConverter::advanceComponent
          (undefined4 param_1,ScriptedDataConverter *this,ulong param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_3 & 1) != 0) {
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0048cb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x158) + 0x88))(uVar1);
  return;
}


// ===== 0048cb40  rive::ScriptedDataConverter::applyConversion =====

/* rive::ScriptedDataConverter::applyConversion(rive::DataValue*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
rive::ScriptedDataConverter::applyConversion
          (ScriptedDataConverter *this,DataValue *param_1,basic_string *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  lua_State *extraout_x1;
  long lVar8;
  basic_string *__s;
  rive *this_00;
  long *plVar9;
  long lVar10;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x128) == 0) ||
     (this_00 = *(rive **)(*(long *)(this + 0x128) + 8), this_00 == (rive *)0x0)) goto LAB_0048cdd8;
  rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x114),(int)param_2);
  __s = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    __s = param_2 + 1;
  }
  if (((byte)this_00[1] >> 2 & 1) != 0) {
    this_00[1] = (rive)((byte)this_00[1] & 0xfb);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
    *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
  }
  lVar8 = *(long *)(this_00 + 8);
  sVar4 = strlen((char *)__s);
  local_58 = FUN_0062b178(this_00,__s,sVar4);
  local_4c = 6;
  FUN_00642c8c(this_00,lVar8 + -0x10,&local_58,*(undefined8 *)(this_00 + 8));
  lVar8 = *(long *)(this_00 + 8);
  *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar8 + 0x10);
  if (((byte)this_00[1] >> 2 & 1) != 0) {
    this_00[1] = (rive)((byte)this_00[1] & 0xfb);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
    *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
  }
  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + -8);
  *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + -0x10);
  *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
  uVar5 = pushDataValue(this,param_1);
  if ((uVar5 & 1) == 0) {
    lVar8 = -4;
  }
  else {
    plVar9 = *(long **)(this_00 + 0x78);
    if (plVar9 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = plVar9[7];
      plVar9[7] = (long)(this + 0xe0);
    }
    iVar3 = (**(code **)(*plVar9 + 0x30))(plVar9,this_00,2,1);
    rive_lua_closeOrphanRenderPass(this_00,extraout_x1);
    plVar9[7] = lVar8;
    if (iVar3 == 0) {
      lVar10 = *(long *)(*(long *)(this_00 + 8) + -0x10);
      bVar2 = *(int *)(*(long *)(this_00 + 8) + -4) == 9;
      lVar7 = (ulong)bVar2 * 0x10;
      lVar8 = lVar10 + 0x10;
      if (!bVar2) {
        lVar8 = lVar10;
      }
      uVar5 = (**(code **)(*(long *)(lVar10 + lVar7) + 0x10))(lVar8);
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*(long *)(lVar10 + lVar7) + 0x18))(lVar8);
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*(long *)(lVar10 + lVar7) + 0x20))(lVar8);
          if ((uVar5 & 1) == 0) {
            uVar5 = (**(code **)(*(long *)(lVar10 + lVar7) + 0x28))(lVar8);
            if ((uVar5 & 1) != 0) {
              FUN_0048d3a4(this,*(undefined8 *)(lVar8 + 0x10));
            }
          }
          else {
            FUN_0048d328(this,*(undefined8 *)(lVar8 + 0x10));
          }
        }
        else {
          FUN_0048d238(this,*(undefined8 *)(lVar8 + 0x10));
        }
      }
      else {
        plVar9 = *(long **)(this + 0x168);
        lVar8 = *(long *)(lVar8 + 0x10);
        if (plVar9 == (long *)0x0) {
LAB_0048cd14:
          puVar6 = (undefined8 *)operator_new(0x10);
          *(undefined4 *)(puVar6 + 1) = 0;
          *puVar6 = &PTR_FUN_0066af48;
          *(undefined8 **)(this + 0x168) = puVar6;
        }
        else {
          uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,2);
          if ((uVar5 & 1) == 0) {
            if (*(long **)(this + 0x168) == (long *)0x0) goto LAB_0048cd14;
            (**(code **)(**(long **)(this + 0x168) + 8))();
          }
          puVar6 = *(undefined8 **)(this + 0x168);
          if (puVar6 == (undefined8 *)0x0) goto LAB_0048cd14;
        }
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar8 + 8);
      }
    }
    lVar8 = -3;
  }
  lVar7 = *(long *)(this + 0x168);
  *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + lVar8 * 0x10 + 0x10;
  if (lVar7 == 0) {
    puVar6 = (undefined8 *)operator_new(8);
    *(undefined8 **)(this + 0x168) = puVar6;
    *puVar6 = &PTR_FUN_0066aec8;
  }
LAB_0048cdd8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048ce04  rive::ScriptedDataConverter::pushDataValue =====

/* rive::ScriptedDataConverter::pushDataValue(rive::DataValue*) */

void __thiscall
rive::ScriptedDataConverter::pushDataValue(ScriptedDataConverter *this,DataValue *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  DataValue DVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 uVar11;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x128) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(this + 0x128) + 8);
  }
  uVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,2);
  if ((uVar5 & 1) == 0) {
    uVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,1);
    if ((uVar5 & 1) != 0) {
      if (*(ulong *)(*(long *)(lVar10 + 0x18) + 0x40) <= *(ulong *)(*(long *)(lVar10 + 0x18) + 0x48)
         ) {
        FUN_006239a4(lVar10);
      }
      if ((*(byte *)(lVar10 + 1) >> 2 & 1) != 0) {
        *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) & 0xfb;
        *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x30);
        *(long *)(*(long *)(lVar10 + 0x18) + 0x30) = lVar10;
      }
      puVar6 = (undefined1 *)FUN_00628d60(lVar10,0x30,*(undefined1 *)(lVar10 + 4));
      lVar7 = *(long *)(lVar10 + 0x18);
      *(undefined4 *)(puVar6 + 4) = 0x18;
      uVar1 = *(undefined1 *)(lVar10 + 4);
      puVar6[3] = 0x23;
      bVar2 = *(byte *)(lVar7 + 0x20);
      *(undefined8 *)(puVar6 + 8) = 0;
      puVar6[2] = uVar1;
      uVar8 = *(undefined8 *)(lVar7 + 0x3948);
      puVar6[1] = bVar2 & 3;
      puVar9 = *(undefined8 **)(lVar10 + 8);
      *puVar6 = 9;
      *(undefined8 *)(puVar6 + 8) = uVar8;
      *puVar9 = puVar6;
      lVar7 = *(long *)(lVar10 + 8);
      *(undefined4 *)((long)puVar9 + 0xc) = 9;
      *(long *)(lVar10 + 8) = lVar7 + 0x10;
      if (((byte)param_1[8] & 1) == 0) {
        uStack_58 = *(undefined8 *)(param_1 + 0x10);
        local_60 = *(ulong *)(param_1 + 8);
        local_50 = *(void **)(param_1 + 0x18);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_60,*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
      }
      FUN_00467d10(puVar6 + 0x10,lVar10,&local_60);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      uVar8 = 1;
      goto LAB_0048d11c;
    }
    uVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,3);
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,4);
      if ((uVar5 & 1) == 0) {
        uVar8 = 0;
        goto LAB_0048d11c;
      }
      uVar11 = *(undefined4 *)(param_1 + 8);
      if (*(ulong *)(*(long *)(lVar10 + 0x18) + 0x40) <= *(ulong *)(*(long *)(lVar10 + 0x18) + 0x48)
         ) {
        FUN_006239a4(lVar10);
      }
      if ((*(byte *)(lVar10 + 1) >> 2 & 1) != 0) {
        *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) & 0xfb;
        *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x30);
        *(long *)(*(long *)(lVar10 + 0x18) + 0x30) = lVar10;
      }
      puVar6 = (undefined1 *)FUN_00628d60(lVar10,0x30,*(undefined1 *)(lVar10 + 4));
      lVar7 = *(long *)(lVar10 + 0x18);
      uVar1 = *(undefined1 *)(lVar10 + 4);
      *(undefined4 *)(puVar6 + 4) = 0x18;
      bVar2 = *(byte *)(lVar7 + 0x20);
      *(undefined8 *)(puVar6 + 8) = 0;
      uVar8 = *(undefined8 *)(lVar7 + 0x3958);
      puVar6[2] = uVar1;
      puVar6[3] = 0x25;
      puVar6[1] = bVar2 & 3;
      puVar9 = *(undefined8 **)(lVar10 + 8);
      *puVar6 = 9;
      *(undefined8 *)(puVar6 + 8) = uVar8;
      *puVar9 = puVar6;
      lVar7 = *(long *)(lVar10 + 8);
      *(undefined ***)(puVar6 + 0x10) = &PTR__ScriptedDataValue_0066b088;
      *(long *)(puVar6 + 0x18) = lVar10;
      *(undefined4 *)((long)puVar9 + 0xc) = 9;
      *(long *)(lVar10 + 8) = lVar7 + 0x10;
      puVar9 = (undefined8 *)operator_new(0x10);
      *puVar9 = &PTR_FUN_0066b0c8;
      *(undefined4 *)(puVar9 + 1) = uVar11;
    }
    else {
      DVar3 = param_1[8];
      if (*(ulong *)(*(long *)(lVar10 + 0x18) + 0x40) <= *(ulong *)(*(long *)(lVar10 + 0x18) + 0x48)
         ) {
        FUN_006239a4(lVar10);
      }
      if ((*(byte *)(lVar10 + 1) >> 2 & 1) != 0) {
        *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) & 0xfb;
        *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x30);
        *(long *)(*(long *)(lVar10 + 0x18) + 0x30) = lVar10;
      }
      puVar6 = (undefined1 *)FUN_00628d60(lVar10,0x30,*(undefined1 *)(lVar10 + 4));
      lVar7 = *(long *)(lVar10 + 0x18);
      uVar1 = *(undefined1 *)(lVar10 + 4);
      *(undefined4 *)(puVar6 + 4) = 0x18;
      bVar2 = *(byte *)(lVar7 + 0x20);
      *(undefined8 *)(puVar6 + 8) = 0;
      uVar8 = *(undefined8 *)(lVar7 + 0x3950);
      puVar6[2] = uVar1;
      puVar6[3] = 0x24;
      puVar6[1] = bVar2 & 3;
      puVar9 = *(undefined8 **)(lVar10 + 8);
      *puVar6 = 9;
      *(undefined8 *)(puVar6 + 8) = uVar8;
      *puVar9 = puVar6;
      lVar7 = *(long *)(lVar10 + 8);
      *(undefined ***)(puVar6 + 0x10) = &PTR__ScriptedDataValue_0066b008;
      *(long *)(puVar6 + 0x18) = lVar10;
      *(undefined4 *)((long)puVar9 + 0xc) = 9;
      *(long *)(lVar10 + 8) = lVar7 + 0x10;
      puVar9 = (undefined8 *)operator_new(0x10);
      *puVar9 = &PTR_FUN_0066b048;
      *(DataValue *)(puVar9 + 1) = DVar3;
    }
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 8);
    if (*(ulong *)(*(long *)(lVar10 + 0x18) + 0x40) <= *(ulong *)(*(long *)(lVar10 + 0x18) + 0x48))
    {
      FUN_006239a4(lVar10);
    }
    if ((*(byte *)(lVar10 + 1) >> 2 & 1) != 0) {
      *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) & 0xfb;
      *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x30);
      *(long *)(*(long *)(lVar10 + 0x18) + 0x30) = lVar10;
    }
    puVar6 = (undefined1 *)FUN_00628d60(lVar10,0x30,*(undefined1 *)(lVar10 + 4));
    lVar7 = *(long *)(lVar10 + 0x18);
    uVar1 = *(undefined1 *)(lVar10 + 4);
    *(undefined4 *)(puVar6 + 4) = 0x18;
    bVar2 = *(byte *)(lVar7 + 0x20);
    *(undefined8 *)(puVar6 + 8) = 0;
    uVar8 = *(undefined8 *)(lVar7 + 0x3940);
    puVar6[2] = uVar1;
    puVar6[3] = 0x22;
    puVar6[1] = bVar2 & 3;
    puVar9 = *(undefined8 **)(lVar10 + 8);
    *puVar6 = 9;
    *(undefined8 *)(puVar6 + 8) = uVar8;
    *puVar9 = puVar6;
    lVar7 = *(long *)(lVar10 + 8);
    *(undefined ***)(puVar6 + 0x10) = &PTR__ScriptedDataValue_0066af08;
    *(long *)(puVar6 + 0x18) = lVar10;
    *(undefined4 *)((long)puVar9 + 0xc) = 9;
    *(long *)(lVar10 + 8) = lVar7 + 0x10;
    puVar9 = (undefined8 *)operator_new(0x10);
    *puVar9 = &PTR_FUN_0066af48;
    *(undefined4 *)(puVar9 + 1) = uVar11;
  }
  uVar8 = 1;
  *(undefined8 **)(puVar6 + 0x20) = puVar9;
LAB_0048d11c:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 0048d238  FUN_0048d238 =====

void FUN_0048d238(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x168);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1);
    if ((uVar3 & 1) == 0) {
      if (*(long **)(param_1 + 0x168) == (long *)0x0) goto LAB_0048d298;
      (**(code **)(**(long **)(param_1 + 0x168) + 8))();
    }
    puVar4 = *(undefined8 **)(param_1 + 0x168);
    if (puVar4 != (undefined8 *)0x0) goto LAB_0048d2b8;
  }
LAB_0048d298:
  puVar4 = (undefined8 *)operator_new(0x20);
  *puVar4 = &PTR_FUN_0066afc8;
  *(undefined2 *)(puVar4 + 1) = 0;
  *(undefined8 **)(param_1 + 0x168) = puVar4;
LAB_0048d2b8:
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x10);
    local_50 = *(ulong *)(param_2 + 8);
    local_40 = *(void **)(param_2 + 0x18);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar4 + 1),(basic_string *)&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048d328  FUN_0048d328 =====

void FUN_0048d328(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  plVar1 = *(long **)(param_1 + 0x168);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,3);
    if ((uVar2 & 1) == 0) {
      if (*(long **)(param_1 + 0x168) == (long *)0x0) goto LAB_0048d374;
      (**(code **)(**(long **)(param_1 + 0x168) + 8))();
    }
    puVar3 = *(undefined8 **)(param_1 + 0x168);
    if (puVar3 != (undefined8 *)0x0) goto LAB_0048d390;
  }
LAB_0048d374:
  puVar3 = (undefined8 *)operator_new(0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_0066b048;
  *(undefined8 **)(param_1 + 0x168) = puVar3;
LAB_0048d390:
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 8);
  return;
}


// ===== 0048d3a4  FUN_0048d3a4 =====

void FUN_0048d3a4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  plVar1 = *(long **)(param_1 + 0x168);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,4);
    if ((uVar2 & 1) == 0) {
      if (*(long **)(param_1 + 0x168) == (long *)0x0) goto LAB_0048d3f0;
      (**(code **)(**(long **)(param_1 + 0x168) + 8))();
    }
    puVar3 = *(undefined8 **)(param_1 + 0x168);
    if (puVar3 != (undefined8 *)0x0) goto LAB_0048d40c;
  }
LAB_0048d3f0:
  puVar3 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_0066b0c8;
  *(undefined8 **)(param_1 + 0x168) = puVar3;
LAB_0048d40c:
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
  return;
}


// ===== 0048d420  rive::ScriptedDataConverterBase::clone =====

/* rive::ScriptedDataConverterBase::clone() const */

DataConverter * __thiscall rive::ScriptedDataConverterBase::clone(ScriptedDataConverterBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  DataConverter *this_00;
  
  this_00 = (DataConverter *)operator_new(0x170);
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
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined2 *)(this_00 + 0x150) = 0;
  *(undefined4 *)(this_00 + 0x118) = 0;
  puVar2 = PTR_vtable_0067d2f8;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar2 + 0x118;
  *(undefined **)(this_00 + 0xe0) = puVar2 + 0x150;
  *(undefined **)(this_00 + 0xf0) = puVar2 + 0x1d0;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined **)(this_00 + 0x158) = puVar2 + 0x1f8;
  *(undefined4 *)(this_00 + 0xd8) = uVar1;
  DataConverter::copy(this_00,(DataConverter *)this);
  return this_00;
}


// ===== 0048d4f8  FUN_0048d4f8 =====

void FUN_0048d4f8(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0048d51c  rive::ScriptedDrawable::didHydrateScriptInputs =====

/* rive::ScriptedDrawable::didHydrateScriptInputs() */

void __thiscall rive::ScriptedDrawable::didHydrateScriptInputs(ScriptedDrawable *this)

{
  uint uVar1;
  long lVar2;
  
  this[0x200] = (ScriptedDrawable)0x1;
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


// ===== 0048d584  rive::ScriptedDrawable::didHydrateScriptInputs =====

/* non-virtual thunk to rive::ScriptedDrawable::didHydrateScriptInputs() */

void __thiscall rive::ScriptedDrawable::didHydrateScriptInputs(ScriptedDrawable *this)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  
  uVar2 = *(ushort *)(this + -0x118);
  this[0x88] = (ScriptedDrawable)0x1;
  if ((uVar2 >> 9 & 1) == 0) {
    *(ushort *)(this + -0x118) = uVar2 | 0x200;
    (**(code **)(*(long *)(this + -0x178) + 0x70))(this + -0x178);
    lVar3 = *(long *)(this + -0xf8);
    uVar1 = *(uint *)(this + -0x140);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 0048d5fc  rive::ScriptedDrawable::draw =====

/* rive::ScriptedDrawable::draw(rive::Renderer*) */

void __thiscall rive::ScriptedDrawable::draw(ScriptedDrawable *this,Renderer *param_1)

{
  uint uVar1;
  rive rVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  lua_State *extraout_x1;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  rive *this_00;
  long *plVar11;
  float fVar12;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((((byte)this[0x1a9] & 1) != 0) && (*(long *)(this + 0x1c0) != 0)) {
    fVar12 = *(float *)(this + 0xe8);
    this_00 = *(rive **)(*(long *)(this + 0x1c0) + 8);
    if ((fVar12 != 1.0) || (this[0x170] != (ScriptedDrawable)0x0)) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
    if (fVar12 != 1.0) {
      (**(code **)(*(long *)param_1 + 0x48))(fVar12,param_1);
    }
    (**(code **)(*(long *)param_1 + 0x20))(param_1,this + 0xa4);
    if (*(ulong *)(*(long *)(this_00 + 0x18) + 0x40) <= *(ulong *)(*(long *)(this_00 + 0x18) + 0x48)
       ) {
      FUN_006239a4(this_00);
    }
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    uVar7 = (uint)(byte)this_00[4];
    puVar6 = (undefined1 *)FUN_00628d60(this_00,0x20);
    lVar8 = *(long *)(this_00 + 0x18);
    *(undefined4 *)(puVar6 + 4) = 0x10;
    rVar2 = this_00[4];
    puVar6[3] = 0x17;
    bVar3 = *(byte *)(lVar8 + 0x20);
    *(undefined8 *)(puVar6 + 8) = 0;
    *(rive *)(puVar6 + 2) = rVar2;
    uVar9 = *(undefined8 *)(lVar8 + 0x38e8);
    puVar6[1] = bVar3 & 3;
    puVar10 = *(undefined8 **)(this_00 + 8);
    *puVar6 = 9;
    *(undefined8 *)(puVar6 + 8) = uVar9;
    *puVar10 = puVar6;
    lVar8 = *(long *)(this_00 + 8);
    uVar1 = *(uint *)(this + 0x1ac);
    *(Renderer **)(puVar6 + 0x10) = param_1;
    *(undefined4 *)(puVar6 + 0x18) = 0;
    *(undefined4 *)((long)puVar10 + 0xc) = 9;
    *(long *)(this_00 + 8) = lVar8 + 0x10;
    rive_lua_pushRef(this_00,(lua_State *)(ulong)uVar1,uVar7);
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    lVar8 = *(long *)(this_00 + 8);
    local_78 = FUN_0062b178(this_00,&DAT_00242835,4);
    local_6c = 6;
    FUN_00642c8c(this_00,lVar8 + -0x10,&local_78,*(undefined8 *)(this_00 + 8));
    lVar8 = *(long *)(this_00 + 8);
    *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar8 + 0x10);
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + -8);
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + -0x10);
    lVar8 = *(long *)(this_00 + 8);
    *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar8 + 0x10);
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + -0x28);
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + -0x30);
    plVar11 = *(long **)(this_00 + 0x78);
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
    if (plVar11 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = plVar11[7];
      plVar11[7] = (long)(this + 0x178);
    }
    iVar5 = (**(code **)(*plVar11 + 0x30))(plVar11,this_00,2,0);
    rive_lua_closeOrphanRenderPass(this_00,extraout_x1);
    plVar11[7] = lVar8;
    if (iVar5 != 0) {
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x10;
    }
    for (iVar5 = *(int *)(puVar6 + 0x18); iVar5 != 0; iVar5 = iVar5 + -1) {
      (**(code **)(**(long **)(puVar6 + 0x10) + 0x18))();
    }
    lVar8 = *(long *)(this_00 + 8);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)(puVar6 + 0x18) = 0;
    *(long *)(this_00 + 8) = lVar8 + -0x20;
    if ((fVar12 != 1.0) || (this[0x170] != (ScriptedDrawable)0x0)) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x0048d92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_1 + 0x18))(param_1);
        return;
      }
      goto LAB_0048d930;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_0048d930:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048d934  rive::ScriptedDrawable::hitComponents =====

/* rive::ScriptedDrawable::hitComponents(rive::StateMachineInstance*) */

void rive::ScriptedDrawable::hitComponents(StateMachineInstance *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long in_x1;
  undefined8 *in_x8;
  
  if (((byte)param_1[0x1a8] & 0xf8) == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    plVar2 = (long *)operator_new(0x20);
    puVar1 = PTR_vtable_0067d6f0;
    plVar2[1] = (long)param_1;
    plVar2[2] = in_x1;
    plVar2[3] = (long)param_1;
    *plVar2 = (long)(puVar1 + 0x10);
    puVar3 = (undefined8 *)operator_new(8);
    *in_x8 = puVar3;
    *puVar3 = plVar2;
    in_x8[1] = puVar3 + 1;
    in_x8[2] = puVar3 + 1;
  }
  return;
}


// ===== 0048d9b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0048d9b4  rive::HitScriptedDrawable::processEvent =====

/* rive::HitScriptedDrawable::processEvent(rive::Vec2D, rive::ListenerType, bool, float, int) */

undefined1 __thiscall
rive::HitScriptedDrawable::processEvent
          (float param_1,float param_2,HitScriptedDrawable *this,int param_4,uint param_5,
          undefined1 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  rive rVar4;
  byte bVar5;
  long lVar6;
  undefined1 auVar7 [16];
  int iVar8;
  size_t sVar9;
  undefined1 *puVar10;
  lua_State *extraout_x1;
  long lVar11;
  undefined2 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  rive *this_00;
  undefined1 uVar17;
  char *pcVar18;
  long *plVar19;
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  byte local_90;
  undefined7 local_8f;
  char cStack_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined2 local_84 [2];
  char *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar11 = *(long *)(this + 0x18);
  if (*(long *)(lVar11 + 0x1c0) != 0) {
    uVar17 = 0;
    if ((*(long *)(lVar11 + 0x180) == 0) ||
       (this_00 = *(rive **)(*(long *)(lVar11 + 0x1c0) + 8), this_00 == (rive *)0x0))
    goto LAB_0048dac0;
    if ((param_5 & 1) == 0) {
      uVar14 = 0x40;
    }
    else {
      if (param_4 - 9U < 2) goto LAB_0048dabc;
      if (param_4 == 2) {
        uVar14 = 8;
      }
      else if (param_4 == 3) {
        uVar14 = 0x20;
      }
      else {
        uVar14 = 0x10;
      }
    }
    if ((*(uint *)(lVar11 + 0x1a8) & uVar14) != 0) {
      fVar24 = *(float *)(lVar11 + 0xa4);
      fVar23 = *(float *)(lVar11 + 0xb0);
      fVar20 = (float)*(undefined8 *)(lVar11 + 0xa8);
      fVar25 = -fVar20;
      fVar22 = (float)((ulong)*(undefined8 *)(lVar11 + 0xa8) >> 0x20);
      fVar29 = (float)NEON_fmadd(fVar24,fVar23,fVar25 * fVar22);
      if (fVar29 != 0.0) {
        uVar27 = *(undefined8 *)(lVar11 + 0xb4);
        rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(lVar11 + 0x1ac),param_5);
        if ((param_5 & 1) == 0) {
          pcVar18 = "pointerExit";
          uVar16 = 0x74697845;
LAB_0048db08:
          local_90 = 0x16;
          puVar12 = local_84;
          uStack_87 = (undefined1)((uint)uVar16 >> 8);
          uStack_86 = (undefined2)((uint)uVar16 >> 0x10);
          local_8f = (undefined7)*(undefined8 *)pcVar18;
          cStack_88 = (char)((ulong)*(undefined8 *)pcVar18 >> 0x38);
        }
        else if (param_4 - 9U < 2) {
          local_90 = 0;
          puVar12 = (undefined2 *)((ulong)&local_90 | 1);
        }
        else {
          if (param_4 != 3) {
            if (param_4 == 2) {
              pcVar18 = "pointerDown";
              uVar16 = 0x6e776f44;
            }
            else {
              pcVar18 = "pointerMove";
              uVar16 = 0x65766f4d;
            }
            goto LAB_0048db08;
          }
          local_90 = 0x12;
          uStack_87 = 0x70;
          local_8f = (undefined7)s_pointerUp_0024693d._0_8_;
          cStack_88 = SUB81(s_pointerUp_0024693d._0_8_,7);
          puVar12 = &uStack_86;
        }
        *(undefined1 *)puVar12 = 0;
        pcVar18 = (char *)((ulong)&local_90 | 1);
        if (((byte)this_00[1] >> 2 & 1) != 0) {
          this_00[1] = (rive)((byte)this_00[1] & 0xfb);
          *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
          *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
        }
        lVar11 = *(long *)(this_00 + 8);
        sVar9 = strlen(pcVar18);
        local_78 = FUN_0062b178(this_00,pcVar18,sVar9);
        local_6c = 6;
        FUN_00642c8c(this_00,lVar11 + -0x10,&local_78,*(undefined8 *)(this_00 + 8));
        lVar11 = *(long *)(this_00 + 8);
        iVar8 = *(int *)(lVar11 + 0xc);
        *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar11 + 0x10);
        if (iVar8 == 8) {
          fVar29 = 1.0 / fVar29;
          fVar26 = (float)uVar27;
          fVar28 = (float)((ulong)uVar27 >> 0x20);
          uVar27 = NEON_rev64(CONCAT44(fVar28 * -fVar24,fVar26 * -fVar23),4);
          fVar23 = fVar23 * fVar29;
          fVar25 = fVar25 * fVar29;
          auVar21._4_4_ = fVar25;
          auVar21._0_4_ = fVar23;
          auVar21._8_4_ = -fVar22 * fVar29;
          auVar21._12_4_ = fVar24 * fVar29;
          auVar7._4_4_ = fVar25;
          auVar7._0_4_ = fVar23;
          auVar7._8_4_ = -fVar22 * fVar29;
          auVar7._12_4_ = fVar24 * fVar29;
          auVar21 = NEON_ext(auVar21,auVar7,8,1);
          if (((byte)this_00[1] >> 2 & 1) != 0) {
            this_00[1] = (rive)((byte)this_00[1] & 0xfb);
            *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
            *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
          }
          uVar27 = NEON_rev64(CONCAT44(fVar29 * ((float)((ulong)uVar27 >> 0x20) + fVar28 * fVar22),
                                       fVar29 * ((float)uVar27 + fVar26 * fVar20)),4);
          *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + -8);
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + -0x10);
          uVar2 = *(ulong *)(*(long *)(this_00 + 0x18) + 0x40);
          uVar3 = *(ulong *)(*(long *)(this_00 + 0x18) + 0x48);
          *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
          if (uVar2 <= uVar3) {
            FUN_006239a4(this_00);
          }
          if (((byte)this_00[1] >> 2 & 1) != 0) {
            this_00[1] = (rive)((byte)this_00[1] & 0xfb);
            *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
            *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
          }
          puVar10 = (undefined1 *)FUN_00628d60(this_00,0x30,this_00[4]);
          lVar11 = *(long *)(this_00 + 0x18);
          *(undefined4 *)(puVar10 + 4) = 0x20;
          rVar4 = this_00[4];
          puVar10[3] = 0x26;
          bVar5 = *(byte *)(lVar11 + 0x20);
          *(undefined8 *)(puVar10 + 8) = 0;
          *(rive *)(puVar10 + 2) = rVar4;
          uVar13 = *(undefined8 *)(lVar11 + 0x3960);
          puVar10[1] = bVar5 & 3;
          puVar15 = *(undefined8 **)(this_00 + 8);
          *puVar10 = 9;
          *(undefined8 *)(puVar10 + 8) = uVar13;
          *puVar15 = puVar10;
          lVar11 = *(long *)(this_00 + 8);
          *(undefined4 *)((long)puVar15 + 0xc) = 9;
          puVar10[0x10] = param_6;
          *(long *)(this_00 + 8) = lVar11 + 0x10;
          *(ulong *)(puVar10 + 0x14) =
               CONCAT44((float)((ulong)uVar27 >> 0x20) + auVar21._4_4_ * param_2 + fVar25 * param_1,
                        (float)uVar27 + auVar21._0_4_ * param_2 + fVar23 * param_1);
          *(undefined8 *)(puVar10 + 0x24) = 0;
          *(undefined8 *)(puVar10 + 0x1c) = 0;
          puVar10[0x2c] = 0;
          plVar19 = *(long **)(this_00 + 0x78);
          if (plVar19 == (long *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = plVar19[7];
            lVar1 = 0;
            if (*(long *)(this + 0x18) != 0) {
              lVar1 = *(long *)(this + 0x18) + 0x178;
            }
            plVar19[7] = lVar1;
          }
          iVar8 = (**(code **)(*plVar19 + 0x30))(plVar19,this_00,2,0);
          rive_lua_closeOrphanRenderPass(this_00,extraout_x1);
          plVar19[7] = lVar11;
          if (iVar8 == 0) {
            lVar11 = *(long *)(this_00 + 8);
          }
          else {
            if ((local_90 & 1) != 0) {
              pcVar18 = local_80;
            }
            fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),"%s failed\n",pcVar18);
            lVar11 = *(long *)(this_00 + 8) + -0x10;
          }
          uVar17 = puVar10[0x2c];
        }
        else {
          fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),"expected %s to be a function\n",pcVar18);
          uVar17 = 0;
          lVar11 = *(long *)(this_00 + 8) + -0x10;
        }
        *(long *)(this_00 + 8) = lVar11 + -0x10;
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        goto LAB_0048dac0;
      }
    }
  }
LAB_0048dabc:
  uVar17 = 0;
LAB_0048dac0:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048de30  FUN_0048de30 =====

void FUN_0048de30(void)

{
  return;
}


// ===== 0048de34  FUN_0048de34 =====

undefined8 FUN_0048de34(void)

{
  return 1;
}


// ===== 0048de3c  rive::ScriptedDrawable::hitComponents =====

/* non-virtual thunk to rive::ScriptedDrawable::hitComponents(rive::StateMachineInstance*) */

void __thiscall
rive::ScriptedDrawable::hitComponents(ScriptedDrawable *this,StateMachineInstance *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  
  if (((byte)this[-0x50] & 0xf8) == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    plVar2 = (long *)operator_new(0x20);
    puVar1 = PTR_vtable_0067d6f0;
    plVar2[1] = (long)(this + -0x1f8);
    plVar2[2] = (long)param_1;
    plVar2[3] = (long)(this + -0x1f8);
    *plVar2 = (long)(puVar1 + 0x10);
    puVar3 = (undefined8 *)operator_new(8);
    *in_x8 = puVar3;
    *puVar3 = plVar2;
    in_x8[1] = puVar3 + 1;
    in_x8[2] = puVar3 + 1;
  }
  return;
}


// ===== 0048deb8  rive::HitScriptedDrawable::handlesEvent =====

/* rive::HitScriptedDrawable::handlesEvent(bool, rive::ListenerType) */

bool __thiscall
rive::HitScriptedDrawable::handlesEvent(HitScriptedDrawable *this,uint param_2,int param_3)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0x40;
  }
  else {
    if (param_3 - 9U < 2) {
      return false;
    }
    if (param_3 == 2) {
      uVar1 = 8;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20;
    }
    else {
      uVar1 = 0x10;
    }
  }
  return (*(uint *)(*(long *)(this + 0x18) + 0x1a8) & uVar1) != 0;
}


// ===== 0048df10  rive::ScriptedDrawable::worldToLocal =====

/* rive::ScriptedDrawable::worldToLocal(rive::Vec2D, rive::Vec2D*) */

bool rive::ScriptedDrawable::worldToLocal
               (float param_1,float param_2,long param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar5;
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = *(float *)(param_3 + 0xa4);
  fVar6 = *(float *)(param_3 + 0xb0);
  fVar3 = (float)*(undefined8 *)(param_3 + 0xa8);
  fVar10 = -fVar3;
  fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0xa8) >> 0x20);
  fVar2 = (float)NEON_fmadd(fVar8,fVar6,fVar10 * fVar5);
  if (fVar2 != 0.0) {
    fVar13 = 1.0 / fVar2;
    fVar11 = (float)*(undefined8 *)(param_3 + 0xb4);
    fVar12 = (float)((ulong)*(undefined8 *)(param_3 + 0xb4) >> 0x20);
    fVar7 = fVar6 * fVar13;
    fVar10 = fVar10 * fVar13;
    uVar9 = NEON_rev64(CONCAT44(fVar12 * -fVar8,fVar11 * -fVar6),4);
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar7;
    auVar4._8_4_ = -fVar5 * fVar13;
    auVar4._12_4_ = fVar8 * fVar13;
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar7;
    auVar1._8_4_ = -fVar5 * fVar13;
    auVar1._12_4_ = fVar8 * fVar13;
    auVar4 = NEON_ext(auVar4,auVar1,8,1);
    uVar9 = NEON_rev64(CONCAT44(fVar13 * ((float)((ulong)uVar9 >> 0x20) + fVar12 * fVar5),
                                fVar13 * ((float)uVar9 + fVar11 * fVar3)),4);
    *param_4 = CONCAT44((float)((ulong)uVar9 >> 0x20) + auVar4._4_4_ * param_2 + fVar10 * param_1,
                        (float)uVar9 + auVar4._0_4_ * param_2 + fVar7 * param_1);
  }
  return fVar2 != 0.0;
}


// ===== 0048df98  rive::HitScriptedDrawable::methodName =====

/* rive::HitScriptedDrawable::methodName(bool, rive::ListenerType) */

void rive::HitScriptedDrawable::methodName
               (undefined1 *param_1,undefined8 param_2,uint param_3,int param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = s_pointerUp_0024693d._0_8_;
  if ((param_3 & 1) == 0) {
    pcVar1 = "pointerExit";
    uVar3 = 0x74697845;
  }
  else {
    if (param_4 - 9U < 2) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if (param_4 == 3) {
      *param_1 = 0x12;
      param_1[9] = 0x70;
      *(undefined8 *)(param_1 + 1) = uVar2;
      param_1[10] = 0;
      return;
    }
    if (param_4 == 2) {
      pcVar1 = "pointerDown";
      uVar3 = 0x6e776f44;
    }
    else {
      pcVar1 = "pointerMove";
      uVar3 = 0x65766f4d;
    }
  }
  uVar2 = *(undefined8 *)pcVar1;
  *param_1 = 0x16;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 1) = uVar2;
  param_1[0xc] = 0;
  return;
}


// ===== 0048e044  rive::ScriptedDrawable::keyInput =====

/* rive::ScriptedDrawable::keyInput(rive::Key, rive::KeyModifiers, bool, bool) */

void __thiscall
rive::ScriptedDrawable::keyInput
          (ScriptedDrawable *this,undefined2 param_2,int param_3,byte param_4,byte param_5)

{
  ulong uVar1;
  ulong uVar2;
  rive rVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  lua_State *extraout_x1;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  rive *this_00;
  long *plVar12;
  undefined8 local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (((((byte)this[0x1aa] & 1) == 0) || (*(long *)(this + 0x1c0) == 0)) ||
     (this_00 = *(rive **)(*(long *)(this + 0x1c0) + 8), this_00 == (rive *)0x0)) {
    bVar6 = false;
    goto LAB_0048e210;
  }
  rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x1ac),param_3);
  if (((byte)this_00[1] >> 2 & 1) != 0) {
    this_00[1] = (rive)((byte)this_00[1] & 0xfb);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
    *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
  }
  lVar9 = *(long *)(this_00 + 8);
  local_68 = FUN_0062b178(this_00,"keyboardEvent",0xd);
  local_5c = 6;
  FUN_00642c8c(this_00,lVar9 + -0x10,&local_68,*(undefined8 *)(this_00 + 8));
  lVar9 = *(long *)(this_00 + 8);
  *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar9 + 0x10);
  if (((byte)this_00[1] >> 2 & 1) != 0) {
    this_00[1] = (rive)((byte)this_00[1] & 0xfb);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
    *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
  }
  *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar9 + -8);
  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + -0x10);
  uVar1 = *(ulong *)(*(long *)(this_00 + 0x18) + 0x40);
  uVar2 = *(ulong *)(*(long *)(this_00 + 0x18) + 0x48);
  *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
  if (uVar1 <= uVar2) {
    FUN_006239a4(this_00);
  }
  if (((byte)this_00[1] >> 2 & 1) != 0) {
    this_00[1] = (rive)((byte)this_00[1] & 0xfb);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
    *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
  }
  puVar8 = (undefined1 *)FUN_00628d60(this_00,0x16,this_00[4]);
  lVar9 = *(long *)(this_00 + 0x18);
  *(undefined4 *)(puVar8 + 4) = 6;
  rVar3 = this_00[4];
  puVar8[3] = 0x45;
  bVar4 = *(byte *)(lVar9 + 0x20);
  *(undefined8 *)(puVar8 + 8) = 0;
  *(rive *)(puVar8 + 2) = rVar3;
  uVar10 = *(undefined8 *)(lVar9 + 0x3a58);
  puVar8[1] = bVar4 & 3;
  puVar11 = *(undefined8 **)(this_00 + 8);
  *puVar8 = 9;
  *(undefined8 *)(puVar8 + 8) = uVar10;
  *puVar11 = puVar8;
  lVar9 = *(long *)(this_00 + 8);
  plVar12 = *(long **)(this_00 + 0x78);
  *(undefined4 *)((long)puVar11 + 0xc) = 9;
  *(undefined2 *)(puVar8 + 0x10) = param_2;
  puVar8[0x12] = (char)param_3;
  *(long *)(this_00 + 8) = lVar9 + 0x10;
  puVar8[0x13] = param_4 & 1;
  puVar8[0x14] = param_5 & 1;
  if (plVar12 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = plVar12[7];
    plVar12[7] = (long)(this + 0x178);
  }
  iVar7 = (**(code **)(*plVar12 + 0x30))(plVar12,this_00,2,1);
  rive_lua_closeOrphanRenderPass(this_00,extraout_x1);
  plVar12[7] = lVar9;
  if (iVar7 == 0) {
    lVar9 = *(long *)(this_00 + 8);
    if (((int *)(lVar9 + -0x10) == (int *)&DAT_00285948) || (*(int *)(lVar9 + -4) != 1))
    goto LAB_0048e294;
    bVar6 = *(int *)(lVar9 + -0x10) != 0;
  }
  else {
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),"%s failed\n","keyboardEvent");
    lVar9 = *(long *)(this_00 + 8);
LAB_0048e294:
    bVar6 = false;
  }
  *(long *)(this_00 + 8) = lVar9 + -0x20;
LAB_0048e210:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


// ===== 0048e2dc  rive::ScriptedDrawable::textInput =====

/* rive::ScriptedDrawable::textInput(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void rive::ScriptedDrawable::textInput(basic_string *param_1)

{
  byte bVar1;
  rive rVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *in_x1;
  lua_State *extraout_x1;
  int in_w2;
  long lVar7;
  undefined8 *puVar8;
  rive *this;
  long *plVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (((((byte)param_1[0x1aa] >> 1 & 1) == 0) || (*(long *)(param_1 + 0x1c0) == 0)) ||
     (this = *(rive **)(*(long *)(param_1 + 0x1c0) + 8), this == (rive *)0x0)) {
    bVar4 = false;
    goto LAB_0048e488;
  }
  rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(param_1 + 0x1ac),in_w2);
  if (((byte)this[1] >> 2 & 1) != 0) {
    this[1] = (rive)((byte)this[1] & 0xfb);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
    *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
  }
  lVar7 = *(long *)(this + 8);
  local_60 = FUN_0062b178(this,"textEvent",9);
  uStack_58 = CONCAT44(6,(undefined4)uStack_58);
  FUN_00642c8c(this,lVar7 + -0x10,&local_60,*(undefined8 *)(this + 8));
  lVar7 = *(long *)(this + 8);
  *(undefined8 **)(this + 8) = (undefined8 *)(lVar7 + 0x10);
  if (((byte)this[1] >> 2 & 1) != 0) {
    this[1] = (rive)((byte)this[1] & 0xfb);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
    *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
  }
  *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar7 + -8);
  *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + -0x10);
  *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
  if (*(ulong *)(*(long *)(this + 0x18) + 0x40) <= *(ulong *)(*(long *)(this + 0x18) + 0x48)) {
    FUN_006239a4(this);
  }
  if (((byte)this[1] >> 2 & 1) != 0) {
    this[1] = (rive)((byte)this[1] & 0xfb);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
    *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
  }
  puVar6 = (undefined1 *)FUN_00628d60(this,0x30,this[4]);
  lVar7 = *(long *)(this + 0x18);
  bVar1 = *(byte *)(lVar7 + 0x20);
  *puVar6 = 9;
  puVar6[1] = bVar1 & 3;
  rVar2 = this[4];
  *(undefined4 *)(puVar6 + 4) = 0x18;
  puVar6[3] = 0x46;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(rive *)(puVar6 + 2) = rVar2;
  *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(lVar7 + 0x3a60);
  puVar8 = *(undefined8 **)(this + 8);
  *puVar8 = puVar6;
  *(undefined4 *)((long)puVar8 + 0xc) = 9;
  *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
  if ((*in_x1 & 1) == 0) {
    uStack_58 = *(undefined8 *)(in_x1 + 8);
    local_60 = *(undefined8 *)in_x1;
    local_50 = *(undefined8 *)(in_x1 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,*(char **)(in_x1 + 0x10),*(ulong *)(in_x1 + 8));
  }
  *(undefined8 *)(puVar6 + 0x18) = uStack_58;
  *(undefined8 *)(puVar6 + 0x10) = local_60;
  *(undefined8 *)(puVar6 + 0x20) = local_50;
  plVar9 = *(long **)(this + 0x78);
  if (plVar9 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = plVar9[7];
    plVar9[7] = (long)(param_1 + 0x178);
  }
  iVar5 = (**(code **)(*plVar9 + 0x30))(plVar9,this,2,1);
  rive_lua_closeOrphanRenderPass(this,extraout_x1);
  plVar9[7] = lVar7;
  if (iVar5 == 0) {
    lVar7 = *(long *)(this + 8);
    if (((int *)(lVar7 + -0x10) == (int *)&DAT_00285948) || (*(int *)(lVar7 + -4) != 1))
    goto LAB_0048e53c;
    bVar4 = *(int *)(lVar7 + -0x10) != 0;
  }
  else {
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),"%s failed\n","textEvent");
    lVar7 = *(long *)(this + 8);
LAB_0048e53c:
    bVar4 = false;
  }
  *(long *)(this + 8) = lVar7 + -0x20;
LAB_0048e488:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


// ===== 0048e584  rive::ScriptedDrawable::willDraw =====

/* rive::ScriptedDrawable::willDraw() */

byte __thiscall rive::ScriptedDrawable::willDraw(ScriptedDrawable *this)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)this + 0x1e8))();
  bVar1 = 0;
  if (((uVar2 & 1) == 0) && (*(long *)(this + 0x1c0) != 0)) {
    bVar1 = (byte)this[0x1a9] & 1;
  }
  return bVar1;
}


// ===== 0048e5c8  rive::ScriptedDrawable::update =====

/* rive::ScriptedDrawable::update(rive::ComponentDirt) */

void __thiscall rive::ScriptedDrawable::update(ScriptedDrawable *this,uint param_2)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = param_2 & 0xffff;
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar2 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar2 * *(float *)(this + 0xe8);
    }
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    ScriptedObject::scriptUpdate();
    this[0x200] = (ScriptedDrawable)0x1;
  }
  return;
}


// ===== 0048e65c  rive::ScriptedDrawable::hitTest =====

/* rive::ScriptedDrawable::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::ScriptedDrawable::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 0048e664  rive::ScriptedDrawable::onAddedDirty =====

/* rive::ScriptedDrawable::onAddedDirty(rive::CoreContext*) */

undefined1 __thiscall
rive::ScriptedDrawable::onAddedDirty(ScriptedDrawable *this,CoreContext *param_1)

{
  ScriptedDrawable *pSVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  pSVar1 = (ScriptedDrawable *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pSVar1 = (ScriptedDrawable *)(param_1 + -0x998);
  }
  *(ScriptedDrawable **)(this + 0x40) = pSVar1;
  *(ScriptedDrawable **)(this + 0x80) = pSVar1;
  if (pSVar1 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar4 + 0x90))(plVar3,this);
  }
  if ((byte)this[0x134] - 3 < 0x1a) {
    uVar5 = (ulong)((byte)this[0x134] - 3) & 0xff;
    if (uVar5 - 0xb < 0xfffffffffffffff6) {
      Artboard::addScriptedObject(*(Artboard **)(this + 0x40),(ScriptedObject *)(this + 0x178));
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


// ===== 0048e710  rive::ScriptedDrawable::advanceComponent =====

/* rive::ScriptedDrawable::advanceComponent(float, rive::AdvanceFlags) */

bool __thiscall
rive::ScriptedDrawable::advanceComponent(float param_1,ScriptedDrawable *this,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  if ((param_1 != 0.0) && (this[0x200] != (ScriptedDrawable)0x0)) {
    this[0x200] = (ScriptedDrawable)0x0;
    fVar3 = 0.0;
    if ((param_3 & 1) != 0) {
      fVar3 = param_1;
    }
    uVar2 = ScriptedObject::scriptAdvance(fVar3);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      this[0x200] = (ScriptedDrawable)0x1;
      (**(code **)(*(long *)this + 0x260))(this,0x200,0);
    }
    return bVar1;
  }
  return false;
}


// ===== 0048e78c  rive::ScriptedDrawable::advanceComponent =====

/* non-virtual thunk to rive::ScriptedDrawable::advanceComponent(float, rive::AdvanceFlags) */

bool __thiscall
rive::ScriptedDrawable::advanceComponent(float param_1,ScriptedDrawable *this,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  if ((param_1 != 0.0) && (this[0x10] != (ScriptedDrawable)0x0)) {
    this[0x10] = (ScriptedDrawable)0x0;
    fVar3 = 0.0;
    if ((param_3 & 1) != 0) {
      fVar3 = param_1;
    }
    uVar2 = ScriptedObject::scriptAdvance(fVar3);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      this[0x10] = (ScriptedDrawable)0x1;
      (**(code **)(*(long *)(this + -0x1f0) + 0x260))(this + -0x1f0,0x200,0);
    }
    return bVar1;
  }
  return false;
}


// ===== 0048e808  rive::ScriptedDrawable::addScriptedDirt =====

/* rive::ScriptedDrawable::addScriptedDirt(rive::ComponentDirt, bool) */

void rive::ScriptedDrawable::addScriptedDirt(void)

{
  (*(code *)PTR_addDirt_0067f220)();
  return;
}


// ===== 0048e80c  rive::ScriptedDrawable::addScriptedDirt =====

/* non-virtual thunk to rive::ScriptedDrawable::addScriptedDirt(rive::ComponentDirt, bool) */

void __thiscall rive::ScriptedDrawable::addScriptedDirt(ScriptedDrawable *this)

{
  Component::addDirt((Component *)(this + -0x178));
  return;
}


// ===== 0048e814  rive::ScriptedDrawable::addProperty =====

/* rive::ScriptedDrawable::addProperty(rive::CustomProperty*) */

void __thiscall rive::ScriptedDrawable::addProperty(ScriptedDrawable *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_0048e8ac;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_0048e8ac;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_0048e8ac;
    lVar2 = 0xa0;
  }
  *(ScriptedDrawable **)(param_1 + lVar2 + 8) = this + 0x178;
LAB_0048e8ac:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)(this + 0x188),param_1);
  return;
}


// ===== 0048e8c0  rive::ScriptedDrawable::addProperty =====

/* non-virtual thunk to rive::ScriptedDrawable::addProperty(rive::CustomProperty*) */

void __thiscall rive::ScriptedDrawable::addProperty(ScriptedDrawable *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_0048e958;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_0048e958;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_0048e958;
    lVar2 = 0xa0;
  }
  *(ScriptedDrawable **)(param_1 + lVar2 + 8) = this + -0x10;
LAB_0048e958:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)this,param_1);
  return;
}


// ===== 0048e96c  rive::ScriptedDrawable::import =====

/* rive::ScriptedDrawable::import(rive::ImportStack&) */

undefined8 __thiscall rive::ScriptedDrawable::import(ScriptedDrawable *this,ImportStack *param_1)

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
                      ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 0x178));
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


// ===== 0048ea68  rive::ScriptedDrawable::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ScriptedDrawable::clone() const */

long * __thiscall rive::ScriptedDrawable::clone(ScriptedDrawable *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *__s;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  __s = (long *)operator_new(0x208);
  memset(__s,0,0x208);
  *(undefined4 *)(__s + 1) = 0xffffffff;
  lVar4 = _UNK_00281c00;
  lVar9 = _DAT_00281bf8;
  *(undefined2 *)(__s + 0xc) = 0xfffe;
  __s[6] = 0;
  __s[0x24] = lVar4;
  __s[0x23] = lVar9;
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
  *(long *)((long)__s + 0xac) = lVar4;
  *(long *)((long)__s + 0xa4) = lVar9;
  __s[0x1c] = 0;
  __s[0x1b] = lVar4;
  __s[0x1a] = lVar9;
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
  __s[0x38] = 0;
  __s[0x37] = 0;
  __s[0x3a] = 0;
  __s[0x39] = 0;
  __s[0x3c] = 0;
  __s[0x3b] = 0;
  *(undefined2 *)(__s + 0x3d) = 0;
  puVar5 = PTR_vtable_0067d2f0;
  __s[0x33] = 0;
  __s[0x32] = 0;
  __s[0x35] = 0;
  __s[0x34] = 0;
  lVar9 = *(long *)(this + 0x110);
  uVar11 = *(undefined8 *)(this + 0xbc);
  *(undefined1 *)(__s + 0x40) = 1;
  uVar1 = *(undefined4 *)(this + 0x134);
  __s[0x22] = lVar9;
  uVar8 = *(undefined4 *)(this + 0xc4);
  *__s = (long)(puVar5 + 0x10);
  __s[0x19] = (long)(puVar5 + 0x2b8);
  __s[0x2f] = (long)(puVar5 + 0x2e0);
  __s[0x31] = (long)(puVar5 + 0x360);
  __s[0x3e] = (long)(puVar5 + 0x388);
  __s[0x3f] = (long)(puVar5 + 0x3a0);
  uVar2 = *(undefined4 *)(this + 0x174);
  *(undefined8 *)((long)__s + 0xbc) = uVar11;
  uVar10 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)__s + 0x174) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x138);
  *(undefined4 *)(__s + 0x36) = 0;
  *(undefined4 *)((long)__s + 0x134) = uVar1;
  *(undefined4 *)(__s + 0x27) = uVar2;
  *(undefined4 *)((long)__s + 0xc4) = uVar8;
  *(undefined4 *)(__s + 0x14) = uVar10;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (__s + 2),(basic_string *)(this + 0x10));
  plVar7 = *(long **)(this + 0x180);
  *(undefined4 *)(__s + 5) = *(undefined4 *)(this + 0x28);
  if (plVar7 != (long *)0x0) {
    FUN_00340fb0(1,plVar7 + 9);
    local_40 = plVar7;
    (**(code **)(__s[0x2f] + 0x10))(__s + 0x2f,&local_40);
    plVar7 = local_40;
    if ((local_40 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,local_40 + 9), iVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048ec2c  rive::ScriptedDrawable::markNeedsUpdate =====

/* rive::ScriptedDrawable::markNeedsUpdate() */

void __thiscall rive::ScriptedDrawable::markNeedsUpdate(ScriptedDrawable *this)

{
  if (this[0x1e8] != (ScriptedDrawable)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048ec48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x260))(this,0x4000,0);
  return;
}


// ===== 0048ec4c  rive::ScriptedDrawable::markNeedsUpdate =====

/* non-virtual thunk to rive::ScriptedDrawable::markNeedsUpdate() */

void __thiscall rive::ScriptedDrawable::markNeedsUpdate(ScriptedDrawable *this)

{
  if (this[0x70] != (ScriptedDrawable)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048ec6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x178) + 0x260))(this + -0x178,0x4000,0);
  return;
}


// ===== 0048ec70  FUN_0048ec70 =====

void FUN_0048ec70(long param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)(param_1 + 0x178) = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x188) = puVar1;
  rive::ScriptedObject::scriptDispose((ScriptedObject *)(param_1 + 0x178));
  pvVar3 = *(void **)(param_1 + 0x1d0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x1d8) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 400);
  *(undefined **)(param_1 + 0x188) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x198) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 0x180);
  *(undefined **)(param_1 + 0x178) = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != (ScriptedObject *)(param_1 + 0x178)) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_0048ed50;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_0048ed50:
      plVar5 = *(long **)(param_1 + 0x180);
      if (plVar5 == (long *)0x0) goto LAB_0048ed7c;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_0048ed7c:
  FUN_0035e448(param_1);
  return;
}


// ===== 0048ed94  FUN_0048ed94 =====

void FUN_0048ed94(void *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)((long)param_1 + 0x178) = PTR_vtable_0067d358 + 0x10;
  *(undefined **)((long)param_1 + 0x188) = puVar1;
  rive::ScriptedObject::scriptDispose((ScriptedObject *)((long)param_1 + 0x178));
  pvVar3 = *(void **)((long)param_1 + 0x1d0);
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x1d8) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)((long)param_1 + 0x1c8) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)((long)param_1 + 400);
  *(undefined **)((long)param_1 + 0x188) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x198) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)((long)param_1 + 0x180);
  *(undefined **)((long)param_1 + 0x178) = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != (ScriptedObject *)((long)param_1 + 0x178)) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_0048ee74;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_0048ee74:
      plVar5 = *(long **)((long)param_1 + 0x180);
      if (plVar5 == (long *)0x0) goto LAB_0048eea0;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_0048eea0:
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0048eec0  FUN_0048eec0 =====

undefined8 FUN_0048eec0(void)

{
  return 0x25b;
}


// ===== 0048eec8  FUN_0048eec8 =====

undefined8 FUN_0048eec8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x25b)) {
    return 0;
  }
  return 1;
}


// ===== 0048ef10  FUN_0048ef10 =====

undefined8 FUN_0048ef10(long param_1,ushort param_2,long *param_3)

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
  
  if (0x16 < param_2) {
    if (param_2 == 0x17) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0048f090;
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
LAB_0048f090:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x134) = (int)uVar4;
      return 1;
    }
    if (param_2 == 0x81) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0048f0ac;
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
LAB_0048f0ac:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x138) = (int)uVar4;
      return 1;
    }
    if (param_2 == 0x350) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0048f0c8;
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
LAB_0048f0c8:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x174) = (int)uVar4;
      return 1;
    }
LAB_0048f084:
    uVar3 = FUN_0035ea44();
    return uVar3;
  }
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
    if (param_2 != 0xe) goto LAB_0048f084;
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


// ===== 0048f104  FUN_0048f104 =====

void FUN_0048f104(void)

{
  return;
}


// ===== 0048f108  FUN_0048f108 =====

undefined4 FUN_0048f108(long param_1)

{
  return *(undefined4 *)(param_1 + 0x174);
}


// ===== 0048f110  FUN_0048f110 =====

long FUN_0048f110(long param_1)

{
  return param_1 + 0x88;
}


// ===== 0048f118  FUN_0048f118 =====

void FUN_0048f118(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 0x40) + 0xbc0);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1);
    }
  }
  *param_1 = lVar1;
  return;
}


// ===== 0048f15c  FUN_0048f15c =====

undefined8 FUN_0048f15c(void)

{
  return 1;
}


// ===== 0048f164  FUN_0048f164 =====

void FUN_0048f164(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0048f170  FUN_0048f170 =====

void FUN_0048f170(void)

{
  return;
}


// ===== 0048f174  FUN_0048f174 =====

void FUN_0048f174(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_0048f248;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_0048f248:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) goto LAB_0048f274;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_0048f274:
  FUN_0035e448(param_1 + -0x178);
  return;
}


// ===== 0048f288  FUN_0048f288 =====

void FUN_0048f288(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_0048f35c;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_0048f35c:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) goto LAB_0048f388;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_0048f388:
  FUN_0035e448(param_1 + -0x178);
  operator_delete(param_1 + -0x178);
  return;
}


// ===== 0048f3a8  FUN_0048f3a8 =====

undefined4 FUN_0048f3a8(long param_1)

{
  return *(undefined4 *)(param_1 + -4);
}


// ===== 0048f3b0  FUN_0048f3b0 =====

void FUN_0048f3b0(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + -0x138) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + -0x138) + 0xbc0);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1);
    }
  }
  *param_1 = lVar1;
  return;
}


// ===== 0048f3f8  FUN_0048f3f8 =====

undefined8 FUN_0048f3f8(void)

{
  return 1;
}


// ===== 0048f400  FUN_0048f400 =====

long FUN_0048f400(long param_1)

{
  return param_1 + -0x178;
}


// ===== 0048f408  FUN_0048f408 =====

long FUN_0048f408(long param_1)

{
  return param_1 + -0x100;
}


// ===== 0048f410  FUN_0048f410 =====

void FUN_0048f410(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0048f41c  rive::ScriptedDrawableBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ScriptedDrawableBase::clone() const */

long * __thiscall rive::ScriptedDrawableBase::clone(ScriptedDrawableBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long *__s;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  __s = (long *)operator_new(0x208);
  memset(__s,0,0x208);
  *(undefined4 *)(__s + 1) = 0xffffffff;
  lVar3 = _UNK_00281c00;
  lVar6 = _DAT_00281bf8;
  *(undefined2 *)(__s + 0xc) = 0xfffe;
  __s[6] = 0;
  __s[0x24] = lVar3;
  __s[0x23] = lVar6;
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
  *(long *)((long)__s + 0xa4) = lVar6;
  __s[0x1c] = 0;
  __s[0x1b] = lVar3;
  __s[0x1a] = lVar6;
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
  __s[0x38] = 0;
  __s[0x37] = 0;
  __s[0x3a] = 0;
  __s[0x39] = 0;
  __s[0x3c] = 0;
  __s[0x3b] = 0;
  *(undefined2 *)(__s + 0x3d) = 0;
  puVar4 = PTR_vtable_0067d2f0;
  __s[0x33] = 0;
  __s[0x32] = 0;
  __s[0x35] = 0;
  __s[0x34] = 0;
  lVar6 = *(long *)(this + 0x110);
  uVar8 = *(undefined8 *)(this + 0xbc);
  *(undefined1 *)(__s + 0x40) = 1;
  uVar1 = *(undefined4 *)(this + 0x134);
  __s[0x22] = lVar6;
  uVar5 = *(undefined4 *)(this + 0xc4);
  *__s = (long)(puVar4 + 0x10);
  __s[0x19] = (long)(puVar4 + 0x2b8);
  __s[0x2f] = (long)(puVar4 + 0x2e0);
  __s[0x31] = (long)(puVar4 + 0x360);
  __s[0x3e] = (long)(puVar4 + 0x388);
  __s[0x3f] = (long)(puVar4 + 0x3a0);
  uVar2 = *(undefined4 *)(this + 0x174);
  *(undefined8 *)((long)__s + 0xbc) = uVar8;
  uVar7 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)__s + 0x174) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x138);
  *(undefined4 *)(__s + 0x36) = 0;
  *(undefined4 *)((long)__s + 0x134) = uVar1;
  *(undefined4 *)(__s + 0x27) = uVar2;
  *(undefined4 *)((long)__s + 0xc4) = uVar5;
  *(undefined4 *)(__s + 0x14) = uVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (__s + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(__s + 5) = *(undefined4 *)(this + 0x28);
  return __s;
}


// ===== 0048f558  FUN_0048f558 =====

void FUN_0048f558(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x48f55c);
  (*pcVar1)();
}


// ===== 0048f55c  rive::ScriptedInterpolator::transform =====

/* rive::ScriptedInterpolator::transform(float) const */

void rive::ScriptedInterpolator::transform(float param_1)

{
  long lVar1;
  int iVar2;
  long in_x0;
  lua_State *extraout_x1;
  int in_w2;
  long lVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 *puVar6;
  rive *this;
  long *plVar7;
  undefined4 in_register_00005004;
  ulong uVar8;
  double local_60;
  double local_58;
  undefined4 local_4c;
  long local_48;
  
  uVar8 = CONCAT44(in_register_00005004,param_1);
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(in_x0 + 0x58) == 0) ||
      (this = *(rive **)(*(long *)(in_x0 + 0x58) + 8), this == (rive *)0x0)) ||
     (*(uint *)(in_x0 + 0x44) == 0)) goto LAB_0048f6e0;
  rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(in_x0 + 0x44),in_w2);
  if (((byte)this[1] >> 2 & 1) != 0) {
    this[1] = (rive)((byte)this[1] & 0xfb);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
    *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
  }
  lVar3 = *(long *)(this + 8);
  local_58 = (double)FUN_0062b178(this,"transform",9);
  local_4c = 6;
  FUN_00642c8c(this,lVar3 + -0x10,&local_58,*(undefined8 *)(this + 8));
  puVar6 = *(undefined8 **)(this + 8);
  puVar4 = puVar6 + 2;
  *(undefined8 **)(this + 8) = puVar4;
  if (puVar6 == &DAT_00285948) {
LAB_0048f6d4:
    uVar8 = (ulong)(uint)param_1;
  }
  else {
    uVar8 = (ulong)(uint)param_1;
    if (*(int *)((long)puVar6 + 0xc) == 8) {
      if (((byte)this[1] >> 2 & 1) != 0) {
        this[1] = (rive)((byte)this[1] & 0xfb);
        *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
        *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
      }
      puVar6[3] = puVar6[-1];
      *puVar4 = puVar6[-2];
      lVar3 = *(long *)(this + 8);
      *(long *)(this + 8) = lVar3 + 0x10;
      *(double *)(lVar3 + 0x10) = (double)param_1;
      *(undefined4 *)(lVar3 + 0x1c) = 3;
      plVar7 = *(long **)(this + 0x78);
      *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
      if (plVar7 == (long *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar7[7];
        plVar7[7] = in_x0 + 0x10;
      }
      iVar2 = (**(code **)(*plVar7 + 0x30))(plVar7,this,2,1);
      rive_lua_closeOrphanRenderPass(this,extraout_x1);
      plVar7[7] = lVar3;
      puVar4 = *(undefined8 **)(this + 8);
      if (iVar2 != 0) goto LAB_0048f6d4;
      pdVar5 = (double *)(puVar4 + -2);
      if (*(int *)((long)puVar4 + -4) == 3) {
LAB_0048f744:
        uVar8 = (ulong)(uint)(float)*pdVar5;
      }
      else {
        if ((*(int *)((long)puVar4 + -4) == 6) &&
           (iVar2 = FUN_00629a28(puVar4[-2] + 0x18,&local_58), iVar2 != 0)) {
          local_60 = local_58;
          pdVar5 = &local_60;
          goto LAB_0048f744;
        }
        uVar8 = 0;
      }
      puVar4 = *(undefined8 **)(this + 8);
    }
  }
  *(undefined8 **)(this + 8) = puVar4 + -4;
LAB_0048f6e0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 0048f760  rive::ScriptedInterpolator::transformValue =====

/* rive::ScriptedInterpolator::transformValue(float, float, float) */

undefined1  [16]
rive::ScriptedInterpolator::transformValue(float param_1,float param_2,float param_3)

{
  long lVar1;
  int iVar2;
  long in_x0;
  lua_State *extraout_x1;
  int in_w2;
  long lVar3;
  double *pdVar4;
  rive *this;
  long *plVar5;
  uint uVar6;
  undefined4 in_register_00005004;
  ulong uVar7;
  undefined1 auVar8 [16];
  double local_70;
  double local_68;
  undefined4 local_5c;
  long local_58;
  
  uVar7 = CONCAT44(in_register_00005004,param_1);
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(in_x0 + 0x58) != 0) &&
      (this = *(rive **)(*(long *)(in_x0 + 0x58) + 8), this != (rive *)0x0)) &&
     (*(uint *)(in_x0 + 0x44) != 0)) {
    rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(in_x0 + 0x44),in_w2);
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    lVar3 = *(long *)(this + 8);
    local_68 = (double)FUN_0062b178(this,"transformValue",0xe);
    local_5c = 6;
    FUN_00642c8c(this,lVar3 + -0x10,&local_68,*(undefined8 *)(this + 8));
    lVar3 = *(long *)(this + 8);
    *(undefined8 **)(this + 8) = (undefined8 *)(lVar3 + 0x10);
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + -8);
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + -0x10);
    lVar3 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar3 + 0x10;
    *(double *)(lVar3 + 0x10) = (double)param_1;
    *(undefined4 *)(lVar3 + 0x1c) = 3;
    lVar3 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar3 + 0x10;
    *(double *)(lVar3 + 0x10) = (double)param_2;
    *(undefined4 *)(lVar3 + 0x1c) = 3;
    lVar3 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar3 + 0x10;
    *(double *)(lVar3 + 0x10) = (double)param_3;
    *(undefined4 *)(lVar3 + 0x1c) = 3;
    plVar5 = *(long **)(this + 0x78);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
    if (plVar5 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar5[7];
      plVar5[7] = in_x0 + 0x10;
    }
    iVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,this,4,1);
    uVar7 = rive_lua_closeOrphanRenderPass(this,extraout_x1);
    plVar5[7] = lVar3;
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(long *)(this + 8) + -4);
      pdVar4 = (double *)(*(long *)(this + 8) + -0x10);
      if (iVar2 == 3) {
LAB_0048f970:
        uVar7 = (ulong)(uint)(float)*pdVar4;
      }
      else {
        if ((iVar2 == 6) && (iVar2 = FUN_00629a28((long)*pdVar4 + 0x18,&local_68), iVar2 != 0)) {
          local_70 = local_68;
          pdVar4 = &local_70;
          goto LAB_0048f970;
        }
        uVar7 = 0;
      }
      *(long *)(this + 8) = *(long *)(this + 8) + -0x20;
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0048f9a0;
      goto LAB_0048f914;
    }
    *(long *)(this + 8) = *(long *)(this + 8) + -0x20;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_0048f9a0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  uVar6 = NEON_fmadd(param_2 - param_1,param_3,param_1);
  uVar7 = (ulong)uVar6;
LAB_0048f914:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar7;
  return auVar8;
}


// ===== 0048f9a4  rive::ScriptedInterpolator::addProperty =====

/* rive::ScriptedInterpolator::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedInterpolator::addProperty(ScriptedInterpolator *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_0048fa3c;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_0048fa3c;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_0048fa3c;
    lVar2 = 0xa0;
  }
  *(ScriptedInterpolator **)(param_1 + lVar2 + 8) = this + 0x10;
LAB_0048fa3c:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)(this + 0x20),param_1);
  return;
}


// ===== 0048fa50  rive::ScriptedInterpolator::addProperty =====

/* non-virtual thunk to rive::ScriptedInterpolator::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedInterpolator::addProperty(ScriptedInterpolator *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_0048fae8;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_0048fae8;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_0048fae8;
    lVar2 = 0xa0;
  }
  *(ScriptedInterpolator **)(param_1 + lVar2 + 8) = this + -0x10;
LAB_0048fae8:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)this,param_1);
  return;
}


// ===== 0048fafc  rive::ScriptedInterpolator::import =====

/* rive::ScriptedInterpolator::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptedInterpolator::import(ScriptedInterpolator *this,ImportStack *param_1)

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
                      ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 0x10));
            uVar9 = KeyFrameInterpolator::import((KeyFrameInterpolator *)this,param_1);
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


// ===== 0048fbf8  rive::ScriptedInterpolator::clone =====

/* rive::ScriptedInterpolator::clone() const */

long * __thiscall rive::ScriptedInterpolator::clone(ScriptedInterpolator *this)

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
  puVar3 = PTR_vtable_0067d300;
  plVar5[0x10] = 0;
  *(undefined2 *)(plVar5 + 0x10) = 0;
  *(undefined **)(plVar5 + 2) = puVar3 + 0xc0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[3] = 0;
  plVar5[4] = (long)(puVar3 + 0x140);
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


// ===== 0048fcec  rive::ScriptedInterpolator::cloneScriptedObject =====

/* rive::ScriptedInterpolator::cloneScriptedObject(rive::DataBindContainer*) const */

ScriptedObject * __thiscall
rive::ScriptedInterpolator::cloneScriptedObject
          (ScriptedInterpolator *this,DataBindContainer *param_1)

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


// ===== 0048fd70  rive::ScriptedInterpolator::cloneScriptedObject =====

/* non-virtual thunk to rive::ScriptedInterpolator::cloneScriptedObject(rive::DataBindContainer*)
   const */

ScriptedObject * __thiscall
rive::ScriptedInterpolator::cloneScriptedObject
          (ScriptedInterpolator *this,DataBindContainer *param_1)

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


// ===== 0048fdf4  FUN_0048fdf4 =====

void FUN_0048fdf4(long param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  ScriptedObject *this;
  long *plVar5;
  long *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  this = (ScriptedObject *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1;
  rive::ScriptedObject::scriptDispose(this);
  pvVar3 = *(void **)(param_1 + 0x68);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x70) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x20) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (long *)plVar5[0xd];
    plVar4 = (long *)plVar5[0xe];
    if (__dest != plVar4) {
      do {
        while ((ScriptedObject *)*__dest == this) {
          __n = (long)plVar4 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar4 = (long *)((long)__dest + __n);
          plVar5[0xe] = (long)plVar4;
          if (__dest == plVar4) goto LAB_0048fed4;
        }
        __dest = __dest + 1;
      } while (__dest != plVar4);
LAB_0048fed4:
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0048ff0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5);
      return;
    }
  }
  return;
}


// ===== 0048ff24  FUN_0048ff24 =====

void FUN_0048ff24(void *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  ScriptedObject *this;
  long *plVar5;
  long *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  this = (ScriptedObject *)((long)param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0067d358 + 0x10;
  *(undefined **)((long)param_1 + 0x20) = puVar1;
  rive::ScriptedObject::scriptDispose(this);
  pvVar3 = *(void **)((long)param_1 + 0x68);
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x70) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)((long)param_1 + 0x60) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)((long)param_1 + 0x28);
  *(undefined **)((long)param_1 + 0x20) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x30) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)((long)param_1 + 0x18);
  *(undefined **)((long)param_1 + 0x10) = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (long *)plVar5[0xd];
    plVar4 = (long *)plVar5[0xe];
    if (__dest != plVar4) {
      do {
        while ((ScriptedObject *)*__dest != this) {
          __dest = __dest + 1;
          if (__dest == plVar4) goto LAB_00490004;
        }
        __n = (long)plVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        plVar4 = (long *)((long)__dest + __n);
        plVar5[0xe] = (long)plVar4;
      } while (__dest != plVar4);
LAB_00490004:
      plVar5 = *(long **)((long)param_1 + 0x18);
      if (plVar5 == (long *)0x0) goto LAB_00490030;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00490030:
  operator_delete(param_1);
  return;
}


// ===== 00490048  FUN_00490048 =====

undefined8 FUN_00490048(void)

{
  return 0x3cc;
}


// ===== 00490050  FUN_00490050 =====

bool FUN_00490050(undefined8 param_1,short param_2)

{
  return param_2 == 0x3cc || param_2 == 0xaf;
}


// ===== 00490068  FUN_00490068 =====

bool FUN_00490068(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3f7) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004900cc;
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
LAB_004900cc:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x3f7;
}


// ===== 004900e4  FUN_004900e4 =====

void FUN_004900e4(void)

{
  return;
}


// ===== 004900e8  FUN_004900e8 =====

undefined4 FUN_004900e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 004900f0  FUN_004900f0 =====

undefined8 FUN_004900f0(void)

{
  return 0;
}


// ===== 004900f8  FUN_004900f8 =====

undefined8 FUN_004900f8(void)

{
  return 7;
}


// ===== 00490100  FUN_00490100 =====

undefined8 FUN_00490100(void)

{
  return 0;
}


// ===== 00490108  FUN_00490108 =====

void FUN_00490108(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest == param_1) {
          __n = (long)puVar4 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          puVar4 = (undefined8 *)((long)__dest + __n);
          plVar5[0xe] = (long)puVar4;
          if (__dest == puVar4) goto LAB_004901dc;
        }
        __dest = __dest + 1;
      } while (__dest != puVar4);
LAB_004901dc:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00490210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5);
      return;
    }
  }
  return;
}


// ===== 00490224  FUN_00490224 =====

void FUN_00490224(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_004902f8;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_004902f8:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) goto LAB_00490324;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00490324:
  operator_delete(param_1 + -0x10);
  return;
}


// ===== 00490338  FUN_00490338 =====

undefined4 FUN_00490338(long param_1)

{
  return *(undefined4 *)(param_1 + -4);
}


// ===== 00490340  FUN_00490340 =====

undefined8 FUN_00490340(void)

{
  return 0;
}


// ===== 00490348  FUN_00490348 =====

undefined8 FUN_00490348(void)

{
  return 7;
}


// ===== 00490350  FUN_00490350 =====

undefined8 FUN_00490350(void)

{
  return 0;
}


// ===== 00490358  rive::ScriptedInterpolatorBase::clone =====

/* rive::ScriptedInterpolatorBase::clone() const */

void __thiscall rive::ScriptedInterpolatorBase::clone(ScriptedInterpolatorBase *this)

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
  puVar2 = PTR_vtable_0067d300;
  *(undefined4 *)(plVar3 + 9) = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = (long)(puVar2 + 0x140);
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar3[2] = (long)(puVar2 + 0xc0);
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 004903c8  FUN_004903c8 =====

void FUN_004903c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4903cc);
  (*pcVar1)();
}


// ===== 004903cc  rive::ScriptedLayout::didHydrateScriptInputs =====

/* rive::ScriptedLayout::didHydrateScriptInputs() */

void __thiscall rive::ScriptedLayout::didHydrateScriptInputs(ScriptedLayout *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  this[0x200] = (ScriptedLayout)0x1;
  if ((*(ushort *)(this + 0x60) >> 9 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x200;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar4 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar4 + 0xc32) = 1;
    *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
      *(uint *)(lVar4 + 0xbd4) = uVar1;
    }
  }
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199), (uVar3 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00490460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x2e0))(*(long **)(this + 0x30),1);
    return;
  }
  return;
}


// ===== 00490470  rive::ScriptedLayout::didHydrateScriptInputs =====

/* non-virtual thunk to rive::ScriptedLayout::didHydrateScriptInputs() */

void __thiscall rive::ScriptedLayout::didHydrateScriptInputs(ScriptedLayout *this)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ushort *)(this + -0x118);
  this[0x88] = (ScriptedLayout)0x1;
  if ((uVar2 >> 9 & 1) == 0) {
    *(ushort *)(this + -0x118) = uVar2 | 0x200;
    (**(code **)(*(long *)(this + -0x178) + 0x70))();
    lVar5 = *(long *)(this + -0xf8);
    uVar1 = *(uint *)(this + -0x140);
    *(undefined1 *)(lVar5 + 0xc32) = 1;
    *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar5 + 0xbd4)) {
      *(uint *)(lVar5 + 0xbd4) = uVar1;
    }
  }
  plVar3 = *(long **)(this + -0x148);
  if ((plVar3 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x199), (uVar4 & 1) != 0)) {
    plVar3 = *(long **)(this + -0x148);
                    /* WARNING: Could not recover jumptable at 0x00490510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x2e0))(plVar3,1);
    return;
  }
  return;
}


// ===== 00490520  rive::ScriptedLayout::callScriptedResize =====

/* rive::ScriptedLayout::callScriptedResize(rive::Vec2D) */

void rive::ScriptedLayout::callScriptedResize
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  int iVar2;
  lua_State *extraout_x1;
  long lVar3;
  rive *this;
  long *plVar4;
  undefined8 local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((*(byte *)(param_3 + 0x1a9) >> 4 & 1) != 0) && (*(long *)(param_3 + 0x1c0) != 0)) {
    this = *(rive **)(*(long *)(param_3 + 0x1c0) + 8);
    rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(param_3 + 0x1ac),param_5);
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    lVar3 = *(long *)(this + 8);
    local_68 = FUN_0062b178(this,"resize",6);
    local_5c = 6;
    FUN_00642c8c(this,lVar3 + -0x10,&local_68,*(undefined8 *)(this + 8));
    lVar3 = *(long *)(this + 8);
    *(undefined8 **)(this + 8) = (undefined8 *)(lVar3 + 0x10);
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + -8);
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + -0x10);
    lVar3 = *(long *)(this + 8);
    plVar4 = *(long **)(this + 0x78);
    *(undefined4 *)(lVar3 + 0x10) = param_1;
    *(undefined4 *)(lVar3 + 0x14) = param_2;
    *(undefined4 *)(lVar3 + 0x1c) = 5;
    *(long *)(this + 8) = lVar3 + 0x20;
    if (plVar4 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar4[7];
      plVar4[7] = param_3 + 0x178;
    }
    iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,this,2,0);
    rive_lua_closeOrphanRenderPass(this,extraout_x1);
    plVar4[7] = lVar3;
    if (iVar2 == 0) {
      lVar3 = *(long *)(this + 8);
    }
    else {
      fwrite("resize failed\n",0xe,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
      lVar3 = *(long *)(this + 8) + -0x10;
    }
    *(long *)(this + 8) = lVar3 + -0x10;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004906d4  rive::ScriptedLayout::measureLayout =====

/* rive::ScriptedLayout::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

eh_frame_hdr __thiscall
rive::ScriptedLayout::measureLayout
          (ulong param_1,uint param_2,ScriptedLayout *this,char param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  char *__ptr;
  lua_State *extraout_x1;
  size_t __size;
  long lVar3;
  eh_frame_hdr *peVar4;
  rive *this_00;
  long *plVar5;
  eh_frame_hdr eVar6;
  eh_frame_hdr eVar7;
  ulong uVar8;
  eh_frame_hdr eVar9;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  eVar6.eh_frame_hdr_version = 0;
  eVar6.eh_frame_pointer_encoding = 0;
  eVar6.eh_frame_desc_entry_count_encoding = 0;
  eVar6.eh_frame_table_encoding = 0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x1a8] >> 2 & 1) == 0) {
    uVar8 = 0;
    goto LAB_004908d0;
  }
  uVar8 = 0;
  if (*(long *)(this + 0x1c0) == 0) goto LAB_004908d0;
  this_00 = *(rive **)(*(long *)(this + 0x1c0) + 8);
  rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x1ac),param_5);
  if (((byte)this_00[1] >> 2 & 1) != 0) {
    this_00[1] = (rive)((byte)this_00[1] & 0xfb);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
    *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
  }
  lVar3 = *(long *)(this_00 + 8);
  local_78 = FUN_0062b178(this_00,"measure",7);
  local_6c = 6;
  FUN_00642c8c(this_00,lVar3 + -0x10,&local_78,*(undefined8 *)(this_00 + 8));
  lVar3 = *(long *)(this_00 + 8);
  *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar3 + 0x10);
  if (((byte)this_00[1] >> 2 & 1) != 0) {
    this_00[1] = (rive)((byte)this_00[1] & 0xfb);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
    *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
  }
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + -0x10);
  plVar5 = *(long **)(this_00 + 0x78);
  *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
  if (plVar5 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = plVar5[7];
    plVar5[7] = (long)(this + 0x178);
  }
  iVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,this_00,1,1);
  rive_lua_closeOrphanRenderPass(this_00,extraout_x1);
  plVar5[7] = lVar3;
  if (iVar2 == 0) {
    peVar4 = *(eh_frame_hdr **)(this_00 + 8);
    if ((peVar4 == &eh_frame_hdr_00285958) || (peVar4[-1] != (eh_frame_hdr)0x5)) {
      __ptr = "expected measure to return a Vec2D\n";
      __size = 0x23;
      goto LAB_00490884;
    }
    eVar6 = peVar4[-4];
    eVar7 = peVar4[-3];
  }
  else {
    __ptr = "measure failed\n";
    __size = 0xf;
LAB_00490884:
    fwrite(__ptr,__size,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
    eVar6.eh_frame_hdr_version = 0xff;
    eVar6.eh_frame_pointer_encoding = 0xff;
    eVar6.eh_frame_desc_entry_count_encoding = 0x7f;
    eVar6.eh_frame_table_encoding = 0x7f;
    eVar7 = eVar6;
  }
  eVar9.eh_frame_hdr_version = 0xff;
  eVar9.eh_frame_pointer_encoding = 0xff;
  eVar9.eh_frame_desc_entry_count_encoding = 0x7f;
  eVar9.eh_frame_table_encoding = 0x7f;
  if (param_4 != '\0') {
    eVar9 = SUB84(param_1,0);
  }
  *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x20;
  if ((float)eVar9 <= (float)eVar6) {
    eVar6 = eVar9;
  }
  param_1 = 0x7f7fffff;
  if ((param_5 & 0xff) != 0) {
    param_1 = (ulong)param_2;
  }
  uVar8 = (ulong)(uint)eVar7;
  if ((float)param_1 <= (float)eVar7) {
    uVar8 = param_1;
  }
LAB_004908d0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return eVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar8);
}


// ===== 00490908  rive::ScriptedLayout::measureLayout =====

/* non-virtual thunk to rive::ScriptedLayout::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

void __thiscall rive::ScriptedLayout::measureLayout(ScriptedLayout *this)

{
  measureLayout(this + -200);
  return;
}


// ===== 00490910  rive::ScriptedLayout::controlSize =====

/* rive::ScriptedLayout::controlSize(rive::Vec2D, rive::LayoutScaleType, rive::LayoutScaleType,
   rive::LayoutDirection) */

void rive::ScriptedLayout::controlSize(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x204) = param_1;
  *(undefined4 *)(param_3 + 0x208) = param_2;
  callScriptedResize();
  return;
}


// ===== 0049091c  rive::ScriptedLayout::controlSize =====

/* non-virtual thunk to rive::ScriptedLayout::controlSize(rive::Vec2D, rive::LayoutScaleType,
   rive::LayoutScaleType, rive::LayoutDirection) */

void __thiscall
rive::ScriptedLayout::controlSize(undefined4 param_1,undefined4 param_2,ScriptedLayout *this)

{
  *(undefined4 *)(this + 0x13c) = param_1;
  *(undefined4 *)(this + 0x140) = param_2;
  callScriptedResize(this + -200);
  return;
}


// ===== 00490930  rive::ScriptedLayout::addProperty =====

/* rive::ScriptedLayout::addProperty(rive::CustomProperty*) */

void __thiscall rive::ScriptedLayout::addProperty(ScriptedLayout *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_004909c8;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_004909c8;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_004909c8;
    lVar2 = 0xa0;
  }
  *(ScriptedLayout **)(param_1 + lVar2 + 8) = this + 0x178;
LAB_004909c8:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)(this + 0x188),param_1);
  return;
}


// ===== 004909dc  rive::ScriptedLayout::addProperty =====

/* non-virtual thunk to rive::ScriptedLayout::addProperty(rive::CustomProperty*) */

void __thiscall rive::ScriptedLayout::addProperty(ScriptedLayout *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_00490a74;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_00490a74;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_00490a74;
    lVar2 = 0xa0;
  }
  *(ScriptedLayout **)(param_1 + lVar2 + 8) = this + -0x10;
LAB_00490a74:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)this,param_1);
  return;
}


// ===== 00490a88  rive::ScriptedLayout::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ScriptedLayout::clone() const */

long * __thiscall rive::ScriptedLayout::clone(ScriptedLayout *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long *__s;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  __s = (long *)operator_new(0x210);
  memset(__s,0,0x210);
  *(undefined4 *)(__s + 1) = 0xffffffff;
  lVar5 = _UNK_00281c00;
  lVar10 = _DAT_00281bf8;
  *(undefined2 *)(__s + 0xc) = 0xfffe;
  __s[6] = 0;
  __s[0x24] = lVar5;
  __s[0x23] = lVar10;
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
  *(long *)((long)__s + 0xac) = lVar5;
  *(long *)((long)__s + 0xa4) = lVar10;
  __s[0x1c] = 0;
  __s[0x1b] = lVar5;
  __s[0x1a] = lVar10;
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
  __s[0x38] = 0;
  __s[0x37] = 0;
  __s[0x3a] = 0;
  __s[0x39] = 0;
  __s[0x3c] = 0;
  __s[0x3b] = 0;
  *(undefined2 *)(__s + 0x3d) = 0;
  __s[0x33] = 0;
  __s[0x32] = 0;
  __s[0x35] = 0;
  __s[0x34] = 0;
  puVar6 = PTR_vtable_0067d308;
  *(undefined1 *)(__s + 0x40) = 1;
  lVar10 = *(long *)(this + 0x110);
  uVar12 = *(undefined8 *)(this + 0xbc);
  uVar1 = *(undefined4 *)(this + 0x174);
  *(undefined4 *)(__s + 0x36) = 0;
  __s[0x22] = lVar10;
  uVar9 = *(undefined4 *)(this + 0xc4);
  *__s = (long)(puVar6 + 0x10);
  __s[0x19] = (long)(puVar6 + 0x2c8);
  __s[0x2f] = (long)(puVar6 + 0x2f0);
  __s[0x31] = (long)(puVar6 + 0x370);
  __s[0x3e] = (long)(puVar6 + 0x398);
  __s[0x3f] = (long)(puVar6 + 0x3b0);
  uVar2 = *(undefined4 *)(this + 0x134);
  uVar3 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)((long)__s + 0xbc) = uVar12;
  uVar11 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)__s + 0x174) = uVar1;
  *(undefined4 *)((long)__s + 0x134) = uVar2;
  *(undefined4 *)(__s + 0x27) = uVar3;
  *(undefined4 *)((long)__s + 0xc4) = uVar9;
  *(undefined4 *)(__s + 0x14) = uVar11;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (__s + 2),(basic_string *)(this + 0x10));
  plVar8 = *(long **)(this + 0x180);
  *(undefined4 *)(__s + 5) = *(undefined4 *)(this + 0x28);
  if (plVar8 != (long *)0x0) {
    FUN_00340fb0(1,plVar8 + 9);
    local_40 = plVar8;
    (**(code **)(__s[0x2f] + 0x10))(__s + 0x2f,&local_40);
    plVar8 = local_40;
    if ((local_40 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,local_40 + 9), iVar7 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00490c4c  FUN_00490c4c =====

void FUN_00490c4c(void *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)((long)param_1 + 0x178) = PTR_vtable_0067d358 + 0x10;
  *(undefined **)((long)param_1 + 0x188) = puVar1;
  rive::ScriptedObject::scriptDispose((ScriptedObject *)((long)param_1 + 0x178));
  pvVar3 = *(void **)((long)param_1 + 0x1d0);
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x1d8) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)((long)param_1 + 0x1c8) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)((long)param_1 + 400);
  *(undefined **)((long)param_1 + 0x188) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x198) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)((long)param_1 + 0x180);
  *(undefined **)((long)param_1 + 0x178) = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != (ScriptedObject *)((long)param_1 + 0x178)) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_00490d2c;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_00490d2c:
      plVar5 = *(long **)((long)param_1 + 0x180);
      if (plVar5 == (long *)0x0) goto LAB_00490d58;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00490d58:
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00490d78  FUN_00490d78 =====

undefined8 FUN_00490d78(void)

{
  return 0x27d;
}


// ===== 00490d80  FUN_00490d80 =====

undefined8 FUN_00490d80(undefined8 param_1,uint param_2)

{
  param_2 = param_2 & 0xffff;
  if (param_2 < 0x5b) {
    if ((0x26 < param_2) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) {
      return 0;
    }
  }
  else if (((param_2 != 0x5b) && (param_2 != 0x25b)) && (param_2 != 0x27d)) {
    return 0;
  }
  return 1;
}


// ===== 00490dd4  FUN_00490dd4 =====

undefined8 FUN_00490dd4(void)

{
  return 2;
}


// ===== 00490ddc  FUN_00490ddc =====

void FUN_00490ddc(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_00490eb0;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_00490eb0:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) goto LAB_00490edc;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00490edc:
  FUN_0035e448(param_1 + -0x178);
  return;
}


// ===== 00490ef0  FUN_00490ef0 =====

void FUN_00490ef0(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_00490fc4;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_00490fc4:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) goto LAB_00490ff0;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00490ff0:
  FUN_0035e448(param_1 + -0x178);
  operator_delete(param_1 + -0x178);
  return;
}


// ===== 00491010  FUN_00491010 =====

undefined8 FUN_00491010(void)

{
  return 2;
}


// ===== 00491018  rive::ScriptedLayoutBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ScriptedLayoutBase::clone() const */

long * __thiscall rive::ScriptedLayoutBase::clone(ScriptedLayoutBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  long *__s;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  __s = (long *)operator_new(0x210);
  memset(__s,0,0x210);
  *(undefined4 *)(__s + 1) = 0xffffffff;
  lVar4 = _UNK_00281c00;
  lVar7 = _DAT_00281bf8;
  *(undefined2 *)(__s + 0xc) = 0xfffe;
  __s[6] = 0;
  __s[0x24] = lVar4;
  __s[0x23] = lVar7;
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
  *(long *)((long)__s + 0xac) = lVar4;
  *(long *)((long)__s + 0xa4) = lVar7;
  __s[0x1c] = 0;
  __s[0x1b] = lVar4;
  __s[0x1a] = lVar7;
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
  __s[0x38] = 0;
  __s[0x37] = 0;
  __s[0x3a] = 0;
  __s[0x39] = 0;
  __s[0x3c] = 0;
  __s[0x3b] = 0;
  *(undefined2 *)(__s + 0x3d) = 0;
  __s[0x33] = 0;
  __s[0x32] = 0;
  __s[0x35] = 0;
  __s[0x34] = 0;
  puVar5 = PTR_vtable_0067d308;
  *(undefined1 *)(__s + 0x40) = 1;
  lVar7 = *(long *)(this + 0x110);
  uVar9 = *(undefined8 *)(this + 0xbc);
  uVar1 = *(undefined4 *)(this + 0x174);
  *(undefined4 *)(__s + 0x36) = 0;
  __s[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *__s = (long)(puVar5 + 0x10);
  __s[0x19] = (long)(puVar5 + 0x2c8);
  __s[0x2f] = (long)(puVar5 + 0x2f0);
  __s[0x31] = (long)(puVar5 + 0x370);
  __s[0x3e] = (long)(puVar5 + 0x398);
  __s[0x3f] = (long)(puVar5 + 0x3b0);
  uVar2 = *(undefined4 *)(this + 0x134);
  uVar3 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)((long)__s + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)__s + 0x174) = uVar1;
  *(undefined4 *)((long)__s + 0x134) = uVar2;
  *(undefined4 *)(__s + 0x27) = uVar3;
  *(undefined4 *)((long)__s + 0xc4) = uVar6;
  *(undefined4 *)(__s + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (__s + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(__s + 5) = *(undefined4 *)(this + 0x28);
  return __s;
}


// ===== 00491154  FUN_00491154 =====

void FUN_00491154(void *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)((long)param_1 + 0x178) = PTR_vtable_0067d358 + 0x10;
  *(undefined **)((long)param_1 + 0x188) = puVar1;
  rive::ScriptedObject::scriptDispose((ScriptedObject *)((long)param_1 + 0x178));
  pvVar3 = *(void **)((long)param_1 + 0x1d0);
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x1d8) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)((long)param_1 + 0x1c8) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)((long)param_1 + 400);
  *(undefined **)((long)param_1 + 0x188) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x198) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)((long)param_1 + 0x180);
  *(undefined **)((long)param_1 + 0x178) = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != (ScriptedObject *)((long)param_1 + 0x178)) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_00491234;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_00491234:
      plVar5 = *(long **)((long)param_1 + 0x180);
      if (plVar5 == (long *)0x0) goto LAB_00491260;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00491260:
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00491280  FUN_00491280 =====

void FUN_00491280(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_00491354;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_00491354:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) goto LAB_00491380;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00491380:
  FUN_0035e448(param_1 + -0x178);
  return;
}


// ===== 00491394  FUN_00491394 =====

void FUN_00491394(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_003462d8();
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_00491468;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_00491468:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) goto LAB_00491494;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_00491494:
  FUN_0035e448(param_1 + -0x178);
  operator_delete(param_1 + -0x178);
  return;
}


// ===== 004914b4  rive::ScriptedObject::from =====

/* rive::ScriptedObject::from(rive::Core*) */

Core * rive::ScriptedObject::from(Core *param_1)

{
  ushort uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  if (uVar1 < 0x280) {
    if (uVar1 != 0x25b) {
      if (uVar1 == 0x275) {
        return param_1 + 0xe0;
      }
      if (uVar1 != 0x27d) {
        return (Core *)0x0;
      }
    }
    return param_1 + 0x178;
  }
  if (0x286 < uVar1) {
    if ((uVar1 != 0x287) && (uVar1 != 0x3cc)) {
      return (Core *)0x0;
    }
    return param_1 + 0x10;
  }
  if (uVar1 == 0x280) {
    return param_1 + 0xa8;
  }
  if (uVar1 != 0x286) {
    return (Core *)0x0;
  }
  return param_1 + 0x18;
}


// ===== 00491550  rive::ScriptedObject::setArtboardInput =====

/* rive::ScriptedObject::setArtboardInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, rive::Artboard*) */

void __thiscall
rive::ScriptedObject::setArtboardInput(ScriptedObject *this,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  rive rVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined1 *puVar7;
  size_t sVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *__s;
  rive *this_00;
  undefined8 uVar11;
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (((*(long *)(this + 0x48) != 0) &&
      (this_00 = *(rive **)(*(long *)(this + 0x48) + 8), this_00 != (rive *)0x0)) &&
     (*(long *)(this + 8) != 0)) {
    rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x34),(int)param_3);
    FUN_00370c6c(&local_68,param_3);
    plVar5 = local_68;
    if (*(char *)((long)local_68 + 0xbe9) != '\0') {
      *(undefined1 *)((long)local_68 + 0xbe9) = 0;
      if ((*(ushort *)(local_68 + 0xc) >> 4 & 1) == 0) {
        *(ushort *)(local_68 + 0xc) = *(ushort *)(local_68 + 0xc) | 0x10;
        (**(code **)(*local_68 + 0x70))(local_68);
        lVar9 = plVar5[0x10];
        *(undefined1 *)(lVar9 + 0xc32) = 1;
        *(ushort *)(lVar9 + 0x60) = *(ushort *)(lVar9 + 0x60) | 4;
        uVar1 = *(uint *)(plVar5 + 7);
        if (uVar1 < *(uint *)(lVar9 + 0xbd4)) {
          *(uint *)(lVar9 + 0xbd4) = uVar1;
        }
      }
    }
    uVar11 = *(undefined8 *)(*(long *)(this + 8) + 0xd8);
    (**(code **)(*(long *)this + 0x38))(&local_70,this);
    if (*(ulong *)(*(long *)(this_00 + 0x18) + 0x40) <= *(ulong *)(*(long *)(this_00 + 0x18) + 0x48)
       ) {
      FUN_006239a4(this_00);
    }
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    puVar7 = (undefined1 *)FUN_00628d60(this_00,0x30,this_00[4]);
    local_60 = local_70;
    lVar9 = *(long *)(this_00 + 0x18);
    bVar2 = *(byte *)(lVar9 + 0x20);
    *puVar7 = 9;
    puVar7[1] = bVar2 & 3;
    rVar3 = this_00[4];
    *(undefined4 *)(puVar7 + 4) = 0x20;
    puVar7[3] = 0x18;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(rive *)(puVar7 + 2) = rVar3;
    *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar9 + 0x38f0);
    puVar10 = *(undefined8 **)(this_00 + 8);
    *puVar10 = puVar7;
    *(undefined4 *)((long)puVar10 + 0xc) = 9;
    local_70 = 0;
    local_58 = (long *)0x0;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
    ScriptedArtboard::ScriptedArtboard
              ((ScriptedArtboard *)(puVar7 + 0x10),this_00,uVar11,&local_68,&local_58,&local_60);
    lVar9 = local_60;
    if ((local_60 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,local_60), iVar6 == 1)) {
      FUN_003453a8(lVar9);
    }
    plVar5 = local_58;
    if ((local_58 != (long *)0x0) &&
       (iVar6 = FUN_00340fe0(0xffffffff,(long)local_58 + 0xa4), iVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    lVar9 = local_70;
    if ((local_70 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,local_70), iVar6 == 1)) {
      FUN_003453a8(lVar9);
    }
    __s = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(this_00 + 8);
    if ((*param_2 & 1) == 0) {
      __s = param_2 + 1;
    }
    sVar8 = strlen((char *)__s);
    local_58 = (long *)FUN_0062b178(this_00,__s,sVar8);
    local_4c = 6;
    FUN_00642f48(this_00,lVar9 + -0x20,&local_58,*(long *)(this_00 + 8) + -0x10);
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x20;
    (**(code **)(*(long *)this + 0x40))(this,0x4000,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00491818  rive::ScriptedObject::scriptAsset =====

/* rive::ScriptedObject::scriptAsset() const */

undefined8 __thiscall rive::ScriptedObject::scriptAsset(ScriptedObject *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 00491820  rive::ScriptedObject::setBooleanInput =====

/* rive::ScriptedObject::setBooleanInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, bool) */

void __thiscall
rive::ScriptedObject::setBooleanInput(ScriptedObject *this,byte *param_2,uint param_3)

{
  long lVar1;
  size_t sVar2;
  uint *puVar3;
  long lVar4;
  byte *__s;
  rive *this_00;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x48) == 0) ||
     (this_00 = *(rive **)(*(long *)(this + 0x48) + 8), this_00 == (rive *)0x0)) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x34),param_3);
    puVar3 = *(uint **)(this_00 + 8);
    *puVar3 = param_3 & 1;
    lVar4 = *(long *)(this_00 + 8);
    puVar3[3] = 1;
    *(long *)(this_00 + 8) = lVar4 + 0x10;
    __s = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s = param_2 + 1;
    }
    sVar2 = strlen((char *)__s);
    local_58 = FUN_0062b178(this_00,__s,sVar2);
    local_4c = 6;
    FUN_00642f48(this_00,lVar4 + -0x10,&local_58,*(long *)(this_00 + 8) + -0x10);
    lVar4 = *(long *)this;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x20;
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00491920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x40))(this,0x4000,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00491950  rive::ScriptedObject::setNumberInput =====

/* rive::ScriptedObject::setNumberInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, float) */

void rive::ScriptedObject::setNumberInput(float param_1,long *param_2,byte *param_3,int param_4)

{
  long lVar1;
  size_t sVar2;
  double *pdVar3;
  long lVar4;
  byte *__s;
  rive *this;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2[9] == 0) || (this = *(rive **)(param_2[9] + 8), this == (rive *)0x0)) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)((long)param_2 + 0x34),param_4);
    pdVar3 = *(double **)(this + 8);
    *(undefined4 *)((long)pdVar3 + 0xc) = 3;
    *pdVar3 = (double)param_1;
    lVar4 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar4 + 0x10;
    __s = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s = param_3 + 1;
    }
    sVar2 = strlen((char *)__s);
    local_58 = FUN_0062b178(this,__s,sVar2);
    local_4c = 6;
    FUN_00642f48(this,lVar4 + -0x10,&local_58,*(long *)(this + 8) + -0x10);
    lVar4 = *param_2;
    *(long *)(this + 8) = *(long *)(this + 8) + -0x20;
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00491a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x40))(param_2,0x4000,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00491a8c  rive::ScriptedObject::setIntegerInput =====

/* rive::ScriptedObject::setIntegerInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int) */

void __thiscall
rive::ScriptedObject::setIntegerInput(ScriptedObject *this,byte *param_2,uint param_3)

{
  long lVar1;
  size_t sVar2;
  double *pdVar3;
  long lVar4;
  byte *__s;
  rive *this_00;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x48) == 0) ||
     (this_00 = *(rive **)(*(long *)(this + 0x48) + 8), this_00 == (rive *)0x0)) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x34),param_3);
    pdVar3 = *(double **)(this_00 + 8);
    *(undefined4 *)((long)pdVar3 + 0xc) = 3;
    *pdVar3 = (double)param_3;
    lVar4 = *(long *)(this_00 + 8);
    *(long *)(this_00 + 8) = lVar4 + 0x10;
    __s = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s = param_2 + 1;
    }
    sVar2 = strlen((char *)__s);
    local_58 = FUN_0062b178(this_00,__s,sVar2);
    local_4c = 6;
    FUN_00642f48(this_00,lVar4 + -0x10,&local_58,*(long *)(this_00 + 8) + -0x10);
    lVar4 = *(long *)this;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x20;
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00491b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x40))(this,0x4000,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00491bbc  rive::ScriptedObject::setStringInput =====

/* rive::ScriptedObject::setStringInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
rive::ScriptedObject::setStringInput(ScriptedObject *this,byte *param_2,byte *param_3)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  rive *this_00;
  undefined8 *puVar6;
  undefined8 local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x48) == 0) ||
     (this_00 = *(rive **)(*(long *)(this + 0x48) + 8), this_00 == (rive *)0x0)) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x34),(int)param_3);
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    if (pbVar5 == (byte *)0x0) {
      lVar4 = *(long *)(this_00 + 8);
      *(undefined4 *)(lVar4 + 0xc) = 0;
    }
    else {
      sVar2 = strlen((char *)pbVar5);
      if (*(ulong *)(*(long *)(this_00 + 0x18) + 0x40) <=
          *(ulong *)(*(long *)(this_00 + 0x18) + 0x48)) {
        FUN_006239a4(this_00);
      }
      if (((byte)this_00[1] >> 2 & 1) != 0) {
        this_00[1] = (rive)((byte)this_00[1] & 0xfb);
        *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
        *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
      }
      puVar6 = *(undefined8 **)(this_00 + 8);
      uVar3 = FUN_0062b178(this_00,pbVar5,sVar2);
      *puVar6 = uVar3;
      lVar4 = *(long *)(this_00 + 8);
      *(undefined4 *)((long)puVar6 + 0xc) = 6;
    }
    *(long *)(this_00 + 8) = lVar4 + 0x10;
    pbVar5 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar5 = param_2 + 1;
    }
    sVar2 = strlen((char *)pbVar5);
    local_68 = FUN_0062b178(this_00,pbVar5,sVar2);
    local_5c = 6;
    FUN_00642f48(this_00,lVar4 + -0x10,&local_68,*(long *)(this_00 + 8) + -0x10);
    lVar4 = *(long *)this;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x20;
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x00491d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x40))(this,0x4000,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00491d68  rive::ScriptedObject::setViewModelInput =====

/* rive::ScriptedObject::setViewModelInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, rive::ViewModelInstanceValue*) */

void __thiscall
rive::ScriptedObject::setViewModelInput(ScriptedObject *this,byte *param_2,long *param_3)

{
  byte bVar1;
  rive rVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t sVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *__s;
  rive *this_00;
  long *plVar10;
  long *plVar11;
  long *local_70;
  long *local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(this + 0x48) != 0) &&
     (this_00 = *(rive **)(*(long *)(this + 0x48) + 8), this_00 != (rive *)0x0)) {
    rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x34),(int)param_3);
    sVar4 = (**(code **)(*param_3 + 0x10))(param_3);
    if (sVar4 == 0x1bc) {
      plVar10 = (long *)param_3[0x24];
      if (plVar10 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_58) {
          fwrite("riveLuaPushViewModelInstanceValue - passed in a ViewModelInstanceViewModel with no associated ViewModelInstance.\n"
                 ,0x71,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
          return;
        }
        goto LAB_0049202c;
      }
      FUN_00340fb0(1,(long)plVar10 + 0xa4);
      plVar11 = (long *)plVar10[0x23];
      if (plVar11 != (long *)0x0) {
        FUN_00340fb0(1,plVar11 + 5);
      }
      if (*(ulong *)(*(long *)(this_00 + 0x18) + 0x40) <=
          *(ulong *)(*(long *)(this_00 + 0x18) + 0x48)) {
        FUN_006239a4(this_00);
      }
      if (((byte)this_00[1] >> 2 & 1) != 0) {
        this_00[1] = (rive)((byte)this_00[1] & 0xfb);
        *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
        *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
      }
      puVar6 = (undefined1 *)FUN_00628d60(this_00,0x50,this_00[4]);
      lVar8 = *(long *)(this_00 + 0x18);
      bVar1 = *(byte *)(lVar8 + 0x20);
      *puVar6 = 9;
      puVar6[1] = bVar1 & 3;
      rVar2 = this_00[4];
      *(undefined4 *)(puVar6 + 4) = 0x40;
      puVar6[3] = 0x19;
      *(undefined8 *)(puVar6 + 8) = 0;
      *(rive *)(puVar6 + 2) = rVar2;
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(lVar8 + 0x38f8);
      puVar9 = *(undefined8 **)(this_00 + 8);
      *puVar9 = puVar6;
      *(undefined4 *)((long)puVar9 + 0xc) = 9;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
      local_68 = plVar11;
      FUN_00340fb0(1,(long)plVar10 + 0xa4);
      local_70 = plVar10;
      ScriptedViewModel::ScriptedViewModel
                ((ScriptedViewModel *)(puVar6 + 0x10),this_00,&local_68,&local_70);
      plVar11 = local_70;
      if ((local_70 != (long *)0x0) &&
         (iVar5 = FUN_00340fe0(0xffffffff,(long)local_70 + 0xa4), iVar5 == 1)) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      plVar11 = local_68;
      if ((local_68 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,local_68 + 5), iVar5 == 1))
      {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      iVar5 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4);
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
    __s = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(this_00 + 8);
    if ((*param_2 & 1) == 0) {
      __s = param_2 + 1;
    }
    sVar7 = strlen((char *)__s);
    local_68 = (long *)FUN_0062b178(this_00,__s,sVar7);
    local_5c = 6;
    FUN_00642f48(this_00,lVar8 + -0x20,&local_68,*(long *)(this_00 + 8) + -0x10);
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x20;
    (**(code **)(*(long *)this + 0x40))(this,0x4000,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_0049202c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00492030  rive::ScriptedObject::trigger =====

/* rive::ScriptedObject::trigger(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void rive::ScriptedObject::trigger(long *param_1,byte *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  lua_State *extraout_x1;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *__s;
  rive *this;
  long *plVar7;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_1[9] != 0) && (this = *(rive **)(param_1[9] + 8), this != (rive *)0x0)) {
    rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)((long)param_1 + 0x34),param_3);
    __s = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s = param_2 + 1;
    }
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    lVar4 = *(long *)(this + 8);
    sVar3 = strlen((char *)__s);
    local_58 = FUN_0062b178(this,__s,sVar3);
    local_4c = 6;
    FUN_00642c8c(this,lVar4 + -0x10,&local_58,*(undefined8 *)(this + 8));
    lVar4 = *(long *)(this + 8);
    iVar1 = *(int *)(lVar4 + 0xc);
    *(undefined8 **)(this + 8) = (undefined8 *)(lVar4 + 0x10);
    if (iVar1 == 8) {
      if (((byte)this[1] >> 2 & 1) != 0) {
        this[1] = (rive)((byte)this[1] & 0xfb);
        *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
        *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
      }
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar4 + -8);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + -0x10);
      plVar7 = *(long **)(this + 0x78);
      *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
      if (plVar7 == (long *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = plVar7[7];
        plVar7[7] = (long)param_1;
      }
      (**(code **)(*plVar7 + 0x30))(plVar7,this,1,0);
      rive_lua_closeOrphanRenderPass(this,extraout_x1);
      lVar5 = *(long *)(this + 8);
      lVar6 = *param_1;
      plVar7[7] = lVar4;
      *(long *)(this + 8) = lVar5 + -0x10;
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004921e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x40))(param_1,0x4000,0);
        return;
      }
      goto LAB_004921ec;
    }
    *(long *)(this + 8) = lVar4 + -0x10;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004921ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004921f0  rive::ScriptedObject::scriptAdvance =====

/* rive::ScriptedObject::scriptAdvance(float) */

void rive::ScriptedObject::scriptAdvance(float param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  lua_State *extraout_x1;
  int in_w2;
  long lVar4;
  long lVar5;
  rive *this;
  long *plVar6;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x48) == 0) {
    bVar2 = false;
  }
  else {
    this = *(rive **)(*(long *)(in_x0 + 0x48) + 8);
    bVar2 = false;
    if ((this != (rive *)0x0) && ((*(uint *)(in_x0 + 0x30) & 1) != 0)) {
      rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(in_x0 + 0x34),in_w2);
      if (((byte)this[1] >> 2 & 1) != 0) {
        this[1] = (rive)((byte)this[1] & 0xfb);
        *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
        *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
      }
      lVar4 = *(long *)(this + 8);
      local_58 = FUN_0062b178(this,"advance",7);
      local_4c = 6;
      FUN_00642c8c(this,lVar4 + -0x10,&local_58,*(undefined8 *)(this + 8));
      lVar4 = *(long *)(this + 8);
      *(undefined8 **)(this + 8) = (undefined8 *)(lVar4 + 0x10);
      if (((byte)this[1] >> 2 & 1) != 0) {
        this[1] = (rive)((byte)this[1] & 0xfb);
        *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
        *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
      }
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar4 + -8);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + -0x10);
      lVar4 = *(long *)(this + 8);
      *(undefined4 *)(lVar4 + 0x1c) = 3;
      *(long *)(this + 8) = lVar4 + 0x10;
      *(double *)(lVar4 + 0x10) = (double)param_1;
      plVar6 = *(long **)(this + 0x78);
      *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
      if (plVar6 == (long *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = plVar6[7];
        plVar6[7] = in_x0;
      }
      iVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,this,2,1);
      rive_lua_closeOrphanRenderPass(this,extraout_x1);
      lVar5 = *(long *)(this + 8);
      plVar6[7] = lVar4;
      if ((iVar3 == 0) && (*(int *)(lVar5 + -4) != 0)) {
        if (*(int *)(lVar5 + -4) == 1) {
          bVar2 = *(int *)(lVar5 + -0x10) != 0;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      *(long *)(this + 8) = lVar5 + -0x20;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


// ===== 004923bc  rive::ScriptedObject::scriptDrawCanvas =====

/* rive::ScriptedObject::scriptDrawCanvas() */

void rive::ScriptedObject::scriptDrawCanvas(void)

{
  long lVar1;
  long in_x0;
  lua_State *extraout_x1;
  int in_w2;
  long lVar2;
  rive *this;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(in_x0 + 0x48) != 0) &&
      (this = *(rive **)(*(long *)(in_x0 + 0x48) + 8), this != (rive *)0x0)) &&
     ((*(uint *)(in_x0 + 0x30) >> 0xf & 1) != 0)) {
    rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(in_x0 + 0x34),in_w2);
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    lVar2 = *(long *)(this + 8);
    local_48 = FUN_0062b178(this,"drawCanvas",10);
    local_3c = 6;
    FUN_00642c8c(this,lVar2 + -0x10,&local_48,*(undefined8 *)(this + 8));
    lVar2 = *(long *)(this + 8);
    *(undefined8 **)(this + 8) = (undefined8 *)(lVar2 + 0x10);
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar2 + -8);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + -0x10);
    lVar2 = **(long **)(this + 0x78);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
    (**(code **)(lVar2 + 0x30))(*(long **)(this + 0x78),this,1,0);
    rive_lua_closeOrphanRenderPass(this,extraout_x1);
    *(long *)(this + 8) = *(long *)(this + 8) + -0x10;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004924f4  rive::ScriptedObject::scriptUpdate =====

/* rive::ScriptedObject::scriptUpdate() */

void rive::ScriptedObject::scriptUpdate(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  lua_State *extraout_x1;
  int in_w2;
  long lVar3;
  undefined8 *puVar4;
  rive *this;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(in_x0 + 0x48) != 0) &&
      (this = *(rive **)(*(long *)(in_x0 + 0x48) + 8), this != (rive *)0x0)) &&
     ((*(uint *)(in_x0 + 0x30) >> 1 & 1) != 0)) {
    *(undefined1 *)(in_x0 + 0x70) = 1;
    rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(in_x0 + 0x34),in_w2);
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    lVar3 = *(long *)(this + 8);
    local_58 = FUN_0062b178(this,"update",6);
    local_4c = 6;
    FUN_00642c8c(this,lVar3 + -0x10,&local_58,*(undefined8 *)(this + 8));
    puVar4 = *(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = puVar4 + 2;
    if (((byte)this[1] >> 2 & 1) != 0) {
      this[1] = (rive)((byte)this[1] & 0xfb);
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
      *(rive **)(*(long *)(this + 0x18) + 0x30) = this;
    }
    puVar4[3] = puVar4[1];
    puVar4[2] = *puVar4;
    puVar4[1] = puVar4[-1];
    *puVar4 = puVar4[-2];
    uVar6 = **(undefined8 **)(this + 8);
    puVar4[-1] = (*(undefined8 **)(this + 8))[1];
    puVar4[-2] = uVar6;
    plVar5 = *(long **)(this + 0x78);
    if (plVar5 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar5[7];
      plVar5[7] = in_x0;
    }
    iVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,this,1,0);
    rive_lua_closeOrphanRenderPass(this,extraout_x1);
    plVar5[7] = lVar3;
    if (iVar2 != 0) {
      *(long *)(this + 8) = *(long *)(this + 8) + -0x10;
    }
    *(undefined1 *)(in_x0 + 0x70) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049266c  rive::ScriptedObject::tryLuaUserInit =====

/* rive::ScriptedObject::tryLuaUserInit(lua_State*) */

void rive::ScriptedObject::tryLuaUserInit(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  rive *in_x1;
  lua_State *extraout_x1;
  int in_w2;
  long lVar6;
  long lVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  long *plVar11;
  double dVar12;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  rive_lua_pushRef(in_x1,(lua_State *)(ulong)*(uint *)(param_1 + 0x34),in_w2);
  if (((byte)in_x1[1] >> 2 & 1) != 0) {
    in_x1[1] = (rive)((byte)in_x1[1] & 0xfb);
    *(undefined8 *)(in_x1 + 0x68) = *(undefined8 *)(*(long *)(in_x1 + 0x18) + 0x30);
    *(rive **)(*(long *)(in_x1 + 0x18) + 0x30) = in_x1;
  }
  local_58 = FUN_0062b178();
  iVar4 = (int)&local_58;
  local_4c = 6;
  FUN_00642c8c();
  lVar6 = *(long *)(in_x1 + 8);
  *(undefined8 **)(in_x1 + 8) = (undefined8 *)(lVar6 + 0x10);
  if (((byte)in_x1[1] >> 2 & 1) != 0) {
    in_x1[1] = (rive)((byte)in_x1[1] & 0xfb);
    *(undefined8 *)(in_x1 + 0x68) = *(undefined8 *)(*(long *)(in_x1 + 0x18) + 0x30);
    *(rive **)(*(long *)(in_x1 + 0x18) + 0x30) = in_x1;
  }
  *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar6 + -8);
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + -0x10);
  uVar10 = *(uint *)(param_1 + 0x38);
  *(long *)(in_x1 + 8) = *(long *)(in_x1 + 8) + 0x10;
  rive_lua_pushRef(in_x1,(lua_State *)(ulong)uVar10,iVar4);
  plVar11 = *(long **)(in_x1 + 0x78);
  if (plVar11 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar11[7];
    plVar11[7] = (long)param_1;
  }
  iVar4 = (**(code **)(*plVar11 + 0x30))(plVar11);
  rive_lua_closeOrphanRenderPass(in_x1,extraout_x1);
  plVar11[7] = lVar6;
  if (iVar4 == 0) {
    lVar6 = *(long *)(in_x1 + 8);
    if ((*(int *)(lVar6 + -4) != 0) &&
       (((*(int *)(lVar6 + -4) != 1 || (*(int *)(lVar6 + -0x10) != 0)) &&
        (*(char *)(*(long *)(param_1 + 0x40) + 8) == '\0')))) {
      uVar5 = 1;
      goto LAB_00492b98;
    }
    iVar4 = *(int *)(param_1 + 0x34);
    if (0 < iVar4) {
      lVar6 = *(long *)(in_x1 + 0x18);
      lVar7 = *(long *)(lVar6 + 0x4c0);
      if (iVar4 - 1U < *(uint *)(lVar7 + 8)) {
        pdVar8 = (double *)(*(long *)(lVar7 + 0x18) + (long)(int)(iVar4 - 1U) * 0x10);
      }
      else if (*(undefined **)(lVar7 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
        pdVar8 = (double *)&DAT_00285948;
      }
      else {
        dVar12 = (double)iVar4;
        uVar2 = (uint)((ulong)dVar12 >> 0x20) & 0x7fffffff;
        uVar10 = (SUB84(dVar12,0) ^ uVar2 >> 0x12) * 0x5bd1e995;
        uVar2 = (uVar2 ^ uVar10 >> 0x16) * 0x5bd1e995;
        pdVar9 = (double *)
                 (*(undefined **)(lVar7 + 0x20) +
                 (ulong)((uVar2 ^ (uVar10 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                        (-1 << (ulong)(*(byte *)(lVar7 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
        while( true ) {
          uVar10 = *(uint *)((long)pdVar9 + 0x1c);
          if ((((uVar10 & 0xf) == 3) && (pdVar8 = pdVar9, pdVar9[2] == dVar12)) ||
             (pdVar8 = (double *)&DAT_00285948, uVar10 < 0x10)) break;
          pdVar9 = pdVar9 + ((long)((ulong)uVar10 << 0x20) >> 0x24) * 4;
        }
      }
      iVar1 = *(int *)(lVar6 + 0x4d0);
      *(undefined4 *)((long)pdVar8 + 0xc) = 3;
      *pdVar8 = (double)iVar1;
      *(int *)(lVar6 + 0x4d0) = iVar4;
    }
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 != 0) {
      if (((*(long *)(param_1 + 0x48) != 0) &&
          (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8), lVar6 != 0)) &&
         (uVar10 = iVar4 - 1, 0 < iVar4)) {
        lVar6 = *(long *)(lVar6 + 0x18);
        lVar7 = *(long *)(lVar6 + 0x4c0);
        if (*(uint *)(lVar7 + 8) <= uVar10) {
          if (*(undefined **)(lVar7 + 0x20) == PTR_luaH_dummynode_0067dbd8) goto LAB_00492b60;
          dVar12 = (double)iVar4;
          uVar2 = (uint)((ulong)dVar12 >> 0x20) & 0x7fffffff;
          uVar10 = (SUB84(dVar12,0) ^ uVar2 >> 0x12) * 0x5bd1e995;
          uVar2 = (uVar2 ^ uVar10 >> 0x16) * 0x5bd1e995;
          pdVar9 = (double *)
                   (*(undefined **)(lVar7 + 0x20) +
                   (ulong)((uVar2 ^ (uVar10 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                          (-1 << (ulong)(*(byte *)(lVar7 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
          while( true ) {
            uVar10 = *(uint *)((long)pdVar9 + 0x1c);
            if (((uVar10 & 0xf) == 3) && (pdVar9[2] == dVar12)) goto LAB_00492b68;
            if (uVar10 < 0x10) break;
            pdVar9 = pdVar9 + ((long)((ulong)uVar10 << 0x20) >> 0x24) * 4;
          }
          goto LAB_00492b58;
        }
        goto LAB_00492ab8;
      }
      goto LAB_00492b80;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x34);
    if (0 < iVar4) {
      lVar6 = *(long *)(in_x1 + 0x18);
      lVar7 = *(long *)(lVar6 + 0x4c0);
      if (iVar4 - 1U < *(uint *)(lVar7 + 8)) {
        pdVar8 = (double *)(*(long *)(lVar7 + 0x18) + (long)(int)(iVar4 - 1U) * 0x10);
      }
      else if (*(undefined **)(lVar7 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
        pdVar8 = (double *)&DAT_00285948;
      }
      else {
        dVar12 = (double)iVar4;
        uVar2 = (uint)((ulong)dVar12 >> 0x20) & 0x7fffffff;
        uVar10 = (SUB84(dVar12,0) ^ uVar2 >> 0x12) * 0x5bd1e995;
        uVar2 = (uVar2 ^ uVar10 >> 0x16) * 0x5bd1e995;
        pdVar9 = (double *)
                 (*(undefined **)(lVar7 + 0x20) +
                 (ulong)((uVar2 ^ (uVar10 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                        (-1 << (ulong)(*(byte *)(lVar7 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
        while( true ) {
          uVar10 = *(uint *)((long)pdVar9 + 0x1c);
          if ((((uVar10 & 0xf) == 3) && (pdVar8 = pdVar9, pdVar9[2] == dVar12)) ||
             (pdVar8 = (double *)&DAT_00285948, uVar10 < 0x10)) break;
          pdVar9 = pdVar9 + ((long)((ulong)uVar10 << 0x20) >> 0x24) * 4;
        }
      }
      iVar1 = *(int *)(lVar6 + 0x4d0);
      *(undefined4 *)((long)pdVar8 + 0xc) = 3;
      *pdVar8 = (double)iVar1;
      *(int *)(lVar6 + 0x4d0) = iVar4;
    }
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 != 0) {
      if (((*(long *)(param_1 + 0x48) != 0) &&
          (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8), lVar6 != 0)) &&
         (uVar10 = iVar4 - 1, 0 < iVar4)) {
        lVar6 = *(long *)(lVar6 + 0x18);
        lVar7 = *(long *)(lVar6 + 0x4c0);
        if (uVar10 < *(uint *)(lVar7 + 8)) {
LAB_00492ab8:
          pdVar9 = (double *)(*(long *)(lVar7 + 0x18) + (long)(int)uVar10 * 0x10);
        }
        else if (*(undefined **)(lVar7 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
LAB_00492b60:
          pdVar9 = (double *)&DAT_00285948;
        }
        else {
          dVar12 = (double)iVar4;
          uVar2 = (uint)((ulong)dVar12 >> 0x20) & 0x7fffffff;
          uVar10 = (SUB84(dVar12,0) ^ uVar2 >> 0x12) * 0x5bd1e995;
          uVar2 = (uVar2 ^ uVar10 >> 0x16) * 0x5bd1e995;
          pdVar9 = (double *)
                   (*(undefined **)(lVar7 + 0x20) +
                   (ulong)((uVar2 ^ (uVar10 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                          (-1 << (ulong)(*(byte *)(lVar7 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
          while( true ) {
            uVar10 = *(uint *)((long)pdVar9 + 0x1c);
            if (((uVar10 & 0xf) == 3) && (pdVar9[2] == dVar12)) goto LAB_00492b68;
            if (uVar10 < 0x10) break;
            pdVar9 = pdVar9 + ((long)((ulong)uVar10 << 0x20) >> 0x24) * 4;
          }
LAB_00492b58:
          pdVar9 = (double *)&DAT_00285948;
        }
LAB_00492b68:
        iVar1 = *(int *)(lVar6 + 0x4d0);
        *(undefined4 *)((long)pdVar9 + 0xc) = 3;
        *pdVar9 = (double)iVar1;
        *(int *)(lVar6 + 0x4d0) = iVar4;
      }
LAB_00492b80:
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  lVar6 = *(long *)(in_x1 + 8);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
LAB_00492b98:
  *(long *)(in_x1 + 8) = lVar6 + -0x20;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00492bc8  rive::ScriptedObject::disposeScriptedContext =====

/* rive::ScriptedObject::disposeScriptedContext() */

void __thiscall rive::ScriptedObject::disposeScriptedContext(ScriptedObject *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  
  if (*(undefined8 **)(this + 0x40) != (undefined8 *)0x0) {
    **(undefined8 **)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 != 0) {
    if (((*(long *)(this + 0x48) != 0) &&
        (lVar5 = *(long *)(*(long *)(this + 0x48) + 8), lVar5 != 0)) && (0 < iVar1)) {
      lVar5 = *(long *)(lVar5 + 0x18);
      lVar6 = *(long *)(lVar5 + 0x4c0);
      if (iVar1 - 1U < *(uint *)(lVar6 + 8)) {
        pdVar8 = (double *)(*(long *)(lVar6 + 0x18) + (long)(int)(iVar1 - 1U) * 0x10);
      }
      else if (*(undefined **)(lVar6 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
        pdVar8 = (double *)&DAT_00285948;
      }
      else {
        dVar9 = (double)iVar1;
        uVar4 = (uint)((ulong)dVar9 >> 0x20) & 0x7fffffff;
        uVar3 = (SUB84(dVar9,0) ^ uVar4 >> 0x12) * 0x5bd1e995;
        uVar4 = (uVar4 ^ uVar3 >> 0x16) * 0x5bd1e995;
        pdVar7 = (double *)
                 (*(undefined **)(lVar6 + 0x20) +
                 (ulong)((uVar4 ^ (uVar3 ^ uVar4 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                        (-1 << (ulong)(*(byte *)(lVar6 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
        while( true ) {
          uVar3 = *(uint *)((long)pdVar7 + 0x1c);
          if ((((uVar3 & 0xf) == 3) && (pdVar8 = pdVar7, pdVar7[2] == dVar9)) ||
             (pdVar8 = (double *)&DAT_00285948, uVar3 < 0x10)) break;
          pdVar7 = pdVar7 + ((long)((ulong)uVar3 << 0x20) >> 0x24) * 4;
        }
      }
      iVar2 = *(int *)(lVar5 + 0x4d0);
      *(undefined4 *)((long)pdVar8 + 0xc) = 3;
      *pdVar8 = (double)iVar2;
      *(int *)(lVar5 + 0x4d0) = iVar1;
    }
    *(undefined4 *)(this + 0x38) = 0;
  }
  return;
}


// ===== 00492cdc  rive::ScriptedObject::ensureScriptInitialized =====

/* rive::ScriptedObject::ensureScriptInitialized(rive::ScriptingVM*) */

undefined8 __thiscall
rive::ScriptedObject::ensureScriptInitialized(ScriptedObject *this,ScriptingVM *param_1)

{
  void *__src;
  undefined8 *puVar1;
  int iVar2;
  lua_State lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  void *__dest;
  double *pdVar11;
  undefined1 *puVar12;
  ulong uVar13;
  lua_State *extraout_x1;
  ScriptingVM *pSVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  double *pdVar18;
  lua_State *this_00;
  long *plVar19;
  ulong uVar20;
  double dVar21;
  
  if ((param_1 == (ScriptingVM *)0x0) ||
     (this_00 = *(lua_State **)(param_1 + 8), this_00 == (lua_State *)0x0)) {
    return 0;
  }
  iVar9 = *(int *)(this + 0x34);
  pSVar14 = *(ScriptingVM **)(this + 0x48);
  if ((iVar9 == 0) || (pSVar14 != param_1)) {
    if (pSVar14 != (ScriptingVM *)0x0) {
      if (iVar9 != 0) {
        if (0 < iVar9) {
          lVar15 = *(long *)(*(long *)(pSVar14 + 8) + 0x18);
          lVar17 = *(long *)(lVar15 + 0x4c0);
          if (iVar9 - 1U < *(uint *)(lVar17 + 8)) {
            pdVar18 = (double *)(*(long *)(lVar17 + 0x18) + (long)(int)(iVar9 - 1U) * 0x10);
          }
          else if (*(undefined **)(lVar17 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
            pdVar18 = (double *)&DAT_00285948;
          }
          else {
            dVar21 = (double)iVar9;
            uVar6 = (uint)((ulong)dVar21 >> 0x20) & 0x7fffffff;
            uVar5 = (SUB84(dVar21,0) ^ uVar6 >> 0x12) * 0x5bd1e995;
            uVar6 = (uVar6 ^ uVar5 >> 0x16) * 0x5bd1e995;
            pdVar11 = (double *)
                      (*(undefined **)(lVar17 + 0x20) +
                      (ulong)((uVar6 ^ (uVar5 ^ uVar6 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                             (-1 << (ulong)(*(byte *)(lVar17 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
            while( true ) {
              uVar5 = *(uint *)((long)pdVar11 + 0x1c);
              if ((((uVar5 & 0xf) == 3) && (pdVar18 = pdVar11, pdVar11[2] == dVar21)) ||
                 (pdVar18 = (double *)&DAT_00285948, uVar5 < 0x10)) break;
              pdVar11 = pdVar11 + ((long)((ulong)uVar5 << 0x20) >> 0x24) * 4;
            }
          }
          iVar2 = *(int *)(lVar15 + 0x4d0);
          *(undefined4 *)((long)pdVar18 + 0xc) = 3;
          *pdVar18 = (double)iVar2;
          *(int *)(lVar15 + 0x4d0) = iVar9;
        }
        *(undefined4 *)(this + 0x34) = 0;
      }
      __src = *(void **)(this + 0x58);
      uVar13 = *(long *)(this + 0x60) - (long)__src;
      if (uVar13 != 0) {
        if ((long)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0041c5b4();
        }
        __dest = operator_new(uVar13);
        memcpy(__dest,__src,uVar13);
        uVar20 = 0;
        do {
          if (*(long **)((long)__dest + uVar20) != (long *)0x0) {
            (**(code **)(**(long **)((long)__dest + uVar20) + 0x18))();
          }
          uVar20 = uVar20 + 8;
        } while (uVar13 != uVar20);
        operator_delete(__dest);
      }
      if (*(undefined8 **)(this + 0x40) != (undefined8 *)0x0) {
        **(undefined8 **)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x40) = 0;
      }
      iVar9 = *(int *)(this + 0x38);
      if (iVar9 != 0) {
        if (((*(long *)(this + 0x48) != 0) &&
            (lVar15 = *(long *)(*(long *)(this + 0x48) + 8), lVar15 != 0)) && (0 < iVar9)) {
          lVar15 = *(long *)(lVar15 + 0x18);
          pdVar11 = (double *)FUN_0062f140(*(undefined8 *)(lVar15 + 0x4c0),iVar9);
          iVar2 = *(int *)(lVar15 + 0x4d0);
          *(undefined4 *)((long)pdVar11 + 0xc) = 3;
          *pdVar11 = (double)iVar2;
          *(int *)(lVar15 + 0x4d0) = iVar9;
        }
        *(undefined4 *)(this + 0x38) = 0;
      }
    }
    puVar16 = *(undefined8 **)(this + 0x18);
    puVar1 = *(undefined8 **)(this + 0x20);
    this[0x71] = (ScriptedObject)0x0;
    for (; puVar16 != puVar1; puVar16 = puVar16 + 1) {
      plVar19 = (long *)*puVar16;
      uVar7 = (**(code **)(*plVar19 + 0x10))(plVar19);
      if (uVar7 < 0x26d) {
        lVar15 = 0x90;
        if (uVar7 != 0x263) {
          if (uVar7 == 0x264) {
            lVar15 = 0x88;
          }
          else {
            if (uVar7 != 0x26a) goto LAB_00492fe0;
            lVar15 = 0x98;
          }
        }
LAB_00492fcc:
        uVar13 = (**(code **)(*(long *)((long)plVar19 + lVar15) + 0x20))((long)plVar19 + lVar15);
        if ((uVar13 & 1) == 0) goto LAB_00493148;
      }
      else {
        if (0x272 < uVar7) {
          lVar15 = 0x90;
          if (uVar7 != 0x277) {
            if (uVar7 != 0x273) goto LAB_00492fe0;
            lVar15 = 0xa0;
          }
          goto LAB_00492fcc;
        }
        if (uVar7 == 0x26d) {
          lVar15 = 0x90;
          goto LAB_00492fcc;
        }
        lVar15 = 0x90;
        if (uVar7 == 0x272) goto LAB_00492fcc;
      }
LAB_00492fe0:
    }
    if (*(ulong *)(*(long *)(this_00 + 0x18) + 0x40) <= *(ulong *)(*(long *)(this_00 + 0x18) + 0x48)
       ) {
      FUN_006239a4(this_00);
    }
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (lua_State)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    puVar12 = (undefined1 *)FUN_00628d60(this_00,0x20,this_00[4]);
    lVar15 = *(long *)(this_00 + 0x18);
    *(undefined4 *)(puVar12 + 4) = 0x10;
    lVar3 = this_00[4];
    puVar12[3] = 0x2a;
    bVar4 = *(byte *)(lVar15 + 0x20);
    *(undefined8 *)(puVar12 + 8) = 0;
    *(lua_State *)(puVar12 + 2) = lVar3;
    uVar10 = *(undefined8 *)(lVar15 + 0x3980);
    puVar12[1] = bVar4 & 3;
    puVar16 = *(undefined8 **)(this_00 + 8);
    *puVar12 = 9;
    *(undefined8 *)(puVar12 + 8) = uVar10;
    *puVar16 = puVar12;
    lVar15 = *(long *)(this_00 + 8);
    *(undefined4 *)((long)puVar16 + 0xc) = 9;
    *(long *)(this_00 + 8) = lVar15 + 0x10;
    ScriptedContext::ScriptedContext((ScriptedContext *)(puVar12 + 0x10),this);
    *(ScriptedContext **)(this + 0x40) = (ScriptedContext *)(puVar12 + 0x10);
    uVar8 = lua_ref(this_00,-1);
    plVar19 = *(long **)(this_00 + 0x78);
    *(undefined4 *)(this + 0x38) = uVar8;
    if (plVar19 == (long *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = plVar19[7];
      plVar19[7] = (long)this;
    }
    iVar9 = (**(code **)(*plVar19 + 0x30))(plVar19,this_00,1,1);
    rive_lua_closeOrphanRenderPass((rive *)this_00,extraout_x1);
    plVar19[7] = lVar15;
    if (iVar9 == 0) {
      if ((*(eh_frame_hdr **)(this_00 + 8) != &eh_frame_hdr_00285958) &&
         ((*(eh_frame_hdr **)(this_00 + 8))[-1] == (eh_frame_hdr)0x7)) {
        uVar8 = lua_ref(this_00,-1);
        *(ScriptingVM **)(this + 0x48) = param_1;
        *(undefined4 *)(this + 0x34) = uVar8;
        goto LAB_00492d14;
      }
      if (*(undefined8 **)(this + 0x40) != (undefined8 *)0x0) {
        **(undefined8 **)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x40) = 0;
      }
      if (*(int *)(this + 0x38) == 0) goto LAB_00493148;
      lua_unref(this_00,*(int *)(this + 0x38));
    }
    else {
      if (*(undefined8 **)(this + 0x40) != (undefined8 *)0x0) {
        **(undefined8 **)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x40) = 0;
      }
      iVar9 = *(int *)(this + 0x38);
      if (iVar9 == 0) {
LAB_00493148:
        uVar10 = 0;
        goto LAB_00493214;
      }
      if (0 < iVar9) {
        lVar15 = *(long *)(this_00 + 0x18);
        lVar17 = *(long *)(lVar15 + 0x4c0);
        if (iVar9 - 1U < *(uint *)(lVar17 + 8)) {
          pdVar18 = (double *)(*(long *)(lVar17 + 0x18) + (long)(int)(iVar9 - 1U) * 0x10);
        }
        else if (*(undefined **)(lVar17 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
          pdVar18 = (double *)&DAT_00285948;
        }
        else {
          dVar21 = (double)iVar9;
          uVar6 = (uint)((ulong)dVar21 >> 0x20) & 0x7fffffff;
          uVar5 = (SUB84(dVar21,0) ^ uVar6 >> 0x12) * 0x5bd1e995;
          uVar6 = (uVar6 ^ uVar5 >> 0x16) * 0x5bd1e995;
          pdVar11 = (double *)
                    (*(undefined **)(lVar17 + 0x20) +
                    (ulong)((uVar6 ^ (uVar5 ^ uVar6 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                           (-1 << (ulong)(*(byte *)(lVar17 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
          while( true ) {
            uVar5 = *(uint *)((long)pdVar11 + 0x1c);
            if ((((uVar5 & 0xf) == 3) && (pdVar18 = pdVar11, pdVar11[2] == dVar21)) ||
               (pdVar18 = (double *)&DAT_00285948, uVar5 < 0x10)) break;
            pdVar11 = pdVar11 + ((long)((ulong)uVar5 << 0x20) >> 0x24) * 4;
          }
        }
        iVar2 = *(int *)(lVar15 + 0x4d0);
        *(undefined4 *)((long)pdVar18 + 0xc) = 3;
        *pdVar18 = (double)iVar2;
        *(int *)(lVar15 + 0x4d0) = iVar9;
      }
    }
    uVar10 = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  else {
LAB_00492d14:
    uVar10 = 1;
  }
LAB_00493214:
  *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x10;
  return uVar10;
}


// ===== 00493238  rive::ScriptedObject::disposeTrackedProperties =====

/* rive::ScriptedObject::disposeTrackedProperties() */

void __thiscall rive::ScriptedObject::disposeTrackedProperties(ScriptedObject *this)

{
  void *__src;
  ulong __n;
  void *__dest;
  ulong uVar1;
  
  __src = *(void **)(this + 0x58);
  __n = *(long *)(this + 0x60) - (long)__src;
  if (__n == 0) {
    return;
  }
  if (-1 < (long)__n) {
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar1 = 0;
    do {
      if (*(long **)((long)__dest + uVar1) != (long *)0x0) {
        (**(code **)(**(long **)((long)__dest + uVar1) + 0x18))();
      }
      uVar1 = uVar1 + 8;
    } while (__n != uVar1);
    operator_delete(__dest);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0041c5b4();
}


// ===== 004932c4  rive::ScriptedObject::hydrateScriptInputs =====

/* rive::ScriptedObject::hydrateScriptInputs() */

undefined8 __thiscall rive::ScriptedObject::hydrateScriptInputs(ScriptedObject *this)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (*(long *)(this + 0x48) == 0) {
    return 0;
  }
  uVar3 = 0;
  if ((*(long *)(*(long *)(this + 0x48) + 8) != 0) && (*(int *)(this + 0x34) != 0)) {
    puVar7 = *(undefined8 **)(this + 0x18);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar7 != puVar1) {
      do {
        plVar6 = (long *)*puVar7;
        uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if (uVar2 < 0x26d) {
          lVar5 = 0x90;
          if (uVar2 != 0x263) {
            if (uVar2 == 0x264) {
              lVar5 = 0x88;
            }
            else {
              if (uVar2 != 0x26a) goto LAB_00493360;
              lVar5 = 0x98;
            }
          }
LAB_0049334c:
          uVar4 = (**(code **)(*(long *)((long)plVar6 + lVar5) + 0x30))((long)plVar6 + lVar5);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
        }
        else {
          if (0x272 < uVar2) {
            lVar5 = 0x90;
            if (uVar2 != 0x277) {
              if (uVar2 != 0x273) goto LAB_00493360;
              lVar5 = 0xa0;
            }
            goto LAB_0049334c;
          }
          if (uVar2 == 0x26d) {
            lVar5 = 0x90;
            goto LAB_0049334c;
          }
          lVar5 = 0x90;
          if (uVar2 == 0x272) goto LAB_0049334c;
        }
LAB_00493360:
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
      puVar1 = *(undefined8 **)(this + 0x20);
      for (puVar7 = *(undefined8 **)(this + 0x18); puVar7 != puVar1; puVar7 = puVar7 + 1) {
        plVar6 = (long *)*puVar7;
        uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if (uVar2 < 0x26d) {
          lVar5 = 0x90;
          if (uVar2 != 0x263) {
            if (uVar2 == 0x264) {
              lVar5 = 0x88;
            }
            else {
              if (uVar2 != 0x26a) goto LAB_00493420;
              lVar5 = 0x98;
            }
          }
LAB_0049340c:
          uVar4 = (**(code **)(*(long *)((long)plVar6 + lVar5) + 0x28))((long)plVar6 + lVar5);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
        }
        else {
          if (0x272 < uVar2) {
            lVar5 = 0x90;
            if (uVar2 != 0x277) {
              if (uVar2 != 0x273) goto LAB_00493420;
              lVar5 = 0xa0;
            }
            goto LAB_0049340c;
          }
          if (uVar2 == 0x26d) {
            lVar5 = 0x90;
            goto LAB_0049340c;
          }
          lVar5 = 0x90;
          if (uVar2 == 0x272) goto LAB_0049340c;
        }
LAB_00493420:
      }
    }
    if ((((byte)this[0x31] >> 1 & 1) != 0) && (this[0x71] == (ScriptedObject)0x0)) {
      uVar4 = tryLuaUserInit((lua_State *)this);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      this[0x71] = (ScriptedObject)0x1;
    }
    (**(code **)(*(long *)this + 0x68))();
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 004934cc  rive::ScriptedObject::disposeScriptInputs =====

/* rive::ScriptedObject::disposeScriptInputs() */

void __thiscall rive::ScriptedObject::disposeScriptInputs(ScriptedObject *this)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar5 != puVar1) {
    do {
      plVar4 = (long *)*puVar5;
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (uVar2 < 0x26d) {
        lVar3 = 0x90;
        if (uVar2 != 0x263) {
          if (uVar2 == 0x264) {
            lVar3 = 0x88;
          }
          else {
            if (uVar2 != 0x26a) goto LAB_004934fc;
            lVar3 = 0x98;
          }
        }
LAB_004934f4:
        *(undefined8 *)((long)plVar4 + lVar3 + 8) = 0;
      }
      else {
        if (0x272 < uVar2) {
          lVar3 = 0x90;
          if (uVar2 != 0x277) {
            if (uVar2 != 0x273) goto LAB_004934fc;
            lVar3 = 0xa0;
          }
          goto LAB_004934f4;
        }
        if (uVar2 == 0x26d) {
          lVar3 = 0x90;
          goto LAB_004934f4;
        }
        lVar3 = 0x90;
        if (uVar2 == 0x272) goto LAB_004934f4;
      }
LAB_004934fc:
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
    puVar5 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar5;
  return;
}


// ===== 004935a8  rive::ScriptedObject::scriptDispose =====

/* rive::ScriptedObject::scriptDispose() */

void __thiscall rive::ScriptedObject::scriptDispose(ScriptedObject *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong __n;
  void *__dest;
  long lVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  ulong uVar9;
  void *__src;
  double dVar10;
  
  (**(code **)(*(long *)this + 0x28))();
  __src = *(void **)(this + 0x58);
  __n = *(long *)(this + 0x60) - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0041c5b4();
    }
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar9 = 0;
    do {
      if (*(long **)((long)__dest + uVar9) != (long *)0x0) {
        (**(code **)(**(long **)((long)__dest + uVar9) + 0x18))();
      }
      uVar9 = uVar9 + 8;
    } while (__n != uVar9);
    operator_delete(__dest);
    __src = *(void **)(this + 0x58);
  }
  *(void **)(this + 0x60) = __src;
  if ((*(long *)(this + 0x48) != 0) && (lVar5 = *(long *)(*(long *)(this + 0x48) + 8), lVar5 != 0))
  {
    iVar1 = *(int *)(this + 0x34);
    if (0 < iVar1) {
      lVar5 = *(long *)(lVar5 + 0x18);
      lVar6 = *(long *)(lVar5 + 0x4c0);
      if (iVar1 - 1U < *(uint *)(lVar6 + 8)) {
        pdVar8 = (double *)(*(long *)(lVar6 + 0x18) + (long)(int)(iVar1 - 1U) * 0x10);
      }
      else if (*(undefined **)(lVar6 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
        pdVar8 = (double *)&DAT_00285948;
      }
      else {
        dVar10 = (double)iVar1;
        uVar4 = (uint)((ulong)dVar10 >> 0x20) & 0x7fffffff;
        uVar3 = (SUB84(dVar10,0) ^ uVar4 >> 0x12) * 0x5bd1e995;
        uVar4 = (uVar4 ^ uVar3 >> 0x16) * 0x5bd1e995;
        pdVar7 = (double *)
                 (*(undefined **)(lVar6 + 0x20) +
                 (ulong)((uVar4 ^ (uVar3 ^ uVar4 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                        (-1 << (ulong)(*(byte *)(lVar6 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
        while( true ) {
          uVar3 = *(uint *)((long)pdVar7 + 0x1c);
          if ((((uVar3 & 0xf) == 3) && (pdVar8 = pdVar7, pdVar7[2] == dVar10)) ||
             (pdVar8 = (double *)&DAT_00285948, uVar3 < 0x10)) break;
          pdVar7 = pdVar7 + ((long)((ulong)uVar3 << 0x20) >> 0x24) * 4;
        }
      }
      iVar2 = *(int *)(lVar5 + 0x4d0);
      *(undefined4 *)((long)pdVar8 + 0xc) = 3;
      *pdVar8 = (double)iVar2;
      *(int *)(lVar5 + 0x4d0) = iVar1;
    }
    if (*(undefined8 **)(this + 0x40) != (undefined8 *)0x0) {
      **(undefined8 **)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x40) = 0;
    }
    iVar1 = *(int *)(this + 0x38);
    if (iVar1 != 0) {
      if (((*(long *)(this + 0x48) != 0) &&
          (lVar5 = *(long *)(*(long *)(this + 0x48) + 8), lVar5 != 0)) && (0 < iVar1)) {
        lVar5 = *(long *)(lVar5 + 0x18);
        lVar6 = *(long *)(lVar5 + 0x4c0);
        if (iVar1 - 1U < *(uint *)(lVar6 + 8)) {
          pdVar8 = (double *)(*(long *)(lVar6 + 0x18) + (long)(int)(iVar1 - 1U) * 0x10);
        }
        else if (*(undefined **)(lVar6 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
          pdVar8 = (double *)&DAT_00285948;
        }
        else {
          dVar10 = (double)iVar1;
          uVar4 = (uint)((ulong)dVar10 >> 0x20) & 0x7fffffff;
          uVar3 = (SUB84(dVar10,0) ^ uVar4 >> 0x12) * 0x5bd1e995;
          uVar4 = (uVar4 ^ uVar3 >> 0x16) * 0x5bd1e995;
          pdVar7 = (double *)
                   (*(undefined **)(lVar6 + 0x20) +
                   (ulong)((uVar4 ^ (uVar3 ^ uVar4 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                          (-1 << (ulong)(*(byte *)(lVar6 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
          while( true ) {
            uVar3 = *(uint *)((long)pdVar7 + 0x1c);
            if ((((uVar3 & 0xf) == 3) && (pdVar8 = pdVar7, pdVar7[2] == dVar10)) ||
               (pdVar8 = (double *)&DAT_00285948, uVar3 < 0x10)) break;
            pdVar7 = pdVar7 + ((long)((ulong)uVar3 << 0x20) >> 0x24) * 4;
          }
        }
        iVar2 = *(int *)(lVar5 + 0x4d0);
        *(undefined4 *)((long)pdVar8 + 0xc) = 3;
        *pdVar8 = (double)iVar2;
        *(int *)(lVar5 + 0x4d0) = iVar1;
      }
      *(undefined4 *)(this + 0x38) = 0;
    }
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x71] = (ScriptedObject)0x0;
  return;
}


// ===== 00493854  rive::ScriptedObject::reinit =====

/* rive::ScriptedObject::reinit() */

void __thiscall rive::ScriptedObject::reinit(ScriptedObject *this)

{
  ScriptedObject *pSVar1;
  
  pSVar1 = *(ScriptedObject **)(this + 8);
  if (pSVar1 != (ScriptedObject *)0x0) {
    if ((*(long *)(pSVar1 + 0xd8) != 0) && (*(long *)(*(long *)(pSVar1 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar1);
    }
    hydrateScriptInputs(this);
    return;
  }
  return;
}


// ===== 0049389c  rive::ScriptedObject::setAsset =====

/* rive::ScriptedObject::setAsset(rive::rcp<rive::FileAsset>) */

void __thiscall rive::ScriptedObject::setAsset(ScriptedObject *this,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)*param_2;
  if ((plVar4 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0x211), (uVar3 & 1) != 0)) {
    param_2 = (long *)*param_2;
    local_40 = param_2;
    if (param_2 == (long *)0x0) {
      FileAssetReferencer::setAsset((FileAssetReferencer *)this,&local_40);
    }
    else {
      FUN_00340fb0(1,param_2 + 9);
      FileAssetReferencer::setAsset((FileAssetReferencer *)this,&local_40);
      iVar2 = FUN_00340fe0(0xffffffff,param_2 + 9);
      if (iVar2 == 1) {
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00493968  rive::ScriptedObject::markNeedsUpdate =====

/* rive::ScriptedObject::markNeedsUpdate() */

void rive::ScriptedObject::markNeedsUpdate(void)

{
  return;
}


// ===== 0049396c  rive::ScriptedObject::cloneProperties =====

/* rive::ScriptedObject::cloneProperties(rive::CustomPropertyContainer*, rive::DataBindContainer*)
   const */

void __thiscall
rive::ScriptedObject::cloneProperties
          (ScriptedObject *this,CustomPropertyContainer *param_1,DataBindContainer *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long *plVar4;
  DataBind *pDVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
  do {
    if (puVar1 == puVar2) {
      return;
    }
    plVar9 = (long *)*puVar1;
    plVar4 = (long *)(**(code **)(*plVar9 + 0x28))(plVar9);
    (*(code *)**(undefined8 **)param_1)(param_1,plVar4);
    uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9);
    if (uVar3 < 0x26d) {
      lVar8 = 0x90;
      if (uVar3 != 0x263) {
        if (uVar3 == 0x264) {
          lVar8 = 0x88;
        }
        else {
          if (uVar3 != 0x26a) goto LAB_004939a8;
          lVar8 = 0x98;
        }
      }
LAB_00493a68:
      plVar9 = *(long **)((long)plVar9 + lVar8 + 0x10);
      if (plVar9 != (long *)0x0) {
        pDVar5 = (DataBind *)(**(code **)(*plVar9 + 0x28))(plVar9);
        plVar7 = (long *)plVar9[9];
        *(long *)(pDVar5 + 0x58) = plVar9[0xb];
        if (plVar7 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar7 + 0x28))(plVar7);
          *(undefined8 *)(pDVar5 + 0x48) = uVar6;
        }
        *(long **)(pDVar5 + 0x30) = plVar4;
        DataBindContainer::addDataBind(param_2,pDVar5);
        uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (uVar3 < 0x26d) {
          lVar8 = 0x90;
          if (uVar3 != 0x263) {
            if (uVar3 == 0x264) {
              lVar8 = 0x88;
            }
            else {
              if (uVar3 != 0x26a) goto LAB_004939a8;
              lVar8 = 0x98;
            }
          }
        }
        else if (uVar3 < 0x273) {
          if (uVar3 == 0x26d) {
            lVar8 = 0x90;
          }
          else {
            lVar8 = 0x90;
            if (uVar3 != 0x272) goto LAB_004939a8;
          }
        }
        else {
          lVar8 = 0x90;
          if (uVar3 != 0x277) {
            if (uVar3 != 0x273) goto LAB_004939a8;
            lVar8 = 0xa0;
          }
        }
        *(DataBind **)((long)plVar4 + lVar8 + 0x10) = pDVar5;
        *(undefined1 *)((long)plVar4 + lVar8 + 0x18) = 0;
      }
    }
    else {
      if (0x272 < uVar3) {
        lVar8 = 0x90;
        if (uVar3 != 0x277) {
          if (uVar3 != 0x273) goto LAB_004939a8;
          lVar8 = 0xa0;
        }
        goto LAB_00493a68;
      }
      if (uVar3 == 0x26d) {
        lVar8 = 0x90;
        goto LAB_00493a68;
      }
      lVar8 = 0x90;
      if (uVar3 == 0x272) goto LAB_00493a68;
    }
LAB_004939a8:
    puVar1 = puVar1 + 1;
  } while( true );
}


// ===== 00493b54  FUN_00493b54 =====

void FUN_00493b54(ScriptedObject *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *__dest;
  
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)param_1 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1;
  rive::ScriptedObject::scriptDispose(param_1);
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if ((lVar5 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar5), iVar2 == 1)) {
    FUN_003453a8(lVar5);
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x10) = PTR_vtable_0067d068 + 0x10;
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar6 = *(long **)(param_1 + 8);
  *(undefined **)param_1 = PTR_vtable_0067d008 + 0x10;
  if (plVar6 != (long *)0x0) {
    __dest = (undefined8 *)plVar6[0xd];
    puVar4 = (undefined8 *)plVar6[0xe];
    if (__dest != puVar4) {
      do {
        while ((ScriptedObject *)*__dest == param_1) {
          __n = (long)puVar4 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          puVar4 = (undefined8 *)((long)__dest + __n);
          plVar6[0xe] = (long)puVar4;
          if (__dest == puVar4) goto LAB_00493c40;
        }
        __dest = __dest + 1;
      } while (__dest != puVar4);
LAB_00493c40:
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 == (long *)0x0) {
        return;
      }
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 9);
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00493c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}


// ===== 00493c88  FUN_00493c88 =====

void FUN_00493c88(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x493c8c);
  (*pcVar1)();
}


// ===== 00493c8c  rive::ScriptedEffectPath::invalidateEffect =====

/* rive::ScriptedEffectPath::invalidateEffect() */

void __thiscall rive::ScriptedEffectPath::invalidateEffect(ScriptedEffectPath *this)

{
  this[0x50] = (ScriptedEffectPath)0x0;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
  this[8] = (ScriptedEffectPath)0x1;
  return;
}


// ===== 00493cac  rive::ScriptedPathEffect::didHydrateScriptInputs =====

/* rive::ScriptedPathEffect::didHydrateScriptInputs() */

void __thiscall rive::ScriptedPathEffect::didHydrateScriptInputs(ScriptedPathEffect *this)

{
  this[0x158] = (ScriptedPathEffect)0x1;
                    /* WARNING: Could not recover jumptable at 0x00493cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))(this,0x200,1);
  return;
}


// ===== 00493cc8  rive::ScriptedPathEffect::didHydrateScriptInputs =====

/* non-virtual thunk to rive::ScriptedPathEffect::didHydrateScriptInputs() */

void __thiscall rive::ScriptedPathEffect::didHydrateScriptInputs(ScriptedPathEffect *this)

{
  this[0xb0] = (ScriptedPathEffect)0x1;
                    /* WARNING: Could not recover jumptable at 0x00493ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xa8) + 0xc0))(this + -0xa8,0x200,1);
  return;
}


// ===== 00493ce4  rive::ScriptedPathEffect::updateEffect =====

/* rive::ScriptedPathEffect::updateEffect(rive::PathProvider*, rive::ShapePaintPath const*,
   rive::ShapePaint const*) */

void rive::ScriptedPathEffect::updateEffect
               (PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  RawPath *pRVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ScriptReffedArtboard *this;
  int iVar5;
  char *pcVar6;
  ScriptedPathData *this_00;
  ScriptedNode *pSVar7;
  ShapePaint *pSVar8;
  long *in_x3;
  int in_w4;
  ulong uVar9;
  undefined8 *puVar10;
  RawPath *pRVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  rive *this_01;
  undefined2 uVar18;
  undefined8 uVar19;
  ScriptReffedArtboard *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((((byte)param_1[0xd8] >> 1 & 1) != 0) && (uVar9 = *(ulong *)(param_1 + 0x138), uVar9 != 0)) {
    uVar12 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar19 = NEON_cnt(uVar9,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar12 = ((ulong)param_2 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
    uVar14 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    if (uVar14 < 2) {
      uVar15 = uVar9 - 1 & uVar12;
    }
    else {
      uVar15 = uVar12;
      if (uVar9 <= uVar12) {
        uVar15 = 0;
        if (uVar9 != 0) {
          uVar15 = uVar12 / uVar9;
        }
        uVar15 = uVar12 - uVar15 * uVar9;
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x130) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      do {
        uVar17 = plVar16[1];
        if (uVar17 == uVar12) {
          if ((ShapePaintPath *)plVar16[2] == param_2) {
            pSVar8 = param_3;
            pcVar6 = (char *)(**(code **)(*(long *)plVar16[3] + 0x18))((long *)plVar16[3]);
            if (*(long *)(pcVar6 + 8) == 0 || *pcVar6 != '\0') {
              uVar2 = *(undefined4 *)(param_3 + 0x54);
              *(ShapePaint *)(pcVar6 + 0x50) = param_3[0x50];
              *(undefined4 *)(pcVar6 + 0x54) = uVar2;
              lVar13 = *(long *)(param_1 + 0xf0);
              *(undefined8 *)(pcVar6 + 0x18) = *(undefined8 *)(pcVar6 + 0x10);
              *(undefined8 *)(pcVar6 + 0x30) = *(undefined8 *)(pcVar6 + 0x28);
              pcVar6[0x48] = '\0';
              *pcVar6 = '\x01';
              if ((lVar13 != 0) && (this_01 = *(rive **)(lVar13 + 8), this_01 != (rive *)0x0)) {
                param_1[0x118] = (PathProvider)0x1;
                rive_lua_pushRef(this_01,(lua_State *)(ulong)*(uint *)(param_1 + 0xdc),(int)pSVar8);
                lua_getfield((lua_State *)this_01,-1,"update");
                if (((byte)this_01[1] >> 2 & 1) != 0) {
                  this_01[1] = (rive)((byte)this_01[1] & 0xfb);
                  *(undefined8 *)(this_01 + 0x68) =
                       *(undefined8 *)(*(long *)(this_01 + 0x18) + 0x30);
                  *(rive **)(*(long *)(this_01 + 0x18) + 0x30) = this_01;
                }
                puVar10 = *(undefined8 **)(this_01 + 8);
                puVar10[1] = puVar10[-3];
                *puVar10 = puVar10[-4];
                *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 0x10;
                this_00 = (ScriptedPathData *)
                          lua_newuserdatataggedwithmetatable((lua_State *)this_01,0x58,0x2c);
                ScriptedPathData::ScriptedPathData(this_00,(RawPath *)(param_3 + 0x10));
                plVar16 = in_x3;
                goto LAB_00493ee8;
              }
            }
            break;
          }
        }
        else {
          if (uVar14 < 2) {
            uVar17 = uVar17 & uVar9 - 1;
          }
          else if (uVar9 <= uVar17) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar17 / uVar9;
            }
            uVar17 = uVar17 - uVar3 * uVar9;
          }
          if (uVar17 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  goto LAB_00493fe8;
  while (uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16,0x26), (uVar9 & 1) == 0) {
LAB_00493ee8:
    plVar16 = (long *)plVar16[6];
    if (plVar16 == (long *)0x0) break;
  }
  pSVar7 = (ScriptedNode *)lua_newuserdatataggedwithmetatable((lua_State *)this_01,0x18,0x27);
  local_50 = (ScriptReffedArtboard *)0x0;
  ScriptedNode::ScriptedNode(pSVar7,&local_50,plVar16);
  this = local_50;
  if ((local_50 != (ScriptReffedArtboard *)0x0) &&
     (iVar5 = FUN_00340fe0(0xffffffff,local_50), iVar5 == 1)) {
    ScriptReffedArtboard::~ScriptReffedArtboard(this);
    operator_delete(this);
  }
  if ((*(int *)(*(long *)(this_01 + 8) + -4) != 9) ||
     (lVar13 = *(long *)(*(long *)(this_01 + 8) + -0x10), *(char *)(lVar13 + 3) != '\'')) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL((lua_State *)this_01,-1,"NodeData");
  }
  *(long **)(lVar13 + 0x20) = in_x3;
  iVar5 = rive_lua_pcall_with_context
                    (this_01,(lua_State *)(param_1 + 0xa8),(ScriptedObject *)0x3,1,in_w4);
  if (iVar5 == 0) {
    pRVar11 = *(RawPath **)(*(long *)(this_01 + 8) + -0x10);
    pRVar1 = pRVar11 + 0x10;
    if (*(int *)(*(long *)(this_01 + 8) + -4) != 9) {
      pRVar1 = pRVar11;
    }
    RawPath::addPath((RawPath *)(pcVar6 + 0x10),pRVar1,(Mat2D *)0x0);
  }
  else {
    fwrite("update function failed\n",0x17,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
  }
  lVar13 = *(long *)(this_01 + 8);
  param_1[0x118] = (PathProvider)0x0;
  *(long *)(this_01 + 8) = lVar13 + -0x20;
LAB_00493fe8:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494028  rive::ScriptedPathEffect::updateEffect =====

/* non-virtual thunk to rive::ScriptedPathEffect::updateEffect(rive::PathProvider*,
   rive::ShapePaintPath const*, rive::ShapePaint const*) */

void __thiscall
rive::ScriptedPathEffect::updateEffect
          (ScriptedPathEffect *this,PathProvider *param_1,ShapePaintPath *param_2,
          ShapePaint *param_3)

{
  updateEffect((PathProvider *)(this + -0x128),(ShapePaintPath *)param_1,(ShapePaint *)param_2);
  return;
}


// ===== 00494030  rive::ScriptedPathEffect::onAddedDirty =====

/* rive::ScriptedPathEffect::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::ScriptedPathEffect::onAddedDirty(ScriptedPathEffect *this,CoreContext *param_1)

{
  ScriptedPathEffect *pSVar1;
  long *plVar2;
  ScriptedPathEffect *this_00;
  long lVar3;
  
  pSVar1 = (ScriptedPathEffect *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pSVar1 = (ScriptedPathEffect *)(param_1 + -0x998);
  }
  *(ScriptedPathEffect **)(this + 0x40) = pSVar1;
  *(ScriptedPathEffect **)(this + 0x80) = pSVar1;
  this_00 = this;
  if (pSVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar3 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar3 + 0x90))(plVar2,this);
    this_00 = *(ScriptedPathEffect **)(this + 0x40);
  }
  Artboard::addScriptedObject((Artboard *)this_00,(ScriptedObject *)(this + 0xa8));
  return 0;
}


// ===== 004940a4  rive::ScriptedPathEffect::onAddedClean =====

/* rive::ScriptedPathEffect::onAddedClean(rive::CoreContext*) */

undefined8 rive::ScriptedPathEffect::onAddedClean(CoreContext *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
LAB_0049411c:
    uVar2 = 2;
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      lVar3 = 0xa8;
    }
    else {
      if ((uVar1 & 0xffff) != 0x285) goto LAB_0049411c;
      lVar3 = 0xa0;
    }
    (*(code *)**(undefined8 **)((long)plVar4 + lVar3))((long)plVar4 + lVar3,param_1 + 0x128);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0049412c  rive::ScriptedPathEffect::advanceComponent =====

/* rive::ScriptedPathEffect::advanceComponent(float, rive::AdvanceFlags) */

bool __thiscall
rive::ScriptedPathEffect::advanceComponent(float param_1,ScriptedPathEffect *this,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  if ((param_1 != 0.0) && (this[0x158] != (ScriptedPathEffect)0x0)) {
    this[0x158] = (ScriptedPathEffect)0x0;
    fVar3 = 0.0;
    if ((param_3 & 1) != 0) {
      fVar3 = param_1;
    }
    uVar2 = ScriptedObject::scriptAdvance(fVar3);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      this[0x158] = (ScriptedPathEffect)0x1;
    }
    return bVar1;
  }
  return false;
}


// ===== 0049418c  rive::ScriptedPathEffect::advanceComponent =====

/* non-virtual thunk to rive::ScriptedPathEffect::advanceComponent(float, rive::AdvanceFlags) */

bool __thiscall
rive::ScriptedPathEffect::advanceComponent(float param_1,ScriptedPathEffect *this,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  if ((param_1 != 0.0) && (this[0x38] != (ScriptedPathEffect)0x0)) {
    this[0x38] = (ScriptedPathEffect)0x0;
    fVar3 = 0.0;
    if ((param_3 & 1) != 0) {
      fVar3 = param_1;
    }
    uVar2 = ScriptedObject::scriptAdvance(fVar3);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      this[0x38] = (ScriptedPathEffect)0x1;
    }
    return bVar1;
  }
  return false;
}


// ===== 004941ec  rive::ScriptedPathEffect::addScriptedDirt =====

/* rive::ScriptedPathEffect::addScriptedDirt(rive::ComponentDirt, bool) */

void rive::ScriptedPathEffect::addScriptedDirt(void)

{
  (*(code *)PTR_addDirt_0067f220)();
  return;
}


// ===== 004941f0  rive::ScriptedPathEffect::addScriptedDirt =====

/* non-virtual thunk to rive::ScriptedPathEffect::addScriptedDirt(rive::ComponentDirt, bool) */

void __thiscall rive::ScriptedPathEffect::addScriptedDirt(ScriptedPathEffect *this)

{
  Component::addDirt((Component *)(this + -0xa8));
  return;
}


// ===== 004941f8  rive::ScriptedPathEffect::addProperty =====

/* rive::ScriptedPathEffect::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedPathEffect::addProperty(ScriptedPathEffect *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_00494290;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_00494290;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_00494290;
    lVar2 = 0xa0;
  }
  *(ScriptedPathEffect **)(param_1 + lVar2 + 8) = this + 0xa8;
LAB_00494290:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)(this + 0xb8),param_1);
  return;
}


// ===== 004942a4  rive::ScriptedPathEffect::addProperty =====

/* non-virtual thunk to rive::ScriptedPathEffect::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedPathEffect::addProperty(ScriptedPathEffect *this,CustomProperty *param_1)

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
        if (uVar1 != 0x26a) goto LAB_0049433c;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_0049433c;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_0049433c;
    lVar2 = 0xa0;
  }
  *(ScriptedPathEffect **)(param_1 + lVar2 + 8) = this + -0x10;
LAB_0049433c:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)this,param_1);
  return;
}


// ===== 00494350  rive::ScriptedPathEffect::import =====

/* rive::ScriptedPathEffect::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptedPathEffect::import(ScriptedPathEffect *this,ImportStack *param_1)

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
                      ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 0xa8));
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


// ===== 0049444c  rive::ScriptedPathEffect::clone =====

/* rive::ScriptedPathEffect::clone() const */

long * __thiscall rive::ScriptedPathEffect::clone(ScriptedPathEffect *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)operator_new(0x160);
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
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  plVar5[0x1e] = 0;
  plVar5[0x1d] = 0;
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
  plVar5[0x20] = 0;
  plVar5[0x1f] = 0;
  *(undefined2 *)(plVar5 + 0x23) = 0;
  plVar5[0x22] = 0;
  plVar5[0x21] = 0;
  plVar5[0x27] = 0;
  plVar5[0x26] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  puVar3 = PTR_vtable_0067d310;
  plVar5[0x19] = 0;
  plVar5[0x18] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1a] = 0;
  *(undefined4 *)(plVar5 + 0x1c) = 0;
  plVar7 = plVar5 + 0x15;
  *plVar7 = (long)(puVar3 + 0x120);
  *(undefined4 *)(plVar5 + 0x2a) = 0x3f800000;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[0x17] = (long)(puVar3 + 0x1a0);
  plVar5[0x24] = (long)(puVar3 + 0x1c8);
  plVar5[0x25] = (long)(puVar3 + 0x1e0);
  uVar1 = *(undefined4 *)(this + 0xa0);
  *(undefined1 *)(plVar5 + 0x2b) = 1;
  *(undefined4 *)(plVar5 + 0x14) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  plVar6 = *(long **)(this + 0xb0);
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  if (plVar6 != (long *)0x0) {
    FUN_00340fb0(1,plVar6 + 9);
    local_40 = plVar6;
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_40);
    plVar6 = local_40;
    if ((local_40 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_40 + 9), iVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004945d4  rive::ScriptedPathEffect::markNeedsUpdate =====

/* rive::ScriptedPathEffect::markNeedsUpdate() */

void __thiscall rive::ScriptedPathEffect::markNeedsUpdate(ScriptedPathEffect *this)

{
  if (this[0x118] != (ScriptedPathEffect)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004945f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))(this,0x4000,0);
  return;
}


// ===== 004945f4  rive::ScriptedPathEffect::markNeedsUpdate =====

/* non-virtual thunk to rive::ScriptedPathEffect::markNeedsUpdate() */

void __thiscall rive::ScriptedPathEffect::markNeedsUpdate(ScriptedPathEffect *this)

{
  if (this[0x70] != (ScriptedPathEffect)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00494610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xa8) + 0xc0))(this + -0xa8,0x4000,0);
  return;
}


// ===== 00494614  rive::ScriptedPathEffect::parentPaint =====

/* rive::ScriptedPathEffect::parentPaint() */

long * __thiscall rive::ScriptedPathEffect::parentPaint(ScriptedPathEffect *this)

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


// ===== 00494680  rive::ScriptedPathEffect::parentPaint =====

/* non-virtual thunk to rive::ScriptedPathEffect::parentPaint() */

long * __thiscall rive::ScriptedPathEffect::parentPaint(ScriptedPathEffect *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + -0xf8);
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


// ===== 004946ec  rive::ScriptedPathEffect::createEffectPath =====

/* rive::ScriptedPathEffect::createEffectPath() */

long * rive::ScriptedPathEffect::createEffectPath(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x60);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  puVar1 = PTR_vtable_0067d6f8;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar2 + 1),true);
  return plVar2;
}


// ===== 00494740  FUN_00494740 =====

void FUN_00494740(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[6];
  *param_1 = (long)(PTR_vtable_0067d6f8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[7] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    param_1[4] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x004947b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 004947c0  FUN_004947c0 =====

void FUN_004947c0(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[6];
  *param_1 = (long)(PTR_vtable_0067d6f8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[7] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    param_1[4] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 0049483c  FUN_0049483c =====

long FUN_0049483c(long param_1)

{
  return param_1 + 8;
}


// ===== 00494844  rive::ScriptedPathEffect::createEffectPath =====

/* non-virtual thunk to rive::ScriptedPathEffect::createEffectPath() */

long * __thiscall rive::ScriptedPathEffect::createEffectPath(ScriptedPathEffect *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x60);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  puVar1 = PTR_vtable_0067d6f8;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar2 + 1),true);
  return plVar2;
}


// ===== 00494898  rive::ScriptedPathEffect::buildDependencies =====

/* rive::ScriptedPathEffect::buildDependencies() */

void __thiscall rive::ScriptedPathEffect::buildDependencies(ScriptedPathEffect *this)

{
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    return;
  }
  return;
}


// ===== 004948ac  rive::ScriptedPathEffect::update =====

/* rive::ScriptedPathEffect::update(rive::ComponentDirt) */

void __thiscall rive::ScriptedPathEffect::update(ScriptedPathEffect *this,uint param_2)

{
  if ((param_2 >> 0xe & 1) != 0) {
    (**(code **)(*(long *)(this + 0x128) + 0x38))(this + 0x128);
    this[0x158] = (ScriptedPathEffect)0x1;
  }
  return;
}


// ===== 004948e4  FUN_004948e4 =====

void FUN_004948e4(long *param_1)

{
  undefined *puVar1;
  size_t __n;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ScriptedObject *this;
  long *__dest;
  
  plVar6 = (long *)param_1[0x28];
  param_1[0x25] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar6 != (long *)0x0) {
    do {
      if ((long *)plVar6[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[3] + 8))();
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    puVar2 = (undefined8 *)param_1[0x28];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar4;
    }
  }
  pvVar4 = (void *)param_1[0x26];
  param_1[0x26] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  puVar1 = PTR_vtable_0067d358 + 0x90;
  this = (ScriptedObject *)(param_1 + 0x15);
  *(undefined **)this = PTR_vtable_0067d358 + 0x10;
  param_1[0x17] = (long)puVar1;
  rive::ScriptedObject::scriptDispose(this);
  pvVar4 = (void *)param_1[0x20];
  if (pvVar4 != (void *)0x0) {
    param_1[0x21] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  if (param_1[0x1f] != 0) {
    FUN_003462d8();
  }
  pvVar4 = (void *)param_1[0x18];
  param_1[0x17] = (long)(PTR_vtable_0067d068 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[0x19] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  plVar6 = (long *)param_1[0x16];
  param_1[0x15] = (long)(PTR_vtable_0067d008 + 0x10);
  if (plVar6 != (long *)0x0) {
    __dest = (long *)plVar6[0xd];
    plVar5 = (long *)plVar6[0xe];
    if (__dest != plVar5) {
      do {
        while ((ScriptedObject *)*__dest == this) {
          __n = (long)plVar5 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar5 = (long *)((long)__dest + __n);
          plVar6[0xe] = (long)plVar5;
          if (__dest == plVar5) goto LAB_00494a28;
        }
        __dest = __dest + 1;
      } while (__dest != plVar5);
LAB_00494a28:
      plVar6 = (long *)param_1[0x16];
      if (plVar6 == (long *)0x0) goto LAB_00494a54;
    }
    iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 9);
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
LAB_00494a54:
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


// ===== 00494ae4  FUN_00494ae4 =====

void FUN_00494ae4(void *param_1)

{
  FUN_004948e4();
  operator_delete(param_1);
  return;
}


// ===== 00494b08  FUN_00494b08 =====

undefined8 FUN_00494b08(void)

{
  return 0x280;
}


// ===== 00494b10  FUN_00494b10 =====

bool FUN_00494b10(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x280;
}


// ===== 00494b30  FUN_00494b30 =====

void FUN_00494b30(long param_1,short param_2,long *param_3)

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
        goto LAB_00494c90;
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
LAB_00494c90:
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
        goto LAB_00494c74;
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
LAB_00494c74:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x390) {
      uVar5 = 0;
      goto LAB_00494cd8;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00494cc8;
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
LAB_00494cc8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xa0) = (int)uVar6;
  }
  uVar5 = 1;
LAB_00494cd8:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00494cfc  FUN_00494cfc =====

void FUN_00494cfc(void)

{
  return;
}


// ===== 00494d00  FUN_00494d00 =====

undefined4 FUN_00494d00(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}


// ===== 00494d08  FUN_00494d08 =====

void FUN_00494d08(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 0x40) + 0xbc0);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1);
    }
  }
  *param_1 = lVar1;
  return;
}


// ===== 00494d4c  FUN_00494d4c =====

undefined8 FUN_00494d4c(void)

{
  return 4;
}


// ===== 00494d54  FUN_00494d54 =====

void FUN_00494d54(void)

{
  return;
}


// ===== 00494d58  FUN_00494d58 =====

void FUN_00494d58(long param_1)

{
  FUN_004948e4(param_1 + -0xa8);
  return;
}


// ===== 00494d60  FUN_00494d60 =====

void FUN_00494d60(long param_1)

{
  FUN_004948e4((void *)(param_1 + -0xa8));
  operator_delete((void *)(param_1 + -0xa8));
  return;
}


// ===== 00494d88  FUN_00494d88 =====

undefined4 FUN_00494d88(long param_1)

{
  return *(undefined4 *)(param_1 + -8);
}


// ===== 00494d90  FUN_00494d90 =====

void FUN_00494d90(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + -0x68) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + -0x68) + 0xbc0);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1);
    }
  }
  *param_1 = lVar1;
  return;
}


// ===== 00494dd4  FUN_00494dd4 =====

undefined8 FUN_00494dd4(void)

{
  return 4;
}


// ===== 00494ddc  FUN_00494ddc =====

long FUN_00494ddc(long param_1)

{
  return param_1 + -0xa8;
}


// ===== 00494de4  FUN_00494de4 =====

void FUN_00494de4(long param_1)

{
  FUN_004948e4(param_1 + -0x128);
  return;
}


// ===== 00494dec  FUN_00494dec =====

void FUN_00494dec(long param_1)

{
  FUN_004948e4((void *)(param_1 + -0x128));
  operator_delete((void *)(param_1 + -0x128));
  return;
}


// ===== 00494e14  FUN_00494e14 =====

void FUN_00494e14(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  uVar2 = (**(code **)(*param_1 + 0x40))();
  lVar3 = FUN_00494e8c(param_1 + 1,param_2,&local_40);
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494e8c  FUN_00494e8c =====

void FUN_00494e8c(long *param_1,ulong param_2,long *param_3)

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
LAB_0049502c:
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
LAB_00495264:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_00495264;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_0049502c;
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
    if (*plVar7 == 0) goto LAB_00495244;
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
LAB_00495244:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 004952c0  rive::ScriptedPathEffectBase::clone =====

/* rive::ScriptedPathEffectBase::clone() const */

long * __thiscall rive::ScriptedPathEffectBase::clone(ScriptedPathEffectBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x160);
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
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
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
  plVar3[0x2b] = 0;
  plVar3[0x2a] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x11] = 0;
  plVar3[0x20] = 0;
  plVar3[0x1f] = 0;
  *(undefined2 *)(plVar3 + 0x23) = 0;
  plVar3[0x22] = 0;
  plVar3[0x21] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x27] = 0;
  plVar3[0x26] = 0;
  plVar3[0x29] = 0;
  plVar3[0x28] = 0;
  puVar2 = PTR_vtable_0067d310;
  *(undefined4 *)(plVar3 + 0x2a) = 0x3f800000;
  *(undefined4 *)(plVar3 + 0x1c) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x15] = (long)(puVar2 + 0x120);
  plVar3[0x17] = (long)(puVar2 + 0x1a0);
  plVar3[0x24] = (long)(puVar2 + 0x1c8);
  plVar3[0x25] = (long)(puVar2 + 0x1e0);
  uVar1 = *(undefined4 *)(this + 0xa0);
  *(undefined1 *)(plVar3 + 0x2b) = 1;
  *(undefined4 *)(plVar3 + 0x14) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004953bc  FUN_004953bc =====

void FUN_004953bc(long *param_1)

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


// ===== 00495448  rive::SemanticData::~SemanticData =====

/* rive::SemanticData::~SemanticData() */

void __thiscall rive::SemanticData::~SemanticData(SemanticData *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  SemanticManager *pSVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0xe8);
  *(undefined **)this = PTR_vtable_0067d458 + 0x10;
  if ((lVar3 != 0) &&
     (pSVar4 = *(SemanticManager **)(lVar3 + 0x98), pSVar4 != (SemanticManager *)0x0)) {
    FUN_00340fb0(1,lVar3);
    local_40 = lVar3;
    SemanticManager::removeChild(pSVar4,&local_40);
    FUN_0035fa18(lVar3);
  }
  pvVar2 = *(void **)(this + 0xf8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(long *)(this + 0xe8) != 0) {
    FUN_0035fa18();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    FUN_004954f8(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004954f8  FUN_004954f8 =====

void FUN_004954f8(long *param_1)

{
  byte bVar1;
  void *pvVar2;
  
  *param_1 = (long)(PTR_vtable_0067d578 + 0x10);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x15);
  }
  else {
    operator_delete((void *)param_1[0x1a]);
    bVar1 = *(byte *)(param_1 + 0x15);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x12);
  }
  else {
    operator_delete((void *)param_1[0x17]);
    bVar1 = *(byte *)(param_1 + 0x12);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
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
    return;
  }
  return;
}


// ===== 004955bc  rive::SemanticData::~SemanticData =====

/* rive::SemanticData::~SemanticData() */

void __thiscall rive::SemanticData::~SemanticData(SemanticData *this)

{
  ~SemanticData(this);
  operator_delete(this);
  return;
}


// ===== 004955e0  FUN_004955e0 =====

undefined8 FUN_004955e0(void)

{
  return 0x29c;
}


// ===== 004955e8  FUN_004955e8 =====

bool FUN_004955e8(undefined8 param_1,short param_2)

{
  return param_2 == 0x29c || param_2 == 10;
}


// ===== 004955fc  FUN_004955fc =====

undefined8 FUN_004955fc(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x3d8) {
    if (param_2 < 0x3d6) {
      if (param_2 == 4) {
        pcVar10 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004959f4;
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
LAB_004959f4:
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0;
        }
        pbVar13 = (byte *)(param_1 + 0x10);
        if ((*pbVar13 & 1) != 0) {
          pvVar5 = *(void **)(param_1 + 0x20);
          goto LAB_00495a64;
        }
LAB_00495a68:
        *(undefined8 *)(pbVar13 + 8) = uStack_38;
        *(undefined8 *)pbVar13 = local_40;
        *(undefined8 *)(pbVar13 + 0x10) = local_30;
      }
      else {
        if (param_2 != 5) goto LAB_00495a7c;
        uVar12 = 0;
        uVar7 = 0;
        pbVar13 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00495988;
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
LAB_00495988:
          uVar7 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x28) = (int)uVar7;
      }
    }
    else {
      if (param_2 != 0x3d6) {
        if (param_2 != 0x3d7) goto LAB_00495a7c;
        pcVar10 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004959a4;
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
LAB_004959a4:
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0;
        }
        pbVar13 = (byte *)(param_1 + 0x90);
        if ((*pbVar13 & 1) != 0) {
          pvVar5 = *(void **)(param_1 + 0xa0);
          goto LAB_00495a64;
        }
        goto LAB_00495a68;
      }
      uVar12 = 0;
      uVar7 = 0;
      pbVar13 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00495a18;
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
LAB_00495a18:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x88) = (int)uVar7;
    }
  }
  else {
    if (param_2 < 0x3da) {
      if (param_2 == 0x3d8) {
        pcVar10 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00495a4c;
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
LAB_00495a4c:
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0;
        }
        pbVar13 = (byte *)(param_1 + 0xa8);
        if ((*pbVar13 & 1) != 0) {
          pvVar5 = *(void **)(param_1 + 0xb8);
LAB_00495a64:
          operator_delete(pvVar5);
        }
      }
      else {
        if (param_2 != 0x3d9) goto LAB_00495a7c;
        pcVar10 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004959cc;
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
LAB_004959cc:
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0;
        }
        pbVar13 = (byte *)(param_1 + 0xc0);
        if ((*pbVar13 & 1) != 0) {
          pvVar5 = *(void **)(param_1 + 0xd0);
          goto LAB_00495a64;
        }
      }
      goto LAB_00495a68;
    }
    if (param_2 == 0x3da) {
      uVar12 = 0;
      uVar7 = 0;
      pbVar13 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00495a30;
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
LAB_00495a30:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xd8) = (int)uVar7;
    }
    else if (param_2 == 0x3db) {
      uVar12 = 0;
      uVar7 = 0;
      pbVar13 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00495ac0;
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
LAB_00495ac0:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xdc) = (int)uVar7;
    }
    else {
      if (param_2 != 0x3dc) goto LAB_00495a7c;
      uVar12 = 0;
      uVar7 = 0;
      pbVar13 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00495aa8;
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
LAB_00495aa8:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xe0) = (int)uVar7;
    }
  }
  uVar6 = 1;
LAB_00495a7c:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495ad4  rive::SemanticData::collapse =====

/* rive::SemanticData::collapse(bool) */

uint __thiscall rive::SemanticData::collapse(SemanticData *this,bool param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  SemanticManager *pSVar6;
  long lVar7;
  long *plVar8;
  SemanticData *pSVar9;
  long lVar10;
  undefined8 *puVar11;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = Component::collapse((Component *)this,param_1);
  if (((uVar4 & 1) == 0) || (lVar7 = *(long *)(this + 0xe8), lVar7 == 0)) goto LAB_00495cac;
  if (param_1) {
    pSVar6 = *(SemanticManager **)(lVar7 + 0x98);
    if (pSVar6 != (SemanticManager *)0x0) {
      *(SemanticManager **)(this + 0xf0) = pSVar6;
      FUN_00340fb0(1,lVar7);
      local_60 = lVar7;
      SemanticManager::removeChild(pSVar6,&local_60);
      FUN_0035fa18(lVar7);
    }
    goto LAB_00495cac;
  }
  pSVar6 = *(SemanticManager **)(this + 0xf0);
  if ((pSVar6 == (SemanticManager *)0x0) &&
     (pSVar6 = *(SemanticManager **)(lVar7 + 0x98), pSVar6 == (SemanticManager *)0x0))
  goto LAB_00495cac;
  plVar8 = *(long **)(this + 0x30);
  *(SemanticManager **)(this + 0xf0) = pSVar6;
  for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[6]) {
    uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,2);
    if ((uVar5 & 1) != 0) {
      puVar1 = (undefined8 *)plVar8[0x12];
      for (puVar11 = (undefined8 *)plVar8[0x11]; puVar11 != puVar1; puVar11 = puVar11 + 1) {
        pSVar9 = (SemanticData *)*puVar11;
        uVar5 = (**(code **)(*(long *)pSVar9 + 0x18))(pSVar9,0x29c);
        if ((pSVar9 != this) && ((uVar5 & 1) != 0)) {
          semanticNode();
          lVar7 = local_68;
          if (local_68 != 0) goto LAB_00495c08;
          goto LAB_00495be8;
        }
      }
    }
  }
  local_68 = 0;
LAB_00495be8:
  if (*(long *)(this + 0x40) == 0) {
    lVar7 = 0;
    lVar10 = *(long *)(this + 0xe8);
    if (lVar10 != 0) goto LAB_00495c10;
LAB_00495ce8:
    local_70 = lVar10;
    SemanticManager::addChild(pSVar6,&local_68,&local_70);
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x40) + 0xc50);
    if (lVar7 != 0) {
      FUN_00340fb0(1,lVar7);
    }
LAB_00495c08:
    local_68 = lVar7;
    lVar10 = *(long *)(this + 0xe8);
    lVar7 = local_68;
    if (lVar10 == 0) goto LAB_00495ce8;
LAB_00495c10:
    FUN_00340fb0(1,lVar10);
    local_70 = lVar10;
    SemanticManager::addChild(pSVar6,&local_68,&local_70);
    FUN_0035fa18(lVar10);
    lVar7 = local_68;
  }
  if (lVar7 != 0) {
    FUN_0035fa18(lVar7);
  }
  this[0x110] = (SemanticData)0x1;
  updateWorldBounds();
  if ((*(ushort *)(this + 0x60) >> 7 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x80;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar7 = *(long *)(this + 0x80);
    uVar2 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar7 + 0xc32) = 1;
    *(ushort *)(lVar7 + 0x60) = *(ushort *)(lVar7 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar7 + 0xbd4)) {
      *(uint *)(lVar7 + 0xbd4) = uVar2;
    }
  }
  applyInferredSemanticsIfNeeded(this);
LAB_00495cac:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


// ===== 00495d08  rive::SemanticData::buildDependencies =====

/* rive::SemanticData::buildDependencies() */

void __thiscall rive::SemanticData::buildDependencies(SemanticData *this)

{
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    return;
  }
  return;
}


// ===== 00495d1c  rive::SemanticData::update =====

/* rive::SemanticData::update(rive::ComponentDirt) */

void __thiscall rive::SemanticData::update(SemanticData *this,uint param_2)

{
  if ((param_2 & 1) != 0) {
    syncSemanticTreeVisibility(this);
  }
  if (((param_2 & 0xffff) >> 7 & 1) != 0) {
    applyInferredSemanticsIfNeeded(this);
    updateWorldBounds();
  }
  if (((param_2 & 0xffff) >> 4 & 1) != 0) {
    updateWorldBounds();
    return;
  }
  return;
}


// ===== 00495d78  rive::SemanticData::roleChanged =====

/* rive::SemanticData::roleChanged() */

void __thiscall rive::SemanticData::roleChanged(SemanticData *this)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  
  lVar2 = *(long *)(this + 0xe8);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x28) != *(int *)(this + 0x88))) {
    pbVar3 = *(byte **)(lVar2 + 0x98);
    *(int *)(lVar2 + 0x28) = *(int *)(this + 0x88);
    if ((pbVar3 != (byte *)0x0) && (*(long *)(this + 0x30) != 0)) {
      iVar1 = *(int *)(lVar2 + 4);
      *pbVar3 = *pbVar3 | 2;
      if (iVar1 != 0) {
        FUN_004987d0(pbVar3 + 0x118,iVar1,iVar1);
        return;
      }
    }
  }
  return;
}


// ===== 00495dc8  rive::SemanticData::labelChanged =====

/* rive::SemanticData::labelChanged() */

void __thiscall rive::SemanticData::labelChanged(SemanticData *this)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string bVar4;
  int iVar5;
  SemanticData *__s2;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  SemanticData *pSVar9;
  
  lVar8 = *(long *)(this + 0xe8);
  if (lVar8 == 0) {
    return;
  }
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar8 + 0x30);
  bVar4 = *(basic_string *)(this + 0x90);
  uVar7 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar7;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar8 + 0x38);
  }
  sVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(this + 0x98);
  }
  if (sVar1 == sVar2) {
    __s2 = this + 0x91;
    if (((byte)bVar4 & 1) != 0) {
      __s2 = *(SemanticData **)(this + 0xa0);
    }
    if (((byte)bVar3 & 1) == 0) {
      if ((byte)bVar3 < 2) {
        return;
      }
      pSVar9 = (SemanticData *)(lVar8 + 0x31);
      while (*pSVar9 == *__s2) {
        uVar7 = uVar7 - 1;
        pSVar9 = pSVar9 + 1;
        __s2 = __s2 + 1;
        if (uVar7 == 0) {
          return;
        }
      }
    }
    else {
      iVar5 = memcmp(*(void **)(lVar8 + 0x40),__s2,*(size_t *)(lVar8 + 0x38));
      if (iVar5 == 0) {
        return;
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar8 + 0x30),(basic_string *)(this + 0x90));
  lVar8 = *(long *)(this + 0xe8);
  if (((lVar8 != 0) && (pbVar6 = *(byte **)(lVar8 + 0x98), pbVar6 != (byte *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    iVar5 = *(int *)(lVar8 + 4);
    *pbVar6 = *pbVar6 | 2;
    if (iVar5 != 0) {
      FUN_004987d0(pbVar6 + 0x118,iVar5,iVar5);
      return;
    }
  }
  return;
}


// ===== 00495ee0  rive::SemanticData::valueChanged =====

/* rive::SemanticData::valueChanged() */

void __thiscall rive::SemanticData::valueChanged(SemanticData *this)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string bVar4;
  int iVar5;
  SemanticData *__s2;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  SemanticData *pSVar9;
  
  lVar8 = *(long *)(this + 0xe8);
  if (lVar8 == 0) {
    return;
  }
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar8 + 0x48);
  bVar4 = *(basic_string *)(this + 0xa8);
  uVar7 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar7;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar8 + 0x50);
  }
  sVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(this + 0xb0);
  }
  if (sVar1 == sVar2) {
    __s2 = this + 0xa9;
    if (((byte)bVar4 & 1) != 0) {
      __s2 = *(SemanticData **)(this + 0xb8);
    }
    if (((byte)bVar3 & 1) == 0) {
      if ((byte)bVar3 < 2) {
        return;
      }
      pSVar9 = (SemanticData *)(lVar8 + 0x49);
      while (*pSVar9 == *__s2) {
        uVar7 = uVar7 - 1;
        pSVar9 = pSVar9 + 1;
        __s2 = __s2 + 1;
        if (uVar7 == 0) {
          return;
        }
      }
    }
    else {
      iVar5 = memcmp(*(void **)(lVar8 + 0x58),__s2,*(size_t *)(lVar8 + 0x50));
      if (iVar5 == 0) {
        return;
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar8 + 0x48),(basic_string *)(this + 0xa8));
  lVar8 = *(long *)(this + 0xe8);
  if (((lVar8 != 0) && (pbVar6 = *(byte **)(lVar8 + 0x98), pbVar6 != (byte *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    iVar5 = *(int *)(lVar8 + 4);
    *pbVar6 = *pbVar6 | 2;
    if (iVar5 != 0) {
      FUN_004987d0(pbVar6 + 0x118,iVar5,iVar5);
      return;
    }
  }
  return;
}


// ===== 00495ff8  rive::SemanticData::hintChanged =====

/* rive::SemanticData::hintChanged() */

void __thiscall rive::SemanticData::hintChanged(SemanticData *this)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string bVar4;
  int iVar5;
  SemanticData *__s2;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  SemanticData *pSVar9;
  
  lVar8 = *(long *)(this + 0xe8);
  if (lVar8 == 0) {
    return;
  }
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar8 + 0x60);
  bVar4 = *(basic_string *)(this + 0xc0);
  uVar7 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar7;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar8 + 0x68);
  }
  sVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(this + 200);
  }
  if (sVar1 == sVar2) {
    __s2 = this + 0xc1;
    if (((byte)bVar4 & 1) != 0) {
      __s2 = *(SemanticData **)(this + 0xd0);
    }
    if (((byte)bVar3 & 1) == 0) {
      if ((byte)bVar3 < 2) {
        return;
      }
      pSVar9 = (SemanticData *)(lVar8 + 0x61);
      while (*pSVar9 == *__s2) {
        uVar7 = uVar7 - 1;
        pSVar9 = pSVar9 + 1;
        __s2 = __s2 + 1;
        if (uVar7 == 0) {
          return;
        }
      }
    }
    else {
      iVar5 = memcmp(*(void **)(lVar8 + 0x70),__s2,*(size_t *)(lVar8 + 0x68));
      if (iVar5 == 0) {
        return;
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar8 + 0x60),(basic_string *)(this + 0xc0));
  lVar8 = *(long *)(this + 0xe8);
  if (((lVar8 != 0) && (pbVar6 = *(byte **)(lVar8 + 0x98), pbVar6 != (byte *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    iVar5 = *(int *)(lVar8 + 4);
    *pbVar6 = *pbVar6 | 2;
    if (iVar5 != 0) {
      FUN_004987d0(pbVar6 + 0x118,iVar5,iVar5);
      return;
    }
  }
  return;
}


// ===== 00496110  rive::SemanticData::headingLevelChanged =====

/* rive::SemanticData::headingLevelChanged() */

void __thiscall rive::SemanticData::headingLevelChanged(SemanticData *this)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  
  lVar2 = *(long *)(this + 0xe8);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x78) != *(int *)(this + 0xd8))) {
    pbVar3 = *(byte **)(lVar2 + 0x98);
    *(int *)(lVar2 + 0x78) = *(int *)(this + 0xd8);
    if ((pbVar3 != (byte *)0x0) && (*(long *)(this + 0x30) != 0)) {
      iVar1 = *(int *)(lVar2 + 4);
      *pbVar3 = *pbVar3 | 2;
      if (iVar1 != 0) {
        FUN_004987d0(pbVar3 + 0x118,iVar1,iVar1);
        return;
      }
    }
  }
  return;
}


// ===== 00496160  rive::SemanticData::traitFlagsChanged =====

/* rive::SemanticData::traitFlagsChanged() */

void __thiscall rive::SemanticData::traitFlagsChanged(SemanticData *this)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  
  lVar2 = *(long *)(this + 0xe8);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x8c) != *(int *)(this + 0xdc))) {
    pbVar3 = *(byte **)(lVar2 + 0x98);
    *(int *)(lVar2 + 0x8c) = *(int *)(this + 0xdc);
    if ((pbVar3 != (byte *)0x0) && (*(long *)(this + 0x30) != 0)) {
      iVar1 = *(int *)(lVar2 + 4);
      *pbVar3 = *pbVar3 | 2;
      if (iVar1 != 0) {
        FUN_004987d0(pbVar3 + 0x118,iVar1,iVar1);
        return;
      }
    }
  }
  return;
}


