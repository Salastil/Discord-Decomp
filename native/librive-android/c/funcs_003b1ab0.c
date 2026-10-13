// ===== 003b1ab0  FUN_003b1ab0 =====

undefined8 FUN_003b1ab0(void)

{
  return 1;
}


// ===== 003b1ab8  rive::DraggableConstraintListenerGroup::processEvent =====

/* rive::DraggableConstraintListenerGroup::processEvent(rive::Component*, rive::Vec2D, int,
   rive::ListenerType, bool, float, rive::StateMachineInstance*) */

undefined8
rive::DraggableConstraintListenerGroup::processEvent
          (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,ListenerGroup *param_1,
          undefined8 param_5,int param_6,int param_7,undefined4 param_8,long *param_9)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  auVar7 = ListenerGroup::pointerData(param_1,param_6);
  iVar2 = *(int *)(auVar7._0_8_ + 4);
  ListenerGroup::processEvent
            (param_1_00,param_2,param_3,param_1,auVar7._8_8_,param_6,param_7,param_8,param_9);
  uVar3 = *(uint *)(auVar7._0_8_ + 4);
  if (iVar2 == 1) {
    if ((uVar3 | 2) == 2) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x28))(param_1_00,param_2,param_3);
      if (param_1[0x68] == (ListenerGroup)0x0) goto LAB_003b1c6c;
      puVar1 = (undefined8 *)param_9[0x2c];
      for (puVar6 = (undefined8 *)param_9[0x2b]; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        (**(code **)(*(long *)*puVar6 + 0x28))((long *)*puVar6,param_6);
      }
      StateMachineInstance::updateListeners(param_1_00,param_2,0,param_9,10,param_6);
      (**(code **)(*param_9 + 0x50))(param_1_00,param_2,param_3,param_9,param_6);
      param_1[0x68] = (ListenerGroup)0x0;
    }
    else {
      if (param_7 != 4) {
        return 0;
      }
      if (uVar3 != 1) {
        return 0;
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x60) + 0x20))(param_1_00,param_2,param_3);
      if ((uVar5 & 1) == 0) goto LAB_003b1c6c;
      if (param_1[0x68] == (ListenerGroup)0x0) {
        StateMachineInstance::updateListeners(param_1_00,param_2,0,param_9,9,param_6);
      }
      param_1[0x68] = (ListenerGroup)0x1;
    }
    uVar4 = 2;
  }
  else {
    if (uVar3 == 1) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(param_1_00,param_2,param_3);
      param_1[0x68] = (ListenerGroup)0x0;
      return 0;
    }
LAB_003b1c6c:
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 003b1c90  rive::DraggableConstraint::listenerGroups =====

/* non-virtual thunk to rive::DraggableConstraint::listenerGroups() */

void __thiscall rive::DraggableConstraint::listenerGroups(DraggableConstraint *this)

{
  listenerGroups();
  return;
}


// ===== 003b1c98  FUN_003b1c98 =====

void FUN_003b1c98(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3b1c9c);
  (*pcVar1)();
}


// ===== 003b1c9c  FUN_003b1c9c =====

undefined8 FUN_003b1c9c(void)

{
  return 0x208;
}


// ===== 003b1ca4  FUN_003b1ca4 =====

undefined8 FUN_003b1ca4(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x4f)) && (param_2 != 0x208)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003b1ccc  rive::StateMachineListenerSingle::import =====

/* rive::StateMachineListenerSingle::import(rive::ImportStack&) */

void __thiscall
rive::StateMachineListenerSingle::import(StateMachineListenerSingle *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar12 = NEON_cnt(uVar4,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((uint)uVar4 - 1) & 0x283;
    }
    else {
      uVar8 = 0x283;
      if (uVar4 < 0x284) {
        uVar1 = (uint)uVar4 & 0xffff;
        uVar2 = 0;
        if ((uVar4 & 0xffff) != 0) {
          uVar2 = 0x283 / uVar1;
        }
        uVar8 = (ulong)(0x283 - uVar2 * uVar1);
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x283) {
          if ((short)plVar9[2] == 0x283) {
            lVar5 = plVar9[3];
            if (lVar5 != 0) {
              lVar7 = *(long *)(lVar5 + 8);
              *(undefined8 *)(lVar5 + 8) = 0;
              if (lVar7 != 0) {
                *(long *)(this + 0x68) = lVar7;
                StateMachineListener::import((StateMachineListener *)this,param_1);
                return;
              }
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar3 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  StateMachineListener::import((StateMachineListener *)this,param_1);
  return;
}


// ===== 003b1d98  rive::StateMachineListenerSingle::decodeViewModelPathIds =====

/* rive::StateMachineListenerSingle::decodeViewModelPathIds(rive::Span<unsigned char const>) */

void rive::StateMachineListenerSingle::decodeViewModelPathIds
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
  *(long **)(param_1 + 0x68) = plVar2;
  DataBindPath::decodePath(plVar2,param_2,param_3);
  *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x30) = 1;
  return;
}


// ===== 003b1e14  rive::StateMachineListenerSingle::copyViewModelPathIds =====

/* rive::StateMachineListenerSingle::copyViewModelPathIds(rive::StateMachineListenerSingleBase
   const&) */

void __thiscall
rive::StateMachineListenerSingle::copyViewModelPathIds
          (StateMachineListenerSingle *this,StateMachineListenerSingleBase *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 != (long *)0x0) {
    lVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    lVar2 = plVar3[5];
    *(long *)(this + 0x68) = lVar1;
    *(long *)(lVar1 + 0x28) = lVar2;
  }
  return;
}


// ===== 003b1e54  rive::StateMachineListenerSingle::viewModelPathIdsBuffer =====

/* rive::StateMachineListenerSingle::viewModelPathIdsBuffer() const */

void rive::StateMachineListenerSingle::viewModelPathIdsBuffer(void)

{
  void *__src;
  ulong __n;
  long in_x0;
  void *__dest;
  undefined8 *in_x8;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 0x68);
  in_x8[1] = 0;
  in_x8[2] = 0;
  __src = *(void **)(lVar1 + 0x10);
  lVar1 = *(long *)(lVar1 + 0x18);
  *in_x8 = 0;
  __n = lVar1 - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003b1ebc();
    }
    __dest = operator_new(__n);
    *in_x8 = __dest;
    in_x8[2] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    in_x8[1] = (long)__dest + __n;
  }
  return;
}


// ===== 003b1ebc  FUN_003b1ebc =====

void FUN_003b1ebc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003b1ed0  FUN_003b1ed0 =====

void FUN_003b1ed0(StateMachineListener *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  rive::StateMachineListener::~StateMachineListener(param_1);
  return;
}


// ===== 003b1f08  FUN_003b1f08 =====

void FUN_003b1f08(StateMachineListener *param_1)

{
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 8))();
  }
  rive::StateMachineListener::~StateMachineListener(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003b1f44  FUN_003b1f44 =====

undefined8 FUN_003b1f44(void)

{
  return 0x72;
}


// ===== 003b1f4c  FUN_003b1f4c =====

undefined8 FUN_003b1f4c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x36) && (param_2 != 0x72)) && (param_2 != 0x28e)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003b1f74  FUN_003b1f74 =====

undefined8 FUN_003b1f74(long *param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  
  lVar4 = tpidr_el0;
  uVar6 = 0;
  lVar10 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0xe1) {
    if (param_2 == 0x8a) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003b21b0;
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
LAB_003b21b0:
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
    else {
      if (param_2 != 0xe0) goto LAB_003b2210;
      uVar14 = 0;
      uVar7 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003b2200;
        }
        pbVar11 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
        pbVar5 = pbVar11;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar11;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003b2200:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 5) = (int)uVar7;
    }
  }
  else if (param_2 == 0x364) {
    uVar14 = 0;
    uVar7 = 0;
    pbVar5 = (byte *)(*param_3 + param_3[1]);
    pbVar11 = (byte *)param_3[2];
    do {
      if (pbVar5 <= pbVar11) {
        uVar7 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
        pbVar11 = pbVar5;
        goto LAB_003b2174;
      }
      pbVar8 = pbVar11 + 1;
      bVar1 = *pbVar11;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
      pbVar11 = pbVar8;
    } while ((char)bVar1 < '\0');
    if ((char)param_3[3] != '\0') {
      uVar7 = 0;
    }
    pbVar5 = pbVar8;
    pbVar11 = pbVar8 + uVar7;
LAB_003b2174:
    lVar9 = *param_1;
    param_3[2] = (long)pbVar11;
    (**(code **)(lVar9 + 0x68))(param_1,pbVar5,uVar7);
  }
  else if (param_2 == 399) {
    uVar14 = 0;
    uVar7 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003b2194;
      }
      pbVar11 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
      pbVar5 = pbVar11;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar7 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003b2194:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)((long)param_1 + 100) = (int)uVar7;
  }
  else {
    if (param_2 != 0xe1) goto LAB_003b2210;
    uVar14 = 0;
    uVar7 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003b21e8;
      }
      pbVar11 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
      pbVar5 = pbVar11;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar7 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003b21e8:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar7;
  }
  uVar6 = 1;
LAB_003b2210:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b2238  FUN_003b2238 =====

bool FUN_003b2238(long param_1,int param_2)

{
  return *(int *)(param_1 + 0x60) == param_2;
}


// ===== 003b2248  FUN_003b2248 =====

void FUN_003b2248(void)

{
  return;
}


// ===== 003b224c  FUN_003b224c =====

void FUN_003b224c(void)

{
  return;
}


// ===== 003b2250  FUN_003b2250 =====

void FUN_003b2250(void)

{
  return;
}


// ===== 003b2254  rive::ViewportDraggableProxy::drag =====

/* rive::ViewportDraggableProxy::drag(rive::Vec2D, float) */

undefined8 __thiscall
rive::ViewportDraggableProxy::drag(float param_1,float param_2,ViewportDraggableProxy *this)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar3 = *(long **)(this + 0x10);
  if (*(char *)((long)plVar3 + 0xae) == '\0') {
LAB_003b2344:
    uVar2 = 0;
  }
  else {
    fVar7 = param_1 - *(float *)(this + 0x18);
    fVar6 = param_2 - *(float *)(this + 0x1c);
    if (this[0x20] == (ViewportDraggableProxy)0x0) {
      cVar1 = *(char *)((long)plVar3 + 0x8c);
      fVar4 = fVar7;
      if (cVar1 == '\0') {
LAB_003b2360:
        fVar4 = ABS(fVar4);
        fVar5 = *(float *)(plVar3 + 0x16);
        if (fVar4 == fVar5 || fVar4 < fVar5 != (NAN(fVar4) || NAN(fVar5))) goto LAB_003b2344;
      }
      else {
        if (cVar1 != '\x02') {
          fVar4 = fVar6;
          if (cVar1 != '\x01') goto LAB_003b2294;
          goto LAB_003b2360;
        }
        fVar5 = *(float *)(plVar3 + 0x16);
        fVar4 = (float)NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
        fVar4 = SQRT(fVar4);
        if (fVar4 == fVar5 || fVar4 < fVar5 != (NAN(fVar4) || NAN(fVar5))) goto LAB_003b2344;
      }
      this[0x20] = (ViewportDraggableProxy)0x1;
    }
LAB_003b2294:
    if ((long *)plVar3[0x20] != (long *)0x0) {
      (**(code **)(*(long *)plVar3[0x20] + 0xc0))(fVar7,fVar6);
    }
    if (*(float *)(plVar3 + 0x13) != fVar7 + *(float *)(plVar3 + 0x1f)) {
      *(float *)(plVar3 + 0x13) = fVar7 + *(float *)(plVar3 + 0x1f);
      (**(code **)(*plVar3 + 0xf8))(plVar3);
    }
    fVar6 = fVar6 + *(float *)((long)plVar3 + 0xfc);
    if (*(float *)((long)plVar3 + 0x9c) != fVar6) {
      *(float *)((long)plVar3 + 0x9c) = fVar6;
      (**(code **)(*plVar3 + 0x100))(plVar3);
    }
    uVar2 = 1;
    *(float *)(this + 0x18) = param_1;
    *(float *)(this + 0x1c) = param_2;
  }
  return uVar2;
}


// ===== 003b2378  rive::ViewportDraggableProxy::startDrag =====

/* rive::ViewportDraggableProxy::startDrag(rive::Vec2D, float) */

bool __thiscall
rive::ViewportDraggableProxy::startDrag
          (undefined4 param_1,undefined4 param_2,ViewportDraggableProxy *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  cVar1 = *(char *)(lVar3 + 0xae);
  if (cVar1 != '\0') {
    plVar2 = *(long **)(lVar3 + 0x100);
    this[0x20] = (ViewportDraggableProxy)0x0;
    *(undefined1 *)(lVar3 + 0x120) = 1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xa8))(plVar2,*(undefined4 *)(lVar3 + 0x8c));
    }
    *(undefined4 *)(this + 0x18) = param_1;
    *(undefined4 *)(this + 0x1c) = param_2;
  }
  return cVar1 != '\0';
}


// ===== 003b23e0  rive::ViewportDraggableProxy::endDrag =====

/* rive::ViewportDraggableProxy::endDrag(rive::Vec2D, float) */

bool rive::ViewportDraggableProxy::endDrag(long param_1)

{
  ScrollConstraint SVar1;
  
  SVar1 = (*(ScrollConstraint **)(param_1 + 0x10))[0xae];
  if (SVar1 != (ScrollConstraint)0x0) {
    ScrollConstraint::runPhysics(*(ScrollConstraint **)(param_1 + 0x10));
  }
  return SVar1 != (ScrollConstraint)0x0;
}


// ===== 003b2410  FUN_003b2410 =====

void FUN_003b2410(void)

{
  return;
}


// ===== 003b2414  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003b2418  FUN_003b2418 =====

undefined8 FUN_003b2418(void)

{
  return 0;
}


// ===== 003b2420  rive::ScrollVirtualizer::~ScrollVirtualizer =====

/* rive::ScrollVirtualizer::~ScrollVirtualizer() */

void __thiscall rive::ScrollVirtualizer::~ScrollVirtualizer(ScrollVirtualizer *this)

{
  *(undefined8 *)this = 0;
  return;
}


// ===== 003b2428  rive::ScrollVirtualizer::reset =====

/* rive::ScrollVirtualizer::reset() */

void __thiscall rive::ScrollVirtualizer::reset(ScrollVirtualizer *this)

{
  *(undefined8 *)this = 0;
  return;
}


// ===== 003b2430  rive::ScrollVirtualizer::constrain =====

/* rive::ScrollVirtualizer::constrain(rive::ScrollConstraint*,
   std::__ndk1::vector<rive::LayoutNodeProvider*, std::__ndk1::allocator<rive::LayoutNodeProvider*>
   >&, float, rive::VirtualizedDirection) */

undefined8 __thiscall
rive::ScrollVirtualizer::constrain
          (float param_3,ScrollVirtualizer *this,vector *param_1,undefined8 param_4,int param_5)

{
  char cVar1;
  ScrollVirtualizer SVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  if (param_5 == 0) {
    fVar5 = (float)ScrollConstraint::contentWidth();
    if (fVar5 == 0.0 || fVar5 < 0.0 != NAN(fVar5)) {
      return 1;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    cVar1 = param_1[0x8c];
    *(undefined4 *)(this + 0x14) = 0;
    fVar6 = *(float *)(*(long *)(lVar4 + 0x30) + 0x200);
    if (cVar1 == '\x01') goto LAB_003b24d0;
    fVar7 = *(float *)(lVar4 + 0x1f8);
  }
  else {
    fVar5 = (float)ScrollConstraint::contentHeight();
    if (fVar5 == 0.0 || fVar5 < 0.0 != NAN(fVar5)) {
      return 1;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    *(int *)(this + 0x14) = param_5;
    fVar6 = *(float *)(*(long *)(lVar4 + 0x30) + 0x204);
    if (param_1[0x8c] == '\0') goto LAB_003b24d0;
    fVar7 = *(float *)(lVar4 + 0x1fc);
  }
  fVar6 = fVar6 - fVar7;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
LAB_003b24d0:
  fVar7 = -param_3;
  dVar8 = (double)fVar5;
  SVar2 = *(ScrollVirtualizer *)(param_1 + 0xad);
  *(float *)(this + 0x10) = fVar6;
  this[0xc] = SVar2;
  if (param_3 == 0.0 || param_3 < 0.0 != NAN(param_3)) {
    iVar3 = (int)((double)fVar7 / dVar8);
    if (0 < iVar3) {
      dVar8 = fmod((double)fVar7,dVar8 * (double)iVar3);
      fVar7 = (float)dVar8;
    }
  }
  else if (SVar2 != (ScrollVirtualizer)0x0) {
    dVar8 = (double)NEON_fmsub((double)((int)((double)param_3 / dVar8) + 1),dVar8,(double)param_3);
    fVar7 = -(float)dVar8;
  }
  *(float *)(this + 8) = fVar7;
  virtualize((ScrollConstraint *)this,param_1);
  return 1;
}


// ===== 003b2560  rive::ScrollVirtualizer::virtualize =====

/* rive::ScrollVirtualizer::virtualize(rive::ScrollConstraint*,
   std::__ndk1::vector<rive::LayoutNodeProvider*, std::__ndk1::allocator<rive::LayoutNodeProvider*>
   >&) */

void rive::ScrollVirtualizer::virtualize(ScrollConstraint *param_1,vector *param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  int *piVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  float *pfVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *in_x2;
  int iVar20;
  long lVar21;
  float *pfVar22;
  float *pfVar23;
  long lVar24;
  int *piVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  ulong uVar29;
  void *pvVar30;
  int iVar31;
  int iVar32;
  int *piVar33;
  int iVar34;
  uint uVar35;
  int *piVar36;
  int iVar37;
  int iVar38;
  ulong uVar39;
  undefined2 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  ulong uVar47;
  float in_s2;
  float in_s3;
  float fVar48;
  float fVar49;
  ScrollConstraint *local_110;
  void *local_f8;
  void *local_f0;
  long local_e8;
  int local_dc;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  void *local_c0;
  ulong uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_90;
  undefined8 *puVar28;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  puVar19 = (undefined8 *)in_x2[1];
  if ((undefined8 *)*in_x2 == puVar19) {
    bVar8 = false;
    iVar34 = 0;
LAB_003b261c:
    iVar10 = *(int *)param_1;
    iVar20 = *(int *)(param_1 + 4);
  }
  else {
    iVar34 = 0;
    puVar27 = (undefined8 *)*in_x2;
    do {
      puVar28 = puVar27 + 1;
      iVar10 = (**(code **)(*(long *)*puVar27 + 0x38))();
      iVar34 = iVar34 + iVar10;
      puVar27 = puVar28;
    } while (puVar28 != puVar19);
    bVar8 = 0 < iVar34;
    if ((param_1[0xc] == (ScrollConstraint)0x0) || (iVar34 < 1)) goto LAB_003b261c;
    bVar8 = true;
    iVar10 = 0;
    if (iVar34 != 0) {
      iVar10 = *(int *)param_1 / iVar34;
    }
    iVar20 = 0;
    if (iVar34 != 0) {
      iVar20 = *(int *)(param_1 + 4) / iVar34;
    }
    iVar10 = *(int *)param_1 - iVar10 * iVar34;
    iVar20 = *(int *)(param_1 + 4) - iVar20 * iVar34;
  }
  local_110 = param_1 + 0xc;
  fVar48 = 0.0;
  uVar47 = 0;
  fVar41 = 0.0;
  *(undefined4 *)param_1 = 0;
  *(int *)(param_1 + 4) = iVar34 + -1;
  iVar3 = *(int *)(param_1 + 0x14);
  lVar21 = *(long *)(param_2 + 0x30);
  if ((lVar21 != 0) && (lVar24 = *(long *)(lVar21 + 0x1e8), lVar24 != 0)) {
    fVar41 = *(float *)(lVar24 + 0x88);
    if (*(int *)(lVar24 + 0x188) == 2) {
      fVar41 = (fVar41 / 100.0) * *(float *)(lVar21 + 0x200);
    }
    uVar47 = (ulong)(uint)*(float *)(lVar24 + 0x8c);
    if (*(int *)(lVar24 + 0x18c) == 2) {
      in_s2 = *(float *)(lVar21 + 0x204);
      uVar47 = (ulong)(uint)((*(float *)(lVar24 + 0x8c) / 100.0) * in_s2);
    }
  }
  lVar21 = *in_x2;
  lVar24 = in_x2[1];
  if (iVar3 != 0) {
    fVar41 = (float)uVar47;
  }
  if (lVar24 == lVar21) {
    iVar37 = 0;
    uVar29 = 0;
    fVar49 = 0.0;
    lVar21 = lVar24;
  }
  else {
    uVar29 = 0;
    do {
      plVar12 = (long *)(**(code **)(**(long **)(lVar21 + uVar29 * 8) + 8))();
      if ((plVar12 != (long *)0x0) && (sVar9 = (**(code **)(*plVar12 + 0x10))(), sVar9 == 0x22f)) {
        (**(code **)(plVar12[0x38] + 0x40))(plVar12 + 0x38,0xffffffff,0xffffffff);
      }
      lVar21 = *in_x2;
      lVar24 = in_x2[1];
      uVar29 = uVar29 + 1;
    } while (uVar29 < (ulong)(lVar24 - lVar21 >> 3));
    if (lVar24 == lVar21) {
      iVar37 = 0;
      uVar29 = 0;
      fVar49 = 0.0;
      lVar21 = lVar24;
    }
    else {
      fVar49 = 0.0;
      fVar48 = 0.0;
      uVar29 = 0;
      iVar31 = 0;
      iVar37 = 0;
      lVar24 = lVar21;
      do {
        plVar12 = *(long **)(lVar24 + uVar29 * 8);
        lVar21 = (**(code **)(*plVar12 + 0x38))(plVar12);
        if (lVar21 != 0) {
          uVar39 = 0;
          iVar11 = iVar37;
          do {
            fVar43 = (float)uVar47;
            plVar13 = (long *)(**(code **)(*plVar12 + 8))(plVar12);
            if ((plVar13 == (long *)0x0) ||
               (sVar9 = (**(code **)(*plVar13 + 0x10))(), sVar9 != 0x22f)) {
              fVar42 = (float)(**(code **)(*plVar12 + 0x10))(plVar12);
              if (iVar3 == 0) {
                fVar42 = in_s2 - fVar42;
              }
              else {
                fVar42 = in_s3 - fVar43;
              }
            }
            else {
              fVar42 = (float)(**(code **)(plVar13[0x38] + 0x20))
                                        (plVar13 + 0x38,uVar39 & 0xffffffff);
              if (iVar3 != 0) {
                fVar42 = fVar43;
              }
            }
            fVar42 = fVar49 + fVar42;
            uVar47 = (ulong)(uint)fVar42;
            fVar43 = *(float *)(param_1 + 8);
            iVar38 = (int)uVar39;
            if (fVar42 != fVar43 && fVar42 < fVar43 == (NAN(fVar42) || NAN(fVar43))) {
              *(int *)param_1 = iVar31 + iVar38;
              lVar24 = *in_x2;
              lVar21 = in_x2[1];
              bVar7 = (lVar21 - lVar24 >> 3) + -1 == (long)iVar11;
              iVar37 = 0;
              if (!bVar7) {
                iVar37 = iVar11 + 1;
              }
LAB_003b28d8:
              fVar48 = fVar49 - fVar43;
              uVar29 = uVar29 + bVar7;
              goto LAB_003b28e0;
            }
            fVar49 = fVar41 + fVar42;
            if (fVar49 != fVar43 && fVar49 < fVar43 == (NAN(fVar49) || NAN(fVar43))) {
              iVar37 = iVar31 + iVar38 + 1;
              lVar24 = *in_x2;
              lVar21 = in_x2[1];
              iVar31 = 0;
              if (iVar37 != iVar34) {
                iVar31 = iVar37;
              }
              *(int *)param_1 = iVar31;
              bVar7 = (lVar21 - lVar24 >> 3) - 1U == uVar39;
              iVar37 = 0;
              if (!bVar7) {
                iVar37 = iVar38 + 1;
              }
              goto LAB_003b28d8;
            }
            uVar39 = uVar39 + 1;
            uVar14 = (**(code **)(*plVar12 + 0x38))(plVar12);
            iVar11 = iVar38;
          } while (uVar39 < uVar14);
          iVar37 = (int)uVar39 + -1;
          iVar31 = iVar31 + (int)uVar39;
        }
        lVar24 = *in_x2;
        uVar29 = uVar29 + 1;
        lVar21 = in_x2[1];
      } while (uVar29 < (ulong)(in_x2[1] - lVar24 >> 3));
    }
  }
LAB_003b28e0:
  iVar31 = *(int *)param_1;
  if (iVar31 < iVar34) {
    uVar35 = 0;
    uVar39 = lVar21 - lVar24 >> 3;
    iVar11 = 0;
    iVar38 = 0;
    if (uVar39 != 0) {
      iVar38 = (int)((ulong)(long)(int)uVar29 / uVar39);
    }
    do {
      uVar14 = (ulong)iVar37;
      plVar12 = *(long **)(*in_x2 + (long)((int)uVar29 - iVar38 * (int)uVar39) * 8);
      uVar15 = (**(code **)(*plVar12 + 0x38))(plVar12);
      iVar32 = iVar31;
      if (uVar14 < uVar15) {
        do {
          fVar43 = (float)uVar47;
          plVar13 = (long *)(**(code **)(*plVar12 + 8))(plVar12);
          if ((plVar13 == (long *)0x0) || (sVar9 = (**(code **)(*plVar13 + 0x10))(), sVar9 != 0x22f)
             ) {
            fVar42 = (float)(**(code **)(*plVar12 + 0x10))(plVar12);
            if (iVar3 == 0) {
              fVar42 = in_s2 - fVar42;
            }
            else {
              fVar42 = in_s3 - fVar43;
            }
          }
          else {
            fVar42 = (float)(**(code **)(plVar13[0x38] + 0x20))(plVar13 + 0x38,iVar37);
            if (iVar3 != 0) {
              fVar42 = fVar43;
            }
          }
          in_s3 = *(float *)(param_1 + 0x10);
          in_s2 = *(float *)(param_1 + 8) + in_s3;
          fVar43 = fVar41 + fVar49 + fVar42;
          uVar47 = (ulong)(uint)fVar43;
          if (fVar43 < in_s2 == (NAN(fVar43) || NAN(in_s2))) {
            iVar37 = iVar34;
            if (uVar35 == 0) {
              iVar37 = 0;
            }
            iVar31 = 0;
            if (param_1[0xc] != (ScrollConstraint)0x0) {
              iVar31 = iVar37;
            }
            *(int *)(param_1 + 4) = iVar31 + iVar32;
            goto LAB_003b2a54;
          }
          uVar14 = uVar14 + 1;
          fVar49 = fVar49 + fVar41 + fVar42;
          uVar1 = (uint)(*local_110 != (ScrollConstraint)0x0 && iVar32 == iVar34 + -1);
          iVar11 = iVar11 + uVar1;
          uVar35 = uVar1 | uVar35;
          iVar31 = 0;
          if (uVar1 == 0) {
            iVar31 = iVar32 + 1;
          }
          uVar15 = (**(code **)(*plVar12 + 0x38))(plVar12);
          iVar37 = iVar37 + 1;
          iVar32 = iVar31;
        } while (uVar14 < uVar15);
      }
    } while ((iVar31 < iVar34) && (iVar37 = 0, iVar11 < 2));
  }
LAB_003b2a54:
  iVar37 = *(int *)param_1;
  local_d8 = (int *)0x0;
  local_d0 = (int *)0x0;
  local_c8 = (int *)0x0;
  bVar7 = false;
  if (param_1[0xc] != (ScrollConstraint)0x0) {
    bVar7 = bVar8;
  }
  if (bVar7) {
    iVar31 = 0;
    if (iVar34 != 0) {
      iVar31 = iVar37 / iVar34;
    }
    iVar11 = 0;
    if (iVar34 != 0) {
      iVar11 = *(int *)(param_1 + 4) / iVar34;
    }
    iVar37 = iVar37 - iVar31 * iVar34;
    iVar31 = *(int *)(param_1 + 4) - iVar11 * iVar34;
  }
  else {
    iVar31 = *(int *)(param_1 + 4);
  }
  local_a0 = 0x3f800000;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  uStack_a8 = 0;
  local_b0 = (undefined8 *)0x0;
  if (iVar31 < iVar37) {
    if (iVar37 < iVar34) {
      do {
        local_dc = iVar37;
        lVar21 = FUN_003b3564(&local_c0,iVar37,&local_dc);
        iVar37 = iVar37 + 1;
        *(undefined1 *)(lVar21 + 0x14) = 1;
      } while (iVar34 != iVar37);
    }
    local_dc = 0;
    if (-1 < iVar31) {
      do {
        iVar37 = local_dc;
        lVar21 = FUN_003b3564(&local_c0,local_dc,&local_dc);
        local_dc = iVar37 + 1;
        *(undefined1 *)(lVar21 + 0x14) = 1;
      } while (iVar37 != iVar31);
    }
  }
  else {
    do {
      local_dc = iVar37;
      lVar21 = FUN_003b3564(&local_c0,iVar37,&local_dc);
      bVar8 = iVar37 != iVar31;
      iVar37 = iVar37 + 1;
      *(undefined1 *)(lVar21 + 0x14) = 1;
      local_dc = iVar37;
    } while (bVar8);
  }
  if (iVar20 < iVar10) {
    if (iVar10 < iVar34) {
      uVar47 = (ulong)iVar10;
      do {
        piVar36 = local_d0;
        piVar6 = local_d8;
        iVar10 = (int)uVar47;
        if (uStack_b8 != 0) {
          uVar44 = NEON_cnt(uStack_b8,1);
          uVar40 = NEON_uaddlv(uVar44,1);
          uVar29 = CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar40) & 0xffffffff;
          if (uVar29 < 2) {
            uVar39 = uStack_b8 - 1 & uVar47;
          }
          else {
            uVar39 = uVar47;
            if (uStack_b8 <= uVar47) {
              uVar39 = 0;
              if (uStack_b8 != 0) {
                uVar39 = uVar47 / uStack_b8;
              }
              uVar39 = uVar47 - uVar39 * uStack_b8;
            }
          }
          plVar12 = *(long **)((long)local_c0 + uVar39 * 8);
          if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
            do {
              uVar14 = plVar12[1];
              if (uVar14 == uVar47) {
                if ((int)plVar12[2] == iVar10) goto LAB_003b2d28;
              }
              else {
                if (uVar29 < 2) {
                  uVar14 = uVar14 & uStack_b8 - 1;
                }
                else if (uStack_b8 <= uVar14) {
                  uVar15 = 0;
                  if (uStack_b8 != 0) {
                    uVar15 = uVar14 / uStack_b8;
                  }
                  uVar14 = uVar14 - uVar15 * uStack_b8;
                }
                if (uVar14 != uVar39) break;
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
        if (local_d0 < local_c8) {
          *local_d0 = iVar10;
          local_d0 = local_d0 + 1;
        }
        else {
          lVar24 = (long)local_d0 - (long)local_d8;
          lVar21 = lVar24 >> 2;
          uVar29 = lVar21 + 1;
          if (uVar29 >> 0x3e != 0) goto LAB_003b3548;
          uVar39 = (long)local_c8 - (long)local_d8 >> 1;
          if (uVar39 <= uVar29) {
            uVar39 = uVar29;
          }
          if (0x7ffffffffffffffb < (ulong)((long)local_c8 - (long)local_d8)) {
            uVar39 = 0x3fffffffffffffff;
          }
          if (uVar39 == 0) {
            pvVar16 = (void *)0x0;
          }
          else {
            if (uVar39 >> 0x3e != 0) goto LAB_003b3550;
            pvVar16 = operator_new(uVar39 << 2);
          }
          local_d8 = (int *)((long)pvVar16 + lVar21 * 4);
          piVar33 = local_d8 + 1;
          *local_d8 = iVar10;
          if ((long)piVar36 - (long)piVar6 != 0) {
            uVar29 = ((long)piVar36 - (long)piVar6) - 4;
            if ((0x1b < uVar29) && (0x1f < (ulong)((long)piVar36 + (-lVar24 - (long)pvVar16)))) {
              piVar25 = local_d8 + -4;
              pauVar26 = (undefined1 (*) [16])(piVar36 + -4);
              uVar29 = (uVar29 >> 2) + 1;
              uVar15 = uVar29 & 0x7ffffffffffffff8;
              piVar36 = piVar36 + -uVar15;
              uVar14 = uVar15;
              do {
                pauVar5 = pauVar26 + -1;
                uVar44 = *(undefined8 *)pauVar26[-1];
                auVar46 = *pauVar26;
                uVar14 = uVar14 - 8;
                pauVar26 = pauVar26 + -2;
                *(undefined8 *)(piVar25 + -2) = *(undefined8 *)((long)*pauVar5 + 8);
                *(undefined8 *)(piVar25 + -4) = uVar44;
                *(long *)(piVar25 + 2) = auVar46._8_8_;
                *(long *)piVar25 = auVar46._0_8_;
                piVar25 = piVar25 + -8;
              } while (uVar14 != 0);
              local_d8 = local_d8 + -uVar15;
              if (uVar29 == uVar15) goto LAB_003b2d0c;
            }
            do {
              piVar36 = piVar36 + -1;
              local_d8 = local_d8 + -1;
              *local_d8 = *piVar36;
            } while (piVar36 != piVar6);
          }
LAB_003b2d0c:
          local_c8 = (int *)((long)pvVar16 + uVar39 * 4);
          local_d0 = piVar33;
          if (piVar6 != (int *)0x0) {
            operator_delete(piVar6);
            local_d0 = piVar33;
          }
        }
LAB_003b2d28:
        uVar47 = uVar47 + 1;
      } while (iVar34 != (int)uVar47);
    }
    if (-1 < iVar20) {
      uVar47 = 0;
      do {
        piVar36 = local_d0;
        piVar6 = local_d8;
        if (uStack_b8 != 0) {
          uVar44 = NEON_cnt(uStack_b8,1);
          uVar40 = NEON_uaddlv(uVar44,1);
          uVar29 = CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar40) & 0xffffffff;
          if (uVar29 < 2) {
            uVar39 = uStack_b8 + 0x7fffffff & uVar47;
          }
          else {
            uVar39 = uVar47;
            if (uStack_b8 <= uVar47) {
              uVar39 = 0;
              if (uStack_b8 != 0) {
                uVar39 = uVar47 / uStack_b8;
              }
              uVar39 = uVar47 - uVar39 * uStack_b8;
            }
          }
          plVar12 = *(long **)((long)local_c0 + uVar39 * 8);
          if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
            do {
              uVar14 = plVar12[1];
              if (uVar14 == uVar47) {
                if (uVar47 == *(uint *)(plVar12 + 2)) goto LAB_003b2f14;
              }
              else {
                if (uVar29 < 2) {
                  uVar14 = uVar14 & uStack_b8 - 1;
                }
                else if (uStack_b8 <= uVar14) {
                  uVar15 = 0;
                  if (uStack_b8 != 0) {
                    uVar15 = uVar14 / uStack_b8;
                  }
                  uVar14 = uVar14 - uVar15 * uStack_b8;
                }
                if (uVar14 != uVar39) break;
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
        if (local_d0 < local_c8) {
          *local_d0 = (int)uVar47;
          local_d0 = local_d0 + 1;
        }
        else {
          lVar24 = (long)local_d0 - (long)local_d8;
          lVar21 = lVar24 >> 2;
          uVar29 = lVar21 + 1;
          if (uVar29 >> 0x3e != 0) {
LAB_003b3548:
            FUN_00330fec(&local_d8);
LAB_003b3550:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar39 = (long)local_c8 - (long)local_d8 >> 1;
          if (uVar39 <= uVar29) {
            uVar39 = uVar29;
          }
          if (0x7ffffffffffffffb < (ulong)((long)local_c8 - (long)local_d8)) {
            uVar39 = 0x3fffffffffffffff;
          }
          if (uVar39 == 0) {
            pvVar16 = (void *)0x0;
          }
          else {
            if (uVar39 >> 0x3e != 0) goto LAB_003b3550;
            pvVar16 = operator_new(uVar39 << 2);
          }
          local_d8 = (int *)((long)pvVar16 + lVar21 * 4);
          piVar33 = local_d8 + 1;
          *local_d8 = (int)uVar47;
          if ((long)piVar36 - (long)piVar6 != 0) {
            uVar29 = ((long)piVar36 - (long)piVar6) - 4;
            if ((0x1b < uVar29) && (0x1f < (ulong)((long)piVar36 + (-lVar24 - (long)pvVar16)))) {
              piVar25 = local_d8 + -4;
              pauVar26 = (undefined1 (*) [16])(piVar36 + -4);
              uVar29 = (uVar29 >> 2) + 1;
              uVar15 = uVar29 & 0x7ffffffffffffff8;
              piVar36 = piVar36 + -uVar15;
              uVar14 = uVar15;
              do {
                pauVar5 = pauVar26 + -1;
                uVar44 = *(undefined8 *)pauVar26[-1];
                auVar46 = *pauVar26;
                uVar14 = uVar14 - 8;
                pauVar26 = pauVar26 + -2;
                *(undefined8 *)(piVar25 + -2) = *(undefined8 *)((long)*pauVar5 + 8);
                *(undefined8 *)(piVar25 + -4) = uVar44;
                *(long *)(piVar25 + 2) = auVar46._8_8_;
                *(long *)piVar25 = auVar46._0_8_;
                piVar25 = piVar25 + -8;
              } while (uVar14 != 0);
              local_d8 = local_d8 + -uVar15;
              if (uVar29 == uVar15) goto LAB_003b2ef8;
            }
            do {
              piVar36 = piVar36 + -1;
              local_d8 = local_d8 + -1;
              *local_d8 = *piVar36;
            } while (piVar36 != piVar6);
          }
LAB_003b2ef8:
          local_c8 = (int *)((long)pvVar16 + uVar39 * 4);
          local_d0 = piVar33;
          if (piVar6 != (int *)0x0) {
            operator_delete(piVar6);
            local_d0 = piVar33;
          }
        }
LAB_003b2f14:
        uVar47 = uVar47 + 1;
      } while (uVar47 != iVar20 + 1);
    }
  }
  else {
    uVar47 = (ulong)iVar10;
    do {
      piVar36 = local_d0;
      piVar6 = local_d8;
      iVar10 = (int)uVar47;
      if (uStack_b8 != 0) {
        uVar44 = NEON_cnt(uStack_b8,1);
        uVar40 = NEON_uaddlv(uVar44,1);
        uVar29 = CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar40) & 0xffffffff;
        if (uVar29 < 2) {
          uVar39 = uStack_b8 - 1 & uVar47;
        }
        else {
          uVar39 = uVar47;
          if (uStack_b8 <= uVar47) {
            uVar39 = 0;
            if (uStack_b8 != 0) {
              uVar39 = uVar47 / uStack_b8;
            }
            uVar39 = uVar47 - uVar39 * uStack_b8;
          }
        }
        plVar12 = *(long **)((long)local_c0 + uVar39 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          do {
            uVar14 = plVar12[1];
            if (uVar14 == uVar47) {
              if ((int)plVar12[2] == iVar10) goto LAB_003b30e4;
            }
            else {
              if (uVar29 < 2) {
                uVar14 = uVar14 & uStack_b8 - 1;
              }
              else if (uStack_b8 <= uVar14) {
                uVar15 = 0;
                if (uStack_b8 != 0) {
                  uVar15 = uVar14 / uStack_b8;
                }
                uVar14 = uVar14 - uVar15 * uStack_b8;
              }
              if (uVar14 != uVar39) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
      if (local_d0 < local_c8) {
        *local_d0 = iVar10;
        local_d0 = local_d0 + 1;
      }
      else {
        lVar24 = (long)local_d0 - (long)local_d8;
        lVar21 = lVar24 >> 2;
        uVar29 = lVar21 + 1;
        if (uVar29 >> 0x3e != 0) goto LAB_003b3548;
        uVar39 = (long)local_c8 - (long)local_d8 >> 1;
        if (uVar39 <= uVar29) {
          uVar39 = uVar29;
        }
        if (0x7ffffffffffffffb < (ulong)((long)local_c8 - (long)local_d8)) {
          uVar39 = 0x3fffffffffffffff;
        }
        if (uVar39 == 0) {
          pvVar16 = (void *)0x0;
        }
        else {
          if (uVar39 >> 0x3e != 0) goto LAB_003b3550;
          pvVar16 = operator_new(uVar39 << 2);
        }
        local_d8 = (int *)((long)pvVar16 + lVar21 * 4);
        piVar33 = local_d8 + 1;
        *local_d8 = iVar10;
        if ((long)piVar36 - (long)piVar6 != 0) {
          uVar29 = ((long)piVar36 - (long)piVar6) - 4;
          if ((0x1b < uVar29) && (0x1f < (ulong)((long)piVar36 + (-lVar24 - (long)pvVar16)))) {
            piVar25 = local_d8 + -4;
            pauVar26 = (undefined1 (*) [16])(piVar36 + -4);
            uVar29 = (uVar29 >> 2) + 1;
            uVar15 = uVar29 & 0x7ffffffffffffff8;
            piVar36 = piVar36 + -uVar15;
            uVar14 = uVar15;
            do {
              pauVar5 = pauVar26 + -1;
              uVar44 = *(undefined8 *)pauVar26[-1];
              auVar46 = *pauVar26;
              uVar14 = uVar14 - 8;
              pauVar26 = pauVar26 + -2;
              *(undefined8 *)(piVar25 + -2) = *(undefined8 *)((long)*pauVar5 + 8);
              *(undefined8 *)(piVar25 + -4) = uVar44;
              *(long *)(piVar25 + 2) = auVar46._8_8_;
              *(long *)piVar25 = auVar46._0_8_;
              piVar25 = piVar25 + -8;
            } while (uVar14 != 0);
            local_d8 = local_d8 + -uVar15;
            if (uVar29 == uVar15) goto LAB_003b30c8;
          }
          do {
            piVar36 = piVar36 + -1;
            local_d8 = local_d8 + -1;
            *local_d8 = *piVar36;
          } while (piVar36 != piVar6);
        }
LAB_003b30c8:
        local_c8 = (int *)((long)pvVar16 + uVar39 * 4);
        local_d0 = piVar33;
        if (piVar6 != (int *)0x0) {
          operator_delete(piVar6);
          local_d0 = piVar33;
        }
      }
LAB_003b30e4:
      uVar47 = uVar47 + 1;
    } while (iVar20 + 1 != (int)uVar47);
  }
  piVar6 = local_d8;
  local_f8 = (void *)0x0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  uVar47 = (long)local_d0 - (long)local_d8;
  if (uVar47 == 0) {
    recycleItems((ScrollVirtualizer *)param_1,&local_f8,in_x2,iVar34);
  }
  else {
    if ((long)uVar47 < 0) {
      FUN_00330fec(&local_f8);
      goto LAB_003b3560;
    }
    pvVar16 = operator_new(uVar47);
    local_f8 = pvVar16;
    local_e8 = (long)pvVar16 + uVar47;
    memcpy(pvVar16,piVar6,uVar47);
    local_f0 = (void *)((long)pvVar16 + uVar47);
    recycleItems((ScrollVirtualizer *)param_1,&local_f8,in_x2,iVar34);
    local_f0 = pvVar16;
    operator_delete(pvVar16);
  }
  lVar21 = *in_x2;
  lVar24 = in_x2[1];
  uVar47 = lVar24 - lVar21;
  if (uVar47 == 0) {
    pfVar17 = (float *)0x0;
  }
  else {
    if ((long)uVar47 < 0) {
LAB_003b3560:
                    /* WARNING: Subroutine does not return */
      FUN_00371ef8();
    }
    pfVar17 = (float *)operator_new(uVar47);
    pfVar22 = pfVar17;
    if (0x37 < uVar47 - 8) {
      auVar46 = NEON_fmov(0xbf800000,4);
      uVar44 = auVar46._8_8_;
      uVar29 = (uVar47 - 8 >> 3) + 1;
      uVar14 = uVar29 & 0x3ffffffffffffff8;
      pfVar22 = pfVar17 + 8;
      uVar39 = uVar14;
      do {
        uVar39 = uVar39 - 8;
        *(undefined8 *)(pfVar22 + -6) = uVar44;
        uVar45 = auVar46._0_8_;
        *(undefined8 *)(pfVar22 + -8) = uVar45;
        *(undefined8 *)(pfVar22 + -2) = uVar44;
        *(undefined8 *)(pfVar22 + -4) = uVar45;
        *(undefined8 *)(pfVar22 + 2) = uVar44;
        *(undefined8 *)pfVar22 = uVar45;
        *(undefined8 *)(pfVar22 + 6) = uVar44;
        *(undefined8 *)(pfVar22 + 4) = uVar45;
        pfVar22 = pfVar22 + 0x10;
      } while (uVar39 != 0);
      if (uVar29 == uVar14) goto LAB_003b31f8;
      pfVar22 = pfVar17 + uVar14 * 2;
    }
    uVar44 = NEON_fmov(0xbf800000,4);
    do {
      pfVar23 = pfVar22 + 2;
      *(undefined8 *)pfVar22 = uVar44;
      pfVar22 = pfVar23;
    } while (pfVar23 != (float *)((long)pfVar17 + uVar47));
  }
LAB_003b31f8:
  iVar10 = *(int *)param_1;
  if (iVar10 <= *(int *)(param_1 + 4)) {
    do {
      iVar20 = iVar10;
      if (*local_110 != (ScrollConstraint)0x0) {
        iVar20 = 0;
        if (iVar34 != 0) {
          iVar20 = iVar10 / iVar34;
        }
        iVar20 = iVar10 - iVar20 * iVar34;
      }
      lVar21 = *in_x2;
      if (in_x2[1] != lVar21) {
        uVar47 = 0;
        iVar37 = 0;
        pfVar22 = pfVar17;
        do {
          plVar13 = *(long **)(lVar21 + uVar47 * 8);
          iVar11 = (**(code **)(*plVar13 + 0x38))(plVar13);
          iVar31 = iVar37 + iVar11;
          plVar12 = (long *)(**(code **)(*plVar13 + 8))(plVar13);
          if (plVar12 != (long *)0x0) {
            sVar9 = (**(code **)(*plVar12 + 0x10))();
            plVar2 = (long *)0x0;
            if (sVar9 == 0x22f) {
              plVar2 = plVar12 + 0x38;
            }
            if ((0 < iVar11) && ((sVar9 == 0x22f && iVar20 < iVar31) && iVar37 <= iVar20)) {
              fVar49 = *pfVar22;
              iVar11 = iVar20 - iVar37;
              if (fVar49 == -1.0) {
                *pfVar22 = (float)iVar11;
              }
              pfVar22[1] = (float)iVar11;
              lVar21 = (**(code **)(*plVar2 + 0x10))(plVar2,iVar11);
              if (lVar21 == 0) {
                (**(code **)(*plVar2 + 0x30))(plVar2,iVar11);
              }
              plVar18 = (long *)(**(code **)(*plVar13 + 8))(plVar13);
              if ((plVar18 == (long *)0x0) ||
                 (sVar9 = (**(code **)(*plVar18 + 0x10))(), sVar9 != 0x22f)) {
                fVar43 = (float)(**(code **)(*plVar13 + 0x10))(plVar13);
                if (iVar3 == 0) {
                  fVar43 = in_s2 - fVar43;
                }
                else {
                  fVar43 = in_s3 - fVar49;
                }
              }
              else {
                fVar43 = (float)(**(code **)(plVar18[0x38] + 0x20))(plVar18 + 0x38,iVar11);
                if (iVar3 != 0) {
                  fVar43 = fVar49;
                }
              }
              puVar19 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,iVar11);
              if (((puVar19 != (undefined8 *)0x0) &&
                  (plVar13 = (long *)(**(code **)*puVar19)(), plVar13 != (long *)0x0)) &&
                 (uVar29 = (**(code **)(*plVar13 + 0x18))(plVar13,1), (uVar29 & 1) != 0)) {
                in_s2 = *(float *)(plVar12 + 0x16);
                fVar49 = (float)NEON_fmadd(*(undefined4 *)((long)plVar12 + 0xa4),in_s2,
                                           -(float)plVar12[0x15] *
                                           (float)((ulong)plVar12[0x15] >> 0x20));
                iVar31 = iVar37;
                if (fVar49 == 0.0) goto LAB_003b3288;
                if (iVar3 == 0) {
                  fVar49 = fVar48;
                  fVar42 = *(float *)((long)plVar13 + 0x1fc);
                }
                else {
                  fVar49 = *(float *)(plVar13 + 0x3f);
                  fVar42 = fVar48;
                }
                (**(code **)(*plVar2 + 0x48))(fVar49,fVar42,plVar2,iVar11);
              }
              fVar48 = fVar48 + fVar41 + fVar43;
              break;
            }
          }
LAB_003b3288:
          iVar37 = iVar31;
          uVar47 = uVar47 + 1;
          pfVar22 = pfVar22 + 2;
          lVar21 = *in_x2;
        } while (uVar47 < (ulong)(in_x2[1] - lVar21 >> 3));
      }
      bVar8 = iVar10 < *(int *)(param_1 + 4);
      iVar10 = iVar10 + 1;
    } while (bVar8);
    lVar21 = *in_x2;
    lVar24 = in_x2[1];
  }
  if (lVar24 == lVar21) {
    pvVar16 = local_c0;
    puVar19 = local_b0;
    if (pfVar17 == (float *)0x0) goto joined_r0x003b34d8;
  }
  else {
    uVar47 = 0;
    pfVar22 = pfVar17 + 1;
    do {
      fVar41 = pfVar22[-1];
      fVar48 = *pfVar22;
      plVar12 = (long *)(**(code **)(**(long **)(lVar21 + uVar47 * 8) + 8))();
      if ((plVar12 != (long *)0x0) && (sVar9 = (**(code **)(*plVar12 + 0x10))(), sVar9 == 0x22f)) {
        (**(code **)(plVar12[0x38] + 0x40))(plVar12 + 0x38,(int)fVar41,(int)fVar48);
      }
      lVar21 = *in_x2;
      uVar47 = uVar47 + 1;
      pfVar22 = pfVar22 + 2;
    } while (uVar47 < (ulong)(in_x2[1] - lVar21 >> 3));
  }
  operator_delete(pfVar17);
  pvVar16 = local_c0;
  puVar19 = local_b0;
joined_r0x003b34d8:
  while (puVar19 != (undefined8 *)0x0) {
    pvVar30 = (void *)*puVar19;
    local_c0 = pvVar16;
    operator_delete(puVar19);
    pvVar16 = local_c0;
    puVar19 = (undefined8 *)pvVar30;
  }
  local_c0 = (void *)0x0;
  if (pvVar16 != (void *)0x0) {
    operator_delete(pvVar16);
  }
  if (local_d8 != (int *)0x0) {
    local_d0 = local_d8;
    operator_delete(local_d8);
  }
  if (*(long *)(lVar4 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003b3564  FUN_003b3564 =====

void FUN_003b3564(long *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  uVar15 = param_1[1];
  uVar14 = (ulong)param_2;
  if (uVar15 != 0) {
    uVar17 = NEON_cnt(uVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar8 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x23 = uVar15 - 1 & uVar14;
    }
    else {
      unaff_x23 = uVar14;
      if (uVar15 <= uVar14) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar14 / uVar15;
        }
        unaff_x23 = uVar14 - uVar10 * uVar15;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar14) {
          if ((int)plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar15 - 1;
          }
          else if (uVar15 <= uVar10) {
            uVar6 = 0;
            if (uVar15 != 0) {
              uVar6 = uVar10 / uVar15;
            }
            uVar10 = uVar10 - uVar6 * uVar15;
          }
          if (uVar10 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x18);
  lVar4 = param_1[3];
  uVar1 = *param_3;
  fVar18 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar14;
  *(undefined4 *)(plVar7 + 2) = uVar1;
  *(undefined1 *)((long)plVar7 + 0x14) = 0;
  if ((uVar15 == 0) || (fVar18 * (float)uVar15 < (float)(lVar4 + 1))) {
    if (uVar15 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar8 = uVar8 | uVar15 << 1;
    uVar10 = (ulong)((float)(lVar4 + 1) / fVar18);
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
      uVar15 = param_1[1];
    }
    if (uVar15 < uVar8) {
LAB_003b36d4:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar3 = operator_new(uVar8 << 3);
      pvVar5 = (void *)*param_1;
      *param_1 = (long)pvVar3;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      uVar15 = 0;
      param_1[1] = uVar8;
      do {
        *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar8 != uVar15);
      plVar9 = (long *)param_1[2];
      uVar15 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar17 = NEON_cnt(uVar8,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar6 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        if (uVar6 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar13 * uVar8;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar9;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar6 < 2) {
              uVar13 = uVar13 & uVar8 - 1;
            }
            else if (uVar8 <= uVar13) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar2 * uVar8;
            }
            if (uVar13 != uVar10) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar9;
                uVar10 = uVar13;
              }
              else {
                *plVar9 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar9;
              }
            }
            plVar9 = plVar12;
            plVar12 = (long *)*plVar9;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar15) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar15 < 3) {
LAB_003b3908:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar17 = NEON_cnt(uVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16)) goto LAB_003b3908;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar15) {
        if (uVar8 != 0) goto LAB_003b36d4;
        pvVar3 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        param_1[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_1[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x23 = uVar15 - 1 & uVar14;
    }
    else {
      unaff_x23 = uVar14;
      if (uVar15 <= uVar14) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar14 / uVar15;
        }
        unaff_x23 = uVar14 - uVar8 * uVar15;
      }
    }
  }
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    lVar11 = *plVar9;
    *plVar9 = (long)plVar7;
    *plVar7 = lVar11;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_003b38e8;
    uVar14 = *(ulong *)(*plVar7 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar14 = uVar14 & uVar15 - 1;
    }
    else if (uVar15 <= uVar14) {
      uVar8 = 0;
      if (uVar15 != 0) {
        uVar8 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar8 * uVar15;
    }
    plVar9 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_003b38e8:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 003b3964  rive::ScrollVirtualizer::recycleItems =====

/* rive::ScrollVirtualizer::recycleItems(std::__ndk1::vector<int, std::__ndk1::allocator<int> >,
   std::__ndk1::vector<rive::LayoutNodeProvider*, std::__ndk1::allocator<rive::LayoutNodeProvider*>
   >&, int) */

void __thiscall
rive::ScrollVirtualizer::recycleItems
          (ScrollVirtualizer *this,undefined8 *param_2,long *param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  __less _Stack_69;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_4 != 0) {
    std::__ndk1::__sort<std::__ndk1::__less<int,int>&,int*>
              ((int *)*param_2,(int *)param_2[1],&_Stack_69);
    piVar1 = (int *)param_2[1];
    for (piVar8 = (int *)*param_2; piVar8 != piVar1; piVar8 = piVar8 + 1) {
      while( true ) {
        iVar9 = *piVar8;
        if (this[0xc] != (ScrollVirtualizer)0x0) {
          iVar7 = 0;
          if (param_4 != 0) {
            iVar7 = iVar9 / param_4;
          }
          iVar9 = iVar9 - iVar7 * param_4;
        }
        lVar5 = *param_3;
        if (param_3[1] == lVar5) break;
        uVar10 = 0;
        iVar7 = 0;
        while( true ) {
          plVar6 = *(long **)(lVar5 + uVar10 * 8);
          iVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
          plVar6 = (long *)(**(code **)(*plVar6 + 8))(plVar6);
          if (((plVar6 != (long *)0x0) && (sVar3 = (**(code **)(*plVar6 + 0x10))(), 0 < iVar4)) &&
             ((sVar3 == 0x22f && iVar9 < iVar7 + iVar4) && iVar7 <= iVar9)) break;
          lVar5 = *param_3;
          uVar10 = uVar10 + 1;
          iVar7 = iVar7 + iVar4;
          if ((ulong)(param_3[1] - lVar5 >> 3) <= uVar10) goto LAB_003b39c4;
        }
        (**(code **)(plVar6[0x38] + 0x38))(plVar6 + 0x38,iVar9 - iVar7);
        piVar8 = piVar8 + 1;
        if (piVar8 == piVar1) goto LAB_003b3a94;
      }
LAB_003b39c4:
    }
  }
LAB_003b3a94:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b3acc  rive::ScrollVirtualizer::getItemSize =====

/* rive::ScrollVirtualizer::getItemSize(rive::LayoutNodeProvider*, int, bool) */

float rive::ScrollVirtualizer::getItemSize(LayoutNodeProvider *param_1,int param_2,bool param_3)

{
  short sVar1;
  long *plVar2;
  long *plVar3;
  uint in_w3;
  float fVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  float in_s3;
  
  plVar3 = (long *)(ulong)(uint)param_2;
  plVar2 = (long *)(**(code **)(*plVar3 + 8))(plVar3);
  if ((plVar2 == (long *)0x0) || (sVar1 = (**(code **)(*plVar2 + 0x10))(), sVar1 != 0x22f)) {
    fVar5 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
    fVar4 = in_s3 - in_s1;
    if ((in_w3 & 1) != 0) {
      fVar4 = in_s2 - fVar5;
    }
  }
  else {
    fVar4 = (float)(**(code **)(plVar2[0x38] + 0x20))(plVar2 + 0x38,param_3);
    if ((in_w3 & 1) == 0) {
      fVar4 = in_s1;
    }
  }
  return fVar4;
}


// ===== 003b3b68  rive::TransformConstraint::targetTransform =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TransformConstraint::targetTransform() const */

void rive::TransformConstraint::targetTransform(void)

{
  long lVar1;
  long in_x0;
  undefined8 *in_x8;
  long lVar2;
  long lVar3;
  float fVar4;
  float in_s1;
  float fVar5;
  undefined8 uVar6;
  float in_s2;
  float in_s3;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)(**(code **)(**(long **)(in_x0 + 0x90) + 0xe8))();
  fVar4 = (float)NEON_fmadd(in_s2 - fVar4,*(undefined4 *)(in_x0 + 0xa0),fVar4);
  fVar5 = (float)NEON_fmadd(in_s3 - in_s1,*(undefined4 *)(in_x0 + 0xa4),in_s1);
  lVar2 = *(long *)(in_x0 + 0x90);
  fStack_48 = (float)_UNK_0024e5b8;
  fStack_44 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
  fStack_4c = (float)((ulong)_DAT_0024e5b0 >> 0x20);
  fVar7 = (float)*(undefined8 *)(lVar2 + 0xac);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar2 + 0xac) >> 0x20);
  fVar8 = (float)*(undefined8 *)(lVar2 + 0xa4);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar2 + 0xa4) >> 0x20);
  uVar6 = *(undefined8 *)(lVar2 + 0xb4);
  in_x8[1] = CONCAT44(fVar9 * fStack_44 + fStack_48 * fVar10,fVar7 * fStack_44 + fStack_48 * fVar8);
  *in_x8 = CONCAT44(fVar9 * fStack_4c + fVar10 * 1.0,fVar7 * fStack_4c + fVar8 * 1.0);
  in_x8[2] = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar9 * fVar5 + fVar10 * fVar4,
                      (float)uVar6 + fVar7 * fVar5 + fVar8 * fVar4);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b3c40  rive::TransformConstraint::originXChanged =====

/* rive::TransformConstraint::originXChanged() */

void __thiscall rive::TransformConstraint::originXChanged(TransformConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003b3c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003b3c4c  rive::TransformConstraint::originYChanged =====

/* rive::TransformConstraint::originYChanged() */

void __thiscall rive::TransformConstraint::originYChanged(TransformConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x003b3c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


// ===== 003b3c58  rive::TransformConstraint::constrain =====

/* rive::TransformConstraint::constrain(rive::TransformComponent*) */

void __thiscall
rive::TransformConstraint::constrain(TransformConstraint *this,TransformComponent *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(long **)(this + 0x90) != (long *)0x0) &&
     (uVar6 = (**(code **)(**(long **)(this + 0x90) + 0x80))(), (uVar6 & 1) == 0)) {
    (**(code **)(*(long *)this + 0xd8))(&local_60,this);
    if (*(int *)(this + 0x98) == 1) {
      plVar7 = *(long **)(*(long *)(this + 0x90) + 0x30);
      uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7,0x5b);
      pfVar1 = (float *)((long)plVar7 + 0xa4);
      if ((uVar6 & 1) == 0) {
        pfVar1 = (float *)0x686140;
      }
      fVar15 = *pfVar1;
      fVar11 = pfVar1[3];
      fVar8 = (float)*(undefined8 *)(pfVar1 + 1);
      fVar16 = -fVar8;
      fVar9 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
      fVar17 = (float)NEON_fmadd(fVar15,fVar11,fVar16 * fVar9);
      if (fVar17 == 0.0) goto LAB_003b3e74;
      fVar17 = 1.0 / fVar17;
      fVar18 = (float)*(undefined8 *)(pfVar1 + 4);
      fVar19 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      fVar12 = fVar11 * fVar17;
      fVar16 = fVar16 * fVar17;
      fVar13 = -fVar9 * fVar17;
      fVar14 = fVar15 * fVar17;
      uVar5 = NEON_rev64(CONCAT44(fVar19 * -fVar15,fVar18 * -fVar11),4);
      auVar10._4_4_ = fVar16;
      auVar10._0_4_ = fVar12;
      auVar10._8_4_ = fVar13;
      auVar10._12_4_ = fVar14;
      auVar4._4_4_ = fVar16;
      auVar4._0_4_ = fVar12;
      auVar4._8_4_ = fVar13;
      auVar4._12_4_ = fVar14;
      auVar10 = NEON_ext(auVar10,auVar4,8,1);
      uVar5 = NEON_rev64(CONCAT44(fVar17 * ((float)((ulong)uVar5 >> 0x20) + fVar19 * fVar9),
                                  fVar17 * ((float)uVar5 + fVar18 * fVar8)),4);
      fVar8 = fVar16 * local_50;
      fVar9 = local_60 * fVar16;
      fVar16 = fStack_58 * fVar16;
      local_60 = fVar13 * fStack_5c + local_60 * fVar12;
      fStack_5c = fVar14 * fStack_5c + fVar9;
      fStack_58 = fVar13 * fStack_54 + fStack_58 * fVar12;
      fStack_54 = fVar14 * fStack_54 + fVar16;
      local_50 = (float)uVar5 + auVar10._0_4_ * fStack_4c + fVar12 * local_50;
      fStack_4c = (float)((ulong)uVar5 >> 0x20) + auVar10._4_4_ * fStack_4c + fVar8;
    }
    if (*(int *)(this + 0x9c) == 1) {
      plVar7 = *(long **)(param_1 + 0x30);
      uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7,0x5b);
      puVar2 = (undefined8 *)((long)plVar7 + 0xa4);
      if ((uVar6 & 1) == 0) {
        puVar2 = (undefined8 *)0x686140;
      }
      fVar11 = (float)*puVar2;
      fVar9 = (float)((ulong)*puVar2 >> 0x20);
      fVar15 = (float)puVar2[1];
      fVar17 = (float)((ulong)puVar2[1] >> 0x20);
      fVar16 = fVar9 * local_50;
      fVar8 = local_60 * fVar9;
      fVar9 = fStack_58 * fVar9;
      local_60 = fVar15 * fStack_5c + local_60 * fVar11;
      fStack_5c = fVar17 * fStack_5c + fVar8;
      fStack_58 = fVar15 * fStack_54 + fStack_58 * fVar11;
      fStack_54 = fVar17 * fStack_54 + fVar9;
      local_50 = (float)puVar2[2] + fVar15 * fStack_4c + fVar11 * local_50;
      fStack_4c = (float)((ulong)puVar2[2] >> 0x20) + fVar17 * fStack_4c + fVar16;
    }
    local_80 = *(undefined8 *)(param_1 + 0xa4);
    uStack_78 = *(undefined8 *)(param_1 + 0xac);
    uStack_b8 = *(undefined8 *)(this + 0xb0);
    local_c0 = *(undefined8 *)(this + 0xa8);
    local_70 = *(undefined8 *)(param_1 + 0xb4);
    local_b0 = *(undefined8 *)(this + 0xb8);
    uStack_98 = CONCAT44(fStack_54,fStack_58);
    local_a0 = CONCAT44(fStack_5c,local_60);
    local_e0 = *(undefined8 *)(this + 0xc0);
    uStack_d8 = *(undefined8 *)(this + 200);
    local_90 = CONCAT44(fStack_4c,local_50);
    local_d0 = *(undefined8 *)(this + 0xd0);
    constrainWorld(param_1,&local_80,&local_c0,&local_a0,&local_e0);
  }
LAB_003b3e74:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b3ea0  rive::TransformConstraint::constrainWorld =====

/* rive::TransformConstraint::constrainWorld(rive::TransformComponent*, rive::Mat2D,
   rive::TransformComponents, rive::Mat2D, rive::TransformComponents, float) */

void rive::TransformConstraint::constrainWorld
               (float param_1_00,long param_1,float *param_3,undefined8 *param_4,float *param_5,
               undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  
  fVar8 = *param_3;
  fVar6 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar3 = 0.0;
  fVar7 = (float)NEON_fmadd(fVar8,fVar8,fVar6 * fVar6);
  fVar1 = 0.0;
  fVar4 = SQRT(fVar7);
  if (fVar4 != 0.0) {
    fVar1 = (float)NEON_fmadd(fVar8,fVar10,-(fVar9 * fVar6));
    fVar1 = fVar1 / fVar4;
  }
  fVar2 = atan2f(fVar6,fVar8);
  fVar6 = (float)NEON_fmadd(fVar8,fVar9,fVar6 * fVar10);
  fVar6 = atan2f(fVar6,fVar7);
  uVar5 = *(undefined8 *)(param_3 + 4);
  param_4[2] = CONCAT44(fVar6,fVar2);
  param_4[1] = CONCAT44(fVar1,fVar4);
  *param_4 = uVar5;
  fVar7 = *param_5;
  fVar4 = param_5[1];
  fVar8 = param_5[2];
  fVar9 = param_5[3];
  fVar6 = (float)NEON_fmadd(fVar7,fVar7,fVar4 * fVar4);
  fVar1 = SQRT(fVar6);
  if (fVar1 != 0.0) {
    fVar3 = (float)NEON_fmadd(fVar7,fVar9,-(fVar8 * fVar4));
    fVar3 = fVar3 / fVar1;
  }
  fVar10 = atan2f(fVar4,fVar7);
  fVar4 = (float)NEON_fmadd(fVar7,fVar8,fVar4 * fVar9);
  fVar4 = atan2f(fVar4,fVar6);
  uVar5 = *(undefined8 *)(param_5 + 4);
  *(float *)(param_6 + 2) = fVar10;
  *(float *)((long)param_6 + 0x14) = fVar4;
  param_6[1] = CONCAT44(fVar3,fVar1);
  *param_6 = uVar5;
  fVar6 = fmodf(*(float *)(param_4 + 2),6.2831855);
  fVar7 = fmodf(fVar10,6.2831855);
  fVar7 = fVar7 - fVar6;
  if (fVar7 == 3.1415927 || fVar7 < 3.1415927 != NAN(fVar7)) {
    if (-3.1415927 <= fVar7) goto LAB_003b4044;
    fVar8 = 6.2831855;
  }
  else {
    fVar8 = -6.2831855;
  }
  fVar7 = fVar7 + fVar8;
LAB_003b4044:
  fVar8 = 1.0;
  fVar6 = (float)NEON_fmadd(fVar7,param_1_00,fVar6);
  fVar7 = 1.0 - param_1_00;
  *(float *)(param_6 + 2) = fVar6;
  uVar5 = CONCAT44((float)((ulong)uVar5 >> 0x20) * param_1_00 +
                   (float)((ulong)*param_4 >> 0x20) * fVar7,
                   (float)uVar5 * param_1_00 + (float)*param_4 * fVar7);
  fVar1 = fVar1 * param_1_00 + (float)param_4[1] * fVar7;
  fVar3 = fVar3 * param_1_00 + (float)((ulong)param_4[1] >> 0x20) * fVar7;
  param_6[1] = CONCAT44(fVar3,fVar1);
  *param_6 = uVar5;
  fVar4 = (float)NEON_fmadd(*(undefined4 *)((long)param_4 + 0x14),fVar7,fVar4 * param_1_00);
  *(float *)((long)param_6 + 0x14) = fVar4;
  if (fVar6 == 0.0) {
    fStack_64 = 0.0;
  }
  else {
    sincosf(fVar6,&fStack_64,&local_68);
    fVar8 = local_68;
  }
  *(float *)(param_1 + 0xa4) = fVar8 * fVar1;
  *(float *)(param_1 + 0xa8) = fStack_64 * fVar1;
  fVar6 = (float)NEON_fmadd(fStack_64 * fVar1,fVar4,fVar8 * fVar3);
  fVar1 = (float)NEON_fmadd(fVar8 * fVar1,fVar4,-fStack_64 * fVar3);
  if (fVar4 == 0.0) {
    fVar1 = -fStack_64 * fVar3;
    fVar6 = fVar8 * fVar3;
  }
  *(float *)(param_1 + 0xac) = fVar1;
  *(float *)(param_1 + 0xb0) = fVar6;
  *(undefined8 *)(param_1 + 0xb4) = uVar5;
  return;
}


// ===== 003b40f8  FUN_003b40f8 =====

void FUN_003b40f8(long *param_1)

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


// ===== 003b4164  FUN_003b4164 =====

undefined8 FUN_003b4164(void)

{
  return 0x53;
}


// ===== 003b416c  FUN_003b416c =====

bool FUN_003b416c(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x4f;
  if ((uVar1 < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0x813U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 10;
}


// ===== 003b41a0  FUN_003b41a0 =====

undefined8 FUN_003b41a0(long param_1,ushort param_2,long *param_3)

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
  
  if (param_2 < 0x174) {
    if (param_2 == 0xb3) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003b42e4;
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
LAB_003b42e4:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x98) = (int)uVar4;
      return 1;
    }
    if (param_2 == 0xb4) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003b42c8;
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
LAB_003b42c8:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x9c) = (int)uVar4;
      return 1;
    }
LAB_003b4244:
    uVar3 = FUN_003b4320();
    return uVar3;
  }
  if (param_2 == 0x175) {
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
    *(undefined4 *)(param_1 + 0xa4) = uVar10;
  }
  else {
    if (param_2 != 0x174) goto LAB_003b4244;
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
    *(undefined4 *)(param_1 + 0xa0) = uVar10;
  }
  param_3[2] = (long)puVar5;
  return 1;
}


// ===== 003b4320  FUN_003b4320 =====

undefined8 FUN_003b4320(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0xac) {
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003b44cc;
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
LAB_003b44cc:
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
      if (param_2 != 5) goto LAB_003b4514;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003b4498;
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
LAB_003b4498:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 == 0xac) {
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
      goto LAB_003b4514;
    }
    if (param_2 != 0xad) goto LAB_003b4514;
    uVar14 = 0;
    uVar6 = 0;
    pbVar11 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003b44b0;
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
LAB_003b44b0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x8c) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003b4514:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b453c  FUN_003b453c =====

void FUN_003b453c(void)

{
  return;
}


// ===== 003b4540  FUN_003b4540 =====

undefined8 FUN_003b4540(void)

{
  return 1;
}


// ===== 003b4548  FUN_003b4548 =====

void FUN_003b4548(void)

{
  return;
}


// ===== 003b454c  FUN_003b454c =====

void FUN_003b454c(void)

{
  return;
}


// ===== 003b4550  rive::TargetedConstraint::validate =====

/* rive::TargetedConstraint::validate(rive::CoreContext*) */

byte __thiscall rive::TargetedConstraint::validate(TargetedConstraint *this,CoreContext *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
  if (((plVar2 == (long *)0x0) ||
      (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0xb), (uVar3 & 1) == 0)) ||
     ((plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x8c))
      , plVar2 != (long *)0x0 &&
      (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x26), (uVar3 & 1) == 0)))) {
    bVar1 = 0;
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0xb0))(this);
    bVar1 = plVar2 != (long *)0x0 | bVar1 ^ 1;
  }
  return bVar1 & 1;
}


// ===== 003b45fc  rive::TargetedConstraint::onAddedDirty =====

/* rive::TargetedConstraint::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::TargetedConstraint::onAddedDirty(TargetedConstraint *this,CoreContext *param_1)

{
  TargetedConstraint *pTVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pTVar1 = (TargetedConstraint *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TargetedConstraint *)(param_1 + -0x998);
  }
  *(TargetedConstraint **)(this + 0x40) = pTVar1;
  *(TargetedConstraint **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
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
    lVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x8c));
    uVar3 = (**(code **)(*(long *)this + 0xb0))(this);
    if ((lVar5 == 0) && ((uVar3 & 1) != 0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      *(long *)(this + 0x90) = lVar5;
    }
  }
  return uVar4;
}


// ===== 003b46cc  rive::TargetedConstraint::buildDependencies =====

/* rive::TargetedConstraint::buildDependencies() */

void __thiscall rive::TargetedConstraint::buildDependencies(TargetedConstraint *this)

{
  if (*(Component **)(this + 0x90) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x90),*(Component **)(this + 0x30));
    return;
  }
  return;
}


// ===== 003b46e4  FUN_003b46e4 =====

void FUN_003b46e4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3b46e8);
  (*pcVar1)();
}


// ===== 003b46e8  FUN_003b46e8 =====

undefined8 FUN_003b46e8(void)

{
  return 0x50;
}


// ===== 003b46f0  FUN_003b46f0 =====

bool FUN_003b46f0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x4f < 2 || (param_2 & 0xffff) == 10;
}


// ===== 003b4710  rive::ContainerComponent::addChild =====

/* rive::ContainerComponent::addChild(rive::Component*) */

void __thiscall rive::ContainerComponent::addChild(ContainerComponent *this,Component *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x90);
  if (puVar10 < *(undefined8 **)(this + 0x98)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003b4850;
  }
  puVar9 = *(undefined8 **)(this + 0x88);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003ad240();
LAB_003b4870:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x98) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003b4870;
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
      if (uVar6 == uVar7) goto LAB_003b483c;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x88);
  }
LAB_003b483c:
  *(undefined8 **)(this + 0x88) = puVar4;
  *(undefined8 **)(this + 0x90) = puVar13;
  *(void **)(this + 0x98) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003b4850:
  *(undefined8 **)(this + 0x90) = puVar13;
  return;
}


// ===== 003b4874  rive::ContainerComponent::collapse =====

/* rive::ContainerComponent::collapse(bool) */

uint __thiscall rive::ContainerComponent::collapse(ContainerComponent *this,bool param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar2 = Component::collapse((Component *)this,param_1);
  if ((uVar2 & 1) != 0) {
    puVar1 = *(undefined8 **)(this + 0x90);
    for (puVar3 = *(undefined8 **)(this + 0x88); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x60))((long *)*puVar3,param_1);
    }
  }
  return uVar2 & 1;
}


// ===== 003b48d4  rive::ContainerComponent::forAll =====

/* rive::ContainerComponent::forAll(std::__ndk1::function<bool (rive::Component*)>) */

uint __thiscall rive::ContainerComponent::forAll(ContainerComponent *this,long *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ContainerComponent *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_2[4];
  local_78 = this;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00338fb0();
  }
  uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_78);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)param_2[4];
    if (plVar3 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else if (plVar3 == param_2) {
      local_50 = local_70;
      (**(code **)(*param_2 + 0x18))(param_2,local_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
    }
    forEachChild(this,local_70);
    if (local_50 == local_70) {
      lVar4 = 4;
      plVar3 = local_70;
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_003b49a8;
      lVar4 = 5;
      plVar3 = local_50;
    }
    (**(code **)(*plVar3 + lVar4 * 8))();
  }
LAB_003b49a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b49d8  rive::ContainerComponent::forEachChild =====

/* rive::ContainerComponent::forEachChild(std::__ndk1::function<bool (rive::Component*)>) */

void __thiscall rive::ContainerComponent::forEachChild(ContainerComponent *this,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ContainerComponent *pCVar6;
  undefined8 *puVar7;
  ContainerComponent *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar7 = *(undefined8 **)(this + 0x88);
  puVar1 = *(undefined8 **)(this + 0x90);
  if (puVar7 != puVar1) {
    do {
      pCVar6 = (ContainerComponent *)*puVar7;
      plVar3 = (long *)param_2[4];
      local_88 = pCVar6;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00338fb0();
      }
      uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = (**(code **)(*(long *)pCVar6 + 0x18))(pCVar6,0xb), (uVar4 & 1) != 0)) {
        plVar3 = (long *)param_2[4];
        if (plVar3 == (long *)0x0) {
          local_60 = (long *)0x0;
        }
        else if (plVar3 == param_2) {
          local_60 = local_80;
          (**(code **)(*param_2 + 0x18))(param_2,local_80);
        }
        else {
          local_60 = (long *)(**(code **)(*plVar3 + 0x10))();
        }
        forEachChild(pCVar6,local_80);
        if (local_60 == local_80) {
          plVar3 = local_80;
          lVar5 = 4;
        }
        else {
          if (local_60 == (long *)0x0) goto LAB_003b4a28;
          lVar5 = 5;
          plVar3 = local_60;
        }
        (**(code **)(*plVar3 + lVar5 * 8))();
      }
LAB_003b4a28:
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b4b0c  FUN_003b4b0c =====

void FUN_003b4b0c(long *param_1)

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


// ===== 003b4b98  FUN_003b4b98 =====

undefined8 FUN_003b4b98(void)

{
  return 0xb;
}


// ===== 003b4ba0  FUN_003b4ba0 =====

bool FUN_003b4ba0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffe) == 10;
}


// ===== 003b4bb0  rive::BinaryDataReader::BinaryDataReader =====

/* rive::BinaryDataReader::BinaryDataReader(unsigned char*, unsigned long) */

void __thiscall
rive::BinaryDataReader::BinaryDataReader(BinaryDataReader *this,uchar *param_1,ulong param_2)

{
  this[0x10] = (BinaryDataReader)0x0;
  *(uchar **)this = param_1;
  *(uchar **)(this + 8) = param_1 + param_2;
  *(ulong *)(this + 0x18) = param_2;
  return;
}


// ===== 003b4bc4  rive::BinaryDataReader::lengthInBytes =====

/* rive::BinaryDataReader::lengthInBytes() const */

undefined8 __thiscall rive::BinaryDataReader::lengthInBytes(BinaryDataReader *this)

{
  return *(undefined8 *)(this + 0x18);
}


// ===== 003b4bcc  rive::BinaryDataReader::didOverflow =====

/* rive::BinaryDataReader::didOverflow() const */

BinaryDataReader __thiscall rive::BinaryDataReader::didOverflow(BinaryDataReader *this)

{
  return this[0x10];
}


// ===== 003b4bd4  rive::BinaryDataReader::overflow =====

/* rive::BinaryDataReader::overflow() */

void __thiscall rive::BinaryDataReader::overflow(BinaryDataReader *this)

{
  this[0x10] = (BinaryDataReader)0x1;
  *(undefined8 *)this = *(undefined8 *)(this + 8);
  return;
}


// ===== 003b4be8  rive::BinaryDataReader::readVarUint =====

/* rive::BinaryDataReader::readVarUint() */

ulong __thiscall rive::BinaryDataReader::readVarUint(BinaryDataReader *this)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = *(byte **)this;
  do {
    if (*(byte **)(this + 8) <= pbVar4) {
      *(byte **)this = *(byte **)(this + 8);
      this[0x10] = (BinaryDataReader)0x1;
      return 0;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  *(byte **)this = pbVar5;
  return uVar3;
}


// ===== 003b4c38  rive::BinaryDataReader::readVarUint32 =====

/* rive::BinaryDataReader::readVarUint32() */

uint __thiscall rive::BinaryDataReader::readVarUint32(BinaryDataReader *this)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = *(byte **)this;
  do {
    if (*(byte **)(this + 8) <= pbVar4) {
      *(byte **)this = *(byte **)(this + 8);
      this[0x10] = (BinaryDataReader)0x1;
      return 0;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x1f;
    uVar6 = (uVar6 & 0xff) + 7;
    uVar3 = (bVar1 & 0x7f) << (ulong)uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  *(byte **)this = pbVar5;
  return uVar3;
}


// ===== 003b4c88  rive::BinaryDataReader::readFloat64 =====

/* rive::BinaryDataReader::readFloat64() */

undefined1  [16] __thiscall rive::BinaryDataReader::readFloat64(BinaryDataReader *this)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = *(ulong **)this;
  if ((ulong)(*(long *)(this + 8) - (long)puVar1) < 8) {
    *(long *)this = *(long *)(this + 8);
    this[0x10] = (BinaryDataReader)0x1;
    return ZEXT816(0);
  }
  auVar2._0_8_ = *puVar1;
  *(ulong **)this = puVar1 + 1;
  auVar2._8_8_ = 0;
  return auVar2;
}


// ===== 003b4cb8  rive::BinaryDataReader::readFloat32 =====

/* rive::BinaryDataReader::readFloat32() */

undefined4 __thiscall rive::BinaryDataReader::readFloat32(BinaryDataReader *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)this;
  if (*(long *)(this + 8) - (long)puVar1 < 4) {
    *(long *)this = *(long *)(this + 8);
    this[0x10] = (BinaryDataReader)0x1;
    return 0;
  }
  uVar2 = *puVar1;
  *(undefined4 **)this = puVar1 + 1;
  return uVar2;
}


// ===== 003b4ce8  rive::BinaryDataReader::readByte =====

/* rive::BinaryDataReader::readByte() */

undefined1 __thiscall rive::BinaryDataReader::readByte(BinaryDataReader *this)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)this;
  if (0 < *(long *)(this + 8) - (long)puVar1) {
    *(undefined1 **)this = puVar1 + 1;
    return *puVar1;
  }
  *(long *)this = *(long *)(this + 8);
  this[0x10] = (BinaryDataReader)0x1;
  return 0;
}


// ===== 003b4d1c  rive::BinaryDataReader::readUint32 =====

/* rive::BinaryDataReader::readUint32() */

undefined4 __thiscall rive::BinaryDataReader::readUint32(BinaryDataReader *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)this;
  if (*(long *)(this + 8) - (long)puVar1 < 4) {
    *(long *)this = *(long *)(this + 8);
    this[0x10] = (BinaryDataReader)0x1;
    return 0;
  }
  uVar2 = *puVar1;
  *(undefined4 **)this = puVar1 + 1;
  return uVar2;
}


// ===== 003b4d50  rive::BinaryDataReader::readString =====

/* rive::BinaryDataReader::readString() */

void rive::BinaryDataReader::readString(void)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  ulong *in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  uVar8 = 0;
  uVar13 = 0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar5 = (byte *)*in_x0;
  do {
    if ((byte *)in_x0[1] <= pbVar5) {
      *in_x0 = in_x0[1];
      *(undefined1 *)(in_x0 + 2) = 1;
      goto LAB_003b4e2c;
    }
    pbVar6 = pbVar5 + 1;
    bVar2 = *pbVar5;
    uVar9 = uVar8 & 0x3f;
    uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
    uVar13 = ((ulong)bVar2 & 0x7f) << uVar9 | uVar13;
    pbVar5 = pbVar6;
  } while ((char)bVar2 < '\0');
  *in_x0 = (ulong)pbVar6;
  if ((char)in_x0[2] != '\0') {
LAB_003b4e2c:
    if (*(long *)(lVar3 + 0x28) == local_48) {
      *(undefined8 *)in_x8 = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
      *(undefined8 *)(in_x8 + 0x10) = 0;
      return;
    }
    goto LAB_003b4f64;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (char *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)&local_60,(char)uVar13);
  pcVar7 = (char *)*in_x0;
  pcVar1 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar1 = local_50;
  }
  if ((char *)in_x0[1] < pcVar7 + uVar13) {
    if (uVar13 == 0) goto LAB_003b4f14;
    *in_x0 = in_x0[1];
    *(undefined1 *)(in_x0 + 2) = 1;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    *(undefined8 *)in_x8 = 0;
joined_r0x003b4f44:
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    if (uVar13 != 0) {
      uVar8 = 0;
      if ((7 < uVar13) && (0x1f < (ulong)((long)pcVar1 - (long)pcVar7))) {
        if (uVar13 < 0x20) {
          uVar9 = 0;
LAB_003b4ec0:
          uVar8 = uVar13 & 0xfffffffffffffff8;
          lVar11 = uVar9 - uVar8;
          pcVar10 = pcVar1 + uVar9;
          pcVar12 = pcVar7 + uVar9;
          do {
            lVar11 = lVar11 + 8;
            *(undefined8 *)pcVar10 = *(undefined8 *)pcVar12;
            pcVar10 = pcVar10 + 8;
            pcVar12 = pcVar12 + 8;
          } while (lVar11 != 0);
          if (uVar13 == uVar8) goto LAB_003b4f08;
        }
        else {
          uVar8 = uVar13 & 0xffffffffffffffe0;
          pcVar10 = pcVar1 + 0x10;
          pcVar12 = pcVar7 + 0x10;
          uVar9 = uVar8;
          do {
            pcVar4 = pcVar12 + -8;
            uVar14 = *(undefined8 *)(pcVar12 + -0x10);
            uVar16 = *(undefined8 *)(pcVar12 + 8);
            uVar15 = *(undefined8 *)pcVar12;
            uVar9 = uVar9 - 0x20;
            pcVar12 = pcVar12 + 0x20;
            *(undefined8 *)(pcVar10 + -8) = *(undefined8 *)pcVar4;
            *(undefined8 *)(pcVar10 + -0x10) = uVar14;
            *(undefined8 *)(pcVar10 + 8) = uVar16;
            *(undefined8 *)pcVar10 = uVar15;
            pcVar10 = pcVar10 + 0x20;
          } while (uVar9 != 0);
          if (uVar13 == uVar8) goto LAB_003b4f08;
          uVar9 = uVar8;
          if ((uVar13 & 0x18) != 0) goto LAB_003b4ec0;
        }
        pcVar7 = pcVar7 + uVar8;
      }
      lVar11 = uVar13 - uVar8;
      pcVar10 = pcVar1 + uVar8;
      do {
        lVar11 = lVar11 + -1;
        *pcVar10 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + 1;
      } while (lVar11 != 0);
    }
LAB_003b4f08:
    pcVar1[uVar13] = '\0';
    pcVar7 = (char *)*in_x0;
LAB_003b4f14:
    *in_x0 = (ulong)(pcVar7 + uVar13);
    if ((local_60 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(in_x8,local_50,uStack_58);
      goto joined_r0x003b4f44;
    }
    *(ulong *)(in_x8 + 8) = uStack_58;
    *(ulong *)in_x8 = local_60;
    *(char **)(in_x8 + 0x10) = local_50;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_003b4f64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b4f68  rive::BinaryDataReader::complete =====

/* rive::BinaryDataReader::complete(unsigned char*, unsigned long) */

void __thiscall
rive::BinaryDataReader::complete(BinaryDataReader *this,uchar *param_1,ulong param_2)

{
  *(ulong *)(this + 0x18) = param_2;
  *(uchar **)this = param_1;
  *(uchar **)(this + 8) = param_1 + param_2;
  return;
}


// ===== 003b4f78  rive::BinaryDataReader::reset =====

/* rive::BinaryDataReader::reset(unsigned char*) */

void __thiscall rive::BinaryDataReader::reset(BinaryDataReader *this,uchar *param_1)

{
  *(uchar **)this = param_1;
  return;
}


// ===== 003b4f80  rive::BinaryWriter::BinaryWriter =====

/* rive::BinaryWriter::BinaryWriter(rive::BinaryStream*) */

void __thiscall rive::BinaryWriter::BinaryWriter(BinaryWriter *this,BinaryStream *param_1)

{
  *(BinaryStream **)this = param_1;
  return;
}


// ===== 003b4f88  rive::BinaryWriter::~BinaryWriter =====

/* rive::BinaryWriter::~BinaryWriter() */

void __thiscall rive::BinaryWriter::~BinaryWriter(BinaryWriter *this)

{
                    /* WARNING: Could not recover jumptable at 0x003b4f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 8))();
  return;
}


// ===== 003b4f98  rive::BinaryWriter::write =====

/* rive::BinaryWriter::write(float) */

void __thiscall rive::BinaryWriter::write(BinaryWriter *this,float param_1)

{
  long lVar1;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b4ff4  rive::BinaryWriter::writeFloat =====

/* rive::BinaryWriter::writeFloat(float) */

void __thiscall rive::BinaryWriter::writeFloat(BinaryWriter *this,float param_1)

{
  long lVar1;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b5050  rive::BinaryWriter::write =====

/* rive::BinaryWriter::write(double) */

void __thiscall rive::BinaryWriter::write(BinaryWriter *this,double param_1)

{
  long lVar1;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,&local_30,8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b50ac  rive::BinaryWriter::writeVarUint =====

/* rive::BinaryWriter::writeVarUint(unsigned long) */

void __thiscall rive::BinaryWriter::writeVarUint(BinaryWriter *this,ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    local_38[uVar4] = (byte)param_1 & 0x7f | (0x7f < param_1) << 7;
    bVar1 = 0x7f < param_1;
    param_1 = param_1 >> 7;
    uVar4 = uVar2;
  } while (bVar1);
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b5130  rive::BinaryWriter::writeVarUint =====

/* rive::BinaryWriter::writeVarUint(unsigned int) */

void __thiscall rive::BinaryWriter::writeVarUint(BinaryWriter *this,uint param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    local_38[uVar4] = (byte)param_1 & 0x7f | (0x7f < param_1) << 7;
    bVar1 = 0x7f < param_1;
    uVar4 = uVar2;
    param_1 = param_1 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b51b4  rive::BinaryWriter::write =====

/* rive::BinaryWriter::write(unsigned char const*, unsigned long) */

void __thiscall rive::BinaryWriter::write(BinaryWriter *this,uchar *param_1,ulong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b51c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)this)();
    return;
  }
  return;
}


// ===== 003b51cc  rive::BinaryWriter::writeDouble =====

/* rive::BinaryWriter::writeDouble(double) */

void __thiscall rive::BinaryWriter::writeDouble(BinaryWriter *this,double param_1)

{
  long lVar1;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,&local_30,8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b5228  rive::BinaryWriter::write =====

/* rive::BinaryWriter::write(unsigned char) */

void __thiscall rive::BinaryWriter::write(BinaryWriter *this,uchar param_1)

{
  long lVar1;
  uchar local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = param_1;
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,local_2c,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b5284  rive::BinaryWriter::write =====

/* rive::BinaryWriter::write(unsigned short) */

void __thiscall rive::BinaryWriter::write(BinaryWriter *this,ushort param_1)

{
  long lVar1;
  ushort local_2c [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = param_1;
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b52e0  rive::BinaryWriter::write =====

/* rive::BinaryWriter::write(unsigned int) */

void __thiscall rive::BinaryWriter::write(BinaryWriter *this,uint param_1)

{
  long lVar1;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b533c  rive::BinaryWriter::write =====

/* rive::BinaryWriter::write(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall rive::BinaryWriter::write(BinaryWriter *this,byte *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte local_48 [16];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar5 = 0;
  uVar7 = (ulong)(*param_2 >> 1);
  uVar3 = uVar7;
  if ((*param_2 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
    uVar3 = *(ulong *)(param_2 + 8);
  }
  do {
    uVar2 = uVar5 + 1;
    local_48[uVar5] = (byte)uVar7 & 0x7f | (0x7f < uVar7) << 7;
    bVar1 = 0x7f < uVar7;
    uVar5 = uVar2;
    uVar7 = uVar7 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)this)(*(undefined8 **)this,local_48,uVar2 & 0xffffffff);
  if (uVar3 != 0) {
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    (**(code **)**(undefined8 **)this)(*(undefined8 **)this,pbVar6,uVar3);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003b5410  rive::BinaryWriter::clear =====

/* rive::BinaryWriter::clear() */

void __thiscall rive::BinaryWriter::clear(BinaryWriter *this)

{
                    /* WARNING: Could not recover jumptable at 0x003b541c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x10))();
  return;
}


// ===== 003b5420  rive::CoreBoolType::deserialize =====

/* rive::CoreBoolType::deserialize(rive::BinaryReader&) */

bool rive::CoreBoolType::deserialize(BinaryReader *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if (0 < (*(long *)param_1 + *(long *)(param_1 + 8)) - (long)pcVar1) {
    *(char **)(param_1 + 0x10) = pcVar1 + 1;
    return *pcVar1 == '\x01';
  }
  *(long *)(param_1 + 0x10) = *(long *)param_1 + *(long *)(param_1 + 8);
  param_1[0x18] = (BinaryReader)0x1;
  return false;
}


// ===== 003b5464  rive::BinaryReader::BinaryReader =====

/* rive::BinaryReader::BinaryReader(rive::Span<unsigned char const>) */

void __thiscall
rive::BinaryReader::BinaryReader(BinaryReader *this,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = param_2;
  *(undefined2 *)(this + 0x18) = 0;
  return;
}


// ===== 003b5474  rive::BinaryReader::reachedEnd =====

/* rive::BinaryReader::reachedEnd() const */

bool __thiscall rive::BinaryReader::reachedEnd(BinaryReader *this)

{
  if (*(long *)(this + 0x10) == *(long *)this + *(long *)(this + 8) ||
      this[0x18] != (BinaryReader)0x0) {
    return true;
  }
  return this[0x19] != (BinaryReader)0x0;
}


// ===== 003b54a8  rive::BinaryReader::didOverflow =====

/* rive::BinaryReader::didOverflow() const */

BinaryReader __thiscall rive::BinaryReader::didOverflow(BinaryReader *this)

{
  return this[0x18];
}


// ===== 003b54b0  rive::BinaryReader::didIntRangeError =====

/* rive::BinaryReader::didIntRangeError() const */

BinaryReader __thiscall rive::BinaryReader::didIntRangeError(BinaryReader *this)

{
  return this[0x19];
}


// ===== 003b54b8  rive::BinaryReader::lengthInBytes =====

/* rive::BinaryReader::lengthInBytes() const */

undefined8 __thiscall rive::BinaryReader::lengthInBytes(BinaryReader *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 003b54c0  rive::BinaryReader::position =====

/* rive::BinaryReader::position() const */

undefined8 __thiscall rive::BinaryReader::position(BinaryReader *this)

{
  return *(undefined8 *)(this + 0x10);
}


// ===== 003b54c8  rive::BinaryReader::overflow =====

/* rive::BinaryReader::overflow() */

void __thiscall rive::BinaryReader::overflow(BinaryReader *this)

{
  this[0x18] = (BinaryReader)0x1;
  *(long *)(this + 0x10) = *(long *)this + *(long *)(this + 8);
  return;
}


// ===== 003b54e0  rive::BinaryReader::intRangeError =====

/* rive::BinaryReader::intRangeError() */

void __thiscall rive::BinaryReader::intRangeError(BinaryReader *this)

{
  this[0x19] = (BinaryReader)0x1;
  *(long *)(this + 0x10) = *(long *)this + *(long *)(this + 8);
  return;
}


// ===== 003b54f8  rive::BinaryReader::readVarUint64 =====

/* rive::BinaryReader::readVarUint64() */

ulong __thiscall rive::BinaryReader::readVarUint64(BinaryReader *this)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar4 = 0;
  uVar3 = 0;
  pbVar5 = *(byte **)(this + 0x10);
  do {
    if ((byte *)(*(long *)this + *(long *)(this + 8)) <= pbVar5) {
      *(byte **)(this + 0x10) = (byte *)(*(long *)this + *(long *)(this + 8));
      this[0x18] = (BinaryReader)0x1;
      return 0;
    }
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)(((uint)uVar4 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar5 = pbVar6;
  } while ((char)bVar1 < '\0');
  *(byte **)(this + 0x10) = pbVar6;
  return uVar3;
}


// ===== 003b5550  rive::BinaryReader::readString =====

/* WARNING: Removing unreachable block (ram,0x003b56d0) */
/* rive::BinaryReader::readString(unsigned long) */

void rive::BinaryReader::readString(ulong param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong in_x1;
  long *in_x8;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  undefined1 *__s;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = in_x1 + 1;
  if (in_x1 == 0xffffffffffffffff) {
    puVar5 = *(undefined1 **)(param_1 + 0x10);
    puVar1 = (undefined1 *)(*(long *)param_1 + *(long *)(param_1 + 8));
    puVar4 = puVar5 + -1;
    if (puVar1 < puVar4) {
      *(undefined1 **)(param_1 + 0x10) = puVar1;
      *(undefined1 *)(param_1 + 0x18) = 1;
      in_x8[1] = 0;
      in_x8[2] = 0;
      *in_x8 = 0;
      return;
    }
    __s = (undefined1 *)0x0;
    uVar6 = 0;
    if (puVar5 + 0x1f < (undefined1 *)0x20) {
LAB_003b56d4:
      do {
        __s[uVar6] = *puVar5;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (in_x1 != uVar6);
    }
    else {
LAB_003b565c:
      uVar6 = 0;
      uVar7 = in_x1 & 0xffffffffffffffe0;
      do {
        puVar2 = (undefined8 *)(puVar5 + uVar6);
        puVar3 = (undefined8 *)(__s + uVar6);
        uVar6 = uVar6 + 0x20;
        uVar8 = *puVar2;
        uVar10 = puVar2[3];
        uVar9 = puVar2[2];
        puVar3[1] = puVar2[1];
        *puVar3 = uVar8;
        puVar3[3] = uVar10;
        puVar3[2] = uVar9;
      } while (uVar7 != uVar6);
      if (uVar7 != in_x1) {
        uVar6 = uVar7;
        if ((in_x1 & 0x18) != 0) {
LAB_003b5690:
          uVar6 = in_x1 & 0xfffffffffffffff8;
          do {
            *(undefined8 *)(__s + uVar7) = *(undefined8 *)(puVar5 + uVar7);
            uVar7 = uVar7 + 8;
          } while (uVar6 != uVar7);
          if (uVar6 == in_x1) goto LAB_003b56e8;
        }
        puVar5 = puVar5 + uVar6;
        goto LAB_003b56d4;
      }
    }
LAB_003b56e8:
    __s[in_x1] = 0;
    *(undefined1 **)(param_1 + 0x10) = puVar4;
    if (0xffffffffffffffef < in_x1) {
LAB_003b575c:
                    /* WARNING: Subroutine does not return */
      FUN_0031faf0();
    }
    if (in_x1 < 0x17) {
      __dest = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)in_x1 << 1);
      if (in_x1 == 0) goto LAB_003b573c;
    }
    else {
      __dest = operator_new((in_x1 | 0xf) + 1);
      in_x8[1] = in_x1;
      in_x8[2] = (long)__dest;
      *in_x8 = (in_x1 | 0xf) + 2;
    }
    memcpy(__dest,__s,in_x1);
  }
  else {
    if ((long)uVar6 < 0) {
      FUN_003b5764();
      goto LAB_003b575c;
    }
    __s = (undefined1 *)operator_new(uVar6);
    memset(__s,0,uVar6);
    puVar5 = *(undefined1 **)(param_1 + 0x10);
    puVar1 = (undefined1 *)(*(long *)param_1 + *(long *)(param_1 + 8));
    puVar4 = puVar5 + in_x1;
    if (puVar1 < puVar4) {
      if (in_x1 != 0) {
        *(undefined1 **)(param_1 + 0x10) = puVar1;
        *(undefined1 *)(param_1 + 0x18) = 1;
        in_x8[1] = 0;
        in_x8[2] = 0;
        *in_x8 = 0;
        goto LAB_003b5740;
      }
    }
    else {
      if (in_x1 != 0) {
        uVar6 = 0;
        if ((7 < in_x1) && (0x1f < (ulong)((long)__s - (long)puVar5))) {
          if (0x1f < in_x1) goto LAB_003b565c;
          uVar7 = 0;
          goto LAB_003b5690;
        }
        goto LAB_003b56d4;
      }
      *__s = 0;
    }
    *(undefined1 **)(param_1 + 0x10) = puVar4;
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)in_x1 << 1);
  }
LAB_003b573c:
  *(undefined1 *)((long)__dest + in_x1) = 0;
LAB_003b5740:
  operator_delete(__s);
  return;
}


// ===== 003b5764  FUN_003b5764 =====

void FUN_003b5764(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003b5778  rive::BinaryReader::readString =====

/* rive::BinaryReader::readString() */

void rive::BinaryReader::readString(void)

{
  char cVar1;
  long *in_x0;
  undefined8 *in_x8;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)in_x0[2];
  do {
    if ((char *)(*in_x0 + in_x0[1]) <= pcVar2) {
      in_x0[2] = *in_x0 + in_x0[1];
      *(undefined1 *)(in_x0 + 3) = 1;
      goto LAB_003b57cc;
    }
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 < '\0');
  in_x0[2] = (long)pcVar3;
  if ((char)in_x0[3] == '\0') {
    readString((ulong)in_x0);
    return;
  }
LAB_003b57cc:
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 003b57d8  rive::BinaryReader::readBytes =====

/* rive::BinaryReader::readBytes() */

undefined1  [16] __thiscall rive::BinaryReader::readBytes(BinaryReader *this)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar7 = 0;
  uVar4 = 0;
  pbVar1 = (byte *)(*(long *)this + *(long *)(this + 8));
  pbVar5 = *(byte **)(this + 0x10);
  do {
    if (pbVar1 <= pbVar5) {
      *(byte **)(this + 0x10) = pbVar1;
      this[0x18] = (BinaryReader)0x1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = pbVar1;
      return auVar9;
    }
    pbVar6 = pbVar5 + 1;
    bVar2 = *pbVar5;
    uVar3 = uVar7 & 0x3f;
    uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
    uVar4 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar4;
    pbVar5 = pbVar6;
  } while ((char)bVar2 < '\0');
  if (this[0x18] != (BinaryReader)0x0) {
    uVar4 = 0;
  }
  *(byte **)(this + 0x10) = pbVar6 + uVar4;
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = pbVar6;
  return auVar8;
}


// ===== 003b5844  rive::BinaryReader::readBytes =====

/* rive::BinaryReader::readBytes(unsigned long) */

void __thiscall rive::BinaryReader::readBytes(BinaryReader *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}


// ===== 003b5858  rive::BinaryReader::readFloat32 =====

/* rive::BinaryReader::readFloat32() */

undefined4 __thiscall rive::BinaryReader::readFloat32(BinaryReader *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(this + 0x10);
  if ((*(long *)this + *(long *)(this + 8)) - (long)puVar1 < 4) {
    *(long *)(this + 0x10) = *(long *)this + *(long *)(this + 8);
    this[0x18] = (BinaryReader)0x1;
    return 0;
  }
  uVar2 = *puVar1;
  *(undefined4 **)(this + 0x10) = puVar1 + 1;
  return uVar2;
}


// ===== 003b5890  rive::BinaryReader::readByte =====

/* rive::BinaryReader::readByte() */

undefined1 __thiscall rive::BinaryReader::readByte(BinaryReader *this)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(this + 0x10);
  if (0 < (*(long *)this + *(long *)(this + 8)) - (long)puVar1) {
    *(undefined1 **)(this + 0x10) = puVar1 + 1;
    return *puVar1;
  }
  *(long *)(this + 0x10) = *(long *)this + *(long *)(this + 8);
  this[0x18] = (BinaryReader)0x1;
  return 0;
}


// ===== 003b58cc  rive::BinaryReader::readUint16 =====

/* rive::BinaryReader::readUint16() */

undefined2 __thiscall rive::BinaryReader::readUint16(BinaryReader *this)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(this + 0x10);
  if ((*(long *)this + *(long *)(this + 8)) - (long)puVar2 < 2) {
    *(long *)(this + 0x10) = *(long *)this + *(long *)(this + 8);
    this[0x18] = (BinaryReader)0x1;
    return 0;
  }
  uVar1 = *puVar2;
  *(undefined2 **)(this + 0x10) = puVar2 + 1;
  return uVar1;
}


// ===== 003b5908  rive::BinaryReader::readUint32 =====

/* rive::BinaryReader::readUint32() */

undefined4 __thiscall rive::BinaryReader::readUint32(BinaryReader *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(this + 0x10);
  if ((*(long *)this + *(long *)(this + 8)) - (long)puVar2 < 4) {
    *(long *)(this + 0x10) = *(long *)this + *(long *)(this + 8);
    this[0x18] = (BinaryReader)0x1;
    return 0;
  }
  uVar1 = *puVar2;
  *(undefined4 **)(this + 0x10) = puVar2 + 1;
  return uVar1;
}


// ===== 003b5944  rive::BinaryReader::reset =====

/* rive::BinaryReader::reset() */

void __thiscall rive::BinaryReader::reset(BinaryReader *this)

{
  *(undefined8 *)(this + 0x10) = *(undefined8 *)this;
  return;
}


// ===== 003b5950  rive::CoreBytesType::deserialize =====

/* rive::CoreBytesType::deserialize(rive::BinaryReader&) */

undefined1  [16] rive::CoreBytesType::deserialize(BinaryReader *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar7 = 0;
  uVar4 = 0;
  pbVar1 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
  pbVar5 = *(byte **)(param_1 + 0x10);
  do {
    if (pbVar1 <= pbVar5) {
      *(byte **)(param_1 + 0x10) = pbVar1;
      param_1[0x18] = (BinaryReader)0x1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = pbVar1;
      return auVar9;
    }
    pbVar6 = pbVar5 + 1;
    bVar2 = *pbVar5;
    uVar3 = uVar7 & 0x3f;
    uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
    uVar4 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar4;
    pbVar5 = pbVar6;
  } while ((char)bVar2 < '\0');
  if (param_1[0x18] != (BinaryReader)0x0) {
    uVar4 = 0;
  }
  *(byte **)(param_1 + 0x10) = pbVar6 + uVar4;
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = pbVar6;
  return auVar8;
}


// ===== 003b59bc  rive::CoreDoubleType::deserialize =====

/* rive::CoreDoubleType::deserialize(rive::BinaryReader&) */

undefined4 rive::CoreDoubleType::deserialize(BinaryReader *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if ((*(long *)param_1 + *(long *)(param_1 + 8)) - (long)puVar1 < 4) {
    *(long *)(param_1 + 0x10) = *(long *)param_1 + *(long *)(param_1 + 8);
    param_1[0x18] = (BinaryReader)0x1;
    return 0;
  }
  uVar2 = *puVar1;
  *(undefined4 **)(param_1 + 0x10) = puVar1 + 1;
  return uVar2;
}


// ===== 003b59f4  rive::CoreStringType::deserialize =====

/* rive::CoreStringType::deserialize(rive::BinaryReader&) */

void __thiscall rive::CoreStringType::deserialize(CoreStringType *this,BinaryReader *param_1)

{
  char cVar1;
  undefined8 *in_x8;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(this + 0x10);
  do {
    if ((char *)(*(long *)this + *(long *)(this + 8)) <= pcVar2) {
      *(char **)(this + 0x10) = (char *)(*(long *)this + *(long *)(this + 8));
      this[0x18] = (CoreStringType)0x1;
      goto LAB_003b5a48;
    }
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 < '\0');
  *(char **)(this + 0x10) = pcVar3;
  if (this[0x18] == (CoreStringType)0x0) {
    BinaryReader::readString((ulong)this);
    return;
  }
LAB_003b5a48:
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 003b5a54  rive::CoreUintType::deserialize =====

/* rive::CoreUintType::deserialize(rive::BinaryReader&) */

ulong rive::CoreUintType::deserialize(BinaryReader *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = *(byte **)(param_1 + 0x10);
  do {
    if ((byte *)(*(long *)param_1 + *(long *)(param_1 + 8)) <= pbVar4) {
      param_1[0x18] = (BinaryReader)0x1;
      goto LAB_003b5aac;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  *(byte **)(param_1 + 0x10) = pbVar5;
  if (uVar3 >> 0x20 != 0) {
    param_1[0x19] = (BinaryReader)0x1;
LAB_003b5aac:
    uVar3 = 0;
    *(byte **)(param_1 + 0x10) = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
  }
  return uVar3 & 0xffffffff;
}


// ===== 003b5abc  rive::CustomPropertyContainer::syncCustomProperties =====

/* rive::CustomPropertyContainer::syncCustomProperties() */

void __thiscall rive::CustomPropertyContainer::syncCustomProperties(CustomPropertyContainer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  plVar3 = (long *)(**(code **)(*(long *)this + 0x10))();
  puVar1 = (undefined8 *)*plVar3;
  puVar2 = (undefined8 *)plVar3[1];
  do {
    if (puVar1 == puVar2) {
      return;
    }
    plVar3 = (long *)*puVar1;
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0xa7);
    if ((uVar4 & 1) != 0) {
      puVar13 = *(undefined8 **)(this + 0x10);
      if (puVar13 < *(undefined8 **)(this + 0x18)) {
        puVar14 = puVar13 + 1;
        *puVar13 = plVar3;
      }
      else {
        puVar12 = *(undefined8 **)(this + 8);
        lVar15 = (long)puVar13 - (long)puVar12 >> 3;
        uVar4 = lVar15 + 1;
        if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003b5c68();
        }
        uVar6 = (long)*(undefined8 **)(this + 0x18) - (long)puVar12;
        uVar8 = (long)uVar6 >> 2;
        if (uVar8 <= uVar4) {
          uVar8 = uVar4;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar5 = operator_new(uVar8 << 3);
        }
        puVar7 = (undefined8 *)((long)pvVar5 + lVar15 * 8);
        puVar14 = puVar7 + 1;
        *puVar7 = plVar3;
        if ((long)puVar13 - (long)puVar12 != 0) {
          uVar4 = ((long)puVar13 - (long)puVar12) - 8;
          puVar16 = puVar13;
          if ((0x37 < uVar4) &&
             (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar12) - (long)pvVar5)))) {
            puVar10 = puVar7 + -2;
            puVar11 = puVar13 + -2;
            uVar4 = (uVar4 >> 3) + 1;
            uVar9 = uVar4 & 0x3ffffffffffffffc;
            puVar16 = puVar13 + -uVar9;
            uVar6 = uVar9;
            do {
              puVar13 = puVar11 + -1;
              uVar19 = puVar11[-2];
              uVar18 = puVar11[1];
              uVar17 = *puVar11;
              uVar6 = uVar6 - 4;
              puVar11 = puVar11 + -4;
              puVar10[-1] = *puVar13;
              puVar10[-2] = uVar19;
              puVar10[1] = uVar18;
              *puVar10 = uVar17;
              puVar10 = puVar10 + -4;
            } while (uVar6 != 0);
            puVar7 = puVar7 + -uVar9;
            puVar13 = puVar12;
            if (uVar4 == uVar9) goto LAB_003b5c28;
          }
          do {
            puVar16 = puVar16 + -1;
            puVar7 = puVar7 + -1;
            *puVar7 = *puVar16;
          } while (puVar16 != puVar12);
          puVar13 = *(undefined8 **)(this + 8);
        }
LAB_003b5c28:
        *(undefined8 **)(this + 8) = puVar7;
        *(undefined8 **)(this + 0x10) = puVar14;
        *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar8 * 8);
        if (puVar13 != (undefined8 *)0x0) {
          operator_delete(puVar13);
        }
      }
      *(undefined8 **)(this + 0x10) = puVar14;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


// ===== 003b5c68  FUN_003b5c68 =====

void FUN_003b5c68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003b5c7c  rive::CustomPropertyContainer::addProperty =====

/* rive::CustomPropertyContainer::addProperty(rive::CustomProperty*) */

void __thiscall
rive::CustomPropertyContainer::addProperty(CustomPropertyContainer *this,CustomProperty *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar12 = *(undefined8 **)(this + 0x10);
  puVar11 = *(undefined8 **)(this + 8);
  puVar4 = puVar11;
  for (puVar7 = puVar11;
      (puVar7 != puVar12 && (puVar4 = puVar7, (CustomProperty *)*puVar7 != param_1));
      puVar7 = puVar7 + 1) {
    puVar4 = puVar12;
  }
  if (puVar4 != puVar12) {
    return;
  }
  if (puVar12 < *(undefined8 **)(this + 0x18)) {
    puVar4 = puVar12 + 1;
    *puVar12 = param_1;
    goto LAB_003b5df4;
  }
  lVar13 = (long)puVar12 - (long)puVar11;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003b5c68();
  }
  uVar5 = (long)*(undefined8 **)(this + 0x18) - (long)puVar11;
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
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar7 = (undefined8 *)((long)pvVar3 + (lVar13 >> 3) * 8);
  puVar4 = puVar7 + 1;
  *puVar7 = param_1;
  if (puVar11 != puVar12) {
    if ((0x37 < lVar13 - 8U) && (0x1f < (ulong)((long)puVar12 + (-lVar13 - (long)pvVar3)))) {
      puVar10 = puVar12 + -2;
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar8;
      puVar9 = puVar7 + -2;
      uVar5 = uVar8;
      do {
        puVar2 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        uVar5 = uVar5 - 4;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar16;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + -4;
      } while (uVar5 != 0);
      puVar7 = puVar7 + -uVar8;
      if (uVar1 == uVar8) goto LAB_003b5dd8;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar12;
    } while (puVar12 != puVar11);
    puVar11 = *(undefined8 **)(this + 8);
  }
LAB_003b5dd8:
  *(undefined8 **)(this + 8) = puVar7;
  *(undefined8 **)(this + 0x10) = puVar4;
  *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar6 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
LAB_003b5df4:
  *(undefined8 **)(this + 0x10) = puVar4;
  return;
}


// ===== 003b5e18  rive::CustomPropertyContainer::removeProperty =====

/* rive::CustomPropertyContainer::removeProperty(rive::CustomProperty*) */

void __thiscall
rive::CustomPropertyContainer::removeProperty(CustomPropertyContainer *this,CustomProperty *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar1 = *(undefined8 **)(this + 8);
  __dest = puVar1;
  for (; (puVar1 != puVar2 && (__dest = puVar1, (CustomProperty *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(this + 0x10) = (long)__dest + __n;
  }
  return;
}


// ===== 003b5e8c  rive::DataBind::onAddedDirty =====

/* rive::DataBind::onAddedDirty(rive::CoreContext*) */

undefined8 rive::DataBind::onAddedDirty(CoreContext *param_1)

{
  return 0;
}


// ===== 003b5e94  rive::DataBind::import =====

/* rive::DataBind::import(rive::ImportStack&) */

void __thiscall rive::DataBind::import(DataBind *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  DataBind *pDVar7;
  DataBindContainer *this_00;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  BackboardImporter *this_01;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  DataBind *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar10 = *(ulong *)(param_1 + 8);
  if (uVar10 != 0) {
    uVar17 = NEON_cnt(uVar10,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar11 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar11 < 2) {
      uVar13 = (ulong)((uint)uVar10 - 1) & 0x17;
    }
    else {
      uVar13 = 0x17;
      if (uVar10 < 0x18) {
        uVar6 = (uint)uVar10 & 0xff;
        uVar1 = 0;
        if ((uVar10 & 0xff) != 0) {
          uVar1 = 0x17 / uVar6;
        }
        uVar13 = (ulong)(0x17 - uVar1 * uVar6);
      }
    }
    plVar14 = *(long **)(*(long *)param_1 + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      do {
        uVar15 = plVar14[1];
        if (uVar15 == 0x17) {
          if ((short)plVar14[2] == 0x17) {
            this_01 = (BackboardImporter *)plVar14[3];
            if (this_01 != (BackboardImporter *)0x0) {
              *(undefined8 *)(this + 0x58) = *(undefined8 *)(this_01 + 0x100);
              BackboardImporter::addDataConverterReferencer(this_01,this);
              pDVar7 = *(DataBind **)(this + 0x30);
              if (pDVar7 == (DataBind *)0x0) goto LAB_003b5ffc;
              uVar10 = (**(code **)(*(long *)pDVar7 + 0x18))(pDVar7,10);
              if ((uVar10 & 1) != 0) {
                Component::addCollapsable(*(Component **)(this + 0x30),this);
              }
              plVar14 = *(long **)(this + 0x30);
              uVar5 = (**(code **)(*plVar14 + 0x10))(plVar14);
              lVar12 = 0x90;
              if (uVar5 < 0x26d) {
                if (uVar5 != 0x263) {
                  if (uVar5 == 0x264) {
                    lVar12 = 0x88;
                  }
                  else {
                    if (uVar5 != 0x26a) goto LAB_003b6060;
                    lVar12 = 0x98;
                  }
                }
              }
              else if (uVar5 < 0x273) {
                if ((uVar5 != 0x26d) && (uVar5 != 0x272)) {
LAB_003b6060:
                  uVar10 = (**(code **)(**(long **)(this + 0x30) + 0x18))
                                     (*(long **)(this + 0x30),0x1e8);
                  plVar14 = *(long **)(this + 0x30);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = (**(code **)(*plVar14 + 0x18))(plVar14,0x219);
                    if ((uVar10 & 1) != 0) {
                      lVar12 = (*(long **)(this + 0x30))[2];
                      if (lVar12 != 0) {
                        DataBindContainer::addDataBind((DataBindContainer *)(lVar12 + 0x28),this);
                      }
                      goto LAB_003b637c;
                    }
                    uVar6 = (**(code **)(**(long **)(this + 0x30) + 0x10))();
                    uVar6 = uVar6 & 0xffff;
                    if (uVar6 < 0x237) {
                      if (((uVar6 - 0x1d7 < 0x21) &&
                          ((1L << ((ulong)(uVar6 - 0x1d7) & 0x3f) & 0x10000011fU) != 0)) ||
                         (uVar6 == 0x41)) {
LAB_003b625c:
                        uVar10 = *(ulong *)(param_1 + 8);
                        if (uVar10 == 0) goto LAB_003b637c;
                        uVar17 = NEON_cnt(uVar10,1);
                        uVar16 = NEON_uaddlv(uVar17,1);
                        uVar11 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
                        if (uVar11 < 2) {
                          uVar13 = (ulong)((uint)uVar10 - 1) & 0x35;
                        }
                        else {
                          uVar13 = 0x35;
                          if (uVar10 < 0x36) {
                            uVar6 = (uint)uVar10 & 0xff;
                            uVar1 = 0;
                            if ((uVar10 & 0xff) != 0) {
                              uVar1 = 0x35 / uVar6;
                            }
                            uVar13 = (ulong)(0x35 - uVar1 * uVar6);
                          }
                        }
                        plVar14 = *(long **)(*(long *)param_1 + uVar13 * 8);
                        if ((plVar14 == (long *)0x0) ||
                           (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0)) goto LAB_003b637c;
                        goto LAB_003b62d8;
                      }
                    }
                    else if (((uVar6 - 0x237 < 0x1f) &&
                             ((1 << (ulong)(uVar6 - 0x237 & 0x1f) & 0x40a00001U) != 0)) ||
                            (uVar6 == 0x296)) goto LAB_003b625c;
                    uVar10 = (**(code **)(**(long **)(this + 0x30) + 0x18))
                                       (*(long **)(this + 0x30),10);
                    if (((uVar10 & 1) == 0) ||
                       (lVar12 = *(long *)(*(long *)(this + 0x30) + 0x40), lVar12 == 0)) {
                      pDVar7 = (DataBind *)
                               FUN_003b6388(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
                      if (pDVar7 == (DataBind *)0x0) goto LAB_003b5ffc;
                      lVar12 = *(long *)(pDVar7 + 8);
                    }
                    this_00 = (DataBindContainer *)(lVar12 + 0x9b0);
                  }
                  else {
                    this_00 = (DataBindContainer *)(plVar14 + 5);
                  }
                  DataBindContainer::addDataBind(this_00,this);
                  goto LAB_003b637c;
                }
              }
              else if (uVar5 != 0x277) {
                if (uVar5 != 0x273) goto LAB_003b6060;
                lVar12 = 0xa0;
              }
              plVar8 = *(long **)((long)plVar14 + lVar12 + 8);
              if (plVar8 == (long *)0x0) goto LAB_003b621c;
              lVar9 = (**(code **)(*plVar8 + 0x50))();
              if (lVar9 == 0) {
                plVar8 = *(long **)((long)plVar14 + lVar12 + 8);
                bVar4 = (**(code **)(*plVar8 + 0x60))(plVar8,this);
                bVar4 = bVar4 ^ 1;
                goto LAB_003b6220;
              }
              uVar10 = *(ulong *)(param_1 + 8);
              if (uVar10 == 0) {
                bVar4 = 1;
                goto LAB_003b6220;
              }
              uVar17 = NEON_cnt(uVar10,1);
              uVar16 = NEON_uaddlv(uVar17,1);
              uVar13 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
              uVar11 = (ulong)~(uint)uVar10 & 1;
              if (1 < uVar13) {
                uVar11 = (ulong)(uVar10 - 1 != 0);
              }
              plVar8 = *(long **)(*(long *)param_1 + uVar11 * 8);
              if ((plVar8 == (long *)0x0) || (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0))
              goto LAB_003b621c;
              goto LAB_003b6114;
            }
            break;
          }
        }
        else {
          if (uVar11 < 2) {
            uVar15 = uVar15 & uVar10 - 1;
          }
          else if (uVar10 <= uVar15) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar2 * uVar10;
          }
          if (uVar15 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  pDVar7 = (DataBind *)0x1;
  goto LAB_003b5ffc;
LAB_003b62d8:
  do {
    uVar15 = plVar14[1];
    if (uVar15 == 0x35) {
      if ((short)plVar14[2] == 0x35) {
        pDVar7 = (DataBind *)plVar14[3];
        if ((pDVar7 != (DataBind *)0x0) &&
           (local_40 = this,
           StateMachineImporter::addDataBind((StateMachineImporter *)pDVar7,&local_40),
           pDVar7 = local_40, local_40 != (DataBind *)0x0)) {
          (**(code **)(*(long *)local_40 + 8))();
LAB_003b637c:
          pDVar7 = (DataBind *)0x0;
        }
        break;
      }
    }
    else {
      if (uVar11 < 2) {
        uVar15 = uVar15 & uVar10 - 1;
      }
      else if (uVar10 <= uVar15) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar15 / uVar10;
        }
        uVar15 = uVar15 - uVar2 * uVar10;
      }
      if (uVar15 != uVar13) goto LAB_003b637c;
    }
    plVar14 = (long *)*plVar14;
    pDVar7 = (DataBind *)0x0;
  } while (plVar14 != (long *)0x0);
  goto LAB_003b5ffc;
LAB_003b6114:
  do {
    uVar15 = plVar8[1];
    if (uVar15 == 1) {
      if ((short)plVar8[2] == 1) {
        if (plVar8[3] != 0) {
          DataBindContainer::addDataBind
                    ((DataBindContainer *)(*(long *)(plVar8[3] + 8) + 0x9b0),this);
          bVar4 = 0;
          goto LAB_003b6220;
        }
        break;
      }
    }
    else {
      if (uVar13 < 2) {
        uVar15 = uVar15 & uVar10 - 1;
      }
      else if (uVar10 <= uVar15) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar15 / uVar10;
        }
        uVar15 = uVar15 - uVar2 * uVar10;
      }
      if (uVar15 != uVar11) break;
    }
    plVar8 = (long *)*plVar8;
  } while (plVar8 != (long *)0x0);
LAB_003b621c:
  bVar4 = 1;
LAB_003b6220:
  pDVar7 = (DataBind *)0x0;
  *(DataBind **)((long)plVar14 + lVar12 + 0x10) = this;
  *(byte *)((long)plVar14 + lVar12 + 0x18) = bVar4 & 1;
LAB_003b5ffc:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pDVar7);
  }
  return;
}


// ===== 003b6388  FUN_003b6388 =====

undefined8 FUN_003b6388(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (param_2 != 0) {
    uVar6 = NEON_cnt(param_2,1);
    uVar5 = NEON_uaddlv(uVar6,1);
    uVar7 = CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5);
    uVar1 = (ulong)~(uint)param_2 & 1;
    if (1 < (uVar7 & 0xffffffff)) {
      uVar1 = (ulong)(param_2 - 1 != 0);
    }
    plVar3 = *(long **)(param_1 + uVar1 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) {
            return 0;
          }
          uVar4 = plVar3[1];
          if (uVar4 != 1) break;
          if (*(short *)(plVar3 + 2) == 1) {
            return plVar3[3];
          }
        }
        if ((uVar7 & 0xffffffff) < 2) {
          uVar4 = uVar4 & param_2 - 1;
        }
        else if (param_2 <= uVar4) {
          uVar2 = 0;
          if (param_2 != 0) {
            uVar2 = uVar4 / param_2;
          }
          uVar4 = uVar4 - uVar2 * param_2;
        }
      } while (uVar4 == uVar1);
    }
  }
  return 0;
}


// ===== 003b6418  rive::DataBind::file =====

/* rive::DataBind::file(rive::File*) */

void __thiscall rive::DataBind::file(DataBind *this,File *param_1)

{
  *(File **)(this + 0x58) = param_1;
  return;
}


// ===== 003b6420  rive::DataBind::initialize =====

/* rive::DataBind::initialize() */

void __thiscall rive::DataBind::initialize(DataBind *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x30);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,10), (uVar2 & 1) != 0)) {
    Component::addCollapsable(*(Component **)(this + 0x30),this);
    return;
  }
  return;
}


// ===== 003b646c  rive::DataBind::outputType =====

/* rive::DataBind::outputType() */

undefined8 __thiscall rive::DataBind::outputType(DataBind *this)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((((*(long **)(this + 0x48) != (long *)0x0) &&
       (iVar2 = (**(code **)(**(long **)(this + 0x48) + 0x68))(), iVar2 != 99)) &&
      (*(long **)(this + 0x48) != (long *)0x0)) &&
     (iVar2 = (**(code **)(**(long **)(this + 0x48) + 0x68))(), iVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003b64c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(long **)(this + 0x48) + 0x68))();
    return uVar3;
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x38) + 0x10))();
    if (uVar1 < 0x1bc) {
      if (uVar1 < 0x1b1) {
        if (uVar1 == 0x1aa) {
          return 4;
        }
        if (uVar1 == 0x1b0) {
          return 6;
        }
      }
      else {
        if (uVar1 == 0x1b1) {
          return 1;
        }
        if (uVar1 == 0x1b9) {
          return 5;
        }
        if (uVar1 == 0x1ba) {
          return 2;
        }
      }
    }
    else if (uVar1 < 0x236) {
      if (uVar1 == 0x1bc) {
        return 8;
      }
      if (uVar1 == 0x1c1) {
        return 3;
      }
      if (uVar1 == 0x1f5) {
        return 7;
      }
    }
    else {
      if (uVar1 == 0x236) {
        return 10;
      }
      if (uVar1 == 0x24b) {
        return 0xb;
      }
      if (uVar1 == 599) {
        return 0xc;
      }
    }
  }
  return 0;
}


// ===== 003b65b8  rive::DataBind::sourceOutputType =====

/* rive::DataBind::sourceOutputType() */

undefined8 __thiscall rive::DataBind::sourceOutputType(DataBind *this)

{
  ushort uVar1;
  
  if (*(long **)(this + 0x38) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x38) + 0x10))();
    if (uVar1 < 0x1bc) {
      if (uVar1 < 0x1b1) {
        if (uVar1 == 0x1aa) {
          return 4;
        }
        if (uVar1 == 0x1b0) {
          return 6;
        }
      }
      else {
        if (uVar1 == 0x1b1) {
          return 1;
        }
        if (uVar1 == 0x1b9) {
          return 5;
        }
        if (uVar1 == 0x1ba) {
          return 2;
        }
      }
    }
    else if (uVar1 < 0x236) {
      if (uVar1 == 0x1bc) {
        return 8;
      }
      if (uVar1 == 0x1c1) {
        return 3;
      }
      if (uVar1 == 0x1f5) {
        return 7;
      }
    }
    else {
      if (uVar1 == 0x236) {
        return 10;
      }
      if (uVar1 == 0x24b) {
        return 0xb;
      }
      if (uVar1 == 599) {
        return 0xc;
      }
    }
  }
  return 0;
}


// ===== 003b66ac  rive::DataBind::source =====

/* rive::DataBind::source(rive::rcp<rive::ViewModelInstanceValue>) */

void __thiscall rive::DataBind::source(DataBind *this,DataBind *param_2)

{
  DataBind *pDVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if (((byte)this[0x10] >> 2 & 1) == 0) {
    ViewModelInstanceValue::addDependent
              (*(ViewModelInstanceValue **)param_2,(ViewModelValueDependent *)(this + 0x18));
  }
  pDVar1 = this + 0x38;
  if (pDVar1 != param_2) {
    lVar6 = *(long *)param_2;
    if (lVar6 != 0) {
      FUN_00340fb0(1,lVar6 + 0x8c);
    }
    plVar5 = *(long **)pDVar1;
    *(long *)pDVar1 = lVar6;
    if (plVar5 == (long *)0x0) goto LAB_003b672c;
    iVar3 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x8c);
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  lVar6 = *(long *)pDVar1;
LAB_003b672c:
  if (((lVar6 != 0) && (plVar5 = *(long **)(this + 0x30), plVar5 != (long *)0x0)) &&
     (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x22f), (uVar4 & 1) != 0)) {
    lVar6 = *(long *)(this + 0x30);
    sVar2 = (**(code **)(**(long **)(this + 0x38) + 0x10))();
    *(bool *)(lVar6 + 0x408) = sVar2 == 0x1ba;
  }
  return;
}


// ===== 003b677c  rive::DataBind::bindsOnce =====

/* rive::DataBind::bindsOnce() */

byte __thiscall rive::DataBind::bindsOnce(DataBind *this)

{
  return (byte)this[0x10] >> 2 & 1;
}


// ===== 003b6788  rive::DataBind::clearSource =====

/* WARNING: Removing unreachable block (ram,0x003b683c) */
/* rive::DataBind::clearSource() */

void __thiscall rive::DataBind::clearSource(DataBind *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0x38);
  if (plVar6 != (long *)0x0) {
    if (((byte)this[0x10] >> 2 & 1) == 0) {
      puVar2 = (undefined8 *)plVar6[0x1e];
      puVar5 = (undefined8 *)plVar6[0x1d];
      puVar3 = puVar5;
      for (; (puVar5 != puVar2 && (puVar3 = puVar5, (DataBind *)*puVar5 != this + 0x18));
          puVar5 = puVar5 + 1) {
        puVar3 = puVar2;
      }
      if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
        do {
          puVar3 = puVar4;
          if ((DataBind *)*puVar5 != this + 0x18) {
            puVar3 = puVar4 + 1;
            *puVar4 = (DataBind *)*puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar4 = puVar3;
        } while (puVar5 != puVar2);
        puVar2 = (undefined8 *)plVar6[0x1e];
      }
      if (puVar3 != puVar2) {
        plVar6[0x1e] = (long)puVar3;
      }
      plVar6 = *(long **)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      if (plVar6 == (long *)0x0) {
        return;
      }
    }
    else {
      *(undefined8 *)(this + 0x38) = 0;
    }
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x003b6890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}


// ===== 003b68a4  rive::DataBind::~DataBind =====

/* WARNING: Removing unreachable block (ram,0x003b6974) */
/* rive::DataBind::~DataBind() */

void __thiscall rive::DataBind::~DataBind(DataBind *this)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  DataBind *pDVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  plVar8 = *(long **)(this + 0x38);
  puVar1 = PTR_vtable_0067cfc8 + 0xb8;
  *(undefined **)this = PTR_vtable_0067cfc8 + 0x10;
  pDVar6 = this + 0x18;
  *(undefined **)pDVar6 = puVar1;
  if (plVar8 != (long *)0x0) {
    if (((byte)this[0x10] >> 2 & 1) == 0) {
      puVar3 = (undefined8 *)plVar8[0x1e];
      puVar7 = (undefined8 *)plVar8[0x1d];
      puVar4 = puVar7;
      for (; (puVar7 != puVar3 && (puVar4 = puVar7, (DataBind *)*puVar7 != pDVar6));
          puVar7 = puVar7 + 1) {
        puVar4 = puVar3;
      }
      if ((puVar4 != puVar3) && (puVar7 = puVar4 + 1, puVar5 = puVar4, puVar7 != puVar3)) {
        do {
          puVar4 = puVar5;
          if ((DataBind *)*puVar7 != pDVar6) {
            puVar4 = puVar5 + 1;
            *puVar5 = (DataBind *)*puVar7;
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar4;
        } while (puVar7 != puVar3);
        puVar3 = (undefined8 *)plVar8[0x1e];
      }
      if (puVar4 != puVar3) {
        plVar8[0x1e] = (long)puVar4;
      }
      plVar8 = *(long **)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      if (plVar8 == (long *)0x0) goto LAB_003b69b8;
    }
    else {
      *(undefined8 *)(this + 0x38) = 0;
    }
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x8c);
    if (iVar2 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
LAB_003b69b8:
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 0x78))();
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  plVar8 = *(long **)(this + 0x38);
  *(undefined8 *)(this + 0x48) = 0;
  if ((plVar8 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x8c), iVar2 == 1))
  {
                    /* WARNING: Could not recover jumptable at 0x003b6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 8))(plVar8);
    return;
  }
  return;
}


// ===== 003b6a44  rive::DataBind::~DataBind =====

/* rive::DataBind::~DataBind() */

void __thiscall rive::DataBind::~DataBind(DataBind *this)

{
  ~DataBind(this);
  operator_delete(this);
  return;
}


// ===== 003b6a68  FUN_003b6a68 =====

undefined8 FUN_003b6a68(void)

{
  return 0x1be;
}


// ===== 003b6a70  FUN_003b6a70 =====

bool FUN_003b6a70(undefined8 param_1,short param_2)

{
  return param_2 == 0x1be;
}


// ===== 003b6a80  FUN_003b6a80 =====

undefined8 FUN_003b6a80(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x294) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003b6bb8;
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
LAB_003b6bb8:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x14) = (int)uVar3;
    return 1;
  }
  if (param_2 == 0x24b) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003b6b9c;
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
LAB_003b6b9c:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x10) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x24a) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003b6bd4;
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
LAB_003b6bd4:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  return 1;
}


// ===== 003b6be8  FUN_003b6be8 =====

void FUN_003b6be8(void)

{
  return;
}


// ===== 003b6bec  FUN_003b6bec =====

void FUN_003b6bec(void)

{
  return;
}


// ===== 003b6bf0  FUN_003b6bf0 =====

void FUN_003b6bf0(void)

{
  return;
}


// ===== 003b6bf4  rive::DataBind::updateSourceBinding =====

/* rive::DataBind::updateSourceBinding(bool) */

void __thiscall rive::DataBind::updateSourceBinding(DataBind *this,bool param_1)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = *(uint *)(this + 0x10);
  if (((uVar1 & 3) != 0) && (plVar2 = *(long **)(this + 0x40), plVar2 != (long *)0x0)) {
    if (param_1) {
      *(undefined1 *)(plVar2 + 6) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x003b6c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))
              (plVar2,*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0xc),uVar1 & 1);
    return;
  }
  return;
}


// ===== 003b6c30  rive::DataBind::update =====

/* rive::DataBind::update(rive::ComponentDirt) */

void __thiscall rive::DataBind::update(DataBind *this,uint param_2)

{
  long *plVar1;
  
  if ((((*(long *)(this + 0x38) != 0) && ((param_2 >> 0xc & 1) != 0)) &&
      (plVar1 = *(long **)(this + 0x40), plVar1 != (long *)0x0)) &&
     ((*(uint *)(this + 0x10) & 3) != 1)) {
                    /* WARNING: Could not recover jumptable at 0x003b6c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0xc),
               (*(uint *)(this + 0x10) & 1) == 0);
    return;
  }
  return;
}


// ===== 003b6c78  rive::DataBind::bind =====

/* rive::DataBind::bind() */

void __thiscall rive::DataBind::bind(DataBind *this)

{
  int iVar1;
  DataBindContextValueBoolean *this_00;
  
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  *(undefined8 *)(this + 0x40) = 0;
  iVar1 = outputType(this);
  if (iVar1 < 7) {
    if (iVar1 < 4) {
      if (iVar1 == 1) {
        this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
        DataBindContextValueString::DataBindContextValueString
                  ((DataBindContextValueString *)this_00,this);
      }
      else if (iVar1 == 2) {
        this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
        DataBindContextValueNumber::DataBindContextValueNumber
                  ((DataBindContextValueNumber *)this_00,this);
      }
      else {
        if (iVar1 != 3) goto LAB_003b6e40;
        this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
        DataBindContextValueBoolean::DataBindContextValueBoolean(this_00,this);
      }
    }
    else if (iVar1 == 4) {
      this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
      DataBindContextValueColor::DataBindContextValueColor
                ((DataBindContextValueColor *)this_00,this);
    }
    else if (iVar1 == 5) {
      this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
      DataBindContextValueList::DataBindContextValueList((DataBindContextValueList *)this_00,this);
    }
    else {
      if (iVar1 != 6) goto LAB_003b6e40;
      this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
      DataBindContextValueEnum::DataBindContextValueEnum((DataBindContextValueEnum *)this_00,this);
    }
  }
  else if (iVar1 < 0xb) {
    if (iVar1 == 7) {
      this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
      DataBindContextValueTrigger::DataBindContextValueTrigger
                ((DataBindContextValueTrigger *)this_00,this);
    }
    else if (iVar1 == 8) {
      this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
      DataBindContextValueViewModel::DataBindContextValueViewModel
                ((DataBindContextValueViewModel *)this_00,this);
    }
    else {
      if (iVar1 != 10) goto LAB_003b6e40;
      this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
      DataBindContextValueSymbolListIndex::DataBindContextValueSymbolListIndex
                ((DataBindContextValueSymbolListIndex *)this_00,this);
    }
  }
  else if (iVar1 == 0xb) {
    this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
    DataBindContextValueAssetImage::DataBindContextValueAssetImage
              ((DataBindContextValueAssetImage *)this_00,this);
  }
  else if (iVar1 == 0xc) {
    this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
    DataBindContextValueArtboard::DataBindContextValueArtboard
              ((DataBindContextValueArtboard *)this_00,this);
  }
  else {
    if (iVar1 != 100) goto LAB_003b6e40;
    this_00 = (DataBindContextValueBoolean *)operator_new(0x38);
    DataBindContextValueAny::DataBindContextValueAny((DataBindContextValueAny *)this_00,this);
  }
  *(DataBindContextValueBoolean **)(this + 0x40) = this_00;
LAB_003b6e40:
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 0x98))();
  }
                    /* WARNING: Could not recover jumptable at 0x003b6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))(this,0x1000,1);
  return;
}


// ===== 003b6e74  rive::DataBind::unbind =====

/* WARNING: Removing unreachable block (ram,0x003b6f2c) */
/* rive::DataBind::unbind() */

void __thiscall rive::DataBind::unbind(DataBind *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0x38);
  if (plVar6 != (long *)0x0) {
    if (((byte)this[0x10] >> 2 & 1) == 0) {
      puVar2 = (undefined8 *)plVar6[0x1e];
      puVar5 = (undefined8 *)plVar6[0x1d];
      puVar3 = puVar5;
      for (; (puVar5 != puVar2 && (puVar3 = puVar5, (DataBind *)*puVar5 != this + 0x18));
          puVar5 = puVar5 + 1) {
        puVar3 = puVar2;
      }
      if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
        do {
          puVar3 = puVar4;
          if ((DataBind *)*puVar5 != this + 0x18) {
            puVar3 = puVar4 + 1;
            *puVar4 = (DataBind *)*puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar4 = puVar3;
        } while (puVar5 != puVar2);
        puVar2 = (undefined8 *)plVar6[0x1e];
      }
      if (puVar3 != puVar2) {
        plVar6[0x1e] = (long)puVar3;
      }
      plVar6 = *(long **)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      if (plVar6 == (long *)0x0) goto LAB_003b6f70;
    }
    else {
      *(undefined8 *)(this + 0x38) = 0;
    }
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
LAB_003b6f70:
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 0x78))();
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
    *(undefined8 *)(this + 0x40) = 0;
  }
  return;
}


// ===== 003b6fac  rive::DataBind::addDirt =====

/* rive::DataBind::addDirt(rive::ComponentDirt, bool) */

void rive::DataBind::addDirt(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    if ((param_2 & 0xffff & (*(ushort *)(param_1 + 0x2c) ^ 0xffffffff)) != 0) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x2c) | param_2 & 0xffff;
      *(short *)(param_1 + 0x2c) = (short)uVar1;
      if (((uVar1 >> 1 & 1) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
        *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x30) = 0;
      }
      plVar2 = *(long **)(param_1 + 0x20);
      if ((plVar2 != (long *)0x0) && (*(char *)(param_1 + 0x28) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x003b7000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2,param_1);
        return;
      }
    }
  }
  return;
}


// ===== 003b7004  rive::DataBind::relinkDataBind =====

/* rive::DataBind::relinkDataBind() */

void __thiscall rive::DataBind::relinkDataBind(DataBind *this)

{
                    /* WARNING: Could not recover jumptable at 0x003b7014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x20))(*(long **)(this + 0x20),this);
  return;
}


// ===== 003b7018  rive::DataBind::addDirt =====

/* non-virtual thunk to rive::DataBind::addDirt(rive::ComponentDirt, bool) */

void __thiscall rive::DataBind::addDirt(DataBind *this,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (this[0x38] == (DataBind)0x0) {
    if ((param_2 & 0xffff & (*(ushort *)(this + 0x14) ^ 0xffffffff)) != 0) {
      uVar1 = (uint)*(ushort *)(this + 0x14) | param_2 & 0xffff;
      *(short *)(this + 0x14) = (short)uVar1;
      if (((uVar1 >> 1 & 1) != 0) && (*(long *)(this + 0x28) != 0)) {
        *(undefined1 *)(*(long *)(this + 0x28) + 0x30) = 0;
      }
      plVar2 = *(long **)(this + 8);
      if ((plVar2 != (long *)0x0) && (this[0x10] == (DataBind)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003b706c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2,this + -0x18);
        return;
      }
    }
  }
  return;
}


// ===== 003b7070  rive::DataBind::relinkDataBind =====

/* non-virtual thunk to rive::DataBind::relinkDataBind() */

void __thiscall rive::DataBind::relinkDataBind(DataBind *this)

{
                    /* WARNING: Could not recover jumptable at 0x003b7084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),this + -0x18);
  return;
}


// ===== 003b7088  rive::DataBind::canSkip =====

/* rive::DataBind::canSkip() */

long * __thiscall rive::DataBind::canSkip(DataBind *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x30);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,10);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = (**(code **)(**(long **)(this + 0x30) + 0x80))(), (uVar2 & 1) == 0)) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = (long *)(ulong)(*(int *)(this + 0xc) != 0x254);
    }
  }
  return plVar1;
}


// ===== 003b70e8  rive::DataBind::toTarget =====

/* rive::DataBind::toTarget() */

bool __thiscall rive::DataBind::toTarget(DataBind *this)

{
  return (*(uint *)(this + 0x10) & 3) != 1;
}


// ===== 003b70fc  rive::DataBind::updateDependents =====

/* rive::DataBind::updateDependents() */

void __thiscall rive::DataBind::updateDependents(DataBind *this)

{
  if (*(long **)(this + 0x48) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003b710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x48) + 0x80))();
    return;
  }
  return;
}


// ===== 003b7114  rive::DataBind::toSource =====

/* rive::DataBind::toSource() */

bool __thiscall rive::DataBind::toSource(DataBind *this)

{
  return ((byte)this[0x10] & 3) != 0;
}


// ===== 003b7124  rive::DataBind::isMainToSource =====

/* rive::DataBind::isMainToSource() */

uint __thiscall rive::DataBind::isMainToSource(DataBind *this)

{
  return *(uint *)(this + 0x10) & 1;
}


// ===== 003b7130  rive::DataBind::sourceToTargetRunsFirst =====

/* rive::DataBind::sourceToTargetRunsFirst() */

byte __thiscall rive::DataBind::sourceToTargetRunsFirst(DataBind *this)

{
  return (byte)this[0x10] >> 3 & 1;
}


// ===== 003b713c  rive::DataBind::container =====

/* rive::DataBind::container(rive::DataBindContainer*) */

void __thiscall rive::DataBind::container(DataBind *this,DataBindContainer *param_1)

{
  *(DataBindContainer **)(this + 0x20) = param_1;
  return;
}


// ===== 003b7144  rive::DataBind::isNameBased =====

/* rive::DataBind::isNameBased() */

byte __thiscall rive::DataBind::isNameBased(DataBind *this)

{
  return (byte)this[0x10] >> 4 & 1;
}


// ===== 003b7150  rive::DataBind::advance =====

/* rive::DataBind::advance(float) */

undefined8 rive::DataBind::advance(float param_1)

{
  long in_x0;
  undefined8 uVar1;
  
  if (((*(long **)(in_x0 + 0x48) != (long *)0x0) && (*(long *)(in_x0 + 0x38) != 0)) &&
     (*(char *)(in_x0 + 0x28) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x003b7174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x48) + 0x88))();
    return uVar1;
  }
  return 0;
}


// ===== 003b7180  rive::DataBind::file =====

/* rive::DataBind::file() const */

undefined8 __thiscall rive::DataBind::file(DataBind *this)

{
  return *(undefined8 *)(this + 0x58);
}


// ===== 003b7188  rive::DataBind::collapse =====

/* rive::DataBind::collapse(bool) */

void __thiscall rive::DataBind::collapse(DataBind *this,bool param_1)

{
  long *plVar1;
  
  if ((((this[0x28] != (DataBind)param_1) && (*(int *)(this + 0xc) != 0x254)) &&
      (((byte)this[0x10] & 3) == 0)) &&
     (((this[0x28] = (DataBind)param_1, !param_1 && (*(short *)(this + 0x2c) != 0)) &&
      (plVar1 = *(long **)(this + 0x20), plVar1 != (long *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x003b71dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,this);
    return;
  }
  return;
}


// ===== 003b71e0  rive::FormulaToken::import =====

/* rive::FormulaToken::import(rive::ImportStack&) */

undefined8 __thiscall rive::FormulaToken::import(FormulaToken *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar10 = NEON_cnt(uVar4,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
  if ((uVar11 & 0xffffffff) < 2) {
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x218;
  }
  else {
    uVar5 = 0x218;
    if (uVar4 < 0x219) {
      uVar1 = (uint)uVar4 & 0xffff;
      uVar2 = 0;
      if ((uVar4 & 0xffff) != 0) {
        uVar2 = 0x218 / uVar1;
      }
      uVar5 = (ulong)(0x218 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x218) {
        if ((short)plVar6[2] == 0x218) {
          lVar8 = plVar6[3];
          if (lVar8 == 0) {
            return 1;
          }
          DataConverterFormula::addToken(*(DataConverterFormula **)(lVar8 + 8),this);
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar8 + 8);
          return 0;
        }
      }
      else {
        if ((uVar11 & 0xffffffff) < 2) {
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


// ===== 003b72e0  rive::FormulaToken::addDataBind =====

/* rive::FormulaToken::addDataBind(rive::DataBind*) */

void __thiscall rive::FormulaToken::addDataBind(FormulaToken *this,DataBind *param_1)

{
  if (*(long *)(this + 0x10) != 0) {
    DataBindContainer::addDataBind((DataBindContainer *)(*(long *)(this + 0x10) + 0x28),param_1);
    return;
  }
  return;
}


// ===== 003b72f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003b72f8  FUN_003b72f8 =====

undefined8 FUN_003b72f8(void)

{
  return 0x219;
}


// ===== 003b7300  FUN_003b7300 =====

bool FUN_003b7300(undefined8 param_1,short param_2)

{
  return param_2 == 0x219;
}


// ===== 003b7310  FUN_003b7310 =====

undefined8 FUN_003b7310(void)

{
  return 0;
}


// ===== 003b7318  rive::DataConverterFormula::~DataConverterFormula =====

/* WARNING: Removing unreachable block (ram,0x003b73e0) */
/* rive::DataConverterFormula::~DataConverterFormula() */

void __thiscall rive::DataConverterFormula::~DataConverterFormula(DataConverterFormula *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  DataConverterFormula *pDVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  
  lVar12 = *(long *)(this + 0x170);
  puVar1 = PTR_vtable_0067d1b0 + 0xd8;
  puVar2 = PTR_vtable_0067d1b0 + 0x110;
  *(undefined **)this = PTR_vtable_0067d1b0 + 0x10;
  *(undefined **)(this + 0x28) = puVar1;
  pDVar8 = this + 0xe0;
  *(undefined **)pDVar8 = puVar2;
  if (lVar12 != 0) {
    puVar5 = *(undefined8 **)(lVar12 + 0xf0);
    puVar9 = *(undefined8 **)(lVar12 + 0xe8);
    puVar6 = puVar9;
    for (; (puVar9 != puVar5 && (puVar6 = puVar9, (DataConverterFormula *)*puVar9 != pDVar8));
        puVar9 = puVar9 + 1) {
      puVar6 = puVar5;
    }
    if ((puVar6 != puVar5) && (puVar9 = puVar6 + 1, puVar7 = puVar6, puVar9 != puVar5)) {
      do {
        puVar6 = puVar7;
        if ((DataConverterFormula *)*puVar9 != pDVar8) {
          puVar6 = puVar7 + 1;
          *puVar7 = (DataConverterFormula *)*puVar9;
        }
        puVar9 = puVar9 + 1;
        puVar7 = puVar6;
      } while (puVar9 != puVar5);
      puVar5 = *(undefined8 **)(lVar12 + 0xf0);
    }
    if (puVar6 != puVar5) {
      *(undefined8 **)(lVar12 + 0xf0) = puVar6;
    }
    plVar10 = *(long **)(this + 0x170);
    *(undefined8 *)(this + 0x170) = 0;
    if ((plVar10 != (long *)0x0) &&
       (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x8c), iVar4 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if (this[0x168] == (DataConverterFormula)0x0) {
    plVar3 = *(long **)(this + 0x100);
    for (plVar10 = *(long **)(this + 0xf8); plVar10 != plVar3; plVar10 = plVar10 + 1) {
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 8))();
      }
    }
  }
  else {
    plVar3 = *(long **)(this + 0x118);
    for (plVar10 = *(long **)(this + 0x110); plVar10 != plVar3; plVar10 = plVar10 + 1) {
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 8))();
      }
    }
  }
  plVar10 = *(long **)(this + 0x170);
  *(undefined8 *)(this + 0x118) = *(undefined8 *)(this + 0x110);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(this + 0xf8);
  if ((plVar10 != (long *)0x0) &&
     (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x8c), iVar4 == 1)) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  puVar9 = (undefined8 *)*(void **)(this + 0x150);
  while (puVar9 != (undefined8 *)0x0) {
    pvVar11 = (void *)*puVar9;
    operator_delete(puVar9);
    puVar9 = (undefined8 *)pvVar11;
  }
  pvVar11 = *(void **)(this + 0x140);
  *(undefined8 *)(this + 0x140) = 0;
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  pvVar11 = *(void **)(this + 0x128);
  if (pvVar11 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar11;
    operator_delete(pvVar11);
  }
  pvVar11 = *(void **)(this + 0x110);
  if (pvVar11 != (void *)0x0) {
    *(void **)(this + 0x118) = pvVar11;
    operator_delete(pvVar11);
  }
  pvVar11 = *(void **)(this + 0xf8);
  if (pvVar11 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar11;
    operator_delete(pvVar11);
  }
  DataConverter::~DataConverter((DataConverter *)this);
  return;
}


// ===== 003b752c  rive::DataConverterFormula::~DataConverterFormula =====

/* rive::DataConverterFormula::~DataConverterFormula() */

void __thiscall rive::DataConverterFormula::~DataConverterFormula(DataConverterFormula *this)

{
  ~DataConverterFormula(this);
  operator_delete(this);
  return;
}


// ===== 003b7550  FUN_003b7550 =====

undefined8 FUN_003b7550(void)

{
  return 0x218;
}


// ===== 003b7558  FUN_003b7558 =====

bool FUN_003b7558(undefined8 param_1,short param_2)

{
  return param_2 == 0x218 || param_2 == 0x1e8;
}


// ===== 003b7570  FUN_003b7570 =====

void FUN_003b7570(long param_1,short param_2,long *param_3)

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
        goto LAB_003b7678;
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
LAB_003b7678:
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
    if (param_2 != 0x377) {
      uVar5 = 0;
      goto LAB_003b76a8;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003b765c;
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
LAB_003b765c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xd8) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003b76a8:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003b76cc  rive::DataConverterFormula::clone =====

/* rive::DataConverterFormula::clone() const */

void __thiscall rive::DataConverterFormula::clone(DataConverterFormula *this)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  DataConverter *this_00;
  long *plVar5;
  FormulaToken *pFVar6;
  void *__dest;
  void *__dest_00;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  DataConverter *pDVar14;
  ulong *puVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  void *pvVar18;
  
  this_00 = (DataConverter *)operator_new(0x178);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
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
  pDVar14 = this_00 + 0x30;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)pDVar14 = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)pDVar14 = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  puVar4 = PTR_vtable_0067d1b0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  *(undefined **)this_00 = puVar4 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar4 + 0xd8;
  *(undefined **)(this_00 + 0xe0) = puVar4 + 0x110;
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
  uVar2 = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined4 *)(this_00 + 0xd8) = uVar2;
  DataConverter::copy(this_00,(DataConverter *)this);
  puVar15 = *(ulong **)(this + 0x110);
  puVar1 = *(ulong **)(this + 0x118);
  do {
    if (puVar15 == puVar1) {
      this_00[0x168] = (DataConverter)0x1;
      return;
    }
    uVar7 = *(ulong *)(this + 0x148);
    plVar5 = (long *)*puVar15;
    if (uVar7 != 0) {
      uVar8 = ((ulong)(uint)((int)plVar5 << 3) + 8 ^ (ulong)plVar5 >> 0x20) * -0x622015f714c7d297;
      uVar17 = NEON_cnt(uVar7,1);
      uVar16 = NEON_uaddlv(uVar17,1);
      uVar8 = ((ulong)plVar5 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
      uVar9 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
      uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
      if (uVar9 < 2) {
        uVar10 = uVar8 & uVar7 - 1;
      }
      else {
        uVar10 = uVar8;
        if (uVar7 <= uVar8) {
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = uVar8 / uVar7;
          }
          uVar10 = uVar8 - uVar10 * uVar7;
        }
      }
      plVar11 = *(long **)(*(long *)(this + 0x140) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar12 = plVar11[1];
          if (uVar8 - uVar12 == 0) {
            if ((long *)plVar11[2] == plVar5) {
              iVar13 = (int)plVar11[3];
              goto LAB_003b78bc;
            }
          }
          else {
            if (uVar9 < 2) {
              uVar12 = uVar12 & uVar7 - 1;
            }
            else if (uVar7 <= uVar12) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar12 / uVar7;
              }
              uVar12 = uVar12 - uVar3 * uVar7;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    iVar13 = 0;
LAB_003b78bc:
    pFVar6 = (FormulaToken *)(**(code **)(*plVar5 + 0x28))();
    addOutputToken((DataConverterFormula *)this_00,pFVar6,iVar13);
    pvVar18 = *(void **)(this + 0x30);
    uVar7 = *(long *)(this + 0x38) - (long)pvVar18;
    if (uVar7 != 0) {
      if ((long)uVar7 < 0) {
LAB_003b79a0:
                    /* WARNING: Subroutine does not return */
        FUN_00345418();
      }
      __dest = operator_new(uVar7);
      memcpy(__dest,pvVar18,uVar7);
      uVar8 = 0;
      do {
        if (*(ulong *)(*(long *)((long)__dest + uVar8) + 0x30) == *puVar15) {
          pvVar18 = *(void **)pDVar14;
          uVar9 = *(long *)(this_00 + 0x38) - (long)pvVar18;
          if ((long)uVar9 < 0) goto LAB_003b79a0;
          __dest_00 = operator_new(uVar9);
          memcpy(__dest_00,pvVar18,uVar9);
          *(FormulaToken **)(*(long *)((long)__dest_00 + uVar8) + 0x30) = pFVar6;
          operator_delete(__dest_00);
        }
        uVar8 = uVar8 + 8;
      } while (uVar7 != uVar8);
      operator_delete(__dest);
    }
    puVar15 = puVar15 + 1;
  } while( true );
}


// ===== 003b79a4  FUN_003b79a4 =====

void FUN_003b79a4(void)

{
  return;
}


// ===== 003b79a8  rive::DataConverterFormula::convert =====

/* rive::DataConverterFormula::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterFormula::convert(DataValue *param_1,DataBind *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  ulong *puVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  float *pfVar21;
  undefined2 uVar22;
  float __x;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float __y;
  undefined8 uVar27;
  float fVar28;
  float *local_a0;
  float *local_98;
  float *local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,10), (uVar4 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  else {
    uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
    if ((uVar4 & 1) == 0) {
      fVar28 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 8));
    }
    else {
      fVar28 = *(float *)(param_2 + 8);
    }
    puVar15 = *(ulong **)(param_1 + 0x110);
    puVar1 = *(ulong **)(param_1 + 0x118);
    local_a0 = (float *)0x0;
    local_98 = (float *)0x0;
    local_90 = (float *)0x0;
    if (puVar15 == puVar1) {
      pfVar14 = (float *)0x0;
    }
    else {
      pfVar21 = (float *)0x0;
      pfVar14 = (float *)0x0;
      pfVar17 = (float *)0x0;
      do {
        uVar4 = (**(code **)(*(long *)*puVar15 + 0x18))((long *)*puVar15,0x21d);
        pfVar13 = local_a0;
        if ((uVar4 & 1) == 0) {
          uVar4 = (**(code **)(*(long *)*puVar15 + 0x18))((long *)*puVar15,0x21e);
          plVar5 = (long *)*puVar15;
          if ((uVar4 & 1) == 0) {
            uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x221);
            pfVar13 = local_a0;
            if ((uVar4 & 1) == 0) {
              uVar4 = (**(code **)(*(long *)*puVar15 + 0x18))((long *)*puVar15,0x21f);
              pfVar13 = local_a0;
              pfVar20 = local_98;
              if ((uVar4 & 1) != 0) {
                fVar23 = *(float *)(*puVar15 + 0x18);
                if (pfVar21 <= pfVar17) {
                  lVar16 = (long)pfVar17 - (long)local_a0;
                  uVar4 = (lVar16 >> 2) + 1;
                  if (uVar4 >> 0x3e != 0) goto LAB_003b81bc;
                  uVar10 = (long)pfVar21 - (long)local_a0 >> 1;
                  if (uVar10 <= uVar4) {
                    uVar10 = uVar4;
                  }
                  if (0x7ffffffffffffffb < (ulong)((long)pfVar21 - (long)local_a0)) {
                    uVar10 = 0x3fffffffffffffff;
                  }
                  if (uVar10 == 0) {
                    pvVar6 = (void *)0x0;
                  }
                  else {
                    if (uVar10 >> 0x3e != 0) goto LAB_003b81c4;
                    pvVar6 = operator_new(uVar10 << 2);
                  }
                  local_a0 = (float *)((long)pvVar6 + (lVar16 >> 2) * 4);
                  pfVar20 = local_a0 + 1;
                  *local_a0 = fVar23;
                  if ((long)pfVar17 - (long)pfVar13 != 0) {
                    uVar4 = ((long)pfVar17 - (long)pfVar13) - 4;
                    if ((((0xab < uVar4) &&
                         (uVar8 = (long)pvVar6 + lVar16 + -4,
                         uVar8 - (uVar4 & 0xfffffffffffffffc) <= uVar8)) &&
                        ((float *)((long)(pfVar17 + -1) - (uVar4 & 0xfffffffffffffffc)) <=
                         pfVar17 + -1)) &&
                       (0x1f < (ulong)((long)pfVar17 + (-lVar16 - (long)pvVar6)))) {
                      pfVar14 = local_a0 + -4;
                      pfVar21 = pfVar17 + -4;
                      uVar4 = (uVar4 >> 2) + 1;
                      uVar9 = uVar4 & 0x7ffffffffffffff8;
                      pfVar17 = pfVar17 + -uVar9;
                      uVar8 = uVar9;
                      do {
                        pfVar18 = pfVar21 + -2;
                        uVar27 = *(undefined8 *)(pfVar21 + -4);
                        uVar25 = *(undefined8 *)(pfVar21 + 2);
                        uVar24 = *(undefined8 *)pfVar21;
                        uVar8 = uVar8 - 8;
                        pfVar21 = pfVar21 + -8;
                        *(undefined8 *)(pfVar14 + -2) = *(undefined8 *)pfVar18;
                        *(undefined8 *)(pfVar14 + -4) = uVar27;
                        *(undefined8 *)(pfVar14 + 2) = uVar25;
                        *(undefined8 *)pfVar14 = uVar24;
                        pfVar14 = pfVar14 + -8;
                      } while (uVar8 != 0);
                      local_a0 = local_a0 + -uVar9;
                      if (uVar4 == uVar9) goto LAB_003b8038;
                    }
                    do {
                      pfVar17 = pfVar17 + -1;
                      local_a0 = local_a0 + -1;
                      *local_a0 = *pfVar17;
                    } while (pfVar17 != pfVar13);
                  }
                  goto LAB_003b8038;
                }
                pfVar14 = pfVar17 + 1;
                *pfVar17 = fVar23;
                pfVar17 = pfVar14;
                pfVar20 = pfVar14;
              }
            }
            else {
              if (pfVar21 <= pfVar17) {
                lVar16 = (long)pfVar17 - (long)local_a0;
                uVar4 = (lVar16 >> 2) + 1;
                if (uVar4 >> 0x3e != 0) goto LAB_003b81bc;
                uVar10 = (long)pfVar21 - (long)local_a0 >> 1;
                if (uVar10 <= uVar4) {
                  uVar10 = uVar4;
                }
                if (0x7ffffffffffffffb < (ulong)((long)pfVar21 - (long)local_a0)) {
                  uVar10 = 0x3fffffffffffffff;
                }
                if (uVar10 == 0) {
                  pvVar6 = (void *)0x0;
                }
                else {
                  if (uVar10 >> 0x3e != 0) goto LAB_003b81c4;
                  pvVar6 = operator_new(uVar10 << 2);
                }
                local_a0 = (float *)((long)pvVar6 + (lVar16 >> 2) * 4);
                pfVar20 = local_a0 + 1;
                *local_a0 = fVar28;
                if ((long)pfVar17 - (long)pfVar13 != 0) {
                  uVar4 = ((long)pfVar17 - (long)pfVar13) - 4;
                  if (((0xab < uVar4) &&
                      (uVar8 = (long)pvVar6 + lVar16 + -4,
                      uVar8 - (uVar4 & 0xfffffffffffffffc) <= uVar8)) &&
                     (((float *)((long)(pfVar17 + -1) - (uVar4 & 0xfffffffffffffffc)) <=
                       pfVar17 + -1 && (0x1f < (ulong)((long)pfVar17 + (-lVar16 - (long)pvVar6))))))
                  {
                    pfVar14 = local_a0 + -4;
                    pfVar21 = pfVar17 + -4;
                    uVar4 = (uVar4 >> 2) + 1;
                    uVar9 = uVar4 & 0x7ffffffffffffff8;
                    pfVar17 = pfVar17 + -uVar9;
                    uVar8 = uVar9;
                    do {
                      pfVar18 = pfVar21 + -2;
                      uVar27 = *(undefined8 *)(pfVar21 + -4);
                      uVar25 = *(undefined8 *)(pfVar21 + 2);
                      uVar24 = *(undefined8 *)pfVar21;
                      uVar8 = uVar8 - 8;
                      pfVar21 = pfVar21 + -8;
                      *(undefined8 *)(pfVar14 + -2) = *(undefined8 *)pfVar18;
                      *(undefined8 *)(pfVar14 + -4) = uVar27;
                      *(undefined8 *)(pfVar14 + 2) = uVar25;
                      *(undefined8 *)pfVar14 = uVar24;
                      pfVar14 = pfVar14 + -8;
                    } while (uVar8 != 0);
                    local_a0 = local_a0 + -uVar9;
                    if (uVar4 == uVar9) goto LAB_003b8038;
                  }
                  do {
                    pfVar17 = pfVar17 + -1;
                    local_a0 = local_a0 + -1;
                    *local_a0 = *pfVar17;
                  } while (pfVar17 != pfVar13);
                }
                goto LAB_003b8038;
              }
              pfVar14 = pfVar17 + 1;
              *pfVar17 = fVar28;
              pfVar17 = pfVar14;
              pfVar20 = pfVar14;
            }
          }
          else {
            uVar4 = *(ulong *)(param_1 + 0x148);
            if (uVar4 != 0) {
              uVar10 = ((ulong)(uint)((int)plVar5 << 3) + 8 ^ (ulong)plVar5 >> 0x20) *
                       -0x622015f714c7d297;
              uVar24 = NEON_cnt(uVar4,1);
              uVar22 = NEON_uaddlv(uVar24,1);
              uVar10 = ((ulong)plVar5 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
              uVar8 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar22) & 0xffffffff;
              uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
              if (uVar8 < 2) {
                uVar9 = uVar10 & uVar4 - 1;
              }
              else {
                uVar9 = uVar10;
                if (uVar4 <= uVar10) {
                  uVar9 = 0;
                  if (uVar4 != 0) {
                    uVar9 = uVar10 / uVar4;
                  }
                  uVar9 = uVar10 - uVar9 * uVar4;
                }
              }
              plVar11 = *(long **)(*(long *)(param_1 + 0x140) + uVar9 * 8);
              if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0))
              {
                do {
                  uVar12 = plVar11[1];
                  if (uVar12 == uVar10) {
                    if ((long *)plVar11[2] == plVar5) {
                      iVar7 = (int)plVar11[3];
                      goto LAB_003b7c90;
                    }
                  }
                  else {
                    if (uVar8 < 2) {
                      uVar12 = uVar12 & uVar4 - 1;
                    }
                    else if (uVar4 <= uVar12) {
                      uVar2 = 0;
                      if (uVar4 != 0) {
                        uVar2 = uVar12 / uVar4;
                      }
                      uVar12 = uVar12 - uVar2 * uVar4;
                    }
                    if (uVar12 != uVar9) break;
                  }
                  plVar11 = (long *)*plVar11;
                } while (plVar11 != (long *)0x0);
              }
            }
            iVar7 = 0;
LAB_003b7c90:
            fVar23 = (float)applyFunction((DataConverterFormula *)param_1,(vector *)&local_a0,
                                          (int)plVar5[3],iVar7);
            pfVar14 = local_98;
            pfVar13 = local_a0;
            if (local_98 < local_90) {
              pfVar14 = local_98 + 1;
              *local_98 = fVar23;
              pfVar17 = pfVar14;
              pfVar21 = local_90;
              pfVar20 = pfVar14;
              goto LAB_003b7a78;
            }
            lVar16 = (long)local_98 - (long)local_a0;
            lVar19 = lVar16 >> 2;
            uVar4 = lVar19 + 1;
            if (uVar4 >> 0x3e != 0) {
LAB_003b81bc:
                    /* WARNING: Subroutine does not return */
              FUN_0033dc4c(&local_a0);
            }
            uVar10 = (long)local_90 - (long)local_a0 >> 1;
            if (uVar10 <= uVar4) {
              uVar10 = uVar4;
            }
            if (0x7ffffffffffffffb < (ulong)((long)local_90 - (long)local_a0)) {
              uVar10 = 0x3fffffffffffffff;
            }
            if (uVar10 == 0) {
              pvVar6 = (void *)0x0;
            }
            else {
              if (uVar10 >> 0x3e != 0) {
LAB_003b81c4:
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              pvVar6 = operator_new(uVar10 << 2);
            }
            local_a0 = (float *)((long)pvVar6 + lVar19 * 4);
            pfVar20 = local_a0 + 1;
            *local_a0 = fVar23;
            if ((long)pfVar14 - (long)pfVar13 != 0) {
              uVar4 = ((long)pfVar14 - (long)pfVar13) - 4;
              if ((0x1b < uVar4) && (0x1f < (ulong)((long)pfVar14 + (-lVar16 - (long)pvVar6)))) {
                pfVar21 = local_a0 + -4;
                pfVar17 = pfVar14 + -4;
                uVar4 = (uVar4 >> 2) + 1;
                uVar9 = uVar4 & 0x7ffffffffffffff8;
                pfVar14 = pfVar14 + -uVar9;
                uVar8 = uVar9;
                do {
                  pfVar18 = pfVar17 + -2;
                  uVar27 = *(undefined8 *)(pfVar17 + -4);
                  uVar25 = *(undefined8 *)(pfVar17 + 2);
                  uVar24 = *(undefined8 *)pfVar17;
                  uVar8 = uVar8 - 8;
                  pfVar17 = pfVar17 + -8;
                  *(undefined8 *)(pfVar21 + -2) = *(undefined8 *)pfVar18;
                  *(undefined8 *)(pfVar21 + -4) = uVar27;
                  *(undefined8 *)(pfVar21 + 2) = uVar25;
                  *(undefined8 *)pfVar21 = uVar24;
                  pfVar21 = pfVar21 + -8;
                } while (uVar8 != 0);
                local_a0 = local_a0 + -uVar9;
                if (uVar4 == uVar9) goto LAB_003b8038;
              }
              do {
                pfVar14 = pfVar14 + -1;
                local_a0 = local_a0 + -1;
                *local_a0 = *pfVar14;
              } while (pfVar14 != pfVar13);
            }
LAB_003b8038:
            pfVar21 = (float *)((long)pvVar6 + uVar10 * 4);
LAB_003b803c:
            pfVar14 = pfVar20;
            pfVar17 = pfVar20;
            local_90 = pfVar21;
            if (pfVar13 != (float *)0x0) {
              operator_delete(pfVar13);
            }
          }
        }
        else {
          uVar4 = (long)pfVar14 - (long)local_a0;
          pfVar17 = pfVar14;
          pfVar20 = local_98;
          if (4 < uVar4) {
            fVar23 = 0.0;
            pfVar17 = pfVar14 + -1;
            fVar26 = *pfVar17;
            pfVar18 = pfVar14 + -2;
            __x = *pfVar18;
            iVar7 = *(int *)(*puVar15 + 0x18);
            local_98 = pfVar18;
            if (iVar7 < 2) {
              if (iVar7 == 0) {
                fVar23 = fVar26 + __x;
              }
              else if (iVar7 == 1) {
                fVar23 = __x - fVar26;
              }
            }
            else if (iVar7 == 2) {
              fVar23 = fVar26 * __x;
            }
            else if (iVar7 == 3) {
              fVar23 = __x / fVar26;
            }
            else if (iVar7 == 4) {
              __y = -fVar26;
              if (0.0 <= fVar26) {
                __y = fVar26;
              }
              fVar23 = fmodf(__x,__y);
              if (0.0 <= fVar23) {
                __y = -0.0;
              }
              fVar23 = fVar23 + __y;
            }
            if (pfVar21 <= pfVar18) {
              lVar16 = (long)pfVar18 - (long)pfVar13;
              uVar10 = (lVar16 >> 2) + 1;
              if (uVar10 >> 0x3e != 0) goto LAB_003b81bc;
              uVar8 = (long)pfVar21 - (long)pfVar13 >> 1;
              if (uVar8 <= uVar10) {
                uVar8 = uVar10;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar21 - (long)pfVar13)) {
                uVar8 = 0x3fffffffffffffff;
              }
              if (uVar8 == 0) {
                pvVar6 = (void *)0x0;
              }
              else {
                if (uVar8 >> 0x3e != 0) goto LAB_003b81c4;
                pvVar6 = operator_new(uVar8 << 2);
              }
              local_a0 = (float *)((long)pvVar6 + (lVar16 >> 2) * 4);
              pfVar20 = local_a0 + 1;
              *local_a0 = fVar23;
              if (pfVar18 != pfVar13) {
                uVar4 = uVar4 - 0xc;
                if (((0xab < uVar4) &&
                    (uVar10 = (long)pvVar6 + lVar16 + -4,
                    uVar10 - (uVar4 & 0xfffffffffffffffc) <= uVar10)) &&
                   (((float *)((long)(pfVar14 + -3) - (uVar4 & 0xfffffffffffffffc)) <= pfVar14 + -3
                    && (0x1f < (ulong)((long)pfVar14 + (-lVar16 - (long)pvVar6) + -8))))) {
                  uVar4 = (uVar4 >> 2) + 1;
                  uVar9 = uVar4 & 0x7ffffffffffffff8;
                  pfVar18 = pfVar18 + -uVar9;
                  pfVar21 = local_a0 + -4;
                  pfVar14 = pfVar14 + -10;
                  uVar10 = uVar9;
                  do {
                    uVar27 = *(undefined8 *)pfVar14;
                    uVar25 = *(undefined8 *)(pfVar14 + 6);
                    uVar24 = *(undefined8 *)(pfVar14 + 4);
                    uVar10 = uVar10 - 8;
                    *(undefined8 *)(pfVar21 + -2) = *(undefined8 *)(pfVar14 + 2);
                    *(undefined8 *)(pfVar21 + -4) = uVar27;
                    *(undefined8 *)(pfVar21 + 2) = uVar25;
                    *(undefined8 *)pfVar21 = uVar24;
                    pfVar21 = pfVar21 + -8;
                    pfVar14 = pfVar14 + -8;
                  } while (uVar10 != 0);
                  local_a0 = local_a0 + -uVar9;
                  if (uVar4 == uVar9) goto LAB_003b7e90;
                }
                do {
                  pfVar18 = pfVar18 + -1;
                  local_a0 = local_a0 + -1;
                  *local_a0 = *pfVar18;
                } while (pfVar18 != pfVar13);
              }
LAB_003b7e90:
              pfVar21 = (float *)((long)pvVar6 + uVar8 * 4);
              goto LAB_003b803c;
            }
            *pfVar18 = fVar23;
            pfVar14 = pfVar17;
            pfVar20 = pfVar17;
          }
        }
LAB_003b7a78:
        local_98 = pfVar20;
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar1);
    }
    if ((long)pfVar14 - (long)local_a0 == 4) {
      fVar28 = pfVar14[-1];
    }
    *(float *)(param_1 + 0xf0) = fVar28;
    if (local_a0 != (float *)0x0) {
      operator_delete(local_a0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return param_1 + 0xe8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b81cc  rive::DataConverterFormula::reverseConvert =====

/* rive::DataConverterFormula::reverseConvert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterFormula::reverseConvert(DataValue *param_1,DataBind *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003b81d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x58))();
  return;
}


// ===== 003b81d8  FUN_003b81d8 =====

undefined8 FUN_003b81d8(void)

{
  return 2;
}


// ===== 003b81e0  rive::DataConverterFormula::bindFromContext =====

/* rive::DataConverterFormula::bindFromContext(rive::DataContext*, rive::DataBind*) */

void __thiscall
rive::DataConverterFormula::bindFromContext
          (DataConverterFormula *this,DataContext *param_1,DataBind *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  *(DataBind **)(this + 0xd0) = param_2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar4 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x1bf);
    if ((uVar4 & 1) != 0) {
      DataBindContext::bindFromContext((DataBindContext *)*puVar1,param_1);
    }
  }
  *(DataContext **)(this + 0xc0) = param_1;
  if ((param_2 != (DataBind *)0x0) && (lVar6 = *(long *)(param_2 + 0x38), lVar6 != 0)) {
    FUN_00340fb0(1,lVar6 + 0x8c);
    plVar5 = *(long **)(this + 0x170);
    *(long *)(this + 0x170) = lVar6;
    if ((plVar5 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x8c), iVar3 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    ViewModelInstanceValue::addDependent
              (*(ViewModelInstanceValue **)(this + 0x170),(ViewModelValueDependent *)(this + 0xe0));
    return;
  }
  return;
}


// ===== 003b82c0  rive::DataConverterFormula::unbind =====

/* WARNING: Removing unreachable block (ram,0x003b8364) */
/* rive::DataConverterFormula::unbind() */

void __thiscall rive::DataConverterFormula::unbind(DataConverterFormula *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0x170);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (DataConverterFormula *)*puVar5 != this + 0xe0));
        puVar5 = puVar5 + 1) {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((DataConverterFormula *)*puVar5 != this + 0xe0) {
          puVar3 = puVar4 + 1;
          *puVar4 = (DataConverterFormula *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = *(long **)(this + 0x170);
    *(undefined8 *)(this + 0x170) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x003b83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}


// ===== 003b83cc  FUN_003b83cc =====

void FUN_003b83cc(void)

{
  return;
}


// ===== 003b83d0  FUN_003b83d0 =====

void FUN_003b83d0(void)

{
  return;
}


// ===== 003b83d4  rive::DataConverterFormula::addDirt =====

/* rive::DataConverterFormula::addDirt(rive::ComponentDirt, bool) */

void rive::DataConverterFormula::addDirt(long param_1)

{
  if (*(int *)(param_1 + 0xd8) == 2) {
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x128);
  }
  return;
}


// ===== 003b83ec  FUN_003b83ec =====

void FUN_003b83ec(void)

{
  return;
}


// ===== 003b83f0  FUN_003b83f0 =====

void FUN_003b83f0(void)

{
  return;
}


// ===== 003b83f4  FUN_003b83f4 =====

void FUN_003b83f4(void)

{
  return;
}


// ===== 003b83f8  FUN_003b83f8 =====

void FUN_003b83f8(void)

{
  return;
}


// ===== 003b83fc  rive::DataConverterFormula::addDirt =====

/* non-virtual thunk to rive::DataConverterFormula::addDirt(rive::ComponentDirt, bool) */

void __thiscall rive::DataConverterFormula::addDirt(DataConverterFormula *this)

{
  if (*(int *)(this + -8) == 2) {
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x48);
  }
  return;
}


// ===== 003b8414  FUN_003b8414 =====

void FUN_003b8414(void)

{
  return;
}


// ===== 003b8418  rive::DataConverterFormula::applyFunction =====

/* rive::DataConverterFormula::applyFunction(std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >&, int, int) */

float __thiscall
rive::DataConverterFormula::applyFunction
          (DataConverterFormula *this,vector *param_1,int param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  void *pvVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float *local_90;
  float *local_88;
  float *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_90 = (float *)0x0;
  local_88 = (float *)0x0;
  local_80 = (float *)0x0;
  if (param_3 < 1) {
    pfVar13 = (float *)0x0;
    pfVar11 = (float *)0x0;
  }
  else {
    pfVar9 = (float *)0x0;
    pfVar13 = (float *)0x0;
    pfVar12 = (float *)0x0;
    iVar14 = 0;
    pfVar10 = (float *)0x0;
    do {
      pfVar11 = pfVar10;
      if (*(long *)(param_1 + 8) != *(long *)param_1) {
        pfVar4 = (float *)(*(long *)(param_1 + 8) + -4);
        fVar21 = *pfVar4;
        *(float **)(param_1 + 8) = pfVar4;
        if (pfVar13 < pfVar12) {
          pfVar9 = pfVar13 + 1;
          *pfVar13 = fVar21;
          pfVar13 = pfVar9;
        }
        else {
          lVar15 = (long)pfVar13 - (long)pfVar10;
          uVar5 = (lVar15 >> 2) + 1;
          if (uVar5 >> 0x3e != 0) {
            local_90 = pfVar10;
            local_88 = pfVar9;
            local_80 = pfVar12;
                    /* WARNING: Subroutine does not return */
            FUN_0033dc4c(&local_90);
          }
          uVar6 = (long)pfVar12 - (long)pfVar10 >> 1;
          if (uVar6 <= uVar5) {
            uVar6 = uVar5;
          }
          if (0x7ffffffffffffffb < (ulong)((long)pfVar12 - (long)pfVar10)) {
            uVar6 = 0x3fffffffffffffff;
          }
          if (uVar6 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00324008();
            }
            pvVar3 = operator_new(uVar6 << 2);
          }
          pfVar11 = (float *)((long)pvVar3 + (lVar15 >> 2) * 4);
          pfVar9 = pfVar11 + 1;
          *pfVar11 = fVar21;
          if ((long)pfVar13 - (long)pfVar10 != 0) {
            uVar5 = ((long)pfVar13 - (long)pfVar10) - 4;
            if ((((0xab < uVar5) &&
                 (uVar7 = (long)pvVar3 + lVar15 + -4, uVar7 - (uVar5 & 0xfffffffffffffffc) <= uVar7)
                 ) && ((float *)((long)(pfVar13 + -1) - (uVar5 & 0xfffffffffffffffc)) <=
                       pfVar13 + -1)) && (0x1f < (ulong)((long)pfVar13 + (-lVar15 - (long)pvVar3))))
            {
              pfVar12 = pfVar11 + -4;
              pfVar4 = pfVar13 + -4;
              uVar5 = (uVar5 >> 2) + 1;
              uVar8 = uVar5 & 0x7ffffffffffffff8;
              pfVar13 = pfVar13 + -uVar8;
              uVar7 = uVar8;
              do {
                pfVar2 = pfVar4 + -2;
                uVar19 = *(undefined8 *)(pfVar4 + -4);
                uVar18 = *(undefined8 *)(pfVar4 + 2);
                uVar17 = *(undefined8 *)pfVar4;
                uVar7 = uVar7 - 8;
                pfVar4 = pfVar4 + -8;
                *(undefined8 *)(pfVar12 + -2) = *(undefined8 *)pfVar2;
                *(undefined8 *)(pfVar12 + -4) = uVar19;
                *(undefined8 *)(pfVar12 + 2) = uVar18;
                *(undefined8 *)pfVar12 = uVar17;
                pfVar12 = pfVar12 + -8;
              } while (uVar7 != 0);
              pfVar11 = pfVar11 + -uVar8;
              if (uVar5 == uVar8) goto LAB_003b8538;
            }
            do {
              pfVar13 = pfVar13 + -1;
              pfVar11 = pfVar11 + -1;
              *pfVar11 = *pfVar13;
            } while (pfVar13 != pfVar10);
          }
LAB_003b8538:
          pfVar12 = (float *)((long)pvVar3 + uVar6 * 4);
          pfVar13 = pfVar9;
          if (pfVar10 != (float *)0x0) {
            operator_delete(pfVar10);
          }
        }
      }
      iVar14 = iVar14 + 1;
      pfVar10 = pfVar11;
    } while (iVar14 != param_3);
  }
  fVar21 = 0.0;
  switch(param_2) {
  case 0:
    if ((long)pfVar13 - (long)pfVar11 == 0) break;
    uVar5 = (long)pfVar13 - (long)pfVar11 >> 2;
    fVar21 = *pfVar11;
    if (1 < uVar5) {
      lVar15 = uVar5 - 1;
      pfVar13 = pfVar11;
      do {
        pfVar13 = pfVar13 + 1;
        fVar20 = *pfVar13;
        if (fVar21 <= *pfVar13) {
          fVar20 = fVar21;
        }
        fVar21 = fVar20;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    goto LAB_003b8854;
  case 1:
    if ((long)pfVar13 - (long)pfVar11 != 0) {
      uVar5 = (long)pfVar13 - (long)pfVar11 >> 2;
      fVar21 = *pfVar11;
      if (1 < uVar5) {
        lVar15 = uVar5 - 1;
        pfVar13 = pfVar11;
        do {
          pfVar13 = pfVar13 + 1;
          fVar20 = *pfVar13;
          if (fVar20 == fVar21 || fVar20 < fVar21 != (NAN(fVar20) || NAN(fVar21))) {
            fVar20 = fVar21;
          }
          fVar21 = fVar20;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      goto LAB_003b8854;
    }
    break;
  case 2:
    if (pfVar13 != pfVar11) {
      fVar21 = (float)(int)pfVar13[-1];
    }
    break;
  case 3:
    if (pfVar13 != pfVar11) {
      fVar21 = (float)(int)pfVar13[-1];
    }
    break;
  case 4:
    if (pfVar13 != pfVar11) {
      fVar21 = (float)(int)pfVar13[-1];
    }
    break;
  case 5:
    if (pfVar13 != pfVar11) {
      fVar21 = SQRT(pfVar13[-1]);
    }
    break;
  case 6:
    if (4 < (ulong)((long)pfVar13 - (long)pfVar11)) {
      fVar21 = powf(pfVar13[-1],*(float *)((long)pfVar11 + (((long)pfVar13 - (long)pfVar11) - 8U)));
      goto LAB_003b8854;
    }
    break;
  case 7:
    if (pfVar13 != pfVar11) {
      fVar21 = expf(pfVar13[-1]);
    }
    break;
  case 8:
    if (pfVar13 != pfVar11) {
      fVar21 = logf(pfVar13[-1]);
    }
    break;
  case 9:
    if (pfVar13 != pfVar11) {
      fVar21 = cosf(pfVar13[-1]);
    }
    break;
  case 10:
    if (pfVar13 != pfVar11) {
      fVar21 = sinf(pfVar13[-1]);
    }
    break;
  case 0xb:
    if (pfVar13 != pfVar11) {
      fVar21 = tanf(pfVar13[-1]);
    }
    break;
  case 0xc:
    if (pfVar13 != pfVar11) {
      fVar21 = acosf(pfVar13[-1]);
    }
    break;
  case 0xd:
    if (pfVar13 != pfVar11) {
      fVar21 = asinf(pfVar13[-1]);
    }
    break;
  case 0xe:
    if (pfVar13 != pfVar11) {
      fVar21 = atanf(pfVar13[-1]);
    }
    break;
  case 0xf:
    if (4 < (ulong)((long)pfVar13 - (long)pfVar11)) {
      fVar21 = atan2f(pfVar13[-1],*(float *)((long)pfVar11 + (((long)pfVar13 - (long)pfVar11) - 8U))
                     );
      goto LAB_003b8854;
    }
    break;
  case 0x10:
    uVar16 = getRandom(this,0);
    uVar5 = (long)pfVar13 - (long)pfVar11;
    if (uVar5 == 4) {
      fVar21 = 0.0;
      pfVar13 = pfVar13 + -1;
LAB_003b8834:
      fVar20 = *pfVar13;
    }
    else {
      if (4 < uVar5) {
        fVar21 = pfVar13[-1];
        pfVar13 = (float *)((long)pfVar11 + (uVar5 - 8));
        goto LAB_003b8834;
      }
      fVar21 = 0.0;
      fVar20 = 1.0;
    }
    fVar21 = (float)NEON_fmadd(fVar20 - fVar21,uVar16,fVar21);
  }
  if (pfVar11 != (float *)0x0) {
LAB_003b8854:
    operator_delete(pfVar11);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return fVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003b88ac  rive::DataConverterFormula::getRandom =====

/* rive::DataConverterFormula::getRandom(int) */

float __thiscall rive::DataConverterFormula::getRandom(DataConverterFormula *this,int param_1)

{
  float *pfVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (*(int *)(this + 0xd8) == 1) {
    iVar2 = rand();
    fVar16 = (float)iVar2 / 2.1474836e+09;
  }
  else {
    lVar14 = *(long *)(this + 0x128);
    lVar6 = *(long *)(this + 0x130) - lVar14;
    while ((ulong)(lVar6 >> 2) <= (ulong)(long)param_1) {
      iVar2 = rand();
      pfVar15 = *(float **)(this + 0x130);
      if (pfVar15 < *(float **)(this + 0x138)) {
        pfVar13 = pfVar15 + 1;
        *pfVar15 = (float)iVar2 / 2.1474836e+09;
      }
      else {
        pfVar12 = *(float **)(this + 0x128);
        lVar14 = (long)pfVar15 - (long)pfVar12 >> 2;
        uVar7 = lVar14 + 1;
        if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0033dc4c(this + 0x128);
        }
        uVar4 = (long)*(float **)(this + 0x138) - (long)pfVar12;
        uVar8 = (long)uVar4 >> 1;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7ffffffffffffffb < uVar4) {
          uVar8 = 0x3fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar3 = operator_new(uVar8 << 2);
        }
        pfVar5 = (float *)((long)pvVar3 + lVar14 * 4);
        pfVar13 = pfVar5 + 1;
        *pfVar5 = (float)iVar2 / 2.1474836e+09;
        if ((long)pfVar15 - (long)pfVar12 != 0) {
          uVar7 = ((long)pfVar15 - (long)pfVar12) - 4;
          if ((0x1b < uVar7) &&
             (0x1f < (ulong)((long)pfVar15 + (-((long)pfVar15 - (long)pfVar12) - (long)pvVar3)))) {
            pfVar10 = pfVar5 + -4;
            pfVar11 = pfVar15 + -4;
            uVar7 = (uVar7 >> 2) + 1;
            uVar9 = uVar7 & 0x7ffffffffffffff8;
            pfVar15 = pfVar15 + -uVar9;
            uVar4 = uVar9;
            do {
              pfVar1 = pfVar11 + -2;
              uVar19 = *(undefined8 *)(pfVar11 + -4);
              uVar18 = *(undefined8 *)(pfVar11 + 2);
              uVar17 = *(undefined8 *)pfVar11;
              uVar4 = uVar4 - 8;
              pfVar11 = pfVar11 + -8;
              *(undefined8 *)(pfVar10 + -2) = *(undefined8 *)pfVar1;
              *(undefined8 *)(pfVar10 + -4) = uVar19;
              *(undefined8 *)(pfVar10 + 2) = uVar18;
              *(undefined8 *)pfVar10 = uVar17;
              pfVar10 = pfVar10 + -8;
            } while (uVar4 != 0);
            pfVar5 = pfVar5 + -uVar9;
            if (uVar7 == uVar9) goto LAB_003b8a34;
          }
          do {
            pfVar15 = pfVar15 + -1;
            pfVar5 = pfVar5 + -1;
            *pfVar5 = *pfVar15;
          } while (pfVar15 != pfVar12);
        }
LAB_003b8a34:
        *(float **)(this + 0x128) = pfVar5;
        *(float **)(this + 0x130) = pfVar13;
        *(void **)(this + 0x138) = (void *)((long)pvVar3 + uVar8 * 4);
        if (pfVar12 != (float *)0x0) {
          operator_delete(pfVar12);
        }
      }
      lVar14 = *(long *)(this + 0x128);
      *(float **)(this + 0x130) = pfVar13;
      lVar6 = (long)pfVar13 - lVar14;
    }
    fVar16 = *(float *)(lVar14 + (long)param_1 * 4);
  }
  return fVar16;
}


// ===== 003b8a5c  rive::DataConverterFormula::addOutputToken =====

/* rive::DataConverterFormula::addOutputToken(rive::FormulaToken*, int) */

void __thiscall
rive::DataConverterFormula::addOutputToken
          (DataConverterFormula *this,FormulaToken *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FormulaToken *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar12 = *(undefined8 **)(this + 0x118);
  local_70 = param_1;
  if (puVar12 < *(undefined8 **)(this + 0x120)) {
    puVar14 = puVar12 + 1;
    *puVar12 = param_1;
    goto LAB_003b8bb8;
  }
  puVar11 = *(undefined8 **)(this + 0x110);
  lVar4 = (long)puVar12 - (long)puVar11 >> 3;
  uVar8 = lVar4 + 1;
  if (uVar8 >> 0x3d != 0) {
    FUN_003b8c0c();
LAB_003b8c08:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(undefined8 **)(this + 0x120) - (long)puVar11;
  uVar7 = (long)uVar5 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_003b8c08;
    pvVar3 = operator_new(uVar7 << 3);
  }
  puVar6 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  puVar14 = puVar6 + 1;
  *puVar6 = param_1;
  if ((long)puVar12 - (long)puVar11 != 0) {
    uVar8 = ((long)puVar12 - (long)puVar11) - 8;
    puVar13 = puVar12;
    if ((0x37 < uVar8) &&
       (0x1f < (ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar11) - (long)pvVar3)))) {
      puVar10 = puVar12 + -2;
      uVar8 = (uVar8 >> 3) + 1;
      uVar9 = uVar8 & 0x3ffffffffffffffc;
      puVar13 = puVar12 + -uVar9;
      puVar12 = puVar6 + -2;
      uVar5 = uVar9;
      do {
        puVar2 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar5 = uVar5 - 4;
        puVar10 = puVar10 + -4;
        puVar12[-1] = *puVar2;
        puVar12[-2] = uVar17;
        puVar12[1] = uVar16;
        *puVar12 = uVar15;
        puVar12 = puVar12 + -4;
      } while (uVar5 != 0);
      puVar6 = puVar6 + -uVar9;
      puVar12 = puVar11;
      if (uVar8 == uVar9) goto LAB_003b8ba4;
    }
    do {
      puVar13 = puVar13 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar13;
    } while (puVar13 != puVar11);
    puVar12 = *(undefined8 **)(this + 0x110);
  }
LAB_003b8ba4:
  *(undefined8 **)(this + 0x110) = puVar6;
  *(undefined8 **)(this + 0x118) = puVar14;
  *(void **)(this + 0x120) = (void *)((long)pvVar3 + uVar7 * 8);
  if (puVar12 != (undefined8 *)0x0) {
    operator_delete(puVar12);
  }
LAB_003b8bb8:
  *(undefined8 **)(this + 0x118) = puVar14;
  lVar4 = FUN_003b8c20(this + 0x140,local_70,&local_70);
  *(int *)(lVar4 + 0x18) = param_2;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003b8c0c  FUN_003b8c0c =====

void FUN_003b8c0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003b8c20  FUN_003b8c20 =====

void FUN_003b8c20(long *param_1,ulong param_2,long *param_3)

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
  *(undefined4 *)(plVar7 + 3) = 0;
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
LAB_003b8dc4:
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
LAB_003b8ffc:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_003b8ffc;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_003b8dc4;
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
    if (*plVar7 == 0) goto LAB_003b8fdc;
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
LAB_003b8fdc:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 003b9058  rive::DataConverterFormula::getPrecedence =====

/* rive::DataConverterFormula::getPrecedence(rive::FormulaToken*) */

undefined4 __thiscall
rive::DataConverterFormula::getPrecedence(DataConverterFormula *this,FormulaToken *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x21b);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x21e), (uVar2 & 1) == 0)) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x21d);
    if (((uVar2 & 1) == 0) || (3 < *(uint *)(param_1 + 0x18))) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_0024e140 + (ulong)*(uint *)(param_1 + 0x18) * 4);
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 003b90e4  rive::DataConverterFormula::calculateFormula =====

/* WARNING: Removing unreachable block (ram,0x003b93dc) */
/* rive::DataConverterFormula::calculateFormula() */

void __thiscall rive::DataConverterFormula::calculateFormula(DataConverterFormula *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined2 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *local_80;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar16 = *(undefined8 **)(this + 0xf8);
  puVar26 = *(undefined8 **)(this + 0x100);
  if (puVar16 != puVar26) {
    lVar24 = 0;
    local_80 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)0x0;
    do {
      uVar4 = (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,0x21f);
      puVar14 = puVar15;
      puVar23 = puVar18;
      if (((uVar4 & 1) == 0) &&
         (uVar4 = (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,0x221), (uVar4 & 1) == 0)
         ) {
        uVar4 = (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,0x21d);
        if ((uVar4 & 1) == 0) {
          uVar4 = (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,0x220);
          if (((uVar4 & 1) == 0) &&
             (uVar4 = (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,0x21e),
             (uVar4 & 1) == 0)) {
            uVar4 = (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,0x21c);
            if ((uVar4 & 1) == 0) {
              uVar4 = (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,0x21a);
              if (((uVar4 & 1) != 0) && (puVar14 = puVar18, (long)puVar15 - (long)puVar18 != 0)) {
                uVar4 = *(ulong *)(this + 0x148);
                lVar22 = (long)puVar15 - (long)puVar18 >> 3;
                uVar25 = NEON_cnt(uVar4,1);
                uVar27 = NEON_uaddlv(uVar25,1);
                uVar8 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar27) & 0xffffffff;
                do {
                  lVar22 = lVar22 + -1;
                  local_70 = puVar18[lVar22];
                  if (uVar4 != 0) {
                    uVar7 = ((ulong)(uint)((int)local_70 << 3) + 8 ^ local_70 >> 0x20) *
                            -0x622015f714c7d297;
                    uVar7 = (local_70 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
                    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
                    if (uVar8 < 2) {
                      uVar9 = uVar7 & uVar4 - 1;
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
                    plVar20 = *(long **)(*(long *)(this + 0x140) + uVar9 * 8);
                    if (plVar20 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar20 = (long *)*plVar20;
                          if (plVar20 == (long *)0x0) goto LAB_003b9a0c;
                          uVar13 = plVar20[1];
                          if (uVar13 != uVar7) break;
                          if (plVar20[2] == local_70) {
                            iVar1 = *(int *)(plVar20 + 3);
                            lVar22 = FUN_003b8c20(this + 0x140,local_70,&local_70);
                            *(int *)(lVar22 + 0x18) = iVar1 + 1;
                            goto LAB_003b9be8;
                          }
                        }
                        if (uVar8 < 2) {
                          uVar13 = uVar13 & uVar4 - 1;
                        }
                        else if (uVar4 <= uVar13) {
                          uVar2 = 0;
                          if (uVar4 != 0) {
                            uVar2 = uVar13 / uVar4;
                          }
                          uVar13 = uVar13 - uVar2 * uVar4;
                        }
                      } while (uVar13 == uVar9);
                    }
                  }
LAB_003b9a0c:
                } while (lVar22 != 0);
LAB_003b9be8:
                do {
                  puVar19 = puVar15 + -1;
                  uVar4 = (**(code **)(*(long *)*puVar19 + 0x18))((long *)*puVar19,0x220);
                  puVar14 = puVar15;
                  if (((uVar4 & 1) != 0) ||
                     (uVar4 = (**(code **)(*(long *)*puVar19 + 0x18))((long *)*puVar19,0x21e),
                     (uVar4 & 1) != 0)) break;
                  puVar15 = *(undefined8 **)(this + 0x118);
                  uVar25 = *puVar19;
                  if (puVar15 < *(undefined8 **)(this + 0x120)) {
                    puVar14 = puVar15 + 1;
                    *puVar15 = uVar25;
                  }
                  else {
                    puVar17 = *(undefined8 **)(this + 0x110);
                    lVar22 = (long)puVar15 - (long)puVar17 >> 3;
                    uVar4 = lVar22 + 1;
                    if (uVar4 >> 0x3d != 0) goto LAB_003ba0a0;
                    uVar7 = (long)*(undefined8 **)(this + 0x120) - (long)puVar17;
                    uVar8 = (long)uVar7 >> 2;
                    if (uVar8 <= uVar4) {
                      uVar8 = uVar4;
                    }
                    if (0x7ffffffffffffff7 < uVar7) {
                      uVar8 = 0x1fffffffffffffff;
                    }
                    if (uVar8 == 0) {
                      pvVar5 = (void *)0x0;
                    }
                    else {
                      if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
                      pvVar5 = operator_new(uVar8 << 3);
                    }
                    puVar6 = (undefined8 *)((long)pvVar5 + lVar22 * 8);
                    puVar14 = puVar6 + 1;
                    *puVar6 = uVar25;
                    if ((long)puVar15 - (long)puVar17 != 0) {
                      uVar4 = ((long)puVar15 - (long)puVar17) - 8;
                      puVar11 = puVar15;
                      if ((0x37 < uVar4) &&
                         (0x1f < (ulong)((long)puVar15 +
                                        (-((long)puVar15 - (long)puVar17) - (long)pvVar5)))) {
                        puVar10 = puVar6 + -2;
                        puVar12 = puVar15 + -2;
                        uVar4 = (uVar4 >> 3) + 1;
                        uVar9 = uVar4 & 0x3ffffffffffffffc;
                        puVar11 = puVar15 + -uVar9;
                        uVar7 = uVar9;
                        do {
                          puVar15 = puVar12 + -1;
                          uVar29 = puVar12[-2];
                          uVar28 = puVar12[1];
                          uVar25 = *puVar12;
                          uVar7 = uVar7 - 4;
                          puVar12 = puVar12 + -4;
                          puVar10[-1] = *puVar15;
                          puVar10[-2] = uVar29;
                          puVar10[1] = uVar28;
                          *puVar10 = uVar25;
                          puVar10 = puVar10 + -4;
                        } while (uVar7 != 0);
                        puVar6 = puVar6 + -uVar9;
                        puVar15 = puVar17;
                        if (uVar4 == uVar9) goto LAB_003b9d84;
                      }
                      do {
                        puVar11 = puVar11 + -1;
                        puVar6 = puVar6 + -1;
                        *puVar6 = *puVar11;
                      } while (puVar11 != puVar17);
                      puVar15 = *(undefined8 **)(this + 0x110);
                    }
LAB_003b9d84:
                    *(undefined8 **)(this + 0x110) = puVar6;
                    *(undefined8 **)(this + 0x118) = puVar14;
                    *(void **)(this + 0x120) = (void *)((long)pvVar5 + uVar8 * 8);
                    if (puVar15 != (undefined8 *)0x0) {
                      operator_delete(puVar15);
                    }
                  }
                  *(undefined8 **)(this + 0x118) = puVar14;
                  puVar15 = puVar19;
                  puVar14 = puVar18;
                } while (puVar19 != puVar18);
              }
            }
            else {
              while (puVar14 = puVar18, puVar15 != puVar18) {
                puVar14 = puVar15 + -1;
                uVar4 = (**(code **)(*(long *)*puVar14 + 0x18))((long *)*puVar14,0x220);
                if (((uVar4 & 1) != 0) ||
                   (uVar4 = (**(code **)(*(long *)*puVar14 + 0x18))((long *)*puVar14,0x21e),
                   (uVar4 & 1) != 0)) {
                  puVar14 = puVar15;
                  if (puVar15 != puVar18) {
                    puVar15 = puVar15 + -1;
                    plVar20 = (long *)*puVar15;
                    uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x21e);
                    puVar14 = puVar15;
                    if ((uVar4 & 1) != 0) {
                      puVar18 = *(undefined8 **)(this + 0x118);
                      if (*(undefined8 **)(this + 0x120) <= puVar18) {
                        puVar19 = *(undefined8 **)(this + 0x110);
                        lVar22 = (long)puVar18 - (long)puVar19 >> 3;
                        uVar4 = lVar22 + 1;
                        if (uVar4 >> 0x3d != 0) goto LAB_003ba0a0;
                        uVar7 = (long)*(undefined8 **)(this + 0x120) - (long)puVar19;
                        uVar8 = (long)uVar7 >> 2;
                        if (uVar8 <= uVar4) {
                          uVar8 = uVar4;
                        }
                        if (0x7ffffffffffffff7 < uVar7) {
                          uVar8 = 0x1fffffffffffffff;
                        }
                        if (uVar8 == 0) {
                          pvVar5 = (void *)0x0;
                        }
                        else {
                          if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
                          pvVar5 = operator_new(uVar8 << 3);
                        }
                        puVar17 = (undefined8 *)((long)pvVar5 + lVar22 * 8);
                        puVar14 = puVar17 + 1;
                        *puVar17 = plVar20;
                        if ((long)puVar18 - (long)puVar19 == 0) goto LAB_003b9ec4;
                        uVar4 = ((long)puVar18 - (long)puVar19) - 8;
                        puVar6 = puVar18;
                        if ((uVar4 < 0x38) ||
                           ((ulong)((long)puVar18 +
                                   (-((long)puVar18 - (long)puVar19) - (long)pvVar5)) < 0x20))
                        goto LAB_003b9ea8;
                        puVar11 = puVar17 + -2;
                        puVar10 = puVar18 + -2;
                        uVar4 = (uVar4 >> 3) + 1;
                        uVar9 = uVar4 & 0x3ffffffffffffffc;
                        puVar6 = puVar18 + -uVar9;
                        uVar7 = uVar9;
                        do {
                          puVar18 = puVar10 + -1;
                          uVar29 = puVar10[-2];
                          uVar28 = puVar10[1];
                          uVar25 = *puVar10;
                          uVar7 = uVar7 - 4;
                          puVar10 = puVar10 + -4;
                          puVar11[-1] = *puVar18;
                          puVar11[-2] = uVar29;
                          puVar11[1] = uVar28;
                          *puVar11 = uVar25;
                          puVar11 = puVar11 + -4;
                        } while (uVar7 != 0);
                        puVar17 = puVar17 + -uVar9;
                        puVar18 = puVar19;
                        if (uVar4 != uVar9) {
LAB_003b9ea8:
                          do {
                            puVar6 = puVar6 + -1;
                            puVar17 = puVar17 + -1;
                            *puVar17 = *puVar6;
                          } while (puVar6 != puVar19);
                          puVar18 = *(undefined8 **)(this + 0x110);
                        }
LAB_003b9ec4:
                        *(undefined8 **)(this + 0x110) = puVar17;
                        *(undefined8 **)(this + 0x118) = puVar14;
                        *(void **)(this + 0x120) = (void *)((long)pvVar5 + uVar8 * 8);
                        if (puVar18 != (undefined8 *)0x0) {
                          operator_delete(puVar18);
                        }
                        goto LAB_003b91a4;
                      }
                      *puVar18 = plVar20;
                      *(undefined8 **)(this + 0x118) = puVar18 + 1;
                    }
                  }
                  break;
                }
                puVar15 = *(undefined8 **)(this + 0x118);
                uVar25 = *puVar14;
                if (puVar15 < *(undefined8 **)(this + 0x120)) {
                  puVar6 = puVar15 + 1;
                  *puVar15 = uVar25;
                }
                else {
                  puVar19 = *(undefined8 **)(this + 0x110);
                  lVar22 = (long)puVar15 - (long)puVar19 >> 3;
                  uVar4 = lVar22 + 1;
                  if (uVar4 >> 0x3d != 0) goto LAB_003ba0a0;
                  uVar7 = (long)*(undefined8 **)(this + 0x120) - (long)puVar19;
                  uVar8 = (long)uVar7 >> 2;
                  if (uVar8 <= uVar4) {
                    uVar8 = uVar4;
                  }
                  if (0x7ffffffffffffff7 < uVar7) {
                    uVar8 = 0x1fffffffffffffff;
                  }
                  if (uVar8 == 0) {
                    pvVar5 = (void *)0x0;
                  }
                  else {
                    if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
                    pvVar5 = operator_new(uVar8 << 3);
                  }
                  puVar17 = (undefined8 *)((long)pvVar5 + lVar22 * 8);
                  puVar6 = puVar17 + 1;
                  *puVar17 = uVar25;
                  if ((long)puVar15 - (long)puVar19 != 0) {
                    uVar4 = ((long)puVar15 - (long)puVar19) - 8;
                    puVar11 = puVar15;
                    if ((0x37 < uVar4) &&
                       (0x1f < (ulong)((long)puVar15 +
                                      (-((long)puVar15 - (long)puVar19) - (long)pvVar5)))) {
                      puVar10 = puVar17 + -2;
                      puVar12 = puVar15 + -2;
                      uVar4 = (uVar4 >> 3) + 1;
                      uVar9 = uVar4 & 0x3ffffffffffffffc;
                      puVar11 = puVar15 + -uVar9;
                      uVar7 = uVar9;
                      do {
                        puVar15 = puVar12 + -1;
                        uVar29 = puVar12[-2];
                        uVar28 = puVar12[1];
                        uVar25 = *puVar12;
                        uVar7 = uVar7 - 4;
                        puVar12 = puVar12 + -4;
                        puVar10[-1] = *puVar15;
                        puVar10[-2] = uVar29;
                        puVar10[1] = uVar28;
                        *puVar10 = uVar25;
                        puVar10 = puVar10 + -4;
                      } while (uVar7 != 0);
                      puVar17 = puVar17 + -uVar9;
                      puVar15 = puVar19;
                      if (uVar4 == uVar9) goto LAB_003b984c;
                    }
                    do {
                      puVar11 = puVar11 + -1;
                      puVar17 = puVar17 + -1;
                      *puVar17 = *puVar11;
                    } while (puVar11 != puVar19);
                    puVar15 = *(undefined8 **)(this + 0x110);
                  }
LAB_003b984c:
                  *(undefined8 **)(this + 0x110) = puVar17;
                  *(undefined8 **)(this + 0x118) = puVar6;
                  *(void **)(this + 0x120) = (void *)((long)pvVar5 + uVar8 * 8);
                  if (puVar15 != (undefined8 *)0x0) {
                    operator_delete(puVar15);
                  }
                }
                *(undefined8 **)(this + 0x118) = puVar6;
                puVar15 = puVar14;
              }
            }
          }
          else {
            if ((*(long *)(this + 0x100) - *(long *)(this + 0xf8) >> 3) + -1 == lVar24) {
              plVar20 = (long *)0x0;
            }
            else {
              plVar20 = *(long **)(*(long *)(this + 0xf8) + lVar24 * 8 + 8);
              if (plVar20 != (long *)0x0) {
                plVar20 = (long *)(**(code **)(*plVar20 + 0x18))(plVar20,0x21c);
              }
            }
            lVar22 = FUN_003b8c20(this + 0x140,*puVar16,puVar16);
            *(uint *)(lVar22 + 0x18) = ((uint)plVar20 ^ 0xffffffff) & 1;
            if (puVar15 < local_80) {
              *puVar15 = *puVar16;
              puVar14 = puVar15 + 1;
            }
            else {
              lVar22 = (long)puVar15 - (long)puVar18 >> 3;
              uVar4 = lVar22 + 1;
              if (uVar4 >> 0x3d != 0) goto LAB_003ba0a0;
              uVar8 = (long)local_80 - (long)puVar18 >> 2;
              if (uVar8 <= uVar4) {
                uVar8 = uVar4;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_80 - (long)puVar18)) {
                uVar8 = 0x1fffffffffffffff;
              }
              if (uVar8 == 0) {
                pvVar5 = (void *)0x0;
              }
              else {
                if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
                pvVar5 = operator_new(uVar8 << 3);
              }
              puVar23 = (undefined8 *)((long)pvVar5 + lVar22 * 8);
              puVar14 = puVar23 + 1;
              *puVar23 = *puVar16;
              if ((long)puVar15 - (long)puVar18 != 0) {
                uVar4 = ((long)puVar15 - (long)puVar18) - 8;
                if ((0x37 < uVar4) &&
                   (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar18) - (long)pvVar5)
                                  ))) {
                  puVar19 = puVar23 + -2;
                  puVar17 = puVar15 + -2;
                  uVar4 = (uVar4 >> 3) + 1;
                  uVar9 = uVar4 & 0x3ffffffffffffffc;
                  puVar15 = puVar15 + -uVar9;
                  uVar7 = uVar9;
                  do {
                    puVar6 = puVar17 + -1;
                    uVar29 = puVar17[-2];
                    uVar28 = puVar17[1];
                    uVar25 = *puVar17;
                    uVar7 = uVar7 - 4;
                    puVar17 = puVar17 + -4;
                    puVar19[-1] = *puVar6;
                    puVar19[-2] = uVar29;
                    puVar19[1] = uVar28;
                    *puVar19 = uVar25;
                    puVar19 = puVar19 + -4;
                  } while (uVar7 != 0);
                  puVar23 = puVar23 + -uVar9;
                  if (uVar4 == uVar9) goto LAB_003b99ac;
                }
                do {
                  puVar15 = puVar15 + -1;
                  puVar23 = puVar23 + -1;
                  *puVar23 = *puVar15;
                } while (puVar15 != puVar18);
              }
LAB_003b99ac:
              local_80 = (undefined8 *)((long)pvVar5 + uVar8 * 8);
              if (puVar18 != (undefined8 *)0x0) {
                operator_delete(puVar18);
              }
            }
          }
        }
        else {
          while (puVar19 = puVar18, puVar15 != puVar18) {
            puVar14 = puVar15 + -1;
            uVar4 = (**(code **)(*(long *)*puVar14 + 0x18))((long *)*puVar14,0x220);
            puVar19 = puVar15;
            if ((uVar4 & 1) != 0) break;
            plVar20 = (long *)*puVar14;
            uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x21b);
            if (((uVar4 & 1) == 0) &&
               (uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x21e), (uVar4 & 1) == 0)) {
              uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x21d);
              if (((uVar4 & 1) == 0) || (3 < *(uint *)(plVar20 + 3))) {
                uVar21 = 0;
              }
              else {
                uVar21 = *(uint *)(&DAT_0024e140 + (ulong)*(uint *)(plVar20 + 3) * 4);
              }
            }
            else {
              uVar21 = 1;
            }
            plVar20 = (long *)*puVar16;
            uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x21b);
            if (((uVar4 & 1) == 0) &&
               (uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x21e), (uVar4 & 1) == 0)) {
              uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x21d);
              if ((((uVar4 & 1) != 0) && (*(uint *)(plVar20 + 3) < 4)) &&
                 (uVar21 < *(uint *)(&DAT_0024e140 + (ulong)*(uint *)(plVar20 + 3) * 4))) break;
            }
            else if (uVar21 == 0) break;
            puVar15 = *(undefined8 **)(this + 0x118);
            uVar25 = *puVar14;
            if (puVar15 < *(undefined8 **)(this + 0x120)) {
              puVar19 = puVar15 + 1;
              *puVar15 = uVar25;
            }
            else {
              puVar17 = *(undefined8 **)(this + 0x110);
              lVar22 = (long)puVar15 - (long)puVar17 >> 3;
              uVar4 = lVar22 + 1;
              if (uVar4 >> 0x3d != 0) goto LAB_003ba0a0;
              uVar7 = (long)*(undefined8 **)(this + 0x120) - (long)puVar17;
              uVar8 = (long)uVar7 >> 2;
              if (uVar8 <= uVar4) {
                uVar8 = uVar4;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar8 = 0x1fffffffffffffff;
              }
              if (uVar8 == 0) {
                pvVar5 = (void *)0x0;
              }
              else {
                if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
                pvVar5 = operator_new(uVar8 << 3);
              }
              puVar6 = (undefined8 *)((long)pvVar5 + lVar22 * 8);
              puVar19 = puVar6 + 1;
              *puVar6 = uVar25;
              if ((long)puVar15 - (long)puVar17 != 0) {
                uVar4 = ((long)puVar15 - (long)puVar17) - 8;
                puVar11 = puVar15;
                if ((0x37 < uVar4) &&
                   (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar17) - (long)pvVar5)
                                  ))) {
                  puVar10 = puVar6 + -2;
                  puVar12 = puVar15 + -2;
                  uVar4 = (uVar4 >> 3) + 1;
                  uVar9 = uVar4 & 0x3ffffffffffffffc;
                  puVar11 = puVar15 + -uVar9;
                  uVar7 = uVar9;
                  do {
                    puVar15 = puVar12 + -1;
                    uVar29 = puVar12[-2];
                    uVar28 = puVar12[1];
                    uVar25 = *puVar12;
                    uVar7 = uVar7 - 4;
                    puVar12 = puVar12 + -4;
                    puVar10[-1] = *puVar15;
                    puVar10[-2] = uVar29;
                    puVar10[1] = uVar28;
                    *puVar10 = uVar25;
                    puVar10 = puVar10 + -4;
                  } while (uVar7 != 0);
                  puVar6 = puVar6 + -uVar9;
                  puVar15 = puVar17;
                  if (uVar4 == uVar9) goto LAB_003b94a4;
                }
                do {
                  puVar11 = puVar11 + -1;
                  puVar6 = puVar6 + -1;
                  *puVar6 = *puVar11;
                } while (puVar11 != puVar17);
                puVar15 = *(undefined8 **)(this + 0x110);
              }
LAB_003b94a4:
              *(undefined8 **)(this + 0x110) = puVar6;
              *(undefined8 **)(this + 0x118) = puVar19;
              *(void **)(this + 0x120) = (void *)((long)pvVar5 + uVar8 * 8);
              if (puVar15 != (undefined8 *)0x0) {
                operator_delete(puVar15);
              }
            }
            *(undefined8 **)(this + 0x118) = puVar19;
            puVar15 = puVar14;
          }
          if (puVar19 < local_80) {
            *puVar19 = *puVar16;
            puVar14 = puVar19 + 1;
          }
          else {
            lVar22 = (long)puVar19 - (long)puVar18 >> 3;
            uVar4 = lVar22 + 1;
            if (uVar4 >> 0x3d != 0) goto LAB_003ba0a0;
            uVar8 = (long)local_80 - (long)puVar18 >> 2;
            if (uVar8 <= uVar4) {
              uVar8 = uVar4;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_80 - (long)puVar18)) {
              uVar8 = 0x1fffffffffffffff;
            }
            if (uVar8 == 0) {
              pvVar5 = (void *)0x0;
            }
            else {
              if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
              pvVar5 = operator_new(uVar8 << 3);
            }
            puVar23 = (undefined8 *)((long)pvVar5 + lVar22 * 8);
            puVar14 = puVar23 + 1;
            *puVar23 = *puVar16;
            if ((long)puVar19 - (long)puVar18 != 0) {
              uVar4 = ((long)puVar19 - (long)puVar18) - 8;
              if ((0x37 < uVar4) &&
                 (0x1f < (ulong)((long)puVar19 + (-((long)puVar19 - (long)puVar18) - (long)pvVar5)))
                 ) {
                puVar15 = puVar23 + -2;
                puVar17 = puVar19 + -2;
                uVar4 = (uVar4 >> 3) + 1;
                uVar9 = uVar4 & 0x3ffffffffffffffc;
                puVar19 = puVar19 + -uVar9;
                uVar7 = uVar9;
                do {
                  puVar6 = puVar17 + -1;
                  uVar29 = puVar17[-2];
                  uVar28 = puVar17[1];
                  uVar25 = *puVar17;
                  uVar7 = uVar7 - 4;
                  puVar17 = puVar17 + -4;
                  puVar15[-1] = *puVar6;
                  puVar15[-2] = uVar29;
                  puVar15[1] = uVar28;
                  *puVar15 = uVar25;
                  puVar15 = puVar15 + -4;
                } while (uVar7 != 0);
                puVar23 = puVar23 + -uVar9;
                if (uVar4 == uVar9) goto LAB_003b9938;
              }
              do {
                puVar19 = puVar19 + -1;
                puVar23 = puVar23 + -1;
                *puVar23 = *puVar19;
              } while (puVar19 != puVar18);
            }
LAB_003b9938:
            local_80 = (undefined8 *)((long)pvVar5 + uVar8 * 8);
            if (puVar18 != (undefined8 *)0x0) {
              operator_delete(puVar18);
            }
          }
        }
      }
      else {
        puVar18 = *(undefined8 **)(this + 0x118);
        if (puVar18 < *(undefined8 **)(this + 0x120)) {
          puVar14 = puVar18 + 1;
          *puVar18 = *puVar16;
LAB_003b91a4:
          *(undefined8 **)(this + 0x118) = puVar14;
          puVar14 = puVar15;
          goto LAB_003b914c;
        }
        puVar15 = *(undefined8 **)(this + 0x110);
        lVar22 = (long)puVar18 - (long)puVar15 >> 3;
        uVar4 = lVar22 + 1;
        if (uVar4 >> 0x3d != 0) goto LAB_003ba0a0;
        uVar7 = (long)*(undefined8 **)(this + 0x120) - (long)puVar15;
        uVar8 = (long)uVar7 >> 2;
        if (uVar8 <= uVar4) {
          uVar8 = uVar4;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
          pvVar5 = operator_new(uVar8 << 3);
        }
        puVar19 = (undefined8 *)((long)pvVar5 + lVar22 * 8);
        puVar17 = puVar19 + 1;
        *puVar19 = *puVar16;
        if ((long)puVar18 - (long)puVar15 != 0) {
          uVar4 = ((long)puVar18 - (long)puVar15) - 8;
          puVar6 = puVar18;
          if ((0x37 < uVar4) &&
             (0x1f < (ulong)((long)puVar18 + (-((long)puVar18 - (long)puVar15) - (long)pvVar5)))) {
            puVar11 = puVar19 + -2;
            puVar10 = puVar18 + -2;
            uVar4 = (uVar4 >> 3) + 1;
            uVar9 = uVar4 & 0x3ffffffffffffffc;
            puVar6 = puVar18 + -uVar9;
            uVar7 = uVar9;
            do {
              puVar18 = puVar10 + -1;
              uVar29 = puVar10[-2];
              uVar28 = puVar10[1];
              uVar25 = *puVar10;
              uVar7 = uVar7 - 4;
              puVar10 = puVar10 + -4;
              puVar11[-1] = *puVar18;
              puVar11[-2] = uVar29;
              puVar11[1] = uVar28;
              *puVar11 = uVar25;
              puVar11 = puVar11 + -4;
            } while (uVar7 != 0);
            puVar19 = puVar19 + -uVar9;
            puVar18 = puVar15;
            if (uVar4 == uVar9) goto LAB_003b9564;
          }
          do {
            puVar6 = puVar6 + -1;
            puVar19 = puVar19 + -1;
            *puVar19 = *puVar6;
          } while (puVar6 != puVar15);
          puVar18 = *(undefined8 **)(this + 0x110);
        }
LAB_003b9564:
        *(undefined8 **)(this + 0x110) = puVar19;
        *(undefined8 **)(this + 0x118) = puVar17;
        *(void **)(this + 0x120) = (void *)((long)pvVar5 + uVar8 * 8);
        if (puVar18 != (undefined8 *)0x0) {
          operator_delete(puVar18);
        }
        *(undefined8 **)(this + 0x118) = puVar17;
      }
LAB_003b914c:
      puVar16 = puVar16 + 1;
      lVar24 = lVar24 + 1;
      puVar15 = puVar14;
      puVar18 = puVar23;
    } while (puVar16 != puVar26);
    while (puVar14 != puVar23) {
      puVar14 = puVar14 + -1;
      plVar20 = (long *)*puVar14;
      uVar4 = (**(code **)(*plVar20 + 0x18))(plVar20,0x220);
      if ((uVar4 & 1) == 0) {
        puVar16 = *(undefined8 **)(this + 0x118);
        if (puVar16 < *(undefined8 **)(this + 0x120)) {
          puVar26 = puVar16 + 1;
          *puVar16 = plVar20;
        }
        else {
          puVar15 = *(undefined8 **)(this + 0x110);
          lVar24 = (long)puVar16 - (long)puVar15 >> 3;
          uVar4 = lVar24 + 1;
          if (uVar4 >> 0x3d != 0) {
LAB_003ba0a0:
            FUN_003b8c0c();
LAB_003ba0a4:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar7 = (long)*(undefined8 **)(this + 0x120) - (long)puVar15;
          uVar8 = (long)uVar7 >> 2;
          if (uVar8 <= uVar4) {
            uVar8 = uVar4;
          }
          if (0x7ffffffffffffff7 < uVar7) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            if (uVar8 >> 0x3d != 0) goto LAB_003ba0a4;
            pvVar5 = operator_new(uVar8 << 3);
          }
          puVar18 = (undefined8 *)((long)pvVar5 + lVar24 * 8);
          puVar26 = puVar18 + 1;
          *puVar18 = plVar20;
          if ((long)puVar16 - (long)puVar15 != 0) {
            uVar4 = ((long)puVar16 - (long)puVar15) - 8;
            puVar19 = puVar16;
            if ((0x37 < uVar4) &&
               (0x1f < (ulong)((long)puVar16 + (-((long)puVar16 - (long)puVar15) - (long)pvVar5))))
            {
              puVar17 = puVar18 + -2;
              puVar6 = puVar16 + -2;
              uVar4 = (uVar4 >> 3) + 1;
              uVar9 = uVar4 & 0x3ffffffffffffffc;
              puVar19 = puVar16 + -uVar9;
              uVar7 = uVar9;
              do {
                puVar16 = puVar6 + -1;
                uVar29 = puVar6[-2];
                uVar28 = puVar6[1];
                uVar25 = *puVar6;
                uVar7 = uVar7 - 4;
                puVar6 = puVar6 + -4;
                puVar17[-1] = *puVar16;
                puVar17[-2] = uVar29;
                puVar17[1] = uVar28;
                *puVar17 = uVar25;
                puVar17 = puVar17 + -4;
              } while (uVar7 != 0);
              puVar18 = puVar18 + -uVar9;
              puVar16 = puVar15;
              if (uVar4 == uVar9) goto LAB_003ba044;
            }
            do {
              puVar19 = puVar19 + -1;
              puVar18 = puVar18 + -1;
              *puVar18 = *puVar19;
            } while (puVar19 != puVar15);
            puVar16 = *(undefined8 **)(this + 0x110);
          }
LAB_003ba044:
          *(undefined8 **)(this + 0x110) = puVar18;
          *(undefined8 **)(this + 0x118) = puVar26;
          *(void **)(this + 0x120) = (void *)((long)pvVar5 + uVar8 * 8);
          if (puVar16 != (undefined8 *)0x0) {
            operator_delete(puVar16);
          }
        }
        *(undefined8 **)(this + 0x118) = puVar26;
      }
    }
    if (puVar23 != (undefined8 *)0x0) {
      operator_delete(puVar23);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ba0ac  rive::DataConverterFormula::applyOperation =====

/* rive::DataConverterFormula::applyOperation(float, float, int) */

float __thiscall
rive::DataConverterFormula::applyOperation
          (DataConverterFormula *this,float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (param_3 < 2) {
    if (param_3 != 0) {
      fVar2 = param_1 - param_2;
      if (param_3 != 1) {
        fVar2 = 0.0;
      }
      return fVar2;
    }
    return param_1 + param_2;
  }
  if (param_3 != 2) {
    if (param_3 == 3) {
      fVar2 = param_1 / param_2;
    }
    else if (param_3 == 4) {
      fVar2 = -param_2;
      if (0.0 <= param_2) {
        fVar2 = param_2;
      }
      fVar1 = fmodf(param_1,fVar2);
      if (0.0 <= fVar1) {
        fVar2 = -0.0;
      }
      return fVar1 + fVar2;
    }
    return fVar2;
  }
  return param_1 * param_2;
}


// ===== 003ba13c  rive::DataConverterFormula::addToken =====

/* rive::DataConverterFormula::addToken(rive::FormulaToken*) */

void __thiscall
rive::DataConverterFormula::addToken(DataConverterFormula *this,FormulaToken *param_1)

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
    goto LAB_003ba27c;
  }
  puVar9 = *(undefined8 **)(this + 0xf8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003b8c0c();
LAB_003ba29c:
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
    if (uVar5 >> 0x3d != 0) goto LAB_003ba29c;
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
      if (uVar6 == uVar7) goto LAB_003ba268;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xf8);
  }
LAB_003ba268:
  *(undefined8 **)(this + 0xf8) = puVar4;
  *(undefined8 **)(this + 0x100) = puVar13;
  *(void **)(this + 0x108) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003ba27c:
  *(undefined8 **)(this + 0x100) = puVar13;
  return;
}


// ===== 003ba2a0  rive::DataConverter::~DataConverter =====

/* rive::DataConverter::~DataConverter() */

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  
  plVar2 = *(long **)(this + 0x30);
  plVar3 = *(long **)(this + 0x38);
  puVar1 = PTR_vtable_0067d1a0 + 0xc0;
  *(undefined **)this = PTR_vtable_0067d1a0 + 0x10;
  *(undefined **)(this + 0x28) = puVar1;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
  }
  pvVar4 = *(void **)(this + 0xa8);
  *(undefined **)(this + 0x28) = PTR_vtable_0067cef0 + 0x10;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xb0) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x90);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x78);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x60);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x48);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar4;
    operator_delete(pvVar4);
  }
  *(undefined ***)this = &PTR_FUN_00654720;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 003ba3a4  FUN_003ba3a4 =====

void FUN_003ba3a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00654720;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 003ba3c4  FUN_003ba3c4 =====

void FUN_003ba3c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00654720;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ba404  FUN_003ba404 =====

undefined8 FUN_003ba404(void)

{
  return 0x1e8;
}


// ===== 003ba40c  FUN_003ba40c =====

bool FUN_003ba40c(undefined8 param_1,short param_2)

{
  return param_2 == 0x1e8;
}


// ===== 003ba41c  FUN_003ba41c =====

void FUN_003ba41c(long param_1,short param_2,long *param_3)

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
  if (param_2 == 0x296) {
    pcVar4 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar4) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003ba4b0;
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
LAB_003ba4b0:
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
  __stack_chk_fail(param_2 == 0x296);
}


// ===== 003ba50c  rive::DataConverter::~DataConverter =====

/* rive::DataConverter::~DataConverter() */

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  ~DataConverter(this);
  operator_delete(this);
  return;
}


// ===== 003ba530  rive::DataConverter::import =====

/* rive::DataConverter::import(rive::ImportStack&) */

undefined8 __thiscall rive::DataConverter::import(DataConverter *this,ImportStack *param_1)

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
          BackboardImporter::addDataConverter((BackboardImporter *)plVar6[3],this);
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


// ===== 003ba61c  FUN_003ba61c =====

undefined8 FUN_003ba61c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 003ba624  FUN_003ba624 =====

undefined8 FUN_003ba624(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 003ba62c  FUN_003ba62c =====

undefined8 FUN_003ba62c(void)

{
  return 0;
}


// ===== 003ba634  rive::DataConverter::bindFromContext =====

/* rive::DataConverter::bindFromContext(rive::DataContext*, rive::DataBind*) */

void __thiscall
rive::DataConverter::bindFromContext(DataConverter *this,DataContext *param_1,DataBind *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  *(DataBind **)(this + 0xd0) = param_2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x1bf);
    if ((uVar3 & 1) != 0) {
      DataBindContext::bindFromContext((DataBindContext *)*puVar1,param_1);
    }
  }
  *(DataContext **)(this + 0xc0) = param_1;
  return;
}


// ===== 003ba6a4  rive::DataConverter::unbind =====

/* rive::DataConverter::unbind() */

void __thiscall rive::DataConverter::unbind(DataConverter *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  for (puVar2 = *(undefined8 **)(this + 0x30); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x80))();
  }
  *(undefined8 *)(this + 0xc0) = 0;
  return;
}


// ===== 003ba6f0  rive::DataConverter::update =====

/* rive::DataConverter::update() */

void __thiscall rive::DataConverter::update(DataConverter *this)

{
                    /* WARNING: Could not recover jumptable at 0x003ba6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(this + 0x28))(this + 0x28,0);
  return;
}


// ===== 003ba700  rive::DataConverter::advance =====

/* rive::DataConverter::advance(float) */

undefined8 rive::DataConverter::advance(float param_1)

{
  return 0;
}


// ===== 003ba708  rive::DataConverter::addDirtyDataBind =====

/* rive::DataConverter::addDirtyDataBind(rive::DataBind*) */

void __thiscall rive::DataConverter::addDirtyDataBind(DataConverter *this,DataBind *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
  }
  DataBindContainer::addDirtyDataBind((DataBindContainer *)(this + 0x28),param_1);
  return;
}


// ===== 003ba74c  rive::DataConverter::addDirtyDataBind =====

/* non-virtual thunk to rive::DataConverter::addDirtyDataBind(rive::DataBind*) */

void __thiscall rive::DataConverter::addDirtyDataBind(DataConverter *this,DataBind *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xa8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
  }
  DataBindContainer::addDirtyDataBind((DataBindContainer *)this,param_1);
  return;
}


// ===== 003ba794  rive::DataConverter::markConverterDirty =====

/* rive::DataConverter::markConverterDirty() */

void __thiscall rive::DataConverter::markConverterDirty(DataConverter *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ba7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003ba7b4  rive::DataConverter::copy =====

/* rive::DataConverter::copy(rive::DataConverter const&) */

void __thiscall rive::DataConverter::copy(DataConverter *this,DataConverter *param_1)

{
  void *__src;
  ulong __n;
  void *__dest;
  DataBind *pDVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  __src = *(void **)(param_1 + 0x30);
  __n = *(long *)(param_1 + 0x38) - (long)__src;
  if (__n == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x10),(basic_string *)(param_1 + 0x10));
    return;
  }
  if (-1 < (long)__n) {
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar4 = 0;
    do {
      plVar3 = *(long **)((long)__dest + uVar4);
      pDVar1 = (DataBind *)(**(code **)(*plVar3 + 0x28))(plVar3);
      lVar2 = plVar3[0xb];
      *(DataConverter **)(pDVar1 + 0x30) = this;
      *(long *)(pDVar1 + 0x58) = lVar2;
      DataBindContainer::addDataBind((DataBindContainer *)(this + 0x28),pDVar1);
      uVar4 = uVar4 + 8;
    } while (__n != uVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x10),(basic_string *)(param_1 + 0x10));
    operator_delete(__dest);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00345418();
}


// ===== 003ba878  rive::DataBindContextValueNumber::DataBindContextValueNumber =====

/* rive::DataBindContextValueNumber::DataBindContextValueNumber(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueNumber::DataBindContextValueNumber
          (DataBindContextValueNumber *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d178 + 0x10;
  return;
}


// ===== 003ba8a8  FUN_003ba8a8 =====

void FUN_003ba8a8(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  return;
}


// ===== 003ba8ec  FUN_003ba8ec =====

void FUN_003ba8ec(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003ba938  rive::DataBindContextValueNumber::apply =====

/* rive::DataBindContextValueNumber::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueNumber::apply
          (DataBindContextValueNumber *this,Core *param_1,uint param_2,bool param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar2 = *(long **)(this + 0x10);
  plVar1 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar1 != (long *)0x0) {
    lVar4 = 0x58;
    if (!param_3) {
      lVar4 = 0x60;
    }
    plVar2 = (long *)(**(code **)(*plVar1 + lVar4))(plVar1,plVar2);
  }
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,2);
  fVar8 = 0.0;
  if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,2), (uVar3 & 1) != 0)) {
    fVar8 = *(float *)(plVar2 + 1);
  }
  if (param_2 - 4 < 0x3f4) {
    if (*(int *)(&DAT_00252478 + (ulong)(param_2 - 4) * 4) == 0) {
      if (param_1 == (Core *)0x0) {
        param_1 = (Core *)0x0;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x93);
        if ((uVar3 & 1) != 0) {
          if ((ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) <=
              (ulong)(long)fVar8) {
            return;
          }
          lVar4 = *(long *)(param_1 + 0x40);
          if (lVar4 == 0) {
            return;
          }
          plVar6 = *(long **)(lVar4 + 0xa58);
          plVar1 = *(long **)(lVar4 + 0xa60);
          plVar2 = plVar6;
          if (plVar6 != plVar1) {
            plVar7 = plVar6;
            do {
              plVar2 = plVar7;
              if (*plVar7 == *(long *)(*(long *)(param_1 + 0x88) + (long)fVar8 * 8)) break;
              plVar7 = plVar7 + 1;
              plVar2 = plVar1;
            } while (plVar7 != plVar1);
          }
          iVar5 = 0;
          if (plVar2 != plVar1) {
            iVar5 = (int)((ulong)((long)plVar2 - (long)plVar6) >> 3);
          }
          if (*(int *)(param_1 + 0x134) == iVar5) {
            return;
          }
          *(int *)(param_1 + 0x134) = iVar5;
                    /* WARNING: Could not recover jumptable at 0x003bab08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)param_1 + 0x1c8))(param_1);
          return;
        }
      }
      iVar5 = 0;
      if (0.0 <= fVar8) {
        iVar5 = (int)fVar8;
      }
      FUN_00376dfc(param_1,param_2,iVar5);
      return;
    }
    if (*(int *)(&DAT_00252478 + (ulong)(param_2 - 4) * 4) == 2) {
      FUN_003575a8(fVar8,param_1,param_2);
      return;
    }
  }
  return;
}


// ===== 003bab0c  FUN_003bab0c =====

undefined8 FUN_003bab0c(void)

{
  return 0;
}


// ===== 003bab14  rive::DataBindContextValue::DataBindContextValue =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::DataBindContextValue::DataBindContextValue(rive::DataBind*) */

void __thiscall
rive::DataBindContextValue::DataBindContextValue(DataBindContextValue *this,DataBind *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ushort uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined **ppuVar14;
  long *plVar15;
  long *plVar16;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  puVar7 = PTR_vtable_0067d130;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067d138 + 0x10;
  *(DataBind **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined **)(this + 0x18) = puVar7 + 0x10;
  this[0x30] = (DataBindContextValue)0x0;
  DataBindContextTargetValue::initialize((DataBindContextTargetValue *)(this + 0x18),param_1);
  plVar15 = *(long **)(param_1 + 0x38);
  if (plVar15 == (long *)0x0) goto LAB_003bae28;
  uVar8 = (**(code **)(*plVar15 + 0x10))(plVar15);
  if (uVar8 < 0x1bc) {
    if (uVar8 < 0x1b1) {
      if (uVar8 == 0x1aa) {
        puVar9 = (undefined8 *)operator_new(0x10);
        uVar13 = (undefined4)plVar15[0x22];
        ppuVar14 = &PTR_FUN_0066b0c8;
        goto LAB_003bacac;
      }
      if (uVar8 != 0x1b0) {
LAB_003bade8:
        puVar9 = (undefined8 *)operator_new(8);
        ppuVar14 = &PTR_FUN_0066aec8;
        goto LAB_003badf8;
      }
      plVar16 = (long *)plVar15[0x15];
      if ((plVar16 == (long *)0x0) ||
         (uVar10 = (**(code **)(*plVar16 + 0x18))(plVar16,0x1fd), (uVar10 & 1) == 0)) {
        puVar9 = (undefined8 *)operator_new(0x18);
        uVar13 = (undefined4)plVar15[0x22];
        uVar11 = 0;
      }
      else {
        puVar9 = (undefined8 *)operator_new(0x18);
        uVar13 = (undefined4)plVar15[0x22];
        uVar11 = (**(code **)(*plVar16 + 0x68))(plVar16);
      }
      *(undefined4 *)(puVar9 + 1) = uVar13;
      *puVar9 = &PTR_FUN_006547c0;
      puVar9[2] = uVar11;
    }
    else {
      if (uVar8 == 0x1b1) {
        puVar9 = (undefined8 *)operator_new(0x20);
        if ((*(byte *)(plVar15 + 0x22) & 1) == 0) {
          uStack_58 = plVar15[0x23];
          local_60 = plVar15[0x22];
          local_50 = (char *)plVar15[0x24];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_60,(char *)plVar15[0x24],plVar15[0x23]);
        }
        *puVar9 = &PTR_FUN_0066afc8;
        if ((local_60 & 1) == 0) {
          *(undefined8 **)(this + 0x10) = puVar9;
          puVar9[2] = uStack_58;
          *(ulong *)(puVar9 + 1) = local_60;
          puVar9[3] = local_50;
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(puVar9 + 1),local_50,uStack_58);
          *(undefined8 **)(this + 0x10) = puVar9;
          if ((local_60 & 1) != 0) {
            operator_delete(local_50);
          }
        }
        goto LAB_003bae28;
      }
      if (uVar8 == 0x1b9) {
        puVar9 = (undefined8 *)operator_new(0x20);
        puVar9[2] = 0;
        puVar9[3] = 0;
        *puVar9 = &PTR_FUN_00660630;
        puVar9[1] = 0;
      }
      else {
        if (uVar8 != 0x1ba) goto LAB_003bade8;
        puVar9 = (undefined8 *)operator_new(0x10);
        lVar2 = plVar15[0x22];
        *puVar9 = &PTR_FUN_0066af48;
        *(int *)(puVar9 + 1) = (int)lVar2;
      }
    }
  }
  else if (uVar8 < 0x236) {
    if (uVar8 == 0x1bc) {
      puVar9 = (undefined8 *)operator_new(0x10);
      *puVar9 = &PTR_FUN_00654920;
      puVar9[1] = 0;
    }
    else {
      if (uVar8 != 0x1c1) {
        if (uVar8 != 0x1f5) goto LAB_003bade8;
        puVar9 = (undefined8 *)operator_new(0x10);
        uVar13 = (undefined4)plVar15[0x22];
        ppuVar14 = &PTR_FUN_00661fa0;
        goto LAB_003bacac;
      }
      puVar9 = (undefined8 *)operator_new(0x10);
      lVar2 = plVar15[0x22];
      *puVar9 = &PTR_FUN_0066b048;
      *(char *)(puVar9 + 1) = (char)lVar2;
    }
  }
  else if (uVar8 == 0x236) {
    puVar9 = (undefined8 *)operator_new(0x10);
    ppuVar14 = &PTR_FUN_00654800;
    *(undefined4 *)(puVar9 + 1) = 0;
LAB_003badf8:
    *puVar9 = ppuVar14;
  }
  else {
    if (uVar8 == 0x24b) {
      puVar9 = (undefined8 *)operator_new(0x18);
      *(int *)(puVar9 + 1) = (int)plVar15[0x22];
      *puVar9 = &PTR_FUN_006548e0;
      plVar15 = (long *)operator_new(0x90);
      *(undefined2 *)(plVar15 + 2) = 0;
      *(undefined4 *)(plVar15 + 1) = 0xffffffff;
      *(undefined4 *)(plVar15 + 5) = 0;
      pcVar12 = (char *)operator_new(0x30);
      plVar15[8] = (long)pcVar12;
      lVar6 = _UNK_0024e0e8;
      lVar2 = _DAT_0024e0e0;
      uVar5 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
      uVar4 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
      uVar3 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
      uVar11 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
      pcVar12[0x20] = '\0';
      *(undefined4 *)(plVar15 + 9) = 1;
      *(undefined8 *)(pcVar12 + 8) = uVar3;
      *(undefined8 *)pcVar12 = uVar11;
      *(undefined8 *)(pcVar12 + 0x18) = uVar5;
      *(undefined8 *)(pcVar12 + 0x10) = uVar4;
      plVar15[7] = lVar6;
      plVar15[6] = lVar2;
      plVar15[0xb] = 0;
      plVar15[10] = 0;
      plVar15[0xd] = 0;
      plVar15[0xc] = 0;
      plVar15[0xf] = 0;
      plVar15[0xe] = 0;
      puVar7 = PTR_vtable_0067d018;
      plVar15[0x10] = 0;
      plVar15[0x11] = 0;
      puVar9[2] = plVar15;
      *(undefined8 **)(this + 0x10) = puVar9;
      *plVar15 = (long)(puVar7 + 0x10);
      goto LAB_003bae28;
    }
    if (uVar8 != 599) goto LAB_003bade8;
    puVar9 = (undefined8 *)operator_new(0x10);
    uVar13 = (undefined4)plVar15[0x22];
    ppuVar14 = &PTR_FUN_00654840;
LAB_003bacac:
    *puVar9 = ppuVar14;
    *(undefined4 *)(puVar9 + 1) = uVar13;
  }
  *(undefined8 **)(this + 0x10) = puVar9;
LAB_003bae28:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003baeb0  FUN_003baeb0 =====

void FUN_003baeb0(void)

{
  return;
}


// ===== 003baeb4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003baeb8  FUN_003baeb8 =====

undefined8 FUN_003baeb8(void)

{
  return 0;
}


// ===== 003baec0  FUN_003baec0 =====

undefined8 FUN_003baec0(void)

{
  return 0;
}


// ===== 003baec8  FUN_003baec8 =====

void FUN_003baec8(void)

{
  return;
}


// ===== 003baecc  FUN_003baecc =====

void FUN_003baecc(void)

{
  return;
}


// ===== 003baed0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003baed4  FUN_003baed4 =====

bool FUN_003baed4(undefined8 param_1,int param_2)

{
  return param_2 == 8;
}


// ===== 003baee0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003baee4  FUN_003baee4 =====

bool FUN_003baee4(undefined8 param_1,int param_2)

{
  return param_2 == 0xc || param_2 == 9;
}


// ===== 003baef4  FUN_003baef4 =====

void FUN_003baef4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_006548e0;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 9), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x003baf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 003baf4c  FUN_003baf4c =====

void FUN_003baf4c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_006548e0;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 9), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 003bafa4  FUN_003bafa4 =====

bool FUN_003bafa4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffffffd) == 9;
}


// ===== 003bafb4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003bafb8  FUN_003bafb8 =====

bool FUN_003bafb8(undefined8 param_1,int param_2)

{
  return param_2 == 10;
}


// ===== 003bafc4  FUN_003bafc4 =====

void FUN_003bafc4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_00660630;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[2];
  puVar2 = puVar4;
  if (puVar5 != puVar4) {
    do {
      puVar5 = puVar5 + -1;
      plVar3 = (long *)*puVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14), iVar1 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    } while (puVar5 != puVar4);
    puVar2 = (undefined8 *)param_1[1];
  }
  param_1[2] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 003bb060  FUN_003bb060 =====

void FUN_003bb060(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_00660630;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[2];
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar5 = puVar5 + -1;
        plVar3 = (long *)*puVar5;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14), iVar1 == 1)) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      } while (puVar5 != puVar4);
      puVar2 = (undefined8 *)param_1[1];
    }
    param_1[2] = puVar4;
    operator_delete(puVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 003bb0f4  FUN_003bb0f4 =====

bool FUN_003bb0f4(undefined8 param_1,int param_2)

{
  return param_2 == 5;
}


// ===== 003bb100  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003bb104  FUN_003bb104 =====

bool FUN_003bb104(undefined8 param_1,int param_2)

{
  return param_2 == 7 || param_2 == 9;
}


// ===== 003bb114  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003bb118  FUN_003bb118 =====

bool FUN_003bb118(undefined8 param_1,int param_2)

{
  return param_2 == 6 || param_2 == 9;
}


// ===== 003bb128  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003bb12c  FUN_003bb12c =====

bool FUN_003bb12c(undefined8 param_1,int param_2)

{
  return param_2 == 3;
}


// ===== 003bb138  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003bb13c  FUN_003bb13c =====

bool FUN_003bb13c(undefined8 param_1,int param_2)

{
  return param_2 == 4;
}


// ===== 003bb148  FUN_003bb148 =====

bool FUN_003bb148(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,4);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (int)param_2[1] == *(int *)(param_1 + 8);
  }
  return bVar1;
}


// ===== 003bb198  FUN_003bb198 =====

void FUN_003bb198(float param_1,long param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  
  uVar3 = (**(code **)(*param_3 + 0x10))(param_3,4);
  if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*param_4 + 0x10))(param_4,4), (uVar3 & 1) != 0)) {
    uVar1 = *(uint *)(param_3 + 1);
    uVar2 = *(uint *)(param_2 + 8);
    fVar6 = 1.0 - param_1;
    uVar4 = NEON_fmadd((float)(uVar2 >> 0x18),fVar6,(float)(uVar1 >> 0x18) * param_1);
    uVar8 = NEON_fmadd((float)(uVar2 >> 0x10 & 0xff),fVar6,(float)(uVar1 >> 0x10 & 0xff) * param_1);
    fVar5 = (float)NEON_fminnm(uVar4,0x437f0000);
    uVar9 = NEON_fmadd((float)(uVar2 >> 8 & 0xff),fVar6,(float)(uVar1 >> 8 & 0xff) * param_1);
    uVar4 = NEON_fmadd((float)(uVar2 & 0xff),fVar6,(float)(uVar1 & 0xff) * param_1);
    fVar6 = (float)NEON_fminnm(uVar8,0x437f0000);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar10 = (float)NEON_fminnm(uVar9,0x437f0000);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar7 = (float)NEON_fminnm(uVar4,0x437f0000);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    *(uint *)(param_4 + 1) =
         (int)(long)fVar5 << 0x18 | ((uint)(long)fVar6 & 0xff) << 0x10 |
         ((uint)(long)fVar10 & 0xff) << 8 | (uint)(long)fVar7 & 0xff;
  }
  return;
}


// ===== 003bb2c0  FUN_003bb2c0 =====

void FUN_003bb2c0(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,4);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  }
  return;
}


// ===== 003bb300  FUN_003bb300 =====

void FUN_003bb300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0066afc8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 003bb320  FUN_003bb320 =====

void FUN_003bb320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0066afc8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003bb360  FUN_003bb360 =====

bool FUN_003bb360(undefined8 param_1,int param_2)

{
  return param_2 == 1;
}


// ===== 003bb36c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003bb370  FUN_003bb370 =====

bool FUN_003bb370(undefined8 param_1,int param_2)

{
  return param_2 == 2;
}


// ===== 003bb37c  FUN_003bb37c =====

bool FUN_003bb37c(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,2);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(float *)(param_2 + 1) == *(float *)(param_1 + 8);
    }
    return bVar1;
  }
  return false;
}


// ===== 003bb3d8  FUN_003bb3d8 =====

void FUN_003bb3d8(float param_1,long param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if ((((param_3 != (long *)0x0) &&
       (uVar1 = (**(code **)(*param_3 + 0x10))(param_3,2), param_4 != (long *)0x0)) &&
      ((uVar1 & 1) != 0)) && (uVar1 = (**(code **)(*param_4 + 0x10))(param_4,2), (uVar1 & 1) != 0))
  {
    uVar2 = NEON_fmadd((int)param_3[1],param_1,(1.0 - param_1) * *(float *)(param_2 + 8));
    *(undefined4 *)(param_4 + 1) = uVar2;
  }
  return;
}


// ===== 003bb464  FUN_003bb464 =====

void FUN_003bb464(long param_1,long *param_2)

{
  ulong uVar1;
  
  if ((param_2 != (long *)0x0) &&
     (uVar1 = (**(code **)(*param_2 + 0x10))(param_2,2), (uVar1 & 1) != 0)) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  }
  return;
}


// ===== 003bb4a8  FUN_003bb4a8 =====

void FUN_003bb4a8(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bb4f4  rive::DataBindContextValue::applyToSource =====

/* rive::DataBindContextValue::applyToSource(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValue::applyToSource
          (DataBindContextValue *this,Core *param_1,uint param_2,bool param_3)

{
  ViewModelInstanceAssetImage VVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  ViewModelInstanceAssetImage *this_00;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  DataValueString *pDVar10;
  RenderImage *pRVar11;
  float fVar12;
  
  uVar2 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x38) + 0x10))
                    (*(long **)(*(long *)(this + 8) + 0x38),param_1,param_2);
  if (uVar2 < 0x1c1) {
    if (uVar2 < 0x1b1) {
      if (uVar2 != 0x1aa) {
        if (uVar2 != 0x1b0) {
          return;
        }
        goto LAB_003bb604;
      }
      uVar3 = DataBindContextTargetValue::syncTargetValue
                        ((DataBindContextTargetValue *)(this + 0x18));
      if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
        return;
      }
      plVar9 = *(long **)(this + 0x20);
      plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
      if (plVar4 != (long *)0x0) {
        lVar5 = 0x58;
        if (!param_3) {
          lVar5 = 0x60;
        }
        plVar9 = (long *)(**(code **)(*plVar4 + lVar5))(plVar4,plVar9);
      }
      lVar5 = *plVar9;
      uVar6 = 4;
LAB_003bb750:
      uVar3 = (**(code **)(lVar5 + 0x10))(plVar9,uVar6);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar8 = plVar9[1];
      this_00 = *(ViewModelInstanceAssetImage **)(*(long *)(this + 8) + 0x38);
      *(undefined1 *)(*(long *)(this + 8) + 0x50) = 1;
      if (*(int *)(this_00 + 0x110) == (int)lVar8) goto LAB_003bb9d8;
      lVar5 = *(long *)this_00;
      *(int *)(this_00 + 0x110) = (int)lVar8;
      goto LAB_003bb784;
    }
    if (uVar2 == 0x1b1) {
      uVar3 = DataBindContextTargetValue::syncTargetValue
                        ((DataBindContextTargetValue *)(this + 0x18));
      if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
        return;
      }
      pDVar10 = *(DataValueString **)(this + 0x20);
      plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
      if (plVar4 != (long *)0x0) {
        lVar5 = 0x58;
        if (!param_3) {
          lVar5 = 0x60;
        }
        pDVar10 = (DataValueString *)(**(code **)(*plVar4 + lVar5))(plVar4,pDVar10);
      }
      uVar3 = (**(code **)(*(long *)pDVar10 + 0x10))(pDVar10,1);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(this + 8);
      *(undefined1 *)(lVar5 + 0x50) = 1;
      ViewModelInstanceString::applyValue(*(ViewModelInstanceString **)(lVar5 + 0x38),pDVar10);
      goto LAB_003bb9d8;
    }
    if (uVar2 != 0x1ba) {
      if (uVar2 != 0x1bc) {
        return;
      }
      uVar3 = DataBindContextTargetValue::syncTargetValue
                        ((DataBindContextTargetValue *)(this + 0x18));
      if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
        return;
      }
      plVar9 = *(long **)(this + 0x20);
      plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
      if (plVar4 != (long *)0x0) {
        lVar5 = 0x58;
        if (!param_3) {
          lVar5 = 0x60;
        }
        plVar9 = (long *)(**(code **)(*plVar4 + lVar5))(plVar4,plVar9);
      }
      uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar5 = plVar9[1];
      plVar4 = *(long **)(*(long *)(this + 8) + 0x38);
      *(undefined1 *)(*(long *)(this + 8) + 0x50) = 1;
      (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
      goto LAB_003bb9d8;
    }
    uVar3 = DataBindContextTargetValue::syncTargetValue((DataBindContextTargetValue *)(this + 0x18))
    ;
    if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
      return;
    }
    plVar9 = *(long **)(this + 0x20);
    plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
    if (plVar4 != (long *)0x0) {
      lVar5 = 0x58;
      if (!param_3) {
        lVar5 = 0x60;
      }
      plVar9 = (long *)(**(code **)(*plVar4 + lVar5))(plVar4,plVar9);
    }
    uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,2);
    if ((uVar3 & 1) == 0) {
      return;
    }
    fVar12 = *(float *)(plVar9 + 1);
    this_00 = *(ViewModelInstanceAssetImage **)(*(long *)(this + 8) + 0x38);
    *(undefined1 *)(*(long *)(this + 8) + 0x50) = 1;
    if (*(float *)(this_00 + 0x110) == fVar12) goto LAB_003bb9d8;
    *(float *)(this_00 + 0x110) = fVar12;
    pcVar7 = *(code **)(*(long *)this_00 + 0xa8);
  }
  else {
    if (0x235 < uVar2) {
      if (uVar2 != 0x236) {
        if (uVar2 == 0x24b) {
          uVar3 = DataBindContextTargetValue::syncTargetValue
                            ((DataBindContextTargetValue *)(this + 0x18));
          if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
            return;
          }
          plVar9 = *(long **)(this + 0x20);
          plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
          if (plVar4 != (long *)0x0) {
            lVar5 = 0x58;
            if (!param_3) {
              lVar5 = 0x60;
            }
            plVar9 = (long *)(**(code **)(*plVar4 + lVar5))(plVar4,plVar9);
          }
          uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,9);
          if ((uVar3 & 1) == 0) {
            return;
          }
          lVar5 = *(long *)(this + 8);
          lVar8 = *plVar9;
          *(undefined1 *)(lVar5 + 0x50) = 1;
          this_00 = *(ViewModelInstanceAssetImage **)(lVar5 + 0x38);
          uVar3 = (**(code **)(lVar8 + 0x10))(plVar9,0xb);
          if ((((uVar3 & 1) != 0) &&
              (pRVar11 = *(RenderImage **)(plVar9[2] + 0x88),
              ViewModelInstanceAssetImage::value(this_00,pRVar11), pRVar11 != (RenderImage *)0x0))
             || (*(int *)(this_00 + 0x110) == (int)plVar9[1])) goto LAB_003bb9d8;
          lVar5 = *(long *)this_00;
          *(int *)(this_00 + 0x110) = (int)plVar9[1];
          goto LAB_003bb784;
        }
        if (uVar2 != 599) {
          return;
        }
      }
LAB_003bb604:
      uVar3 = DataBindContextTargetValue::syncTargetValue
                        ((DataBindContextTargetValue *)(this + 0x18));
      if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
        return;
      }
      plVar9 = *(long **)(this + 0x20);
      plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
      if (plVar4 != (long *)0x0) {
        lVar5 = 0x58;
        if (!param_3) {
          lVar5 = 0x60;
        }
        plVar9 = (long *)(**(code **)(*plVar4 + lVar5))(plVar4,plVar9);
      }
      lVar5 = *plVar9;
      uVar6 = 9;
      goto LAB_003bb750;
    }
    if (uVar2 != 0x1c1) {
      if (uVar2 != 0x1f5) {
        return;
      }
      uVar3 = DataBindContextTargetValue::syncTargetValue
                        ((DataBindContextTargetValue *)(this + 0x18));
      if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
        return;
      }
      plVar9 = *(long **)(this + 0x20);
      plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
      if (plVar4 != (long *)0x0) {
        lVar5 = 0x58;
        if (!param_3) {
          lVar5 = 0x60;
        }
        plVar9 = (long *)(**(code **)(*plVar4 + lVar5))(plVar4,plVar9);
      }
      uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,9);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar5 = plVar9[1];
      this_00 = *(ViewModelInstanceAssetImage **)(*(long *)(this + 8) + 0x38);
      *(undefined1 *)(*(long *)(this + 8) + 0x50) = 1;
      if (*(int *)(this_00 + 0x110) == (int)lVar5) goto LAB_003bb9d8;
      *(int *)(this_00 + 0x110) = (int)lVar5;
      pcVar7 = *(code **)(*(long *)this_00 + 0xb0);
      goto LAB_003bb788;
    }
    uVar3 = DataBindContextTargetValue::syncTargetValue((DataBindContextTargetValue *)(this + 0x18))
    ;
    if (((uVar3 & 1) == 0) && (this[0x30] != (DataBindContextValue)0x0)) {
      return;
    }
    plVar9 = *(long **)(this + 0x20);
    plVar4 = *(long **)(*(long *)(this + 8) + 0x48);
    if (plVar4 != (long *)0x0) {
      lVar5 = 0x58;
      if (!param_3) {
        lVar5 = 0x60;
      }
      plVar9 = (long *)(**(code **)(*plVar4 + lVar5))(plVar4,plVar9);
    }
    uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,3);
    if ((uVar3 & 1) == 0) {
      return;
    }
    VVar1 = *(ViewModelInstanceAssetImage *)(plVar9 + 1);
    this_00 = *(ViewModelInstanceAssetImage **)(*(long *)(this + 8) + 0x38);
    *(undefined1 *)(*(long *)(this + 8) + 0x50) = 1;
    if (this_00[0x110] == VVar1) goto LAB_003bb9d8;
    lVar5 = *(long *)this_00;
    this_00[0x110] = VVar1;
LAB_003bb784:
    pcVar7 = *(code **)(lVar5 + 0xa8);
  }
LAB_003bb788:
  (*pcVar7)(this_00);
LAB_003bb9d8:
  this[0x30] = (DataBindContextValue)0x1;
  *(undefined1 *)(*(long *)(this + 8) + 0x50) = 0;
  return;
}


// ===== 003bba08  FUN_003bba08 =====

void FUN_003bba08(void)

{
  return;
}


// ===== 003bba0c  rive::DataBindContextValue::syncSourceValue =====

/* rive::DataBindContextValue::syncSourceValue() */

void __thiscall rive::DataBindContextValue::syncSourceValue(DataBindContextValue *this)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong local_80;
  long lStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar7 = *(long **)(*(long *)(this + 8) + 0x38);
  if (plVar7 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (uVar3 < 0x1bc) {
      if (uVar3 < 0x1b1) {
        if ((uVar3 == 0x1aa) || (uVar3 == 0x1b0)) goto LAB_003bbae4;
      }
      else if (uVar3 == 0x1b1) {
        lVar6 = *(long *)(this + 0x10);
        if ((*(byte *)(plVar7 + 0x22) & 1) == 0) {
          lStack_78 = plVar7[0x23];
          local_80 = plVar7[0x22];
          local_70 = (void *)plVar7[0x24];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,(char *)plVar7[0x24],plVar7[0x23]);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(lVar6 + 8),(basic_string *)&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else if (uVar3 == 0x1b9) {
        lVar6 = *(long *)(this + 0x10);
        puVar1 = *(undefined8 **)(lVar6 + 8);
        puVar9 = *(undefined8 **)(lVar6 + 0x10);
        while (puVar9 != puVar1) {
          puVar9 = puVar9 + -1;
          plVar8 = (long *)*puVar9;
          if ((plVar8 != (long *)0x0) &&
             (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x14), iVar4 == 1)) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
        *(undefined8 **)(lVar6 + 0x10) = puVar1;
        puVar1 = (undefined8 *)plVar7[0x24];
        for (lVar6 = plVar7[0x25] - (long)puVar1; lVar6 != 0; lVar6 = lVar6 + -8) {
          plVar7 = (long *)*puVar1;
          lVar11 = *(long *)(this + 0x10);
          if (plVar7 == (long *)0x0) {
            plVar8 = (long *)0x0;
            puVar9 = *(undefined8 **)(lVar11 + 0x10);
            plVar10 = (long *)0x0;
            if (*(undefined8 **)(lVar11 + 0x18) <= puVar9) goto LAB_003bbbe8;
LAB_003bbbd4:
            *puVar9 = plVar7;
            *(undefined8 **)(lVar11 + 0x10) = puVar9 + 1;
          }
          else {
            FUN_00340fb0(1,(long)plVar7 + 0x14);
            puVar9 = *(undefined8 **)(lVar11 + 0x10);
            plVar10 = plVar7;
            if (puVar9 < *(undefined8 **)(lVar11 + 0x18)) {
              FUN_00340fb0(1,(long)plVar7 + 0x14);
              plVar8 = plVar7;
              goto LAB_003bbbd4;
            }
LAB_003bbbe8:
            uVar5 = FUN_003bbd00(lVar11 + 8,plVar10);
            *(undefined8 *)(lVar11 + 0x10) = uVar5;
            plVar8 = plVar10;
          }
          if ((plVar8 != (long *)0x0) &&
             (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x14), iVar4 == 1)) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          puVar1 = puVar1 + 1;
        }
      }
      else if (uVar3 == 0x1ba) {
        *(int *)(*(long *)(this + 0x10) + 8) = (int)plVar7[0x22];
      }
    }
    else if (uVar3 < 0x236) {
      if (uVar3 == 0x1bc) {
        plVar7 = (long *)plVar7[0x24];
        lVar6 = *(long *)(this + 0x10);
        if (plVar7 == (long *)0x0) {
          *(undefined8 *)(lVar6 + 8) = 0;
        }
        else {
          FUN_00340fb0(1,(long)plVar7 + 0xa4);
          *(long **)(lVar6 + 8) = plVar7;
          iVar4 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4);
          if (iVar4 == 1) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x003bbcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar7 + 8))(plVar7);
              return;
            }
            goto LAB_003bbcfc;
          }
        }
      }
      else if (uVar3 == 0x1c1) {
        *(char *)(*(long *)(this + 0x10) + 8) = (char)plVar7[0x22];
      }
      else if (uVar3 == 0x1f5) goto LAB_003bbae4;
    }
    else if (((uVar3 == 0x236) || (uVar3 == 0x24b)) || (uVar3 == 599)) {
LAB_003bbae4:
      *(int *)(*(long *)(this + 0x10) + 8) = (int)plVar7[0x22];
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_003bbcfc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003bbd00  FUN_003bbd00 =====

long * FUN_003bbd00(ulong *param_1,long param_2)

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
    FUN_00371f80();
LAB_003bbed4:
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
    if (uVar7 >> 0x3d != 0) goto LAB_003bbed4;
    pvVar4 = operator_new(uVar7 << 3);
    plVar12 = (long *)((long)pvVar4 + lVar14 * 8);
  }
  if (param_2 != 0) {
    FUN_00340fb0(1,param_2 + 0x14);
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
    goto LAB_003bbe58;
  }
  uVar5 = (long)plVar6 + (-8 - (long)plVar11);
  if ((uVar5 < 0x78) ||
     (((long *)((long)plVar6 + (-8 - (uVar5 & 0xfffffffffffffff8))) < plVar12 &&
      ((long *)((long)pvVar4 + (lVar15 - (uVar5 & 0xfffffffffffffff8)) + -8) < plVar6)))) {
LAB_003bbddc:
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
    if (uVar5 != uVar8) goto LAB_003bbddc;
  }
  plVar11 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  *param_1 = (ulong)plVar12;
  param_1[1] = (ulong)plVar13;
  param_1[2] = (ulong)pvVar1;
  while (plVar6 != plVar11) {
    plVar6 = plVar6 + -1;
    plVar12 = (long *)*plVar6;
    if ((plVar12 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14), iVar3 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
LAB_003bbe58:
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  return plVar13;
}


// ===== 003bbed8  rive::DataBindContextTargetValue::~DataBindContextTargetValue =====

/* rive::DataBindContextTargetValue::~DataBindContextTargetValue() */

void __thiscall
rive::DataBindContextTargetValue::~DataBindContextTargetValue(DataBindContextTargetValue *this)

{
  *(undefined **)this = PTR_vtable_0067d130 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bbefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


// ===== 003bbf04  rive::DataBindContextTargetValue::~DataBindContextTargetValue =====

/* rive::DataBindContextTargetValue::~DataBindContextTargetValue() */

void __thiscall
rive::DataBindContextTargetValue::~DataBindContextTargetValue(DataBindContextTargetValue *this)

{
  ~DataBindContextTargetValue(this);
  operator_delete(this);
  return;
}


// ===== 003bbf28  rive::DataBindContextTargetValue::initialize =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::DataBindContextTargetValue::initialize(rive::DataBind*) */

DataBindContextTargetValue * __thiscall
rive::DataBindContextTargetValue::initialize(DataBindContextTargetValue *this,DataBind *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  short sVar11;
  DataBindContextTargetValue *pDVar12;
  long *plVar13;
  char *pcVar14;
  undefined **ppuVar15;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(DataBind **)(this + 0x10) = param_1;
  uVar3 = iVar1 - 4;
  if (0x3f3 < uVar3) {
    return this;
  }
  iVar2 = *(int *)(&DAT_00252478 + (ulong)uVar3 * 4);
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        return this;
      }
LAB_003bbfa0:
      pDVar12 = (DataBindContextTargetValue *)operator_new(0x20);
      ppuVar15 = &PTR_FUN_0066afc8;
      *(undefined2 *)(pDVar12 + 8) = 0;
LAB_003bbfb4:
      *(undefined ***)pDVar12 = ppuVar15;
      goto LAB_003bc168;
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (iVar1 == 0x128) {
      if (plVar13 == (long *)0x0) {
        return (DataBindContextTargetValue *)0x0;
      }
      sVar11 = (**(code **)(*plVar13 + 0x10))();
      if (sVar11 == 0x1b1) goto LAB_003bbfa0;
      if (*(long **)(param_1 + 0x38) == (long *)0x0) {
        return (DataBindContextTargetValue *)0x0;
      }
      sVar11 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
      if (sVar11 == 0x1ba) goto LAB_003bc020;
      if (*(long **)(param_1 + 0x38) == (long *)0x0) {
        return (DataBindContextTargetValue *)0x0;
      }
      pDVar12 = (DataBindContextTargetValue *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
      if (((uint)pDVar12 & 0xffff) != 0x1b0) {
        return pDVar12;
      }
    }
    else if (plVar13 != (long *)0x0) {
      sVar11 = (**(code **)(*plVar13 + 0x10))();
      if (sVar11 == 0x24b) {
        pDVar12 = (DataBindContextTargetValue *)operator_new(0x18);
        *(undefined4 *)(pDVar12 + 8) = 0xffffffff;
        *(undefined ***)pDVar12 = &PTR_FUN_006548e0;
        plVar13 = (long *)operator_new(0x90);
        *(undefined4 *)(plVar13 + 1) = 0xffffffff;
        *(undefined2 *)(plVar13 + 2) = 0;
        *(undefined4 *)(plVar13 + 5) = 0;
        pcVar14 = (char *)operator_new(0x30);
        lVar9 = _UNK_0024e0e8;
        lVar8 = _DAT_0024e0e0;
        uVar7 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
        uVar6 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
        uVar5 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
        uVar4 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
        plVar13[8] = (long)pcVar14;
        pcVar14[0x20] = '\0';
        *(undefined8 *)(pcVar14 + 8) = uVar5;
        *(undefined8 *)pcVar14 = uVar4;
        *(undefined8 *)(pcVar14 + 0x18) = uVar7;
        *(undefined8 *)(pcVar14 + 0x10) = uVar6;
        plVar13[7] = lVar9;
        plVar13[6] = lVar8;
        *(undefined4 *)(plVar13 + 9) = 1;
        plVar13[0xb] = 0;
        plVar13[10] = 0;
        plVar13[0xd] = 0;
        plVar13[0xc] = 0;
        plVar13[0xf] = 0;
        plVar13[0xe] = 0;
        puVar10 = PTR_vtable_0067d018;
        plVar13[0x10] = 0;
        plVar13[0x11] = 0;
        *(long **)(pDVar12 + 0x10) = plVar13;
        *(DataBindContextTargetValue **)(this + 8) = pDVar12;
        *plVar13 = (long)(puVar10 + 0x10);
        return pDVar12;
      }
      if ((*(long **)(param_1 + 0x38) != (long *)0x0) &&
         (sVar11 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(), sVar11 == 0x1bc)) {
        pDVar12 = (DataBindContextTargetValue *)operator_new(0x10);
        *(DataBindContextTargetValue **)(this + 8) = pDVar12;
        *(undefined ***)pDVar12 = &PTR_FUN_00654920;
        *(undefined8 *)(pDVar12 + 8) = 0;
        return pDVar12;
      }
    }
    pDVar12 = (DataBindContextTargetValue *)operator_new(0x10);
    ppuVar15 = &PTR_FUN_006548a0;
  }
  else if (iVar2 == 2) {
LAB_003bc020:
    pDVar12 = (DataBindContextTargetValue *)operator_new(0x10);
    ppuVar15 = &PTR_FUN_0066af48;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 4) {
        return this;
      }
      pDVar12 = (DataBindContextTargetValue *)operator_new(0x10);
      ppuVar15 = &PTR_FUN_0066b048;
      pDVar12[8] = (DataBindContextTargetValue)0x0;
      goto LAB_003bbfb4;
    }
    pDVar12 = (DataBindContextTargetValue *)operator_new(0x10);
    ppuVar15 = &PTR_FUN_0066b0c8;
  }
  *(undefined ***)pDVar12 = ppuVar15;
  *(undefined4 *)(pDVar12 + 8) = 0;
LAB_003bc168:
  *(DataBindContextTargetValue **)(this + 8) = pDVar12;
  return pDVar12;
}


// ===== 003bc17c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003bc180  FUN_003bc180 =====

bool FUN_003bc180(undefined8 param_1,int param_2)

{
  return param_2 == 9;
}


// ===== 003bc18c  rive::DataBindContextTargetValue::syncTargetValue =====

/* rive::DataBindContextTargetValue::syncTargetValue() */

uint __thiscall rive::DataBindContextTargetValue::syncTargetValue(DataBindContextTargetValue *this)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  DataEnum *pDVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  Solo *this_00;
  long *plVar17;
  float fVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong uStack_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong uStack_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong uStack_78;
  char *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar13 = *(long *)(this + 0x10);
  iVar8 = *(int *)(lVar13 + 0xc);
  if (0x3f3 < iVar8 - 4U) goto LAB_003bc57c;
  iVar12 = *(int *)(&DAT_00252478 + (ulong)(iVar8 - 4U) * 4);
  uVar7 = 0;
  if (iVar12 < 2) {
    if (iVar12 != 0) {
      if (iVar12 != 1) goto LAB_003bc580;
      FUN_00375c88(local_60,*(undefined8 *)(lVar13 + 0x30));
      if (((byte)local_60[0] & 1) == 0) {
        local_c0[0] = local_60[0];
        uStack_b8 = uStack_58;
        local_b0 = local_50;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(local_c0,local_50,uStack_58);
      }
      uVar7 = FUN_003bc798(*(undefined8 *)(this + 8),local_c0);
      pcVar3 = local_b0;
joined_r0x003bc440:
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(pcVar3);
      }
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      goto LAB_003bc580;
    }
    if ((iVar8 != 0x128) || (plVar9 = *(long **)(lVar13 + 0x30), plVar9 == (long *)0x0)) {
LAB_003bc31c:
      sVar6 = (**(code **)(**(long **)(lVar13 + 0x30) + 0x10))();
      plVar9 = *(long **)(*(long *)(this + 0x10) + 0x30);
      if (sVar6 == 0x24c) {
        iVar8 = FUN_003758ac(plVar9,*(undefined4 *)(*(long *)(this + 0x10) + 0xc));
        plVar9 = (long *)plVar9[2];
        if (plVar9 != (long *)0x0) {
          FUN_00340fb0(1,plVar9 + 9);
        }
        lVar13 = *(long *)(this + 8);
        bVar4 = *(int *)(lVar13 + 8) != iVar8;
        uVar7 = (uint)bVar4;
        if (bVar4) {
          *(int *)(lVar13 + 8) = iVar8;
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        plVar17 = (long *)plVar9[0x11];
        plVar14 = *(long **)(lVar13 + 0x88);
        if (plVar17 != plVar14) {
          if (plVar17 != (long *)0x0) {
            FUN_00340fb0(1,plVar17 + 1);
            plVar14 = *(long **)(lVar13 + 0x88);
          }
          *(long **)(lVar13 + 0x88) = plVar17;
          if ((plVar14 != (long *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,plVar14 + 1), iVar8 == 1)
             ) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
          puVar1 = *(undefined8 **)(lVar13 + 0x70);
          for (puVar15 = *(undefined8 **)(lVar13 + 0x68); puVar15 != puVar1; puVar15 = puVar15 + 1)
          {
            (**(code **)(*(long *)*puVar15 + 0x20))();
          }
          uVar7 = 1;
        }
        plVar14 = plVar9 + 9;
LAB_003bc3fc:
        iVar8 = FUN_00340fe0(0xffffffff,plVar14);
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
      else {
        sVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
        if (sVar6 == 0x296) {
          lVar13 = (*(long **)(*(long *)(this + 0x10) + 0x30))[2];
          uVar10 = (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),8);
          if (((uVar10 & 1) != 0) && (*(long *)(*(long *)(this + 8) + 8) != lVar13)) {
            *(long *)(*(long *)(this + 8) + 8) = lVar13;
            goto LAB_003bc5b0;
          }
          goto LAB_003bc57c;
        }
        sVar6 = (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x30) + 0x10))();
        lVar13 = *(long *)(*(long *)(this + 0x10) + 0x30);
        if (sVar6 != 0x1bc) {
          iVar8 = FUN_003758ac(lVar13,*(undefined4 *)(*(long *)(this + 0x10) + 0xc));
          goto LAB_003bc604;
        }
        plVar9 = *(long **)(lVar13 + 0x120);
        if (plVar9 == (long *)0x0) {
          if (*(long *)(*(long *)(this + 8) + 8) != 0) goto LAB_003bc634;
        }
        else {
          FUN_00340fb0(1,(long)plVar9 + 0xa4);
          plVar14 = *(long **)(*(long *)(this + 8) + 8);
          iVar8 = FUN_00340fe0(0xffffffff,(long)plVar9 + 0xa4);
          if (iVar8 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
          if (plVar9 != plVar14) {
LAB_003bc634:
            plVar9 = *(long **)(lVar13 + 0x120);
            lVar13 = *(long *)(this + 8);
            if (plVar9 == (long *)0x0) {
              *(undefined8 *)(lVar13 + 8) = 0;
              goto LAB_003bc5b0;
            }
            uVar7 = 1;
            FUN_00340fb0(1,(long)plVar9 + 0xa4);
            *(long **)(lVar13 + 8) = plVar9;
            plVar14 = (long *)((long)plVar9 + 0xa4);
            goto LAB_003bc3fc;
          }
        }
LAB_003bc57c:
        uVar7 = 0;
      }
      goto LAB_003bc580;
    }
    uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,0x93);
    lVar13 = *(long *)(this + 0x10);
    if ((uVar10 & 1) == 0) goto LAB_003bc31c;
    this_00 = *(Solo **)(lVar13 + 0x30);
    if ((*(long **)(lVar13 + 0x38) != (long *)0x0) &&
       (sVar6 = (**(code **)(**(long **)(lVar13 + 0x38) + 0x10))(), sVar6 == 0x1b1)) {
      Solo::getActiveChildName();
      if (((byte)local_60[0] & 1) == 0) {
        local_80[0] = local_60[0];
        uStack_78 = uStack_58;
        local_70 = local_50;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(local_80,local_50,uStack_58);
      }
      uVar7 = FUN_003bc798(*(undefined8 *)(this + 8),local_80);
      pcVar3 = local_70;
      local_c0[0] = local_80[0];
      goto joined_r0x003bc440;
    }
    iVar8 = DataBind::sourceOutputType(*(DataBind **)(this + 0x10));
    if (iVar8 == 2) {
      iVar8 = Solo::getActiveChildIndex(this_00);
      lVar13 = *(long *)(this + 8);
      fVar18 = (float)iVar8;
      goto LAB_003bc26c;
    }
    iVar8 = DataBind::sourceOutputType(*(DataBind **)(this + 0x10));
    if (iVar8 != 9) {
      iVar8 = DataBind::sourceOutputType(*(DataBind **)(this + 0x10));
      if (iVar8 == 6) {
        Solo::getActiveChildName();
        plVar9 = *(long **)(*(long *)(this + 0x10) + 0x38);
        if ((((plVar9 == (long *)0x0) ||
             (uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,0x1b0), (uVar10 & 1) == 0)) ||
            (this_00 = *(Solo **)(*(long *)(*(long *)(this + 0x10) + 0x38) + 0xa8),
            this_00 == (Solo *)0x0)) ||
           (lVar13 = (**(code **)(*(long *)this_00 + 0x68))(this_00), lVar13 == 0)) {
          uVar16 = (uint)this_00;
          uVar7 = 0;
        }
        else {
          pDVar11 = (DataEnum *)(**(code **)(*(long *)this_00 + 0x68))(this_00);
          if (((byte)local_60[0] & 1) == 0) {
            local_a0[0] = local_60[0];
            uStack_98 = uStack_58;
            local_90 = local_50;
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external(local_a0,local_50,uStack_58);
          }
          iVar8 = DataEnum::valueIndex(pDVar11,local_a0);
          if (((byte)local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          if (*(int *)(*(long *)(this + 8) + 8) == iVar8) {
            uVar16 = 0;
            uVar7 = 1;
          }
          else {
            *(int *)(*(long *)(this + 8) + 8) = iVar8;
            uVar7 = 1;
            uVar16 = 1;
          }
        }
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        uVar7 = uVar7 & uVar16;
        goto LAB_003bc580;
      }
      goto LAB_003bc57c;
    }
    iVar8 = Solo::getActiveChildIndex(this_00);
LAB_003bc604:
    if (*(int *)(*(long *)(this + 8) + 8) == iVar8) goto LAB_003bc57c;
    *(int *)(*(long *)(this + 8) + 8) = iVar8;
  }
  else if (iVar12 == 2) {
    fVar18 = (float)FUN_003567b0(*(undefined8 *)(lVar13 + 0x30),iVar8);
    lVar13 = *(long *)(this + 8);
LAB_003bc26c:
    if (*(float *)(lVar13 + 8) == fVar18) goto LAB_003bc57c;
    *(float *)(lVar13 + 8) = fVar18;
  }
  else if (iVar12 == 3) {
    lVar13 = *(long *)(lVar13 + 0x30);
    iVar12 = 0;
    if (iVar8 < 0x22b) {
      if ((iVar8 == 0x25) || (iVar8 == 0x26)) {
LAB_003bc4ec:
        iVar12 = *(int *)(lVar13 + 0x88);
      }
      else if (iVar8 == 0x58) {
        iVar12 = *(int *)(lVar13 + 0x28);
      }
    }
    else if (iVar8 < 0x28b) {
      if (iVar8 == 0x22b) {
        iVar12 = *(int *)(lVar13 + 0x110);
      }
      else if (iVar8 == 0x27e) goto LAB_003bc4f4;
    }
    else if (iVar8 == 0x28b) {
LAB_003bc4f4:
      iVar12 = *(int *)(lVar13 + 0xc);
    }
    else if (iVar8 == 0x344) goto LAB_003bc4ec;
    if (*(int *)(*(long *)(this + 8) + 8) == iVar12) goto LAB_003bc57c;
    *(int *)(*(long *)(this + 8) + 8) = iVar12;
  }
  else {
    if (iVar12 != 4) goto LAB_003bc580;
    bVar5 = FUN_00375ed4(*(undefined8 *)(lVar13 + 0x30),iVar8);
    if ((bool)(bVar5 & 1) == (*(char *)(*(long *)(this + 8) + 8) != '\0')) goto LAB_003bc57c;
    *(byte *)(*(long *)(this + 8) + 8) = bVar5 & 1;
  }
LAB_003bc5b0:
  uVar7 = 1;
LAB_003bc580:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003bc798  FUN_003bc798 =====

void FUN_003bc798(long param_1,ulong *param_2)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  byte *__s2;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 8);
  bVar4 = (byte)*param_2;
  uVar9 = param_2[1];
  uVar7 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar7;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x10);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = uVar9;
  }
  if (sVar1 == sVar2) {
    __s2 = (byte *)param_2[2];
    if ((bVar4 & 1) == 0) {
      __s2 = (byte *)((long)param_2 + 1);
    }
    if (((byte)bVar3 & 1) == 0) {
      if (1 < (byte)bVar3) {
        pbVar8 = (byte *)(param_1 + 9);
        do {
          if (*pbVar8 != *__s2) goto LAB_003bc84c;
          uVar7 = uVar7 - 1;
          pbVar8 = pbVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
      iVar6 = 0;
      goto LAB_003bc894;
    }
    iVar6 = memcmp(*(void **)(param_1 + 0x18),__s2,*(size_t *)(param_1 + 0x10));
    if (iVar6 == 0) goto LAB_003bc894;
  }
LAB_003bc84c:
  if ((bVar4 & 1) == 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (void *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,(char *)param_2[2],uVar9);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_1 + 8),(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  iVar6 = 1;
LAB_003bc894:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


// ===== 003bc8c0  rive::DataBindContextValueString::DataBindContextValueString =====

/* rive::DataBindContextValueString::DataBindContextValueString(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueString::DataBindContextValueString
          (DataBindContextValueString *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d180 + 0x10;
  return;
}


// ===== 003bc8f0  FUN_003bc8f0 =====

void FUN_003bc8f0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bc93c  rive::DataBindContextValueString::apply =====

/* rive::DataBindContextValueString::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueString::apply
          (DataBindContextValueString *this,Core *param_1,uint param_2,bool param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar4 = *(long **)(this + 0x10);
  plVar3 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar3 != (long *)0x0) {
    lVar1 = 0x58;
    if (!param_3) {
      lVar1 = 0x60;
    }
    plVar4 = (long *)(**(code **)(*plVar3 + lVar1))(plVar3,plVar4);
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1);
  if (((uVar5 & 1) == 0) || (uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1), (uVar5 & 1) == 0)) {
    local_60 = local_60 & 0xffffffffffff0000;
  }
  else if ((plVar4[1] & 1U) == 0) {
    local_50 = (char *)plVar4[3];
    uStack_58 = plVar4[2];
    local_60 = plVar4[1];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,(char *)plVar4[3],plVar4[2]);
  }
  if ((param_2 - 4 < 0x3f4) && (*(int *)(&DAT_00252478 + (ulong)(param_2 - 4) * 4) == 0)) {
    if ((param_1 != (Core *)0x0) &&
       (uVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x93), (uVar5 & 1) != 0)) {
      Solo::updateByName((Solo *)param_1,(basic_string *)&local_60);
    }
  }
  else {
    if ((local_60 & 1) == 0) {
      uStack_78 = uStack_58;
      local_80 = local_60;
      local_70 = local_50;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,local_50,uStack_58);
    }
    FUN_00377e50(param_1,param_2,&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003bcad4  rive::DataBindContextValueBoolean::DataBindContextValueBoolean =====

/* rive::DataBindContextValueBoolean::DataBindContextValueBoolean(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueBoolean::DataBindContextValueBoolean
          (DataBindContextValueBoolean *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d158 + 0x10;
  return;
}


// ===== 003bcb04  FUN_003bcb04 =====

void FUN_003bcb04(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bcb50  rive::DataBindContextValueBoolean::apply =====

/* rive::DataBindContextValueBoolean::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueBoolean::apply
          (DataBindContextValueBoolean *this,Core *param_1,uint param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar4 = *(long **)(this + 0x10);
  plVar3 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar3 != (long *)0x0) {
    lVar1 = 0x58;
    if (!param_3) {
      lVar1 = 0x60;
    }
    plVar4 = (long *)(**(code **)(*plVar3 + lVar1))(plVar3,plVar4);
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,3);
  if (((uVar5 & 1) == 0) || (uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,3), (uVar5 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = (char)plVar4[1] != '\0';
  }
  FUN_00379548(param_1,param_2,bVar2);
  return;
}


// ===== 003bcc00  rive::DataBindContextValueColor::DataBindContextValueColor =====

/* rive::DataBindContextValueColor::DataBindContextValueColor(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueColor::DataBindContextValueColor
          (DataBindContextValueColor *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d160 + 0x10;
  return;
}


// ===== 003bcc30  FUN_003bcc30 =====

void FUN_003bcc30(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bcc7c  rive::DataBindContextValueColor::apply =====

/* rive::DataBindContextValueColor::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueColor::apply
          (DataBindContextValueColor *this,Core *param_1,uint param_2,bool param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar3 = *(long **)(this + 0x10);
  plVar2 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar2 != (long *)0x0) {
    lVar1 = 0x58;
    if (!param_3) {
      lVar1 = 0x60;
    }
    plVar3 = (long *)(**(code **)(*plVar2 + lVar1))(plVar2,plVar3);
  }
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4);
  if (((uVar4 & 1) == 0) || (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4), (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)plVar3[1];
  }
  FUN_00358888(param_1,param_2,uVar5);
  return;
}


// ===== 003bcd24  rive::DataBindContextValueEnum::DataBindContextValueEnum =====

/* rive::DataBindContextValueEnum::DataBindContextValueEnum(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueEnum::DataBindContextValueEnum
          (DataBindContextValueEnum *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d168 + 0x10;
  return;
}


// ===== 003bcd54  FUN_003bcd54 =====

void FUN_003bcd54(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bcda0  rive::DataBindContextValueEnum::apply =====

/* rive::DataBindContextValueEnum::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueEnum::apply
          (DataBindContextValueEnum *this,Core *param_1,uint param_2,bool param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  ulong *puVar9;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar4 = *(long **)(this + 0x10);
  plVar3 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar3 != (long *)0x0) {
    lVar8 = 0x58;
    if (!param_3) {
      lVar8 = 0x60;
    }
    plVar4 = (long *)(**(code **)(*plVar3 + lVar8))(plVar3,plVar4);
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,6);
  if (((uVar5 & 1) == 0) || (uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,6), (uVar5 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)*(uint *)(plVar4 + 1);
  }
  if ((0x3f3 < param_2 - 4) || (*(int *)(&DAT_00252478 + (ulong)(param_2 - 4) * 4) != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_48) goto LAB_003bce74;
    goto LAB_003bcfbc;
  }
  if (param_1 == (Core *)0x0) {
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_003bcfbc;
    param_1 = (Core *)0x0;
LAB_003bce74:
    FUN_00376dfc(param_1,param_2,uVar5);
    return;
  }
  uVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x93);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_003bcfbc;
    goto LAB_003bce74;
  }
  uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x10))(*(long **)(this + 0x10),6);
  if (((uVar6 & 1) != 0) && (lVar8 = *(long *)(*(long *)(this + 0x10) + 0x10), lVar8 != 0)) {
    if (uVar5 < (ulong)(*(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10) >> 3)) {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + uVar5 * 8);
      uVar6 = *(ulong *)(lVar8 + 0x30);
      puVar9 = (ulong *)(lVar8 + 0x28);
      bVar1 = *(byte *)puVar9;
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = uVar6;
      }
      if (uVar5 == 0) {
        puVar9 = (ulong *)(lVar8 + 0x10);
        if ((*(byte *)puVar9 & 1) == 0) goto LAB_003bcf58;
        uVar6 = *(ulong *)(lVar8 + 0x18);
        pcVar7 = *(char **)(lVar8 + 0x20);
      }
      else {
        if ((bVar1 & 1) == 0) {
LAB_003bcf58:
          uStack_58 = puVar9[1];
          local_60 = *puVar9;
          local_50 = (void *)puVar9[2];
          goto LAB_003bcf78;
        }
        pcVar7 = *(char **)(lVar8 + 0x38);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_60,pcVar7,uVar6);
    }
    else {
      local_60 = local_60 & 0xffffffffffff0000;
    }
LAB_003bcf78:
    Solo::updateByName((Solo *)param_1,(basic_string *)&local_60);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_003bcfbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003bcfc0  rive::DataBindContextValueList::DataBindContextValueList =====

/* rive::DataBindContextValueList::DataBindContextValueList(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueList::DataBindContextValueList
          (DataBindContextValueList *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d170 + 0x10;
  return;
}


// ===== 003bcff0  FUN_003bcff0 =====

void FUN_003bcff0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bd03c  rive::DataBindContextValueList::applyToSource =====

/* rive::DataBindContextValueList::applyToSource(rive::Core*, unsigned int, bool) */

void rive::DataBindContextValueList::applyToSource(Core *param_1,uint param_2,bool param_3)

{
  return;
}


// ===== 003bd040  rive::DataBindContextValueList::apply =====

/* rive::DataBindContextValueList::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueList::apply
          (DataBindContextValueList *this,Core *param_1,uint param_2,bool param_3)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar3 = *(long **)(this + 0x10);
  plVar2 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar2 != (long *)0x0) {
    lVar5 = 0x58;
    if (!param_3) {
      lVar5 = 0x60;
    }
    plVar3 = (long *)(**(code **)(*plVar2 + lVar5))(plVar2,plVar3);
  }
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,5);
  if ((uVar4 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = plVar3 + 1;
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,5);
    if ((uVar4 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
  }
  if (param_1 == (Core *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (uVar1 < 0x22f) {
    if (uVar1 != 0x86) {
      if (uVar1 != 0x1b9) {
        return;
      }
      lVar5 = 0x118;
      goto LAB_003bd138;
    }
  }
  else {
    if (uVar1 == 0x22f) {
      lVar5 = 0x1b8;
      goto LAB_003bd138;
    }
    if (uVar1 != 0x26b) {
      return;
    }
  }
  lVar5 = 0x1b0;
LAB_003bd138:
                    /* WARNING: Could not recover jumptable at 0x003bd154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + lVar5))(param_1 + lVar5,plVar2);
  return;
}


// ===== 003bd158  rive::DataBindContextValueTrigger::DataBindContextValueTrigger =====

/* rive::DataBindContextValueTrigger::DataBindContextValueTrigger(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueTrigger::DataBindContextValueTrigger
          (DataBindContextValueTrigger *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d190 + 0x10;
  return;
}


// ===== 003bd188  FUN_003bd188 =====

void FUN_003bd188(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bd1d4  rive::DataBindContextValueTrigger::apply =====

/* rive::DataBindContextValueTrigger::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueTrigger::apply
          (DataBindContextValueTrigger *this,Core *param_1,uint param_2,bool param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar3 = *(long **)(this + 0x10);
  plVar2 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar2 != (long *)0x0) {
    lVar1 = 0x58;
    if (!param_3) {
      lVar1 = 0x60;
    }
    plVar3 = (long *)(**(code **)(*plVar2 + lVar1))(plVar2,plVar3);
  }
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,7);
  if (((uVar4 & 1) == 0) || (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,7), (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)plVar3[1];
  }
  FUN_00376dfc(param_1,param_2,uVar5);
  return;
}


// ===== 003bd27c  rive::DataBindContextValueSymbolListIndex::DataBindContextValueSymbolListIndex =====

/* rive::DataBindContextValueSymbolListIndex::DataBindContextValueSymbolListIndex(rive::DataBind*)
    */

void __thiscall
rive::DataBindContextValueSymbolListIndex::DataBindContextValueSymbolListIndex
          (DataBindContextValueSymbolListIndex *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d188 + 0x10;
  return;
}


// ===== 003bd2ac  FUN_003bd2ac =====

void FUN_003bd2ac(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bd2f8  rive::DataBindContextValueSymbolListIndex::apply =====

/* rive::DataBindContextValueSymbolListIndex::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueSymbolListIndex::apply
          (DataBindContextValueSymbolListIndex *this,Core *param_1,uint param_2,bool param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar3 = *(long **)(this + 0x10);
  plVar2 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar2 != (long *)0x0) {
    lVar1 = 0x58;
    if (!param_3) {
      lVar1 = 0x60;
    }
    plVar3 = (long *)(**(code **)(*plVar2 + lVar1))(plVar2,plVar3);
  }
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,10);
  if (((uVar4 & 1) == 0) || (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,10), (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(plVar3 + 1);
  }
  if (param_2 - 4 < 0x3f4) {
    if (*(int *)(&DAT_00252478 + (ulong)(param_2 - 4) * 4) == 0) {
      FUN_00376dfc(param_1,param_2);
      return;
    }
    if (*(int *)(&DAT_00252478 + (ulong)(param_2 - 4) * 4) == 2) {
      FUN_003575a8((float)uVar5,param_1,param_2);
      return;
    }
  }
  return;
}


// ===== 003bd3f0  rive::DataBindContextValueAssetImage::DataBindContextValueAssetImage =====

/* rive::DataBindContextValueAssetImage::DataBindContextValueAssetImage(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueAssetImage::DataBindContextValueAssetImage
          (DataBindContextValueAssetImage *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d150 + 0x10;
  return;
}


// ===== 003bd420  FUN_003bd420 =====

void FUN_003bd420(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bd46c  rive::DataBindContextValueAssetImage::apply =====

/* rive::DataBindContextValueAssetImage::apply(rive::Core*, unsigned int, bool) */

void rive::DataBindContextValueAssetImage::apply(Core *param_1,uint param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  plVar5 = (long *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,100);
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x24c);
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x38);
    if ((uVar4 & 1) != 0) {
      plVar6 = *(long **)(lVar9 + 0x130);
      if (plVar6 != (long *)0x0) {
        FUN_00340fb0(1,plVar6 + 9);
      }
      lVar11 = plVar6[0x11];
      lVar10 = plVar5[2];
      if (lVar11 != 0) {
        FUN_00340fb0(1,lVar11 + 8);
      }
      plVar7 = *(long **)(lVar10 + 0x88);
      *(long *)(lVar10 + 0x88) = lVar11;
      if ((plVar7 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar7 + 1), iVar3 == 1)) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      puVar1 = *(undefined8 **)(lVar10 + 0x70);
      for (puVar8 = *(undefined8 **)(lVar10 + 0x68); puVar8 != puVar1; puVar8 = puVar8 + 1) {
        (**(code **)(*(long *)*puVar8 + 0x20))();
      }
      iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 9);
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      FUN_00376dfc(plVar5,param_3,*(undefined4 *)(lVar9 + 0x110));
      return;
    }
  }
  else {
    fileAsset();
    plVar6 = local_60;
    if (local_60 == (long *)0x0) {
      plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x130);
      if (plVar6 != (long *)0x0) {
        FUN_00340fb0(1,plVar6 + 9);
      }
      local_70 = plVar6;
      (**(code **)(*plVar5 + 0x260))(plVar5,&local_70);
      plVar5 = local_70;
    }
    else {
      FUN_00340fb0(1,local_60 + 9);
      local_68 = plVar6;
      (**(code **)(*plVar5 + 0x260))(plVar5,&local_68);
      plVar5 = local_68;
    }
    if ((plVar5 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar5 + 9), iVar3 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if ((local_60 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_60 + 9), iVar3 == 1)) {
      (**(code **)(*local_60 + 8))(local_60);
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003bd6b4  rive::DataBindContextValueAssetImage::fileAsset =====

/* rive::DataBindContextValueAssetImage::fileAsset() */

void rive::DataBindContextValueAssetImage::fileAsset(void)

{
  int iVar1;
  long in_x0;
  ulong uVar2;
  undefined8 *in_x8;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(in_x0 + 8) + 0x58);
  plVar3 = *(long **)(*(long *)(in_x0 + 8) + 0x38);
  if ((lVar4 != 0 && plVar3 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,0x24b), (uVar2 & 1) != 0)) {
    if (((ulong)*(uint *)(plVar3 + 0x22) <
         (ulong)(*(long *)(lVar4 + 0x18) - *(long *)(lVar4 + 0x10) >> 3)) &&
       (plVar3 = *(long **)(*(long *)(lVar4 + 0x10) + (ulong)*(uint *)(plVar3 + 0x22) * 8),
       plVar3 != (long *)0x0)) {
      FUN_00340fb0(1,plVar3 + 9);
      uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,0x69);
      if ((uVar2 & 1) != 0) {
        FUN_00340fb0(1);
        *in_x8 = plVar3;
        iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9);
        if (iVar1 != 1) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x003bd774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
      iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9);
      if (iVar1 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  *in_x8 = 0;
  return;
}


// ===== 003bd7ac  rive::DataBindContextValueArtboard::DataBindContextValueArtboard =====

/* rive::DataBindContextValueArtboard::DataBindContextValueArtboard(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueArtboard::DataBindContextValueArtboard
          (DataBindContextValueArtboard *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d148 + 0x10;
  return;
}


// ===== 003bd7dc  FUN_003bd7dc =====

void FUN_003bd7dc(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bd828  rive::DataBindContextValueArtboard::apply =====

/* rive::DataBindContextValueArtboard::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueArtboard::apply
          (DataBindContextValueArtboard *this,Core *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar6 = *(long **)(*(long *)(this + 8) + 0x38);
  if ((plVar6 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,599), (uVar2 & 1) != 0)) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    uVar1 = uVar1 & 0xffff;
    lVar5 = 0x1a8;
    if ((1 < uVar1 - 0x1c3) && (uVar1 != 0x5c)) {
      if (uVar1 != 0x26d) {
        plVar6 = *(long **)(this + 0x10);
        plVar3 = *(long **)(*(long *)(this + 8) + 0x48);
        if (plVar3 != (long *)0x0) {
          lVar5 = 0x58;
          if (!param_3) {
            lVar5 = 0x60;
          }
          plVar6 = (long *)(**(code **)(*plVar3 + lVar5))(plVar3,plVar6);
        }
        uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0xc);
        if (((uVar2 & 1) == 0) ||
           (uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0xc), (uVar2 & 1) == 0)) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (undefined4)plVar6[1];
        }
        FUN_00376dfc(param_1,param_2,uVar4);
        return;
      }
      lVar5 = 0xb0;
    }
                    /* WARNING: Could not recover jumptable at 0x003bd8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + lVar5) + 0x10))(param_1 + lVar5,plVar6);
    return;
  }
  return;
}


// ===== 003bd96c  rive::ArtboardReferencer::findArtboard =====

/* rive::ArtboardReferencer::findArtboard(rive::ViewModelInstanceArtboard*, rive::Artboard*,
   rive::File*) */

long __thiscall
rive::ArtboardReferencer::findArtboard
          (ArtboardReferencer *this,ViewModelInstanceArtboard *param_1,Artboard *param_2,
          File *param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  File *pFVar6;
  long lVar7;
  
  if (param_1 == (ViewModelInstanceArtboard *)0x0) {
    return 0;
  }
  pvVar5 = *(void **)(param_1 + 0x118);
  if (pvVar5 == (void *)0x0) {
    if (param_3 != (File *)0x0) {
      if ((ulong)*(uint *)(param_1 + 0x110) <
          (ulong)(*(long *)(param_3 + 0x90) - *(long *)(param_3 + 0x88) >> 3)) {
        lVar7 = *(long *)(*(long *)(param_3 + 0x88) + (ulong)*(uint *)(param_1 + 0x110) * 8);
        if (lVar7 == 0) {
          return 0;
        }
        if (param_2 == (Artboard *)0x0) {
          return lVar7;
        }
        while( true ) {
          lVar4 = lVar7;
          if (*(char *)(lVar7 + 0xbe8) != '\0') {
            lVar4 = *(long *)(lVar7 + 0xc60);
          }
          if (*(long *)(param_2 + 0xc60) == lVar4) break;
          if (*(long **)(param_2 + 0xc38) == (long *)0x0) {
            return lVar7;
          }
          lVar4 = (**(code **)(**(long **)(param_2 + 0xc38) + 0x40))();
          if (lVar4 == 0) {
            return lVar7;
          }
          param_2 = (Artboard *)(**(code **)(**(long **)(param_2 + 0xc38) + 0x40))();
        }
      }
    }
LAB_003bdb60:
    lVar7 = 0;
  }
  else {
    FUN_00340fb0(1,pvVar5);
    iVar2 = FUN_00340fe0(0xffffffff,pvVar5);
    if (iVar2 == 1) {
      plVar3 = *(long **)((long)pvVar5 + 0x10);
      *(undefined8 *)((long)pvVar5 + 0x10) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      pFVar6 = *(File **)((long)pvVar5 + 8);
      if ((pFVar6 != (File *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pFVar6), iVar2 == 1)) {
        File::~File(pFVar6);
        operator_delete(pFVar6);
      }
      operator_delete(pvVar5);
    }
    if (param_2 != (Artboard *)0x0) {
      pvVar5 = *(void **)(param_1 + 0x118);
      if (pvVar5 != (void *)0x0) {
        FUN_00340fb0(1,pvVar5);
      }
      lVar7 = *(long *)((long)pvVar5 + 0x10);
      while( true ) {
        if (lVar7 != 0) {
          lVar4 = lVar7;
          if (*(char *)(lVar7 + 0xbe8) != '\0') {
            lVar4 = *(long *)(lVar7 + 0xc60);
          }
          if (*(long *)(param_2 + 0xc60) == lVar4) {
            iVar2 = FUN_00340fe0(0xffffffff,pvVar5);
            if (iVar2 != 1) goto LAB_003bdb60;
            bVar1 = true;
            goto LAB_003bdb10;
          }
        }
        if ((*(long **)(param_2 + 0xc38) == (long *)0x0) ||
           (lVar4 = (**(code **)(**(long **)(param_2 + 0xc38) + 0x40))(), lVar4 == 0)) break;
        param_2 = (Artboard *)(**(code **)(**(long **)(param_2 + 0xc38) + 0x40))();
      }
      iVar2 = FUN_00340fe0(0xffffffff,pvVar5);
      if (iVar2 == 1) {
        bVar1 = false;
LAB_003bdb10:
        plVar3 = *(long **)((long)pvVar5 + 0x10);
        *(undefined8 *)((long)pvVar5 + 0x10) = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        pFVar6 = *(File **)((long)pvVar5 + 8);
        if ((pFVar6 != (File *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pFVar6), iVar2 == 1)) {
          File::~File(pFVar6);
          operator_delete(pFVar6);
        }
        operator_delete(pvVar5);
        if (bVar1) goto LAB_003bdb60;
      }
    }
    pvVar5 = *(void **)(param_1 + 0x118);
    if (pvVar5 != (void *)0x0) {
      FUN_00340fb0(1,pvVar5);
    }
    lVar7 = *(long *)((long)pvVar5 + 0x10);
    iVar2 = FUN_00340fe0(0xffffffff,pvVar5);
    if (iVar2 == 1) {
      plVar3 = *(long **)((long)pvVar5 + 0x10);
      *(undefined8 *)((long)pvVar5 + 0x10) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      pFVar6 = *(File **)((long)pvVar5 + 8);
      if ((pFVar6 != (File *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pFVar6), iVar2 == 1)) {
        File::~File(pFVar6);
        operator_delete(pFVar6);
      }
      operator_delete(pvVar5);
    }
  }
  return lVar7;
}


// ===== 003bdbf4  rive::ArtboardReferencer::from =====

/* rive::ArtboardReferencer::from(rive::Core*) */

Core * rive::ArtboardReferencer::from(Core *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  uVar1 = uVar1 & 0xffff;
  if (1 < uVar1 - 0x1c3) {
    if (uVar1 == 0x26d) {
      return param_1 + 0xb0;
    }
    if (uVar1 != 0x5c) {
      return (Core *)0x0;
    }
  }
  return param_1 + 0x1a8;
}


// ===== 003bdc50  rive::DataBindContextValueViewModel::DataBindContextValueViewModel =====

/* rive::DataBindContextValueViewModel::DataBindContextValueViewModel(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueViewModel::DataBindContextValueViewModel
          (DataBindContextValueViewModel *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d198 + 0x10;
  return;
}


// ===== 003bdc80  FUN_003bdc80 =====

void FUN_003bdc80(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bdccc  rive::DataBindContextValueViewModel::apply =====

/* rive::DataBindContextValueViewModel::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueViewModel::apply
          (DataBindContextValueViewModel *this,Core *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar4 = *(long **)(this + 0x10);
  plVar3 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar3 != (long *)0x0) {
    lVar6 = 0x58;
    if (!param_3) {
      lVar6 = 0x60;
    }
    plVar4 = (long *)(**(code **)(*plVar3 + lVar6))(plVar3,plVar4);
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,8);
  if (((uVar5 & 1) == 0) || (uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,8), (uVar5 & 1) == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar4[1];
  }
  if (param_1 != (Core *)0x0) {
    sVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (sVar2 == 0x1bc) {
                    /* WARNING: Could not recover jumptable at 0x003bdd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(param_1 + 0x118))(param_1 + 0x118,lVar6);
      return;
    }
    uVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x296);
    if ((uVar5 & 1) != 0) {
      *(long *)(param_1 + 0x10) = lVar6;
      uVar1 = (uint)((ulong)lVar6 >> 0x20) ^ (uint)lVar6;
      if (lVar6 == 0) {
        uVar1 = 0xffffffff;
      }
      if (*(uint *)(param_1 + 0xc) != uVar1) {
        *(uint *)(param_1 + 0xc) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x003bde00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_1 + 0x50))(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 003bde04  rive::DataBindContextValueAny::DataBindContextValueAny =====

/* rive::DataBindContextValueAny::DataBindContextValueAny(rive::DataBind*) */

void __thiscall
rive::DataBindContextValueAny::DataBindContextValueAny
          (DataBindContextValueAny *this,DataBind *param_1)

{
  DataBindContextValue::DataBindContextValue((DataBindContextValue *)this,param_1);
  *(undefined **)this = PTR_vtable_0067d140 + 0x10;
  return;
}


// ===== 003bde34  FUN_003bde34 =====

void FUN_003bde34(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d138 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  rive::DataBindContextTargetValue::~DataBindContextTargetValue
            ((DataBindContextTargetValue *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 003bde80  rive::DataBindContextValueAny::apply =====

/* rive::DataBindContextValueAny::apply(rive::Core*, unsigned int, bool) */

void __thiscall
rive::DataBindContextValueAny::apply
          (DataBindContextValueAny *this,Core *param_1,uint param_2,bool param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  ulong local_60;
  long lStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DataBindContextValue::syncSourceValue((DataBindContextValue *)this);
  plVar3 = *(long **)(this + 0x10);
  plVar2 = *(long **)(*(long *)(this + 8) + 0x48);
  if (plVar2 != (long *)0x0) {
    lVar5 = 0x58;
    if (!param_3) {
      lVar5 = 0x60;
    }
    plVar3 = (long *)(**(code **)(*plVar2 + lVar5))(plVar2,plVar3);
  }
  if (param_2 - 4 < 0x3f4) {
    iVar6 = *(int *)(&DAT_00252478 + (ulong)(param_2 - 4) * 4);
    if (iVar6 < 2) {
      if (iVar6 == 0) {
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,2);
        if ((uVar4 & 1) == 0) {
          uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
          if (((param_1 != (Core *)0x0) && ((uVar4 & 1) != 0)) &&
             (uVar4 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x93), (uVar4 & 1) != 0)) {
            if (*(long *)(lVar1 + 0x28) == local_48) {
              Solo::updateByName((Solo *)param_1,(basic_string *)(plVar3 + 1));
              return;
            }
            goto LAB_003be26c;
          }
        }
        else {
          fVar9 = *(float *)(plVar3 + 1);
          if (param_1 == (Core *)0x0) {
            iVar6 = 0;
            if (0.0 <= fVar9) {
              iVar6 = (int)fVar9;
            }
            if (*(long *)(lVar1 + 0x28) == local_48) {
              param_1 = (Core *)0x0;
LAB_003be1f0:
              FUN_00376dfc(param_1,param_2,iVar6);
              return;
            }
            goto LAB_003be26c;
          }
          uVar4 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x93);
          if ((uVar4 & 1) == 0) {
            iVar6 = 0;
            if (0.0 <= fVar9) {
              iVar6 = (int)fVar9;
            }
            if (*(long *)(lVar1 + 0x28) == local_48) goto LAB_003be1f0;
            goto LAB_003be26c;
          }
          if (((ulong)(long)fVar9 <
               (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3)) &&
             (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) {
            plVar7 = *(long **)(lVar5 + 0xa58);
            plVar2 = *(long **)(lVar5 + 0xa60);
            plVar3 = plVar7;
            if (plVar7 != plVar2) {
              plVar8 = plVar7;
              do {
                plVar3 = plVar8;
                if (*plVar8 == *(long *)(*(long *)(param_1 + 0x88) + (long)fVar9 * 8)) break;
                plVar8 = plVar8 + 1;
                plVar3 = plVar2;
              } while (plVar8 != plVar2);
            }
            iVar6 = 0;
            if (plVar3 != plVar2) {
              iVar6 = (int)((ulong)((long)plVar3 - (long)plVar7) >> 3);
            }
            if (*(int *)(param_1 + 0x134) != iVar6) {
              *(int *)(param_1 + 0x134) = iVar6;
              if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x003be268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)param_1 + 0x1c8))(param_1);
                return;
              }
              goto LAB_003be26c;
            }
          }
        }
      }
      else if ((iVar6 == 1) && (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1), (uVar4 & 1) != 0))
      {
        if ((plVar3[1] & 1U) == 0) {
          local_50 = (void *)plVar3[3];
          lStack_58 = plVar3[2];
          local_60 = plVar3[1];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_60,(char *)plVar3[3],plVar3[2]);
        }
        FUN_00377e50(param_1,param_2,&local_60);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
      }
    }
    else if (iVar6 == 4) {
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,3);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_00379548(param_1,param_2,(char)plVar3[1] != '\0');
          return;
        }
        goto LAB_003be26c;
      }
    }
    else if (iVar6 == 3) {
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_00358888(param_1,param_2,(int)plVar3[1]);
          return;
        }
        goto LAB_003be26c;
      }
    }
    else if ((iVar6 == 2) && (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,2), (uVar4 & 1) != 0)) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_003575a8((int)plVar3[1],param_1,param_2);
        return;
      }
      goto LAB_003be26c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_003be26c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003be270  rive::DataBindContainer::deleteDataBinds =====

/* rive::DataBindContainer::deleteDataBinds() */

void __thiscall rive::DataBindContainer::deleteDataBinds(DataBindContainer *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(this + 0x10);
  for (plVar2 = *(long **)(this + 8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
  }
  return;
}


// ===== 003be2b4  rive::DataBindContainer::unbindDataBinds =====

/* rive::DataBindContainer::unbindDataBinds() */

void __thiscall rive::DataBindContainer::unbindDataBinds(DataBindContainer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  for (puVar2 = *(undefined8 **)(this + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x80))();
  }
  *(undefined8 *)(this + 0x98) = 0;
  return;
}


// ===== 003be300  rive::DataBindContainer::bindDataBindsFromContext =====

/* rive::DataBindContainer::bindDataBindsFromContext(rive::DataContext*) */

void __thiscall
rive::DataBindContainer::bindDataBindsFromContext(DataBindContainer *this,DataContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  for (puVar1 = *(undefined8 **)(this + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x1bf);
    if ((uVar3 & 1) != 0) {
      DataBindContext::bindFromContext((DataBindContext *)*puVar1,param_1);
    }
  }
  *(DataContext **)(this + 0x98) = param_1;
  return;
}


// ===== 003be36c  rive::DataBindContainer::advanceDataBinds =====

/* rive::DataBindContainer::advanceDataBinds(float) */

uint __thiscall rive::DataBindContainer::advanceDataBinds(DataBindContainer *this,float param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  
  plVar5 = *(long **)(this + 8);
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 == plVar5) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar4 = *plVar5;
      plVar3 = *(long **)(lVar4 + 0x48);
      if (plVar3 == (long *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        if ((*(long *)(lVar4 + 0x38) != 0) && (*(char *)(lVar4 + 0x28) == '\0')) {
          uVar2 = (**(code **)(*plVar3 + 0x88))(param_1,plVar3);
        }
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar2 | uVar6;
    } while (plVar5 != plVar1);
  }
  return uVar6 & 1;
}


// ===== 003be400  rive::DataBindContainer::removeDataBind =====

/* WARNING: Removing unreachable block (ram,0x003be668) */
/* WARNING: Removing unreachable block (ram,0x003be51c) */
/* WARNING: Removing unreachable block (ram,0x003be5c0) */
/* WARNING: Removing unreachable block (ram,0x003be704) */
/* rive::DataBindContainer::removeDataBind(rive::DataBind*) */

void __thiscall rive::DataBindContainer::removeDataBind(DataBindContainer *this,DataBind *param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 *puVar3;
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
  
  if (this[0xa0] == (DataBindContainer)0x0) {
    puVar10 = *(undefined8 **)(this + 0x10);
    puVar11 = *(undefined8 **)(this + 8);
    puVar3 = puVar11;
    for (; (puVar11 != puVar10 && (puVar3 = puVar11, (DataBind *)*puVar11 != param_1));
        puVar11 = puVar11 + 1) {
      puVar3 = puVar10;
    }
    if ((puVar3 != puVar10) && (puVar11 = puVar3 + 1, puVar4 = puVar3, puVar11 != puVar10)) {
      do {
        puVar3 = puVar4;
        if ((DataBind *)*puVar11 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (DataBind *)*puVar11;
        }
        puVar11 = puVar11 + 1;
        puVar4 = puVar3;
      } while (puVar11 != puVar10);
      puVar10 = *(undefined8 **)(this + 0x10);
    }
    if (puVar3 != puVar10) {
      *(undefined8 **)(this + 0x10) = puVar3;
    }
    if (param_1[0x2a] != (DataBind)0x0) {
      puVar10 = *(undefined8 **)(this + 0x28);
      puVar11 = *(undefined8 **)(this + 0x20);
      puVar3 = puVar11;
      for (; (puVar11 != puVar10 && (puVar3 = puVar11, (DataBind *)*puVar11 != param_1));
          puVar11 = puVar11 + 1) {
        puVar3 = puVar10;
      }
      if ((puVar3 != puVar10) && (puVar11 = puVar3 + 1, puVar4 = puVar3, puVar11 != puVar10)) {
        do {
          puVar3 = puVar4;
          if ((DataBind *)*puVar11 != param_1) {
            puVar3 = puVar4 + 1;
            *puVar4 = (DataBind *)*puVar11;
          }
          puVar11 = puVar11 + 1;
          puVar4 = puVar3;
        } while (puVar11 != puVar10);
        puVar10 = *(undefined8 **)(this + 0x28);
      }
      if (puVar3 != puVar10) {
        *(undefined8 **)(this + 0x28) = puVar3;
      }
      param_1[0x2a] = (DataBind)0x0;
    }
    if (param_1[0x29] != (DataBind)0x0) {
      puVar10 = *(undefined8 **)(this + 0x40);
      puVar11 = *(undefined8 **)(this + 0x38);
      puVar3 = puVar11;
      for (; (puVar11 != puVar10 && (puVar3 = puVar11, (DataBind *)*puVar11 != param_1));
          puVar11 = puVar11 + 1) {
        puVar3 = puVar10;
      }
      if ((puVar3 != puVar10) && (puVar11 = puVar3 + 1, puVar4 = puVar3, puVar11 != puVar10)) {
        do {
          puVar3 = puVar4;
          if ((DataBind *)*puVar11 != param_1) {
            puVar3 = puVar4 + 1;
            *puVar4 = (DataBind *)*puVar11;
          }
          puVar11 = puVar11 + 1;
          puVar4 = puVar3;
        } while (puVar11 != puVar10);
        puVar10 = *(undefined8 **)(this + 0x40);
      }
      if (puVar3 != puVar10) {
        *(undefined8 **)(this + 0x40) = puVar3;
      }
      puVar10 = *(undefined8 **)(this + 0x58);
      puVar11 = *(undefined8 **)(this + 0x50);
      puVar3 = puVar11;
      for (; (puVar11 != puVar10 && (puVar3 = puVar11, (DataBind *)*puVar11 != param_1));
          puVar11 = puVar11 + 1) {
        puVar3 = puVar10;
      }
      if ((puVar3 != puVar10) && (puVar11 = puVar3 + 1, puVar4 = puVar3, puVar11 != puVar10)) {
        do {
          puVar3 = puVar4;
          if ((DataBind *)*puVar11 != param_1) {
            puVar3 = puVar4 + 1;
            *puVar4 = (DataBind *)*puVar11;
          }
          puVar11 = puVar11 + 1;
          puVar4 = puVar3;
        } while (puVar11 != puVar10);
        puVar10 = *(undefined8 **)(this + 0x58);
      }
      if (puVar3 != puVar10) {
        *(undefined8 **)(this + 0x58) = puVar3;
      }
      param_1[0x29] = (DataBind)0x0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  puVar11 = *(undefined8 **)(this + 0x88);
  if (puVar11 < *(undefined8 **)(this + 0x90)) {
    *puVar11 = param_1;
    *(undefined8 **)(this + 0x88) = puVar11 + 1;
    return;
  }
  puVar10 = *(undefined8 **)(this + 0x80);
  lVar12 = (long)puVar11 - (long)puVar10 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00345418();
  }
  uVar2 = (long)*(undefined8 **)(this + 0x90) - (long)puVar10;
  uVar5 = (long)uVar2 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar2) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar1 = operator_new(uVar5 << 3);
  }
  puVar3 = (undefined8 *)((long)pvVar1 + lVar12 * 8);
  puVar4 = puVar3 + 1;
  *puVar3 = param_1;
  if ((long)puVar11 - (long)puVar10 != 0) {
    uVar6 = ((long)puVar11 - (long)puVar10) - 8;
    puVar13 = puVar11;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar1)))) {
      puVar8 = puVar3 + -2;
      puVar9 = puVar11 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar13 = puVar11 + -uVar7;
      uVar2 = uVar7;
      do {
        puVar11 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar2 = uVar2 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar11;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar2 != 0);
      puVar3 = puVar3 + -uVar7;
      puVar11 = puVar10;
      if (uVar6 == uVar7) goto LAB_003be7c4;
    }
    do {
      puVar13 = puVar13 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar13;
    } while (puVar13 != puVar10);
    puVar11 = *(undefined8 **)(this + 0x80);
  }
LAB_003be7c4:
  *(undefined8 **)(this + 0x80) = puVar3;
  *(undefined8 **)(this + 0x88) = puVar4;
  *(void **)(this + 0x90) = (void *)((long)pvVar1 + uVar5 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
  *(undefined8 **)(this + 0x88) = puVar4;
  return;
}


// ===== 003be7fc  rive::DataBindContainer::addDataBind =====

/* rive::DataBindContainer::addDataBind(rive::DataBind*) */

void __thiscall rive::DataBindContainer::addDataBind(DataBindContainer *this,DataBind *param_1)

{
  ushort uVar1;
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
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (this[0xa0] != (DataBindContainer)0x0) {
    puVar11 = *(undefined8 **)(this + 0x70);
    if (puVar11 < *(undefined8 **)(this + 0x78)) {
      *puVar11 = param_1;
      *(undefined8 **)(this + 0x70) = puVar11 + 1;
      return;
    }
    puVar10 = *(undefined8 **)(this + 0x68);
    lVar12 = (long)puVar11 - (long)puVar10 >> 3;
    uVar6 = lVar12 + 1;
    if (uVar6 >> 0x3d == 0) {
      uVar3 = (long)*(undefined8 **)(this + 0x78) - (long)puVar10;
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
        if (uVar5 >> 0x3d != 0) goto LAB_003bec70;
        pvVar2 = operator_new(uVar5 << 3);
      }
      puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
      puVar13 = puVar4 + 1;
      *puVar4 = param_1;
      if ((long)puVar11 - (long)puVar10 != 0) {
        uVar6 = ((long)puVar11 - (long)puVar10) - 8;
        puVar14 = puVar11;
        if ((0x37 < uVar6) &&
           (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar2)))) {
          puVar8 = puVar4 + -2;
          puVar9 = puVar11 + -2;
          uVar6 = (uVar6 >> 3) + 1;
          uVar7 = uVar6 & 0x3ffffffffffffffc;
          puVar14 = puVar11 + -uVar7;
          uVar3 = uVar7;
          do {
            puVar11 = puVar9 + -1;
            uVar17 = puVar9[-2];
            uVar16 = puVar9[1];
            uVar15 = *puVar9;
            uVar3 = uVar3 - 4;
            puVar9 = puVar9 + -4;
            puVar8[-1] = *puVar11;
            puVar8[-2] = uVar17;
            puVar8[1] = uVar16;
            *puVar8 = uVar15;
            puVar8 = puVar8 + -4;
          } while (uVar3 != 0);
          puVar4 = puVar4 + -uVar7;
          puVar11 = puVar10;
          if (uVar6 == uVar7) goto LAB_003be998;
        }
        do {
          puVar14 = puVar14 + -1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar14;
        } while (puVar14 != puVar10);
        puVar11 = *(undefined8 **)(this + 0x68);
      }
LAB_003be998:
      *(undefined8 **)(this + 0x68) = puVar4;
      *(undefined8 **)(this + 0x70) = puVar13;
      *(void **)(this + 0x78) = (void *)((long)pvVar2 + uVar5 * 8);
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete(puVar11);
      }
      *(undefined8 **)(this + 0x70) = puVar13;
      return;
    }
    goto LAB_003bec6c;
  }
  puVar11 = *(undefined8 **)(this + 0x10);
  if (puVar11 < *(undefined8 **)(this + 0x18)) {
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
  }
  else {
    puVar10 = *(undefined8 **)(this + 8);
    lVar12 = (long)puVar11 - (long)puVar10 >> 3;
    uVar6 = lVar12 + 1;
    if (uVar6 >> 0x3d != 0) goto LAB_003bec6c;
    uVar3 = (long)*(undefined8 **)(this + 0x18) - (long)puVar10;
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
      if (uVar5 >> 0x3d != 0) goto LAB_003bec70;
      pvVar2 = operator_new(uVar5 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
    puVar13 = puVar4 + 1;
    *puVar4 = param_1;
    if ((long)puVar11 - (long)puVar10 != 0) {
      uVar6 = ((long)puVar11 - (long)puVar10) - 8;
      puVar14 = puVar11;
      if ((0x37 < uVar6) &&
         (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar2)))) {
        puVar8 = puVar4 + -2;
        puVar9 = puVar11 + -2;
        uVar6 = (uVar6 >> 3) + 1;
        uVar7 = uVar6 & 0x3ffffffffffffffc;
        puVar14 = puVar11 + -uVar7;
        uVar3 = uVar7;
        do {
          puVar11 = puVar9 + -1;
          uVar17 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          uVar3 = uVar3 - 4;
          puVar9 = puVar9 + -4;
          puVar8[-1] = *puVar11;
          puVar8[-2] = uVar17;
          puVar8[1] = uVar16;
          *puVar8 = uVar15;
          puVar8 = puVar8 + -4;
        } while (uVar3 != 0);
        puVar4 = puVar4 + -uVar7;
        puVar11 = puVar10;
        if (uVar6 == uVar7) goto LAB_003bea54;
      }
      do {
        puVar14 = puVar14 + -1;
        puVar4 = puVar4 + -1;
        *puVar4 = *puVar14;
      } while (puVar14 != puVar10);
      puVar11 = *(undefined8 **)(this + 8);
    }
LAB_003bea54:
    *(undefined8 **)(this + 8) = puVar4;
    *(undefined8 **)(this + 0x10) = puVar13;
    *(void **)(this + 0x18) = (void *)((long)pvVar2 + uVar5 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
    }
  }
  *(undefined8 **)(this + 0x10) = puVar13;
  if (((byte)param_1[0x10] & 3) == 0) goto LAB_003beba0;
  puVar11 = *(undefined8 **)(this + 0x28);
  if (puVar11 < *(undefined8 **)(this + 0x30)) {
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
  }
  else {
    puVar10 = *(undefined8 **)(this + 0x20);
    lVar12 = (long)puVar11 - (long)puVar10 >> 3;
    uVar6 = lVar12 + 1;
    if (uVar6 >> 0x3d != 0) {
LAB_003bec6c:
                    /* WARNING: Subroutine does not return */
      FUN_00345418();
    }
    uVar3 = (long)*(undefined8 **)(this + 0x30) - (long)puVar10;
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
LAB_003bec70:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar5 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
    puVar13 = puVar4 + 1;
    *puVar4 = param_1;
    if ((long)puVar11 - (long)puVar10 != 0) {
      uVar6 = ((long)puVar11 - (long)puVar10) - 8;
      puVar14 = puVar11;
      if ((0x37 < uVar6) &&
         (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar2)))) {
        puVar8 = puVar4 + -2;
        puVar9 = puVar11 + -2;
        uVar6 = (uVar6 >> 3) + 1;
        uVar7 = uVar6 & 0x3ffffffffffffffc;
        puVar14 = puVar11 + -uVar7;
        uVar3 = uVar7;
        do {
          puVar11 = puVar9 + -1;
          uVar17 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          uVar3 = uVar3 - 4;
          puVar9 = puVar9 + -4;
          puVar8[-1] = *puVar11;
          puVar8[-2] = uVar17;
          puVar8[1] = uVar16;
          *puVar8 = uVar15;
          puVar8 = puVar8 + -4;
        } while (uVar3 != 0);
        puVar4 = puVar4 + -uVar7;
        puVar11 = puVar10;
        if (uVar6 == uVar7) goto LAB_003beb80;
      }
      do {
        puVar14 = puVar14 + -1;
        puVar4 = puVar4 + -1;
        *puVar4 = *puVar14;
      } while (puVar14 != puVar10);
      puVar11 = *(undefined8 **)(this + 0x20);
    }
LAB_003beb80:
    *(undefined8 **)(this + 0x20) = puVar4;
    *(undefined8 **)(this + 0x28) = puVar13;
    *(void **)(this + 0x30) = (void *)((long)pvVar2 + uVar5 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
    }
  }
  *(undefined8 **)(this + 0x28) = puVar13;
  param_1[0x2a] = (DataBind)0x1;
LAB_003beba0:
  lVar12 = *(long *)(this + 0x98);
  *(DataBindContainer **)(param_1 + 0x20) = this;
  if (lVar12 == 0) {
    return;
  }
  uVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1bf);
  if ((uVar6 & 1) == 0) {
    return;
  }
  DataBindContext::bindFromContext((DataBindContext *)param_1,*(DataContext **)(this + 0x98));
  uVar1 = *(ushort *)(param_1 + 0x2c);
  if (((uVar1 >> 1 & 1) != 0) && (*(long **)(param_1 + 0x48) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x80))();
  }
  if (((byte)param_1[0x10] >> 3 & 1) == 0) {
    (**(code **)(*(long *)param_1 + 0x68))(param_1,0);
  }
  if (uVar1 != 0) {
    *(undefined2 *)(param_1 + 0x2c) = 0;
    (**(code **)(*(long *)param_1 + 0x70))(param_1,uVar1);
  }
  if (((byte)param_1[0x10] >> 3 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003bec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x68))(param_1,0);
  return;
}


// ===== 003bec74  rive::DataBindContainer::updateDataBind =====

/* rive::DataBindContainer::updateDataBind(rive::DataBind*, bool) */

DataBindContainer * __thiscall
rive::DataBindContainer::updateDataBind(DataBindContainer *this,DataBind *param_1,bool param_2)

{
  ushort uVar1;
  DataBindContainer *pDVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x2c);
  if (((uVar1 >> 1 & 1) != 0) &&
     (this = *(DataBindContainer **)(param_1 + 0x48), this != (DataBindContainer *)0x0)) {
    this = (DataBindContainer *)(**(code **)(*(long *)this + 0x80))();
  }
  if ((param_2) && (((byte)param_1[0x10] >> 3 & 1) == 0)) {
    this = (DataBindContainer *)(**(code **)(*(long *)param_1 + 0x68))(param_1,0);
  }
  if (uVar1 != 0) {
    *(undefined2 *)(param_1 + 0x2c) = 0;
    this = (DataBindContainer *)(**(code **)(*(long *)param_1 + 0x70))(param_1,uVar1);
  }
  if ((param_2) && (((byte)param_1[0x10] >> 3 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003bed1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pDVar2 = (DataBindContainer *)(**(code **)(*(long *)param_1 + 0x68))(param_1,0);
    return pDVar2;
  }
  return this;
}


// ===== 003bed20  rive::DataBindContainer::updateDataBinds =====

/* rive::DataBindContainer::updateDataBinds(bool) */

void __thiscall rive::DataBindContainer::updateDataBinds(DataBindContainer *this,bool param_1)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (this[0xa0] != (DataBindContainer)0x0) {
    return;
  }
  plVar6 = *(long **)(this + 0x20);
  plVar1 = *(long **)(this + 0x28);
  if (plVar1 == plVar6) {
    puVar11 = *(undefined8 **)(this + 0x38);
    puVar8 = *(undefined8 **)(this + 0x40);
    if (puVar8 == puVar11) {
      return;
    }
    this[0xa0] = (DataBindContainer)0x1;
    if (puVar11 == puVar8) goto LAB_003beec0;
  }
  else {
    this[0xa0] = (DataBindContainer)0x1;
    do {
      lVar7 = *plVar6;
      plVar3 = *(long **)(lVar7 + 0x30);
      if ((((plVar3 == (long *)0x0) ||
           (uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,10), (uVar4 & 1) == 0)) ||
          (uVar4 = (**(code **)(**(long **)(lVar7 + 0x30) + 0x80))(), (uVar4 & 1) == 0)) ||
         (*(int *)(lVar7 + 0xc) == 0x254)) {
        plVar3 = (long *)*plVar6;
        uVar2 = *(ushort *)((long)plVar3 + 0x2c);
        if (((uVar2 >> 1 & 1) != 0) && ((long *)plVar3[9] != (long *)0x0)) {
          (**(code **)(*(long *)plVar3[9] + 0x80))();
        }
        if ((param_1) && ((*(byte *)(plVar3 + 2) >> 3 & 1) == 0)) {
          (**(code **)(*plVar3 + 0x68))(plVar3,0);
        }
        if (uVar2 != 0) {
          *(undefined2 *)((long)plVar3 + 0x2c) = 0;
          (**(code **)(*plVar3 + 0x70))(plVar3,uVar2);
        }
        if ((param_1) && ((*(byte *)(plVar3 + 2) >> 3 & 1) != 0)) {
          (**(code **)(*plVar3 + 0x68))(plVar3,0);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    puVar11 = *(undefined8 **)(this + 0x38);
    puVar8 = *(undefined8 **)(this + 0x40);
    if (puVar11 == puVar8) goto LAB_003beec0;
  }
  do {
    plVar6 = (long *)*puVar11;
    uVar2 = *(ushort *)((long)plVar6 + 0x2c);
    *(undefined1 *)((long)plVar6 + 0x29) = 0;
    if ((uVar2 >> 1 & 1) == 0) {
      if (uVar2 != 0) goto LAB_003bee70;
    }
    else {
      if ((long *)plVar6[9] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[9] + 0x80))();
      }
LAB_003bee70:
      *(undefined2 *)((long)plVar6 + 0x2c) = 0;
      (**(code **)(*plVar6 + 0x70))(plVar6,uVar2);
    }
    puVar11 = puVar11 + 1;
  } while (puVar11 != puVar8);
  puVar8 = *(undefined8 **)(this + 0x38);
LAB_003beec0:
  *(undefined8 **)(this + 0x40) = puVar8;
  if (*(long *)(this + 0x58) != *(long *)(this + 0x50)) {
    *(long *)(this + 0x38) = *(long *)(this + 0x50);
    *(long *)(this + 0x40) = *(long *)(this + 0x58);
    uVar5 = *(undefined8 *)(this + 0x48);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x60);
    *(undefined8 **)(this + 0x50) = puVar8;
    *(undefined8 **)(this + 0x58) = puVar8;
    *(undefined8 *)(this + 0x60) = uVar5;
  }
  puVar11 = *(undefined8 **)(this + 0x68);
  puVar8 = *(undefined8 **)(this + 0x70);
  this[0xa0] = (DataBindContainer)0x0;
  if (puVar11 != puVar8) {
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    puVar10 = puVar11;
    do {
      puVar9 = puVar10 + 1;
      addDataBind(this,(DataBind *)*puVar10);
      puVar10 = puVar9;
    } while (puVar9 != puVar8);
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
    }
  }
  puVar11 = *(undefined8 **)(this + 0x80);
  puVar8 = *(undefined8 **)(this + 0x88);
  if (puVar11 != puVar8) {
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    puVar10 = puVar11;
    do {
      puVar9 = puVar10 + 1;
      removeDataBind(this,(DataBind *)*puVar10);
      puVar10 = puVar9;
    } while (puVar9 != puVar8);
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
      return;
    }
  }
  return;
}


// ===== 003bef70  rive::DataBindContainer::sortDataBinds =====

/* rive::DataBindContainer::sortDataBinds() */

void __thiscall rive::DataBindContainer::sortDataBinds(DataBindContainer *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 != lVar1) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = *(long *)(lVar1 + uVar4 * 8);
      if ((*(byte *)(lVar5 + 0x10) & 3) != 0) {
        if (uVar4 != uVar3) {
          uVar6 = *(undefined8 *)(lVar1 + uVar3 * 8);
          *(long *)(lVar1 + uVar3 * 8) = lVar5;
          *(undefined8 *)(lVar1 + uVar4 * 8) = uVar6;
          lVar1 = *(long *)(this + 8);
          lVar2 = *(long *)(this + 0x10);
        }
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(lVar2 - lVar1 >> 3));
  }
  return;
}


// ===== 003befd0  rive::DataBindContainer::addDirtyDataBind =====

/* rive::DataBindContainer::addDirtyDataBind(rive::DataBind*) */

void __thiscall rive::DataBindContainer::addDirtyDataBind(DataBindContainer *this,DataBind *param_1)

{
  DataBindContainer *pDVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (((byte)param_1[0x10] & 3) != 0) {
    return;
  }
  if (param_1[0x29] != (DataBind)0x0) {
    return;
  }
  pDVar1 = this + 0x38;
  if (this[0xa0] != (DataBindContainer)0x0) {
    pDVar1 = this + 0x50;
  }
  puVar12 = *(undefined8 **)(pDVar1 + 8);
  lVar2 = 0x38;
  if (this[0xa0] != (DataBindContainer)0x0) {
    lVar2 = 0x50;
  }
  if (puVar12 < *(undefined8 **)(pDVar1 + 0x10)) {
    puVar16 = puVar12 + 1;
    *puVar12 = param_1;
    goto LAB_003bf150;
  }
  puVar14 = *(undefined8 **)(this + lVar2);
  lVar15 = (long)puVar12 - (long)puVar14 >> 3;
  uVar8 = lVar15 + 1;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00345418();
  }
  uVar5 = (long)*(undefined8 **)(pDVar1 + 0x10) - (long)puVar14;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar5) {
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
  puVar7 = (undefined8 *)((long)pvVar4 + lVar15 * 8);
  puVar16 = puVar7 + 1;
  *puVar7 = param_1;
  puVar13 = puVar12;
  if ((long)puVar12 - (long)puVar14 != 0) {
    uVar8 = ((long)puVar12 - (long)puVar14) - 8;
    puVar13 = puVar14;
    if ((0x37 < uVar8) &&
       (0x1f < (ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar14) - (long)pvVar4)))) {
      puVar10 = puVar7 + -2;
      puVar11 = puVar12 + -2;
      uVar8 = (uVar8 >> 3) + 1;
      uVar9 = uVar8 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar9;
      uVar5 = uVar9;
      do {
        puVar3 = puVar11 + -1;
        uVar19 = puVar11[-2];
        uVar18 = puVar11[1];
        uVar17 = *puVar11;
        uVar5 = uVar5 - 4;
        puVar11 = puVar11 + -4;
        puVar10[-1] = *puVar3;
        puVar10[-2] = uVar19;
        puVar10[1] = uVar18;
        *puVar10 = uVar17;
        puVar10 = puVar10 + -4;
      } while (uVar5 != 0);
      puVar7 = puVar7 + -uVar9;
      if (uVar8 == uVar9) goto LAB_003bf134;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar12;
    } while (puVar12 != puVar14);
  }
LAB_003bf134:
  *(undefined8 **)(this + lVar2) = puVar7;
  *(undefined8 **)(pDVar1 + 8) = puVar16;
  *(void **)(pDVar1 + 0x10) = (void *)((long)pvVar4 + uVar6 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
LAB_003bf150:
  *(undefined8 **)(pDVar1 + 8) = puVar16;
  param_1[0x29] = (DataBind)0x1;
  return;
}


// ===== 003bf180  rive::DataBindContext::decodeSourcePathIds =====

/* rive::DataBindContext::decodeSourcePathIds(rive::Span<unsigned char const>) */

void rive::DataBindContext::decodeSourcePathIds(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_88;
  long lStack_80;
  byte *local_78;
  char local_70;
  char local_6f;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  BinaryReader::BinaryReader((BinaryReader *)&local_88);
LAB_003bf1d8:
  do {
    pbVar1 = (byte *)(local_88 + lStack_80);
    if ((local_78 == pbVar1 || local_70 != '\0') || local_6f != '\0') {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar9 = 0;
    uVar17 = 0;
    do {
      if (pbVar1 <= local_78) {
        local_70 = '\x01';
        goto LAB_003bf240;
      }
      pbVar8 = local_78 + 1;
      bVar2 = *local_78;
      uVar10 = uVar9 & 0x3f;
      uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
      uVar17 = ((ulong)bVar2 & 0x7f) << uVar10 | uVar17;
      local_78 = pbVar8;
    } while ((char)bVar2 < '\0');
    if (uVar17 >> 0x20 != 0) {
      local_6f = '\x01';
LAB_003bf240:
      uVar17 = 0;
      local_78 = pbVar1;
    }
    puVar16 = *(undefined4 **)(param_1 + 0x68);
    if (*(undefined4 **)(param_1 + 0x70) <= puVar16) {
      puVar13 = *(undefined4 **)(param_1 + 0x60);
      lVar14 = (long)puVar16 - (long)puVar13 >> 2;
      uVar9 = lVar14 + 1;
      if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003b1ebc();
      }
      uVar6 = (long)*(undefined4 **)(param_1 + 0x70) - (long)puVar13;
      uVar10 = (long)uVar6 >> 1;
      if (uVar10 <= uVar9) {
        uVar10 = uVar9;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar5 = operator_new(uVar10 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar5 + lVar14 * 4);
      puVar15 = puVar7 + 1;
      *puVar7 = (int)uVar17;
      if ((long)puVar16 - (long)puVar13 != 0) {
        uVar9 = ((long)puVar16 - (long)puVar13) - 4;
        if ((0x1b < uVar9) &&
           (0x1f < (ulong)((long)puVar16 + (-((long)puVar16 - (long)puVar13) - (long)pvVar5)))) {
          puVar11 = (undefined8 *)(puVar7 + -4);
          puVar12 = (undefined8 *)(puVar16 + -4);
          uVar9 = (uVar9 >> 2) + 1;
          uVar6 = uVar9 & 0x7ffffffffffffff8;
          puVar16 = puVar16 + -uVar6;
          uVar17 = uVar6;
          do {
            puVar4 = puVar12 + -1;
            uVar20 = puVar12[-2];
            uVar19 = puVar12[1];
            uVar18 = *puVar12;
            uVar17 = uVar17 - 8;
            puVar12 = puVar12 + -4;
            puVar11[-1] = *puVar4;
            puVar11[-2] = uVar20;
            puVar11[1] = uVar19;
            *puVar11 = uVar18;
            puVar11 = puVar11 + -4;
          } while (uVar17 != 0);
          puVar7 = puVar7 + -uVar6;
          if (uVar9 == uVar6) goto LAB_003bf32c;
        }
        do {
          puVar16 = puVar16 + -1;
          puVar7 = puVar7 + -1;
          *puVar7 = *puVar16;
        } while (puVar16 != puVar13);
      }
LAB_003bf32c:
      *(undefined4 **)(param_1 + 0x60) = puVar7;
      *(undefined4 **)(param_1 + 0x68) = puVar15;
      *(void **)(param_1 + 0x70) = (void *)((long)pvVar5 + uVar10 * 4);
      if (puVar13 != (undefined4 *)0x0) {
        operator_delete(puVar13);
      }
      *(undefined4 **)(param_1 + 0x68) = puVar15;
      goto LAB_003bf1d8;
    }
    *puVar16 = (int)uVar17;
    *(undefined4 **)(param_1 + 0x68) = puVar16 + 1;
  } while( true );
}


// ===== 003bf38c  rive::DataBindContext::copySourcePathIds =====

/* rive::DataBindContext::copySourcePathIds(rive::DataBindContextBase const&) */

void __thiscall
rive::DataBindContext::copySourcePathIds(DataBindContext *this,DataBindContextBase *param_1)

{
  if (this != (DataBindContext *)param_1) {
    FUN_003bf3d0(this + 0x60,*(long *)(param_1 + 0x60),*(long *)(param_1 + 0x68),
                 *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 2);
  }
  this[0x78] = *(DataBindContext *)(param_1 + 0x78);
  return;
}


// ===== 003bf3d0  FUN_003bf3d0 =====

void FUN_003bf3d0(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  void *__dest;
  
  uVar4 = param_1[2];
  __dest = (void *)*param_1;
  if (param_4 <= (ulong)((long)(uVar4 - (long)__dest) >> 2)) {
    sVar3 = (long)param_1[1] - (long)__dest;
    if ((ulong)((long)sVar3 >> 2) < param_4) {
      __src = (void *)((long)param_2 + sVar3);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,sVar3);
        __dest = (void *)param_1[1];
      }
      lVar2 = -(long)__src;
    }
    else {
      lVar2 = -(long)param_2;
      __src = param_2;
    }
    sVar3 = param_3 + lVar2;
    if (sVar3 != 0) {
      memmove(__dest,__src,sVar3);
    }
LAB_003bf4dc:
    param_1[1] = (long)__dest + sVar3;
    return;
  }
  if (__dest != (void *)0x0) {
    param_1[1] = __dest;
    operator_delete(__dest);
    uVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar1 = (long)uVar4 >> 1;
    if ((ulong)((long)uVar4 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 >> 0x3e == 0) {
      __dest = operator_new(uVar1 * 4);
      sVar3 = param_3 - (long)param_2;
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (void *)((long)__dest + uVar1 * 4);
      if (sVar3 != 0) {
        memcpy(__dest,param_2,sVar3);
      }
      goto LAB_003bf4dc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003b1ebc();
}


// ===== 003bf4fc  rive::DataBindContext::resolvePath =====

/* rive::DataBindContext::resolvePath() */

void __thiscall rive::DataBindContext::resolvePath(DataBindContext *this)

{
  undefined4 *puVar1;
  void *__src;
  ulong __n;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__dest;
  
  if ((((byte)this[0x10] >> 4 & 1) != 0) && (this[0x78] == (DataBindContext)0x0)) {
    puVar1 = *(undefined4 **)(this + 0x60);
    this[0x78] = (DataBindContext)0x1;
    if ((*(undefined4 **)(this + 0x68) != puVar1) &&
       ((*(long *)(this + 0x58) != 0 &&
        (lVar2 = *(long *)(*(long *)(this + 0x58) + 0x118), lVar2 != 0)))) {
      plVar3 = (long *)(lVar2 + 0x80);
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,*puVar1);
      __src = (void *)*puVar4;
      __n = puVar4[1] - (long)__src;
      if (__n != 0) {
        if (-1 < (long)__n) {
          __dest = operator_new(__n);
          memcpy(__dest,__src,__n);
          FUN_003bf3d0(this + 0x60,__dest,(long)__dest + __n,__n >> 2);
          operator_delete(__dest);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_003b1ebc();
      }
    }
  }
  return;
}


// ===== 003bf5b8  rive::DataBindContext::bindFromContext =====

/* WARNING: Removing unreachable block (ram,0x003bf7f0) */
/* rive::DataBindContext::bindFromContext(rive::DataContext*) */

void __thiscall rive::DataBindContext::bindFromContext(DataBindContext *this,DataContext *param_1)

{
  void *pvVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  void *__dest;
  ViewModelInstanceValue *this_00;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ViewModelInstanceValue *pVVar13;
  long lVar14;
  void *local_88;
  void *local_80;
  long local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != (DataContext *)0x0) {
    resolvePath(this);
    if ((((byte)this[0x10] >> 4 & 1) == 0) || (lVar14 = *(long *)(this + 0x58), lVar14 == 0)) {
      pvVar1 = *(void **)(this + 0x60);
      local_88 = (void *)0x0;
      local_80 = (void *)0x0;
      local_78 = 0;
      uVar6 = *(long *)(this + 0x68) - (long)pvVar1;
      if (uVar6 != 0) {
        if ((long)uVar6 < 0) goto LAB_003bf950;
        __dest = operator_new(uVar6);
        local_88 = __dest;
        local_78 = (long)__dest + uVar6;
        memcpy(__dest,pvVar1,uVar6);
        local_80 = (void *)((long)__dest + uVar6);
        this_00 = (ViewModelInstanceValue *)DataContext::getViewModelProperty(param_1,&local_88);
        local_80 = __dest;
        pvVar1 = local_68;
        goto LAB_003bf6dc;
      }
      this_00 = (ViewModelInstanceValue *)DataContext::getViewModelProperty(param_1,&local_88);
    }
    else {
      pvVar1 = *(void **)(this + 0x60);
      local_70 = (void *)0x0;
      local_68 = (void *)0x0;
      local_60 = (void *)0x0;
      uVar6 = *(long *)(this + 0x68) - (long)pvVar1;
      if (uVar6 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if ((long)uVar6 < 0) {
LAB_003bf950:
                    /* WARNING: Subroutine does not return */
          FUN_003b1ebc();
        }
        __dest = operator_new(uVar6);
        local_70 = __dest;
        local_60 = (void *)((long)__dest + uVar6);
        memcpy(__dest,pvVar1,uVar6);
        local_68 = (void *)((long)__dest + uVar6);
      }
      lVar7 = *(long *)(lVar14 + 0x118);
      lVar14 = 0;
      if (lVar7 != 0) {
        lVar14 = lVar7 + 0x80;
      }
      this_00 = (ViewModelInstanceValue *)
                DataContext::getRelativeViewModelProperty(param_1,&local_70,lVar14);
      pvVar1 = __dest;
      if (__dest != (void *)0x0) {
LAB_003bf6dc:
        local_68 = pvVar1;
        operator_delete(__dest);
      }
    }
    pVVar13 = *(ViewModelInstanceValue **)(this + 0x38);
    if ((pVVar13 == (ViewModelInstanceValue *)0x0) || (this_00 != pVVar13)) {
      if (this_00 == (ViewModelInstanceValue *)0x0) {
        pcVar9 = *(code **)(*(long *)this + 0x80);
      }
      else {
        if (pVVar13 != (ViewModelInstanceValue *)0x0) {
          if (((byte)this[0x10] >> 2 & 1) == 0) {
            puVar8 = *(undefined8 **)(pVVar13 + 0xf0);
            puVar12 = *(undefined8 **)(pVVar13 + 0xe8);
            puVar10 = puVar12;
            for (; (puVar12 != puVar8 &&
                   (puVar10 = puVar12, (DataBindContext *)*puVar12 != this + 0x18));
                puVar12 = puVar12 + 1) {
              puVar10 = puVar8;
            }
            if ((puVar10 != puVar8) && (puVar12 = puVar10 + 1, puVar11 = puVar10, puVar12 != puVar8)
               ) {
              do {
                puVar10 = puVar11;
                if ((DataBindContext *)*puVar12 != this + 0x18) {
                  puVar10 = puVar11 + 1;
                  *puVar11 = (DataBindContext *)*puVar12;
                }
                puVar12 = puVar12 + 1;
                puVar11 = puVar10;
              } while (puVar12 != puVar8);
              puVar8 = *(undefined8 **)(pVVar13 + 0xf0);
            }
            if (puVar10 != puVar8) {
              *(undefined8 **)(pVVar13 + 0xf0) = puVar10;
            }
            pVVar13 = *(ViewModelInstanceValue **)(this + 0x38);
            *(undefined8 *)(this + 0x38) = 0;
            if (pVVar13 == (ViewModelInstanceValue *)0x0) goto LAB_003bf834;
          }
          else {
            *(undefined8 *)(this + 0x38) = 0;
          }
          iVar4 = FUN_00340fe0(0xffffffff,pVVar13 + 0x8c);
          if (iVar4 == 1) {
            (**(code **)(*(long *)pVVar13 + 8))(pVVar13);
          }
        }
LAB_003bf834:
        FUN_00340fb0(1,this_00 + 0x8c);
        if (((byte)this[0x10] >> 2 & 1) == 0) {
          ViewModelInstanceValue::addDependent(this_00,(ViewModelValueDependent *)(this + 0x18));
        }
        FUN_00340fb0(1,this_00 + 0x8c);
        plVar5 = *(long **)(this + 0x38);
        *(ViewModelInstanceValue **)(this + 0x38) = this_00;
        if (plVar5 == (long *)0x0) {
LAB_003bf898:
          plVar5 = *(long **)(this + 0x30);
          if ((plVar5 != (long *)0x0) &&
             (uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x22f), (uVar6 & 1) != 0)) {
            lVar14 = *(long *)(this + 0x30);
            sVar3 = (**(code **)(**(long **)(this + 0x38) + 0x10))();
            *(bool *)(lVar14 + 0x408) = sVar3 == 0x1ba;
          }
        }
        else {
          iVar4 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x8c);
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
          if (*(long *)(this + 0x38) != 0) goto LAB_003bf898;
        }
        iVar4 = FUN_00340fe0(0xffffffff,this_00 + 0x8c);
        if (iVar4 == 1) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
        pcVar9 = *(code **)(*(long *)this + 0x78);
      }
      (*pcVar9)(this);
      plVar5 = *(long **)(this + 0x48);
    }
    else {
      (**(code **)(*(long *)this + 0x88))(this,0x1000,1);
      plVar5 = *(long **)(this + 0x48);
    }
    if (plVar5 != (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x003bf948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x70))(plVar5,param_1,this);
        return;
      }
      goto LAB_003bf94c;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_003bf94c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003bf954  FUN_003bf954 =====

void FUN_003bf954(DataBind *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x60);
  puVar1 = PTR_vtable_0067d248 + 0xd0;
  *(undefined **)param_1 = PTR_vtable_0067d248 + 0x10;
  *(undefined **)(param_1 + 0x18) = puVar1;
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x68) = pvVar2;
    operator_delete(pvVar2);
  }
  rive::DataBind::~DataBind(param_1);
  return;
}


// ===== 003bf9a0  FUN_003bf9a0 =====

void FUN_003bf9a0(DataBind *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x60);
  puVar1 = PTR_vtable_0067d248 + 0xd0;
  *(undefined **)param_1 = PTR_vtable_0067d248 + 0x10;
  *(undefined **)(param_1 + 0x18) = puVar1;
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x68) = pvVar2;
    operator_delete(pvVar2);
  }
  rive::DataBind::~DataBind(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003bf9f0  FUN_003bf9f0 =====

undefined8 FUN_003bf9f0(void)

{
  return 0x1bf;
}


// ===== 003bf9f8  FUN_003bf9f8 =====

bool FUN_003bf9f8(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffe) == 0x1be;
}


// ===== 003bfa08  FUN_003bfa08 =====

undefined4 FUN_003bfa08(long *param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  
  if (param_2 < 0x24c) {
    if (param_2 == 0x24a) {
      uVar8 = 0;
      uVar4 = 0;
      pbVar3 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar3) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003bfbc8;
        }
        pbVar7 = pbVar3 + 1;
        bVar1 = *pbVar3;
        uVar2 = uVar8 & 0x3f;
        uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar3 = pbVar7;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar7;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003bfbc8:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)((long)param_1 + 0xc) = (int)uVar4;
    }
    else {
      if (param_2 != 0x24b) {
        return 0;
      }
      uVar8 = 0;
      uVar4 = 0;
      pbVar3 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar3) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003bfb88;
        }
        pbVar7 = pbVar3 + 1;
        bVar1 = *pbVar3;
        uVar2 = uVar8 & 0x3f;
        uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar3 = pbVar7;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar7;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003bfb88:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 2) = (int)uVar4;
    }
  }
  else if (param_2 == 0x294) {
    uVar8 = 0;
    uVar4 = 0;
    pbVar3 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar3) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003bfbe0;
      }
      pbVar7 = pbVar3 + 1;
      bVar1 = *pbVar3;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
      pbVar3 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar4 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003bfbe0:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)((long)param_1 + 0x14) = (int)uVar4;
  }
  else {
    if (param_2 != 0x24c) {
      return 0;
    }
    uVar8 = 0;
    uVar4 = 0;
    pbVar3 = (byte *)(*param_3 + param_3[1]);
    pbVar7 = (byte *)param_3[2];
    do {
      if (pbVar3 <= pbVar7) {
        uVar4 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
        pbVar7 = pbVar3;
        goto LAB_003bfba8;
      }
      pbVar5 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
      pbVar7 = pbVar5;
    } while ((char)bVar1 < '\0');
    if ((char)param_3[3] != '\0') {
      uVar4 = 0;
    }
    pbVar3 = pbVar5;
    pbVar7 = pbVar5 + uVar4;
LAB_003bfba8:
    lVar6 = *param_1;
    param_3[2] = (long)pbVar7;
    (**(code **)(lVar6 + 0x98))(param_1,pbVar3,uVar4);
  }
  return 1;
}


// ===== 003bfbfc  FUN_003bfbfc =====

void FUN_003bfbfc(void)

{
  return;
}


// ===== 003bfc00  rive::DataBindListItemConsumer::from =====

/* rive::DataBindListItemConsumer::from(rive::Core*) */

Core * rive::DataBindListItemConsumer::from(Core *param_1)

{
  ushort uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  if (uVar1 < 0x22f) {
    if (uVar1 != 0x86) {
      if (uVar1 != 0x1b9) {
        return (Core *)0x0;
      }
      return param_1 + 0x118;
    }
  }
  else if (uVar1 != 0x26b) {
    if (uVar1 != 0x22f) {
      return (Core *)0x0;
    }
    return param_1 + 0x1b8;
  }
  return param_1 + 0x1b0;
}


// ===== 003bfc6c  rive::DataBindViewModelConsumer::from =====

/* rive::DataBindViewModelConsumer::from(rive::Core*) */

Core * rive::DataBindViewModelConsumer::from(Core *param_1)

{
  Core *pCVar1;
  short sVar2;
  
  sVar2 = (**(code **)(*(long *)param_1 + 0x10))();
  pCVar1 = param_1 + 0x118;
  if (sVar2 != 0x1bc) {
    pCVar1 = (Core *)0x0;
  }
  return pCVar1;
}


// ===== 003bfca4  rive::DataContext::DataContext =====

/* rive::DataContext::DataContext(rive::rcp<rive::ViewModelInstance>) */

void __thiscall rive::DataContext::DataContext(DataContext *this,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *(undefined4 *)this = 1;
  *(undefined8 *)(this + 8) = 0;
  if (lVar1 != 0) {
    FUN_00340fb0(1,lVar1 + 0xa4);
  }
  *(long *)(this + 0x10) = lVar1;
  return;
}


// ===== 003bfce4  rive::DataContext::viewModelInstance =====

/* rive::DataContext::viewModelInstance(rive::rcp<rive::ViewModelInstance>) */

void __thiscall rive::DataContext::viewModelInstance(DataContext *this,DataContext *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  this = this + 0x10;
  if (this != param_2) {
    lVar3 = *(long *)param_2;
    if (lVar3 != 0) {
      FUN_00340fb0(1,lVar3 + 0xa4);
    }
    plVar2 = *(long **)this;
    *(long *)this = lVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x003bfd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


// ===== 003bfd60  rive::DataContext::advanced =====

/* rive::DataContext::advanced() */

void __thiscall rive::DataContext::advanced(DataContext *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(*(long *)(this + 0x10) + 0xb0);
  for (puVar4 = *(undefined8 **)(*(long *)(this + 0x10) + 0xa8); puVar4 != puVar1;
      puVar4 = puVar4 + 1) {
    plVar3 = (long *)*puVar4;
    if (plVar3 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar3 + 0x8c);
    }
    (**(code **)(*plVar3 + 0xa0))(plVar3);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x8c);
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return;
}


// ===== 003bfde8  rive::DataContext::getViewModelProperty =====

/* rive::DataContext::getViewModelProperty(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >) const */

long * __thiscall rive::DataContext::getViewModelProperty(DataContext *this,long *param_2)

{
  undefined8 *puVar1;
  void *__src;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  void *__dest;
  long lVar9;
  DataContext *pDVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  void *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  piVar13 = (int *)*param_2;
  if ((int *)param_2[1] != piVar13) {
    plVar11 = *(long **)(this + 0x10);
    if ((plVar11 != (long *)0x0) && ((int)plVar11[0x14] == *piVar13)) {
      if (param_2[1] - (long)piVar13 == 4) goto LAB_003bffd4;
      FUN_00340fb0(1,(long)plVar11 + 0xa4);
      piVar13 = (int *)*param_2;
      do {
        lVar9 = param_2[1];
        puVar1 = (undefined8 *)plVar11[0x15];
        puVar2 = (undefined8 *)plVar11[0x16];
        piVar13 = piVar13 + 1;
        iVar7 = *piVar13;
        bVar5 = piVar13 == (int *)(lVar9 + -4);
        while( true ) {
          if (puVar1 == puVar2) {
            plVar12 = (long *)0x0;
            goto LAB_003bff48;
          }
          plVar12 = (long *)*puVar1;
          if (plVar12 != (long *)0x0) {
            FUN_00340fb0(1,(long)plVar12 + 0x8c);
          }
          lVar4 = plVar12[0x11];
          iVar6 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x8c);
          if (iVar6 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          if ((int)lVar4 == iVar7) break;
          puVar1 = puVar1 + 1;
        }
        if ((piVar13 == (int *)(lVar9 + -4)) || (plVar12 == (long *)0x0)) {
LAB_003bff48:
          iVar7 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0xa4);
          if (iVar7 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          if (bVar5) goto LAB_003bffd8;
          break;
        }
        uVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,0x1bc);
        if ((uVar8 & 1) == 0) {
          bVar5 = false;
          goto LAB_003bff48;
        }
        plVar12 = (long *)plVar12[0x24];
        if (plVar12 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar12 + 0xa4);
        }
        iVar7 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0xa4);
        if (iVar7 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        plVar11 = plVar12;
      } while (plVar12 != (long *)0x0);
    }
    pDVar10 = *(DataContext **)(this + 8);
    if (pDVar10 != (DataContext *)0x0) {
      __src = (void *)*param_2;
      local_80 = (void *)0x0;
      local_78 = 0;
      local_70 = 0;
      uVar8 = param_2[1] - (long)__src;
      if (uVar8 == 0) {
        plVar12 = (long *)getViewModelProperty(pDVar10,&local_80);
      }
      else {
        if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003b1ebc();
        }
        __dest = operator_new(uVar8);
        local_80 = __dest;
        local_70 = (long)__dest + uVar8;
        memcpy(__dest,__src,uVar8);
        local_78 = (long)__dest + uVar8;
        plVar12 = (long *)getViewModelProperty(pDVar10,&local_80);
        operator_delete(__dest);
      }
      goto LAB_003bffd8;
    }
  }
LAB_003bffd4:
  plVar12 = (long *)0x0;
LAB_003bffd8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return plVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c0030  rive::DataContext::getRelativeViewModelProperty =====

/* rive::DataContext::getRelativeViewModelProperty(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >, rive::DataResolver*) const */

void __thiscall
rive::DataContext::getRelativeViewModelProperty(DataContext *this,long *param_2,undefined8 *param_3)

{
  void *__src;
  long lVar1;
  byte bVar2;
  int iVar3;
  ViewModelInstance *pVVar4;
  basic_string *pbVar5;
  ViewModelInstance *pVVar6;
  ulong uVar7;
  void *__dest;
  undefined4 *puVar8;
  DataContext *pDVar9;
  ViewModelInstance *this_00;
  ViewModelInstance *unaff_x23;
  undefined4 *puVar10;
  void *local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  pVVar4 = (ViewModelInstance *)0x0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    puVar10 = (undefined4 *)*param_2;
    puVar8 = (undefined4 *)param_2[1];
    if (puVar8 != puVar10) {
      this_00 = *(ViewModelInstance **)(this + 0x10);
      if (this_00 != (ViewModelInstance *)0x0) {
        FUN_00340fb0(1,this_00 + 0xa4);
        puVar10 = (undefined4 *)*param_2;
        puVar8 = (undefined4 *)param_2[1];
      }
      if ((long)puVar8 - (long)puVar10 == 4) {
        pbVar5 = (basic_string *)(**(code **)*param_3)(param_3,*puVar10);
        pVVar4 = (ViewModelInstance *)ViewModelInstance::propertyValue(this_00,pbVar5);
        bVar2 = 1;
        if (pVVar4 == (ViewModelInstance *)0x0) {
          bVar2 = 2;
        }
      }
      else {
        if (puVar10 != puVar8 + -1) {
          do {
            pbVar5 = (basic_string *)(**(code **)*param_3)(param_3,*puVar10);
            pVVar6 = (ViewModelInstance *)ViewModelInstance::propertyValue(this_00,pbVar5);
            pVVar4 = unaff_x23;
            if ((pVVar6 == (ViewModelInstance *)0x0) ||
               (uVar7 = (**(code **)(*(long *)pVVar6 + 0x18))(pVVar6,0x1bc), pVVar4 = pVVar6,
               (uVar7 & 1) == 0)) {
              bVar2 = 2;
              goto LAB_003c01ac;
            }
            unaff_x23 = *(ViewModelInstance **)(pVVar6 + 0x120);
            if (unaff_x23 != (ViewModelInstance *)0x0) {
              FUN_00340fb0(1,unaff_x23 + 0xa4);
            }
            pVVar4 = (ViewModelInstance *)FUN_00340fe0(0xffffffff,this_00 + 0xa4);
            if ((int)pVVar4 == 1) {
              pVVar4 = (ViewModelInstance *)(**(code **)(*(long *)this_00 + 8))(this_00);
            }
            if (unaff_x23 == (ViewModelInstance *)0x0) goto LAB_003c01e0;
            puVar10 = puVar10 + 1;
            this_00 = unaff_x23;
          } while (puVar10 != (undefined4 *)(param_2[1] + -4));
        }
        pbVar5 = (basic_string *)(**(code **)*param_3)(param_3,*puVar10);
        pVVar4 = (ViewModelInstance *)ViewModelInstance::propertyValue(this_00,pbVar5);
        bVar2 = pVVar4 != (ViewModelInstance *)0x0;
      }
LAB_003c01ac:
      iVar3 = FUN_00340fe0(0xffffffff,this_00 + 0xa4);
      if (iVar3 == 1) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
      if ((bVar2 | 2) == 2) {
LAB_003c01e0:
        pDVar9 = *(DataContext **)(this + 8);
        if (pDVar9 == (DataContext *)0x0) {
          pVVar4 = (ViewModelInstance *)0x0;
        }
        else {
          __src = (void *)*param_2;
          local_70 = (void *)0x0;
          local_68 = 0;
          local_60 = 0;
          uVar7 = param_2[1] - (long)__src;
          if (uVar7 == 0) {
            pVVar4 = (ViewModelInstance *)getRelativeViewModelProperty(pDVar9,&local_70,param_3);
          }
          else {
            if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_003b1ebc(pVVar4);
            }
            __dest = operator_new(uVar7);
            local_70 = __dest;
            local_60 = (long)__dest + uVar7;
            memcpy(__dest,__src,uVar7);
            local_68 = (long)__dest + uVar7;
            pVVar4 = (ViewModelInstance *)getRelativeViewModelProperty(pDVar9,&local_70,param_3);
            operator_delete(__dest);
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pVVar4);
  }
  return;
}


// ===== 003c0298  rive::DataContext::getViewModelProperty =====

/* rive::DataContext::getViewModelProperty(rive::DataBindPath*) */

undefined8 __thiscall
rive::DataContext::getViewModelProperty(DataContext *this,DataBindPath *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  DataBindPath *pDVar4;
  void *__dest;
  undefined8 uVar5;
  DataBindPath *pDVar6;
  long lVar7;
  void *local_88;
  long local_80;
  long local_78;
  void *local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (((param_1[0xc] == (DataBindPath)0x0) || (*(long *)(param_1 + 0x28) == 0)) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x118), lVar7 == 0)) {
    pvVar1 = *(void **)(param_1 + 0x10);
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78 = 0;
    uVar2 = *(long *)(param_1 + 0x18) - (long)pvVar1;
    if (uVar2 == 0) {
      uVar5 = getViewModelProperty(this,&local_88);
      goto LAB_003c0420;
    }
    if ((long)uVar2 < 0) goto LAB_003c0454;
    __dest = operator_new(uVar2);
    local_88 = __dest;
    local_78 = (long)__dest + uVar2;
    memcpy(__dest,pvVar1,uVar2);
    local_80 = (long)__dest + uVar2;
    uVar5 = getViewModelProperty(this,&local_88);
  }
  else {
    if (param_1[0x30] == (DataBindPath)0x0) {
      pDVar6 = param_1 + 0x10;
      if ((*(long *)(param_1 + 0x18) - (long)*(undefined4 **)pDVar6 == 4) &&
         (pDVar4 = (DataBindPath *)
                   (**(code **)(*(long *)(lVar7 + 0x80) + 8))(lVar7 + 0x80,**(undefined4 **)pDVar6),
         pDVar6 != pDVar4)) {
        FUN_003bf3d0(pDVar6,*(long *)pDVar4,*(long *)(pDVar4 + 8),
                     *(long *)(pDVar4 + 8) - *(long *)pDVar4 >> 2);
      }
      param_1[0x30] = (DataBindPath)0x1;
    }
    pvVar1 = *(void **)(param_1 + 0x10);
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60 = 0;
    uVar2 = *(long *)(param_1 + 0x18) - (long)pvVar1;
    if (uVar2 == 0) {
      uVar5 = getRelativeViewModelProperty(this,&local_70,lVar7 + 0x80);
      goto LAB_003c0420;
    }
    if ((long)uVar2 < 0) {
LAB_003c0454:
                    /* WARNING: Subroutine does not return */
      FUN_003b1ebc();
    }
    __dest = operator_new(uVar2);
    local_70 = __dest;
    local_60 = (long)__dest + uVar2;
    memcpy(__dest,pvVar1,uVar2);
    local_68 = (long)__dest + uVar2;
    uVar5 = getRelativeViewModelProperty(this,&local_70,lVar7 + 0x80);
  }
  operator_delete(__dest);
LAB_003c0420:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


// ===== 003c0458  rive::DataContext::getViewModelInstance =====

/* rive::DataContext::getViewModelInstance(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >) const */

void rive::DataContext::getViewModelInstance(long *param_1,long param_2,long *param_3)

{
  void *__src;
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *__dest;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  void *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((int *)param_3[1] == (int *)*param_3) {
LAB_003c0638:
    *param_1 = 0;
  }
  else {
    plVar7 = *(long **)(param_2 + 0x10);
    if ((plVar7 != (long *)0x0) && ((int)plVar7[0x14] == *(int *)*param_3)) {
      FUN_00340fb0(1,(long)plVar7 + 0xa4);
      piVar9 = (int *)*param_3;
      *param_1 = (long)plVar7;
      do {
        piVar9 = piVar9 + 1;
        if (piVar9 == (int *)param_3[1]) goto LAB_003c063c;
        puVar10 = (undefined8 *)plVar7[0x15];
        puVar1 = (undefined8 *)plVar7[0x16];
        if (puVar10 != puVar1) {
          iVar4 = *piVar9;
          do {
            plVar8 = (long *)*puVar10;
            if (plVar8 != (long *)0x0) {
              FUN_00340fb0(1,(long)plVar8 + 0x8c);
            }
            lVar6 = plVar8[0x11];
            iVar3 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x8c);
            if (iVar3 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
            if ((int)lVar6 == iVar4) {
              uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,0x1bc);
              if ((uVar5 & 1) != 0) {
                lVar6 = plVar8[0x24];
                if (lVar6 != 0) {
                  FUN_00340fb0(1,lVar6 + 0xa4);
                }
                *param_1 = lVar6;
                goto LAB_003c0580;
              }
              break;
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != puVar1);
        }
        *param_1 = 0;
LAB_003c0580:
        iVar4 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4);
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        plVar7 = (long *)*param_1;
      } while (plVar7 != (long *)0x0);
    }
    lVar6 = *(long *)(param_2 + 8);
    if (lVar6 == 0) goto LAB_003c0638;
    __src = (void *)*param_3;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_70 = 0;
    uVar5 = param_3[1] - (long)__src;
    if (uVar5 != 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003b1ebc();
      }
      __dest = operator_new(uVar5);
      local_80 = __dest;
      local_70 = (long)__dest + uVar5;
      memcpy(__dest,__src,uVar5);
      local_78 = (long)__dest + uVar5;
      getViewModelInstance(param_1,lVar6,&local_80);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        operator_delete(__dest);
        return;
      }
      goto LAB_003c0680;
    }
    getViewModelInstance(param_1,lVar6,&local_80);
  }
LAB_003c063c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_003c0680:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c0688  rive::DataContext::getRelativeViewModelInstance =====

/* rive::DataContext::getRelativeViewModelInstance(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >, rive::DataResolver*) const */

void rive::DataContext::getRelativeViewModelInstance
               (long *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  void *__src;
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  long *plVar5;
  ulong uVar6;
  void *__dest;
  ViewModelInstance *this;
  long lVar7;
  undefined4 *puVar8;
  void *local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_4 == (undefined8 *)0x0) || (param_3[1] == *param_3)) {
LAB_003c081c:
    *param_1 = 0;
  }
  else {
    this = *(ViewModelInstance **)(param_2 + 0x10);
    if (this == (ViewModelInstance *)0x0) {
LAB_003c0790:
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 == 0) goto LAB_003c081c;
      __src = (void *)*param_3;
      local_70 = (void *)0x0;
      local_68 = 0;
      local_60 = 0;
      uVar6 = param_3[1] - (long)__src;
      if (uVar6 != 0) {
        if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003b1ebc();
        }
        __dest = operator_new(uVar6);
        local_70 = __dest;
        local_60 = (long)__dest + uVar6;
        memcpy(__dest,__src,uVar6);
        local_68 = (long)__dest + uVar6;
        getRelativeViewModelInstance(param_1,lVar7,&local_70,param_4);
        if (*(long *)(lVar2 + 0x28) == local_58) {
          operator_delete(__dest);
          return;
        }
        goto LAB_003c0864;
      }
      getRelativeViewModelInstance(param_1,lVar7,&local_70,param_4);
    }
    else {
      FUN_00340fb0(1,this + 0xa4);
      puVar8 = (undefined4 *)*param_3;
      puVar1 = (undefined4 *)param_3[1];
      *param_1 = (long)this;
      if (puVar8 != puVar1) {
        do {
          pbVar4 = (basic_string *)(**(code **)*param_4)(param_4,*puVar8);
          plVar5 = (long *)ViewModelInstance::propertyValue(this,pbVar4);
          if ((plVar5 == (long *)0x0) ||
             (uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x1bc), (uVar6 & 1) == 0)) {
            *param_1 = 0;
          }
          else {
            lVar7 = plVar5[0x24];
            if (lVar7 != 0) {
              FUN_00340fb0(1,lVar7 + 0xa4);
            }
            *param_1 = lVar7;
          }
          iVar3 = FUN_00340fe0(0xffffffff,this + 0xa4);
          if (iVar3 == 1) {
            (**(code **)(*(long *)this + 8))(this);
          }
          this = (ViewModelInstance *)*param_1;
          if (this == (ViewModelInstance *)0x0) goto LAB_003c0790;
          puVar8 = puVar8 + 1;
        } while (puVar8 != (undefined4 *)param_3[1]);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_003c0864:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c086c  rive::DataContext::getViewModelInstance =====

/* rive::DataContext::getViewModelInstance(rive::DataBindPath*) const */

void rive::DataContext::getViewModelInstance(DataBindPath *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *__dest;
  long in_x1;
  undefined8 *in_x8;
  long *plVar5;
  long lVar6;
  void *local_88;
  long local_80;
  long local_78;
  void *local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (in_x1 == 0) {
LAB_003c0990:
    *in_x8 = 0;
LAB_003c0994:
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
  }
  else {
    if (*(char *)(in_x1 + 0xc) == '\0') {
      if ((*(char *)(in_x1 + 0x30) == '\0') && (*(long *)(in_x1 + 0x28) != 0)) {
        lVar6 = *(long *)(*(long *)(in_x1 + 0x28) + 0x118);
        if (lVar6 != 0) {
          plVar5 = (long *)(in_x1 + 0x10);
          if ((*(long *)(in_x1 + 0x18) - *plVar5 == 4) &&
             (plVar4 = (long *)(**(code **)(*(long *)(lVar6 + 0x80) + 8))
                                         (lVar6 + 0x80,*(undefined4 *)*plVar5), plVar5 != plVar4)) {
            FUN_003bf3d0(plVar5,*plVar4,plVar4[1],plVar4[1] - *plVar4 >> 2);
          }
        }
        *(undefined1 *)(in_x1 + 0x30) = 1;
      }
      pvVar1 = *(void **)(in_x1 + 0x10);
      local_88 = (void *)0x0;
      local_80 = 0;
      local_78 = 0;
      uVar2 = *(long *)(in_x1 + 0x18) - (long)pvVar1;
      if (uVar2 == 0) {
        getViewModelInstance(param_1,&local_88);
        goto LAB_003c0994;
      }
      if ((long)uVar2 < 0) {
LAB_003c0af8:
                    /* WARNING: Subroutine does not return */
        FUN_003b1ebc();
      }
      __dest = operator_new(uVar2);
      local_88 = __dest;
      local_78 = (long)__dest + uVar2;
      memcpy(__dest,pvVar1,uVar2);
      local_80 = (long)__dest + uVar2;
      getViewModelInstance(in_x8,param_1,&local_88);
    }
    else {
      if ((*(long *)(in_x1 + 0x28) == 0) ||
         (lVar6 = *(long *)(*(long *)(in_x1 + 0x28) + 0x118), lVar6 == 0)) goto LAB_003c0990;
      if (*(char *)(in_x1 + 0x30) == '\0') {
        plVar5 = (long *)(in_x1 + 0x10);
        if ((*(long *)(in_x1 + 0x18) - *plVar5 == 4) &&
           (plVar4 = (long *)(**(code **)(*(long *)(lVar6 + 0x80) + 8))
                                       (lVar6 + 0x80,*(undefined4 *)*plVar5), plVar5 != plVar4)) {
          FUN_003bf3d0(plVar5,*plVar4,plVar4[1],plVar4[1] - *plVar4 >> 2);
        }
        *(undefined1 *)(in_x1 + 0x30) = 1;
      }
      pvVar1 = *(void **)(in_x1 + 0x10);
      local_70 = (void *)0x0;
      local_68 = 0;
      local_60 = 0;
      uVar2 = *(long *)(in_x1 + 0x18) - (long)pvVar1;
      if (uVar2 == 0) {
        getRelativeViewModelInstance(param_1,&local_70,lVar6 + 0x80);
        goto LAB_003c0994;
      }
      if ((long)uVar2 < 0) goto LAB_003c0af8;
      __dest = operator_new(uVar2);
      local_70 = __dest;
      local_60 = (long)__dest + uVar2;
      memcpy(__dest,pvVar1,uVar2);
      local_68 = (long)__dest + uVar2;
      getRelativeViewModelInstance(in_x8,param_1,&local_70,lVar6 + 0x80);
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      operator_delete(__dest);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c0afc  rive::DataBindPath::decodePath =====

/* rive::DataBindPath::decodePath(rive::Span<unsigned char const>) */

void rive::DataBindPath::decodePath(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_88;
  long lStack_80;
  byte *local_78;
  char local_70;
  char local_6f;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  BinaryReader::BinaryReader((BinaryReader *)&local_88);
LAB_003c0b54:
  do {
    pbVar1 = (byte *)(local_88 + lStack_80);
    if ((local_78 == pbVar1 || local_70 != '\0') || local_6f != '\0') {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar9 = 0;
    uVar17 = 0;
    do {
      if (pbVar1 <= local_78) {
        local_70 = '\x01';
        goto LAB_003c0bbc;
      }
      pbVar8 = local_78 + 1;
      bVar2 = *local_78;
      uVar10 = uVar9 & 0x3f;
      uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
      uVar17 = ((ulong)bVar2 & 0x7f) << uVar10 | uVar17;
      local_78 = pbVar8;
    } while ((char)bVar2 < '\0');
    if (uVar17 >> 0x20 != 0) {
      local_6f = '\x01';
LAB_003c0bbc:
      uVar17 = 0;
      local_78 = pbVar1;
    }
    puVar16 = *(undefined4 **)(param_1 + 0x18);
    if (*(undefined4 **)(param_1 + 0x20) <= puVar16) {
      puVar13 = *(undefined4 **)(param_1 + 0x10);
      lVar14 = (long)puVar16 - (long)puVar13 >> 2;
      uVar9 = lVar14 + 1;
      if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003b1ebc();
      }
      uVar6 = (long)*(undefined4 **)(param_1 + 0x20) - (long)puVar13;
      uVar10 = (long)uVar6 >> 1;
      if (uVar10 <= uVar9) {
        uVar10 = uVar9;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar5 = operator_new(uVar10 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar5 + lVar14 * 4);
      puVar15 = puVar7 + 1;
      *puVar7 = (int)uVar17;
      if ((long)puVar16 - (long)puVar13 != 0) {
        uVar9 = ((long)puVar16 - (long)puVar13) - 4;
        if ((0x1b < uVar9) &&
           (0x1f < (ulong)((long)puVar16 + (-((long)puVar16 - (long)puVar13) - (long)pvVar5)))) {
          puVar11 = (undefined8 *)(puVar7 + -4);
          puVar12 = (undefined8 *)(puVar16 + -4);
          uVar9 = (uVar9 >> 2) + 1;
          uVar6 = uVar9 & 0x7ffffffffffffff8;
          puVar16 = puVar16 + -uVar6;
          uVar17 = uVar6;
          do {
            puVar4 = puVar12 + -1;
            uVar20 = puVar12[-2];
            uVar19 = puVar12[1];
            uVar18 = *puVar12;
            uVar17 = uVar17 - 8;
            puVar12 = puVar12 + -4;
            puVar11[-1] = *puVar4;
            puVar11[-2] = uVar20;
            puVar11[1] = uVar19;
            *puVar11 = uVar18;
            puVar11 = puVar11 + -4;
          } while (uVar17 != 0);
          puVar7 = puVar7 + -uVar6;
          if (uVar9 == uVar6) goto LAB_003c0ca8;
        }
        do {
          puVar16 = puVar16 + -1;
          puVar7 = puVar7 + -1;
          *puVar7 = *puVar16;
        } while (puVar16 != puVar13);
      }
LAB_003c0ca8:
      *(undefined4 **)(param_1 + 0x10) = puVar7;
      *(undefined4 **)(param_1 + 0x18) = puVar15;
      *(void **)(param_1 + 0x20) = (void *)((long)pvVar5 + uVar10 * 4);
      if (puVar13 != (undefined4 *)0x0) {
        operator_delete(puVar13);
      }
      *(undefined4 **)(param_1 + 0x18) = puVar15;
      goto LAB_003c0b54;
    }
    *puVar16 = (int)uVar17;
    *(undefined4 **)(param_1 + 0x18) = puVar16 + 1;
  } while( true );
}


// ===== 003c0d08  rive::DataBindPath::copyPath =====

/* rive::DataBindPath::copyPath(rive::DataBindPathBase const&) */

void __thiscall rive::DataBindPath::copyPath(DataBindPath *this,DataBindPathBase *param_1)

{
  if (this != (DataBindPath *)param_1) {
    FUN_003bf3d0(this + 0x10,*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x18),
                 *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2);
  }
  this[0x30] = *(DataBindPath *)(param_1 + 0x30);
  return;
}


// ===== 003c0d4c  rive::DataBindPath::import =====

/* rive::DataBindPath::import(rive::ImportStack&) */

undefined8 __thiscall rive::DataBindPath::import(DataBindPath *this,ImportStack *param_1)

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
            if (plVar6[3] == 0) {
              return 1;
            }
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(plVar6[3] + 0x100);
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
  }
  return 1;
}


// ===== 003c0e1c  rive::DataBindPath::resolvedPath =====

/* rive::DataBindPath::resolvedPath() */

DataBindPath * __thiscall rive::DataBindPath::resolvedPath(DataBindPath *this)

{
  DataBindPath *pDVar1;
  long lVar2;
  DataBindPath *pDVar3;
  
  if ((this[0x30] == (DataBindPath)0x0) && (*(long *)(this + 0x28) != 0)) {
    lVar2 = *(long *)(*(long *)(this + 0x28) + 0x118);
    if (lVar2 != 0) {
      pDVar3 = this + 0x10;
      if ((*(long *)(this + 0x18) - (long)*(undefined4 **)pDVar3 == 4) &&
         (pDVar1 = (DataBindPath *)
                   (**(code **)(*(long *)(lVar2 + 0x80) + 8))(lVar2 + 0x80,**(undefined4 **)pDVar3),
         pDVar3 != pDVar1)) {
        FUN_003bf3d0(pDVar3,*(long *)pDVar1,*(long *)(pDVar1 + 8),
                     *(long *)(pDVar1 + 8) - *(long *)pDVar1 >> 2);
      }
    }
    this[0x30] = (DataBindPath)0x1;
    return this + 0x10;
  }
  return this + 0x10;
}


// ===== 003c0eb4  rive::DataBindPath::file =====

/* rive::DataBindPath::file(rive::File*) */

void __thiscall rive::DataBindPath::file(DataBindPath *this,File *param_1)

{
  *(File **)(this + 0x28) = param_1;
  return;
}


// ===== 003c0ebc  FUN_003c0ebc =====

void FUN_003c0ebc(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = (long)(PTR_vtable_0067d250 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[3] = (long)pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 003c0ee4  FUN_003c0ee4 =====

void FUN_003c0ee4(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = (long)(PTR_vtable_0067d250 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[3] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003c0f28  FUN_003c0f28 =====

undefined8 FUN_003c0f28(void)

{
  return 0x283;
}


// ===== 003c0f30  FUN_003c0f30 =====

bool FUN_003c0f30(undefined8 param_1,short param_2)

{
  return param_2 == 0x283;
}


// ===== 003c0f40  FUN_003c0f40 =====

undefined8 FUN_003c0f40(long *param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == 0x399) {
    pcVar6 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar6 < 1) {
      bVar3 = false;
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      param_3[2] = (long)(pcVar6 + 1);
      bVar3 = *pcVar6 == '\x01';
    }
    *(bool *)((long)param_1 + 0xc) = bVar3;
  }
  else {
    if (param_2 != 0x398) {
      return 0;
    }
    uVar10 = 0;
    uVar5 = 0;
    pbVar4 = (byte *)(*param_3 + param_3[1]);
    pbVar7 = (byte *)param_3[2];
    do {
      if (pbVar4 <= pbVar7) {
        uVar5 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
        pbVar7 = pbVar4;
        goto LAB_003c0ff8;
      }
      pbVar8 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar2 = uVar10 & 0x3f;
      uVar10 = (ulong)(((uint)uVar10 & 0xff) + 7);
      uVar5 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar5;
      pbVar7 = pbVar8;
    } while ((char)bVar1 < '\0');
    if ((char)param_3[3] != '\0') {
      uVar5 = 0;
    }
    pbVar4 = pbVar8;
    pbVar7 = pbVar8 + uVar5;
LAB_003c0ff8:
    lVar9 = *param_1;
    param_3[2] = (long)pbVar7;
    (**(code **)(lVar9 + 0x50))(param_1,pbVar4,uVar5);
  }
  return 1;
}


// ===== 003c1030  FUN_003c1030 =====

void FUN_003c1030(void)

{
  return;
}


// ===== 003c1034  FUN_003c1034 =====

void FUN_003c1034(void)

{
  return;
}


// ===== 003c1038  rive::DataBindPathReferencer::~DataBindPathReferencer =====

/* rive::DataBindPathReferencer::~DataBindPathReferencer() */

void __thiscall rive::DataBindPathReferencer::~DataBindPathReferencer(DataBindPathReferencer *this)

{
  if (*(long **)this != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003c1048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 8))();
    return;
  }
  return;
}


// ===== 003c1050  rive::DataBindPathReferencer::copyDataBindPath =====

/* rive::DataBindPathReferencer::copyDataBindPath(rive::DataBindPath*) */

void __thiscall
rive::DataBindPathReferencer::copyDataBindPath(DataBindPathReferencer *this,DataBindPath *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != (DataBindPath *)0x0) {
    lVar1 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)this = lVar1;
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
  }
  return;
}


// ===== 003c1090  rive::DataBindPathReferencer::importDataBindPath =====

/* rive::DataBindPathReferencer::importDataBindPath(rive::ImportStack&) */

void __thiscall
rive::DataBindPathReferencer::importDataBindPath(DataBindPathReferencer *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar12 = NEON_cnt(uVar4,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((uint)uVar4 - 1) & 0x283;
    }
    else {
      uVar8 = 0x283;
      if (uVar4 < 0x284) {
        uVar1 = (uint)uVar4 & 0xffff;
        uVar2 = 0;
        if ((uVar4 & 0xffff) != 0) {
          uVar2 = 0x283 / uVar1;
        }
        uVar8 = (ulong)(0x283 - uVar2 * uVar1);
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x283) {
          if ((short)plVar9[2] == 0x283) {
            lVar5 = plVar9[3];
            if (lVar5 == 0) {
              return;
            }
            lVar7 = *(long *)(lVar5 + 8);
            *(undefined8 *)(lVar5 + 8) = 0;
            if (lVar7 == 0) {
              return;
            }
            *(long *)this = lVar7;
            return;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar3 * uVar4;
          }
          if (uVar10 != uVar8) {
            return;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return;
}


// ===== 003c115c  rive::DataBindPathReferencer::decodeDataBindPath =====

/* rive::DataBindPathReferencer::decodeDataBindPath(rive::Span<unsigned char const>&) */

void __thiscall
rive::DataBindPathReferencer::decodeDataBindPath(DataBindPathReferencer *this,Span *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = (long *)operator_new(0x38);
  plVar4[1] = 0;
  *plVar4 = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  puVar3 = PTR_vtable_0067d250;
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  plVar4[6] = 0;
  plVar4[3] = 0;
  plVar4[2] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  *(undefined1 *)(plVar4 + 6) = 0;
  *(long **)this = plVar4;
  DataBindPath::decodePath(plVar4,uVar1,uVar2);
  *(undefined1 *)(*(long *)this + 0x30) = 1;
  return;
}


// ===== 003c11c8  rive::DependencySorter::sort =====

/* rive::DependencySorter::sort(rive::Component*, std::__ndk1::vector<rive::Component*,
   std::__ndk1::allocator<rive::Component*> >&) */

void __thiscall
rive::DependencySorter::sort(DependencySorter *this,Component *param_1,vector *param_2)

{
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
  visit(this,param_1,param_2);
  return;
}


// ===== 003c11d4  rive::DependencySorter::visit =====

/* rive::DependencySorter::visit(rive::Component*, std::__ndk1::vector<rive::Component*,
   std::__ndk1::allocator<rive::Component*> >&) */

undefined4 __thiscall
rive::DependencySorter::visit(DependencySorter *this,Component *param_1,vector *param_2)

{
  void *__src;
  undefined8 *puVar1;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined8 *__src_00;
  undefined2 uVar13;
  undefined8 uVar14;
  
  uVar6 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar9 = *(ulong *)(this + 8);
  uVar6 = ((ulong)param_1 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar9 != 0) {
    uVar14 = NEON_cnt(uVar9,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar3 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar3 < 2) {
      uVar7 = uVar9 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar9 <= uVar6) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar6 / uVar9;
        }
        uVar7 = uVar6 - uVar7 * uVar9;
      }
    }
    plVar10 = *(long **)(*(long *)this + uVar7 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar6) {
          if ((Component *)plVar10[2] == param_1) {
            return 1;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar11 = uVar11 & uVar9 - 1;
          }
          else if (uVar9 <= uVar11) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar2 * uVar9;
          }
          if (uVar11 != uVar7) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar9 = *(ulong *)(this + 0x30);
  if (uVar9 != 0) {
    uVar14 = NEON_cnt(uVar9,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar3 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar3 < 2) {
      uVar7 = uVar9 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar9 <= uVar6) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar6 / uVar9;
        }
        uVar7 = uVar6 - uVar7 * uVar9;
      }
    }
    plVar10 = *(long **)(*(long *)(this + 0x28) + uVar7 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar6) {
          if ((Component *)plVar10[2] == param_1) {
            fwrite("Dependency cycle!\n",0x12,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
            return 0;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar11 = uVar11 & uVar9 - 1;
          }
          else if (uVar9 <= uVar11) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar2 * uVar9;
          }
          if (uVar11 != uVar7) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  FUN_003c157c(this + 0x28,param_1,param_1);
  __src = *(void **)(param_1 + 0x68);
  uVar6 = *(long *)(param_1 + 0x70) - (long)__src;
  if (uVar6 == 0) {
    __dest = (void *)0x0;
LAB_003c13e0:
    FUN_003c157c(this,param_1,param_1);
    puVar1 = *(undefined8 **)(param_2 + 8);
    __src_00 = *(undefined8 **)param_2;
    if (puVar1 < *(undefined8 **)(param_2 + 0x10)) {
      if (__src_00 == puVar1) {
        *__src_00 = param_1;
        *(undefined8 **)(param_2 + 8) = __src_00 + 1;
      }
      else {
        puVar8 = puVar1;
        if (puVar1 + -1 < puVar1) {
          *puVar1 = puVar1[-1];
          puVar8 = puVar1 + 1;
        }
        *(undefined8 **)(param_2 + 8) = puVar8;
        if (puVar1 != __src_00 + 1) {
          sVar5 = (long)puVar1 - (long)(__src_00 + 1);
          memmove((void *)((long)puVar1 - sVar5),__src_00,sVar5);
        }
        *__src_00 = param_1;
      }
joined_r0x003c1494:
      uVar12 = 1;
      if (__dest != (void *)0x0) {
LAB_003c151c:
        operator_delete(__dest);
      }
      return uVar12;
    }
    sVar5 = (long)puVar1 - (long)__src_00;
    uVar6 = ((long)sVar5 >> 3) + 1;
    if (uVar6 >> 0x3d == 0) {
      uVar3 = (long)*(undefined8 **)(param_2 + 0x10) - (long)__src_00;
      uVar9 = (long)uVar3 >> 2;
      if (uVar9 <= uVar6) {
        uVar9 = uVar6;
      }
      if (0x7ffffffffffffff7 < uVar3) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        puVar4 = (undefined8 *)operator_new(8);
        puVar8 = puVar4 + 1;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_003c1578;
        puVar4 = (undefined8 *)operator_new(uVar9 * 8);
        puVar8 = puVar4 + uVar9;
      }
      *puVar4 = param_1;
      if (puVar1 != __src_00) {
        memmove(puVar4 + 1,__src_00,sVar5);
      }
      *(undefined8 **)(param_2 + 0x10) = puVar8;
      *(undefined8 **)param_2 = puVar4;
      *(size_t *)(param_2 + 8) = (long)(puVar4 + 1) + sVar5;
      if (__src_00 != (undefined8 *)0x0) {
        operator_delete(__src_00);
      }
      goto joined_r0x003c1494;
    }
  }
  else if (-1 < (long)uVar6) {
    __dest = operator_new(uVar6);
    memcpy(__dest,__src,uVar6);
    uVar9 = 0;
    do {
      uVar3 = visit(this,*(Component **)((long)__dest + uVar9),param_2);
      if ((uVar3 & 1) == 0) {
        uVar12 = 0;
        goto LAB_003c151c;
      }
      uVar9 = uVar9 + 8;
    } while (uVar6 != uVar9);
    goto LAB_003c13e0;
  }
  FUN_003ad240();
LAB_003c1578:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 003c157c  FUN_003c157c =====

void FUN_003c157c(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar7 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (param_2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x24 = uVar7 & uVar14 - 1;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar14 <= uVar7) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar7 / uVar14;
        }
        unaff_x24 = uVar7 - uVar11 * uVar14;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar11 = plVar8[1];
        if (uVar11 == uVar7) {
          if (plVar8[2] == param_2) {
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
          if (uVar11 != unaff_x24) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)operator_new(0x18);
  lVar3 = param_1[3];
  fVar17 = *(float *)(param_1 + 4);
  *plVar8 = 0;
  plVar8[1] = uVar7;
  plVar8[2] = param_3;
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
LAB_003c1714:
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
LAB_003c1940:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_003c1940;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_003c1714;
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
      unaff_x24 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar14 <= uVar7) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar7 / uVar14;
        }
        unaff_x24 = uVar7 - uVar9 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar6 = *plVar10;
    *plVar10 = (long)plVar8;
    *plVar8 = lVar6;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (lVar6 == 0) goto LAB_003c1920;
    uVar7 = *(ulong *)(lVar6 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar7 = uVar7 & uVar14 - 1;
    }
    else if (uVar14 <= uVar7) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar7 / uVar14;
      }
      uVar7 = uVar7 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_003c1920:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 003c1980  rive::DependencySorter::sort =====

/* rive::DependencySorter::sort(std::__ndk1::vector<rive::Component*,
   std::__ndk1::allocator<rive::Component*> >, std::__ndk1::vector<rive::Component*,
   std::__ndk1::allocator<rive::Component*> >&) */

void __thiscall
rive::DependencySorter::sort(DependencySorter *this,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_3[1] = *param_3;
  puVar1 = (undefined8 *)param_2[1];
  for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    visit(this,(Component *)*puVar2,(vector *)param_3);
  }
  return;
}


// ===== 003c19d4  rive::DrawTarget::onAddedDirty =====

/* rive::DrawTarget::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::DrawTarget::onAddedDirty(DrawTarget *this,CoreContext *param_1)

{
  DrawTarget *pDVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pDVar1 = (DrawTarget *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pDVar1 = (DrawTarget *)(param_1 + -0x998);
  }
  *(DrawTarget **)(this + 0x40) = pDVar1;
  *(DrawTarget **)(this + 0x80) = pDVar1;
  if (pDVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x88));
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0xd), (uVar3 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    *(long **)(this + 0x90) = plVar2;
  }
  return uVar4;
}


// ===== 003c1a78  rive::DrawTarget::onAddedClean =====

/* rive::DrawTarget::onAddedClean(rive::CoreContext*) */

undefined8 rive::DrawTarget::onAddedClean(CoreContext *param_1)

{
  return 0;
}


// ===== 003c1a80  rive::DrawTarget::placementValueChanged =====

/* rive::DrawTarget::placementValueChanged() */

void __thiscall rive::DrawTarget::placementValueChanged(DrawTarget *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((*(ushort *)(plVar3 + 0xc) >> 3 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 8;
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


// ===== 003c1ae8  FUN_003c1ae8 =====

void FUN_003c1ae8(long *param_1)

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


// ===== 003c1b54  FUN_003c1b54 =====

undefined8 FUN_003c1b54(void)

{
  return 0x30;
}


// ===== 003c1b5c  FUN_003c1b5c =====

bool FUN_003c1b5c(undefined8 param_1,short param_2)

{
  return param_2 == 0x30 || param_2 == 10;
}


// ===== 003c1b70  FUN_003c1b70 =====

undefined8 FUN_003c1b70(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x77) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003c1d44;
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
LAB_003c1d44:
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
      if (param_2 != 5) goto LAB_003c1d8c;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003c1d10;
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
LAB_003c1d10:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x78) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003c1d7c;
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
LAB_003c1d7c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x8c) = (int)uVar6;
  }
  else {
    if (param_2 != 0x77) goto LAB_003c1d8c;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003c1d28;
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
LAB_003c1d28:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003c1d8c:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c1db4  FUN_003c1db4 =====

void FUN_003c1db4(void)

{
  return;
}


// ===== 003c1db8  rive::Drawable::onAddedDirty =====

/* rive::Drawable::onAddedDirty(rive::CoreContext*) */

undefined1 __thiscall rive::Drawable::onAddedDirty(Drawable *this,CoreContext *param_1)

{
  Drawable *pDVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  
  pDVar1 = (Drawable *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pDVar1 = (Drawable *)(param_1 + -0x998);
  }
  *(Drawable **)(this + 0x40) = pDVar1;
  *(Drawable **)(this + 0x80) = pDVar1;
  if (pDVar1 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar4 + 0x90))(plVar3,this);
  }
  if ((byte)this[0x134] - 3 < 0x1a) {
    uVar2 = (&DAT_00253488)[(ulong)((byte)this[0x134] - 3) & 0xff];
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 003c1e44  rive::Drawable::addClippingShape =====

/* rive::Drawable::addClippingShape(rive::ClippingShape*) */

void __thiscall rive::Drawable::addClippingShape(Drawable *this,ClippingShape *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x148);
  if (puVar10 < *(undefined8 **)(this + 0x150)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003c1f84;
  }
  puVar9 = *(undefined8 **)(this + 0x140);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0035e1d4();
LAB_003c1fa4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x150) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003c1fa4;
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
      if (uVar6 == uVar7) goto LAB_003c1f70;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x140);
  }
LAB_003c1f70:
  *(undefined8 **)(this + 0x140) = puVar4;
  *(undefined8 **)(this + 0x148) = puVar13;
  *(void **)(this + 0x150) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003c1f84:
  *(undefined8 **)(this + 0x148) = puVar13;
  return;
}


// ===== 003c1fa8  rive::Drawable::willDraw =====

/* rive::Drawable::willDraw() */

uint __thiscall rive::Drawable::willDraw(Drawable *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x1e8))();
  return (uVar1 ^ 0xffffffff) & 1;
}


// ===== 003c1fcc  rive::Drawable::isChildOfLayout =====

/* rive::Drawable::isChildOfLayout(rive::LayoutComponent*) */

void __thiscall rive::Drawable::isChildOfLayout(Drawable *this,LayoutComponent *param_1)

{
  byte bVar1;
  
  do {
    bVar1 = (**(code **)(*(long *)this + 0x18))(this,0x199);
    if ((this == (Drawable *)param_1 & bVar1) != 0) {
      return;
    }
    this = *(Drawable **)(this + 0x30);
  } while (this != (Drawable *)0x0);
  return;
}


// ===== 003c2018  rive::Drawable::hitTestPoint =====

/* rive::Drawable::hitTestPoint(rive::Vec2D const&, bool, bool) */

undefined8 __thiscall
rive::Drawable::hitTestPoint(Drawable *this,Vec2D *param_1,bool param_2,bool param_3)

{
  ulong uVar1;
  Drawable *pDVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = (**(code **)(*(long *)this + 0x1e8))();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  pDVar2 = (Drawable *)(**(code **)(*(long *)this + 0x220))(this);
  if ((pDVar2 == this) || (pDVar2 == (Drawable *)0x0)) {
    pDVar2 = *(Drawable **)(this + 0x30);
    if (pDVar2 == (Drawable *)0x0) {
      return 1;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x88);
    param_3 = false;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x003c20b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(pDVar2,param_1,param_2,param_3);
  return uVar3;
}


// ===== 003c20c4  rive::DrawableProxy::hittableComponent =====

/* rive::DrawableProxy::hittableComponent() */

long __thiscall rive::DrawableProxy::hittableComponent(DrawableProxy *this)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(this + 0x178) != 0) {
    lVar1 = *(long *)(this + 0x178) + -0x188;
  }
  return lVar1;
}


// ===== 003c20d8  rive::DrawableProxy::isTargetOpaque =====

/* rive::DrawableProxy::isTargetOpaque() */

void __thiscall rive::DrawableProxy::isTargetOpaque(DrawableProxy *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x220))();
                    /* WARNING: Could not recover jumptable at 0x003c20f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1f0))();
  return;
}


// ===== 003c20fc  FUN_003c20fc =====

void FUN_003c20fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3c2100);
  (*pcVar1)();
}


// ===== 003c2100  FUN_003c2100 =====

void FUN_003c2100(void *param_1)

{
  FUN_0035e448();
  operator_delete(param_1);
  return;
}


// ===== 003c2124  FUN_003c2124 =====

void FUN_003c2124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003c2130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x178))();
  return;
}


// ===== 003c2134  FUN_003c2134 =====

undefined8 FUN_003c2134(void)

{
  return 0;
}


// ===== 003c213c  FUN_003c213c =====

void FUN_003c213c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003c2148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x178) + 8))();
  return;
}


// ===== 003c214c  FUN_003c214c =====

undefined8 FUN_003c214c(void)

{
  return 1;
}


// ===== 003c2154  rive::Event::trigger =====

/* rive::Event::trigger(rive::CallbackData const&) */

void __thiscall rive::Event::trigger(Event *this,CallbackData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003c216c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1 + 0x10))(*(undefined4 *)(param_1 + 8),*(long **)param_1,this);
  return;
}


// ===== 003c2170  FUN_003c2170 =====

void FUN_003c2170(long *param_1)

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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 003c2220  FUN_003c2220 =====

void FUN_003c2220(long *param_1)

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


// ===== 003c22cc  FUN_003c22cc =====

undefined8 FUN_003c22cc(void)

{
  return 0x80;
}


// ===== 003c22d4  FUN_003c22d4 =====

undefined8 FUN_003c22d4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 10) && (param_2 != 0x80)) && (param_2 != 0x224)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003c2300  rive::Factory::makeRenderPath =====

/* rive::Factory::makeRenderPath(rive::AABB const&) */

void rive::Factory::makeRenderPath(AABB *param_1)

{
  long lVar1;
  undefined8 in_x1;
  void *local_80;
  void *pvStack_78;
  undefined8 uStack_70;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined1 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  pvStack_78 = (void *)0x0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  RawPath::addRect((RawPath *)&local_80,in_x1,0);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_80,0);
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (local_80 != (void *)0x0) {
    pvStack_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c23a8  rive::Factory::decodeFont =====

/* rive::Factory::decodeFont(rive::Span<unsigned char const>) */

void rive::Factory::decodeFont(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  HBFont::Decode(param_2,param_3);
  return;
}


// ===== 003c23b4  rive::Factory::decodeAudio =====

/* rive::Factory::decodeAudio(rive::Span<unsigned char const>) */

void rive::Factory::decodeAudio
               (AudioSource *param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  long lVar1;
  void *local_48;
  size_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (void *)0x0;
  local_40 = 0;
  if (param_4 != 0) {
    local_48 = malloc(param_4);
    if (local_48 != (void *)0x0) {
      local_40 = param_4;
      memcpy(local_48,param_3,param_4);
    }
  }
  AudioSource::MakeAudioSource(param_1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    free(local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c2440  rive::File::File =====

/* rive::File::File(rive::Factory*, rive::rcp<rive::FileAssetLoader>) */

void __thiscall rive::File::File(File *this,undefined8 param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
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
  uVar1 = *param_3;
  *param_3 = 0;
  this[0x120] = (File)0x0;
  *(undefined8 *)(this + 0x100) = param_1;
  *(undefined8 *)(this + 0x108) = uVar1;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


// ===== 003c2484  rive::File::~File =====

/* rive::File::~File() */

void __thiscall rive::File::~File(File *this)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ScriptingVM *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  pSVar5 = *(ScriptingVM **)(this + 0x110);
  *(undefined8 *)(this + 0x110) = 0;
  if ((pSVar5 != (ScriptingVM *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pSVar5), iVar2 == 1)) {
    ScriptingVM::~ScriptingVM(pSVar5);
    operator_delete(pSVar5);
  }
  plVar1 = *(long **)(this + 0x90);
  for (plVar6 = *(long **)(this + 0x88); plVar6 != plVar1; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  }
  puVar4 = *(undefined8 **)(this + 0xa8);
  for (puVar7 = *(undefined8 **)(this + 0xa0); puVar7 != puVar4; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 5);
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  puVar4 = *(undefined8 **)(this + 0xf0);
  for (puVar7 = *(undefined8 **)(this + 0xe8); puVar7 != puVar4; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xc);
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  plVar1 = *(long **)(this + 0x30);
  for (plVar6 = *(long **)(this + 0x28); plVar6 != plVar1; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  }
  plVar1 = *(long **)(this + 0x48);
  for (plVar6 = *(long **)(this + 0x40); plVar6 != plVar1; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  }
  plVar1 = *(long **)(this + 0x78);
  for (plVar6 = *(long **)(this + 0x70); plVar6 != plVar1; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  plVar6 = *(long **)(this + 0x118);
  if ((plVar6 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 9), iVar2 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  pSVar5 = *(ScriptingVM **)(this + 0x110);
  if ((pSVar5 != (ScriptingVM *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pSVar5), iVar2 == 1)) {
    ScriptingVM::~ScriptingVM(pSVar5);
    operator_delete(pSVar5);
  }
  plVar6 = *(long **)(this + 0x108);
  if ((plVar6 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar2 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  pvVar3 = *(void **)(this + 0xe8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar3;
    operator_delete(pvVar3);
  }
  puVar7 = *(undefined8 **)(this + 0xd0);
  if (puVar7 != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(this + 0xd8);
    puVar4 = puVar7;
    if (puVar8 != puVar7) {
      do {
        puVar8 = puVar8 + -1;
        pvVar3 = (void *)*puVar8;
        if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pvVar3), iVar2 == 1)) {
          operator_delete(pvVar3);
        }
      } while (puVar8 != puVar7);
      puVar4 = *(undefined8 **)(this + 0xd0);
    }
    *(undefined8 **)(this + 0xd8) = puVar7;
    operator_delete(puVar4);
  }
  puVar7 = *(undefined8 **)(this + 0xb8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(this + 0xc0);
    puVar4 = puVar7;
    if (puVar8 != puVar7) {
      do {
        puVar8 = puVar8 + -1;
        plVar6 = (long *)*puVar8;
        if ((plVar6 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4), iVar2 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      } while (puVar8 != puVar7);
      puVar4 = *(undefined8 **)(this + 0xb8);
    }
    *(undefined8 **)(this + 0xc0) = puVar7;
    operator_delete(puVar4);
  }
  pvVar3 = *(void **)(this + 0xa0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x88);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x70);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x40);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x28);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar3;
    operator_delete(pvVar3);
  }
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar8 = *(undefined8 **)(this + 0x18);
  puVar4 = puVar7;
  if (puVar8 != puVar7) {
    do {
      puVar8 = puVar8 + -1;
      plVar6 = (long *)*puVar8;
      if ((plVar6 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 9), iVar2 == 1)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    } while (puVar8 != puVar7);
    puVar4 = *(undefined8 **)(this + 0x10);
  }
  *(undefined8 **)(this + 0x18) = puVar7;
  operator_delete(puVar4);
  return;
}


// ===== 003c2834  rive::File::cleanupScriptingVM =====

/* rive::File::cleanupScriptingVM() */

void __thiscall rive::File::cleanupScriptingVM(File *this)

{
  int iVar1;
  ScriptingVM *this_00;
  
  this_00 = *(ScriptingVM **)(this + 0x110);
  *(undefined8 *)(this + 0x110) = 0;
  if ((this_00 != (ScriptingVM *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this_00), iVar1 == 1)) {
    ScriptingVM::~ScriptingVM(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


// ===== 003c2884  rive::File::import =====

/* rive::File::import(rive::Span<unsigned char const>, rive::Factory*, rive::ImportResult*,
   rive::rcp<rive::FileAssetLoader>, rive::ScriptingVM*) */

void rive::File::import(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       int *param_5,undefined8 *param_6,long param_7)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  File *pFVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  byte bVar16;
  long *plVar17;
  long *plVar18;
  ScriptingVM *this;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  int local_f8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  void *local_b8;
  long *plStack_b0;
  long *local_a8;
  ulong uStack_a0;
  float local_98;
  long local_90;
  long lStack_88;
  byte *local_80;
  byte local_78;
  undefined1 local_77;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  BinaryReader::BinaryReader((BinaryReader *)&local_90,param_2,param_3);
  local_98 = 1.0;
  pbVar8 = (byte *)(local_90 + lStack_88);
  uStack_a0 = 0;
  local_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  local_b8 = (void *)0x0;
  if ((long)pbVar8 - (long)local_80 < 1) {
LAB_003c29b8:
    local_78 = 1;
    pbVar6 = pbVar8;
    goto LAB_003c29c4;
  }
  pbVar6 = local_80 + 1;
  if (*local_80 != 'R') goto LAB_003c29c4;
  if ((long)pbVar8 - (long)(local_80 + 1) < 1) goto LAB_003c29b8;
  pbVar6 = local_80 + 2;
  if (local_80[1] != 'I') goto LAB_003c29c4;
  if ((long)pbVar8 - (long)(local_80 + 2) < 1) goto LAB_003c29b8;
  pbVar6 = local_80 + 3;
  if (local_80[2] != 'V') goto LAB_003c29c4;
  if ((long)pbVar8 - (long)(local_80 + 3) < 1) goto LAB_003c29b8;
  pbVar6 = local_80 + 4;
  if (local_80[3] == 'E') {
    uVar13 = 0;
    uVar10 = 0;
    pbVar7 = local_80 + 4;
    do {
      if (pbVar8 <= pbVar7) {
        local_78 = 1;
        goto LAB_003c2a54;
      }
      pbVar6 = pbVar7 + 1;
      bVar16 = *pbVar7;
      uVar23 = uVar13 & 0x3f;
      uVar13 = (ulong)(((uint)uVar13 & 0xff) + 7);
      uVar10 = ((ulong)bVar16 & 0x7f) << uVar23 | uVar10;
      pbVar7 = pbVar6;
    } while ((char)bVar16 < '\0');
    if (uVar10 != (long)(int)uVar10) {
      local_77 = 1;
LAB_003c2a54:
      uVar10 = 0;
      pbVar6 = pbVar8;
    }
    uVar13 = (ulong)local_78;
    local_c8 = (uint)uVar10;
    if (local_78 != 0) goto LAB_003c29c4;
    uVar10 = 0;
    do {
      if (pbVar8 <= pbVar6) {
        local_78 = 1;
        local_c4 = 0;
        pbVar6 = pbVar8;
        goto LAB_003c29c4;
      }
      pbVar7 = pbVar6 + 1;
      bVar16 = *pbVar6;
      uVar23 = uVar13 & 0x3f;
      uVar13 = (ulong)(((uint)uVar13 & 0xff) + 7);
      uVar10 = ((ulong)bVar16 & 0x7f) << uVar23 | uVar10;
      pbVar6 = pbVar7;
    } while ((char)bVar16 < '\0');
    local_c4 = (uint)uVar10;
    if (uVar10 != (long)(int)local_c4) {
      local_77 = 1;
      local_c4 = 0;
      pbVar7 = pbVar8;
    }
    uVar13 = 0;
    uVar10 = 0;
    do {
      if (pbVar8 <= pbVar7) {
        local_78 = 1;
        local_c0 = 0;
        pbVar6 = pbVar8;
        goto LAB_003c29c4;
      }
      pbVar6 = pbVar7 + 1;
      bVar16 = *pbVar7;
      uVar23 = uVar13 & 0x3f;
      uVar13 = (ulong)(((uint)uVar13 & 0xff) + 7);
      uVar10 = ((ulong)bVar16 & 0x7f) << uVar23 | uVar10;
      pbVar7 = pbVar6;
    } while ((char)bVar16 < '\0');
    if (uVar10 != (long)(int)uVar10) {
      uVar10 = 0;
      local_77 = 1;
      pbVar6 = pbVar8;
    }
    uVar13 = 0;
    uVar23 = 0;
    local_c0 = (undefined4)uVar10;
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    do {
      if (pbVar8 <= pbVar6) {
        local_78 = 1;
        local_80 = pbVar8;
        goto LAB_003c2d70;
      }
      local_80 = pbVar6 + 1;
      bVar16 = *pbVar6;
      uVar10 = uVar13 & 0x3f;
      uVar13 = (ulong)(((uint)uVar13 & 0xff) + 7);
      uVar23 = ((ulong)bVar16 & 0x7f) << uVar10 | uVar23;
      pbVar6 = local_80;
    } while ((char)bVar16 < '\0');
    if (uVar23 == (long)(int)uVar23) {
      if ((int)uVar23 != 0) {
        bVar16 = 0;
        plVar15 = (long *)0x0;
        plVar24 = (long *)0x0;
        plVar18 = (long *)0x0;
        do {
          if (plVar15 < plVar24) {
            *(int *)plVar15 = (int)uVar23;
            plVar21 = plVar18;
            plVar20 = plVar15;
          }
          else {
            lVar19 = (long)plVar15 - (long)plVar18;
            uVar10 = (lVar19 >> 2) + 1;
            if (uVar10 >> 0x3e != 0) {
              local_e0 = plVar18;
              local_d8 = plVar15;
              local_d0 = plVar24;
              FUN_00330fec(&local_e0);
LAB_003c323c:
                    /* WARNING: Subroutine does not return */
              FUN_00324008();
            }
            uVar13 = (long)plVar24 - (long)plVar18 >> 1;
            if (uVar13 <= uVar10) {
              uVar13 = uVar10;
            }
            if (0x7ffffffffffffffb < (ulong)((long)plVar24 - (long)plVar18)) {
              uVar13 = 0x3fffffffffffffff;
            }
            if (uVar13 == 0) {
              pvVar3 = (void *)0x0;
            }
            else {
              if (uVar13 >> 0x3e != 0) goto LAB_003c323c;
              pvVar3 = operator_new(uVar13 << 2);
            }
            plVar20 = (long *)((long)pvVar3 + (lVar19 >> 2) * 4);
            *(int *)plVar20 = (int)uVar23;
            plVar21 = plVar20;
            if ((long)plVar15 - (long)plVar18 != 0) {
              uVar10 = ((long)plVar15 - (long)plVar18) - 4;
              if ((((0xab < uVar10) &&
                   (uVar23 = (long)pvVar3 + lVar19 + -4,
                   uVar23 - (uVar10 & 0xfffffffffffffffc) <= uVar23)) &&
                  ((int *)(((long)plVar15 + -4) - (uVar10 & 0xfffffffffffffffc)) <=
                   (int *)((long)plVar15 + -4))) &&
                 (0x1f < (ulong)((long)plVar15 + (-lVar19 - (long)pvVar3)))) {
                plVar24 = plVar20 + -2;
                plVar21 = plVar15 + -2;
                uVar10 = (uVar10 >> 2) + 1;
                uVar11 = uVar10 & 0x7ffffffffffffff8;
                plVar15 = (long *)((long)plVar15 + uVar11 * -4);
                uVar23 = uVar11;
                do {
                  plVar17 = plVar21 + -1;
                  lVar28 = plVar21[-2];
                  lVar27 = plVar21[1];
                  lVar19 = *plVar21;
                  uVar23 = uVar23 - 8;
                  plVar21 = plVar21 + -4;
                  plVar24[-1] = *plVar17;
                  plVar24[-2] = lVar28;
                  plVar24[1] = lVar27;
                  *plVar24 = lVar19;
                  plVar24 = plVar24 + -4;
                } while (uVar23 != 0);
                plVar21 = (long *)((long)plVar20 + uVar11 * -4);
                if (uVar10 == uVar11) goto LAB_003c2c38;
              }
              do {
                plVar15 = (long *)((long)plVar15 + -4);
                plVar21 = (long *)((long)plVar21 + -4);
                *(int *)plVar21 = *(int *)plVar15;
              } while (plVar15 != plVar18);
            }
LAB_003c2c38:
            plVar24 = (long *)((long)pvVar3 + uVar13 * 4);
            if ((plVar18 != (long *)0x0) &&
               (operator_delete(plVar18), bVar16 = local_78, local_78 != 0)) {
              local_e0 = plVar21;
              local_d0 = plVar24;
              pbVar6 = local_80;
              if (plVar21 != (long *)0x0) {
                local_d8 = plVar21;
                operator_delete(plVar21);
                pbVar6 = local_80;
              }
              goto LAB_003c29c4;
            }
          }
          plVar15 = (long *)((long)plVar20 + 4);
          uVar10 = 0;
          uVar23 = 0;
          pbVar8 = (byte *)(local_90 + lStack_88);
          pbVar6 = local_80;
          do {
            if (pbVar8 <= pbVar6) {
              bVar16 = 1;
              local_78 = 1;
              local_80 = pbVar8;
              goto LAB_003c2e9c;
            }
            local_80 = pbVar6 + 1;
            bVar5 = *pbVar6;
            uVar13 = uVar10 & 0x3f;
            uVar10 = (ulong)(((uint)uVar10 & 0xff) + 7);
            uVar23 = ((ulong)bVar5 & 0x7f) << uVar13 | uVar23;
            pbVar6 = local_80;
          } while ((char)bVar5 < '\0');
          if (uVar23 != (long)(int)uVar23) {
            local_77 = 1;
            local_80 = pbVar8;
            break;
          }
          plVar18 = plVar21;
        } while ((int)uVar23 != 0);
LAB_003c2e9c:
        local_e0 = plVar21;
        local_d0 = plVar24;
        if (plVar21 == plVar15) {
          local_d8 = plVar21;
          operator_delete(plVar21);
        }
        else {
          uVar14 = 8;
          local_f8 = 0;
          plVar18 = plVar21;
          do {
            plVar20 = plStack_b0;
            iVar2 = (int)*plVar18;
            if (uVar14 == 8) {
              pbVar8 = (byte *)(local_90 + lStack_88);
              if ((long)pbVar8 - (long)local_80 < 4) {
                bVar16 = 1;
                local_f8 = 0;
                local_78 = 1;
              }
              else {
                pbVar8 = local_80 + 4;
                local_f8 = *(int *)local_80;
              }
              uVar14 = 0;
              local_80 = pbVar8;
            }
            plVar17 = (long *)(long)iVar2;
            if (plStack_b0 != (long *)0x0) {
              uVar26 = NEON_cnt(plStack_b0,1);
              uVar25 = NEON_uaddlv(uVar26,1);
              uVar10 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
              if (uVar10 < 2) {
                plVar24 = (long *)((long)plStack_b0 - 1U & (ulong)plVar17);
              }
              else {
                plVar24 = plVar17;
                if (plStack_b0 <= plVar17) {
                  uVar13 = 0;
                  if (plStack_b0 != (long *)0x0) {
                    uVar13 = (ulong)plVar17 / (ulong)plStack_b0;
                  }
                  plVar24 = (long *)((long)plVar17 - uVar13 * (long)plStack_b0);
                }
              }
              puVar9 = *(undefined8 **)((long)local_b8 + (long)plVar24 * 8);
              if ((puVar9 != (undefined8 *)0x0) &&
                 (plVar22 = (long *)*puVar9, plVar22 != (long *)0x0)) {
                do {
                  plVar12 = (long *)plVar22[1];
                  if (plVar12 == plVar17) {
                    bVar5 = bVar16;
                    if ((int)plVar22[2] == iVar2) goto LAB_003c31a4;
                  }
                  else {
                    if (uVar10 < 2) {
                      plVar12 = (long *)((ulong)plVar12 & (long)plStack_b0 - 1U);
                    }
                    else if (plStack_b0 <= plVar12) {
                      uVar13 = 0;
                      if (plStack_b0 != (long *)0x0) {
                        uVar13 = (ulong)plVar12 / (ulong)plStack_b0;
                      }
                      plVar12 = (long *)((long)plVar12 - uVar13 * (long)plStack_b0);
                    }
                    if (plVar12 != plVar24) break;
                  }
                  plVar22 = (long *)*plVar22;
                } while (plVar22 != (long *)0x0);
              }
            }
            plVar22 = (long *)operator_new(0x18);
            *(int *)(plVar22 + 2) = iVar2;
            *(undefined4 *)((long)plVar22 + 0x14) = 0;
            *plVar22 = 0;
            plVar22[1] = (long)plVar17;
            if ((plVar20 == (long *)0x0) || (local_98 * (float)plVar20 < (float)(uStack_a0 + 1))) {
              if (plVar20 < (long *)0x3) {
                uVar10 = 1;
              }
              else {
                uVar10 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
              }
              plVar24 = (long *)(uVar10 | (long)plVar20 << 1);
              plVar12 = (long *)(long)((float)(uStack_a0 + 1) / local_98);
              if (plVar24 <= plVar12) {
                plVar24 = plVar12;
              }
              if ((long)plVar24 - 1U == 0) {
                plVar24 = (long *)0x2;
              }
              else if (((ulong)plVar24 & (long)plVar24 - 1U) != 0) {
                plVar24 = (long *)std::__ndk1::__next_prime((ulong)plVar24);
                plVar20 = plStack_b0;
              }
              if (plVar20 < plVar24) {
LAB_003c305c:
                FUN_00374830(&local_b8);
              }
              else if (plVar24 < plVar20) {
                plVar12 = (long *)(long)((float)uStack_a0 / local_98);
                if (plVar20 < (long *)0x3) {
LAB_003c30cc:
                  plVar12 = (long *)std::__ndk1::__next_prime((ulong)plVar12);
                }
                else {
                  uVar26 = NEON_cnt(plVar20,1);
                  uVar25 = NEON_uaddlv(uVar26,1);
                  if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_003c30cc;
                  if ((long *)0x1 < plVar12) {
                    plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
                  }
                }
                if (plVar24 <= plVar12) {
                  plVar24 = plVar12;
                }
                if (plVar24 < plVar20) goto LAB_003c305c;
              }
              plVar20 = plStack_b0;
              if (((ulong)plStack_b0 & (long)plStack_b0 - 1U) == 0) {
                plVar24 = (long *)((long)plStack_b0 - 1U & (ulong)plVar17);
              }
              else {
                plVar24 = plVar17;
                if (plStack_b0 <= plVar17) {
                  uVar10 = 0;
                  if (plStack_b0 != (long *)0x0) {
                    uVar10 = (ulong)plVar17 / (ulong)plStack_b0;
                  }
                  plVar24 = (long *)((long)plVar17 - uVar10 * (long)plStack_b0);
                }
              }
            }
            plVar17 = *(long **)((long)local_b8 + (long)plVar24 * 8);
            if (plVar17 == (long *)0x0) {
              *plVar22 = (long)local_a8;
              *(long ***)((long)local_b8 + (long)plVar24 * 8) = &local_a8;
              local_a8 = plVar22;
              if (*plVar22 != 0) {
                plVar17 = *(long **)(*plVar22 + 8);
                if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
                  plVar17 = (long *)((ulong)plVar17 & (long)plVar20 - 1U);
                }
                else if (plVar20 <= plVar17) {
                  uVar10 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar10 = (ulong)plVar17 / (ulong)plVar20;
                  }
                  plVar17 = (long *)((long)plVar17 - uVar10 * (long)plVar20);
                }
                plVar17 = (long *)((long)local_b8 + (long)plVar17 * 8);
                goto LAB_003c3190;
              }
            }
            else {
              *plVar22 = *plVar17;
LAB_003c3190:
              *plVar17 = (long)plVar22;
            }
            uStack_a0 = uStack_a0 + 1;
            bVar5 = local_78;
LAB_003c31a4:
            *(uint *)((long)plVar22 + 0x14) = local_f8 >> (uVar14 & 0x1f) & 3;
            if (bVar5 != 0) break;
            plVar18 = (long *)((long)plVar18 + 4);
            bVar16 = 0;
            uVar14 = uVar14 + 2;
          } while (plVar18 != plVar15);
          if (plVar21 != (long *)0x0) {
            local_d8 = plVar21;
            operator_delete(plVar21);
          }
          pbVar6 = local_80;
          if (bVar5 != 0) goto LAB_003c29c4;
        }
      }
    }
    else {
      local_77 = 1;
      local_80 = pbVar8;
    }
LAB_003c2d70:
    if (local_c8 == 7) {
      pFVar4 = (File *)operator_new(0x128);
      local_e0 = (long *)*param_6;
      *param_6 = 0;
      File(pFVar4,param_4,&local_e0);
      plVar24 = local_e0;
      *param_1 = (long)pFVar4;
      if ((local_e0 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_e0 + 1), iVar2 == 1))
      {
        (**(code **)(*plVar24 + 8))(plVar24);
      }
      if (param_7 != 0) {
        lVar19 = *param_1;
        FUN_00340fb0(1,param_7);
        this = *(ScriptingVM **)(lVar19 + 0x110);
        *(long *)(lVar19 + 0x110) = param_7;
        if ((this != (ScriptingVM *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this), iVar2 == 1)) {
          ScriptingVM::~ScriptingVM(this);
          operator_delete(this);
        }
      }
      pFVar4 = (File *)*param_1;
      iVar2 = read(pFVar4,(BinaryReader *)&local_90,(RuntimeHeader *)&local_c8);
      if (param_5 != (int *)0x0) {
        *param_5 = iVar2;
      }
      pvVar3 = local_b8;
      plVar24 = local_a8;
      if (iVar2 != 0) {
        *param_1 = 0;
        iVar2 = FUN_00340fe0(0xffffffff,pFVar4);
        pvVar3 = local_b8;
        plVar24 = local_a8;
        if (iVar2 == 1) {
          ~File(pFVar4);
          operator_delete(pFVar4);
          pvVar3 = local_b8;
          plVar24 = local_a8;
        }
      }
      goto joined_r0x003c29f8;
    }
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),"Unsupported version %u.%u expected %u.%u.\n",
            (ulong)local_c8,(ulong)local_c4,7,0);
    if (param_5 != (int *)0x0) {
      iVar2 = 1;
      goto LAB_003c29ec;
    }
  }
  else {
LAB_003c29c4:
    local_80 = pbVar6;
    fwrite("Bad header\n",0xb,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
    if (param_5 != (int *)0x0) {
      iVar2 = 2;
LAB_003c29ec:
      *param_5 = iVar2;
    }
  }
  *param_1 = 0;
  pvVar3 = local_b8;
  plVar24 = local_a8;
joined_r0x003c29f8:
  while (plVar24 != (long *)0x0) {
    plVar18 = (long *)*plVar24;
    local_b8 = pvVar3;
    operator_delete(plVar24);
    pvVar3 = local_b8;
    plVar24 = plVar18;
  }
  local_b8 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c3240  rive::File::read =====

/* rive::File::read(rive::BinaryReader&, rive::RuntimeHeader const&) */

undefined4 __thiscall rive::File::read(File *this,BinaryReader *param_1,RuntimeHeader *param_2)

{
  byte bVar1;
  ulong uVar2;
  File *pFVar3;
  void *pvVar4;
  BindablePropertyImporter *pBVar5;
  void *pvVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  BindableProperty *pBVar14;
  ScriptedObject *pSVar15;
  StateMachineLayerComponentImporter *pSVar16;
  void *pvVar17;
  uint uVar18;
  undefined4 uVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  char *pcVar25;
  char *pcVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long lVar34;
  BindableProperty *pBVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  ScriptedObjectImporter *this_00;
  BindableProperty *pBVar38;
  Artboard *pAVar39;
  LinearAnimation *pLVar40;
  undefined8 *puVar41;
  undefined2 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  StateMachineLayerComponentImporter *local_f0;
  BindablePropertyImporter *local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  BindableProperty *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  ulong uStack_a8;
  undefined8 *local_a0;
  long local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_68;
  
  pFVar3 = (File *)tpidr_el0;
  local_68 = *(long *)(pFVar3 + 0x28);
  local_90 = 0x3f800000;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_98 = 0;
  local_a0 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_e0 = (void *)0x0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  pBVar38 = (BindableProperty *)0x0;
LAB_003c32a8:
  pbVar20 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
  puVar37 = local_80;
  if ((*(byte **)(param_1 + 0x10) != pbVar20 && param_1[0x18] == (BinaryReader)0x0) &&
      param_1[0x19] == (BinaryReader)0x0) {
    uVar27 = 0;
    uVar13 = 0;
    pbVar24 = *(byte **)(param_1 + 0x10);
    do {
      if (pbVar20 <= pbVar24) {
        param_1[0x18] = (BinaryReader)0x1;
        goto LAB_003c3310;
      }
      pbVar23 = pbVar24 + 1;
      bVar1 = *pbVar24;
      uVar22 = uVar27 & 0x3f;
      uVar27 = (ulong)(((uint)uVar27 & 0xff) + 7);
      uVar13 = ((ulong)bVar1 & 0x7f) << uVar22 | uVar13;
      pbVar24 = pbVar23;
    } while ((char)bVar1 < '\0');
    *(byte **)(param_1 + 0x10) = pbVar23;
    if (uVar13 != (long)(int)uVar13) {
      param_1[0x19] = (BinaryReader)0x1;
LAB_003c3310:
      uVar13 = 0;
      *(byte **)(param_1 + 0x10) = pbVar20;
    }
    pBVar14 = (BindableProperty *)FUN_003c4ac8(uVar13);
LAB_003c3320:
    uVar13 = 0;
    uVar27 = 0;
    pbVar20 = *(byte **)(param_1 + 0x10);
    do {
      if ((byte *)(*(long *)param_1 + *(long *)(param_1 + 8)) <= pbVar20) {
        param_1[0x18] = (BinaryReader)0x1;
        goto LAB_003c358c;
      }
      pbVar24 = pbVar20 + 1;
      bVar1 = *pbVar20;
      uVar22 = uVar13 & 0x3f;
      uVar13 = (ulong)(((uint)uVar13 & 0xff) + 7);
      uVar27 = ((ulong)bVar1 & 0x7f) << uVar22 | uVar27;
      pbVar20 = pbVar24;
    } while ((char)bVar1 < '\0');
    *(byte **)(param_1 + 0x10) = pbVar24;
    if (uVar27 < 0x10000) {
      if ((uVar27 & 0xffff) == 0) goto LAB_003c3590;
      if (param_1[0x18] == (BinaryReader)0x0 && param_1[0x19] == (BinaryReader)0x0)
      goto code_r0x003c337c;
      goto joined_r0x003c35d8;
    }
    param_1[0x19] = (BinaryReader)0x1;
LAB_003c358c:
    *(byte **)(param_1 + 0x10) = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
LAB_003c3590:
    puVar37 = local_80;
    if (pBVar14 == (BindableProperty *)0x0) goto LAB_003c3598;
    uVar13 = (**(code **)(*(long *)pBVar14 + 0x18))(pBVar14,0x1be);
    pBVar35 = pBVar14;
    if ((uVar13 & 1) != 0) {
      if (pBVar38 == (BindableProperty *)0x0) {
        pBVar35 = (BindableProperty *)0x0;
      }
      else {
        *(BindableProperty **)(pBVar14 + 0x30) = pBVar38;
        pBVar35 = pBVar38;
      }
    }
    cVar7 = (**(code **)(*(long *)pBVar14 + 0x48))(pBVar14,&local_b0);
    pBVar38 = pBVar35;
    if (cVar7 != '\0') {
      pBVar38 = (BindableProperty *)0x0;
      if (pBVar35 != pBVar14) {
        pBVar38 = pBVar35;
      }
      uVar10 = (**(code **)(*(long *)pBVar14 + 0x10))(pBVar14);
      fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),"Failed to import object of type %d\n",
              (ulong)(uVar10 & 0xffff));
      (**(code **)(*(long *)pBVar14 + 8))(pBVar14);
      goto LAB_003c32a8;
    }
    uVar8 = (**(code **)(*(long *)pBVar14 + 0x10))(pBVar14);
    if (uVar8 < 0x1b6) {
      if (uVar8 < 0x8d) {
        if (uVar8 != 1) {
          if (uVar8 == 0x17) {
            *(BindableProperty **)(this + 8) = pBVar14;
          }
          else if (uVar8 == 0x69) {
LAB_003c375c:
            puVar37 = *(undefined8 **)(this + 0x18);
            local_c8 = pBVar14;
            if (puVar37 < *(undefined8 **)(this + 0x20)) {
              *puVar37 = pBVar14;
              *(undefined8 **)(this + 0x18) = puVar37 + 1;
            }
            else {
              uVar43 = FUN_003c8d40(this + 0x10,&local_c8);
              pBVar35 = local_c8;
              *(undefined8 *)(this + 0x18) = uVar43;
              if ((local_c8 != (BindableProperty *)0x0) &&
                 (iVar12 = FUN_00340fe0(0xffffffff,local_c8 + 0x48), iVar12 == 1)) {
                (**(code **)(*(long *)pBVar35 + 8))(pBVar35);
              }
            }
            sVar9 = (**(code **)(*(long *)pBVar14 + 0x10))(pBVar14);
            if (sVar9 == 0x196) {
              this[0x120] = (File)0x1;
            }
          }
          goto LAB_003c3bb0;
        }
        *(undefined8 *)(pBVar14 + 0xbd8) = *(undefined8 *)(this + 0x100);
        puVar37 = *(undefined8 **)(this + 0x90);
        if (puVar37 < *(undefined8 **)(this + 0x98)) {
          puVar33 = puVar37 + 1;
          *puVar37 = pBVar14;
          goto LAB_003c3ba4;
        }
        puVar36 = *(undefined8 **)(this + 0x88);
        lVar34 = (long)puVar37 - (long)puVar36 >> 3;
        uVar13 = lVar34 + 1;
        if (uVar13 >> 0x3d != 0) goto LAB_003c4ac4;
        uVar22 = (long)*(undefined8 **)(this + 0x98) - (long)puVar36;
        uVar27 = (long)uVar22 >> 2;
        if (uVar27 <= uVar13) {
          uVar27 = uVar13;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          uVar27 = 0x1fffffffffffffff;
        }
        if (uVar27 == 0) {
          pvVar17 = (void *)0x0;
        }
        else {
          if (uVar27 >> 0x3d != 0) goto LAB_003c4aa4;
          pvVar17 = operator_new(uVar27 << 3);
        }
        puVar21 = (undefined8 *)((long)pvVar17 + lVar34 * 8);
        puVar33 = puVar21 + 1;
        *puVar21 = pBVar14;
        if ((long)puVar37 - (long)puVar36 == 0) goto LAB_003c3b88;
        uVar13 = ((long)puVar37 - (long)puVar36) - 8;
        puVar41 = puVar37;
        if ((uVar13 < 0x38) ||
           ((ulong)((long)puVar37 + (-((long)puVar37 - (long)puVar36) - (long)pvVar17)) < 0x20))
        goto LAB_003c3b3c;
        puVar31 = puVar21 + -2;
        puVar32 = puVar37 + -2;
        uVar13 = (uVar13 >> 3) + 1;
        uVar28 = uVar13 & 0x3ffffffffffffffc;
        puVar41 = puVar37 + -uVar28;
        uVar22 = uVar28;
        do {
          puVar37 = puVar32 + -1;
          uVar45 = puVar32[-2];
          uVar44 = puVar32[1];
          uVar43 = *puVar32;
          uVar22 = uVar22 - 4;
          puVar32 = puVar32 + -4;
          puVar31[-1] = *puVar37;
          puVar31[-2] = uVar45;
          puVar31[1] = uVar44;
          *puVar31 = uVar43;
          puVar31 = puVar31 + -4;
        } while (uVar22 != 0);
        puVar21 = puVar21 + -uVar28;
        puVar37 = puVar36;
        if (uVar13 != uVar28) {
LAB_003c3b3c:
          do {
            puVar41 = puVar41 + -1;
            puVar21 = puVar21 + -1;
            *puVar21 = *puVar41;
          } while (puVar41 != puVar36);
          puVar37 = *(undefined8 **)(this + 0x88);
        }
LAB_003c3b88:
        *(undefined8 **)(this + 0x88) = puVar21;
        *(undefined8 **)(this + 0x90) = puVar33;
        *(void **)(this + 0x98) = (void *)((long)pvVar17 + uVar27 * 8);
        if (puVar37 != (undefined8 *)0x0) {
          operator_delete(puVar37);
        }
LAB_003c3ba4:
        *(undefined8 **)(this + 0x90) = puVar33;
      }
      else {
        if ((uVar8 == 0x8d) || (uVar8 == 0x196)) goto LAB_003c375c;
        if (uVar8 != 0x1b3) goto LAB_003c3bb0;
        puVar37 = *(undefined8 **)(this + 0xa8);
        if (puVar37 < *(undefined8 **)(this + 0xb0)) {
          puVar33 = puVar37 + 1;
          *puVar37 = pBVar14;
          goto LAB_003c3b74;
        }
        puVar36 = *(undefined8 **)(this + 0xa0);
        lVar34 = (long)puVar37 - (long)puVar36 >> 3;
        uVar13 = lVar34 + 1;
        if (uVar13 >> 0x3d != 0) goto LAB_003c4ac0;
        uVar22 = (long)*(undefined8 **)(this + 0xb0) - (long)puVar36;
        uVar27 = (long)uVar22 >> 2;
        if (uVar27 <= uVar13) {
          uVar27 = uVar13;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          uVar27 = 0x1fffffffffffffff;
        }
        if (uVar27 == 0) {
          pvVar17 = (void *)0x0;
        }
        else {
          if (uVar27 >> 0x3d != 0) goto LAB_003c4aa4;
          pvVar17 = operator_new(uVar27 << 3);
        }
        puVar21 = (undefined8 *)((long)pvVar17 + lVar34 * 8);
        puVar33 = puVar21 + 1;
        *puVar21 = pBVar14;
        if ((long)puVar37 - (long)puVar36 == 0) goto LAB_003c3b5c;
        uVar13 = ((long)puVar37 - (long)puVar36) - 8;
        puVar41 = puVar37;
        if ((uVar13 < 0x38) ||
           ((ulong)((long)puVar37 + (-((long)puVar37 - (long)puVar36) - (long)pvVar17)) < 0x20))
        goto LAB_003c3aa4;
        puVar31 = puVar21 + -2;
        puVar32 = puVar37 + -2;
        uVar13 = (uVar13 >> 3) + 1;
        uVar28 = uVar13 & 0x3ffffffffffffffc;
        puVar41 = puVar37 + -uVar28;
        uVar22 = uVar28;
        do {
          puVar37 = puVar32 + -1;
          uVar45 = puVar32[-2];
          uVar44 = puVar32[1];
          uVar43 = *puVar32;
          uVar22 = uVar22 - 4;
          puVar32 = puVar32 + -4;
          puVar31[-1] = *puVar37;
          puVar31[-2] = uVar45;
          puVar31[1] = uVar44;
          *puVar31 = uVar43;
          puVar31 = puVar31 + -4;
        } while (uVar22 != 0);
        puVar21 = puVar21 + -uVar28;
        puVar37 = puVar36;
        if (uVar13 != uVar28) {
LAB_003c3aa4:
          do {
            puVar41 = puVar41 + -1;
            puVar21 = puVar21 + -1;
            *puVar21 = *puVar41;
          } while (puVar41 != puVar36);
          puVar37 = *(undefined8 **)(this + 0xa0);
        }
LAB_003c3b5c:
        *(undefined8 **)(this + 0xa0) = puVar21;
        *(undefined8 **)(this + 0xa8) = puVar33;
        *(void **)(this + 0xb0) = (void *)((long)pvVar17 + uVar27 * 8);
        if (puVar37 != (undefined8 *)0x0) {
          operator_delete(puVar37);
        }
LAB_003c3b74:
        *(undefined8 **)(this + 0xa8) = puVar33;
      }
    }
    else {
      if (0x210 < uVar8) {
        if (((uVar8 == 0x211) || (uVar8 == 0x289)) || (uVar8 == 0x3ca)) goto LAB_003c375c;
        goto LAB_003c3bb0;
      }
      if (uVar8 != 0x1b6) {
        if (uVar8 == 0x1b7) {
          if ((ulong)*(uint *)(pBVar14 + 0x38) <
              (ulong)(*(long *)(this + 0xf0) - *(long *)(this + 0xe8) >> 3)) {
            lVar34 = *(long *)(*(long *)(this + 0xe8) + (ulong)*(uint *)(pBVar14 + 0x38) * 8);
            FUN_00340fb0(1,lVar34 + 0xc);
            plVar29 = *(long **)(pBVar14 + 0x30);
            *(long *)(pBVar14 + 0x30) = lVar34;
            if ((plVar29 != (long *)0x0) &&
               (iVar12 = FUN_00340fe0(0xffffffff,(long)plVar29 + 0xc), iVar12 == 1)) {
              (**(code **)(*plVar29 + 8))(plVar29);
            }
          }
          goto LAB_003c3bb0;
        }
        if (uVar8 != 0x1fe) goto LAB_003c3bb0;
      }
      puVar37 = *(undefined8 **)(this + 0xf0);
      if (puVar37 < *(undefined8 **)(this + 0xf8)) {
        puVar33 = puVar37 + 1;
        *puVar37 = pBVar14;
        goto LAB_003c3a10;
      }
      puVar36 = *(undefined8 **)(this + 0xe8);
      lVar34 = (long)puVar37 - (long)puVar36 >> 3;
      uVar13 = lVar34 + 1;
      if (uVar13 >> 0x3d != 0) goto LAB_003c4ab0;
      uVar22 = (long)*(undefined8 **)(this + 0xf8) - (long)puVar36;
      uVar27 = (long)uVar22 >> 2;
      if (uVar27 <= uVar13) {
        uVar27 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        uVar27 = 0x1fffffffffffffff;
      }
      if (uVar27 == 0) {
        pvVar17 = (void *)0x0;
      }
      else {
        if (uVar27 >> 0x3d != 0) goto LAB_003c4aa4;
        pvVar17 = operator_new(uVar27 << 3);
      }
      puVar21 = (undefined8 *)((long)pvVar17 + lVar34 * 8);
      puVar33 = puVar21 + 1;
      *puVar21 = pBVar14;
      if ((long)puVar37 - (long)puVar36 == 0) goto LAB_003c39f8;
      uVar13 = ((long)puVar37 - (long)puVar36) - 8;
      puVar41 = puVar37;
      if ((uVar13 < 0x38) ||
         ((ulong)((long)puVar37 + (-((long)puVar37 - (long)puVar36) - (long)pvVar17)) < 0x20))
      goto LAB_003c39d8;
      puVar31 = puVar21 + -2;
      puVar32 = puVar37 + -2;
      uVar13 = (uVar13 >> 3) + 1;
      uVar28 = uVar13 & 0x3ffffffffffffffc;
      puVar41 = puVar37 + -uVar28;
      uVar22 = uVar28;
      do {
        puVar37 = puVar32 + -1;
        uVar45 = puVar32[-2];
        uVar44 = puVar32[1];
        uVar43 = *puVar32;
        uVar22 = uVar22 - 4;
        puVar32 = puVar32 + -4;
        puVar31[-1] = *puVar37;
        puVar31[-2] = uVar45;
        puVar31[1] = uVar44;
        *puVar31 = uVar43;
        puVar31 = puVar31 + -4;
      } while (uVar22 != 0);
      puVar21 = puVar21 + -uVar28;
      puVar37 = puVar36;
      if (uVar13 != uVar28) {
LAB_003c39d8:
        do {
          puVar41 = puVar41 + -1;
          puVar21 = puVar21 + -1;
          *puVar21 = *puVar41;
        } while (puVar41 != puVar36);
        puVar37 = *(undefined8 **)(this + 0xe8);
      }
LAB_003c39f8:
      *(undefined8 **)(this + 0xe8) = puVar21;
      *(undefined8 **)(this + 0xf0) = puVar33;
      *(void **)(this + 0xf8) = (void *)((long)pvVar17 + uVar27 * 8);
      if (puVar37 != (undefined8 *)0x0) {
        operator_delete(puVar37);
      }
LAB_003c3a10:
      *(undefined8 **)(this + 0xf0) = puVar33;
    }
LAB_003c3bb0:
    uVar11 = (**(code **)(*(long *)pBVar14 + 0x10))(pBVar14);
    uVar10 = uVar11 & 0xffff;
    this_00 = (ScriptedObjectImporter *)0x0;
    if (0x195 < uVar10) {
      switch(uVar10) {
      case 0x196:
      case 0x289:
        goto switchD_003c3bf4_caseD_196;
      case 0x197:
      case 0x198:
      case 0x199:
      case 0x19a:
      case 0x19b:
      case 0x19c:
      case 0x19d:
      case 0x19e:
      case 0x19f:
      case 0x1a0:
      case 0x1a1:
      case 0x1a2:
      case 0x1a3:
      case 0x1a4:
      case 0x1a5:
      case 0x1a6:
      case 0x1a7:
      case 0x1a8:
      case 0x1a9:
      case 0x1aa:
      case 0x1ab:
      case 0x1ac:
      case 0x1ad:
      case 0x1ae:
      case 0x1af:
      case 0x1b0:
      case 0x1b1:
      case 0x1b2:
      case 0x1b4:
      case 0x1b7:
      case 0x1b8:
      case 0x1ba:
      case 0x1bb:
      case 0x1bc:
      case 0x1bd:
      case 0x1be:
      case 0x1bf:
      case 0x1c0:
      case 0x1c1:
      case 0x1c2:
      case 0x1c5:
      case 0x1c6:
      case 0x1c7:
      case 0x1c8:
      case 0x1c9:
      case 0x1ca:
      case 0x1cb:
      case 0x1cc:
      case 0x1cd:
      case 0x1ce:
      case 0x1cf:
      case 0x1d0:
      case 0x1d1:
      case 0x1d2:
      case 0x1d3:
      case 0x1d4:
      case 0x1d5:
      case 0x1d6:
      case 0x1dc:
      case 0x1dd:
      case 0x1de:
      case 0x1df:
      case 0x1e0:
      case 0x1e1:
      case 0x1e3:
      case 0x1e4:
      case 0x1e5:
      case 0x1e6:
      case 0x1e7:
      case 0x1e8:
      case 0x1e9:
      case 0x1ea:
      case 0x1eb:
      case 0x1ec:
      case 0x1ed:
      case 0x1ee:
      case 0x1ef:
      case 0x1f0:
      case 0x1f2:
      case 500:
      case 0x1f5:
      case 0x1f6:
      case 0x1f8:
      case 0x1f9:
      case 0x1fa:
      case 0x1fb:
      case 0x1fc:
      case 0x1fd:
      case 0x1fe:
      case 0x1ff:
      case 0x200:
      case 0x201:
      case 0x202:
      case 0x203:
      case 0x204:
      case 0x205:
      case 0x206:
      case 0x207:
      case 0x208:
      case 0x209:
      case 0x20a:
      case 0x20b:
      case 0x20c:
      case 0x20d:
      case 0x20e:
      case 0x20f:
      case 0x212:
      case 0x213:
      case 0x214:
      case 0x215:
      case 0x216:
      case 0x217:
      case 0x219:
      case 0x21a:
      case 0x21b:
      case 0x21c:
      case 0x21d:
      case 0x21e:
      case 0x21f:
      case 0x220:
      case 0x221:
      case 0x222:
      case 0x223:
      case 0x224:
      case 0x225:
      case 0x226:
      case 0x227:
      case 0x228:
      case 0x229:
      case 0x22a:
      case 0x22b:
      case 0x22c:
      case 0x22d:
      case 0x22e:
      case 0x230:
      case 0x231:
      case 0x232:
      case 0x233:
      case 0x234:
      case 0x235:
      case 0x236:
      case 0x239:
      case 0x23a:
      case 0x23b:
      case 0x23c:
      case 0x23d:
      case 0x23e:
      case 0x23f:
      case 0x240:
      case 0x241:
      case 0x242:
      case 0x243:
      case 0x244:
      case 0x245:
      case 0x246:
      case 0x247:
      case 0x248:
      case 0x249:
      case 0x24a:
      case 0x24b:
      case 0x24d:
      case 0x24f:
      case 0x250:
      case 0x251:
      case 0x252:
      case 0x253:
      case 0x254:
      case 0x256:
      case 599:
      case 600:
      case 0x259:
      case 0x25a:
      case 0x25c:
      case 0x25d:
      case 0x25e:
      case 0x25f:
      case 0x260:
      case 0x261:
      case 0x262:
      case 0x263:
      case 0x264:
      case 0x265:
      case 0x266:
      case 0x267:
      case 0x268:
      case 0x269:
      case 0x26a:
      case 0x26b:
      case 0x26c:
      case 0x26e:
      case 0x26f:
      case 0x270:
      case 0x271:
      case 0x272:
      case 0x273:
      case 0x274:
      case 0x276:
      case 0x277:
      case 0x278:
      case 0x279:
      case 0x27a:
      case 0x27b:
      case 0x27c:
      case 0x27e:
      case 0x27f:
      case 0x281:
      case 0x284:
      case 0x285:
      case 0x288:
      case 0x28a:
      case 0x28b:
      case 0x28c:
      case 0x28d:
      case 0x28f:
      case 0x290:
      case 0x291:
      case 0x292:
      case 0x293:
      case 0x294:
      case 0x295:
      case 0x297:
      case 0x298:
      case 0x29a:
      case 0x29b:
      case 0x29c:
        break;
      case 0x1b3:
        this_00 = (ScriptedObjectImporter *)operator_new(0x18);
        ViewModelImporter::ViewModelImporter((ViewModelImporter *)this_00,(ViewModel *)pBVar14);
        *(File **)((ViewModelImporter *)this_00 + 0x10) = this;
        uVar11 = 0x1b3;
        *(File **)(pBVar14 + 0x60) = this;
        break;
      case 0x1b5:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        ViewModelInstanceImporter::ViewModelInstanceImporter
                  ((ViewModelInstanceImporter *)this_00,(ViewModelInstance *)pBVar14);
        uVar11 = 0x1b5;
        break;
      case 0x1b6:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        EnumImporter::EnumImporter((EnumImporter *)this_00,(DataEnum *)pBVar14);
        uVar11 = 0x1b6;
        break;
      case 0x1b9:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        ViewModelInstanceListImporter::ViewModelInstanceListImporter
                  ((ViewModelInstanceListImporter *)this_00,(ViewModelInstanceList *)pBVar14);
        uVar11 = 0x1b9;
        break;
      case 0x1c3:
      case 0x1c4:
        goto switchD_003c3bf4_caseD_1c3;
      case 0x1d7:
      case 0x1d8:
      case 0x1d9:
      case 0x1da:
      case 0x1db:
      case 0x1f7:
      case 0x237:
      case 0x24c:
      case 0x24e:
      case 0x255:
      case 0x296:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        BindablePropertyImporter::BindablePropertyImporter
                  ((BindablePropertyImporter *)this_00,pBVar14);
        uVar11 = 9;
        break;
      case 0x1e2:
      case 0x1f1:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        TransitionViewModelConditionImporter::TransitionViewModelConditionImporter
                  ((TransitionViewModelConditionImporter *)this_00,
                   (TransitionViewModelCondition *)pBVar14);
        uVar11 = 0x1e2;
        break;
      case 499:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        DataConverterGroupImporter::DataConverterGroupImporter
                  ((DataConverterGroupImporter *)this_00,(DataConverterGroup *)pBVar14);
        uVar11 = 499;
        break;
      case 0x210:
        goto switchD_003c3bf4_caseD_210;
      case 0x211:
        this_00 = (ScriptedObjectImporter *)operator_new(0x30);
        pBVar35 = *(BindableProperty **)(this + 0x108);
        if (pBVar35 != (BindableProperty *)0x0) {
          FUN_00340fb0(1,pBVar35 + 8);
        }
        local_c8 = pBVar35;
        TextAssetImporter::TextAssetImporter
                  ((TextAssetImporter *)this_00,pBVar14,&local_c8,*(undefined8 *)(this + 0x100),
                   &local_e0);
        pBVar35 = local_c8;
        if ((local_c8 != (BindableProperty *)0x0) &&
           (iVar12 = FUN_00340fe0(0xffffffff,local_c8 + 8), iVar12 == 1)) {
          (**(code **)(*(long *)pBVar35 + 8))(pBVar35);
        }
        *(File **)(pBVar14 + 0xd8) = this;
        uVar11 = 0x67;
        break;
      case 0x218:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        DataConverterFormulaImporter::DataConverterFormulaImporter
                  ((DataConverterFormulaImporter *)this_00,(DataConverterFormula *)pBVar14);
        uVar11 = 0x218;
        break;
      case 0x22f:
        (**(code **)(*(long *)pBVar14 + 0x310))(pBVar14,this);
        this_00 = (ScriptedObjectImporter *)0x0;
        uVar11 = 0x22f;
        break;
      case 0x238:
        this_00 = (ScriptedObjectImporter *)0x0;
        *(File **)(pBVar14 + 0xe0) = this;
        uVar11 = 0x238;
        break;
      case 0x25b:
      case 0x275:
      case 0x27d:
      case 0x280:
      case 0x286:
      case 0x287:
switchD_003c3bf4_caseD_25b:
        pSVar15 = (ScriptedObject *)ScriptedObject::from((Core *)pBVar14);
        if (pSVar15 == (ScriptedObject *)0x0) {
          this_00 = (ScriptedObjectImporter *)0x0;
        }
        else {
          this_00 = (ScriptedObjectImporter *)operator_new(0x10);
          ScriptedObjectImporter::ScriptedObjectImporter(this_00,pSVar15);
          uVar11 = 0x25b;
        }
        break;
      case 0x26d:
        this_00 = (ScriptedObjectImporter *)0x0;
        uVar11 = 0x26d;
        *(File **)(pBVar14 + 0xc0) = this;
        break;
      case 0x282:
        this_00 = (ScriptedObjectImporter *)operator_new(0x28);
        pBVar35 = *(BindableProperty **)(this + 0x108);
        if (pBVar35 != (BindableProperty *)0x0) {
          FUN_00340fb0(1,pBVar35 + 8);
        }
        local_c8 = pBVar35;
        FileAssetImporter::FileAssetImporter
                  ((FileAssetImporter *)this_00,pBVar14,&local_c8,*(undefined8 *)(this + 0x100));
        pBVar35 = local_c8;
        if ((local_c8 != (BindableProperty *)0x0) &&
           (iVar12 = FUN_00340fe0(0xffffffff,local_c8 + 8), iVar12 == 1)) {
          (**(code **)(*(long *)pBVar35 + 8))(pBVar35);
        }
        plVar29 = *(long **)(this + 0x118);
        *(BindableProperty **)(this + 0x118) = pBVar14;
        if ((plVar29 == (long *)0x0) || (iVar12 = FUN_00340fe0(0xffffffff,plVar29 + 9), iVar12 != 1)
           ) goto LAB_003c3cb8;
        (**(code **)(*plVar29 + 8))(plVar29);
        uVar11 = 0x67;
        break;
      case 0x283:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        DataBindPathImporter::DataBindPathImporter
                  ((DataBindPathImporter *)this_00,(DataBindPath *)pBVar14);
        uVar11 = 0x283;
        break;
      case 0x28e:
        goto switchD_003c3bf4_caseD_28e;
      case 0x299:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        ListenerInputTypeKeyboardImporter::ListenerInputTypeKeyboardImporter
                  ((ListenerInputTypeKeyboardImporter *)this_00,(ListenerInputTypeKeyboard *)pBVar14
                  );
        uVar11 = 0x299;
        break;
      case 0x29d:
        this_00 = (ScriptedObjectImporter *)operator_new(0x10);
        ListenerInputTypeSemanticImporter::ListenerInputTypeSemanticImporter
                  ((ListenerInputTypeSemanticImporter *)this_00,(ListenerInputTypeSemantic *)pBVar14
                  );
        uVar11 = 0x29d;
        break;
      default:
        if (uVar10 == 0x3ca) {
          this_00 = (ScriptedObjectImporter *)operator_new(0x30);
          pBVar35 = *(BindableProperty **)(this + 0x108);
          if (pBVar35 != (BindableProperty *)0x0) {
            FUN_00340fb0(1,pBVar35 + 8);
          }
          local_c8 = pBVar35;
          TextAssetImporter::TextAssetImporter
                    ((TextAssetImporter *)this_00,pBVar14,&local_c8,*(undefined8 *)(this + 0x100),
                     &local_e0);
          if (local_c8 == (BindableProperty *)0x0) goto LAB_003c3cb8;
          goto LAB_003c3c94;
        }
        if (uVar10 == 0x3cc) goto switchD_003c3bf4_caseD_25b;
      }
      goto switchD_003c3bf4_caseD_197;
    }
    uVar18 = (uint)uStack_a8;
    switch(uVar10) {
    case 1:
      this_00 = (ScriptedObjectImporter *)operator_new(0x10);
      ArtboardImporter::ArtboardImporter((ArtboardImporter *)this_00,(Artboard *)pBVar14);
      uVar11 = 1;
      break;
    case 0x17:
      this_00 = (ScriptedObjectImporter *)operator_new(0x108);
      BackboardImporter::BackboardImporter((BackboardImporter *)this_00,(Backboard *)pBVar14);
      *(File **)((BackboardImporter *)this_00 + 0x100) = this;
      uVar11 = 0x17;
      break;
    case 0x19:
      this_00 = (ScriptedObjectImporter *)operator_new(0x10);
      KeyedObjectImporter::KeyedObjectImporter
                ((KeyedObjectImporter *)this_00,(KeyedObject *)pBVar14);
      uVar11 = 0x19;
      break;
    case 0x1a:
      if (uStack_a8 == 0) goto LAB_003c4a90;
      uVar43 = NEON_cnt(uStack_a8,1);
      uVar42 = NEON_uaddlv(uVar43,1);
      uVar13 = CONCAT62((int6)((ulong)uVar43 >> 0x10),uVar42) & 0xffffffff;
      if (uVar13 < 2) {
        uVar27 = (ulong)(uVar18 - 1) & 0x1f;
      }
      else if (uStack_a8 < 0x20) {
        uVar10 = 0;
        if ((uStack_a8 & 0xff) != 0) {
          uVar10 = 0x1f / (uVar18 & 0xff);
        }
        uVar27 = (ulong)(0x1f - uVar10 * (uVar18 & 0xff));
      }
      else {
        uVar27 = 0x1f;
      }
      plVar29 = *(long **)((long)local_b0 + uVar27 * 8);
      if ((plVar29 == (long *)0x0) || (plVar29 = (long *)*plVar29, plVar29 == (long *)0x0))
      goto LAB_003c4a90;
      do {
        uVar22 = plVar29[1];
        if (uVar22 == 0x1f) {
          if ((short)plVar29[2] != 0x1f) goto LAB_003c4868;
          if (plVar29[3] != 0) {
            pLVar40 = *(LinearAnimation **)(plVar29[3] + 8);
            this_00 = (ScriptedObjectImporter *)operator_new(0x18);
            KeyedPropertyImporter::KeyedPropertyImporter
                      ((KeyedPropertyImporter *)this_00,pLVar40,(KeyedProperty *)pBVar14);
            uVar11 = 0x1a;
            goto switchD_003c3bf4_caseD_197;
          }
          goto LAB_003c4a90;
        }
        if (uVar13 < 2) {
          uVar22 = uVar22 & uStack_a8 - 1;
        }
        else if (uStack_a8 <= uVar22) {
          uVar28 = 0;
          if (uStack_a8 != 0) {
            uVar28 = uVar22 / uStack_a8;
          }
          uVar22 = uVar22 - uVar28 * uStack_a8;
        }
        if (uVar22 != uVar27) goto LAB_003c4a90;
LAB_003c4868:
        plVar29 = (long *)*plVar29;
        uVar19 = 2;
      } while (plVar29 != (long *)0x0);
      goto LAB_003c4998;
    case 0x1f:
      this_00 = (ScriptedObjectImporter *)operator_new(0x10);
      LinearAnimationImporter::LinearAnimationImporter
                ((LinearAnimationImporter *)this_00,(LinearAnimation *)pBVar14);
      uVar11 = 0x1f;
      break;
    case 0x35:
      this_00 = (ScriptedObjectImporter *)operator_new(0x10);
      StateMachineImporter::StateMachineImporter
                ((StateMachineImporter *)this_00,(StateMachine *)pBVar14);
      uVar11 = 0x35;
      break;
    case 0x39:
      if (uStack_a8 != 0) {
        uVar43 = NEON_cnt(uStack_a8,1);
        uVar42 = NEON_uaddlv(uVar43,1);
        uVar27 = CONCAT62((int6)((ulong)uVar43 >> 0x10),uVar42) & 0xffffffff;
        uVar13 = (ulong)~uVar18 & 1;
        if (1 < uVar27) {
          uVar13 = (ulong)(uStack_a8 - 1 != 0);
        }
        plVar29 = *(long **)((long)local_b0 + uVar13 * 8);
        if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
          while (uVar22 = plVar29[1], uVar22 != 1) {
            if (uVar27 < 2) {
              uVar22 = uVar22 & uStack_a8 - 1;
            }
            else if (uStack_a8 <= uVar22) {
              uVar28 = 0;
              if (uStack_a8 != 0) {
                uVar28 = uVar22 / uStack_a8;
              }
              uVar22 = uVar22 - uVar28 * uStack_a8;
            }
            if (uVar22 != uVar13) goto LAB_003c4a90;
LAB_003c3dd4:
            plVar29 = (long *)*plVar29;
            uVar19 = 2;
            if (plVar29 == (long *)0x0) goto LAB_003c4998;
          }
          if ((short)plVar29[2] != 1) goto LAB_003c3dd4;
          if (plVar29[3] != 0) {
            pAVar39 = *(Artboard **)(plVar29[3] + 8);
            this_00 = (ScriptedObjectImporter *)operator_new(0x18);
            StateMachineLayerImporter::StateMachineLayerImporter
                      ((StateMachineLayerImporter *)this_00,(StateMachineLayer *)pBVar14,pAVar39);
            uVar11 = 0x39;
            break;
          }
        }
      }
      goto LAB_003c4a90;
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x49:
    case 0x4c:
switchD_003c3bf4_caseD_210:
      this_00 = (ScriptedObjectImporter *)operator_new(0x10);
      LayerStateImporter::LayerStateImporter((LayerStateImporter *)this_00,(LayerState *)pBVar14);
      uVar11 = 0x3c;
      break;
    case 0x41:
    case 0x4e:
      this_00 = (ScriptedObjectImporter *)operator_new(0x10);
      StateTransitionImporter::StateTransitionImporter
                ((StateTransitionImporter *)this_00,(StateTransition *)pBVar14);
      uVar11 = 0x41;
      break;
    case 0x5c:
switchD_003c3bf4_caseD_1c3:
      (**(code **)(*(long *)pBVar14 + 0x318))(pBVar14,this);
      this_00 = (ScriptedObjectImporter *)0x0;
      break;
    case 0x69:
    case 0x8d:
switchD_003c3bf4_caseD_196:
      this_00 = (ScriptedObjectImporter *)operator_new(0x28);
      pBVar35 = *(BindableProperty **)(this + 0x108);
      if (pBVar35 != (BindableProperty *)0x0) {
        FUN_00340fb0(1,pBVar35 + 8);
      }
      local_c8 = pBVar35;
      FileAssetImporter::FileAssetImporter
                ((FileAssetImporter *)this_00,pBVar14,&local_c8,*(undefined8 *)(this + 0x100));
      if (local_c8 != (BindableProperty *)0x0) {
LAB_003c3c94:
        pBVar35 = local_c8;
        iVar12 = FUN_00340fe0(0xffffffff,local_c8 + 8);
        if (iVar12 == 1) {
          (**(code **)(*(long *)pBVar35 + 8))(pBVar35);
        }
      }
LAB_003c3cb8:
      uVar11 = 0x67;
      break;
    case 0x72:
switchD_003c3bf4_caseD_28e:
      this_00 = (ScriptedObjectImporter *)operator_new(0x10);
      StateMachineListenerImporter::StateMachineListenerImporter
                ((StateMachineListenerImporter *)this_00,(StateMachineListener *)pBVar14);
      uVar11 = 0x28e;
    }
switchD_003c3bf4_caseD_197:
    local_e8 = (BindablePropertyImporter *)this_00;
    cVar7 = FUN_003c8f00(&local_b0,uVar11,&local_e8);
    pBVar5 = local_e8;
    local_e8 = (BindablePropertyImporter *)0x0;
    if (pBVar5 != (BindablePropertyImporter *)0x0) {
      (**(code **)(*(long *)pBVar5 + 8))();
    }
    if (cVar7 != '\0') goto LAB_003c4a90;
    uVar13 = (**(code **)(*(long *)pBVar14 + 0x18))(pBVar14,0x42);
    if ((uVar13 & 1) != 0) {
      pSVar16 = (StateMachineLayerComponentImporter *)operator_new(0x10);
      StateMachineLayerComponentImporter::StateMachineLayerComponentImporter
                (pSVar16,(StateMachineLayerComponent *)pBVar14);
      local_f0 = pSVar16;
      cVar7 = FUN_003c8f00(&local_b0,0x42,&local_f0);
      pSVar16 = local_f0;
      local_f0 = (StateMachineLayerComponentImporter *)0x0;
      if (pSVar16 == (StateMachineLayerComponentImporter *)0x0) {
        if (cVar7 != '\0') goto LAB_003c4a90;
        goto LAB_003c41cc;
      }
      (**(code **)(*(long *)pSVar16 + 8))(pSVar16);
      if (cVar7 == '\0') goto LAB_003c41cc;
LAB_003c4a90:
      uVar19 = 2;
      pvVar17 = local_e0;
      pvVar4 = local_d8;
      if (local_e0 == (void *)0x0) goto LAB_003c49d4;
      goto joined_r0x003c49ac;
    }
LAB_003c41cc:
    uVar13 = (**(code **)(*(long *)pBVar14 + 0x18))(pBVar14,0x1e8);
    if ((uVar13 & 1) == 0) {
      uVar13 = (**(code **)(*(long *)pBVar14 + 0x18))(pBVar14,0xaf);
      if ((uVar13 & 1) == 0) {
        uVar13 = (**(code **)(*(long *)pBVar14 + 0x18))(pBVar14,0x20b);
        if ((uVar13 & 1) != 0) {
          puVar37 = *(undefined8 **)(this + 0x78);
          if (puVar37 < *(undefined8 **)(this + 0x80)) {
            *puVar37 = pBVar14;
            *(undefined8 **)(this + 0x78) = puVar37 + 1;
          }
          else {
            puVar33 = *(undefined8 **)(this + 0x70);
            lVar34 = (long)puVar37 - (long)puVar33 >> 3;
            uVar13 = lVar34 + 1;
            if (uVar13 >> 0x3d != 0) {
LAB_003c4ab8:
              FUN_003affcc();
LAB_003c4abc:
              FUN_003c959c();
LAB_003c4ac0:
              FUN_003c8eec();
LAB_003c4ac4:
                    /* WARNING: Subroutine does not return */
              FUN_0036e030();
            }
            uVar22 = (long)*(undefined8 **)(this + 0x80) - (long)puVar33;
            uVar27 = (long)uVar22 >> 2;
            if (uVar27 <= uVar13) {
              uVar27 = uVar13;
            }
            if (0x7ffffffffffffff7 < uVar22) {
              uVar27 = 0x1fffffffffffffff;
            }
            if (uVar27 == 0) {
              pvVar17 = (void *)0x0;
            }
            else {
              if (uVar27 >> 0x3d != 0) goto LAB_003c4aa4;
              pvVar17 = operator_new(uVar27 << 3);
            }
            puVar36 = (undefined8 *)((long)pvVar17 + lVar34 * 8);
            puVar41 = puVar36 + 1;
            *puVar36 = pBVar14;
            puVar21 = puVar37;
            if ((long)puVar37 - (long)puVar33 != 0) {
              uVar13 = ((long)puVar37 - (long)puVar33) - 8;
              if ((0x37 < uVar13) &&
                 (0x1f < (ulong)((long)puVar37 + (-((long)puVar37 - (long)puVar33) - (long)pvVar17))
                 )) {
                puVar21 = puVar36 + -2;
                puVar31 = puVar37 + -2;
                uVar13 = (uVar13 >> 3) + 1;
                uVar28 = uVar13 & 0x3ffffffffffffffc;
                puVar37 = puVar37 + -uVar28;
                uVar22 = uVar28;
                do {
                  puVar32 = puVar31 + -1;
                  uVar45 = puVar31[-2];
                  uVar44 = puVar31[1];
                  uVar43 = *puVar31;
                  uVar22 = uVar22 - 4;
                  puVar31 = puVar31 + -4;
                  puVar21[-1] = *puVar32;
                  puVar21[-2] = uVar45;
                  puVar21[1] = uVar44;
                  *puVar21 = uVar43;
                  puVar21 = puVar21 + -4;
                } while (uVar22 != 0);
                puVar36 = puVar36 + -uVar28;
                puVar21 = puVar33;
                if (uVar13 == uVar28) goto LAB_003c4520;
              }
              do {
                puVar37 = puVar37 + -1;
                puVar36 = puVar36 + -1;
                *puVar36 = *puVar37;
              } while (puVar37 != puVar33);
              puVar21 = *(undefined8 **)(this + 0x70);
            }
LAB_003c4520:
            *(undefined8 **)(this + 0x70) = puVar36;
            *(undefined8 **)(this + 0x78) = puVar41;
            *(void **)(this + 0x80) = (void *)((long)pvVar17 + uVar27 * 8);
            if (puVar21 != (undefined8 *)0x0) {
              operator_delete(puVar21);
            }
            *(undefined8 **)(this + 0x78) = puVar41;
          }
        }
      }
      else {
        if (uStack_a8 == 0) {
LAB_003c4594:
          puVar37 = *(undefined8 **)(this + 0x48);
          if (puVar37 < *(undefined8 **)(this + 0x50)) {
            puVar41 = puVar37 + 1;
            *puVar37 = pBVar14;
          }
          else {
            puVar33 = *(undefined8 **)(this + 0x40);
            lVar34 = (long)puVar37 - (long)puVar33 >> 3;
            uVar13 = lVar34 + 1;
            if (uVar13 >> 0x3d != 0) goto LAB_003c4aac;
            uVar22 = (long)*(undefined8 **)(this + 0x50) - (long)puVar33;
            uVar27 = (long)uVar22 >> 2;
            if (uVar27 <= uVar13) {
              uVar27 = uVar13;
            }
            if (0x7ffffffffffffff7 < uVar22) {
              uVar27 = 0x1fffffffffffffff;
            }
            if (uVar27 == 0) {
              pvVar17 = (void *)0x0;
            }
            else {
              if (uVar27 >> 0x3d != 0) goto LAB_003c4aa4;
              pvVar17 = operator_new(uVar27 << 3);
            }
            puVar36 = (undefined8 *)((long)pvVar17 + lVar34 * 8);
            puVar41 = puVar36 + 1;
            *puVar36 = pBVar14;
            puVar21 = puVar37;
            if ((long)puVar37 - (long)puVar33 != 0) {
              uVar13 = ((long)puVar37 - (long)puVar33) - 8;
              if ((0x37 < uVar13) &&
                 (0x1f < (ulong)((long)puVar37 + (-((long)puVar37 - (long)puVar33) - (long)pvVar17))
                 )) {
                puVar21 = puVar36 + -2;
                puVar31 = puVar37 + -2;
                uVar13 = (uVar13 >> 3) + 1;
                uVar28 = uVar13 & 0x3ffffffffffffffc;
                puVar37 = puVar37 + -uVar28;
                uVar22 = uVar28;
                do {
                  puVar32 = puVar31 + -1;
                  uVar45 = puVar31[-2];
                  uVar44 = puVar31[1];
                  uVar43 = *puVar31;
                  uVar22 = uVar22 - 4;
                  puVar31 = puVar31 + -4;
                  puVar21[-1] = *puVar32;
                  puVar21[-2] = uVar45;
                  puVar21[1] = uVar44;
                  *puVar21 = uVar43;
                  puVar21 = puVar21 + -4;
                } while (uVar22 != 0);
                puVar36 = puVar36 + -uVar28;
                puVar21 = puVar33;
                if (uVar13 == uVar28) goto LAB_003c469c;
              }
              do {
                puVar37 = puVar37 + -1;
                puVar36 = puVar36 + -1;
                *puVar36 = *puVar37;
              } while (puVar37 != puVar33);
              puVar21 = *(undefined8 **)(this + 0x40);
            }
LAB_003c469c:
            *(undefined8 **)(this + 0x40) = puVar36;
            *(undefined8 **)(this + 0x48) = puVar41;
            *(void **)(this + 0x50) = (void *)((long)pvVar17 + uVar27 * 8);
            if (puVar21 != (undefined8 *)0x0) {
              operator_delete(puVar21);
            }
          }
          *(undefined8 **)(this + 0x48) = puVar41;
        }
        else {
          uVar43 = NEON_cnt(uStack_a8,1);
          uVar42 = NEON_uaddlv(uVar43,1);
          uVar27 = CONCAT62((int6)((ulong)uVar43 >> 0x10),uVar42) & 0xffffffff;
          uVar13 = (ulong)~(uint)uStack_a8 & 1;
          if (1 < uVar27) {
            uVar13 = (ulong)(uStack_a8 - 1 != 0);
          }
          plVar29 = *(long **)((long)local_b0 + uVar13 * 8);
          if (plVar29 == (long *)0x0) goto LAB_003c4594;
          do {
            while( true ) {
              plVar29 = (long *)*plVar29;
              if (plVar29 == (long *)0x0) goto LAB_003c4594;
              uVar22 = plVar29[1];
              if (uVar22 == 1) break;
              if (uVar27 < 2) {
                uVar22 = uVar22 & uStack_a8 - 1;
              }
              else if (uStack_a8 <= uVar22) {
                uVar28 = 0;
                if (uStack_a8 != 0) {
                  uVar28 = uVar22 / uStack_a8;
                }
                uVar22 = uVar22 - uVar28 * uStack_a8;
              }
              if (uVar22 != uVar13) goto LAB_003c4594;
            }
          } while (*(short *)(plVar29 + 2) != 1);
          if (plVar29[3] == 0) goto LAB_003c4594;
        }
        uVar13 = (**(code **)(*(long *)pBVar14 + 0x18))(pBVar14,0x3cc);
        if ((uVar13 & 1) != 0) {
          puVar37 = *(undefined8 **)(this + 0x60);
          if (puVar37 < *(undefined8 **)(this + 0x68)) {
            puVar41 = puVar37 + 1;
            *puVar37 = pBVar14;
          }
          else {
            puVar33 = *(undefined8 **)(this + 0x58);
            lVar34 = (long)puVar37 - (long)puVar33 >> 3;
            uVar13 = lVar34 + 1;
            if (uVar13 >> 0x3d != 0) goto LAB_003c4abc;
            uVar22 = (long)*(undefined8 **)(this + 0x68) - (long)puVar33;
            uVar27 = (long)uVar22 >> 2;
            if (uVar27 <= uVar13) {
              uVar27 = uVar13;
            }
            if (0x7ffffffffffffff7 < uVar22) {
              uVar27 = 0x1fffffffffffffff;
            }
            if (uVar27 == 0) {
              pvVar17 = (void *)0x0;
            }
            else {
              if (uVar27 >> 0x3d != 0) {
LAB_003c4aa4:
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              pvVar17 = operator_new(uVar27 << 3);
            }
            puVar36 = (undefined8 *)((long)pvVar17 + lVar34 * 8);
            puVar41 = puVar36 + 1;
            *puVar36 = pBVar14;
            puVar21 = puVar37;
            if ((long)puVar37 - (long)puVar33 != 0) {
              uVar13 = ((long)puVar37 - (long)puVar33) - 8;
              if ((0x37 < uVar13) &&
                 (0x1f < (ulong)((long)puVar37 + (-((long)puVar37 - (long)puVar33) - (long)pvVar17))
                 )) {
                puVar21 = puVar36 + -2;
                puVar31 = puVar37 + -2;
                uVar13 = (uVar13 >> 3) + 1;
                uVar28 = uVar13 & 0x3ffffffffffffffc;
                puVar37 = puVar37 + -uVar28;
                uVar22 = uVar28;
                do {
                  puVar32 = puVar31 + -1;
                  uVar45 = puVar31[-2];
                  uVar44 = puVar31[1];
                  uVar43 = *puVar31;
                  uVar22 = uVar22 - 4;
                  puVar31 = puVar31 + -4;
                  puVar21[-1] = *puVar32;
                  puVar21[-2] = uVar45;
                  puVar21[1] = uVar44;
                  *puVar21 = uVar43;
                  puVar21 = puVar21 + -4;
                } while (uVar22 != 0);
                puVar36 = puVar36 + -uVar28;
                puVar21 = puVar33;
                if (uVar13 == uVar28) goto LAB_003c47ec;
              }
              do {
                puVar37 = puVar37 + -1;
                puVar36 = puVar36 + -1;
                *puVar36 = *puVar37;
              } while (puVar37 != puVar33);
              puVar21 = *(undefined8 **)(this + 0x58);
            }
LAB_003c47ec:
            *(undefined8 **)(this + 0x58) = puVar36;
            *(undefined8 **)(this + 0x60) = puVar41;
            *(void **)(this + 0x68) = (void *)((long)pvVar17 + uVar27 * 8);
            if (puVar21 != (undefined8 *)0x0) {
              operator_delete(puVar21);
            }
          }
          *(undefined8 **)(this + 0x60) = puVar41;
        }
      }
    }
    else {
      puVar37 = *(undefined8 **)(this + 0x30);
      if (puVar37 < *(undefined8 **)(this + 0x38)) {
        puVar21 = puVar37 + 1;
        *puVar37 = pBVar14;
      }
      else {
        puVar33 = *(undefined8 **)(this + 0x28);
        lVar34 = (long)puVar37 - (long)puVar33 >> 3;
        uVar13 = lVar34 + 1;
        if (uVar13 >> 0x3d != 0) {
          FUN_003c9574();
          this = pFVar3;
LAB_003c4aac:
          FUN_003c9588();
LAB_003c4ab0:
          FUN_0032a244(this + 0xe8);
          goto LAB_003c4ab8;
        }
        uVar22 = (long)*(undefined8 **)(this + 0x38) - (long)puVar33;
        uVar27 = (long)uVar22 >> 2;
        if (uVar27 <= uVar13) {
          uVar27 = uVar13;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          uVar27 = 0x1fffffffffffffff;
        }
        if (uVar27 == 0) {
          pvVar17 = (void *)0x0;
        }
        else {
          if (uVar27 >> 0x3d != 0) goto LAB_003c4aa4;
          pvVar17 = operator_new(uVar27 << 3);
        }
        puVar36 = (undefined8 *)((long)pvVar17 + lVar34 * 8);
        puVar21 = puVar36 + 1;
        *puVar36 = pBVar14;
        if ((long)puVar37 - (long)puVar33 != 0) {
          uVar13 = ((long)puVar37 - (long)puVar33) - 8;
          puVar41 = puVar37;
          if ((0x37 < uVar13) &&
             (0x1f < (ulong)((long)puVar37 + (-((long)puVar37 - (long)puVar33) - (long)pvVar17)))) {
            puVar31 = puVar36 + -2;
            puVar32 = puVar37 + -2;
            uVar13 = (uVar13 >> 3) + 1;
            uVar28 = uVar13 & 0x3ffffffffffffffc;
            puVar41 = puVar37 + -uVar28;
            uVar22 = uVar28;
            do {
              puVar37 = puVar32 + -1;
              uVar45 = puVar32[-2];
              uVar44 = puVar32[1];
              uVar43 = *puVar32;
              uVar22 = uVar22 - 4;
              puVar32 = puVar32 + -4;
              puVar31[-1] = *puVar37;
              puVar31[-2] = uVar45;
              puVar31[1] = uVar44;
              *puVar31 = uVar43;
              puVar31 = puVar31 + -4;
            } while (uVar22 != 0);
            puVar36 = puVar36 + -uVar28;
            puVar37 = puVar33;
            if (uVar13 == uVar28) goto LAB_003c43fc;
          }
          do {
            puVar41 = puVar41 + -1;
            puVar36 = puVar36 + -1;
            *puVar36 = *puVar41;
          } while (puVar41 != puVar33);
          puVar37 = *(undefined8 **)(this + 0x28);
        }
LAB_003c43fc:
        *(undefined8 **)(this + 0x28) = puVar36;
        *(undefined8 **)(this + 0x30) = puVar21;
        *(void **)(this + 0x38) = (void *)((long)pvVar17 + uVar27 * 8);
        if (puVar37 != (undefined8 *)0x0) {
          operator_delete(puVar37);
        }
      }
      *(undefined8 **)(this + 0x30) = puVar21;
    }
    goto LAB_003c32a8;
  }
  goto LAB_003c4908;
code_r0x003c337c:
  if ((pBVar14 != (BindableProperty *)0x0) &&
     (uVar13 = (**(code **)(*(long *)pBVar14 + 0x20))(pBVar14,uVar27 & 0xffffffff,param_1),
     (uVar13 & 1) != 0)) goto LAB_003c3320;
  uVar10 = (int)uVar27 - 4;
  if ((uVar10 < 0x3f4) && (iVar12 = *(int *)(&DAT_00252478 + (ulong)uVar10 * 4), iVar12 != -1))
  goto LAB_003c346c;
  uVar13 = *(ulong *)(param_2 + 0x18);
  if (uVar13 != 0) {
    uVar43 = NEON_cnt(uVar13,1);
    uVar42 = NEON_uaddlv(uVar43,1);
    uVar22 = CONCAT62((int6)((ulong)uVar43 >> 0x10),uVar42) & 0xffffffff;
    if (uVar22 < 2) {
      uVar28 = uVar13 + 0xffff & uVar27;
    }
    else {
      uVar28 = uVar27;
      if (uVar13 <= uVar27) {
        uVar28 = 0;
        if (uVar13 != 0) {
          uVar28 = uVar27 / uVar13;
        }
        uVar28 = uVar27 - uVar28 * uVar13;
      }
    }
    plVar29 = *(long **)(*(long *)(param_2 + 0x10) + uVar28 * 8);
    if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
      do {
        uVar30 = plVar29[1];
        if (uVar30 == uVar27) {
          if ((int)plVar29[2] == (int)uVar27) goto LAB_003c3460;
        }
        else {
          if (uVar22 < 2) {
            uVar30 = uVar30 & uVar13 - 1;
          }
          else if (uVar13 <= uVar30) {
            uVar2 = 0;
            if (uVar13 != 0) {
              uVar2 = uVar30 / uVar13;
            }
            uVar30 = uVar30 - uVar2 * uVar13;
          }
          if (uVar30 != uVar28) break;
        }
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) break;
      } while( true );
    }
  }
LAB_003c35bc:
  fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
          "Unknown property key %d, missing from property ToC.\n",uVar27 & 0xffffffff);
joined_r0x003c35d8:
  puVar37 = local_80;
  if (pBVar14 != (BindableProperty *)0x0) {
    (**(code **)(*(long *)pBVar14 + 8))(pBVar14);
    puVar37 = local_80;
  }
LAB_003c3598:
  do {
    if (puVar37 == local_88) break;
    uVar13 = (**(code **)(*(long *)puVar37[-1] + 0x18))();
    puVar37 = puVar37 + -1;
  } while ((uVar13 & 1) == 0);
  goto LAB_003c32a8;
LAB_003c3460:
  iVar12 = *(int *)((long)plVar29 + 0x14);
  if (iVar12 != -1) {
LAB_003c346c:
    if (iVar12 < 2) {
      if (iVar12 == 0) {
        uVar27 = 0;
        uVar13 = 0;
        pbVar20 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
        pbVar24 = *(byte **)(param_1 + 0x10);
        do {
          if (pbVar20 <= pbVar24) goto LAB_003c350c;
          pbVar23 = pbVar24 + 1;
          bVar1 = *pbVar24;
          uVar22 = uVar27 & 0x3f;
          uVar27 = (ulong)(((uint)uVar27 & 0xff) + 7);
          uVar13 = ((ulong)bVar1 & 0x7f) << uVar22 | uVar13;
          pbVar24 = pbVar23;
        } while ((char)bVar1 < '\0');
        *(byte **)(param_1 + 0x10) = pbVar23;
        if (uVar13 >> 0x20 != 0) {
          param_1[0x19] = (BinaryReader)0x1;
          *(byte **)(param_1 + 0x10) = pbVar20;
        }
      }
      else if (iVar12 == 1) {
        pcVar25 = *(char **)(param_1 + 0x10);
        do {
          if ((char *)(*(long *)param_1 + *(long *)(param_1 + 8)) <= pcVar25) {
            param_1[0x18] = (BinaryReader)0x1;
            *(char **)(param_1 + 0x10) = (char *)(*(long *)param_1 + *(long *)(param_1 + 8));
            goto LAB_003c357c;
          }
          pcVar26 = pcVar25 + 1;
          cVar7 = *pcVar25;
          pcVar25 = pcVar26;
        } while (cVar7 < '\0');
        *(char **)(param_1 + 0x10) = pcVar26;
        if (param_1[0x18] == (BinaryReader)0x0) {
          BinaryReader::readString((ulong)param_1);
          if (((ulong)local_c8 & 1) != 0) {
            operator_delete(local_b8);
          }
        }
        else {
LAB_003c357c:
          local_c8 = (BindableProperty *)0x0;
          uStack_c0 = 0;
          local_b8 = (void *)0x0;
        }
      }
    }
    else if ((iVar12 == 2) || (iVar12 == 3)) {
      pbVar20 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
      if ((long)pbVar20 - *(long *)(param_1 + 0x10) < 4) {
LAB_003c350c:
        param_1[0x18] = (BinaryReader)0x1;
        *(byte **)(param_1 + 0x10) = pbVar20;
      }
      else {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      }
    }
    goto LAB_003c3320;
  }
  goto LAB_003c35bc;
  while( true ) {
    cVar7 = (**(code **)(*(long *)puVar36[-1] + 0x10))();
    puVar37 = puVar36 + -1;
    if (cVar7 != '\0') break;
LAB_003c4908:
    puVar36 = puVar37;
    puVar33 = local_88;
    if (puVar36 == local_88) break;
  }
  puVar37 = local_a0;
  if (local_98 != 0) {
    while (puVar37 != (undefined8 *)0x0) {
      plVar29 = (long *)puVar37[3];
      pvVar17 = (void *)*puVar37;
      puVar37[3] = 0;
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 8))();
      }
      operator_delete(puVar37);
      puVar37 = (undefined8 *)pvVar17;
    }
    local_a0 = (undefined8 *)0x0;
    if (uStack_a8 != 0) {
      uVar13 = 0;
      do {
        *(undefined8 *)((long)local_b0 + uVar13 * 8) = 0;
        uVar13 = uVar13 + 1;
      } while (uStack_a8 != uVar13);
    }
    local_98 = 0;
  }
  local_80 = local_88;
  registerScripts(this);
  uVar19 = 2;
  if ((param_1[0x18] == (BinaryReader)0x0 && param_1[0x19] == (BinaryReader)0x0) &&
      puVar36 == puVar33) {
    uVar19 = 0;
  }
LAB_003c4998:
  pvVar17 = local_e0;
  pvVar4 = local_d8;
  if (local_e0 != (void *)0x0) {
joined_r0x003c49ac:
    for (; pvVar6 = local_e0, pvVar4 != local_e0; pvVar4 = (void *)((long)pvVar4 + -0x18)) {
      local_e0 = pvVar17;
      free(*(void **)((long)pvVar4 + -0x10));
      pvVar17 = local_e0;
      local_e0 = pvVar6;
    }
    local_d8 = local_e0;
    local_e0 = pvVar17;
    operator_delete(pvVar17);
  }
LAB_003c49d4:
  pvVar17 = local_b0;
  puVar37 = local_a0;
  if (local_88 != (undefined8 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
    pvVar17 = local_b0;
    puVar37 = local_a0;
  }
  while (puVar37 != (undefined8 *)0x0) {
    plVar29 = (long *)puVar37[3];
    puVar33 = (undefined8 *)*puVar37;
    puVar37[3] = 0;
    local_b0 = pvVar17;
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    operator_delete(puVar37);
    pvVar17 = local_b0;
    puVar37 = puVar33;
  }
  local_b0 = (void *)0x0;
  if (pvVar17 != (void *)0x0) {
    operator_delete(pvVar17);
  }
  if (*(long *)(pFVar3 + 0x28) == local_68) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c4ac8  FUN_003c4ac8  [FAILED] =====
/* decompilation failed: Exception while decompiling 003c4ac8: process: timeout
 */

// ===== 003c8d40  FUN_003c8d40 =====

undefined8 * FUN_003c8d40(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  lVar16 = (long)puVar15 - (long)puVar1 >> 3;
  uVar6 = lVar16 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003c9ba0();
LAB_003c8ee8:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)(param_1[2] - (long)puVar1) >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < param_1[2] - (long)puVar1) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_003c8ee8;
    pvVar3 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar3 + lVar16 * 8);
  uVar7 = *param_2;
  *param_2 = 0;
  puVar13 = puVar4 + 1;
  *puVar4 = uVar7;
  if ((long)puVar15 - (long)puVar1 != 0) {
    uVar6 = ((long)puVar15 - (long)puVar1) - 8;
    puVar14 = puVar15;
    if ((0x77 < uVar6) &&
       ((puVar4 <= (undefined8 *)((long)puVar15 + (-8 - (uVar6 & 0xfffffffffffffff8))) ||
        (puVar15 <=
         (undefined8 *)
         ((long)pvVar3 + (((long)puVar15 - (long)puVar1) - (uVar6 & 0xfffffffffffffff8)) + -8))))) {
      puVar9 = puVar4 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar8 = uVar6 & 0x3ffffffffffffffc;
      puVar14 = puVar15 + -uVar8;
      uVar11 = uVar8;
      do {
        puVar10 = puVar15 + -4;
        uVar19 = puVar15[-3];
        uVar18 = *puVar10;
        uVar17 = puVar15[-1];
        uVar7 = puVar15[-2];
        uVar11 = uVar11 - 4;
        puVar15[-3] = 0;
        *puVar10 = 0;
        puVar15[-1] = 0;
        puVar15[-2] = 0;
        puVar9[-1] = uVar19;
        puVar9[-2] = uVar18;
        puVar9[1] = uVar17;
        *puVar9 = uVar7;
        puVar9 = puVar9 + -4;
        puVar15 = puVar10;
      } while (uVar11 != 0);
      puVar4 = puVar4 + -uVar8;
      if (uVar6 == uVar8) goto LAB_003c8e70;
    }
    do {
      puVar14 = puVar14 + -1;
      uVar7 = *puVar14;
      *puVar14 = 0;
      puVar4 = puVar4 + -1;
      *puVar4 = uVar7;
    } while (puVar14 != puVar1);
  }
LAB_003c8e70:
  puVar1 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  *param_1 = (ulong)puVar4;
  param_1[1] = (ulong)puVar13;
  param_1[2] = (ulong)((long)pvVar3 + uVar5 * 8);
  while (puVar15 != puVar1) {
    puVar15 = puVar15 + -1;
    plVar12 = (long *)*puVar15;
    if ((plVar12 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar12 + 9), iVar2 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  return puVar13;
}


// ===== 003c8eec  FUN_003c8eec =====

void FUN_003c8eec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003c8f00  FUN_003c8f00 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_003c8f00(long *param_1,ulong param_2,long *param_3)

{
  short sVar1;
  undefined8 *puVar2;
  size_t __n;
  uint uVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *__dest;
  long *plVar19;
  long lVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  float fVar23;
  long lVar24;
  
  plVar5 = (long *)param_1[1];
  uVar18 = param_2 & 0xffffffff;
  plVar19 = (long *)(param_2 & 0xffff);
  sVar1 = (short)uVar18;
  if (plVar5 != (long *)0x0) {
    uVar22 = NEON_cnt(plVar5,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar10 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar10 < 2) {
      plVar17 = (long *)((ulong)((int)plVar5 - 1) & (ulong)plVar19);
    }
    else {
      plVar17 = plVar19;
      if (plVar5 <= plVar19) {
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          uVar6 = (ulong)plVar19 / (ulong)plVar5;
        }
        plVar17 = (long *)((long)plVar19 - uVar6 * (long)plVar5);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)plVar17 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
LAB_003c8f9c:
      plVar15 = (long *)plVar12[1];
      if (plVar15 == plVar19) {
        if ((short)plVar12[2] != sVar1) goto LAB_003c8f94;
        puVar2 = (undefined8 *)param_1[6];
        plVar5 = (long *)plVar12[3];
        puVar9 = (undefined8 *)param_1[5];
        __dest = puVar9;
        for (; (puVar9 != puVar2 && (__dest = puVar9, (long *)*puVar9 != plVar5));
            puVar9 = puVar9 + 1) {
          __dest = puVar2;
        }
        if (__dest != puVar2) {
          __n = (long)puVar2 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          param_1[6] = (long)__dest + __n;
        }
        uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((uVar3 & 0xff) != 0) {
          FUN_003c99a8(param_1,uVar18);
          return uVar3;
        }
      }
      else {
        if (uVar10 < 2) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar5 - 1U);
        }
        else if (plVar5 <= plVar15) {
          uVar6 = 0;
          if (plVar5 != (long *)0x0) {
            uVar6 = (ulong)plVar15 / (ulong)plVar5;
          }
          plVar15 = (long *)((long)plVar15 - uVar6 * (long)plVar5);
        }
        if (plVar15 == plVar17) goto LAB_003c8f94;
      }
    }
  }
LAB_003c9058:
  lVar20 = *param_3;
  if (lVar20 == 0) {
    FUN_003c99a8(param_1,uVar18);
    return 0;
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 < (long *)param_1[7]) {
    plVar15 = plVar5 + 1;
    *plVar5 = lVar20;
  }
  else {
    plVar17 = (long *)param_1[5];
    lVar8 = (long)plVar5 - (long)plVar17 >> 3;
    uVar18 = lVar8 + 1;
    if (uVar18 >> 0x3d != 0) {
      FUN_003c9b8c();
                    /* WARNING: Subroutine does not return */
      FUN_0031fb04("vector");
    }
    uVar6 = param_1[7] - (long)plVar17;
    uVar10 = (long)uVar6 >> 2;
    if (uVar10 <= uVar18) {
      uVar10 = uVar18;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar10 >> 0x3d != 0) goto LAB_003c956c;
      pvVar4 = operator_new(uVar10 << 3);
    }
    plVar12 = (long *)((long)pvVar4 + lVar8 * 8);
    plVar15 = plVar12 + 1;
    *plVar12 = lVar20;
    if ((long)plVar5 - (long)plVar17 != 0) {
      uVar18 = ((long)plVar5 - (long)plVar17) - 8;
      plVar11 = plVar5;
      if ((0x37 < uVar18) &&
         (0x1f < (ulong)((long)plVar5 + (-((long)plVar5 - (long)plVar17) - (long)pvVar4)))) {
        plVar14 = plVar12 + -2;
        plVar16 = plVar5 + -2;
        uVar18 = (uVar18 >> 3) + 1;
        uVar13 = uVar18 & 0x3ffffffffffffffc;
        plVar11 = plVar5 + -uVar13;
        uVar6 = uVar13;
        do {
          plVar5 = plVar16 + -1;
          lVar24 = plVar16[-2];
          lVar8 = plVar16[1];
          lVar20 = *plVar16;
          uVar6 = uVar6 - 4;
          plVar16 = plVar16 + -4;
          plVar14[-1] = *plVar5;
          plVar14[-2] = lVar24;
          plVar14[1] = lVar8;
          *plVar14 = lVar20;
          plVar14 = plVar14 + -4;
        } while (uVar6 != 0);
        plVar12 = plVar12 + -uVar13;
        plVar5 = plVar17;
        if (uVar18 == uVar13) goto LAB_003c9178;
      }
      do {
        plVar11 = plVar11 + -1;
        plVar12 = plVar12 + -1;
        *plVar12 = *plVar11;
      } while (plVar11 != plVar17);
      plVar5 = (long *)param_1[5];
    }
LAB_003c9178:
    param_1[5] = (long)plVar12;
    param_1[6] = (long)plVar15;
    param_1[7] = (long)((long)pvVar4 + uVar10 * 8);
    if (plVar5 != (long *)0x0) {
      operator_delete(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  param_1[6] = (long)plVar15;
  if (plVar5 != (long *)0x0) {
    uVar22 = NEON_cnt(plVar5,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar18 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar18 < 2) {
      plVar15 = (long *)((ulong)((int)plVar5 - 1) & (ulong)plVar19);
    }
    else {
      plVar15 = plVar19;
      if (plVar5 <= plVar19) {
        uVar10 = 0;
        if (plVar5 != (long *)0x0) {
          uVar10 = (ulong)plVar19 / (ulong)plVar5;
        }
        plVar15 = (long *)((long)plVar19 - uVar10 * (long)plVar5);
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + (long)plVar15 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar9, plVar17 != (long *)0x0)) {
      do {
        plVar12 = (long *)plVar17[1];
        if (plVar12 == plVar19) {
          if ((short)plVar17[2] == sVar1) goto LAB_003c94f0;
        }
        else {
          if (uVar18 < 2) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar5 - 1U);
          }
          else if (plVar5 <= plVar12) {
            uVar10 = 0;
            if (plVar5 != (long *)0x0) {
              uVar10 = (ulong)plVar12 / (ulong)plVar5;
            }
            plVar12 = (long *)((long)plVar12 - uVar10 * (long)plVar5);
          }
          if (plVar12 != plVar15) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  plVar17 = (long *)operator_new(0x20);
  lVar20 = param_1[3];
  fVar23 = *(float *)(param_1 + 4);
  *plVar17 = 0;
  plVar17[1] = (long)plVar19;
  *(short *)(plVar17 + 2) = sVar1;
  plVar17[3] = 0;
  if ((plVar5 == (long *)0x0) || (fVar23 * (float)plVar5 < (float)(lVar20 + 1))) {
    if (plVar5 < (long *)0x3) {
      uVar18 = 1;
    }
    else {
      uVar18 = (ulong)(((ulong)plVar5 & (long)plVar5 - 1U) != 0);
    }
    plVar12 = (long *)(uVar18 | (long)plVar5 << 1);
    plVar15 = (long *)(long)((float)(lVar20 + 1) / fVar23);
    if (plVar12 <= plVar15) {
      plVar12 = plVar15;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
      plVar12 = (long *)std::__ndk1::__next_prime((ulong)plVar12);
      plVar5 = (long *)param_1[1];
    }
    if (plVar5 < plVar12) {
LAB_003c92d8:
      if ((ulong)plVar12 >> 0x3d != 0) {
LAB_003c956c:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar4 = operator_new((long)plVar12 << 3);
      pvVar7 = (void *)*param_1;
      *param_1 = (long)pvVar4;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      plVar5 = (long *)0x0;
      param_1[1] = (long)plVar12;
      do {
        *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
        plVar5 = (long *)((long)plVar5 + 1);
      } while (plVar12 != plVar5);
      plVar15 = (long *)param_1[2];
      plVar5 = plVar12;
      if (plVar15 != (long *)0x0) {
        plVar11 = (long *)plVar15[1];
        uVar22 = NEON_cnt(plVar12,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        uVar18 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
        if (uVar18 < 2) {
          plVar11 = (long *)((ulong)plVar11 & (long)plVar12 - 1U);
        }
        else if (plVar12 <= plVar11) {
          uVar10 = 0;
          if (plVar12 != (long *)0x0) {
            uVar10 = (ulong)plVar11 / (ulong)plVar12;
          }
          plVar11 = (long *)((long)plVar11 - uVar10 * (long)plVar12);
        }
        *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
        plVar14 = (long *)*plVar15;
        if (plVar14 != (long *)0x0) {
          do {
            plVar16 = (long *)plVar14[1];
            if (uVar18 < 2) {
              plVar16 = (long *)((ulong)plVar16 & (long)plVar12 - 1U);
            }
            else if (plVar12 <= plVar16) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar16 / (ulong)plVar12;
              }
              plVar16 = (long *)((long)plVar16 - uVar10 * (long)plVar12);
            }
            if (plVar16 != plVar11) {
              if (*(long *)(*param_1 + (long)plVar16 * 8) == 0) {
                *(long **)(*param_1 + (long)plVar16 * 8) = plVar15;
                plVar11 = plVar16;
              }
              else {
                *plVar15 = *plVar14;
                *plVar14 = **(long **)(*param_1 + (long)plVar16 * 8);
                **(undefined8 **)(*param_1 + (long)plVar16 * 8) = plVar14;
                plVar14 = plVar15;
              }
            }
            plVar15 = plVar14;
            plVar14 = (long *)*plVar15;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    else if (plVar12 < plVar5) {
      plVar15 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar5 < (long *)0x3) {
LAB_003c9530:
        plVar15 = (long *)std::__ndk1::__next_prime((ulong)plVar15);
      }
      else {
        uVar22 = NEON_cnt(plVar5,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_003c9530;
        if ((long *)0x1 < plVar15) {
          plVar15 = (long *)(1L << (-LZCOUNT((long)plVar15 - 1) & 0x3fU));
        }
      }
      if (plVar12 <= plVar15) {
        plVar12 = plVar15;
      }
      if (plVar12 < plVar5) {
        if (plVar12 != (long *)0x0) goto LAB_003c92d8;
        pvVar4 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
        }
        param_1[1] = 0;
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar5 & (long)plVar5 - 1U) == 0) {
      plVar15 = (long *)((ulong)((int)plVar5 - 1) & (ulong)plVar19);
    }
    else {
      plVar15 = plVar19;
      if (plVar5 <= plVar19) {
        uVar18 = 0;
        if (plVar5 != (long *)0x0) {
          uVar18 = (ulong)plVar19 / (ulong)plVar5;
        }
        plVar15 = (long *)((long)plVar19 - uVar18 * (long)plVar5);
      }
    }
  }
  lVar20 = *param_1;
  plVar19 = *(long **)(lVar20 + (long)plVar15 * 8);
  if (plVar19 == (long *)0x0) {
    plVar19 = param_1 + 2;
    lVar8 = *plVar19;
    *plVar19 = (long)plVar17;
    *plVar17 = lVar8;
    *(long **)(lVar20 + (long)plVar15 * 8) = plVar19;
    if (lVar8 == 0) goto LAB_003c94e4;
    plVar19 = *(long **)(lVar8 + 8);
    if (((ulong)plVar5 & (long)plVar5 - 1U) == 0) {
      plVar19 = (long *)((ulong)plVar19 & (long)plVar5 - 1U);
    }
    else if (plVar5 <= plVar19) {
      uVar18 = 0;
      if (plVar5 != (long *)0x0) {
        uVar18 = (ulong)plVar19 / (ulong)plVar5;
      }
      plVar19 = (long *)((long)plVar19 - uVar18 * (long)plVar5);
    }
    plVar19 = (long *)(*param_1 + (long)plVar19 * 8);
  }
  else {
    *plVar17 = *plVar19;
  }
  *plVar19 = (long)plVar17;
LAB_003c94e4:
  param_1[3] = param_1[3] + 1;
LAB_003c94f0:
  lVar20 = *param_3;
  *param_3 = 0;
  plVar5 = (long *)plVar17[3];
  plVar17[3] = lVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    return 0;
  }
  return 0;
LAB_003c8f94:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) goto LAB_003c9058;
  goto LAB_003c8f9c;
}


// ===== 003c9574  FUN_003c9574 =====

void FUN_003c9574(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003c9588  FUN_003c9588 =====

void FUN_003c9588(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003c959c  FUN_003c959c =====

void FUN_003c959c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003c95b0  rive::File::registerScripts =====

/* rive::File::registerScripts() */

void __thiscall rive::File::registerScripts(File *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ScriptedObject *pSVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar16 = *(undefined8 **)(this + 0x10);
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar16 == puVar1) {
    return;
  }
  puVar19 = (undefined8 *)0x0;
  puVar17 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x0;
  do {
    plVar15 = (long *)*puVar16;
    if (plVar15 != (long *)0x0) {
      FUN_00340fb0(1,plVar15 + 9);
    }
    uVar5 = (**(code **)(*plVar15 + 0x18))(plVar15,0x211);
    puVar13 = puVar17;
    puVar18 = puVar8;
    if ((uVar5 & 1) != 0) {
      if (puVar8 < puVar19) {
        puVar18 = puVar8 + 1;
        *puVar8 = plVar15;
      }
      else {
        lVar14 = (long)puVar8 - (long)puVar17 >> 3;
        uVar5 = lVar14 + 1;
        if (uVar5 >> 0x3d != 0) {
          FUN_003c984c();
LAB_003c9848:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        uVar9 = (long)puVar19 - (long)puVar17 >> 2;
        if (uVar9 <= uVar5) {
          uVar9 = uVar5;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puVar19 - (long)puVar17)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar9 >> 0x3d != 0) goto LAB_003c9848;
          pvVar6 = operator_new(uVar9 << 3);
        }
        puVar13 = (undefined8 *)((long)pvVar6 + lVar14 * 8);
        puVar18 = puVar13 + 1;
        *puVar13 = plVar15;
        if ((long)puVar8 - (long)puVar17 != 0) {
          uVar5 = ((long)puVar8 - (long)puVar17) - 8;
          if ((0x37 < uVar5) &&
             (0x1f < (ulong)((long)puVar8 + (-((long)puVar8 - (long)puVar17) - (long)pvVar6)))) {
            puVar19 = puVar13 + -2;
            puVar11 = puVar8 + -2;
            uVar5 = (uVar5 >> 3) + 1;
            uVar10 = uVar5 & 0x3ffffffffffffffc;
            puVar8 = puVar8 + -uVar10;
            uVar12 = uVar10;
            do {
              puVar3 = puVar11 + -1;
              uVar22 = puVar11[-2];
              uVar21 = puVar11[1];
              uVar20 = *puVar11;
              uVar12 = uVar12 - 4;
              puVar11 = puVar11 + -4;
              puVar19[-1] = *puVar3;
              puVar19[-2] = uVar22;
              puVar19[1] = uVar21;
              *puVar19 = uVar20;
              puVar19 = puVar19 + -4;
            } while (uVar12 != 0);
            puVar13 = puVar13 + -uVar10;
            if (uVar5 == uVar10) goto LAB_003c971c;
          }
          do {
            puVar8 = puVar8 + -1;
            puVar13 = puVar13 + -1;
            *puVar13 = *puVar8;
          } while (puVar8 != puVar17);
        }
LAB_003c971c:
        puVar19 = (undefined8 *)((long)pvVar6 + uVar9 * 8);
        if (puVar17 != (undefined8 *)0x0) {
          operator_delete(puVar17);
        }
      }
    }
    iVar4 = FUN_00340fe0(0xffffffff,plVar15 + 9);
    if (iVar4 == 1) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    puVar16 = puVar16 + 1;
    puVar17 = puVar13;
    puVar8 = puVar18;
  } while (puVar16 != puVar1);
  if (puVar13 == puVar18) goto LAB_003c9804;
  lVar14 = *(long *)(this + 0x110);
  puVar16 = puVar13;
  if (lVar14 == 0) {
    makeScriptingVM(this);
    lVar14 = *(long *)(this + 0x110);
    if (lVar14 != 0) goto LAB_003c9790;
  }
  else {
LAB_003c9790:
    do {
      plVar15 = (long *)*puVar16;
      uVar5 = (**(code **)(*plVar15 + 0xb0))(plVar15);
      if ((uVar5 & 1) != 0) {
        ScriptingContext::addModule
                  (*(ScriptingContext **)(lVar14 + 0x10),(ModuleDetails *)(plVar15 + 0x15));
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar18);
    ScriptingContext::performRegistration
              (*(ScriptingContext **)(lVar14 + 0x10),*(lua_State **)(lVar14 + 8));
  }
  plVar2 = *(long **)(this + 0x60);
  for (plVar15 = *(long **)(this + 0x58); plVar15 != plVar2; plVar15 = plVar15 + 1) {
    pSVar7 = *(ScriptedObject **)(*plVar15 + 0x18);
    if (((pSVar7 != (ScriptedObject *)0x0) && (*(long *)(pSVar7 + 0xd8) != 0)) &&
       (*(long *)(*(long *)(pSVar7 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar7);
    }
  }
LAB_003c9804:
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar13);
  return;
}


// ===== 003c984c  FUN_003c984c =====

void FUN_003c984c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003c9860  rive::File::makeScriptingVM =====

/* rive::File::makeScriptingVM() */

void __thiscall rive::File::makeScriptingVM(File *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ScriptingVM *pSVar6;
  ScriptingVM *this_00;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar6 = *(ScriptingVM **)(this + 0x110);
  *(undefined8 *)(this + 0x110) = 0;
  if ((pSVar6 != (ScriptingVM *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pSVar6), iVar3 == 1)) {
    ScriptingVM::~ScriptingVM(pSVar6);
    operator_delete(pSVar6);
  }
  plVar4 = (long *)operator_new(0xb8);
  lVar5 = *(long *)(this + 0x100);
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined2 *)(plVar4 + 4) = 0;
  plVar4[5] = 0;
  plVar4[6] = lVar5;
  *(undefined4 *)(plVar4 + 0xf) = 0x3f800000;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  *(undefined4 *)(plVar4 + 0x14) = 0x3f800000;
  puVar2 = PTR_vtable_0067d570;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x13] = 0;
  plVar4[0x12] = 0;
  plVar4[0x15] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[1] = 0;
  *(undefined4 *)(plVar4 + 0x16) = 200;
  pSVar6 = (ScriptingVM *)operator_new(0x18);
  local_40 = plVar4;
  ScriptingVM::ScriptingVM(pSVar6,&local_40);
  plVar4 = local_40;
  local_40 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  this_00 = *(ScriptingVM **)(this + 0x110);
  *(ScriptingVM **)(this + 0x110) = pSVar6;
  if ((this_00 != (ScriptingVM *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,this_00), iVar3 == 1)) {
    ScriptingVM::~ScriptingVM(this_00);
    operator_delete(this_00);
  }
  initializeLuaData(*(lua_State **)(*(long *)(this + 0x110) + 8),this + 0xa0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003c99a8  FUN_003c99a8 =====

void FUN_003c99a8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    param_2 = param_2 & 0xffff;
    uVar14 = NEON_cnt(uVar2,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar5 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar5 < 2) {
      uVar11 = (int)uVar2 - 1 & param_2;
    }
    else {
      uVar11 = param_2;
      if (uVar2 <= param_2) {
        uVar11 = 0;
        if (uVar2 != 0) {
          uVar11 = param_2 / uVar2;
        }
        uVar11 = param_2 - uVar11 * uVar2;
      }
    }
    lVar6 = *param_1;
    puVar7 = *(undefined8 **)(lVar6 + uVar11 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar7, plVar12 != (long *)0x0)) {
      uVar8 = uVar2 - 1;
      do {
        uVar9 = plVar12[1];
        if (uVar9 == param_2) {
          if ((uint)*(ushort *)(plVar12 + 2) == (uint)param_2) {
            if (uVar5 < 2) {
              param_2 = uVar8 & param_2;
            }
            else if (uVar2 <= param_2) {
              uVar11 = 0;
              if (uVar2 != 0) {
                uVar11 = param_2 / uVar2;
              }
              param_2 = param_2 - uVar11 * uVar2;
            }
            plVar3 = *(long **)(lVar6 + param_2 * 8);
            do {
              plVar10 = plVar3;
              plVar3 = (long *)*plVar10;
            } while ((long *)*plVar10 != plVar12);
            if (plVar10 != param_1 + 2) {
              uVar11 = plVar10[1];
              if (uVar5 < 2) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar2 <= uVar11) {
                uVar9 = 0;
                if (uVar2 != 0) {
                  uVar9 = uVar11 / uVar2;
                }
                uVar11 = uVar11 - uVar9 * uVar2;
              }
              if (uVar11 == param_2) goto LAB_003c9b0c;
            }
            if (*plVar12 != 0) {
              uVar11 = *(ulong *)(*plVar12 + 8);
              if (uVar5 < 2) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar2 <= uVar11) {
                uVar9 = 0;
                if (uVar2 != 0) {
                  uVar9 = uVar11 / uVar2;
                }
                uVar11 = uVar11 - uVar9 * uVar2;
              }
              if (uVar11 == param_2) goto LAB_003c9b0c;
            }
            *(undefined8 *)(lVar6 + param_2 * 8) = 0;
LAB_003c9b0c:
            lVar6 = *plVar12;
            if (lVar6 != 0) {
              uVar11 = *(ulong *)(lVar6 + 8);
              if (uVar5 < 2) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar2 <= uVar11) {
                uVar5 = 0;
                if (uVar2 != 0) {
                  uVar5 = uVar11 / uVar2;
                }
                uVar11 = uVar11 - uVar5 * uVar2;
              }
              if (uVar11 != param_2) {
                *(long **)(*param_1 + uVar11 * 8) = plVar10;
                lVar6 = *plVar12;
              }
            }
            lVar4 = param_1[3];
            *plVar10 = lVar6;
            plVar3 = (long *)plVar12[3];
            *plVar12 = 0;
            plVar12[3] = 0;
            param_1[3] = lVar4 + -1;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))(plVar3);
            }
            operator_delete(plVar12);
            return;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar8;
          }
          else if (uVar2 <= uVar9) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar9 / uVar2;
            }
            uVar9 = uVar9 - uVar1 * uVar2;
          }
          if (uVar9 != uVar11) {
            return;
          }
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  return;
}


// ===== 003c9b8c  FUN_003c9b8c =====

void FUN_003c9b8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003c9ba0  FUN_003c9ba0 =====

void FUN_003c9ba0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003c9bb4  FUN_003c9bb4 =====

void FUN_003c9bb4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  *(undefined2 *)(param_1 + 0xc) = 0xfffe;
  lVar1 = DAT_0024e7f0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = lVar1;
  param_1[0x21] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  puVar2 = PTR_vtable_0067d540;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x23] = (long)(puVar2 + 0xd8);
  return;
}


// ===== 003c9c2c  FUN_003c9c2c =====

void FUN_003c9c2c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xc) = 0xfffe;
  lVar1 = DAT_0024e7f0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = lVar1;
  param_1[0x21] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  puVar2 = PTR_vtable_0067d558;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x25] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x23] = (long)(puVar2 + 0xd8);
  param_1[0x24] = 0;
  return;
}


