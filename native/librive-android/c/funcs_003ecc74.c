// ===== 003ecc74  FUN_003ecc74 =====

void FUN_003ecc74(undefined8 *param_1)

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


// ===== 003ecce4  FUN_003ecce4 =====

void FUN_003ecce4(float param_1,long param_2,KeyedCallbackReporter *param_3)

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
      if (*(int *)(*(long *)(lVar2 + 0x40) + 0x34) == 0) goto LAB_003ecd50;
LAB_003ecd14:
      rive::LinearAnimationInstance::advance((LinearAnimationInstance *)(lVar2 + 8),param_1,param_3)
      ;
    }
    else {
      if (*(int *)(lVar2 + 100) != 0) goto LAB_003ecd14;
LAB_003ecd50:
      lVar4 = *(long *)(lVar2 + 0x40);
      fVar5 = *(float *)(lVar2 + 0x5c) * *(float *)(lVar4 + 0x30);
      if (fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)) {
        puVar1 = (undefined4 *)(lVar4 + 0x2c);
        if (*(char *)(lVar4 + 0x40) != '\0') {
          puVar1 = (undefined4 *)(lVar4 + 0x3c);
        }
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x28));
        fVar6 = (float)NEON_ucvtf(*puVar1);
        if (*(float *)(lVar2 + 0x48) < fVar6 / fVar7) goto LAB_003ecd14;
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
        if (fVar6 != fVar5 && fVar6 < fVar5 == (NAN(fVar6) || NAN(fVar5))) goto LAB_003ecd14;
      }
    }
    lVar2 = lVar2 + 0x90;
  } while( true );
}


// ===== 003ecde8  FUN_003ecde8 =====

void FUN_003ecde8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003ecdfc  rive::ListenerViewModelChange::~ListenerViewModelChange =====

/* rive::ListenerViewModelChange::~ListenerViewModelChange() */

void __thiscall
rive::ListenerViewModelChange::~ListenerViewModelChange(ListenerViewModelChange *this)

{
  *(undefined **)this = PTR_vtable_0067ce30 + 0x10;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


// ===== 003ece40  rive::ListenerViewModelChange::~ListenerViewModelChange =====

/* rive::ListenerViewModelChange::~ListenerViewModelChange() */

void __thiscall
rive::ListenerViewModelChange::~ListenerViewModelChange(ListenerViewModelChange *this)

{
  ~ListenerViewModelChange(this);
  operator_delete(this);
  return;
}


// ===== 003ece64  FUN_003ece64 =====

undefined8 FUN_003ece64(void)

{
  return 0x1e7;
}


// ===== 003ece6c  FUN_003ece6c =====

bool FUN_003ece6c(undefined8 param_1,short param_2)

{
  return param_2 == 0x1e7 || param_2 == 0x7d;
}


// ===== 003ece84  rive::ListenerViewModelChange::import =====

/* rive::ListenerViewModelChange::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ListenerViewModelChange::import(ListenerViewModelChange *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar11 = NEON_cnt(uVar4,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar4 - 1) & 9;
    }
    else {
      uVar7 = 9;
      if (uVar4 < 10) {
        uVar1 = (uint)uVar4 & 0xff;
        uVar2 = 0;
        if ((uVar4 & 0xff) != 0) {
          uVar2 = 9 / uVar1;
        }
        uVar7 = (ulong)(9 - uVar2 * uVar1);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 9) {
          if ((short)plVar8[2] == 9) {
            lVar5 = plVar8[3];
            if (lVar5 == 0) {
              return 1;
            }
            uVar11 = *(undefined8 *)(lVar5 + 8);
            *(undefined8 *)(lVar5 + 8) = 0;
            *(undefined8 *)(this + 0x10) = uVar11;
            uVar11 = ListenerAction::import((ListenerAction *)this,param_1);
            return uVar11;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar3 * uVar4;
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


// ===== 003ecf54  rive::ListenerViewModelChange::perform =====

/* rive::ListenerViewModelChange::perform(rive::StateMachineInstance*, rive::ListenerInvocation
   const&) const */

void rive::ListenerViewModelChange::perform
               (StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  
  uVar5 = *(ulong *)(param_2 + 0x200);
  if (uVar5 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    uVar16 = NEON_cnt(uVar5,1);
    uVar7 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    uVar7 = (uVar6 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar9 = uVar5 - 1 & uVar7;
    }
    else {
      uVar9 = uVar7;
      if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar9 = uVar7 - uVar9 * uVar5;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar12 = plVar11[1];
        if (uVar7 - uVar12 == 0) {
          if (plVar11[2] == uVar6) {
            uVar5 = plVar11[3];
            goto LAB_003ed050;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else if (uVar5 <= uVar12) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar2 * uVar5;
          }
          if (uVar12 != uVar9) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    uVar5 = 0;
  }
LAB_003ed050:
  uVar6 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = *(ulong *)(param_2 + 0x278);
  if (uVar7 != 0) {
    uVar16 = NEON_cnt(uVar7,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x270) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar12 = plVar11[1];
        if (uVar6 - uVar12 == 0) {
          if (plVar11[2] == uVar5) {
            plVar11 = (long *)plVar11[3];
            uVar7 = *(ulong *)(param_2 + 0x250);
            goto joined_r0x003ed1dc;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar12 = uVar12 & uVar7 - 1;
          }
          else if (uVar7 <= uVar12) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar2 * uVar7;
          }
          if (uVar12 != uVar9) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar11 = (long *)0x0;
  uVar7 = *(ulong *)(param_2 + 0x250);
joined_r0x003ed1dc:
  if (uVar7 != 0) {
    uVar16 = NEON_cnt(uVar7,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x248) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar12 = plVar10[1];
        if (uVar6 - uVar12 == 0) {
          if (plVar10[2] == uVar5) {
            plVar10 = (long *)plVar10[3];
            goto joined_r0x003ed2e8;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar12 = uVar12 & uVar7 - 1;
          }
          else if (uVar7 <= uVar12) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar2 * uVar7;
          }
          if (uVar12 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar10 = (long *)0x0;
joined_r0x003ed2e8:
  if (plVar11 != (long *)0x0) {
    plVar4 = (long *)plVar11[6];
    if (((plVar4 != (long *)0x0) &&
        (uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x296), (uVar5 & 1) != 0)) &&
       (lVar13 = *(long *)(param_2 + 0xe8), lVar13 != 0)) {
      plVar4 = (long *)plVar11[6];
      FUN_00340fb0(1,lVar13);
      plVar14 = *(long **)(lVar13 + 0x10);
      if (plVar14 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar14 + 0xa4);
        iVar3 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0xa4);
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      plVar4[2] = (long)plVar14;
      uVar1 = (uint)((ulong)plVar14 >> 0x20) ^ (uint)plVar14;
      if (plVar14 == (long *)0x0) {
        uVar1 = 0xffffffff;
      }
      if (*(uint *)((long)plVar4 + 0xc) != uVar1) {
        *(uint *)((long)plVar4 + 0xc) = uVar1;
        (**(code **)(*plVar4 + 0x50))(plVar4);
      }
      FUN_003462d8(lVar13);
    }
    (**(code **)(*plVar11 + 0x68))(plVar11,1);
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003ed2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x88))(plVar10,0x1000,1);
  return;
}


// ===== 003ed2f0  rive::ListenerInputTypeViewModel::decodeViewModelPathIds =====

/* rive::ListenerInputTypeViewModel::decodeViewModelPathIds(rive::Span<unsigned char const>) */

void rive::ListenerInputTypeViewModel::decodeViewModelPathIds
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


// ===== 003ed36c  rive::ListenerInputTypeViewModel::copyViewModelPathIds =====

/* rive::ListenerInputTypeViewModel::copyViewModelPathIds(rive::ListenerInputTypeViewModelBase
   const&) */

void __thiscall
rive::ListenerInputTypeViewModel::copyViewModelPathIds
          (ListenerInputTypeViewModel *this,ListenerInputTypeViewModelBase *param_1)

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


// ===== 003ed3ac  rive::ListenerInputTypeViewModel::viewModelPathIdsBuffer =====

/* rive::ListenerInputTypeViewModel::viewModelPathIdsBuffer() const */

void rive::ListenerInputTypeViewModel::viewModelPathIdsBuffer(void)

{
  void *__src;
  ulong __n;
  long in_x0;
  void *__dest;
  undefined8 *in_x8;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 0x10);
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


// ===== 003ed414  FUN_003ed414 =====

void FUN_003ed414(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ed424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return;
  }
  return;
}


// ===== 003ed42c  FUN_003ed42c =====

void FUN_003ed42c(void *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)((long)param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ed464  FUN_003ed464 =====

undefined8 FUN_003ed464(void)

{
  return 0x294;
}


// ===== 003ed46c  FUN_003ed46c =====

bool FUN_003ed46c(undefined8 param_1,int param_2)

{
  return (param_2 - 0x292U & 0xfffd) == 0;
}


// ===== 003ed480  FUN_003ed480 =====

undefined8 FUN_003ed480(long *param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  
  if (param_2 == 0x3c5) {
    uVar7 = 0;
    uVar4 = 0;
    pbVar3 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar3) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003ed578;
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
LAB_003ed578:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)((long)param_1 + 0xc) = (int)uVar4;
  }
  else {
    if (param_2 != 0x3c3) {
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
        goto LAB_003ed558;
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
LAB_003ed558:
    lVar6 = *param_1;
    param_3[2] = (long)pbVar8;
    (**(code **)(lVar6 + 0x58))(param_1,pbVar3,uVar4);
  }
  return 1;
}


// ===== 003ed590  FUN_003ed590 =====

void FUN_003ed590(void)

{
  return;
}


// ===== 003ed594  rive::NestedNumber::applyValue =====

/* rive::NestedNumber::applyValue() */

void __thiscall rive::NestedNumber::applyValue(NestedNumber *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((((plVar3 != (long *)0x0) &&
       (uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0x5f), (uVar1 & 1) != 0)) &&
      (plVar3 = (long *)plVar3[0x15], plVar3 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(this + 0x88)), lVar2 != 0 &&
      (*(float *)(lVar2 + 0x18) != *(float *)(this + 0x8c))))) {
    *(float *)(lVar2 + 0x18) = *(float *)(this + 0x8c);
    *(undefined1 *)(*(long *)(lVar2 + 8) + 0x128) = 1;
  }
  return;
}


// ===== 003ed60c  rive::NestedNumber::nestedValue =====

/* rive::NestedNumber::nestedValue(float) */

void __thiscall rive::NestedNumber::nestedValue(NestedNumber *this,float param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((((plVar3 != (long *)0x0) &&
       (uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0x5f), (uVar1 & 1) != 0)) &&
      (plVar3 = (long *)plVar3[0x15], plVar3 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(this + 0x88)), lVar2 != 0 &&
      (*(float *)(lVar2 + 0x18) != param_1)))) {
    *(float *)(lVar2 + 0x18) = param_1;
    *(undefined1 *)(*(long *)(lVar2 + 8) + 0x128) = 1;
  }
  return;
}


// ===== 003ed68c  rive::NestedNumber::nestedValue =====

/* rive::NestedNumber::nestedValue() const */

undefined4 __thiscall rive::NestedNumber::nestedValue(NestedNumber *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  plVar3 = *(long **)(this + 0x30);
  if ((((plVar3 != (long *)0x0) &&
       (uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0x5f), (uVar1 & 1) != 0)) &&
      (plVar3 = (long *)plVar3[0x15], plVar3 != (long *)0x0)) &&
     (lVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(this + 0x88)), lVar2 != 0)) {
    uVar4 = *(undefined4 *)(lVar2 + 0x18);
  }
  return uVar4;
}


// ===== 003ed6f8  FUN_003ed6f8 =====

void FUN_003ed6f8(long *param_1)

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


// ===== 003ed764  FUN_003ed764 =====

undefined8 FUN_003ed764(void)

{
  return 0x7c;
}


// ===== 003ed76c  FUN_003ed76c =====

undefined8 FUN_003ed76c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x79)) && (param_2 != 0x7c)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003ed794  FUN_003ed794 =====

undefined8 FUN_003ed794(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0xed) {
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ed928;
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
LAB_003ed928:
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
      if (param_2 != 5) goto LAB_003ed988;
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ed90c;
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
LAB_003ed90c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0xed) {
      if (param_2 == 0xef) {
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
      goto LAB_003ed988;
    }
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003ed960;
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
LAB_003ed960:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003ed988:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ed9b0  FUN_003ed9b0 =====

void FUN_003ed9b0(void)

{
  return;
}


// ===== 003ed9b4  rive::NestedRemapAnimation::timeChanged =====

/* rive::NestedRemapAnimation::timeChanged() */

void __thiscall rive::NestedRemapAnimation::timeChanged(NestedRemapAnimation *this)

{
  long lVar1;
  long *plVar2;
  LinearAnimation *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  plVar2 = *(long **)(this + 0xa8);
  if (plVar2 != (long *)0x0) {
    this_00 = (LinearAnimation *)plVar2[7];
    fVar3 = (float)(**(code **)(*plVar2 + 0x30))(plVar2);
    fVar3 = (float)LinearAnimation::globalToLocalSeconds(this_00,fVar3 * *(float *)(this + 0xb0));
    if (*(float *)(plVar2 + 8) != fVar3) {
      fVar4 = *(float *)(plVar2 + 9);
      lVar1 = plVar2[7];
      *(float *)(plVar2 + 8) = fVar3;
      if (*(char *)(lVar1 + 0x40) == '\0') {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x38));
      }
      uVar6 = *(undefined4 *)(lVar1 + 0x28);
      *(undefined4 *)((long)plVar2 + 0x54) = 0x3f800000;
      fVar7 = (float)NEON_ucvtf(uVar6);
      fVar3 = fVar3 - fVar5 * fVar7;
      *(float *)(plVar2 + 9) = fVar3;
      *(float *)((long)plVar2 + 0x4c) = fVar3 - (fVar4 - *(float *)((long)plVar2 + 0x4c));
    }
  }
  return;
}


// ===== 003eda58  rive::NestedRemapAnimation::initializeAnimation =====

/* rive::NestedRemapAnimation::initializeAnimation(rive::ArtboardInstance*) */

void __thiscall
rive::NestedRemapAnimation::initializeAnimation
          (NestedRemapAnimation *this,ArtboardInstance *param_1)

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
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x003edae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))(this);
  return;
}


// ===== 003edae4  rive::NestedRemapAnimation::advance =====

/* rive::NestedRemapAnimation::advance(float, bool) */

undefined8 rive::NestedRemapAnimation::advance(float param_1,bool param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  Core *pCVar5;
  long lVar6;
  LinearAnimationInstance *pLVar7;
  long *plVar8;
  long *plVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  
  pLVar7 = *(LinearAnimationInstance **)((ulong)param_2 + 0xa8);
  if ((pLVar7 != (LinearAnimationInstance *)0x0) &&
     (fVar10 = *(float *)((ulong)param_2 + 0xa4), fVar10 != 0.0)) {
    lVar6 = *(long *)(pLVar7 + 0x38);
    fVar11 = *(float *)(pLVar7 + 0x40);
    if (*(char *)(lVar6 + 0x41) != '\0') {
      param_1 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x28));
      fVar11 = (float)(int)(fVar11 * param_1) / param_1;
    }
    plVar9 = *(long **)(lVar6 + 0x48);
    plVar2 = *(long **)(lVar6 + 0x50);
    if (plVar9 != plVar2) {
      plVar8 = *(long **)(pLVar7 + 0x10);
      do {
        lVar6 = *plVar9;
        pCVar5 = (Core *)(**(code **)(*plVar8 + 0x348))(param_1,plVar8,*(undefined4 *)(lVar6 + 0xc))
        ;
        param_1 = extraout_s0;
        if (pCVar5 != (Core *)0x0) {
          puVar3 = *(undefined8 **)(lVar6 + 0x18);
          for (puVar1 = *(undefined8 **)(lVar6 + 0x10); puVar1 != puVar3; puVar1 = puVar1 + 1) {
            iVar4 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
            if (iVar4 < 0x365) {
              if ((iVar4 != 0x18b) && (iVar4 != 0x191)) {
LAB_003edb88:
                param_1 = (float)KeyedProperty::apply
                                           ((KeyedProperty *)*puVar1,pCVar5,fVar11,fVar10,pLVar7);
              }
            }
            else if ((iVar4 != 0x365) && (iVar4 != 0x3f8)) goto LAB_003edb88;
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar2);
    }
  }
  return 0;
}


// ===== 003edc00  FUN_003edc00 =====

void FUN_003edc00(NestedLinearAnimation *param_1)

{
  rive::NestedLinearAnimation::~NestedLinearAnimation(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003edc24  FUN_003edc24 =====

undefined8 FUN_003edc24(void)

{
  return 0x62;
}


// ===== 003edc2c  FUN_003edc2c =====

bool FUN_003edc2c(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x5d;
  if ((uVar1 < 6) && ((1 << (ulong)(uVar1 & 0x1f) & 0x31U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) - 10 < 2;
}


// ===== 003edc64  FUN_003edc64 =====

undefined8 FUN_003edc64(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0xca) {
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
  uVar1 = FUN_003d65fc();
  return uVar1;
}


// ===== 003edcbc  rive::TransitionBoolCondition::validateInputType =====

/* rive::TransitionBoolCondition::validateInputType(rive::StateMachineInput const*) const */

undefined8 __thiscall
rive::TransitionBoolCondition::validateInputType
          (TransitionBoolCondition *this,StateMachineInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (StateMachineInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003edcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3b);
    return uVar1;
  }
  return 1;
}


// ===== 003edcdc  rive::TransitionBoolCondition::evaluate =====

/* rive::TransitionBoolCondition::evaluate(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

bool rive::TransitionBoolCondition::evaluate
               (StateMachineInstance *param_1,StateMachineLayerInstance *param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)param_2 + 0x70))(param_2,*(undefined4 *)(param_1 + 0xc));
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else if (*(char *)(lVar2 + 0x18) == '\0') {
    bVar1 = *(int *)(param_1 + 0x10) == 1;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x10) == 0;
  }
  return bVar1;
}


// ===== 003edd38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003edd3c  FUN_003edd3c =====

undefined8 FUN_003edd3c(void)

{
  return 0x47;
}


// ===== 003edd44  FUN_003edd44 =====

bool FUN_003edd44(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x43;
  if ((uVar1 < 5) && ((1 << (ulong)(uVar1 & 0x1f) & 0x15U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x1dc;
}


// ===== 003edd78  FUN_003edd78 =====

undefined8 FUN_003edd78(long param_1,short param_2,long *param_3)

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
        goto LAB_003ede58;
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
LAB_003ede58:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x9c) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003ede3c;
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
LAB_003ede3c:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003ede6c  rive::BlendState1DViewModel::~BlendState1DViewModel =====

/* rive::BlendState1DViewModel::~BlendState1DViewModel() */

void __thiscall rive::BlendState1DViewModel::~BlendState1DViewModel(BlendState1DViewModel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_0067cd30 + 0x10;
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
    *(undefined8 *)(this + 0x78) = 0;
  }
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


// ===== 003edf18  rive::BlendState1DViewModel::~BlendState1DViewModel =====

/* rive::BlendState1DViewModel::~BlendState1DViewModel() */

void __thiscall rive::BlendState1DViewModel::~BlendState1DViewModel(BlendState1DViewModel *this)

{
  ~BlendState1DViewModel(this);
  operator_delete(this);
  return;
}


// ===== 003edf3c  FUN_003edf3c =====

undefined8 FUN_003edf3c(void)

{
  return 0x210;
}


// ===== 003edf44  FUN_003edf44 =====

bool FUN_003edf44(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x3c;
  if ((uVar1 < 0xd) && ((1 << (ulong)(uVar1 & 0x1f) & 0x1041U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) - 0x20f < 2;
}


// ===== 003edf7c  rive::BlendState1DViewModel::import =====

/* rive::BlendState1DViewModel::import(rive::ImportStack&) */

undefined8 __thiscall
rive::BlendState1DViewModel::import(BlendState1DViewModel *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar11 = NEON_cnt(uVar4,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  uVar3 = (uint)uVar4;
  if (uVar6 < 2) {
    uVar8 = (ulong)(uVar3 - 1) & 0x35;
  }
  else {
    uVar8 = 0x35;
    if (uVar4 < 0x36) {
      uVar1 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar1 = 0x35 / (uVar3 & 0xff);
      }
      uVar8 = (ulong)(0x35 - uVar1 * (uVar3 & 0xff));
    }
  }
  plVar7 = *(long **)(*(long *)param_1 + uVar8 * 8);
  if (plVar7 == (long *)0x0) {
    return 1;
  }
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) {
    return 1;
  }
  do {
    uVar9 = plVar7[1];
    if (uVar9 == 0x35) {
      if ((short)plVar7[2] == 0x35) {
        if (plVar7[3] == 0) {
          return 1;
        }
        if (uVar6 < 2) {
          uVar8 = (ulong)(uVar3 - 1) & 9;
        }
        else {
          uVar8 = 9;
          if (uVar4 < 10) {
            uVar1 = 0;
            if ((uVar4 & 0xff) != 0) {
              uVar1 = 9 / (uVar3 & 0xff);
            }
            uVar8 = (ulong)(9 - uVar1 * (uVar3 & 0xff));
          }
        }
        plVar7 = *(long **)(*(long *)param_1 + uVar8 * 8);
        if (plVar7 == (long *)0x0) {
          return 1;
        }
        do {
          while( true ) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return 1;
            }
            uVar9 = plVar7[1];
            if (uVar9 != 9) break;
            if (*(short *)(plVar7 + 2) == 9) {
              lVar5 = plVar7[3];
              if (lVar5 == 0) {
                return 1;
              }
              uVar11 = *(undefined8 *)(lVar5 + 8);
              *(undefined8 *)(lVar5 + 8) = 0;
              *(undefined8 *)(this + 0x78) = uVar11;
              uVar11 = LayerState::import((LayerState *)this,param_1);
              return uVar11;
            }
          }
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
        } while (uVar9 == uVar8);
        return 1;
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
      if (uVar9 != uVar8) {
        return 1;
      }
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return 1;
    }
  } while( true );
}


// ===== 003ee0dc  rive::BlendStateTransition::exitTimeAnimationInstance =====

/* rive::BlendStateTransition::exitTimeAnimationInstance(rive::StateInstance const*) const */

long * __thiscall
rive::BlendStateTransition::exitTimeAnimationInstance
          (BlendStateTransition *this,StateInstance *param_1)

{
  short sVar1;
  long *plVar2;
  
  if (param_1 == (StateInstance *)0x0) {
    return (long *)0x0;
  }
  sVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  if (sVar1 == 0x49) {
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != *(long **)(param_1 + 0x18)) {
      do {
        if (*plVar2 == *(long *)(this + 0x98)) goto LAB_003ee184;
        plVar2 = plVar2 + 0x12;
      } while (plVar2 != *(long **)(param_1 + 0x18));
    }
  }
  else if ((sVar1 == 0x210) || (sVar1 == 0x4c)) {
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != *(long **)(param_1 + 0x18)) {
      do {
        if (*plVar2 == *(long *)(this + 0x98)) {
LAB_003ee184:
          return plVar2 + 1;
        }
        plVar2 = plVar2 + 0x12;
      } while (plVar2 != *(long **)(param_1 + 0x18));
    }
  }
  return (long *)0x0;
}


// ===== 003ee194  rive::BlendStateTransition::exitTimeAnimation =====

/* rive::BlendStateTransition::exitTimeAnimation(rive::LayerState const*) const */

undefined * rive::BlendStateTransition::exitTimeAnimation(LayerState *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x98) + 0x10);
    puVar1 = PTR_m_EmptyAnimation_0067cd00;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    return puVar1;
  }
  return (undefined *)0x0;
}


// ===== 003ee1bc  FUN_003ee1bc =====

void FUN_003ee1bc(StateTransition *param_1)

{
  rive::StateTransition::~StateTransition(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003ee1e0  FUN_003ee1e0 =====

undefined8 FUN_003ee1e0(void)

{
  return 0x4e;
}


// ===== 003ee1e8  FUN_003ee1e8 =====

uint FUN_003ee1e8(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x41U & 0xffff) < 0xe) & 0x2003U >> (ulong)(param_2 - 0x41U & 0x1f);
}


// ===== 003ee208  FUN_003ee208 =====

undefined8 FUN_003ee208(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (param_2 != 0xab) {
    uVar3 = FUN_0035a8f0();
    return uVar3;
  }
  uVar7 = 0;
  uVar4 = 0;
  pbVar5 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003ee278;
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
LAB_003ee278:
    uVar4 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x90) = (int)uVar4;
  return 1;
}


// ===== 003ee28c  FUN_003ee28c =====

void FUN_003ee28c(void)

{
  return;
}


// ===== 003ee290  rive::BlendAnimation1D::onAddedDirty =====

/* rive::BlendAnimation1D::onAddedDirty(rive::CoreContext*) */

undefined8 rive::BlendAnimation1D::onAddedDirty(CoreContext *param_1)

{
  return 0;
}


// ===== 003ee298  rive::BlendAnimation1D::onAddedClean =====

/* rive::BlendAnimation1D::onAddedClean(rive::CoreContext*) */

undefined8 rive::BlendAnimation1D::onAddedClean(CoreContext *param_1)

{
  return 0;
}


// ===== 003ee2a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003ee2a4  FUN_003ee2a4 =====

undefined8 FUN_003ee2a4(void)

{
  return 0x4b;
}


// ===== 003ee2ac  FUN_003ee2ac =====

bool FUN_003ee2ac(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffe) == 0x4a;
}


// ===== 003ee2bc  FUN_003ee2bc =====

undefined8 FUN_003ee2bc(long param_1,short param_2,long *param_3)

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
  
  if (param_2 != 0xa5) {
    if (param_2 == 0xa6) {
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
      *(undefined4 *)(param_1 + 0x18) = uVar9;
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
      goto LAB_003ee358;
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
LAB_003ee358:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  return 1;
}


// ===== 003ee384  FUN_003ee384 =====

void FUN_003ee384(void)

{
  return;
}


// ===== 003ee388  rive::DrawRules::onAddedDirty =====

/* rive::DrawRules::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::DrawRules::onAddedDirty(DrawRules *this,CoreContext *param_1)

{
  DrawRules *pDVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  pDVar1 = (DrawRules *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pDVar1 = (DrawRules *)(param_1 + -0x998);
  }
  *(DrawRules **)(this + 0x40) = pDVar1;
  *(DrawRules **)(this + 0x80) = pDVar1;
  if (pDVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar4 + 0x90))(plVar2,this);
  }
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0xa0));
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x30), (uVar3 & 1) != 0)) {
    *(long **)(this + 0xa8) = plVar2;
  }
  return 0;
}


// ===== 003ee424  rive::DrawRules::onAddedClean =====

/* rive::DrawRules::onAddedClean(rive::CoreContext*) */

undefined8 rive::DrawRules::onAddedClean(CoreContext *param_1)

{
  return 0;
}


// ===== 003ee42c  rive::DrawRules::drawTargetIdChanged =====

/* rive::DrawRules::drawTargetIdChanged() */

void __thiscall rive::DrawRules::drawTargetIdChanged(DrawRules *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x40) + 0x348))
                             (*(long **)(this + 0x40),*(undefined4 *)(this + 0xa0));
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x30);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
  }
  plVar5 = *(long **)(this + 0x40);
  *(long **)(this + 0xa8) = plVar2;
  if ((*(ushort *)(plVar5 + 0xc) >> 3 & 1) == 0) {
    *(ushort *)(plVar5 + 0xc) = *(ushort *)(plVar5 + 0xc) | 8;
    (**(code **)(*plVar5 + 0x70))(plVar5);
    lVar4 = plVar5[0x10];
    uVar1 = *(uint *)(plVar5 + 7);
    *(undefined1 *)(lVar4 + 0xc32) = 1;
    *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
      *(uint *)(lVar4 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 003ee4d8  FUN_003ee4d8 =====

void FUN_003ee4d8(long *param_1)

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


// ===== 003ee564  FUN_003ee564 =====

undefined8 FUN_003ee564(void)

{
  return 0x31;
}


// ===== 003ee56c  FUN_003ee56c =====

uint FUN_003ee56c(undefined8 param_1,uint param_2)

{
  return (uint)((param_2 & 0xffff) < 0x32) & (uint)(0x2000000000c00 >> ((ulong)param_2 & 0x3f));
}


// ===== 003ee58c  FUN_003ee58c =====

void FUN_003ee58c(long param_1,short param_2,long *param_3)

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
        goto LAB_003ee6ec;
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
LAB_003ee6ec:
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
        goto LAB_003ee6d0;
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
LAB_003ee6d0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x79) {
      uVar5 = 0;
      goto LAB_003ee734;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003ee724;
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
LAB_003ee724:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xa0) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003ee734:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003ee758  rive::DataConverterToNumber::convertString =====

/* rive::DataConverterToNumber::convertString(rive::DataValueString*) */

DataConverterToNumber * __thiscall
rive::DataConverterToNumber::convertString(DataConverterToNumber *this,DataValueString *param_1)

{
  char *__nptr;
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  double dVar5;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[8] & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *(ulong *)(param_1 + 8);
    local_40 = *(char **)(param_1 + 0x18);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  puVar4 = (undefined4 *)__errno();
  pcVar3 = local_40;
  uVar2 = local_50;
  *puVar4 = 0;
  __nptr = (char *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    __nptr = local_40;
  }
  dVar5 = atof(__nptr);
  *(float *)(this + 0xe0) = (float)dVar5;
  if ((uVar2 & 1) != 0) {
    operator_delete(pcVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this + 0xd8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ee810  rive::DataConverterToNumber::convertColor =====

/* rive::DataConverterToNumber::convertColor(rive::DataValueColor*) */

DataConverterToNumber * __thiscall
rive::DataConverterToNumber::convertColor(DataConverterToNumber *this,DataValueColor *param_1)

{
  *(float *)(this + 0xe0) = (float)*(int *)(param_1 + 8);
  return this + 0xd8;
}


// ===== 003ee828  rive::DataConverterToNumber::convertEnum =====

/* rive::DataConverterToNumber::convertEnum(rive::DataValueEnum*) */

DataConverterToNumber * __thiscall
rive::DataConverterToNumber::convertEnum(DataConverterToNumber *this,DataValueEnum *param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(this + 0xe0) = uVar1;
  return this + 0xd8;
}


// ===== 003ee840  rive::DataConverterToNumber::convert =====

/* rive::DataConverterToNumber::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterToNumber::convert(DataValue *param_1,DataBind *param_2)

{
  char *__nptr;
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  double dVar6;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,1);
  if ((uVar3 & 1) != 0) {
    if (((byte)param_2[8] & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_2 + 0x10);
      local_50 = *(ulong *)(param_2 + 8);
      local_40 = *(char **)(param_2 + 0x18);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10));
    }
    puVar4 = (undefined4 *)__errno();
    pcVar2 = local_40;
    uVar3 = local_50;
    *puVar4 = 0;
    __nptr = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      __nptr = local_40;
    }
    dVar6 = atof(__nptr);
    *(float *)(param_1 + 0xe0) = (float)dVar6;
    if ((uVar3 & 1) != 0) {
      operator_delete(pcVar2);
    }
    goto LAB_003ee9ac;
  }
  uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,6);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 8);
      goto LAB_003ee9ac;
    }
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,4);
    if ((uVar3 & 1) != 0) {
      *(float *)(param_1 + 0xe0) = (float)*(int *)(param_2 + 8);
      goto LAB_003ee9ac;
    }
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,3);
    if ((uVar3 & 1) != 0) {
      uVar5 = 0;
      if (param_2[8] != (DataBind)0x0) {
        uVar5 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0xe0) = uVar5;
      goto LAB_003ee9ac;
    }
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,10);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      goto LAB_003ee9ac;
    }
  }
  uVar5 = NEON_ucvtf(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
LAB_003ee9ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1 + 0xd8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ee9d8  rive::DataConverter::~DataConverter =====

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  (*(code *)PTR__DataConverter_0067fad0)();
  return;
}


// ===== 003ee9dc  FUN_003ee9dc =====

void FUN_003ee9dc(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003eea00  FUN_003eea00 =====

undefined8 FUN_003eea00(void)

{
  return 0x269;
}


// ===== 003eea08  FUN_003eea08 =====

bool FUN_003eea08(undefined8 param_1,short param_2)

{
  return param_2 == 0x269 || param_2 == 0x1e8;
}


// ===== 003eea20  FUN_003eea20 =====

undefined8 FUN_003eea20(void)

{
  return 2;
}


// ===== 003eea28  rive::DataConverterOperationValue::convert =====

/* rive::DataConverterOperationValue::convert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterOperationValue::convert(DataValue *param_1,DataBind *param_2)

{
  DataConverterOperation::convertValue
            ((DataConverterOperation *)param_1,(DataValue *)param_2,*(float *)(param_1 + 0xf0));
  return;
}


// ===== 003eea30  rive::DataConverterOperationValue::reverseConvert =====

/* rive::DataConverterOperationValue::reverseConvert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterOperationValue::reverseConvert(DataValue *param_1,DataBind *param_2)

{
  DataConverterOperation::reverseConvertValue
            ((DataConverterOperation *)param_1,(DataValue *)param_2,*(float *)(param_1 + 0xf0));
  return;
}


// ===== 003eea38  rive::DataConverterOperationValue::operationValueChanged =====

/* rive::DataConverterOperationValue::operationValueChanged() */

void __thiscall
rive::DataConverterOperationValue::operationValueChanged(DataConverterOperationValue *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003eea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003eea58  FUN_003eea58 =====

void FUN_003eea58(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003eea7c  FUN_003eea7c =====

undefined8 FUN_003eea7c(void)

{
  return 500;
}


// ===== 003eea84  FUN_003eea84 =====

uint FUN_003eea84(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x1e8U & 0xffff) < 0x1d) &
         0x10001001U >> (ulong)(param_2 - 0x1e8U & 0x1f);
}


// ===== 003eeaa8  FUN_003eeaa8 =====

void FUN_003eeaa8(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
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
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0x296) {
    pcVar12 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eebe0;
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
LAB_003eebe0:
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
  else if (param_2 == 0x2aa) {
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eebc4;
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
LAB_003eebc4:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xd8) = (int)uVar6;
  }
  else {
    if (param_2 != 0x2a9) {
      uVar5 = 0;
      goto LAB_003eec24;
    }
    puVar9 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar9 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar9 + 1;
      uVar15 = *puVar9;
    }
    param_3[2] = (long)puVar7;
    *(undefined4 *)(param_1 + 0xf0) = uVar15;
  }
  uVar5 = 1;
LAB_003eec24:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003eec48  rive::DataConverterOperation::convertValue =====

/* rive::DataConverterOperation::convertValue(rive::DataValue*, float) */

DataConverterOperation * __thiscall
rive::DataConverterOperation::convertValue
          (DataConverterOperation *this,DataValue *param_1,float param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,2);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,10);
    fVar3 = 0.0;
    if ((uVar1 & 1) == 0) goto switchD_003eece0_default;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,2);
  if ((uVar1 & 1) == 0) {
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 8));
  }
  else {
    fVar2 = *(float *)(param_1 + 8);
  }
  fVar3 = param_2;
  switch(*(undefined4 *)(this + 0xd8)) {
  case 0:
    fVar3 = fVar2 + param_2;
    break;
  case 1:
    fVar3 = fVar2 - param_2;
    break;
  case 2:
    fVar3 = fVar2 * param_2;
    break;
  case 3:
    fVar3 = fVar2 / param_2;
    break;
  case 4:
    fVar3 = -param_2;
    if (0.0 <= param_2) {
      fVar3 = param_2;
    }
    fVar2 = fmodf(fVar2,fVar3);
    if (0.0 <= fVar2) {
      fVar3 = -0.0;
    }
    fVar3 = fVar2 + fVar3;
    break;
  case 5:
    fVar3 = SQRT(fVar2);
    break;
  case 6:
    fVar3 = powf(fVar2,param_2);
    break;
  case 7:
    fVar3 = expf(fVar2);
    break;
  case 8:
    fVar3 = logf(fVar2);
    break;
  case 9:
    fVar3 = cosf(fVar2);
    break;
  case 10:
    fVar3 = sinf(fVar2);
    break;
  case 0xb:
    fVar3 = tanf(fVar2);
    break;
  case 0xc:
    fVar3 = acosf(fVar2);
    break;
  case 0xd:
    fVar3 = asinf(fVar2);
    break;
  case 0xe:
    fVar3 = atanf(fVar2);
    break;
  case 0xf:
    fVar3 = atan2f(fVar2,param_2);
    break;
  case 0x10:
    fVar3 = (float)(int)fVar2;
    break;
  case 0x11:
    fVar3 = (float)(int)fVar2;
    break;
  case 0x12:
    fVar3 = (float)(int)fVar2;
  }
