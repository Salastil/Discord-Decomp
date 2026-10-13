// ===== 0034cd54  FUN_0034cd54 =====

long * FUN_0034cd54(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar14 = param_1[1] - *param_1;
  lVar11 = lVar14 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0034cef4();
LAB_0034cef0:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0034cef0;
    pvVar2 = operator_new(uVar5 << 3);
  }
  lVar7 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar15 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  plVar10 = plVar3 + 1;
  *plVar3 = lVar7;
  lVar11 = (long)plVar13 - (long)plVar15;
  if (lVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar10;
    param_1[2] = (ulong)pvVar1;
    goto LAB_0034cec8;
  }
  uVar6 = lVar11 - 8;
  plVar12 = plVar13;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar13 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar6 & 0xfffffffffffffff8)) + -8) < plVar13)))) {
LAB_0034ce70:
    do {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar11;
    } while (plVar12 != plVar15);
  }
  else {
    plVar8 = plVar3 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar4 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar13 + -uVar4;
    uVar5 = uVar4;
    do {
      plVar9 = plVar13 + -4;
      lVar16 = plVar13[-3];
      lVar7 = *plVar9;
      lVar14 = plVar13[-1];
      lVar11 = plVar13[-2];
      uVar5 = uVar5 - 4;
      plVar13[-3] = 0;
      *plVar9 = 0;
      plVar13[-1] = 0;
      plVar13[-2] = 0;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar7;
      plVar8[1] = lVar14;
      *plVar8 = lVar11;
      plVar8 = plVar8 + -4;
      plVar13 = plVar9;
    } while (uVar5 != 0);
    plVar3 = plVar3 + -uVar4;
    if (uVar6 != uVar4) goto LAB_0034ce70;
  }
  plVar13 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar10;
  param_1[2] = (ulong)pvVar1;
  while (plVar15 != plVar13) {
    plVar15 = plVar15 + -1;
    plVar3 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
LAB_0034cec8:
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar10;
}


// ===== 0034cef4  FUN_0034cef4 =====

void FUN_0034cef4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034cf08  rive::StateMachineInstance::clearDataContext =====

/* WARNING: Removing unreachable block (ram,0x0034d004) */
/* rive::StateMachineInstance::clearDataContext() */

void __thiscall rive::StateMachineInstance::clearDataContext(StateMachineInstance *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  
  if (*(long *)(this + 0xe8) != 0) {
    plVar10 = *(long **)(*(long *)(this + 0xe8) + 0x10);
    if (plVar10 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar10 + 0xa4);
      iVar3 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4);
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      plVar10 = *(long **)(*(long *)(this + 0xe8) + 0x10);
      if (plVar10 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar10 + 0xa4);
      }
      puVar6 = (undefined8 *)plVar10[0x1c];
      puVar9 = (undefined8 *)plVar10[0x1b];
      puVar7 = puVar9;
      for (; (puVar9 != puVar6 && (puVar7 = puVar9, (StateMachineInstance *)*puVar9 != this + 0x40))
          ; puVar9 = puVar9 + 1) {
        puVar7 = puVar6;
      }
      if ((puVar7 != puVar6) && (puVar9 = puVar7 + 1, puVar8 = puVar7, puVar9 != puVar6)) {
        do {
          puVar7 = puVar8;
          if ((StateMachineInstance *)*puVar9 != this + 0x40) {
            puVar7 = puVar8 + 1;
            *puVar8 = (StateMachineInstance *)*puVar9;
          }
          puVar9 = puVar9 + 1;
          puVar8 = puVar7;
        } while (puVar9 != puVar6);
        puVar6 = (undefined8 *)plVar10[0x1c];
      }
      if (puVar7 != puVar6) {
        plVar10[0x1c] = (long)puVar7;
      }
      iVar3 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4);
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
    lVar4 = *(long *)(this + 0xe8);
    *(undefined8 *)(this + 0xe8) = 0;
    if (lVar4 != 0) {
      FUN_003462d8();
    }
  }
  plVar2 = *(long **)(this + 0x1b8);
  for (plVar10 = *(long **)(this + 0x1b0); plVar10 != plVar2; plVar10 = plVar10 + 1) {
    lVar4 = *plVar10;
    plVar1 = *(long **)(lVar4 + 0x20);
    plVar11 = *(long **)(lVar4 + 0x28);
    while (plVar11 != plVar1) {
      plVar11 = plVar11 + -1;
      plVar5 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    *(long **)(lVar4 + 0x28) = plVar1;
  }
  return;
}


// ===== 0034d0a8  rive::StateMachineInstance::advance =====

/* rive::StateMachineInstance::advance(float, bool) */

void __thiscall
rive::StateMachineInstance::advance(StateMachineInstance *this,float param_1,bool param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  float *pfVar19;
  long *plVar20;
  int iVar21;
  float fVar22;
  undefined1 uStack_a1;
  long local_a0;
  undefined1 local_98;
  uint local_80;
  long local_78;
  undefined8 *puVar18;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (this[0x2c0] != *(StateMachineInstance *)(*(long *)(this + 0x10) + 0xc58)) {
    this[0x2c0] = *(StateMachineInstance *)(*(long *)(this + 0x10) + 0xc58);
    sortHitComponents(this);
  }
  if (param_2) {
    processFocusEvents(this);
    plVar12 = *(long **)(this + 0x360);
    plVar11 = *(long **)(this + 0x368);
    if (plVar12 != plVar11) {
      *(undefined8 *)(this + 0x360) = 0;
      *(undefined8 *)(this + 0x368) = 0;
      *(undefined8 *)(this + 0x370) = 0;
      plVar16 = plVar12;
      do {
        lVar8 = *plVar16;
        if ((lVar8 != 0) && (lVar10 = *(long *)(lVar8 + 0x10), lVar10 != 0)) {
          puVar14 = *(undefined8 **)(lVar10 + 0x38);
          local_98 = (undefined1)plVar16[1];
          local_80 = 8;
          puVar17 = *(undefined8 **)(lVar10 + 0x30);
          local_a0 = lVar8;
          if (*(undefined8 **)(lVar10 + 0x30) == puVar14) {
            uVar9 = 8;
          }
          else {
            do {
              puVar18 = puVar17 + 1;
              (**(code **)(*(long *)*puVar17 + 0x58))((long *)*puVar17,this,&local_a0);
              puVar17 = puVar18;
            } while (puVar18 != puVar14);
            uVar9 = (ulong)local_80;
            if (local_80 == 0xffffffff) goto LAB_0034d15c;
          }
          (*(code *)(&PTR_FUN_00667318)[uVar9])(&uStack_a1,&local_a0);
        }
LAB_0034d15c:
        plVar16 = plVar16 + 2;
      } while (plVar16 != plVar11);
      if (plVar12 != (long *)0x0) {
        operator_delete(plVar12);
      }
    }
    applyEvents(this);
    this[0x128] = (StateMachineInstance)0x0;
  }
  (*(code *)**(undefined8 **)(this + 0x40))(this + 0x40,0);
  if (*(long *)(this + 0x148) != 0) {
    uVar9 = 0;
    do {
      lVar8 = *(long *)(this + 0x150);
      if (param_2) {
        *(undefined1 *)(lVar8 + uVar9 * 0x68 + 0x54) = 0;
      }
      lVar10 = lVar8 + uVar9 * 0x68;
      plVar12 = (long *)(lVar8 + uVar9 * 0x68);
      plVar16 = (long *)(lVar10 + 0x20);
      (**(code **)(*(long *)*plVar16 + 0x10))(param_1,(long *)*plVar16,*plVar12);
      FUN_0034dee4(param_1,plVar12);
      plVar20 = (long *)(lVar10 + 0x28);
      plVar11 = (long *)*plVar20;
      pfVar19 = (float *)(lVar10 + 0x4c);
      bVar2 = false;
      if ((plVar11 != (long *)0x0) && (bVar2 = false, !NAN(*pfVar19))) {
        bVar2 = *pfVar19 < 1.0;
      }
      if (bVar2 && *(char *)(lVar10 + 0x49) == '\0') {
        (**(code **)(*plVar11 + 0x10))(param_1,plVar11,*plVar12);
      }
      FUN_0034e63c(plVar12);
      lVar13 = lVar8 + uVar9 * 0x68;
      lVar10 = *(long *)(lVar13 + 0x30);
      if ((lVar10 == 0) || (*plVar20 == 0)) {
LAB_0034d2f8:
        *(undefined1 *)(lVar13 + 0x55) = 0;
        uVar4 = FUN_0034d6b0(plVar12,*(undefined8 *)(lVar13 + 0x18));
        if (((uVar4 & 1) == 0) && (uVar4 = FUN_0034d6b0(plVar12,*plVar16), (uVar4 & 1) == 0))
        goto LAB_0034d3e4;
        FUN_0034e63c(plVar12);
        iVar21 = 100;
        do {
          lVar10 = *(long *)(lVar13 + 0x30);
          if ((lVar10 != 0) && (*plVar20 != 0)) {
            if (*(long *)(lVar13 + 0x38) != 0) {
              fVar22 = *(float *)(*(long *)(lVar13 + 0x38) + 0xc);
              if ((0.0 <= fVar22) && ((int)fVar22 != 0)) goto LAB_0034d378;
              goto LAB_0034d38c;
            }
            if (*(int *)(lVar10 + 0x48) == 0) goto LAB_0034d38c;
LAB_0034d378:
            if ((1.0 <= *pfVar19) || ((*(byte *)(lVar10 + 0x44) >> 5 & 1) != 0)) goto LAB_0034d38c;
LAB_0034d3b0:
            bVar2 = false;
            goto LAB_0034d3e8;
          }
LAB_0034d38c:
          *(undefined1 *)(lVar13 + 0x55) = 0;
          uVar4 = FUN_0034d6b0(plVar12,*(undefined8 *)(lVar13 + 0x18));
          if (((uVar4 & 1) == 0) && (uVar4 = FUN_0034d6b0(plVar12,*plVar16), (uVar4 & 1) == 0))
          goto LAB_0034d3b0;
          FUN_0034e63c(plVar12);
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        lVar10 = *plVar12;
        lVar13 = *(long *)(lVar10 + 0x120);
        if (lVar13 == 0) {
          pcVar5 = "[SM Not found]";
        }
        else {
          pcVar5 = (char *)(lVar13 + 0x11);
          if ((*(byte *)(lVar13 + 0x10) & 1) != 0) {
            pcVar5 = *(char **)(lVar13 + 0x20);
          }
        }
        lVar8 = *(long *)(lVar8 + uVar9 * 0x68 + 8);
        if (lVar8 == 0) {
          pcVar6 = "[LY Not found]";
          lVar8 = *(long *)(lVar10 + 0x10);
          if (lVar8 != 0) goto LAB_0034d45c;
LAB_0034d484:
          pcVar7 = "[AB Not found]";
        }
        else {
          pcVar6 = (char *)(lVar8 + 0x11);
          if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
            pcVar6 = *(char **)(lVar8 + 0x20);
          }
          lVar8 = *(long *)(lVar10 + 0x10);
          if (lVar8 == 0) goto LAB_0034d484;
LAB_0034d45c:
          pcVar7 = (char *)(lVar8 + 0x11);
          if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
            pcVar7 = *(char **)(lVar8 + 0x20);
          }
        }
        fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
                "%s StateMachine exceeded max iterations in layer %s on artboard %s\n",pcVar5,pcVar6
                ,pcVar7);
      }
      else {
        if (*(long *)(lVar13 + 0x38) != 0) {
          fVar22 = *(float *)(*(long *)(lVar13 + 0x38) + 0xc);
          if ((0.0 <= fVar22) && ((int)fVar22 != 0)) goto LAB_0034d2e4;
          goto LAB_0034d2f8;
        }
        if (*(int *)(lVar10 + 0x48) == 0) goto LAB_0034d2f8;
LAB_0034d2e4:
        if ((1.0 <= *pfVar19) || ((*(byte *)(lVar10 + 0x44) >> 5 & 1) != 0)) goto LAB_0034d2f8;
LAB_0034d3e4:
        bVar2 = true;
LAB_0034d3e8:
        (**(code **)(*(long *)*plVar16 + 0x28))();
        if ((((!bVar2) || (*pfVar19 != 1.0)) || (*(char *)(lVar13 + 0x55) != '\0')) ||
           (((long *)*plVar16 != (long *)0x0 &&
            (uVar4 = (**(code **)(*(long *)*plVar16 + 0x20))(), (uVar4 & 1) != 0)))) {
          this[0x128] = (StateMachineInstance)0x1;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulong *)(this + 0x148));
  }
  plVar11 = *(long **)(this + 0x48);
  plVar12 = *(long **)(this + 0x50);
  if (plVar12 != plVar11) {
    uVar15 = 0;
    do {
      lVar8 = *plVar11;
      plVar16 = *(long **)(lVar8 + 0x48);
      if (plVar16 == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if ((*(long *)(lVar8 + 0x38) != 0) && (*(char *)(lVar8 + 0x28) == '\0')) {
          uVar3 = (**(code **)(*plVar16 + 0x88))(param_1,plVar16);
        }
      }
      plVar11 = plVar11 + 1;
      uVar15 = uVar3 | uVar15;
    } while (plVar11 != plVar12);
    if ((uVar15 & 1) != 0) {
      this[0x128] = (StateMachineInstance)0x1;
    }
  }
  puVar17 = *(undefined8 **)(this + 0x138);
  for (puVar14 = *(undefined8 **)(this + 0x130); puVar17 != puVar14; puVar14 = puVar14 + 1) {
    (*(code *)**(undefined8 **)*puVar14)();
  }
  if ((this[0x128] == (StateMachineInstance)0x0) &&
     (*(long *)(this + 0xf0) == *(long *)(this + 0xf8))) {
    bVar2 = *(long *)(this + 0x1c8) != *(long *)(this + 0x1d0);
  }
  else {
    bVar2 = true;
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


// ===== 0034d59c  rive::StateMachineInstance::tryChangeState =====

/* rive::StateMachineInstance::tryChangeState() */

uint __thiscall rive::StateMachineInstance::tryChangeState(StateMachineInstance *this)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  
  (*(code *)**(undefined8 **)(this + 0x40))(this + 0x40,0);
  if (*(long *)(this + 0x148) == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    do {
      lVar8 = *(long *)(this + 0x150);
      lVar1 = lVar8 + lVar5;
      lVar2 = *(long *)(lVar1 + 0x30);
      if (lVar2 == 0 || *(long *)(lVar1 + 0x28) == 0) {
LAB_0034d674:
        *(undefined1 *)(lVar1 + 0x55) = 0;
        uVar4 = FUN_0034d6b0(lVar1,*(undefined8 *)(lVar1 + 0x18));
        if ((uVar4 & 1) == 0) {
          uVar3 = FUN_0034d6b0(lVar1,*(undefined8 *)(lVar8 + lVar5 + 0x20));
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        if (*(long *)(lVar1 + 0x38) != 0) {
          fVar9 = *(float *)(*(long *)(lVar1 + 0x38) + 0xc);
          if ((0.0 <= fVar9) && ((int)fVar9 != 0)) goto LAB_0034d654;
          goto LAB_0034d674;
        }
        if (*(int *)(lVar2 + 0x48) == 0) goto LAB_0034d674;
LAB_0034d654:
        if ((1.0 <= *(float *)(lVar8 + lVar5 + 0x4c)) || ((*(byte *)(lVar2 + 0x44) >> 5 & 1) != 0))
        goto LAB_0034d674;
        uVar3 = 0;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar3 | uVar7;
      lVar5 = lVar5 + 0x68;
    } while (uVar6 < *(ulong *)(this + 0x148));
  }
  return uVar7 & 1;
}


// ===== 0034d6b0  FUN_0034d6b0 =====

void FUN_0034d6b0(StateMachineLayerInstance *param_1,StateInstance *param_2,undefined8 param_3,
                 StateMachineLayerInstance *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 *puVar12;
  StateInstance *pSVar13;
  StateTransition *pSVar14;
  StateInstance *pSVar15;
  void *pvVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  vector *pvVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined8 local_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_2 != (StateInstance *)0x0) {
    lVar17 = *(long *)(param_2 + 8);
    pSVar13 = *(StateInstance **)(param_1 + 0x20);
    lVar11 = *(long *)(lVar17 + 0x50) - *(long *)(lVar17 + 0x48);
    uVar9 = lVar11 >> 3;
    if ((*(byte *)(lVar17 + 0x40) & 1) == 0) {
      if (lVar11 != 0) {
        uVar22 = 0;
        if (uVar9 < 2) {
          uVar9 = 1;
        }
LAB_0034d72c:
        if (uVar22 < (ulong)(*(long *)(lVar17 + 0x50) - *(long *)(lVar17 + 0x48) >> 3)) {
          pSVar14 = *(StateTransition **)(*(long *)(lVar17 + 0x48) + uVar22 * 8);
          lVar11 = *(long *)(param_1 + 0x20);
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else {
LAB_0034d758:
            lVar11 = *(long *)(lVar11 + 8);
          }
        }
        else {
          pSVar14 = (StateTransition *)0x0;
          lVar11 = *(long *)(param_1 + 0x20);
          if (lVar11 != 0) goto LAB_0034d758;
        }
        if (lVar11 == *(long *)(pSVar14 + 0x60)) goto LAB_0034d720;
        param_4 = param_1;
        cVar3 = rive::StateTransition::allowed
                          (pSVar14,param_2,*(StateMachineInstance **)param_1,param_1);
        if (cVar3 != '\x02') {
          *(undefined4 *)(pSVar14 + 0x68) = 0;
          if (cVar3 == '\x01') {
            param_1[0x55] = (StateMachineLayerInstance)0x1;
          }
          goto LAB_0034d720;
        }
        puVar12 = *(undefined8 **)(pSVar14 + 0x80);
        *(undefined4 *)(pSVar14 + 0x68) = *(undefined4 *)(pSVar14 + 0x58);
        if (*(undefined8 **)(pSVar14 + 0x78) != puVar12) {
          uVar6 = *(undefined8 *)param_1;
          puVar19 = *(undefined8 **)(pSVar14 + 0x78);
          do {
            puVar18 = puVar19 + 1;
            (**(code **)(*(long *)*puVar19 + 0x58))((long *)*puVar19,uVar6,param_1);
            puVar19 = puVar18;
          } while (puVar18 != puVar12);
LAB_0034d914:
          if (pSVar14 == (StateTransition *)0x0) goto LAB_0034d980;
        }
LAB_0034d918:
        FUN_0034dc60(param_1);
        FUN_0034a530(param_1,*(undefined8 *)(pSVar14 + 0x60));
        param_1[0x54] = (StateMachineLayerInstance)0x1;
        *(StateTransition **)(param_1 + 0x30) = pSVar14;
        uVar6 = rive::StateMachineInstance::findTransitionPropertyInstance
                          (*(StateMachineInstance **)param_1,pSVar14,0x9e);
        *(undefined8 *)(param_1 + 0x38) = uVar6;
        plVar1 = *(long **)(pSVar14 + 0x18);
        for (plVar7 = *(long **)(pSVar14 + 0x10); plVar7 != plVar1; plVar7 = plVar7 + 1) {
          plVar5 = (long *)*plVar7;
          if (*(int *)((long)plVar5 + 0xc) == 0) {
            (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)param_1);
          }
        }
        plVar1 = *(long **)(pSVar14 + 0x30);
        for (plVar7 = *(long **)(pSVar14 + 0x28); plVar7 != plVar1; plVar7 = plVar7 + 1) {
          plVar5 = (long *)*plVar7;
          if ((*(byte *)((long)plVar5 + 0xc) & 1) == 0) {
            local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
            local_80 = 6;
            (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)param_1,&local_a0);
            if (local_80 != 0xffffffff) {
              (*(code *)(&PTR_FUN_00667318)[local_80])(&local_a8,&local_a0);
            }
          }
        }
        uVar10 = SUB81(param_4,0);
        if (*(long *)(param_1 + 0x38) == 0) {
          if (*(int *)(*(long *)(param_1 + 0x30) + 0x48) != 0) goto LAB_0034db00;
LAB_0034da44:
          param_1[0x48] = (StateMachineLayerInstance)0x1;
          plVar1 = *(long **)(pSVar14 + 0x18);
          for (plVar7 = *(long **)(pSVar14 + 0x10); uVar10 = SUB81(param_4,0), plVar7 != plVar1;
              plVar7 = plVar7 + 1) {
            plVar5 = (long *)*plVar7;
            if (*(int *)((long)plVar5 + 0xc) == 1) {
              (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)param_1);
            }
          }
          plVar1 = *(long **)(pSVar14 + 0x30);
          for (plVar7 = *(long **)(pSVar14 + 0x28); plVar7 != plVar1; plVar7 = plVar7 + 1) {
            plVar5 = (long *)*plVar7;
            if ((*(byte *)((long)plVar5 + 0xc) & 1) != 0) {
              local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
              local_80 = 6;
              (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)param_1,&local_a0);
              if (local_80 != 0xffffffff) {
                (*(code *)(&PTR_FUN_00667318)[local_80])(&local_a8,&local_a0);
              }
            }
            uVar10 = SUB81(param_4,0);
          }
        }
        else {
          fVar23 = *(float *)(*(long *)(param_1 + 0x38) + 0xc);
          if ((fVar23 < 0.0) || ((int)fVar23 == 0)) goto LAB_0034da44;
LAB_0034db00:
          param_1[0x48] = (StateMachineLayerInstance)0x0;
        }
        plVar7 = *(long **)(param_1 + 0x28);
        if ((plVar7 != (long *)0x0) && (plVar7 != *(long **)(param_1 + 0x18))) {
          (**(code **)(*plVar7 + 8))();
        }
        *(StateInstance **)(param_1 + 0x28) = pSVar13;
        if (param_1[0x48] == (StateMachineLayerInstance)0x0) {
          pSVar15 = *(StateInstance **)(param_1 + 0x20);
          pvVar20 = *(vector **)(param_1 + 0x10);
          local_a0 = (void *)0x0;
          uStack_98 = 0;
          local_90 = 0;
          rive::AnimationResetFactory::fromState(pSVar13,(vector *)&local_a0);
          rive::AnimationResetFactory::fromState(pSVar15,(vector *)&local_a0);
          rive::AnimationResetFactory::fromAnimations
                    ((AnimationResetFactory *)&local_a0,pvVar20,(ArtboardInstance *)0x0,(bool)uVar10
                    );
          if (local_a0 != (void *)0x0) {
            operator_delete(local_a0);
          }
          pvVar16 = *(void **)(param_1 + 0x40);
          *(undefined8 *)(param_1 + 0x40) = local_a8;
          if (pvVar16 != (void *)0x0) {
            pvVar8 = *(void **)((long)pvVar16 + 0x48);
            if (pvVar8 != (void *)0x0) {
              *(void **)((long)pvVar16 + 0x50) = pvVar8;
              operator_delete(pvVar8);
            }
            (**(code **)(**(long **)((long)pvVar16 + 8) + 8))();
            operator_delete(pvVar16);
          }
        }
        if ((pSVar13 != (StateInstance *)0x0) &&
           (uVar9 = rive::StateTransition::applyExitCondition(pSVar14,pSVar13), (uVar9 & 1) != 0)) {
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x50);
        }
        *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x4c);
        if (*(float *)(param_1 + 0x4c) != 0.0) {
          param_1[0x49] = (StateMachineLayerInstance)((byte)pSVar14[0x44] >> 4 & 1);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar27 = 0;
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (plVar7 = *(long **)(*(long *)(param_1 + 0x28) + 8),
             uVar9 = (**(code **)(*plVar7 + 0x18))(plVar7,0x3d), (uVar9 & 1) != 0)) {
            uVar27 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x60);
          }
          (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                    (uVar27,*(long **)(param_1 + 0x20),*(undefined8 *)param_1);
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
        FUN_0034dee4(0,param_1);
        uVar6 = 1;
        param_1[0x55] = (StateMachineLayerInstance)0x0;
        goto LAB_0034d984;
      }
    }
    else if (lVar11 != 0) {
      uVar21 = 0;
      uVar22 = 0;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      do {
        if (uVar22 < (ulong)(*(long *)(lVar17 + 0x50) - *(long *)(lVar17 + 0x48) >> 3)) {
          pSVar14 = *(StateTransition **)(*(long *)(lVar17 + 0x48) + uVar22 * 8);
          lVar11 = *(long *)(param_1 + 0x20);
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else {
LAB_0034d7f8:
            lVar11 = *(long *)(lVar11 + 8);
          }
        }
        else {
          pSVar14 = (StateTransition *)0x0;
          lVar11 = *(long *)(param_1 + 0x20);
          if (lVar11 != 0) goto LAB_0034d7f8;
        }
        if (lVar11 == *(long *)(pSVar14 + 0x60)) {
          *(undefined4 *)(pSVar14 + 0x68) = 0;
        }
        else {
          param_4 = param_1;
          cVar3 = rive::StateTransition::allowed
                            (pSVar14,param_2,*(StateMachineInstance **)param_1,param_1);
          if (cVar3 == '\x02') {
            *(int *)(pSVar14 + 0x68) = *(int *)(pSVar14 + 0x58);
            uVar21 = *(int *)(pSVar14 + 0x58) + uVar21;
          }
          else {
            *(undefined4 *)(pSVar14 + 0x68) = 0;
            if (cVar3 == '\x01') {
              param_1[0x55] = (StateMachineLayerInstance)0x1;
            }
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar9 != uVar22);
      if (uVar21 != 0) {
        iVar4 = rand();
        puVar12 = *(undefined8 **)(lVar17 + 0x48);
        lVar11 = *(long *)(lVar17 + 0x50) - (long)puVar12;
        if (lVar11 != 0) {
          uVar9 = lVar11 >> 3;
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          dVar24 = (double)uVar21 * (double)((float)iVar4 / 2.1474836e+09);
          dVar25 = 0.0;
LAB_0034d880:
          pSVar14 = (StateTransition *)*puVar12;
          dVar26 = (double)NEON_ucvtf((ulong)*(uint *)(pSVar14 + 0x68));
          dVar25 = dVar25 + dVar26;
          if (dVar25 == dVar24 || dVar25 < dVar24 != (NAN(dVar25) || NAN(dVar24)))
          goto code_r0x0034d898;
          puVar12 = *(undefined8 **)(pSVar14 + 0x80);
          if (*(undefined8 **)(pSVar14 + 0x78) != puVar12) {
            uVar6 = *(undefined8 *)param_1;
            puVar19 = *(undefined8 **)(pSVar14 + 0x78);
            do {
              puVar18 = puVar19 + 1;
              (**(code **)(*(long *)*puVar19 + 0x58))((long *)*puVar19,uVar6,param_1);
              puVar19 = puVar18;
            } while (puVar18 != puVar12);
            goto LAB_0034d914;
          }
          goto LAB_0034d918;
        }
      }
    }
  }
LAB_0034d980:
  uVar6 = 0;
LAB_0034d984:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
code_r0x0034d898:
  uVar9 = uVar9 - 1;
  puVar12 = puVar12 + 1;
  if (uVar9 == 0) goto LAB_0034d980;
  goto LAB_0034d880;
LAB_0034d720:
  uVar22 = uVar22 + 1;
  if (uVar9 == uVar22) goto LAB_0034d980;
  goto LAB_0034d72c;
}


// ===== 0034dc60  FUN_0034dc60 =====

void FUN_0034dc60(long param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x40);
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    local_40 = pvVar3;
    rive::AnimationResetFactory::release(&local_40);
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
    pvVar3 = *(void **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (pvVar3 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar3 + 0x48);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar3 + 0x50) = pvVar2;
        operator_delete(pvVar2);
      }
      (**(code **)(**(long **)((long)pvVar3 + 8) + 8))();
      if (*(long *)(lVar1 + 0x28) == local_38) {
        operator_delete(pvVar3);
        return;
      }
      goto LAB_0034dd44;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0034dd44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034dd48  rive::StateMachineInstance::findTransitionPropertyInstance =====

/* rive::StateMachineInstance::findTransitionPropertyInstance(rive::StateTransition const*, unsigned
   int) const */

long __thiscall
rive::StateMachineInstance::findTransitionPropertyInstance
          (StateMachineInstance *this,StateTransition *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(ulong *)(this + 0x2a0);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar9 = NEON_cnt(uVar2,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar3 = ((ulong)param_1 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  uVar5 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
  if (uVar5 < 2) {
    uVar6 = uVar2 - 1 & uVar3;
  }
  else {
    uVar6 = uVar3;
    if (uVar2 <= uVar3) {
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = uVar3 / uVar2;
      }
      uVar6 = uVar3 - uVar6 * uVar2;
    }
  }
  plVar4 = *(long **)(*(long *)(this + 0x298) + uVar6 * 8);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  plVar4 = (long *)*plVar4;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  do {
    uVar7 = plVar4[1];
    if (uVar3 - uVar7 == 0) {
      if ((StateTransition *)plVar4[2] == param_1) {
        uVar2 = plVar4[4];
        if (uVar2 == 0) {
          return 0;
        }
        uVar5 = (ulong)param_2;
        uVar9 = NEON_cnt(uVar2,1);
        uVar8 = NEON_uaddlv(uVar9,1);
        uVar3 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
        if (uVar3 < 2) {
          uVar6 = (ulong)((int)uVar2 - 1U & param_2);
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
        plVar4 = *(long **)(plVar4[3] + uVar6 * 8);
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        do {
          uVar7 = plVar4[1];
          if (uVar7 == uVar5) {
            if (*(uint *)(plVar4 + 2) == param_2) {
              return plVar4[3];
            }
          }
          else {
            if (uVar3 < 2) {
              uVar7 = uVar7 & uVar2 - 1;
            }
            else if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar6) {
              return 0;
            }
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      if (uVar5 < 2) {
        uVar7 = uVar7 & uVar2 - 1;
      }
      else if (uVar2 <= uVar7) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar7 / uVar2;
        }
        uVar7 = uVar7 - uVar1 * uVar2;
      }
      if (uVar7 != uVar6) {
        return 0;
      }
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


// ===== 0034dee4  FUN_0034dee4 =====

void FUN_0034dee4(float param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uStack_81;
  undefined1 local_80 [32];
  uint local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar8 = param_2[6];
  if ((lVar8 != 0) && (param_2[5] != 0)) {
    if (param_2[7] == 0) {
      uVar10 = *(uint *)(lVar8 + 0x48);
    }
    else {
      fVar12 = *(float *)(param_2[7] + 0xc);
      if (fVar12 < 0.0) goto LAB_0034df3c;
      uVar10 = (uint)fVar12;
    }
    if (uVar10 != 0) {
      if ((*(byte *)(lVar8 + 0x44) >> 1 & 1) == 0) {
        fVar12 = (float)uVar10 / 1000.0;
        if (fVar12 == 0.0) goto LAB_0034e058;
LAB_0034df98:
        fVar12 = param_1 / fVar12 + *(float *)((long)param_2 + 0x4c);
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        fVar12 = (float)NEON_fminnm(fVar12,0x3f800000);
        *(float *)((long)param_2 + 0x4c) = fVar12;
        if (fVar12 != 1.0) goto LAB_0034df44;
        cVar3 = *(char *)(param_2 + 9);
      }
      else {
        plVar9 = *(long **)(param_2[5] + 8);
        uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,0x3d);
        fVar12 = 0.0;
        if (((uVar6 & 1) != 0) && (lVar8 = plVar9[0xd], lVar8 != 0)) {
          bVar5 = *(char *)(lVar8 + 0x40) != '\0';
          fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x38));
          puVar1 = (undefined4 *)(lVar8 + 0x2c);
          if (bVar5) {
            puVar1 = (undefined4 *)(lVar8 + 0x3c);
          }
          fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x28));
          fVar13 = (float)NEON_ucvtf(*puVar1);
          fVar14 = 0.0;
          if (bVar5) {
            fVar14 = fVar12;
          }
          fVar12 = ABS(fVar13 / fVar11 - fVar14 / fVar11);
        }
        fVar12 = ((float)uVar10 / 100.0) * fVar12;
        if (fVar12 != 0.0) goto LAB_0034df98;
LAB_0034e058:
        *(undefined4 *)((long)param_2 + 0x4c) = 0x3f800000;
        cVar3 = *(char *)(param_2 + 9);
      }
      if (cVar3 == '\0') {
        *(undefined1 *)(param_2 + 9) = 1;
        FUN_0034dc60(param_2);
        lVar8 = param_2[6];
        plVar9 = *(long **)(lVar8 + 0x10);
        plVar2 = *(long **)(lVar8 + 0x18);
        if (plVar9 != plVar2) {
          do {
            plVar7 = (long *)*plVar9;
            if (*(int *)((long)plVar7 + 0xc) == 1) {
              (**(code **)(*plVar7 + 0x58))(plVar7,*param_2);
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar2);
          lVar8 = param_2[6];
        }
        plVar2 = *(long **)(lVar8 + 0x30);
        for (plVar9 = *(long **)(lVar8 + 0x28); plVar9 != plVar2; plVar9 = plVar9 + 1) {
          plVar7 = (long *)*plVar9;
          if ((*(byte *)((long)plVar7 + 0xc) & 1) != 0) {
            local_80[0] = 0;
            local_60 = 6;
            (**(code **)(*plVar7 + 0x58))(plVar7,*param_2,local_80);
            if (local_60 != 0xffffffff) {
              (*(code *)(&PTR_FUN_00667318)[local_60])(&uStack_81,local_80);
            }
          }
        }
      }
      goto LAB_0034df44;
    }
  }
LAB_0034df3c:
  *(undefined4 *)((long)param_2 + 0x4c) = 0x3f800000;
LAB_0034df44:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034e134  rive::StateMachineInstance::processFocusEvents =====

/* rive::StateMachineInstance::processFocusEvents() */

void __thiscall rive::StateMachineInstance::processFocusEvents(StateMachineInstance *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 uStack_91;
  long local_90;
  undefined1 local_88;
  uint local_70;
  long local_68;
  undefined8 *puVar9;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x330);
  plVar6 = *(long **)(this + 0x338);
  if (plVar4 != plVar6) {
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    plVar7 = plVar4;
    do {
      plVar5 = *(long **)(*plVar7 + 0x10);
      if ((char)plVar7[1] == '\0') {
        uVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,0xe);
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,0xd);
      }
      if ((uVar3 & 1) != 0) {
        puVar1 = (undefined8 *)plVar5[7];
        local_90 = *plVar7;
        local_88 = (undefined1)plVar7[1];
        local_70 = 3;
        puVar8 = (undefined8 *)plVar5[6];
        if ((undefined8 *)plVar5[6] == puVar1) {
          uVar3 = 3;
        }
        else {
          do {
            puVar9 = puVar8 + 1;
            (**(code **)(*(long *)*puVar8 + 0x58))((long *)*puVar8,this,&local_90);
            puVar8 = puVar9;
          } while (puVar9 != puVar1);
          uVar3 = (ulong)local_70;
          if (local_70 == 0xffffffff) goto LAB_0034e1a8;
        }
        (*(code *)(&PTR_FUN_00667318)[uVar3])(&uStack_91,&local_90);
      }
LAB_0034e1a8:
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
    if (plVar4 != (long *)0x0) {
      operator_delete(plVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034e27c  rive::StateMachineInstance::applyEvents =====

/* rive::StateMachineInstance::applyEvents() */

void __thiscall rive::StateMachineInstance::applyEvents(StateMachineInstance *this)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  StateMachineInstance *pSVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  size_t sVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar17;
  size_t __n;
  long lVar18;
  undefined1 uStack_91;
  long local_90 [4];
  uint local_70;
  long local_68;
  undefined8 *puVar16;
  
  lVar7 = tpidr_el0;
  uVar8 = 0;
  local_68 = *(long *)(lVar7 + 0x28);
  pSVar9 = this;
  do {
    if ((*(long *)(this + 0xf8) == *(long *)(this + 0xf0)) &&
       (*(long *)(this + 0x1d0) == *(long *)(this + 0x1c8))) {
      if (99 < uVar8) goto LAB_0034e5b4;
LAB_0034e5fc:
      if (*(long *)(lVar7 + 0x28) == local_68) {
        return;
      }
      goto LAB_0034e638;
    }
    if (uVar8 == 100) {
LAB_0034e5b4:
      lVar18 = *(long *)(this + 0x120);
      lVar11 = *(long *)(this + 0x10);
      lVar17 = lVar18 + 0x11;
      if ((*(byte *)(lVar18 + 0x10) & 1) != 0) {
        lVar17 = *(long *)(lVar18 + 0x20);
      }
      lVar18 = lVar11 + 0x11;
      if ((*(byte *)(lVar11 + 0x10) & 1) != 0) {
        lVar18 = *(long *)(lVar11 + 0x20);
      }
      uVar8 = fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
                      "%s StateMachine exceeded max event iterationson artboard %s\n",lVar17,lVar18)
      ;
      pSVar9 = (StateMachineInstance *)(ulong)uVar8;
      goto LAB_0034e5fc;
    }
    (*(code *)**(undefined8 **)(this + 0x40))(this + 0x40,0);
    pvVar2 = *(void **)(this + 0xf0);
    pvVar4 = *(void **)(this + 0xf8);
    uVar10 = *(ulong *)(this + 0x118);
    pvVar12 = *(void **)(this + 0x108);
    lVar17 = (long)pvVar4 - (long)pvVar2;
    uVar14 = lVar17 >> 4;
    if ((ulong)((long)(uVar10 - (long)pvVar12) >> 4) < uVar14) {
      if (pvVar12 != (void *)0x0) {
        *(void **)(this + 0x110) = pvVar12;
        operator_delete(pvVar12);
        uVar10 = 0;
        *(undefined8 *)(this + 0x108) = 0;
        *(undefined8 *)(this + 0x110) = 0;
        *(undefined8 *)(this + 0x118) = 0;
      }
      if (uVar14 >> 0x3c == 0) {
        uVar1 = (long)uVar10 >> 3;
        if ((ulong)((long)uVar10 >> 3) <= uVar14) {
          uVar1 = uVar14;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c == 0) {
          pvVar12 = operator_new(uVar1 * 0x10);
          *(void **)(this + 0x108) = pvVar12;
          *(void **)(this + 0x110) = pvVar12;
          *(void **)(this + 0x118) = (void *)((long)pvVar12 + uVar1 * 0x10);
          if (pvVar4 != pvVar2) {
            memcpy(pvVar12,pvVar2,lVar17 - 4);
          }
          goto LAB_0034e3f8;
        }
      }
      FUN_00344408();
LAB_0034e634:
      pSVar9 = (StateMachineInstance *)FUN_00345a94();
LAB_0034e638:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pSVar9);
    }
    lVar18 = (long)*(void **)(this + 0x110) - (long)pvVar12;
    if ((ulong)(lVar18 >> 4) < uVar14) {
      if (*(void **)(this + 0x110) != pvVar12) {
        memmove(pvVar12,pvVar2,lVar18 - 4);
        pvVar12 = *(void **)(this + 0x110);
      }
      lVar17 = (long)pvVar4 - ((long)pvVar2 + lVar18);
      if (lVar17 != 0) {
        memmove(pvVar12,(void *)((long)pvVar2 + lVar18),lVar17 - 4);
      }
      lVar17 = (long)pvVar12 + lVar17;
    }
    else {
      if (pvVar4 != pvVar2) {
        memmove(pvVar12,pvVar2,lVar17 - 4);
      }
LAB_0034e3f8:
      lVar17 = (long)pvVar12 + lVar17;
    }
    pvVar2 = *(void **)(this + 0x1c8);
    pvVar4 = *(void **)(this + 0x1d0);
    uVar10 = *(ulong *)(this + 0x1f0);
    pvVar12 = *(void **)(this + 0x1e0);
    *(long *)(this + 0x110) = lVar17;
    sVar13 = (long)pvVar4 - (long)pvVar2;
    uVar14 = (long)sVar13 >> 3;
    if ((ulong)((long)(uVar10 - (long)pvVar12) >> 3) < uVar14) {
      if (pvVar12 != (void *)0x0) {
        *(void **)(this + 0x1e8) = pvVar12;
        operator_delete(pvVar12);
        uVar10 = 0;
        *(undefined8 *)(this + 0x1e0) = 0;
        *(undefined8 *)(this + 0x1e8) = 0;
        *(undefined8 *)(this + 0x1f0) = 0;
      }
      if (uVar14 >> 0x3d != 0) goto LAB_0034e634;
      uVar1 = (long)uVar10 >> 2;
      if ((ulong)((long)uVar10 >> 2) <= uVar14) {
        uVar1 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 >> 0x3d != 0) goto LAB_0034e634;
      pvVar12 = operator_new(uVar1 * 8);
      *(void **)(this + 0x1e0) = pvVar12;
      *(void **)(this + 0x1e8) = pvVar12;
      *(void **)(this + 0x1f0) = (void *)((long)pvVar12 + uVar1 * 8);
      if (pvVar4 != pvVar2) {
        memcpy(pvVar12,pvVar2,sVar13);
      }
LAB_0034e504:
      lVar17 = (long)pvVar12 + sVar13;
    }
    else {
      __n = (long)*(void **)(this + 0x1e8) - (long)pvVar12;
      if (uVar14 <= (ulong)((long)__n >> 3)) {
        if (pvVar4 != pvVar2) {
          memmove(pvVar12,pvVar2,sVar13);
        }
        goto LAB_0034e504;
      }
      if (*(void **)(this + 0x1e8) != pvVar12) {
        memmove(pvVar12,pvVar2,__n);
        pvVar12 = *(void **)(this + 0x1e8);
      }
      sVar13 = (long)pvVar4 - (long)((long)pvVar2 + __n);
      if (sVar13 != 0) {
        memmove(pvVar12,(void *)((long)pvVar2 + __n),sVar13);
      }
      lVar17 = (long)pvVar12 + sVar13;
    }
    *(long *)(this + 0x1e8) = lVar17;
    *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0xf0);
    uVar8 = uVar8 + 1;
    *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x1c8);
    pSVar9 = (StateMachineInstance *)notifyEventListeners(this,this + 0x108,(NestedArtboard *)0x0);
    plVar5 = *(long **)(this + 0x1e8);
    for (plVar3 = *(long **)(this + 0x1e0); plVar5 != plVar3; plVar3 = plVar3 + 1) {
      local_90[0] = *plVar3;
      local_70 = 5;
      puVar15 = *(undefined8 **)(*(long *)(local_90[0] + 0x10) + 0x30);
      puVar6 = *(undefined8 **)(*(long *)(local_90[0] + 0x10) + 0x38);
      if (puVar15 == puVar6) {
        uVar10 = 5;
LAB_0034e544:
        pSVar9 = (StateMachineInstance *)(*(code *)(&PTR_FUN_00667318)[uVar10])(&uStack_91,local_90)
        ;
      }
      else {
        do {
          puVar16 = puVar15 + 1;
          pSVar9 = (StateMachineInstance *)
                   (**(code **)(*(long *)*puVar15 + 0x58))((long *)*puVar15,this,local_90);
          puVar15 = puVar16;
        } while (puVar16 != puVar6);
        uVar10 = (ulong)local_70;
        if (local_70 != 0xffffffff) goto LAB_0034e544;
      }
    }
  } while( true );
}


// ===== 0034e63c  FUN_0034e63c =====

void FUN_0034e63c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Core *pCVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  if (*(AnimationReset **)(param_1 + 0x40) != (AnimationReset *)0x0) {
    rive::AnimationReset::apply(*(AnimationReset **)(param_1 + 0x40),*(Artboard **)(param_1 + 0x10))
    ;
  }
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 != 0) {
    fVar11 = *(float *)(param_1 + 0x60);
    if (*(char *)(lVar6 + 0x41) != '\0') {
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x28));
      fVar11 = (float)(int)(fVar11 * fVar9) / fVar9;
    }
    plVar5 = *(long **)(lVar6 + 0x48);
    plVar8 = *(long **)(lVar6 + 0x50);
    if (plVar5 != plVar8) {
      plVar7 = *(long **)(param_1 + 0x10);
      fVar9 = *(float *)(param_1 + 0x50);
      do {
        lVar6 = *plVar5;
        pCVar4 = (Core *)(**(code **)(*plVar7 + 0x348))(plVar7,*(undefined4 *)(lVar6 + 0xc));
        if (pCVar4 != (Core *)0x0) {
          puVar2 = *(undefined8 **)(lVar6 + 0x18);
          for (puVar1 = *(undefined8 **)(lVar6 + 0x10); puVar1 != puVar2; puVar1 = puVar1 + 1) {
            iVar3 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
            if (iVar3 < 0x365) {
              if ((iVar3 != 0x18b) && (iVar3 != 0x191)) {
LAB_0034e6e8:
                rive::KeyedProperty::apply
                          ((KeyedProperty *)*puVar1,pCVar4,fVar11,fVar9,
                           (LinearAnimationInstance *)0x0);
              }
            }
            else if ((iVar3 != 0x365) && (iVar3 != 0x3f8)) goto LAB_0034e6e8;
          }
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar8);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    plVar5 = *(long **)(param_1 + 0x28);
    if ((plVar5 == (long *)0x0) || (1.0 <= *(float *)(param_1 + 0x4c))) {
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) {
        return;
      }
      goto LAB_0034e7f0;
    }
LAB_0034e7a8:
    uVar10 = *(undefined4 *)(param_1 + 0x50);
    plVar8 = (long *)0x0;
LAB_0034e7b0:
    (**(code **)(*plVar5 + 0x18))(uVar10,plVar5,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    plVar8 = *(long **)(*(long *)(param_1 + 0x30) + 0x70);
    plVar5 = *(long **)(param_1 + 0x28);
    if ((plVar5 != (long *)0x0) && (*(float *)(param_1 + 0x4c) < 1.0)) {
      if (plVar8 == (long *)0x0) goto LAB_0034e7a8;
      uVar10 = (**(code **)(*plVar8 + 0x58))(*(undefined4 *)(param_1 + 0x50),plVar8);
      plVar5 = *(long **)(param_1 + 0x28);
      goto LAB_0034e7b0;
    }
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x58))(*(undefined4 *)(param_1 + 0x4c),plVar8);
    plVar5 = *(long **)(param_1 + 0x20);
  }
LAB_0034e7f0:
                    /* WARNING: Could not recover jumptable at 0x0034e814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0034e834  rive::StateMachineInstance::~StateMachineInstance =====

/* rive::StateMachineInstance::~StateMachineInstance() */

void __thiscall rive::StateMachineInstance::~StateMachineInstance(StateMachineInstance *this)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  long local_50;
  long local_48;
  
  puVar4 = PTR_vtable_0067ced0;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_vtable_0067ced0 + 0xe0;
  *(undefined **)this = PTR_vtable_0067ced0 + 0x10;
  *(undefined **)(this + 8) = puVar1;
  *(undefined **)(this + 0x38) = puVar4 + 0x110;
  *(undefined **)(this + 0x40) = puVar4 + 0x138;
  if ((*(long *)(this + 0x2e8) == 0) && (*(Artboard **)(this + 0x10) != (Artboard *)0x0)) {
    Artboard::cleanupFocusTree(*(Artboard **)(this + 0x10));
  }
  if (((*(long *)(this + 0x328) == 0) && (*(long *)(this + 800) != 0)) &&
     (*(Artboard **)(this + 0x10) != (Artboard *)0x0)) {
    Artboard::cleanupSemanticTree(*(Artboard **)(this + 0x10));
  }
  clearDataContext(this);
  puVar2 = *(undefined8 **)(this + 0x50);
  for (puVar12 = *(undefined8 **)(this + 0x48); puVar12 != puVar2; puVar12 = puVar12 + 1) {
    (**(code **)(*(long *)*puVar12 + 0x80))();
  }
  plVar6 = *(long **)(this + 0x130);
  plVar9 = *(long **)(this + 0x138);
  *(undefined8 *)(this + 0xd8) = 0;
  for (; plVar6 != plVar9; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 0x10))();
    }
  }
  plVar9 = *(long **)(this + 0x178);
  for (plVar6 = *(long **)(this + 0x170); plVar6 != plVar9; plVar6 = plVar6 + 1) {
    plVar5 = (long *)*plVar6;
    *plVar6 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar9 = *(long **)(this + 0x50);
  for (plVar6 = *(long **)(this + 0x48); plVar6 != plVar9; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  }
  lVar10 = *(long *)(this + 0x150);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + -8);
    if (lVar11 != 0) {
      lVar15 = lVar10 + -0x50;
      lVar11 = lVar11 * 0x68;
      do {
        if (*(long **)(lVar15 + lVar11) != (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + lVar11) + 8))();
        }
        plVar6 = *(long **)(lVar15 + lVar11 + 8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        plVar6 = *(long **)(lVar15 + lVar11 + 0x10);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        pvVar13 = *(void **)(lVar15 + lVar11 + 0x28);
        *(undefined8 *)(lVar15 + lVar11 + 0x28) = 0;
        if (pvVar13 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar13 + 0x48);
          if (pvVar7 != (void *)0x0) {
            *(void **)((long)pvVar13 + 0x50) = pvVar7;
            operator_delete(pvVar7);
          }
          (**(code **)(**(long **)((long)pvVar13 + 8) + 8))();
          operator_delete(pvVar13);
        }
        lVar11 = lVar11 + -0x68;
      } while (lVar11 != 0);
    }
    operator_delete__((long *)(lVar10 + -8));
  }
  for (plVar6 = *(long **)(this + 0x208); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if ((long *)plVar6[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[3] + 8))();
    }
  }
  for (plVar6 = *(long **)(this + 0x2a8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    for (plVar9 = (long *)plVar6[5]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if ((long *)plVar9[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[3] + 8))();
      }
    }
  }
  if (*(long *)(this + 0x2b0) != 0) {
    puVar12 = (undefined8 *)*(void **)(this + 0x2a8);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar13 = (void *)*puVar12;
      puVar2 = (undefined8 *)puVar12[5];
      while (puVar2 != (undefined8 *)0x0) {
        pvVar7 = (void *)*puVar2;
        operator_delete(puVar2);
        puVar2 = (undefined8 *)pvVar7;
      }
      pvVar7 = (void *)puVar12[3];
      puVar12[3] = 0;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar13;
    }
    lVar10 = *(long *)(this + 0x2a0);
    *(undefined8 *)(this + 0x2a8) = 0;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x298) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
    }
    *(undefined8 *)(this + 0x2b0) = 0;
  }
  plVar9 = *(long **)(this + 0x1b8);
  for (plVar6 = *(long **)(this + 0x1b0); plVar6 != plVar9; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  }
  if (*(long *)(this + 0x210) != 0) {
    puVar12 = (undefined8 *)*(void **)(this + 0x208);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar13 = (void *)*puVar12;
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar13;
    }
    lVar10 = *(long *)(this + 0x200);
    *(undefined8 *)(this + 0x208) = 0;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x1f8) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
    }
    *(undefined8 *)(this + 0x210) = 0;
  }
  for (plVar6 = *(long **)(this + 0x230); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if ((long *)plVar6[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[3] + 8))();
    }
    plVar6[3] = 0;
  }
  if (*(long *)(this + 0x238) != 0) {
    puVar12 = (undefined8 *)*(void **)(this + 0x230);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar13 = (void *)*puVar12;
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar13;
    }
    lVar10 = *(long *)(this + 0x228);
    *(undefined8 *)(this + 0x230) = 0;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x220) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
    }
    *(undefined8 *)(this + 0x238) = 0;
  }
  pvVar13 = *(void **)(this + 0x360);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x368) = pvVar13;
    operator_delete(pvVar13);
  }
  plVar6 = *(long **)(this + 0x348);
  if (plVar6 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x350);
    plVar9 = plVar6;
    if (plVar5 != plVar6) {
      do {
        plVar5 = plVar5 + -1;
        plVar9 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
      } while (plVar5 != plVar6);
      plVar9 = *(long **)(this + 0x348);
    }
    *(long **)(this + 0x350) = plVar6;
    operator_delete(plVar9);
  }
  pvVar13 = *(void **)(this + 0x330);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x338) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 800);
  *(undefined8 *)(this + 800) = 0;
  if (pvVar13 != (void *)0x0) {
    puVar12 = (undefined8 *)*(void **)((long)pvVar13 + 0x1c8);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar12;
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar7;
    }
    pvVar7 = *(void **)((long)pvVar13 + 0x1b8);
    *(undefined8 *)((long)pvVar13 + 0x1b8) = 0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    puVar12 = (undefined8 *)*(void **)((long)pvVar13 + 0x1a0);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar12;
      if ((*(byte *)(puVar12 + 3) & 1) != 0) {
        operator_delete((void *)puVar12[5]);
      }
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar7;
    }
    pvVar7 = *(void **)((long)pvVar13 + 400);
    *(undefined8 *)((long)pvVar13 + 400) = 0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    puVar12 = (undefined8 *)*(void **)((long)pvVar13 + 0x178);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar12;
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar7;
    }
    pvVar7 = *(void **)((long)pvVar13 + 0x168);
    *(undefined8 *)((long)pvVar13 + 0x168) = 0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    puVar12 = (undefined8 *)*(void **)((long)pvVar13 + 0x150);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar12;
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar7;
    }
    pvVar7 = *(void **)((long)pvVar13 + 0x140);
    *(undefined8 *)((long)pvVar13 + 0x140) = 0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    puVar12 = (undefined8 *)*(void **)((long)pvVar13 + 0x128);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar12;
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar7;
    }
    pvVar7 = *(void **)((long)pvVar13 + 0x118);
    *(undefined8 *)((long)pvVar13 + 0x118) = 0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    pvVar7 = *(void **)((long)pvVar13 + 0x100);
    if (pvVar7 != (void *)0x0) {
      pvVar14 = *(void **)((long)pvVar13 + 0x108);
      pvVar8 = pvVar7;
      if (pvVar14 != pvVar7) {
        do {
          pvVar14 = (void *)((long)pvVar14 + -8);
          FUN_0034f1d0(pvVar14);
        } while (pvVar14 != pvVar7);
        pvVar8 = *(void **)((long)pvVar13 + 0x100);
      }
      *(void **)((long)pvVar13 + 0x108) = pvVar7;
      operator_delete(pvVar8);
    }
    puVar12 = (undefined8 *)*(void **)((long)pvVar13 + 0xe8);
    while (puVar12 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar12;
      FUN_0034f1d0(puVar12 + 3);
      operator_delete(puVar12);
      puVar12 = (undefined8 *)pvVar7;
    }
    pvVar7 = *(void **)((long)pvVar13 + 0xd8);
    *(undefined8 *)((long)pvVar13 + 0xd8) = 0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    local_50 = (long)pvVar13 + 0xb0;
    FUN_0034f2a4(&local_50);
    pvVar7 = *(void **)((long)pvVar13 + 0x98);
    if (pvVar7 != (void *)0x0) {
      *(void **)((long)pvVar13 + 0xa0) = pvVar7;
      operator_delete(pvVar7);
    }
    local_50 = (long)pvVar13 + 0x80;
    FUN_0034f2a4(&local_50);
    pvVar7 = *(void **)((long)pvVar13 + 0x68);
    if (pvVar7 != (void *)0x0) {
      pvVar14 = *(void **)((long)pvVar13 + 0x70);
      pvVar8 = pvVar7;
      if (pvVar14 != pvVar7) {
        do {
          pvVar8 = *(void **)((long)pvVar14 + -0x18);
          if (pvVar8 != (void *)0x0) {
            *(void **)((long)pvVar14 + -0x10) = pvVar8;
            operator_delete(pvVar8);
          }
          pvVar14 = (void *)((long)pvVar14 + -0x20);
        } while (pvVar14 != pvVar7);
        pvVar8 = *(void **)((long)pvVar13 + 0x68);
      }
      *(void **)((long)pvVar13 + 0x70) = pvVar7;
      operator_delete(pvVar8);
    }
    local_50 = (long)pvVar13 + 0x50;
    FUN_0034f2a4(&local_50);
    local_50 = (long)pvVar13 + 0x38;
    FUN_0034f2a4(&local_50);
    pvVar7 = *(void **)((long)pvVar13 + 0x20);
    if (pvVar7 != (void *)0x0) {
      *(void **)((long)pvVar13 + 0x28) = pvVar7;
      operator_delete(pvVar7);
    }
    operator_delete(pvVar13);
  }
  plVar6 = *(long **)(this + 0x308);
  if (plVar6 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x310);
    plVar9 = plVar6;
    if (plVar5 != plVar6) {
      do {
        plVar5 = plVar5 + -1;
        plVar9 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
      } while (plVar5 != plVar6);
      plVar9 = *(long **)(this + 0x308);
    }
    *(long **)(this + 0x310) = plVar6;
    operator_delete(plVar9);
  }
  plVar6 = *(long **)(this + 0x2f0);
  if (plVar6 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x2f8);
    plVar9 = plVar6;
    if (plVar5 != plVar6) {
      do {
        plVar5 = plVar5 + -1;
        plVar9 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
      } while (plVar5 != plVar6);
      plVar9 = *(long **)(this + 0x2f0);
    }
    *(long **)(this + 0x2f8) = plVar6;
    operator_delete(plVar9);
  }
  FocusManager::~FocusManager((FocusManager *)(this + 0x2c8));
  puVar12 = (undefined8 *)*(void **)(this + 0x2a8);
  while (puVar12 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar12;
    puVar2 = (undefined8 *)puVar12[5];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar7;
    }
    pvVar7 = (void *)puVar12[3];
    puVar12[3] = 0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    operator_delete(puVar12);
    puVar12 = (undefined8 *)pvVar13;
  }
  pvVar13 = *(void **)(this + 0x298);
  *(undefined8 *)(this + 0x298) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar12 = (undefined8 *)*(void **)(this + 0x280);
  while (puVar12 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar12;
    operator_delete(puVar12);
    puVar12 = (undefined8 *)pvVar13;
  }
  pvVar13 = *(void **)(this + 0x270);
  *(undefined8 *)(this + 0x270) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar12 = (undefined8 *)*(void **)(this + 600);
  while (puVar12 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar12;
    operator_delete(puVar12);
    puVar12 = (undefined8 *)pvVar13;
  }
  pvVar13 = *(void **)(this + 0x248);
  *(undefined8 *)(this + 0x248) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar12 = (undefined8 *)*(void **)(this + 0x230);
  while (puVar12 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar12;
    operator_delete(puVar12);
    puVar12 = (undefined8 *)pvVar13;
  }
  pvVar13 = *(void **)(this + 0x220);
  *(undefined8 *)(this + 0x220) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar12 = (undefined8 *)*(void **)(this + 0x208);
  while (puVar12 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar12;
    operator_delete(puVar12);
    puVar12 = (undefined8 *)pvVar13;
  }
  pvVar13 = *(void **)(this + 0x1f8);
  *(undefined8 *)(this + 0x1f8) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x1e0);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x1e8) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x1c8);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x1d0) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x1b0);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x1b8) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x198);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x1a0) = pvVar13;
    operator_delete(pvVar13);
  }
  plVar6 = *(long **)(this + 0x170);
  if (plVar6 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x178);
    plVar9 = plVar6;
    if (plVar5 != plVar6) {
      do {
        plVar5 = plVar5 + -1;
        plVar9 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
      } while (plVar5 != plVar6);
      plVar9 = *(long **)(this + 0x170);
    }
    *(long **)(this + 0x178) = plVar6;
    operator_delete(plVar9);
  }
  plVar6 = *(long **)(this + 0x158);
  if (plVar6 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x160);
    plVar9 = plVar6;
    if (plVar5 != plVar6) {
      do {
        plVar5 = plVar5 + -1;
        plVar9 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
      } while (plVar5 != plVar6);
      plVar9 = *(long **)(this + 0x158);
    }
    *(long **)(this + 0x160) = plVar6;
    operator_delete(plVar9);
  }
  pvVar13 = *(void **)(this + 0x130);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x138) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x108);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x110) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0xf0);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar13;
    operator_delete(pvVar13);
  }
  if (*(long *)(this + 0xe8) != 0) {
    FUN_003462d8();
  }
  pvVar13 = *(void **)(this + 0xc0);
  *(undefined **)(this + 0x40) = PTR_vtable_0067cef0 + 0x10;
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 200) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0xa8);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0xb0) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x90);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x78);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x60);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x48);
  if (pvVar13 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar13;
    operator_delete(pvVar13);
  }
  pvVar13 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)(this + 0x28) = pvVar13;
  if (pvVar13 == (void *)0x0) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_48) {
    operator_delete(pvVar13);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034f1d0  FUN_0034f1d0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0034f1d0(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pvVar4), iVar2 == 1)) {
    if ((*(byte *)((long)pvVar4 + 0x60) & 1) == 0) {
      bVar1 = *(byte *)((long)pvVar4 + 0x48);
    }
    else {
      operator_delete(*(void **)((long)pvVar4 + 0x70));
      bVar1 = *(byte *)((long)pvVar4 + 0x48);
    }
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)((long)pvVar4 + 0x30);
    }
    else {
      operator_delete(*(void **)((long)pvVar4 + 0x58));
      bVar1 = *(byte *)((long)pvVar4 + 0x30);
    }
    if ((bVar1 & 1) == 0) {
      pvVar6 = *(void **)((long)pvVar4 + 0x10);
    }
    else {
      operator_delete(*(void **)((long)pvVar4 + 0x40));
      pvVar6 = *(void **)((long)pvVar4 + 0x10);
    }
    if (pvVar6 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar4 + 0x18);
      pvVar3 = pvVar6;
      if (pvVar5 != pvVar6) {
        do {
          pvVar5 = (void *)((long)pvVar5 + -8);
          FUN_0034f1d0(pvVar5);
        } while (pvVar5 != pvVar6);
        pvVar3 = *(void **)((long)pvVar4 + 0x10);
      }
      *(void **)((long)pvVar4 + 0x18) = pvVar6;
      operator_delete(pvVar3);
    }
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 0034f2a4  FUN_0034f2a4 =====

void FUN_0034f2a4(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  
  puVar3 = (undefined8 *)*param_1;
  pvVar4 = (void *)*puVar3;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar5 = (void *)puVar3[1];
  pvVar2 = pvVar4;
  if (pvVar5 != pvVar4) {
    do {
      if ((*(byte *)((long)pvVar5 + -0x40) & 1) == 0) {
        if ((*(byte *)((long)pvVar5 + -0x58) & 1) == 0) goto LAB_0034f2f4;
LAB_0034f310:
        operator_delete(*(void **)((long)pvVar5 + -0x48));
        bVar1 = *(byte *)((long)pvVar5 + -0x70);
      }
      else {
        operator_delete(*(void **)((long)pvVar5 + -0x30));
        if ((*(byte *)((long)pvVar5 + -0x58) & 1) != 0) goto LAB_0034f310;
LAB_0034f2f4:
        bVar1 = *(byte *)((long)pvVar5 + -0x70);
      }
      if ((bVar1 & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -0x60));
      }
      pvVar5 = (void *)((long)pvVar5 + -0x78);
    } while (pvVar5 != pvVar4);
    pvVar2 = *(void **)*param_1;
  }
  puVar3[1] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 0034f358  rive::StateMachineInstance::initScriptedObjects =====

/* rive::StateMachineInstance::initScriptedObjects() */

void __thiscall rive::StateMachineInstance::initScriptedObjects(StateMachineInstance *this)

{
  ScriptedObject *this_00;
  ScriptedObject *pSVar1;
  long *plVar2;
  
  for (plVar2 = *(long **)(this + 0x230); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    this_00 = (ScriptedObject *)plVar2[3];
    pSVar1 = *(ScriptedObject **)(this_00 + 8);
    if (pSVar1 != (ScriptedObject *)0x0) {
      if (((this_00[0x71] == (ScriptedObject)0x0) && (*(long *)(pSVar1 + 0xd8) != 0)) &&
         (*(long *)(*(long *)(pSVar1 + 0xd8) + 0x110) != 0)) {
        ScriptAsset::initScriptedObjectWith(pSVar1);
      }
      ScriptedObject::hydrateScriptInputs(this_00);
    }
  }
  return;
}


// ===== 0034f3c0  rive::StateMachineInstance::scriptedObject =====

/* rive::StateMachineInstance::scriptedObject(rive::ScriptedObject const*) const */

long __thiscall
rive::StateMachineInstance::scriptedObject(StateMachineInstance *this,ScriptedObject *param_1)

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
  
  uVar2 = *(ulong *)(this + 0x228);
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
    plVar6 = *(long **)(*(long *)(this + 0x220) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if ((ScriptedObject *)plVar6[2] == param_1) {
            return plVar6[3];
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


// ===== 0034f4ac  rive::StateMachineInstance::unbind =====

/* rive::StateMachineInstance::unbind() */

void __thiscall rive::StateMachineInstance::unbind(StateMachineInstance *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  clearDataContext(this);
  puVar1 = *(undefined8 **)(this + 0x50);
  for (puVar2 = *(undefined8 **)(this + 0x48); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x80))();
  }
  *(undefined8 *)(this + 0xd8) = 0;
  return;
}


// ===== 0034f4fc  rive::StateMachineInstance::dispose =====

/* rive::StateMachineInstance::dispose() */

void rive::StateMachineInstance::dispose(void)

{
  (*(code *)PTR_removeEventListeners_0067f158)();
  return;
}


// ===== 0034f500  rive::StateMachineInstance::removeEventListeners =====

/* WARNING: Removing unreachable block (ram,0x0034f6d0) */
/* rive::StateMachineInstance::removeEventListeners() */

void __thiscall rive::StateMachineInstance::removeEventListeners(StateMachineInstance *this)

{
  StateMachineInstance *pSVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  void *__src;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 uStack_e1;
  long alStack_e0 [4];
  uint uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  lVar5 = *(long *)(this + 0x10);
  if (lVar5 != 0) {
    __src = *(void **)(lVar5 + 0xb18);
    uVar7 = *(long *)(lVar5 + 0xb20) - (long)__src;
    if (uVar7 != 0) {
      if (-1 < (long)uVar7) {
        plVar3 = (long *)operator_new(uVar7);
        memcpy(plVar3,__src,uVar7);
        pSVar1 = this + 0x38;
        plVar12 = plVar3;
        do {
          lVar5 = *plVar12;
          if (lVar5 != 0) {
            puVar2 = *(undefined8 **)(lVar5 + 0x1d8);
            for (puVar13 = *(undefined8 **)(lVar5 + 0x1d0); puVar2 != puVar13; puVar13 = puVar13 + 1
                ) {
              plVar11 = (long *)*puVar13;
              if (plVar11 != (long *)0x0) {
                uVar4 = (**(code **)(*plVar11 + 0x18))(plVar11,0x5f);
                if ((uVar4 & 1) == 0) {
                  uVar4 = (**(code **)(*plVar11 + 0x18))(plVar11,0x61);
                  if (((uVar4 & 1) != 0) && (lVar5 = plVar11[0x15], lVar5 != 0)) {
                    puVar6 = *(undefined8 **)(lVar5 + 0x28);
                    puVar10 = *(undefined8 **)(lVar5 + 0x20);
                    puVar8 = puVar10;
                    for (; (puVar10 != puVar6 &&
                           (puVar8 = puVar10, (StateMachineInstance *)*puVar10 != pSVar1));
                        puVar10 = puVar10 + 1) {
                      puVar8 = puVar6;
                    }
                    if ((puVar8 != puVar6) &&
                       (puVar10 = puVar8 + 1, puVar9 = puVar8, puVar10 != puVar6)) {
                      do {
                        puVar8 = puVar9;
                        if ((StateMachineInstance *)*puVar10 != pSVar1) {
                          puVar8 = puVar9 + 1;
                          *puVar9 = (StateMachineInstance *)*puVar10;
                        }
                        puVar10 = puVar10 + 1;
                        puVar9 = puVar8;
                      } while (puVar10 != puVar6);
                      goto LAB_0034f6ac;
                    }
                    goto LAB_0034f6b0;
                  }
                }
                else {
                  lVar5 = plVar11[0x15];
                  if (lVar5 != 0) {
                    puVar6 = *(undefined8 **)(lVar5 + 0x28);
                    puVar10 = *(undefined8 **)(lVar5 + 0x20);
                    puVar8 = puVar10;
                    for (; (puVar10 != puVar6 &&
                           (puVar8 = puVar10, (StateMachineInstance *)*puVar10 != pSVar1));
                        puVar10 = puVar10 + 1) {
                      puVar8 = puVar6;
                    }
                    if ((puVar8 != puVar6) &&
                       (puVar10 = puVar8 + 1, puVar9 = puVar8, puVar10 != puVar6)) {
                      do {
                        puVar8 = puVar9;
                        if ((StateMachineInstance *)*puVar10 != pSVar1) {
                          puVar8 = puVar9 + 1;
                          *puVar9 = (StateMachineInstance *)*puVar10;
                        }
                        puVar10 = puVar10 + 1;
                        puVar9 = puVar8;
                      } while (puVar10 != puVar6);
LAB_0034f6ac:
                      puVar6 = *(undefined8 **)(lVar5 + 0x28);
                    }
LAB_0034f6b0:
                    if (puVar8 != puVar6) {
                      *(undefined8 **)(lVar5 + 0x28) = puVar8;
                    }
                  }
                }
              }
            }
          }
          plVar12 = plVar12 + 1;
          if (plVar12 == (long *)((long)plVar3 + uVar7)) {
            operator_delete(plVar3);
            return;
          }
        } while( true );
      }
      auVar14 = FUN_0034aee4();
      pcStack_a8 = notifyListenerViewModels;
      lVar5 = tpidr_el0;
      lStack_b8 = *(long *)(lVar5 + 0x28);
      plVar12 = (long *)*auVar14._8_8_;
      plVar3 = (long *)auVar14._8_8_[1];
      puStack_b0 = &stack0xffffffffffffffa0;
      do {
        if (plVar3 == plVar12) {
          if (*(long *)(lVar5 + 0x28) != lStack_b8) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        alStack_e0[0] = *plVar12;
        uStack_c0 = 5;
        puVar13 = *(undefined8 **)(*(long *)(alStack_e0[0] + 0x10) + 0x30);
        puVar2 = *(undefined8 **)(*(long *)(alStack_e0[0] + 0x10) + 0x38);
        if (puVar13 == puVar2) {
          uVar7 = 5;
LAB_0034f76c:
          (*(code *)(&PTR_FUN_00667318)[uVar7])(&uStack_e1,alStack_e0);
        }
        else {
          do {
            puVar10 = puVar13 + 1;
            (**(code **)(*(long *)*puVar13 + 0x58))((long *)*puVar13,auVar14._0_8_,alStack_e0);
            puVar13 = puVar10;
          } while (puVar10 != puVar2);
          uVar7 = (ulong)uStack_c0;
          if (uStack_c0 != 0xffffffff) goto LAB_0034f76c;
        }
        plVar12 = plVar12 + 1;
      } while( true );
    }
  }
  return;
}


// ===== 0034f720  rive::StateMachineInstance::notifyListenerViewModels =====

/* rive::StateMachineInstance::notifyListenerViewModels(std::__ndk1::vector<rive::ListenerViewModel*,
   std::__ndk1::allocator<rive::ListenerViewModel*> > const&) */

void __thiscall
rive::StateMachineInstance::notifyListenerViewModels(StateMachineInstance *this,vector *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 uStack_81;
  long local_80 [4];
  uint local_60;
  long local_58;
  undefined8 *puVar7;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar1 = *(long **)param_1;
  plVar2 = *(long **)(param_1 + 8);
  do {
    if (plVar2 == plVar1) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_80[0] = *plVar1;
    local_60 = 5;
    puVar6 = *(undefined8 **)(*(long *)(local_80[0] + 0x10) + 0x30);
    puVar3 = *(undefined8 **)(*(long *)(local_80[0] + 0x10) + 0x38);
    if (puVar6 == puVar3) {
      uVar5 = 5;
LAB_0034f76c:
      (*(code *)(&PTR_FUN_00667318)[uVar5])(&uStack_81,local_80);
    }
    else {
      do {
        puVar7 = puVar6 + 1;
        (**(code **)(*(long *)*puVar6 + 0x58))((long *)*puVar6,this,local_80);
        puVar6 = puVar7;
      } while (puVar7 != puVar3);
      uVar5 = (ulong)local_60;
      if (local_60 != 0xffffffff) goto LAB_0034f76c;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


// ===== 0034f804  rive::StateMachineInstance::setExternalFocusManager =====

/* rive::StateMachineInstance::setExternalFocusManager(rive::FocusManager*) */

void __thiscall
rive::StateMachineInstance::setExternalFocusManager
          (StateMachineInstance *this,FocusManager *param_1)

{
  StateMachineInstance *pSVar1;
  long lVar2;
  Artboard *this_00;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(FocusManager **)(this + 0x2e8) != param_1) {
    this_00 = *(Artboard **)(this + 0x10);
    if (this_00 == (Artboard *)0x0) {
      *(FocusManager **)(this + 0x2e8) = param_1;
    }
    else {
      if (*(long *)(this_00 + 0xc40) == 0) {
        *(FocusManager **)(this + 0x2e8) = param_1;
      }
      else {
        Artboard::cleanupFocusTree(this_00);
        this_00 = *(Artboard **)(this + 0x10);
        *(FocusManager **)(this + 0x2e8) = param_1;
        if (this_00 == (Artboard *)0x0) goto LAB_0034f890;
      }
      pSVar1 = this + 0x2c8;
      if (param_1 != (FocusManager *)0x0) {
        pSVar1 = (StateMachineInstance *)param_1;
      }
      local_40 = 0;
      Artboard::buildFocusTree(this_00,pSVar1,&local_40);
    }
  }
LAB_0034f890:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034f8b8  rive::StateMachineInstance::enableSemantics =====

/* rive::StateMachineInstance::enableSemantics() */

void __thiscall rive::StateMachineInstance::enableSemantics(StateMachineInstance *this)

{
  long lVar1;
  undefined1 *puVar2;
  Artboard *pAVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x328) == 0 && *(long *)(this + 800) == 0) {
    puVar2 = (undefined1 *)operator_new(0x1e0);
    *puVar2 = 7;
    *(undefined4 *)(puVar2 + 0xd0) = 1;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x58) = 0;
    *(undefined8 *)(puVar2 + 0x50) = 0;
    *(undefined8 *)(puVar2 + 0x68) = 0;
    *(undefined8 *)(puVar2 + 0x60) = 0;
    *(undefined8 *)(puVar2 + 0x78) = 0;
    *(undefined8 *)(puVar2 + 0x70) = 0;
    *(undefined8 *)(puVar2 + 0x88) = 0;
    *(undefined8 *)(puVar2 + 0x80) = 0;
    *(undefined8 *)(puVar2 + 0x98) = 0;
    *(undefined8 *)(puVar2 + 0x90) = 0;
    *(undefined8 *)(puVar2 + 0xa8) = 0;
    *(undefined8 *)(puVar2 + 0xa0) = 0;
    *(undefined8 *)(puVar2 + 0xb8) = 0;
    *(undefined8 *)(puVar2 + 0xb0) = 0;
    *(undefined8 *)(puVar2 + 200) = 0;
    *(undefined8 *)(puVar2 + 0xc0) = 0;
    *(undefined8 *)(puVar2 + 0xe0) = 0;
    *(undefined8 *)(puVar2 + 0xd8) = 0;
    *(undefined8 *)(puVar2 + 0xf0) = 0;
    *(undefined8 *)(puVar2 + 0xe8) = 0;
    *(undefined4 *)(puVar2 + 0xf8) = 0x3f800000;
    *(undefined8 *)(puVar2 + 0x108) = 0;
    *(undefined8 *)(puVar2 + 0x100) = 0;
    *(undefined8 *)(puVar2 + 0x118) = 0;
    *(undefined8 *)(puVar2 + 0x110) = 0;
    *(undefined8 *)(puVar2 + 0x128) = 0;
    *(undefined8 *)(puVar2 + 0x120) = 0;
    *(undefined8 *)(puVar2 + 0x130) = 0;
    *(undefined4 *)(puVar2 + 0x138) = 0x3f800000;
    *(undefined8 *)(puVar2 + 0x148) = 0;
    *(undefined8 *)(puVar2 + 0x140) = 0;
    *(undefined8 *)(puVar2 + 0x158) = 0;
    *(undefined8 *)(puVar2 + 0x150) = 0;
    *(undefined4 *)(puVar2 + 0x160) = 0x3f800000;
    *(undefined8 *)(puVar2 + 0x170) = 0;
    *(undefined8 *)(puVar2 + 0x168) = 0;
    *(undefined8 *)(puVar2 + 0x180) = 0;
    *(undefined8 *)(puVar2 + 0x178) = 0;
    *(undefined4 *)(puVar2 + 0x188) = 0x3f800000;
    *(undefined8 *)(puVar2 + 0x198) = 0;
    *(undefined8 *)(puVar2 + 400) = 0;
    *(undefined8 *)(puVar2 + 0x1a8) = 0;
    *(undefined8 *)(puVar2 + 0x1a0) = 0;
    *(undefined4 *)(puVar2 + 0x1b0) = 0x3f800000;
    pAVar3 = *(Artboard **)(this + 0x10);
    *(undefined8 *)(puVar2 + 0x1c0) = 0;
    *(undefined8 *)(puVar2 + 0x1b8) = 0;
    *(undefined8 *)(puVar2 + 0x1d0) = 0;
    *(undefined8 *)(puVar2 + 0x1c8) = 0;
    *(undefined4 *)(puVar2 + 0x1d8) = 0x3f800000;
    *(undefined1 **)(this + 800) = puVar2;
    if (pAVar3 != (Artboard *)0x0) {
      local_30 = 0;
      Artboard::buildSemanticTree(pAVar3,puVar2,&local_30);
      FUN_0034f1d0(&local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034f9b4  rive::StateMachineInstance::setExternalSemanticManager =====

/* rive::StateMachineInstance::setExternalSemanticManager(rive::SemanticManager*,
   rive::rcp<rive::SemanticNode>) */

void __thiscall
rive::StateMachineInstance::setExternalSemanticManager
          (StateMachineInstance *this,long param_1,long *param_3)

{
  long lVar1;
  long lVar2;
  Artboard *this_00;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x328) != param_1) {
    this_00 = *(Artboard **)(this + 0x10);
    if (this_00 == (Artboard *)0x0) {
      *(long *)(this + 0x328) = param_1;
    }
    else {
      if (*(long *)(this_00 + 0xc48) == 0) {
        *(long *)(this + 0x328) = param_1;
      }
      else {
        Artboard::cleanupSemanticTree(this_00);
        this_00 = *(Artboard **)(this + 0x10);
        *(long *)(this + 0x328) = param_1;
        if (this_00 == (Artboard *)0x0) goto LAB_0034fa64;
      }
      lVar3 = *param_3;
      lVar1 = *(long *)(this + 800);
      if (param_1 != 0) {
        lVar1 = param_1;
      }
      if (lVar3 != 0) {
        FUN_00340fb0(1,lVar3);
      }
      local_40 = lVar3;
      Artboard::buildSemanticTree(this_00,lVar1,&local_40);
      FUN_0034f1d0(&local_40);
    }
  }
LAB_0034fa64:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034fa8c  rive::StateMachineInstance::queueFocusEvent =====

/* rive::StateMachineInstance::queueFocusEvent(rive::FocusListenerGroup*, bool) */

void __thiscall
rive::StateMachineInstance::queueFocusEvent
          (StateMachineInstance *this,FocusListenerGroup *param_1,bool param_2)

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
  undefined8 uVar11;
  
  puVar7 = *(undefined8 **)(this + 0x338);
  if (puVar7 < *(undefined8 **)(this + 0x340)) {
    *puVar7 = param_1;
    puVar10 = puVar7 + 2;
    *(bool *)(puVar7 + 1) = param_2;
  }
  else {
    puVar8 = *(undefined8 **)(this + 0x330);
    lVar9 = (long)puVar7 - (long)puVar8 >> 4;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_0034fba4();
LAB_0034fba0:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    uVar4 = (long)*(undefined8 **)(this + 0x340) - (long)puVar8;
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
      if (uVar6 >> 0x3c != 0) goto LAB_0034fba0;
      pvVar3 = operator_new(uVar6 << 4);
    }
    puVar5 = (undefined8 *)((long)pvVar3 + lVar9 * 0x10);
    puVar10 = puVar5 + 2;
    *puVar5 = param_1;
    *(bool *)(puVar5 + 1) = param_2;
    if (puVar7 != puVar8) {
      do {
        puVar2 = puVar7 + -1;
        uVar11 = puVar7[-2];
        puVar7 = puVar7 + -2;
        puVar5[-1] = *puVar2;
        puVar5[-2] = uVar11;
        puVar5 = puVar5 + -2;
      } while (puVar7 != puVar8);
      puVar7 = *(undefined8 **)(this + 0x330);
    }
    *(undefined8 **)(this + 0x330) = puVar5;
    *(undefined8 **)(this + 0x338) = puVar10;
    *(void **)(this + 0x340) = (void *)((long)pvVar3 + uVar6 * 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete(puVar7);
    }
  }
  *(undefined8 **)(this + 0x338) = puVar10;
  this[0x128] = (StateMachineInstance)0x1;
  return;
}


// ===== 0034fba4  FUN_0034fba4 =====

void FUN_0034fba4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034fbb8  rive::StateMachineInstance::setFocus =====

/* rive::StateMachineInstance::setFocus(rive::FocusData*) */

void __thiscall rive::StateMachineInstance::setFocus(StateMachineInstance *this,FocusData *param_1)

{
  FocusManager *pFVar1;
  StateMachineInstance *pSVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  void *local_50;
  void *local_48;
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == (FocusData *)0x0) {
    pSVar2 = this + 0x2c8;
    if (*(StateMachineInstance **)(this + 0x2e8) != (StateMachineInstance *)0x0) {
      pSVar2 = *(StateMachineInstance **)(this + 0x2e8);
    }
    pvVar5 = *(void **)pSVar2;
    if (pvVar5 != (void *)0x0) {
      *(undefined8 *)pSVar2 = 0;
      pvVar6 = pvVar5;
      do {
        if ((*(byte *)((long)pvVar6 + 0x60) >> 5 & 1) == 0) break;
        *(byte *)((long)pvVar6 + 0x60) = *(byte *)((long)pvVar6 + 0x60) & 0xdf;
        if (*(long **)((long)pvVar6 + 8) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar6 + 8) + 0x30))();
        }
        pvVar6 = *(void **)((long)pvVar6 + 0x10);
      } while (pvVar6 != (void *)0x0);
      iVar4 = FUN_00340fe0(0xffffffff,pvVar5);
      if (iVar4 == 1) {
        if ((*(byte *)((long)pvVar5 + 0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + 0x48));
        }
        local_40 = (long)pvVar5 + 0x20;
        FUN_0034b070(&local_40);
        if (*(long *)(lVar3 + 0x28) == local_38) {
          operator_delete(pvVar5);
          return;
        }
        goto LAB_0034fd80;
      }
    }
  }
  else {
    FocusData::focusNode();
    local_50 = local_48;
    pFVar1 = (FocusManager *)(this + 0x2c8);
    if (*(FocusManager **)(this + 0x2e8) != (FocusManager *)0x0) {
      pFVar1 = *(FocusManager **)(this + 0x2e8);
    }
    if (local_48 != (void *)0x0) {
      FUN_00340fb0(1,local_48);
    }
    FocusManager::setFocus(pFVar1,&local_50);
    pvVar5 = local_50;
    if ((local_50 != (void *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_50), iVar4 == 1)) {
      if ((*(byte *)((long)pvVar5 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + 0x48));
      }
      local_40 = (long)pvVar5 + 0x20;
      FUN_0034b070(&local_40);
      operator_delete(pvVar5);
    }
    if ((local_48 != (void *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_48), iVar4 == 1)) {
      if ((*(byte *)((long)local_48 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)local_48 + 0x48));
      }
      local_40 = (long)local_48 + 0x20;
      FUN_0034b070(&local_40);
      operator_delete(local_48);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_0034fd80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034fd84  rive::StateMachineInstance::focusState =====

/* rive::StateMachineInstance::focusState() const */

uint __thiscall rive::StateMachineInstance::focusState(StateMachineInstance *this)

{
  StateMachineInstance *pSVar1;
  uint uVar2;
  long *plVar3;
  
  pSVar1 = this + 0x2c8;
  if (*(StateMachineInstance **)(this + 0x2e8) != (StateMachineInstance *)0x0) {
    pSVar1 = *(StateMachineInstance **)(this + 0x2e8);
  }
  if (*(long *)pSVar1 != 0) {
    plVar3 = *(long **)(*(long *)pSVar1 + 8);
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x50))();
      return (uVar2 & 1) << 8 | 1;
    }
    return 1;
  }
  return 0;
}


// ===== 0034fde0  rive::StateMachineInstance::queueSemanticEvent =====

/* rive::StateMachineInstance::queueSemanticEvent(rive::SemanticListenerGroup*,
   rive::SemanticActionType) */

void __thiscall
rive::StateMachineInstance::queueSemanticEvent
          (StateMachineInstance *this,undefined8 param_1,undefined1 param_3)

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
  undefined8 uVar11;
  
  puVar7 = *(undefined8 **)(this + 0x368);
  if (puVar7 < *(undefined8 **)(this + 0x370)) {
    *puVar7 = param_1;
    puVar10 = puVar7 + 2;
    *(undefined1 *)(puVar7 + 1) = param_3;
  }
  else {
    puVar8 = *(undefined8 **)(this + 0x360);
    lVar9 = (long)puVar7 - (long)puVar8 >> 4;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_0034fefc();
LAB_0034fef8:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    uVar4 = (long)*(undefined8 **)(this + 0x370) - (long)puVar8;
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
      if (uVar6 >> 0x3c != 0) goto LAB_0034fef8;
      pvVar3 = operator_new(uVar6 << 4);
    }
    puVar5 = (undefined8 *)((long)pvVar3 + lVar9 * 0x10);
    puVar10 = puVar5 + 2;
    *puVar5 = param_1;
    *(undefined1 *)(puVar5 + 1) = param_3;
    if (puVar7 != puVar8) {
      do {
        puVar2 = puVar7 + -1;
        uVar11 = puVar7[-2];
        puVar7 = puVar7 + -2;
        puVar5[-1] = *puVar2;
        puVar5[-2] = uVar11;
        puVar5 = puVar5 + -2;
      } while (puVar7 != puVar8);
      puVar7 = *(undefined8 **)(this + 0x360);
    }
    *(undefined8 **)(this + 0x360) = puVar5;
    *(undefined8 **)(this + 0x368) = puVar10;
    *(void **)(this + 0x370) = (void *)((long)pvVar3 + uVar6 * 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete(puVar7);
    }
  }
  *(undefined8 **)(this + 0x368) = puVar10;
  this[0x128] = (StateMachineInstance)0x1;
  return;
}


// ===== 0034fefc  FUN_0034fefc =====

void FUN_0034fefc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034ff10  rive::StateMachineInstance::processSemanticEvents =====

/* rive::StateMachineInstance::processSemanticEvents() */

void __thiscall rive::StateMachineInstance::processSemanticEvents(StateMachineInstance *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 uStack_91;
  long local_90;
  undefined1 local_88;
  uint local_70;
  long local_68;
  undefined8 *puVar10;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(this + 0x360);
  plVar7 = *(long **)(this + 0x368);
  if (plVar6 != plVar7) {
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    plVar8 = plVar6;
    do {
      lVar3 = *plVar8;
      if ((lVar3 != 0) && (lVar5 = *(long *)(lVar3 + 0x10), lVar5 != 0)) {
        puVar1 = *(undefined8 **)(lVar5 + 0x38);
        local_88 = (undefined1)plVar8[1];
        local_70 = 8;
        puVar9 = *(undefined8 **)(lVar5 + 0x30);
        local_90 = lVar3;
        if (*(undefined8 **)(lVar5 + 0x30) == puVar1) {
          uVar4 = 8;
        }
        else {
          do {
            puVar10 = puVar9 + 1;
            (**(code **)(*(long *)*puVar9 + 0x58))((long *)*puVar9,this,&local_90);
            puVar9 = puVar10;
          } while (puVar10 != puVar1);
          uVar4 = (ulong)local_70;
          if (local_70 == 0xffffffff) goto LAB_0034ff84;
        }
        (*(code *)(&PTR_FUN_00667318)[uVar4])(&uStack_91,&local_90);
      }
LAB_0034ff84:
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
    if (plVar6 != (long *)0x0) {
      operator_delete(plVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035002c  rive::StateMachineInstance::fireSemanticAction =====

/* rive::StateMachineInstance::fireSemanticAction(unsigned int, rive::SemanticActionType) */

void __thiscall
rive::StateMachineInstance::fireSemanticAction(StateMachineInstance *this,uint param_1,char param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  lVar4 = *(long *)(this + 800);
  if (*(long *)(this + 0x328) != 0) {
    lVar4 = *(long *)(this + 0x328);
  }
  if ((lVar4 != 0) && (uVar3 = *(ulong *)(lVar4 + 0xe0), uVar3 != 0)) {
    uVar6 = (ulong)param_1;
    uVar12 = NEON_cnt(uVar3,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
      uVar7 = (ulong)((int)uVar3 - 1U & param_1);
    }
    else {
      uVar7 = uVar6;
      if (uVar3 <= uVar6) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar6 / uVar3;
        }
        uVar7 = uVar6 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar4 + 0xd8) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if (*(uint *)(plVar8 + 2) == param_1) {
            if (plVar8[3] == 0) {
              return;
            }
            lVar4 = *(long *)(plVar8[3] + 0xa8);
            if (lVar4 == 0) {
              return;
            }
            if (param_3 == '\x02') {
              puVar1 = *(undefined8 **)(lVar4 + 0x100);
              for (puVar10 = *(undefined8 **)(lVar4 + 0xf8); puVar10 != puVar1;
                  puVar10 = puVar10 + 1) {
                (**(code **)(*(long *)*puVar10 + 0x20))();
              }
              return;
            }
            if (param_3 != '\x01') {
              if (param_3 != '\0') {
                return;
              }
              puVar1 = *(undefined8 **)(lVar4 + 0x100);
              for (puVar10 = *(undefined8 **)(lVar4 + 0xf8); puVar10 != puVar1;
                  puVar10 = puVar10 + 1) {
                (**(code **)(*(long *)*puVar10 + 0x10))();
              }
              return;
            }
            puVar1 = *(undefined8 **)(lVar4 + 0x100);
            for (puVar10 = *(undefined8 **)(lVar4 + 0xf8); puVar10 != puVar1; puVar10 = puVar10 + 1)
            {
              (**(code **)(*(long *)*puVar10 + 0x18))();
            }
            return;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar3 - 1;
          }
          else if (uVar3 <= uVar9) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar9 / uVar3;
            }
            uVar9 = uVar9 - uVar2 * uVar3;
          }
          if (uVar9 != uVar7) {
            return;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}


// ===== 003501a0  rive::StateMachineInstance::advancedDataContext =====

/* rive::StateMachineInstance::advancedDataContext() */

void __thiscall rive::StateMachineInstance::advancedDataContext(StateMachineInstance *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if (*(long *)(this + 0xe8) != 0) {
    lVar3 = *(long *)(*(long *)(this + 0xe8) + 0x10);
    puVar1 = *(undefined8 **)(lVar3 + 0xb0);
    for (puVar5 = *(undefined8 **)(lVar3 + 0xa8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      plVar4 = (long *)*puVar5;
      if (plVar4 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar4 + 0x8c);
      }
      (**(code **)(*plVar4 + 0xa0))(plVar4);
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x8c);
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}


// ===== 00350230  rive::StateMachineInstance::reset =====

/* rive::StateMachineInstance::reset() */

void __thiscall rive::StateMachineInstance::reset(StateMachineInstance *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if (*(long *)(this + 0xe8) != 0) {
    lVar3 = *(long *)(*(long *)(this + 0xe8) + 0x10);
    puVar1 = *(undefined8 **)(lVar3 + 0xb0);
    for (puVar5 = *(undefined8 **)(lVar3 + 0xa8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      plVar4 = (long *)*puVar5;
      if (plVar4 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar4 + 0x8c);
      }
      (**(code **)(*plVar4 + 0xa0))(plVar4);
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x8c);
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003502d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 0x358))();
  return;
}


// ===== 003502d8  rive::StateMachineInstance::markNeedsAdvance =====

/* rive::StateMachineInstance::markNeedsAdvance() */

void __thiscall rive::StateMachineInstance::markNeedsAdvance(StateMachineInstance *this)

{
  this[0x128] = (StateMachineInstance)0x1;
  return;
}


// ===== 003502e4  rive::StateMachineInstance::needsAdvance =====

/* rive::StateMachineInstance::needsAdvance() const */

StateMachineInstance __thiscall rive::StateMachineInstance::needsAdvance(StateMachineInstance *this)

{
  return this[0x128];
}


// ===== 003502ec  rive::StateMachineInstance::resetState =====

/* rive::StateMachineInstance::resetState() */

void __thiscall rive::StateMachineInstance::resetState(StateMachineInstance *this)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(long *)(this + 0x148) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar7 = *(long *)(this + 0x150);
      lVar1 = lVar7 + lVar5;
      plVar3 = *(long **)(lVar1 + 0x20);
      plVar2 = *(long **)(lVar1 + 0x28);
      plVar4 = *(long **)(lVar1 + 0x18);
      if ((plVar2 != (long *)0x0 && plVar2 != plVar4) && plVar2 != plVar3) {
        (**(code **)(*plVar2 + 8))(plVar2);
        plVar4 = *(long **)(lVar1 + 0x18);
        plVar3 = *(long **)(lVar1 + 0x20);
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      if ((plVar3 != (long *)0x0) && (plVar3 != plVar4)) {
        (**(code **)(*plVar3 + 8))();
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      FUN_0034a530(lVar1,*(undefined8 *)(*(long *)(lVar7 + lVar5 + 8) + 0x48));
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x68;
    } while (uVar6 < *(ulong *)(this + 0x148));
  }
  return;
}


// ===== 003503ac  rive::StateMachineInstance::bindDataContext =====

/* rive::StateMachineInstance::bindDataContext(rive::rcp<rive::DataContext>) */

void __thiscall
rive::StateMachineInstance::bindDataContext(StateMachineInstance *this,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ViewModelInstance *this_00;
  Artboard *pAVar4;
  long lVar5;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  clearDataContext(this);
  plVar3 = *(long **)(*param_2 + 0x10);
  if (plVar3 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar3 + 0xa4);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4);
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    this_00 = *(ViewModelInstance **)(*param_2 + 0x10);
    if (this_00 != (ViewModelInstance *)0x0) {
      FUN_00340fb0(1,this_00 + 0xa4);
    }
    ViewModelInstance::addDependent(this_00,(DataBindContainer *)(this + 0x40));
    iVar2 = FUN_00340fe0(0xffffffff,this_00 + 0xa4);
    if (iVar2 == 1) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
    }
  }
  Artboard::clearDataContext(*(Artboard **)(this + 0x10));
  lVar5 = *param_2;
  pAVar4 = *(Artboard **)(this + 0x10);
  local_50 = lVar5;
  if (lVar5 == 0) {
    Artboard::internalDataContext(pAVar4,&local_50);
    lVar5 = *param_2;
  }
  else {
    FUN_00340fb0(1,lVar5);
    Artboard::internalDataContext(pAVar4,&local_50);
    FUN_003462d8(lVar5);
    lVar5 = *param_2;
  }
  if (lVar5 == 0) {
    local_58 = 0;
    internalDataContext(this,&local_58);
  }
  else {
    FUN_00340fb0(1,lVar5);
    local_58 = lVar5;
    internalDataContext(this,&local_58);
    FUN_003462d8(lVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035051c  rive::StateMachineInstance::dataContext =====

/* rive::StateMachineInstance::dataContext(rive::rcp<rive::DataContext>) */

void __thiscall rive::StateMachineInstance::dataContext(StateMachineInstance *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  clearDataContext(this);
  lVar2 = *param_2;
  if (lVar2 == 0) {
    local_40 = 0;
    internalDataContext(this,&local_40);
  }
  else {
    FUN_00340fb0(1,lVar2);
    local_40 = lVar2;
    internalDataContext(this,&local_40);
    FUN_003462d8(lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003505b0  rive::StateMachineInstance::stateChangedCount =====

/* rive::StateMachineInstance::stateChangedCount() const */

long __thiscall rive::StateMachineInstance::stateChangedCount(StateMachineInstance *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(this + 0x148);
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 == 1) {
    uVar5 = 0;
    lVar1 = 0;
  }
  else {
    uVar5 = uVar2 & 0xfffffffffffffffe;
    lVar3 = 0;
    lVar1 = 0;
    pbVar4 = (byte *)(*(long *)(this + 0x150) + 0xbc);
    uVar6 = uVar5;
    do {
      uVar6 = uVar6 - 2;
      lVar3 = lVar3 + (ulong)pbVar4[-0x68];
      lVar1 = lVar1 + (ulong)*pbVar4;
      pbVar4 = pbVar4 + 0xd0;
    } while (uVar6 != 0);
    lVar1 = lVar1 + lVar3;
    if (uVar2 == uVar5) {
      return lVar1;
    }
  }
  lVar3 = uVar2 - uVar5;
  pbVar4 = (byte *)(*(long *)(this + 0x150) + uVar5 * 0x68 + 0x54);
  do {
    lVar3 = lVar3 + -1;
    lVar1 = lVar1 + (ulong)*pbVar4;
    pbVar4 = pbVar4 + 0x68;
  } while (lVar3 != 0);
  return lVar1;
}


// ===== 00350634  rive::StateMachineInstance::stateChangedByIndex =====

/* rive::StateMachineInstance::stateChangedByIndex(unsigned long) const */

undefined8 __thiscall
rive::StateMachineInstance::stateChangedByIndex(StateMachineInstance *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (*(long *)(this + 0x148) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    pcVar3 = (char *)(*(long *)(this + 0x150) + 0x54);
    do {
      if (*pcVar3 != '\0') {
        if (uVar2 == param_1) {
          lVar1 = *(long *)(*(long *)(this + 0x150) + lVar1 * 0x68 + 0x20);
          if (lVar1 == 0) {
            return 0;
          }
          return *(undefined8 *)(lVar1 + 8);
        }
        uVar2 = uVar2 + 1;
      }
      lVar1 = lVar1 + 1;
      pcVar3 = pcVar3 + 0x68;
    } while (*(long *)(this + 0x148) != lVar1);
  }
  return 0;
}


// ===== 00350694  rive::StateMachineInstance::currentAnimationCount =====

/* rive::StateMachineInstance::currentAnimationCount() const */

long __thiscall rive::StateMachineInstance::currentAnimationCount(StateMachineInstance *this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(this + 0x148);
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = 0;
    lVar5 = 0x20;
    do {
      uVar2 = *(ulong *)(*(long *)(this + 0x150) + lVar5);
      if (uVar2 != 0) {
        uVar2 = (**(code **)(**(long **)(uVar2 + 8) + 0x18))(*(long **)(uVar2 + 8),0x3d);
        uVar1 = *(ulong *)(this + 0x148);
        uVar2 = uVar2 & 1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = uVar2 + lVar3;
      lVar5 = lVar5 + 0x68;
    } while (uVar4 < uVar1);
  }
  return lVar3;
}


// ===== 00350718  rive::StateMachineInstance::currentAnimationByIndex =====

/* rive::StateMachineInstance::currentAnimationByIndex(unsigned long) const */

long __thiscall
rive::StateMachineInstance::currentAnimationByIndex(StateMachineInstance *this,ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(this + 0x148) == 0) {
    return 0;
  }
  uVar4 = 0;
  uVar5 = 0;
  lVar6 = 0x20;
  do {
    if ((*(long *)(*(long *)(this + 0x150) + lVar6) != 0) &&
       (plVar1 = *(long **)(*(long *)(*(long *)(this + 0x150) + lVar6) + 8),
       uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x3d), (uVar2 & 1) != 0)) {
      if (uVar5 == param_1) {
        plVar1 = (long *)(*(long *)(this + 0x150) + uVar4 * 0x68 + 0x20);
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          return 0;
        }
        plVar3 = *(long **)(lVar6 + 8);
        uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x3d);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        return *plVar1 + 0x10;
      }
      uVar5 = uVar5 + 1;
    }
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + 0x68;
    if (*(ulong *)(this + 0x148) <= uVar4) {
      return 0;
    }
  } while( true );
}


// ===== 003507f0  rive::StateMachineInstance::reportedEventCount =====

/* rive::StateMachineInstance::reportedEventCount() const */

long __thiscall rive::StateMachineInstance::reportedEventCount(StateMachineInstance *this)

{
  return *(long *)(this + 0xf8) - *(long *)(this + 0xf0) >> 4;
}


// ===== 00350800  rive::StateMachineInstance::reportedEventAt =====

/* rive::StateMachineInstance::reportedEventAt(unsigned long) const */

undefined1  [16] __thiscall
rive::StateMachineInstance::reportedEventAt(StateMachineInstance *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0xf8) - *(long *)(this + 0xf0) >> 4)) {
    return *(undefined1 (*) [16])(*(long *)(this + 0xf0) + param_1 * 0x10);
  }
  return ZEXT816(0);
}


// ===== 00350828  rive::StateMachineInstance::bindablePropertyInstance =====

/* rive::StateMachineInstance::bindablePropertyInstance(rive::BindableProperty*) const */

long __thiscall
rive::StateMachineInstance::bindablePropertyInstance
          (StateMachineInstance *this,BindableProperty *param_1)

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
  
  uVar2 = *(ulong *)(this + 0x200);
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
    plVar6 = *(long **)(*(long *)(this + 0x1f8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if ((BindableProperty *)plVar6[2] == param_1) {
            return plVar6[3];
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


// ===== 00350914  rive::StateMachineInstance::bindableDataBindToSource =====

/* rive::StateMachineInstance::bindableDataBindToSource(rive::BindableProperty*) const */

long __thiscall
rive::StateMachineInstance::bindableDataBindToSource
          (StateMachineInstance *this,BindableProperty *param_1)

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
  
  uVar2 = *(ulong *)(this + 0x278);
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
    plVar6 = *(long **)(*(long *)(this + 0x270) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if ((BindableProperty *)plVar6[2] == param_1) {
            return plVar6[3];
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


// ===== 00350a00  rive::StateMachineInstance::bindableDataBindToTarget =====

/* rive::StateMachineInstance::bindableDataBindToTarget(rive::BindableProperty*) const */

long __thiscall
rive::StateMachineInstance::bindableDataBindToTarget
          (StateMachineInstance *this,BindableProperty *param_1)

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
  
  uVar2 = *(ulong *)(this + 0x250);
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
    plVar6 = *(long **)(*(long *)(this + 0x248) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if ((BindableProperty *)plVar6[2] == param_1) {
            return plVar6[3];
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


// ===== 00350aec  rive::StateMachineInstance::hasFocusNodes =====

/* rive::StateMachineInstance::hasFocusNodes() */

bool __thiscall rive::StateMachineInstance::hasFocusNodes(StateMachineInstance *this)

{
  StateMachineInstance *pSVar1;
  
  pSVar1 = this + 0x2c8;
  if (*(StateMachineInstance **)(this + 0x2e8) != (StateMachineInstance *)0x0) {
    pSVar1 = *(StateMachineInstance **)(this + 0x2e8);
  }
  return *(long *)(pSVar1 + 8) != *(long *)(pSVar1 + 0x10);
}


// ===== 00350b0c  rive::StateMachineInstance::focusNext =====

/* rive::StateMachineInstance::focusNext() */

bool __thiscall rive::StateMachineInstance::focusNext(StateMachineInstance *this)

{
  FocusManager *this_00;
  long lVar1;
  
  this_00 = (FocusManager *)(this + 0x2c8);
  if (*(FocusManager **)(this + 0x2e8) != (FocusManager *)0x0) {
    this_00 = *(FocusManager **)(this + 0x2e8);
  }
  FocusManager::dropFocusIfFocusTargetHidden(this_00);
  lVar1 = FocusManager::findNextFocusable(this_00,*(FocusNode **)this_00,true);
  return lVar1 != 0;
}


// ===== 00350b54  rive::StateMachineInstance::focusPrevious =====

/* rive::StateMachineInstance::focusPrevious() */

bool __thiscall rive::StateMachineInstance::focusPrevious(StateMachineInstance *this)

{
  FocusManager *this_00;
  long lVar1;
  
  this_00 = (FocusManager *)(this + 0x2c8);
  if (*(FocusManager **)(this + 0x2e8) != (FocusManager *)0x0) {
    this_00 = *(FocusManager **)(this + 0x2e8);
  }
  FocusManager::dropFocusIfFocusTargetHidden(this_00);
  lVar1 = FocusManager::findNextFocusable(this_00,*(FocusNode **)this_00,false);
  return lVar1 != 0;
}


// ===== 00350b9c  rive::StateMachine::StateMachine =====

/* rive::StateMachine::StateMachine() */

void __thiscall rive::StateMachine::StateMachine(StateMachine *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067cea0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
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
  return;
}


// ===== 00350be0  rive::StateMachine::~StateMachine =====

/* rive::StateMachine::~StateMachine() */

void __thiscall rive::StateMachine::~StateMachine(StateMachine *this)

{
  ~StateMachine(this);
  operator_delete(this);
  return;
}


// ===== 00350c04  FUN_00350c04 =====

undefined8 FUN_00350c04(void)

{
  return 0x35;
}


// ===== 00350c0c  FUN_00350c0c =====

bool FUN_00350c0c(undefined8 param_1,short param_2)

{
  return param_2 == 0x35 || param_2 == 0x1b;
}


// ===== 00350c20  FUN_00350c20 =====

void FUN_00350c20(long param_1,short param_2,long *param_3)

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
  if (param_2 == 0x37) {
    pcVar4 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar4) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00350cb4;
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
LAB_00350cb4:
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
  __stack_chk_fail(param_2 == 0x37);
}


// ===== 00350d10  rive::StateMachine::onAddedDirty =====

/* rive::StateMachine::onAddedDirty(rive::CoreContext*) */

ulong __thiscall rive::StateMachine::onAddedDirty(StateMachine *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x48);
  for (puVar1 = *(undefined8 **)(this + 0x40); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x38))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) {
      return uVar3;
    }
  }
  puVar2 = *(undefined8 **)(this + 0x30);
  for (puVar1 = *(undefined8 **)(this + 0x28); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x38))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) {
      return uVar3;
    }
  }
  puVar1 = *(undefined8 **)(this + 0x58);
  puVar2 = *(undefined8 **)(this + 0x60);
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


// ===== 00350dd8  rive::StateMachine::onAddedClean =====

/* rive::StateMachine::onAddedClean(rive::CoreContext*) */

ulong __thiscall rive::StateMachine::onAddedClean(StateMachine *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x48);
  for (puVar1 = *(undefined8 **)(this + 0x40); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x40))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) {
      return uVar3;
    }
  }
  puVar2 = *(undefined8 **)(this + 0x30);
  for (puVar1 = *(undefined8 **)(this + 0x28); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x40))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) {
      return uVar3;
    }
  }
  puVar1 = *(undefined8 **)(this + 0x58);
  puVar2 = *(undefined8 **)(this + 0x60);
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


// ===== 00350ea0  rive::StateMachine::import =====

/* rive::StateMachine::import(rive::ImportStack&) */

undefined8 __thiscall rive::StateMachine::import(StateMachine *this,ImportStack *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 == 0) {
    return 1;
  }
  uVar7 = NEON_cnt(uVar3,1);
  uVar6 = NEON_uaddlv(uVar7,1);
  uVar8 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6);
  uVar1 = (ulong)~(uint)uVar3 & 1;
  if (1 < (uVar8 & 0xffffffff)) {
    uVar1 = (ulong)(uVar3 - 1 != 0);
  }
  plVar4 = *(long **)(*(long *)param_1 + uVar1 * 8);
  if (plVar4 != (long *)0x0) {
    for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      uVar5 = plVar4[1];
      if (uVar5 == 1) {
        if (*(short *)(plVar4 + 2) == 1) {
          if (plVar4[3] == 0) {
            return 1;
          }
          Artboard::addStateMachine(*(Artboard **)(plVar4[3] + 8),this);
          return 0;
        }
      }
      else {
        if ((uVar8 & 0xffffffff) < 2) {
          uVar5 = uVar5 & uVar3 - 1;
        }
        else if (uVar3 <= uVar5) {
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar5 / uVar3;
          }
          uVar5 = uVar5 - uVar2 * uVar3;
        }
        if (uVar5 != uVar1) {
          return 1;
        }
      }
    }
  }
  return 1;
}


// ===== 00350f74  rive::StateMachine::~StateMachine =====

/* rive::StateMachine::~StateMachine() */

void __thiscall rive::StateMachine::~StateMachine(StateMachine *this)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  pvVar1 = *(void **)(this + 0x88);
  *(undefined **)this = PTR_vtable_0067cea0 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  plVar3 = *(long **)(this + 0x70);
  if (plVar3 != (long *)0x0) {
    plVar4 = *(long **)(this + 0x78);
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar2 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar2 = *(long **)(this + 0x70);
    }
    *(long **)(this + 0x78) = plVar3;
    operator_delete(plVar2);
  }
  plVar3 = *(long **)(this + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar4 = *(long **)(this + 0x60);
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar2 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar2 = *(long **)(this + 0x58);
    }
    *(long **)(this + 0x60) = plVar3;
    operator_delete(plVar2);
  }
  plVar3 = *(long **)(this + 0x40);
  if (plVar3 != (long *)0x0) {
    plVar4 = *(long **)(this + 0x48);
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar2 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar2 = *(long **)(this + 0x40);
    }
    *(long **)(this + 0x48) = plVar3;
    operator_delete(plVar2);
  }
  plVar3 = *(long **)(this + 0x28);
  if (plVar3 != (long *)0x0) {
    plVar4 = *(long **)(this + 0x30);
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar2 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar2 = *(long **)(this + 0x28);
    }
    *(long **)(this + 0x30) = plVar3;
    operator_delete(plVar2);
  }
  *(undefined **)this = PTR_vtable_0067cde8 + 0x10;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 00351114  rive::StateMachine::addLayer =====

/* rive::StateMachine::addLayer(std::__ndk1::unique_ptr<rive::StateMachineLayer,
   std::__ndk1::default_delete<rive::StateMachineLayer> >) */

void __thiscall rive::StateMachine::addLayer(StateMachine *this,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  plVar3 = *(long **)(this + 0x30);
  if (plVar3 < *(long **)(this + 0x38)) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar13 = plVar3 + 1;
    *plVar3 = lVar4;
    goto LAB_003512b0;
  }
  lVar14 = (long)plVar3 - *(long *)(this + 0x28);
  lVar4 = lVar14 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_003512d0();
LAB_003512cc:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(long **)(this + 0x38) - *(long *)(this + 0x28);
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_003512cc;
    pvVar2 = operator_new(uVar6 << 3);
  }
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar4 * 8);
  plVar15 = *(long **)(this + 0x28);
  plVar12 = *(long **)(this + 0x30);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar13 = plVar3 + 1;
  *plVar3 = lVar8;
  lVar4 = (long)plVar12 - (long)plVar15;
  if (lVar4 == 0) {
    *(long **)(this + 0x28) = plVar3;
    *(long **)(this + 0x30) = plVar13;
    *(void **)(this + 0x38) = pvVar1;
  }
  else {
    uVar7 = lVar4 - 8;
    plVar11 = plVar12;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar12 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
        ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar12)))) {
LAB_0035124c:
      do {
        plVar11 = plVar11 + -1;
        lVar4 = *plVar11;
        *plVar11 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar4;
      } while (plVar11 != plVar15);
    }
    else {
      plVar9 = plVar3 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar5 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar12 + -uVar5;
      uVar6 = uVar5;
      do {
        plVar10 = plVar12 + -4;
        lVar16 = plVar12[-3];
        lVar8 = *plVar10;
        lVar14 = plVar12[-1];
        lVar4 = plVar12[-2];
        uVar6 = uVar6 - 4;
        plVar12[-3] = 0;
        *plVar10 = 0;
        plVar12[-1] = 0;
        plVar12[-2] = 0;
        plVar9[-1] = lVar16;
        plVar9[-2] = lVar8;
        plVar9[1] = lVar14;
        *plVar9 = lVar4;
        plVar9 = plVar9 + -4;
        plVar12 = plVar10;
      } while (uVar6 != 0);
      plVar3 = plVar3 + -uVar5;
      if (uVar7 != uVar5) goto LAB_0035124c;
    }
    plVar12 = *(long **)(this + 0x28);
    plVar15 = *(long **)(this + 0x30);
    *(long **)(this + 0x28) = plVar3;
    *(long **)(this + 0x30) = plVar13;
    *(void **)(this + 0x38) = pvVar1;
    while (plVar15 != plVar12) {
      plVar15 = plVar15 + -1;
      plVar3 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
LAB_003512b0:
  *(long **)(this + 0x30) = plVar13;
  return;
}


// ===== 003512d0  FUN_003512d0 =====

void FUN_003512d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003512e4  rive::StateMachine::addInput =====

/* rive::StateMachine::addInput(std::__ndk1::unique_ptr<rive::StateMachineInput,
   std::__ndk1::default_delete<rive::StateMachineInput> >) */

void __thiscall rive::StateMachine::addInput(StateMachine *this,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  plVar3 = *(long **)(this + 0x48);
  if (plVar3 < *(long **)(this + 0x50)) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar13 = plVar3 + 1;
    *plVar3 = lVar4;
    goto LAB_00351480;
  }
  lVar14 = (long)plVar3 - *(long *)(this + 0x40);
  lVar4 = lVar14 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_003514a0();
LAB_0035149c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(long **)(this + 0x50) - *(long *)(this + 0x40);
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_0035149c;
    pvVar2 = operator_new(uVar6 << 3);
  }
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar4 * 8);
  plVar15 = *(long **)(this + 0x40);
  plVar12 = *(long **)(this + 0x48);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar13 = plVar3 + 1;
  *plVar3 = lVar8;
  lVar4 = (long)plVar12 - (long)plVar15;
  if (lVar4 == 0) {
    *(long **)(this + 0x40) = plVar3;
    *(long **)(this + 0x48) = plVar13;
    *(void **)(this + 0x50) = pvVar1;
  }
  else {
    uVar7 = lVar4 - 8;
    plVar11 = plVar12;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar12 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
        ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar12)))) {
LAB_0035141c:
      do {
        plVar11 = plVar11 + -1;
        lVar4 = *plVar11;
        *plVar11 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar4;
      } while (plVar11 != plVar15);
    }
    else {
      plVar9 = plVar3 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar5 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar12 + -uVar5;
      uVar6 = uVar5;
      do {
        plVar10 = plVar12 + -4;
        lVar16 = plVar12[-3];
        lVar8 = *plVar10;
        lVar14 = plVar12[-1];
        lVar4 = plVar12[-2];
        uVar6 = uVar6 - 4;
        plVar12[-3] = 0;
        *plVar10 = 0;
        plVar12[-1] = 0;
        plVar12[-2] = 0;
        plVar9[-1] = lVar16;
        plVar9[-2] = lVar8;
        plVar9[1] = lVar14;
        *plVar9 = lVar4;
        plVar9 = plVar9 + -4;
        plVar12 = plVar10;
      } while (uVar6 != 0);
      plVar3 = plVar3 + -uVar5;
      if (uVar7 != uVar5) goto LAB_0035141c;
    }
    plVar12 = *(long **)(this + 0x40);
    plVar15 = *(long **)(this + 0x48);
    *(long **)(this + 0x40) = plVar3;
    *(long **)(this + 0x48) = plVar13;
    *(void **)(this + 0x50) = pvVar1;
    while (plVar15 != plVar12) {
      plVar15 = plVar15 + -1;
      plVar3 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
LAB_00351480:
  *(long **)(this + 0x48) = plVar13;
  return;
}


// ===== 003514a0  FUN_003514a0 =====

void FUN_003514a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003514b4  rive::StateMachine::addListener =====

/* rive::StateMachine::addListener(std::__ndk1::unique_ptr<rive::StateMachineListener,
   std::__ndk1::default_delete<rive::StateMachineListener> >) */

void __thiscall rive::StateMachine::addListener(StateMachine *this,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  plVar3 = *(long **)(this + 0x60);
  if (plVar3 < *(long **)(this + 0x68)) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar13 = plVar3 + 1;
    *plVar3 = lVar4;
    goto LAB_00351650;
  }
  lVar14 = (long)plVar3 - *(long *)(this + 0x58);
  lVar4 = lVar14 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_00351670();
LAB_0035166c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(long **)(this + 0x68) - *(long *)(this + 0x58);
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_0035166c;
    pvVar2 = operator_new(uVar6 << 3);
  }
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar4 * 8);
  plVar15 = *(long **)(this + 0x58);
  plVar12 = *(long **)(this + 0x60);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar13 = plVar3 + 1;
  *plVar3 = lVar8;
  lVar4 = (long)plVar12 - (long)plVar15;
  if (lVar4 == 0) {
    *(long **)(this + 0x58) = plVar3;
    *(long **)(this + 0x60) = plVar13;
    *(void **)(this + 0x68) = pvVar1;
  }
  else {
    uVar7 = lVar4 - 8;
    plVar11 = plVar12;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar12 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
        ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar12)))) {
LAB_003515ec:
      do {
        plVar11 = plVar11 + -1;
        lVar4 = *plVar11;
        *plVar11 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar4;
      } while (plVar11 != plVar15);
    }
    else {
      plVar9 = plVar3 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar5 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar12 + -uVar5;
      uVar6 = uVar5;
      do {
        plVar10 = plVar12 + -4;
        lVar16 = plVar12[-3];
        lVar8 = *plVar10;
        lVar14 = plVar12[-1];
        lVar4 = plVar12[-2];
        uVar6 = uVar6 - 4;
        plVar12[-3] = 0;
        *plVar10 = 0;
        plVar12[-1] = 0;
        plVar12[-2] = 0;
        plVar9[-1] = lVar16;
        plVar9[-2] = lVar8;
        plVar9[1] = lVar14;
        *plVar9 = lVar4;
        plVar9 = plVar9 + -4;
        plVar12 = plVar10;
      } while (uVar6 != 0);
      plVar3 = plVar3 + -uVar5;
      if (uVar7 != uVar5) goto LAB_003515ec;
    }
    plVar12 = *(long **)(this + 0x58);
    plVar15 = *(long **)(this + 0x60);
    *(long **)(this + 0x58) = plVar3;
    *(long **)(this + 0x60) = plVar13;
    *(void **)(this + 0x68) = pvVar1;
    while (plVar15 != plVar12) {
      plVar15 = plVar15 + -1;
      plVar3 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
LAB_00351650:
  *(long **)(this + 0x60) = plVar13;
  return;
}


// ===== 00351670  FUN_00351670 =====

void FUN_00351670(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00351684  rive::StateMachine::addDataBind =====

/* rive::StateMachine::addDataBind(std::__ndk1::unique_ptr<rive::DataBind,
   std::__ndk1::default_delete<rive::DataBind> >) */

void __thiscall rive::StateMachine::addDataBind(StateMachine *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x78);
  if (puVar1 < *(undefined8 **)(this + 0x80)) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = (undefined8 *)FUN_003516cc(this + 0x70);
  }
  *(undefined8 **)(this + 0x78) = puVar2;
  return;
}


// ===== 003516cc  FUN_003516cc =====

long * FUN_003516cc(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar14 = param_1[1] - *param_1;
  lVar11 = lVar14 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0035186c();
LAB_00351868:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00351868;
    pvVar2 = operator_new(uVar5 << 3);
  }
  lVar7 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar15 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  plVar10 = plVar3 + 1;
  *plVar3 = lVar7;
  lVar11 = (long)plVar13 - (long)plVar15;
  if (lVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar10;
    param_1[2] = (ulong)pvVar1;
    goto LAB_00351840;
  }
  uVar6 = lVar11 - 8;
  plVar12 = plVar13;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar13 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar6 & 0xfffffffffffffff8)) + -8) < plVar13)))) {
LAB_003517e8:
    do {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar11;
    } while (plVar12 != plVar15);
  }
  else {
    plVar8 = plVar3 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar4 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar13 + -uVar4;
    uVar5 = uVar4;
    do {
      plVar9 = plVar13 + -4;
      lVar16 = plVar13[-3];
      lVar7 = *plVar9;
      lVar14 = plVar13[-1];
      lVar11 = plVar13[-2];
      uVar5 = uVar5 - 4;
      plVar13[-3] = 0;
      *plVar9 = 0;
      plVar13[-1] = 0;
      plVar13[-2] = 0;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar7;
      plVar8[1] = lVar14;
      *plVar8 = lVar11;
      plVar8 = plVar8 + -4;
      plVar13 = plVar9;
    } while (uVar5 != 0);
    plVar3 = plVar3 + -uVar4;
    if (uVar6 != uVar4) goto LAB_003517e8;
  }
  plVar13 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar10;
  param_1[2] = (ulong)pvVar1;
  while (plVar15 != plVar13) {
    plVar15 = plVar15 + -1;
    plVar3 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_00351840:
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar10;
}


// ===== 0035186c  FUN_0035186c =====

void FUN_0035186c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00351880  rive::StateMachine::input =====

/* rive::StateMachine::input(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) const */

long __thiscall rive::StateMachine::input(StateMachine *this,byte *param_2)

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
  
  plVar9 = *(long **)(this + 0x40);
  plVar3 = *(long **)(this + 0x48);
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


// ===== 0035195c  rive::StateMachine::input =====

/* rive::StateMachine::input(unsigned long) const */

undefined8 __thiscall rive::StateMachine::input(StateMachine *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x40) + param_1 * 8);
  }
  return 0;
}


// ===== 0035197c  rive::StateMachine::layer =====

/* rive::StateMachine::layer(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) const */

long __thiscall rive::StateMachine::layer(StateMachine *this,byte *param_2)

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
  
  plVar9 = *(long **)(this + 0x28);
  plVar3 = *(long **)(this + 0x30);
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


// ===== 00351a58  rive::StateMachine::layer =====

/* rive::StateMachine::layer(unsigned long) const */

undefined8 __thiscall rive::StateMachine::layer(StateMachine *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x28) + param_1 * 8);
  }
  return 0;
}


// ===== 00351a78  rive::StateMachine::listener =====

/* rive::StateMachine::listener(unsigned long) const */

undefined8 __thiscall rive::StateMachine::listener(StateMachine *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x60) - *(long *)(this + 0x58) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x58) + param_1 * 8);
  }
  return 0;
}


// ===== 00351a98  rive::StateMachine::dataBind =====

/* rive::StateMachine::dataBind(unsigned long) const */

undefined8 __thiscall rive::StateMachine::dataBind(StateMachine *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x78) - *(long *)(this + 0x70) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x70) + param_1 * 8);
  }
  return 0;
}


// ===== 00351ab8  rive::StateMachine::addScriptedObject =====

/* rive::StateMachine::addScriptedObject(rive::ScriptedObject*) */

void __thiscall rive::StateMachine::addScriptedObject(StateMachine *this,ScriptedObject *param_1)

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
    goto LAB_00351bf8;
  }
  puVar9 = *(undefined8 **)(this + 0x88);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0034af20();
LAB_00351c18:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00351c18;
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
      if (uVar6 == uVar7) goto LAB_00351be4;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x88);
  }
LAB_00351be4:
  *(undefined8 **)(this + 0x88) = puVar4;
  *(undefined8 **)(this + 0x90) = puVar13;
  *(void **)(this + 0x98) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00351bf8:
  *(undefined8 **)(this + 0x90) = puVar13;
  return;
}


// ===== 00351c1c  rive::NestedStateMachine::NestedStateMachine =====

/* rive::NestedStateMachine::NestedStateMachine() */

void __thiscall rive::NestedStateMachine::NestedStateMachine(NestedStateMachine *this)

{
  undefined *puVar1;
  
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
  *(undefined8 *)(this + 0x98) = 0;
  puVar1 = PTR_vtable_0067ce60;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  return;
}


// ===== 00351c70  rive::NestedStateMachine::~NestedStateMachine =====

/* rive::NestedStateMachine::~NestedStateMachine() */

void __thiscall rive::NestedStateMachine::~NestedStateMachine(NestedStateMachine *this)

{
  ~NestedStateMachine(this);
  operator_delete(this);
  return;
}


// ===== 00351c94  FUN_00351c94 =====

undefined8 FUN_00351c94(void)

{
  return 0x5f;
}


// ===== 00351c9c  FUN_00351c9c =====

undefined8 FUN_00351c9c(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 10) && (param_2 != 0x5d)) && (param_2 != 0x5f)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00351cc8  FUN_00351cc8 =====

void FUN_00351cc8(long param_1,short param_2,long *param_3)

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
        goto LAB_00351e28;
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
LAB_00351e28:
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
        goto LAB_00351e0c;
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
LAB_00351e0c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0xc6) {
      uVar5 = 0;
      goto LAB_00351e70;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00351e60;
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
LAB_00351e60:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xa0) = (int)uVar6;
  }
  uVar5 = 1;
LAB_00351e70:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00351e94  FUN_00351e94 =====

void FUN_00351e94(void)

{
  return;
}


// ===== 00351e98  FUN_00351e98 =====

void FUN_00351e98(void)

{
  return;
}


// ===== 00351e9c  FUN_00351e9c =====

void FUN_00351e9c(void)

{
  return;
}


// ===== 00351ea0  FUN_00351ea0 =====

void FUN_00351ea0(void)

{
  return;
}


// ===== 00351ea4  FUN_00351ea4 =====

void FUN_00351ea4(void)

{
  return;
}


// ===== 00351ea8  FUN_00351ea8 =====

ushort FUN_00351ea8(long param_1)

{
  return *(ushort *)(param_1 + 0x60) & 1;
}


// ===== 00351eb4  FUN_00351eb4 =====

void FUN_00351eb4(void)

{
  return;
}


// ===== 00351eb8  rive::NestedStateMachine::advance =====

/* rive::NestedStateMachine::advance(float, bool) */

void __thiscall
rive::NestedStateMachine::advance(NestedStateMachine *this,float param_1,bool param_2)

{
  if (*(StateMachineInstance **)(this + 0xa8) != (StateMachineInstance *)0x0) {
    StateMachineInstance::advance(*(StateMachineInstance **)(this + 0xa8),param_1,param_2);
    return;
  }
  return;
}


// ===== 00351ecc  rive::NestedStateMachine::initializeAnimation =====

/* rive::NestedStateMachine::initializeAnimation(rive::ArtboardInstance*) */

void __thiscall
rive::NestedStateMachine::initializeAnimation(NestedStateMachine *this,ArtboardInstance *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  StateMachineInstance *this_00;
  long *plVar4;
  Artboard *this_01;
  ulong uVar5;
  Component *extraout_x1;
  Component *extraout_x1_00;
  Component *pCVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  StateMachine *pSVar10;
  FocusData *this_02;
  long lVar11;
  undefined1 auVar12 [16];
  void *local_60;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((ulong)*(uint *)(this + 0xa0) <
       (ulong)(*(long *)(param_1 + 0xaa8) - *(long *)(param_1 + 0xaa0) >> 3)) &&
     (pSVar10 = *(StateMachine **)(*(long *)(param_1 + 0xaa0) + (ulong)*(uint *)(this + 0xa0) * 8),
     pSVar10 != (StateMachine *)0x0)) {
    this_00 = (StateMachineInstance *)operator_new(0x378);
    StateMachineInstance::StateMachineInstance(this_00,pSVar10,param_1);
  }
  else {
    this_00 = (StateMachineInstance *)0x0;
  }
  plVar4 = *(long **)(this + 0xa8);
  *(StateMachineInstance **)(this + 0xa8) = this_00;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    this_00 = *(StateMachineInstance **)(this + 0xa8);
  }
  if ((this_00 == (StateMachineInstance *)0x0) ||
     (plVar4 = *(long **)(this + 0x30), plVar4 == (long *)0x0)) goto LAB_003520a4;
  auVar12 = (**(code **)(*plVar4 + 0x18))(plVar4,0x5c);
  pCVar6 = auVar12._8_8_;
  if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_003520a4;
  this_02 = *(FocusData **)(this + 0x30);
  lVar7 = *(long *)(this_02 + 0x40);
  if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0xc40), lVar7 == 0)) goto LAB_003520a4;
  lVar11 = *(long *)(this + 0xa8);
  if (*(long *)(lVar11 + 0x2e8) != lVar7) {
    this_01 = *(Artboard **)(lVar11 + 0x10);
    if (this_01 == (Artboard *)0x0) {
      *(long *)(lVar11 + 0x2e8) = lVar7;
    }
    else {
      if (*(long *)(this_01 + 0xc40) == 0) {
        *(long *)(lVar11 + 0x2e8) = lVar7;
      }
      else {
        Artboard::cleanupFocusTree(this_01);
        this_01 = *(Artboard **)(lVar11 + 0x10);
        *(long *)(lVar11 + 0x2e8) = lVar7;
        pCVar6 = extraout_x1;
        if (this_01 == (Artboard *)0x0) goto LAB_00351fd8;
      }
      local_50 = 0;
      Artboard::buildFocusTree(this_01,lVar7,&local_50);
      pCVar6 = extraout_x1_00;
    }
  }
LAB_00351fd8:
  FocusData::findClosestFocusNode(this_02,pCVar6);
  pvVar2 = local_58;
  if (local_58 == (void *)0x0) {
    local_60 = (void *)0x0;
    Artboard::buildFocusTree((Artboard *)param_1,lVar7,&local_60);
  }
  else {
    FUN_00340fb0(1,local_58);
    local_60 = pvVar2;
    Artboard::buildFocusTree((Artboard *)param_1,lVar7,&local_60);
    iVar3 = FUN_00340fe0(0xffffffff,pvVar2);
    if (iVar3 == 1) {
      if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x48));
      }
      local_50 = (long)pvVar2 + 0x20;
      FUN_0034b070(&local_50);
      operator_delete(pvVar2);
    }
    if ((local_58 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_58), iVar3 == 1)) {
      if ((*(byte *)((long)local_58 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)local_58 + 0x48));
      }
      local_50 = (long)local_58 + 0x20;
      FUN_0034b070(&local_50);
      operator_delete(local_58);
    }
  }
LAB_003520a4:
  if (*(long *)(this + 0xb8) - *(long *)(this + 0xb0) != 0) {
    uVar8 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 3;
    uVar9 = 0;
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    do {
      plVar4 = *(long **)(*(long *)(this + 0xb0) + uVar9 * 8);
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x7b);
      if (((uVar5 & 1) != 0) ||
         (uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x7c), (uVar5 & 1) != 0)) {
        (**(code **)(*plVar4 + 0x98))(plVar4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00352148  FUN_00352148 =====

void FUN_00352148(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00352160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00352168  rive::NestedStateMachine::~NestedStateMachine =====

/* rive::NestedStateMachine::~NestedStateMachine() */

void __thiscall rive::NestedStateMachine::~NestedStateMachine(NestedStateMachine *this)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = *(void **)(this + 0xb0);
  *(undefined **)this = PTR_vtable_0067ce60 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)(this + 0xa8);
  *(undefined8 *)(this + 0xa8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar1 = *(void **)(this + 0x88);
  *(undefined **)this = PTR_vtable_0067ced8 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cee0 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar1;
    operator_delete(pvVar1);
  }
  *(undefined ***)this = &PTR_FUN_00678650;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


// ===== 00352230  FUN_00352230 =====

void FUN_00352230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 00352250  FUN_00352250 =====

void FUN_00352250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00352290  FUN_00352290 =====

undefined8 FUN_00352290(void)

{
  return 10;
}


// ===== 00352298  FUN_00352298 =====

bool FUN_00352298(undefined8 param_1,short param_2)

{
  return param_2 == 10;
}


// ===== 003522a8  FUN_003522a8 =====

void FUN_003522a8(long param_1,short param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 == 5) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003523d0;
      }
      pbVar11 = pbVar10 + 1;
      bVar2 = *pbVar10;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar6;
      pbVar10 = pbVar11;
    } while ((char)bVar2 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003523d0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 4) {
      uVar5 = 0;
      goto LAB_003523e0;
    }
    pcVar8 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar8) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00352398;
      }
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 < '\0');
    param_3[2] = (long)pcVar9;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_00352398:
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
  uVar5 = 1;
LAB_003523e0:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00352404  rive::NestedStateMachine::stateMachineInstance =====

/* rive::NestedStateMachine::stateMachineInstance() */

undefined8 __thiscall rive::NestedStateMachine::stateMachineInstance(NestedStateMachine *this)

{
  return *(undefined8 *)(this + 0xa8);
}


// ===== 0035240c  rive::NestedStateMachine::hitTest =====

/* rive::NestedStateMachine::hitTest(rive::Vec2D) const */

uint rive::NestedStateMachine::hitTest(float param_1,float param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_3 + 0xa8);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar4 + 0x10);
  if (*(char *)(lVar5 + 0xbe9) != '\0') {
    param_1 = param_1 - *(float *)(lVar5 + 0x984) * *(float *)(lVar5 + 0x200);
    param_2 = param_2 - *(float *)(lVar5 + 0x988) * *(float *)(lVar5 + 0x204);
  }
  puVar1 = *(undefined8 **)(lVar4 + 0x158);
  puVar2 = *(undefined8 **)(lVar4 + 0x160);
  if (puVar1 == puVar2) {
    uVar3 = 0;
  }
  else {
    do {
      puVar6 = puVar1 + 1;
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x20))(param_1,param_2);
      if ((uVar3 & 1) != 0) break;
      puVar1 = puVar6;
    } while (puVar6 != puVar2);
  }
  return uVar3 & 1;
}


// ===== 003524b4  rive::NestedStateMachine::pointerMove =====

/* rive::NestedStateMachine::pointerMove(rive::Vec2D, float, int) */

void rive::NestedStateMachine::pointerMove(long param_1)

{
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003524c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x50))();
    return;
  }
  return;
}


// ===== 003524cc  rive::NestedStateMachine::pointerDown =====

/* rive::NestedStateMachine::pointerDown(rive::Vec2D, int) */

void rive::NestedStateMachine::pointerDown(long param_1)

{
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003524dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x48))();
    return;
  }
  return;
}


// ===== 003524e4  rive::NestedStateMachine::pointerUp =====

/* rive::NestedStateMachine::pointerUp(rive::Vec2D, int) */

void rive::NestedStateMachine::pointerUp(long param_1)

{
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003524f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x58))();
    return;
  }
  return;
}


// ===== 003524fc  rive::NestedStateMachine::pointerExit =====

/* rive::NestedStateMachine::pointerExit(rive::Vec2D, int) */

void rive::NestedStateMachine::pointerExit(long param_1)

{
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0035250c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x60))();
    return;
  }
  return;
}


// ===== 00352514  rive::NestedStateMachine::dragStart =====

/* rive::NestedStateMachine::dragStart(rive::Vec2D, float, int) */

undefined8 __thiscall
rive::NestedStateMachine::dragStart
          (undefined4 param_1,undefined4 param_2,NestedStateMachine *this,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(this + 0xa8);
  if (lVar3 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x160);
  for (puVar4 = *(undefined8 **)(lVar3 + 0x158); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,param_4);
  }
  uVar2 = StateMachineInstance::updateListeners(param_1,param_2,0,lVar3,9,param_4);
  return uVar2;
}


// ===== 003525a8  rive::NestedStateMachine::dragEnd =====

/* rive::NestedStateMachine::dragEnd(rive::Vec2D, float, int) */

undefined4
rive::NestedStateMachine::dragEnd
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(long **)(param_4 + 0xa8);
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)plVar3[0x2c];
    for (puVar4 = (undefined8 *)plVar3[0x2b]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      (**(code **)(*(long *)*puVar4 + 0x28))((long *)*puVar4,param_5);
    }
    uVar2 = StateMachineInstance::updateListeners(param_1,param_2,0,plVar3,10,param_5);
    (**(code **)(*plVar3 + 0x50))(param_1,param_2,param_3,plVar3,param_5);
  }
  return uVar2;
}


// ===== 00352664  rive::NestedStateMachine::input =====

/* rive::NestedStateMachine::input(unsigned long) */

undefined8 __thiscall rive::NestedStateMachine::input(NestedStateMachine *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0xb0) + param_1 * 8);
  }
  return 0;
}


// ===== 00352684  rive::NestedStateMachine::input =====

/* rive::NestedStateMachine::input(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

long __thiscall rive::NestedStateMachine::input(NestedStateMachine *this,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *__s2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar14 = *(long **)(this + 0xb0);
  plVar3 = *(long **)(this + 0xb8);
  if (plVar14 != plVar3) {
    do {
      lVar12 = *plVar14;
      plVar13 = *(long **)(lVar12 + 0x30);
      if ((((plVar13 == (long *)0x0) ||
           (uVar9 = (**(code **)(*plVar13 + 0x18))(plVar13,0x5f), (uVar9 & 1) == 0)) ||
          (plVar13 = (long *)plVar13[0x15], plVar13 == (long *)0x0)) ||
         (lVar10 = (**(code **)(*plVar13 + 0x70))(plVar13,*(undefined4 *)(lVar12 + 0x88)),
         lVar10 == 0)) {
        uVar11 = 0;
        local_80 = 0;
        sStack_78 = 0;
        local_70 = (void *)0x0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(byte *)(lVar10 + 0x10) & 1) == 0) {
          local_80 = *(undefined8 *)(lVar10 + 0x10);
          sStack_78 = *(size_t *)(lVar10 + 0x18);
          local_70 = *(void **)(lVar10 + 0x20);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,*(char **)(lVar10 + 0x20),*(ulong *)(lVar10 + 0x18));
        }
        uVar11 = (uint)(byte)local_80._0_1_;
      }
      pvVar6 = local_70;
      bVar4 = *param_2;
      uVar9 = (ulong)(uVar11 >> 1);
      if ((uVar11 & 1) != 0) {
        uVar9 = sStack_78;
      }
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 8);
      }
      if (uVar9 == uVar2) {
        __s2 = param_2 + 1;
        if ((bVar4 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((uVar11 & 1) == 0) {
          if (uVar11 < 2) goto LAB_00352804;
          lVar10 = 0;
          do {
            pbVar1 = __s2 + lVar10;
            bVar4 = *(byte *)((long)&local_80 + lVar10 + 1);
            bVar7 = (ulong)(uVar11 >> 1) - 1 != lVar10;
            lVar10 = lVar10 + 1;
          } while (bVar4 == *pbVar1 && bVar7);
          if (bVar4 == *pbVar1) goto LAB_00352804;
        }
        else {
          iVar8 = memcmp(local_70,__s2,sStack_78);
          operator_delete(pvVar6);
          if (iVar8 == 0) goto LAB_00352804;
        }
      }
      else if ((uVar11 & 1) != 0) {
        operator_delete(local_70);
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar3);
  }
  lVar12 = 0;
LAB_00352804:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return lVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035283c  rive::NestedStateMachine::addNestedInput =====

/* rive::NestedStateMachine::addNestedInput(rive::NestedInput*) */

void __thiscall
rive::NestedStateMachine::addNestedInput(NestedStateMachine *this,NestedInput *param_1)

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
    goto LAB_0035297c;
  }
  puVar9 = *(undefined8 **)(this + 0xb0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003529a0();
LAB_0035299c:
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
    if (uVar5 >> 0x3d != 0) goto LAB_0035299c;
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
      if (uVar6 == uVar7) goto LAB_00352968;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xb0);
  }
LAB_00352968:
  *(undefined8 **)(this + 0xb0) = puVar4;
  *(undefined8 **)(this + 0xb8) = puVar13;
  *(void **)(this + 0xc0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_0035297c:
  *(undefined8 **)(this + 0xb8) = puVar13;
  return;
}


// ===== 003529a0  FUN_003529a0 =====

void FUN_003529a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003529b4  rive::NestedStateMachine::bindViewModelInstance =====

/* rive::NestedStateMachine::bindViewModelInstance(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::NestedStateMachine::bindViewModelInstance(NestedStateMachine *this,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0xa8);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)*param_2;
    if (plVar4 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar4 + 0xa4);
    }
    local_40 = plVar4;
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_40);
    plVar3 = local_40;
    if ((local_40 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)local_40 + 0xa4), iVar2 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00352a5c  rive::NestedStateMachine::dataContext =====

/* rive::NestedStateMachine::dataContext(rive::rcp<rive::DataContext>) */

void __thiscall rive::NestedStateMachine::dataContext(NestedStateMachine *this,long *param_2)

{
  long lVar1;
  StateMachineInstance *this_00;
  long lVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = *(StateMachineInstance **)(this + 0xa8);
  if (this_00 != (StateMachineInstance *)0x0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      StateMachineInstance::clearDataContext(this_00);
      local_40 = 0;
      StateMachineInstance::internalDataContext(this_00,&local_40);
    }
    else {
      FUN_00340fb0(1,lVar2);
      StateMachineInstance::clearDataContext(this_00);
      FUN_00340fb0(1,lVar2);
      local_40 = lVar2;
      StateMachineInstance::internalDataContext(this_00,&local_40);
      FUN_003462d8(lVar2);
      FUN_003462d8(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00352b10  rive::NestedStateMachine::clearDataContext =====

/* rive::NestedStateMachine::clearDataContext() */

void __thiscall rive::NestedStateMachine::clearDataContext(NestedStateMachine *this)

{
  if (*(StateMachineInstance **)(this + 0xa8) != (StateMachineInstance *)0x0) {
    StateMachineInstance::clearDataContext(*(StateMachineInstance **)(this + 0xa8));
    return;
  }
  return;
}


// ===== 00352b20  rive::NestedStateMachine::tryChangeState =====

/* rive::NestedStateMachine::tryChangeState() */

void __thiscall rive::NestedStateMachine::tryChangeState(NestedStateMachine *this)

{
  if (*(StateMachineInstance **)(this + 0xa8) != (StateMachineInstance *)0x0) {
    StateMachineInstance::tryChangeState(*(StateMachineInstance **)(this + 0xa8));
    return;
  }
  return;
}


// ===== 00352b30  rive::NestedAnimation::validate =====

/* rive::NestedAnimation::validate(rive::CoreContext*) */

undefined8 __thiscall rive::NestedAnimation::validate(NestedAnimation *this,CoreContext *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xb), (uVar2 & 1) != 0)) {
    plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00352b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,0x5c);
    return uVar3;
  }
  return 0;
}


// ===== 00352bac  rive::NestedAnimation::onAddedDirty =====

/* rive::NestedAnimation::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::NestedAnimation::onAddedDirty(NestedAnimation *this,CoreContext *param_1)

{
  NestedAnimation *pNVar1;
  long *plVar2;
  long lVar3;
  
  pNVar1 = (NestedAnimation *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pNVar1 = (NestedAnimation *)(param_1 + -0x998);
  }
  *(NestedAnimation **)(this + 0x40) = pNVar1;
  *(NestedAnimation **)(this + 0x80) = pNVar1;
  if (pNVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar3 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar3 + 0x90))(plVar2,this);
  }
  NestedArtboard::addNestedAnimation(*(NestedArtboard **)(this + 0x30),this);
  return 0;
}


// ===== 00352c20  FUN_00352c20 =====

void FUN_00352c20(long *param_1)

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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 00352cb0  FUN_00352cb0 =====

void FUN_00352cb0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x352cb4);
  (*pcVar1)();
}


// ===== 00352cb4  FUN_00352cb4 =====

undefined8 FUN_00352cb4(void)

{
  return 0x5d;
}


// ===== 00352cbc  FUN_00352cbc =====

bool FUN_00352cbc(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x5d;
}


// ===== 00352cdc  rive::ListenerInvocation::pointer =====

/* rive::ListenerInvocation::pointer(rive::Vec2D, rive::Vec2D, int, rive::ListenerType, float) */

void rive::ListenerInvocation::pointer
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_7;
  param_1[5] = param_8;
  param_1[6] = param_6;
  param_1[8] = 0;
  return;
}


// ===== 00352cf4  rive::ListenerInvocation::keyboard =====

/* rive::ListenerInvocation::keyboard(rive::Key, rive::KeyModifiers, bool, bool) */

void __thiscall
rive::ListenerInvocation::keyboard
          (undefined2 *param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 3) = param_4;
  *(undefined1 *)(param_1 + 2) = param_5;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}


// ===== 00352d10  rive::ListenerInvocation::textInput =====

/* rive::ListenerInvocation::textInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
rive::ListenerInvocation::textInput(ListenerInvocation *param_1,ListenerInvocation *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ListenerInvocation LVar3;
  long lVar4;
  long lVar5;
  undefined7 local_28;
  undefined1 uStack_21;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  local_28 = (undefined7)*(undefined8 *)(this + 1);
  uVar1 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uStack_21 = (undefined1)uVar1;
  LVar3 = *this;
  *(undefined8 *)this = 0;
  *param_1 = LVar3;
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_21,local_28);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if (*(long *)(lVar4 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00352d80  rive::ListenerInvocation::focus =====

/* rive::ListenerInvocation::focus(rive::FocusListenerGroup*, bool) */

void __thiscall
rive::ListenerInvocation::focus(ListenerInvocation *this,FocusListenerGroup *param_1,bool param_2)

{
  undefined8 *in_x8;
  
  *in_x8 = this;
  *(char *)(in_x8 + 1) = (char)param_1;
  *(undefined4 *)(in_x8 + 4) = 3;
  return;
}


// ===== 00352d94  rive::ListenerInvocation::reportedEvent =====

/* rive::ListenerInvocation::reportedEvent(rive::Event*, float) */

void __thiscall
rive::ListenerInvocation::reportedEvent(ListenerInvocation *this,Event *param_1,float param_2)

{
  undefined8 *in_x8;
  
  *in_x8 = this;
  *(float *)(in_x8 + 1) = param_2;
  *(undefined4 *)(in_x8 + 4) = 4;
  return;
}


// ===== 00352da8  rive::ListenerInvocation::viewModelChange =====

/* rive::ListenerInvocation::viewModelChange(rive::ListenerViewModel*) */

void __thiscall
rive::ListenerInvocation::viewModelChange(ListenerInvocation *this,ListenerViewModel *param_1)

{
  undefined8 *in_x8;
  
  *in_x8 = this;
  *(undefined4 *)(in_x8 + 4) = 5;
  return;
}


// ===== 00352db8  rive::ListenerInvocation::none =====

/* rive::ListenerInvocation::none() */

void __thiscall rive::ListenerInvocation::none(ListenerInvocation *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 0;
  *(undefined4 *)(in_x8 + 0x20) = 6;
  return;
}


// ===== 00352dc8  rive::ListenerInvocation::gamepad =====

/* rive::ListenerInvocation::gamepad(int, unsigned long, float) */

void __thiscall
rive::ListenerInvocation::gamepad(ListenerInvocation *this,int param_1,ulong param_2,float param_3)

{
  undefined4 *in_x8;
  
  *in_x8 = (int)this;
  *(ulong *)(in_x8 + 2) = (ulong)(uint)param_1;
  in_x8[4] = param_3;
  in_x8[8] = 7;
  return;
}


// ===== 00352de0  rive::ListenerInvocation::semantic =====

/* rive::ListenerInvocation::semantic(rive::SemanticListenerGroup*, rive::SemanticActionType) */

void __thiscall
rive::ListenerInvocation::semantic(undefined8 *param_1,ListenerInvocation *this,undefined1 param_3)

{
  *param_1 = this;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}


// ===== 00352df4  rive::StateInstance::StateInstance =====

/* rive::StateInstance::StateInstance(rive::LayerState const*) */

void __thiscall rive::StateInstance::StateInstance(StateInstance *this,LayerState *param_1)

{
  *(undefined **)this = PTR_vtable_0067ce98 + 0x10;
  *(LayerState **)(this + 8) = param_1;
  return;
}


// ===== 00352e08  rive::StateInstance::~StateInstance =====

/* rive::StateInstance::~StateInstance() */

void __thiscall rive::StateInstance::~StateInstance(StateInstance *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x352e0c);
  (*pcVar1)();
}


// ===== 00352e0c  FUN_00352e0c =====

void FUN_00352e0c(void)

{
  return;
}


// ===== 00352e10  rive::StateInstance::~StateInstance =====

/* rive::StateInstance::~StateInstance() */

void __thiscall rive::StateInstance::~StateInstance(StateInstance *this)

{
  return;
}


// ===== 00352e14  rive::StateInstance::state =====

/* rive::StateInstance::state() const */

undefined8 __thiscall rive::StateInstance::state(StateInstance *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 00352e1c  _INIT_5 =====

void _INIT_5(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_m_resources_0067cce8;
  *(undefined8 *)PTR_m_resources_0067cce8 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  __cxa_atexit(FUN_00355ba0,puVar1,&PTR_LOOP_006513f0);
  __cxa_atexit(PTR__mutex_0067cb30,PTR_m_mutex_0067cce0,&PTR_LOOP_006513f0);
  return;
}


// ===== 00352e70  _INIT_6 =====

void _INIT_6(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_m_EmptyAnimation_0067cd00;
  rive::LinearAnimation::LinearAnimation((LinearAnimation *)PTR_m_EmptyAnimation_0067cd00);
  __cxa_atexit(PTR__LinearAnimation_0067cde0,puVar1,&PTR_LOOP_006513f0);
  return;
}


// ===== 00352eac  _INIT_7 =====

void _INIT_7(void)

{
  __cxa_atexit(FUN_0037dc04,&DAT_00686e98,&PTR_LOOP_006513f0);
  return;
}


// ===== 00352ec8  _INIT_8 =====

void _INIT_8(void)

{
  rive::LinearAnimation::LinearAnimation((LinearAnimation *)&DAT_00686ea8);
  __cxa_atexit(PTR__LinearAnimation_0067cde0,&DAT_00686ea8,&PTR_LOOP_006513f0);
  return;
}


// ===== 00352f04  _INIT_9 =====

void _INIT_9(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_empty_0067d020;
  *(undefined8 *)PTR_empty_0067d020 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  __cxa_atexit(PTR__basic_string_0067d4f8,puVar1,&PTR_LOOP_006513f0);
  puVar1 = PTR_emptyIntVector_0067d028;
  *(undefined8 *)(PTR_emptyIntVector_0067d028 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)puVar1 = 0;
  __cxa_atexit(FUN_003f5224,puVar1,&PTR_LOOP_006513f0);
  return;
}


// ===== 00352f60  _INIT_10 =====

void _INIT_10(void)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *__s2;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  long lVar27;
  float fVar28;
  long local_1c78;
  byte *local_1c70;
  long local_1c68;
  ulong local_1c60 [2];
  byte local_1c50 [8];
  ulong auStack_1c48 [2];
  undefined2 local_1c38 [4];
  undefined1 local_1c30;
  char local_1c2f [5];
  char acStack_1c2a [3];
  char acStack_1c27 [5];
  undefined1 local_1c22;
  undefined2 local_1c18;
  undefined1 local_1c10;
  char local_1c0f [8];
  undefined2 local_1c07;
  undefined1 local_1c05;
  undefined2 local_1bf8;
  undefined1 local_1bf0;
  undefined8 local_1bef;
  undefined1 local_1be7;
  undefined2 local_1bd8;
  undefined1 local_1bd0;
  char local_1bcf [7];
  char cStack_1bc8;
  char acStack_1bc7 [7];
  undefined1 local_1bc0;
  undefined2 local_1bb8;
  undefined1 local_1bb0;
  undefined4 local_1baf;
  undefined2 local_1b98;
  undefined1 local_1b90;
  undefined4 local_1b8f;
  undefined1 local_1b8b;
  undefined2 local_1b78;
  undefined1 local_1b70;
  undefined4 local_1b6f;
  undefined2 local_1b6b;
  undefined1 local_1b69;
  undefined2 local_1b58;
  undefined1 local_1b50;
  undefined4 local_1b4f;
  undefined2 local_1b4b;
  undefined1 local_1b49;
  undefined2 local_1b38;
  undefined1 local_1b30;
  undefined4 local_1b2f;
  undefined2 local_1b2b;
  undefined1 local_1b29;
  undefined2 local_1b18;
  undefined1 local_1b10;
  undefined4 local_1b0f;
  undefined3 uStack_1b0b;
  undefined1 local_1b08;
  undefined2 local_1af8;
  undefined1 local_1af0;
  undefined4 local_1aef;
  undefined2 local_1aeb;
  undefined2 local_1ad8;
  undefined1 local_1ad0;
  undefined4 local_1acf;
  undefined1 local_1acb;
  undefined2 local_1ab8;
  undefined1 local_1ab0;
  undefined4 local_1aaf;
  undefined1 local_1aab;
  undefined1 local_1aaa;
  undefined2 local_1a98;
  undefined1 local_1a90;
  undefined2 local_1a8f;
  undefined1 local_1a8d;
  undefined1 local_1a8c;
  undefined2 local_1a78;
  undefined1 local_1a70;
  undefined8 local_1a6f;
  undefined1 local_1a67;
  undefined2 local_1a58;
  undefined1 local_1a50;
  undefined4 local_1a4f;
  undefined3 uStack_1a4b;
  undefined1 local_1a48;
  undefined2 local_1a38;
  undefined1 local_1a30;
  undefined4 local_1a2f;
  undefined2 local_1a2b;
  undefined1 local_1a29;
  undefined2 local_1a18;
  undefined1 local_1a10;
  char local_1a0f [8];
  undefined2 local_1a07;
  undefined1 local_1a05;
  undefined2 local_19f8;
  undefined1 local_19f0;
  undefined4 local_19ef;
  undefined1 local_19eb;
  undefined1 local_19ea;
  undefined2 local_19d8;
  undefined1 local_19d0;
  undefined4 local_19cf;
  undefined2 local_19cb;
  undefined1 local_19c9;
  undefined2 local_19b8;
  undefined1 local_19b0;
  undefined4 local_19af;
  undefined1 local_19ab;
  undefined1 local_19aa;
  undefined2 local_1998;
  undefined1 local_1990;
  undefined4 local_198f;
  undefined2 local_198b;
  undefined1 local_1989;
  undefined2 local_1978;
  undefined1 local_1970;
  undefined4 local_196f;
  undefined2 local_196b;
  undefined1 local_1969;
  undefined2 local_1958;
  undefined1 local_1950;
  undefined8 local_194f;
  undefined1 local_1947;
  undefined2 local_1938;
  undefined1 local_1930;
  undefined4 local_192f;
  undefined3 uStack_192b;
  undefined1 local_1928;
  undefined2 local_1918;
  undefined1 local_1910;
  undefined4 local_190f;
  undefined1 local_190b;
  undefined1 local_190a;
  undefined2 local_18f8;
  undefined1 local_18f0;
  undefined4 local_18ef;
  undefined1 local_18eb;
  undefined2 local_18d8;
  undefined1 local_18d0;
  undefined2 local_18cf;
  undefined1 local_18cd;
  undefined1 local_18cc;
  undefined2 local_18b8;
  undefined1 local_18b0;
  char local_18af [8];
  undefined1 local_18a7;
  undefined1 local_18a6;
  undefined2 local_1898;
  undefined1 local_1890;
  char local_188f [8];
  undefined1 local_1887;
  undefined1 local_1886;
  undefined2 local_1878;
  undefined1 local_1870;
  undefined4 local_186f;
  undefined3 uStack_186b;
  undefined1 local_1868;
  undefined2 local_1858;
  undefined1 local_1850;
  undefined8 local_184f;
  undefined1 local_1847;
  undefined2 local_1838;
  undefined1 local_1830;
  undefined4 local_182f;
  undefined1 local_182b;
  undefined1 local_182a;
  undefined2 local_1818;
  undefined1 local_1810;
  undefined4 local_180f;
  undefined2 local_180b;
  undefined1 local_1809;
  undefined2 local_17f8;
  undefined1 local_17f0;
  undefined4 local_17ef;
  undefined1 local_17eb;
  undefined2 local_17d8;
  undefined1 local_17d0;
  undefined4 local_17cf;
  undefined1 local_17cb;
  undefined1 local_17ca;
  undefined2 local_17b8;
  undefined1 local_17b0;
  undefined4 local_17af;
  undefined1 local_17ab;
  undefined1 local_17aa;
  undefined2 local_1798;
  undefined1 local_1790;
  undefined4 local_178f;
  undefined1 local_178b;
  undefined1 local_178a;
  undefined2 local_1778;
  undefined1 local_1770;
  undefined4 local_176f;
  undefined1 local_176b;
  undefined2 local_1758;
  undefined1 local_1750;
  undefined4 local_174f;
  undefined2 local_174b;
  undefined1 local_1749;
  undefined2 local_1738;
  undefined1 local_1730;
  undefined4 local_172f;
  undefined3 uStack_172b;
  undefined1 local_1728;
  undefined2 local_1718;
  undefined1 local_1710;
  undefined4 local_170f;
  undefined2 local_170b;
  undefined1 local_1709;
  undefined2 local_16f8;
  undefined1 local_16f0;
  undefined4 local_16ef;
  undefined3 uStack_16eb;
  undefined1 local_16e8;
  undefined2 local_16d8;
  undefined1 local_16d0;
  undefined4 local_16cf;
  undefined2 local_16cb;
  undefined1 local_16c9;
  undefined2 local_16b8;
  undefined1 local_16b0;
  undefined4 local_16af;
  undefined3 uStack_16ab;
  undefined1 local_16a8;
  undefined2 local_1698;
  undefined1 local_1690;
  char local_168f [8];
  undefined2 local_1687;
  undefined1 local_1685;
  undefined2 local_1678;
  undefined1 local_1670;
  char local_166f [8];
  undefined1 local_1667;
  undefined1 local_1666;
  undefined2 local_1658;
  undefined1 local_1650;
  char local_164f [8];
  undefined1 local_1647;
  undefined1 local_1646;
  undefined2 local_1638;
  undefined1 local_1630;
  char local_162f [8];
  undefined1 local_1627;
  undefined1 local_1626;
  undefined2 local_1618;
  undefined1 local_1610;
  char local_160f [8];
  undefined2 local_1607;
  undefined1 local_1605;
  undefined2 local_15f8;
  undefined1 local_15f0;
  char local_15ef [8];
  undefined1 local_15e7;
  undefined1 local_15e6;
  undefined2 local_15d8;
  undefined1 local_15d0;
  undefined8 local_15cf;
  undefined1 local_15c7;
  undefined2 local_15b8;
  undefined1 local_15b0;
  undefined2 local_15af;
  undefined1 local_15ad;
  undefined1 local_15ac;
  undefined2 local_1598;
  undefined1 local_1590;
  char local_158f [8];
  undefined2 local_1587;
  undefined1 local_1585;
  undefined2 local_1578;
  undefined1 local_1570;
  char local_156f [8];
  undefined2 local_1567;
  undefined1 local_1565;
  undefined2 local_1558;
  undefined1 local_1550;
  undefined4 local_154f;
  undefined1 local_154b;
  undefined2 local_1538;
  undefined1 local_1530;
  undefined8 local_152f;
  undefined1 local_1527;
  undefined2 local_1518;
  undefined1 local_1510;
  char local_150f [8];
  undefined1 local_1507;
  undefined1 local_1506;
  undefined2 local_14f8;
  undefined1 local_14f0;
  char acStack_14ef [5];
  char local_14ea [3];
  char acStack_14e7 [5];
  undefined1 local_14e2;
  undefined2 local_14d8;
  undefined1 local_14d0;
  undefined8 local_14cf;
  undefined1 local_14c7;
  undefined2 local_14b8;
  undefined1 local_14b0;
  undefined4 local_14af;
  undefined1 local_14ab;
  undefined2 local_1498;
  undefined1 local_1490;
  undefined4 local_148f;
  undefined3 uStack_148b;
  undefined1 local_1488;
  undefined2 local_1478;
  undefined1 local_1470;
  char local_146f [8];
  undefined1 local_1467;
  undefined1 local_1466;
  undefined2 local_1458;
  undefined1 local_1450;
  undefined4 local_144f;
  undefined1 local_144b;
  undefined1 local_144a;
  undefined2 local_1438;
  undefined1 local_1430;
  undefined2 local_142f;
  undefined1 local_142d;
  undefined1 local_142c;
  undefined2 local_1418;
  undefined1 local_1410;
  undefined4 local_140f;
  undefined1 local_140b;
  undefined1 local_140a;
  undefined2 local_13f8;
  undefined1 local_13f0;
  undefined4 local_13ef;
  undefined1 local_13eb;
  undefined2 local_13d8;
  undefined1 local_13d0;
  undefined4 local_13cf;
  undefined1 local_13cb;
  undefined1 local_13ca;
  undefined2 local_13b8;
  undefined1 local_13b0;
  char local_13af [8];
  undefined1 local_13a7;
  undefined1 local_13a6;
  undefined2 local_1398;
  undefined1 local_1390;
  char local_138f [8];
  undefined2 local_1387;
  undefined1 local_1385;
  undefined2 local_1378;
  undefined1 local_1370;
  char local_136f [8];
  undefined1 local_1367;
  undefined1 local_1366;
  undefined2 local_1358;
  undefined1 local_1350;
  char local_134f [8];
  undefined2 local_1347;
  undefined1 local_1345;
  undefined2 local_1338;
  undefined1 local_1330;
  undefined8 local_132f;
  undefined1 local_1327;
  undefined2 local_1318;
  undefined1 local_1310;
  undefined4 local_130f;
  undefined3 uStack_130b;
  undefined1 local_1308;
  undefined2 local_12f8;
  undefined1 local_12f0;
  char local_12ef [8];
  undefined4 local_12e7;
  undefined1 local_12e3;
  undefined2 local_12d8;
  undefined1 local_12d0;
  undefined4 local_12cf;
  undefined3 uStack_12cb;
  undefined1 local_12c8;
  undefined2 local_12b8;
  undefined1 local_12b0;
  undefined8 local_12af;
  undefined1 local_12a7;
  undefined2 local_1298;
  undefined1 local_1290;
  undefined8 local_128f;
  undefined1 local_1287;
  undefined2 local_1278;
  undefined1 local_1270;
  undefined4 local_126f;
  undefined2 local_126b;
  undefined1 local_1269;
  undefined2 local_1258;
  undefined1 local_1250;
  undefined7 local_124f;
  undefined4 uStack_1248;
  undefined1 local_1244;
  undefined2 local_1238;
  undefined1 local_1230;
  char acStack_122f [6];
  char local_1229 [2];
  char acStack_1227 [6];
  undefined1 local_1221;
  undefined2 local_1218;
  undefined1 local_1210;
  undefined4 local_120f;
  undefined1 local_120b;
  undefined2 local_11f8;
  undefined1 local_11f0;
  undefined4 local_11ef;
  undefined1 local_11eb;
  undefined2 local_11d8;
  undefined1 local_11d0;
  undefined4 local_11cf;
  undefined2 local_11cb;
  undefined1 local_11c9;
  undefined2 local_11b8;
  undefined1 local_11b0;
  undefined2 local_11af;
  undefined1 local_11ad;
  undefined1 local_11ac;
  undefined2 local_1198;
  undefined1 local_1190;
  undefined4 local_118f;
  undefined1 local_118b;
  undefined2 local_1178;
  undefined1 local_1170;
  undefined4 local_116f;
  undefined1 local_116b;
  undefined1 local_116a;
  undefined2 local_1158;
  undefined1 local_1150;
  undefined4 local_114f;
  undefined1 local_114b;
  undefined1 local_114a;
  undefined2 local_1138;
  undefined1 local_1130;
  undefined4 local_112f;
  undefined1 local_112b;
  undefined2 local_1118;
  undefined1 local_1110;
  undefined4 local_110f;
  undefined3 uStack_110b;
  undefined1 local_1108;
  undefined2 local_10f8;
  undefined1 local_10f0;
  undefined7 local_10ef;
  undefined4 uStack_10e8;
  undefined1 local_10e4;
  undefined2 local_10d8;
  undefined1 local_10d0;
  undefined4 local_10cf;
  undefined1 local_10cb;
  undefined2 local_10b8;
  undefined1 local_10b0;
  undefined8 local_10af;
  undefined1 local_10a7;
  undefined2 local_1098;
  undefined1 local_1090;
  char local_108f [8];
  undefined1 local_1087;
  undefined1 local_1086;
  undefined2 local_1078;
  undefined1 local_1070;
  undefined2 local_106f;
  undefined1 local_106d;
  undefined1 local_106c;
  undefined2 local_1058;
  undefined1 local_1050;
  undefined4 local_104f;
  undefined2 local_104b;
  undefined1 local_1049;
  undefined2 local_1038;
  undefined1 local_1030;
  undefined7 local_102f;
  undefined4 uStack_1028;
  undefined1 local_1024;
  undefined2 local_1018;
  undefined1 local_1010;
  char local_100f [8];
  undefined1 local_1007;
  undefined1 local_1006;
  undefined2 local_ff8;
  undefined1 local_ff0;
  undefined7 local_fef;
  undefined4 uStack_fe8;
  undefined1 local_fe4;
  undefined2 local_fd8;
  undefined1 local_fd0;
  undefined7 local_fcf;
  undefined4 uStack_fc8;
  undefined1 local_fc4;
  undefined2 local_fb8;
  undefined1 local_fb0;
  undefined8 local_faf;
  undefined1 local_fa7;
  undefined2 local_f98;
  undefined1 local_f90;
  undefined8 local_f8f;
  undefined1 local_f87;
  undefined2 local_f78;
  undefined1 local_f70;
  char local_f6f [8];
  undefined1 local_f67;
  undefined1 local_f66;
  undefined2 local_f58;
  undefined1 local_f50;
  undefined4 local_f4f;
  undefined3 uStack_f4b;
  undefined1 local_f48;
  undefined2 local_f38;
  undefined1 local_f30;
  undefined2 local_f2f;
  undefined1 local_f2d;
  undefined1 local_f2c;
  undefined2 local_f18;
  undefined1 local_f10;
  undefined2 local_f0f;
  undefined1 local_f0d;
  undefined2 local_ef8;
  undefined1 local_ef0;
  undefined8 local_eef;
  undefined1 local_ee7;
  undefined2 local_ed8;
  undefined1 local_ed0;
  undefined8 local_ecf;
  undefined1 local_ec7;
  undefined2 local_eb8;
  undefined1 local_eb0;
  undefined4 local_eaf;
  undefined1 local_eab;
  undefined1 local_eaa;
  undefined2 local_e98;
  undefined1 local_e90;
  char acStack_e8f [6];
  char local_e89 [2];
  char acStack_e87 [6];
  undefined1 local_e81;
  undefined2 local_e78;
  undefined1 local_e70;
  undefined4 local_e6f;
  undefined2 local_e6b;
  undefined1 local_e69;
  undefined2 local_e58;
  undefined1 local_e50;
  undefined4 local_e4f;
  undefined2 local_e4b;
  undefined1 local_e49;
  undefined2 local_e38;
  undefined1 local_e30;
  char local_e2f [8];
  undefined1 local_e27;
  undefined1 local_e26;
  undefined2 local_e18;
  undefined1 local_e10;
  undefined8 local_e0f;
  undefined1 local_e07;
  undefined2 local_df8;
  undefined1 local_df0;
  undefined4 local_def;
  undefined2 local_deb;
  undefined1 local_de9;
  undefined2 local_dd8;
  undefined1 local_dd0;
  undefined4 local_dcf;
  undefined1 local_dcb;
  undefined2 local_db8;
  undefined1 local_db0;
  undefined4 local_daf;
  undefined1 local_dab;
  undefined1 local_daa;
  undefined2 local_d98;
  undefined1 local_d90;
  undefined4 local_d8f;
  undefined2 local_d8b;
  undefined1 local_d89;
  undefined2 local_d78;
  undefined1 local_d70;
  undefined4 local_d6f;
  undefined3 uStack_d6b;
  undefined1 local_d68;
  undefined2 local_d58;
  undefined1 local_d50;
  char local_d4f [8];
  undefined1 local_d47;
  undefined1 local_d46;
  undefined2 local_d38;
  undefined1 local_d30;
  char local_d2f [8];
  char acStack_d27 [8];
  undefined2 local_d1f;
  undefined1 local_d1d;
  undefined2 local_d18;
  undefined1 local_d10;
  undefined4 local_d0f;
  undefined1 local_d0b;
  undefined2 local_cf8;
  undefined1 local_cf0;
  undefined4 local_cef;
  undefined3 uStack_ceb;
  undefined1 local_ce8;
  undefined2 local_cd8;
  undefined1 local_cd0;
  undefined4 local_ccf;
  undefined1 local_ccb;
  undefined2 local_cb8;
  undefined1 local_cb0;
  undefined8 local_caf;
  undefined1 local_ca7;
  undefined2 local_c98;
  undefined1 local_c90;
  char local_c8f [7];
  char cStack_c88;
  char acStack_c87 [7];
  undefined1 local_c80;
  undefined2 local_c78;
  undefined1 local_c70;
  char local_c6f [8];
  undefined1 local_c67;
  undefined1 local_c66;
  undefined2 local_c58;
  undefined1 local_c50;
  char acStack_c4f [5];
  char local_c4a [3];
  char acStack_c47 [5];
  undefined1 local_c42;
  undefined2 local_c38;
  undefined1 local_c30;
  undefined7 uStack_c2f;
  undefined4 local_c28;
  undefined1 local_c24;
  undefined2 local_c18;
  undefined1 local_c10;
  undefined4 local_c0f;
  undefined1 local_c0b;
  undefined1 local_c0a;
  undefined2 local_bf8;
  undefined1 local_bf0;
  undefined4 local_bef;
  undefined1 local_beb;
  undefined2 local_bd8;
  undefined1 local_bd0;
  undefined4 local_bcf;
  undefined1 local_bcb;
  undefined2 local_bb8;
  undefined1 local_bb0;
  undefined8 local_baf;
  undefined1 local_ba7;
  undefined2 local_b98;
  undefined1 local_b90;
  undefined4 uStack_b8f;
  undefined3 uStack_b8b;
  undefined1 local_b88;
  undefined2 local_b78;
  undefined1 local_b70;
  char acStack_b6f [5];
  char local_b6a [3];
  char acStack_b67 [5];
  undefined1 local_b62;
  undefined2 local_b58;
  undefined1 local_b50;
  char local_b4f [8];
  char acStack_b47 [8];
  undefined1 local_b3f;
  undefined1 local_b3e;
  undefined2 local_b38;
  undefined1 local_b30;
  char acStack_b2f [6];
  char local_b29 [2];
  char acStack_b27 [6];
  undefined1 local_b21;
  undefined2 local_b18;
  undefined1 local_b10;
  char acStack_b0f [7];
  char local_b08;
  char acStack_b07 [7];
  undefined1 local_b00;
  undefined2 local_af8;
  undefined1 local_af0;
  undefined7 uStack_aef;
  undefined4 local_ae8;
  undefined1 local_ae4;
  undefined2 local_ad8;
  undefined1 local_ad0;
  char acStack_acf [8];
  char acStack_ac7 [8];
  undefined1 local_abf;
  undefined2 local_ab8;
  undefined1 local_ab0;
  char local_aaf [8];
  undefined1 local_aa7;
  undefined1 local_aa6;
  undefined2 local_a98;
  undefined1 local_a90;
  undefined4 uStack_a8f;
  undefined3 uStack_a8b;
  undefined1 local_a88;
  undefined2 local_a78;
  undefined1 local_a70;
  char acStack_a6f [7];
  char local_a68;
  char acStack_a67 [7];
  undefined1 local_a60;
  undefined2 local_a58;
  undefined1 local_a50;
  char local_a4f [8];
  char acStack_a47 [8];
  undefined1 local_a3f;
  undefined1 local_a3e;
  undefined2 local_a38;
  undefined1 local_a30;
  undefined4 local_a2f;
  undefined2 local_a2b;
  undefined1 local_a29;
  undefined2 local_a18;
  undefined1 local_a10;
  char local_a0f [8];
  undefined1 local_a07;
  undefined1 local_a06;
  undefined2 local_9f8;
  undefined1 local_9f0;
  char acStack_9ef [6];
  char local_9e9 [2];
  char acStack_9e7 [6];
  undefined1 local_9e1;
  undefined2 local_9d8;
  undefined1 local_9d0;
  char acStack_9cf [7];
  char local_9c8;
  char acStack_9c7 [7];
  undefined1 local_9c0;
  undefined2 local_9b8;
  undefined1 local_9b0;
  undefined7 uStack_9af;
  undefined4 local_9a8;
  undefined1 local_9a4;
  undefined2 local_998;
  undefined1 local_990;
  undefined4 uStack_98f;
  undefined3 uStack_98b;
  undefined1 local_988;
  undefined2 local_978;
  undefined1 local_970;
  char acStack_96f [7];
  char local_968;
  char acStack_967 [7];
  undefined1 local_960;
  undefined2 local_958;
  undefined1 local_950;
  char local_94f [8];
  char acStack_947 [8];
  undefined1 local_93f;
  undefined1 local_93e;
  undefined2 local_938;
  undefined1 local_930;
  char local_92f [8];
  undefined1 local_927;
  undefined1 local_926;
  undefined2 local_918;
  undefined1 local_910;
  undefined4 local_90f;
  undefined2 local_90b;
  undefined1 local_909;
  undefined2 local_8f8;
  undefined1 local_8f0;
  undefined2 local_8ef;
  undefined1 local_8ed;
  undefined1 local_8ec;
  undefined2 local_8d8;
  undefined1 local_8d0;
  undefined4 local_8cf;
  undefined1 local_8cb;
  undefined1 local_8ca;
  undefined2 local_8b8;
  undefined1 local_8b0;
  undefined2 local_8af;
  undefined1 local_8ad;
  undefined1 local_8ac;
  undefined2 local_898;
  undefined1 local_890;
  undefined4 uStack_88f;
  undefined3 uStack_88b;
  undefined1 local_888;
  undefined2 local_878;
  undefined1 local_870;
  undefined4 uStack_86f;
  undefined1 local_86b;
  undefined2 local_858;
  undefined1 local_850;
  undefined4 uStack_84f;
  undefined1 local_84b;
  undefined2 local_838;
  undefined1 local_830;
  undefined4 local_82f;
  undefined1 local_82b;
  undefined1 local_82a;
  undefined2 local_818;
  undefined1 local_810;
  char local_80f [8];
  undefined4 local_807;
  undefined1 local_803;
  undefined2 local_7f8;
  undefined1 local_7f0;
  undefined8 uStack_7ef;
  undefined1 local_7e7;
  undefined2 local_7d8;
  undefined1 local_7d0;
  char local_7cf [8];
  undefined2 local_7c7;
  undefined1 local_7c5;
  undefined2 local_7b8;
  undefined1 local_7b0;
  undefined4 local_7af;
  undefined1 local_7ab;
  undefined1 local_7aa;
  undefined2 local_798;
  undefined1 local_790;
  undefined4 local_78f;
  undefined2 local_78b;
  undefined1 local_789;
  undefined2 local_778;
  undefined1 local_770;
  undefined8 uStack_76f;
  undefined1 local_767;
  undefined2 local_758;
  undefined1 local_750;
  undefined7 uStack_74f;
  undefined4 local_748;
  undefined1 local_744;
  undefined2 local_738;
  undefined1 local_730;
  undefined4 local_72f;
  undefined1 local_72b;
  undefined1 local_72a;
  undefined2 local_718;
  undefined1 local_710;
  undefined4 uStack_70f;
  undefined1 local_70b;
  undefined2 local_6f8;
  undefined1 local_6f0;
  char local_6ef [8];
  undefined2 local_6e7;
  undefined1 local_6e5;
  undefined2 local_6d8;
  undefined1 local_6d0;
  char local_6cf [8];
  undefined2 local_6c7;
  undefined1 local_6c5;
  undefined2 local_6b8;
  undefined1 local_6b0;
  undefined7 uStack_6af;
  undefined4 local_6a8;
  undefined1 local_6a4;
  undefined2 local_698;
  undefined1 local_690;
  undefined7 uStack_68f;
  undefined4 local_688;
  undefined1 local_684;
  undefined2 local_678;
  undefined1 local_670;
  undefined4 uStack_66f;
  undefined1 local_66b;
  undefined2 local_658;
  undefined1 local_650;
  undefined4 local_64f;
  undefined1 local_64b;
  undefined1 local_64a;
  undefined2 local_638;
  undefined1 local_630;
  undefined4 local_62f;
  undefined2 local_62b;
  undefined1 local_629;
  undefined2 local_618;
  undefined1 local_610;
  undefined4 uStack_60f;
  undefined1 local_60b;
  undefined2 local_5f8;
  undefined1 local_5f0;
  char local_5ef [8];
  undefined1 local_5e7;
  undefined1 local_5e6;
  undefined2 local_5d8;
  undefined1 local_5d0;
  undefined4 local_5cf;
  undefined2 local_5cb;
  undefined1 local_5c9;
  undefined2 local_5b8;
  undefined1 local_5b0;
  char local_5af [8];
  undefined1 local_5a7;
  undefined1 local_5a6;
  undefined2 local_598;
  undefined1 local_590;
  undefined4 uStack_58f;
  undefined1 local_58b;
  undefined2 local_578;
  undefined1 local_570;
  char local_56f [8];
  undefined1 local_567;
  undefined1 local_566;
  undefined2 local_558;
  undefined1 local_550;
  char local_54f [8];
  undefined2 local_547;
  undefined1 local_545;
  undefined2 local_538;
  undefined1 local_530;
  undefined4 local_52f;
  undefined1 local_52b;
  undefined1 local_52a;
  undefined2 local_518;
  undefined1 local_510;
  undefined4 local_50f;
  undefined2 local_50b;
  undefined1 local_509;
  undefined2 local_4f8;
  undefined1 local_4f0;
  undefined4 uStack_4ef;
  undefined1 local_4eb;
  undefined2 local_4d8;
  undefined1 local_4d0;
  undefined7 uStack_4cf;
  undefined4 local_4c8;
  undefined1 local_4c4;
  undefined2 local_4b8;
  undefined1 local_4b0;
  char acStack_4af [7];
  char local_4a8;
  char acStack_4a7 [7];
  undefined1 local_4a0;
  undefined2 local_498;
  undefined1 local_490;
  char acStack_48f [6];
  char local_489 [2];
  char acStack_487 [6];
  undefined1 local_481;
  undefined2 local_478;
  undefined1 local_470;
  char local_46f [8];
  undefined4 local_467;
  undefined1 local_463;
  undefined2 local_458;
  undefined1 local_450;
  undefined7 uStack_44f;
  undefined4 local_448;
  undefined1 local_444;
  undefined2 local_438;
  undefined1 local_430;
  char acStack_42f [6];
  char local_429 [2];
  char acStack_427 [6];
  undefined1 local_421;
  undefined2 local_418;
  undefined1 local_410;
  char acStack_40f [8];
  undefined7 uStack_407;
  undefined4 local_400;
  undefined1 local_3fc;
  undefined2 local_3f8;
  undefined1 local_3f0;
  undefined7 uStack_3ef;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined2 local_3d8;
  undefined1 local_3d0;
  undefined4 local_3cf;
  undefined2 local_3cb;
  undefined1 local_3c9;
  undefined2 local_3b8;
  undefined1 local_3b0;
  char acStack_3af [7];
  char local_3a8;
  char acStack_3a7 [7];
  undefined1 local_3a0;
  undefined2 local_398;
  undefined1 local_390;
  char local_38f [8];
  undefined2 local_387;
  undefined1 local_385;
  undefined2 local_378;
  undefined1 local_370;
  undefined8 uStack_36f;
  undefined1 local_367;
  undefined2 local_358;
  undefined1 local_350;
  char local_34f [8];
  undefined1 local_347;
  undefined1 local_346;
  undefined2 local_338;
  undefined1 local_330;
  char local_32f [8];
  undefined1 local_327;
  undefined1 local_326;
  undefined2 local_318;
  undefined1 local_310;
  char acStack_30f [5];
  char local_30a [3];
  char acStack_307 [5];
  undefined1 local_302;
  undefined2 local_2f8;
  undefined1 local_2f0;
  undefined4 local_2ef;
  undefined2 local_2eb;
  undefined1 local_2e9;
  undefined2 local_2d8;
  undefined1 local_2d0;
  undefined4 local_2cf;
  undefined2 local_2cb;
  undefined1 local_2c9;
  undefined2 local_2b8;
  undefined1 local_2b0;
  char local_2af [8];
  undefined1 local_2a7;
  undefined1 local_2a6;
  undefined2 local_298;
  undefined1 local_290;
  undefined8 uStack_28f;
  undefined1 local_287;
  undefined2 local_278;
  undefined1 local_270;
  char local_26f [8];
  undefined2 local_267;
  undefined1 local_265;
  undefined2 local_258;
  undefined1 local_250;
  char local_24f [8];
  undefined2 local_247;
  undefined1 local_245;
  undefined2 local_238;
  undefined1 local_230;
  undefined4 local_22f;
  undefined2 local_22b;
  undefined1 local_229;
  undefined2 local_218;
  undefined1 local_210;
  char local_20f [8];
  char acStack_207 [5];
  char acStack_202 [3];
  char acStack_1ff [5];
  undefined1 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f0;
  undefined4 uStack_1ef;
  undefined3 uStack_1eb;
  undefined1 local_1e8;
  undefined2 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1cf;
  undefined1 local_1cb;
  undefined1 local_1ca;
  undefined2 local_1b8;
  undefined1 local_1b0;
  undefined4 uStack_1af;
  undefined3 uStack_1ab;
  undefined1 local_1a8;
  undefined2 local_198;
  undefined1 local_190;
  undefined4 local_18f;
  undefined2 local_18b;
  undefined1 local_189;
  undefined2 local_178;
  undefined1 local_170;
  undefined8 uStack_16f;
  undefined1 local_167;
  undefined2 local_158;
  undefined1 local_150;
  char local_14f [8];
  undefined1 local_147;
  undefined1 local_146;
  undefined2 local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined4 local_128;
  undefined1 local_124;
  undefined2 local_118;
  undefined1 local_110;
  char local_10f [8];
  undefined1 local_107;
  undefined1 local_106;
  undefined2 local_f8;
  undefined1 local_f0;
  char acStack_ef [6];
  char local_e9 [2];
  char acStack_e7 [6];
  undefined1 local_e1;
  undefined2 local_d8;
  undefined1 local_d0;
  char acStack_cf [5];
  char local_ca [3];
  char acStack_c7 [5];
  undefined1 local_c2;
  undefined2 local_b8;
  undefined1 local_b0;
  char acStack_af [5];
  char local_aa [3];
  char acStack_a7 [5];
  undefined1 local_a2;
  undefined2 local_98;
  undefined1 local_90;
  char local_8f [8];
  undefined4 local_87;
  undefined1 local_83;
  undefined2 local_78;
  long local_70;
  
  puVar4 = PTR_atoms_0067d6a8;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_1c18 = 1;
  local_1c10 = 0x14;
  local_1bd0 = 0x1e;
  local_1bb0 = 6;
  local_1b78 = 6;
  local_1aeb = 0x65;
  local_1aef = 0x736f6c63;
  local_1ad8 = 0xb;
  local_1acf = 0x65707974;
  local_1a78 = 0xd;
  local_1a38 = 0xf;
  local_19f8 = 0x13;
  local_1af8 = 10;
  local_1af0 = 10;
  local_1ab0 = 10;
  local_19b8 = 0x15;
  local_1978 = 0x17;
  local_1a6f = 0x7372756f746e6f63;
  local_19f0 = 10;
  local_1bf0 = 0x10;
  local_194f = 0x7261656e696c6962;
  local_1938 = 0x19;
  local_1bd8 = 3;
  local_1c68 = s_isIdentity_00242a23._0_8_;
  local_18f8 = 0x1b;
  local_18ef = 0x6e696f6a;
  local_19eb = 0x68;
  local_18b8 = 0x1d;
  local_1878 = 0x1f;
  local_1baf = 0x746f64;
  local_16d8 = 0x2c;
  local_1c2f = (char  [5])s_lengthSquared_002492d9._0_5_;
  local_1bcf = (char  [7])s_distanceSquared_0024ad4f._0_7_;
  cStack_1bc8 = s_distanceSquared_0024ad4f[7];
  acStack_1bc7 = (char  [7])s_distanceSquared_0024ad4f._8_7_;
  local_1698 = 0x2e;
  local_1c60[0] = s_blendMode_002443b4._0_8_;
  local_16b8 = 0x2d;
  local_1678 = 0x2f;
  local_1c0f = (char  [8])s_normalized_002414a6._0_8_;
  local_1c70 = (byte *)s_colorDodge_0024ad1e._0_8_;
  local_10af = 0x65636e6174736e69;
  local_1638 = 0x31;
  local_1618 = 0x32;
  local_15f8 = 0x33;
  acStack_1c2a = (char  [3])s_lengthSquared_002492d9._5_3_;
  acStack_1c27 = (char  [5])s_lengthSquared_002492d9._8_5_;
  local_1c50[1] = 0x6c;
  local_1c50[2] = 0x65;
  local_1c50[3] = 0x6e;
  local_1c50[4] = 0x67;
  local_1a8d = 100;
  local_15cf = 0x796c7069746c756d;
  local_1b2b = 0x6f54;
  local_1b2f = 0x64617571;
  local_1558 = 0x38;
  local_1b58 = 7;
  local_1838 = 0x21;
  local_152f = 0x6874615077617264;
  local_14d8 = 0x3c;
  local_14b8 = 0x3d;
  local_1478 = 0x3f;
  local_1438 = 0x41;
  local_13f8 = 0x43;
  local_13b8 = 0x45;
  local_1378 = 0x47;
  local_1367 = 0x67;
  local_184f = 0x746e656964617267;
  local_1358 = 0x48;
  local_1338 = 0x49;
  local_1aab = 0x74;
  local_1b8f = 0x7072656c;
  local_1b98 = 5;
  local_1b0f = 0x69627563;
  uStack_1b0b = 0x6f5463;
  local_132f = 0x726f6c6f43746567;
  local_1318 = 0x4a;
  local_12f8 = 0x4b;
  local_12d8 = 0x4c;
  local_176f = 0x74747562;
  local_12b8 = 0x4d;
  local_1738 = 0x29;
  local_1b18 = 9;
  local_16f8 = 0x2b;
  local_12af = 0x7865646e49746567;
  local_1b6f = 0x65766f6d;
  local_1b6b = 0x6f54;
  local_1b4b = 0x6f54;
  local_128f = 0x6567616d49746567;
  local_1b4f = 0x656e696c;
  local_1238 = 0x51;
  local_120f = 0x65726966;
  local_17f8 = 0x23;
  local_11ef = 0x68737570;
  local_1198 = 0x57;
  local_1138 = 0x59;
  local_10f8 = 0x5b;
  local_10b8 = 0x5d;
  local_17ef = 0x6c6c6966;
  local_1058 = 0x60;
  local_17b8 = 0x25;
  local_1578 = 0x37;
  local_1778 = 0x27;
  local_1018 = 0x62;
  local_1758 = 0x28;
  local_154f = 0x79706f63;
  local_1a18 = 0x12;
  local_fd8 = 99;
  local_1bef = 0x65636e6174736964;
  local_14f8 = 0x3b;
  local_1bb8 = 4;
  local_f10 = 4;
  local_14cf = 0x6874615070696c63;
  local_1c50[5] = 0x74;
  local_1c50[6] = 0x68;
  local_1498 = 0x3e;
  local_1c30 = 0x1a;
  local_faf = 0x7265626d754e7369;
  local_1458 = 0x40;
  local_f78 = 0x69;
  local_1418 = 0x42;
  local_f58 = 0x6a;
  local_13d8 = 0x44;
  local_f38 = 0x6b;
  local_1398 = 0x46;
  local_f8f = 0x676e697274537369;
  local_f0f = 0x6469;
  local_1c07 = 0x6465;
  local_15d8 = 0x34;
  local_15b8 = 0x35;
  local_1298 = 0x4e;
  local_1538 = 0x39;
  local_1258 = 0x50;
  local_1218 = 0x52;
  local_ecf = 0x6e6f697461746f72;
  local_14af = 0x65766173;
  local_11f8 = 0x53;
  local_eef = 0x6e6f697469736f70;
  local_1a90 = 6;
  local_11b8 = 0x55;
  local_1a10 = 0x14;
  local_19d8 = 0x14;
  local_1aaf = 0x65736572;
  local_13ef = 0x65756c62;
  local_112f = 0x77617264;
  local_1a8f = 0x6461;
  local_1b10 = 0xe;
  local_1a58 = 0xe;
  local_1a50 = 0xe;
  local_1bf8 = 2;
  local_1598 = 0x36;
  local_1278 = 0x4f;
  local_10d8 = 0x5c;
  local_1518 = 0x3a;
  local_11d8 = 0x54;
  local_1098 = 0x5e;
  local_1178 = 0x58;
  local_1a2f = 0x65766e69;
  local_118f = 0x70617773;
  local_1a0f = (char  [8])s_isIdentity_00242a23._0_8_;
  local_1a2b = 0x7472;
  local_1118 = 0x5a;
  local_1a07 = 0x7974;
  local_1078 = 0x5f;
  local_1a4f = 0x7361656d;
  uStack_1a4b = 0x657275;
  local_19ef = 0x74646977;
  local_19cb = 0x7468;
  local_19cf = 0x67696568;
  local_1ab8 = 0x10;
  local_19af = 0x6d616c63;
  local_1a70 = 0x10;
  local_198f = 0x65706572;
  local_196b = 0x726f;
  local_1c50[0] = 0xc;
  local_196f = 0x7272696d;
  local_198b = 0x7461;
  local_1b90 = 8;
  local_1b38 = 8;
  local_190f = 0x6c797473;
  local_18cf = 0x6163;
  local_19b0 = 10;
  local_18af = (char  [8])s_thickness_0024da1d._0_8_;
  local_1ad0 = 8;
  local_188f = (char  [8])s_blendMode_002443b4._0_8_;
  local_1c50[7] = 0;
  local_1c38[0] = 0;
  local_182f = 0x6f6c6f63;
  local_1c22 = 0;
  local_186f = 0x74616566;
  uStack_186b = 0x726568;
  local_1c05 = 0;
  local_180f = 0x6f727473;
  local_180b = 0x656b;
  local_1be7 = 0;
  local_17cf = 0x6574696d;
  local_1bc0 = 0;
  local_17af = 0x6e756f72;
  local_1b8b = 0;
  local_178f = 0x65766562;
  local_1b70 = 0xc;
  local_174f = 0x61757173;
  local_174b = 0x6572;
  local_172f = 0x4f637273;
  uStack_172b = 0x726576;
  local_1b69 = 0;
  local_170f = 0x65726373;
  local_170b = 0x6e65;
  local_16cb = 0x6e65;
  local_16cf = 0x6b726164;
  local_1b50 = 0xc;
  local_1b49 = 0;
  local_16ef = 0x7265766f;
  uStack_16eb = 0x79616c;
  local_16af = 0x6867696c;
  uStack_16ab = 0x6e6574;
  local_1687 = 0x6567;
  local_1b30 = 0xc;
  local_168f = (char  [8])s_colorDodge_0024ad1e._0_8_;
  local_1b29 = 0;
  local_166f = (char  [8])s_colorBurn_00243035._0_8_;
  local_1b08 = 0;
  local_164f = (char  [8])s_hardLight_0024143e._0_8_;
  local_1acb = 0;
  local_1aaa = 0;
  local_162f = (char  [8])s_softLight_0024b4a7._0_8_;
  local_1607 = 0x6563;
  local_160f = (char  [8])s_difference_00242a2e._0_8_;
  local_1a98 = 0xc;
  local_1a8c = 0;
  local_15ef = (char  [8])s_exclusion_002435f7._0_8_;
  local_15af = 0x7568;
  local_1587 = 0x6e6f;
  local_158f = (char  [8])s_saturation_0024c28c._0_8_;
  local_1567 = 0x7974;
  local_156f = (char  [8])s_luminosity_00245eb2._0_8_;
  local_146f = (char  [8])s_transform_0024a732._0_8_;
  uVar23 = 0;
  local_192f = 0x7261656e;
  uStack_192b = 0x747365;
  local_148f = 0x74736572;
  uStack_148b = 0x65726f;
  local_142f = 0x6572;
  local_150f = (char  [8])s_drawImage_00249295._0_8_;
  local_140f = 0x65657267;
  acStack_14e7 = (char  [5])s_drawImageMesh_00248a8c._8_5_;
  local_13cf = 0x68706c61;
  acStack_14ef = (char  [5])s_drawImageMesh_00248a8c._0_5_;
  local_14ea = (char  [3])s_drawImageMesh_00248a8c._5_3_;
  local_13af = (char  [8])s_getNumber_0024a00b._0_8_;
  local_144f = 0x756c6176;
  uVar22 = 0;
  local_138f = (char  [8])s_getTrigger_00243b9f._0_8_;
  local_1347 = 0x6e61;
  local_134f = (char  [8])s_getBoolean_00245ebd._0_8_;
  local_136f = (char  [8])s_getString_00243baa._0_8_;
  local_12e7 = 0x6c65646f;
  local_12ef = (char  [8])s_getViewModel_0024c297._0_8_;
  local_1387 = 0x7265;
  local_126f = 0x756c6176;
  local_12cf = 0x45746567;
  uStack_12cb = 0x6d756e;
  local_1a67 = 0;
  local_130f = 0x4c746567;
  uStack_130b = 0x747369;
  local_126b = 0x7365;
  local_124f = (undefined7)s_addListener_0024ad29._0_8_;
  local_11cf = 0x65736e69;
  acStack_1227 = (char  [6])s_removeListener_00242306._8_6_;
  acStack_122f = (char  [6])s_removeListener_00242306._0_6_;
  local_1229 = (char  [2])s_removeListener_00242306._6_2_;
  local_114f = 0x61656c63;
  local_11cb = 0x7472;
  local_11af = 0x6f70;
  local_10ef = (undefined7)s_frameOrigin_00247e5a._0_8_;
  local_108f = (char  [8])s_animation_0024b4b1._0_8_;
  uStack_1248 = 0x72656e65;
  local_116f = 0x66696873;
  local_102f = (undefined7)s_pointerDown_00243111._0_8_;
  uStack_10e8 = 0x6e696769;
  local_104b = 0x7364;
  local_110f = 0x61766461;
  uStack_110b = 0x65636e;
  local_104f = 0x6e756f62;
  local_100f = (char  [8])s_pointerUp_0024693d._0_8_;
  local_fef = (undefined7)s_pointerMove_0024238d._0_8_;
  local_106f = 0x656e;
  local_fcf = (undefined7)s_pointerExit_0024441a._0_8_;
  local_e6f = 0x6c616373;
  uStack_1028 = 0x6e776f44;
  local_f6f = (char  [8])s_isBoolean_00248a9a._0_8_;
  local_e4f = 0x6c616373;
  uStack_fe8 = 0x65766f4d;
  uVar21 = 0x1e;
  local_f2f = 0x6968;
  local_eaf = 0x6c616373;
  local_19ab = 0x70;
  local_1998 = 0x16;
  uStack_fc8 = 0x74697845;
  local_d8b = 0x6874;
  local_f4f = 0x6f437369;
  uStack_f4b = 0x726f6c;
  acStack_e87 = (char  [6])s_worldTransform_0024a015._8_6_;
  acStack_e8f = (char  [6])s_worldTransform_0024a015._0_6_;
  local_e89 = (char  [2])s_worldTransform_0024a015._6_2_;
  local_e6b = 0x5865;
  local_e4b = 0x5965;
  local_1a48 = 0;
  local_e2f = (char  [8])s_decompose_002443be._0_8_;
  local_1a30 = 0xc;
  local_daf = 0x6e696170;
  local_1a29 = 0;
  local_d8f = 0x61507361;
  local_d4f = (char  [8])s_addToPath_002443c8._0_8_;
  local_d58 = 0x79;
  local_c8f = (char  [7])s_markNeedsUpdate_00241448._0_7_;
  cStack_c88 = s_markNeedsUpdate_00241448[7];
  acStack_c87 = (char  [7])s_markNeedsUpdate_00241448._8_7_;
  local_1a05 = 0;
  local_c6f = (char  [8])s_viewModel_00246e63._0_8_;
  acStack_c47 = (char  [5])s_rootViewModel_0024929f._8_5_;
  acStack_c4f = (char  [5])s_rootViewModel_0024929f._0_5_;
  local_c4a = (char  [3])s_rootViewModel_0024929f._5_3_;
  uStack_c2f = (undefined7)s_dataContext_0024da27._0_8_;
  local_c78 = 0x80;
  acStack_b67 = (char  [5])s_setTimeFrames_00243bb4._8_5_;
  local_178b = 0x6c;
  acStack_b6f = (char  [5])s_setTimeFrames_00243bb4._0_5_;
  local_b6a = (char  [3])s_setTimeFrames_00243bb4._5_3_;
  acStack_b27 = (char  [6])s_isPointerEvent_0024ad35._8_6_;
  acStack_b2f = (char  [6])s_isPointerEvent_0024ad35._0_6_;
  local_b29 = (char  [2])s_isPointerEvent_0024ad35._6_2_;
  acStack_b0f = (char  [7])s_isKeyboardEvent_002452fa._0_7_;
  uStack_aef = (undefined7)s_isTextInput_002476d0._0_8_;
  acStack_a6f = (char  [7])s_isReportedEvent_00242315._0_7_;
  acStack_9e7 = (char  [6])s_asPointerEvent_00246e6d._8_6_;
  acStack_9ef = (char  [6])s_asPointerEvent_00246e6d._0_6_;
  local_9e9 = (char  [2])s_asPointerEvent_00246e6d._6_2_;
  acStack_9cf = (char  [7])s_asKeyboardEvent_00241c67._0_7_;
  uStack_9af = (undefined7)s_asTextInput_00243bcc._0_8_;
  local_f18 = 0x6c;
  acStack_96f = (char  [7])s_asReportedEvent_0024a024._0_7_;
  local_a2b = 0x656e;
  local_a2f = 0x6f4e7369;
  local_c67 = 0x6c;
  local_90b = 0x656e;
  local_90f = 0x6f4e7361;
  local_8ed = 0x79;
  local_8ef = 0x656b;
  uStack_86f = 0x6174656d;
  local_10cf = 0x61746164;
  local_c58 = 0x81;
  local_b08 = s_isKeyboardEvent_002452fa[7];
  acStack_b07 = (char  [7])s_isKeyboardEvent_002452fa._8_7_;
  local_c38 = 0x82;
  local_e0f = 0x6e6572646c696863;
  local_c28 = 0x74786574;
  local_dcf = 0x65646f6e;
  local_c18 = 0x86;
  local_d0f = 0x70726177;
  local_af8 = 0x9e;
  local_ad8 = 0x9f;
  local_9c8 = s_asKeyboardEvent_00241c67[7];
  acStack_9c7 = (char  [7])s_asKeyboardEvent_00241c67._8_7_;
  local_caf = 0x6465736f6c437369;
  local_9b8 = 0xa6;
  local_ccf = 0x7478656e;
  uStack_84f = 0x74786574;
  local_ae8 = 0x7475706e;
  local_9a8 = 0x7475706e;
  local_80f = (char  [8])s_delaySeconds_00249971._0_8_;
  local_807 = 0x73646e6f;
  local_998 = 0xa7;
  uStack_7ef = 0x6449656369766564;
  local_7c7 = 0x6b73;
  local_968 = s_asReportedEvent_0024a024[7];
  acStack_967 = (char  [7])s_asReportedEvent_0024a024._8_7_;
  local_7cf = (char  [8])s_buttonMask_0024a65b._0_8_;
  local_78b = 0x6576;
  local_78f = 0x6f6d6572;
  uStack_a8f = 0x6f467369;
  uStack_a8b = 0x737563;
  uStack_98f = 0x6f467361;
  uStack_98b = 0x737563;
  uStack_76f = 0x744165766f6d6572;
  uStack_74f = (undefined7)s_removeAllOf_0024c87c._0_8_;
  uStack_70f = 0x79616c70;
  local_978 = 0xa8;
  local_958 = 0xa9;
  uStack_6af = (undefined7)s_playAtFrame_002468fe._0_8_;
  uStack_68f = (undefined7)s_playInFrame_0024bba0._0_8_;
  uStack_66f = 0x706f7473;
  uStack_60f = 0x6b656573;
  local_1818 = 0x22;
  uStack_58f = 0x656d6974;
  local_547 = 0x6574;
  local_b50 = 0x22;
  local_54f = (char  [8])s_sampleRate_00247e66._0_8_;
  local_50b = 0x6461;
  local_a50 = 0x22;
  local_50f = 0x6f6c7075;
  uStack_4ef = 0x77656976;
  uStack_4cf = (undefined7)s_setPipeline_00245a87._0_8_;
  local_19ea = 0;
  acStack_4af = (char  [7])s_setVertexBuffer_002443d2._0_7_;
  acStack_487 = (char  [6])s_setIndexBuffer_00245312._8_6_;
  acStack_48f = (char  [6])s_setIndexBuffer_00245312._0_6_;
  local_489 = (char  [2])s_setIndexBuffer_00245312._6_2_;
  local_467 = 0x70756f72;
  local_46f = (char  [8])s_setBindGroup_00245321._0_8_;
  local_19d0 = 0xc;
  uStack_44f = (undefined7)s_setViewport_002476e6._0_8_;
  acStack_427 = (char  [6])s_setScissorRect_00242325._8_6_;
  acStack_42f = (char  [6])s_setScissorRect_00242325._0_6_;
  local_429 = (char  [2])s_setScissorRect_00242325._6_2_;
  local_19c9 = 0;
  acStack_3af = (char  [7])s_beginRenderPass_0024532e._0_7_;
  acStack_307 = (char  [5])s_setBlendColor_00248aa4._8_5_;
  acStack_30f = (char  [5])s_setBlendColor_00248aa4._0_5_;
  local_30a = (char  [3])s_setBlendColor_00248aa4._5_3_;
  local_2eb = 0x657a;
  local_17ab = 100;
  local_2ef = 0x69736572;
  local_142d = 100;
  local_7af = 0x73697861;
  local_7ab = 0x30;
  local_1658 = 0x30;
  local_13cb = 0x61;
  local_a0f = (char  [8])s_isGamepad_00243bc2._0_8_;
  local_a07 = 100;
  local_1038 = 0x61;
  local_92f = (char  [8])s_asGamepad_002476dc._0_8_;
  local_927 = 100;
  local_ff8 = 100;
  local_5af = (char  [8])s_completed_00240583._0_8_;
  local_5a7 = 100;
  local_1467 = 0x6d;
  local_ef8 = 0x6d;
  local_1667 = 0x6e;
  local_15e7 = 0x6e;
  local_140b = 0x6e;
  local_1087 = 0x6e;
  local_f67 = 0x6e;
  local_ed8 = 0x6e;
  local_72b = 0x6f;
  local_72f = 0x69647561;
  local_eb8 = 0x6f;
  local_19aa = 0;
  local_aaf = (char  [8])s_timeStamp_00242a3f._0_8_;
  local_aa7 = 0x70;
  local_18cd = 0x70;
  local_11ad = 0x70;
  local_1007 = 0x70;
  local_e98 = 0x70;
  local_e78 = 0x71;
  local_182b = 0x72;
  local_17cb = 0x72;
  local_13a7 = 0x72;
  local_114b = 0x72;
  local_e58 = 0x72;
  local_df8 = 0x75;
  local_1647 = 0x74;
  local_def = 0x65726170;
  local_deb = 0x746e;
  local_d1f = 0x746e;
  local_d18 = 0x7b;
  local_cf8 = 0x7c;
  local_dd8 = 0x76;
  local_cef = 0x72747865;
  uStack_ceb = 0x746361;
  local_cd8 = 0x7d;
  local_cb8 = 0x7e;
  local_c98 = 0x7f;
  local_8cf = 0x66696873;
  local_8cb = 0x74;
  local_8af = 0x6c61;
  local_c0f = 0x67616d69;
  local_c0b = 0x65;
  local_bf8 = 0x83;
  local_8ad = 0x74;
  local_bef = 0x626f6c62;
  local_bd8 = 0x84;
  local_d98 = 0x78;
  local_bcf = 0x657a6973;
  local_bb8 = 0x85;
  local_d78 = 0x7a;
  local_1627 = 0x74;
  local_d6f = 0x61507361;
  uStack_d6b = 0x746e69;
  local_d38 = 0x66;
  local_baf = 0x6e6f697461727564;
  local_17d8 = 0x24;
  local_d30 = 0x24;
  local_b98 = 0x97;
  uStack_b8f = 0x54746573;
  uStack_b8b = 0x656d69;
  acStack_d27 = (char  [8])s_positionAndTangent_002452e7._8_8_;
  local_d2f = (char  [8])s_positionAndTangent_002452e7._0_8_;
  local_b78 = 0x98;
  local_b58 = 0x99;
  acStack_b47 = (char  [8])s_setTimePercentage_00240d85._8_8_;
  local_b4f = (char  [8])s_setTimePercentage_00240d85._0_8_;
  local_b3f = 0x65;
  acStack_ac7 = (char  [8])s_previousPosition_00241ca5._8_8_;
  acStack_acf = (char  [8])s_previousPosition_00241ca5._0_8_;
  local_b38 = 0x9a;
  local_ab8 = 0x9b;
  local_b18 = 0x9d;
  local_a98 = 0x9c;
  local_1858 = 0x20;
  local_ad0 = 0x20;
  local_a78 = 0xa0;
  local_a68 = s_isReportedEvent_00242315[7];
  acStack_a67 = (char  [7])s_isReportedEvent_00242315._8_7_;
  local_a58 = 0xa1;
  acStack_a47 = (char  [8])s_isViewModelChange_00248534._8_8_;
  local_a4f = (char  [8])s_isViewModelChange_00248534._0_8_;
  local_93f = 0x65;
  acStack_947 = (char  [8])s_asViewModelChange_0024d365._8_8_;
  local_94f = (char  [8])s_asViewModelChange_0024d365._0_8_;
  local_938 = 0xaa;
  local_918 = 0xab;
  local_8f8 = 0xac;
  local_8d8 = 0xad;
  local_1158 = 0x56;
  local_8b8 = 0x56;
  local_18d0 = 6;
  local_15b0 = 6;
  local_1430 = 6;
  local_11b0 = 6;
  local_1070 = 6;
  local_f30 = 6;
  local_8f0 = 6;
  local_8b0 = 6;
  local_898 = 0xae;
  local_a3f = 0x65;
  uStack_88f = 0x746e6f63;
  uStack_88b = 0x6c6f72;
  local_878 = 0xaf;
  local_858 = 0xb0;
  local_838 = 0xb1;
  local_82b = 0x65;
  local_82f = 0x73616870;
  local_818 = 0xb2;
  local_7f8 = 0xb3;
  local_7d8 = 0xb4;
  local_7b8 = 0xb5;
  local_798 = 0xb6;
  local_778 = 0xb7;
  local_758 = 0xb8;
  local_a38 = 0xa2;
  local_a18 = 0xa3;
  local_748 = 0x664f6c6c;
  local_9f8 = 0xa4;
  local_738 = 0xb9;
  local_9d8 = 0xa5;
  local_718 = 0x87;
  local_950 = 0x22;
  local_6f8 = 0x88;
  local_6ef = (char  [8])s_playAtTime_00244b58._0_8_;
  local_6e7 = 0x656d;
  local_6d8 = 0x89;
  local_6c7 = 0x656d;
  local_6cf = (char  [8])s_playInTime_00245368._0_8_;
  local_6b8 = 0x8a;
  local_698 = 0x8b;
  local_116b = 0x74;
  local_6a8 = 0x656d6172;
  local_688 = 0x656d6172;
  local_678 = 0x8c;
  local_658 = 0x8d;
  local_64b = 0x65;
  local_64f = 0x73756170;
  local_638 = 0x8e;
  local_62b = 0x656d;
  local_62f = 0x75736572;
  local_618 = 0x8f;
  local_5f8 = 0x90;
  local_5e7 = 0x65;
  local_5ef = (char  [8])s_seekFrame_0024b4bb._0_8_;
  local_5d8 = 0x91;
  local_5cb = 0x656d;
  local_5cf = 0x756c6f76;
  local_5b8 = 0x92;
  local_598 = 0x93;
  local_578 = 0x94;
  local_567 = 0x65;
  local_56f = (char  [8])s_timeFrame_002405cc._0_8_;
  local_558 = 0x95;
  local_538 = 0x96;
  local_52b = 0x65;
  local_4c8 = 0x656e696c;
  local_4b8 = 0xbd;
  local_7b0 = 10;
  local_52f = 0x74697277;
  local_518 = 0xba;
  local_4f8 = 0xbb;
  local_18f0 = 8;
  local_770 = 0x10;
  local_7f0 = 0x10;
  local_7d0 = 0x14;
  local_4d8 = 0xbc;
  local_830 = 10;
  local_17f0 = 8;
  local_34f = (char  [8])s_colorView_002443e2._0_8_;
  local_338 = 0xca;
  local_1770 = 8;
  local_1550 = 8;
  local_14b0 = 8;
  local_32f = (char  [8])s_depthView_00243051._0_8_;
  local_327 = 0x77;
  local_318 = 0xcb;
  local_2f8 = 0xc4;
  local_13f0 = 8;
  local_2d8 = 0xcc;
  local_2cf = 0x766e6163;
  local_2cb = 0x7361;
  local_890 = 0xe;
  local_1930 = 0xe;
  local_1918 = 0x1a;
  local_8d0 = 10;
  local_1910 = 10;
  local_190b = 0x65;
  local_1887 = 0x65;
  local_9b0 = 0x16;
  local_af0 = 0x16;
  local_b70 = 0x1a;
  local_14f0 = 0x1a;
  local_c50 = 0x1a;
  local_d47 = 0x68;
  local_f98 = 0x68;
  local_158 = 0xd8;
  local_4a8 = s_setVertexBuffer_002443d2[7];
  acStack_4a7 = (char  [7])s_setVertexBuffer_002443d2._8_7_;
  local_498 = 0xbe;
  local_478 = 0xbf;
  local_458 = 0xc0;
  local_18d8 = 0x1c;
  local_9f0 = 0x1c;
  local_448 = 0x74726f70;
  local_1690 = 0x14;
  local_1610 = 0x14;
  local_1590 = 0x14;
  local_1570 = 0x14;
  local_2b8 = 0xcd;
  local_310 = 0x1a;
  local_438 = 0xc1;
  local_418 = 0xc2;
  uStack_407 = (undefined7)s_setStencilReference_00243bd8._8_8_;
  acStack_40f = (char  [8])s_setStencilReference_00243bd8._0_8_;
  local_2a7 = 0x73;
  local_400 = 0x65636e65;
  local_3f8 = 0xc3;
  local_1210 = 8;
  local_11f0 = 8;
  local_2af = (char  [8])s_gpuCanvas_00247e40._0_8_;
  local_1190 = 8;
  local_1130 = 8;
  uStack_3ef = (undefined7)s_drawIndexed_00243045._0_8_;
  local_10d0 = 8;
  local_3e8 = 0x64657865;
  local_dd0 = 8;
  local_298 = 0xce;
  local_d10 = 8;
  local_cd0 = 8;
  uStack_28f = 0x7365727574616566;
  local_bf0 = 8;
  local_bd0 = 8;
  local_3d8 = 0xc5;
  local_3cb = 0x6873;
  local_870 = 8;
  local_3cf = 0x696e6966;
  local_850 = 8;
  local_710 = 8;
  local_3b8 = 0xc6;
  local_278 = 0xd0;
  local_270 = 0x14;
  local_390 = 0x14;
  local_670 = 8;
  local_610 = 8;
  local_590 = 8;
  local_4f0 = 8;
  local_347 = 0x77;
  local_18b0 = 0x12;
  local_930 = 0x12;
  local_1890 = 0x12;
  local_f2d = 0x74;
  local_e18 = 0x74;
  local_dab = 0x74;
  local_1898 = 0x1e;
  local_970 = 0x1e;
  local_1990 = 0xc;
  local_1c78 = 0;
  local_789 = 0;
  local_790 = 0xc;
  local_7aa = 0;
  local_7c5 = 0;
  local_7e7 = 0;
  local_803 = 0;
  local_810 = 0x18;
  local_82a = 0;
  local_84b = 0;
  local_86b = 0;
  local_1989 = 0;
  local_888 = 0;
  local_1970 = 0xc;
  local_1969 = 0;
  local_8ac = 0;
  local_1958 = 0x18;
  local_1950 = 0x10;
  local_1947 = 0;
  local_8ca = 0;
  local_1928 = 0;
  local_8ec = 0;
  local_190a = 0;
  local_18eb = 0;
  local_909 = 0;
  local_18cc = 0;
  local_910 = 0xc;
  local_18a7 = 0x73;
  local_926 = 0;
  local_18a6 = 0;
  local_93e = 0;
  local_1886 = 0;
  local_1870 = 0xe;
  local_1868 = 0;
  local_960 = 0;
  local_1850 = 0x10;
  local_1847 = 0;
  local_988 = 0;
  local_1830 = 10;
  local_990 = 0xe;
  local_182a = 0;
  local_9a4 = 0;
  local_1810 = 0xc;
  local_1809 = 0;
  local_9c0 = 0;
  local_17eb = 0;
  local_9d0 = 0x1e;
  local_17d0 = 10;
  local_9e1 = 0;
  local_17ca = 0;
  local_17b0 = 10;
  local_a06 = 0;
  local_17aa = 0;
  local_1798 = 0x26;
  local_a10 = 0x12;
  local_1790 = 10;
  local_a29 = 0;
  local_178a = 0;
  local_176b = 0;
  local_a30 = 0xc;
  local_1750 = 0xc;
  local_a3e = 0;
  local_1749 = 0;
  local_1730 = 0xe;
  local_1728 = 0;
  local_1718 = 0x2a;
  local_3a8 = s_beginRenderPass_0024532e[7];
  acStack_3a7 = (char  [7])s_beginRenderPass_0024532e._8_7_;
  local_398 = 199;
  local_a60 = 0;
  local_387 = 0x656d;
  local_38f = (char  [8])s_beginFrame_002492b1._0_8_;
  local_267 = 0x7361;
  local_378 = 200;
  local_26f = (char  [8])s_drawCanvas_00240e32._0_8_;
  local_218 = 0xd2;
  local_1710 = 0xc;
  local_a70 = 0x1e;
  local_1709 = 0;
  uStack_36f = 0x656d617246646e65;
  local_258 = 0xcf;
  local_a88 = 0;
  local_247 = 0x7265;
  local_24f = (char  [8])s_loadShader_0024ad44._0_8_;
  local_238 = 0xd1;
  local_358 = 0xc9;
  local_16f0 = 0xe;
  local_a90 = 0xe;
  local_22b = 0x7461;
  local_16e8 = 0;
  local_22f = 0x6d726f66;
  local_aa6 = 0;
  acStack_1ff = (char  [5])s_preferredCanvasFormat_0024bb19._16_5_;
  local_16d0 = 0xc;
  acStack_207 = (char  [5])s_preferredCanvasFormat_0024bb19._8_5_;
  acStack_202 = (char  [3])s_preferredCanvasFormat_0024bb19._13_3_;
  local_20f = (char  [8])s_preferredCanvasFormat_0024bb19._0_8_;
  local_16c9 = 0;
  local_1f8 = 0xd3;
  local_ab0 = 0x12;
  uStack_1ef = 0x54646e61;
  uStack_1eb = 0x6e6568;
  local_1d8 = 0xd4;
  local_16b0 = 0xe;
  local_abf = 0;
  local_1cb = 0x68;
  local_1cf = 0x63746163;
  local_16a8 = 0;
  local_1685 = 0;
  local_1b8 = 0xd5;
  local_ae4 = 0;
  uStack_1af = 0x616e6966;
  uStack_1ab = 0x796c6c;
  local_198 = 0xd6;
  local_1670 = 0x12;
  local_18b = 0x6c65;
  local_1666 = 0;
  local_18f = 0x636e6163;
  local_b00 = 0;
  local_1650 = 0x12;
  local_b10 = 0x1e;
  local_178 = 0xd7;
  uStack_16f = 0x6c65636e61436e6f;
  local_1646 = 0;
  local_b21 = 0;
  local_1630 = 0x12;
  local_147 = 0x73;
  local_14f = (char  [8])s_getStatus_00243601._0_8_;
  uStack_12f = (undefined7)s_decodeImage_00242334._0_8_;
  local_b30 = 0x1c;
  local_1626 = 0;
  local_b3e = 0;
  local_138 = 0xd9;
  local_1605 = 0;
  local_128 = 0x6567616d;
  local_118 = 0xda;
  local_15f0 = 0x12;
  local_107 = 0x65;
  local_10f = (char  [8])s_transpose_00248546._0_8_;
  local_f8 = 0xdb;
  local_15e6 = 0;
  local_b62 = 0;
  acStack_e7 = (char  [6])s_transformPoint_00246e7c._8_6_;
  acStack_ef = (char  [6])s_transformPoint_00246e7c._0_6_;
  local_e9 = (char  [2])s_transformPoint_00246e7c._6_2_;
  local_d8 = 0xdc;
  acStack_c7 = (char  [5])s_transformVec4_0024058d._8_5_;
  local_15d0 = 0x10;
  acStack_cf = (char  [5])s_transformVec4_0024058d._0_5_;
  local_ca = (char  [3])s_transformVec4_0024058d._5_3_;
  local_15c7 = 0;
  local_b88 = 0;
  acStack_a7 = (char  [5])s_writeToBuffer_0024b4c5._8_5_;
  acStack_af = (char  [5])s_writeToBuffer_0024b4c5._0_5_;
  local_aa = (char  [3])s_writeToBuffer_0024b4c5._5_3_;
  local_98 = 0xde;
  local_15ad = 0x65;
  local_b90 = 0xe;
  local_15ac = 0;
  local_ba7 = 0;
  local_bb0 = 0x10;
  local_1585 = 0;
  local_bcb = 0;
  local_1565 = 0;
  local_154b = 0;
  local_beb = 0;
  local_1530 = 0x10;
  local_1527 = 0;
  local_1510 = 0x12;
  local_c0a = 0;
  local_1507 = 0x65;
  local_1506 = 0;
  local_c10 = 10;
  local_c24 = 0;
  local_14e2 = 0;
  local_c30 = 0x16;
  local_14d0 = 0x10;
  local_c42 = 0;
  local_14c7 = 0;
  local_14ab = 0;
  local_c66 = 0;
  local_1490 = 0xe;
  local_1488 = 0;
  local_c70 = 0x12;
  local_1470 = 0x12;
  local_c80 = 0;
  local_1466 = 0;
  local_c90 = 0x1e;
  local_1450 = 10;
  local_ca7 = 0;
  local_144b = 0x65;
  local_cb0 = 0x10;
  local_144a = 0;
  local_ccb = 0;
  local_142c = 0;
  local_1410 = 10;
  local_140a = 0;
  local_ce8 = 0;
  local_13eb = 0;
  local_cf0 = 0xe;
  local_13d0 = 10;
  local_d0b = 0;
  local_13ca = 0;
  local_13b0 = 0x12;
  local_13a6 = 0;
  local_d1d = 0;
  local_1390 = 0x14;
  local_1385 = 0;
  local_1370 = 0x12;
  local_1366 = 0;
  local_d46 = 0;
  local_1350 = 0x14;
  local_d50 = 0x12;
  local_d68 = 0;
  local_1345 = 0;
  local_d70 = 0xe;
  local_1330 = 0x10;
  local_d89 = 0;
  local_1327 = 0;
  local_1310 = 0xe;
  local_d90 = 0xc;
  local_1308 = 0;
  local_daa = 0;
  local_12f0 = 0x18;
  local_12e3 = 0;
  local_db0 = 10;
  local_db8 = 0x77;
  local_dcb = 0;
  local_12d0 = 0xe;
  local_12c8 = 0;
  local_12b0 = 0x10;
  local_de9 = 0;
  local_12a7 = 0;
  local_1290 = 0x10;
  local_df0 = 0xc;
  local_1287 = 0;
  local_e07 = 0;
  local_1270 = 0xc;
  local_e10 = 0x10;
  local_1269 = 0;
  local_e26 = 0;
  local_e27 = 0x65;
  local_1250 = 0x16;
  local_e30 = 0x12;
  local_e38 = 0x73;
  local_e49 = 0;
  local_1244 = 0;
  local_1230 = 0x1c;
  local_e50 = 0xc;
  local_1221 = 0;
  local_e69 = 0;
  local_120b = 0;
  local_11eb = 0;
  local_e70 = 0xc;
  local_11d0 = 0xc;
  local_e81 = 0;
  local_11c9 = 0;
  local_e90 = 0x1c;
  local_11ac = 0;
  local_eaa = 0;
  local_eab = 0x65;
  local_629 = 0;
  local_eb0 = 10;
  local_118b = 0;
  local_ec7 = 0;
  local_1170 = 10;
  local_ed0 = 0x10;
  local_116a = 0;
  local_ee7 = 0;
  local_346 = 0;
  local_ef0 = 0x10;
  local_1150 = 10;
  local_f0d = 0;
  local_114a = 0;
  local_112b = 0;
  local_1110 = 0xe;
  local_f2c = 0;
  local_1108 = 0;
  local_10f0 = 0x16;
  local_10e4 = 0;
  local_330 = 0x12;
  local_f48 = 0;
  local_10cb = 0;
  local_f50 = 0xe;
  local_10b0 = 0x10;
  local_f66 = 0;
  local_10a7 = 0;
  local_1090 = 0x12;
  local_f70 = 0x12;
  local_1086 = 0;
  local_f87 = 0;
  local_326 = 0;
  local_f90 = 0x10;
  local_fa7 = 0;
  local_106d = 0x77;
  local_fb0 = 0x10;
  local_fb8 = 0x65;
  local_fc4 = 0;
  local_106c = 0;
  local_fd0 = 0x16;
  local_fe4 = 0;
  local_60b = 0;
  local_ff0 = 0x16;
  local_1050 = 0xc;
  local_1006 = 0;
  local_1049 = 0;
  local_1030 = 0x16;
  local_1010 = 0x12;
  local_1024 = 0;
  local_767 = 0;
  local_5f0 = 0x12;
  local_750 = 0x16;
  local_744 = 0;
  local_730 = 10;
  local_5e6 = 0;
  local_72a = 0;
  local_70b = 0;
  local_302 = 0;
  local_6f0 = 0x14;
  local_6e5 = 0;
  local_6d0 = 0x14;
  local_6c5 = 0;
  local_6b0 = 0x16;
  local_6a4 = 0;
  local_690 = 0x16;
  local_5c9 = 0;
  local_684 = 0;
  local_2f0 = 0xc;
  local_66b = 0;
  local_150 = 0x12;
  local_650 = 10;
  local_64a = 0;
  local_630 = 0xc;
  local_5d0 = 0xc;
  local_5b0 = 0x12;
  local_5a6 = 0;
  local_58b = 0;
  local_570 = 0x12;
  local_566 = 0;
  local_2e9 = 0;
  local_550 = 0x14;
  local_545 = 0;
  local_530 = 10;
  local_52a = 0;
  local_510 = 0xc;
  local_2d0 = 0xc;
  local_509 = 0;
  local_4eb = 0;
  local_4d0 = 0x16;
  local_4c4 = 0;
  local_4b0 = 0x1e;
  local_4a0 = 0;
  local_490 = 0x1c;
  local_481 = 0;
  local_470 = 0x18;
  local_463 = 0;
  local_2c9 = 0;
  local_450 = 0x16;
  local_444 = 0;
  local_430 = 0x1c;
  local_2b0 = 0x12;
  local_410 = 0x26;
  local_421 = 0;
  local_3fc = 0;
  local_2a6 = 0;
  local_3f0 = 0x16;
  local_290 = 0x10;
  local_3e4 = 0;
  local_3d0 = 0xc;
  local_3c9 = 0;
  local_287 = 0;
  local_3b0 = 0x1e;
  local_3a0 = 0;
  local_385 = 0;
  local_265 = 0;
  local_370 = 0x10;
  local_367 = 0;
  local_350 = 0x12;
  local_250 = 0x14;
  local_245 = 0;
  local_230 = 0xc;
  local_229 = 0;
  local_210 = 0x2a;
  local_1fa = 0;
  local_1f0 = 0xe;
  local_1e8 = 0;
  local_1d0 = 10;
  local_1ca = 0;
  local_1b0 = 0xe;
  local_1a8 = 0;
  local_190 = 0xc;
  local_189 = 0;
  local_170 = 0x10;
  local_167 = 0;
  local_146 = 0;
  local_130 = 0x16;
  local_124 = 0;
  local_110 = 0x12;
  local_106 = 0;
  local_f0 = 0x1c;
  local_e1 = 0;
  local_d0 = 0x1a;
  local_c2 = 0;
  local_b8 = 0xdd;
  local_b0 = 0x1a;
  local_a2 = 0;
  local_90 = 0x18;
  local_87 = 0x656e6966;
  local_8f = (char  [8])s_invertAffine_0024bb93._0_8_;
  local_83 = 0;
  local_78 = 0xdf;
  lVar15 = 0;
  *(undefined4 *)(PTR_atoms_0067d6a8 + 0x20) = 0x3f800000;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined8 *)puVar4 = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  do {
    local_1c60[1] = uVar23;
    bVar1 = local_1c50[lVar15];
    uVar19 = *(ulong *)((long)auStack_1c48 + lVar15);
    local_1c70 = *(byte **)((long)auStack_1c48 + lVar15 + 8);
    uVar12 = uVar19;
    __s2 = local_1c70;
    if ((bVar1 & 1) == 0) {
      uVar12 = (ulong)(bVar1 >> 1);
      __s2 = local_1c50 + lVar15 + 1;
    }
    local_1c68 = lVar15;
    uVar6 = FUN_00399758(__s2,uVar12);
    local_1c60[0] = uVar6;
    if (local_1c60[1] != 0) {
      uVar26 = NEON_cnt(local_1c60[1],1);
      uVar25 = NEON_uaddlv(uVar26,1);
      uVar24 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
      if (uVar24 < 2) {
        uVar21 = local_1c60[1] - 1 & uVar6;
      }
      else {
        uVar21 = uVar6;
        if (local_1c60[1] <= uVar6) {
          uVar23 = 0;
          if (local_1c60[1] != 0) {
            uVar23 = uVar6 / local_1c60[1];
          }
          uVar21 = uVar6 - uVar23 * local_1c60[1];
        }
      }
      plVar8 = *(long **)(*(long *)puVar4 + uVar21 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        uVar20 = local_1c60[1] - 1;
        uVar23 = local_1c60[1];
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            bVar2 = *(byte *)(plVar8 + 2);
            uVar10 = (ulong)(bVar2 >> 1);
            uVar9 = uVar10;
            if ((bVar2 & 1) != 0) {
              uVar9 = plVar8[3];
            }
            if (uVar9 == uVar12) {
              if ((bVar2 & 1) == 0) {
                if (bVar2 < 2) goto LAB_0035536c;
                pbVar13 = (byte *)((long)plVar8 + 0x11);
                pbVar16 = __s2;
                while (*pbVar13 == *pbVar16) {
                  uVar10 = uVar10 - 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar16 = pbVar16 + 1;
                  if (uVar10 == 0) goto LAB_0035536c;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar8[4],__s2,plVar8[3]);
                uVar23 = local_1c60[1];
                uVar6 = local_1c60[0];
                if (iVar5 == 0) goto LAB_0035536c;
              }
            }
          }
          else {
            if (uVar24 < 2) {
              uVar9 = uVar9 & uVar20;
            }
            else if (uVar23 <= uVar9) {
              uVar10 = 0;
              if (uVar23 != 0) {
                uVar10 = uVar9 / uVar23;
              }
              uVar9 = uVar9 - uVar10 * uVar23;
            }
            if (uVar9 != uVar21) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar8 = (long *)operator_new(0x30);
    *plVar8 = 0;
    plVar8[1] = local_1c60[0];
    if ((bVar1 & 1) == 0) {
      lVar27 = *(long *)((long)auStack_1c48 + lVar15);
      lVar17 = *(long *)(local_1c50 + lVar15);
      plVar8[4] = *(long *)((long)auStack_1c48 + lVar15 + 8);
      plVar8[3] = lVar27;
      plVar8[2] = lVar17;
      uVar23 = local_1c60[1];
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (plVar8 + 2),(char *)local_1c70,uVar19);
      uVar23 = *(ulong *)(puVar4 + 8);
      local_1c78 = *(long *)(puVar4 + 0x18);
      uVar22 = uVar23;
    }
    fVar28 = *(float *)(puVar4 + 0x20);
    *(undefined2 *)(plVar8 + 5) = *(undefined2 *)((long)local_1c38 + lVar15);
    if ((local_1c60[1] == 0) ||
       (uVar12 = local_1c60[1], fVar28 * (float)local_1c60[1] < (float)(local_1c78 + 1))) {
      if (local_1c60[1] < 3) {
        uVar21 = 1;
      }
      else {
        uVar21 = (ulong)((local_1c60[1] & local_1c60[1] - 1) != 0);
      }
      uVar21 = uVar21 | local_1c60[1] << 1;
      uVar23 = (ulong)((float)(local_1c78 + 1) / fVar28);
      if (uVar21 <= uVar23) {
        uVar21 = uVar23;
      }
      if (uVar21 - 1 == 0) {
        uVar21 = 2;
      }
      else if ((uVar21 & uVar21 - 1) != 0) {
        uVar21 = std::__ndk1::__next_prime(uVar21);
        uVar22 = *(ulong *)(puVar4 + 8);
      }
      if (uVar22 < uVar21) {
LAB_003555c8:
        if (uVar21 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar7 = operator_new(uVar21 << 3);
        pvVar11 = *(void **)puVar4;
        *(void **)puVar4 = pvVar7;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
        }
        uVar23 = 0;
        *(ulong *)(puVar4 + 8) = uVar21;
        do {
          *(undefined8 *)(*(long *)puVar4 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar21 != uVar23);
        plVar14 = *(long **)(puVar4 + 0x10);
        uVar23 = uVar21;
        if (plVar14 != (long *)0x0) {
          uVar22 = plVar14[1];
          uVar26 = NEON_cnt(uVar21,1);
          uVar25 = NEON_uaddlv(uVar26,1);
          uVar12 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
          if (uVar12 < 2) {
            uVar22 = uVar22 & uVar21 - 1;
          }
          else if (uVar21 <= uVar22) {
            uVar19 = 0;
            if (uVar21 != 0) {
              uVar19 = uVar22 / uVar21;
            }
            uVar22 = uVar22 - uVar19 * uVar21;
          }
          *(undefined **)(*(long *)puVar4 + uVar22 * 8) = puVar4 + 0x10;
          plVar18 = (long *)*plVar14;
          if (plVar18 != (long *)0x0) {
            do {
              uVar19 = plVar18[1];
              if (uVar12 < 2) {
                uVar19 = uVar19 & uVar21 - 1;
              }
              else if (uVar21 <= uVar19) {
                uVar6 = 0;
                if (uVar21 != 0) {
                  uVar6 = uVar19 / uVar21;
                }
                uVar19 = uVar19 - uVar6 * uVar21;
              }
              if (uVar19 != uVar22) {
                if (*(long *)(*(long *)puVar4 + uVar19 * 8) == 0) {
                  *(long **)(*(long *)puVar4 + uVar19 * 8) = plVar14;
                  uVar22 = uVar19;
                }
                else {
                  *plVar14 = *plVar18;
                  *plVar18 = **(long **)(*(long *)puVar4 + uVar19 * 8);
                  **(undefined8 **)(*(long *)puVar4 + uVar19 * 8) = plVar18;
                  plVar18 = plVar14;
                }
              }
              plVar14 = plVar18;
              plVar18 = (long *)*plVar14;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      else {
        uVar23 = uVar22;
        if (uVar21 < uVar22) {
          uVar23 = (ulong)((float)*(ulong *)(puVar4 + 0x18) / *(float *)(puVar4 + 0x20));
          if (uVar22 < 3) {
LAB_00355804:
            uVar23 = std::__ndk1::__next_prime(uVar23);
          }
          else {
            uVar26 = NEON_cnt(uVar22,1);
            uVar25 = NEON_uaddlv(uVar26,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_00355804;
            if (1 < uVar23) {
              uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
            }
          }
          if (uVar21 <= uVar23) {
            uVar21 = uVar23;
          }
          if (uVar21 < uVar22) {
            if (uVar21 != 0) goto LAB_003555c8;
            pvVar7 = *(void **)puVar4;
            *(undefined8 *)puVar4 = 0;
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7);
            }
            *(undefined8 *)(puVar4 + 8) = 0;
            uVar23 = 0;
          }
          else {
            uVar23 = *(ulong *)(puVar4 + 8);
          }
        }
      }
      uVar12 = uVar23;
      uVar22 = uVar23;
      if ((uVar23 & uVar23 - 1) == 0) {
        uVar21 = uVar23 - 1 & local_1c60[0];
      }
      else {
        uVar21 = local_1c60[0];
        if (uVar23 <= local_1c60[0]) {
          uVar21 = 0;
          if (uVar23 != 0) {
            uVar21 = local_1c60[0] / uVar23;
          }
          uVar21 = local_1c60[0] - uVar21 * uVar23;
        }
      }
    }
    lVar15 = *(long *)puVar4;
    plVar14 = *(long **)(lVar15 + uVar21 * 8);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)(puVar4 + 0x10);
      lVar17 = *plVar14;
      *plVar14 = (long)plVar8;
      *plVar8 = lVar17;
      *(long **)(lVar15 + uVar21 * 8) = plVar14;
      if (*plVar8 != 0) {
        uVar19 = *(ulong *)(*plVar8 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar19 = uVar19 & uVar12 - 1;
        }
        else if (uVar12 <= uVar19) {
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar6 = uVar19 / uVar12;
          }
          uVar19 = uVar19 - uVar6 * uVar12;
        }
        plVar14 = (long *)(*(long *)puVar4 + uVar19 * 8);
        goto LAB_003557ec;
      }
    }
    else {
      *plVar8 = *plVar14;
LAB_003557ec:
      *plVar14 = (long)plVar8;
    }
    local_1c78 = *(long *)(puVar4 + 0x18) + 1;
    *(long *)(puVar4 + 0x18) = local_1c78;
LAB_0035536c:
    lVar15 = local_1c68 + 0x20;
    if (lVar15 == 0x1be0) {
      lVar15 = 0x1be0;
      do {
        if ((*(byte *)((long)&local_1c70 + lVar15) & 1) != 0) {
          operator_delete(*(void **)((long)local_1c60 + lVar15));
        }
        lVar15 = lVar15 + -0x20;
      } while (lVar15 != 0);
      __cxa_atexit(FUN_00447a78,PTR_atoms_0067d6a8,&PTR_LOOP_006513f0);
      if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


// ===== 003558d0  _INIT_11 =====

void _INIT_11(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_defaultName_0067d7f8;
  puVar1 = PTR__basic_string_0067d4f8;
  *(undefined2 *)PTR_defaultName_0067d7f8 = 0;
  __cxa_atexit(puVar1,puVar2,&PTR_LOOP_006513f0);
  return;
}


// ===== 003558f0  _INIT_12 =====

void _INIT_12(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_m_systemDataEnum_0067d2a8;
  uVar2 = DAT_0024e6c8;
  puVar1 = PTR_vtable_0067d298 + 0x10;
  *(undefined8 *)(PTR_m_systemDataEnum_0067d2a8 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 8) = uVar2;
  *(undefined **)puVar3 = puVar1;
  puVar1 = PTR__DataEnum_0067d7d0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined2 *)(puVar3 + 0x28) = 0;
  __cxa_atexit(puVar1,puVar3,&PTR_LOOP_006513f0);
  return;
}


// ===== 00355934  _INIT_13 =====

void _INIT_13(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_list_0067dba8;
  puVar1 = PTR_LuauStacklessPcall_0067db80;
  uVar3 = *(undefined8 *)PTR_list_0067dba8;
  *(undefined2 *)PTR_LuauStacklessPcall_0067db80 = 0;
  *(undefined **)puVar2 = puVar1;
  *(char **)(puVar1 + 8) = "LuauStacklessPcall";
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  return;
}


// ===== 00355960  _INIT_14 =====

void _INIT_14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_list_0067dbc0;
  puVar1 = PTR_LuauInlineHitsThreshold_0067dbb8;
  *(undefined4 *)PTR_LuauInlineHitsThreshold_0067dbb8 = 3;
  uVar3 = *(undefined8 *)puVar2;
  puVar1[4] = 0;
  *(char **)(puVar1 + 8) = "LuauInlineHitsThreshold";
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined **)puVar2 = puVar1;
  return;
}


// ===== 00355994  _INIT_15 =====

void _INIT_15(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_list_0067dba8;
  puVar1 = PTR_LuauIntegerLibrary_0067db98;
  uVar3 = *(undefined8 *)PTR_list_0067dba8;
  *(undefined2 *)PTR_LuauIntegerLibrary_0067db98 = 0;
  *(undefined **)puVar2 = puVar1;
  *(char **)(puVar1 + 8) = "LuauIntegerLibrary";
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  return;
}


// ===== 003559c0  _INIT_16 =====

void _INIT_16(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_FixMathNoisePrecision_0067dbd0;
  puVar1 = PTR_list_0067dba8;
  uVar3 = *(undefined8 *)PTR_list_0067dba8;
  *(undefined2 *)PTR_FixMathNoisePrecision_0067dbd0 = 0;
  *(undefined **)puVar1 = puVar2;
  *(char **)(puVar2 + 8) = "FixMathNoisePrecision";
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  return;
}


// ===== 003559ec  _INIT_17 =====

void _INIT_17(void)

{
  uint uVar1;
  long lVar2;
  
  DAT_0068891c = 0;
  memset(&DAT_00688478,0,0xa0);
  memset(&DAT_00688518,0xff,0x401);
  uVar1 = 0;
  do {
    lVar2 = (long)DAT_0068891c;
    uVar1 = uVar1 + 8;
    DAT_0068891c = DAT_0068891c + 1;
    (&DAT_00688478)[lVar2] = uVar1;
  } while (uVar1 < 0x38);
  uVar1 = 0x30;
  do {
    lVar2 = (long)DAT_0068891c;
    uVar1 = uVar1 + 0x10;
    DAT_0068891c = DAT_0068891c + 1;
    (&DAT_00688478)[lVar2] = uVar1;
  } while (uVar1 < 0xf0);
  uVar1 = 0xe0;
  do {
    lVar2 = (long)DAT_0068891c;
    uVar1 = uVar1 + 0x20;
    DAT_0068891c = DAT_0068891c + 1;
    (&DAT_00688478)[lVar2] = uVar1;
  } while (uVar1 < 0x1e0);
  uVar1 = 0x1c0;
  do {
    lVar2 = (long)DAT_0068891c;
    uVar1 = uVar1 + 0x40;
    DAT_0068891c = DAT_0068891c + 1;
    (&DAT_00688478)[lVar2] = uVar1;
  } while (uVar1 < 0x3c1);
  if (0 < DAT_0068891c) {
    lVar2 = 0;
    do {
      (&DAT_00688518)[(int)(&DAT_00688478)[lVar2]] = (char)lVar2;
      lVar2 = lVar2 + 1;
    } while (lVar2 < DAT_0068891c);
  }
  lVar2 = 0x400;
  do {
    if (*(char *)(lVar2 + 0x688517) < '\0') {
      *(undefined *)(lVar2 + 0x688517) = (&DAT_00688518)[lVar2];
    }
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


// ===== 00355b00  _INIT_18 =====

void _INIT_18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_LuauClosureUsageCounter_0067dbb0;
  puVar2 = PTR_list_0067dba8;
  puVar1 = PTR_LuauDirectFieldGet_0067db78;
  uVar5 = *(undefined8 *)PTR_list_0067dba8;
  *(undefined2 *)PTR_LuauDirectFieldGet_0067db78 = 0;
  *(undefined2 *)puVar3 = 0;
  *(char **)(puVar1 + 8) = "LuauDirectFieldGet";
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  puVar4 = PTR_DebugLuauUserDefinedClassesRuntime_0067dbe0;
  *(char **)(puVar3 + 8) = "LuauClosureUsageCounter";
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined2 *)puVar4 = 0;
  puVar1 = PTR_LuauCallFeedback_0067dbe8;
  *(char **)(puVar4 + 8) = "DebugLuauUserDefinedClassesRuntime";
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined2 *)puVar1 = 0;
  *(char **)(puVar1 + 8) = "LuauCallFeedback";
  *(undefined **)(puVar1 + 0x10) = puVar4;
  *(undefined **)puVar2 = puVar1;
  return;
}


// ===== 00355b74  _INIT_19 =====

void _INIT_19(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_LuauUdataDirectAccess4_0067dbc8;
  puVar1 = PTR_list_0067dba8;
  uVar3 = *(undefined8 *)PTR_list_0067dba8;
  *(undefined2 *)PTR_LuauUdataDirectAccess4_0067dbc8 = 0;
  *(undefined **)puVar1 = puVar2;
  *(char **)(puVar2 + 8) = "LuauUdataDirectAccess4";
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  return;
}


// ===== 00355ba0  FUN_00355ba0 =====

void FUN_00355ba0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (puVar5 != puVar4) {
    do {
      puVar5 = puVar5 + -1;
      pvVar3 = (void *)*puVar5;
      *puVar5 = 0;
      if (pvVar3 != (void *)0x0) {
        pvVar1 = *(void **)((long)pvVar3 + 0x48);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar3 + 0x50) = pvVar1;
          operator_delete(pvVar1);
        }
        (**(code **)(**(long **)((long)pvVar3 + 8) + 8))();
        operator_delete(pvVar3);
      }
    } while (puVar5 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 00355c38  rive::AnimationResetFactory::getInstance =====

/* rive::AnimationResetFactory::getInstance() */

void __thiscall rive::AnimationResetFactory::getInstance(AnimationResetFactory *this)

{
  undefined *puVar1;
  void *pvVar2;
  AnimationReset *this_00;
  undefined8 *in_x8;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  
  std::__ndk1::mutex::lock();
  puVar1 = PTR_m_resources_0067cce8;
  lVar5 = *(long *)(PTR_m_resources_0067cce8 + 8);
  if (lVar5 == *(long *)PTR_m_resources_0067cce8) {
    this_00 = (AnimationReset *)operator_new(0x60);
    AnimationReset::AnimationReset(this_00);
    *in_x8 = this_00;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    lVar5 = *(long *)(puVar1 + 8);
    *in_x8 = uVar3;
    puVar6 = (undefined8 *)(lVar5 + -8);
    pvVar4 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar4 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar4 + 0x48);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar4 + 0x50) = pvVar2;
        operator_delete(pvVar2);
      }
      (**(code **)(**(long **)((long)pvVar4 + 8) + 8))();
      operator_delete(pvVar4);
    }
    *(undefined8 **)(puVar1 + 8) = puVar6;
  }
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 00355ce4  rive::AnimationResetFactory::fromState =====

/* rive::AnimationResetFactory::fromState(rive::StateInstance*,
   std::__ndk1::vector<rive::LinearAnimation const*, std::__ndk1::allocator<rive::LinearAnimation
   const*> >&) */

void rive::AnimationResetFactory::fromState(StateInstance *param_1,vector *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 == (StateInstance *)0x0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 8);
  uVar1 = (**(code **)(*plVar9 + 0x18))(plVar9,0x3d);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar14 = plVar9[0xd];
  if (lVar14 == 0) {
    return;
  }
  plVar9 = *(long **)(param_2 + 8);
  if (plVar9 < *(long **)(param_2 + 0x10)) {
    plVar12 = plVar9 + 1;
    *plVar9 = lVar14;
    goto LAB_00355e44;
  }
  plVar10 = *(long **)param_2;
  lVar11 = (long)plVar9 - (long)plVar10 >> 3;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00355e68();
LAB_00355e64:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(long **)(param_2 + 0x10) - (long)plVar10;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00355e64;
    pvVar2 = operator_new(uVar5 << 3);
  }
  plVar4 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar12 = plVar4 + 1;
  *plVar4 = lVar14;
  if ((long)plVar9 - (long)plVar10 != 0) {
    uVar1 = ((long)plVar9 - (long)plVar10) - 8;
    plVar13 = plVar9;
    if ((0x37 < uVar1) &&
       (0x1f < (ulong)((long)plVar9 + (-((long)plVar9 - (long)plVar10) - (long)pvVar2)))) {
      plVar7 = plVar4 + -2;
      plVar8 = plVar9 + -2;
      uVar1 = (uVar1 >> 3) + 1;
      uVar6 = uVar1 & 0x3ffffffffffffffc;
      plVar13 = plVar9 + -uVar6;
      uVar3 = uVar6;
      do {
        plVar9 = plVar8 + -1;
        lVar15 = plVar8[-2];
        lVar11 = plVar8[1];
        lVar14 = *plVar8;
        uVar3 = uVar3 - 4;
        plVar8 = plVar8 + -4;
        plVar7[-1] = *plVar9;
        plVar7[-2] = lVar15;
        plVar7[1] = lVar11;
        *plVar7 = lVar14;
        plVar7 = plVar7 + -4;
      } while (uVar3 != 0);
      plVar4 = plVar4 + -uVar6;
      plVar9 = plVar10;
      if (uVar1 == uVar6) goto LAB_00355e30;
    }
    do {
      plVar13 = plVar13 + -1;
      plVar4 = plVar4 + -1;
      *plVar4 = *plVar13;
    } while (plVar13 != plVar10);
    plVar9 = *(long **)param_2;
  }
LAB_00355e30:
  *(long **)param_2 = plVar4;
  *(long **)(param_2 + 8) = plVar12;
  *(void **)(param_2 + 0x10) = (void *)((long)pvVar2 + uVar5 * 8);
  if (plVar9 != (long *)0x0) {
    operator_delete(plVar9);
  }
LAB_00355e44:
  *(long **)(param_2 + 8) = plVar12;
  return;
}


// ===== 00355e68  FUN_00355e68 =====

void FUN_00355e68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00355e7c  rive::AnimationResetFactory::fromStates =====

/* rive::AnimationResetFactory::fromStates(rive::StateInstance*, rive::StateInstance*,
   rive::ArtboardInstance*) */

void __thiscall
rive::AnimationResetFactory::fromStates
          (AnimationResetFactory *this,StateInstance *param_1,StateInstance *param_2,
          ArtboardInstance *param_3)

{
  long lVar1;
  undefined1 uVar2;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  uVar2 = SUB81(param_3,0);
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  fromState((StateInstance *)this,(vector *)&local_50);
  fromState(param_1,(vector *)&local_50);
  fromAnimations((AnimationResetFactory *)&local_50,param_2,(ArtboardInstance *)0x0,(bool)uVar2);
  if (local_50 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    operator_delete(local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355f2c  rive::AnimationResetFactory::fromAnimations =====

/* rive::AnimationResetFactory::fromAnimations(std::__ndk1::vector<rive::LinearAnimation const*,
   std::__ndk1::allocator<rive::LinearAnimation const*> >&, rive::ArtboardInstance*, bool) */

void __thiscall
rive::AnimationResetFactory::fromAnimations
          (AnimationResetFactory *this,vector *param_1,ArtboardInstance *param_2,bool param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  AnimationResetFactory AVar4;
  byte bVar5;
  AnimationResetFactory AVar6;
  long lVar7;
  AnimationResetFactory *pAVar8;
  long lVar9;
  long *__dest;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  long *in_x8;
  AnimationResetFactory *pAVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  AnimationResetFactory *pAVar18;
  AnimationResetFactory *pAVar19;
  AnimationResetFactory *pAVar20;
  AnimationResetFactory *pAVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  AnimationResetFactory *pAVar25;
  ulong uVar26;
  ulong uVar27;
  AnimationResetFactory *pAVar28;
  AnimationResetFactory *pAVar29;
  AnimationResetFactory *pAVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float local_78 [4];
  long local_68;
  
  lVar7 = tpidr_el0;
  uVar27 = (ulong)param_2 & 0xffffffff;
  local_68 = *(long *)(lVar7 + 0x28);
  pAVar8 = (AnimationResetFactory *)operator_new(0x18);
  plVar2 = *(long **)this;
  plVar3 = *(long **)(this + 8);
  *(undefined8 *)(pAVar8 + 8) = 0;
  *(undefined8 *)(pAVar8 + 0x10) = 0;
  *(undefined8 *)pAVar8 = 0;
  pAVar13 = pAVar8;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar9 = *plVar2;
    lVar24 = *(long *)(lVar9 + 0x48);
    if (*(long *)(lVar9 + 0x50) != lVar24) {
      uVar26 = 0;
      AVar6 = (AnimationResetFactory)((byte)uVar27 & 1);
      do {
        lVar24 = *(long *)(lVar24 + uVar26 * 8);
        pAVar21 = *(AnimationResetFactory **)(pAVar8 + 8);
        iVar12 = *(int *)(lVar24 + 0xc);
        pAVar30 = *(AnimationResetFactory **)pAVar8;
        for (pAVar18 = pAVar30; pAVar18 != pAVar21; pAVar18 = pAVar18 + 8) {
          pAVar28 = *(AnimationResetFactory **)pAVar18;
          if (*(int *)(pAVar28 + 0x30) == iVar12) goto LAB_003561a8;
        }
        pAVar28 = (AnimationResetFactory *)operator_new(0x38);
        pAVar13 = *(AnimationResetFactory **)(pAVar8 + 0x10);
        *(long *)pAVar28 = 0;
        *(long *)(pAVar28 + 8) = 0;
        *(long *)(pAVar28 + 0x28) = 0;
        *(long *)(pAVar28 + 0x20) = 0;
        *(long *)(pAVar28 + 0x10) = 0;
        *(AnimationResetFactory **)(pAVar28 + 0x18) = pAVar28 + 0x20;
        *(int *)(pAVar28 + 0x30) = iVar12;
        if (pAVar21 < pAVar13) {
          pAVar25 = pAVar21 + 8;
          *(AnimationResetFactory **)pAVar21 = pAVar28;
          pAVar13 = pAVar28;
        }
        else {
          lVar33 = (long)pAVar21 - (long)pAVar30;
          uVar27 = (lVar33 >> 3) + 1;
          if (uVar27 >> 0x3d != 0) {
            FUN_00356d0c();
            goto LAB_0035675c;
          }
          uVar22 = (long)pAVar13 - (long)pAVar30;
          uVar16 = (long)uVar22 >> 2;
          if (uVar16 <= uVar27) {
            uVar16 = uVar27;
          }
          if (0x7ffffffffffffff7 < uVar22) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 == 0) {
            pAVar13 = (AnimationResetFactory *)0x0;
          }
          else {
            if (uVar16 >> 0x3d != 0) goto LAB_00356754;
            pAVar13 = (AnimationResetFactory *)operator_new(uVar16 << 3);
          }
          pAVar18 = pAVar13 + (lVar33 >> 3) * 8;
          pAVar25 = pAVar18 + 8;
          *(AnimationResetFactory **)pAVar18 = pAVar28;
          if (pAVar30 == pAVar21) {
            *(AnimationResetFactory **)pAVar8 = pAVar18;
            *(AnimationResetFactory **)(pAVar8 + 8) = pAVar25;
            *(AnimationResetFactory **)(pAVar8 + 0x10) = pAVar13 + uVar16 * 8;
          }
          else {
            uVar27 = lVar33 - 8;
            pAVar20 = pAVar21;
            if ((uVar27 < 0x78) ||
               ((pAVar21 + (-8 - (uVar27 & 0xfffffffffffffff8)) < pAVar18 &&
                (pAVar13 + (lVar33 - (uVar27 & 0xfffffffffffffff8)) + -8 < pAVar21)))) {
LAB_00356128:
              do {
                pAVar20 = pAVar20 + -8;
                lVar33 = *(long *)pAVar20;
                *(long *)pAVar20 = 0;
                pAVar18 = pAVar18 + -8;
                *(long *)pAVar18 = lVar33;
              } while (pAVar20 != pAVar30);
              pAVar21 = *(AnimationResetFactory **)(pAVar8 + 8);
              pAVar19 = *(AnimationResetFactory **)pAVar8;
            }
            else {
              uVar27 = (uVar27 >> 3) + 1;
              uVar15 = uVar27 & 0x3ffffffffffffffc;
              lVar33 = 0;
              uVar22 = uVar15;
              do {
                uVar22 = uVar22 - 4;
                uVar38 = *(undefined8 *)(pAVar21 + lVar33 + -0x18);
                uVar37 = *(undefined8 *)(pAVar21 + lVar33 + -0x20);
                uVar36 = *(undefined8 *)(pAVar21 + lVar33 + -8);
                uVar35 = *(undefined8 *)(pAVar21 + lVar33 + -0x10);
                *(undefined8 *)(pAVar21 + lVar33 + -0x18) = 0;
                *(undefined8 *)(pAVar21 + lVar33 + -0x20) = 0;
                *(undefined8 *)(pAVar21 + lVar33 + -8) = 0;
                *(undefined8 *)(pAVar21 + lVar33 + -0x10) = 0;
                *(undefined8 *)(pAVar18 + lVar33 + -0x18) = uVar38;
                *(undefined8 *)(pAVar18 + lVar33 + -0x20) = uVar37;
                *(undefined8 *)(pAVar18 + lVar33 + -8) = uVar36;
                *(undefined8 *)(pAVar18 + lVar33 + -0x10) = uVar35;
                lVar33 = lVar33 + -0x20;
              } while (uVar22 != 0);
              pAVar18 = pAVar18 + uVar15 * -8;
              pAVar20 = pAVar21 + uVar15 * -8;
              pAVar19 = pAVar30;
              if (uVar27 != uVar15) goto LAB_00356128;
            }
            *(AnimationResetFactory **)pAVar8 = pAVar18;
            *(AnimationResetFactory **)(pAVar8 + 8) = pAVar25;
            *(AnimationResetFactory **)(pAVar8 + 0x10) = pAVar13 + uVar16 * 8;
            pAVar30 = pAVar21;
            while (pAVar21 != pAVar19) {
              pAVar21 = pAVar21 + -8;
              pAVar18 = *(AnimationResetFactory **)pAVar21;
              *(long *)pAVar21 = 0;
              pAVar30 = pAVar19;
              if (pAVar18 != (AnimationResetFactory *)0x0) {
                FUN_00356760(*(long *)(pAVar18 + 0x20));
                pvVar10 = *(void **)pAVar18;
                if (pvVar10 != (void *)0x0) {
                  *(void **)(pAVar18 + 8) = pvVar10;
                  operator_delete(pvVar10);
                }
                operator_delete(pAVar18);
                pAVar13 = pAVar18;
              }
            }
          }
          if (pAVar30 != (AnimationResetFactory *)0x0) {
            operator_delete(pAVar30);
            pAVar13 = pAVar30;
          }
        }
        *(AnimationResetFactory **)(pAVar8 + 8) = pAVar25;
LAB_003561a8:
        lVar33 = *(long *)(lVar24 + 0x10);
        lVar14 = *(long *)(lVar24 + 0x18);
        if (lVar14 != lVar33) {
          uVar27 = 0;
          pAVar18 = pAVar28 + 0x20;
          do {
            lVar32 = *(long *)(lVar33 + uVar27 * 8);
            pAVar21 = *(AnimationResetFactory **)pAVar18;
            iVar12 = *(int *)(lVar32 + 0xc);
            pAVar25 = pAVar18;
            pAVar30 = pAVar18;
            pAVar20 = pAVar21;
            if (pAVar21 == (AnimationResetFactory *)0x0) {
LAB_00356230:
              if (pAVar18 == pAVar25) goto LAB_00356238;
            }
            else {
              do {
                pAVar19 = pAVar20 + 8;
                if (iVar12 <= *(int *)(pAVar20 + 0x1c)) {
                  pAVar30 = pAVar20;
                  pAVar19 = pAVar20;
                }
                pAVar20 = *(AnimationResetFactory **)pAVar19;
              } while (*(AnimationResetFactory **)pAVar19 != (AnimationResetFactory *)0x0);
              if (pAVar30 != pAVar18) {
                if (*(int *)(pAVar30 + 0x1c) <= iVar12) {
                  pAVar25 = pAVar30;
                }
                goto LAB_00356230;
              }
LAB_00356238:
              if ((iVar12 - 4U < 0x3f4) &&
                 (pAVar30 = pAVar18,
                 (*(uint *)(&DAT_00252478 + (ulong)(iVar12 - 4U) * 4) & 0xfffffffe) == 2)) {
                while (pAVar25 = pAVar30, pAVar21 != (AnimationResetFactory *)0x0) {
                  while (pAVar25 = pAVar21, *(int *)(pAVar25 + 0x1c) <= iVar12) {
                    if (iVar12 <= *(int *)(pAVar25 + 0x1c)) goto LAB_003562f4;
                    pAVar21 = *(AnimationResetFactory **)(pAVar25 + 8);
                    if (*(AnimationResetFactory **)(pAVar25 + 8) == (AnimationResetFactory *)0x0) {
                      pAVar30 = pAVar25 + 8;
                      goto LAB_0035629c;
                    }
                  }
                  pAVar30 = pAVar25;
                  pAVar21 = *(AnimationResetFactory **)pAVar25;
                }
LAB_0035629c:
                puVar23 = (undefined8 *)operator_new(0x20);
                *(int *)((long)puVar23 + 0x1c) = iVar12;
                *puVar23 = 0;
                puVar23[1] = 0;
                puVar23[2] = pAVar25;
                *(undefined8 **)pAVar30 = puVar23;
                if (**(long **)(pAVar28 + 0x18) != 0) {
                  *(long *)(pAVar28 + 0x18) = **(long **)(pAVar28 + 0x18);
                  puVar23 = *(undefined8 **)pAVar30;
                }
                pAVar13 = (AnimationResetFactory *)FUN_00356b70(*(long *)(pAVar28 + 0x20),puVar23);
                *(long *)(pAVar28 + 0x28) = *(long *)(pAVar28 + 0x28) + 1;
LAB_003562f4:
                pAVar30 = *(AnimationResetFactory **)(pAVar28 + 8);
                if (pAVar30 < *(AnimationResetFactory **)(pAVar28 + 0x10)) {
                  *(long *)pAVar30 = lVar32;
                  pAVar21 = pAVar30 + 0x10;
                  pAVar30[8] = AVar6;
                }
                else {
                  pAVar25 = *(AnimationResetFactory **)pAVar28;
                  lVar33 = (long)pAVar30 - (long)pAVar25 >> 4;
                  uVar16 = lVar33 + 1;
                  if (uVar16 >> 0x3c != 0) goto LAB_00356750;
                  uVar15 = (long)*(AnimationResetFactory **)(pAVar28 + 0x10) - (long)pAVar25;
                  uVar22 = (long)uVar15 >> 3;
                  if (uVar22 <= uVar16) {
                    uVar22 = uVar16;
                  }
                  if (0x7fffffffffffffef < uVar15) {
                    uVar22 = 0xfffffffffffffff;
                  }
                  if (uVar22 == 0) {
                    pAVar13 = (AnimationResetFactory *)0x0;
                  }
                  else {
                    if (uVar22 >> 0x3c != 0) goto LAB_00356754;
                    pAVar13 = (AnimationResetFactory *)operator_new(uVar22 << 4);
                  }
                  pAVar21 = pAVar13 + lVar33 * 0x10;
                  pAVar21[8] = AVar6;
                  *(long *)pAVar21 = lVar32;
                  pAVar20 = pAVar21;
                  pAVar19 = pAVar21;
                  if (pAVar30 != pAVar25) {
                    do {
                      pAVar29 = pAVar30 + -0x10;
                      AVar4 = pAVar30[-8];
                      pAVar19 = pAVar20 + -0x10;
                      *(long *)pAVar19 = *(long *)pAVar29;
                      pAVar20[-8] = AVar4;
                      pAVar20 = pAVar19;
                      pAVar30 = pAVar29;
                    } while (pAVar29 != pAVar25);
                    pAVar30 = *(AnimationResetFactory **)pAVar28;
                  }
                  pAVar21 = pAVar21 + 0x10;
                  *(AnimationResetFactory **)pAVar28 = pAVar19;
                  *(AnimationResetFactory **)(pAVar28 + 8) = pAVar21;
                  *(AnimationResetFactory **)(pAVar28 + 0x10) = pAVar13 + uVar22 * 0x10;
                  if (pAVar30 != (AnimationResetFactory *)0x0) {
                    operator_delete(pAVar30);
                    pAVar13 = pAVar30;
                  }
                }
                *(AnimationResetFactory **)(pAVar28 + 8) = pAVar21;
                lVar33 = *(long *)(lVar24 + 0x10);
                lVar14 = *(long *)(lVar24 + 0x18);
              }
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < (ulong)(lVar14 - lVar33 >> 3));
        }
        uVar26 = uVar26 + 1;
        lVar24 = *(long *)(lVar9 + 0x48);
      } while (uVar26 < (ulong)(*(long *)(lVar9 + 0x50) - lVar24 >> 3));
    }
    uVar27 = 0;
  }
  getInstance(pAVar13);
  plVar3 = *(long **)pAVar8;
  plVar34 = *(long **)(pAVar8 + 8);
  lVar24 = *in_x8;
  plVar2 = plVar3;
  do {
    if (plVar2 == plVar34) {
      lVar9 = *(long *)(lVar24 + 0x48);
      if (lVar9 != *(long *)(lVar24 + 0x50)) {
        *(long *)(lVar24 + 0x40) = *(long *)(lVar24 + 0x20);
        *(long *)(lVar24 + 0x28) = lVar9;
        *(long *)(lVar24 + 0x30) = lVar9 + *(long *)(lVar24 + 0x20);
      }
      if (plVar3 != (long *)0x0) {
        while (plVar3 != plVar34) {
          plVar34 = plVar34 + -1;
          puVar23 = (undefined8 *)*plVar34;
          *plVar34 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            FUN_00356760(puVar23[4]);
            pvVar10 = (void *)*puVar23;
            if (pvVar10 != (void *)0x0) {
              puVar23[1] = pvVar10;
              operator_delete(pvVar10);
            }
            operator_delete(puVar23);
          }
        }
        operator_delete(plVar3);
      }
      if (*(long *)(lVar7 + 0x28) == local_68) {
        operator_delete(pAVar8);
        return;
      }
LAB_0035675c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar9 = (**(code **)(*(long *)param_1 + 0x348))(param_1,*(undefined4 *)(*plVar2 + 0x30));
    if (lVar9 != 0) {
      puVar23 = (undefined8 *)*plVar2;
      pvVar10 = (void *)*puVar23;
      uVar27 = puVar23[1] - (long)pvVar10;
      if (uVar27 != 0) {
        if ((long)uVar27 < 0) {
LAB_00356750:
          FUN_0035679c();
LAB_00356754:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        __dest = (long *)operator_new(uVar27);
        memcpy(__dest,pvVar10,uVar27 - 7);
        uVar26 = 0;
        uVar11 = *(uint *)(puVar23 + 6);
        do {
          uVar16 = uVar26 + 1;
          *(byte *)((long)local_78 + uVar26) = (byte)uVar11 & 0x7f | (0x7f < uVar11) << 7;
          bVar1 = 0x7f < uVar11;
          uVar26 = uVar16;
          uVar11 = uVar11 >> 7;
        } while (bVar1);
        (**(code **)**(undefined8 **)(lVar24 + 8))
                  (*(undefined8 **)(lVar24 + 8),local_78,uVar16 & 0xffffffff);
        uVar16 = uVar27 >> 4;
        uVar26 = 0;
        do {
          uVar11 = (uint)uVar16;
          bVar5 = (byte)uVar16;
          uVar16 = (ulong)(uVar11 >> 7);
          uVar22 = uVar26 + 1;
          *(byte *)((long)local_78 + uVar26) = bVar5 & 0x7f | (0x7f < uVar11) << 7;
          uVar26 = uVar22;
        } while (0x7f < uVar11);
        (**(code **)**(undefined8 **)(lVar24 + 8))
                  (*(undefined8 **)(lVar24 + 8),local_78,uVar22 & 0xffffffff);
        plVar31 = __dest;
        do {
          lVar33 = *plVar31;
          uVar11 = *(uint *)(lVar33 + 0xc);
          if (uVar11 - 4 < 0x3f4) {
            bVar5 = *(byte *)(plVar31 + 1);
            if (*(int *)(&DAT_00252478 + (ulong)(uVar11 - 4) * 4) == 3) {
              uVar26 = 0;
              uVar17 = uVar11;
              do {
                uVar16 = uVar26 + 1;
                *(byte *)((long)local_78 + uVar26) = (byte)uVar17 & 0x7f | (0x7f < uVar17) << 7;
                bVar1 = 0x7f < uVar17;
                uVar26 = uVar16;
                uVar17 = uVar17 >> 7;
              } while (bVar1);
              (**(code **)**(undefined8 **)(lVar24 + 8))
                        (*(undefined8 **)(lVar24 + 8),local_78,uVar16 & 0xffffffff);
              if ((bVar5 & 1) == 0) {
                iVar12 = 0;
                if ((int)uVar11 < 0x22b) {
                  if ((uVar11 == 0x25) || (uVar11 == 0x26)) {
LAB_00356690:
                    iVar12 = *(int *)(lVar9 + 0x88);
                  }
                  else if (uVar11 == 0x58) {
                    iVar12 = *(int *)(lVar9 + 0x28);
                  }
                }
                else if ((int)uVar11 < 0x28b) {
                  if (uVar11 == 0x22b) {
                    iVar12 = *(int *)(lVar9 + 0x110);
                  }
                  else if (uVar11 == 0x27e) goto LAB_00356698;
                }
                else if (uVar11 == 0x28b) {
LAB_00356698:
                  iVar12 = *(int *)(lVar9 + 0xc);
                }
                else if (uVar11 == 0x344) goto LAB_00356690;
                local_78[0] = (float)iVar12;
                goto LAB_00356510;
              }
              if ((*(long **)(lVar33 + 0x18) != *(long **)(lVar33 + 0x10)) &&
                 (lVar33 = **(long **)(lVar33 + 0x10), lVar33 != 0)) {
                local_78[0] = (float)*(int *)(lVar33 + 0x28);
                goto LAB_00356510;
              }
            }
            else if (*(int *)(&DAT_00252478 + (ulong)(uVar11 - 4) * 4) == 2) {
              uVar26 = 0;
              uVar17 = uVar11;
              do {
                uVar16 = uVar26 + 1;
                *(byte *)((long)local_78 + uVar26) = (byte)uVar17 & 0x7f | (0x7f < uVar17) << 7;
                bVar1 = 0x7f < uVar17;
                uVar26 = uVar16;
                uVar17 = uVar17 >> 7;
              } while (bVar1);
              (**(code **)**(undefined8 **)(lVar24 + 8))
                        (*(undefined8 **)(lVar24 + 8),local_78,uVar16 & 0xffffffff);
              if ((bVar5 & 1) == 0) {
                local_78[0] = (float)FUN_003567b0(lVar9,uVar11);
              }
              else {
                if ((*(long **)(lVar33 + 0x18) == *(long **)(lVar33 + 0x10)) ||
                   (lVar33 = **(long **)(lVar33 + 0x10), lVar33 == 0)) goto LAB_0035652c;
                local_78[0] = *(float *)(lVar33 + 0x28);
              }
LAB_00356510:
              (**(code **)**(undefined8 **)(lVar24 + 8))(*(undefined8 **)(lVar24 + 8),local_78,4);
            }
          }
LAB_0035652c:
          plVar31 = plVar31 + 2;
        } while (plVar31 != (long *)((long)__dest + uVar27));
        operator_delete(__dest);
      }
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


// ===== 00356760  FUN_00356760 =====

void FUN_00356760(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_00356760(*param_1);
    FUN_00356760(param_1[1]);
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 0035679c  FUN_0035679c =====

void FUN_0035679c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003567b0  FUN_003567b0 =====

undefined1  [16] FUN_003567b0(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  switch(param_2) {
  case 7:
    return ZEXT416(*(uint *)((long)param_1 + 0x174));
  case 8:
    return ZEXT416(*(uint *)(param_1 + 0x2f));
  case 9:
  case 0xd:
  case 0x5a:
                    /* WARNING: Could not recover jumptable at 0x00356884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0xd8))();
    return auVar2;
  case 10:
  case 0xe:
  case 0x5b:
  case 0x2fa:
                    /* WARNING: Could not recover jumptable at 0x00356848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0xe0))();
    return auVar2;
  case 0xb:
    return ZEXT416(*(uint *)((long)param_1 + 0x984));
  case 0xc:
    return ZEXT416(*(uint *)(param_1 + 0x131));
  case 0xf:
  case 0xbb:
  case 0x14a:
    return ZEXT416(*(uint *)((long)param_1 + 0xbc));
  case 0x10:
    return ZEXT416(*(uint *)(param_1 + 0x18));
  case 0x11:
    return ZEXT416(*(uint *)((long)param_1 + 0xc4));
  case 0x12:
  case 0x18:
  case 0x2a:
  case 0x65:
  case 0x112:
  case 0x131:
  case 0x147:
  case 0x1f8:
  case 0x2b2:
  case 0x310:
    return ZEXT416(*(uint *)(param_1 + 0x14));
  case 0x14:
  case 0x281:
    return ZEXT416(*(uint *)(param_1 + 0x35));
  case 0x15:
    return ZEXT416(*(uint *)((long)param_1 + 0x1ac));
  case 0x19:
  case 200:
  case 0x172:
  case 0x311:
    return ZEXT416(*(uint *)((long)param_1 + 0xa4));
  case 0x1a:
  case 0x2e:
  case 0x6c:
  case 0xca:
  case 0x142:
  case 0x1fc:
  case 0x2d9:
  case 0x37e:
    return ZEXT416(*(uint *)(param_1 + 0x16));
  case 0x1f:
    return ZEXT416(*(uint *)((long)param_1 + 0x1bc));
  case 0x21:
  case 0x69:
  case 0xb6:
  case 0x132:
  case 0x148:
  case 0x150:
  case 0x175:
  case 0x1f9:
  case 0x2ed:
    return ZEXT416(*(uint *)((long)param_1 + 0xa4));
  case 0x22:
  case 0x6a:
  case 0x186:
    return ZEXT416(*(uint *)(param_1 + 0x15));
  case 0x23:
  case 0x144:
  case 0x2d8:
    return ZEXT416(*(uint *)((long)param_1 + 0xac));
  case 0x27:
  case 499:
    return ZEXT416(*(uint *)((long)param_1 + 0x8c));
  case 0x2f:
    return ZEXT416(*(uint *)(param_1 + 0x1c));
  case 0x3a:
    return ZEXT416(*(uint *)(param_1 + 6));
  case 0x3f:
  case 0x27c:
  case 0x28c:
    return ZEXT416(*(uint *)((long)param_1 + 0xc));
  case 0x40:
    return ZEXT416(*(uint *)(param_1 + 2));
  case 0x41:
    return ZEXT416(*(uint *)((long)param_1 + 0x14));
  case 0x42:
  case 0xa6:
    return ZEXT416(*(uint *)(param_1 + 3));
  case 0x46:
  case 0x8c:
    return ZEXT416(*(uint *)(param_1 + 5));
  case 0x4f:
  case 0x52:
  case 0x54:
  case 0x13f:
  case 0x201:
    return ZEXT416(*(uint *)((long)param_1 + 0xc4));
  case 0x50:
    return ZEXT416(*(uint *)(param_1 + 0x19));
  case 0x51:
  case 0x56:
  case 0x203:
    return ZEXT416(*(uint *)((long)param_1 + 0xcc));
  case 0x53:
  case 0x55:
  case 0x202:
    return ZEXT416(*(uint *)(param_1 + 0x19));
  case 0x57:
    return ZEXT416(*(uint *)(param_1 + 0x1a));
  case 0x59:
  case 0x23f:
  case 0x250:
    return ZEXT416(*(uint *)(param_1 + 0x22));
  case 0x60:
  case 0x73:
  case 0x120:
  case 300:
  case 0x141:
  case 0x152:
  case 0x35b:
    return ZEXT416(*(uint *)((long)param_1 + 0x8c));
  case 0x61:
  case 500:
    return ZEXT416(*(uint *)(param_1 + 0x12));
  case 0x62:
  case 0x130:
  case 0x154:
  case 0x1f5:
    return ZEXT416(*(uint *)((long)param_1 + 0x94));
  case 99:
  case 0xb1:
  case 0x133:
  case 0x2f7:
    return ZEXT416(*(uint *)(param_1 + 0x13));
  case 100:
  case 0x134:
  case 0x1f7:
  case 0x2f8:
  case 0x30f:
    return ZEXT416(*(uint *)((long)param_1 + 0x9c));
  case 0x68:
  case 0x16b:
  case 0x174:
    return ZEXT416(*(uint *)(param_1 + 0x14));
  case 0x6b:
  case 0xb8:
  case 0x1fb:
  case 0x2ef:
    return ZEXT416(*(uint *)((long)param_1 + 0xac));
  case 0x6d:
  case 0xb9:
  case 0x143:
  case 0x1fd:
  case 0x2da:
    return ZEXT416(*(uint *)((long)param_1 + 0xb4));
  case 0x72:
  case 0xac:
  case 0xf3:
  case 299:
  case 0x151:
  case 0x1f2:
  case 0x2a3:
  case 0x2b4:
    return ZEXT416(*(uint *)(param_1 + 0x11));
  case 0x74:
  case 0x12f:
  case 0x153:
  case 0x35c:
    return ZEXT416(*(uint *)(param_1 + 0x12));
  case 0x7b:
    return ZEXT416(*(uint *)(param_1 + 0x36));
  case 0x7c:
    return ZEXT416(*(uint *)((long)param_1 + 0x1b4));
  case 0x7e:
    return ZEXT416(*(uint *)((long)param_1 + 0x1bc));
  case 0x7f:
    return ZEXT416(*(uint *)(param_1 + 0x3b));
  case 0x9d:
  case 0x197:
    return ZEXT416(*(uint *)((long)param_1 + 0x14));
  case 0xa1:
    return ZEXT416(*(uint *)(param_1 + 0x38));
  case 0xa2:
    return ZEXT416(*(uint *)((long)param_1 + 0x1c4));
  case 0xa3:
    return ZEXT416(*(uint *)(param_1 + 0x39));
  case 0xb7:
  case 0x149:
  case 0x14e:
  case 0x1fa:
  case 0x2ee:
  case 0x312:
    return ZEXT416(*(uint *)(param_1 + 0x15));
  case 0xba:
  case 0x1fe:
    return ZEXT416(*(uint *)(param_1 + 0x17));
  case 199:
  case 0xd7:
    return ZEXT416(*(uint *)(param_1 + 0x16));
  case 0xcf:
  case 0x212:
    uVar1 = (ulong)*(uint *)(param_1 + 0x10);
    break;
  case 0xd0:
    return ZEXT416(*(uint *)((long)param_1 + 0x84));
  case 0xd8:
    return ZEXT416(*(uint *)((long)param_1 + 0xb4));
  case 0xe5:
  case 0x309:
    return ZEXT416(*(uint *)(param_1 + 3));
  case 0xef:
                    /* WARNING: Could not recover jumptable at 0x003569a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0xa0))();
    return auVar2;
  case 0x11d:
  case 0x2c2:
  case 0x38c:
    return ZEXT416(*(uint *)(param_1 + 0x30));
  case 0x11e:
    return ZEXT416(*(uint *)((long)param_1 + 0x184));
  case 0x124:
    return ZEXT416(*(uint *)(param_1 + 0xc));
  case 0x129:
    return ZEXT416(*(uint *)((long)param_1 + 0x1c));
  case 0x13d:
  case 0x1ff:
    return ZEXT416(*(uint *)((long)param_1 + 0xbc));
  case 0x13e:
  case 0x14b:
  case 0x200:
    return ZEXT416(*(uint *)(param_1 + 0x18));
  case 0x14c:
    return ZEXT416(*(uint *)(param_1 + 0x17));
  case 0x16e:
    return ZEXT416(*(uint *)(param_1 + 0x31));
  case 0x16f:
    return ZEXT416(*(uint *)((long)param_1 + 0x18c));
  case 0x173:
    return ZEXT416(*(uint *)(param_1 + 0x32));
  case 0x17c:
    return ZEXT416(*(uint *)(param_1 + 0x2f));
  case 0x17d:
  case 0x38b:
    return ZEXT416(*(uint *)((long)param_1 + 0x17c));
  case 0x196:
    return ZEXT416(*(uint *)(param_1 + 2));
  case 0x1f6:
    return ZEXT416(*(uint *)(param_1 + 0x13));
  case 0x204:
    return ZEXT416(*(uint *)(param_1 + 0x1a));
  case 0x205:
    return ZEXT416(*(uint *)((long)param_1 + 0xd4));
  case 0x206:
    return ZEXT416(*(uint *)(param_1 + 0x1b));
  case 0x207:
    return ZEXT416(*(uint *)((long)param_1 + 0xdc));
  case 0x208:
  case 0x2f4:
    return ZEXT416(*(uint *)(param_1 + 0x1c));
  case 0x209:
  case 0x2cc:
    return ZEXT416(*(uint *)((long)param_1 + 0xe4));
  case 0x20a:
  case 0x2cd:
    return ZEXT416(*(uint *)(param_1 + 0x1d));
  case 0x20b:
  case 0x2ce:
    return ZEXT416(*(uint *)((long)param_1 + 0xec));
  case 0x20c:
    return ZEXT416(*(uint *)((long)param_1 + 0xf4));
  case 0x280:
    return ZEXT416(*(uint *)((long)param_1 + 0x1a4));
  case 0x282:
    return ZEXT416(*(uint *)((long)param_1 + 0x1ac));
  case 0x283:
    return ZEXT416(*(uint *)(param_1 + 0x36));
  case 0x284:
  case 0x298:
    return ZEXT416(*(uint *)((long)param_1 + 0x214));
  case 0x285:
    return ZEXT416(*(uint *)(param_1 + 0x43));
  case 0x297:
    return ZEXT416(*(uint *)(param_1 + 0x42));
  case 0x2a9:
  case 0x2cf:
    return ZEXT416(*(uint *)(param_1 + 0x1e));
  case 0x2b9:
    return ZEXT416(*(uint *)((long)param_1 + 0x134));
  case 0x2ba:
    return ZEXT416(*(uint *)(param_1 + 0x27));
  case 699:
    return ZEXT416(*(uint *)((long)param_1 + 0x13c));
  case 700:
    return ZEXT416(*(uint *)(param_1 + 0x28));
  case 0x2c3:
  case 0x3cf:
    return ZEXT416(*(uint *)((long)param_1 + 0x184));
  case 0x2f9:
                    /* WARNING: Could not recover jumptable at 0x00356a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0xd0))();
    return auVar2;
  case 0x2fb:
                    /* WARNING: Could not recover jumptable at 0x003569f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0xf0))();
    return auVar2;
  case 0x30d:
                    /* WARNING: Could not recover jumptable at 0x00356a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x238))();
    return auVar2;
  case 0x326:
                    /* WARNING: Could not recover jumptable at 0x00356a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x100))();
    return auVar2;
  case 0x327:
                    /* WARNING: Could not recover jumptable at 0x003569b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x110))();
    return auVar2;
  case 0x328:
                    /* WARNING: Could not recover jumptable at 0x003569fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x120))();
    return auVar2;
  case 0x329:
                    /* WARNING: Could not recover jumptable at 0x003569c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x130))();
    return auVar2;
  case 0x32a:
                    /* WARNING: Could not recover jumptable at 0x00356a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x160))();
    return auVar2;
  case 0x32b:
                    /* WARNING: Could not recover jumptable at 0x003569e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x170))();
    return auVar2;
  case 0x332:
    return ZEXT416(*(uint *)(param_1 + 0x32));
  case 0x360:
                    /* WARNING: Could not recover jumptable at 0x00356a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x140))();
    return auVar2;
  case 0x361:
                    /* WARNING: Could not recover jumptable at 0x00356a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x150))(0);
    return auVar2;
  case 0x378:
    return ZEXT416(*(uint *)(param_1 + 0x21));
  case 0x379:
    return ZEXT416(*(uint *)((long)param_1 + 0x10c));
  case 0x3d0:
    return ZEXT416(*(uint *)(param_1 + 0x31));
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


// ===== 00356b70  FUN_00356b70 =====

void FUN_00356b70(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar6 = (long *)*plVar2;
    if (plVar6 == plVar3) {
      if ((plVar2[1] == 0) || (plVar6 = (long *)(plVar2[1] + 0x18), *(char *)plVar6 != '\0')) {
        plVar6 = plVar3;
        if ((long *)*plVar3 != param_2) {
          plVar6 = (long *)plVar3[1];
          lVar4 = *plVar6;
          plVar3[1] = lVar4;
          plVar7 = plVar3;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
            plVar7 = (long *)*plVar2;
          }
          plVar6[2] = (long)plVar2;
          if (plVar7 != plVar3) {
            plVar2 = plVar2 + 1;
          }
          *plVar2 = (long)plVar6;
          plVar3[2] = (long)plVar6;
          plVar2 = (long *)plVar6[2];
          *plVar6 = (long)plVar3;
          plVar3 = (long *)*plVar2;
        }
        lVar4 = plVar3[1];
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar2;
        }
        puVar5 = (undefined8 *)plVar2[2];
        plVar6 = (long *)*puVar5;
        plVar3[2] = (long)puVar5;
        puVar5[plVar6 != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
        plVar2[2] = (long)plVar3;
        return;
      }
    }
    else if ((plVar6 == (long *)0x0) || (plVar6 = plVar6 + 3, (char)*plVar6 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        if ((long *)*plVar2 != plVar3) {
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (long)param_2;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        param_2[1] = (long)plVar3;
        plVar3 = param_2;
      }
      plVar6 = (long *)plVar2[1];
      *(undefined1 *)(plVar3 + 3) = 1;
      lVar4 = *plVar6;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      puVar5 = (undefined8 *)plVar2[2];
      plVar3 = (long *)*puVar5;
      plVar6[2] = (long)puVar5;
      puVar5[plVar3 != plVar2] = plVar6;
      *plVar6 = (long)plVar2;
      plVar2[2] = (long)plVar6;
      return;
    }
    bVar1 = plVar2 == param_1;
    *(undefined1 *)(plVar3 + 3) = 1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar6 = '\x01';
    param_2 = plVar2;
  } while( true );
}


// ===== 00356d0c  FUN_00356d0c =====

void FUN_00356d0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00356d20  rive::AnimationResetFactory::release =====

/* rive::AnimationResetFactory::release(std::__ndk1::unique_ptr<rive::AnimationReset,
   std::__ndk1::default_delete<rive::AnimationReset> >) */

void rive::AnimationResetFactory::release(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  std::__ndk1::mutex::lock();
  puVar1 = PTR_m_resources_0067cce8;
  lVar15 = *param_1;
  plVar5 = *(long **)(PTR_m_resources_0067cce8 + 8);
  plVar14 = *(long **)(PTR_m_resources_0067cce8 + 0x10);
  *(undefined8 *)(lVar15 + 0x20) = 0;
  if (plVar5 < plVar14) {
    *param_1 = 0;
    plVar14 = plVar5 + 1;
    *plVar5 = lVar15;
    goto LAB_00356ee4;
  }
  lVar12 = (long)plVar5 - *(long *)puVar1;
  lVar13 = lVar12 >> 3;
  uVar7 = lVar13 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_00356f0c();
LAB_00356f08:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = (long)plVar14 - *(long *)puVar1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00356f08;
    pvVar2 = operator_new(uVar6 << 3);
  }
  *param_1 = 0;
  plVar5 = (long *)((long)pvVar2 + lVar13 * 8);
  pvVar3 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar16 = *(long **)puVar1;
  plVar11 = *(long **)(puVar1 + 8);
  plVar14 = plVar5 + 1;
  *plVar5 = lVar15;
  lVar15 = (long)plVar11 - (long)plVar16;
  if (lVar15 == 0) {
    *(long **)puVar1 = plVar5;
    *(long **)(puVar1 + 8) = plVar14;
    *(void **)(puVar1 + 0x10) = pvVar3;
  }
  else {
    uVar7 = lVar15 - 8;
    plVar10 = plVar11;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar11 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar5 &&
        ((long *)((long)pvVar2 + (lVar12 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar11)))) {
LAB_00356e64:
      do {
        plVar10 = plVar10 + -1;
        lVar15 = *plVar10;
        *plVar10 = 0;
        plVar5 = plVar5 + -1;
        *plVar5 = lVar15;
      } while (plVar10 != plVar16);
    }
    else {
      plVar8 = plVar5 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar4 = uVar7 & 0x3ffffffffffffffc;
      plVar10 = plVar11 + -uVar4;
      uVar6 = uVar4;
      do {
        plVar9 = plVar11 + -4;
        lVar17 = plVar11[-3];
        lVar13 = *plVar9;
        lVar12 = plVar11[-1];
        lVar15 = plVar11[-2];
        uVar6 = uVar6 - 4;
        plVar11[-3] = 0;
        *plVar9 = 0;
        plVar11[-1] = 0;
        plVar11[-2] = 0;
        plVar8[-1] = lVar17;
        plVar8[-2] = lVar13;
        plVar8[1] = lVar12;
        *plVar8 = lVar15;
        plVar8 = plVar8 + -4;
        plVar11 = plVar9;
      } while (uVar6 != 0);
      plVar5 = plVar5 + -uVar4;
      if (uVar7 != uVar4) goto LAB_00356e64;
    }
    plVar11 = *(long **)puVar1;
    plVar16 = *(long **)(puVar1 + 8);
    *(long **)puVar1 = plVar5;
    *(long **)(puVar1 + 8) = plVar14;
    *(void **)(puVar1 + 0x10) = pvVar3;
    while (plVar16 != plVar11) {
      plVar16 = plVar16 + -1;
      pvVar2 = (void *)*plVar16;
      *plVar16 = 0;
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar2 + 0x48);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar2 + 0x50) = pvVar3;
          operator_delete(pvVar3);
        }
        (**(code **)(**(long **)((long)pvVar2 + 8) + 8))();
        operator_delete(pvVar2);
      }
    }
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
LAB_00356ee4:
  *(long **)(puVar1 + 8) = plVar14;
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 00356f0c  FUN_00356f0c =====

void FUN_00356f0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00356f20  rive::AnimationReset::AnimationReset =====

/* rive::AnimationReset::AnimationReset() */

void __thiscall rive::AnimationReset::AnimationReset(AnimationReset *this)

{
  AnimationReset *pAVar1;
  
  pAVar1 = this + 0x48;
  *(undefined ***)this = &PTR_FUN_00654190;
  *(AnimationReset **)(this + 8) = this;
  *(undefined8 *)(this + 0x20) = 0;
  *(AnimationReset **)(this + 0x10) = pAVar1;
  *(long *)(this + 0x18) = *(long *)(this + 0x50) - *(long *)pAVar1;
  BinaryDataReader::BinaryDataReader((BinaryDataReader *)(this + 0x28),(uchar *)0x0,0);
  *(undefined8 *)pAVar1 = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


// ===== 00356f78  FUN_00356f78 =====

void FUN_00356f78(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = *plVar3;
  uVar1 = lVar5 + param_3;
  lVar2 = uVar1 - (plVar3[1] - lVar4);
  if ((ulong)(plVar3[1] - lVar4) <= uVar1 && lVar2 != 0) {
    FUN_00356ff8(plVar3,lVar2);
    lVar4 = **(long **)(param_1 + 0x10);
  }
  memcpy((void *)(lVar4 + lVar5),param_2,param_3);
  *(size_t *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_3;
  return;
}


// ===== 00356fec  FUN_00356fec =====

void FUN_00356fec(void)

{
  return;
}


// ===== 00356ff0  FUN_00356ff0 =====

void FUN_00356ff0(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 00356ff8  FUN_00356ff8 =====

void FUN_00356ff8(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *__s;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *__s_00;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  __s_00 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)__s_00)) {
    puVar13 = __s_00;
    if (param_2 != 0) {
      puVar13 = __s_00 + param_2;
      memset(__s_00,0,param_2);
    }
    param_1[1] = puVar13;
    return;
  }
  puVar13 = (undefined1 *)*param_1;
  uVar14 = (long)__s_00 - (long)puVar13;
  uVar7 = uVar14 + param_2;
  if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00327f8c(param_1);
  }
  uVar4 = param_1[2] - (long)puVar13;
  uVar8 = uVar4 * 2;
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = uVar7;
  }
  if (0x3ffffffffffffffe < uVar4) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (undefined1 *)operator_new(uVar8);
  }
  __s = puVar3 + uVar14;
  puVar1 = __s + param_2;
  memset(__s,0,param_2);
  puVar11 = __s_00;
  puVar12 = __s;
  if (__s_00 == puVar13) goto LAB_0035718c;
  puVar12 = puVar3;
  if ((7 < uVar14) && (0x1f < (ulong)((long)puVar13 - (long)puVar3))) {
    puVar11 = puVar13;
    if (uVar14 < 0x20) {
      uVar4 = 0;
    }
    else {
      puVar6 = (undefined8 *)(__s_00 + -0x10);
      uVar4 = uVar14 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)(puVar3 + ((long)puVar6 - (long)puVar13));
      uVar7 = uVar4;
      do {
        puVar2 = puVar6 + -1;
        uVar17 = puVar6[-2];
        uVar16 = puVar6[1];
        uVar15 = *puVar6;
        uVar7 = uVar7 - 0x20;
        puVar6 = puVar6 + -4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar17;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar9 = puVar9 + -4;
      } while (uVar7 != 0);
      if (uVar14 == uVar4) goto LAB_0035718c;
      if ((uVar14 & 0x18) == 0) {
        __s = __s + -uVar4;
        __s_00 = __s_00 + -uVar4;
        goto LAB_00357178;
      }
    }
    uVar7 = uVar14 & 0xfffffffffffffff8;
    puVar9 = (undefined8 *)(__s_00 + (-8 - uVar4));
    __s_00 = __s_00 + -uVar7;
    lVar5 = uVar4 - uVar7;
    lVar10 = (long)puVar9 - (long)puVar13;
    do {
      lVar5 = lVar5 + 8;
      *(undefined8 *)(puVar3 + lVar10) = *puVar9;
      lVar10 = lVar10 + -8;
      puVar9 = puVar9 + -1;
    } while (lVar5 != 0);
    if (uVar14 == uVar7) goto LAB_0035718c;
    __s = __s + -uVar7;
  }
LAB_00357178:
  do {
    __s = __s + -1;
    __s_00 = __s_00 + -1;
    *__s = *__s_00;
  } while (__s_00 != puVar13);
  puVar11 = (undefined1 *)*param_1;
LAB_0035718c:
  *param_1 = puVar12;
  param_1[1] = puVar1;
  param_1[2] = puVar3 + uVar8;
  if (puVar11 == (undefined1 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 003571dc  rive::AnimationReset::writeObjectId =====

/* rive::AnimationReset::writeObjectId(unsigned int) */

void __thiscall rive::AnimationReset::writeObjectId(AnimationReset *this,uint param_1)

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
  (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357260  rive::AnimationReset::writeTotalProperties =====

/* rive::AnimationReset::writeTotalProperties(unsigned int) */

void __thiscall rive::AnimationReset::writeTotalProperties(AnimationReset *this,uint param_1)

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
  (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003572e4  rive::AnimationReset::writePropertyKey =====

/* rive::AnimationReset::writePropertyKey(unsigned int) */

void __thiscall rive::AnimationReset::writePropertyKey(AnimationReset *this,uint param_1)

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
  (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357368  rive::AnimationReset::writePropertyValue =====

/* rive::AnimationReset::writePropertyValue(float) */

void __thiscall rive::AnimationReset::writePropertyValue(AnimationReset *this,float param_1)

{
  long lVar1;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
  (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003573c4  rive::AnimationReset::clear =====

/* rive::AnimationReset::clear() */

void __thiscall rive::AnimationReset::clear(AnimationReset *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


// ===== 003573cc  rive::AnimationReset::complete =====

/* rive::AnimationReset::complete() */

void __thiscall rive::AnimationReset::complete(AnimationReset *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x48);
  if (lVar1 != *(long *)(this + 0x50)) {
    *(long *)(this + 0x40) = *(long *)(this + 0x20);
    *(long *)(this + 0x28) = lVar1;
    *(long *)(this + 0x30) = lVar1 + *(long *)(this + 0x20);
  }
  return;
}


// ===== 003573ec  rive::AnimationReset::apply =====

/* rive::AnimationReset::apply(rive::Artboard*) */

void __thiscall rive::AnimationReset::apply(AnimationReset *this,Artboard *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  float *pfVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  
  pbVar9 = *(byte **)(this + 0x48);
  if (pbVar9 != *(byte **)(this + 0x50)) {
    pbVar5 = *(byte **)(this + 0x30);
    *(byte **)(this + 0x28) = pbVar9;
    if (pbVar9 < pbVar5) {
      do {
        uVar12 = 0;
        uVar14 = 0;
        do {
          if (pbVar5 <= pbVar9) {
            uVar14 = 0;
            this[0x38] = (AnimationReset)0x1;
            pbVar7 = pbVar5;
            break;
          }
          pbVar7 = pbVar9 + 1;
          bVar1 = *pbVar9;
          uVar13 = uVar12 & 0x1f;
          uVar12 = (uVar12 & 0xff) + 7;
          uVar14 = (bVar1 & 0x7f) << (ulong)uVar13 | uVar14;
          pbVar9 = pbVar7;
        } while ((char)bVar1 < '\0');
        lVar8 = *(long *)param_1;
        *(byte **)(this + 0x28) = pbVar7;
        uVar3 = (**(code **)(lVar8 + 0x348))(param_1,uVar14);
        pbVar5 = *(byte **)(this + 0x30);
        uVar12 = 0;
        uVar14 = 0;
        pbVar7 = *(byte **)(this + 0x28);
        do {
          if (pbVar5 <= pbVar7) {
            *(byte **)(this + 0x28) = pbVar5;
            this[0x38] = (AnimationReset)0x1;
            return;
          }
          pbVar9 = pbVar7 + 1;
          bVar1 = *pbVar7;
          uVar13 = uVar12 & 0x1f;
          uVar12 = (uVar12 & 0xff) + 7;
          uVar14 = (bVar1 & 0x7f) << (ulong)uVar13 | uVar14;
          pbVar7 = pbVar9;
        } while ((char)bVar1 < '\0');
        *(byte **)(this + 0x28) = pbVar9;
        if (uVar14 != 0) {
          uVar12 = 0;
          do {
            pfVar6 = *(float **)(this + 0x30);
            uVar13 = 0;
            uVar4 = 0;
            pfVar10 = *(float **)(this + 0x28);
            do {
              if (pfVar6 <= pfVar10) {
                uVar4 = 0;
                this[0x38] = (AnimationReset)0x1;
                pfVar11 = pfVar6;
                break;
              }
              pfVar11 = (float *)((long)pfVar10 + 1);
              bVar1 = *(byte *)pfVar10;
              uVar2 = uVar13 & 0x1f;
              uVar13 = (uVar13 & 0xff) + 7;
              uVar4 = (bVar1 & 0x7f) << (ulong)uVar2 | uVar4;
              pfVar10 = pfVar11;
            } while ((char)bVar1 < '\0');
            *(float **)(this + 0x28) = pfVar11;
            if ((long)pfVar6 - (long)pfVar11 < 4) {
              fVar15 = 0.0;
              this[0x38] = (AnimationReset)0x1;
            }
            else {
              pfVar6 = pfVar11 + 1;
              fVar15 = *pfVar11;
            }
            *(float **)(this + 0x28) = pfVar6;
            if (uVar4 - 4 < 0x3f4) {
              if (*(int *)(&DAT_00252478 + (ulong)(uVar4 - 4) * 4) == 3) {
                FUN_00358888(uVar3,uVar4,(int)fVar15);
              }
              else if (*(int *)(&DAT_00252478 + (ulong)(uVar4 - 4) * 4) == 2) {
                FUN_003575a8(uVar3);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar14);
          pbVar9 = *(byte **)(this + 0x28);
          pbVar5 = *(byte **)(this + 0x30);
        }
      } while (pbVar9 < pbVar5);
    }
  }
  return;
}


// ===== 003575a8  FUN_003575a8 =====

void FUN_003575a8(float param_1,long *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  float fVar1;
  
  switch(param_3) {
  case 7:
    if (*(float *)((long)param_2 + 0x174) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x174) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x238);
    break;
  case 8:
    if (*(float *)(param_2 + 0x2f) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x2f) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x240);
    break;
  case 9:
  case 0xd:
    if (*(float *)(param_2 + 0x22) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x22) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x178);
    break;
  case 10:
  case 0xe:
    if (*(float *)((long)param_2 + 0x114) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x114) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x180);
    break;
  case 0xb:
    if (*(float *)((long)param_2 + 0x984) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x984) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x310);
    break;
  case 0xc:
    if (*(float *)(param_2 + 0x131) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x131) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x318);
    break;
  case 0xf:
    if (*(float *)((long)param_2 + 0xbc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xbc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa8);
    break;
  case 0x10:
    if (*(float *)(param_2 + 0x18) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x18) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb0);
    break;
  case 0x11:
    if (*(float *)((long)param_2 + 0xc4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xc4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb8);
    break;
  case 0x12:
  case 0x18:
  case 0x2a:
  case 0x2b2:
    fVar1 = *(float *)(param_2 + 0x14);
    goto joined_r0x0035766c;
  default:
    goto switchD_003575d8_caseD_13;
  case 0x14:
    if (*(float *)(param_2 + 0x35) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x35) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1f0);
    break;
  case 0x15:
    if (*(float *)((long)param_2 + 0x1ac) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x1ac) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1f8);
    break;
  case 0x19:
  case 0x21:
  case 0x2ed:
    fVar1 = *(float *)((long)param_2 + 0xa4);
    goto joined_r0x00357620;
  case 0x1a:
  case 0x2e:
  case 0xd7:
    fVar1 = *(float *)(param_2 + 0x16);
    goto joined_r0x0035777c;
  case 0x1f:
  case 0x7e:
    if (*(float *)((long)param_2 + 0x1bc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x1bc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x228);
    break;
  case 0x22:
  case 0x2ee:
    fVar1 = *(float *)(param_2 + 0x15);
    goto joined_r0x00357630;
  case 0x23:
  case 0x2ef:
    fVar1 = *(float *)((long)param_2 + 0xac);
    goto joined_r0x003577ec;
  case 0x27:
  case 0x73:
  case 0x152:
  case 499:
  case 0x35b:
    fVar1 = *(float *)((long)param_2 + 0x8c);
    goto joined_r0x003576b4;
  case 0x2f:
    if (*(float *)(param_2 + 0x1c) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x100);
    break;
  case 0x3a:
    if (*(float *)(param_2 + 6) == param_1) {
      return;
    }
    *(float *)(param_2 + 6) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x68);
    break;
  case 0x3f:
    if (*(float *)((long)param_2 + 0xc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x68);
    break;
  case 0x40:
  case 0x196:
    if (*(float *)(param_2 + 2) == param_1) {
      return;
    }
    *(float *)(param_2 + 2) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x70);
    break;
  case 0x41:
  case 0x9d:
  case 0x197:
    if (*(float *)((long)param_2 + 0x14) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x14) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x78);
    break;
  case 0x42:
  case 0xe5:
    if (*(float *)(param_2 + 3) == param_1) {
      return;
    }
    *(float *)(param_2 + 3) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x80);
    break;
  case 0x46:
    if (*(float *)(param_2 + 5) == param_1) {
      return;
    }
    *(float *)(param_2 + 5) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x78);
    break;
  case 0x4f:
  case 0x52:
  case 0x54:
    if (*(float *)((long)param_2 + 0xc4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xc4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 200);
    break;
  case 0x50:
  case 0x53:
  case 0x55:
    if (*(float *)(param_2 + 0x19) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x19) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd0);
    break;
  case 0x51:
  case 0x56:
    if (*(float *)((long)param_2 + 0xcc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xcc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd8);
    break;
  case 0x57:
    if (*(float *)(param_2 + 0x1a) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1a) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xe0);
    break;
  case 0x59:
    if (*(float *)(param_2 + 0x22) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x22) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xf8);
    break;
  case 0x5a:
    if (*(float *)(param_2 + 0x29) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x29) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x100);
    break;
  case 0x5b:
    if (*(float *)((long)param_2 + 0x14c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x14c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x108);
    break;
  case 0x60:
  case 0x120:
  case 300:
    fVar1 = *(float *)((long)param_2 + 0x8c);
joined_r0x003576b4:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x8c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x98);
    break;
  case 0x61:
  case 0x12f:
    fVar1 = *(float *)(param_2 + 0x12);
    goto joined_r0x00357640;
  case 0x62:
  case 0x130:
    fVar1 = *(float *)((long)param_2 + 0x94);
    goto joined_r0x003578f0;
  case 99:
  case 0x133:
    fVar1 = *(float *)(param_2 + 0x13);
    goto joined_r0x00357a5c;
  case 100:
  case 0x134:
    fVar1 = *(float *)((long)param_2 + 0x9c);
    goto joined_r0x00357a78;
  case 0x65:
  case 0x131:
    fVar1 = *(float *)(param_2 + 0x14);
    goto joined_r0x00357f38;
  case 0x68:
  case 0x112:
  case 0x147:
    fVar1 = *(float *)(param_2 + 0x14);
joined_r0x0035766c:
    if (fVar1 == param_1) {
switchD_003575d8_caseD_13:
      return;
    }
    *(float *)(param_2 + 0x14) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x98);
    break;
  case 0x69:
  case 0x148:
  case 0x150:
  case 0x172:
    fVar1 = *(float *)((long)param_2 + 0xa4);
joined_r0x00357620:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xa4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa0);
    break;
  case 0x6a:
  case 0x149:
  case 0x14e:
  case 0x186:
    fVar1 = *(float *)(param_2 + 0x15);
joined_r0x00357630:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)(param_2 + 0x15) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa8);
    break;
  case 0x6b:
  case 0x144:
    fVar1 = *(float *)((long)param_2 + 0xac);
joined_r0x003577ec:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xac) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb0);
    break;
  case 0x6c:
  case 0x142:
    fVar1 = *(float *)(param_2 + 0x16);
joined_r0x0035777c:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)(param_2 + 0x16) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb8);
    break;
  case 0x6d:
  case 0x143:
    fVar1 = *(float *)((long)param_2 + 0xb4);
    goto joined_r0x00357a24;
  case 0x72:
  case 0xac:
  case 0xf3:
  case 0x151:
  case 0x1f2:
  case 0x2a3:
  case 0x2b4:
    fVar1 = *(float *)(param_2 + 0x11);
    goto joined_r0x0035812c;
  case 0x74:
  case 0x153:
  case 500:
  case 0x35c:
    fVar1 = *(float *)(param_2 + 0x12);
joined_r0x00357640:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)(param_2 + 0x12) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa0);
    break;
  case 0x7b:
    if (*(float *)(param_2 + 0x36) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x36) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x200);
    break;
  case 0x7c:
    if (*(float *)((long)param_2 + 0x1b4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x1b4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x208);
    break;
  case 0x7f:
    if (*(float *)(param_2 + 0x3b) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x3b) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x240);
    break;
  case 0x8c:
    if (*(float *)(param_2 + 5) == param_1) {
      return;
    }
    *(float *)(param_2 + 5) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x58);
    break;
  case 0xa1:
    if (*(float *)(param_2 + 0x38) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x38) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x230);
    break;
  case 0xa2:
    if (*(float *)((long)param_2 + 0x1c4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x1c4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x238);
    break;
  case 0xa3:
    if (*(float *)(param_2 + 0x39) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x39) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x240);
    break;
  case 0xa6:
    if (*(float *)(param_2 + 3) == param_1) {
      return;
    }
    *(float *)(param_2 + 3) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x58);
    break;
  case 0xb1:
    if (*(float *)(param_2 + 0x13) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x13) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb8);
    break;
  case 0xb6:
  case 0x175:
    if (*(float *)((long)param_2 + 0xa4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xa4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd0);
    break;
  case 0xb7:
    if (*(float *)(param_2 + 0x15) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x15) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd8);
    break;
  case 0xb8:
    if (*(float *)((long)param_2 + 0xac) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xac) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xe0);
    break;
  case 0xb9:
    if (*(float *)((long)param_2 + 0xb4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xb4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x108);
    break;
  case 0xba:
    if (*(float *)(param_2 + 0x17) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x17) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x110);
    break;
  case 0xbb:
    if (*(float *)((long)param_2 + 0xbc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xbc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x118);
    break;
  case 199:
  case 0xca:
    if (*(float *)(param_2 + 0x16) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x16) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xc0);
    break;
  case 200:
    fVar1 = *(float *)((long)param_2 + 0xa4);
    goto joined_r0x003584b4;
  case 0xcf:
  case 0x212:
    if (*(float *)(param_2 + 0x10) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x10) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x98);
    break;
  case 0xd0:
    if (*(float *)((long)param_2 + 0x84) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x84) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa0);
    break;
  case 0xd8:
    fVar1 = *(float *)((long)param_2 + 0xb4);
joined_r0x00357a24:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xb4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xc0);
    break;
  case 0xef:
                    /* WARNING: Could not recover jumptable at 0x00358628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xa8))();
    return;
  case 0x11d:
    if (*(float *)(param_2 + 0x30) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x30) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x248);
    break;
  case 0x11e:
    fVar1 = *(float *)((long)param_2 + 0x184);
    goto joined_r0x003581f4;
  case 0x124:
    if (*(float *)(param_2 + 0xc) == param_1) {
      return;
    }
    *(float *)(param_2 + 0xc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x60);
    break;
  case 0x129:
    if (*(float *)((long)param_2 + 0x1c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x1c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x60);
    break;
  case 299:
    fVar1 = *(float *)(param_2 + 0x11);
joined_r0x0035812c:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)(param_2 + 0x11) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x90);
    break;
  case 0x132:
    fVar1 = *(float *)((long)param_2 + 0xa4);
    goto joined_r0x00357f70;
  case 0x13d:
  case 0x14a:
    if (*(float *)((long)param_2 + 0xbc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xbc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd0);
    break;
  case 0x13e:
  case 0x14b:
    if (*(float *)(param_2 + 0x18) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x18) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd8);
    break;
  case 0x13f:
    if (*(float *)((long)param_2 + 0xc4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xc4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xe0);
    break;
  case 0x141:
    if (*(float *)((long)param_2 + 0x8c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x8c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa0);
    break;
  case 0x14c:
    if (*(float *)(param_2 + 0x17) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x17) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 200);
    break;
  case 0x154:
  case 0x1f5:
    fVar1 = *(float *)((long)param_2 + 0x94);
joined_r0x003578f0:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x94) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa8);
    break;
  case 0x16b:
  case 0x174:
    if (*(float *)(param_2 + 0x14) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x14) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 200);
    break;
  case 0x16e:
    fVar1 = *(float *)(param_2 + 0x31);
    goto joined_r0x00358210;
  case 0x16f:
    if (*(float *)((long)param_2 + 0x18c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x18c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x260);
    break;
  case 0x173:
    if (*(float *)(param_2 + 0x32) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x32) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x268);
    break;
  case 0x17c:
    if (*(float *)(param_2 + 0x2f) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x2f) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x238);
    break;
  case 0x17d:
    if (*(float *)((long)param_2 + 0x17c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x17c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x240);
    break;
  case 0x1f6:
    fVar1 = *(float *)(param_2 + 0x13);
joined_r0x00357a5c:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)(param_2 + 0x13) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb0);
    break;
  case 0x1f7:
    fVar1 = *(float *)((long)param_2 + 0x9c);
joined_r0x00357a78:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x9c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb8);
    break;
  case 0x1f8:
    fVar1 = *(float *)(param_2 + 0x14);
joined_r0x00357f38:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)(param_2 + 0x14) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xc0);
    break;
  case 0x1f9:
    fVar1 = *(float *)((long)param_2 + 0xa4);
joined_r0x00357f70:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xa4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 200);
    break;
  case 0x1fa:
    if (*(float *)(param_2 + 0x15) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x15) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd0);
    break;
  case 0x1fb:
    if (*(float *)((long)param_2 + 0xac) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xac) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd8);
    break;
  case 0x1fc:
    if (*(float *)(param_2 + 0x16) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x16) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xe0);
    break;
  case 0x1fd:
    if (*(float *)((long)param_2 + 0xb4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xb4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xe8);
    break;
  case 0x1fe:
    if (*(float *)(param_2 + 0x17) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x17) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xf0);
    break;
  case 0x1ff:
    if (*(float *)((long)param_2 + 0xbc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xbc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xf8);
    break;
  case 0x200:
    if (*(float *)(param_2 + 0x18) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x18) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x100);
    break;
  case 0x201:
    if (*(float *)((long)param_2 + 0xc4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xc4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x108);
    break;
  case 0x202:
    if (*(float *)(param_2 + 0x19) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x19) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x110);
    break;
  case 0x203:
    if (*(float *)((long)param_2 + 0xcc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xcc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x118);
    break;
  case 0x204:
    if (*(float *)(param_2 + 0x1a) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1a) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x120);
    break;
  case 0x205:
    if (*(float *)((long)param_2 + 0xd4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xd4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x128);
    break;
  case 0x206:
    if (*(float *)(param_2 + 0x1b) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1b) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x130);
    break;
  case 0x207:
    if (*(float *)((long)param_2 + 0xdc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xdc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x138);
    break;
  case 0x208:
    if (*(float *)(param_2 + 0x1c) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x140);
    break;
  case 0x209:
    if (*(float *)((long)param_2 + 0xe4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xe4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x148);
    break;
  case 0x20a:
    if (*(float *)(param_2 + 0x1d) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1d) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x150);
    break;
  case 0x20b:
    if (*(float *)((long)param_2 + 0xec) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xec) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x158);
    break;
  case 0x20c:
    if (*(float *)((long)param_2 + 0xf4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xf4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x168);
    break;
  case 0x23f:
    if (*(float *)(param_2 + 0x22) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x22) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa8);
    break;
  case 0x250:
    if (*(float *)(param_2 + 0x22) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x22) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1a0);
    break;
  case 0x27c:
    if (*(float *)((long)param_2 + 0xc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x50);
    break;
  case 0x280:
    if (*(float *)((long)param_2 + 0x1a4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x1a4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x2c8);
    break;
  case 0x281:
    if (*(float *)(param_2 + 0x35) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x35) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x2d0);
    break;
  case 0x282:
    if (*(float *)((long)param_2 + 0x1ac) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x1ac) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x2d8);
    break;
  case 0x283:
    if (*(float *)(param_2 + 0x36) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x36) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x2e0);
    break;
  case 0x284:
    fVar1 = *(float *)((long)param_2 + 0x214);
    goto joined_r0x00357f8c;
  case 0x285:
    if (*(float *)(param_2 + 0x43) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x43) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x368);
    break;
  case 0x28c:
    if (*(float *)((long)param_2 + 0xc) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xc) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x58);
    break;
  case 0x297:
    if (*(float *)(param_2 + 0x42) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x42) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x358);
    break;
  case 0x298:
    fVar1 = *(float *)((long)param_2 + 0x214);
joined_r0x00357f8c:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x214) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x360);
    break;
  case 0x2a9:
    if (*(float *)(param_2 + 0x1e) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1e) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa8);
    break;
  case 0x2b9:
    if (*(float *)((long)param_2 + 0x134) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x134) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1c8);
    break;
  case 0x2ba:
    if (*(float *)(param_2 + 0x27) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x27) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1d0);
    break;
  case 699:
    if (*(float *)((long)param_2 + 0x13c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x13c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1d8);
    break;
  case 700:
    if (*(float *)(param_2 + 0x28) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x28) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1e0);
    break;
  case 0x2c2:
    if (*(float *)(param_2 + 0x30) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x30) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x250);
    break;
  case 0x2c3:
    if (*(float *)((long)param_2 + 0x184) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x184) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 600);
    break;
  case 0x2cc:
    if (*(float *)((long)param_2 + 0xe4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xe4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb8);
    break;
  case 0x2cd:
    if (*(float *)(param_2 + 0x1d) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1d) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xc0);
    break;
  case 0x2ce:
    if (*(float *)((long)param_2 + 0xec) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xec) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 200);
    break;
  case 0x2cf:
    if (*(float *)(param_2 + 0x1e) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1e) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xd0);
    break;
  case 0x2d8:
    if (*(float *)((long)param_2 + 0xac) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xac) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x108);
    break;
  case 0x2d9:
    if (*(float *)(param_2 + 0x16) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x16) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x110);
    break;
  case 0x2da:
    if (*(float *)((long)param_2 + 0xb4) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xb4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x118);
    break;
  case 0x2f4:
    if (*(float *)(param_2 + 0x1c) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x1c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb0);
    break;
  case 0x2f7:
    if (*(float *)(param_2 + 0x13) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x13) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xf8);
    break;
  case 0x2f8:
    if (*(float *)((long)param_2 + 0x9c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x9c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x100);
    break;
  case 0x2f9:
    fVar1 = (float)(**(code **)(*param_2 + 0xd0))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 200))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x108);
    break;
  case 0x2fa:
    fVar1 = (float)(**(code **)(*param_2 + 0xe0))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0xd8))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x110);
    break;
  case 0x2fb:
    fVar1 = (float)(**(code **)(*param_2 + 0xf0))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0xe8))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x118);
    break;
  case 0x309:
    if (*(float *)(param_2 + 3) == param_1) {
      return;
    }
    *(float *)(param_2 + 3) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x50);
    break;
  case 0x30d:
    fVar1 = (float)(**(code **)(*param_2 + 0x238))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x230))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x240);
    break;
  case 0x30f:
    if (*(float *)((long)param_2 + 0x9c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x9c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa8);
    break;
  case 0x310:
    if (*(float *)(param_2 + 0x14) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x14) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb0);
    break;
  case 0x311:
    fVar1 = *(float *)((long)param_2 + 0xa4);
joined_r0x003584b4:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0xa4) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb8);
    break;
  case 0x312:
    if (*(float *)(param_2 + 0x15) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x15) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xc0);
    break;
  case 0x326:
    fVar1 = (float)(**(code **)(*param_2 + 0x100))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0xf8))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x188);
    break;
  case 0x327:
    fVar1 = (float)(**(code **)(*param_2 + 0x110))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x108))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 400);
    break;
  case 0x328:
    fVar1 = (float)(**(code **)(*param_2 + 0x120))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x118))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x198);
    break;
  case 0x329:
    fVar1 = (float)(**(code **)(*param_2 + 0x130))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x128))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1a0);
    break;
  case 0x32a:
    fVar1 = (float)(**(code **)(*param_2 + 0x160))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x158))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1b8);
    break;
  case 0x32b:
    fVar1 = (float)(**(code **)(*param_2 + 0x170))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x168))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1c0);
    break;
  case 0x332:
    if (*(float *)(param_2 + 0x32) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x32) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x238);
    break;
  case 0x360:
    fVar1 = (float)(**(code **)(*param_2 + 0x140))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x138))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1a8);
    break;
  case 0x361:
    fVar1 = (float)(**(code **)(*param_2 + 0x150))();
    if (fVar1 == param_1) {
      return;
    }
    (**(code **)(*param_2 + 0x148))(param_1,fVar1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x1b0);
    break;
  case 0x378:
    if (*(float *)(param_2 + 0x21) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x21) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xe0);
    break;
  case 0x379:
    if (*(float *)((long)param_2 + 0x10c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x10c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xe8);
    break;
  case 0x37e:
    if (*(float *)(param_2 + 0x16) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x16) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x150);
    break;
  case 0x38b:
    if (*(float *)((long)param_2 + 0x17c) == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x17c) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 600);
    break;
  case 0x38c:
    if (*(float *)(param_2 + 0x30) == param_1) {
      return;
    }
    *(float *)(param_2 + 0x30) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x260);
    break;
  case 0x3cf:
    fVar1 = *(float *)((long)param_2 + 0x184);
joined_r0x003581f4:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)((long)param_2 + 0x184) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x250);
    break;
  case 0x3d0:
    fVar1 = *(float *)(param_2 + 0x31);
joined_r0x00358210:
    if (fVar1 == param_1) {
      return;
    }
    *(float *)(param_2 + 0x31) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 600);
  }
                    /* WARNING: Could not recover jumptable at 0x003585d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00358888  FUN_00358888 =====

void FUN_00358888(long *param_1,int param_2,int param_3)

{
  if (param_2 < 0x22b) {
    if ((param_2 != 0x25) && (param_2 != 0x26)) {
      if (param_2 != 0x58) {
        return;
      }
      if ((int)param_1[5] == param_3) {
        return;
      }
      *(int *)(param_1 + 5) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003588f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))();
      return;
    }
  }
  else {
    if (param_2 < 0x28b) {
      if (param_2 == 0x22b) {
        if ((int)param_1[0x22] == param_3) {
          return;
        }
        *(int *)(param_1 + 0x22) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0035893c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xa8))();
        return;
      }
      if (param_2 != 0x27e) {
        return;
      }
      if (*(int *)((long)param_1 + 0xc) == param_3) {
        return;
      }
      *(int *)((long)param_1 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003588c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))();
      return;
    }
    if (param_2 == 0x28b) {
      if (*(int *)((long)param_1 + 0xc) == param_3) {
        return;
      }
      *(int *)((long)param_1 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0035895c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    if (param_2 != 0x344) {
      return;
    }
  }
  if ((int)param_1[0x11] == param_3) {
    return;
  }
  *(int *)(param_1 + 0x11) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00358920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}


// ===== 00358960  rive::FocusListenerGroup::FocusListenerGroup =====

/* rive::FocusListenerGroup::FocusListenerGroup(rive::FocusData*, rive::StateMachineListener const*,
   rive::StateMachineInstance*) */

void __thiscall
rive::FocusListenerGroup::FocusListenerGroup
          (FocusListenerGroup *this,FocusData *param_1,StateMachineListener *param_2,
          StateMachineInstance *param_3)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  
  puVar1 = PTR_vtable_0067cd80;
  *(StateMachineListener **)(this + 0x10) = param_2;
  *(StateMachineInstance **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(FocusData **)(this + 8) = param_1;
  bVar2 = (**(code **)(*(long *)param_2 + 0x60))(param_2,0xd);
  lVar3 = *(long *)param_2;
  this[0x20] = (FocusListenerGroup)(bVar2 & 1);
  bVar2 = (**(code **)(lVar3 + 0x60))(param_2,0xe);
  this[0x21] = (FocusListenerGroup)(bVar2 & 1);
  FocusData::addFocusListener(*(FocusData **)(this + 8),(FocusListener *)this);
  return;
}


// ===== 003589d8  rive::FocusListenerGroup::~FocusListenerGroup =====

/* rive::FocusListenerGroup::~FocusListenerGroup() */

void __thiscall rive::FocusListenerGroup::~FocusListenerGroup(FocusListenerGroup *this)

{
  ~FocusListenerGroup(this);
  operator_delete(this);
  return;
}


// ===== 003589fc  rive::FocusListenerGroup::onFocused =====

/* rive::FocusListenerGroup::onFocused() */

void __thiscall rive::FocusListenerGroup::onFocused(FocusListenerGroup *this)

{
  if (this[0x20] != (FocusListenerGroup)0x0) {
    StateMachineInstance::queueFocusEvent(*(StateMachineInstance **)(this + 0x18),this,true);
    return;
  }
  return;
}


// ===== 00358a18  rive::FocusListenerGroup::onBlurred =====

/* rive::FocusListenerGroup::onBlurred() */

void __thiscall rive::FocusListenerGroup::onBlurred(FocusListenerGroup *this)

{
  if (this[0x21] != (FocusListenerGroup)0x0) {
    StateMachineInstance::queueFocusEvent(*(StateMachineInstance **)(this + 0x18),this,false);
    return;
  }
  return;
}


// ===== 00358a34  rive::FocusListenerGroup::~FocusListenerGroup =====

/* rive::FocusListenerGroup::~FocusListenerGroup() */

void __thiscall rive::FocusListenerGroup::~FocusListenerGroup(FocusListenerGroup *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  puVar1 = *(undefined8 **)(lVar3 + 0xa0);
  puVar2 = *(undefined8 **)(lVar3 + 0xa8);
  *(undefined **)this = PTR_vtable_0067cd80 + 0x10;
  __dest = puVar1;
  for (; (puVar1 != puVar2 && (__dest = puVar1, (FocusListenerGroup *)*puVar1 != this));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(lVar3 + 0xa8) = (long)__dest + __n;
  }
  return;
}


// ===== 00358ab8  rive::KeyboardListenerGroup::KeyboardListenerGroup =====

/* rive::KeyboardListenerGroup::KeyboardListenerGroup(rive::FocusData*, rive::StateMachineListener
   const*, rive::StateMachineInstance*) */

void __thiscall
rive::KeyboardListenerGroup::KeyboardListenerGroup
          (KeyboardListenerGroup *this,FocusData *param_1,StateMachineListener *param_2,
          StateMachineInstance *param_3)

{
  undefined *puVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = PTR_vtable_0067cd88;
  *(StateMachineListener **)(this + 0x10) = param_2;
  *(StateMachineInstance **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(FocusData **)(this + 8) = param_1;
  if (param_2 != (StateMachineListener *)0x0) {
    uVar3 = (**(code **)(*(long *)param_2 + 0x60))(param_2,0xf);
    if ((uVar3 & 1) != 0) {
      FocusData::addKeyboardListener(*(FocusData **)(this + 8),(KeyboardListener *)this);
    }
    uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x60))(*(long **)(this + 0x10),8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    goto LAB_00358b20;
  }
  if (param_1 == (FocusData *)0x0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x25b);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar6 = (long *)0x0;
  if (uVar2 < 0x280) {
    if (uVar2 == 0x25b) {
LAB_00358bb4:
      plVar6 = plVar5 + 0x2f;
    }
    else if (uVar2 == 0x275) {
      plVar6 = plVar5 + 0x1c;
    }
    else if (uVar2 == 0x27d) goto LAB_00358bb4;
  }
  else if (uVar2 < 0x287) {
    if (uVar2 == 0x280) {
      plVar6 = plVar5 + 0x15;
    }
    else if (uVar2 == 0x286) {
      plVar6 = plVar5 + 3;
    }
  }
  else if ((uVar2 == 0x287) || (uVar2 == 0x3cc)) {
    plVar6 = plVar5 + 2;
  }
  uVar4 = *(uint *)(plVar6 + 6);
  if ((uVar4 >> 0x10 & 1) != 0) {
    FocusData::addKeyboardListener(*(FocusData **)(this + 8),(KeyboardListener *)this);
    uVar4 = *(uint *)(plVar6 + 6);
  }
  if ((uVar4 >> 0x11 & 1) == 0) {
    return;
  }
LAB_00358b20:
  FocusData::addTextInputListener(*(FocusData **)(this + 8),(KeyboardListener *)this);
  return;
}


// ===== 00358c0c  rive::KeyboardListenerGroup::~KeyboardListenerGroup =====

/* rive::KeyboardListenerGroup::~KeyboardListenerGroup() */

void __thiscall rive::KeyboardListenerGroup::~KeyboardListenerGroup(KeyboardListenerGroup *this)

{
  ~KeyboardListenerGroup(this);
  operator_delete(this);
  return;
}


// ===== 00358c30  rive::KeyboardListenerGroup::keyInput =====

/* rive::KeyboardListenerGroup::keyInput(rive::Key, rive::KeyModifiers, bool, bool) */

undefined8 __thiscall
rive::KeyboardListenerGroup::keyInput
          (KeyboardListenerGroup *this,undefined4 param_2,undefined4 param_3,byte param_4,
          byte param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ScriptedDrawable *pSVar9;
  undefined1 uStack_81;
  undefined2 local_80;
  undefined1 local_7e;
  byte local_7d;
  byte local_7c;
  uint local_60;
  long local_58;
  undefined8 *puVar8;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 8) != 0) &&
     (pSVar9 = *(ScriptedDrawable **)(*(long *)(this + 8) + 0x30), pSVar9 != (ScriptedDrawable *)0x0
     )) {
    uVar4 = (**(code **)(*(long *)pSVar9 + 0x18))(pSVar9,0x239);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x00358cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*(long *)pSVar9 + 0x268))
                          (pSVar9,param_2,param_3,param_4 & 1,param_5 & 1);
        return uVar5;
      }
      goto LAB_00358e6c;
    }
    uVar4 = (**(code **)(*(long *)pSVar9 + 0x18))(pSVar9,0x25b);
    if (((uVar4 & 1) != 0) && (*(long *)(this + 0x10) == 0)) {
      uVar3 = (**(code **)(*(long *)pSVar9 + 0x10))(pSVar9);
      if (uVar3 < 0x280) {
        if ((uVar3 == 0x25b) || (uVar3 != 0x275)) {
          lVar6 = 0x178;
        }
        else {
          lVar6 = 0xe0;
        }
      }
      else if (uVar3 < 0x287) {
        if (uVar3 == 0x280) {
          lVar6 = 0xa8;
        }
        else {
          lVar6 = 0x18;
        }
      }
      else {
        lVar6 = 0x10;
      }
      if (((byte)pSVar9[lVar6 + 0x32] & 1) != 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
          uVar5 = ScriptedDrawable::keyInput(pSVar9,param_2,param_3,param_4 & 1,param_5 & 1);
          return uVar5;
        }
        goto LAB_00358e6c;
      }
    }
  }
  if (*(long *)(this + 0x10) != 0) {
    param_4 = param_4 & 1;
    param_5 = param_5 & 1;
    uVar4 = ListenerInputTypeKeyboard::keyboardListenerConstraintsMet
                      (*(long *)(this + 0x10),param_2,param_3,param_4,param_5);
    if ((uVar4 & 1) != 0) {
      uVar5 = *(undefined8 *)(this + 0x18);
      local_80 = (undefined2)param_2;
      local_7e = (undefined1)param_3;
      puVar7 = *(undefined8 **)(*(long *)(this + 0x10) + 0x30);
      puVar1 = *(undefined8 **)(*(long *)(this + 0x10) + 0x38);
      local_60 = 1;
      local_7d = param_4;
      local_7c = param_5;
      if (puVar7 != puVar1) {
        do {
          puVar8 = puVar7 + 1;
          (**(code **)(*(long *)*puVar7 + 0x58))((long *)*puVar7,uVar5,&local_80);
          puVar7 = puVar8;
        } while (puVar8 != puVar1);
        if (local_60 == 0xffffffff) goto LAB_00358dfc;
      }
      (*(code *)(&PTR_FUN_00667318)[local_60])(&uStack_81,&local_80);
    }
  }
LAB_00358dfc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 0;
  }
LAB_00358e6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358e70  rive::KeyboardListenerGroup::textInput =====

/* rive::KeyboardListenerGroup::textInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
rive::KeyboardListenerGroup::textInput(KeyboardListenerGroup *this,basic_string *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  basic_string *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined7 local_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  void *pvStack_60;
  uint local_50;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  undefined8 *puVar8;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 8) != 0) &&
     (pbVar9 = *(basic_string **)(*(long *)(this + 8) + 0x30), pbVar9 != (basic_string *)0x0)) {
    uVar4 = (**(code **)(*(long *)pbVar9 + 0x18))(pbVar9,0x239);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x00358ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*(long *)pbVar9 + 0x270))(pbVar9,param_1);
        return uVar5;
      }
      goto LAB_003590a8;
    }
    uVar4 = (**(code **)(*(long *)pbVar9 + 0x18))(pbVar9,0x25b);
    if (((uVar4 & 1) != 0) && (*(long *)(this + 0x10) == 0)) {
      uVar3 = (**(code **)(*(long *)pbVar9 + 0x10))(pbVar9);
      if (uVar3 < 0x280) {
        if ((uVar3 == 0x25b) || (uVar3 != 0x275)) {
          lVar6 = 0x178;
        }
        else {
          lVar6 = 0xe0;
        }
      }
      else if (uVar3 < 0x287) {
        if (uVar3 == 0x280) {
          lVar6 = 0xa8;
        }
        else {
          lVar6 = 0x18;
        }
      }
      else {
        lVar6 = 0x10;
      }
      if (((byte)pbVar9[lVar6 + 0x32] >> 1 & 1) != 0) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
          uVar5 = ScriptedDrawable::textInput(pbVar9);
          return uVar5;
        }
        goto LAB_003590a8;
      }
    }
  }
  lVar6 = *(long *)(this + 0x10);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(this + 0x18);
    if (((byte)*param_1 & 1) == 0) {
      local_80 = *(void **)(param_1 + 0x10);
      uStack_88 = (undefined1)*(undefined8 *)(param_1 + 8);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(param_1 + 8) >> 8);
      local_90 = SUB81(*(undefined8 *)param_1,0);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)param_1 >> 8);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(&local_90,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
    }
    pvStack_60 = local_80;
    uStack_67 = uStack_87;
    uStack_68 = uStack_88;
    local_6f = uStack_8f;
    local_70 = local_90;
    puVar1 = *(undefined8 **)(lVar6 + 0x38);
    local_48 = uStack_8f;
    local_80 = (void *)0x0;
    uStack_41 = uStack_88;
    uStack_40 = uStack_87;
    local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_87 = 0;
    local_50 = 2;
    puVar7 = *(undefined8 **)(lVar6 + 0x30);
    if (*(undefined8 **)(lVar6 + 0x30) == puVar1) {
LAB_00359024:
      (*(code *)(&PTR_FUN_00667318)[local_50])(&local_48,&local_70);
    }
    else {
      do {
        puVar8 = puVar7 + 1;
        (**(code **)(*(long *)*puVar7 + 0x58))((long *)*puVar7,uVar5,&local_70);
        puVar7 = puVar8;
      } while (puVar8 != puVar1);
      if (local_50 != 0xffffffff) goto LAB_00359024;
    }
    local_50 = 0xffffffff;
    if (((byte)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
LAB_003590a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003590ac  rive::KeyboardListenerGroup::~KeyboardListenerGroup =====

/* rive::KeyboardListenerGroup::~KeyboardListenerGroup() */

void __thiscall rive::KeyboardListenerGroup::~KeyboardListenerGroup(KeyboardListenerGroup *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  ushort uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  
  plVar5 = *(long **)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067cd88 + 0x10;
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x60))(plVar5,0xf);
    if ((uVar6 & 1) != 0) {
      lVar9 = *(long *)(this + 8);
      puVar2 = *(undefined8 **)(lVar9 + 0xc0);
      puVar1 = *(undefined8 **)(lVar9 + 0xb8);
      puVar8 = puVar1;
      for (; (puVar1 != puVar2 && (puVar8 = puVar1, (KeyboardListenerGroup *)*puVar1 != this));
          puVar1 = puVar1 + 1) {
        puVar8 = puVar2;
      }
      if (puVar8 != puVar2) {
        sVar3 = (long)puVar2 - (long)(puVar8 + 1);
        if (sVar3 != 0) {
          memmove(puVar8,puVar8 + 1,sVar3);
        }
        *(size_t *)(lVar9 + 0xc0) = (long)puVar8 + sVar3;
      }
    }
    uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x60))(*(long **)(this + 0x10),8);
    if ((uVar6 & 1) == 0) {
      return;
    }
    goto LAB_00359160;
  }
  lVar9 = *(long *)(this + 8);
  if (lVar9 == 0) {
    return;
  }
  plVar5 = *(long **)(lVar9 + 0x30);
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x25b);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar10 = (long *)0x0;
  if (uVar4 < 0x280) {
    if (uVar4 == 0x25b) {
LAB_0035923c:
      plVar10 = plVar5 + 0x2f;
    }
    else if (uVar4 == 0x275) {
      plVar10 = plVar5 + 0x1c;
    }
    else if (uVar4 == 0x27d) goto LAB_0035923c;
  }
  else if (uVar4 < 0x287) {
    if (uVar4 == 0x280) {
      plVar10 = plVar5 + 0x15;
    }
    else if (uVar4 == 0x286) {
      plVar10 = plVar5 + 3;
    }
  }
  else if ((uVar4 == 0x287) || (uVar4 == 0x3cc)) {
    plVar10 = plVar5 + 2;
  }
  uVar7 = *(uint *)(plVar10 + 6);
  if ((uVar7 >> 0x10 & 1) != 0) {
    lVar9 = *(long *)(this + 8);
    puVar2 = *(undefined8 **)(lVar9 + 0xc0);
    puVar1 = *(undefined8 **)(lVar9 + 0xb8);
    puVar8 = puVar1;
    for (; (puVar1 != puVar2 && (puVar8 = puVar1, (KeyboardListenerGroup *)*puVar1 != this));
        puVar1 = puVar1 + 1) {
      puVar8 = puVar2;
    }
    if (puVar8 != puVar2) {
      sVar3 = (long)puVar2 - (long)(puVar8 + 1);
      if (sVar3 != 0) {
        memmove(puVar8,puVar8 + 1,sVar3);
        uVar7 = *(uint *)(plVar10 + 6);
      }
      *(size_t *)(lVar9 + 0xc0) = (long)puVar8 + sVar3;
    }
  }
  if ((uVar7 >> 0x11 & 1) == 0) {
    return;
  }
LAB_00359160:
  lVar9 = *(long *)(this + 8);
  puVar2 = *(undefined8 **)(lVar9 + 0xd8);
  puVar1 = *(undefined8 **)(lVar9 + 0xd0);
  puVar8 = puVar1;
  for (; (puVar1 != puVar2 && (puVar8 = puVar1, (KeyboardListenerGroup *)*puVar1 != this));
      puVar1 = puVar1 + 1) {
    puVar8 = puVar2;
  }
  if (puVar8 != puVar2) {
    sVar3 = (long)puVar2 - (long)(puVar8 + 1);
    if (sVar3 != 0) {
      memmove(puVar8,puVar8 + 1,sVar3);
    }
    *(size_t *)(lVar9 + 0xd8) = (long)puVar8 + sVar3;
  }
  return;
}


// ===== 003592e0  rive::ListenerInputTypeKeyboard::keyboardInput =====

/* rive::ListenerInputTypeKeyboard::keyboardInput(unsigned long) const */

undefined8 __thiscall
rive::ListenerInputTypeKeyboard::keyboardInput(ListenerInputTypeKeyboard *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x10) + param_1 * 8);
  }
  return 0;
}


// ===== 00359300  rive::ListenerInputTypeKeyboard::addKeyboardInput =====

/* rive::ListenerInputTypeKeyboard::addKeyboardInput(rive::KeyboardInput*) */

void __thiscall
rive::ListenerInputTypeKeyboard::addKeyboardInput
          (ListenerInputTypeKeyboard *this,KeyboardInput *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == (KeyboardInput *)0x0) {
    return;
  }
  puVar11 = *(undefined8 **)(this + 0x18);
  puVar10 = *(undefined8 **)(this + 0x10);
  for (puVar6 = puVar10; puVar6 != puVar11; puVar6 = puVar6 + 1) {
    if ((KeyboardInput *)*puVar6 == param_1) {
      return;
    }
  }
  if (puVar11 < *(undefined8 **)(this + 0x20)) {
    puVar12 = puVar11 + 1;
    *puVar11 = param_1;
    goto LAB_00359470;
  }
  lVar13 = (long)puVar11 - (long)puVar10;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00359494();
LAB_00359490:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = (long)*(undefined8 **)(this + 0x20) - (long)puVar10;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00359490;
    pvVar3 = operator_new(uVar5 << 3);
  }
  puVar6 = (undefined8 *)((long)pvVar3 + (lVar13 >> 3) * 8);
  puVar12 = puVar6 + 1;
  *puVar6 = param_1;
  if (puVar10 != puVar11) {
    if ((0x37 < lVar13 - 8U) && (0x1f < (ulong)((long)puVar11 + (-lVar13 - (long)pvVar3)))) {
      puVar8 = puVar6 + -2;
      puVar9 = puVar11 + -2;
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar7 = uVar1 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar7;
      uVar4 = uVar7;
      do {
        puVar2 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar4 = uVar4 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar4 != 0);
      puVar6 = puVar6 + -uVar7;
      if (uVar1 == uVar7) goto LAB_00359454;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    } while (puVar11 != puVar10);
    puVar10 = *(undefined8 **)(this + 0x10);
  }
LAB_00359454:
  *(undefined8 **)(this + 0x10) = puVar6;
  *(undefined8 **)(this + 0x18) = puVar12;
  *(void **)(this + 0x20) = (void *)((long)pvVar3 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00359470:
  *(undefined8 **)(this + 0x18) = puVar12;
  return;
}


// ===== 00359494  FUN_00359494 =====

void FUN_00359494(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003594a8  rive::ListenerInputTypeKeyboard::keyPhaseMatches =====

/* rive::ListenerInputTypeKeyboard::keyPhaseMatches(unsigned int, bool, bool) */

uint rive::ListenerInputTypeKeyboard::keyPhaseMatches(uint param_1,bool param_2,bool param_3)

{
  if ((param_1 & 7) == 0) {
    return 0;
  }
  if ((param_2) && (param_3)) {
    return param_1 >> 1 & 1;
  }
  if (param_2) {
    return param_1 & 1;
  }
  return param_1 >> 2 & 1;
}


// ===== 003594dc  rive::ListenerInputTypeKeyboard::keyboardInputMatches =====

/* rive::ListenerInputTypeKeyboard::keyboardInputMatches(rive::KeyboardInput const&, rive::Key,
   rive::KeyModifiers, bool, bool) */

uint rive::ListenerInputTypeKeyboard::keyboardInputMatches
               (long param_1,uint param_2,byte param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if ((((*(uint *)(param_1 + 0xc) == 0xffffffff) || (*(uint *)(param_1 + 0xc) == (param_2 & 0xffff))
       ) && (*(uint *)(param_1 + 0x14) == (uint)param_3)) &&
     (uVar1 = *(uint *)(param_1 + 0x10), (uVar1 & 7) != 0)) {
    if (((param_4 & 1) != 0) && ((param_5 & 1) != 0)) {
      return uVar1 >> 1 & 1;
    }
    if ((param_4 & 1) != 0) {
      return uVar1 & 1;
    }
    return uVar1 >> 2 & 1;
  }
  return 0;
}


// ===== 00359538  rive::ListenerInputTypeKeyboard::keyboardListenerConstraintsMet =====

/* rive::ListenerInputTypeKeyboard::keyboardListenerConstraintsMet(rive::StateMachineListener
   const*, rive::Key, rive::KeyModifiers, bool, bool) */

long rive::ListenerInputTypeKeyboard::keyboardListenerConstraintsMet
               (long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 != lVar5) {
      uVar7 = 0;
      do {
        if (((uVar7 < (ulong)(lVar4 - lVar5 >> 3)) &&
            (plVar6 = *(long **)(lVar5 + uVar7 * 8), plVar6 != (long *)0x0)) &&
           (uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,0x299), (uVar2 & 1) != 0)) {
          plVar3 = (long *)plVar6[2];
          if (plVar6[3] - (long)plVar3 == 0) {
            return 1;
          }
          uVar2 = plVar6[3] - (long)plVar3 >> 3;
          if (uVar2 < 2) {
            uVar2 = 1;
          }
          do {
            lVar5 = *plVar3;
            if ((((lVar5 != 0) &&
                 ((*(uint *)(lVar5 + 0xc) == 0xffffffff ||
                  (*(uint *)(lVar5 + 0xc) == (param_2 & 0xffff))))) &&
                (*(uint *)(lVar5 + 0x14) == (param_3 & 0xff))) &&
               (uVar1 = *(uint *)(lVar5 + 0x10), (uVar1 & 7) != 0)) {
              if ((param_4 & param_5 & 1) == 0) {
                if ((param_4 & 1) != 0) {
                  if ((uVar1 & 1) != 0) {
                    return 1;
                  }
                  goto LAB_003595dc;
                }
                uVar1 = uVar1 >> 2;
              }
              else {
                uVar1 = uVar1 >> 1;
              }
              if ((uVar1 & 1) != 0) {
                return 1;
              }
            }
LAB_003595dc:
            uVar2 = uVar2 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar2 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x48);
        lVar4 = *(long *)(param_1 + 0x50);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(lVar4 - lVar5 >> 3));
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00359654  rive::SemanticListenerGroup::SemanticListenerGroup =====

/* rive::SemanticListenerGroup::SemanticListenerGroup(rive::SemanticData*,
   rive::StateMachineListener const*, rive::StateMachineInstance*) */

void __thiscall
rive::SemanticListenerGroup::SemanticListenerGroup
          (SemanticListenerGroup *this,SemanticData *param_1,StateMachineListener *param_2,
          StateMachineInstance *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067ce90;
  *(StateMachineListener **)(this + 0x10) = param_2;
  *(StateMachineInstance **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(SemanticData **)(this + 8) = param_1;
  if (param_1 != (SemanticData *)0x0) {
    SemanticData::addSemanticListener(param_1,(SemanticListener *)this);
    return;
  }
  return;
}


// ===== 00359680  rive::SemanticListenerGroup::~SemanticListenerGroup =====

/* rive::SemanticListenerGroup::~SemanticListenerGroup() */

void __thiscall rive::SemanticListenerGroup::~SemanticListenerGroup(SemanticListenerGroup *this)

{
  ~SemanticListenerGroup(this);
  operator_delete(this);
  return;
}


// ===== 003596a4  rive::SemanticListenerGroup::onSemanticTap =====

/* rive::SemanticListenerGroup::onSemanticTap() */

void __thiscall rive::SemanticListenerGroup::onSemanticTap(SemanticListenerGroup *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(this + 0x10);
  if (lVar6 != 0) {
    lVar2 = *(long *)(lVar6 + 0x48);
    lVar4 = *(long *)(lVar6 + 0x50);
    if (lVar4 != lVar2) {
      uVar7 = 0;
      do {
        if (((uVar7 < (ulong)(lVar4 - lVar2 >> 3)) &&
            (plVar5 = *(long **)(lVar2 + uVar7 * 8), plVar5 != (long *)0x0)) &&
           (uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29d), (uVar1 & 1) != 0)) {
          plVar3 = (long *)plVar5[2];
          if (plVar5[3] - (long)plVar3 == 0) {
LAB_0035974c:
            StateMachineInstance::queueSemanticEvent(*(StateMachineInstance **)(this + 0x18),this,0)
            ;
            return;
          }
          uVar1 = plVar5[3] - (long)plVar3 >> 3;
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          do {
            if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0xc) == 0)) goto LAB_0035974c;
            uVar1 = uVar1 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar1 != 0);
        }
        lVar2 = *(long *)(lVar6 + 0x48);
        lVar4 = *(long *)(lVar6 + 0x50);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(lVar4 - lVar2 >> 3));
    }
  }
  return;
}


// ===== 00359778  rive::SemanticListenerGroup::onSemanticIncrease =====

/* rive::SemanticListenerGroup::onSemanticIncrease() */

void __thiscall rive::SemanticListenerGroup::onSemanticIncrease(SemanticListenerGroup *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(this + 0x10);
  if (lVar6 != 0) {
    lVar2 = *(long *)(lVar6 + 0x48);
    lVar4 = *(long *)(lVar6 + 0x50);
    if (lVar4 != lVar2) {
      uVar7 = 0;
      do {
        if (((uVar7 < (ulong)(lVar4 - lVar2 >> 3)) &&
            (plVar5 = *(long **)(lVar2 + uVar7 * 8), plVar5 != (long *)0x0)) &&
           (uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29d), (uVar1 & 1) != 0)) {
          plVar3 = (long *)plVar5[2];
          if (plVar5[3] - (long)plVar3 == 0) {
LAB_00359824:
            StateMachineInstance::queueSemanticEvent(*(StateMachineInstance **)(this + 0x18),this,1)
            ;
            return;
          }
          uVar1 = plVar5[3] - (long)plVar3 >> 3;
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          do {
            if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0xc) == 1)) goto LAB_00359824;
            uVar1 = uVar1 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar1 != 0);
        }
        lVar2 = *(long *)(lVar6 + 0x48);
        lVar4 = *(long *)(lVar6 + 0x50);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(lVar4 - lVar2 >> 3));
    }
  }
  return;
}


// ===== 00359850  rive::SemanticListenerGroup::onSemanticDecrease =====

/* rive::SemanticListenerGroup::onSemanticDecrease() */

void __thiscall rive::SemanticListenerGroup::onSemanticDecrease(SemanticListenerGroup *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(this + 0x10);
  if (lVar6 != 0) {
    lVar2 = *(long *)(lVar6 + 0x48);
    lVar4 = *(long *)(lVar6 + 0x50);
    if (lVar4 != lVar2) {
      uVar7 = 0;
      do {
        if (((uVar7 < (ulong)(lVar4 - lVar2 >> 3)) &&
            (plVar5 = *(long **)(lVar2 + uVar7 * 8), plVar5 != (long *)0x0)) &&
           (uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29d), (uVar1 & 1) != 0)) {
          plVar3 = (long *)plVar5[2];
          if (plVar5[3] - (long)plVar3 == 0) {
LAB_003598fc:
            StateMachineInstance::queueSemanticEvent(*(StateMachineInstance **)(this + 0x18),this,2)
            ;
            return;
          }
          uVar1 = plVar5[3] - (long)plVar3 >> 3;
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          do {
            if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0xc) == 2)) goto LAB_003598fc;
            uVar1 = uVar1 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar1 != 0);
        }
        lVar2 = *(long *)(lVar6 + 0x48);
        lVar4 = *(long *)(lVar6 + 0x50);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(lVar4 - lVar2 >> 3));
    }
  }
  return;
}


// ===== 00359928  rive::SemanticListenerGroup::~SemanticListenerGroup =====

/* rive::SemanticListenerGroup::~SemanticListenerGroup() */

void __thiscall rive::SemanticListenerGroup::~SemanticListenerGroup(SemanticListenerGroup *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0067ce90 + 0x10;
  if (lVar3 != 0) {
    puVar2 = *(undefined8 **)(lVar3 + 0x100);
    puVar1 = *(undefined8 **)(lVar3 + 0xf8);
    __dest = puVar1;
    for (; (puVar1 != puVar2 && (__dest = puVar1, (SemanticListenerGroup *)*puVar1 != this));
        puVar1 = puVar1 + 1) {
      __dest = puVar2;
    }
    if (__dest != puVar2) {
      __n = (long)puVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(size_t *)(lVar3 + 0x100) = (long)__dest + __n;
    }
  }
  return;
}


// ===== 003599b0  rive::SemanticListenerGroup::queueIfListening =====

/* rive::SemanticListenerGroup::queueIfListening(rive::SemanticActionType) */

void __thiscall
rive::SemanticListenerGroup::queueIfListening(SemanticListenerGroup *this,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(this + 0x10);
  if (lVar6 != 0) {
    lVar2 = *(long *)(lVar6 + 0x48);
    lVar4 = *(long *)(lVar6 + 0x50);
    if (lVar4 != lVar2) {
      uVar7 = 0;
      do {
        if (((uVar7 < (ulong)(lVar4 - lVar2 >> 3)) &&
            (plVar5 = *(long **)(lVar2 + uVar7 * 8), plVar5 != (long *)0x0)) &&
           (uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29d), (uVar1 & 1) != 0)) {
          plVar3 = (long *)plVar5[2];
          if (plVar5[3] - (long)plVar3 == 0) {
LAB_00359a68:
            StateMachineInstance::queueSemanticEvent
                      (*(StateMachineInstance **)(this + 0x18),this,param_2);
            return;
          }
          uVar1 = plVar5[3] - (long)plVar3 >> 3;
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          do {
            if ((*plVar3 != 0) && (*(uint *)(*plVar3 + 0xc) == (param_2 & 0xff))) goto LAB_00359a68;
            uVar1 = uVar1 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar1 != 0);
        }
        lVar2 = *(long *)(lVar6 + 0x48);
        lVar4 = *(long *)(lVar6 + 0x50);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(lVar4 - lVar2 >> 3));
    }
  }
  return;
}


// ===== 00359a9c  rive::ListenerInputTypeSemantic::semanticInput =====

/* rive::ListenerInputTypeSemantic::semanticInput(unsigned long) const */

undefined8 __thiscall
rive::ListenerInputTypeSemantic::semanticInput(ListenerInputTypeSemantic *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x10) + param_1 * 8);
  }
  return 0;
}


// ===== 00359abc  rive::ListenerInputTypeSemantic::addSemanticInput =====

/* rive::ListenerInputTypeSemantic::addSemanticInput(rive::SemanticInput*) */

void __thiscall
rive::ListenerInputTypeSemantic::addSemanticInput
          (ListenerInputTypeSemantic *this,SemanticInput *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == (SemanticInput *)0x0) {
    return;
  }
  puVar11 = *(undefined8 **)(this + 0x18);
  puVar10 = *(undefined8 **)(this + 0x10);
  for (puVar6 = puVar10; puVar6 != puVar11; puVar6 = puVar6 + 1) {
    if ((SemanticInput *)*puVar6 == param_1) {
      return;
    }
  }
  if (puVar11 < *(undefined8 **)(this + 0x20)) {
    puVar12 = puVar11 + 1;
    *puVar11 = param_1;
    goto LAB_00359c2c;
  }
  lVar13 = (long)puVar11 - (long)puVar10;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00359c50();
LAB_00359c4c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = (long)*(undefined8 **)(this + 0x20) - (long)puVar10;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00359c4c;
    pvVar3 = operator_new(uVar5 << 3);
  }
  puVar6 = (undefined8 *)((long)pvVar3 + (lVar13 >> 3) * 8);
  puVar12 = puVar6 + 1;
  *puVar6 = param_1;
  if (puVar10 != puVar11) {
    if ((0x37 < lVar13 - 8U) && (0x1f < (ulong)((long)puVar11 + (-lVar13 - (long)pvVar3)))) {
      puVar8 = puVar6 + -2;
      puVar9 = puVar11 + -2;
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar7 = uVar1 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar7;
      uVar4 = uVar7;
      do {
        puVar2 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar4 = uVar4 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar4 != 0);
      puVar6 = puVar6 + -uVar7;
      if (uVar1 == uVar7) goto LAB_00359c10;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    } while (puVar11 != puVar10);
    puVar10 = *(undefined8 **)(this + 0x10);
  }
LAB_00359c10:
  *(undefined8 **)(this + 0x10) = puVar6;
  *(undefined8 **)(this + 0x18) = puVar12;
  *(void **)(this + 0x20) = (void *)((long)pvVar3 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00359c2c:
  *(undefined8 **)(this + 0x18) = puVar12;
  return;
}


// ===== 00359c50  FUN_00359c50 =====

void FUN_00359c50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00359c64  rive::ListenerInputTypeSemantic::semanticListenerConstraintsMet =====

/* rive::ListenerInputTypeSemantic::semanticListenerConstraintsMet(rive::StateMachineListener
   const*, rive::SemanticActionType) */

long rive::ListenerInputTypeSemantic::semanticListenerConstraintsMet(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 != lVar2) {
      uVar6 = 0;
      do {
        if (((uVar6 < (ulong)(lVar4 - lVar2 >> 3)) &&
            (plVar5 = *(long **)(lVar2 + uVar6 * 8), plVar5 != (long *)0x0)) &&
           (uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29d), (uVar1 & 1) != 0)) {
          plVar3 = (long *)plVar5[2];
          if (plVar5[3] - (long)plVar3 == 0) {
            return 1;
          }
          uVar1 = plVar5[3] - (long)plVar3 >> 3;
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          do {
            if ((*plVar3 != 0) && (*(uint *)(*plVar3 + 0xc) == (param_2 & 0xff))) {
              return 1;
            }
            uVar1 = uVar1 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar1 != 0);
        }
        lVar2 = *(long *)(param_1 + 0x48);
        lVar4 = *(long *)(param_1 + 0x50);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar4 - lVar2 >> 3));
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00359d2c  rive::StateMachineListener::StateMachineListener =====

/* rive::StateMachineListener::StateMachineListener() */

void __thiscall rive::StateMachineListener::StateMachineListener(StateMachineListener *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067cf10;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


// ===== 00359d5c  rive::StateMachineListener::~StateMachineListener =====

/* rive::StateMachineListener::~StateMachineListener() */

void __thiscall rive::StateMachineListener::~StateMachineListener(StateMachineListener *this)

{
  ~StateMachineListener(this);
  operator_delete(this);
  return;
}


// ===== 00359d80  FUN_00359d80 =====

undefined8 FUN_00359d80(void)

{
  return 0x28e;
}


// ===== 00359d88  FUN_00359d88 =====

bool FUN_00359d88(undefined8 param_1,short param_2)

{
  return param_2 == 0x28e || param_2 == 0x36;
}


// ===== 00359da0  FUN_00359da0 =====

void FUN_00359da0(long param_1,short param_2,long *param_3)

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
  if (param_2 == 0x8a) {
    pcVar10 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00359ea8;
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
LAB_00359ea8:
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
    if (param_2 != 0xe0) {
      uVar5 = 0;
      goto LAB_00359ed8;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00359e8c;
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
LAB_00359e8c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  uVar5 = 1;
LAB_00359ed8:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00359efc  rive::StateMachineListener::import =====

/* rive::StateMachineListener::import(rive::ImportStack&) */

void __thiscall rive::StateMachineListener::import(StateMachineListener *this,ImportStack *param_1)

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
  StateMachineListener *local_30;
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
              StateMachine::addListener(*(StateMachine **)(plVar8[3] + 8),&local_30);
              if (local_30 != (StateMachineListener *)0x0) {
                (**(code **)(*(long *)local_30 + 8))();
              }
              uVar11 = 0;
              goto LAB_0035a004;
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
LAB_0035a004:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 0035a028  FUN_0035a028 =====

void FUN_0035a028(void)

{
  return;
}


// ===== 0035a02c  FUN_0035a02c =====

void FUN_0035a02c(void)

{
  return;
}


// ===== 0035a030  rive::StateMachineListener::hasListener =====

/* rive::StateMachineListener::hasListener(rive::ListenerType) const */

bool __thiscall rive::StateMachineListener::hasListener(StateMachineListener *this,int param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 0x48);
  if (plVar1 != *(long **)(this + 0x50)) {
    do {
      plVar3 = plVar1 + 1;
      bVar2 = *(int *)(*plVar1 + 0xc) == param_2;
      plVar1 = plVar3;
    } while (!bVar2 && plVar3 != *(long **)(this + 0x50));
    return bVar2;
  }
  return false;
}


// ===== 0035a068  rive::StateMachineListener::~StateMachineListener =====

/* rive::StateMachineListener::~StateMachineListener() */

void __thiscall rive::StateMachineListener::~StateMachineListener(StateMachineListener *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x48);
  *(undefined **)this = PTR_vtable_0067cf10 + 0x10;
  if (plVar2 != (long *)0x0) {
    plVar3 = *(long **)(this + 0x50);
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = *(long **)(this + 0x48);
    }
    *(long **)(this + 0x50) = plVar2;
    operator_delete(plVar1);
  }
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    plVar3 = *(long **)(this + 0x38);
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = *(long **)(this + 0x30);
    }
    *(long **)(this + 0x38) = plVar2;
    operator_delete(plVar1);
  }
  *(undefined ***)this = &PTR_FUN_006597e0;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 0035a15c  FUN_0035a15c =====

void FUN_0035a15c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 0035a17c  FUN_0035a17c =====

void FUN_0035a17c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_006597e0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0035a1bc  FUN_0035a1bc =====

undefined8 FUN_0035a1bc(void)

{
  return 0x36;
}


// ===== 0035a1c4  FUN_0035a1c4 =====

bool FUN_0035a1c4(undefined8 param_1,short param_2)

{
  return param_2 == 0x36;
}


// ===== 0035a1d4  FUN_0035a1d4 =====

void FUN_0035a1d4(long param_1,short param_2,long *param_3)

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
  if (param_2 == 0x8a) {
    pcVar4 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar4) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0035a268;
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
LAB_0035a268:
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
  __stack_chk_fail(param_2 == 0x8a);
}


// ===== 0035a2c4  rive::StateMachineListener::hasListeners =====

/* rive::StateMachineListener::hasListeners(rive::Span<rive::ListenerType const>) const */

uint rive::StateMachineListener::hasListeners(long *param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  param_3 = param_3 * 4;
  do {
    param_3 = param_3 + -4;
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1,*param_2);
    if ((uVar1 & 1) != 0) break;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  return uVar1 & 1;
}


// ===== 0035a328  rive::StateMachineListener::addAction =====

/* rive::StateMachineListener::addAction(std::__ndk1::unique_ptr<rive::ListenerAction,
   std::__ndk1::default_delete<rive::ListenerAction> >) */

void __thiscall
rive::StateMachineListener::addAction(StateMachineListener *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar1 < *(undefined8 **)(this + 0x40)) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = (undefined8 *)FUN_0035a370(this + 0x30);
  }
  *(undefined8 **)(this + 0x38) = puVar2;
  return;
}


// ===== 0035a370  FUN_0035a370 =====

long * FUN_0035a370(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar14 = param_1[1] - *param_1;
  lVar11 = lVar14 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0035a510();
LAB_0035a50c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0035a50c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  lVar7 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar15 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  plVar10 = plVar3 + 1;
  *plVar3 = lVar7;
  lVar11 = (long)plVar13 - (long)plVar15;
  if (lVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar10;
    param_1[2] = (ulong)pvVar1;
    goto LAB_0035a4e4;
  }
  uVar6 = lVar11 - 8;
  plVar12 = plVar13;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar13 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar6 & 0xfffffffffffffff8)) + -8) < plVar13)))) {
LAB_0035a48c:
    do {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar11;
    } while (plVar12 != plVar15);
  }
  else {
    plVar8 = plVar3 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar4 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar13 + -uVar4;
    uVar5 = uVar4;
    do {
      plVar9 = plVar13 + -4;
      lVar16 = plVar13[-3];
      lVar7 = *plVar9;
      lVar14 = plVar13[-1];
      lVar11 = plVar13[-2];
      uVar5 = uVar5 - 4;
      plVar13[-3] = 0;
      *plVar9 = 0;
      plVar13[-1] = 0;
      plVar13[-2] = 0;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar7;
      plVar8[1] = lVar14;
      *plVar8 = lVar11;
      plVar8 = plVar8 + -4;
      plVar13 = plVar9;
    } while (uVar5 != 0);
    plVar3 = plVar3 + -uVar4;
    if (uVar6 != uVar4) goto LAB_0035a48c;
  }
  plVar13 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar10;
  param_1[2] = (ulong)pvVar1;
  while (plVar15 != plVar13) {
    plVar15 = plVar15 + -1;
    plVar3 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_0035a4e4:
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar10;
}


// ===== 0035a510  FUN_0035a510 =====

void FUN_0035a510(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0035a524  rive::StateMachineListener::addListenerInputType =====

/* rive::StateMachineListener::addListenerInputType(std::__ndk1::unique_ptr<rive::ListenerInputType,
   std::__ndk1::default_delete<rive::ListenerInputType> >) */

void __thiscall
rive::StateMachineListener::addListenerInputType(StateMachineListener *this,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  plVar3 = *(long **)(this + 0x50);
  if (plVar3 < *(long **)(this + 0x58)) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar13 = plVar3 + 1;
    *plVar3 = lVar4;
    goto LAB_0035a6c0;
  }
  lVar14 = (long)plVar3 - *(long *)(this + 0x48);
  lVar4 = lVar14 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_0035a6e0();
LAB_0035a6dc:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(long **)(this + 0x58) - *(long *)(this + 0x48);
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_0035a6dc;
    pvVar2 = operator_new(uVar6 << 3);
  }
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar4 * 8);
  plVar15 = *(long **)(this + 0x48);
  plVar12 = *(long **)(this + 0x50);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar13 = plVar3 + 1;
  *plVar3 = lVar8;
  lVar4 = (long)plVar12 - (long)plVar15;
  if (lVar4 == 0) {
    *(long **)(this + 0x48) = plVar3;
    *(long **)(this + 0x50) = plVar13;
    *(void **)(this + 0x58) = pvVar1;
  }
  else {
    uVar7 = lVar4 - 8;
    plVar11 = plVar12;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar12 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
        ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar12)))) {
LAB_0035a65c:
      do {
        plVar11 = plVar11 + -1;
        lVar4 = *plVar11;
        *plVar11 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar4;
      } while (plVar11 != plVar15);
    }
    else {
      plVar9 = plVar3 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar5 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar12 + -uVar5;
      uVar6 = uVar5;
      do {
        plVar10 = plVar12 + -4;
        lVar16 = plVar12[-3];
        lVar8 = *plVar10;
        lVar14 = plVar12[-1];
        lVar4 = plVar12[-2];
        uVar6 = uVar6 - 4;
        plVar12[-3] = 0;
        *plVar10 = 0;
        plVar12[-1] = 0;
        plVar12[-2] = 0;
        plVar9[-1] = lVar16;
        plVar9[-2] = lVar8;
        plVar9[1] = lVar14;
        *plVar9 = lVar4;
        plVar9 = plVar9 + -4;
        plVar12 = plVar10;
      } while (uVar6 != 0);
      plVar3 = plVar3 + -uVar5;
      if (uVar7 != uVar5) goto LAB_0035a65c;
    }
    plVar12 = *(long **)(this + 0x48);
    plVar15 = *(long **)(this + 0x50);
    *(long **)(this + 0x48) = plVar3;
    *(long **)(this + 0x50) = plVar13;
    *(void **)(this + 0x58) = pvVar1;
    while (plVar15 != plVar12) {
      plVar15 = plVar15 + -1;
      plVar3 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
LAB_0035a6c0:
  *(long **)(this + 0x50) = plVar13;
  return;
}


// ===== 0035a6e0  FUN_0035a6e0 =====

void FUN_0035a6e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0035a6f4  rive::StateMachineListener::action =====

/* rive::StateMachineListener::action(unsigned long) const */

undefined8 __thiscall rive::StateMachineListener::action(StateMachineListener *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x30) + param_1 * 8);
  }
  return 0;
}


// ===== 0035a714  rive::StateMachineListener::listenerInputType =====

/* rive::StateMachineListener::listenerInputType(unsigned long) const */

undefined8 __thiscall
rive::StateMachineListener::listenerInputType(StateMachineListener *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x48) + param_1 * 8);
  }
  return 0;
}


// ===== 0035a734  rive::StateMachineListener::performChanges =====

/* rive::StateMachineListener::performChanges(rive::StateMachineInstance*, rive::ListenerInvocation
   const&) const */

void __thiscall
rive::StateMachineListener::performChanges
          (StateMachineListener *this,StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  for (puVar2 = *(undefined8 **)(this + 0x30); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x58))((long *)*puVar2,param_1,param_2);
  }
  return;
}


// ===== 0035a788  rive::StateTransition::~StateTransition =====

/* rive::StateTransition::~StateTransition() */

void __thiscall rive::StateTransition::~StateTransition(StateTransition *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x78);
  plVar1 = *(long **)(this + 0x80);
  *(undefined **)this = PTR_vtable_0067cf20 + 0x10;
  if (plVar3 != plVar1) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = *(long **)(this + 0x78);
  }
  if (plVar3 != (long *)0x0) {
    *(long **)(this + 0x80) = plVar3;
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


// ===== 0035a8b0  rive::StateTransition::~StateTransition =====

/* rive::StateTransition::~StateTransition() */

void __thiscall rive::StateTransition::~StateTransition(StateTransition *this)

{
  ~StateTransition(this);
  operator_delete(this);
  return;
}


// ===== 0035a8d4  FUN_0035a8d4 =====

undefined8 FUN_0035a8d4(void)

{
  return 0x41;
}


// ===== 0035a8dc  FUN_0035a8dc =====

bool FUN_0035a8dc(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x41 < 2;
}


// ===== 0035a8f0  FUN_0035a8f0 =====

undefined4 FUN_0035a8f0(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 < 0xa0) {
    if (param_2 == 0x97) {
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035ab78;
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
LAB_0035ab78:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x40) = (int)uVar3;
    }
    else if (param_2 == 0x98) {
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035ac08;
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
LAB_0035ac08:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x44) = (int)uVar3;
    }
    else {
      if (param_2 != 0x9e) {
        return 0;
      }
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035abf0;
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
LAB_0035abf0:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x48) = (int)uVar3;
    }
  }
  else if (param_2 < 0x15e) {
    if (param_2 == 0xa0) {
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035ab90;
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
LAB_0035ab90:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x4c) = (int)uVar3;
    }
    else {
      if (param_2 != 0x15d) {
        return 0;
      }
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035abc0;
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
LAB_0035abc0:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x50) = (int)uVar3;
    }
  }
  else if (param_2 == 0x15e) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0035aba8;
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
LAB_0035aba8:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x54) = (int)uVar3;
  }
  else {
    if (param_2 != 0x219) {
      return 0;
    }
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0035abd8;
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
LAB_0035abd8:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x58) = (int)uVar3;
  }
  return 1;
}


// ===== 0035ac20  rive::StateTransition::onAddedDirty =====

/* rive::StateTransition::onAddedDirty(rive::CoreContext*) */

ulong __thiscall rive::StateTransition::onAddedDirty(StateTransition *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(this + 0x54) != -1) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(int *)(this + 0x54));
    if ((plVar3 == (long *)0x0) ||
       (uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0xaf), (uVar4 & 1) == 0)) {
      return 1;
    }
    *(long **)(this + 0x70) = plVar3;
  }
  puVar1 = *(undefined8 **)(this + 0x78);
  puVar2 = *(undefined8 **)(this + 0x80);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    uVar4 = (**(code **)(*(long *)*puVar1 + 0x38))((long *)*puVar1,param_1);
    if ((uVar4 & 0xff) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return uVar4;
}


// ===== 0035acc8  rive::StateTransition::onAddedClean =====

/* rive::StateTransition::onAddedClean(rive::CoreContext*) */

ulong __thiscall rive::StateTransition::onAddedClean(StateTransition *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x78);
  puVar2 = *(undefined8 **)(this + 0x80);
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


// ===== 0035ad24  rive::StateTransition::import =====

/* rive::StateTransition::import(rive::ImportStack&) */

undefined8 __thiscall rive::StateTransition::import(StateTransition *this,ImportStack *param_1)

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
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x3c;
  }
  else {
    uVar5 = 0x3c;
    if (uVar4 < 0x3d) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x3c / uVar1;
      }
      uVar5 = (ulong)(0x3c - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x3c) {
        if ((short)plVar6[2] == 0x3c) {
          if (plVar6[3] == 0) {
            return 1;
          }
          LayerState::addTransition(*(LayerState **)(plVar6[3] + 8),this);
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


// ===== 0035ae10  FUN_0035ae10 =====

void FUN_0035ae10(void)

{
  return;
}


// ===== 0035ae14  FUN_0035ae14 =====

void FUN_0035ae14(void)

{
  return;
}


// ===== 0035ae18  FUN_0035ae18 =====

void FUN_0035ae18(void)

{
  return;
}


// ===== 0035ae1c  FUN_0035ae1c =====

void FUN_0035ae1c(void)

{
  return;
}


// ===== 0035ae20  FUN_0035ae20 =====

void FUN_0035ae20(void)

{
  return;
}


// ===== 0035ae24  FUN_0035ae24 =====

void FUN_0035ae24(void)

{
  return;
}


// ===== 0035ae28  FUN_0035ae28 =====

void FUN_0035ae28(void)

{
  return;
}


// ===== 0035ae2c  rive::StateTransition::exitTimeAnimationInstance =====

/* rive::StateTransition::exitTimeAnimationInstance(rive::StateInstance const*) const */

StateInstance * __thiscall
rive::StateTransition::exitTimeAnimationInstance(StateTransition *this,StateInstance *param_1)

{
  StateInstance *pSVar1;
  ulong uVar2;
  
  if (param_1 != (StateInstance *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),0x3d);
    pSVar1 = param_1 + 0x10;
    if ((uVar2 & 1) == 0) {
      pSVar1 = (StateInstance *)0x0;
    }
    return pSVar1;
  }
  return (StateInstance *)0x0;
}


// ===== 0035ae74  rive::StateTransition::exitTimeAnimation =====

/* rive::StateTransition::exitTimeAnimation(rive::LayerState const*) const */

undefined8 __thiscall
rive::StateTransition::exitTimeAnimation(StateTransition *this,LayerState *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 != (LayerState *)0x0) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3d);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
    }
    return uVar2;
  }
  return 0;
}


// ===== 0035aec0  rive::StateTransition::addCondition =====

/* rive::StateTransition::addCondition(rive::TransitionCondition*) */

void __thiscall
rive::StateTransition::addCondition(StateTransition *this,TransitionCondition *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x80);
  if (puVar10 < *(undefined8 **)(this + 0x88)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_0035b000;
  }
  puVar9 = *(undefined8 **)(this + 0x78);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0035b024();
LAB_0035b020:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x88) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_0035b020;
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
      if (uVar6 == uVar7) goto LAB_0035afec;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x78);
  }
LAB_0035afec:
  *(undefined8 **)(this + 0x78) = puVar4;
  *(undefined8 **)(this + 0x80) = puVar13;
  *(void **)(this + 0x88) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_0035b000:
  *(undefined8 **)(this + 0x80) = puVar13;
  return;
}


// ===== 0035b024  FUN_0035b024 =====

void FUN_0035b024(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0035b038  rive::StateTransition::mixTime =====

/* rive::StateTransition::mixTime(rive::LayerState const*) const */

float __thiscall rive::StateTransition::mixTime(StateTransition *this,LayerState *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(uint *)(this + 0x48) == 0) {
    return 0.0;
  }
  if (((byte)this[0x44] >> 1 & 1) != 0) {
    uVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3d);
    fVar8 = 0.0;
    if (((uVar3 & 1) != 0) && (lVar4 = *(long *)(param_1 + 0x68), lVar4 != 0)) {
      bVar2 = *(char *)(lVar4 + 0x40) != '\0';
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x38));
      puVar1 = (undefined4 *)(lVar4 + 0x2c);
      if (bVar2) {
        puVar1 = (undefined4 *)(lVar4 + 0x3c);
      }
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x28));
      fVar6 = (float)NEON_ucvtf(*puVar1);
      fVar7 = 0.0;
      if (bVar2) {
        fVar7 = fVar8;
      }
      fVar8 = ABS(fVar6 / fVar5 - fVar7 / fVar5);
    }
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x48));
    return fVar8 * (fVar7 / 100.0);
  }
  return (float)*(uint *)(this + 0x48) / 1000.0;
}


// ===== 0035b10c  rive::StateTransition::exitTimeSeconds =====

/* rive::StateTransition::exitTimeSeconds(rive::LayerState const*, bool) const */

float __thiscall
rive::StateTransition::exitTimeSeconds(StateTransition *this,LayerState *param_1,bool param_2)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((byte)this[0x44] >> 3 & 1) == 0) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x4c));
    fVar4 = fVar4 / 1000.0;
  }
  else {
    lVar3 = (**(code **)(*(long *)this + 0x90))(this);
    if (lVar3 == 0) {
      fVar5 = 0.0;
      fVar4 = 0.0;
    }
    else {
      cVar2 = *(char *)(lVar3 + 0x40);
      if (param_2) {
        fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x38));
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x28));
        fVar4 = 0.0;
        if (cVar2 != '\0') {
          fVar4 = fVar5;
        }
        fVar4 = fVar4 / fVar7;
      }
      else {
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x28));
        fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x38));
        fVar4 = 0.0;
      }
      puVar1 = (undefined4 *)(lVar3 + 0x2c);
      if (cVar2 != '\0') {
        puVar1 = (undefined4 *)(lVar3 + 0x3c);
      }
      fVar8 = (float)NEON_ucvtf(*puVar1);
      fVar6 = 0.0;
      if (cVar2 != '\0') {
        fVar6 = fVar5;
      }
      fVar5 = ABS(fVar8 / fVar7 - fVar6 / fVar7);
    }
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x4c));
    fVar4 = (float)NEON_fmadd(fVar7 / 100.0,fVar5,fVar4);
  }
  return fVar4;
}


// ===== 0035b1f0  rive::StateTransition::allowed =====

/* rive::StateTransition::allowed(rive::StateInstance*, rive::StateMachineInstance*,
   rive::StateMachineLayerInstance*) const */

undefined8 __thiscall
rive::StateTransition::allowed
          (StateTransition *this,StateInstance *param_1,StateMachineInstance *param_2,
          StateMachineLayerInstance *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar7 = *(uint *)(this + 0x44);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  puVar8 = *(undefined8 **)(this + 0x78);
  puVar2 = *(undefined8 **)(this + 0x80);
  if (puVar8 != puVar2) {
    do {
      uVar4 = (**(code **)(*(long *)*puVar8 + 0x50))((long *)*puVar8,param_2,param_3);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar2);
    uVar7 = *(uint *)(this + 0x44);
  }
  if (((uVar7 >> 2 & 1) != 0) && (lVar5 = (**(code **)(*(long *)this + 0x88))(this), lVar5 != 0)) {
    fVar14 = *(float *)(lVar5 + 0x48);
    fVar15 = *(float *)(lVar5 + 0x4c);
    if (((byte)this[0x44] >> 3 & 1) == 0) {
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x4c));
      fVar9 = fVar9 / 1000.0;
    }
    else {
      lVar6 = (**(code **)(*(long *)this + 0x90))(this,*(undefined8 *)(param_1 + 8));
      fVar9 = 0.0;
      if (lVar6 != 0) {
        bVar3 = *(char *)(lVar6 + 0x40) != '\0';
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x38));
        puVar1 = (undefined4 *)(lVar6 + 0x2c);
        if (bVar3) {
          puVar1 = (undefined4 *)(lVar6 + 0x3c);
        }
        fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x28));
        fVar11 = (float)NEON_ucvtf(*puVar1);
        fVar13 = 0.0;
        if (bVar3) {
          fVar13 = fVar9;
        }
        fVar9 = ABS(fVar11 / fVar10 - fVar13 / fVar10);
      }
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x4c));
      fVar9 = (float)NEON_fmadd(fVar13 / 100.0,fVar9,0);
    }
    lVar5 = *(long *)(lVar5 + 0x38);
    bVar3 = *(char *)(lVar5 + 0x40) != '\0';
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x38));
    puVar1 = (undefined4 *)(lVar5 + 0x2c);
    if (bVar3) {
      puVar1 = (undefined4 *)(lVar5 + 0x3c);
    }
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x28));
    fVar12 = (float)NEON_ucvtf(*puVar1);
    fVar10 = 0.0;
    if (bVar3) {
      fVar10 = fVar13;
    }
    fVar13 = ABS(fVar12 / fVar11 - fVar10 / fVar11);
    if ((fVar9 <= fVar13) && (*(int *)(lVar5 + 0x34) != 0)) {
      fVar9 = (float)NEON_fmadd((int)(fVar15 / fVar13),fVar13,fVar9);
    }
    if (fVar14 < fVar9) {
      return 1;
    }
  }
  return 2;
}


// ===== 0035b3b8  rive::StateTransition::applyExitCondition =====

/* rive::StateTransition::applyExitCondition(rive::StateInstance*) const */

uint __thiscall
rive::StateTransition::applyExitCondition(StateTransition *this,StateInstance *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar3 = 0;
  if ((((param_1 != (StateInstance *)0x0) && ((*(uint *)(this + 0x44) >> 2 & 1) != 0)) &&
      (uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),0x3d),
      (uVar3 & 1) != 0)) && ((*(uint *)(this + 0x44) >> 4 & 1) != 0)) {
    if ((*(uint *)(this + 0x44) >> 3 & 1) == 0) {
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x4c));
      fVar5 = fVar5 / 1000.0;
    }
    else {
      lVar4 = (**(code **)(*(long *)this + 0x90))(this,*(undefined8 *)(param_1 + 8));
      if (lVar4 == 0) {
        fVar6 = 0.0;
        fVar5 = 0.0;
      }
      else {
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x38));
        bVar2 = *(char *)(lVar4 + 0x40) != '\0';
        puVar1 = (undefined4 *)(lVar4 + 0x2c);
        if (bVar2) {
          puVar1 = (undefined4 *)(lVar4 + 0x3c);
        }
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x28));
        fVar5 = 0.0;
        if (bVar2) {
          fVar5 = fVar6;
        }
        fVar6 = (float)NEON_ucvtf(*puVar1);
        fVar5 = fVar5 / fVar7;
        fVar6 = ABS(fVar6 / fVar7 - fVar5);
      }
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x4c));
      fVar5 = (float)NEON_fmadd(fVar7 / 100.0,fVar6,fVar5);
    }
    if (*(float *)(param_1 + 0x50) != fVar5) {
      fVar6 = *(float *)(param_1 + 0x58);
      lVar4 = *(long *)(param_1 + 0x48);
      *(float *)(param_1 + 0x50) = fVar5;
      if (*(char *)(lVar4 + 0x40) == '\0') {
        fVar7 = 0.0;
      }
      else {
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x38));
      }
      uVar8 = *(undefined4 *)(lVar4 + 0x28);
      *(undefined4 *)(param_1 + 100) = 0x3f800000;
      fVar9 = (float)NEON_ucvtf(uVar8);
      fVar5 = fVar5 - fVar7 * fVar9;
      *(float *)(param_1 + 0x58) = fVar5;
      *(float *)(param_1 + 0x5c) = fVar5 - (fVar6 - *(float *)(param_1 + 0x5c));
    }
    uVar3 = 1;
  }
  return uVar3 & 1;
}


// ===== 0035b4fc  rive::StateTransition::useLayerInConditions =====

/* rive::StateTransition::useLayerInConditions(rive::StateMachineInstance*,
   rive::StateMachineLayerInstance*) const */

void __thiscall
rive::StateTransition::useLayerInConditions
          (StateTransition *this,StateMachineInstance *param_1,StateMachineLayerInstance *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x80);
  for (puVar2 = *(undefined8 **)(this + 0x78); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x58))((long *)*puVar2,param_1,param_2);
  }
  return;
}


// ===== 0035b550  rive::TextInputListenerGroup::TextInputListenerGroup =====

/* rive::TextInputListenerGroup::TextInputListenerGroup(rive::TextInput*,
   rive::StateMachineInstance*) */

void __thiscall
rive::TextInputListenerGroup::TextInputListenerGroup
          (TextInputListenerGroup *this,TextInput *param_1,StateMachineInstance *param_2)

{
  undefined *puVar1;
  
  *(undefined2 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  puVar1 = PTR_vtable_0067cf30;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(TextInput **)(this + 0x58) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  this[0x60] = (TextInputListenerGroup)0x0;
  return;
}


// ===== 0035b58c  FUN_0035b58c =====

void FUN_0035b58c(ListenerGroup *param_1)

{
  rive::ListenerGroup::~ListenerGroup(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0035b5b0  FUN_0035b5b0 =====

undefined8 FUN_0035b5b0(void)

{
  return 0;
}


// ===== 0035b5b8  FUN_0035b5b8 =====

undefined8 FUN_0035b5b8(void)

{
  return 1;
}


// ===== 0035b5c0  FUN_0035b5c0 =====

undefined8 FUN_0035b5c0(void)

{
  return 1;
}


// ===== 0035b5c8  rive::TextInputListenerGroup::processEvent =====

/* rive::TextInputListenerGroup::processEvent(rive::Component*, rive::Vec2D, int,
   rive::ListenerType, bool, float, rive::StateMachineInstance*) */

void __thiscall
rive::TextInputListenerGroup::processEvent
          (undefined4 param_1,undefined4 param_2,TextInputListenerGroup *this,undefined8 param_4,
          int param_5,uint param_6,uint param_7,long param_8)

{
  FocusManager *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pcVar9 = (char *)ListenerGroup::pointerData((ListenerGroup *)this,param_5);
  uVar4 = *(uint *)(pcVar9 + 4);
  uVar13 = uVar4;
  if ((param_7 & 1) == 0) {
    if (*pcVar9 != '\0') {
      *pcVar9 = '\0';
    }
LAB_0035b648:
    if ((param_6 & 0xfffffffe) != 2) goto LAB_0035b6a8;
    uVar13 = 0;
    pcVar9[4] = '\0';
    pcVar9[5] = '\0';
    pcVar9[6] = '\0';
    pcVar9[7] = '\0';
LAB_0035b65c:
    bVar7 = this[0x60] == (TextInputListenerGroup)0x0;
LAB_0035b668:
    uVar11 = 0;
    if ((uVar4 == 1) && (((uVar13 & 0xfffffffd) == 0 && (!bVar7)))) {
      lVar12 = *(long *)(this + 0x58);
      uVar11 = 0;
      *(undefined1 *)(lVar12 + 0x1e8) = 0;
      *(undefined8 *)(lVar12 + 0x1ec) = 0x7fc000007fc00000;
      *(undefined8 *)(lVar12 + 500) = 0;
      this[0x60] = (TextInputListenerGroup)0x0;
    }
  }
  else {
    if (*pcVar9 == '\0') goto LAB_0035b648;
    if (param_6 == 3) {
      if (uVar4 == 1) {
        uVar13 = 0;
        pcVar9[4] = '\x02';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
      }
      goto LAB_0035b65c;
    }
    if (param_6 == 2) {
      pcVar9[4] = '\x01';
      pcVar9[5] = '\0';
      pcVar9[6] = '\0';
      pcVar9[7] = '\0';
      uVar13 = 1;
    }
LAB_0035b6a8:
    if ((uVar4 == 1) || (uVar13 != 1)) {
      bVar7 = this[0x60] == (TextInputListenerGroup)0x0;
      if ((param_6 != 4) || ((uVar13 != 1 || (this[0x60] == (TextInputListenerGroup)0x0))))
      goto LAB_0035b668;
      plVar14 = *(long **)(this + 0x58);
      *(undefined4 *)((long)plVar14 + 0x1ec) = param_1;
      *(undefined4 *)(plVar14 + 0x3e) = param_2;
      uVar10 = TextInput::worldToLocalWithViewport(param_1,param_2,plVar14,&local_60,1);
      if ((uVar10 & 1) != 0) {
        RawTextInput::moveCursorTo((undefined4)local_60,local_60._4_4_,plVar14 + 0x40,1);
        (**(code **)(*plVar14 + 0x248))(plVar14);
      }
    }
    else {
      plVar14 = *(long **)(this + 0x58);
      *(undefined1 *)(plVar14 + 0x3d) = 1;
      *(undefined4 *)((long)plVar14 + 0x1ec) = param_1;
      *(undefined4 *)(plVar14 + 0x3e) = param_2;
      uVar10 = TextInput::worldToLocalWithViewport(param_1,param_2,plVar14,&local_60,0);
      if ((uVar10 & 1) != 0) {
        RawTextInput::moveCursorTo((undefined4)local_60,local_60._4_4_,plVar14 + 0x40,0);
        (**(code **)(*plVar14 + 0x248))(plVar14);
      }
      this[0x60] = (TextInputListenerGroup)0x1;
      puVar2 = *(undefined8 **)(*(long *)(this + 0x58) + 0x88);
      puVar3 = *(undefined8 **)(*(long *)(this + 0x58) + 0x90);
      pFVar1 = (FocusManager *)(param_8 + 0x2c8);
      if (*(FocusManager **)(param_8 + 0x2e8) != (FocusManager *)0x0) {
        pFVar1 = *(FocusManager **)(param_8 + 0x2e8);
      }
      for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        uVar10 = (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,0x28d);
        if ((uVar10 & 1) != 0) {
          FocusData::focusNode();
          pvVar6 = local_68;
          if (local_68 != (void *)0x0) {
            FUN_00340fb0(1,local_68);
            local_70 = pvVar6;
            FocusManager::setFocus(pFVar1,&local_70);
            pvVar6 = local_70;
            if ((local_70 != (void *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,local_70), iVar8 == 1)
               ) {
              if ((*(byte *)((long)pvVar6 + 0x38) & 1) != 0) {
                operator_delete(*(void **)((long)pvVar6 + 0x48));
              }
              local_60 = (long)pvVar6 + 0x20;
              FUN_0034b070(&local_60);
              operator_delete(pvVar6);
            }
            if ((local_68 != (void *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,local_68), iVar8 == 1)
               ) {
              if ((*(byte *)((long)local_68 + 0x38) & 1) != 0) {
                operator_delete(*(void **)((long)local_68 + 0x48));
              }
              local_60 = (long)local_68 + 0x20;
              FUN_0034b070(&local_60);
              operator_delete(local_68);
            }
          }
          break;
        }
      }
    }
    uVar11 = 2;
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 0035b8c4  rive::Artboard::Artboard =====

/* rive::Artboard::Artboard() */

void __thiscall rive::Artboard::Artboard(Artboard *this)

{
  undefined *puVar1;
  
  LayoutComponent::LayoutComponent((LayoutComponent *)this);
  *(undefined8 *)(this + 0x984) = 0;
  *(undefined8 *)(this + 0x98c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x9c0) = 0;
  *(undefined8 *)(this + 0x9b8) = 0;
  *(undefined8 *)(this + 0x9d0) = 0;
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined8 *)(this + 0x9e0) = 0;
  *(undefined8 *)(this + 0x9d8) = 0;
  *(undefined8 *)(this + 0x9f0) = 0;
  *(undefined8 *)(this + 0x9e8) = 0;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined8 *)(this + 0xa10) = 0;
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  puVar1 = PTR_vtable_0067cf98;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa49) = 0;
  *(undefined8 *)(this + 0xa41) = 0;
  *(undefined8 *)(this + 0xbc8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 200) = puVar1 + 0x398;
  *(undefined **)(this + 0x188) = puVar1 + 0x3c0;
  *(undefined **)(this + 400) = puVar1 + 0x3e0;
  *(undefined **)(this + 0x1b8) = puVar1 + 0x430;
  *(undefined **)(this + 0x1c0) = puVar1 + 0x448;
  *(undefined **)(this + 0x1c8) = puVar1 + 0x470;
  *(undefined **)(this + 0x998) = puVar1 + 0x4c8;
  *(undefined **)(this + 0x9a0) = puVar1 + 0x4f0;
  *(undefined **)(this + 0x9a8) = puVar1 + 0x508;
  *(undefined **)(this + 0x9b0) = puVar1 + 0x520;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined8 *)(this + 0xa98) = 0;
  *(undefined8 *)(this + 0xab0) = 0;
  *(undefined8 *)(this + 0xaa8) = 0;
  *(undefined8 *)(this + 0xac0) = 0;
  *(undefined8 *)(this + 0xab8) = 0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xac8) = 0;
  *(undefined8 *)(this + 0xae0) = 0;
  *(undefined8 *)(this + 0xad8) = 0;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined8 *)(this + 0xae8) = 0;
  *(undefined8 *)(this + 0xb00) = 0;
  *(undefined8 *)(this + 0xaf8) = 0;
  *(undefined8 *)(this + 0xb10) = 0;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined8 *)(this + 0xb20) = 0;
  *(undefined8 *)(this + 0xb18) = 0;
  *(undefined8 *)(this + 0xb30) = 0;
  *(undefined8 *)(this + 0xb28) = 0;
  *(undefined8 *)(this + 0xb40) = 0;
  *(undefined8 *)(this + 0xb38) = 0;
  *(undefined8 *)(this + 0xb50) = 0;
  *(undefined8 *)(this + 0xb48) = 0;
  *(undefined8 *)(this + 0xb60) = 0;
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined8 *)(this + 0xb70) = 0;
  *(undefined8 *)(this + 0xb68) = 0;
  *(undefined8 *)(this + 0xb80) = 0;
  *(undefined8 *)(this + 0xb78) = 0;
  *(undefined8 *)(this + 0xb90) = 0;
  *(undefined8 *)(this + 0xb88) = 0;
  *(undefined8 *)(this + 0xba0) = 0;
  *(undefined8 *)(this + 0xb98) = 0;
  *(undefined8 *)(this + 0xbb0) = 0;
  *(undefined8 *)(this + 0xba8) = 0;
  *(undefined8 *)(this + 0xbc0) = 0;
  *(undefined8 *)(this + 3000) = 0;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xbdc) = 0;
  *(undefined8 *)(this + 0xbd4) = 0;
  *(undefined8 *)(this + 0xbe1) = 0;
  this[0xbd0] = (Artboard)0x1;
  this[0xbe9] = (Artboard)0x1;
  *(undefined8 *)(this + 0xbf8) = 0;
  *(undefined8 *)(this + 0xbf0) = 0;
  *(undefined8 *)(this + 0xc08) = 0;
  *(undefined8 *)(this + 0xc00) = 0;
  *(undefined4 *)(this + 0xc10) = 0x3f800000;
  this[0xc18] = (Artboard)0x0;
  *(undefined8 *)(this + 0xc28) = 0;
  *(undefined8 *)(this + 0xc20) = 0;
  *(undefined2 *)(this + 0xc30) = 1;
  this[0xc32] = (Artboard)0x1;
  *(undefined8 *)(this + 0xc60) = 0;
  *(undefined8 *)(this + 0xc40) = 0;
  *(undefined8 *)(this + 0xc38) = 0;
  *(undefined8 *)(this + 0xc50) = 0;
  *(undefined8 *)(this + 0xc48) = 0;
  this[0xc58] = (Artboard)0x0;
  *(undefined4 *)(this + 0xc68) = 0x3f800000;
  this[0x171] = (Artboard)0x1;
  return;
}


// ===== 0035b9f8  rive::Artboard::~Artboard =====

/* rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  ~Artboard(this);
  operator_delete(this);
  return;
}


// ===== 0035ba1c  FUN_0035ba1c =====

undefined8 FUN_0035ba1c(void)

{
  return 1;
}


// ===== 0035ba24  FUN_0035ba24 =====

undefined8 FUN_0035ba24(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c06U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x199)) {
    return 0;
  }
  return 1;
}


// ===== 0035ba6c  FUN_0035ba6c =====

uint FUN_0035ba6c(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
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
      param_3[2] = (long)puVar5;
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x984) = uVar10;
      goto LAB_0035bc34;
    }
    if (param_2 == 0xc) {
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
      param_3[2] = (long)puVar5;
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x988) = uVar10;
      goto LAB_0035bc34;
    }
  }
  else {
    if (param_2 == 0xec) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035bbe8;
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
LAB_0035bbe8:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x98c) = (int)uVar4;
      uVar3 = 1;
      goto LAB_0035bc34;
    }
    if (param_2 == 0x247) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035bbcc;
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
LAB_0035bbcc:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x990) = (int)uVar4;
      uVar3 = 1;
      goto LAB_0035bc34;
    }
  }
  uVar3 = FUN_0035ecc8();
  if (param_2 == 8) {
    *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(param_1 + 0x178);
  }
  else if (param_2 == 7) {
    *(undefined4 *)(param_1 + 0xc28) = *(undefined4 *)(param_1 + 0x174);
  }
LAB_0035bc34:
  return uVar3 & 1;
}


// ===== 0035bc44  rive::Artboard::onAddedClean =====

/* rive::Artboard::onAddedClean(rive::CoreContext*) */

undefined8 rive::Artboard::onAddedClean(CoreContext *param_1)

{
  LayoutComponent::onAddedClean(param_1);
  if (*(float *)(param_1 + 0x110) != 0.0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*(long *)param_1 + 0x178))(param_1);
  }
  if (*(float *)(param_1 + 0x114) != 0.0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    (**(code **)(*(long *)param_1 + 0x180))(param_1);
  }
  return 0;
}


// ===== 0035bca8  rive::Artboard::import =====

/* rive::Artboard::import(rive::ImportStack&) */

ulong __thiscall rive::Artboard::import(Artboard *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  BackboardImporter *this_00;
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
          this_00 = (BackboardImporter *)plVar6[3];
          if (this_00 == (BackboardImporter *)0x0) {
            return 1;
          }
          uVar4 = Component::import((Component *)this,param_1);
          if ((uVar4 & 0xff) == 0) {
            BackboardImporter::addArtboard(this_00,this);
            return 0;
          }
          *(int *)(this_00 + 0xf8) = *(int *)(this_00 + 0xf8) + 1;
          return uVar4;
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


// ===== 0035bdb8  rive::Artboard::onDirty =====

/* rive::Artboard::onDirty(rive::ComponentDirt) */

void rive::Artboard::onDirty(long param_1)

{
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 4;
  return;
}


// ===== 0035bdc8  rive::Artboard::update =====

/* rive::Artboard::update(rive::ComponentDirt) */

void __thiscall rive::Artboard::update(Artboard *this,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  Artboard AVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  LayoutComponent::update();
  if ((param_2 >> 3 & 1) != 0) {
    sortDrawOrder(this);
  }
  if ((param_2 >> 0xf & 1) != 0) {
    clearRedundantOperations(this);
  }
  if ((param_2 >> 0xb & 1) == 0) goto LAB_0035bf50;
  lVar6 = *(long *)(this + 0x1e8);
  if (lVar6 == 0) {
    AVar5 = this[0x278];
    uVar3 = 0;
    uVar7 = 0;
    lVar4 = 0;
  }
  else {
    if (*(char *)(lVar6 + 0x104) == '\x02') {
      uVar3 = *(uint *)(lVar6 + 0x108);
    }
    else if (*(char *)(lVar6 + 0x104) == '\x01') {
      uVar3 = (uint)(byte)this[0x270];
    }
    else {
      uVar3 = 0;
    }
    if (*(char *)(lVar6 + 0x104) == '\x02') {
LAB_0035be68:
      lVar4 = *(long *)(lVar6 + 0x1b8);
    }
    else if (*(char *)(lVar6 + 0x104) == '\x01') {
      lVar4 = *(long *)(this + 0x268);
      if (lVar4 == 0) goto LAB_0035be68;
    }
    else {
      lVar4 = 0;
    }
    if (*(char *)(lVar6 + 0x104) == '\x02') {
      uVar7 = *(undefined4 *)(lVar6 + 0x110);
    }
    else {
      uVar7 = 0;
      if (*(char *)(lVar6 + 0x104) == '\x01') {
        uVar7 = *(undefined4 *)(this + 0x274);
      }
    }
    if (*(int *)(lVar6 + 0x120) == 1) {
      AVar5 = (Artboard)0x1;
    }
    else if (*(int *)(lVar6 + 0x120) == 2) {
      AVar5 = (Artboard)0x2;
    }
    else {
      AVar5 = this[0x278];
    }
  }
  bVar1 = (**(code **)(*(long *)this + 0x2d8))(uVar7,this,uVar3,lVar4,AVar5);
  uVar2 = (**(code **)(*(long *)this + 0x350))(this);
  if (((uVar2 & 1) == 0) || ((this[0xc30] == (Artboard)0x0 & (bVar1 ^ 0xff)) != 0))
  goto LAB_0035bf50;
  if (*(long *)(this + 0x1e8) == 0) {
    uVar7 = *(undefined4 *)(this + 0x174);
LAB_0035bf28:
    uVar9 = *(undefined4 *)(this + 0x178);
    uVar8 = uVar7;
  }
  else {
    uVar7 = *(undefined4 *)(this + 0x174);
    uVar9 = 0x7fc00000;
    uVar8 = uVar9;
    if (*(char *)(*(long *)(this + 0x1e8) + 0x13c) == '\0') goto LAB_0035bf28;
  }
  rive_YGNodeCalculateLayoutWithContext(uVar8,uVar9,*(undefined8 *)(this + 0x1f0),0,0);
  (**(code **)(*(long *)this + 0x2d0))(this,1);
LAB_0035bf50:
  this[0xc31] = (Artboard)0x0;
  return;
}


// ===== 0035bf60  rive::Artboard::hitTestPoint =====

/* rive::Artboard::hitTestPoint(rive::Vec2D const&, bool, bool) */

undefined8 __thiscall
rive::Artboard::hitTestPoint(Artboard *this,Vec2D *param_1,bool param_2,bool param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(this + 0xc38);
  if (((plVar1 != (long *)0x0) && (this[0xbe8] != (Artboard)0x0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_1,param_2,this), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar3 = LayoutComponent::hitTestPoint((LayoutComponent *)this,param_1,param_2,param_3);
  return uVar3;
}


// ===== 0035bfdc  FUN_0035bfdc =====

undefined4 FUN_0035bfdc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}


// ===== 0035bfe4  FUN_0035bfe4 =====

void FUN_0035bfe4(void)

{
  return;
}


// ===== 0035bfe8  FUN_0035bfe8 =====

undefined4 FUN_0035bfe8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1f8);
}


// ===== 0035bff0  FUN_0035bff0 =====

undefined4 FUN_0035bff0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1fc);
}


// ===== 0035bff8  FUN_0035bff8 =====

void FUN_0035bff8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035c000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))();
  return;
}


// ===== 0035c004  FUN_0035c004 =====

undefined1  [16] FUN_0035c004(void)

{
  return ZEXT816(0);
}


// ===== 0035c020  FUN_0035c020 =====

void FUN_0035c020(void)

{
  return;
}


// ===== 0035c024  FUN_0035c024 =====

undefined4 FUN_0035c024(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1f8);
}


// ===== 0035c02c  FUN_0035c02c =====

void FUN_0035c02c(void)

{
  return;
}


// ===== 0035c030  FUN_0035c030 =====

undefined4 FUN_0035c030(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1fc);
}


// ===== 0035c038  FUN_0035c038 =====

void FUN_0035c038(void)

{
  return;
}


// ===== 0035c03c  FUN_0035c03c =====

undefined4 FUN_0035c03c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}


// ===== 0035c044  FUN_0035c044 =====

void FUN_0035c044(void)

{
  return;
}


// ===== 0035c048  FUN_0035c048 =====

undefined4 FUN_0035c048(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}


// ===== 0035c050  FUN_0035c050 =====

void FUN_0035c050(void)

{
  return;
}


// ===== 0035c054  FUN_0035c054 =====

void FUN_0035c054(void)

{
  return;
}


// ===== 0035c058  FUN_0035c058 =====

void FUN_0035c058(void)

{
  return;
}


// ===== 0035c05c  FUN_0035c05c =====

undefined4 FUN_0035c05c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x200);
}


// ===== 0035c064  FUN_0035c064 =====

void FUN_0035c064(void)

{
  return;
}


// ===== 0035c068  FUN_0035c068 =====

undefined4 FUN_0035c068(long param_1)

{
  return *(undefined4 *)(param_1 + 0x204);
}


// ===== 0035c070  rive::Artboard::xChanged =====

/* rive::Artboard::xChanged() */

void __thiscall rive::Artboard::xChanged(Artboard *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x40;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
    Component::addDirt((Component *)this,0x80,1);
  }
  this[0xc31] = (Artboard)0x1;
  if (*(long **)(this + 0xc38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0035c0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xc38) + 0x60))();
    return;
  }
  return;
}


// ===== 0035c10c  rive::Artboard::yChanged =====

/* rive::Artboard::yChanged() */

void __thiscall rive::Artboard::yChanged(Artboard *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x40;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
    Component::addDirt((Component *)this,0x80,1);
  }
  this[0xc31] = (Artboard)0x1;
  if (*(long **)(this + 0xc38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0035c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xc38) + 0x60))();
    return;
  }
  return;
}


// ===== 0035c1a8  FUN_0035c1a8 =====

void FUN_0035c1a8(void)

{
  return;
}


// ===== 0035c1ac  FUN_0035c1ac =====

void FUN_0035c1ac(void)

{
  return;
}


// ===== 0035c1b0  FUN_0035c1b0 =====

void FUN_0035c1b0(void)

{
  return;
}


// ===== 0035c1b4  FUN_0035c1b4 =====

void FUN_0035c1b4(void)

{
  return;
}


// ===== 0035c1b8  FUN_0035c1b8 =====

void FUN_0035c1b8(void)

{
  return;
}


// ===== 0035c1bc  FUN_0035c1bc =====

void FUN_0035c1bc(void)

{
  return;
}


// ===== 0035c1c0  FUN_0035c1c0 =====

void FUN_0035c1c0(void)

{
  return;
}


// ===== 0035c1c4  FUN_0035c1c4 =====

void FUN_0035c1c4(void)

{
  return;
}


// ===== 0035c1c8  FUN_0035c1c8 =====

void FUN_0035c1c8(void)

{
  return;
}


// ===== 0035c1cc  FUN_0035c1cc =====

void FUN_0035c1cc(void)

{
  return;
}


// ===== 0035c1d0  rive::Artboard::draw =====

/* rive::Artboard::draw(rive::Renderer*) */

void __thiscall rive::Artboard::draw(Artboard *this,Renderer *param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0xbc8);
  *(long *)PTR_sm_frameId_0067cf90 = *(long *)PTR_sm_frameId_0067cf90 + 1;
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 8), lVar2 == 0)) ||
     (lVar2 = *(long *)(lVar2 + 0x78), lVar2 == 0)) {
    internalDrawCanvases(this);
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x21);
    *(undefined1 *)(lVar2 + 0x21) = 1;
    internalDrawCanvases(this);
    *(undefined1 *)(lVar2 + 0x21) = uVar1;
  }
  drawInternal(this,param_1);
  return;
}


// ===== 0035c250  rive::Artboard::hitTest =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Artboard::hitTest(rive::HitInfo*, rive::Mat2D const&) */

void __thiscall rive::Artboard::hitTest(Artboard *this,HitInfo *param_1,Mat2D *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_48 = *(undefined8 *)(param_2 + 8);
  local_50 = *(undefined8 *)param_2;
  local_40 = *(undefined8 *)(param_2 + 0x10);
  if (this[0xbe9] != (Artboard)0x0) {
    fVar6 = (float)*(undefined8 *)(this + 0x200) * (float)*(undefined8 *)(this + 0x984);
    fVar7 = (float)((ulong)*(undefined8 *)(this + 0x200) >> 0x20) *
            (float)((ulong)*(undefined8 *)(this + 0x984) >> 0x20);
    fStack_68 = (float)_UNK_0024e5b8;
    fStack_64 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
    fStack_6c = (float)((ulong)_DAT_0024e5b0 >> 0x20);
    fVar8 = (float)uStack_48;
    fVar9 = (float)((ulong)uStack_48 >> 0x20);
    fVar10 = (float)local_50;
    fVar11 = (float)((ulong)local_50 >> 0x20);
    local_50 = CONCAT44(fVar9 * fStack_6c + fVar11 * 1.0,fVar8 * fStack_6c + fVar10 * 1.0);
    uStack_48 = CONCAT44(fVar9 * fStack_64 + fStack_68 * fVar11,
                         fVar8 * fStack_64 + fStack_68 * fVar10);
    local_40 = CONCAT44((float)((ulong)local_40 >> 0x20) + fVar9 * fVar7 + fVar11 * fVar6,
                        (float)local_40 + fVar8 * fVar7 + fVar10 * fVar6);
  }
  plVar2 = *(long **)(this + 0xbe0);
  if (*(long **)(this + 0xbe0) != (long *)0x0) {
    do {
      plVar5 = plVar2;
      plVar2 = (long *)plVar5[0x2c];
    } while ((long *)plVar5[0x2c] != (long *)0x0);
    do {
      uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5);
      if (((uVar3 & 1) == 0) &&
         (lVar4 = (**(code **)(*plVar5 + 0x1e0))(plVar5,param_1,&local_50), lVar4 != 0))
      goto LAB_0035c350;
      plVar5 = (long *)plVar5[0x2d];
    } while (plVar5 != (long *)0x0);
  }
  lVar4 = 0;
LAB_0035c350:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


// ===== 0035c378  FUN_0035c378 =====

byte FUN_0035c378(long param_1)

{
  return *(byte *)(param_1 + 0x138) >> 3 & 1;
}


// ===== 0035c384  FUN_0035c384 =====

undefined8 FUN_0035c384(void)

{
  return 0;
}


// ===== 0035c38c  FUN_0035c38c =====

undefined8 FUN_0035c38c(void)

{
  return 0;
}


// ===== 0035c394  FUN_0035c394 =====

undefined8 FUN_0035c394(void)

{
  return 0;
}


// ===== 0035c39c  FUN_0035c39c =====

undefined8 FUN_0035c39c(void)

{
  return 0;
}


// ===== 0035c3a4  FUN_0035c3a4 =====

void FUN_0035c3a4(void)

{
  return;
}


// ===== 0035c3a8  FUN_0035c3a8 =====

undefined8 FUN_0035c3a8(void)

{
  return 0;
}


// ===== 0035c3b0  FUN_0035c3b0 =====

undefined8 FUN_0035c3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 0035c3b8  FUN_0035c3b8 =====

long FUN_0035c3b8(long param_1)

{
  return param_1 + 0xa4;
}


// ===== 0035c3c0  FUN_0035c3c0 =====

void FUN_0035c3c0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035c3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e8))();
  return;
}


// ===== 0035c3cc  rive::Artboard::updateRenderPath =====

/* rive::Artboard::updateRenderPath() */

void __thiscall rive::Artboard::updateRenderPath(Artboard *this)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(this + 0x200);
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  fVar4 = (float)*(undefined8 *)(this + 0x984) * -(float)uVar2;
  fVar5 = (float)((ulong)*(undefined8 *)(this + 0x984) >> 0x20) * -fVar3;
  uStack_40 = CONCAT44(fVar3 + fVar5,(float)uVar2 + fVar4);
  local_48 = CONCAT44(fVar5,fVar4);
  local_60 = local_48;
  uStack_58 = uStack_40;
  if (this[0xbe9] != (Artboard)0x0) {
    local_60 = 0;
    uStack_58 = uVar2;
  }
  this[0x778] = (Artboard)0x0;
  *(undefined8 *)(this + 0x748) = *(undefined8 *)(this + 0x740);
  *(undefined8 *)(this + 0x760) = *(undefined8 *)(this + 0x758);
  this[0x730] = (Artboard)0x1;
  RawPath::addRect((RawPath *)(this + 0x740),&local_48,0);
  this[2000] = (Artboard)0x0;
  *(undefined8 *)(this + 0x7a0) = *(undefined8 *)(this + 0x798);
  *(undefined8 *)(this + 0x7b8) = *(undefined8 *)(this + 0x7b0);
  this[0x788] = (Artboard)0x1;
  RawPath::addRect((RawPath *)(this + 0x798),&local_60,0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035c4a4  FUN_0035c4a4 =====

undefined4 FUN_0035c4a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1f8);
}


// ===== 0035c4c0  FUN_0035c4c0 =====

undefined8 FUN_0035c4c0(void)

{
  return 1;
}


// ===== 0035c4c8  rive::Artboard::worldBounds =====

/* rive::Artboard::worldBounds() const */

undefined4 __thiscall rive::Artboard::worldBounds(Artboard *this)

{
  return *(undefined4 *)(this + 0x110);
}


// ===== 0035c4e4  FUN_0035c4e4 =====

undefined8 FUN_0035c4e4(void)

{
  return 1;
}


// ===== 0035c4ec  FUN_0035c4ec =====

void FUN_0035c4ec(void)

{
  return;
}


// ===== 0035c4f0  rive::Artboard::propagateSize =====

/* rive::Artboard::propagateSize() */

void __thiscall rive::Artboard::propagateSize(Artboard *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
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
  if ((*(long **)(this + 0xc38) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(this + 0xc38) + 0x68))(), (uVar2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0035c578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xc38) + 0x60))();
    return;
  }
  return;
}


// ===== 0035c588  FUN_0035c588 =====

void FUN_0035c588(void)

{
  return;
}


// ===== 0035c58c  FUN_0035c58c =====

void FUN_0035c58c(void)

{
  return;
}


// ===== 0035c590  FUN_0035c590 =====

void FUN_0035c590(void)

{
  return;
}


// ===== 0035c594  FUN_0035c594 =====

void FUN_0035c594(void)

{
  return;
}


// ===== 0035c598  rive::Artboard::updateDataBinds =====

/* rive::Artboard::updateDataBinds(bool) */

void __thiscall rive::Artboard::updateDataBinds(Artboard *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0xb50);
  for (puVar1 = *(undefined8 **)(this + 0xb48); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x30))();
  }
  DataBindContainer::updateDataBinds((DataBindContainer *)(this + 0x9b0),param_1);
  return;
}


// ===== 0035c5f0  FUN_0035c5f0 =====

void FUN_0035c5f0(void)

{
  return;
}


// ===== 0035c5f4  rive::Artboard::addDirtyDataBind =====

/* rive::Artboard::addDirtyDataBind(rive::DataBind*) */

void __thiscall rive::Artboard::addDirtyDataBind(Artboard *this,DataBind *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  this[0xc32] = (Artboard)0x1;
  uVar1 = *(uint *)(lVar2 + 0x38);
  *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 4;
  if (uVar1 < *(uint *)(this + 0xbd4)) {
    *(uint *)(this + 0xbd4) = uVar1;
  }
  DataBindContainer::addDirtyDataBind((DataBindContainer *)(this + 0x9b0),param_1);
  return;
}


// ===== 0035c628  rive::Artboard::resolve =====

/* rive::Artboard::resolve(unsigned int) const */

undefined8 __thiscall rive::Artboard::resolve(Artboard *this,uint param_1)

{
  if (param_1 < (uint)((ulong)(*(long *)(this + 0xa60) - *(long *)(this + 0xa58)) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0xa58) + (ulong)param_1 * 8);
  }
  return 0;
}


// ===== 0035c650  rive::Artboard::syncStyleChanges =====

/* rive::Artboard::syncStyleChanges() */

bool __thiscall rive::Artboard::syncStyleChanges(Artboard *this)

{
  undefined8 *puVar1;
  short sVar2;
  Artboard *this_00;
  long lVar3;
  long lVar4;
  Artboard *pAVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(this + 0xc08);
  this[0xc18] = (Artboard)0x1;
  if (lVar7 != 0) {
    plVar8 = *(long **)(this + 0xc00);
    if (plVar8 != (long *)0x0) {
      do {
        pAVar5 = (Artboard *)plVar8[2];
        if (pAVar5 != (Artboard *)0x0) {
          sVar2 = (**(code **)(*(long *)pAVar5 + 0x10))(pAVar5);
          this_00 = pAVar5;
          if ((sVar2 == 1) && (this_00 = this, pAVar5 != this)) {
            if (pAVar5[0xc30] == (Artboard)0x0) {
              (**(code **)(*(long *)pAVar5 + 0x350))(pAVar5);
            }
          }
          else {
            LayoutComponent::syncStyle((LayoutComponent *)this_00);
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      if (*(long *)(this + 0xc08) == 0) goto LAB_0035c728;
      puVar1 = (undefined8 *)*(void **)(this + 0xc00);
      while (puVar1 != (undefined8 *)0x0) {
        pvVar6 = (void *)*puVar1;
        operator_delete(puVar1);
        puVar1 = (undefined8 *)pvVar6;
      }
    }
    lVar3 = *(long *)(this + 0xbf8);
    *(undefined8 *)(this + 0xc00) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xbf0) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0xc08) = 0;
  }
LAB_0035c728:
  this[0xc18] = (Artboard)0x0;
  return lVar7 != 0;
}


// ===== 0035c744  rive::Artboard::reset =====

/* rive::Artboard::reset() */

void __thiscall rive::Artboard::reset(Artboard *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xb80);
  for (puVar2 = *(undefined8 **)(this + 0xb78); puVar1 != puVar2; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)();
  }
  return;
}


// ===== 0035c784  rive::Artboard::rebind =====

/* rive::Artboard::rebind() */

void __thiscall rive::Artboard::rebind(Artboard *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0xbc0);
  if (lVar3 == 0) {
    local_40 = 0;
    internalDataContext(this,&local_40);
  }
  else {
    FUN_00340fb0(1,lVar3);
    local_40 = lVar3;
    internalDataContext(this,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,lVar3);
    if (iVar2 == 1) {
      FUN_003453a8(lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035c820  rive::Artboard::relinkDataContext =====

/* rive::Artboard::relinkDataContext() */

void __thiscall rive::Artboard::relinkDataContext(Artboard *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xbc0) != 0) {
    puVar5 = *(undefined8 **)(this + 0xb50);
    for (puVar4 = *(undefined8 **)(this + 0xb48); puVar4 != puVar5; puVar4 = puVar4 + 1) {
      plVar3 = (long *)*puVar4;
      DataContext::getViewModelInstance(*(DataBindPath **)(this + 0xbc0));
      if (local_50 == (long *)0x0) {
        plVar6 = *(long **)(*(long *)(this + 0xbc0) + 0x10);
        if (plVar6 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar6 + 0xa4);
          local_50 = plVar6;
          goto LAB_0035c8a0;
        }
        local_50 = (long *)0x0;
      }
      else {
LAB_0035c8a0:
        plVar6 = local_50;
        FUN_00340fb0(1,(long)local_50 + 0xa4);
      }
      local_58 = plVar6;
      (**(code **)(*plVar3 + 0x88))(plVar3,&local_58);
      plVar3 = local_58;
      if ((local_58 != (long *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,(long)local_58 + 0xa4), iVar2 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      plVar3 = local_50;
      if ((local_50 != (long *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar2 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035c954  rive::Artboard::rebuildDataBind =====

/* rive::Artboard::rebuildDataBind(rive::DataBind*) */

void __thiscall rive::Artboard::rebuildDataBind(Artboard *this,DataBind *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1bf);
  if ((uVar1 & 1) != 0) {
    DataBindContext::bindFromContext((DataBindContext *)param_1,*(DataContext **)(this + 0xbc0));
    return;
  }
  return;
}


// ===== 0035c9a0  FUN_0035c9a0 =====

void FUN_0035c9a0(void)

{
  return;
}


// ===== 0035c9a4  FUN_0035c9a4 =====

undefined8 FUN_0035c9a4(void)

{
  return 1;
}


// ===== 0035c9ac  FUN_0035c9ac =====

void FUN_0035c9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035c9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x188) + 0x1e8))();
  return;
}


// ===== 0035c9bc  FUN_0035c9bc =====

undefined8 FUN_0035c9bc(long param_1)

{
  return *(undefined8 *)(param_1 + -0x150);
}


// ===== 0035c9c8  rive::Artboard::~Artboard =====

/* non-virtual thunk to rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  ~Artboard(this + -400);
  return;
}


// ===== 0035c9d0  rive::Artboard::~Artboard =====

/* non-virtual thunk to rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  ~Artboard(this + -400);
  operator_delete(this + -400);
  return;
}


// ===== 0035c9f8  FUN_0035c9f8 =====

long FUN_0035c9f8(long param_1)

{
  return param_1 + -0xec;
}


// ===== 0035ca00  rive::Artboard::~Artboard =====

/* non-virtual thunk to rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  ~Artboard(this + -0x1c0);
  return;
}


// ===== 0035ca08  rive::Artboard::~Artboard =====

/* non-virtual thunk to rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  ~Artboard(this + -0x1c0);
  operator_delete(this + -0x1c0);
  return;
}


// ===== 0035ca30  FUN_0035ca30 =====

long FUN_0035ca30(long param_1)

{
  return param_1 + -0x1c8;
}


// ===== 0035ca38  FUN_0035ca38 =====

undefined4 FUN_0035ca38(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ===== 0035ca4c  FUN_0035ca4c =====

void FUN_0035ca4c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035ca54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 0035ca58  rive::Artboard::syncStyleChanges =====

/* non-virtual thunk to rive::Artboard::syncStyleChanges() */

void __thiscall rive::Artboard::syncStyleChanges(Artboard *this)

{
  syncStyleChanges(this + -0x1c8);
  return;
}


// ===== 0035ca60  FUN_0035ca60 =====

undefined8 FUN_0035ca60(void)

{
  return 1;
}


// ===== 0035ca68  rive::Artboard::~Artboard =====

/* non-virtual thunk to rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  ~Artboard(this + -0x998);
  return;
}


// ===== 0035ca70  rive::Artboard::~Artboard =====

/* non-virtual thunk to rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  ~Artboard(this + -0x998);
  operator_delete(this + -0x998);
  return;
}


// ===== 0035ca98  rive::Artboard::resolve =====

/* non-virtual thunk to rive::Artboard::resolve(unsigned int) const */

undefined8 __thiscall rive::Artboard::resolve(Artboard *this,uint param_1)

{
  if (param_1 < (uint)((ulong)(*(long *)(this + 200) - *(long *)(this + 0xc0)) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0xc0) + (ulong)param_1 * 8);
  }
  return 0;
}


// ===== 0035cabc  FUN_0035cabc =====

long FUN_0035cabc(long param_1)

{
  return param_1 + -0x9a0;
}


// ===== 0035cac4  rive::Artboard::reset =====

/* non-virtual thunk to rive::Artboard::reset() */

void __thiscall rive::Artboard::reset(Artboard *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x1d8);
  for (puVar2 = *(undefined8 **)(this + 0x1d0); puVar1 != puVar2; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)();
  }
  return;
}


// ===== 0035cb00  rive::Artboard::updateDataBinds =====

/* non-virtual thunk to rive::Artboard::updateDataBinds(bool) */

void __thiscall rive::Artboard::updateDataBinds(Artboard *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x1a0);
  for (puVar2 = *(undefined8 **)(this + 0x198); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x30))();
  }
  DataBindContainer::updateDataBinds((DataBindContainer *)this,param_1);
  return;
}


// ===== 0035cb54  rive::Artboard::addDirtyDataBind =====

/* non-virtual thunk to rive::Artboard::addDirtyDataBind(rive::DataBind*) */

void __thiscall rive::Artboard::addDirtyDataBind(Artboard *this,DataBind *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x38);
  this[0x282] = (Artboard)0x1;
  *(ushort *)(this + -0x950) = *(ushort *)(this + -0x950) | 4;
  if (uVar1 < *(uint *)(this + 0x224)) {
    *(uint *)(this + 0x224) = uVar1;
  }
  DataBindContainer::addDirtyDataBind((DataBindContainer *)this,param_1);
  return;
}


// ===== 0035cb88  rive::Artboard::rebind =====

/* non-virtual thunk to rive::Artboard::rebind() */

void __thiscall rive::Artboard::rebind(Artboard *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x210);
  if (lVar3 == 0) {
    local_40 = 0;
    internalDataContext(this + -0x9b0,&local_40);
  }
  else {
    FUN_00340fb0(1,lVar3);
    local_40 = lVar3;
    internalDataContext(this + -0x9b0,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,lVar3);
    if (iVar2 == 1) {
      FUN_003453a8(lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035cc28  rive::Artboard::relinkDataContext =====

/* non-virtual thunk to rive::Artboard::relinkDataContext() */

void __thiscall rive::Artboard::relinkDataContext(Artboard *this)

{
  relinkDataContext(this + -0x9b0);
  return;
}


// ===== 0035cc30  rive::Artboard::rebuildDataBind =====

/* non-virtual thunk to rive::Artboard::rebuildDataBind(rive::DataBind*) */

void __thiscall rive::Artboard::rebuildDataBind(Artboard *this,DataBind *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1bf);
  if ((uVar1 & 1) != 0) {
    DataBindContext::bindFromContext((DataBindContext *)param_1,*(DataContext **)(this + 0x210));
    return;
  }
  return;
}


// ===== 0035cc7c  rive::Artboard::internalDataContext =====

/* rive::Artboard::internalDataContext(rive::rcp<rive::DataContext>) */

void __thiscall rive::Artboard::internalDataContext(Artboard *this,Artboard *param_2)

{
  Artboard *pAVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ScriptedObject *this_00;
  ScriptedObject *pSVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  DataContext *pDVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  pAVar1 = this + 0xbc0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (pAVar1 != param_2) {
    lVar11 = *(long *)param_2;
    if (lVar11 != 0) {
      FUN_00340fb0(1,lVar11);
    }
    lVar8 = *(long *)pAVar1;
    *(long *)pAVar1 = lVar11;
    if ((lVar8 != 0) && (iVar3 = FUN_00340fe0(0xffffffff,lVar8), iVar3 == 1)) {
      FUN_003453a8(lVar8);
    }
  }
  puVar15 = *(undefined8 **)(this + 0xb50);
  for (puVar14 = *(undefined8 **)(this + 0xb48); puVar14 != puVar15; puVar14 = puVar14 + 1) {
    plVar9 = (long *)*puVar14;
    DataContext::getViewModelInstance(*(DataBindPath **)pAVar1);
    plVar13 = local_70;
    if ((local_70 == (long *)0x0) ||
       (uVar4 = (**(code **)(*local_70 + 0x18))(local_70,0x1b5), (uVar4 & 1) == 0)) {
      lVar11 = *(long *)pAVar1;
      if (lVar11 != 0) {
        FUN_00340fb0(1,lVar11);
      }
      local_88 = lVar11;
      (**(code **)(*plVar9 + 0x10))(plVar9,&local_88);
      lVar11 = local_88;
      if ((local_88 != 0) && (iVar3 = FUN_00340fe0(0xffffffff,local_88), iVar3 == 1)) {
        FUN_003453a8(lVar11);
      }
    }
    else {
      FUN_00340fb0(1,(long)plVar13 + 0xa4);
      lVar11 = *(long *)pAVar1;
      local_78 = plVar13;
      if (lVar11 != 0) {
        FUN_00340fb0(1,lVar11);
      }
      local_80 = lVar11;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_78,&local_80);
      lVar11 = local_80;
      if ((local_80 != 0) && (iVar3 = FUN_00340fe0(0xffffffff,local_80), iVar3 == 1)) {
        FUN_003453a8(lVar11);
      }
      plVar13 = local_78;
      if ((local_78 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)local_78 + 0xa4), iVar3 == 1)) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
    plVar13 = local_70;
    if ((local_70 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)local_70 + 0xa4), iVar3 == 1)) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
  }
  puVar14 = *(undefined8 **)(this + 0x9b8);
  puVar15 = *(undefined8 **)(this + 0x9c0);
  pDVar10 = *(DataContext **)(this + 0xbc0);
  if (puVar14 == puVar15) {
    *(DataContext **)(this + 0xa48) = pDVar10;
  }
  else {
    do {
      uVar4 = (**(code **)(*(long *)*puVar14 + 0x18))((long *)*puVar14,0x1bf);
      if ((uVar4 & 1) != 0) {
        DataBindContext::bindFromContext((DataBindContext *)*puVar14,pDVar10);
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar15);
    lVar8 = *(long *)(this + 0x9c0);
    lVar11 = *(long *)(this + 0x9b8);
    *(DataContext **)(this + 0xa48) = pDVar10;
    if (lVar8 != lVar11) {
      uVar4 = 0;
      uVar6 = 0;
      do {
        lVar12 = *(long *)(lVar11 + uVar6 * 8);
        if ((*(byte *)(lVar12 + 0x10) & 3) != 0) {
          if (uVar6 != uVar4) {
            uVar7 = *(undefined8 *)(lVar11 + uVar4 * 8);
            *(long *)(lVar11 + uVar4 * 8) = lVar12;
            *(undefined8 *)(lVar11 + uVar6 * 8) = uVar7;
            lVar8 = *(long *)(this + 0x9c0);
            lVar11 = *(long *)(this + 0x9b8);
          }
          uVar4 = uVar4 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar8 - lVar11 >> 3));
    }
  }
  plVar9 = *(long **)(this + 0xb98);
  for (plVar13 = *(long **)(this + 0xb90); plVar13 != plVar9; plVar13 = plVar13 + 1) {
    lVar11 = *(long *)param_2;
    lVar8 = *plVar13;
    if (lVar11 != 0) {
      FUN_00340fb0(1,lVar11);
      FUN_00340fb0(1,lVar11);
    }
    lVar12 = *(long *)(lVar8 + 0x50);
    *(long *)(lVar8 + 0x50) = lVar11;
    if ((lVar12 != 0) && (iVar3 = FUN_00340fe0(0xffffffff,lVar12), iVar3 == 1)) {
      FUN_003453a8(lVar12);
    }
    if ((lVar11 != 0) && (iVar3 = FUN_00340fe0(0xffffffff,lVar11), iVar3 == 1)) {
      FUN_003453a8(lVar11);
    }
  }
  if (this[0xbe8] != (Artboard)0x0) {
    puVar15 = *(undefined8 **)(this + 0xb98);
    for (puVar14 = *(undefined8 **)(this + 0xb90); puVar14 != puVar15; puVar14 = puVar14 + 1) {
      this_00 = (ScriptedObject *)*puVar14;
      pSVar5 = *(ScriptedObject **)(this_00 + 8);
      if (pSVar5 != (ScriptedObject *)0x0) {
        if (((this_00[0x71] == (ScriptedObject)0x0) && (*(long *)(pSVar5 + 0xd8) != 0)) &&
           (*(long *)(*(long *)(pSVar5 + 0xd8) + 0x110) != 0)) {
          ScriptAsset::initScriptedObjectWith(pSVar5);
        }
        ScriptedObject::hydrateScriptInputs(this_00);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035d02c  rive::Artboard::internalDrawCanvases =====

/* rive::Artboard::internalDrawCanvases() */

void __thiscall rive::Artboard::internalDrawCanvases(Artboard *this)

{
  ulong uVar1;
  Artboard *this_00;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(this + 0xb98);
  for (lVar3 = *(long *)(this + 0xb90); lVar3 != lVar5; lVar3 = lVar3 + 8) {
    ScriptedObject::scriptDrawCanvas();
  }
  puVar7 = *(undefined8 **)(this + 0xb50);
  for (puVar6 = *(undefined8 **)(this + 0xb48); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    plVar2 = (long *)*puVar6;
    lVar3 = (**(code **)*plVar2)(plVar2);
    if (lVar3 != 0) {
      uVar4 = 0;
      do {
        this_00 = (Artboard *)(**(code **)(*plVar2 + 8))(plVar2,uVar4 & 0xffffffff);
        if (this_00 != (Artboard *)0x0) {
          internalDrawCanvases(this_00);
        }
        uVar4 = uVar4 + 1;
        uVar1 = (**(code **)*plVar2)(plVar2);
      } while (uVar4 < uVar1);
    }
  }
  return;
}


// ===== 0035d0e4  rive::Artboard::drawInternal =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Artboard::drawInternal(rive::Renderer*) */

void __thiscall rive::Artboard::drawInternal(Artboard *this,Renderer *param_1)

{
  Artboard AVar1;
  Artboard AVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this[0xc32] = (Artboard)0x0;
  if (*(float *)(this + 0xe8) != 0.0) {
    AVar1 = this[0x171];
    AVar2 = this[0xbe9];
    if (AVar1 != (Artboard)0x0 || AVar2 != (Artboard)0x0) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
      if (this[0x171] != (Artboard)0x0) {
        uVar5 = ShapePaintPath::renderPath
                          ((ShapePaintPath *)(this + 0x788),
                           *(Factory **)(*(long *)(this + 0x40) + 0xbd8));
        (**(code **)(*(long *)param_1 + 0x30))(param_1,uVar5);
      }
      if (this[0xbe9] != (Artboard)0x0) {
        local_70 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x200) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(this + 0x984) >> 0x20),
                            (float)*(undefined8 *)(this + 0x200) *
                            (float)*(undefined8 *)(this + 0x984));
        uStack_78 = _UNK_00281c00;
        local_80 = _DAT_00281bf8;
        (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_80);
      }
    }
    puVar20 = *(undefined8 **)(this + 0x1a8);
    for (puVar18 = *(undefined8 **)(this + 0x1a0); puVar18 != puVar20; puVar18 = puVar18 + 1) {
      plVar14 = (long *)*puVar18;
      uVar6 = (**(code **)(*plVar14 + 0x98))(plVar14);
      if ((((uVar6 & 1) != 0) && ((*(byte *)(plVar14[0x1a] + 8) & 1) != 0)) &&
         (lVar7 = (**(code **)(*plVar14 + 0xf0))(plVar14,this + 400), lVar7 != 0)) {
        (**(code **)(*plVar14 + 0xe0))(plVar14,param_1,lVar7,this + 0xa4,0,0,1);
      }
    }
    plVar14 = *(long **)(this + 0xbe0);
    if (plVar14 == (long *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      puVar20 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)0x0;
      puVar16 = (undefined8 *)0x0;
      iVar19 = 0;
      puVar17 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)0x0;
      do {
        iVar4 = (**(code **)(*plVar14 + 0x228))(plVar14);
        iVar19 = iVar4 + iVar19;
        uVar6 = (**(code **)(*plVar14 + 0x218))(plVar14);
        puVar15 = puVar9;
        puVar18 = puVar17;
        if ((((uVar6 & 1) != 0) && (iVar4 == 0)) && (iVar19 < 1)) {
          uVar6 = (**(code **)(*plVar14 + 0x200))(plVar14);
          if ((uVar6 & 1) == 0) {
            if (puVar9 != puVar16) {
              uVar6 = (**(code **)(*plVar14 + 0x208))(plVar14);
              puVar17 = puVar21;
              if ((uVar6 & 1) != 0) {
                puVar15 = puVar9 + -1;
                goto LAB_0035d270;
              }
              for (; puVar21 = puVar13, puVar16 = puVar13, puVar17 != puVar9; puVar17 = puVar17 + 1)
              {
                (**(code **)(*(long *)*puVar17 + 0x1d8))((long *)*puVar17,param_1);
              }
            }
            (**(code **)(*plVar14 + 0x1d8))(plVar14,param_1);
            puVar15 = puVar16;
          }
          else if (puVar9 < puVar20) {
            puVar15 = puVar9 + 1;
            *puVar9 = plVar14;
          }
          else {
            lVar7 = (long)puVar9 - (long)puVar17;
            uVar6 = (lVar7 >> 3) + 1;
            if (uVar6 >> 0x3d != 0) {
              FUN_0035d4f8();
LAB_0035d4f4:
                    /* WARNING: Subroutine does not return */
              FUN_00324008();
            }
            uVar10 = (long)puVar20 - (long)puVar17 >> 2;
            if (uVar10 <= uVar6) {
              uVar10 = uVar6;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puVar20 - (long)puVar17)) {
              uVar10 = 0x1fffffffffffffff;
            }
            if (uVar10 == 0) {
              pvVar8 = (void *)0x0;
            }
            else {
              if (uVar10 >> 0x3d != 0) goto LAB_0035d4f4;
              pvVar8 = operator_new(uVar10 << 3);
            }
            puVar13 = (undefined8 *)((long)pvVar8 + (lVar7 >> 3) * 8);
            puVar15 = puVar13 + 1;
            *puVar13 = plVar14;
            if ((long)puVar9 - (long)puVar17 != 0) {
              uVar6 = ((long)puVar9 - (long)puVar17) - 8;
              if (((0x147 < uVar6) &&
                  (uVar11 = (long)pvVar8 + lVar7 + -8,
                  uVar11 - (uVar6 & 0xfffffffffffffff8) <= uVar11)) &&
                 (((undefined8 *)((long)(puVar9 + -1) - (uVar6 & 0xfffffffffffffff8)) <= puVar9 + -1
                  && (0x1f < (ulong)((long)puVar9 + (-lVar7 - (long)pvVar8)))))) {
                puVar18 = puVar13 + -2;
                puVar20 = puVar9 + -2;
                uVar6 = (uVar6 >> 3) + 1;
                uVar12 = uVar6 & 0x3ffffffffffffffc;
                puVar9 = puVar9 + -uVar12;
                uVar11 = uVar12;
                do {
                  puVar21 = puVar20 + -1;
                  uVar23 = puVar20[-2];
                  uVar22 = puVar20[1];
                  uVar5 = *puVar20;
                  uVar11 = uVar11 - 4;
                  puVar20 = puVar20 + -4;
                  puVar18[-1] = *puVar21;
                  puVar18[-2] = uVar23;
                  puVar18[1] = uVar22;
                  *puVar18 = uVar5;
                  puVar18 = puVar18 + -4;
                } while (uVar11 != 0);
                puVar13 = puVar13 + -uVar12;
                if (uVar6 == uVar12) goto LAB_0035d3d4;
              }
              do {
                puVar9 = puVar9 + -1;
                puVar13 = puVar13 + -1;
                *puVar13 = *puVar9;
              } while (puVar9 != puVar17);
            }
LAB_0035d3d4:
            puVar20 = (undefined8 *)((long)pvVar8 + uVar10 * 8);
            puVar16 = puVar13;
            puVar18 = puVar13;
            puVar21 = puVar13;
            if (puVar17 != (undefined8 *)0x0) {
              operator_delete(puVar17);
            }
          }
        }
LAB_0035d270:
        plVar14 = (long *)plVar14[0x2c];
        puVar17 = puVar18;
        puVar9 = puVar15;
      } while (plVar14 != (long *)0x0);
    }
    if (AVar1 != (Artboard)0x0 || AVar2 != (Artboard)0x0) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
    }
    if (puVar18 != (undefined8 *)0x0) {
      operator_delete(puVar18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035d4f8  FUN_0035d4f8 =====

void FUN_0035d4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0035d50c  rive::Artboard::sortDrawOrder =====

/* rive::Artboard::sortDrawOrder() */

void __thiscall rive::Artboard::sortDrawOrder(Artboard *this)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long *__dest_00;
  size_t sVar6;
  long *plVar7;
  undefined8 *puVar8;
  Artboard *pAVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  uint uVar31;
  ulong uVar32;
  long *plVar33;
  void *pvVar34;
  long *plVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  void *pvStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  Artboard *local_90;
  long *local_88;
  long *local_80;
  Artboard *local_78;
  long local_70;
  long *local_68;
  
  plVar7 = *(long **)(this + 0xb00);
  plVar10 = *(long **)(this + 0xb08);
  this[0xc58] = (Artboard)((char)this[0xc58] + '\x01');
  for (plVar19 = plVar7; plVar19 != plVar10; plVar19 = plVar19 + 1) {
    lVar18 = *plVar19;
    *(undefined8 *)(lVar18 + 0x98) = 0;
    *(undefined8 *)(lVar18 + 0xa0) = 0;
  }
  plVar19 = *(long **)(this + 0xad0);
  plVar22 = *(long **)(this + 0xad8);
  local_78 = this + 0xbe0;
  lVar18 = 0;
  *(undefined8 *)(this + 0xbe0) = 0;
  lVar29 = 0;
  for (; plVar19 != plVar22; plVar19 = plVar19 + 1) {
    lVar23 = *plVar19;
    if ((*(long *)(lVar23 + 0x158) == 0) ||
       (lVar24 = *(long *)(*(long *)(lVar23 + 0x158) + 0xa8), lVar24 == 0)) {
      *(long *)(lVar23 + 0x160) = lVar29;
      *(undefined8 *)(lVar23 + 0x168) = 0;
      if (lVar29 == 0) {
        *(long *)local_78 = lVar23;
        lVar18 = lVar23;
      }
      else {
        *(long *)(lVar29 + 0x168) = lVar23;
      }
    }
    else if (*(long *)(lVar24 + 0x98) == 0) {
      *(long *)(lVar24 + 0x98) = lVar23;
      *(long *)(lVar24 + 0xa0) = lVar23;
      *(undefined8 *)(lVar23 + 0x160) = 0;
      *(undefined8 *)(lVar23 + 0x168) = 0;
      lVar23 = lVar29;
    }
    else {
      lVar20 = *(long *)(lVar24 + 0xa0);
      *(long *)(lVar24 + 0xa0) = lVar23;
      *(long *)(lVar20 + 0x168) = lVar23;
      *(long *)(lVar23 + 0x160) = lVar20;
      *(undefined8 *)(lVar23 + 0x168) = 0;
      lVar23 = lVar29;
    }
    lVar29 = lVar23;
  }
  for (; plVar7 != plVar10; plVar7 = plVar7 + 1) {
    lVar24 = *plVar7;
    lVar23 = *(long *)(lVar24 + 0x98);
    if (lVar23 != 0) {
      lVar20 = *(long *)(lVar24 + 0x90);
      if (*(char *)(lVar24 + 0x8c) == '\x01') {
        lVar27 = *(long *)(lVar20 + 0x168);
        if (lVar27 != 0) {
          lVar28 = *(long *)(lVar24 + 0xa0);
          *(long *)(lVar27 + 0x160) = lVar28;
          *(long *)(lVar28 + 0x168) = lVar27;
        }
        if (lVar20 == lVar29) {
          lVar29 = *(long *)(lVar24 + 0xa0);
        }
        *(long *)(lVar20 + 0x168) = lVar23;
        plVar19 = (long *)(lVar23 + 0x160);
      }
      else {
        if (*(char *)(lVar24 + 0x8c) != '\0') goto LAB_0035d5fc;
        lVar27 = *(long *)(lVar20 + 0x160);
        if (lVar27 != 0) {
          *(long *)(lVar27 + 0x168) = lVar23;
          *(long *)(lVar23 + 0x160) = lVar27;
        }
        if (lVar20 == lVar18) {
          *(long *)local_78 = lVar23;
          lVar18 = lVar23;
        }
        lVar23 = *(long *)(lVar24 + 0xa0);
        *(long *)(lVar20 + 0x160) = lVar23;
        plVar19 = (long *)(lVar23 + 0x168);
      }
      *plVar19 = lVar20;
    }
LAB_0035d5fc:
  }
  plVar7 = *(long **)(this + 0xae8);
  plVar19 = *(long **)(this + 0xaf0);
  *(long *)(this + 0xbe0) = lVar29;
  local_90 = this;
  plVar10 = plVar19;
  if (plVar7 != plVar19) {
    do {
      local_68 = plVar10;
      lVar23 = *plVar7;
      puVar26 = *(undefined8 **)(lVar23 + 0xb0);
      lVar18 = *(long *)(lVar23 + 0xb8);
      uVar32 = lVar18 - (long)puVar26;
      lVar29 = (long)uVar32 >> 3;
      uVar14 = lVar29 - 1;
      if (0 < lVar29) {
        __dest = *(undefined8 **)(lVar23 + 0xd0);
        if (*(long *)(lVar23 + 0xd8) - (long)__dest >> 3 < lVar29) {
          lVar24 = *(long *)(lVar23 + 200);
          lVar18 = (long)__dest - lVar24;
          lVar20 = lVar18 >> 3;
          uVar21 = lVar20 + lVar29;
          if (uVar21 >> 0x3d != 0) {
            lVar23 = FUN_0035e434();
            pcStack_e8 = clearRedundantOperations;
            lVar29 = tpidr_el0;
            lStack_f8 = *(long *)(lVar29 + 0x28);
            plVar10 = *(long **)(lVar23 + 0xbe0);
            pvStack_110 = (void *)0x0;
            uStack_108 = 0;
            lStack_100 = 0;
            puStack_f0 = &stack0xffffffffffffffa0;
            uStack_e0 = uVar32;
            plStack_d0 = plVar19;
            lStack_c8 = lVar20;
            lStack_c0 = lVar24;
            uStack_b8 = uVar14;
            lStack_b0 = lVar18;
            puStack_a8 = puVar26;
            puStack_a0 = __dest;
            plStack_98 = plVar7;
            if (plVar10 == (long *)0x0) goto LAB_0035e088;
            pvVar4 = (void *)0x0;
            pvVar5 = (void *)0x0;
            pvVar34 = (void *)0x0;
            uVar14 = 0;
            uVar31 = 0;
            goto LAB_0035dea4;
          }
          uVar11 = *(long *)(lVar23 + 0xd8) - lVar24;
          uVar13 = (long)uVar11 >> 2;
          if (uVar13 <= uVar21) {
            uVar13 = uVar21;
          }
          if (0x7ffffffffffffff7 < uVar11) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar13 >> 0x3d != 0) goto LAB_0035de24;
            pvVar4 = operator_new(uVar13 << 3);
          }
          puVar15 = (undefined8 *)((long)pvVar4 + lVar20 * 8);
          puVar12 = (undefined8 *)((long)puVar15 + uVar32);
          puVar8 = puVar15;
          if (((uVar14 & 0x1fffffffffffffff) < 7) ||
             ((ulong)((long)pvVar4 + (lVar18 - (long)puVar26)) < 0x20)) {
LAB_0035d870:
            do {
              puVar25 = puVar8 + 1;
              *puVar8 = *puVar26;
              puVar8 = puVar25;
              puVar26 = puVar26 + 1;
            } while (puVar25 != puVar12);
          }
          else {
            uVar14 = (uVar14 & 0x1fffffffffffffff) + 1;
            puVar8 = puVar26 + 2;
            puVar25 = puVar15 + 2;
            uVar21 = uVar14 & 0x3ffffffffffffffc;
            uVar32 = uVar21;
            do {
              puVar1 = puVar8 + -1;
              uVar36 = puVar8[-2];
              uVar38 = puVar8[1];
              uVar37 = *puVar8;
              uVar32 = uVar32 - 4;
              puVar8 = puVar8 + 4;
              puVar25[-1] = *puVar1;
              puVar25[-2] = uVar36;
              puVar25[1] = uVar38;
              *puVar25 = uVar37;
              puVar25 = puVar25 + 4;
            } while (uVar32 != 0);
            if (uVar14 != uVar21) {
              puVar26 = puVar26 + uVar21;
              puVar8 = puVar15 + uVar21;
              goto LAB_0035d870;
            }
          }
          puVar8 = *(undefined8 **)(lVar23 + 200);
          puVar26 = __dest;
          if (puVar8 != __dest) {
            uVar14 = (long)__dest + (-8 - (long)puVar8);
            if ((uVar14 < 0x38) || ((ulong)((long)__dest - (lVar18 + (long)pvVar4)) < 0x20)) {
LAB_0035d90c:
              do {
                puVar26 = puVar26 + -1;
                puVar15 = puVar15 + -1;
                *puVar15 = *puVar26;
              } while (puVar26 != puVar8);
            }
            else {
              puVar25 = puVar15 + -2;
              puVar26 = (undefined8 *)(lVar24 + lVar18 + -0x10);
              uVar14 = (uVar14 >> 3) + 1;
              uVar21 = uVar14 & 0x3ffffffffffffffc;
              uVar32 = uVar21;
              do {
                puVar1 = puVar26 + -1;
                uVar38 = puVar26[-2];
                uVar37 = puVar26[1];
                uVar36 = *puVar26;
                uVar32 = uVar32 - 4;
                puVar26 = puVar26 + -4;
                puVar25[-1] = *puVar1;
                puVar25[-2] = uVar38;
                puVar25[1] = uVar37;
                *puVar25 = uVar36;
                puVar25 = puVar25 + -4;
              } while (uVar32 != 0);
              puVar15 = puVar15 + -uVar21;
              puVar26 = __dest + -uVar21;
              if (uVar14 != uVar21) goto LAB_0035d90c;
            }
            puVar26 = *(undefined8 **)(lVar23 + 0xd0);
          }
          if (puVar26 != __dest) {
            memmove(puVar12,__dest,(long)puVar26 - (long)__dest);
          }
          plVar19 = local_68;
          pvVar5 = *(void **)(lVar23 + 200);
          *(undefined8 **)(lVar23 + 200) = puVar15;
          *(long *)(lVar23 + 0xd0) = (long)puVar12 + ((long)puVar26 - (long)__dest);
          *(void **)(lVar23 + 0xd8) = (void *)((long)pvVar4 + uVar13 * 8);
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
        }
        else if (-lVar29 < 0) {
          sVar6 = lVar18 - (long)puVar26;
          if (sVar6 != 0) {
            memmove(__dest,puVar26,sVar6);
          }
          *(size_t *)(lVar23 + 0xd0) = (long)__dest + sVar6;
        }
        else {
          puVar12 = (undefined8 *)((long)__dest - uVar32);
          puVar15 = __dest;
          if (puVar12 < __dest) {
            if (__dest <= puVar12 + 1) {
              puVar15 = puVar12 + 1;
            }
            uVar14 = (long)puVar15 + uVar32 + ~(ulong)__dest;
            puVar8 = __dest;
            if ((0x37 < uVar14) && (0x1f < uVar32)) {
              puVar15 = __dest + 2;
              uVar14 = (uVar14 >> 3) + 1;
              puVar8 = (undefined8 *)((((long)__dest + (long)puVar26) - lVar18) + 0x10);
              uVar13 = uVar14 & 0x3ffffffffffffffc;
              uVar21 = uVar13;
              do {
                puVar25 = puVar8 + -1;
                uVar36 = puVar8[-2];
                uVar38 = puVar8[1];
                uVar37 = *puVar8;
                uVar21 = uVar21 - 4;
                puVar8 = puVar8 + 4;
                puVar15[-1] = *puVar25;
                puVar15[-2] = uVar36;
                puVar15[1] = uVar38;
                *puVar15 = uVar37;
                puVar15 = puVar15 + 4;
              } while (uVar21 != 0);
              puVar15 = __dest + uVar13;
              puVar12 = puVar12 + uVar13;
              puVar8 = puVar15;
              if (uVar14 == uVar13) goto LAB_0035d97c;
            }
            do {
              puVar25 = puVar12 + 1;
              puVar15 = puVar8 + 1;
              *puVar8 = *puVar12;
              puVar12 = puVar25;
              puVar8 = puVar15;
            } while (puVar25 < __dest);
          }
LAB_0035d97c:
          *(undefined8 **)(lVar23 + 0xd0) = puVar15;
          if (__dest != (undefined8 *)((long)__dest + uVar32)) {
            sVar6 = (long)__dest - (long)((long)__dest + uVar32);
            memmove((void *)((long)__dest - sVar6),__dest,sVar6);
          }
          if (uVar32 != 0) {
            memmove(__dest,puVar26,uVar32);
          }
        }
      }
      plVar7 = plVar7 + 1;
      *(undefined8 *)(lVar23 + 0xb8) = *(undefined8 *)(lVar23 + 0xb0);
      plVar10 = local_68;
    } while (plVar7 != plVar19);
    lVar29 = *(long *)local_78;
  }
  if (lVar29 == 0) {
    clearRedundantOperations(local_90);
    return;
  }
  plVar10 = (long *)0x0;
  plVar19 = (long *)0x0;
  plVar35 = (long *)0x0;
  plVar33 = (long *)0x0;
  plVar22 = (long *)0x0;
  plVar7 = (long *)0x0;
  lVar18 = 0;
  local_80 = (long *)0x0;
  local_68 = (long *)0x0;
LAB_0035d9f4:
  pvVar4 = *(void **)(lVar29 + 0x140);
  uVar14 = *(long *)(lVar29 + 0x148) - (long)pvVar4;
  *(undefined1 *)(lVar29 + 0x170) = 1;
  if (uVar14 == 0) {
    plVar30 = (long *)0x0;
    __dest_00 = (long *)0x0;
  }
  else {
    local_70 = lVar18;
    if ((long)uVar14 < 0) {
LAB_0035de20:
      FUN_0035e1d4();
LAB_0035de24:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    __dest_00 = (long *)operator_new(uVar14);
    plVar30 = (long *)((long)__dest_00 + uVar14);
    memcpy(__dest_00,pvVar4,uVar14);
    lVar18 = local_70;
  }
  puVar2 = PTR___sF_0067cee8;
  plVar16 = plVar22;
  lVar23 = lVar18;
  local_88 = __dest_00;
  if ((long)plVar7 - (long)plVar22 != 0) {
    uVar13 = (long)plVar7 - (long)plVar22 >> 3;
    uVar14 = 0;
    uVar21 = uVar13 - 1;
    uVar32 = uVar13;
    if (uVar13 == 0 || uVar21 == 0) {
      uVar32 = 1;
    }
    do {
      plVar17 = __dest_00;
      if (__dest_00 != plVar30) {
        plVar16 = __dest_00;
        do {
          plVar17 = plVar16;
          if (*plVar16 == plVar22[uVar14]) break;
          plVar16 = plVar16 + 1;
          plVar17 = plVar30;
        } while (plVar16 != plVar30);
      }
      plVar16 = plVar7;
      if (plVar17 == plVar30) {
        local_70 = lVar29;
        if (uVar14 < uVar13) goto LAB_0035dafc;
        break;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar32);
  }
  goto joined_r0x0035db38;
  while( true ) {
    lVar29 = FUN_0035e1e8(plVar22[uVar21],plVar22[uVar21] + 0xf8);
    if (lVar18 == 0) {
      fwrite("Error - adding clip end as first operation\n",0x2b,1,(FILE *)(puVar2 + 0x130));
    }
    else {
      *(long *)(lVar29 + 0x168) = lVar18;
      *(long *)(lVar18 + 0x160) = lVar29;
    }
    uVar21 = uVar21 - 1;
    *(long *)(lVar29 + 0x160) = local_70;
    *(long *)(local_70 + 0x168) = lVar29;
    lVar18 = lVar29;
    if (uVar21 == 0xffffffffffffffff) break;
LAB_0035dafc:
    if (uVar21 < uVar14) break;
  }
  plVar7 = plVar33 + uVar14;
  plVar16 = plVar35;
  lVar23 = lVar18;
  plVar22 = plVar33;
  __dest_00 = local_88;
  lVar29 = local_70;
  if (plVar7 != plVar35) {
    plVar16 = plVar7;
    plVar10 = plVar7;
    plVar35 = plVar7;
  }
joined_r0x0035db38:
  do {
    lVar18 = lVar29;
    plVar7 = plVar16;
    local_70 = lVar18;
    if (__dest_00 == plVar30) break;
    plVar7 = plVar19;
    if (plVar19 != plVar10) {
      plVar22 = plVar19;
      do {
        plVar7 = plVar22;
        if (*plVar22 == *__dest_00) break;
        plVar22 = plVar22 + 1;
        plVar7 = plVar10;
      } while (plVar22 != plVar10);
    }
    if (plVar7 == plVar10) {
      lVar18 = FUN_0035e1e8(*__dest_00,*__dest_00 + 0xe8);
      pAVar9 = local_78;
      if (lVar23 != 0) {
        pAVar9 = (Artboard *)(lVar23 + 0x160);
        *(long *)(lVar18 + 0x168) = lVar23;
      }
      *(long *)pAVar9 = lVar18;
      *(long *)(lVar18 + 0x160) = local_70;
      *(long *)(local_70 + 0x168) = lVar18;
      lVar23 = lVar18;
      if (plVar10 < local_68) {
        *plVar10 = *__dest_00;
        plVar10 = plVar10 + 1;
      }
      else {
        lVar18 = (long)plVar10 - (long)plVar19;
        uVar14 = (lVar18 >> 3) + 1;
        if (uVar14 >> 0x3d != 0) goto LAB_0035de20;
        uVar32 = (long)local_68 - (long)plVar19 >> 2;
        if (uVar32 <= uVar14) {
          uVar32 = uVar14;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_68 - (long)plVar19)) {
          uVar32 = 0x1fffffffffffffff;
        }
        if (uVar32 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar32 >> 0x3d != 0) goto LAB_0035de24;
          pvVar4 = operator_new(uVar32 << 3);
        }
        plVar7 = (long *)((long)pvVar4 + (lVar18 >> 3) * 8);
        plVar33 = plVar7 + 1;
        *plVar7 = *__dest_00;
        plVar22 = plVar10;
        if (plVar19 != plVar10) {
          uVar14 = lVar18 - 8;
          plVar22 = local_80;
          if ((((0x147 < uVar14) &&
               (uVar21 = (long)pvVar4 + lVar18 + -8,
               uVar21 - (uVar14 & 0xfffffffffffffff8) <= uVar21)) &&
              ((long *)((long)(plVar10 + -1) - (uVar14 & 0xfffffffffffffff8)) <= plVar10 + -1)) &&
             (0x1f < (ulong)((long)plVar10 + (-lVar18 - (long)pvVar4)))) {
            plVar16 = plVar10 + -2;
            plVar35 = plVar7 + -2;
            uVar14 = (uVar14 >> 3) + 1;
            uVar13 = uVar14 & 0x3ffffffffffffffc;
            plVar10 = plVar10 + -uVar13;
            uVar21 = uVar13;
            do {
              plVar17 = plVar16 + -1;
              lVar24 = plVar16[-2];
              lVar29 = plVar16[1];
              lVar18 = *plVar16;
              uVar21 = uVar21 - 4;
              plVar16 = plVar16 + -4;
              plVar35[-1] = *plVar17;
              plVar35[-2] = lVar24;
              plVar35[1] = lVar29;
              *plVar35 = lVar18;
              plVar35 = plVar35 + -4;
            } while (uVar21 != 0);
            plVar7 = plVar7 + -uVar13;
            if (uVar14 == uVar13) goto LAB_0035dc94;
          }
          do {
            plVar10 = plVar10 + -1;
            plVar7 = plVar7 + -1;
            *plVar7 = *plVar10;
          } while (plVar10 != plVar19);
        }
LAB_0035dc94:
        local_68 = (long *)((long)pvVar4 + uVar32 * 8);
        plVar19 = plVar7;
        plVar10 = plVar33;
        local_80 = plVar7;
        if (plVar22 != (long *)0x0) {
          operator_delete(plVar22);
        }
      }
    }
    plVar16 = plVar10;
    plVar22 = plVar19;
    plVar33 = plVar19;
    plVar35 = plVar10;
    __dest_00 = __dest_00 + 1;
    lVar29 = local_70;
  } while( true );
  lVar29 = *(long *)(lVar18 + 0x160);
  if (local_88 != (long *)0x0) {
    operator_delete(local_88);
  }
  if (lVar29 == 0) {
    if (((long)plVar10 - (long)plVar19 == 0) ||
       (uVar31 = (int)((ulong)((long)plVar10 - (long)plVar19) >> 3) - 1, (int)uVar31 < 0)) {
      clearRedundantOperations(local_90);
      if (plVar19 == (long *)0x0) {
        return;
      }
    }
    else {
      lVar29 = (ulong)uVar31 << 3;
      do {
        lVar23 = FUN_0035e1e8(*(long *)((long)plVar19 + lVar29),
                              *(long *)((long)plVar19 + lVar29) + 0xf8);
        lVar29 = lVar29 + -8;
        *(long *)(lVar18 + 0x160) = lVar23;
        *(undefined8 *)(lVar23 + 0x160) = 0;
        *(long *)(lVar23 + 0x168) = lVar18;
        lVar18 = lVar23;
      } while (lVar29 != -8);
      clearRedundantOperations(local_90);
    }
    operator_delete(plVar19);
    return;
  }
  goto LAB_0035d9f4;
LAB_0035dea4:
  do {
    *(undefined1 *)(plVar10 + 0x2e) = 1;
    uVar32 = (**(code **)(*plVar10 + 0x200))(plVar10);
    if ((uVar31 & 1) == 0) {
      if ((uVar32 & 1) == 0) {
        uVar32 = (**(code **)(*plVar10 + 0x208))(plVar10);
        if ((uVar32 & 1) != 0) {
          uVar32 = *(ulong *)((long)pvVar34 + (uVar14 - 1 >> 3 & 0x1ffffffffffffff8));
          goto LAB_0035df84;
        }
      }
      else {
        uVar32 = uVar14;
        if (uVar14 == lStack_100 * 0x40) {
          if ((long)(uVar14 + 1) < 0) goto LAB_0035e0b8;
          if (uVar14 < 0x3fffffffffffffff) {
            uVar32 = lStack_100 * 0x80;
            uVar14 = (uVar14 & 0x3fffffffffffffc0) + 0x40;
            if (uVar32 < uVar14 || uVar32 - uVar14 == 0) {
              uVar32 = uVar14;
            }
          }
          else {
            uVar32 = 0x7fffffffffffffff;
          }
          FUN_0035e0d4(&pvStack_110,uVar32);
          pvVar4 = pvStack_110;
          uVar32 = uStack_108;
          pvVar5 = pvStack_110;
          pvVar34 = pvStack_110;
        }
        uVar14 = uVar32 + 1;
        uVar21 = uVar32 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)pvVar34 + uVar21) =
             *(ulong *)((long)pvVar34 + uVar21) | 1L << (uVar32 & 0x3f);
        uStack_108 = uVar14;
      }
    }
    else if ((uVar32 & 1) == 0) {
      uVar32 = (**(code **)(*plVar10 + 0x208))(plVar10);
      if ((uVar32 & 1) == 0) {
        uVar32 = (**(code **)(*(long *)plVar10[0x2c] + 0x208))();
        if ((uVar32 & 1) != 0) {
          *(undefined1 *)(plVar10 + 0x2e) = 0;
        }
      }
      else {
        uVar32 = *(ulong *)((long)pvVar5 + (uVar14 - 1 >> 3 & 0x1ffffffffffffff8));
        pvVar34 = pvVar5;
LAB_0035df84:
        uVar14 = uVar14 - 1;
        *(byte *)(plVar10 + 0x2e) = (byte)(uVar32 >> (uVar14 & 0x3f)) & 1;
        uStack_108 = uVar14;
      }
    }
    else {
      uVar32 = uVar14;
      if (uVar14 == lStack_100 * 0x40) {
        if ((long)(uVar14 + 1) < 0) {
LAB_0035e0b8:
          FUN_0035e0c0();
          goto LAB_0035e0bc;
        }
        if (uVar14 < 0x3fffffffffffffff) {
          uVar32 = lStack_100 * 0x80;
          uVar14 = (uVar14 & 0x3fffffffffffffc0) + 0x40;
          if (uVar32 < uVar14 || uVar32 - uVar14 == 0) {
            uVar32 = uVar14;
          }
        }
        else {
          uVar32 = 0x7fffffffffffffff;
        }
        FUN_0035e0d4(&pvStack_110,uVar32);
        pvVar4 = pvStack_110;
        uVar32 = uStack_108;
      }
      uVar14 = uVar32 + 1;
      uVar21 = uVar32 >> 3 & 0x1ffffffffffffff8;
      *(undefined1 *)(plVar10 + 0x2e) = 0;
      *(ulong *)((long)pvVar4 + uVar21) =
           *(ulong *)((long)pvVar4 + uVar21) & (1L << (uVar32 & 0x3f) ^ 0xffffffffffffffffU);
      pvVar5 = pvVar4;
      pvVar34 = pvVar4;
      uStack_108 = uVar14;
    }
    uVar32 = (**(code **)(*plVar10 + 0x200))(plVar10);
    if ((uVar32 & 1) == 0) {
      uVar31 = 0;
      plVar10 = (long *)plVar10[0x2c];
    }
    else {
      uVar3 = (**(code **)(*plVar10 + 0x210))(plVar10);
      uVar31 = uVar3 | uVar31;
      plVar10 = (long *)plVar10[0x2c];
    }
  } while (plVar10 != (long *)0x0);
  if (pvVar4 == (void *)0x0) {
LAB_0035e088:
    if (*(long *)(lVar29 + 0x28) == lStack_f8) {
      return;
    }
  }
  else if (*(long *)(lVar29 + 0x28) == lStack_f8) {
    operator_delete(pvVar4);
    return;
  }
LAB_0035e0bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035de2c  rive::Artboard::clearRedundantOperations =====

/* rive::Artboard::clearRedundantOperations() */

void __thiscall rive::Artboard::clearRedundantOperations(Artboard *this)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  void *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(this + 0xbe0);
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  if (plVar5 != (long *)0x0) {
    pvVar6 = (void *)0x0;
    pvVar9 = (void *)0x0;
    pvVar10 = (void *)0x0;
    uVar8 = 0;
    uVar7 = 0;
LAB_0035dea4:
    do {
      *(undefined1 *)(plVar5 + 0x2e) = 1;
      uVar3 = (**(code **)(*plVar5 + 0x200))(plVar5);
      if ((uVar7 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          uVar3 = (**(code **)(*plVar5 + 0x208))(plVar5);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)((long)pvVar10 + (uVar8 - 1 >> 3 & 0x1ffffffffffffff8));
            goto LAB_0035df84;
          }
        }
        else {
          uVar3 = uVar8;
          if (uVar8 == local_70 * 0x40) {
            if ((long)(uVar8 + 1) < 0) goto LAB_0035e0b8;
            if (uVar8 < 0x3fffffffffffffff) {
              uVar3 = local_70 * 0x80;
              uVar8 = (uVar8 & 0x3fffffffffffffc0) + 0x40;
              if (uVar3 < uVar8 || uVar3 - uVar8 == 0) {
                uVar3 = uVar8;
              }
            }
            else {
              uVar3 = 0x7fffffffffffffff;
            }
            FUN_0035e0d4(&local_80,uVar3);
            pvVar6 = local_80;
            uVar3 = local_78;
            pvVar9 = local_80;
            pvVar10 = local_80;
          }
          uVar8 = uVar3 + 1;
          uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)pvVar10 + uVar4) =
               *(ulong *)((long)pvVar10 + uVar4) | 1L << (uVar3 & 0x3f);
          local_78 = uVar8;
        }
      }
      else if ((uVar3 & 1) == 0) {
        uVar3 = (**(code **)(*plVar5 + 0x208))(plVar5);
        if ((uVar3 & 1) == 0) {
          uVar3 = (**(code **)(*(long *)plVar5[0x2c] + 0x208))();
          if ((uVar3 & 1) != 0) {
            *(undefined1 *)(plVar5 + 0x2e) = 0;
          }
        }
        else {
          uVar3 = *(ulong *)((long)pvVar9 + (uVar8 - 1 >> 3 & 0x1ffffffffffffff8));
          pvVar10 = pvVar9;
LAB_0035df84:
          uVar8 = uVar8 - 1;
          *(byte *)(plVar5 + 0x2e) = (byte)(uVar3 >> (uVar8 & 0x3f)) & 1;
          local_78 = uVar8;
        }
      }
      else {
        uVar3 = uVar8;
        if (uVar8 == local_70 * 0x40) {
          if ((long)(uVar8 + 1) < 0) {
LAB_0035e0b8:
            FUN_0035e0c0();
            goto LAB_0035e0bc;
          }
          if (uVar8 < 0x3fffffffffffffff) {
            uVar3 = local_70 * 0x80;
            uVar8 = (uVar8 & 0x3fffffffffffffc0) + 0x40;
            if (uVar3 < uVar8 || uVar3 - uVar8 == 0) {
              uVar3 = uVar8;
            }
          }
          else {
            uVar3 = 0x7fffffffffffffff;
          }
          FUN_0035e0d4(&local_80,uVar3);
          pvVar6 = local_80;
          uVar3 = local_78;
        }
        uVar8 = uVar3 + 1;
        uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
        *(undefined1 *)(plVar5 + 0x2e) = 0;
        *(ulong *)((long)pvVar6 + uVar4) =
             *(ulong *)((long)pvVar6 + uVar4) & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
        pvVar9 = pvVar6;
        pvVar10 = pvVar6;
        local_78 = uVar8;
      }
      uVar3 = (**(code **)(*plVar5 + 0x200))(plVar5);
      if ((uVar3 & 1) != 0) {
        uVar2 = (**(code **)(*plVar5 + 0x210))(plVar5);
        uVar7 = uVar2 | uVar7;
        plVar5 = (long *)plVar5[0x2c];
        if (plVar5 == (long *)0x0) break;
        goto LAB_0035dea4;
      }
      uVar7 = 0;
      plVar5 = (long *)plVar5[0x2c];
    } while (plVar5 != (long *)0x0);
    if (pvVar6 != (void *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
        operator_delete(pvVar6);
        return;
      }
      goto LAB_0035e0bc;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_0035e0bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035e0c0  FUN_0035e0c0 =====

void FUN_0035e0c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0035e0d4  FUN_0035e0d4 =====

void FUN_0035e0d4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    if ((long)param_2 < 0) {
      FUN_0035e0c0();
                    /* WARNING: Subroutine does not return */
      FUN_0031fb04("vector");
    }
    lVar1 = (param_2 - 1 >> 6) + 1;
    puVar4 = (ulong *)operator_new(lVar1 * 8);
    uVar10 = param_1[1];
    puVar5 = (ulong *)*param_1;
    uVar7 = 0;
    if (0x40 < uVar10) {
      uVar7 = uVar10 - 1 >> 6;
    }
    puVar4[uVar7] = 0;
    if ((0x3f < uVar10) || ((uVar10 & 0x3f) != 0)) {
      uVar7 = 0;
      uVar9 = 0;
      puVar11 = puVar4;
      puVar12 = puVar5;
      do {
        uVar13 = 1L << (uVar7 & 0x3f);
        if ((*puVar12 >> (uVar9 & 0x3f) & 1) == 0) {
          uVar13 = *puVar11 & (uVar13 ^ 0xffffffffffffffff);
        }
        else {
          uVar13 = *puVar11 | uVar13;
        }
        iVar8 = (int)uVar9;
        *puVar11 = uVar13;
        uVar2 = 0;
        if (iVar8 != 0x3f) {
          uVar2 = iVar8 + 1;
        }
        uVar9 = (ulong)uVar2;
        iVar6 = (int)uVar7;
        puVar12 = puVar12 + (iVar8 == 0x3f);
        uVar3 = 0;
        if (iVar6 != 0x3f) {
          uVar3 = iVar6 + 1;
        }
        uVar7 = (ulong)uVar3;
        puVar11 = puVar11 + (iVar6 == 0x3f);
      } while ((uVar2 != ((uint)uVar10 & 0x3f)) || (puVar12 != puVar5 + (uVar10 >> 6)));
    }
    *param_1 = puVar4;
    param_1[2] = lVar1;
    if (puVar5 != (ulong *)0x0) {
      operator_delete(puVar5);
      return;
    }
  }
  return;
}


// ===== 0035e1d4  FUN_0035e1d4 =====

void FUN_0035e1d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0035e1e8  FUN_0035e1e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0035e1e8(long param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
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
  
  if (*(long *)(param_1 + 0xd0) == *(long *)(param_1 + 200)) {
    puVar10 = (undefined8 *)operator_new(0x180);
    *(undefined4 *)(puVar10 + 1) = 0xffffffff;
    uVar17 = _UNK_00281c00;
    uVar16 = _DAT_00281bf8;
    *(undefined2 *)(puVar10 + 0xc) = 0xfffe;
    *(undefined4 *)(puVar10 + 0x14) = 0x3f800000;
    uVar15 = DAT_0024e658;
    *(undefined4 *)((long)puVar10 + 0xc4) = 0x3f800000;
    puVar10[0x24] = uVar17;
    puVar10[0x23] = uVar16;
    *(undefined8 *)((long)puVar10 + 0x134) = 3;
    *(undefined1 *)(puVar10 + 0x2e) = 1;
    *puVar10 = &PTR_FUN_00653960;
    *(undefined2 *)(puVar10 + 2) = 0;
    *(undefined4 *)(puVar10 + 5) = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0xd] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x11] = 0;
    *(undefined8 *)((long)puVar10 + 0xb4) = 0;
    *(undefined8 *)((long)puVar10 + 0xac) = uVar17;
    *(undefined8 *)((long)puVar10 + 0xa4) = uVar16;
    *(undefined8 *)((long)puVar10 + 0xbc) = uVar15;
    puVar10[0x1c] = 0;
    puVar10[0x1b] = uVar17;
    puVar10[0x1a] = uVar16;
    *(undefined4 *)(puVar10 + 0x1d) = 0;
    puVar10[0x1f] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x21] = 0;
    puVar10[0x20] = 0;
    puVar10[0x22] = 0;
    puVar10[0x25] = 0;
    *(undefined1 *)(puVar10 + 0x26) = 0;
    puVar10[0x29] = 0;
    puVar10[0x28] = 0;
    puVar10[0x2b] = 0;
    puVar10[0x2a] = 0;
    puVar10[0x2d] = 0;
    puVar10[0x2c] = 0;
    puVar10[0x19] = &PTR_FUN_00653ba0;
    puVar10[0x2f] = param_2;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0xd0) + -8);
    puVar10 = (undefined8 *)*puVar2;
    *(undefined8 **)(param_1 + 0xd0) = puVar2;
    puVar10[0x2f] = param_2;
    *(undefined1 *)(puVar10 + 0x2e) = 1;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2 < *(undefined8 **)(param_1 + 0xc0)) {
    puVar13 = puVar2 + 1;
    *puVar2 = puVar10;
    goto LAB_0035e40c;
  }
  puVar11 = *(undefined8 **)(param_1 + 0xb0);
  lVar12 = (long)puVar2 - (long)puVar11 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0035e434();
LAB_0035e430:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(param_1 + 0xc0) - (long)puVar11;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0035e430;
    pvVar1 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar1 + lVar12 * 8);
  puVar13 = puVar4 + 1;
  *puVar4 = puVar10;
  if ((long)puVar2 - (long)puVar11 != 0) {
    uVar6 = ((long)puVar2 - (long)puVar11) - 8;
    puVar14 = puVar2;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar2 + (-((long)puVar2 - (long)puVar11) - (long)pvVar1)))) {
      puVar8 = puVar4 + -2;
      puVar9 = puVar2 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar14 = puVar2 + -uVar7;
      uVar3 = uVar7;
      do {
        puVar2 = puVar9 + -1;
        uVar17 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar3 = uVar3 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar17;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar2 = puVar11;
      if (uVar6 == uVar7) goto LAB_0035e3f8;
    }
    do {
      puVar14 = puVar14 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar14;
    } while (puVar14 != puVar11);
    puVar2 = *(undefined8 **)(param_1 + 0xb0);
  }
LAB_0035e3f8:
  *(undefined8 **)(param_1 + 0xb0) = puVar4;
  *(undefined8 **)(param_1 + 0xb8) = puVar13;
  *(void **)(param_1 + 0xc0) = (void *)((long)pvVar1 + uVar5 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
LAB_0035e40c:
  *(undefined8 **)(param_1 + 0xb8) = puVar13;
  return puVar10;
}


// ===== 0035e434  FUN_0035e434 =====

void FUN_0035e434(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0035e448  FUN_0035e448 =====

void FUN_0035e448(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x28];
  puVar1 = PTR_vtable_0067cfb0 + 0x250;
  *param_1 = (long)(PTR_vtable_0067cfb0 + 0x10);
  param_1[0x19] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x29] = (long)pvVar2;
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


// ===== 0035e528  FUN_0035e528 =====

void FUN_0035e528(void *param_1)

{
  FUN_0035e448();
  operator_delete(param_1);
  return;
}


// ===== 0035e54c  FUN_0035e54c =====

undefined8 FUN_0035e54c(void)

{
  return 0xd;
}


// ===== 0035e554  FUN_0035e554 =====

bool FUN_0035e554(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 0035e590  FUN_0035e590 =====

undefined8 FUN_0035e590(long param_1,ushort param_2,long *param_3)

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
  
  if (param_2 < 0x17) {
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
      if (param_2 != 0xe) goto LAB_0035e634;
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
  if (param_2 == 0x81) {
    uVar9 = 0;
    uVar4 = 0;
    pbVar7 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0035e6d4;
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
LAB_0035e6d4:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x138) = (int)uVar4;
    return 1;
  }
  if (param_2 == 0x17) {
    uVar9 = 0;
    uVar4 = 0;
    pbVar7 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0035e6b8;
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
LAB_0035e6b8:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x134) = (int)uVar4;
    return 1;
  }
LAB_0035e634:
  uVar3 = FUN_0035ea44();
  return uVar3;
}


// ===== 0035e710  FUN_0035e710 =====

void FUN_0035e710(long *param_1)

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
  float fVar11;
  
  lVar2 = param_1[0x1e];
  *(undefined1 *)(param_1 + 0x26) = 1;
  if (lVar2 == 0) {
    *(long *)((long)param_1 + 0xac) = param_1[0x1b];
    *(long *)((long)param_1 + 0xa4) = param_1[0x1a];
    *(long *)((long)param_1 + 0xb4) = param_1[0x1c];
  }
  else {
    fVar8 = (float)((ulong)*(undefined8 *)((long)param_1 + 0xd4) >> 0x20);
    fVar3 = (float)*(undefined8 *)((long)param_1 + 0xd4);
    fVar4 = (float)*(undefined8 *)((long)param_1 + 0xdc);
    fVar7 = (float)*(undefined8 *)(lVar2 + 0xa4);
    fVar9 = (float)((ulong)*(undefined8 *)(lVar2 + 0xa4) >> 0x20);
    fVar11 = (float)((ulong)param_1[0x1c] >> 0x20);
    fVar5 = (float)*(undefined8 *)(lVar2 + 0xac);
    fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0xac) >> 0x20);
    fVar10 = (float)param_1[0x1c];
    uVar1 = *(undefined8 *)(lVar2 + 0xb4);
    *(ulong *)((long)param_1 + 0xac) =
         CONCAT44(fVar6 * fVar4 + fVar8 * fVar9,fVar5 * fVar4 + fVar8 * fVar7);
    *(ulong *)((long)param_1 + 0xa4) =
         CONCAT44(fVar6 * fVar3 + (float)param_1[0x1a] * fVar9,
                  fVar5 * fVar3 + (float)param_1[0x1a] * fVar7);
    *(ulong *)((long)param_1 + 0xb4) =
         CONCAT44((float)((ulong)uVar1 >> 0x20) + fVar6 * fVar11 + fVar9 * fVar10,
                  (float)uVar1 + fVar5 * fVar11 + fVar7 * fVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x0035e78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))();
  return;
}


// ===== 0035e790  FUN_0035e790 =====

undefined4 FUN_0035e790(long param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}


// ===== 0035e798  FUN_0035e798 =====

undefined4 FUN_0035e798(long param_1)

{
  return *(undefined4 *)(param_1 + 0x114);
}


// ===== 0035e7a0  FUN_0035e7a0 =====

undefined1  [16] FUN_0035e7a0(void)

{
  return ZEXT816(0);
}


// ===== 0035e7b4  FUN_0035e7b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0035e7b4(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    return ZEXT416(*(uint *)(param_1 + 0x128));
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x130) = 0;
  uVar3 = _UNK_00281c00;
  uVar14 = _DAT_00281bf8;
  if (lVar4 != 0) {
    fVar13 = *(float *)(lVar4 + 0xa4);
    fVar9 = *(float *)(lVar4 + 0xb0);
    fVar5 = (float)*(undefined8 *)(lVar4 + 0xa8);
    fVar15 = -fVar5;
    fVar8 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa8) >> 0x20);
    fVar16 = (float)NEON_fmadd(fVar13,fVar9,fVar15 * fVar8);
    if (fVar16 != 0.0) {
      fVar16 = 1.0 / fVar16;
      fVar17 = (float)*(undefined8 *)(lVar4 + 0xb4);
      fVar18 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb4) >> 0x20);
      fVar10 = fVar9 * fVar16;
      fVar15 = fVar15 * fVar16;
      fVar11 = -fVar8 * fVar16;
      fVar12 = fVar13 * fVar16;
      uVar14 = NEON_rev64(CONCAT44(fVar18 * -fVar13,fVar17 * -fVar9),4);
      fVar9 = (float)*(undefined8 *)(param_1 + 0xa4);
      auVar6._4_4_ = fVar15;
      auVar6._0_4_ = fVar10;
      auVar6._8_4_ = fVar11;
      auVar6._12_4_ = fVar12;
      auVar2._4_4_ = fVar15;
      auVar2._0_4_ = fVar10;
      auVar2._8_4_ = fVar11;
      auVar2._12_4_ = fVar12;
      auVar6 = NEON_ext(auVar6,auVar2,8,1);
      pauVar1 = (undefined1 (*) [12])(param_1 + 0xa8);
      fVar13 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
      uVar14 = NEON_rev64(CONCAT44(fVar16 * ((float)((ulong)uVar14 >> 0x20) + fVar18 * fVar8),
                                   fVar16 * ((float)uVar14 + fVar17 * fVar5)),4);
      fVar5 = (float)*(undefined8 *)(param_1 + 0xb4);
      auVar7._0_8_ = CONCAT44((float)((ulong)uVar14 >> 0x20) +
                              auVar6._4_4_ * fVar19 + fVar15 * fVar5,
                              (float)uVar14 + auVar6._0_4_ * fVar19 + fVar10 * fVar5);
      auVar7._8_8_ = 0;
      *(ulong *)(param_1 + 0x120) =
           CONCAT44(fVar12 * SUB124(*pauVar1,8) + fVar13 * fVar15,
                    fVar11 * SUB124(*pauVar1,8) + fVar13 * fVar10);
      *(ulong *)(param_1 + 0x118) =
           CONCAT44(fVar12 * SUB124(*pauVar1,0) + fVar9 * fVar15,
                    fVar11 * SUB124(*pauVar1,0) + fVar9 * fVar10);
      *(ulong *)(param_1 + 0x128) = auVar7._0_8_;
      return auVar7;
    }
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x118) = uVar14;
  return ZEXT816(0);
}


// ===== 0035e8a0  FUN_0035e8a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0035e8a0(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  float fVar6;
  undefined8 uVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    return *(float *)(param_1 + 300);
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x130) = 0;
  uVar3 = _UNK_00281c00;
  uVar5 = _DAT_00281bf8;
  if (lVar4 != 0) {
    fVar9 = *(float *)(lVar4 + 0xa4);
    fVar7 = *(float *)(lVar4 + 0xb0);
    fVar13 = (float)*(undefined8 *)(lVar4 + 0xa8);
    fVar11 = -fVar13;
    fVar6 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa8) >> 0x20);
    fVar14 = (float)NEON_fmadd(fVar9,fVar7,fVar11 * fVar6);
    if (fVar14 != 0.0) {
      fVar14 = 1.0 / fVar14;
      fVar16 = (float)*(undefined8 *)(lVar4 + 0xb4);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb4) >> 0x20);
      uVar5 = NEON_rev64(CONCAT44(fVar17 * -fVar9,fVar16 * -fVar7),4);
      fVar7 = fVar7 * fVar14;
      fVar11 = fVar11 * fVar14;
      fVar8 = -fVar6 * fVar14;
      fVar9 = fVar9 * fVar14;
      auVar12._4_4_ = fVar11;
      auVar12._0_4_ = fVar7;
      auVar12._8_4_ = fVar8;
      auVar12._12_4_ = fVar9;
      auVar2._4_4_ = fVar11;
      auVar2._0_4_ = fVar7;
      auVar2._8_4_ = fVar8;
      auVar2._12_4_ = fVar9;
      auVar12 = NEON_ext(auVar12,auVar2,8,1);
      pauVar1 = (undefined1 (*) [12])(param_1 + 0xa8);
      fVar18 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar10 = (float)*(undefined8 *)(param_1 + 0xa4);
      fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
      uVar5 = NEON_rev64(CONCAT44(fVar14 * ((float)((ulong)uVar5 >> 0x20) + fVar17 * fVar6),
                                  fVar14 * ((float)uVar5 + fVar16 * fVar13)),4);
      fVar6 = (float)*(undefined8 *)(param_1 + 0xb4);
      fVar13 = (float)((ulong)uVar5 >> 0x20) + auVar12._4_4_ * fVar15 + fVar11 * fVar6;
      *(ulong *)(param_1 + 0x128) =
           CONCAT44(fVar13,(float)uVar5 + auVar12._0_4_ * fVar15 + fVar7 * fVar6);
      *(ulong *)(param_1 + 0x120) =
           CONCAT44(fVar9 * SUB124(*pauVar1,8) + fVar18 * fVar11,
                    fVar8 * SUB124(*pauVar1,8) + fVar18 * fVar7);
      *(ulong *)(param_1 + 0x118) =
           CONCAT44(fVar9 * SUB124(*pauVar1,0) + fVar10 * fVar11,
                    fVar8 * SUB124(*pauVar1,0) + fVar10 * fVar7);
      return fVar13;
    }
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x118) = uVar5;
  return 0.0;
}


// ===== 0035e990  FUN_0035e990 =====

undefined1  [16] FUN_0035e990(void)

{
  return ZEXT816(0);
}


// ===== 0035e998  FUN_0035e998 =====

undefined1  [16] FUN_0035e998(void)

{
  return ZEXT816(0);
}


// ===== 0035e9a0  FUN_0035e9a0 =====

void FUN_0035e9a0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0035e9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x178) + 0x10))
            (*(long **)(param_1 + 0x178),param_2,*(undefined1 *)(param_1 + 0x170));
  return;
}


// ===== 0035e9b8  FUN_0035e9b8 =====

undefined8 FUN_0035e9b8(void)

{
  return 0;
}


// ===== 0035e9c0  FUN_0035e9c0 =====

undefined8 FUN_0035e9c0(void)

{
  return 0;
}


// ===== 0035e9c8  FUN_0035e9c8 =====

undefined8 FUN_0035e9c8(void)

{
  return 0;
}


// ===== 0035e9d0  FUN_0035e9d0 =====

undefined8 FUN_0035e9d0(void)

{
  return 1;
}


// ===== 0035e9d8  FUN_0035e9d8 =====

void FUN_0035e9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035e9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x178) + 0x20))();
  return;
}


// ===== 0035e9e8  FUN_0035e9e8 =====

uint FUN_0035e9e8(long param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x178) + 0x20))();
  return (uVar1 ^ 0xffffffff) & 1;
}


// ===== 0035ea10  FUN_0035ea10 =====

void FUN_0035ea10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035ea1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x178) + 0x28))();
  return;
}


// ===== 0035ea20  FUN_0035ea20 =====

undefined8 FUN_0035ea20(void)

{
  return 0;
}


// ===== 0035ea28  FUN_0035ea28 =====

void FUN_0035ea28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035ea34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x178) + 0x18))();
  return;
}


// ===== 0035ea38  FUN_0035ea38 =====

undefined1  [16] FUN_0035ea38(void)

{
  return ZEXT816(0);
}


// ===== 0035ea44  FUN_0035ea44 =====

undefined8 FUN_0035ea44(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x10) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035ebf8;
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
LAB_0035ebf8:
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
        if (param_2 == 0xf) {
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
        goto LAB_0035eca0;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar12 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar12) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035ec30;
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
LAB_0035ec30:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
    uVar5 = 1;
  }
  else if (param_2 == 0x10) {
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
  }
  else if (param_2 == 0x11) {
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
    *(undefined4 *)(param_1 + 0xc4) = uVar15;
  }
  else if (param_2 == 0x12) {
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
LAB_0035eca0:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035ecc8  FUN_0035ecc8 =====

undefined8 FUN_0035ecc8(long param_1,ushort param_2,long *param_3)

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
  
  if (param_2 < 0x81) {
    if (param_2 < 0xd) {
      if (param_2 == 7) {
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
        *(undefined4 *)(param_1 + 0x174) = uVar13;
      }
      else {
        if (param_2 != 8) goto LAB_0035ef4c;
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
        *(undefined4 *)(param_1 + 0x178) = uVar13;
      }
    }
    else if (param_2 == 0xd) {
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
      if (param_2 != 0xe) {
        if (param_2 == 0x17) {
          uVar12 = 0;
          uVar6 = 0;
          pbVar10 = (byte *)param_3[2];
          do {
            if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
              *(undefined1 *)(param_3 + 3) = 1;
              goto LAB_0035ef90;
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
LAB_0035ef90:
            uVar6 = 0;
            param_3[2] = *param_3 + param_3[1];
          }
          *(int *)(param_1 + 0x134) = (int)uVar6;
          return 1;
        }
        goto LAB_0035ef4c;
      }
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
  }
  else {
    if (param_2 < 0x1ee) {
      if (param_2 == 0x81) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_0035ef58;
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
LAB_0035ef58:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x138) = (int)uVar6;
        return 1;
      }
      if (param_2 == 0xc4) {
        lVar1 = *param_3;
        lVar2 = param_3[1];
        pcVar7 = (char *)param_3[2];
        if (0 < (lVar1 + lVar2) - (long)pcVar7) {
          param_3[2] = (long)(pcVar7 + 1);
          *(bool *)(param_1 + 0x171) = *pcVar7 == '\x01';
          return 1;
        }
        *(undefined1 *)(param_1 + 0x171) = 0;
        param_3[2] = lVar1 + lVar2;
        *(undefined1 *)(param_3 + 3) = 1;
        return 1;
      }
LAB_0035ef4c:
      uVar5 = FUN_0035ea44();
      return uVar5;
    }
    if (param_2 == 0x1ee) {
      uVar12 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0035ef74;
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
LAB_0035ef74:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x17c) = (int)uVar6;
      return 1;
    }
    if (param_2 == 0x2c2) {
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
      if (param_2 != 0x2c3) goto LAB_0035ef4c;
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
  }
  param_3[2] = (long)puVar8;
  return 1;
}


// ===== 0035f024  rive::Artboard::~Artboard =====

/* rive::Artboard::~Artboard() */

void __thiscall rive::Artboard::~Artboard(Artboard *this)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  AudioEngine *this_00;
  bool bVar4;
  int iVar5;
  Artboard *pAVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long *plVar12;
  void *pvVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  Artboard *local_90;
  long ***ppplStack_88;
  undefined8 **local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long **local_60;
  long *local_58;
  undefined8 local_50;
  long local_48;
  
  puVar3 = PTR_vtable_0067cf98;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_vtable_0067cf98 + 0x398;
  *(undefined **)this = PTR_vtable_0067cf98 + 0x10;
  *(undefined **)(this + 200) = puVar1;
  *(undefined **)(this + 0x188) = puVar3 + 0x3c0;
  *(undefined **)(this + 400) = puVar3 + 0x3e0;
  *(undefined **)(this + 0x1b8) = puVar3 + 0x430;
  *(undefined **)(this + 0x1c0) = puVar3 + 0x448;
  *(undefined **)(this + 0x1c8) = puVar3 + 0x470;
  this_00 = DAT_00686e98;
  *(undefined **)(this + 0x998) = puVar3 + 0x4c8;
  *(undefined **)(this + 0x9a0) = puVar3 + 0x4f0;
  *(undefined **)(this + 0x9a8) = puVar3 + 0x508;
  *(undefined **)(this + 0x9b0) = puVar3 + 0x520;
  if (this_00 != (AudioEngine *)0x0) {
    FUN_00340fb0(1,this_00);
    AudioEngine::stop(this_00,this);
  }
  clearDataContext(this);
  puVar14 = *(undefined8 **)(this + 0x9c0);
  for (puVar10 = *(undefined8 **)(this + 0x9b8); puVar10 != puVar14; puVar10 = puVar10 + 1) {
    (**(code **)(*(long *)*puVar10 + 0x80))();
  }
  puVar10 = *(undefined8 **)(this + 0xb48);
  puVar14 = *(undefined8 **)(this + 0xb50);
  *(undefined8 *)(this + 0xa48) = 0;
  for (; puVar10 != puVar14; puVar10 = puVar10 + 1) {
    (**(code **)(*(long *)*puVar10 + 0x28))();
  }
  ppplStack_88 = &local_60;
  puVar10 = *(undefined8 **)(this + 0xa58);
  puVar14 = *(undefined8 **)(this + 0xa60);
  local_60 = &local_58;
  local_58 = (long *)0x0;
  local_50 = 0;
  local_80 = &local_78;
  local_70 = 0;
  local_68 = 0;
  local_78 = &local_70;
  local_90 = this;
  for (; puVar10 != puVar14; puVar10 = puVar10 + 1) {
    FUN_0035f7d0(&local_90,*puVar10);
  }
  puVar14 = *(undefined8 **)(this + 0xa78);
  for (puVar10 = *(undefined8 **)(this + 0xa70); puVar10 != puVar14; puVar10 = puVar10 + 1) {
    FUN_0035f7d0(&local_90,*puVar10);
  }
  puVar10 = *(undefined8 **)(this + 0xa58);
  puVar14 = *(undefined8 **)(this + 0xa60);
  do {
    if (puVar10 == puVar14) {
      puVar11 = *(ulong **)(this + 0xa70);
      puVar15 = *(ulong **)(this + 0xa78);
      do {
        puVar10 = local_78;
        if (puVar11 == puVar15) {
          while (puVar10 != &local_70) {
            plVar12 = (long *)puVar10[4];
            iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0xa4);
            if (iVar5 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12);
            }
            puVar14 = (undefined8 *)puVar10[1];
            puVar16 = puVar10;
            if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
              do {
                puVar10 = (undefined8 *)puVar16[2];
                bVar4 = (undefined8 *)*puVar10 != puVar16;
                puVar16 = puVar10;
              } while (bVar4);
            }
            else {
              do {
                puVar10 = puVar14;
                puVar14 = (undefined8 *)*puVar10;
              } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
            }
          }
          plVar7 = *(long **)(this + 0x9c0);
          for (plVar12 = *(long **)(this + 0x9b8); plVar12 != plVar7; plVar12 = plVar12 + 1) {
            if ((long *)*plVar12 != (long *)0x0) {
              (**(code **)(*(long *)*plVar12 + 8))();
            }
          }
          if (this[0xbe8] == (Artboard)0x0) {
            plVar7 = *(long **)(this + 0xa90);
            for (plVar12 = *(long **)(this + 0xa88); plVar12 != plVar7; plVar12 = plVar12 + 1) {
              if ((long *)*plVar12 != (long *)0x0) {
                (**(code **)(*(long *)*plVar12 + 8))();
              }
            }
            plVar7 = *(long **)(this + 0xaa8);
            for (plVar12 = *(long **)(this + 0xaa0); plVar12 != plVar7; plVar12 = plVar12 + 1) {
              if ((long *)*plVar12 != (long *)0x0) {
                (**(code **)(*(long *)*plVar12 + 8))();
              }
            }
          }
          if (*(long *)(this + 0xc08) != 0) {
            puVar10 = (undefined8 *)*(void **)(this + 0xc00);
            while (puVar10 != (undefined8 *)0x0) {
              pvVar13 = (void *)*puVar10;
              operator_delete(puVar10);
              puVar10 = (undefined8 *)pvVar13;
            }
            lVar8 = *(long *)(this + 0xbf8);
            *(undefined8 *)(this + 0xc00) = 0;
            if (lVar8 != 0) {
              lVar9 = 0;
              do {
                *(undefined8 *)(*(long *)(this + 0xbf0) + lVar9 * 8) = 0;
                lVar9 = lVar9 + 1;
              } while (lVar8 != lVar9);
            }
            *(undefined8 *)(this + 0xc08) = 0;
          }
          FUN_0035f9a0(local_70);
          FUN_0035f9dc(local_58);
          if ((this_00 != (AudioEngine *)0x0) &&
             (iVar5 = FUN_00340fe0(0xffffffff,this_00), iVar5 == 1)) {
            AudioEngine::~AudioEngine(this_00);
            operator_delete(this_00);
          }
          if (*(long *)(this + 0xc50) != 0) {
            FUN_0035fa18();
          }
          plVar12 = *(long **)(this + 0xc20);
          *(undefined8 *)(this + 0xc20) = 0;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 8))();
          }
          puVar10 = (undefined8 *)*(void **)(this + 0xc00);
          while (puVar10 != (undefined8 *)0x0) {
            pvVar13 = (void *)*puVar10;
            operator_delete(puVar10);
            puVar10 = (undefined8 *)pvVar13;
          }
          pvVar13 = *(void **)(this + 0xbf0);
          *(undefined8 *)(this + 0xbf0) = 0;
          if (pvVar13 != (void *)0x0) {
            operator_delete(pvVar13);
          }
          lVar8 = *(long *)(this + 0xbc0);
          if ((lVar8 != 0) && (iVar5 = FUN_00340fe0(0xffffffff,lVar8), iVar5 == 1)) {
            FUN_003453a8(lVar8);
          }
          pvVar13 = *(void **)(this + 0xba8);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xbb0) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xb90);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xb98) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xb78);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xb80) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xb60);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xb68) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xb48);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xb50) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xb30);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xb38) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xb18);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xb20) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xb00);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xb08) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xae8);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xaf0) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xad0);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xad8) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xab8);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xac0) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xaa0);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xaa8) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xa88);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xa90) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xa70);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xa78) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xa58);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xa60) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xa30);
          *(undefined **)(this + 0x9b0) = PTR_vtable_0067cef0 + 0x10;
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xa38) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xa18);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xa20) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0xa00);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0xa08) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0x9e8);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0x9f0) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0x9d0);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0x9d8) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar13 = *(void **)(this + 0x9b8);
          if (pvVar13 != (void *)0x0) {
            *(void **)(this + 0x9c0) = pvVar13;
            operator_delete(pvVar13);
          }
          LayoutComponent::~LayoutComponent((LayoutComponent *)this);
          if (*(long *)(lVar2 + 0x28) == local_48) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        plVar7 = (long *)*puVar11;
        plVar12 = local_58;
        if (plVar7 != (long *)0x0) {
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if ((long *)plVar12[4] <= plVar7) {
              if (plVar7 <= (long *)plVar12[4]) goto LAB_0035f208;
              plVar12 = plVar12 + 1;
            }
          }
          (**(code **)(*plVar7 + 8))();
        }
LAB_0035f208:
        puVar11 = puVar11 + 1;
      } while( true );
    }
    pAVar6 = (Artboard *)*puVar10;
    if ((pAVar6 != (Artboard *)0x0) && (plVar12 = local_58, pAVar6 != this)) {
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if ((Artboard *)plVar12[4] <= pAVar6) {
          if (pAVar6 <= (Artboard *)plVar12[4]) goto LAB_0035f1a8;
          plVar12 = plVar12 + 1;
        }
      }
      (**(code **)(*(long *)pAVar6 + 8))();
    }
LAB_0035f1a8:
    puVar10 = puVar10 + 1;
  } while( true );
}


// ===== 0035f5d4  rive::Artboard::clearDataContext =====

/* WARNING: Removing unreachable block (ram,0x0035f6cc) */
/* rive::Artboard::clearDataContext() */

void __thiscall rive::Artboard::clearDataContext(Artboard *this)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (*(long *)(this + 0xbc0) != 0) {
    plVar10 = *(long **)(*(long *)(this + 0xbc0) + 0x10);
    if (plVar10 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar10 + 0xa4);
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4);
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      plVar10 = *(long **)(*(long *)(this + 0xbc0) + 0x10);
      if (plVar10 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar10 + 0xa4);
      }
      puVar13 = (undefined8 *)plVar10[0x1c];
      puVar12 = (undefined8 *)plVar10[0x1b];
      puVar3 = puVar12;
      for (; (puVar12 != puVar13 && (puVar3 = puVar12, (Artboard *)*puVar12 != this + 0x9b0));
          puVar12 = puVar12 + 1) {
        puVar3 = puVar13;
      }
      if ((puVar3 != puVar13) && (puVar12 = puVar3 + 1, puVar4 = puVar3, puVar12 != puVar13)) {
        do {
          puVar3 = puVar4;
          if ((Artboard *)*puVar12 != this + 0x9b0) {
            puVar3 = puVar4 + 1;
            *puVar4 = (Artboard *)*puVar12;
          }
          puVar12 = puVar12 + 1;
          puVar4 = puVar3;
        } while (puVar12 != puVar13);
        puVar13 = (undefined8 *)plVar10[0x1c];
      }
      if (puVar3 != puVar13) {
        plVar10[0x1c] = (long)puVar3;
      }
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4);
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
    lVar11 = *(long *)(this + 0xbc0);
    *(undefined8 *)(this + 0xbc0) = 0;
    if ((lVar11 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar11), iVar2 == 1)) {
      FUN_003453a8(lVar11);
    }
  }
  puVar13 = *(undefined8 **)(this + 0xb50);
  for (puVar12 = *(undefined8 **)(this + 0xb48); puVar12 != puVar13; puVar12 = puVar12 + 1) {
    (**(code **)(*(long *)*puVar12 + 0x20))();
  }
  plVar10 = *(long **)(this + 0xb90);
  plVar5 = *(long **)(this + 0xb98);
  if (plVar10 != plVar5) {
    uVar6 = (long)plVar5 + (-8 - (long)plVar10);
    if (7 < uVar6) {
      plVar8 = plVar10 + 1;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffe;
      uVar9 = uVar7;
      do {
        plVar1 = plVar8 + -1;
        lVar11 = *plVar8;
        uVar9 = uVar9 - 2;
        plVar8 = plVar8 + 2;
        *(undefined1 *)(*plVar1 + 0x71) = 0;
        *(undefined1 *)(lVar11 + 0x71) = 0;
      } while (uVar9 != 0);
      if (uVar6 == uVar7) {
        return;
      }
      plVar10 = plVar10 + uVar7;
    }
    do {
      plVar8 = plVar10 + 1;
      *(undefined1 *)(*plVar10 + 0x71) = 0;
      plVar10 = plVar8;
    } while (plVar8 != plVar5);
  }
  return;
}


// ===== 0035f7d0  FUN_0035f7d0 =====

void FUN_0035f7d0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if ((long *)*param_1 == param_2) {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x1b5);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x1ac);
    if ((uVar1 & 1) == 0) {
      return;
    }
    plVar4 = (long *)param_1[1];
    plVar3 = (long *)plVar4[1];
    plVar5 = plVar4 + 1;
    while (plVar6 = plVar5, plVar3 != (long *)0x0) {
      while (plVar6 = plVar3, (long *)plVar6[4] <= param_2) {
        if (param_2 <= (long *)plVar6[4]) {
          return;
        }
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) goto LAB_0035f940;
      }
      plVar5 = plVar6;
      plVar3 = (long *)*plVar6;
    }
  }
  else {
    plVar4 = (long *)param_1[1];
    plVar5 = plVar4 + 1;
    plVar3 = (long *)*plVar5;
    while (plVar6 = plVar5, plVar3 != (long *)0x0) {
      while (plVar5 = plVar3, (long *)plVar5[4] <= param_2) {
        if (param_2 <= (long *)plVar5[4]) goto LAB_0035f8f8;
        plVar3 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar6 = plVar5 + 1;
          goto LAB_0035f858;
        }
      }
      plVar3 = (long *)*plVar5;
    }
LAB_0035f858:
    puVar2 = (undefined8 *)operator_new(0x28);
    puVar2[4] = param_2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = plVar5;
    *plVar6 = (long)puVar2;
    if (*(long *)*plVar4 != 0) {
      *plVar4 = *(long *)*plVar4;
      puVar2 = (undefined8 *)*plVar6;
    }
    FUN_00356b70(plVar4[1],puVar2);
    plVar4[2] = plVar4[2] + 1;
LAB_0035f8f8:
    if (param_2[6] != 0) {
      return;
    }
    plVar4 = (long *)param_1[2];
    plVar3 = (long *)plVar4[1];
    plVar5 = plVar4 + 1;
    while (plVar6 = plVar5, plVar3 != (long *)0x0) {
      while (plVar6 = plVar3, (long *)plVar6[4] <= param_2) {
        if (param_2 <= (long *)plVar6[4]) {
          return;
        }
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) goto LAB_0035f940;
      }
      plVar5 = plVar6;
      plVar3 = (long *)*plVar6;
    }
  }
LAB_0035f944:
  puVar2 = (undefined8 *)operator_new(0x28);
  puVar2[4] = param_2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar6;
  *plVar5 = (long)puVar2;
  if (*(long *)*plVar4 != 0) {
    *plVar4 = *(long *)*plVar4;
    puVar2 = (undefined8 *)*plVar5;
  }
  FUN_00356b70(plVar4[1],puVar2);
  plVar4[2] = plVar4[2] + 1;
  return;
LAB_0035f940:
  plVar5 = plVar6 + 1;
  goto LAB_0035f944;
}


// ===== 0035f9a0  FUN_0035f9a0 =====

void FUN_0035f9a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0035f9a0(*param_1);
    FUN_0035f9a0(param_1[1]);
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 0035f9dc  FUN_0035f9dc =====

void FUN_0035f9dc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0035f9dc(*param_1);
    FUN_0035f9dc(param_1[1]);
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 0035fa18  FUN_0035fa18 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0035fa18(void *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  iVar2 = FUN_00340fe0(0xffffffff,param_1);
  if (iVar2 == 1) {
    if ((*(byte *)((long)param_1 + 0x60) & 1) == 0) {
      bVar1 = *(byte *)((long)param_1 + 0x48);
    }
    else {
      operator_delete(*(void **)((long)param_1 + 0x70));
      bVar1 = *(byte *)((long)param_1 + 0x48);
    }
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)((long)param_1 + 0x30);
    }
    else {
      operator_delete(*(void **)((long)param_1 + 0x58));
      bVar1 = *(byte *)((long)param_1 + 0x30);
    }
    if ((bVar1 & 1) == 0) {
      plVar4 = *(long **)((long)param_1 + 0x10);
    }
    else {
      operator_delete(*(void **)((long)param_1 + 0x40));
      plVar4 = *(long **)((long)param_1 + 0x10);
    }
    if (plVar4 != (long *)0x0) {
      plVar5 = *(long **)((long)param_1 + 0x18);
      plVar3 = plVar4;
      if (plVar5 != plVar4) {
        do {
          plVar5 = plVar5 + -1;
          if (*plVar5 != 0) {
            FUN_0035fa18();
          }
        } while (plVar5 != plVar4);
        plVar3 = *(long **)((long)param_1 + 0x10);
      }
      *(long **)((long)param_1 + 0x18) = plVar4;
      operator_delete(plVar3);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 0035faf0  rive::Artboard::unbind =====

/* rive::Artboard::unbind() */

void __thiscall rive::Artboard::unbind(Artboard *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  clearDataContext(this);
  puVar2 = *(undefined8 **)(this + 0x9c0);
  for (puVar1 = *(undefined8 **)(this + 0x9b8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x80))();
  }
  puVar1 = *(undefined8 **)(this + 0xb48);
  puVar2 = *(undefined8 **)(this + 0xb50);
  *(undefined8 *)(this + 0xa48) = 0;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x28))();
  }
  return;
}


// ===== 0035fb6c  rive::Artboard::validateObjects =====

/* rive::Artboard::validateObjects() */

undefined8 __thiscall rive::Artboard::validateObjects(Artboard *this)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  void *__s;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  size_t __n;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar6 = *(long *)(this + 0xa60) - *(long *)(this + 0xa58);
  uVar14 = (long)uVar6 >> 3;
  if (uVar6 == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((long)uVar14 < 0) {
      FUN_0035e0c0();
                    /* WARNING: Subroutine does not return */
      FUN_0031fb04("vector");
    }
    uVar12 = uVar14 - 1 >> 6;
    __s = operator_new(uVar12 * 8 + 8);
    uVar7 = 0;
    if (0x40 < uVar14) {
      uVar7 = uVar12;
    }
    __n = (uVar14 >> 6) * 8;
    *(undefined8 *)((long)__s + uVar7 * 8) = 0;
    if (0x3f < uVar14) {
      memset(__s,0,__n);
    }
    uVar6 = uVar6 >> 3 & 0x3f;
    if (uVar6 != 0) {
      *(ulong *)((long)__s + __n) =
           *(ulong *)((long)__s + __n) &
           (0xffffffffffffffffU >> (-uVar6 & 0x3f) ^ 0xffffffffffffffff);
    }
  }
  iVar19 = 0;
  while (1 < uVar14) {
    bVar1 = false;
    uVar6 = 1;
    do {
      while (plVar4 = *(long **)(*(long *)(this + 0xa58) + uVar6 * 8), plVar4 == (long *)0x0) {
LAB_0035fc50:
        uVar6 = uVar6 + 1;
        if (uVar14 == uVar6) {
          if (!bVar1) goto LAB_0035fe38;
          goto LAB_0035fcd0;
        }
      }
      uVar15 = uVar6 >> 6;
      uVar12 = 1L << (uVar6 & 0x3f);
      uVar7 = *(ulong *)((long)__s + uVar15 * 8);
      bVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,this + 0x998);
      if (((uVar7 & uVar12) != 0) == (bool)(bVar3 & 1)) goto LAB_0035fc50;
      if ((bVar3 & 1) == 0) {
        uVar12 = *(ulong *)((long)__s + uVar15 * 8) & (uVar12 ^ 0xffffffffffffffff);
      }
      else {
        uVar12 = *(ulong *)((long)__s + uVar15 * 8) | uVar12;
      }
      bVar1 = true;
      *(ulong *)((long)__s + uVar15 * 8) = uVar12;
      bVar2 = uVar14 - 1 != uVar6;
      uVar6 = uVar6 + 1;
    } while (bVar2);
LAB_0035fcd0:
    uVar6 = 1;
    do {
      if ((*(ulong *)((long)__s + (uVar6 >> 3 & 0x1ffffffffffffff8)) >> (uVar6 & 0x3f) & 1) == 0) {
        puVar17 = *(undefined8 **)(this + 0xa78);
        lVar21 = *(long *)(this + 0xa58);
        if (puVar17 < *(undefined8 **)(this + 0xa80)) {
          puVar20 = puVar17 + 1;
          *puVar17 = *(undefined8 *)(lVar21 + uVar6 * 8);
        }
        else {
          puVar13 = *(undefined8 **)(this + 0xa70);
          lVar16 = (long)puVar17 - (long)puVar13 >> 3;
          uVar7 = lVar16 + 1;
          if (uVar7 >> 0x3d != 0) {
            FUN_0035fe74();
LAB_0035fe6c:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar15 = (long)*(undefined8 **)(this + 0xa80) - (long)puVar13;
          uVar12 = (long)uVar15 >> 2;
          if (uVar12 <= uVar7) {
            uVar12 = uVar7;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar12 = 0x1fffffffffffffff;
          }
          if (uVar12 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            if (uVar12 >> 0x3d != 0) goto LAB_0035fe6c;
            pvVar5 = operator_new(uVar12 << 3);
          }
          puVar8 = (undefined8 *)((long)pvVar5 + lVar16 * 8);
          puVar20 = puVar8 + 1;
          *puVar8 = *(undefined8 *)(lVar21 + uVar6 * 8);
          if ((long)puVar17 - (long)puVar13 != 0) {
            uVar7 = ((long)puVar17 - (long)puVar13) - 8;
            puVar18 = puVar17;
            if ((0x37 < uVar7) &&
               (0x1f < (ulong)((long)puVar17 + (-((long)puVar17 - (long)puVar13) - (long)pvVar5))))
            {
              puVar10 = puVar8 + -2;
              puVar11 = puVar17 + -2;
              uVar7 = (uVar7 >> 3) + 1;
              uVar9 = uVar7 & 0x3ffffffffffffffc;
              puVar18 = puVar17 + -uVar9;
              uVar15 = uVar9;
              do {
                puVar17 = puVar11 + -1;
                uVar24 = puVar11[-2];
                uVar23 = puVar11[1];
                uVar22 = *puVar11;
                uVar15 = uVar15 - 4;
                puVar11 = puVar11 + -4;
                puVar10[-1] = *puVar17;
                puVar10[-2] = uVar24;
                puVar10[1] = uVar23;
                *puVar10 = uVar22;
                puVar10 = puVar10 + -4;
              } while (uVar15 != 0);
              puVar8 = puVar8 + -uVar9;
              puVar17 = puVar13;
              if (uVar7 == uVar9) goto LAB_0035fe18;
            }
            do {
              puVar18 = puVar18 + -1;
              puVar8 = puVar8 + -1;
              *puVar8 = *puVar18;
            } while (puVar18 != puVar13);
            puVar17 = *(undefined8 **)(this + 0xa70);
          }
LAB_0035fe18:
          *(undefined8 **)(this + 0xa70) = puVar8;
          *(undefined8 **)(this + 0xa78) = puVar20;
          *(void **)(this + 0xa80) = (void *)((long)pvVar5 + uVar12 * 8);
          if (puVar17 != (undefined8 *)0x0) {
            operator_delete(puVar17);
          }
        }
        *(undefined8 **)(this + 0xa78) = puVar20;
        *(undefined8 *)(*(long *)(this + 0xa58) + uVar6 * 8) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar14);
    iVar19 = iVar19 + 1;
    if (iVar19 == 100) break;
  }
LAB_0035fe38:
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  return 1;
}


// ===== 0035fe74  FUN_0035fe74 =====

void FUN_0035fe74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