switchD_003eece0_default:
  *(float *)(this + 0xe8) = fVar3;
  return this + 0xe0;
}


// ===== 003eedc0  rive::DataConverterOperation::reverseConvertValue =====

/* rive::DataConverterOperation::reverseConvertValue(rive::DataValue*, float) */

undefined8 * __thiscall
rive::DataConverterOperation::reverseConvertValue
          (DataConverterOperation *this,DataValue *param_1,float param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  float __x;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  lVar3 = *(long *)param_1;
  *puVar1 = &PTR_FUN_0066af48;
  pcVar4 = *(code **)(lVar3 + 0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar2 = (*pcVar4)(param_1,2);
  if ((uVar2 & 1) != 0) {
    __x = param_2;
    if (*(uint *)(this + 0xd8) < 0x13) {
      __x = *(float *)(param_1 + 8);
      switch(*(uint *)(this + 0xd8)) {
      case 0:
        __x = __x - param_2;
        break;
      case 1:
        __x = __x + param_2;
        break;
      case 2:
        __x = __x / param_2;
        break;
      case 3:
        __x = __x * param_2;
        break;
      case 5:
        __x = __x * __x;
        break;
      case 6:
        __x = powf(__x,1.0 / param_2);
        break;
      case 7:
        __x = logf(__x);
        break;
      case 8:
        __x = expf(__x);
        break;
      case 9:
        __x = acosf(__x);
        break;
      case 10:
        __x = asinf(__x);
        break;
      case 0xb:
        __x = atanf(__x);
        break;
      case 0xc:
        __x = cosf(__x);
        break;
      case 0xd:
        __x = sinf(__x);
        break;
      case 0xe:
        __x = tanf(__x);
      }
    }
    *(float *)(puVar1 + 1) = __x;
  }
  return puVar1;
}


// ===== 003eeed8  rive::DataConverterSystemDegsToRads::convert =====

/* rive::DataConverterSystemDegsToRads::convert(rive::DataValue*, rive::DataBind*) */

void __thiscall
rive::DataConverterSystemDegsToRads::convert
          (DataConverterSystemDegsToRads *this,DataValue *param_1,DataBind *param_2)

{
  if (((byte)param_2[0x10] & 1) == 0) {
    DataConverterOperation::convertValue
              ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
    return;
  }
  DataConverterOperation::reverseConvertValue
            ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
  return;
}


// ===== 003eeeec  rive::DataConverterSystemDegsToRads::reverseConvert =====

/* rive::DataConverterSystemDegsToRads::reverseConvert(rive::DataValue*, rive::DataBind*) */

void __thiscall
rive::DataConverterSystemDegsToRads::reverseConvert
          (DataConverterSystemDegsToRads *this,DataValue *param_1,DataBind *param_2)

{
  if (((byte)param_2[0x10] & 1) == 0) {
    DataConverterOperation::convertValue
              ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
    return;
  }
  DataConverterOperation::reverseConvertValue
            ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
  return;
}


// ===== 003eef00  FUN_003eef00 =====

void FUN_003eef00(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003eef24  FUN_003eef24 =====

undefined8 FUN_003eef24(void)

{
  return 0x202;
}


// ===== 003eef2c  FUN_003eef2c =====

uint FUN_003eef2c(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x1e8U & 0xffff) < 0x1d) &
         0x14001001U >> (ulong)(param_2 - 0x1e8U & 0x1f);
}


// ===== 003eef50  rive::DataConverterRangeMapper::copy =====

/* rive::DataConverterRangeMapper::copy(rive::DataConverterRangeMapperBase const&) */

void __thiscall
rive::DataConverterRangeMapper::copy
          (DataConverterRangeMapper *this,DataConverterRangeMapperBase *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_1 + 0xec);
  uVar3 = *(undefined8 *)(param_1 + 0xe4);
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xf8) = uVar2;
  *(undefined8 *)(this + 0xec) = uVar4;
  *(undefined8 *)(this + 0xe4) = uVar3;
  *(undefined4 *)(this + 0xe0) = uVar1;
  DataConverter::copy((DataConverter *)this,(DataConverter *)param_1);
  return;
}


// ===== 003eef74  rive::DataConverterRangeMapper::interpolator =====

/* rive::DataConverterRangeMapper::interpolator(rive::KeyFrameInterpolator*) */

void __thiscall
rive::DataConverterRangeMapper::interpolator
          (DataConverterRangeMapper *this,KeyFrameInterpolator *param_1)

{
  *(KeyFrameInterpolator **)(this + 0xf8) = param_1;
  return;
}


// ===== 003eef7c  rive::DataConverterRangeMapper::calculateRange =====

/* rive::DataConverterRangeMapper::calculateRange(rive::DataValue*, float, float, float, float) */

DataConverterRangeMapper * __thiscall
rive::DataConverterRangeMapper::calculateRange
          (DataConverterRangeMapper *this,DataValue *param_1,float param_2,float param_3,
          float param_4,float param_5)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float __y;
  
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,2);
  fVar5 = 0.0;
  if (((uVar3 & 1) != 0) && (fVar5 = param_4, param_4 != param_5)) {
    fVar5 = *(float *)(param_1 + 8);
    uVar1 = *(ushort *)(this + 0xe0);
    if (((param_2 <= fVar5) || (fVar4 = param_2, (uVar1 & 1) == 0)) &&
       ((fVar4 = fVar5, fVar5 != param_3 && fVar5 < param_3 == (NAN(fVar5) || NAN(param_3)) &&
        ((uVar1 & 2) != 0)))) {
      fVar4 = param_3;
    }
    fVar5 = param_3 - param_2;
    bVar2 = true;
    if ((fVar4 == param_3 || fVar4 < param_3 != (NAN(fVar4) || NAN(param_3))) &&
       (bVar2 = false, !NAN(fVar4) && !NAN(param_2))) {
      bVar2 = fVar4 < param_2;
    }
    if ((bVar2) && ((uVar1 >> 2 & 1) != 0)) {
      __y = -fVar5;
      if (0.0 <= fVar5) {
        __y = fVar5;
      }
      fVar4 = fmodf(fVar4,__y);
      if (0.0 <= fVar4) {
        __y = -0.0;
      }
      fVar4 = ABS(fVar4 + __y + param_2);
    }
    fVar5 = (fVar4 - param_2) / fVar5;
    if ((uVar1 & 8) != 0) {
      fVar5 = 1.0 - fVar5;
    }
    if ((1.0 <= fVar5 || *(long **)(this + 0xf8) == (long *)0x0) ||
       (fVar5 == 0.0 || fVar5 < 0.0 != NAN(fVar5))) {
      if ((*(int *)(this + 0xd8) == 0) && (bVar2 = fVar5 <= 0.0, fVar5 = 1.0, bVar2)) {
        fVar5 = 0.0;
      }
    }
    else {
      fVar5 = (float)(**(code **)(**(long **)(this + 0xf8) + 0x58))();
    }
    fVar5 = (float)NEON_fmadd(fVar5,param_5,(1.0 - fVar5) * param_4);
  }
  *(float *)(this + 0x108) = fVar5;
  return this + 0x100;
}


// ===== 003ef0d4  rive::DataConverterRangeMapper::calculateReverseRange =====

/* rive::DataConverterRangeMapper::calculateReverseRange(rive::DataValue*, float, float, float,
   float) */

void __thiscall
rive::DataConverterRangeMapper::calculateReverseRange
          (DataConverterRangeMapper *this,DataValue *param_1,float param_2,float param_3,
          float param_4,float param_5)

{
  calculateRange(this,param_1,param_4,param_5,param_2,param_3);
  return;
}


// ===== 003ef0f0  rive::DataConverterRangeMapper::convert =====

/* rive::DataConverterRangeMapper::convert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterRangeMapper::convert(DataValue *param_1,DataBind *param_2)

{
  calculateRange((DataConverterRangeMapper *)param_1,(DataValue *)param_2,*(float *)(param_1 + 0xe4)
                 ,*(float *)(param_1 + 0xe8),*(float *)(param_1 + 0xec),*(float *)(param_1 + 0xf0));
  return;
}


// ===== 003ef0fc  rive::DataConverterRangeMapper::reverseConvert =====

/* rive::DataConverterRangeMapper::reverseConvert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterRangeMapper::reverseConvert(DataValue *param_1,DataBind *param_2)

{
  calculateRange((DataConverterRangeMapper *)param_1,(DataValue *)param_2,*(float *)(param_1 + 0xec)
                 ,*(float *)(param_1 + 0xf0),*(float *)(param_1 + 0xe4),*(float *)(param_1 + 0xe8));
  return;
}


// ===== 003ef10c  rive::DataConverterRangeMapper::minInputChanged =====

/* rive::DataConverterRangeMapper::minInputChanged() */

void __thiscall rive::DataConverterRangeMapper::minInputChanged(DataConverterRangeMapper *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ef124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003ef12c  rive::DataConverterRangeMapper::maxInputChanged =====

/* rive::DataConverterRangeMapper::maxInputChanged() */

void __thiscall rive::DataConverterRangeMapper::maxInputChanged(DataConverterRangeMapper *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ef144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003ef14c  rive::DataConverterRangeMapper::minOutputChanged =====

/* rive::DataConverterRangeMapper::minOutputChanged() */

void __thiscall rive::DataConverterRangeMapper::minOutputChanged(DataConverterRangeMapper *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ef164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003ef16c  rive::DataConverterRangeMapper::maxOutputChanged =====

/* rive::DataConverterRangeMapper::maxOutputChanged() */

void __thiscall rive::DataConverterRangeMapper::maxOutputChanged(DataConverterRangeMapper *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ef184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003ef18c  rive::DataConverter::~DataConverter =====

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  (*(code *)PTR__DataConverter_0067fad0)();
  return;
}


// ===== 003ef190  FUN_003ef190 =====

void FUN_003ef190(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003ef1b4  FUN_003ef1b4 =====

undefined8 FUN_003ef1b4(void)

{
  return 0x207;
}


// ===== 003ef1bc  FUN_003ef1bc =====

bool FUN_003ef1bc(undefined8 param_1,short param_2)

{
  return param_2 == 0x207 || param_2 == 0x1e8;
}


// ===== 003ef1d4  FUN_003ef1d4 =====

undefined8 FUN_003ef1d4(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2cc) {
    if (param_2 < 0x2ca) {
      if (param_2 == 0x296) {
        pcVar12 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_003ef448;
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
LAB_003ef448:
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
        if (param_2 != 0x2c9) goto LAB_003ef4c0;
        uVar14 = 0;
        uVar6 = 0;
        pbVar11 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_003ef498;
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
LAB_003ef498:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0xd8) = (int)uVar6;
      }
    }
    else if (param_2 == 0x2ca) {
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ef480;
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
LAB_003ef480:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xdc) = (int)uVar6;
    }
    else {
      if (param_2 != 0x2cb) goto LAB_003ef4c0;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ef4b0;
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
LAB_003ef4b0:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xe0) = (int)uVar6;
    }
    uVar5 = 1;
  }
  else if (param_2 < 0x2ce) {
    if (param_2 == 0x2cc) {
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
      *(undefined4 *)(param_1 + 0xe4) = uVar15;
    }
    else if (param_2 == 0x2cd) {
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
      *(undefined4 *)(param_1 + 0xe8) = uVar15;
    }
  }
  else if (param_2 == 0x2ce) {
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
    *(undefined4 *)(param_1 + 0xec) = uVar15;
  }
  else if (param_2 == 0x2cf) {
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
    *(undefined4 *)(param_1 + 0xf0) = uVar15;
  }
LAB_003ef4c0:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ef548  FUN_003ef548 =====

undefined8 FUN_003ef548(void)

{
  return 2;
}


// ===== 003ef550  FUN_003ef550 =====

void FUN_003ef550(void)

{
  return;
}


// ===== 003ef554  FUN_003ef554 =====

void FUN_003ef554(void)

{
  return;
}


// ===== 003ef558  FUN_003ef558 =====

void FUN_003ef558(void)

{
  return;
}


// ===== 003ef55c  rive::InterpolatorAnimationData::copy =====

/* rive::InterpolatorAnimationData::copy(rive::InterpolatorAnimationData const&) */

void __thiscall
rive::InterpolatorAnimationData::copy
          (InterpolatorAnimationData *this,InterpolatorAnimationData *param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),*(undefined8 *)(this + 8));
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(this + 0x10));
  *(undefined4 *)this = *(undefined4 *)param_1;
  return;
}


// ===== 003ef5ac  rive::InterpolatorAdvancer::dispose =====

/* rive::InterpolatorAdvancer::dispose() */

void __thiscall rive::InterpolatorAdvancer::dispose(InterpolatorAdvancer *this)

{
  *(undefined4 *)this = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
    *(undefined8 *)(this + 8) = 0;
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
    *(undefined8 *)(this + 0x20) = 0;
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}


// ===== 003ef648  rive::InterpolatorAdvancer::currentAnimationData =====

/* rive::InterpolatorAdvancer::currentAnimationData() */

InterpolatorAdvancer * __thiscall
rive::InterpolatorAdvancer::currentAnimationData(InterpolatorAdvancer *this)

{
  if (this[0x30] != (InterpolatorAdvancer)0x0) {
    this = this + 0x18;
  }
  return this;
}


// ===== 003ef65c  rive::InterpolatorAdvancer::advanceAnimationData =====

/* rive::InterpolatorAdvancer::advanceAnimationData(float) */

void __thiscall
rive::InterpolatorAdvancer::advanceAnimationData(InterpolatorAdvancer *this,float param_1)

{
  long lVar1;
  InterpolatorAdvancer *pIVar2;
  long *plVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = 0;
  pIVar2 = this;
  if (this[0x30] != (InterpolatorAdvancer)0x0) {
    lVar1 = 0x18;
    fVar6 = 1.0;
    fVar5 = *(float *)(*(long *)(this + 0x40) + 0xe0);
    if (fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)) {
      fVar6 = *(float *)this / fVar5;
    }
    fVar5 = (float)NEON_fminnm(fVar6,0x3f800000);
    plVar3 = *(long **)(*(long *)(this + 0x40) + 0xe8);
    if (plVar3 != (long *)0x0) {
      fVar5 = (float)(**(code **)(*plVar3 + 0x58))(fVar5);
    }
    (**(code **)(**(long **)(this + 8) + 0x20))
              (fVar5,*(long **)(this + 8),*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20))
    ;
    if (fVar5 == 1.0) {
      (**(code **)(**(long **)(this + 0x20) + 0x28))
                (*(long **)(this + 0x20),*(undefined8 *)(this + 8));
      (**(code **)(**(long **)(this + 0x28) + 0x28))
                (*(long **)(this + 0x28),*(undefined8 *)(this + 0x10));
      fVar5 = *(float *)(this + 0x18);
      this[0x30] = (InterpolatorAdvancer)0x0;
    }
    else {
      fVar5 = *(float *)this + param_1;
    }
    *(float *)this = fVar5;
    pIVar2 = this + 0x18;
  }
  fVar6 = *(float *)(this + lVar1);
  fVar5 = *(float *)(*(long *)(this + 0x40) + 0xe0);
  if (fVar6 < fVar5 == (NAN(fVar6) || NAN(fVar5))) {
    (**(code **)(**(long **)(pIVar2 + 0x10) + 0x28))
              (*(long **)(pIVar2 + 0x10),*(undefined8 *)(this + 0x38));
    if (this[0x30] != (InterpolatorAdvancer)0x0) {
      this[0x30] = (InterpolatorAdvancer)0x0;
      (**(code **)(**(long **)(this + 0x20) + 0x28))
                (*(long **)(this + 0x20),*(undefined8 *)(this + 8));
      (**(code **)(**(long **)(this + 0x28) + 0x28))
                (*(long **)(this + 0x28),*(undefined8 *)(this + 0x10));
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(undefined4 *)this = 0;
    return;
  }
  plVar3 = *(long **)(*(long *)(this + 0x40) + 0xe8);
  *(float *)(this + lVar1) = fVar6 + param_1;
  fVar6 = (fVar6 + param_1) / fVar5;
  if (fVar5 == 0.0 || fVar5 < 0.0 != NAN(fVar5)) {
    fVar6 = 1.0;
  }
  uVar4 = NEON_fminnm(fVar6,0x3f800000);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x003ef79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(pIVar2 + 8) + 0x20))
            (*(long **)(pIVar2 + 8),*(undefined8 *)(pIVar2 + 0x10),*(undefined8 *)(this + 0x38));
  return;
}


// ===== 003ef804  rive::InterpolatorAdvancer::advance =====

/* rive::InterpolatorAdvancer::advance(float) */

bool __thiscall rive::InterpolatorAdvancer::advance(InterpolatorAdvancer *this,float param_1)

{
  InterpolatorAdvancer *pIVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  pIVar1 = this;
  if (this[0x30] != (InterpolatorAdvancer)0x0) {
    pIVar1 = this + 0x18;
  }
  lVar2 = 0;
  if (this[0x30] != (InterpolatorAdvancer)0x0) {
    lVar2 = 0x18;
  }
  uVar4 = (**(code **)(**(long **)(pIVar1 + 0x10) + 0x18))
                    (*(long **)(pIVar1 + 0x10),*(undefined8 *)(this + 0x38));
  bVar3 = false;
  if ((param_1 != 0.0) && ((uVar4 & 1) == 0)) {
    fVar7 = *(float *)(this + lVar2);
    advanceAnimationData(this,param_1);
    fVar6 = *(float *)(*(long *)(this + 0x40) + 0xe0);
    if ((fVar7 < fVar6) &&
       (plVar5 = *(long **)(*(long *)(this + 0x40) + 0xd0), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x88))(plVar5,0x1002,0);
      fVar6 = *(float *)(*(long *)(this + 0x40) + 0xe0);
    }
    bVar3 = *(float *)(this + lVar2) < fVar6;
  }
  return bVar3;
}


// ===== 003ef8bc  rive::DataConverterInterpolator::~DataConverterInterpolator =====

/* rive::DataConverterInterpolator::~DataConverterInterpolator() */

void __thiscall
rive::DataConverterInterpolator::~DataConverterInterpolator(DataConverterInterpolator *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d1c8 + 0xd8;
  *(undefined **)this = PTR_vtable_0067d1c8 + 0x10;
  *(undefined **)(this + 0x28) = puVar1;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 8))();
  }
  *(undefined4 *)(this + 0x100) = 0;
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
    *(undefined8 *)(this + 0x108) = 0;
    if (*(long **)(this + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x110) + 8))();
    }
    *(undefined8 *)(this + 0x110) = 0;
  }
  *(undefined4 *)(this + 0x118) = 0;
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 8))();
    *(undefined8 *)(this + 0x120) = 0;
    if (*(long **)(this + 0x128) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x128) + 8))();
    }
    *(undefined8 *)(this + 0x128) = 0;
  }
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 8))();
    *(undefined8 *)(this + 0x138) = 0;
  }
  DataConverter::~DataConverter((DataConverter *)this);
  return;
}


// ===== 003ef988  rive::DataConverterInterpolator::~DataConverterInterpolator =====

/* rive::DataConverterInterpolator::~DataConverterInterpolator() */

void __thiscall
rive::DataConverterInterpolator::~DataConverterInterpolator(DataConverterInterpolator *this)

{
  ~DataConverterInterpolator(this);
  operator_delete(this);
  return;
}


// ===== 003ef9ac  FUN_003ef9ac =====

undefined8 FUN_003ef9ac(void)

{
  return 0x216;
}


// ===== 003ef9b4  FUN_003ef9b4 =====

bool FUN_003ef9b4(undefined8 param_1,short param_2)

{
  return param_2 == 0x216 || param_2 == 0x1e8;
}


// ===== 003ef9cc  FUN_003ef9cc =====

undefined8 FUN_003ef9cc(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2f5) {
    if (param_2 != 0x296) {
      if (param_2 == 0x2f4) {
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
        *(undefined4 *)(param_1 + 0xe0) = uVar15;
      }
      goto LAB_003efbc0;
    }
    pcVar12 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003efb60;
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
LAB_003efb60:
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
  else if (param_2 == 0x2f6) {
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003efb98;
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
LAB_003efb98:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xdc) = (int)uVar6;
  }
  else {
    if (param_2 != 0x2f5) goto LAB_003efbc0;
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003efb44;
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
LAB_003efb44:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xd8) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003efbc0:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003efbe8  rive::DataConverterInterpolator::convert =====

/* rive::DataConverterInterpolator::convert(rive::DataValue*, rive::DataBind*) */

DataBind * rive::DataConverterInterpolator::convert(DataValue *param_1,DataBind *param_2)

{
  DataValue *pDVar1;
  DataValue *pDVar2;
  undefined8 *puVar3;
  ulong uVar4;
  DataValue DVar5;
  undefined **ppuVar6;
  DataValue *pDVar7;
  
  pDVar1 = param_1 + 0x100;
  if (*(float *)(param_1 + 0xe0) == 0.0 && param_1[0x131] != (DataValue)0x0) {
    if (param_1[0x130] != (DataValue)0x0) {
      pDVar1 = param_1 + 0x118;
    }
    (**(code **)(*(long *)param_2 + 0x28))(param_2,*(undefined8 *)(pDVar1 + 8));
    (**(code **)(*(long *)param_2 + 0x28))(param_2,*(undefined8 *)(pDVar1 + 0x10));
    (**(code **)(*(long *)param_2 + 0x28))(param_2,*(undefined8 *)(param_1 + 0x138));
    param_1[0x130] = (DataValue)0x0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    if (param_1[0x131] == (DataValue)0x0) {
      uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
      if ((uVar4 & 1) == 0) {
        uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,4);
        if ((uVar4 & 1) == 0) {
          return param_2;
        }
        if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xf0) + 8))();
        }
        puVar3 = (undefined8 *)operator_new(0x10);
        ppuVar6 = &PTR_FUN_0066b0c8;
      }
      else {
        if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xf0) + 8))();
        }
        puVar3 = (undefined8 *)operator_new(0x10);
        ppuVar6 = &PTR_FUN_0066af48;
      }
      *puVar3 = ppuVar6;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 **)(param_1 + 0xf0) = puVar3;
      param_1[0x131] = (DataValue)0x1;
      *(DataValue **)(param_1 + 0x140) = param_1;
      puVar3 = (undefined8 *)operator_new(0x10);
      *puVar3 = ppuVar6;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 **)(param_1 + 0x108) = puVar3;
      puVar3 = (undefined8 *)operator_new(0x10);
      *puVar3 = ppuVar6;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 **)(param_1 + 0x110) = puVar3;
      puVar3 = (undefined8 *)operator_new(0x10);
      *puVar3 = ppuVar6;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 **)(param_1 + 0x120) = puVar3;
      puVar3 = (undefined8 *)operator_new(0x10);
      *puVar3 = ppuVar6;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 **)(param_1 + 0x128) = puVar3;
      puVar3 = (undefined8 *)operator_new(0x10);
      *puVar3 = ppuVar6;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 **)(param_1 + 0x138) = puVar3;
    }
    else if (*(long *)(param_1 + 0xf0) == 0) {
      return param_2;
    }
    uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,4), (uVar4 & 1) != 0)) {
      pDVar7 = param_1 + 0x118;
      pDVar2 = pDVar1;
      if (param_1[0x130] != (DataValue)0x0) {
        pDVar2 = pDVar7;
      }
      if ((byte)param_1[0xf8] < 2) {
        (**(code **)(*(long *)param_2 + 0x28))(param_2,*(undefined8 *)(pDVar2 + 8));
        (**(code **)(*(long *)param_2 + 0x28))(param_2,*(undefined8 *)(pDVar2 + 0x10));
        (**(code **)(*(long *)param_2 + 0x28))(param_2,*(undefined8 *)(param_1 + 0x138));
      }
      else {
        uVar4 = (**(code **)(*(long *)param_2 + 0x18))(param_2,*(undefined8 *)(pDVar2 + 0x10));
        if ((uVar4 & 1) == 0) {
          if (*(float *)pDVar2 == 0.0) {
            DVar5 = (DataValue)0x0;
            pDVar7 = pDVar1;
          }
          else {
            if (param_1[0x130] != (DataValue)0x0) {
              (**(code **)(**(long **)(param_1 + 0x120) + 0x28))
                        (*(long **)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x108));
              (**(code **)(**(long **)(param_1 + 0x128) + 0x28))
                        (*(long **)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x110));
              *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x118);
            }
            DVar5 = (DataValue)0x1;
          }
          param_1[0x130] = DVar5;
          (**(code **)(**(long **)(param_1 + 0x138) + 0x28))
                    (*(long **)(param_1 + 0x138),*(undefined8 *)(pDVar7 + 8));
          (**(code **)(*(long *)param_2 + 0x28))(param_2,*(undefined8 *)(pDVar7 + 0x10));
          *(undefined4 *)pDVar7 = 0;
        }
      }
      (**(code **)(**(long **)(param_1 + 0x138) + 0x28))
                (*(long **)(param_1 + 0x138),*(undefined8 *)(param_1 + 0xf0));
      param_2 = *(DataBind **)(param_1 + 0xf0);
    }
  }
  return param_2;
}


// ===== 003efed4  rive::DataConverterInterpolator::reverseConvert =====

/* rive::DataConverterInterpolator::reverseConvert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterInterpolator::reverseConvert(DataValue *param_1,DataBind *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003efedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x58))();
  return;
}


// ===== 003efee0  FUN_003efee0 =====

undefined8 FUN_003efee0(void)

{
  return 99;
}


// ===== 003efee8  rive::DataConverterInterpolator::advance =====

/* rive::DataConverterInterpolator::advance(float) */

bool __thiscall
rive::DataConverterInterpolator::advance(DataConverterInterpolator *this,float param_1)

{
  InterpolatorAdvancer *pIVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  if ((param_1 != 0.0 && param_1 < 0.0 == NAN(param_1)) && ((byte)this[0xf8] < 2)) {
    this[0xf8] = (DataConverterInterpolator)((char)this[0xf8] + 1);
  }
  if (this[0x131] == (DataConverterInterpolator)0x0) {
    bVar3 = true;
  }
  else {
    pIVar1 = (InterpolatorAdvancer *)(this + 0x100);
    if (this[0x130] != (DataConverterInterpolator)0x0) {
      pIVar1 = (InterpolatorAdvancer *)(this + 0x118);
    }
    lVar2 = 0x100;
    if (this[0x130] != (DataConverterInterpolator)0x0) {
      lVar2 = 0x118;
    }
    uVar4 = (**(code **)(**(long **)(pIVar1 + 0x10) + 0x18))
                      (*(long **)(pIVar1 + 0x10),*(undefined8 *)(this + 0x138));
    bVar3 = false;
    if ((param_1 != 0.0) && ((uVar4 & 1) == 0)) {
      fVar7 = *(float *)(this + lVar2);
      InterpolatorAdvancer::advanceAnimationData((InterpolatorAdvancer *)(this + 0x100),param_1);
      fVar6 = *(float *)(*(long *)(this + 0x140) + 0xe0);
      if ((fVar7 < fVar6) &&
         (plVar5 = *(long **)(*(long *)(this + 0x140) + 0xd0), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x88))(plVar5,0x1002,0);
        fVar6 = *(float *)(*(long *)(this + 0x140) + 0xe0);
      }
      bVar3 = *(float *)pIVar1 < fVar6;
    }
  }
  return bVar3;
}


// ===== 003effdc  rive::DataConverterInterpolator::reset =====

/* rive::DataConverterInterpolator::reset() */

void __thiscall rive::DataConverterInterpolator::reset(DataConverterInterpolator *this)

{
  this[0xf8] = (DataConverterInterpolator)0x0;
  *(undefined4 *)(this + 0x100) = 0;
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
    *(undefined8 *)(this + 0x108) = 0;
    if (*(long **)(this + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x110) + 8))();
    }
    *(undefined8 *)(this + 0x110) = 0;
  }
  *(undefined4 *)(this + 0x118) = 0;
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 8))();
    *(undefined8 *)(this + 0x120) = 0;
    if (*(long **)(this + 0x128) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x128) + 8))();
    }
    *(undefined8 *)(this + 0x128) = 0;
  }
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 8))();
    *(undefined8 *)(this + 0x138) = 0;
  }
  *(undefined2 *)(this + 0x130) = 0;
  return;
}


// ===== 003f0080  FUN_003f0080 =====

void FUN_003f0080(void)

{
  return;
}


// ===== 003f0084  FUN_003f0084 =====

void FUN_003f0084(void)

{
  return;
}


// ===== 003f0088  rive::DataConverterInterpolator::durationChanged =====

/* rive::DataConverterInterpolator::durationChanged() */

void __thiscall rive::DataConverterInterpolator::durationChanged(DataConverterInterpolator *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f00a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003f00a8  rive::DataConverterInterpolator::copy =====

/* rive::DataConverterInterpolator::copy(rive::DataConverterInterpolatorBase const&) */

void __thiscall
rive::DataConverterInterpolator::copy
          (DataConverterInterpolator *this,DataConverterInterpolatorBase *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar2 = *(undefined4 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0xd8) = uVar1;
  *(undefined4 *)(this + 0xe0) = uVar2;
  DataConverter::copy((DataConverter *)this,(DataConverter *)param_1);
  return;
}


// ===== 003f00c4  rive::DataConverterInterpolator::interpolator =====

/* rive::DataConverterInterpolator::interpolator(rive::KeyFrameInterpolator*) */

void __thiscall
rive::DataConverterInterpolator::interpolator
          (DataConverterInterpolator *this,KeyFrameInterpolator *param_1)

{
  *(KeyFrameInterpolator **)(this + 0xe8) = param_1;
  return;
}


// ===== 003f00cc  rive::DataConverterSystemNormalizer::convert =====

/* rive::DataConverterSystemNormalizer::convert(rive::DataValue*, rive::DataBind*) */

void __thiscall
rive::DataConverterSystemNormalizer::convert
          (DataConverterSystemNormalizer *this,DataValue *param_1,DataBind *param_2)

{
  if (((byte)param_2[0x10] & 1) == 0) {
    DataConverterOperation::convertValue
              ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
    return;
  }
  DataConverterOperation::reverseConvertValue
            ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
  return;
}


// ===== 003f00e0  rive::DataConverterSystemNormalizer::reverseConvert =====

/* rive::DataConverterSystemNormalizer::reverseConvert(rive::DataValue*, rive::DataBind*) */

void __thiscall
rive::DataConverterSystemNormalizer::reverseConvert
          (DataConverterSystemNormalizer *this,DataValue *param_1,DataBind *param_2)

{
  if (((byte)param_2[0x10] & 1) == 0) {
    DataConverterOperation::convertValue
              ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
    return;
  }
  DataConverterOperation::reverseConvertValue
            ((DataConverterOperation *)this,param_1,*(float *)(this + 0xf0));
  return;
}


// ===== 003f00f4  FUN_003f00f4 =====

void FUN_003f00f4(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f0118  FUN_003f0118 =====

undefined8 FUN_003f0118(void)

{
  return 0x203;
}


// ===== 003f0120  FUN_003f0120 =====

uint FUN_003f0120(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x1e8U & 0xffff) < 0x1d) &
         0x18001001U >> (ulong)(param_2 - 0x1e8U & 0x1f);
}


// ===== 003f0144  rive::DataConverterListToLength::convert =====

/* rive::DataConverterListToLength::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterListToLength::convert(DataValue *param_1,DataBind *param_2)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x10))(param_2,5);
  fVar2 = 0.0;
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)(ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3);
  }
  *(float *)(param_1 + 0xe0) = fVar2;
  return param_1 + 0xd8;
}


// ===== 003f0198  rive::DataConverter::~DataConverter =====

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  (*(code *)PTR__DataConverter_0067fad0)();
  return;
}


// ===== 003f019c  FUN_003f019c =====

void FUN_003f019c(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f01c0  FUN_003f01c0 =====

undefined8 FUN_003f01c0(void)

{
  return 0x24f;
}


// ===== 003f01c8  FUN_003f01c8 =====

bool FUN_003f01c8(undefined8 param_1,short param_2)

{
  return param_2 == 0x24f || param_2 == 0x1e8;
}


// ===== 003f01e0  FUN_003f01e0 =====

undefined8 FUN_003f01e0(void)

{
  return 2;
}


// ===== 003f01e8  rive::DataConverterGroupItem::~DataConverterGroupItem =====

/* rive::DataConverterGroupItem::~DataConverterGroupItem() */

void __thiscall rive::DataConverterGroupItem::~DataConverterGroupItem(DataConverterGroupItem *this)

{
  *(undefined **)this = PTR_vtable_0067d1c0 + 0x10;
  if ((this[0x18] != (DataConverterGroupItem)0x0) && (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003f0210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


// ===== 003f0218  rive::DataConverterGroupItem::~DataConverterGroupItem =====

/* rive::DataConverterGroupItem::~DataConverterGroupItem() */

void __thiscall rive::DataConverterGroupItem::~DataConverterGroupItem(DataConverterGroupItem *this)

{
  ~DataConverterGroupItem(this);
  operator_delete(this);
  return;
}


// ===== 003f023c  FUN_003f023c =====

undefined8 FUN_003f023c(void)

{
  return 0x1f2;
}


// ===== 003f0244  FUN_003f0244 =====

bool FUN_003f0244(undefined8 param_1,short param_2)

{
  return param_2 == 0x1f2;
}


// ===== 003f0254  FUN_003f0254 =====

bool FUN_003f0254(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x2a7) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f02b8;
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
LAB_003f02b8:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x2a7;
}


// ===== 003f02d0  rive::DataConverterGroupItem::clone =====

/* rive::DataConverterGroupItem::clone() const */

long * __thiscall rive::DataConverterGroupItem::clone(DataConverterGroupItem *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = (long *)operator_new(0x20);
  puVar2 = PTR_vtable_0067d1c0;
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar5 = *(long **)(this + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  *plVar3 = (long)(puVar2 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
    plVar3[2] = lVar4;
    *(undefined1 *)(plVar3 + 3) = 1;
  }
  return plVar3;
}


// ===== 003f0344  rive::DataConverterGroupItem::import =====

/* rive::DataConverterGroupItem::import(rive::ImportStack&) */

undefined8 __thiscall
rive::DataConverterGroupItem::import(DataConverterGroupItem *this,ImportStack *param_1)

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
    uVar6 = (ulong)((uint)uVar4 - 1) & 0x17;
  }
  else {
    uVar6 = 0x17;
    if (uVar4 < 0x18) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
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
          BackboardImporter::addDataConverterGroupItemReferencer
                    ((BackboardImporter *)plVar7[3],this);
          uVar4 = *(ulong *)(param_1 + 8);
          if (uVar4 == 0) {
            return 1;
          }
          uVar10 = NEON_cnt(uVar4,1);
          uVar9 = NEON_uaddlv(uVar10,1);
          uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
          if (uVar5 < 2) {
            uVar6 = (ulong)((uint)uVar4 - 1) & 499;
          }
          else {
            uVar6 = 499;
            if (uVar4 < 500) {
              uVar1 = (uint)uVar4 & 0xffff;
              uVar2 = 0;
              if ((uVar4 & 0xffff) != 0) {
                uVar2 = 499 / uVar1;
              }
              uVar6 = (ulong)(499 - uVar2 * uVar1);
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
            if (uVar8 == 499) {
              if ((short)plVar7[2] == 499) {
                if (plVar7[3] == 0) {
                  return 1;
                }
                DataConverterGroup::addItem(*(DataConverterGroup **)(plVar7[3] + 8),this);
                return 0;
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


// ===== 003f050c  FUN_003f050c =====

void FUN_003f050c(void)

{
  return;
}


// ===== 003f0510  rive::DataConverterGroup::~DataConverterGroup =====

/* rive::DataConverterGroup::~DataConverterGroup() */

void __thiscall rive::DataConverterGroup::~DataConverterGroup(DataConverterGroup *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xd8);
  plVar2 = *(long **)(this + 0xe0);
  puVar1 = PTR_vtable_0067d1b8 + 0xc0;
  *(undefined **)this = PTR_vtable_0067d1b8 + 0x10;
  *(undefined **)(this + 0x28) = puVar1;
  if (plVar3 != plVar2) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    plVar3 = *(long **)(this + 0xd8);
  }
  if (plVar3 != (long *)0x0) {
    *(long **)(this + 0xe0) = plVar3;
    operator_delete(plVar3);
  }
  DataConverter::~DataConverter((DataConverter *)this);
  return;
}


// ===== 003f059c  rive::DataConverterGroup::~DataConverterGroup =====

/* rive::DataConverterGroup::~DataConverterGroup() */

void __thiscall rive::DataConverterGroup::~DataConverterGroup(DataConverterGroup *this)

{
  ~DataConverterGroup(this);
  operator_delete(this);
  return;
}


// ===== 003f05c0  FUN_003f05c0 =====

undefined8 FUN_003f05c0(void)

{
  return 499;
}


// ===== 003f05c8  FUN_003f05c8 =====

bool FUN_003f05c8(undefined8 param_1,short param_2)

{
  return param_2 == 499 || param_2 == 0x1e8;
}


// ===== 003f05e0  rive::DataConverterGroup::clone =====

/* rive::DataConverterGroup::clone() const */

DataConverter * __thiscall rive::DataConverterGroup::clone(DataConverterGroup *this)

{
  long *plVar1;
  undefined *puVar2;
  DataConverter *this_00;
  DataConverterGroupItem *pDVar3;
  long *plVar4;
  
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
  puVar2 = PTR_vtable_0067d1b8;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0xc1) = 0;
  *(undefined8 *)(this_00 + 0xb9) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined **)(this_00 + 0x28) = puVar2 + 0xc0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  DataConverter::copy(this_00,(DataConverter *)this);
  plVar1 = *(long **)(this + 0xe0);
  for (plVar4 = *(long **)(this + 0xd8); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if (((long *)*plVar4)[2] != 0) {
      pDVar3 = (DataConverterGroupItem *)(**(code **)(*(long *)*plVar4 + 0x28))();
      addItem((DataConverterGroup *)this_00,pDVar3);
    }
  }
  return this_00;
}


// ===== 003f06a4  rive::DataConverterGroup::convert =====

/* rive::DataConverterGroup::convert(rive::DataValue*, rive::DataBind*) */

DataValue * __thiscall
rive::DataConverterGroup::convert(DataConverterGroup *this,DataValue *param_1,DataBind *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0xe0);
  for (plVar1 = *(long **)(this + 0xd8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    plVar3 = *(long **)(*plVar1 + 0x10);
    if (plVar3 != (long *)0x0) {
      param_1 = (DataValue *)(**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2);
    }
  }
  return param_1;
}


// ===== 003f070c  rive::DataConverterGroup::reverseConvert =====

/* rive::DataConverterGroup::reverseConvert(rive::DataValue*, rive::DataBind*) */

DataValue * __thiscall
rive::DataConverterGroup::reverseConvert
          (DataConverterGroup *this,DataValue *param_1,DataBind *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0xd8);
  plVar3 = *(long **)(this + 0xe0);
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      plVar1 = *(long **)(*plVar3 + 0x10);
      if (plVar1 != (long *)0x0) {
        param_1 = (DataValue *)(**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2);
        plVar2 = *(long **)(this + 0xd8);
      }
    } while (plVar3 != plVar2);
  }
  return param_1;
}


// ===== 003f0778  FUN_003f0778 =====

undefined8 FUN_003f0778(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8);
  if (uVar3 != 0) {
    uVar3 = uVar3 >> 3 & 0xffffffff;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      iVar1 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0xd8) +
                                                (uVar3 & 0x7fffffff) * 8) + 0x10) + 0x68))();
      if (iVar1 != 99) {
                    /* WARNING: Could not recover jumptable at 0x003f07ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0xd8) +
                                                  (uVar3 & 0x7fffffff) * 8) + 0x10) + 0x68))();
        return uVar2;
      }
    }
  }
  return 0;
}


// ===== 003f0804  rive::DataConverterGroup::bindFromContext =====

/* rive::DataConverterGroup::bindFromContext(rive::DataContext*, rive::DataBind*) */

void __thiscall
rive::DataConverterGroup::bindFromContext
          (DataConverterGroup *this,DataContext *param_1,DataBind *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  puVar3 = *(undefined8 **)(this + 0x38);
  *(DataBind **)(this + 0xd0) = param_2;
  for (; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    uVar5 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x1bf);
    if ((uVar5 & 1) != 0) {
      DataBindContext::bindFromContext((DataBindContext *)*puVar1,param_1);
    }
  }
  plVar2 = *(long **)(this + 0xd8);
  plVar4 = *(long **)(this + 0xe0);
  *(DataContext **)(this + 0xc0) = param_1;
  for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
    plVar6 = *(long **)(*plVar2 + 0x10);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x70))(plVar6,param_1,param_2);
    }
  }
  return;
}


// ===== 003f08bc  rive::DataConverterGroup::unbind =====

/* rive::DataConverterGroup::unbind() */

void __thiscall rive::DataConverterGroup::unbind(DataConverterGroup *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(this + 0xe0);
  for (plVar2 = *(long **)(this + 0xd8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*(long **)(*plVar2 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(*plVar2 + 0x10) + 0x78))();
    }
  }
  return;
}


// ===== 003f0904  rive::DataConverterGroup::update =====

/* rive::DataConverterGroup::update() */

void __thiscall rive::DataConverterGroup::update(DataConverterGroup *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(this + 0xe0);
  for (plVar2 = *(long **)(this + 0xd8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*(long **)(*plVar2 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(*plVar2 + 0x10) + 0x80))();
    }
  }
  return;
}


// ===== 003f094c  rive::DataConverterGroup::advance =====

/* rive::DataConverterGroup::advance(float) */

uint __thiscall rive::DataConverterGroup::advance(DataConverterGroup *this,float param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = *(long **)(this + 0xd8);
  plVar1 = *(long **)(this + 0xe0);
  if (plVar3 == plVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      if (*(long **)(*plVar3 + 0x10) != (long *)0x0) {
        uVar2 = (**(code **)(**(long **)(*plVar3 + 0x10) + 0x88))(param_1);
        uVar4 = uVar2 | uVar4;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return uVar4 & 1;
}


// ===== 003f09c4  rive::DataConverterGroup::reset =====

/* rive::DataConverterGroup::reset() */

void __thiscall rive::DataConverterGroup::reset(DataConverterGroup *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(this + 0xe0);
  for (plVar2 = *(long **)(this + 0xd8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*(long **)(*plVar2 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(*plVar2 + 0x10) + 0x98))();
    }
  }
  return;
}


// ===== 003f0a0c  rive::DataConverterGroup::addItem =====

/* rive::DataConverterGroup::addItem(rive::DataConverterGroupItem*) */

void __thiscall
rive::DataConverterGroup::addItem(DataConverterGroup *this,DataConverterGroupItem *param_1)

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
    goto LAB_003f0b4c;
  }
  puVar9 = *(undefined8 **)(this + 0xd8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003f0b70();
LAB_003f0b6c:
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
    if (uVar5 >> 0x3d != 0) goto LAB_003f0b6c;
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
      if (uVar6 == uVar7) goto LAB_003f0b38;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xd8);
  }
LAB_003f0b38:
  *(undefined8 **)(this + 0xd8) = puVar4;
  *(undefined8 **)(this + 0xe0) = puVar13;
  *(void **)(this + 0xe8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003f0b4c:
  *(undefined8 **)(this + 0xe0) = puVar13;
  return;
}


// ===== 003f0b70  FUN_003f0b70 =====

void FUN_003f0b70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003f0b84  rive::DataConverterStringRemoveZeros::removeZeros =====

/* rive::DataConverterStringRemoveZeros::removeZeros(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
rive::DataConverterStringRemoveZeros::removeZeros
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          DataConverterStringRemoveZeros *this)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  long local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (((byte)*this & 1) == 0) {
    uVar10 = *(undefined8 *)this;
    uVar7 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
    *(undefined8 *)param_1 = uVar10;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(this + 0x10),*(ulong *)(this + 8));
  }
  lVar5 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                    ((char)param_1,0x2e);
  if (lVar5 == -1) goto LAB_003f0d70;
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (param_1 + 0x10);
  uVar8 = (ulong)((byte)*param_1 >> 1);
  uVar6 = uVar1;
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar6 = uVar8;
    uVar1 = uVar8;
  }
  do {
    uVar8 = uVar6;
    if (uVar8 == 0) break;
    uVar6 = uVar8 - 1;
  } while (pbVar2[uVar8 - 1] ==
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x30);
  if (uVar8 <= uVar1) {
    uVar1 = uVar8;
  }
  if (0xffffffffffffffef < uVar1) goto LAB_003f0da0;
  if (uVar1 < 0x17) {
    pvVar9 = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar1 << 1));
    if (uVar1 != 0) goto LAB_003f0c80;
  }
  else {
    pvVar9 = operator_new((uVar1 | 0xf) + 1);
    local_70 = (uVar1 | 0xf) + 2;
    uStack_68 = uVar1;
    local_60 = pvVar9;
LAB_003f0c80:
    memmove(pvVar9,pbVar2,uVar1);
  }
  bVar3 = *param_1;
  *(undefined1 *)((long)pvVar9 + uVar1) = 0;
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(ulong *)(param_1 + 8) = uStack_68;
  *(long *)param_1 = local_70;
  *(void **)(param_1 + 0x10) = local_60;
  uVar6 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                    ((char)param_1,0x2e);
  bVar3 = *param_1;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar6 != uVar1 - 1) goto LAB_003f0d70;
  pbVar2 = param_1 + 1;
  if (((byte)bVar3 & 1) != 0) {
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
  }
  if (uVar6 <= uVar1) {
    uVar1 = uVar6;
  }
  if (0xffffffffffffffef < uVar1) {
LAB_003f0da0:
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0(&local_70);
  }
  if (uVar1 < 0x17) {
    pvVar9 = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar1 << 1));
    if (uVar1 != 0) goto LAB_003f0d3c;
  }
  else {
    pvVar9 = operator_new((uVar1 | 0xf) + 1);
    local_70 = (uVar1 | 0xf) + 2;
    uStack_68 = uVar1;
    local_60 = pvVar9;
LAB_003f0d3c:
    memmove(pvVar9,pbVar2,uVar1);
  }
  bVar3 = *param_1;
  *(undefined1 *)((long)pvVar9 + uVar1) = 0;
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(ulong *)(param_1 + 8) = uStack_68;
  *(long *)param_1 = local_70;
  *(void **)(param_1 + 0x10) = local_60;
LAB_003f0d70:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f0da8  rive::DataConverterStringRemoveZeros::convert =====

/* rive::DataConverterStringRemoveZeros::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterStringRemoveZeros::convert(DataValue *param_1,DataBind *param_2)

{
  long lVar1;
  ulong uVar2;
  ushort local_a8 [8];
  char *local_98;
  DataConverterStringRemoveZeros local_90 [8];
  ulong uStack_88;
  char *local_80;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  DataConverterStringRemoveZeros local_50 [8];
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_2 + 0x10))(param_2,1);
  if ((uVar2 & 1) == 0) {
    local_a8[0] = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0xe0),(basic_string *)local_a8);
    if ((local_a8[0] & 1) == 0) goto LAB_003f0ea4;
  }
  else {
    if (((byte)param_2[8] & 1) == 0) {
      uStack_68 = *(undefined8 *)(param_2 + 0x10);
      local_70 = *(ulong *)(param_2 + 8);
      local_60 = *(void **)(param_2 + 0x18);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10));
    }
    removeZeros(local_50,&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (((byte)local_50[0] & 1) == 0) {
      local_90[0] = local_50[0];
      uStack_88 = uStack_48;
      local_80 = local_40;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_90,local_40,uStack_48);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0xe0),(basic_string *)local_90);
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    local_98 = local_40;
    if (((byte)local_50[0] & 1) == 0) goto LAB_003f0ea4;
  }
  operator_delete(local_98);
LAB_003f0ea4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1 + 0xd8;
}


// ===== 003f0ed0  FUN_003f0ed0 =====

void FUN_003f0ed0(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d208 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d208 + 0xc0;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0xd8) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003f0f28  FUN_003f0f28 =====

void FUN_003f0f28(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d208 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d208 + 0xc0;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0xd8) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f0f84  FUN_003f0f84 =====

undefined8 FUN_003f0f84(void)

{
  return 0x213;
}


// ===== 003f0f8c  FUN_003f0f8c =====

bool FUN_003f0f8c(undefined8 param_1,short param_2)

{
  return param_2 == 0x213 || param_2 == 0x1e8;
}


// ===== 003f0fa4  FUN_003f0fa4 =====

undefined8 FUN_003f0fa4(void)

{
  return 1;
}


// ===== 003f0fac  rive::DataConverterRounder::convert =====

/* rive::DataConverterRounder::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterRounder::convert(DataValue *param_1,DataBind *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
  fVar2 = 0.0;
  if ((uVar1 & 1) != 0) {
    fVar3 = *(float *)(param_2 + 8);
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd8));
    fVar2 = powf(10.0,fVar2);
    fVar2 = (float)(int)(fVar3 * fVar2) / fVar2;
  }
  *(float *)(param_1 + 0xe8) = fVar2;
  return param_1 + 0xe0;
}


// ===== 003f1018  rive::DataConverter::~DataConverter =====

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  (*(code *)PTR__DataConverter_0067fad0)();
  return;
}


// ===== 003f101c  FUN_003f101c =====

void FUN_003f101c(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f1040  FUN_003f1040 =====

undefined8 FUN_003f1040(void)

{
  return 0x1e9;
}


// ===== 003f1048  FUN_003f1048 =====

bool FUN_003f1048(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffe) == 0x1e8;
}


// ===== 003f1058  FUN_003f1058 =====

void FUN_003f1058(long param_1,short param_2,long *param_3)

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
        goto LAB_003f1160;
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
LAB_003f1160:
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
    if (param_2 != 0x29d) {
      uVar5 = 0;
      goto LAB_003f1190;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f1144;
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
LAB_003f1144:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xd8) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003f1190:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003f11b4  FUN_003f11b4 =====

undefined8 FUN_003f11b4(void)

{
  return 2;
}


// ===== 003f11bc  FUN_003f11bc =====

void FUN_003f11bc(void)

{
  return;
}


// ===== 003f11c0  rive::DataConverterStringPad::convert =====

/* rive::DataConverterStringPad::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterStringPad::convert(DataValue *param_1,DataBind *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  DataValue DVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ushort local_c8 [8];
  char *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ushort local_98 [8];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = (**(code **)(*(long *)param_2 + 0x10))(param_2,1);
  if ((uVar6 & 1) == 0) {
    local_c8[0] = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0x108),(basic_string *)local_c8);
    if ((local_c8[0] & 1) == 0) goto LAB_003f13d4;
  }
  else {
    if (((byte)param_2[8] & 1) == 0) {
      uStack_58 = *(ulong *)(param_2 + 0x10);
      local_60 = *(ulong *)(param_2 + 8);
      local_50 = *(char **)(param_2 + 0x18);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_60,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10));
    }
    uVar7 = local_60 & 0xff;
    uVar6 = local_60 >> 1 & 0x7f;
    if ((local_60 & 1) != 0) {
      uVar6 = uStack_58;
    }
    if (uVar6 < *(uint *)(param_1 + 0xd8)) {
      DVar4 = param_1[0xe0];
      uVar1 = (ulong)((byte)DVar4 >> 1);
      if (((byte)DVar4 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0xe8);
      }
      if (uVar1 != 0) {
        if (((byte)DVar4 & 1) == 0) {
          uStack_78 = *(ulong *)(param_1 + 0xe8);
          local_80 = *(ulong *)(param_1 + 0xe0);
          local_70 = *(void **)(param_1 + 0xf0);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,*(char **)(param_1 + 0xf0),*(ulong *)(param_1 + 0xe8));
        }
        uVar1 = uStack_78;
        uVar7 = local_80;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)&local_60);
        uVar3 = *(uint *)(param_1 + 0xd8);
        local_98[0] = 0;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)local_98);
        if (uVar6 < *(uint *)(param_1 + 0xd8)) {
          uVar2 = uVar7 >> 1 & 0x7f;
          if ((uVar7 & 1) != 0) {
            uVar2 = uVar1;
          }
          uVar7 = uVar3 - uVar6;
          if (uVar2 <= uVar3 - uVar6) {
            uVar7 = uVar2;
          }
          do {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string *)local_98,(ulong)&local_80,0);
            uVar6 = uVar6 + uVar7;
          } while (uVar6 < *(uint *)(param_1 + 0xd8));
        }
        if (*(int *)(param_1 + 0xf8) == 1) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string *)&local_60,(ulong)local_98,0);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                    ((ulong)&local_60,(basic_string *)0x0,(ulong)local_98,0);
        }
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        uVar7 = local_60 & 0xff;
      }
    }
    if ((uVar7 & 1) == 0) {
      uStack_a8 = uStack_58;
      local_b0 = local_60;
      local_a0 = local_50;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b0,local_50,uStack_58);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0x108),(basic_string *)&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    local_b8 = local_50;
    if ((local_60 & 1) == 0) goto LAB_003f13d4;
  }
  operator_delete(local_b8);
LAB_003f13d4:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return param_1 + 0x100;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f1404  rive::DataConverterStringPad::lengthChanged =====

/* rive::DataConverterStringPad::lengthChanged() */

void __thiscall rive::DataConverterStringPad::lengthChanged(DataConverterStringPad *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003f1424  rive::DataConverterStringPad::padTypeChanged =====

/* rive::DataConverterStringPad::padTypeChanged() */

void __thiscall rive::DataConverterStringPad::padTypeChanged(DataConverterStringPad *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003f1444  rive::DataConverterStringPad::textChanged =====

/* rive::DataConverterStringPad::textChanged() */

void __thiscall rive::DataConverterStringPad::textChanged(DataConverterStringPad *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003f1464  FUN_003f1464 =====

void FUN_003f1464(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d200 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d200 + 0xd8;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0x100) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0x108] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x118));
  }
  puVar1 = PTR_vtable_0067d470 + 0xd8;
  *(undefined **)param_1 = PTR_vtable_0067d470 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003f14e0  FUN_003f14e0 =====

void FUN_003f14e0(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d200 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d200 + 0xd8;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0x100) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0x108] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x118));
  }
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


// ===== 003f1564  FUN_003f1564 =====

undefined8 FUN_003f1564(void)

{
  return 0x212;
}


// ===== 003f156c  FUN_003f156c =====

bool FUN_003f156c(undefined8 param_1,short param_2)

{
  return param_2 == 0x212 || param_2 == 0x1e8;
}


// ===== 003f1584  FUN_003f1584 =====

undefined8 FUN_003f1584(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2e8) {
    if (param_2 == 0x296) {
      pcVar11 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar11) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f1764;
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
LAB_003f1764:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar13 = (byte *)(param_1 + 0x10);
      if ((*pbVar13 & 1) != 0) {
        pvVar5 = *(void **)(param_1 + 0x20);
LAB_003f17a4:
        operator_delete(pvVar5);
      }
LAB_003f17a8:
      *(undefined8 *)(pbVar13 + 8) = uStack_38;
      *(undefined8 *)pbVar13 = local_40;
      *(undefined8 *)(pbVar13 + 0x10) = local_30;
    }
    else {
      if (param_2 != 0x2e7) goto LAB_003f17bc;
      uVar12 = 0;
      uVar7 = 0;
      pbVar13 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f1730;
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
LAB_003f1730:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xd8) = (int)uVar7;
    }
  }
  else {
    if (param_2 == 0x2e8) {
      pcVar11 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar11) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f178c;
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
LAB_003f178c:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar13 = (byte *)(param_1 + 0xe0);
      if ((*pbVar13 & 1) != 0) {
        pvVar5 = *(void **)(param_1 + 0xf0);
        goto LAB_003f17a4;
      }
      goto LAB_003f17a8;
    }
    if (param_2 != 0x2e9) goto LAB_003f17bc;
    uVar12 = 0;
    uVar7 = 0;
    pbVar13 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f1748;
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
LAB_003f1748:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xf8) = (int)uVar7;
  }
  uVar6 = 1;
LAB_003f17bc:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f17e4  FUN_003f17e4 =====

undefined8 FUN_003f17e4(void)

{
  return 1;
}


// ===== 003f17ec  rive::DataConverterTrigger::convert =====

/* rive::DataConverterTrigger::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterTrigger::convert(DataValue *param_1,DataBind *param_2)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x10))(param_2,9);
  if ((uVar1 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) + 1;
  }
  *(int *)(param_1 + 0xe0) = iVar2;
  return param_1 + 0xd8;
}


// ===== 003f183c  rive::DataConverter::~DataConverter =====

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  (*(code *)PTR__DataConverter_0067fad0)();
  return;
}


// ===== 003f1840  FUN_003f1840 =====

void FUN_003f1840(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f1864  FUN_003f1864 =====

undefined8 FUN_003f1864(void)

{
  return 0x1f8;
}


// ===== 003f186c  FUN_003f186c =====

bool FUN_003f186c(undefined8 param_1,int param_2)

{
  return (param_2 - 0x1e8U & 0xffef) == 0;
}


// ===== 003f1880  FUN_003f1880 =====

undefined8 FUN_003f1880(void)

{
  return 7;
}


// ===== 003f1888  rive::DataConverterStringTrim::convert =====

/* rive::DataConverterStringTrim::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterStringTrim::convert(DataValue *param_1,DataBind *param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ushort local_88 [8];
  byte *local_78;
  ulong local_70;
  ulong uStack_68;
  byte *local_60;
  ulong local_50;
  ulong uStack_48;
  byte *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,1);
  if ((uVar4 & 1) == 0) {
    local_88[0] = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0xe8),(basic_string *)local_88);
    if ((local_88[0] & 1) == 0) goto LAB_003f1b18;
  }
  else {
    if (((byte)param_2[8] & 1) == 0) {
      uStack_48 = *(ulong *)(param_2 + 0x10);
      local_50 = *(ulong *)(param_2 + 8);
      local_40 = *(byte **)(param_2 + 0x18);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10));
    }
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 3) {
      uVar4 = (ulong)((byte)local_50._0_1_ >> 1);
      pbVar3 = (byte *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        uVar4 = uStack_48;
        pbVar3 = local_40;
      }
      do {
        uVar5 = uVar4;
        pbVar6 = pbVar3;
        if (uVar5 == 0) goto LAB_003f1a48;
        uVar4 = uVar5 - 1;
      } while ((pbVar3[uVar5 - 1] == 0x20) || (0xfffffffa < pbVar3[uVar5 - 1] - 0xe));
      pbVar6 = pbVar3 + uVar5;
LAB_003f1a48:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      erase((ulong)&local_50,(long)pbVar6 - (long)pbVar3);
      uVar4 = local_50 >> 1 & 0x7f;
      pbVar3 = (byte *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        uVar4 = uStack_48;
        pbVar3 = local_40;
      }
      for (; (uVar4 != 0 && ((*pbVar3 == 0x20 || (0xfffffffa < *pbVar3 - 0xe))));
          pbVar3 = pbVar3 + 1) {
        uVar4 = uVar4 - 1;
      }
LAB_003f1ab4:
      uVar4 = 0;
LAB_003f1ac0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      erase((ulong)&local_50,uVar4);
    }
    else {
      if (iVar1 == 2) {
        uVar4 = (ulong)((byte)local_50._0_1_ >> 1);
        pbVar3 = (byte *)((ulong)&local_50 | 1);
        if ((local_50 & 1) != 0) {
          uVar4 = uStack_48;
          pbVar3 = local_40;
        }
        do {
          uVar5 = uVar4;
          pbVar6 = pbVar3;
          if (uVar5 == 0) goto LAB_003f1a34;
          uVar4 = uVar5 - 1;
        } while ((pbVar3[uVar5 - 1] == 0x20) || (0xfffffffa < pbVar3[uVar5 - 1] - 0xe));
        pbVar6 = pbVar3 + uVar5;
LAB_003f1a34:
        uVar4 = (long)pbVar6 - (long)pbVar3;
        goto LAB_003f1ac0;
      }
      if (iVar1 == 1) {
        uVar4 = (ulong)((byte)local_50._0_1_ >> 1);
        pbVar3 = (byte *)((ulong)&local_50 | 1);
        if ((local_50 & 1) != 0) {
          uVar4 = uStack_48;
          pbVar3 = local_40;
        }
        for (; (uVar4 != 0 && ((*pbVar3 == 0x20 || (0xfffffffa < *pbVar3 - 0xe))));
            pbVar3 = pbVar3 + 1) {
          uVar4 = uVar4 - 1;
        }
        goto LAB_003f1ab4;
      }
    }
    if ((local_50 & 1) == 0) {
      uStack_68 = uStack_48;
      local_70 = local_50;
      local_60 = local_40;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,(char *)local_40,uStack_48);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0xe8),(basic_string *)&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    local_78 = local_40;
    if ((local_50 & 1) == 0) goto LAB_003f1b18;
  }
  operator_delete(local_78);
LAB_003f1b18:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1 + 0xe0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f1b44  rive::DataConverterStringTrim::trimTypeChanged =====

/* rive::DataConverterStringTrim::trimTypeChanged() */

void __thiscall rive::DataConverterStringTrim::trimTypeChanged(DataConverterStringTrim *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f1b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003f1b64  FUN_003f1b64 =====

void FUN_003f1b64(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d210 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d210 + 200;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0xe8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf8));
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003f1bbc  FUN_003f1bbc =====

void FUN_003f1bbc(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d210 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d210 + 200;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0xe8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf8));
  }
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f1c18  FUN_003f1c18 =====

undefined8 FUN_003f1c18(void)

{
  return 0x214;
}


// ===== 003f1c20  FUN_003f1c20 =====

bool FUN_003f1c20(undefined8 param_1,short param_2)

{
  return param_2 == 0x214 || param_2 == 0x1e8;
}


// ===== 003f1c38  FUN_003f1c38 =====

void FUN_003f1c38(long param_1,short param_2,long *param_3)

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
        goto LAB_003f1d40;
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
LAB_003f1d40:
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
    if (param_2 != 0x2ea) {
      uVar5 = 0;
      goto LAB_003f1d70;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f1d24;
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
LAB_003f1d24:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xd8) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003f1d70:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003f1d94  FUN_003f1d94 =====

undefined8 FUN_003f1d94(void)

{
  return 1;
}


// ===== 003f1d9c  rive::DataConverterOperationViewModel::resolveValue =====

/* rive::DataConverterOperationViewModel::resolveValue(rive::DataBind*) */

undefined4 rive::DataConverterOperationViewModel::resolveValue(DataBind *param_1)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x110);
  }
  return 0;
}


// ===== 003f1db4  rive::DataConverterOperationViewModel::convert =====

/* rive::DataConverterOperationViewModel::convert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterOperationViewModel::convert(DataValue *param_1,DataBind *param_2)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    DataConverterOperation::convertValue
              ((DataConverterOperation *)param_1,(DataValue *)param_2,
               *(float *)(*(long *)(param_1 + 0xf0) + 0x110));
    return;
  }
  DataConverterOperation::convertValue((DataConverterOperation *)param_1,(DataValue *)param_2,0.0);
  return;
}


// ===== 003f1dcc  rive::DataConverterOperationViewModel::reverseConvert =====

/* rive::DataConverterOperationViewModel::reverseConvert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterOperationViewModel::reverseConvert(DataValue *param_1,DataBind *param_2)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    DataConverterOperation::reverseConvertValue
              ((DataConverterOperation *)param_1,(DataValue *)param_2,
               *(float *)(*(long *)(param_1 + 0xf0) + 0x110));
    return;
  }
  DataConverterOperation::reverseConvertValue
            ((DataConverterOperation *)param_1,(DataValue *)param_2,0.0);
  return;
}


// ===== 003f1de4  rive::DataConverterOperationViewModel::decodeSourcePathIds =====

/* rive::DataConverterOperationViewModel::decodeSourcePathIds(rive::Span<unsigned char const>) */

void rive::DataConverterOperationViewModel::decodeSourcePathIds(long param_1)

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
LAB_003f1e3c:
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
        goto LAB_003f1ea4;
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
LAB_003f1ea4:
      uVar17 = 0;
      local_78 = pbVar1;
    }
    puVar16 = *(undefined4 **)(param_1 + 0x100);
    if (*(undefined4 **)(param_1 + 0x108) <= puVar16) {
      puVar13 = *(undefined4 **)(param_1 + 0xf8);
      lVar14 = (long)puVar16 - (long)puVar13 >> 2;
      uVar9 = lVar14 + 1;
      if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003b1ebc();
      }
      uVar6 = (long)*(undefined4 **)(param_1 + 0x108) - (long)puVar13;
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
          if (uVar9 == uVar6) goto LAB_003f1f90;
        }
        do {
          puVar16 = puVar16 + -1;
          puVar7 = puVar7 + -1;
          *puVar7 = *puVar16;
        } while (puVar16 != puVar13);
      }
LAB_003f1f90:
      *(undefined4 **)(param_1 + 0xf8) = puVar7;
      *(undefined4 **)(param_1 + 0x100) = puVar15;
      *(void **)(param_1 + 0x108) = (void *)((long)pvVar5 + uVar10 * 4);
      if (puVar13 != (undefined4 *)0x0) {
        operator_delete(puVar13);
      }
      *(undefined4 **)(param_1 + 0x100) = puVar15;
      goto LAB_003f1e3c;
    }
    *puVar16 = (int)uVar17;
    *(undefined4 **)(param_1 + 0x100) = puVar16 + 1;
  } while( true );
}


// ===== 003f1ff0  rive::DataConverterOperationViewModel::copySourcePathIds =====

/* rive::DataConverterOperationViewModel::copySourcePathIds(rive::DataConverterOperationViewModelBase
   const&) */

void __thiscall
rive::DataConverterOperationViewModel::copySourcePathIds
          (DataConverterOperationViewModel *this,DataConverterOperationViewModelBase *param_1)

{
  if (this != (DataConverterOperationViewModel *)param_1) {
    FUN_003bf3d0(this + 0xf8,*(long *)(param_1 + 0xf8),*(long *)(param_1 + 0x100),
                 *(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 2);
    return;
  }
  return;
}


// ===== 003f2014  rive::DataConverterOperationViewModel::bindFromContext =====

/* rive::DataConverterOperationViewModel::bindFromContext(rive::DataContext*, rive::DataBind*) */

void __thiscall
rive::DataConverterOperationViewModel::bindFromContext
          (DataConverterOperationViewModel *this,DataContext *param_1,DataBind *param_2)

{
  ViewModelValueDependent *pVVar1;
  undefined8 *puVar2;
  void *__src;
  undefined8 *puVar3;
  long lVar4;
  void *__dest;
  ViewModelInstanceValue *this_00;
  ulong uVar5;
  void *local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  puVar3 = *(undefined8 **)(this + 0x38);
  *(DataBind **)(this + 0xd0) = param_2;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    uVar5 = (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,0x1bf);
    if ((uVar5 & 1) != 0) {
      DataBindContext::bindFromContext((DataBindContext *)*puVar2,param_1);
    }
  }
  __src = *(void **)(this + 0xf8);
  *(DataContext **)(this + 0xc0) = param_1;
  local_68 = 0;
  local_60 = 0;
  local_70 = (void *)0x0;
  uVar5 = *(long *)(this + 0x100) - (long)__src;
  if (uVar5 == 0) {
    this_00 = (ViewModelInstanceValue *)DataContext::getViewModelProperty(param_1,&local_70);
  }
  else {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003b1ebc();
    }
    __dest = operator_new(uVar5);
    local_70 = __dest;
    local_60 = (long)__dest + uVar5;
    memcpy(__dest,__src,uVar5);
    local_68 = (long)__dest + uVar5;
    this_00 = (ViewModelInstanceValue *)DataContext::getViewModelProperty(param_1,&local_70);
    operator_delete(__dest);
  }
  if ((this_00 == (ViewModelInstanceValue *)0x0) ||
     (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1ba), (uVar5 & 1) == 0)) {
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else {
    *(ViewModelInstanceValue **)(this + 0xf0) = this_00;
    pVVar1 = (ViewModelValueDependent *)0x0;
    if (param_2 != (DataBind *)0x0) {
      pVVar1 = (ViewModelValueDependent *)(param_2 + 0x18);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      ViewModelInstanceValue::addDependent(this_00,pVVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f2190  FUN_003f2190 =====

void FUN_003f2190(DataConverter *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0xf8);
  puVar1 = PTR_vtable_0067d1e8 + 0xe0;
  *(undefined **)param_1 = PTR_vtable_0067d1e8 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x100) = pvVar2;
    operator_delete(pvVar2);
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003f21dc  FUN_003f21dc =====

void FUN_003f21dc(DataConverter *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0xf8);
  puVar1 = PTR_vtable_0067d1e8 + 0xe0;
  *(undefined **)param_1 = PTR_vtable_0067d1e8 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x100) = pvVar2;
    operator_delete(pvVar2);
  }
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f222c  FUN_003f222c =====

undefined8 FUN_003f222c(void)

{
  return 0x205;
}


// ===== 003f2234  FUN_003f2234 =====

uint FUN_003f2234(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x1e8U & 0xffff) < 0x1e) &
         0x30000001U >> (ulong)(param_2 - 0x1e8U & 0x1f);
}


// ===== 003f2258  FUN_003f2258 =====

void FUN_003f2258(long *param_1,short param_2,long *param_3)

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
  if (param_2 == 0x296) {
    pcVar13 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar13) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f23b8;
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
LAB_003f23b8:
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
  else if (param_2 == 0x2aa) {
    uVar11 = 0;
    uVar7 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f239c;
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
LAB_003f239c:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x1b) = (int)uVar7;
  }
  else {
    if (param_2 != 0x2c7) {
      uVar5 = 0;
      goto LAB_003f2410;
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
        goto LAB_003f23f8;
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
LAB_003f23f8:
    lVar10 = *param_1;
    param_3[2] = (long)pbVar12;
    (**(code **)(lVar10 + 0xa8))(param_1,pbVar6,uVar7);
  }
  uVar5 = 1;
LAB_003f2410:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003f2434  FUN_003f2434 =====

void FUN_003f2434(void)

{
  return;
}


// ===== 003f2438  rive::DataConverterBooleanNegate::convert =====

/* rive::DataConverterBooleanNegate::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterBooleanNegate::convert(DataValue *param_1,DataBind *param_2)

{
  ulong uVar1;
  DataValue DVar2;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x10))(param_2,3);
  if ((uVar1 & 1) == 0) {
    DVar2 = (DataValue)0x0;
  }
  else {
    DVar2 = (DataValue)((byte)param_2[8] ^ 1);
  }
  param_1[0xe0] = DVar2;
  return param_1 + 0xd8;
}


// ===== 003f2488  rive::DataConverterBooleanNegate::reverseConvert =====

/* rive::DataConverterBooleanNegate::reverseConvert(rive::DataValue*, rive::DataBind*) */

void rive::DataConverterBooleanNegate::reverseConvert(DataValue *param_1,DataBind *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003f2490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x58))();
  return;
}


// ===== 003f2494  rive::DataConverter::~DataConverter =====

void __thiscall rive::DataConverter::~DataConverter(DataConverter *this)

{
  (*(code *)PTR__DataConverter_0067fad0)();
  return;
}


// ===== 003f2498  FUN_003f2498 =====

void FUN_003f2498(DataConverter *param_1)

{
  rive::DataConverter::~DataConverter(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f24bc  FUN_003f24bc =====

undefined8 FUN_003f24bc(void)

{
  return 0x217;
}


// ===== 003f24c4  FUN_003f24c4 =====

bool FUN_003f24c4(undefined8 param_1,short param_2)

{
  return param_2 == 0x217 || param_2 == 0x1e8;
}


// ===== 003f24dc  FUN_003f24dc =====

undefined8 FUN_003f24dc(void)

{
  return 3;
}


// ===== 003f24e4  rive::DataConverterToString::formatWithCommas =====

/* rive::DataConverterToString::formatWithCommas(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void * rive::DataConverterToString::formatWithCommas(basic_string *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  basic_string bVar5;
  ushort uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  ulong __n_00;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  basic_string *in_x1;
  uint uVar13;
  long *in_x8;
  long lVar14;
  size_t __n_01;
  long lVar15;
  long lVar16;
  void *pvVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined *puStack_2b0;
  ulong uStack_2a8;
  basic_string *pbStack_2a0;
  undefined *apuStack_290 [2];
  basic_string *pbStack_280;
  undefined *puStack_270;
  ulong uStack_268;
  basic_string *pbStack_260;
  undefined *puStack_250;
  ulong uStack_248;
  basic_string *pbStack_240;
  undefined *puStack_238;
  long alStack_230 [7];
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  void *pvStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [34];
  long lStack_138;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  uVar10 = std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                     ((char)in_x1,0x2e);
  if (uVar10 == 0xffffffffffffffff) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_70,in_x1);
    goto LAB_003f2690;
  }
  uVar4 = *(ulong *)(in_x1 + 8);
  pbVar11 = *(basic_string **)(in_x1 + 0x10);
  if (((byte)*in_x1 & 1) == 0) {
    pbVar11 = in_x1 + 1;
    uVar4 = (ulong)((byte)*in_x1 >> 1);
  }
  if (uVar10 <= uVar4) {
    uVar4 = uVar10;
  }
  if (0xffffffffffffffef < uVar4) goto LAB_003f2820;
  if (uVar4 < 0x17) {
    pvVar17 = (void *)((ulong)&local_a8 | 1);
    local_a8 = CONCAT71(local_a8._1_7_,(char)((int)uVar4 << 1));
    if (uVar4 != 0) goto LAB_003f25b4;
  }
  else {
    pvVar17 = operator_new((uVar4 | 0xf) + 1);
    local_a8 = (uVar4 | 0xf) + 2;
    uStack_a0 = uVar4;
    local_98 = pvVar17;
LAB_003f25b4:
    memmove(pvVar17,pbVar11,uVar4);
  }
  *(undefined1 *)((long)pvVar17 + uVar4) = 0;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  bVar5 = *in_x1;
  uStack_68 = uStack_a0;
  local_70 = local_a8;
  local_60 = local_98;
  uVar4 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar4 = *(ulong *)(in_x1 + 8);
  }
  __n_00 = uVar4 - uVar10;
  if (uVar4 < uVar10) {
    auVar19 = FUN_00366174();
    puVar9 = PTR_VTT_0067cff8;
    puVar3 = PTR_vtable_0067cff0;
    lVar16 = auVar19._0_8_;
    lVar8 = tpidr_el0;
    lStack_138 = *(long *)(lVar8 + 0x28);
    uVar6 = *(ushort *)(lVar16 + 0xd8);
    fVar18 = *(float *)(auVar19._8_8_ + 8);
    if ((uVar6 & 1) == 0) {
      pbVar11 = (basic_string *)std::__ndk1::to_string(fVar18);
      pbVar12 = pbStack_260;
    }
    else {
      puStack_250 = *(undefined **)(PTR_VTT_0067cff8 + 0x10);
      puVar1 = PTR_vtable_0067cff0 + 0x68;
      puVar2 = PTR_vtable_0067cff0 + 0x40;
      pbStack_240 = (basic_string *)puVar2;
      puStack_1d0 = puVar1;
      *(undefined8 *)((long)&puStack_250 + *(long *)(puStack_250 + -0x18)) =
           *(undefined8 *)(PTR_VTT_0067cff8 + 0x18);
      uStack_248 = 0;
      lVar14 = *(long *)(puStack_250 + -0x18);
      std::__ndk1::ios_base::init((void *)((long)&puStack_250 + lVar14));
      *(undefined8 *)((long)&uStack_1c8 + lVar14) = 0;
      lVar15 = *(long *)(puVar9 + 8);
      *(undefined4 *)((long)auStack_1c0 + lVar14) = 0xffffffff;
      *(undefined8 *)
       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&pbStack_240 +
       *(long *)(*(long *)(puVar9 + 0x20) + -0x18)) = *(undefined8 *)(puVar9 + 0x28);
      *(undefined8 *)((long)&puStack_250 + *(long *)(lVar15 + -0x18)) =
           *(undefined8 *)(puVar9 + 0x30);
      puStack_250 = puVar3 + 0x18;
      pbStack_240 = (basic_string *)puVar2;
      puStack_1d0 = puVar1;
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
      puVar3 = PTR_vtable_0067cc60 + 0x10;
      puStack_238 = puVar3;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      pvStack_1e8 = (void *)0x0;
      uStack_1d8 = 0x18;
      *(uint *)((long)alStack_230 + *(long *)(pbStack_240 + -0x18) + -8) =
           *(uint *)((long)alStack_230 + *(long *)(pbStack_240 + -0x18) + -8) & 0xfffffeff | 4;
      *(long *)((long)alStack_230 + *(long *)(pbStack_240 + -0x18)) = (long)*(int *)(lVar16 + 0xdc);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&pbStack_240,fVar18);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      puStack_250 = *(undefined **)puVar9;
      pbVar11 = *(basic_string **)(puVar9 + 0x48);
      *(undefined8 *)((long)&puStack_250 + *(long *)(puStack_250 + -0x18)) =
           *(undefined8 *)(puVar9 + 0x40);
      pbStack_240 = pbVar11;
      puStack_238 = puVar3;
      if ((uStack_1f8 & 1) != 0) {
        operator_delete(pvStack_1e8);
      }
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&puStack_238);
      std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&puStack_250);
      pbVar11 = (basic_string *)
                std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                          ((basic_ios<char,std::__ndk1::char_traits<char>> *)&puStack_1d0);
      pbVar12 = pbStack_260;
    }
    pbStack_260 = pbVar12;
    if ((uVar6 >> 1 & 1) != 0) {
      if (((ulong)puStack_270 & 1) == 0) {
        apuStack_290[0] = puStack_270;
        pbStack_280 = pbVar12;
        pbVar12 = (basic_string *)
                  DataConverterStringRemoveZeros::removeZeros
                            ((DataConverterStringRemoveZeros *)&puStack_250,apuStack_290);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )apuStack_290,(char *)pbVar12,uStack_268);
        DataConverterStringRemoveZeros::removeZeros
                  ((DataConverterStringRemoveZeros *)&puStack_250,apuStack_290);
        operator_delete(pbVar12);
      }
      puStack_270 = puStack_250;
      puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffffffff0000);
      uStack_268 = uStack_248;
      pbStack_260 = pbStack_240;
      pbVar11 = pbVar12;
      if (((ulong)apuStack_290[0] & 1) != 0) {
        operator_delete(pbStack_280);
        pbVar11 = pbStack_280;
      }
    }
    if ((uVar6 >> 2 & 1) != 0) {
      formatWithCommas(pbVar11);
      if (((ulong)puStack_270 & 1) != 0) {
        operator_delete(pbStack_260);
      }
      uStack_268 = uStack_248;
      puStack_270 = puStack_250;
      pbStack_260 = pbStack_240;
    }
    if (((ulong)puStack_270 & 1) == 0) {
      uStack_2a8 = uStack_268;
      puStack_2b0 = puStack_270;
      pbStack_2a0 = pbStack_260;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &puStack_2b0,(char *)pbStack_260,uStack_268);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar16 + 0x100),(basic_string *)&puStack_2b0);
    if (((ulong)puStack_2b0 & 1) != 0) {
      operator_delete(pbStack_2a0);
    }
    if (((ulong)puStack_270 & 1) != 0) {
      operator_delete(pbStack_260);
    }
    if (*(long *)(lVar8 + 0x28) != lStack_138) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (void *)(lVar16 + 0xf8);
  }
  pbVar11 = in_x1 + 1;
  if (((byte)bVar5 & 1) != 0) {
    pbVar11 = *(basic_string **)(in_x1 + 0x10);
  }
  if (0xffffffffffffffef < __n_00) {
LAB_003f2820:
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0(&local_a8);
  }
  if (__n_00 < 0x17) {
    pvVar17 = (void *)((ulong)&local_a8 | 1);
    local_a8 = CONCAT71(local_a8._1_7_,(char)((int)__n_00 << 1));
    if (uVar4 != uVar10) goto LAB_003f265c;
  }
  else {
    pvVar17 = operator_new((__n_00 | 0xf) + 1);
    local_a8 = (__n_00 | 0xf) + 2;
    uStack_a0 = __n_00;
    local_98 = pvVar17;
LAB_003f265c:
    memmove(pvVar17,pbVar11 + uVar10,__n_00);
  }
  *(undefined1 *)((long)pvVar17 + __n_00) = 0;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uStack_88 = uStack_a0;
  local_90 = local_a8;
  local_80 = local_98;
LAB_003f2690:
  __n_01 = (size_t)((byte)local_70._0_1_ >> 1);
  uVar10 = __n_01;
  if ((local_70 & 1) != 0) {
    uVar10 = uStack_68;
  }
  bVar7 = local_70._0_1_;
  if (3 < (int)uVar10) {
    lVar16 = (uVar10 & 0xffffffff) - 4;
    do {
      pvVar17 = (void *)((ulong)&local_70 | 1);
      if ((local_70 & 1) != 0) {
        pvVar17 = local_60;
      }
      if (*(byte *)((long)pvVar17 + lVar16) - 0x3a < 0xfffffff6) goto LAB_003f270c;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      insert((ulong)&local_70,(char *)(lVar16 + 1));
      uVar10 = lVar16 + 4;
      lVar16 = lVar16 + -3;
    } while (6 < uVar10);
LAB_003f270c:
    __n_01 = (size_t)((byte)local_70._0_1_ >> 1);
    bVar7 = local_70._0_1_;
  }
  uVar10 = local_90;
  if (((byte)bVar7 & 1) != 0) {
    __n_01 = uStack_68;
  }
  __n = local_90 >> 1 & 0x7f;
  if ((local_90 & 1) != 0) {
    __n = uStack_88;
  }
  uVar4 = __n + __n_01;
  if (uVar4 < 0xfffffffffffffff0) {
    if (uVar4 < 0x17) {
      pvVar17 = (void *)0x0;
      *in_x8 = 0;
      in_x8[1] = 0;
      uVar13 = ((uint)uVar4 & 0xff) << 1;
      in_x8[2] = 0;
      *(char *)in_x8 = (char)uVar13;
    }
    else {
      pvVar17 = operator_new((uVar4 | 0xf) + 1);
      lVar16 = (uVar4 | 0xf) + 2;
      in_x8[1] = uVar4;
      in_x8[2] = (long)pvVar17;
      *in_x8 = lVar16;
      uVar13 = (uint)lVar16 & 0xff;
    }
    __dest = pvVar17;
    if ((uVar13 & 1) == 0) {
      __dest = (void *)((long)in_x8 + 1);
    }
    if (__n_01 != 0) {
      pvVar17 = (void *)((ulong)&local_70 | 1);
      if (((byte)bVar7 & 1) != 0) {
        pvVar17 = local_60;
      }
      pvVar17 = memmove(__dest,pvVar17,__n_01);
    }
    if (__n != 0) {
      pvVar17 = (void *)((ulong)&local_90 | 1);
      if ((uVar10 & 1) != 0) {
        pvVar17 = local_80;
      }
      pvVar17 = memmove((void *)((long)__dest + __n_01),pvVar17,__n);
    }
    *(undefined1 *)((long)((long)__dest + __n_01) + __n) = 0;
    if ((uVar10 & 1) != 0) {
      pvVar17 = local_80;
      operator_delete(local_80);
      bVar7 = local_70._0_1_;
    }
    if (((byte)bVar7 & 1) != 0) {
      pvVar17 = local_60;
      operator_delete(local_60);
    }
    if (*(long *)(lVar8 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return pvVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0031faf0();
}


// ===== 003f2838  rive::DataConverterToString::convertNumber =====

/* rive::DataConverterToString::convertNumber(rive::DataValueNumber*) */

DataConverterToString * __thiscall
rive::DataConverterToString::convertNumber(DataConverterToString *this,DataValueNumber *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  basic_string *pbVar7;
  basic_string *pbVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined *local_200;
  ulong uStack_1f8;
  basic_string *local_1f0;
  undefined *local_1e0 [2];
  basic_string *local_1d0;
  undefined *local_1c0;
  ulong uStack_1b8;
  basic_string *local_1b0;
  undefined *local_1a0;
  ulong uStack_198;
  basic_string *local_190;
  undefined *local_188;
  long alStack_180 [7];
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [34];
  long local_88;
  
  puVar6 = PTR_VTT_0067cff8;
  puVar3 = PTR_vtable_0067cff0;
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  uVar4 = *(ushort *)(this + 0xd8);
  fVar11 = *(float *)(param_1 + 8);
  if ((uVar4 & 1) == 0) {
    pbVar7 = (basic_string *)std::__ndk1::to_string(fVar11);
    pbVar8 = local_1b0;
  }
  else {
    local_1a0 = *(undefined **)(PTR_VTT_0067cff8 + 0x10);
    puVar1 = PTR_vtable_0067cff0 + 0x68;
    puVar2 = PTR_vtable_0067cff0 + 0x40;
    local_190 = (basic_string *)puVar2;
    local_120 = puVar1;
    *(undefined8 *)((long)&local_1a0 + *(long *)(local_1a0 + -0x18)) =
         *(undefined8 *)(PTR_VTT_0067cff8 + 0x18);
    uStack_198 = 0;
    lVar9 = *(long *)(local_1a0 + -0x18);
    std::__ndk1::ios_base::init((void *)((long)&local_1a0 + lVar9));
    *(undefined8 *)((long)&uStack_118 + lVar9) = 0;
    lVar10 = *(long *)(puVar6 + 8);
    *(undefined4 *)((long)auStack_110 + lVar9) = 0xffffffff;
    *(undefined8 *)
     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190 +
     *(long *)(*(long *)(puVar6 + 0x20) + -0x18)) = *(undefined8 *)(puVar6 + 0x28);
    *(undefined8 *)((long)&local_1a0 + *(long *)(lVar10 + -0x18)) = *(undefined8 *)(puVar6 + 0x30);
    local_1a0 = puVar3 + 0x18;
    local_190 = (basic_string *)puVar2;
    local_120 = puVar1;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    puVar3 = PTR_vtable_0067cc60 + 0x10;
    local_188 = puVar3;
    uStack_140 = 0;
    local_148 = 0;
    uStack_130 = 0;
    local_138 = (void *)0x0;
    local_128 = 0x18;
    *(uint *)((long)alStack_180 + *(long *)(local_190 + -0x18) + -8) =
         *(uint *)((long)alStack_180 + *(long *)(local_190 + -0x18) + -8) & 0xfffffeff | 4;
    *(long *)((long)alStack_180 + *(long *)(local_190 + -0x18)) = (long)*(int *)(this + 0xdc);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,fVar11);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_1a0 = *(undefined **)puVar6;
    pbVar7 = *(basic_string **)(puVar6 + 0x48);
    *(undefined8 *)((long)&local_1a0 + *(long *)(local_1a0 + -0x18)) =
         *(undefined8 *)(puVar6 + 0x40);
    local_190 = pbVar7;
    local_188 = puVar3;
    if ((local_148 & 1) != 0) {
      operator_delete(local_138);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&local_188);
    std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
              ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_1a0);
    pbVar7 = (basic_string *)
             std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                       ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_120);
    pbVar8 = local_1b0;
  }
  local_1b0 = pbVar8;
  if ((uVar4 >> 1 & 1) != 0) {
    if (((ulong)local_1c0 & 1) == 0) {
      local_1e0[0] = local_1c0;
      local_1d0 = pbVar8;
      pbVar8 = (basic_string *)
               DataConverterStringRemoveZeros::removeZeros
                         ((DataConverterStringRemoveZeros *)&local_1a0,local_1e0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_1e0,(char *)pbVar8,uStack_1b8);
      DataConverterStringRemoveZeros::removeZeros
                ((DataConverterStringRemoveZeros *)&local_1a0,local_1e0);
      operator_delete(pbVar8);
    }
    local_1c0 = local_1a0;
    local_1a0 = (undefined *)((ulong)local_1a0 & 0xffffffffffff0000);
    uStack_1b8 = uStack_198;
    local_1b0 = local_190;
    pbVar7 = pbVar8;
    if (((ulong)local_1e0[0] & 1) != 0) {
      operator_delete(local_1d0);
      pbVar7 = local_1d0;
    }
  }
  if ((uVar4 >> 2 & 1) != 0) {
    formatWithCommas(pbVar7);
    if (((ulong)local_1c0 & 1) != 0) {
      operator_delete(local_1b0);
    }
    uStack_1b8 = uStack_198;
    local_1c0 = local_1a0;
    local_1b0 = local_190;
  }
  if (((ulong)local_1c0 & 1) == 0) {
    uStack_1f8 = uStack_1b8;
    local_200 = local_1c0;
    local_1f0 = local_1b0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_200,(char *)local_1b0,uStack_1b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x100),(basic_string *)&local_200);
  if (((ulong)local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if (((ulong)local_1c0 & 1) != 0) {
    operator_delete(local_1b0);
  }
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return this + 0xf8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f2b08  rive::DataConverterToString::convertColor =====

/* rive::DataConverterToString::convertColor(rive::DataValueColor*) */

DataConverterToString * __thiscall
rive::DataConverterToString::convertColor(DataConverterToString *this,DataValueColor *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  DataConverterToString *pDVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  DataConverterToString DVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  DataConverterToString *pDVar19;
  undefined *puVar20;
  DataConverterToString DVar21;
  ulong uVar22;
  undefined4 *puVar23;
  float fVar24;
  ulong uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  DataConverterToString local_200 [2];
  undefined4 local_1fe;
  undefined2 local_1fa;
  char *local_1f0;
  DataConverterToString local_1e8 [2];
  undefined4 local_1e6;
  undefined2 local_1e2;
  ulong local_1e0;
  char *local_1d8;
  undefined *local_1d0 [3];
  undefined *local_1b8 [8];
  ulong local_178;
  undefined8 uStack_170;
  void *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined4 auStack_140 [34];
  undefined4 local_b8;
  undefined2 local_b4;
  long local_b0;
  
  puVar11 = PTR_VTT_0067cff8;
  puVar10 = PTR_vtable_0067cff0;
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  local_1d0[0] = *(undefined **)(PTR_VTT_0067cff8 + 0x10);
  puVar20 = PTR_vtable_0067cff0 + 0x68;
  puVar1 = PTR_vtable_0067cff0 + 0x40;
  uVar12 = *(uint *)(param_1 + 8);
  ppuVar2 = local_1d0 + 2;
  local_1d0[1] = (undefined *)0x0;
  local_1d0[2] = puVar1;
  local_150 = puVar20;
  *(undefined8 *)((long)local_1d0 + *(long *)(local_1d0[0] + -0x18)) =
       *(undefined8 *)(PTR_VTT_0067cff8 + 0x18);
  lVar16 = *(long *)(local_1d0[0] + -0x18);
  std::__ndk1::ios_base::init((void *)((long)local_1d0 + lVar16));
  *(undefined8 *)((long)&uStack_148 + lVar16) = 0;
  lVar17 = *(long *)(puVar11 + 8);
  *(undefined4 *)((long)auStack_140 + lVar16) = 0xffffffff;
  *(undefined8 *)((long)ppuVar2 + *(long *)(*(long *)(puVar11 + 0x20) + -0x18)) =
       *(undefined8 *)(puVar11 + 0x28);
  *(undefined8 *)((long)local_1d0 + *(long *)(lVar17 + -0x18)) = *(undefined8 *)(puVar11 + 0x30);
  local_1d0[0] = puVar10 + 0x18;
  local_1d0[2] = puVar1;
  local_150 = puVar20;
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  puVar20 = PTR_vtable_0067cc60;
  DVar21 = this[0xe0];
  local_1b8[0] = PTR_vtable_0067cc60 + 0x10;
  uVar22 = (ulong)((byte)DVar21 >> 1);
  if (((byte)DVar21 & 1) != 0) {
    uVar22 = *(ulong *)(this + 0xe8);
  }
  uStack_170 = 0;
  local_178 = 0;
  uStack_160 = 0;
  local_168 = (void *)0x0;
  local_158 = 0x18;
  if (uVar22 == 0) {
    std::__ndk1::to_string(uVar12);
    local_b8 = local_1e6;
    local_b4 = local_1e2;
    pcVar18 = local_1d8;
  }
  else {
    if (*(uint *)(this + 0x124) != uVar12) {
      *(uint *)(this + 0x124) = uVar12;
      *(undefined4 *)(this + 0x120) = 0xffffffff;
      *(undefined8 *)(this + 0x118) = 0xffffffffffffffff;
    }
    uVar5 = DAT_0024e900;
    pDVar19 = this + 0xe1;
    if (((byte)DVar21 & 1) != 0) {
      pDVar19 = *(DataConverterToString **)(this + 0xf0);
    }
    bVar8 = false;
    bVar9 = false;
    pDVar3 = this + 0x11c;
    puVar23 = (undefined4 *)((ulong)local_1e8 | 2);
    pcVar18 = (char *)(ulong)uVar12;
    DVar21 = (DataConverterToString)0x0;
    do {
      DVar13 = *pDVar19;
      if (bVar8) {
        local_1e8[0] = DVar13;
        FUN_0033586c(ppuVar2,local_1e8,1);
LAB_003f3218:
        bVar8 = false;
      }
      else if (DVar13 == (DataConverterToString)0x25) {
        if (bVar9) {
          local_1e8[0] = (DataConverterToString)0x25;
          bVar9 = true;
          FUN_0033586c(ppuVar2,local_1e8,1);
          goto LAB_003f3218;
        }
        bVar8 = false;
        bVar9 = true;
      }
      else {
        if (DVar13 != (DataConverterToString)0x5c) {
          if (bVar9) {
            if ((byte)DVar13 < 0x62) {
              if ((byte)DVar13 < 0x47) {
                if (DVar13 == (DataConverterToString)0x41) {
                  DVar13 = this[0x127];
                }
                else {
                  if (DVar13 != (DataConverterToString)0x42) {
LAB_003f2fd4:
                    local_1e8[0] = (DataConverterToString)0x25;
                    FUN_0033586c(ppuVar2,local_1e8,1);
                    DVar13 = *pDVar19;
                    goto LAB_003f2ff0;
                  }
                  DVar13 = this[0x124];
                }
              }
              else if (DVar13 == (DataConverterToString)0x47) {
                DVar13 = this[0x125];
              }
              else {
                if (DVar13 != (DataConverterToString)0x52) {
                  if (DVar13 != (DataConverterToString)0x61) goto LAB_003f2fd4;
                  uVar12 = (uint)(byte)this[0x127];
                  goto LAB_003f31d8;
                }
                DVar13 = this[0x126];
              }
              FUN_003f3368(local_1e8,DVar13);
            }
            else {
              if ((byte)DVar13 < 0x6c) {
                if (DVar13 == (DataConverterToString)0x62) {
                  uVar12 = (uint)(byte)this[0x124];
                }
                else if (DVar13 == (DataConverterToString)0x67) {
                  uVar12 = (uint)(byte)this[0x125];
                }
                else {
                  if (DVar13 != (DataConverterToString)0x68) goto LAB_003f2fd4;
                  uVar12 = *(uint *)(this + 0x118);
                  if (uVar12 == 0xffffffff) {
                    uVar12 = *(uint *)(this + 0x124);
                    uVar25 = NEON_ushl(CONCAT44(uVar12,uVar12),uVar5,4);
                    uVar26 = NEON_scvtf(uVar25 & 0xff000000ff,4);
                    fVar27 = (float)uVar26 / 255.0;
                    fVar28 = (float)((ulong)uVar26 >> 0x20) / 255.0;
                    fVar29 = (float)(uVar12 & 0xff) / 255.0;
                    fVar24 = fVar27;
                    if (fVar27 <= fVar28) {
                      fVar24 = fVar28;
                    }
                    fVar31 = fVar29;
                    if (fVar29 <= fVar24) {
                      fVar31 = fVar24;
                    }
                    fVar24 = fVar27;
                    if (fVar28 <= fVar27) {
                      fVar24 = fVar28;
                    }
                    fVar32 = fVar29;
                    if (fVar24 <= fVar29) {
                      fVar32 = fVar24;
                    }
                    fVar24 = 0.0;
                    fVar30 = fVar31 - fVar32;
                    if (fVar30 != 0.0) {
                      if (fVar31 == fVar28) {
                        fVar24 = fmodf((fVar27 - fVar29) / fVar30,6.0);
                      }
                      else if (fVar31 == fVar27) {
                        fVar24 = (fVar29 - fVar28) / fVar30 + 2.0;
                      }
                      else {
                        fVar24 = (fVar28 - fVar27) / fVar30 + 4.0;
                      }
                    }
                    fVar27 = 0.0;
                    uVar15 = (uint)(fVar24 * 60.0);
                    fVar24 = (fVar31 + fVar32) * 0.5;
                    uVar12 = uVar15 + 0x168;
                    if (-1 < (int)uVar15) {
                      uVar12 = uVar15;
                    }
                    *(uint *)(this + 0x118) = uVar12;
                    if (fVar30 != 0.0) {
                      fVar27 = (float)NEON_fmadd(fVar24,0x40000000,0xbf800000);
                      fVar27 = (fVar30 / (1.0 - ABS(fVar27))) * 100.0;
                    }
                    *(ulong *)pDVar3 =
                         CONCAT44((int)(float)(int)fVar27,(int)(float)(int)(fVar24 * 100.0));
                  }
                }
              }
              else if (DVar13 == (DataConverterToString)0x6c) {
                uVar12 = *(uint *)pDVar3;
                if (uVar12 == 0xffffffff) {
                  uVar12 = *(uint *)(this + 0x124);
                  uVar25 = NEON_ushl(CONCAT44(uVar12,uVar12),uVar5,4);
                  uVar26 = NEON_scvtf(uVar25 & 0xff000000ff,4);
                  fVar27 = (float)uVar26 / 255.0;
                  fVar28 = (float)((ulong)uVar26 >> 0x20) / 255.0;
                  fVar29 = (float)(uVar12 & 0xff) / 255.0;
                  fVar24 = fVar27;
                  if (fVar27 <= fVar28) {
                    fVar24 = fVar28;
                  }
                  fVar31 = fVar29;
                  if (fVar29 <= fVar24) {
                    fVar31 = fVar24;
                  }
                  fVar24 = fVar27;
                  if (fVar28 <= fVar27) {
                    fVar24 = fVar28;
                  }
                  fVar32 = fVar29;
                  if (fVar24 <= fVar29) {
                    fVar32 = fVar24;
                  }
                  fVar30 = fVar31 - fVar32;
                  fVar24 = 0.0;
                  if (fVar30 != 0.0) {
                    if (fVar31 == fVar28) {
                      fVar24 = fmodf((fVar27 - fVar29) / fVar30,6.0);
                    }
                    else {
                      fVar24 = (fVar28 - fVar27) / fVar30 + 4.0;
                      if (fVar31 == fVar27) {
                        fVar24 = (fVar29 - fVar28) / fVar30 + 2.0;
                      }
                    }
                  }
                  fVar27 = 0.0;
                  iVar14 = (int)(fVar24 * 60.0);
                  fVar24 = (fVar31 + fVar32) * 0.5;
                  iVar4 = iVar14 + 0x168;
                  if (-1 < iVar14) {
                    iVar4 = iVar14;
                  }
                  *(int *)(this + 0x118) = iVar4;
                  if (fVar30 != 0.0) {
                    fVar27 = (float)NEON_fmadd(fVar24,0x40000000,0xbf800000);
                    fVar27 = (fVar30 / (1.0 - ABS(fVar27))) * 100.0;
                  }
                  uVar12 = (uint)(float)(int)(fVar24 * 100.0);
                  *(ulong *)pDVar3 = CONCAT44((int)(float)(int)fVar27,uVar12);
                }
              }
              else if (DVar13 == (DataConverterToString)0x73) {
                uVar12 = *(uint *)(this + 0x120);
                if (uVar12 == 0xffffffff) {
                  uVar12 = *(uint *)(this + 0x124);
                  uVar25 = NEON_ushl(CONCAT44(uVar12,uVar12),uVar5,4);
                  uVar26 = NEON_scvtf(uVar25 & 0xff000000ff,4);
                  fVar27 = (float)uVar26 / 255.0;
                  fVar28 = (float)((ulong)uVar26 >> 0x20) / 255.0;
                  fVar29 = (float)(uVar12 & 0xff) / 255.0;
                  fVar24 = fVar27;
                  if (fVar27 <= fVar28) {
                    fVar24 = fVar28;
                  }
                  fVar31 = fVar29;
                  if (fVar29 <= fVar24) {
                    fVar31 = fVar24;
                  }
                  fVar24 = fVar27;
                  if (fVar28 <= fVar27) {
                    fVar24 = fVar28;
                  }
                  fVar32 = fVar29;
                  if (fVar24 <= fVar29) {
                    fVar32 = fVar24;
                  }
                  fVar30 = fVar31 - fVar32;
                  fVar24 = 0.0;
                  if (fVar30 != 0.0) {
                    if (fVar31 == fVar28) {
                      fVar24 = fmodf((fVar27 - fVar29) / fVar30,6.0);
                    }
                    else {
                      fVar24 = (fVar28 - fVar27) / fVar30 + 4.0;
                      if (fVar31 == fVar27) {
                        fVar24 = (fVar29 - fVar28) / fVar30 + 2.0;
                      }
                    }
                  }
                  fVar27 = 0.0;
                  iVar14 = (int)(fVar24 * 60.0);
                  fVar24 = (fVar31 + fVar32) * 0.5;
                  iVar4 = iVar14 + 0x168;
                  if (-1 < iVar14) {
                    iVar4 = iVar14;
                  }
                  *(int *)(this + 0x118) = iVar4;
                  if (fVar30 != 0.0) {
                    fVar27 = (float)NEON_fmadd(fVar24,0x40000000,0xbf800000);
                    fVar27 = (fVar30 / (1.0 - ABS(fVar27))) * 100.0;
                  }
                  uVar12 = (uint)(float)(int)fVar27;
                  *(ulong *)pDVar3 = CONCAT44(uVar12,(int)(float)(int)(fVar24 * 100.0));
                }
              }
              else {
                if (DVar13 != (DataConverterToString)0x72) goto LAB_003f2fd4;
                uVar12 = (uint)(byte)this[0x126];
              }
LAB_003f31d8:
              std::__ndk1::to_string(uVar12);
            }
            uVar25 = (ulong)((byte)local_1e8[0] >> 1);
            pcVar7 = (char *)((ulong)local_1e8 | 1);
            if (((byte)local_1e8[0] & 1) != 0) {
              uVar25 = local_1e0;
              pcVar7 = local_1d8;
            }
            FUN_0033586c(ppuVar2,pcVar7,uVar25);
            if (((byte)local_1e8[0] & 1) != 0) {
              operator_delete(local_1d8);
            }
          }
          else {
LAB_003f2ff0:
            local_1e8[0] = DVar13;
            FUN_0033586c(ppuVar2,local_1e8,1);
          }
          bVar9 = false;
          goto LAB_003f3218;
        }
        if (bVar9) {
          local_1e8[0] = (DataConverterToString)0x25;
          bVar8 = true;
          FUN_0033586c(ppuVar2,local_1e8,1);
          bVar9 = false;
        }
        else {
          bVar9 = false;
          bVar8 = true;
        }
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      if (((byte)DVar21 & 1) != 0) {
        operator_delete(pcVar18);
      }
      local_b8 = *puVar23;
      uVar22 = uVar22 - 1;
      local_b4 = *(undefined2 *)(puVar23 + 1);
      pDVar19 = pDVar19 + 1;
      pcVar18 = local_1d8;
      puVar20 = PTR_vtable_0067cc60;
      DVar21 = local_1e8[0];
    } while (uVar22 != 0);
  }
  DVar21 = local_1e8[0];
  puVar1 = PTR_VTT_0067cff8;
  if (((byte)local_1e8[0] & 1) == 0) {
    local_200[0] = local_1e8[0];
    local_1fe = local_b8;
    local_1fa = local_b4;
    local_1f0 = pcVar18;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_200,pcVar18,local_1e0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x100),(basic_string *)local_200);
  if (((byte)local_200[0] & 1) != 0) {
    operator_delete(local_1f0);
  }
  local_1d0[0] = *(undefined **)puVar1;
  uVar5 = *(undefined8 *)(puVar1 + 0x48);
  *(undefined8 *)((long)local_1d0 + *(long *)(local_1d0[0] + -0x18)) =
       *(undefined8 *)(puVar1 + 0x40);
  local_1b8[0] = puVar20 + 0x10;
  local_1d0[2] = (undefined *)uVar5;
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_1b8);
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)local_1d0);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_150);
  if (((byte)DVar21 & 1) != 0) {
    operator_delete(pcVar18);
  }
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this + 0xf8;
}


// ===== 003f3368  FUN_003f3368 =====

void FUN_003f3368(byte *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *local_188 [2];
  undefined *local_178;
  undefined *local_170 [8];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [34];
  long local_70;
  
  puVar7 = PTR_VTT_0067cff8;
  puVar6 = PTR_vtable_0067cff0;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_188[0] = *(undefined **)(PTR_VTT_0067cff8 + 0x10);
  puVar1 = PTR_vtable_0067cff0 + 0x68;
  puVar2 = PTR_vtable_0067cff0 + 0x40;
  local_188[1] = (undefined *)0x0;
  local_178 = puVar2;
  local_108 = puVar1;
  *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
       *(undefined8 *)(PTR_VTT_0067cff8 + 0x18);
  lVar8 = *(long *)(local_188[0] + -0x18);
  std::__ndk1::ios_base::init((void *)((long)local_188 + lVar8));
  *(undefined8 *)((long)&uStack_100 + lVar8) = 0;
  lVar9 = *(long *)(puVar7 + 8);
  *(undefined4 *)((long)auStack_f8 + lVar8) = 0xffffffff;
  *(undefined8 *)
   ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178 +
   *(long *)(*(long *)(puVar7 + 0x20) + -0x18)) = *(undefined8 *)(puVar7 + 0x28);
  *(undefined8 *)((long)local_188 + *(long *)(lVar9 + -0x18)) = *(undefined8 *)(puVar7 + 0x30);
  local_188[0] = puVar6 + 0x18;
  local_178 = puVar2;
  local_108 = puVar1;
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  puVar1 = PTR_vtable_0067cc60 + 0x10;
  local_170[0] = puVar1;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x18;
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) | 0x4000;
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5 | 8;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,param_2);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar3 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if (uVar3 < 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    insert((ulong)param_1,0,'\x02' - (char)uVar3);
  }
  local_188[0] = *(undefined **)puVar7;
  uVar4 = *(undefined8 *)(puVar7 + 0x48);
  *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
       *(undefined8 *)(puVar7 + 0x40);
  local_178 = (undefined *)uVar4;
  local_170[0] = puVar1;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_170);
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)local_188);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_108);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f3550  rive::DataConverterToString::convert =====

/* WARNING: Type propagation algorithm not settling */
/* rive::DataConverterToString::convert(rive::DataValue*, rive::DataBind*) */

DataValue * rive::DataConverterToString::convert(DataValue *param_1,DataBind *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  DataValue *pDVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  basic_string local_f0 [16];
  char *local_e0;
  basic_string local_d8 [16];
  char *local_c8;
  basic_string local_c0 [16];
  char *local_b0;
  basic_string local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  char *local_98;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,2);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      pDVar4 = (DataValue *)
               convertNumber((DataConverterToString *)param_1,(DataValueNumber *)param_2);
      return pDVar4;
    }
    goto LAB_003f387c;
  }
  uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,6);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,1);
    if ((uVar3 & 1) != 0) {
      if (((byte)param_2[8] & 1) == 0) {
        uStack_88 = *(undefined8 *)(param_2 + 0x10);
        local_90 = *(ulong *)(param_2 + 8);
        local_80 = *(char **)(param_2 + 0x18);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_90,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10));
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 0x100),(basic_string *)&local_90);
      local_98 = local_80;
      uVar3 = local_90;
      goto joined_r0x003f36c4;
    }
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,4);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
        pDVar4 = (DataValue *)
                 convertColor((DataConverterToString *)param_1,(DataValueColor *)param_2);
        return pDVar4;
      }
      goto LAB_003f387c;
    }
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,3);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,7);
      if ((uVar3 & 1) == 0) {
        uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,10);
        if ((uVar3 & 1) == 0) {
          FUN_003621d4(local_f0,&DAT_00243399);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x100),local_f0);
          local_98 = local_e0;
          local_c0[0] = local_f0[0];
        }
        else {
          std::__ndk1::to_string(*(uint *)(param_2 + 8));
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x100),local_d8);
          local_98 = local_c8;
          local_c0[0] = local_d8[0];
        }
      }
      else {
        std::__ndk1::to_string(*(uint *)(param_2 + 8));
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 0x100),local_c0);
        local_98 = local_b0;
      }
    }
    else {
      local_a8 = (basic_string)0x2;
      local_a6 = 0;
      local_a7 = 0x30;
      if (param_2[8] != (DataBind)0x0) {
        local_a7 = 0x31;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 0x100),&local_a8);
      local_c0[0] = local_a8;
    }
    if (((byte)local_c0[0] & 1) == 0) goto LAB_003f3828;
LAB_003f3824:
    operator_delete(local_98);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x10);
    if (lVar7 != 0) {
      if ((ulong)*(uint *)(param_2 + 8) <
          (ulong)(*(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10) >> 3)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (ulong)*(uint *)(param_2 + 8) * 8);
        uVar6 = *(ulong *)(lVar7 + 0x30);
        puVar8 = (ulong *)(lVar7 + 0x28);
        bVar1 = *(byte *)puVar8;
        uVar3 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar3 = uVar6;
        }
        if (uVar3 == 0) {
          puVar8 = (ulong *)(lVar7 + 0x10);
          if ((*(byte *)puVar8 & 1) == 0) goto LAB_003f3770;
          uVar6 = *(ulong *)(lVar7 + 0x18);
          pcVar5 = *(char **)(lVar7 + 0x20);
LAB_003f37dc:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_50,pcVar5,uVar6);
        }
        else {
          if ((bVar1 & 1) != 0) {
            pcVar5 = *(char **)(lVar7 + 0x38);
            goto LAB_003f37dc;
          }
LAB_003f3770:
          uStack_48 = puVar8[1];
          local_50 = *puVar8;
          local_40 = (char *)puVar8[2];
        }
        if ((local_50 & 1) == 0) goto LAB_003f37ec;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_70,local_40,uStack_48);
      }
      else {
        local_50 = local_50 & 0xffffffffffff0000;
LAB_003f37ec:
        uStack_68 = uStack_48;
        local_70 = local_50;
        local_60 = local_40;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 0x100),(basic_string *)&local_70);
      local_98 = local_40;
      uVar3 = local_50;
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
        local_98 = local_40;
        uVar3 = local_50;
      }
joined_r0x003f36c4:
      if ((uVar3 & 1) != 0) goto LAB_003f3824;
    }
  }
LAB_003f3828:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1 + 0xf8;
  }
LAB_003f387c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f3880  rive::DataConverterToString::decimalsChanged =====

/* rive::DataConverterToString::decimalsChanged() */

void __thiscall rive::DataConverterToString::decimalsChanged(DataConverterToString *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f3898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003f38a0  rive::DataConverterToString::colorFormatChanged =====

/* rive::DataConverterToString::colorFormatChanged() */

void __thiscall rive::DataConverterToString::colorFormatChanged(DataConverterToString *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f38b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,0x1002,0);
    return;
  }
  return;
}


// ===== 003f38c0  FUN_003f38c0 =====

void FUN_003f38c0(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d230 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d230 + 0xd8;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0xf8) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0x100] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x110));
  }
  puVar1 = PTR_vtable_0067d478 + 0xd8;
  *(undefined **)param_1 = PTR_vtable_0067d478 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (((byte)param_1[0xe0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  rive::DataConverter::~DataConverter(param_1);
  return;
}


// ===== 003f393c  FUN_003f393c =====

void FUN_003f393c(DataConverter *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d230 + 0x10;
  *(undefined **)(param_1 + 0x28) = PTR_vtable_0067d230 + 0xd8;
  *(undefined **)param_1 = puVar1;
  *(undefined ***)(param_1 + 0xf8) = &PTR_FUN_0066afc8;
  if (((byte)param_1[0x100] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x110));
  }
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


// ===== 003f39c0  FUN_003f39c0 =====

undefined8 FUN_003f39c0(void)

{
  return 0x1ea;
}


// ===== 003f39c8  FUN_003f39c8 =====

bool FUN_003f39c8(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffd) == 0x1e8;
}


// ===== 003f39dc  FUN_003f39dc =====

undefined8 FUN_003f39dc(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2fd) {
    if (param_2 == 0x296) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f3bcc;
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
LAB_003f3bcc:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar13 = (byte *)(param_1 + 0x10);
      if ((*pbVar13 & 1) != 0) {
        pvVar5 = *(void **)(param_1 + 0x20);
LAB_003f3be4:
        operator_delete(pvVar5);
      }
LAB_003f3be8:
      *(undefined8 *)(pbVar13 + 8) = uStack_38;
      *(undefined8 *)pbVar13 = local_40;
      *(undefined8 *)(pbVar13 + 0x10) = local_30;
    }
    else {
      if (param_2 != 0x2fc) goto LAB_003f3c14;
      uVar12 = 0;
      uVar7 = 0;
      pbVar13 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f3b88;
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
LAB_003f3b88:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xd8) = (int)uVar7;
    }
  }
  else {
    if (param_2 != 0x2fd) {
      if (param_2 != 0x2fe) goto LAB_003f3c14;
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f3ba4;
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
LAB_003f3ba4:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar13 = (byte *)(param_1 + 0xe0);
      if ((*pbVar13 & 1) != 0) {
        pvVar5 = *(void **)(param_1 + 0xf0);
        goto LAB_003f3be4;
      }
      goto LAB_003f3be8;
    }
    uVar12 = 0;
    uVar7 = 0;
    pbVar13 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f3c04;
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
LAB_003f3c04:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xdc) = (int)uVar7;
  }
  uVar6 = 1;
LAB_003f3c14:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f3c3c  FUN_003f3c3c =====

undefined8 FUN_003f3c3c(void)

{
  return 1;
}


// ===== 003f3c44  FUN_003f3c44 =====

void FUN_003f3c44(void)

{
  return;
}


// ===== 003f3c48  rive::RootBone::onAddedClean =====

/* rive::RootBone::onAddedClean(rive::CoreContext*) */

undefined8 rive::RootBone::onAddedClean(CoreContext *param_1)

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


// ===== 003f3c98  rive::RootBone::xChanged =====

/* rive::RootBone::xChanged() */

void __thiscall rive::RootBone::xChanged(RootBone *this)

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


// ===== 003f3d0c  rive::RootBone::yChanged =====

/* rive::RootBone::yChanged() */

void __thiscall rive::RootBone::yChanged(RootBone *this)

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


// ===== 003f3d80  FUN_003f3d80 =====

void FUN_003f3d80(void *param_1)

{
  FUN_003dead8();
  operator_delete(param_1);
  return;
}


// ===== 003f3da4  FUN_003f3da4 =====

undefined8 FUN_003f3da4(void)

{
  return 0x29;
}


// ===== 003f3dac  FUN_003f3dac =====

bool FUN_003f3dac(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x26;
  if ((uVar1 < 0x36) && ((1L << ((ulong)uVar1 & 0x3f) & 0x2000000000000fU) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) - 10 < 2;
}


// ===== 003f3dec  FUN_003f3dec =====

undefined8 FUN_003f3dec(long param_1,short param_2,long *param_3)

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
    *(undefined4 *)(param_1 + 0x110) = uVar4;
  }
  else if (param_2 == 0x5b) {
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
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
  }
  else {
    if (param_2 != 0x5a) {
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
    *(undefined4 *)(param_1 + 0x148) = uVar4;
  }
  param_3[2] = (long)puVar2;
  return 1;
}


// ===== 003f3ebc  FUN_003f3ebc =====

undefined4 FUN_003f3ebc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x148);
}


// ===== 003f3ec4  FUN_003f3ec4 =====

undefined4 FUN_003f3ec4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14c);
}


// ===== 003f3ecc  rive::Skin::~Skin =====

/* rive::Skin::~Skin() */

void __thiscall rive::Skin::~Skin(Skin *this)

{
  void *pvVar1;
  
  *(undefined **)this = PTR_vtable_0067d080 + 0x10;
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe8));
  }
  pvVar1 = *(void **)(this + 0xd0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar1;
    operator_delete(pvVar1);
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


// ===== 003f3f88  rive::Skin::~Skin =====

/* rive::Skin::~Skin() */

void __thiscall rive::Skin::~Skin(Skin *this)

{
  ~Skin(this);
  operator_delete(this);
  return;
}


// ===== 003f3fac  FUN_003f3fac =====

undefined8 FUN_003f3fac(void)

{
  return 0x2b;
}


// ===== 003f3fb4  FUN_003f3fb4 =====

uint FUN_003f3fb4(undefined8 param_1,uint param_2)

{
  return (uint)((param_2 & 0xffff) < 0x2c) & (uint)(0x80000000c00 >> ((ulong)param_2 & 0x3f));
}


// ===== 003f3fd4  FUN_003f3fd4 =====

undefined8 FUN_003f3fd4(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x6a) {
    if (param_2 < 0x68) {
      if (param_2 == 4) {
        pcVar12 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_003f41f8;
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
LAB_003f41f8:
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
        if (param_2 != 5) goto LAB_003f42d0;
        uVar14 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_003f4230;
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
LAB_003f4230:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x28) = (int)uVar6;
      }
      uVar5 = 1;
    }
    else if (param_2 == 0x68) {
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
    else if (param_2 == 0x69) {
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
  }
  else if (param_2 < 0x6c) {
    if (param_2 == 0x6a) {
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
    else if (param_2 == 0x6b) {
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
  else if (param_2 == 0x6c) {
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
  else if (param_2 == 0x6d) {
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
LAB_003f42d0:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f42f8  rive::Skin::onAddedDirty =====

/* rive::Skin::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::Skin::onAddedDirty(Skin *this,CoreContext *param_1)

{
  Skin *pSVar1;
  undefined1 auVar2 [12];
  short sVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  pSVar1 = (Skin *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pSVar1 = (Skin *)(param_1 + -0x998);
  }
  *(Skin **)(this + 0x40) = pSVar1;
  *(Skin **)(this + 0x80) = pSVar1;
  if (pSVar1 != this) {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar4;
    *(long **)(this + 0x30) = plVar4;
    (**(code **)(lVar5 + 0x90))(plVar4,this);
  }
  auVar2 = *(undefined1 (*) [12])(this + 0xa0);
  plVar4 = *(long **)(this + 0x30);
  auVar6._12_4_ = (int)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  auVar6._0_12_ = *(undefined1 (*) [12])(this + 0xa0);
  auVar6 = NEON_rev64(auVar6,4);
  lVar5 = *plVar4;
  *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xb0);
  *(ulong *)(this + 0xc0) = CONCAT44(auVar6._8_4_,auVar6._0_4_);
  *(ulong *)(this + 0xb8) = CONCAT44(auVar2._8_4_,auVar2._0_4_);
  sVar3 = (**(code **)(lVar5 + 0x10))(plVar4);
  if (sVar3 == 0x10) {
    lVar5 = 0x1b0;
  }
  else {
    if (sVar3 != 0x6d) {
      *(undefined8 *)(this + 0xf0) = 0;
      return 1;
    }
    lVar5 = 0xa0;
  }
  *(long *)(this + 0xf0) = (long)plVar4 + lVar5;
  *(Skin **)((long)plVar4 + lVar5 + 8) = this;
  return 0;
}


// ===== 003f43c4  rive::Skin::buildDependencies =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Skin::buildDependencies() */

void __thiscall rive::Skin::buildDependencies(Skin *this)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  Component *this_00;
  long *plVar8;
  
  plVar5 = *(long **)(this + 0xd0);
  plVar1 = *(long **)(this + 0xd8);
  plVar8 = plVar5;
  if (plVar5 != plVar1) {
    do {
      this_00 = *(Component **)(*plVar5 + 0xc0);
      Component::addDependent(this_00,(Component *)this);
      plVar2 = *(long **)(this_00 + 0x138);
      for (plVar8 = *(long **)(this_00 + 0x130); plVar8 != plVar2; plVar8 = plVar8 + 1) {
        Component::addDependent(*(Component **)(*plVar8 + 0x30),(Component *)this);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    plVar5 = *(long **)(this + 0xd8);
    plVar8 = *(long **)(this + 0xd0);
  }
  uVar6 = ((long)plVar5 - (long)plVar8 >> 3) * 6 + 6;
  uVar7 = uVar6 * 4;
  if (uVar6 >> 0x3e != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  puVar4 = (undefined8 *)operator_new__(uVar7);
  *(undefined8 **)(this + 0xe8) = puVar4;
  uVar3 = _DAT_0024e5b0;
  puVar4[1] = _UNK_0024e5b8;
  *puVar4 = uVar3;
  puVar4[2] = 0;
  return;
}


// ===== 003f448c  rive::Skin::onDirty =====

/* rive::Skin::onDirty(rive::ComponentDirt) */

void rive::Skin::onDirty(long param_1)

{
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f449c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))();
    return;
  }
  return;
}


// ===== 003f44a4  rive::Skin::update =====

/* rive::Skin::update(rive::ComponentDirt) */

void rive::Skin::update(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
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
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (*(long **)(param_1 + 0xd0) != plVar1) {
    plVar3 = *(long **)(param_1 + 0xd0);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0xe8) + 0x28);
    do {
      plVar4 = plVar3 + 1;
      lVar6 = *plVar3;
      lVar7 = *(long *)(lVar6 + 0xc0);
      fVar12 = (float)*(undefined8 *)(lVar6 + 0xa4);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar6 + 0xa8) >> 0x20);
      fVar8 = (float)*(undefined8 *)(lVar6 + 0xa8);
      fVar9 = (float)*(undefined8 *)(lVar6 + 0xb0);
      fVar13 = (float)*(undefined8 *)(lVar7 + 0xa4);
      fVar15 = (float)((ulong)*(undefined8 *)(lVar7 + 0xa4) >> 0x20);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar6 + 0xb4) >> 0x20);
      fVar10 = (float)*(undefined8 *)(lVar7 + 0xac);
      fVar11 = (float)((ulong)*(undefined8 *)(lVar7 + 0xac) >> 0x20);
      fVar16 = (float)*(undefined8 *)(lVar6 + 0xb4);
      uVar2 = *(undefined8 *)(lVar7 + 0xb4);
      puVar5[-1] = CONCAT44(fVar11 * fVar9 + fVar14 * fVar15,fVar10 * fVar9 + fVar14 * fVar13);
      puVar5[-2] = CONCAT44(fVar11 * fVar8 + fVar12 * fVar15,fVar10 * fVar8 + fVar12 * fVar13);
      *puVar5 = CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar11 * fVar17 + fVar15 * fVar16,
                         (float)uVar2 + fVar10 * fVar17 + fVar13 * fVar16);
      plVar3 = plVar4;
      puVar5 = puVar5 + 3;
    } while (plVar4 != plVar1);
  }
  return;
}


// ===== 003f451c  FUN_003f451c =====

void FUN_003f451c(void)

{
  return;
}


// ===== 003f4520  FUN_003f4520 =====

void FUN_003f4520(void)

{
  return;
}


// ===== 003f4524  FUN_003f4524 =====

void FUN_003f4524(void)

{
  return;
}


// ===== 003f4528  FUN_003f4528 =====

void FUN_003f4528(void)

{
  return;
}


// ===== 003f452c  FUN_003f452c =====

void FUN_003f452c(void)

{
  return;
}


// ===== 003f4530  FUN_003f4530 =====

void FUN_003f4530(void)

{
  return;
}


// ===== 003f4534  rive::Skin::deform =====

/* rive::Skin::deform(rive::Span<rive::Vertex*>) */

void rive::Skin::deform(long param_1,undefined8 *param_2,long param_3)

{
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      (**(code **)(*(long *)*param_2 + 0xa8))
                ((long *)*param_2,param_1 + 0xb8,*(undefined8 *)(param_1 + 0xe8));
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 003f4584  rive::Skin::addTendon =====

/* rive::Skin::addTendon(rive::Tendon*) */

void __thiscall rive::Skin::addTendon(Skin *this,Tendon *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xd8);
  if (puVar10 < *(undefined8 **)(this + 0xe0)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003f46c4;
  }
  puVar9 = *(undefined8 **)(this + 0xd0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003f46e8();
LAB_003f46e4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xe0) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003f46e4;
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
      if (uVar6 == uVar7) goto LAB_003f46b0;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xd0);
  }
LAB_003f46b0:
  *(undefined8 **)(this + 0xd0) = puVar4;
  *(undefined8 **)(this + 0xd8) = puVar13;
  *(void **)(this + 0xe0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003f46c4:
  *(undefined8 **)(this + 0xd8) = puVar13;
  return;
}


// ===== 003f46e8  FUN_003f46e8 =====

void FUN_003f46e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003f46fc  rive::Skinnable::from =====

/* rive::Skinnable::from(rive::Component*) */

Component * rive::Skinnable::from(Component *param_1)

{
  short sVar1;
  Component *pCVar2;
  
  sVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  if (sVar1 == 0x6d) {
    pCVar2 = param_1 + 0xa0;
  }
  else if (sVar1 == 0x10) {
    pCVar2 = param_1 + 0x1b0;
  }
  else {
    pCVar2 = (Component *)0x0;
  }
  return pCVar2;
}


// ===== 003f474c  rive::Skinnable::skin =====

/* rive::Skinnable::skin(rive::Skin*) */

void __thiscall rive::Skinnable::skin(Skinnable *this,Skin *param_1)

{
  *(Skin **)(this + 8) = param_1;
  return;
}


// ===== 003f4754  rive::Tendon::onAddedDirty =====

/* rive::Tendon::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::Tendon::onAddedDirty(Tendon *this,CoreContext *param_1)

{
  Tendon *pTVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  
  pTVar1 = this + 0x8c;
  fVar9 = (float)((ulong)*(undefined8 *)(this + 0x94) >> 0x20);
  fVar7 = (float)*(undefined8 *)pTVar1;
  fVar8 = (float)((ulong)*(undefined8 *)pTVar1 >> 0x20);
  fVar10 = -(float)*(undefined8 *)(this + 0x94);
  fVar12 = (float)NEON_fmadd(fVar7,fVar9,fVar10 * fVar8);
  if (fVar12 != 0.0) {
    auVar11._12_4_ = fVar9;
    auVar11._0_12_ = *(undefined1 (*) [12])pTVar1;
    auVar14._12_4_ = fVar9;
    auVar14._0_12_ = *(undefined1 (*) [12])pTVar1;
    auVar14 = NEON_ext(auVar11,auVar14,0xc,1);
    fVar12 = 1.0 / fVar12;
    fVar15 = (float)*(undefined8 *)(this + 0x9c);
    fVar16 = (float)((ulong)*(undefined8 *)(this + 0x9c) >> 0x20);
    auVar2._4_4_ = SUB124(*(undefined1 (*) [12])pTVar1,8);
    auVar2._0_4_ = SUB124(*(undefined1 (*) [12])pTVar1,8);
    auVar2._8_4_ = fVar8;
    auVar2._12_4_ = fVar8;
    auVar3._4_4_ = SUB124(*(undefined1 (*) [12])pTVar1,8);
    auVar3._0_4_ = SUB124(*(undefined1 (*) [12])pTVar1,8);
    auVar3._8_4_ = fVar8;
    auVar3._12_4_ = fVar8;
    auVar11 = NEON_ext(auVar2,auVar3,4,1);
    uVar13 = NEON_rev64(CONCAT44(fVar16 * -auVar14._4_4_,fVar15 * -auVar14._0_4_),4);
    *(ulong *)(this + 0xac) = CONCAT44(fVar7 * fVar12,-fVar8 * fVar12);
    *(ulong *)(this + 0xa4) = CONCAT44(fVar10 * fVar12,fVar9 * fVar12);
    uVar13 = NEON_rev64(CONCAT44(fVar12 * ((float)((ulong)uVar13 >> 0x20) + fVar16 * auVar11._4_4_),
                                 fVar12 * ((float)uVar13 + fVar15 * auVar11._0_4_)),4);
    *(undefined8 *)(this + 0xb4) = uVar13;
  }
  pTVar1 = (Tendon *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (Tendon *)(param_1 + -0x998);
  }
  *(Tendon **)(this + 0x40) = pTVar1;
  *(Tendon **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar6 = *plVar4;
    *(long **)(this + 0x30) = plVar4;
    (**(code **)(lVar6 + 0x90))(plVar4,this);
  }
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x88));
  if ((plVar4 == (long *)0x0) ||
     (uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x28), (uVar5 & 1) == 0)) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
    *(long **)(this + 0xc0) = plVar4;
  }
  return uVar13;
}


// ===== 003f4870  rive::Tendon::onAddedClean =====

/* rive::Tendon::onAddedClean(rive::CoreContext*) */

bool rive::Tendon::onAddedClean(CoreContext *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),0x2b);
  bVar1 = (uVar2 & 1) == 0;
  if (!bVar1) {
    Skin::addTendon(*(Skin **)(param_1 + 0x30),(Tendon *)param_1);
  }
  return bVar1;
}


// ===== 003f48bc  FUN_003f48bc =====

void FUN_003f48bc(long *param_1)

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


// ===== 003f4928  FUN_003f4928 =====

undefined8 FUN_003f4928(void)

{
  return 0x2c;
}


// ===== 003f4930  FUN_003f4930 =====

bool FUN_003f4930(undefined8 param_1,short param_2)

{
  return param_2 == 0x2c || param_2 == 10;
}


// ===== 003f4944  FUN_003f4944 =====

undefined8 FUN_003f4944(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x61) {
    if (param_2 < 0x5f) {
      if (param_2 == 4) {
        pcVar12 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_003f4bd8;
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
LAB_003f4bd8:
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
        if (param_2 != 5) goto LAB_003f4cb0;
        uVar14 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_003f4bbc;
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
LAB_003f4bbc:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x28) = (int)uVar6;
      }
    }
    else {
      if (param_2 != 0x5f) {
        if (param_2 == 0x60) {
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
        goto LAB_003f4cb0;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f4c10;
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
LAB_003f4c10:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x88) = (int)uVar6;
    }
    uVar5 = 1;
  }
  else if (param_2 < 99) {
    if (param_2 == 0x61) {
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
    else if (param_2 == 0x62) {
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
  }
  else if (param_2 == 99) {
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
  else if (param_2 == 100) {
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
  else if (param_2 == 0x65) {
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
LAB_003f4cb0:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f4cd8  FUN_003f4cd8 =====

void FUN_003f4cd8(void)

{
  return;
}


// ===== 003f4cdc  FUN_003f4cdc =====

void FUN_003f4cdc(void)

{
  return;
}


// ===== 003f4ce0  FUN_003f4ce0 =====

void FUN_003f4ce0(void)

{
  return;
}


// ===== 003f4ce4  FUN_003f4ce4 =====

void FUN_003f4ce4(void)

{
  return;
}


// ===== 003f4ce8  FUN_003f4ce8 =====

void FUN_003f4ce8(void)

{
  return;
}


// ===== 003f4cec  FUN_003f4cec =====

void FUN_003f4cec(void)

{
  return;
}


// ===== 003f4cf0  FUN_003f4cf0 =====

void FUN_003f4cf0(void)

{
  return;
}


// ===== 003f4cf4  rive::ArtboardListMapRule::onAddedDirty =====

/* rive::ArtboardListMapRule::onAddedDirty(rive::CoreContext*) */

bool __thiscall
rive::ArtboardListMapRule::onAddedDirty(ArtboardListMapRule *this,CoreContext *param_1)

{
  bool bVar1;
  ArtboardListMapRule *pAVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  pAVar2 = (ArtboardListMapRule *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pAVar2 = (ArtboardListMapRule *)(param_1 + -0x998);
  }
  *(ArtboardListMapRule **)(this + 0x40) = pAVar2;
  *(ArtboardListMapRule **)(this + 0x80) = pAVar2;
  if (pAVar2 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar5 + 0x90))(plVar3,this);
  }
  uVar4 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x22f);
  bVar1 = (uVar4 & 1) == 0;
  if (!bVar1) {
    ArtboardComponentList::addMapRule(*(ArtboardComponentList **)(this + 0x30),this);
  }
  return bVar1;
}


// ===== 003f4d88  FUN_003f4d88 =====

void FUN_003f4d88(long *param_1)

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


// ===== 003f4df4  FUN_003f4df4 =====

undefined8 FUN_003f4df4(void)

{
  return 0x288;
}


// ===== 003f4dfc  FUN_003f4dfc =====

bool FUN_003f4dfc(undefined8 param_1,short param_2)

{
  return param_2 == 0x288 || param_2 == 10;
}


// ===== 003f4e10  FUN_003f4e10 =====

undefined8 FUN_003f4e10(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x3a6) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f4fe4;
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
LAB_003f4fe4:
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
      if (param_2 != 5) goto LAB_003f502c;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f4fb0;
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
LAB_003f4fb0:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x3a7) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f501c;
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
LAB_003f501c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x8c) = (int)uVar6;
  }
  else {
    if (param_2 != 0x3a6) goto LAB_003f502c;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f4fc8;
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
LAB_003f4fc8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003f502c:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f5054  FUN_003f5054 =====

void FUN_003f5054(void)

{
  return;
}


// ===== 003f5058  FUN_003f5058 =====

void FUN_003f5058(void)

{
  return;
}


// ===== 003f505c  rive::BlobAsset::decode =====

/* rive::BlobAsset::decode(rive::SimpleArray<unsigned char>&, rive::Factory*) */

undefined8 rive::BlobAsset::decode(SimpleArray *param_1,Factory *param_2)

{
  undefined8 uVar1;
  
  free(*(void **)(param_1 + 0x80));
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return 1;
}


// ===== 003f5094  rive::BlobAsset::fileExtension =====

/* rive::BlobAsset::fileExtension() const */

void __thiscall rive::BlobAsset::fileExtension(BlobAsset *this)

{
  undefined1 *in_x8;
  
  in_x8[5] = 0;
  *in_x8 = 8;
  *(undefined4 *)(in_x8 + 1) = 0x626f6c62;
  return;
}


// ===== 003f50b0  FUN_003f50b0 =====

void FUN_003f50b0(long *param_1)

{
  void *pvVar1;
  
  *param_1 = (long)(PTR_vtable_0067cfe0 + 0x10);
  free((void *)param_1[0x10]);
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    param_1[0xb] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 003f5154  FUN_003f5154 =====

void FUN_003f5154(long *param_1)

{
  void *pvVar1;
  
  *param_1 = (long)(PTR_vtable_0067cfe0 + 0x10);
  free((void *)param_1[0x10]);
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    param_1[0xb] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003f51f4  FUN_003f51f4 =====

undefined8 FUN_003f51f4(void)

{
  return 0x289;
}


// ===== 003f51fc  FUN_003f51fc =====

undefined8 FUN_003f51fc(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 99) && (param_2 != 0x67)) && (param_2 != 0x289)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003f5224  FUN_003f5224 =====

void FUN_003f5224(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 003f523c  rive::ManifestAsset::decodeNames =====

/* rive::ManifestAsset::decodeNames(rive::BinaryReader&) */

void __thiscall rive::ManifestAsset::decodeNames(ManifestAsset *this,BinaryReader *param_1)

{
  ManifestAsset *pMVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  ulong unaff_x28;
  undefined2 uVar27;
  undefined8 uVar28;
  float fVar29;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  uVar14 = 0;
  uVar26 = 0;
  local_68 = *(long *)(lVar5 + 0x28);
  pbVar13 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
  pbVar18 = *(byte **)(param_1 + 0x10);
  do {
    if (pbVar13 <= pbVar18) goto LAB_003f57b8;
    pbVar17 = pbVar18 + 1;
    bVar3 = *pbVar18;
    uVar15 = uVar14 & 0x3f;
    uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
    uVar26 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar26;
    pbVar18 = pbVar17;
  } while ((char)bVar3 < '\0');
  *(byte **)(param_1 + 0x10) = pbVar17;
  if (param_1[0x18] == (BinaryReader)0x0 && param_1[0x19] == (BinaryReader)0x0) {
    if (uVar26 == 0) {
      bVar6 = true;
    }
    else {
      uVar14 = 0;
      pMVar1 = this + 0x98;
      do {
        uVar15 = 0;
        uVar25 = 0;
        pbVar13 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
        pbVar18 = *(byte **)(param_1 + 0x10);
        do {
          if (pbVar13 <= pbVar18) goto LAB_003f57b8;
          pbVar17 = pbVar18 + 1;
          bVar3 = *pbVar18;
          uVar9 = uVar15 & 0x3f;
          uVar15 = (ulong)(((uint)uVar15 & 0xff) + 7);
          uVar25 = ((ulong)bVar3 & 0x7f) << uVar9 | uVar25;
          pbVar18 = pbVar17;
        } while ((char)bVar3 < '\0');
        *(byte **)(param_1 + 0x10) = pbVar17;
        if (param_1[0x18] != (BinaryReader)0x0 || param_1[0x19] != (BinaryReader)0x0)
        goto LAB_003f52b4;
        do {
          if (pbVar13 <= pbVar17) {
            bVar6 = false;
            param_1[0x18] = (BinaryReader)0x1;
            *(byte **)(param_1 + 0x10) = pbVar13;
            local_80[1] = 0;
            local_70 = (void *)0x0;
            local_80[0] = 0;
            goto LAB_003f5734;
          }
          pbVar18 = pbVar17 + 1;
          bVar3 = *pbVar17;
          pbVar17 = pbVar18;
        } while ((char)bVar3 < '\0');
        *(byte **)(param_1 + 0x10) = pbVar18;
        BinaryReader::readString((ulong)param_1);
        bVar6 = param_1[0x18] == (BinaryReader)0x0 && param_1[0x19] == (BinaryReader)0x0;
        if (param_1[0x18] == (BinaryReader)0x0 && param_1[0x19] == (BinaryReader)0x0) {
          uVar15 = *(ulong *)(this + 0x90);
          iVar24 = (int)uVar25;
          uVar25 = (ulong)iVar24;
          if (uVar15 != 0) {
            uVar28 = NEON_cnt(uVar15,1);
            uVar27 = NEON_uaddlv(uVar28,1);
            uVar9 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) & 0xffffffff;
            if (uVar9 < 2) {
              unaff_x28 = uVar15 - 1 & uVar25;
            }
            else {
              unaff_x28 = uVar25;
              if (uVar15 <= uVar25) {
                uVar19 = 0;
                if (uVar15 != 0) {
                  uVar19 = uVar25 / uVar15;
                }
                unaff_x28 = uVar25 - uVar19 * uVar15;
              }
            }
            puVar16 = *(undefined8 **)(*(long *)(this + 0x88) + unaff_x28 * 8);
            if ((puVar16 != (undefined8 *)0x0) &&
               (plVar23 = (long *)*puVar16, plVar23 != (long *)0x0)) {
              do {
                uVar19 = plVar23[1];
                if (uVar19 == uVar25) {
                  if ((int)plVar23[2] == iVar24) goto LAB_003f571c;
                }
                else {
                  if (uVar9 < 2) {
                    uVar19 = uVar19 & uVar15 - 1;
                  }
                  else if (uVar15 <= uVar19) {
                    uVar11 = 0;
                    if (uVar15 != 0) {
                      uVar11 = uVar19 / uVar15;
                    }
                    uVar19 = uVar19 - uVar11 * uVar15;
                  }
                  if (uVar19 != unaff_x28) break;
                }
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
          }
          plVar23 = (long *)operator_new(0x30);
          lVar8 = *(long *)(this + 0xa0);
          fVar29 = *(float *)(this + 0xa8);
          *plVar23 = 0;
          plVar23[1] = uVar25;
          *(int *)(plVar23 + 2) = iVar24;
          plVar23[4] = 0;
          plVar23[5] = 0;
          plVar23[3] = 0;
          if ((uVar15 == 0) || (fVar29 * (float)uVar15 < (float)(lVar8 + 1))) {
            if (uVar15 < 3) {
              uVar9 = 1;
            }
            else {
              uVar9 = (ulong)((uVar15 & uVar15 - 1) != 0);
            }
            uVar9 = uVar9 | uVar15 << 1;
            uVar19 = (ulong)((float)(lVar8 + 1) / fVar29);
            if (uVar9 <= uVar19) {
              uVar9 = uVar19;
            }
            if (uVar9 - 1 == 0) {
              uVar9 = 2;
            }
            else if ((uVar9 & uVar9 - 1) != 0) {
              uVar9 = std::__ndk1::__next_prime(uVar9);
              uVar15 = *(ulong *)(this + 0x90);
            }
            if (uVar15 < uVar9) {
LAB_003f54f8:
              if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              pvVar7 = operator_new(uVar9 << 3);
              pvVar10 = *(void **)(this + 0x88);
              *(void **)(this + 0x88) = pvVar7;
              if (pvVar10 != (void *)0x0) {
                operator_delete(pvVar10);
              }
              uVar15 = 0;
              *(ulong *)(this + 0x90) = uVar9;
              do {
                *(undefined8 *)(*(long *)(this + 0x88) + uVar15 * 8) = 0;
                uVar15 = uVar15 + 1;
              } while (uVar9 != uVar15);
              plVar20 = *(long **)pMVar1;
              uVar15 = uVar9;
              if (plVar20 != (long *)0x0) {
                uVar19 = plVar20[1];
                uVar28 = NEON_cnt(uVar9,1);
                uVar27 = NEON_uaddlv(uVar28,1);
                uVar11 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) & 0xffffffff;
                if (uVar11 < 2) {
                  uVar19 = uVar19 & uVar9 - 1;
                }
                else if (uVar9 <= uVar19) {
                  uVar22 = 0;
                  if (uVar9 != 0) {
                    uVar22 = uVar19 / uVar9;
                  }
                  uVar19 = uVar19 - uVar22 * uVar9;
                }
                *(ManifestAsset **)(*(long *)(this + 0x88) + uVar19 * 8) = pMVar1;
                plVar21 = (long *)*plVar20;
                if (plVar21 != (long *)0x0) {
                  do {
                    uVar22 = plVar21[1];
                    if (uVar11 < 2) {
                      uVar22 = uVar22 & uVar9 - 1;
                    }
                    else if (uVar9 <= uVar22) {
                      uVar4 = 0;
                      if (uVar9 != 0) {
                        uVar4 = uVar22 / uVar9;
                      }
                      uVar22 = uVar22 - uVar4 * uVar9;
                    }
                    if (uVar22 != uVar19) {
                      if (*(long *)(*(long *)(this + 0x88) + uVar22 * 8) == 0) {
                        *(long **)(*(long *)(this + 0x88) + uVar22 * 8) = plVar20;
                        uVar19 = uVar22;
                      }
                      else {
                        *plVar20 = *plVar21;
                        *plVar21 = **(long **)(*(long *)(this + 0x88) + uVar22 * 8);
                        **(undefined8 **)(*(long *)(this + 0x88) + uVar22 * 8) = plVar21;
                        plVar21 = plVar20;
                      }
                    }
                    plVar20 = plVar21;
                    plVar21 = (long *)*plVar20;
                  } while (plVar21 != (long *)0x0);
                }
              }
            }
            else if (uVar9 < uVar15) {
              uVar19 = (ulong)((float)*(ulong *)(this + 0xa0) / *(float *)(this + 0xa8));
              if (uVar15 < 3) {
LAB_003f5774:
                uVar19 = std::__ndk1::__next_prime(uVar19);
              }
              else {
                uVar28 = NEON_cnt(uVar15,1);
                uVar27 = NEON_uaddlv(uVar28,1);
                if (1 < (uint)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27)) goto LAB_003f5774;
                if (1 < uVar19) {
                  uVar19 = 1L << (-LZCOUNT(uVar19 - 1) & 0x3fU);
                }
              }
              if (uVar9 <= uVar19) {
                uVar9 = uVar19;
              }
              if (uVar9 < uVar15) {
                if (uVar9 != 0) goto LAB_003f54f8;
                pvVar7 = *(void **)(this + 0x88);
                *(undefined8 *)(this + 0x88) = 0;
                if (pvVar7 != (void *)0x0) {
                  operator_delete(pvVar7);
                }
                *(undefined8 *)(this + 0x90) = 0;
                uVar15 = 0;
              }
              else {
                uVar15 = *(ulong *)(this + 0x90);
              }
            }
            if ((uVar15 & uVar15 - 1) == 0) {
              unaff_x28 = uVar15 - 1 & uVar25;
            }
            else {
              unaff_x28 = uVar25;
              if (uVar15 <= uVar25) {
                uVar9 = 0;
                if (uVar15 != 0) {
                  uVar9 = uVar25 / uVar15;
                }
                unaff_x28 = uVar25 - uVar9 * uVar15;
              }
            }
          }
          lVar8 = *(long *)(this + 0x88);
          plVar20 = *(long **)(lVar8 + unaff_x28 * 8);
          if (plVar20 == (long *)0x0) {
            lVar12 = *(long *)pMVar1;
            *(long **)pMVar1 = plVar23;
            *plVar23 = lVar12;
            *(ManifestAsset **)(lVar8 + unaff_x28 * 8) = pMVar1;
            if (*plVar23 != 0) {
              uVar25 = *(ulong *)(*plVar23 + 8);
              if ((uVar15 & uVar15 - 1) == 0) {
                uVar25 = uVar25 & uVar15 - 1;
              }
              else if (uVar15 <= uVar25) {
                uVar9 = 0;
                if (uVar15 != 0) {
                  uVar9 = uVar25 / uVar15;
                }
                uVar25 = uVar25 - uVar9 * uVar15;
              }
              plVar20 = (long *)(*(long *)(this + 0x88) + uVar25 * 8);
              goto LAB_003f570c;
            }
          }
          else {
            *plVar23 = *plVar20;
LAB_003f570c:
            *plVar20 = (long)plVar23;
          }
          *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 1;
LAB_003f571c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(plVar23 + 3),(basic_string *)local_80);
        }
LAB_003f5734:
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        uVar14 = uVar14 + 1;
        bVar2 = false;
        if (uVar14 != uVar26) {
          bVar2 = bVar6;
        }
      } while (bVar2 != false);
    }
  }
  else {
LAB_003f52b4:
    bVar6 = false;
  }
LAB_003f57c8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
LAB_003f57b8:
  bVar6 = false;
  *(byte **)(param_1 + 0x10) = pbVar13;
  param_1[0x18] = (BinaryReader)0x1;
  goto LAB_003f57c8;
}


// ===== 003f5808  rive::ManifestAsset::decodePaths =====

/* rive::ManifestAsset::decodePaths(rive::BinaryReader&) */

void __thiscall rive::ManifestAsset::decodePaths(ManifestAsset *this,BinaryReader *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar8 = 0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar22 = 0;
  pbVar9 = *(byte **)(param_1 + 0x10);
  do {
    if ((byte *)(*(long *)param_1 + *(long *)(param_1 + 8)) <= pbVar9) {
      bVar5 = false;
      *(byte **)(param_1 + 0x10) = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
      param_1[0x18] = (BinaryReader)0x1;
      goto LAB_003f5b70;
    }
    pbVar10 = pbVar9 + 1;
    bVar2 = *pbVar9;
    uVar7 = uVar8 & 0x3f;
    uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
    uVar22 = ((ulong)bVar2 & 0x7f) << uVar7 | uVar22;
    pbVar9 = pbVar10;
  } while ((char)bVar2 < '\0');
  *(byte **)(param_1 + 0x10) = pbVar10;
  if (param_1[0x18] == (BinaryReader)0x0 && param_1[0x19] == (BinaryReader)0x0) {
    if (uVar22 == 0) {
      bVar5 = true;
    }
    else {
      uVar8 = 0;
      do {
        uVar12 = 0;
        uVar7 = 0;
        pbVar9 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
        pbVar10 = *(byte **)(param_1 + 0x10);
        do {
          if (pbVar9 <= pbVar10) {
            *(byte **)(param_1 + 0x10) = pbVar9;
            param_1[0x18] = (BinaryReader)0x1;
            local_6c = 0;
            goto LAB_003f5b6c;
          }
          pbVar11 = pbVar10 + 1;
          bVar2 = *pbVar10;
          uVar14 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar7 = ((ulong)bVar2 & 0x7f) << uVar14 | uVar7;
          pbVar10 = pbVar11;
        } while ((char)bVar2 < '\0');
        *(byte **)(param_1 + 0x10) = pbVar11;
        local_6c = (uint)uVar7;
        if (param_1[0x18] != (BinaryReader)0x0 || param_1[0x19] != (BinaryReader)0x0)
        goto LAB_003f5b6c;
        uVar14 = 0;
        uVar12 = 0;
        do {
          if (pbVar9 <= pbVar11) {
            *(byte **)(param_1 + 0x10) = pbVar9;
            param_1[0x18] = (BinaryReader)0x1;
            goto LAB_003f5b6c;
          }
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar25 = uVar14 & 0x3f;
          uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
          uVar12 = ((ulong)bVar2 & 0x7f) << uVar25 | uVar12;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < '\0');
        *(byte **)(param_1 + 0x10) = pbVar10;
        if (uVar12 << 0x20 == 0) {
          puVar20 = (undefined4 *)0x0;
          puVar21 = (undefined4 *)0x0;
        }
        else {
          uVar12 = (long)(uVar12 << 0x20) >> 0x20;
          puVar19 = (undefined4 *)0x0;
          puVar21 = (undefined4 *)0x0;
          puVar23 = (undefined4 *)0x0;
          uVar7 = 0;
          if (uVar12 < 2) {
            uVar12 = 1;
          }
          do {
            uVar14 = 0;
            uVar25 = 0;
            pbVar9 = *(byte **)(param_1 + 0x10);
            do {
              if ((byte *)(*(long *)param_1 + *(long *)(param_1 + 8)) <= pbVar9) {
                uVar24 = 0;
                param_1[0x18] = (BinaryReader)0x1;
                pbVar10 = (byte *)(*(long *)param_1 + *(long *)(param_1 + 8));
                break;
              }
              pbVar10 = pbVar9 + 1;
              bVar2 = *pbVar9;
              uVar17 = uVar14 & 0x3f;
              uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
              uVar25 = ((ulong)bVar2 & 0x7f) << uVar17 | uVar25;
              uVar24 = (undefined4)uVar25;
              pbVar9 = pbVar10;
            } while ((char)bVar2 < '\0');
            *(byte **)(param_1 + 0x10) = pbVar10;
            if (puVar21 < puVar23) {
              *puVar21 = uVar24;
              puVar20 = puVar19;
              puVar1 = puVar21;
            }
            else {
              lVar18 = (long)puVar21 - (long)puVar19 >> 2;
              uVar14 = lVar18 + 1;
              if (uVar14 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_003b1ebc();
              }
              uVar25 = (long)puVar23 - (long)puVar19 >> 1;
              if (uVar25 <= uVar14) {
                uVar25 = uVar14;
              }
              if (0x7ffffffffffffffb < (ulong)((long)puVar23 - (long)puVar19)) {
                uVar25 = 0x3fffffffffffffff;
              }
              if (uVar25 == 0) {
                pvVar6 = (void *)0x0;
              }
              else {
                if (uVar25 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00324008();
                }
                pvVar6 = operator_new(uVar25 << 2);
              }
              puVar1 = (undefined4 *)((long)pvVar6 + lVar18 * 4);
              *puVar1 = uVar24;
              puVar20 = puVar1;
              if ((long)puVar21 - (long)puVar19 != 0) {
                uVar14 = ((long)puVar21 - (long)puVar19) - 4;
                if ((0x1b < uVar14) &&
                   (0x1f < (ulong)((long)puVar21 + (-((long)puVar21 - (long)puVar19) - (long)pvVar6)
                                  ))) {
                  puVar15 = (undefined8 *)(puVar1 + -4);
                  puVar16 = (undefined8 *)(puVar21 + -4);
                  uVar14 = (uVar14 >> 2) + 1;
                  uVar13 = uVar14 & 0x7ffffffffffffff8;
                  puVar21 = puVar21 + -uVar13;
                  uVar17 = uVar13;
                  do {
                    puVar4 = puVar16 + -1;
                    uVar28 = puVar16[-2];
                    uVar27 = puVar16[1];
                    uVar26 = *puVar16;
                    uVar17 = uVar17 - 8;
                    puVar16 = puVar16 + -4;
                    puVar15[-1] = *puVar4;
                    puVar15[-2] = uVar28;
                    puVar15[1] = uVar27;
                    *puVar15 = uVar26;
                    puVar15 = puVar15 + -4;
                  } while (uVar17 != 0);
                  puVar20 = puVar1 + -uVar13;
                  if (uVar14 == uVar13) goto LAB_003f5a94;
                }
                do {
                  puVar21 = puVar21 + -1;
                  puVar20 = puVar20 + -1;
                  *puVar20 = *puVar21;
                } while (puVar21 != puVar19);
              }
LAB_003f5a94:
              puVar23 = (undefined4 *)((long)pvVar6 + uVar25 * 4);
              if (puVar19 != (undefined4 *)0x0) {
                operator_delete(puVar19);
              }
            }
            puVar21 = puVar1 + 1;
            uVar7 = uVar7 + 1;
            puVar19 = puVar20;
          } while (uVar7 != uVar12);
          uVar7 = (ulong)local_6c;
        }
        lVar18 = FUN_003f5bac(this + 0xb0,uVar7,&local_6c);
        FUN_003bf3d0(lVar18 + 0x18,puVar20,puVar21,(long)puVar21 - (long)puVar20 >> 2);
        bVar5 = param_1[0x18] == (BinaryReader)0x0 && param_1[0x19] == (BinaryReader)0x0;
        if (puVar20 != (undefined4 *)0x0) {
          operator_delete(puVar20);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar22 && bVar5);
    }
  }
  else {
LAB_003f5b6c:
    bVar5 = false;
  }
LAB_003f5b70:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


// ===== 003f5bac  FUN_003f5bac =====

void FUN_003f5bac(long *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  uVar9 = param_1[1];
  uVar10 = (ulong)param_2;
  if (uVar9 != 0) {
    uVar12 = NEON_cnt(uVar9,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x23 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar7 = plVar5[1];
        if (uVar7 == uVar10) {
          if ((int)plVar5[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar2 * uVar9;
          }
          if (uVar7 != unaff_x23) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = (long *)operator_new(0x30);
  lVar3 = param_1[3];
  uVar1 = *param_3;
  fVar13 = *(float *)(param_1 + 4);
  *plVar5 = 0;
  plVar5[1] = uVar10;
  *(undefined4 *)(plVar5 + 2) = uVar1;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[3] = 0;
  if ((uVar9 == 0) || (fVar13 * (float)uVar9 < (float)(lVar3 + 1))) {
    if (uVar9 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__ndk1::__next_prime(uVar6);
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar6) {
LAB_003f5d20:
      FUN_003f5e70(param_1);
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar9 < 3) {
LAB_003f5d8c:
        uVar7 = std::__ndk1::__next_prime(uVar7);
      }
      else {
        uVar12 = NEON_cnt(uVar9,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11)) goto LAB_003f5d8c;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) goto LAB_003f5d20;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar8 = *plVar4;
    *plVar4 = (long)plVar5;
    *plVar5 = lVar8;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_003f5e50;
    uVar10 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar6 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_003f5e50:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 003f5e70  FUN_003f5e70 =====

void FUN_003f5e70(long *param_1,ulong param_2)

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


// ===== 003f5fcc  rive::ManifestAsset::decode =====

/* rive::ManifestAsset::decode(rive::SimpleArray<unsigned char>&, rive::Factory*) */

void rive::ManifestAsset::decode(SimpleArray *param_1,Factory *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long local_68;
  long lStack_60;
  byte *local_58;
  char local_50;
  char local_4f;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_2 + 8) != 0) {
    BinaryReader::BinaryReader((BinaryReader *)&local_68,*(undefined8 *)param_2);
LAB_003f600c:
    do {
      bVar5 = local_50 != '\0';
      bVar6 = local_4f != '\0';
      pbVar1 = (byte *)(local_68 + lStack_60);
      bVar7 = local_58 == pbVar1;
      if ((bVar5 || bVar6) || bVar7) goto LAB_003f60f4;
      uVar10 = 0;
      uVar9 = 0;
      do {
        if (pbVar1 <= local_58) goto LAB_003f60e8;
        pbVar8 = local_58 + 1;
        bVar2 = *local_58;
        uVar11 = uVar10 & 0x3f;
        uVar10 = (ulong)(((uint)uVar10 & 0xff) + 7);
        uVar9 = ((ulong)bVar2 & 0x7f) << uVar11 | uVar9;
        local_58 = pbVar8;
      } while ((char)bVar2 < '\0');
      uVar10 = 0;
      uVar11 = 0;
      do {
        if (pbVar1 <= pbVar8) goto LAB_003f60e8;
        pbVar12 = pbVar8 + 1;
        bVar2 = *pbVar8;
        uVar3 = uVar10 & 0x3f;
        uVar10 = (ulong)(((uint)uVar10 & 0xff) + 7);
        uVar11 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar11;
        pbVar8 = pbVar12;
      } while ((char)bVar2 < '\0');
      local_58 = pbVar12;
      if (((uint)uVar9 & 0xff) == 1) {
        uVar9 = decodePaths((ManifestAsset *)param_1,(BinaryReader *)&local_68);
      }
      else {
        if ((uVar9 & 0xff) != 0) {
          local_58 = pbVar12 + uVar11;
          goto LAB_003f600c;
        }
        uVar9 = decodeNames((ManifestAsset *)param_1,(BinaryReader *)&local_68);
      }
      if (((uVar9 & 1) == 0) || ((long)local_58 - (long)pbVar12 != uVar11)) goto LAB_003f60f4;
    } while( true );
  }
  bVar7 = true;
LAB_003f6100:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
LAB_003f60e8:
  local_50 = '\x01';
  local_58 = pbVar1;
LAB_003f60f4:
  bVar7 = (bVar5 || bVar6) || bVar7;
  goto LAB_003f6100;
}


// ===== 003f612c  rive::ManifestAsset::fileExtension =====

/* rive::ManifestAsset::fileExtension() const */

void __thiscall rive::ManifestAsset::fileExtension(ManifestAsset *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 6;
  *(undefined4 *)(in_x8 + 1) = 0x6e616d;
  return;
}


// ===== 003f6144  rive::ManifestAsset::resolveName =====

/* rive::ManifestAsset::resolveName(int) */

long * __thiscall rive::ManifestAsset::resolveName(ManifestAsset *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(this + 0x90);
  if (uVar3 != 0) {
    uVar4 = (ulong)param_1;
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0x88) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_1) goto LAB_003f61f8;
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar2 * uVar3;
          }
          if (uVar7 != uVar5) {
            plVar6 = (long *)0x0;
            goto LAB_003f61f8;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
LAB_003f61f8:
          plVar1 = (long *)PTR_empty_0067d020;
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 3;
          }
          return plVar1;
        }
      } while( true );
    }
  }
  return (long *)PTR_empty_0067d020;
}


// ===== 003f6214  rive::ManifestAsset::resolveName =====

/* non-virtual thunk to rive::ManifestAsset::resolveName(int) */

long * __thiscall rive::ManifestAsset::resolveName(ManifestAsset *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(this + 0x10);
  if (uVar3 != 0) {
    uVar4 = (ulong)param_1;
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_1) goto LAB_003f62c8;
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar2 * uVar3;
          }
          if (uVar7 != uVar5) {
            plVar6 = (long *)0x0;
            goto LAB_003f62c8;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
LAB_003f62c8:
          plVar1 = (long *)PTR_empty_0067d020;
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 3;
          }
          return plVar1;
        }
      } while( true );
    }
  }
  return (long *)PTR_empty_0067d020;
}


// ===== 003f62e4  rive::ManifestAsset::resolvePath =====

/* rive::ManifestAsset::resolvePath(int) */

long * __thiscall rive::ManifestAsset::resolvePath(ManifestAsset *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(this + 0xb8);
  if (uVar3 != 0) {
    uVar4 = (ulong)param_1;
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0xb0) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_1) goto LAB_003f6398;
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar2 * uVar3;
          }
          if (uVar7 != uVar5) {
            plVar6 = (long *)0x0;
            goto LAB_003f6398;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
LAB_003f6398:
          plVar1 = (long *)PTR_emptyIntVector_0067d028;
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 3;
          }
          return plVar1;
        }
      } while( true );
    }
  }
  return (long *)PTR_emptyIntVector_0067d028;
}


// ===== 003f63b4  rive::ManifestAsset::resolvePath =====

/* non-virtual thunk to rive::ManifestAsset::resolvePath(int) */

long * __thiscall rive::ManifestAsset::resolvePath(ManifestAsset *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(this + 0x38);
  if (uVar3 != 0) {
    uVar4 = (ulong)param_1;
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0x30) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_1) goto LAB_003f6468;
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar2 * uVar3;
          }
          if (uVar7 != uVar5) {
            plVar6 = (long *)0x0;
            goto LAB_003f6468;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
LAB_003f6468:
          plVar1 = (long *)PTR_emptyIntVector_0067d028;
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 3;
          }
          return plVar1;
        }
      } while( true );
    }
  }
  return (long *)PTR_emptyIntVector_0067d028;
}


// ===== 003f6484  FUN_003f6484 =====

void FUN_003f6484(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar1 = PTR_vtable_0067d030 + 200;
  *param_1 = (long)(PTR_vtable_0067d030 + 0x10);
  param_1[0x10] = (long)puVar1;
  puVar2 = (undefined8 *)param_1[0x18];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)puVar2[3];
    pvVar4 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      puVar2[4] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar4;
  }
  pvVar3 = (void *)param_1[0x16];
  param_1[0x16] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar2 = (undefined8 *)param_1[0x13];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 3) & 1) != 0) {
      operator_delete((void *)puVar2[5]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[0x11];
  param_1[0x11] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0xe] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[10];
  if (pvVar3 != (void *)0x0) {
    param_1[0xb] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 003f65b4  FUN_003f65b4 =====

void FUN_003f65b4(void *param_1)

{
  FUN_003f6484();
  operator_delete(param_1);
  return;
}


// ===== 003f65d8  FUN_003f65d8 =====

undefined8 FUN_003f65d8(void)

{
  return 0x282;
}


// ===== 003f65e0  FUN_003f65e0 =====

undefined8 FUN_003f65e0(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 99) && (param_2 != 0x67)) && (param_2 != 0x282)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003f6608  FUN_003f6608 =====

undefined8 FUN_003f6608(void)

{
  return 0;
}


// ===== 003f6610  rive::FileAssetContents::import =====

/* rive::FileAssetContents::import(rive::ImportStack&) */

void __thiscall rive::FileAssetContents::import(FileAssetContents *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  FileAssetContents *pFVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  FileAssetContents *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    uVar12 = NEON_cnt(uVar6,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = (ulong)((uint)uVar6 - 1) & 0x67;
    }
    else {
      uVar8 = 0x67;
      if (uVar6 < 0x68) {
        uVar1 = (uint)uVar6 & 0xff;
        uVar2 = 0;
        if ((uVar6 & 0xff) != 0) {
          uVar2 = 0x67 / uVar1;
        }
        uVar8 = (ulong)(0x67 - uVar2 * uVar1);
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x67) {
          if ((short)plVar9[2] == 0x67) {
            plVar9 = (long *)plVar9[3];
            if (plVar9 != (long *)0x0) {
              local_30 = this;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_30);
              pFVar5 = local_30;
              local_30 = (FileAssetContents *)0x0;
              if (pFVar5 != (FileAssetContents *)0x0) {
                (**(code **)(*(long *)pFVar5 + 8))();
                pFVar5 = (FileAssetContents *)0x0;
              }
              goto LAB_003f6720;
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
  pFVar5 = (FileAssetContents *)0x1;
LAB_003f6720:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pFVar5);
  }
  return;
}


// ===== 003f6744  rive::FileAssetContents::decodeBytes =====

/* rive::FileAssetContents::decodeBytes(rive::Span<unsigned char const>) */

void rive::FileAssetContents::decodeBytes(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc(param_3);
    if (__dest == (void *)0x0) {
      param_3 = 0;
    }
    else {
      memcpy(__dest,param_2,param_3);
    }
  }
  free(*(void **)(param_1 + 0x10));
  *(void **)(param_1 + 0x10) = __dest;
  *(size_t *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 003f67b0  rive::FileAssetContents::copyBytes =====

/* rive::FileAssetContents::copyBytes(rive::FileAssetContentsBase const&) */

void rive::FileAssetContents::copyBytes(FileAssetContentsBase *param_1)

{
  return;
}


// ===== 003f67b4  rive::FileAssetContents::bytes =====

/* rive::FileAssetContents::bytes() */

FileAssetContents * __thiscall rive::FileAssetContents::bytes(FileAssetContents *this)

{
  return this + 0x10;
}


// ===== 003f67bc  rive::FileAssetContents::decodeSignature =====

/* rive::FileAssetContents::decodeSignature(rive::Span<unsigned char const>) */

void rive::FileAssetContents::decodeSignature(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc(param_3);
    if (__dest == (void *)0x0) {
      param_3 = 0;
    }
    else {
      memcpy(__dest,param_2,param_3);
    }
  }
  free(*(void **)(param_1 + 0x20));
  *(void **)(param_1 + 0x20) = __dest;
  *(size_t *)(param_1 + 0x28) = param_3;
  return;
}


// ===== 003f6828  rive::FileAssetContents::copySignature =====

/* rive::FileAssetContents::copySignature(rive::FileAssetContentsBase const&) */

void rive::FileAssetContents::copySignature(FileAssetContentsBase *param_1)

{
  return;
}


// ===== 003f682c  rive::FileAssetContents::signature =====

/* rive::FileAssetContents::signature() */

FileAssetContents * __thiscall rive::FileAssetContents::signature(FileAssetContents *this)

{
  return this + 0x20;
}


// ===== 003f6834  FUN_003f6834 =====

void FUN_003f6834(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d000 + 0x10);
  free((void *)param_1[4]);
  free((void *)param_1[2]);
  return;
}


// ===== 003f686c  FUN_003f686c =====

void FUN_003f686c(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d000 + 0x10);
  free((void *)param_1[4]);
  free((void *)param_1[2]);
  operator_delete(param_1);
  return;
}


// ===== 003f68ac  FUN_003f68ac =====

undefined8 FUN_003f68ac(void)

{
  return 0x6a;
}


// ===== 003f68b4  FUN_003f68b4 =====

bool FUN_003f68b4(undefined8 param_1,short param_2)

{
  return param_2 == 0x6a;
}


// ===== 003f68c4  FUN_003f68c4 =====

undefined8 FUN_003f68c4(long *param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0xd4) {
    lVar5 = 10;
  }
  else {
    if (param_2 != 0x38f) {
      return 0;
    }
    lVar5 = 0xc;
  }
  uVar9 = 0;
  uVar4 = 0;
  pbVar3 = (byte *)(*param_3 + param_3[1]);
  pbVar6 = (byte *)param_3[2];
  do {
    if (pbVar3 <= pbVar6) {
      uVar4 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
      pbVar6 = pbVar3;
      goto LAB_003f694c;
    }
    pbVar7 = pbVar6 + 1;
    bVar1 = *pbVar6;
    uVar2 = uVar9 & 0x3f;
    uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
    uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
    pbVar6 = pbVar7;
  } while ((char)bVar1 < '\0');
  if ((char)param_3[3] != '\0') {
    uVar4 = 0;
  }
  pbVar3 = pbVar7;
  pbVar6 = pbVar7 + uVar4;
LAB_003f694c:
  lVar8 = *param_1;
  param_3[2] = (long)pbVar6;
  (**(code **)(lVar8 + lVar5 * 8))(param_1,pbVar3,uVar4);
  return 1;
}


// ===== 003f6974  FUN_003f6974 =====

void FUN_003f6974(void)

{
  return;
}


// ===== 003f6978  FUN_003f6978 =====

void FUN_003f6978(void)

{
  return;
}


// ===== 003f697c  rive::FocusData::~FocusData =====

/* rive::FocusData::~FocusData() */

void __thiscall rive::FocusData::~FocusData(FocusData *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  FocusManager *pFVar5;
  void *local_48;
  long local_40;
  long local_38;
  
  puVar2 = PTR_vtable_0067d430;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar4 = *(void **)(this + 0x98);
  *(undefined **)this = PTR_vtable_0067d430 + 0x10;
  *(undefined **)(this + 0x90) = puVar2 + 0x110;
  if (pvVar4 != (void *)0x0) {
    pFVar5 = *(FocusManager **)((long)pvVar4 + 0x18);
    *(undefined8 *)((long)pvVar4 + 8) = 0;
    if (pFVar5 != (FocusManager *)0x0) {
      FUN_00340fb0(1,pvVar4);
      local_48 = pvVar4;
      FocusManager::removeChild(pFVar5,&local_48);
      iVar3 = FUN_00340fe0(0xffffffff,pvVar4);
      if (iVar3 == 1) {
        if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + 0x48));
        }
        local_40 = (long)pvVar4 + 0x20;
        FUN_0034b070(&local_40);
        operator_delete(pvVar4);
      }
    }
  }
  pvVar4 = *(void **)(this + 0xd0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0xb8);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0xa0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x98);
  if ((pvVar4 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pvVar4), iVar3 == 1)) {
    if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + 0x48));
    }
    local_40 = (long)pvVar4 + 0x20;
    FUN_0034b070(&local_40);
    operator_delete(pvVar4);
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
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f6b2c  rive::FocusData::~FocusData =====

/* rive::FocusData::~FocusData() */

void __thiscall rive::FocusData::~FocusData(FocusData *this)

{
  ~FocusData(this);
  operator_delete(this);
  return;
}


// ===== 003f6b50  FUN_003f6b50 =====

undefined8 FUN_003f6b50(void)

{
  return 0x28d;
}


// ===== 003f6b58  FUN_003f6b58 =====

bool FUN_003f6b58(undefined8 param_1,short param_2)

{
  return param_2 == 0x28d || param_2 == 10;
}


// ===== 003f6b6c  FUN_003f6b6c =====

undefined8 FUN_003f6b6c(long param_1,ushort param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x3ba) {
    if (param_2 == 4) {
      pcVar6 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar6) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f6d6c;
        }
        pcVar10 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar1 < '\0');
      param_3[2] = (long)pcVar10;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_003f6d6c:
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
      uVar7 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003f6dbc;
        }
        pbVar11 = pbVar9 + 1;
        bVar2 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
        pbVar9 = pbVar11;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar11;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003f6dbc:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar7;
    }
    else {
      if (param_2 != 0x3b9) goto LAB_003f6e14;
      pcVar6 = (char *)param_3[2];
      if ((*param_3 + param_3[1]) - (long)pcVar6 < 1) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      else {
        param_3[2] = (long)(pcVar6 + 1);
        *(bool *)(param_1 + 0x88) = *pcVar6 == '\x01';
      }
    }
  }
  else if (param_2 == 0x3ba) {
    pcVar6 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar6 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x89) = 0;
    }
    else {
      param_3[2] = (long)(pcVar6 + 1);
      *(bool *)(param_1 + 0x89) = *pcVar6 == '\x01';
    }
  }
  else if (param_2 == 0x3bb) {
    pcVar6 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar6 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x8a) = 0;
    }
    else {
      param_3[2] = (long)(pcVar6 + 1);
      *(bool *)(param_1 + 0x8a) = *pcVar6 == '\x01';
    }
  }
  else {
    if (param_2 != 0x3bc) goto LAB_003f6e14;
    uVar12 = 0;
    uVar7 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003f6da4;
      }
      pbVar11 = pbVar9 + 1;
      bVar2 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
      pbVar9 = pbVar11;
    } while ((char)bVar2 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar7 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003f6da4:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x8c) = (int)uVar7;
  }
  uVar5 = 1;
LAB_003f6e14:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f6e3c  rive::FocusData::nameChanged =====

/* rive::FocusData::nameChanged() */

void __thiscall rive::FocusData::nameChanged(FocusData *this)

{
  if (*(long *)(this + 0x98) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (*(long *)(this + 0x98) + 0x38),(basic_string *)(this + 0x10));
    return;
  }
  return;
}


// ===== 003f6e58  rive::FocusData::buildDependencies =====

/* rive::FocusData::buildDependencies() */

void __thiscall rive::FocusData::buildDependencies(FocusData *this)

{
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    return;
  }
  return;
}


// ===== 003f6e6c  rive::FocusData::update =====

/* rive::FocusData::update(rive::ComponentDirt) */

void rive::FocusData::update
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((param_6 >> 7 & 1) == 0) || (lVar3 = *(long *)(param_5 + 0x98), lVar3 == 0)) {
LAB_003f6f74:
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_003f6fa0;
  }
  else {
    plVar4 = *(long **)(param_5 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,0x199);
      if ((uVar2 & 1) != 0) {
        uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4);
        lVar3 = *(long *)(param_5 + 0x40);
        uVar6 = param_4;
        if ((lVar3 != 0) &&
           (plVar4 = *(long **)(lVar3 + 0xc38), local_50 = param_3, uStack_4c = param_4,
           plVar4 != (long *)0x0)) {
          local_50 = uVar5;
          uStack_4c = param_2;
          uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,&local_50,lVar3);
          plVar4 = *(long **)(lVar3 + 0xc38);
          local_50 = param_3;
          uStack_4c = param_4;
          if (plVar4 != (long *)0x0) {
            uVar6 = param_2;
            param_3 = (**(code **)(*plVar4 + 0x50))(plVar4,&local_50,lVar3);
          }
        }
        lVar3 = *(long *)(param_5 + 0x98);
        *(undefined4 *)(lVar3 + 0x50) = uVar5;
        *(undefined4 *)(lVar3 + 0x54) = param_2;
        *(undefined4 *)(lVar3 + 0x58) = param_3;
        *(undefined4 *)(lVar3 + 0x5c) = uVar6;
        goto LAB_003f6f74;
      }
      lVar3 = *(long *)(param_5 + 0x98);
    }
    if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_003f6fa0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
  }
  return;
}


// ===== 003f6fa4  rive::FocusData::canFocusChanged =====

/* rive::FocusData::canFocusChanged() */

void __thiscall rive::FocusData::canFocusChanged(FocusData *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x98);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfe | (byte)this[0x88];
  }
  return;
}


// ===== 003f6fc4  rive::FocusData::canTouchChanged =====

/* rive::FocusData::canTouchChanged() */

void __thiscall rive::FocusData::canTouchChanged(FocusData *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x98);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfd | (char)this[0x89] << 1;
  }
  return;
}


// ===== 003f6fe4  rive::FocusData::canTraverseChanged =====

/* rive::FocusData::canTraverseChanged() */

void __thiscall rive::FocusData::canTraverseChanged(FocusData *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x98);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfb | (char)this[0x8a] << 2;
  }
  return;
}


// ===== 003f7004  rive::FocusData::edgeBehaviorValueChanged =====

/* rive::FocusData::edgeBehaviorValueChanged() */

void __thiscall rive::FocusData::edgeBehaviorValueChanged(FocusData *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x98);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xe7 | (char)this[0x8c] << 3;
  }
  return;
}


// ===== 003f7024  rive::FocusData::isEligibleForFocusTraversal =====

/* rive::FocusData::isEligibleForFocusTraversal() const */

bool __thiscall rive::FocusData::isEligibleForFocusTraversal(FocusData *this)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  Component *pCVar6;
  long *plVar7;
  long *local_70;
  long local_68;
  char local_60;
  long *local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x80))();
  if ((uVar3 & 1) == 0) {
    pCVar6 = *(Component **)(this + 0x30);
    if (pCVar6 == (Component *)0x0) {
      bVar2 = true;
      goto LAB_003f7084;
    }
    uVar3 = (**(code **)(*(long *)pCVar6 + 0x80))(pCVar6);
    if ((((uVar3 & 1) == 0) &&
        ((uVar3 = (**(code **)(*(long *)pCVar6 + 0x18))(pCVar6,0xd), (uVar3 & 1) == 0 ||
         (uVar3 = (**(code **)(*(long *)pCVar6 + 0x1e8))(pCVar6), (uVar3 & 1) == 0)))) &&
       ((uVar3 = (**(code **)(*(long *)pCVar6 + 0x18))(pCVar6,0x26), (uVar3 & 1) == 0 ||
        (0.0 < *(float *)(pCVar6 + 0xe8))))) {
      ParentTraversal::ParentTraversal((ParentTraversal *)&local_70,pCVar6);
      while( true ) {
        plVar5 = local_70;
        local_60 = '\0';
        local_58 = (long *)0x0;
        lStack_50 = 0;
        bVar2 = local_70 == (long *)0x0;
        if (local_70 == (long *)0x0) break;
        plVar7 = (long *)local_70[6];
        if ((long *)local_70[6] == (long *)0x0) {
          if ((((local_68 == 0) || (plVar7 = *(long **)(local_68 + 0xc38), plVar7 == (long *)0x0))
              || (lVar4 = (**(code **)(*plVar7 + 0x80))(plVar7), lVar4 == 0)) ||
             (local_70 = *(long **)(lVar4 + 0x30), local_70 == (long *)0x0)) {
            local_70 = (long *)0x0;
            plVar7 = local_70;
          }
          else {
            local_60 = '\x01';
            lStack_50 = local_68;
            local_58 = plVar7;
            local_68 = (**(code **)(*plVar7 + 0x40))(plVar7);
            plVar7 = local_70;
          }
        }
        local_70 = plVar7;
        uVar3 = (**(code **)(*plVar5 + 0x80))(plVar5);
        if (((((uVar3 & 1) != 0) ||
             ((uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0xd), (uVar3 & 1) != 0 &&
              (uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5), (uVar3 & 1) != 0)))) ||
            ((uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x26), (uVar3 & 1) != 0 &&
             (*(float *)(plVar5 + 0x1d) <= 0.0)))) ||
           ((((local_60 != '\0' && (local_58 != (long *)0x0)) &&
             (plVar5 = (long *)(**(code **)(*local_58 + 0x80))(), plVar5 != (long *)0x0)) &&
            (((uVar3 = (**(code **)(*plVar5 + 0x80))(), (uVar3 & 1) != 0 ||
              ((uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0xd), (uVar3 & 1) != 0 &&
               (uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5), (uVar3 & 1) != 0)))) ||
             (((uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x26), (uVar3 & 1) != 0 &&
               (*(float *)(plVar5 + 0x1d) <= 0.0)) ||
              ((uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5c), (uVar3 & 1) != 0 &&
               ((char)plVar5[0x2f] != '\0')))))))))) break;
      }
      goto LAB_003f7084;
    }
  }
  bVar2 = false;
LAB_003f7084:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f72a4  rive::FocusData::keyInput =====

/* rive::FocusData::keyInput(rive::Key, rive::KeyModifiers, bool, bool) */

uint __thiscall
rive::FocusData::keyInput
          (FocusData *this,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xb8);
  puVar2 = *(undefined8 **)(this + 0xc0);
  if (puVar1 == puVar2) {
    uVar3 = 0;
  }
  else {
    do {
      puVar4 = puVar1 + 1;
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x10))
                        ((long *)*puVar1,param_2,param_3,param_4 & 1,param_5 & 1);
      if ((uVar3 & 1) != 0) break;
      puVar1 = puVar4;
    } while (puVar4 != puVar2);
  }
  return uVar3 & 1;
}


// ===== 003f7328  rive::FocusData::textInput =====

/* rive::FocusData::textInput(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

uint __thiscall rive::FocusData::textInput(FocusData *this,basic_string *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xd0);
  puVar2 = *(undefined8 **)(this + 0xd8);
  if (puVar1 == puVar2) {
    uVar3 = 0;
  }
  else {
    do {
      puVar4 = puVar1 + 1;
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,param_1);
      if ((uVar3 & 1) != 0) break;
      puVar1 = puVar4;
    } while (puVar4 != puVar2);
  }
  return uVar3 & 1;
}


// ===== 003f738c  rive::FocusData::focused =====

/* rive::FocusData::focused() */

void __thiscall rive::FocusData::focused(FocusData *this)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  scrollIntoView();
  puVar1 = *(undefined8 **)(this + 0xa8);
  for (puVar7 = *(undefined8 **)(this + 0xa0); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)*puVar7 + 0x10))();
  }
  plVar6 = *(long **)(this + 0x30);
  if ((plVar6 != (long *)0x0) && (uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,2), (uVar3 & 1) != 0)
     ) {
    puVar1 = (undefined8 *)plVar6[0x12];
    for (puVar7 = (undefined8 *)plVar6[0x11]; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      plVar6 = (long *)*puVar7;
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,0x29c);
      if ((uVar3 & 1) != 0) {
        lVar4 = plVar6[0x1d];
        if (lVar4 == 0) {
          return;
        }
        pbVar5 = *(byte **)(lVar4 + 0x98);
        *(uint *)(lVar4 + 0x2c) = *(uint *)(lVar4 + 0x2c) | 0x80;
        if (pbVar5 == (byte *)0x0) {
          return;
        }
        if (plVar6[6] == 0) {
          return;
        }
        iVar2 = *(int *)(lVar4 + 4);
        *pbVar5 = *pbVar5 | 2;
        if (iVar2 == 0) {
          return;
        }
        FUN_004987d0(pbVar5 + 0x118,iVar2,iVar2);
        return;
      }
    }
  }
  return;
}


// ===== 003f747c  rive::FocusData::blurred =====

/* rive::FocusData::blurred() */

void __thiscall rive::FocusData::blurred(FocusData *this)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar1 = *(undefined8 **)(this + 0xa8);
  for (puVar7 = *(undefined8 **)(this + 0xa0); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)*puVar7 + 0x18))();
  }
  plVar6 = *(long **)(this + 0x30);
  if ((plVar6 != (long *)0x0) && (uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,2), (uVar3 & 1) != 0)
     ) {
    puVar1 = (undefined8 *)plVar6[0x12];
    for (puVar7 = (undefined8 *)plVar6[0x11]; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      plVar6 = (long *)*puVar7;
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,0x29c);
      if ((uVar3 & 1) != 0) {
        lVar4 = plVar6[0x1d];
        if (lVar4 == 0) {
          return;
        }
        pbVar5 = *(byte **)(lVar4 + 0x98);
        *(uint *)(lVar4 + 0x2c) = *(uint *)(lVar4 + 0x2c) & 0xffffff7f;
        if (pbVar5 == (byte *)0x0) {
          return;
        }
        if (plVar6[6] == 0) {
          return;
        }
        iVar2 = *(int *)(lVar4 + 4);
        *pbVar5 = *pbVar5 | 2;
        if (iVar2 == 0) {
          return;
        }
        FUN_004987d0(pbVar5 + 0x118,iVar2,iVar2);
        return;
      }
    }
  }
  return;
}


// ===== 003f7568  rive::FocusData::worldPosition =====

/* rive::FocusData::worldPosition(rive::Vec2D&) */

void rive::FocusData::worldPosition(Vec2D *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *in_x1;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 in_s1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((plVar4 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,0x5b), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar6 = *(undefined8 *)((long)plVar4 + 0xb4);
    local_40 = uVar6;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (plVar4 = *(long **)(*(long *)(param_1 + 0x40) + 0xc38), plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
      uVar6 = CONCAT44(in_s1,uVar5);
    }
    uVar3 = 1;
    *in_x1 = uVar6;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 003f7614  FUN_003f7614 =====

undefined8 FUN_003f7614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 003f761c  FUN_003f761c =====

bool FUN_003f761c(long param_1)

{
  return *(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xc0) ||
         *(long *)(param_1 + 0xd0) != *(long *)(param_1 + 0xd8);
}


// ===== 003f7634  rive::FocusData::~FocusData =====

/* non-virtual thunk to rive::FocusData::~FocusData() */

void __thiscall rive::FocusData::~FocusData(FocusData *this)

{
  ~FocusData(this + -0x90);
  return;
}


// ===== 003f763c  rive::FocusData::~FocusData =====

/* non-virtual thunk to rive::FocusData::~FocusData() */

void __thiscall rive::FocusData::~FocusData(FocusData *this)

{
  ~FocusData(this + -0x90);
  operator_delete(this + -0x90);
  return;
}


// ===== 003f7664  FUN_003f7664 =====

undefined8 FUN_003f7664(long param_1)

{
  return *(undefined8 *)(param_1 + -0x50);
}


// ===== 003f766c  rive::FocusData::keyInput =====

/* non-virtual thunk to rive::FocusData::keyInput(rive::Key, rive::KeyModifiers, bool, bool) */

uint __thiscall
rive::FocusData::keyInput
          (FocusData *this,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  if (puVar1 == puVar2) {
    uVar3 = 0;
  }
  else {
    do {
      puVar4 = puVar1 + 1;
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x10))
                        ((long *)*puVar1,param_2,param_3,param_4 & 1,param_5 & 1);
      if ((uVar3 & 1) != 0) break;
      puVar1 = puVar4;
    } while (puVar4 != puVar2);
  }
  return uVar3 & 1;
}


// ===== 003f76f0  rive::FocusData::textInput =====

/* non-virtual thunk to rive::FocusData::textInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall rive::FocusData::textInput(FocusData *this,basic_string *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  if (puVar1 == puVar2) {
    uVar3 = 0;
  }
  else {
    do {
      puVar4 = puVar1 + 1;
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,param_1);
      if ((uVar3 & 1) != 0) break;
      puVar1 = puVar4;
    } while (puVar4 != puVar2);
  }
  return uVar3 & 1;
}


// ===== 003f7754  rive::FocusData::focused =====

/* non-virtual thunk to rive::FocusData::focused() */

void __thiscall rive::FocusData::focused(FocusData *this)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  scrollIntoView();
  puVar1 = *(undefined8 **)(this + 0x18);
  for (puVar7 = *(undefined8 **)(this + 0x10); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)*puVar7 + 0x10))();
  }
  plVar6 = *(long **)(this + -0x60);
  if ((plVar6 != (long *)0x0) && (uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,2), (uVar3 & 1) != 0)
     ) {
    puVar1 = (undefined8 *)plVar6[0x12];
    for (puVar7 = (undefined8 *)plVar6[0x11]; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      plVar6 = (long *)*puVar7;
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,0x29c);
      if ((uVar3 & 1) != 0) {
        lVar4 = plVar6[0x1d];
        if (lVar4 == 0) {
          return;
        }
        pbVar5 = *(byte **)(lVar4 + 0x98);
        *(uint *)(lVar4 + 0x2c) = *(uint *)(lVar4 + 0x2c) | 0x80;
        if (pbVar5 == (byte *)0x0) {
          return;
        }
        if (plVar6[6] == 0) {
          return;
        }
        iVar2 = *(int *)(lVar4 + 4);
        *pbVar5 = *pbVar5 | 2;
        if (iVar2 == 0) {
          return;
        }
        FUN_004987d0(pbVar5 + 0x118,iVar2,iVar2);
        return;
      }
    }
  }
  return;
}


// ===== 003f7848  rive::FocusData::blurred =====

/* non-virtual thunk to rive::FocusData::blurred() */

void __thiscall rive::FocusData::blurred(FocusData *this)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  for (puVar7 = *(undefined8 **)(this + 0x10); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)*puVar7 + 0x18))();
  }
  plVar6 = *(long **)(this + -0x60);
  if ((plVar6 != (long *)0x0) && (uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,2), (uVar3 & 1) != 0)
     ) {
    puVar1 = (undefined8 *)plVar6[0x12];
    for (puVar7 = (undefined8 *)plVar6[0x11]; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      plVar6 = (long *)*puVar7;
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,0x29c);
      if ((uVar3 & 1) != 0) {
        lVar4 = plVar6[0x1d];
        if (lVar4 == 0) {
          return;
        }
        pbVar5 = *(byte **)(lVar4 + 0x98);
        *(uint *)(lVar4 + 0x2c) = *(uint *)(lVar4 + 0x2c) & 0xffffff7f;
        if (pbVar5 == (byte *)0x0) {
          return;
        }
        if (plVar6[6] == 0) {
          return;
        }
        iVar2 = *(int *)(lVar4 + 4);
        *pbVar5 = *pbVar5 | 2;
        if (iVar2 == 0) {
          return;
        }
        FUN_004987d0(pbVar5 + 0x118,iVar2,iVar2);
        return;
      }
    }
  }
  return;
}


// ===== 003f7934  rive::FocusData::worldPosition =====

/* non-virtual thunk to rive::FocusData::worldPosition(rive::Vec2D&) */

void __thiscall rive::FocusData::worldPosition(FocusData *this,Vec2D *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 in_s1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(this + -0x60);
  if ((plVar4 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,0x5b), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar6 = *(undefined8 *)((long)plVar4 + 0xb4);
    local_40 = uVar6;
    if ((*(long *)(this + -0x50) != 0) &&
       (plVar4 = *(long **)(*(long *)(this + -0x50) + 0xc38), plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
      uVar6 = CONCAT44(in_s1,uVar5);
    }
    uVar3 = 1;
    *(undefined8 *)param_1 = uVar6;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 003f79e0  FUN_003f79e0 =====

undefined8 FUN_003f79e0(void)

{
  return 0;
}


// ===== 003f79e8  rive::FocusData::isEligibleForFocusTraversal =====

/* non-virtual thunk to rive::FocusData::isEligibleForFocusTraversal() const */

void __thiscall rive::FocusData::isEligibleForFocusTraversal(FocusData *this)

{
  isEligibleForFocusTraversal(this + -0x90);
  return;
}


// ===== 003f79f0  FUN_003f79f0 =====

bool FUN_003f79f0(long param_1)

{
  return *(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30) ||
         *(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48);
}


// ===== 003f7a08  rive::FocusData::scrollIntoView =====

/* rive::FocusData::scrollIntoView() */

void rive::FocusData::scrollIntoView(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  Component *in_x0;
  ulong uVar5;
  long lVar6;
  FocusData *this;
  ScrollConstraint *pSVar7;
  Component *pCVar8;
  long *plVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float in_s1;
  float in_s2;
  float fVar13;
  float in_s3;
  long *local_b8;
  long *local_b0;
  char local_a8;
  long *local_a0;
  long *plStack_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pCVar8 = in_x0;
  do {
    pCVar8 = *(Component **)(pCVar8 + 0x30);
    if (pCVar8 == (Component *)0x0) goto LAB_003f7be8;
    uVar5 = (**(code **)(*(long *)pCVar8 + 0x18))(pCVar8,0x199);
  } while ((uVar5 & 1) == 0);
  fVar11 = (float)(**(code **)(*(long *)pCVar8 + 0x298))(pCVar8);
  local_90 = fVar11;
  fStack_8c = in_s1;
  local_88 = in_s2;
  fStack_84 = in_s3;
  ParentTraversal::ParentTraversal((ParentTraversal *)&local_b8,in_x0);
  while( true ) {
    plVar3 = local_b8;
    local_a8 = '\0';
    local_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    if (local_b8 == (long *)0x0) break;
    plVar9 = (long *)local_b8[6];
    if ((long *)local_b8[6] == (long *)0x0) {
      if ((((local_b0 == (long *)0x0) || (plVar9 = (long *)local_b0[0x187], plVar9 == (long *)0x0))
          || (lVar6 = (**(code **)(*plVar9 + 0x80))(plVar9), lVar6 == 0)) ||
         (local_b8 = *(long **)(lVar6 + 0x30), local_b8 == (long *)0x0)) {
        local_b8 = (long *)0x0;
        plVar9 = local_b8;
      }
      else {
        local_a8 = '\x01';
        plStack_98 = local_b0;
        local_a0 = plVar9;
        local_b0 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
        plVar9 = local_b8;
      }
    }
    local_b8 = plVar9;
    plVar9 = plStack_98;
    plVar4 = local_a0;
    if (local_a8 != '\0') {
      uVar5 = (**(code **)(*plStack_98 + 0x18))(plStack_98,1);
      if ((uVar5 & 1) == 0) {
        plVar9 = (long *)0x0;
      }
      (**(code **)(*plVar4 + 0x58))(&local_80,plVar4,plVar9);
      fVar13 = (float)NEON_fmadd(local_80,fVar11,in_s1 * local_78);
      in_s1 = (float)NEON_fmadd(uStack_7c,fVar11,in_s1 * fStack_74);
      fVar12 = (float)NEON_fmadd(local_80,in_s2,local_78 * in_s3);
      in_s3 = (float)NEON_fmadd(uStack_7c,in_s2,fStack_74 * in_s3);
      fVar11 = local_70 + fVar13;
      in_s1 = fStack_6c + in_s1;
      in_s2 = local_70 + fVar12;
      in_s3 = fStack_6c + in_s3;
      local_90 = fVar11;
      fStack_8c = in_s1;
      local_88 = in_s2;
      fStack_84 = in_s3;
    }
    uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,0x26);
    if ((uVar5 & 1) != 0) {
      puVar1 = (undefined8 *)plVar3[0x20];
      for (puVar10 = (undefined8 *)plVar3[0x1f]; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        pSVar7 = (ScrollConstraint *)*puVar10;
        this = (FocusData *)(**(code **)(*(long *)pSVar7 + 0x18))(pSVar7,0x209);
        if (((ulong)this & 1) != 0) {
          scrollConstraintToShowBounds(this,pSVar7,(AABB *)&local_90);
        }
      }
    }
  }
LAB_003f7be8:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003f7c1c  rive::FocusData::scrollConstraintToShowBounds =====

/* rive::FocusData::scrollConstraintToShowBounds(rive::ScrollConstraint*, rive::AABB const&) */

FocusData * __thiscall
rive::FocusData::scrollConstraintToShowBounds
          (FocusData *this,ScrollConstraint *param_1,AABB *param_2)

{
  ulong uVar1;
  FocusData *pFVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float extraout_s0;
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
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    return this;
  }
  lVar3 = *(long *)(lVar4 + 0x30);
  if (lVar3 == 0) {
    return this;
  }
  fVar11 = *(float *)(lVar3 + 0x200);
  if (param_1[0x8c] == (ScrollConstraint)0x1) {
    fVar10 = *(float *)(lVar3 + 0x204);
LAB_003f7c7c:
    fVar10 = fVar10 - *(float *)(lVar4 + 0x1fc);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
  }
  else {
    fVar10 = *(float *)(lVar3 + 0x204);
    fVar11 = fVar11 - *(float *)(lVar4 + 0x1f8);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (param_1[0x8c] != (ScrollConstraint)0x0) goto LAB_003f7c7c;
  }
  fVar15 = *(float *)(lVar3 + 0xb4);
  fVar12 = *(float *)(lVar3 + 0xb8);
  fVar16 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar13 = *(float *)(param_2 + 8);
  fVar14 = *(float *)(param_2 + 0xc);
  if (((*(long **)(param_1 + 0x100) == (long *)0x0) ||
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x100) + 0xa0))(), (uVar1 & 1) == 0)) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x100) + 0xf8))(), (uVar1 & 1) == 0)) {
    fVar6 = *(float *)(param_1 + 0x98);
    pFVar2 = *(FocusData **)(param_1 + 0x100);
    if (pFVar2 != (FocusData *)0x0) goto LAB_003f7cf4;
LAB_003f7d30:
    fVar8 = *(float *)(param_1 + 0x9c);
  }
  else {
    fVar6 = (float)(**(code **)(**(long **)(param_1 + 0x100) + 0xe8))();
    pFVar2 = *(FocusData **)(param_1 + 0x100);
    if (pFVar2 == (FocusData *)0x0) {
      pFVar2 = (FocusData *)0x0;
      goto LAB_003f7d30;
    }
LAB_003f7cf4:
    pFVar2 = (FocusData *)(**(code **)(*(long *)pFVar2 + 0xa0))();
    if ((((ulong)pFVar2 & 1) == 0) ||
       (pFVar2 = (FocusData *)(**(code **)(**(long **)(param_1 + 0x100) + 0x100))(),
       ((ulong)pFVar2 & 1) == 0)) goto LAB_003f7d30;
    pFVar2 = (FocusData *)(**(code **)(**(long **)(param_1 + 0x100) + 0xf0))();
    fVar8 = extraout_s0;
  }
  fVar7 = 0.0;
  fVar9 = 0.0;
  if ((*(uint *)(param_1 + 0x8c) & 0xfd) == 0) {
    fVar16 = fVar16 - fVar15;
    fVar13 = fVar13 - fVar15;
    fVar15 = fVar13 - fVar16;
    if ((fVar15 == fVar11 || fVar15 < fVar11 != (NAN(fVar15) || NAN(fVar11))) && (0.0 <= fVar16)) {
      fVar9 = 0.0;
      if (fVar13 == fVar11 || fVar13 < fVar11 != (NAN(fVar13) || NAN(fVar11))) goto LAB_003f7d7c;
      fVar16 = fVar13 - fVar11;
    }
    fVar9 = -fVar16;
  }
LAB_003f7d7c:
  if ((*(uint *)(param_1 + 0x8c) & 0xff) - 1 < 2) {
    fVar5 = fVar5 - fVar12;
    fVar14 = fVar14 - fVar12;
    fVar11 = fVar14 - fVar5;
    if ((fVar11 != fVar10 && fVar11 < fVar10 == (NAN(fVar11) || NAN(fVar10))) || (fVar5 < 0.0)) {
      fVar7 = -fVar5;
    }
    else if (fVar14 != fVar10 && fVar14 < fVar10 == (NAN(fVar14) || NAN(fVar10))) {
      fVar7 = -(fVar14 - fVar10);
    }
  }
  if ((fVar9 == 0.0) && (fVar7 == 0.0)) {
    return pFVar2;
  }
  fVar11 = (float)ScrollConstraint::nearestSnapOffsetInDirection
                            (fVar6,fVar8,fVar6 + fVar9,fVar8 + fVar7,param_1);
  pFVar2 = (FocusData *)ScrollConstraint::scrollToPosition(param_1,fVar11,fVar8);
  return pFVar2;
}


// ===== 003f7e24  rive::FocusData::focusNode =====

/* rive::FocusData::focusNode() */

void rive::FocusData::focusNode(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long in_x0;
  undefined4 *puVar6;
  ulong uVar7;
  long *in_x8;
  long lVar8;
  long *plVar9;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  undefined4 local_60 [2];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar8 = *(long *)(in_x0 + 0x98);
  if (lVar8 == 0) {
    puVar6 = (undefined4 *)operator_new(0x68);
    *puVar6 = 1;
    bVar1 = *(byte *)(in_x0 + 0x88);
    *(long *)(puVar6 + 2) = in_x0 + 0x90;
    cVar2 = *(char *)(in_x0 + 0x89);
    *(undefined2 *)((long)puVar6 + 0x62) = 0;
    cVar3 = *(char *)(in_x0 + 0x8a);
    *(undefined8 *)(puVar6 + 6) = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 10) = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 0xe) = 0;
    *(undefined8 *)(puVar6 + 0xc) = 0;
    *(undefined8 *)(puVar6 + 0x12) = 0;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    cVar4 = *(char *)(in_x0 + 0x8c);
    *(undefined8 *)(puVar6 + 0x16) = 0;
    *(undefined8 *)(puVar6 + 0x14) = 0;
    *(undefined4 **)(in_x0 + 0x98) = puVar6;
    *(byte *)(puVar6 + 0x18) = bVar1 | cVar2 << 1 | cVar3 << 2 | cVar4 << 3;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar6 + 0xe),(basic_string *)(in_x0 + 0x10));
    lVar8 = *(long *)(in_x0 + 0x98);
    if (lVar8 == 0) {
      lVar8 = 0;
      goto LAB_003f7e64;
    }
    plVar9 = *(long **)(in_x0 + 0x30);
    if (plVar9 == (long *)0x0) {
LAB_003f7fa4:
      *(undefined8 *)(lVar8 + 0x50) = 0;
      *(undefined8 *)(lVar8 + 0x58) = 0;
      lVar8 = *(long *)(in_x0 + 0x98);
    }
    else {
      uVar7 = (**(code **)(*plVar9 + 0x18))(plVar9,0x199);
      if ((uVar7 & 1) == 0) {
        lVar8 = *(long *)(in_x0 + 0x98);
        goto LAB_003f7fa4;
      }
      local_60[0] = (**(code **)(*plVar9 + 0x298))(plVar9);
      lVar8 = *(long *)(in_x0 + 0x40);
      if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0xc38), plVar9 != (long *)0x0)) {
        local_60[0] = (**(code **)(*plVar9 + 0x50))(plVar9,local_60,lVar8);
        plVar9 = *(long **)(lVar8 + 0xc38);
        if (plVar9 != (long *)0x0) {
          in_s3 = in_s1;
          in_s2 = (**(code **)(*plVar9 + 0x50))(plVar9,local_60,lVar8);
        }
      }
      lVar8 = *(long *)(in_x0 + 0x98);
      *(undefined4 *)(lVar8 + 0x50) = local_60[0];
      *(undefined4 *)(lVar8 + 0x54) = in_s1;
      *(undefined4 *)(lVar8 + 0x58) = in_s2;
      *(undefined4 *)(lVar8 + 0x5c) = in_s3;
      lVar8 = *(long *)(in_x0 + 0x98);
    }
    if (lVar8 == 0) goto LAB_003f7e64;
  }
  FUN_00340fb0(1,lVar8);
LAB_003f7e64:
  *in_x8 = lVar8;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003f7fd4  rive::FocusData::updateWorldBounds =====

/* rive::FocusData::updateWorldBounds() */

void rive::FocusData::updateWorldBounds(void)

{
  long lVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(in_x0 + 0x98);
  if (lVar3 == 0) {
LAB_003f80d0:
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_003f80fc;
  }
  else {
    plVar4 = *(long **)(in_x0 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,0x199);
      if ((uVar2 & 1) != 0) {
        uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4);
        lVar3 = *(long *)(in_x0 + 0x40);
        if ((lVar3 != 0) && (plVar4 = *(long **)(lVar3 + 0xc38), plVar4 != (long *)0x0)) {
          local_50[0] = uVar5;
          uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,local_50,lVar3);
          plVar4 = *(long **)(lVar3 + 0xc38);
          if (plVar4 != (long *)0x0) {
            in_s3 = in_s1;
            in_s2 = (**(code **)(*plVar4 + 0x50))(plVar4,local_50,lVar3);
          }
        }
        lVar3 = *(long *)(in_x0 + 0x98);
        *(undefined4 *)(lVar3 + 0x50) = uVar5;
        *(undefined4 *)(lVar3 + 0x54) = in_s1;
        *(undefined4 *)(lVar3 + 0x58) = in_s2;
        *(undefined4 *)(lVar3 + 0x5c) = in_s3;
        goto LAB_003f80d0;
      }
      lVar3 = *(long *)(in_x0 + 0x98);
    }
    if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_003f80fc:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
  }
  return;
}


// ===== 003f8100  rive::FocusData::addFocusListener =====

/* rive::FocusData::addFocusListener(rive::FocusListener*) */

void __thiscall rive::FocusData::addFocusListener(FocusData *this,FocusListener *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xa8);
  if (puVar10 < *(undefined8 **)(this + 0xb0)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003f8240;
  }
  puVar9 = *(undefined8 **)(this + 0xa0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003f8264();
LAB_003f8260:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xb0) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003f8260;
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
      if (uVar6 == uVar7) goto LAB_003f822c;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xa0);
  }
LAB_003f822c:
  *(undefined8 **)(this + 0xa0) = puVar4;
  *(undefined8 **)(this + 0xa8) = puVar13;
  *(void **)(this + 0xb0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003f8240:
  *(undefined8 **)(this + 0xa8) = puVar13;
  return;
}


// ===== 003f8264  FUN_003f8264 =====

void FUN_003f8264(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003f8278  rive::FocusData::removeFocusListener =====

/* rive::FocusData::removeFocusListener(rive::FocusListener*) */

void __thiscall rive::FocusData::removeFocusListener(FocusData *this,FocusListener *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  puVar2 = *(undefined8 **)(this + 0xa8);
  puVar1 = *(undefined8 **)(this + 0xa0);
  __dest = puVar1;
  for (; (puVar1 != puVar2 && (__dest = puVar1, (FocusListener *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(this + 0xa8) = (long)__dest + __n;
  }
  return;
}


// ===== 003f82ec  rive::FocusData::addKeyboardListener =====

/* rive::FocusData::addKeyboardListener(rive::KeyboardListener*) */

void __thiscall rive::FocusData::addKeyboardListener(FocusData *this,KeyboardListener *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xc0);
  if (puVar10 < *(undefined8 **)(this + 200)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003f842c;
  }
  puVar9 = *(undefined8 **)(this + 0xb8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003f8450();
LAB_003f844c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 200) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003f844c;
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
      if (uVar6 == uVar7) goto LAB_003f8418;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xb8);
  }
LAB_003f8418:
  *(undefined8 **)(this + 0xb8) = puVar4;
  *(undefined8 **)(this + 0xc0) = puVar13;
  *(void **)(this + 200) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003f842c:
  *(undefined8 **)(this + 0xc0) = puVar13;
  return;
}


// ===== 003f8450  FUN_003f8450 =====

void FUN_003f8450(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003f8464  rive::FocusData::removeKeyboardListener =====

/* rive::FocusData::removeKeyboardListener(rive::KeyboardListener*) */

void __thiscall rive::FocusData::removeKeyboardListener(FocusData *this,KeyboardListener *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  puVar2 = *(undefined8 **)(this + 0xc0);
  puVar1 = *(undefined8 **)(this + 0xb8);
  __dest = puVar1;
  for (; (puVar1 != puVar2 && (__dest = puVar1, (KeyboardListener *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(this + 0xc0) = (long)__dest + __n;
  }
  return;
}


// ===== 003f84d8  rive::FocusData::addTextInputListener =====

/* rive::FocusData::addTextInputListener(rive::KeyboardListener*) */

void __thiscall rive::FocusData::addTextInputListener(FocusData *this,KeyboardListener *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xd8);
  if (puVar10 < *(undefined8 **)(this + 0xe0)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003f8618;
  }
  puVar9 = *(undefined8 **)(this + 0xd0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003f8450();
LAB_003f8638:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xe0) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_003f8638;
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
      if (uVar6 == uVar7) goto LAB_003f8604;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xd0);
  }
LAB_003f8604:
  *(undefined8 **)(this + 0xd0) = puVar4;
  *(undefined8 **)(this + 0xd8) = puVar13;
  *(void **)(this + 0xe0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003f8618:
  *(undefined8 **)(this + 0xd8) = puVar13;
  return;
}


// ===== 003f863c  rive::FocusData::removeTextInputListener =====

/* rive::FocusData::removeTextInputListener(rive::KeyboardListener*) */

void __thiscall rive::FocusData::removeTextInputListener(FocusData *this,KeyboardListener *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  puVar2 = *(undefined8 **)(this + 0xd8);
  puVar1 = *(undefined8 **)(this + 0xd0);
  __dest = puVar1;
  for (; (puVar1 != puVar2 && (__dest = puVar1, (KeyboardListener *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(this + 0xd8) = (long)__dest + __n;
  }
  return;
}


// ===== 003f86b0  rive::FocusData::focus =====

/* rive::FocusData::focus() */

void rive::FocusData::focus(void)

{
  return;
}


// ===== 003f86b4  rive::FocusData::findParentFocusData =====

/* rive::FocusData::findParentFocusData() const */

FocusData * __thiscall rive::FocusData::findParentFocusData(FocusData *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  FocusData *pFVar4;
  undefined8 *puVar5;
  
  plVar3 = *(long **)(this + 0x30);
  do {
    if (plVar3 == (long *)0x0) {
      return (FocusData *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,2);
    if ((uVar2 & 1) != 0) {
      puVar1 = (undefined8 *)plVar3[0x12];
      for (puVar5 = (undefined8 *)plVar3[0x11]; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        pFVar4 = (FocusData *)*puVar5;
        uVar2 = (**(code **)(*(long *)pFVar4 + 0x18))(pFVar4,0x28d);
        if ((pFVar4 != this) && ((uVar2 & 1) != 0)) {
          return pFVar4;
        }
      }
    }
    plVar3 = (long *)plVar3[6];
  } while( true );
}


// ===== 003f8750  rive::FocusData::findClosestFocusNode =====

/* rive::FocusData::findClosestFocusNode(rive::Component*) */

void __thiscall rive::FocusData::findClosestFocusNode(FocusData *this,Component *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *in_x8;
  long *plVar4;
  
  if (this != (FocusData *)0x0) {
    plVar4 = *(long **)(this + 0x30);
    while (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,1);
      if ((uVar3 & 1) == 0) {
        uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,2);
        if ((uVar3 & 1) != 0) {
          puVar2 = (undefined8 *)plVar4[0x12];
          for (puVar1 = (undefined8 *)plVar4[0x11]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            uVar3 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x28d);
            if ((uVar3 & 1) != 0) {
              focusNode();
              return;
            }
          }
        }
        plVar4 = (long *)plVar4[6];
      }
      else if ((((long *)plVar4[0x187] == (long *)0x0) ||
               (plVar4 = (long *)(**(code **)(*(long *)plVar4[0x187] + 0x80))(),
               plVar4 == (long *)0x0)) ||
              (uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0xb), (uVar3 & 1) == 0)) break;
    }
  }
  *in_x8 = 0;
  return;
}


// ===== 003f884c  rive::ForegroundLayoutDrawable::buildDependencies =====

/* rive::ForegroundLayoutDrawable::buildDependencies() */

void __thiscall rive::ForegroundLayoutDrawable::buildDependencies(ForegroundLayoutDrawable *this)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 != 0) {
      plVar2 = *(long **)(this + 400);
      plVar4 = *(long **)(this + 0x188);
      while (plVar4 != plVar2) {
        plVar5 = *(long **)(*plVar4 + 200);
        iVar3 = *(int *)(*plVar4 + 0xa4);
        iVar1 = *(int *)(lVar6 + 0x134);
        if (iVar3 != 0x7f) {
          iVar1 = iVar3;
        }
        (**(code **)(*plVar5 + 0x40))(plVar5,iVar1);
        plVar4 = plVar4 + 1;
      }
    }
  }
  return;
}


// ===== 003f88c0  rive::ForegroundLayoutDrawable::update =====

/* WARNING: Type propagation algorithm not settling */
/* rive::ForegroundLayoutDrawable::update(rive::ComponentDirt) */

void __thiscall rive::ForegroundLayoutDrawable::update(ForegroundLayoutDrawable *this,uint param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  
  uVar1 = param_2 & 0xffff;
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if ((uVar1 >> 8 & 1) == 0) {
    if (*(long *)(this + 0x30) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar7 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar7 * *(float *)(this + 0xe8);
    }
    if (*(long **)(this + 0x30) == (long *)0x0) {
      return;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      fVar7 = (float)(**(code **)(**(long **)(this + 0x30) + 0xa0))();
      plVar2 = *(long **)(this + 400);
      for (plVar6 = *(long **)(this + 0x188); plVar6 != plVar2; plVar6 = plVar6 + 1) {
        puVar4 = *(undefined8 **)(*plVar6 + 0xd0);
        if (*(float *)((long)puVar4 + 0xc) != fVar7) {
          *(float *)((long)puVar4 + 0xc) = fVar7;
          (**(code **)*puVar4)();
        }
      }
    }
  }
  if ((param_2 & 0x90) != 0) {
    puVar3 = *(undefined8 **)(this + 400);
    for (puVar4 = *(undefined8 **)(this + 0x188); puVar4 != puVar3; puVar4 = puVar4 + 1) {
      plVar6 = (long *)*puVar4;
      uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x15);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
    }
  }
  return;
}


// ===== 003f8a14  rive::ForegroundLayoutDrawable::draw =====

/* rive::ForegroundLayoutDrawable::draw(rive::Renderer*) */

void __thiscall
rive::ForegroundLayoutDrawable::draw(ForegroundLayoutDrawable *this,Renderer *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(this + 0x188);
  puVar2 = *(undefined8 **)(this + 400);
  if (puVar6 != puVar2) {
    lVar7 = *(long *)(this + 0x30);
    lVar1 = 0;
    if (lVar7 != 0) {
      lVar1 = lVar7 + 400;
    }
    do {
      plVar5 = (long *)*puVar6;
      uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
      if ((((uVar3 & 1) != 0) && ((*(byte *)(plVar5[0x1a] + 8) & 1) != 0)) &&
         (lVar4 = (**(code **)(*plVar5 + 0xf0))(plVar5,lVar1), lVar4 != 0)) {
        (**(code **)(*plVar5 + 0xe0))(plVar5,param_1,lVar4,lVar7 + 0xa4,0,0,1);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar2);
  }
  return;
}


// ===== 003f8ad4  rive::ForegroundLayoutDrawable::hitTest =====

/* rive::ForegroundLayoutDrawable::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::ForegroundLayoutDrawable::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 003f8adc  rive::ForegroundLayoutDrawable::pathBuilder =====

/* rive::ForegroundLayoutDrawable::pathBuilder() */

undefined8 __thiscall rive::ForegroundLayoutDrawable::pathBuilder(ForegroundLayoutDrawable *this)

{
  return *(undefined8 *)(this + 0x30);
}


// ===== 003f8ae4  rive::ForegroundLayoutDrawable::pathBuilder =====

/* non-virtual thunk to rive::ForegroundLayoutDrawable::pathBuilder() */

undefined8 __thiscall rive::ForegroundLayoutDrawable::pathBuilder(ForegroundLayoutDrawable *this)

{
  return *(undefined8 *)(this + -0x148);
}


// ===== 003f8af0  rive::ForegroundLayoutDrawable::worldPath =====

/* rive::ForegroundLayoutDrawable::worldPath() */

void __thiscall rive::ForegroundLayoutDrawable::worldPath(ForegroundLayoutDrawable *this)

{
                    /* WARNING: Could not recover jumptable at 0x003f8afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2f0))();
  return;
}


// ===== 003f8b00  rive::ForegroundLayoutDrawable::worldPath =====

/* non-virtual thunk to rive::ForegroundLayoutDrawable::worldPath() */

void __thiscall rive::ForegroundLayoutDrawable::worldPath(ForegroundLayoutDrawable *this)

{
                    /* WARNING: Could not recover jumptable at 0x003f8b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + -0x148) + 0x2f0))();
  return;
}


// ===== 003f8b14  rive::ForegroundLayoutDrawable::localPath =====

/* rive::ForegroundLayoutDrawable::localPath() */

void __thiscall rive::ForegroundLayoutDrawable::localPath(ForegroundLayoutDrawable *this)

{
                    /* WARNING: Could not recover jumptable at 0x003f8b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2f8))();
  return;
}


// ===== 003f8b24  rive::ForegroundLayoutDrawable::localPath =====

/* non-virtual thunk to rive::ForegroundLayoutDrawable::localPath() */

void __thiscall rive::ForegroundLayoutDrawable::localPath(ForegroundLayoutDrawable *this)

{
                    /* WARNING: Could not recover jumptable at 0x003f8b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + -0x148) + 0x2f8))();
  return;
}


// ===== 003f8b38  rive::ForegroundLayoutDrawable::localClockwisePath =====

/* rive::ForegroundLayoutDrawable::localClockwisePath() */

void __thiscall rive::ForegroundLayoutDrawable::localClockwisePath(ForegroundLayoutDrawable *this)

{
                    /* WARNING: Could not recover jumptable at 0x003f8b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x300))();
  return;
}


// ===== 003f8b48  rive::ForegroundLayoutDrawable::localClockwisePath =====

/* non-virtual thunk to rive::ForegroundLayoutDrawable::localClockwisePath() */

void __thiscall rive::ForegroundLayoutDrawable::localClockwisePath(ForegroundLayoutDrawable *this)

{
                    /* WARNING: Could not recover jumptable at 0x003f8b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + -0x148) + 0x300))();
  return;
}


// ===== 003f8b5c  FUN_003f8b5c =====

void FUN_003f8b5c(long param_1)

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


// ===== 003f8b9c  FUN_003f8b9c =====

void FUN_003f8b9c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 003f8bc0  FUN_003f8bc0 =====

void FUN_003f8bc0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f8bc4);
  (*pcVar1)();
}


// ===== 003f8bc4  FUN_003f8bc4 =====

undefined8 FUN_003f8bc4(void)

{
  return 0;
}


// ===== 003f8bcc  FUN_003f8bcc =====

undefined8 FUN_003f8bcc(void)

{
  return 0;
}


// ===== 003f8bd4  FUN_003f8bd4 =====

undefined8 FUN_003f8bd4(void)

{
  return 0;
}


// ===== 003f8bdc  FUN_003f8bdc =====

void FUN_003f8bdc(void *param_1)

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


// ===== 003f8c20  FUN_003f8c20 =====

undefined8 FUN_003f8c20(void)

{
  return 0x201;
}


// ===== 003f8c28  FUN_003f8c28 =====

undefined8 FUN_003f8c28(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x201)) {
    return 0;
  }
  return 1;
}


// ===== 003f8c70  FUN_003f8c70 =====

undefined8 FUN_003f8c70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 003f8c78  FUN_003f8c78 =====

long FUN_003f8c78(long param_1)

{
  return param_1 + 0xa4;
}


// ===== 003f8c80  FUN_003f8c80 =====

undefined8 FUN_003f8c80(long param_1)

{
  return *(undefined8 *)(param_1 + -0x138);
}


// ===== 003f8c8c  FUN_003f8c8c =====

void FUN_003f8c8c(undefined8 *param_1)

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


// ===== 003f8cc8  FUN_003f8cc8 =====

void FUN_003f8cc8(undefined8 *param_1)

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


// ===== 003f8d10  FUN_003f8d10 =====

long FUN_003f8d10(long param_1)

{
  return param_1 + -0xd4;
}


// ===== 003f8d18  rive::AnimationBase::clone =====

/* rive::AnimationBase::clone() const */

undefined8 * __thiscall rive::AnimationBase::clone(AnimationBase *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = &PTR_FUN_00655f60;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),(basic_string *)(this + 0x10));
  return puVar1;
}


// ===== 003f8d70  FUN_003f8d70 =====

void FUN_003f8d70(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067cde8 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003f8db4  rive::AnimationStateBase::clone =====

/* rive::AnimationStateBase::clone() const */

void __thiscall rive::AnimationStateBase::clone(AnimationStateBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar2 = (long *)operator_new(0x70);
  plVar2[0xb] = 0;
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  puVar1 = PTR_vtable_0067ccf0;
  uVar3 = *(undefined4 *)(this + 0x60);
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  *(undefined4 *)(plVar2 + 0xc) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)plVar2 + 100) = *(undefined4 *)(this + 100);
  *(undefined4 *)(plVar2 + 8) = *(undefined4 *)(this + 0x40);
  return;
}


// ===== 003f8e24  FUN_003f8e24 =====

void FUN_003f8e24(LayerState *param_1)

{
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f8e48  rive::AnyStateBase::clone =====

/* rive::AnyStateBase::clone() const */

void __thiscall rive::AnyStateBase::clone(AnyStateBase *this)

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
  *puVar2 = &PTR__LayerState_00656138;
  *(undefined4 *)(puVar2 + 8) = uVar1;
  return;
}


// ===== 003f8ea0  FUN_003f8ea0 =====

void FUN_003f8ea0(LayerState *param_1)

{
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003f8ec4  rive::BlendAnimation1DBase::clone =====

/* rive::BlendAnimation1DBase::clone() const */

void __thiscall rive::BlendAnimation1DBase::clone(BlendAnimation1DBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  
  plVar3 = (long *)operator_new(0x20);
  puVar2 = PTR_vtable_0067cd08;
  uVar4 = *(undefined4 *)(this + 0x18);
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 3) = uVar4;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0xc) = uVar1;
  return;
}


// ===== 003f8f10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003f8f14  rive::BlendAnimationDirectBase::clone =====

/* rive::BlendAnimationDirectBase::clone() const */

void __thiscall rive::BlendAnimationDirectBase::clone(BlendAnimationDirectBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  
  plVar4 = (long *)operator_new(0x30);
  puVar3 = PTR_vtable_0067cd10;
  uVar1 = *(undefined4 *)(this + 0x18);
  uVar5 = *(undefined4 *)(this + 0x1c);
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 3) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *plVar4 = (long)(puVar3 + 0x10);
  uVar2 = *(undefined4 *)(this + 0x20);
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 4) = uVar2;
  *(undefined4 *)((long)plVar4 + 0x1c) = uVar5;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar4 + 0xc) = uVar1;
  return;
}


