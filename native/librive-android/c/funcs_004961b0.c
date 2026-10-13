// ===== 004961b0  rive::SemanticData::stateFlagsChanged =====

/* rive::SemanticData::stateFlagsChanged() */

void __thiscall rive::SemanticData::stateFlagsChanged(SemanticData *this)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  
  lVar2 = *(long *)(this + 0xe8);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x2c) != *(int *)(this + 0xe0))) {
    pbVar3 = *(byte **)(lVar2 + 0x98);
    *(int *)(lVar2 + 0x2c) = *(int *)(this + 0xe0);
    if ((pbVar3 != (byte *)0x0) && (*(long *)(this + 0x30) != 0)) {
      iVar1 = *(int *)(lVar2 + 4);
      *pbVar3 = *pbVar3 | 2;
      if (iVar1 != 0) {
        FUN_004987d0(pbVar3 + 0x118,iVar1,iVar1);
      }
    }
    syncSemanticTreeVisibility(this);
    return;
  }
  return;
}


// ===== 00496220  rive::SemanticData::syncSemanticTreeVisibility =====

/* rive::SemanticData::syncSemanticTreeVisibility() */

void __thiscall rive::SemanticData::syncSemanticTreeVisibility(SemanticData *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  SemanticManager *pSVar6;
  SemanticData *pSVar7;
  long lVar8;
  undefined8 *puVar9;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0xe8) != 0) {
    if ((((((byte)this[0xe1] & 1) == 0) && (plVar4 = *(long **)(this + 0x30), plVar4 != (long *)0x0)
         ) && (uVar3 = (**(code **)(*plVar4 + 0x80))(plVar4), (uVar3 & 1) == 0)) &&
       ((uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0xd), (uVar3 & 1) == 0 ||
        (uVar3 = (**(code **)(*plVar4 + 0x1e8))(plVar4), (uVar3 & 1) == 0)))) {
      if (((this[0x111] != (SemanticData)0x0) &&
          (this[0x111] = (SemanticData)0x0, *(long *)(*(long *)(this + 0xe8) + 0x98) == 0)) &&
         (pSVar6 = *(SemanticManager **)(this + 0xf0), pSVar6 != (SemanticManager *)0x0)) {
        for (plVar4 = *(long **)(this + 0x30); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
          uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,2);
          if ((uVar3 & 1) != 0) {
            puVar1 = (undefined8 *)plVar4[0x12];
            for (puVar9 = (undefined8 *)plVar4[0x11]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
              pSVar7 = (SemanticData *)*puVar9;
              uVar3 = (**(code **)(*(long *)pSVar7 + 0x18))(pSVar7,0x29c);
              if ((pSVar7 != this) && ((uVar3 & 1) != 0)) {
                semanticNode();
                lVar5 = local_68;
                lVar8 = local_68;
                if (local_68 == 0) goto LAB_004963d8;
                goto LAB_00496400;
              }
            }
          }
        }
        local_68 = 0;
LAB_004963d8:
        if (*(long *)(this + 0x40) == 0) {
          lVar5 = 0;
          lVar8 = local_68;
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 0x40) + 0xc50);
          lVar8 = lVar5;
          if (lVar5 != 0) {
            FUN_00340fb0(1,lVar5);
          }
        }
LAB_00496400:
        local_68 = lVar8;
        lVar8 = *(long *)(this + 0xe8);
        local_70 = lVar8;
        if (lVar8 == 0) {
          SemanticManager::addChild(pSVar6,&local_68,&local_70);
        }
        else {
          FUN_00340fb0(1,lVar8);
          SemanticManager::addChild(pSVar6,&local_68,&local_70);
          FUN_0035fa18(lVar8);
          lVar5 = local_68;
        }
        if (lVar5 != 0) {
          FUN_0035fa18(lVar5);
        }
        this[0x110] = (SemanticData)0x1;
        updateWorldBounds();
        applyInferredSemanticsIfNeeded(this);
      }
    }
    else if (this[0x111] == (SemanticData)0x0) {
      lVar5 = *(long *)(this + 0xe8);
      this[0x111] = (SemanticData)0x1;
      pSVar6 = *(SemanticManager **)(lVar5 + 0x98);
      if (pSVar6 != (SemanticManager *)0x0) {
        *(SemanticManager **)(this + 0xf0) = pSVar6;
        FUN_00340fb0(1,lVar5);
        local_60 = lVar5;
        SemanticManager::removeChild(pSVar6,&local_60);
        if (*(long *)(lVar2 + 0x28) == local_58) {
          FUN_0035fa18(lVar5);
          return;
        }
        goto LAB_00496474;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00496474:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496478  rive::SemanticData::semanticNode =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::SemanticData::semanticNode() */

void rive::SemanticData::semanticNode(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SemanticData *in_x0;
  undefined4 *puVar6;
  ulong uVar7;
  long *in_x8;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  lVar9 = *(long *)(in_x0 + 0xe8);
  if (lVar9 == 0) {
    puVar6 = (undefined4 *)operator_new(0xb8);
    *(undefined8 *)(puVar6 + 0x25) = 0;
    *(undefined8 *)(puVar6 + 0x23) = 0;
    *puVar6 = 1;
    *(undefined2 *)(puVar6 + 0x12) = 0;
    *(undefined8 *)((long)puVar6 + 0x2a) = 0;
    *(undefined8 *)((long)puVar6 + 0x22) = 0;
    *(undefined8 *)(puVar6 + 3) = 0;
    *(undefined8 *)(puVar6 + 1) = 0;
    *(undefined8 *)(puVar6 + 7) = 0;
    *(undefined8 *)(puVar6 + 5) = 0;
    uVar5 = _UNK_0024e258;
    uVar4 = _DAT_0024e250;
    uVar8 = *(undefined8 *)(in_x0 + 0x30);
    *(undefined2 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x24) = uVar8;
    uVar3 = *(undefined4 *)(in_x0 + 0x88);
    puVar6[0x1e] = 0;
    *(undefined8 *)(puVar6 + 0x21) = uVar5;
    *(undefined8 *)(puVar6 + 0x1f) = uVar4;
    *(undefined8 *)((long)puVar6 + 0x99) = 0;
    *(undefined4 **)(in_x0 + 0xe8) = puVar6;
    *(SemanticData **)(puVar6 + 0x2a) = in_x0;
    *(undefined8 *)(puVar6 + 0x2c) = 0;
    puVar6[10] = uVar3;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar6 + 0xc),(basic_string *)(in_x0 + 0x90));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (*(long *)(in_x0 + 0xe8) + 0x48),(basic_string *)(in_x0 + 0xa8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (*(long *)(in_x0 + 0xe8) + 0x60),(basic_string *)(in_x0 + 0xc0));
    uVar11 = *(uint *)(in_x0 + 0xdc);
    lVar9 = *(long *)(in_x0 + 0xe8);
    uVar3 = *(undefined4 *)(in_x0 + 0xe0);
    plVar10 = *(long **)(in_x0 + 0x30);
    *(undefined4 *)(lVar9 + 0x78) = *(undefined4 *)(in_x0 + 0xd8);
    *(undefined4 *)(lVar9 + 0x2c) = uVar3;
    if ((plVar10 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,2), (uVar7 & 1) != 0)) {
      puVar2 = (undefined8 *)plVar10[0x12];
      for (puVar1 = (undefined8 *)plVar10[0x11]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        uVar7 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x28d);
        if ((uVar7 & 1) != 0) {
          uVar11 = uVar11 | 0x40;
          break;
        }
      }
    }
    *(uint *)(*(long *)(in_x0 + 0xe8) + 0x8c) = uVar11;
    applyInferredSemanticsIfNeeded(in_x0);
    in_x0[0x110] = (SemanticData)0x1;
    updateWorldBounds();
    lVar9 = *(long *)(in_x0 + 0xe8);
    if (lVar9 == 0) goto LAB_004965c0;
  }
  FUN_00340fb0(1,lVar9);
LAB_004965c0:
  *in_x8 = lVar9;
  return;
}


// ===== 004965d8  rive::SemanticData::updateWorldBounds =====

/* rive::SemanticData::updateWorldBounds() */

void rive::SemanticData::updateWorldBounds(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long *in_x0;
  long lVar6;
  byte *pbVar7;
  float fVar8;
  float in_s1;
  float in_s2;
  float in_s3;
  ushort uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  
  if ((in_x0[0x1d] != 0) && ((Component *)in_x0[6] != (Component *)0x0)) {
    fVar8 = (float)SemanticProvider::semanticBounds((Component *)in_x0[6]);
    fVar10 = in_s3 - in_s1;
    fVar13 = in_s2 - fVar8;
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (fVar10 != 0.0 && fVar10 < 0.0 == NAN(fVar10)) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar13)) {
        bVar3 = fVar13 < 0.0;
        bVar4 = fVar13 == 0.0;
        bVar5 = false;
      }
    }
    if ((bVar4 || bVar3 != bVar5) && ((char)in_x0[0x22] != '\0')) {
      if ((*(ushort *)(in_x0 + 0xc) >> 7 & 1) == 0) {
        *(ushort *)(in_x0 + 0xc) = *(ushort *)(in_x0 + 0xc) | 0x80;
        (**(code **)(*in_x0 + 0x70))();
        lVar6 = in_x0[0x10];
        uVar1 = *(uint *)(in_x0 + 7);
        *(undefined1 *)(lVar6 + 0xc32) = 1;
        *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar6 + 0xbd4)) {
          *(uint *)(lVar6 + 0xbd4) = uVar1;
        }
      }
    }
    else {
      lVar6 = in_x0[0x1d];
      *(undefined1 *)(in_x0 + 0x22) = 0;
      auVar12._4_4_ = in_s1;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = in_s2;
      auVar12._12_4_ = in_s3;
      auVar12 = NEON_fcmeq(auVar12,*(undefined1 (*) [16])(lVar6 + 0x7c),4);
      uVar11 = NEON_cmlt(CONCAT26(auVar12._12_2_ << 0xf,
                                  CONCAT24(auVar12._8_2_ << 0xf,
                                           CONCAT22(auVar12._4_2_ << 0xf,auVar12._0_2_ << 0xf))),0,2
                        );
      uVar9 = NEON_uminv(uVar11,2);
      if ((uVar9 & 1) == 0) {
        *(float *)(lVar6 + 0x7c) = fVar8;
        *(float *)(lVar6 + 0x80) = in_s1;
        *(float *)(lVar6 + 0x84) = in_s2;
        *(float *)(lVar6 + 0x88) = in_s3;
        pbVar7 = *(byte **)(in_x0[0x1d] + 0x98);
        if (pbVar7 != (byte *)0x0) {
          iVar2 = *(int *)(in_x0[0x1d] + 4);
          *pbVar7 = *pbVar7 | 4;
          if (iVar2 != 0) {
            FUN_004987d0(pbVar7 + 0x140,iVar2,iVar2);
            return;
          }
        }
      }
    }
  }
  return;
}


// ===== 004966f0  rive::SemanticData::applyInferredSemanticsIfNeeded =====

/* rive::SemanticData::applyInferredSemanticsIfNeeded() */

void __thiscall rive::SemanticData::applyInferredSemanticsIfNeeded(SemanticData *this)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  char *__s2;
  byte *pbVar8;
  char *pcVar9;
  long lVar10;
  ResolvedSemanticData local_68 [4];
  int local_64;
  undefined2 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(int *)(this + 0x88) != 0) goto LAB_00496734;
  uVar7 = (ulong)((byte)this[0x90] >> 1);
  if (((byte)this[0x90] & 1) != 0) {
    uVar7 = *(ulong *)(this + 0x98);
  }
  if ((uVar7 != 0) || (*(long *)(this + 0xe8) == 0)) goto LAB_00496734;
  local_68[0] = (ResolvedSemanticData)0x0;
  local_64 = 0;
  local_60 = 0;
  uVar7 = resolveInferredSemantics(*(Component **)(this + 0x30),local_68);
  iVar3 = local_64;
  if ((uVar7 & 1) == 0) goto LAB_0049686c;
  lVar10 = *(long *)(this + 0xe8);
  if (*(int *)(lVar10 + 0x28) == local_64) {
    bVar4 = *(byte *)(lVar10 + 0x30);
    uVar7 = (ulong)(bVar4 >> 1);
    sVar1 = uVar7;
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(lVar10 + 0x38);
    }
    sVar2 = (ulong)((byte)local_60._0_1_ >> 1);
    if ((local_60 & 1) != 0) {
      sVar2 = local_58;
    }
    if (sVar1 != sVar2) goto LAB_00496824;
    __s2 = (char *)((long)&local_60 + 1);
    if ((local_60 & 1) != 0) {
      __s2 = local_50;
    }
    if ((bVar4 & 1) == 0) {
      if (1 < bVar4) {
        pcVar9 = (char *)(lVar10 + 0x31);
        do {
          if (*pcVar9 != *__s2) goto LAB_00496824;
          uVar7 = uVar7 - 1;
          pcVar9 = pcVar9 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
    }
    else {
      iVar6 = memcmp(*(void **)(lVar10 + 0x40),__s2,*(size_t *)(lVar10 + 0x38));
      if (iVar6 != 0) goto LAB_00496824;
    }
  }
  else {
LAB_00496824:
    *(int *)(lVar10 + 0x28) = iVar3;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar10 + 0x30),(basic_string *)&local_60);
    lVar10 = *(long *)(this + 0xe8);
    if (((lVar10 != 0) && (pbVar8 = *(byte **)(lVar10 + 0x98), pbVar8 != (byte *)0x0)) &&
       (*(long *)(this + 0x30) != 0)) {
      iVar3 = *(int *)(lVar10 + 4);
      *pbVar8 = *pbVar8 | 2;
      if (iVar3 != 0) {
        FUN_004987d0(pbVar8 + 0x118,iVar3,iVar3);
      }
    }
  }
LAB_0049686c:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00496734:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00496884  rive::SemanticData::findParentSemanticData =====

/* rive::SemanticData::findParentSemanticData() const */

SemanticData * __thiscall rive::SemanticData::findParentSemanticData(SemanticData *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  SemanticData *pSVar4;
  undefined8 *puVar5;
  
  plVar3 = *(long **)(this + 0x30);
  do {
    if (plVar3 == (long *)0x0) {
      return (SemanticData *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,2);
    if ((uVar2 & 1) != 0) {
      puVar1 = (undefined8 *)plVar3[0x12];
      for (puVar5 = (undefined8 *)plVar3[0x11]; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        pSVar4 = (SemanticData *)*puVar5;
        uVar2 = (**(code **)(*(long *)pSVar4 + 0x18))(pSVar4,0x29c);
        if ((pSVar4 != this) && ((uVar2 & 1) != 0)) {
          return pSVar4;
        }
      }
    }
    plVar3 = (long *)plVar3[6];
  } while( true );
}


// ===== 00496920  rive::SemanticData::findClosestSemanticNode =====

/* rive::SemanticData::findClosestSemanticNode(rive::Component*) */

void __thiscall rive::SemanticData::findClosestSemanticNode(SemanticData *this,Component *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *in_x8;
  
  if (this != (SemanticData *)0x0) {
    do {
      uVar3 = (**(code **)(*(long *)this + 0x18))(this,1);
      if ((uVar3 & 1) == 0) {
        uVar3 = (**(code **)(*(long *)this + 0x18))(this,2);
        if ((uVar3 & 1) != 0) {
          puVar2 = *(undefined8 **)(this + 0x90);
          for (puVar1 = *(undefined8 **)(this + 0x88); puVar1 != puVar2; puVar1 = puVar1 + 1) {
            uVar3 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x29c);
            if ((uVar3 & 1) != 0) {
              semanticNode();
              return;
            }
          }
        }
        this = *(SemanticData **)(this + 0x30);
      }
      else if (((*(long **)(this + 0xc38) == (long *)0x0) ||
               (this = (SemanticData *)(**(code **)(**(long **)(this + 0xc38) + 0x80))(),
               this == (SemanticData *)0x0)) ||
              (uVar3 = (**(code **)(*(long *)this + 0x18))(this,0xb), (uVar3 & 1) == 0)) break;
    } while (this != (SemanticData *)0x0);
  }
  *in_x8 = 0;
  return;
}


// ===== 00496a1c  rive::SemanticData::semanticId =====

/* rive::SemanticData::semanticId() const */

undefined4 __thiscall rive::SemanticData::semanticId(SemanticData *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xe8) + 4);
  }
  return 0;
}


// ===== 00496a34  rive::SemanticData::setFocusedState =====

/* rive::SemanticData::setFocusedState(bool) */

void __thiscall rive::SemanticData::setFocusedState(SemanticData *this,bool param_1)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  
  lVar2 = *(long *)(this + 0xe8);
  if (lVar2 != 0) {
    uVar4 = 0x80;
    if (!param_1) {
      uVar4 = 0;
    }
    pbVar3 = *(byte **)(lVar2 + 0x98);
    *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) & 0xffffff7f | uVar4;
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


// ===== 00496a8c  rive::SemanticData::markContentDirty =====

/* rive::SemanticData::markContentDirty() */

void __thiscall rive::SemanticData::markContentDirty(SemanticData *this)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0xe8);
  if (((lVar3 != 0) && (pbVar2 = *(byte **)(lVar3 + 0x98), pbVar2 != (byte *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    iVar1 = *(int *)(lVar3 + 4);
    *pbVar2 = *pbVar2 | 2;
    if (iVar1 != 0) {
      FUN_004987d0(pbVar2 + 0x118,iVar1,iVar1);
      return;
    }
  }
  return;
}


// ===== 00496ac8  rive::SemanticData::requestFocus =====

/* rive::SemanticData::requestFocus() */

void __thiscall rive::SemanticData::requestFocus(SemanticData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  FocusManager *pFVar8;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar7 = *(long **)(this + 0x30);
  if ((plVar7 != (long *)0x0) && (uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,2), (uVar5 & 1) != 0)
     ) {
    puVar2 = (undefined8 *)plVar7[0x12];
    for (puVar1 = (undefined8 *)plVar7[0x11]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      uVar5 = (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,0x28d);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(this + 0x40) != 0) &&
           (pFVar8 = *(FocusManager **)(*(long *)(this + 0x40) + 0xc40),
           pFVar8 != (FocusManager *)0x0)) {
          FocusData::focusNode();
          FocusManager::setFocus(pFVar8,&local_58);
          if ((local_58 != (void *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_58), iVar4 == 1))
          {
            if ((*(byte *)((long)local_58 + 0x38) & 1) != 0) {
              operator_delete(*(void **)((long)local_58 + 0x48));
            }
            local_50 = (long)local_58 + 0x20;
            FUN_0034b070(&local_50);
            operator_delete(local_58);
          }
          uVar6 = 1;
          goto LAB_00496bc0;
        }
        break;
      }
    }
  }
  uVar6 = 0;
LAB_00496bc0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 00496bec  rive::SemanticData::resolveParentNode =====

/* rive::SemanticData::resolveParentNode() const */

void rive::SemanticData::resolveParentNode(void)

{
  undefined8 *puVar1;
  long *in_x0;
  ulong uVar2;
  long *in_x8;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar4 = (long *)in_x0[6];
  do {
    if (plVar4 == (long *)0x0) {
      *in_x8 = 0;
LAB_00496c84:
      if (in_x0[8] != 0) {
        lVar3 = *(long *)(in_x0[8] + 0xc50);
        if (lVar3 != 0) {
          FUN_00340fb0(1,lVar3);
        }
        *in_x8 = lVar3;
      }
      return;
    }
    uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,2);
    if ((uVar2 & 1) != 0) {
      puVar1 = (undefined8 *)plVar4[0x12];
      for (puVar6 = (undefined8 *)plVar4[0x11]; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        plVar5 = (long *)*puVar6;
        uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29c);
        if ((plVar5 != in_x0) && ((uVar2 & 1) != 0)) {
          semanticNode();
          if (*in_x8 != 0) {
            return;
          }
          goto LAB_00496c84;
        }
      }
    }
    plVar4 = (long *)plVar4[6];
  } while( true );
}


// ===== 00496cb8  rive::SemanticData::shouldExcludeFromSemanticTree =====

/* rive::SemanticData::shouldExcludeFromSemanticTree() const */

undefined8 __thiscall rive::SemanticData::shouldExcludeFromSemanticTree(SemanticData *this)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (((byte)this[0xe1] & 1) == 0) {
    plVar3 = *(long **)(this + 0x30);
    if (((plVar3 == (long *)0x0) ||
        (uVar1 = (**(code **)(*plVar3 + 0x80))(plVar3), (uVar1 & 1) != 0)) ||
       ((uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0xd), (uVar1 & 1) != 0 &&
        (uVar1 = (**(code **)(*plVar3 + 0x1e8))(plVar3), (uVar1 & 1) != 0)))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}


// ===== 00496d34  rive::SemanticData::addSemanticListener =====

/* rive::SemanticData::addSemanticListener(rive::SemanticListener*) */

void __thiscall
rive::SemanticData::addSemanticListener(SemanticData *this,SemanticListener *param_1)

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
    goto LAB_00496e74;
  }
  puVar9 = *(undefined8 **)(this + 0xf8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00496e98();
LAB_00496e94:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00496e94;
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
      if (uVar6 == uVar7) goto LAB_00496e60;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xf8);
  }
LAB_00496e60:
  *(undefined8 **)(this + 0xf8) = puVar4;
  *(undefined8 **)(this + 0x100) = puVar13;
  *(void **)(this + 0x108) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00496e74:
  *(undefined8 **)(this + 0x100) = puVar13;
  return;
}


// ===== 00496e98  FUN_00496e98 =====

void FUN_00496e98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00496eac  rive::SemanticData::removeSemanticListener =====

/* rive::SemanticData::removeSemanticListener(rive::SemanticListener*) */

void __thiscall
rive::SemanticData::removeSemanticListener(SemanticData *this,SemanticListener *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  puVar2 = *(undefined8 **)(this + 0x100);
  puVar1 = *(undefined8 **)(this + 0xf8);
  __dest = puVar1;
  for (; (puVar1 != puVar2 && (__dest = puVar1, (SemanticListener *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(this + 0x100) = (long)__dest + __n;
  }
  return;
}


// ===== 00496f20  rive::SemanticData::fireSemanticTap =====

/* rive::SemanticData::fireSemanticTap() */

void __thiscall rive::SemanticData::fireSemanticTap(SemanticData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x100);
  for (puVar2 = *(undefined8 **)(this + 0xf8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x10))();
  }
  return;
}


// ===== 00496f5c  rive::SemanticData::fireSemanticIncrease =====

/* rive::SemanticData::fireSemanticIncrease() */

void __thiscall rive::SemanticData::fireSemanticIncrease(SemanticData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x100);
  for (puVar2 = *(undefined8 **)(this + 0xf8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x18))();
  }
  return;
}


// ===== 00496f98  rive::SemanticData::fireSemanticDecrease =====

/* rive::SemanticData::fireSemanticDecrease() */

void __thiscall rive::SemanticData::fireSemanticDecrease(SemanticData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x100);
  for (puVar2 = *(undefined8 **)(this + 0xf8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x20))();
  }
  return;
}


// ===== 00496fd4  rive::SemanticDataBase::clone =====

/* rive::SemanticDataBase::clone() const */

long * __thiscall rive::SemanticDataBase::clone(SemanticDataBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x118);
  plVar3[0x22] = 0;
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
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  plVar3[0x19] = 0;
  *(undefined8 *)(plVar3 + 0x18) = 0;
  plVar3[0x13] = 0;
  *(undefined8 *)(plVar3 + 0x12) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xf] = 0;
  puVar2 = PTR_vtable_0067d458;
  plVar3[0x20] = 0;
  plVar3[0x1f] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(plVar3 + 0x15)
       = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  *(undefined8 *)((long)plVar3 + 0x10a) = 0;
  *(undefined8 *)((long)plVar3 + 0x102) = 0;
  uVar1 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(plVar3 + 0x1b) = 0;
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 0x12),(basic_string *)(this + 0x90));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 0x15),(basic_string *)(this + 0xa8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 0x18),(basic_string *)(this + 0xc0));
  uVar1 = *(undefined4 *)(this + 0xe0);
  plVar3[0x1b] = *(long *)(this + 0xd8);
  *(undefined4 *)(plVar3 + 0x1c) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004970e4  FUN_004970e4 =====

void FUN_004970e4(void *param_1)

{
  FUN_004954f8();
  operator_delete(param_1);
  return;
}


// ===== 00497108  FUN_00497108 =====

void FUN_00497108(void)

{
  return;
}


// ===== 0049710c  FUN_0049710c =====

void FUN_0049710c(void)

{
  return;
}


// ===== 00497110  FUN_00497110 =====

void FUN_00497110(void)

{
  return;
}


// ===== 00497114  FUN_00497114 =====

void FUN_00497114(void)

{
  return;
}


// ===== 00497118  FUN_00497118 =====

void FUN_00497118(void)

{
  return;
}


// ===== 0049711c  FUN_0049711c =====

void FUN_0049711c(void)

{
  return;
}


// ===== 00497120  FUN_00497120 =====

void FUN_00497120(void)

{
  return;
}


// ===== 00497124  rive::supportsInferredSemantics =====

/* rive::supportsInferredSemantics(rive::Component*) */

void rive::supportsInferredSemantics(Component *param_1)

{
  if (param_1 != (Component *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00497134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0x86);
    return;
  }
  return;
}


// ===== 0049713c  rive::resolveInferredSemantics =====

/* rive::resolveInferredSemantics(rive::Component*, rive::ResolvedSemanticData&) */

void rive::resolveInferredSemantics(Component *param_1,ResolvedSemanticData *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (Component *)0x0) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x86);
    if ((uVar2 & 1) != 0) {
      plVar7 = *(long **)(param_1 + 0x200);
      plVar6 = *(long **)(param_1 + 0x208);
      local_50 = 0;
      local_48 = 0;
      local_40 = (void *)0x0;
      if (plVar7 == plVar6) {
        uVar4 = 0;
      }
      else {
        do {
          lVar3 = *plVar7;
          if (lVar3 != 0) {
            uVar2 = lVar3 + 0x91;
            if ((*(byte *)(lVar3 + 0x90) & 1) != 0) {
              uVar2 = *(ulong *)(lVar3 + 0xa0);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_50,uVar2);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
        uVar4 = (uint)(byte)local_50._0_1_;
      }
      uVar5 = uVar4 & 1;
      uVar2 = (ulong)(uVar4 >> 1);
      if (uVar5 != 0) {
        uVar2 = local_48;
      }
      if (uVar2 != 0) {
        *param_2 = (ResolvedSemanticData)0x1;
        *(undefined4 *)(param_2 + 4) = 7;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_2 + 8),(basic_string *)&local_50);
        uVar5 = (byte)local_50._0_1_ & 1;
      }
      if (uVar5 != 0) {
        operator_delete(local_40);
      }
      if (uVar2 != 0) {
        param_1 = (Component *)0x1;
        goto LAB_00497234;
      }
    }
    param_1 = (Component *)0x0;
  }
LAB_00497234:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 0049725c  rive::SemanticManager::sortChildrenByVisualPosition =====

/* rive::SemanticManager::sortChildrenByVisualPosition(std::__ndk1::vector<rive::rcp<rive::SemanticNode>,
   std::__ndk1::allocator<rive::rcp<rive::SemanticNode> > >&) */

void rive::SemanticManager::sortChildrenByVisualPosition(vector *param_1)

{
  bool bVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR_nothrow_0067d648;
  plVar5 = *(long **)param_1;
  plVar4 = *(long **)(param_1 + 8);
  uVar6 = (long)plVar4 - (long)plVar5 >> 3;
  if (1 < uVar6) {
    uVar7 = uVar6;
    if (0 < (long)uVar6) {
      do {
        pvVar3 = operator_new(uVar7 << 3,(nothrow_t *)puVar2);
        if (pvVar3 != (void *)0x0) {
          FUN_0049732c(plVar5,plVar4,uVar6,pvVar3,uVar7);
          operator_delete(pvVar3);
          goto LAB_004972fc;
        }
        bVar1 = 1 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar1);
    }
    FUN_0049732c(plVar5,plVar4,uVar6,0,0);
LAB_004972fc:
    plVar5 = *(long **)param_1;
    plVar4 = *(long **)(param_1 + 8);
  }
  for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
    sortChildrenByVisualPosition((vector *)(*plVar5 + 0x10));
  }
  return;
}


// ===== 0049732c  FUN_0049732c =====

void FUN_0049732c(long *param_1,long *param_2,ulong param_3,long *param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      lVar7 = param_2[-1];
      lVar11 = *param_1;
      fVar17 = *(float *)(lVar7 + 0x80);
      fVar18 = *(float *)(lVar7 + 0x84) - *(float *)(lVar7 + 0x7c);
      fVar20 = *(float *)(lVar7 + 0x88) - fVar17;
      fVar19 = *(float *)(lVar11 + 0x80);
      fVar22 = *(float *)(lVar11 + 0x84) - *(float *)(lVar11 + 0x7c);
      bVar3 = fVar18 < 0.0 != NAN(fVar18);
      fVar21 = *(float *)(lVar11 + 0x88) - fVar19;
      bVar1 = fVar20 < 0.0 != NAN(fVar20);
      bVar4 = fVar22 < 0.0 != NAN(fVar22);
      bVar2 = fVar21 < 0.0 != NAN(fVar21);
      if (((fVar20 == 0.0 || bVar1) || (fVar18 == 0.0 || bVar3)) ||
         ((fVar21 == 0.0 || bVar2) || (fVar22 == 0.0 || bVar4))) {
        if ((fVar21 != 0.0 && !bVar2) && (fVar22 != 0.0 && !bVar4) ||
            ((fVar20 == 0.0 || bVar1) || (fVar18 == 0.0 || bVar3))) {
          return;
        }
      }
      else if (fVar17 == fVar19) {
        if (*(float *)(lVar11 + 0x7c) <= *(float *)(lVar7 + 0x7c)) {
          return;
        }
      }
      else if (fVar19 <= fVar17) {
        return;
      }
      *param_1 = lVar7;
      param_2[-1] = lVar11;
    }
    else if ((long)param_3 < 1) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar7 = 0;
        plVar16 = param_1 + 1;
        plVar9 = param_1;
LAB_004974a0:
        plVar8 = plVar16;
        lVar14 = *plVar8;
        lVar11 = *plVar9;
        fVar17 = *(float *)(lVar14 + 0x80);
        fVar18 = *(float *)(lVar14 + 0x84) - *(float *)(lVar14 + 0x7c);
        fVar20 = *(float *)(lVar14 + 0x88) - fVar17;
        fVar19 = *(float *)(lVar11 + 0x80);
        fVar22 = *(float *)(lVar11 + 0x84) - *(float *)(lVar11 + 0x7c);
        bVar3 = fVar18 < 0.0 != NAN(fVar18);
        fVar21 = *(float *)(lVar11 + 0x88) - fVar19;
        bVar1 = fVar20 < 0.0 != NAN(fVar20);
        bVar4 = fVar22 < 0.0 != NAN(fVar22);
        bVar2 = fVar21 < 0.0 != NAN(fVar21);
        if (((fVar20 == 0.0 || bVar1) || (fVar18 == 0.0 || bVar3)) ||
           ((fVar21 == 0.0 || bVar2) || (fVar22 == 0.0 || bVar4))) {
          if (((fVar21 == 0.0 || bVar2) || (fVar22 == 0.0 || bVar4)) &&
              ((fVar20 != 0.0 && !bVar1) && (fVar18 != 0.0 && !bVar3))) goto LAB_0049752c;
        }
        else if (fVar17 == fVar19) {
          if (*(float *)(lVar14 + 0x7c) < *(float *)(lVar11 + 0x7c)) goto LAB_0049752c;
        }
        else if (fVar17 < fVar19) {
LAB_0049752c:
          lVar12 = 0;
          *plVar8 = 0;
          lVar15 = lVar7;
          do {
            plVar16 = (long *)((long)param_1 + lVar15);
            *plVar16 = 0;
            plVar16[1] = lVar11;
            if ((lVar12 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,lVar12), iVar6 == 1)) {
              FUN_0049784c(lVar12);
            }
            plVar9 = param_1;
            if (lVar15 == 0) goto LAB_004975f8;
            fVar17 = *(float *)(lVar14 + 0x80);
            lVar11 = *(long *)((long)param_1 + lVar15 + -8);
            fVar18 = *(float *)(lVar14 + 0x84) - *(float *)(lVar14 + 0x7c);
            fVar20 = *(float *)(lVar14 + 0x88) - fVar17;
            fVar19 = *(float *)(lVar11 + 0x80);
            fVar22 = *(float *)(lVar11 + 0x84) - *(float *)(lVar11 + 0x7c);
            bVar3 = fVar18 < 0.0 != NAN(fVar18);
            fVar21 = *(float *)(lVar11 + 0x88) - fVar19;
            bVar1 = fVar20 < 0.0 != NAN(fVar20);
            bVar4 = fVar22 < 0.0 != NAN(fVar22);
            bVar2 = fVar21 < 0.0 != NAN(fVar21);
            if (((fVar20 == 0.0 || bVar1) || (fVar18 == 0.0 || bVar3)) ||
               ((fVar21 == 0.0 || bVar2) || (fVar22 == 0.0 || bVar4))) {
              if ((fVar21 != 0.0 && !bVar2) && (fVar22 != 0.0 && !bVar4) ||
                  ((fVar20 == 0.0 || bVar1) || (fVar18 == 0.0 || bVar3))) goto LAB_004975ec;
            }
            else if (fVar17 == fVar19) {
              if (*(float *)(lVar11 + 0x7c) <= *(float *)(lVar14 + 0x7c)) goto LAB_004975ec;
            }
            else if (fVar19 <= fVar17) goto LAB_004975ec;
            lVar12 = *plVar16;
            lVar15 = lVar15 + -8;
          } while( true );
        }
        goto LAB_00497490;
      }
    }
    else {
      uVar13 = param_3 >> 1;
      plVar16 = param_1 + uVar13;
      lVar7 = param_3 - uVar13;
      if (param_5 < (long)param_3) {
        FUN_0049732c();
        FUN_0049732c(plVar16,param_2,lVar7,param_4,param_5);
        FUN_00497e78(param_1,plVar16,param_2,uVar13,lVar7,param_4,param_5);
        return;
      }
      FUN_00497918(param_1,plVar16,uVar13);
      plVar8 = param_4 + uVar13;
      FUN_00497918(plVar16,param_2,lVar7,plVar8);
      plVar5 = param_4 + param_3;
      plVar9 = plVar8;
      plVar16 = param_4;
      do {
        if (plVar9 == plVar5) {
          if (plVar16 != plVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(undefined8 *)((long)plVar16 + lVar7);
              *(undefined8 *)((long)plVar16 + lVar7) = 0;
              lVar11 = *(long *)((long)param_1 + lVar7);
              *(undefined8 *)((long)param_1 + lVar7) = uVar10;
              if ((lVar11 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,lVar11), iVar6 == 1)) {
                FUN_0049784c(lVar11);
              }
              lVar7 = lVar7 + 8;
            } while ((long *)((long)plVar16 + lVar7) != plVar8);
          }
          goto LAB_00497808;
        }
        lVar7 = *plVar9;
        lVar11 = *plVar16;
        fVar17 = *(float *)(lVar7 + 0x80);
        fVar18 = *(float *)(lVar7 + 0x84) - *(float *)(lVar7 + 0x7c);
        fVar20 = *(float *)(lVar7 + 0x88) - fVar17;
        fVar19 = *(float *)(lVar11 + 0x80);
        fVar22 = *(float *)(lVar11 + 0x84) - *(float *)(lVar11 + 0x7c);
        bVar3 = fVar18 < 0.0 != NAN(fVar18);
        fVar21 = *(float *)(lVar11 + 0x88) - fVar19;
        bVar1 = fVar20 < 0.0 != NAN(fVar20);
        bVar4 = fVar22 < 0.0 != NAN(fVar22);
        bVar2 = fVar21 < 0.0 != NAN(fVar21);
        if (((fVar20 == 0.0 || bVar1) || (fVar18 == 0.0 || bVar3)) ||
           ((fVar21 == 0.0 || bVar2) || (fVar22 == 0.0 || bVar4))) {
          if ((fVar21 != 0.0 && !bVar2) && (fVar22 != 0.0 && !bVar4) ||
              ((fVar20 == 0.0 || bVar1) || (fVar18 == 0.0 || bVar3))) goto LAB_004976cc;
LAB_0049770c:
          *plVar9 = 0;
          lVar11 = *param_1;
          *param_1 = lVar7;
          if ((lVar11 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,lVar11), iVar6 == 1)) {
            FUN_0049784c(lVar11);
          }
          plVar9 = plVar9 + 1;
        }
        else {
          if (fVar17 == fVar19) {
            if (*(float *)(lVar11 + 0x7c) <= *(float *)(lVar7 + 0x7c)) goto LAB_004976cc;
            goto LAB_0049770c;
          }
          if (fVar17 < fVar19) goto LAB_0049770c;
LAB_004976cc:
          *plVar16 = 0;
          lVar7 = *param_1;
          *param_1 = lVar11;
          if ((lVar7 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,lVar7), iVar6 == 1)) {
            FUN_0049784c(lVar7);
          }
          plVar16 = plVar16 + 1;
        }
        param_1 = param_1 + 1;
      } while (plVar16 != plVar8);
      if (plVar9 != plVar5) {
        lVar7 = 0;
        do {
          uVar10 = *(undefined8 *)((long)plVar9 + lVar7);
          *(undefined8 *)((long)plVar9 + lVar7) = 0;
          lVar11 = *(long *)((long)param_1 + lVar7);
          *(undefined8 *)((long)param_1 + lVar7) = uVar10;
          if ((lVar11 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,lVar11), iVar6 == 1)) {
            FUN_0049784c(lVar11);
          }
          lVar7 = lVar7 + 8;
        } while ((long *)((long)plVar9 + lVar7) != plVar5);
      }
LAB_00497808:
      if (param_4 != (long *)0x0) {
        if (param_3 < 2) {
          param_3 = 1;
        }
        do {
          lVar7 = *param_4;
          if ((lVar7 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,lVar7), iVar6 == 1)) {
            FUN_0049784c(lVar7);
          }
          param_3 = param_3 - 1;
          param_4 = param_4 + 1;
        } while (param_3 != 0);
      }
    }
  }
  return;
LAB_004975ec:
  plVar9 = (long *)((long)param_1 + lVar15);
LAB_004975f8:
  lVar11 = *plVar9;
  *plVar9 = lVar14;
  if ((lVar11 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,lVar11), iVar6 == 1)) {
    FUN_0049784c(lVar11);
  }
LAB_00497490:
  lVar7 = lVar7 + 8;
  plVar16 = plVar8 + 1;
  plVar9 = plVar8;
  if (plVar8 + 1 == param_2) {
    return;
  }
  goto LAB_004974a0;
}


// ===== 0049784c  FUN_0049784c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0049784c(void *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
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
    plVar5 = *(long **)((long)param_1 + 0x10);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x40));
    plVar5 = *(long **)((long)param_1 + 0x10);
  }
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)((long)param_1 + 0x18);
    plVar3 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar6 = plVar6 + -1;
        lVar4 = *plVar6;
        if ((lVar4 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar4), iVar2 == 1)) {
          FUN_0049784c(lVar4);
        }
      } while (plVar6 != plVar5);
      plVar3 = *(long **)((long)param_1 + 0x10);
    }
    *(long **)((long)param_1 + 0x18) = plVar5;
    operator_delete(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00497918  FUN_00497918 =====

void FUN_00497918(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 1) goto LAB_00497bd4;
  if (param_3 != 2) {
    if (8 < (long)param_3) {
      uVar18 = param_3 >> 1;
      plVar19 = param_1 + uVar18;
      FUN_0049732c(param_1,plVar19,uVar18,param_4,uVar18);
      FUN_0049732c(plVar19,param_2,param_3 - uVar18,param_4 + uVar18,param_3 - uVar18);
      lVar11 = -1;
      plVar10 = param_4;
      plVar15 = param_1;
      plVar9 = plVar19;
      do {
        if (plVar9 == param_2) {
          if (plVar15 == plVar19) {
            return;
          }
          uVar18 = (long)param_1 + (uVar18 * 8 - (long)plVar15) + -8;
          if ((0x77 < uVar18) &&
             (((long *)((long)param_4 + (uVar18 & 0xfffffffffffffff8) + (lVar11 + 1) * 8 + 8) <=
               plVar15 || ((long *)((long)plVar15 + (uVar18 & 0xfffffffffffffff8) + 8) <= plVar10)))
             ) {
            lVar11 = 0;
            uVar18 = (uVar18 >> 3) + 1;
            uVar16 = uVar18 & 0x3ffffffffffffffc;
            uVar17 = uVar16;
            do {
              puVar5 = (undefined8 *)((long)plVar15 + lVar11);
              puVar6 = (undefined8 *)((long)plVar10 + lVar11);
              uVar17 = uVar17 - 4;
              uVar22 = puVar5[1];
              uVar21 = *puVar5;
              uVar25 = puVar5[3];
              uVar24 = puVar5[2];
              lVar11 = lVar11 + 0x20;
              puVar5[1] = 0;
              *puVar5 = 0;
              puVar5[3] = 0;
              puVar5[2] = 0;
              puVar6[1] = uVar22;
              *puVar6 = uVar21;
              puVar6[3] = uVar25;
              puVar6[2] = uVar24;
            } while (uVar17 != 0);
            if (uVar18 == uVar16) {
              return;
            }
            plVar15 = plVar15 + uVar16;
            plVar10 = plVar10 + uVar16;
          }
          do {
            lVar11 = *plVar15;
            plVar9 = plVar15 + 1;
            *plVar15 = 0;
            *plVar10 = lVar11;
            plVar15 = plVar9;
            plVar10 = plVar10 + 1;
          } while (plVar9 != plVar19);
          return;
        }
        lVar8 = *plVar9;
        lVar12 = *plVar15;
        fVar20 = *(float *)(lVar8 + 0x80);
        fVar23 = *(float *)(lVar8 + 0x84) - *(float *)(lVar8 + 0x7c);
        fVar27 = *(float *)(lVar8 + 0x88) - fVar20;
        fVar26 = *(float *)(lVar12 + 0x80);
        fVar29 = *(float *)(lVar12 + 0x84) - *(float *)(lVar12 + 0x7c);
        bVar3 = fVar23 < 0.0 != NAN(fVar23);
        fVar28 = *(float *)(lVar12 + 0x88) - fVar26;
        bVar1 = fVar27 < 0.0 != NAN(fVar27);
        bVar4 = fVar29 < 0.0 != NAN(fVar29);
        bVar2 = fVar28 < 0.0 != NAN(fVar28);
        if (((fVar27 == 0.0 || bVar1) || (fVar23 == 0.0 || bVar3)) ||
           ((fVar28 == 0.0 || bVar2) || (fVar29 == 0.0 || bVar4))) {
          if (((fVar28 == 0.0 || bVar2) || (fVar29 == 0.0 || bVar4)) &&
              ((fVar27 != 0.0 && !bVar1) && (fVar23 != 0.0 && !bVar3))) goto LAB_00497cf0;
LAB_00497c4c:
          plVar14 = plVar15 + 1;
          *plVar15 = 0;
          *plVar10 = lVar12;
        }
        else {
          if (fVar20 == fVar26) {
            if (*(float *)(lVar8 + 0x7c) < *(float *)(lVar12 + 0x7c)) goto LAB_00497cf0;
            goto LAB_00497c4c;
          }
          if (fVar26 <= fVar20) goto LAB_00497c4c;
LAB_00497cf0:
          *plVar9 = 0;
          *plVar10 = lVar8;
          plVar14 = plVar15;
          plVar9 = plVar9 + 1;
        }
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + 1;
        plVar15 = plVar14;
        if (plVar14 == plVar19) {
          if (plVar9 == param_2) {
            return;
          }
          uVar18 = (long)param_2 + (-8 - (long)plVar9);
          if ((0x67 < uVar18) &&
             (((long *)((long)param_4 + (uVar18 & 0xfffffffffffffff8) + lVar11 * 8 + 0x10) <= plVar9
              || ((long *)((long)plVar9 + (uVar18 & 0xfffffffffffffff8) + 8) <= plVar10)))) {
            lVar11 = 0;
            uVar18 = (uVar18 >> 3) + 1;
            uVar16 = uVar18 & 0x3ffffffffffffffc;
            uVar17 = uVar16;
            do {
              puVar5 = (undefined8 *)((long)plVar9 + lVar11);
              puVar6 = (undefined8 *)((long)plVar10 + lVar11);
              uVar17 = uVar17 - 4;
              uVar22 = puVar5[1];
              uVar21 = *puVar5;
              uVar25 = puVar5[3];
              uVar24 = puVar5[2];
              lVar11 = lVar11 + 0x20;
              puVar5[1] = 0;
              *puVar5 = 0;
              puVar5[3] = 0;
              puVar5[2] = 0;
              puVar6[1] = uVar22;
              *puVar6 = uVar21;
              puVar6[3] = uVar25;
              puVar6[2] = uVar24;
            } while (uVar17 != 0);
            if (uVar18 == uVar16) {
              return;
            }
            plVar9 = plVar9 + uVar16;
            plVar10 = plVar10 + uVar16;
          }
          do {
            lVar11 = *plVar9;
            plVar19 = plVar9 + 1;
            *plVar9 = 0;
            *plVar10 = lVar11;
            plVar10 = plVar10 + 1;
            plVar9 = plVar19;
          } while (plVar19 != param_2);
          return;
        }
      } while( true );
    }
    if (param_1 == param_2) {
      return;
    }
    lVar11 = *param_1;
    plVar10 = param_1 + 1;
    *param_1 = 0;
    *param_4 = lVar11;
    if (plVar10 == param_2) {
      return;
    }
    lVar11 = 0;
    plVar19 = param_4;
    do {
      lVar8 = *plVar10;
      plVar15 = plVar19 + 1;
      lVar12 = *plVar19;
      fVar20 = *(float *)(lVar8 + 0x80);
      fVar23 = *(float *)(lVar8 + 0x84) - *(float *)(lVar8 + 0x7c);
      fVar27 = *(float *)(lVar8 + 0x88) - fVar20;
      fVar26 = *(float *)(lVar12 + 0x80);
      fVar29 = *(float *)(lVar12 + 0x84) - *(float *)(lVar12 + 0x7c);
      bVar3 = fVar23 < 0.0 != NAN(fVar23);
      fVar28 = *(float *)(lVar12 + 0x88) - fVar26;
      bVar1 = fVar27 < 0.0 != NAN(fVar27);
      bVar4 = fVar29 < 0.0 != NAN(fVar29);
      bVar2 = fVar28 < 0.0 != NAN(fVar28);
      if (((fVar27 == 0.0 || bVar1) || (fVar23 == 0.0 || bVar3)) ||
         ((fVar28 == 0.0 || bVar2) || (fVar29 == 0.0 || bVar4))) {
        if (((fVar28 == 0.0 || bVar2) || (fVar29 == 0.0 || bVar4)) &&
            ((fVar27 != 0.0 && !bVar1) && (fVar23 != 0.0 && !bVar3))) goto LAB_00497a98;
LAB_004979f8:
        *plVar10 = 0;
        *plVar15 = lVar8;
      }
      else {
        if (fVar20 == fVar26) {
          if (*(float *)(lVar8 + 0x7c) < *(float *)(lVar12 + 0x7c)) goto LAB_00497a98;
          goto LAB_004979f8;
        }
        if (fVar26 <= fVar20) goto LAB_004979f8;
LAB_00497a98:
        *plVar19 = 0;
        plVar19[1] = lVar12;
        plVar9 = param_4;
        lVar8 = lVar11;
        if (plVar19 != param_4) {
          do {
            lVar12 = *plVar10;
            fVar20 = *(float *)(lVar12 + 0x80);
            plVar14 = (long *)((long)param_4 + lVar8);
            lVar13 = plVar14[-1];
            fVar23 = *(float *)(lVar12 + 0x84) - *(float *)(lVar12 + 0x7c);
            fVar27 = *(float *)(lVar12 + 0x88) - fVar20;
            fVar26 = *(float *)(lVar13 + 0x80);
            fVar29 = *(float *)(lVar13 + 0x84) - *(float *)(lVar13 + 0x7c);
            bVar3 = fVar23 < 0.0 != NAN(fVar23);
            fVar28 = *(float *)(lVar13 + 0x88) - fVar26;
            bVar1 = fVar27 < 0.0 != NAN(fVar27);
            bVar4 = fVar29 < 0.0 != NAN(fVar29);
            bVar2 = fVar28 < 0.0 != NAN(fVar28);
            plVar9 = plVar19;
            if (((fVar27 == 0.0 || bVar1) || (fVar23 == 0.0 || bVar3)) ||
               ((fVar28 == 0.0 || bVar2) || (fVar29 == 0.0 || bVar4))) {
              if ((fVar28 != 0.0 && !bVar2) && (fVar29 != 0.0 && !bVar4) ||
                  ((fVar27 == 0.0 || bVar1) || (fVar23 == 0.0 || bVar3))) break;
            }
            else if (fVar20 == fVar26) {
              if (*(float *)(lVar13 + 0x7c) <= *(float *)(lVar12 + 0x7c)) {
                plVar9 = (long *)((long)param_4 + lVar8);
                break;
              }
            }
            else if (fVar26 <= fVar20) break;
            lVar12 = *plVar14;
            plVar14[-1] = 0;
            *plVar14 = lVar13;
            if ((lVar12 != 0) && (iVar7 = FUN_00340fe0(0xffffffff,lVar12), iVar7 == 1)) {
              FUN_0049784c(lVar12);
            }
            lVar8 = lVar8 + -8;
            plVar19 = plVar19 + -1;
            plVar9 = param_4;
          } while (lVar8 != 0);
        }
        lVar8 = *plVar10;
        *plVar10 = 0;
        lVar12 = *plVar9;
        *plVar9 = lVar8;
        if ((lVar12 != 0) && (iVar7 = FUN_00340fe0(0xffffffff,lVar12), iVar7 == 1)) {
          FUN_0049784c(lVar12);
        }
      }
      plVar10 = plVar10 + 1;
      lVar11 = lVar11 + 8;
      plVar19 = plVar15;
      if (plVar10 == param_2) {
        return;
      }
    } while( true );
  }
  param_2 = param_2 + -1;
  lVar8 = *param_2;
  lVar11 = *param_1;
  fVar20 = *(float *)(lVar8 + 0x80);
  fVar23 = *(float *)(lVar8 + 0x84) - *(float *)(lVar8 + 0x7c);
  fVar27 = *(float *)(lVar8 + 0x88) - fVar20;
  fVar26 = *(float *)(lVar11 + 0x80);
  fVar29 = *(float *)(lVar11 + 0x84) - *(float *)(lVar11 + 0x7c);
  bVar3 = fVar23 < 0.0 != NAN(fVar23);
  fVar28 = *(float *)(lVar11 + 0x88) - fVar26;
  bVar1 = fVar27 < 0.0 != NAN(fVar27);
  bVar4 = fVar29 < 0.0 != NAN(fVar29);
  bVar2 = fVar28 < 0.0 != NAN(fVar28);
  plVar10 = param_1;
  if (((fVar27 == 0.0 || bVar1) || (fVar23 == 0.0 || bVar3)) ||
     ((fVar28 == 0.0 || bVar2) || (fVar29 == 0.0 || bVar4))) {
    if (((fVar28 == 0.0 || bVar2) || (fVar29 == 0.0 || bVar4)) &&
        ((fVar27 != 0.0 && !bVar1) && (fVar23 != 0.0 && !bVar3))) goto LAB_00497bc4;
  }
  else if (fVar20 == fVar26) {
    if (*(float *)(lVar8 + 0x7c) < *(float *)(lVar11 + 0x7c)) goto LAB_00497bc4;
  }
  else if (fVar20 < fVar26) {
LAB_00497bc4:
    lVar11 = lVar8;
    plVar10 = param_2;
    param_2 = param_1;
  }
  *plVar10 = 0;
  *param_4 = lVar11;
  param_1 = param_2;
  param_4 = param_4 + 1;
LAB_00497bd4:
  lVar11 = *param_1;
  *param_1 = 0;
  *param_4 = lVar11;
  return;
}


// ===== 00497e78  FUN_00497e78 =====

void FUN_00497e78(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6,
                 long param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long lVar30;
  long lVar31;
  
  if (param_5 == 0) {
    return;
  }
LAB_00497ea4:
  if ((param_7 < param_5) && (param_7 < param_4)) {
    if (param_4 == 0) {
      return;
    }
    lVar7 = *param_2;
    fVar24 = *(float *)(lVar7 + 0x80);
    fVar25 = *(float *)(lVar7 + 0x84) - *(float *)(lVar7 + 0x7c);
    fVar26 = *(float *)(lVar7 + 0x88) - fVar24;
    bVar3 = fVar25 < 0.0 != NAN(fVar25);
    bVar1 = fVar26 < 0.0 != NAN(fVar26);
    do {
      lVar19 = *param_1;
      fVar27 = *(float *)(lVar19 + 0x80);
      fVar28 = *(float *)(lVar19 + 0x84) - *(float *)(lVar19 + 0x7c);
      fVar29 = *(float *)(lVar19 + 0x88) - fVar27;
      bVar2 = (fVar29 == 0.0 || fVar29 < 0.0 != NAN(fVar29)) ||
              (fVar28 == 0.0 || fVar28 < 0.0 != NAN(fVar28));
      if (((fVar26 == 0.0 || bVar1) || (fVar25 == 0.0 || bVar3)) || bVar2) {
        if (bVar2 && ((fVar26 != 0.0 && !bVar1) && (fVar25 != 0.0 && !bVar3))) goto LAB_00497f44;
      }
      else if (fVar24 == fVar27) {
        if (*(float *)(lVar7 + 0x7c) < *(float *)(lVar19 + 0x7c)) goto LAB_00497f44;
      }
      else if (fVar24 < fVar27) goto LAB_00497f44;
      param_4 = param_4 + -1;
      param_1 = param_1 + 1;
      if (param_4 == 0) {
        return;
      }
    } while( true );
  }
  if (param_5 < param_4) {
    if ((long)param_3 - (long)param_2 == 0) {
      return;
    }
    uVar20 = ((long)param_3 - (long)param_2) - 8;
    if ((0x47 < uVar20) &&
       (((long *)((long)param_6 + (uVar20 & 0xfffffffffffffff8) + 8) <= param_2 ||
        ((long *)((long)param_2 + (uVar20 & 0xfffffffffffffff8) + 8) <= param_6)))) {
      lVar7 = 0;
      lVar19 = 0;
      lVar13 = 0;
      lVar23 = 0;
      uVar20 = (uVar20 >> 3) + 1;
      plVar10 = param_6 + 2;
      uVar17 = uVar20 & 0x3ffffffffffffffc;
      plVar12 = param_6 + uVar17;
      plVar11 = param_2;
      uVar21 = uVar17;
      do {
        lVar22 = plVar11[1];
        lVar18 = *plVar11;
        lVar31 = plVar11[3];
        lVar30 = plVar11[2];
        lVar7 = lVar7 + 1;
        lVar19 = lVar19 + 1;
        lVar13 = lVar13 + 1;
        lVar23 = lVar23 + 1;
        plVar11[1] = 0;
        *plVar11 = 0;
        plVar11[3] = 0;
        plVar11[2] = 0;
        uVar21 = uVar21 - 4;
        plVar10[-1] = lVar22;
        plVar10[-2] = lVar18;
        plVar10[1] = lVar31;
        *plVar10 = lVar30;
        plVar10 = plVar10 + 4;
        plVar11 = plVar11 + 4;
      } while (uVar21 != 0);
      lVar7 = lVar13 + lVar7 + lVar23 + lVar19;
      if (uVar20 != uVar17) {
        plVar10 = param_2 + uVar17;
        plVar11 = plVar12;
LAB_004982bc:
        do {
          lVar19 = *plVar10;
          plVar14 = plVar10 + 1;
          *plVar10 = 0;
          lVar7 = lVar7 + 1;
          plVar12 = plVar11 + 1;
          *plVar11 = lVar19;
          plVar10 = plVar14;
          plVar11 = plVar12;
        } while (plVar14 != param_3);
      }
      do {
        param_3 = param_3 + -1;
        if (param_2 == param_1) {
          lVar19 = 0;
          do {
            uVar16 = *(undefined8 *)((long)plVar12 + lVar19 + -8);
            *(undefined8 *)((long)plVar12 + lVar19 + -8) = 0;
            lVar13 = *(long *)((long)param_3 + lVar19);
            *(undefined8 *)((long)param_3 + lVar19) = uVar16;
            if ((lVar13 != 0) && (iVar5 = FUN_00340fe0(0xffffffff,lVar13), iVar5 == 1)) {
              FUN_0049784c(lVar13);
            }
            lVar19 = lVar19 + -8;
          } while ((long *)((long)plVar12 + lVar19) != param_6);
          goto LAB_00498628;
        }
        plVar10 = plVar12 + -1;
        lVar19 = *plVar10;
        plVar11 = param_2 + -1;
        lVar13 = *plVar11;
        fVar24 = *(float *)(lVar19 + 0x80);
        fVar25 = *(float *)(lVar19 + 0x84) - *(float *)(lVar19 + 0x7c);
        fVar27 = *(float *)(lVar19 + 0x88) - fVar24;
        fVar26 = *(float *)(lVar13 + 0x80);
        fVar29 = *(float *)(lVar13 + 0x84) - *(float *)(lVar13 + 0x7c);
        bVar2 = fVar25 < 0.0 != NAN(fVar25);
        fVar28 = *(float *)(lVar13 + 0x88) - fVar26;
        bVar1 = fVar27 < 0.0 != NAN(fVar27);
        bVar4 = fVar29 < 0.0 != NAN(fVar29);
        bVar3 = fVar28 < 0.0 != NAN(fVar28);
        if (((fVar27 == 0.0 || bVar1) || (fVar25 == 0.0 || bVar2)) ||
           ((fVar28 == 0.0 || bVar3) || (fVar29 == 0.0 || bVar4))) {
          if ((fVar28 != 0.0 && !bVar3) && (fVar29 != 0.0 && !bVar4) ||
              ((fVar27 == 0.0 || bVar1) || (fVar25 == 0.0 || bVar2))) goto LAB_00498368;
LAB_004983a8:
          *plVar11 = 0;
          lVar23 = *param_3;
          *param_3 = lVar13;
          plVar10 = plVar12;
          param_2 = plVar11;
          if (lVar23 != 0) {
            iVar5 = FUN_00340fe0(0xffffffff,lVar23);
joined_r0x004983c8:
            if (iVar5 == 1) {
              FUN_0049784c(lVar23);
            }
          }
        }
        else {
          if (fVar24 == fVar26) {
            if (*(float *)(lVar13 + 0x7c) <= *(float *)(lVar19 + 0x7c)) goto LAB_00498368;
            goto LAB_004983a8;
          }
          if (fVar24 < fVar26) goto LAB_004983a8;
LAB_00498368:
          *plVar10 = 0;
          lVar23 = *param_3;
          *param_3 = lVar19;
          if (lVar23 != 0) {
            iVar5 = FUN_00340fe0(0xffffffff,lVar23);
            goto joined_r0x004983c8;
          }
        }
        plVar12 = plVar10;
        if (plVar10 == param_6) {
LAB_00498628:
          if (param_6 == (long *)0x0) {
            return;
          }
          do {
            lVar19 = *param_6;
            if ((lVar19 != 0) && (iVar5 = FUN_00340fe0(0xffffffff,lVar19), iVar5 == 1)) {
              FUN_0049784c(lVar19);
            }
            lVar7 = lVar7 + -1;
            param_6 = param_6 + 1;
          } while (lVar7 != 0);
          return;
        }
      } while( true );
    }
    lVar7 = 0;
    plVar10 = param_2;
    plVar11 = param_6;
    goto LAB_004982bc;
  }
  if (param_1 == param_2) {
    return;
  }
  uVar20 = (long)param_2 + (-8 - (long)param_1);
  if ((0x47 < uVar20) &&
     (((long *)((long)param_6 + (uVar20 & 0xfffffffffffffff8) + 8) <= param_1 ||
      ((long *)((long)param_1 + (uVar20 & 0xfffffffffffffff8) + 8) <= param_6)))) {
    lVar7 = 0;
    lVar19 = 0;
    lVar13 = 0;
    lVar23 = 0;
    uVar20 = (uVar20 >> 3) + 1;
    plVar11 = param_6 + 2;
    uVar17 = uVar20 & 0x3ffffffffffffffc;
    plVar10 = param_6 + uVar17;
    plVar12 = param_1;
    uVar21 = uVar17;
    do {
      lVar22 = plVar12[1];
      lVar18 = *plVar12;
      lVar31 = plVar12[3];
      lVar30 = plVar12[2];
      lVar7 = lVar7 + 1;
      lVar19 = lVar19 + 1;
      lVar13 = lVar13 + 1;
      lVar23 = lVar23 + 1;
      plVar12[1] = 0;
      *plVar12 = 0;
      plVar12[3] = 0;
      plVar12[2] = 0;
      uVar21 = uVar21 - 4;
      plVar11[-1] = lVar22;
      plVar11[-2] = lVar18;
      plVar11[1] = lVar31;
      *plVar11 = lVar30;
      plVar11 = plVar11 + 4;
      plVar12 = plVar12 + 4;
    } while (uVar21 != 0);
    lVar7 = lVar13 + lVar7 + lVar23 + lVar19;
    if (uVar20 != uVar17) {
      plVar11 = param_1 + uVar17;
LAB_0049842c:
      do {
        lVar19 = *plVar11;
        plVar12 = plVar11 + 1;
        *plVar11 = 0;
        lVar7 = lVar7 + 1;
        plVar14 = plVar10 + 1;
        *plVar10 = lVar19;
        plVar11 = plVar12;
        plVar10 = plVar14;
      } while (plVar12 != param_2);
    }
    plVar11 = param_6;
    do {
      if (param_2 == param_3) {
        lVar19 = 0;
        do {
          uVar16 = *(undefined8 *)((long)plVar11 + lVar19);
          *(undefined8 *)((long)plVar11 + lVar19) = 0;
          lVar13 = *(long *)((long)param_1 + lVar19);
          *(undefined8 *)((long)param_1 + lVar19) = uVar16;
          if ((lVar13 != 0) && (iVar5 = FUN_00340fe0(0xffffffff,lVar13), iVar5 == 1)) {
            FUN_0049784c(lVar13);
          }
          plVar12 = (long *)((long)plVar11 + lVar19);
          lVar19 = lVar19 + 8;
        } while (plVar12 != plVar10 + -1);
        break;
      }
      lVar19 = *param_2;
      lVar13 = *plVar11;
      fVar24 = *(float *)(lVar19 + 0x80);
      fVar25 = *(float *)(lVar19 + 0x84) - *(float *)(lVar19 + 0x7c);
      fVar27 = *(float *)(lVar19 + 0x88) - fVar24;
      fVar26 = *(float *)(lVar13 + 0x80);
      fVar29 = *(float *)(lVar13 + 0x84) - *(float *)(lVar13 + 0x7c);
      bVar2 = fVar25 < 0.0 != NAN(fVar25);
      fVar28 = *(float *)(lVar13 + 0x88) - fVar26;
      bVar1 = fVar27 < 0.0 != NAN(fVar27);
      bVar4 = fVar29 < 0.0 != NAN(fVar29);
      bVar3 = fVar28 < 0.0 != NAN(fVar28);
      if (((fVar27 == 0.0 || bVar1) || (fVar25 == 0.0 || bVar2)) ||
         ((fVar28 == 0.0 || bVar3) || (fVar29 == 0.0 || bVar4))) {
        if ((fVar28 != 0.0 && !bVar3) && (fVar29 != 0.0 && !bVar4) ||
            ((fVar27 == 0.0 || bVar1) || (fVar25 == 0.0 || bVar2))) goto LAB_004984cc;
LAB_00498524:
        *param_2 = 0;
        lVar13 = *param_1;
        *param_1 = lVar19;
        if ((lVar13 != 0) && (iVar5 = FUN_00340fe0(0xffffffff,lVar13), iVar5 == 1)) {
          FUN_0049784c(lVar13);
        }
        param_2 = param_2 + 1;
      }
      else {
        if (fVar24 == fVar26) {
          if (*(float *)(lVar13 + 0x7c) <= *(float *)(lVar19 + 0x7c)) goto LAB_004984cc;
          goto LAB_00498524;
        }
        if (fVar24 < fVar26) goto LAB_00498524;
LAB_004984cc:
        *plVar11 = 0;
        lVar19 = *param_1;
        *param_1 = lVar13;
        if ((lVar19 != 0) && (iVar5 = FUN_00340fe0(0xffffffff,lVar19), iVar5 == 1)) {
          FUN_0049784c(lVar19);
        }
        plVar11 = plVar11 + 1;
      }
      param_1 = param_1 + 1;
    } while (plVar11 != plVar10);
    goto LAB_00498628;
  }
  lVar7 = 0;
  plVar11 = param_1;
  plVar10 = param_6;
  goto LAB_0049842c;
LAB_00497f44:
  if (param_4 < param_5) {
    lVar23 = param_5;
    if (param_5 < 0) {
      lVar23 = param_5 + 1;
    }
    lVar23 = lVar23 >> 1;
    lVar13 = lVar23 * 8;
    plVar10 = param_2;
    if ((long)param_2 - (long)param_1 != 0) {
      lVar19 = param_2[lVar23];
      uVar20 = (long)param_2 - (long)param_1 >> 3;
      fVar24 = *(float *)(lVar19 + 0x80);
      fVar25 = *(float *)(lVar19 + 0x84) - *(float *)(lVar19 + 0x7c);
      fVar26 = *(float *)(lVar19 + 0x88) - fVar24;
      bVar3 = fVar25 < 0.0 != NAN(fVar25);
      bVar1 = fVar26 < 0.0 != NAN(fVar26);
      plVar10 = param_1;
      do {
        uVar21 = uVar20 >> 1;
        lVar18 = plVar10[uVar21];
        fVar27 = *(float *)(lVar18 + 0x80);
        fVar28 = *(float *)(lVar18 + 0x84) - *(float *)(lVar18 + 0x7c);
        fVar29 = *(float *)(lVar18 + 0x88) - fVar27;
        bVar4 = fVar28 < 0.0 == NAN(fVar28);
        bVar2 = fVar29 < 0.0 == NAN(fVar29);
        if (((fVar26 != 0.0 && !bVar1) && (fVar25 != 0.0 && !bVar3)) &&
            ((fVar29 != 0.0 && bVar2) && (fVar28 != 0.0 && bVar4))) {
          if (fVar24 == fVar27) {
            if (*(float *)(lVar18 + 0x7c) <= *(float *)(lVar19 + 0x7c)) goto LAB_00497fd8;
          }
          else if (fVar27 <= fVar24) {
LAB_00497fd8:
            plVar10 = plVar10 + uVar21 + 1;
            uVar21 = uVar20 + ~uVar21;
          }
        }
        else if ((fVar29 != 0.0 && bVar2) && (fVar28 != 0.0 && bVar4) ||
                 ((fVar26 == 0.0 || bVar1) || (fVar25 == 0.0 || bVar3))) goto LAB_00497fd8;
        uVar20 = uVar21;
      } while (uVar20 != 0);
    }
    lVar19 = (long)plVar10 - (long)param_1 >> 3;
  }
  else {
    if (param_4 == 1) {
      *param_1 = lVar7;
      *param_2 = lVar19;
      return;
    }
    lVar19 = param_4;
    if (param_4 < 0) {
      lVar19 = param_4 + 1;
    }
    lVar19 = lVar19 >> 1;
    lVar13 = 0;
    plVar10 = param_1 + lVar19;
    plVar11 = param_2;
    if (param_2 != param_3) {
      lVar23 = *plVar10;
      uVar20 = (long)param_3 - (long)param_2 >> 3;
      fVar24 = *(float *)(lVar23 + 0x80);
      fVar25 = *(float *)(lVar23 + 0x84) - *(float *)(lVar23 + 0x7c);
      fVar26 = *(float *)(lVar23 + 0x88) - fVar24;
      bVar3 = fVar25 < 0.0 != NAN(fVar25);
      bVar1 = fVar26 < 0.0 != NAN(fVar26);
      do {
        uVar21 = uVar20 >> 1;
        lVar18 = lVar13 + uVar21 * 8;
        lVar22 = *(long *)((long)param_2 + lVar18);
        fVar27 = *(float *)(lVar22 + 0x80);
        fVar28 = *(float *)(lVar22 + 0x84) - *(float *)(lVar22 + 0x7c);
        fVar29 = *(float *)(lVar22 + 0x88) - fVar27;
        bVar4 = fVar28 < 0.0 == NAN(fVar28);
        bVar2 = fVar29 < 0.0 == NAN(fVar29);
        if (((fVar26 != 0.0 && !bVar1) && (fVar25 != 0.0 && !bVar3)) &&
            ((fVar29 != 0.0 && bVar2) && (fVar28 != 0.0 && bVar4))) {
          if (fVar27 == fVar24) {
            if (*(float *)(lVar22 + 0x7c) < *(float *)(lVar23 + 0x7c)) goto LAB_00498080;
          }
          else if (fVar27 < fVar24) {
LAB_00498080:
            lVar13 = lVar18 + 8;
            uVar21 = uVar20 + ~uVar21;
          }
        }
        else if (((fVar26 == 0.0 || bVar1) || (fVar25 == 0.0 || bVar3)) &&
                 ((fVar29 != 0.0 && bVar2) && (fVar28 != 0.0 && bVar4))) goto LAB_00498080;
        uVar20 = uVar21;
      } while (uVar20 != 0);
      plVar11 = (long *)((long)param_2 + lVar13);
    }
    lVar23 = (long)plVar11 - (long)param_2 >> 3;
  }
  plVar11 = (long *)((long)param_2 + lVar13);
  plVar12 = plVar11;
  if ((plVar10 != param_2) && (plVar12 = plVar10, lVar13 != 0)) {
    lVar18 = *plVar10;
    *plVar10 = lVar7;
    *param_2 = lVar18;
    plVar14 = param_2;
    while( true ) {
      lVar13 = lVar13 + -8;
      plVar12 = plVar12 + 1;
      if (lVar13 == 0) break;
      param_2 = param_2 + 1;
      lVar7 = *plVar12;
      plVar9 = param_2;
      if (plVar12 != plVar14) {
        plVar9 = plVar14;
      }
      *plVar12 = *param_2;
      *param_2 = lVar7;
      plVar14 = plVar9;
    }
    plVar9 = plVar12;
    plVar15 = plVar14;
    if (plVar12 != plVar14) {
LAB_0049817c:
      plVar6 = plVar14;
      lVar7 = *plVar9;
      plVar8 = plVar9 + 1;
      *plVar9 = *plVar15;
      plVar14 = plVar15 + 1;
      *plVar15 = lVar7;
      if (plVar14 == plVar11) {
        if (plVar8 == plVar6) goto LAB_004981e4;
        plVar14 = plVar6 + 1;
        lVar7 = *plVar6;
        while( true ) {
          lVar13 = *plVar8;
          plVar9 = plVar8 + 1;
          *plVar8 = lVar7;
          *plVar6 = lVar13;
          if (plVar14 != plVar11) break;
          plVar8 = plVar9;
          lVar7 = lVar13;
          if (plVar9 == plVar6) goto LAB_004981e4;
        }
        plVar8 = plVar8 + 1;
      }
      plVar9 = plVar8;
      plVar15 = plVar14;
      if (plVar8 != plVar6) {
        plVar14 = plVar6;
      }
      goto LAB_0049817c;
    }
  }
LAB_004981e4:
  param_4 = param_4 - lVar19;
  param_5 = param_5 - lVar23;
  if (lVar19 + lVar23 < param_4 + param_5) {
    FUN_00497e78(param_1,plVar10,plVar12,lVar19,lVar23,param_6,param_7);
    param_1 = plVar12;
    param_2 = plVar11;
  }
  else {
    FUN_00497e78(plVar12,plVar11);
    param_2 = plVar10;
    param_4 = lVar19;
    param_5 = lVar23;
    param_3 = plVar12;
  }
  if (param_5 == 0) {
    return;
  }
  goto LAB_00497ea4;
}


// ===== 0049875c  rive::SemanticManager::markNodeDirty =====

/* rive::SemanticManager::markNodeDirty(unsigned int, rive::SemanticDirt) */

void __thiscall rive::SemanticManager::markNodeDirty(SemanticManager *this,int param_1,uint param_3)

{
  *this = (SemanticManager)((byte)*this | (byte)param_3);
  if (param_1 != 0) {
    if (((param_3 & 0xff) >> 1 & 1) != 0) {
      FUN_004987d0(this + 0x118,param_1,param_1);
    }
    if (((param_3 & 0xff) >> 2 & 1) != 0) {
      FUN_004987d0(this + 0x140,param_1,param_1);
      return;
    }
  }
  return;
}


// ===== 004987d0  FUN_004987d0 =====

void FUN_004987d0(long *param_1,uint param_2,undefined4 param_3)

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
LAB_00498934:
      FUN_004010d0(param_1);
    }
    else if (uVar6 < uVar8) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_00498998:
        uVar7 = std::__ndk1::__next_prime(uVar7);
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10)) goto LAB_00498998;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar8) goto LAB_00498934;
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
    if (lVar4 == 0) goto LAB_00498a4c;
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
LAB_00498a4c:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 00498a6c  rive::SemanticManager::markBoundaryDirty =====

/* rive::SemanticManager::markBoundaryDirty(unsigned int) */

void __thiscall rive::SemanticManager::markBoundaryDirty(SemanticManager *this,uint param_1)

{
  FUN_004987d0(this + 0x168,param_1,param_1);
  *this = (SemanticManager)((byte)*this | 4);
  return;
}


// ===== 00498aa0  rive::SemanticManager::reconcileBoundsForSubtree =====

/* rive::SemanticManager::reconcileBoundsForSubtree(rive::SemanticNode*) */

void rive::SemanticManager::reconcileBoundsForSubtree(SemanticNode *param_1)

{
  long lVar1;
  long lVar2;
  Artboard *pAVar3;
  ulong uVar4;
  long in_x1;
  Component *pCVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  ushort uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (in_x1 == 0) goto LAB_00498b90;
  if (*(char *)(in_x1 + 0xa0) == '\0') {
    pCVar5 = *(Component **)(in_x1 + 0x90);
    if ((pCVar5 != (Component *)0x0) &&
       (uVar4 = (**(code **)(*(long *)pCVar5 + 0x18))(pCVar5,10), (uVar4 & 1) != 0)) {
      uVar7 = SemanticProvider::semanticBounds(pCVar5);
      goto LAB_00498b24;
    }
  }
  else {
    pAVar3 = *(Artboard **)(in_x1 + 0xb0);
    if (pAVar3 != (Artboard *)0x0) {
      uVar9 = CONCAT44((float)((ulong)*(undefined8 *)(pAVar3 + 0x174) >> 0x20) + 0.0,
                       (float)*(undefined8 *)(pAVar3 + 0x174) + 0.0);
      local_48 = 0;
      uStack_40 = uVar9;
      uVar7 = SemanticProvider::rootTransformAABB(pAVar3,(AABB *)&local_48);
      in_s1 = (undefined4)uVar9;
LAB_00498b24:
      auVar10._4_4_ = in_s1;
      auVar10._0_4_ = uVar7;
      auVar10._8_4_ = in_s2;
      auVar10._12_4_ = in_s3;
      auVar10 = NEON_fcmeq(auVar10,*(undefined1 (*) [16])(in_x1 + 0x7c),4);
      uVar9 = NEON_cmlt(CONCAT26((ushort)(byte)~auVar10[0xc] << 0xf,
                                 CONCAT24((ushort)(byte)~auVar10[8] << 0xf,
                                          CONCAT22((ushort)(byte)~auVar10[4] << 0xf,
                                                   (ushort)(byte)~auVar10[0] << 0xf))),0,2);
      uVar8 = NEON_umaxv(uVar9,2);
      if ((uVar8 & 1) != 0) {
        *(undefined4 *)(in_x1 + 0x7c) = uVar7;
        *(undefined4 *)(in_x1 + 0x80) = in_s1;
        *(undefined4 *)(in_x1 + 0x84) = in_s2;
        *(undefined4 *)(in_x1 + 0x88) = in_s3;
        FUN_00400e34(param_1 + 0x140,*(undefined4 *)(in_x1 + 4),*(undefined4 *)(in_x1 + 4));
      }
    }
  }
  lVar1 = *(long *)(in_x1 + 0x18);
  for (lVar6 = *(long *)(in_x1 + 0x10); lVar6 != lVar1; lVar6 = lVar6 + 8) {
    reconcileBoundsForSubtree(param_1);
  }
LAB_00498b90:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00498bb8  rive::SemanticManager::ensureNodeId =====

/* rive::SemanticManager::ensureNodeId(rive::SemanticNode&) */

void __thiscall rive::SemanticManager::ensureNodeId(SemanticManager *this,SemanticNode *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    if (*(uint *)(this + 0xd0) <= uVar2) {
      *(uint *)(this + 0xd0) = uVar2 + 1;
    }
    return;
  }
  uVar3 = *(ulong *)(this + 0xe0);
  uVar2 = *(uint *)(this + 0xd0);
  if (uVar3 != 0) {
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    while( true ) {
      uVar4 = (ulong)uVar2;
      if ((uVar10 & 0xffffffff) < 2) {
        uVar5 = uVar3 + 0xffffffff & uVar4;
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
      plVar6 = *(long **)(*(long *)(this + 0xd8) + uVar5 * 8);
      if (plVar6 == (long *)0x0) break;
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00498c90;
          uVar7 = plVar6[1];
          if (uVar7 == uVar4) break;
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar5) goto LAB_00498c90;
        }
      } while (*(uint *)(plVar6 + 2) != uVar2);
      uVar2 = uVar2 + 1;
      *(uint *)(this + 0xd0) = uVar2;
    }
  }
LAB_00498c90:
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(this + 0xd0) = uVar2 + 1;
  return;
}


// ===== 00498ca0  rive::SemanticManager::addChild =====

/* rive::SemanticManager::addChild(rive::rcp<rive::SemanticNode>, rive::rcp<rive::SemanticNode>) */

void __thiscall rive::SemanticManager::addChild(SemanticManager *this,long *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  SemanticManager *pSVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  uint local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar13 = *param_3;
  if (lVar13 != 0) {
    uVar6 = *(ulong *)(this + 0xe0);
    uVar1 = *(uint *)(lVar13 + 4);
    uVar7 = (ulong)uVar1;
    if (uVar6 != 0) {
      uVar16 = NEON_cnt(uVar6,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      if (uVar8 < 2) {
        uVar10 = (ulong)((int)uVar6 - 1U & uVar1);
      }
      else {
        uVar10 = uVar7;
        if (uVar6 <= uVar7) {
          uVar10 = 0;
          if (uVar6 != 0) {
            uVar10 = uVar7 / uVar6;
          }
          uVar10 = uVar7 - uVar10 * uVar6;
        }
      }
      plVar11 = *(long **)(*(long *)(this + 0xd8) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar7) {
            if (*(uint *)(plVar11 + 2) == uVar1) {
              if (uVar1 == 0) goto LAB_00498dc4;
              if (plVar11[3] == lVar13) goto LAB_00498d8c;
              *(undefined4 *)(lVar13 + 4) = 0;
              goto LAB_00498dc4;
            }
          }
          else {
            if (uVar8 < 2) {
              uVar12 = uVar12 & uVar6 - 1;
            }
            else if (uVar6 <= uVar12) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar12 / uVar6;
              }
              uVar12 = uVar12 - uVar2 * uVar6;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    if (uVar1 == 0) {
LAB_00498dc4:
      pSVar9 = this + 0xd0;
      uVar7 = (ulong)*(uint *)pSVar9;
      if (uVar6 != 0) {
        uVar16 = NEON_cnt(uVar6,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        while( true ) {
          if (uVar8 < 2) {
            uVar10 = uVar6 + 0xffffffff & uVar7;
          }
          else {
            uVar10 = uVar7;
            if (uVar6 <= uVar7) {
              uVar10 = 0;
              if (uVar6 != 0) {
                uVar10 = uVar7 / uVar6;
              }
              uVar10 = uVar7 - uVar10 * uVar6;
            }
          }
          plVar11 = *(long **)(*(long *)(this + 0xd8) + uVar10 * 8);
          if (plVar11 == (long *)0x0) break;
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_00498e7c;
              uVar12 = plVar11[1];
              if (uVar12 == uVar7) break;
              if (uVar8 < 2) {
                uVar12 = uVar12 & uVar6 - 1;
              }
              else if (uVar6 <= uVar12) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar12 / uVar6;
                }
                uVar12 = uVar12 - uVar2 * uVar6;
              }
              if (uVar12 != uVar10) goto LAB_00498e7c;
            }
          } while (*(int *)(plVar11 + 2) != (int)uVar7);
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
          *(uint *)pSVar9 = uVar1;
        }
      }
LAB_00498e7c:
      *(uint *)pSVar9 = (int)uVar7 + 1;
      *(int *)(lVar13 + 4) = (int)uVar7;
    }
    else {
LAB_00498d8c:
      if (*(uint *)(this + 0xd0) <= uVar1) {
        *(uint *)(this + 0xd0) = uVar1 + 1;
      }
    }
    if (uVar6 != 0) {
      uVar16 = NEON_cnt(uVar6,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      if (uVar8 < 2) {
        uVar10 = (int)uVar6 - 1 & uVar7;
      }
      else {
        uVar10 = uVar7;
        if (uVar6 <= uVar7) {
          uVar10 = 0;
          if (uVar6 != 0) {
            uVar10 = uVar7 / uVar6;
          }
          uVar10 = uVar7 - uVar10 * uVar6;
        }
      }
      plVar11 = *(long **)(*(long *)(this + 0xd8) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar7) {
            if (*(uint *)(plVar11 + 2) == (uint)uVar7) goto LAB_00498f84;
          }
          else {
            if (uVar8 < 2) {
              uVar12 = uVar12 & uVar6 - 1;
            }
            else if (uVar6 <= uVar12) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar12 / uVar6;
              }
              uVar12 = uVar12 - uVar2 * uVar6;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    local_5c = (uint)uVar7;
    lVar13 = FUN_00499150(this + 0xd8,uVar7,&local_5c);
    plVar11 = (long *)(lVar13 + 0x18);
    if (plVar11 != param_3) {
      lVar13 = *param_3;
      if (lVar13 != 0) {
        FUN_00340fb0(1,lVar13);
      }
      lVar14 = *plVar11;
      *plVar11 = lVar13;
      if ((lVar14 != 0) && (iVar4 = FUN_00340fe0(0xffffffff,lVar14), iVar4 == 1)) {
        FUN_0049784c(lVar14);
      }
    }
    lVar13 = *param_3;
LAB_00498f84:
    *(SemanticManager **)(lVar13 + 0x98) = this;
    lVar14 = *param_2;
    if (lVar14 == 0) {
      *(undefined8 *)(lVar13 + 8) = 0;
      plVar11 = *(long **)(this + 0x108);
      if (plVar11 < *(long **)(this + 0x110)) {
        FUN_00340fb0(1,lVar13);
        plVar5 = plVar11 + 1;
        *plVar11 = lVar13;
      }
      else {
        plVar5 = (long *)FUN_00499554(this + 0x100,*param_3);
      }
      *(long **)(this + 0x108) = plVar5;
    }
    else {
      uVar6 = *(ulong *)(this + 0xe0);
      uVar1 = *(uint *)(lVar14 + 4);
      uVar7 = (ulong)uVar1;
      if (uVar6 != 0) {
        uVar16 = NEON_cnt(uVar6,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar8 < 2) {
          uVar10 = (ulong)((int)uVar6 - 1U & uVar1);
        }
        else {
          uVar10 = uVar7;
          if (uVar6 <= uVar7) {
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = uVar7 / uVar6;
            }
            uVar10 = uVar7 - uVar10 * uVar6;
          }
        }
        plVar11 = *(long **)(*(long *)(this + 0xd8) + uVar10 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          do {
            uVar12 = plVar11[1];
            if (uVar12 == uVar7) {
              if (*(uint *)(plVar11 + 2) == uVar1) goto LAB_004990bc;
            }
            else {
              if (uVar8 < 2) {
                uVar12 = uVar12 & uVar6 - 1;
              }
              else if (uVar6 <= uVar12) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar12 / uVar6;
                }
                uVar12 = uVar12 - uVar2 * uVar6;
              }
              if (uVar12 != uVar10) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      local_5c = uVar1;
      lVar13 = FUN_00499150(this + 0xd8,uVar7,&local_5c);
      plVar11 = (long *)(lVar13 + 0x18);
      if (plVar11 != param_2) {
        lVar13 = *param_2;
        if (lVar13 != 0) {
          FUN_00340fb0(1,lVar13);
        }
        lVar14 = *plVar11;
        *plVar11 = lVar13;
        if ((lVar14 != 0) && (iVar4 = FUN_00340fe0(0xffffffff,lVar14), iVar4 == 1)) {
          FUN_0049784c(lVar14);
        }
      }
      lVar13 = *param_3;
      lVar14 = *param_2;
LAB_004990bc:
      *(long *)(lVar13 + 8) = lVar14;
      plVar11 = *(long **)(lVar14 + 0x18);
      if (plVar11 < *(long **)(lVar14 + 0x20)) {
        FUN_00340fb0(1,lVar13);
        *plVar11 = lVar13;
        *(long **)(lVar14 + 0x18) = plVar11 + 1;
      }
      else {
        uVar16 = FUN_00499554(lVar14 + 0x10,*param_3);
        *(undefined8 *)(lVar14 + 0x18) = uVar16;
      }
    }
    *this = (SemanticManager)((byte)*this | 1);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00499150  FUN_00499150 =====

void FUN_00499150(long *param_1,uint param_2,undefined4 *param_3)

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
      unaff_x23 = (ulong)((int)uVar15 - 1U & param_2);
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
          if (*(uint *)(plVar7 + 2) == param_2) {
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
  plVar7 = (long *)operator_new(0x20);
  lVar4 = param_1[3];
  uVar1 = *param_3;
  fVar18 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar14;
  *(undefined4 *)(plVar7 + 2) = uVar1;
  plVar7[3] = 0;
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
LAB_004992c0:
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
LAB_004994f8:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar17 = NEON_cnt(uVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16)) goto LAB_004994f8;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar15) {
        if (uVar8 != 0) goto LAB_004992c0;
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
      unaff_x23 = (ulong)((int)uVar15 - 1U & param_2);
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
    if (*plVar7 == 0) goto LAB_004994d8;
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
LAB_004994d8:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 00499554  FUN_00499554 =====

long * FUN_00499554(ulong *param_1,long param_2)

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
    FUN_00365b34();
LAB_00499720:
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
    if (uVar7 >> 0x3d != 0) goto LAB_00499720;
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
    goto LAB_004996a4;
  }
  uVar5 = (long)plVar6 + (-8 - (long)plVar11);
  if ((uVar5 < 0x78) ||
     (((long *)((long)plVar6 + (-8 - (uVar5 & 0xfffffffffffffff8))) < plVar14 &&
      ((long *)((long)pvVar4 + (lVar15 - (uVar5 & 0xfffffffffffffff8)) + -8) < plVar6)))) {
LAB_00499630:
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
    if (uVar5 != uVar8) goto LAB_00499630;
  }
  plVar11 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  *param_1 = (ulong)plVar14;
  param_1[1] = (ulong)plVar12;
  param_1[2] = (ulong)pvVar1;
  while (plVar6 != plVar11) {
    plVar6 = plVar6 + -1;
    lVar13 = *plVar6;
    if ((lVar13 != 0) && (iVar3 = FUN_00340fe0(0xffffffff,lVar13), iVar3 == 1)) {
      FUN_0049784c(lVar13);
    }
  }
LAB_004996a4:
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  return plVar12;
}


// ===== 00499724  rive::SemanticManager::removeChild =====

/* WARNING: Removing unreachable block (ram,0x004998a4) */
/* WARNING: Removing unreachable block (ram,0x004998b8) */
/* WARNING: Removing unreachable block (ram,0x004998cc) */
/* WARNING: Removing unreachable block (ram,0x00499894) */
/* WARNING: Removing unreachable block (ram,0x004998d8) */
/* WARNING: Removing unreachable block (ram,0x00499a0c) */
/* WARNING: Removing unreachable block (ram,0x00499a20) */
/* WARNING: Removing unreachable block (ram,0x00499a34) */
/* WARNING: Removing unreachable block (ram,0x004999fc) */
/* WARNING: Removing unreachable block (ram,0x00499a40) */
/* rive::SemanticManager::removeChild(rive::rcp<rive::SemanticNode>) */

void __thiscall rive::SemanticManager::removeChild(SemanticManager *this,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  SemanticManager *pSVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  SemanticManager *pSVar12;
  ulong uVar13;
  SemanticManager *pSVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    lVar16 = *(long *)(lVar5 + 8);
    if (lVar16 == 0) {
      plVar17 = *(long **)(this + 0x100);
      plVar19 = *(long **)(this + 0x108);
      if (plVar17 != plVar19) {
LAB_00499788:
        if (*plVar17 != lVar5) goto code_r0x00499794;
        if ((plVar17 != plVar19) && (plVar18 = plVar17 + 1, plVar18 != plVar19)) {
          do {
            lVar5 = *plVar18;
            if (lVar5 != *param_2) {
              *plVar18 = 0;
              lVar16 = *plVar17;
              *plVar17 = lVar5;
              if ((lVar16 != 0) && (iVar4 = FUN_00340fe0(0xffffffff,lVar16), iVar4 == 1)) {
                FUN_0049784c(lVar16);
              }
              plVar17 = plVar17 + 1;
            }
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar19);
          plVar19 = *(long **)(this + 0x108);
        }
        if (plVar17 != plVar19) {
          while (plVar19 != plVar17) {
            plVar19 = plVar19 + -1;
            lVar5 = *plVar19;
            if ((lVar5 != 0) && (iVar4 = FUN_00340fe0(0xffffffff,lVar5), iVar4 == 1)) {
              FUN_0049784c(lVar5);
            }
          }
          *(long **)(this + 0x108) = plVar17;
        }
      }
    }
    else {
      plVar17 = *(long **)(lVar16 + 0x10);
      plVar19 = *(long **)(lVar16 + 0x18);
      if (plVar17 != plVar19) {
LAB_00499760:
        if (*plVar17 != lVar5) goto code_r0x0049976c;
        if ((plVar17 != plVar19) && (plVar18 = plVar17 + 1, plVar18 != plVar19)) {
          do {
            lVar5 = *plVar18;
            if (lVar5 != *param_2) {
              *plVar18 = 0;
              lVar15 = *plVar17;
              *plVar17 = lVar5;
              if ((lVar15 != 0) && (iVar4 = FUN_00340fe0(0xffffffff,lVar15), iVar4 == 1)) {
                FUN_0049784c(lVar15);
              }
              plVar17 = plVar17 + 1;
            }
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar19);
          plVar19 = *(long **)(lVar16 + 0x18);
        }
        if (plVar17 != plVar19) {
          while (plVar19 != plVar17) {
            plVar19 = plVar19 + -1;
            lVar5 = *plVar19;
            if ((lVar5 != 0) && (iVar4 = FUN_00340fe0(0xffffffff,lVar5), iVar4 == 1)) {
              FUN_0049784c(lVar5);
            }
          }
          *(long **)(lVar16 + 0x18) = plVar17;
        }
      }
LAB_00499910:
      *(undefined8 *)(*param_2 + 8) = 0;
    }
LAB_00499918:
    lVar5 = *param_2;
    uVar6 = *(ulong *)(this + 0xe0);
    *(undefined8 *)(lVar5 + 0x98) = 0;
    if (uVar6 != 0) {
      uVar1 = *(uint *)(lVar5 + 4);
      uVar7 = (ulong)uVar1;
      uVar21 = NEON_cnt(uVar6,1);
      uVar20 = NEON_uaddlv(uVar21,1);
      uVar8 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
      if (uVar8 < 2) {
        uVar13 = (ulong)((int)uVar6 - 1U & uVar1);
      }
      else {
        uVar13 = uVar7;
        if (uVar6 <= uVar7) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar7 / uVar6;
          }
          uVar13 = uVar7 - uVar13 * uVar6;
        }
      }
      lVar5 = *(long *)(this + 0xd8);
      puVar9 = *(undefined8 **)(lVar5 + uVar13 * 8);
      if ((puVar9 != (undefined8 *)0x0) &&
         (pSVar14 = (SemanticManager *)*puVar9, pSVar14 != (SemanticManager *)0x0)) {
        uVar10 = uVar6 - 1;
LAB_00499994:
        uVar11 = *(ulong *)(pSVar14 + 8);
        if (uVar11 == uVar7) {
          if (*(uint *)(pSVar14 + 0x10) != uVar1) goto LAB_0049998c;
          if (uVar8 < 2) {
            uVar7 = uVar10 & uVar7;
          }
          else if (uVar6 <= uVar7) {
            uVar13 = 0;
            if (uVar6 != 0) {
              uVar13 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar13 * uVar6;
          }
          pSVar3 = *(SemanticManager **)(lVar5 + uVar7 * 8);
          do {
            pSVar12 = pSVar3;
            pSVar3 = *(SemanticManager **)pSVar12;
          } while (*(SemanticManager **)pSVar12 != pSVar14);
          if (pSVar12 == this + 0xe8) {
LAB_00499ad8:
            if (*(long *)pSVar14 != 0) {
              uVar13 = *(ulong *)(*(long *)pSVar14 + 8);
              if (uVar8 < 2) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar6 <= uVar13) {
                uVar11 = 0;
                if (uVar6 != 0) {
                  uVar11 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar11 * uVar6;
              }
              if (uVar13 == uVar7) goto LAB_00499b10;
            }
            *(undefined8 *)(lVar5 + uVar7 * 8) = 0;
          }
          else {
            uVar13 = *(ulong *)(pSVar12 + 8);
            if (uVar8 < 2) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar6 <= uVar13) {
              uVar11 = 0;
              if (uVar6 != 0) {
                uVar11 = uVar13 / uVar6;
              }
              uVar13 = uVar13 - uVar11 * uVar6;
            }
            if (uVar13 != uVar7) goto LAB_00499ad8;
          }
LAB_00499b10:
          lVar5 = *(long *)pSVar14;
          if (lVar5 != 0) {
            uVar13 = *(ulong *)(lVar5 + 8);
            if (uVar8 < 2) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar6 <= uVar13) {
              uVar8 = 0;
              if (uVar6 != 0) {
                uVar8 = uVar13 / uVar6;
              }
              uVar13 = uVar13 - uVar8 * uVar6;
            }
            if (uVar13 != uVar7) {
              *(SemanticManager **)(*(long *)(this + 0xd8) + uVar13 * 8) = pSVar12;
              lVar5 = *(long *)pSVar14;
            }
          }
          lVar16 = *(long *)(this + 0xf0);
          lVar15 = *(long *)(pSVar14 + 0x18);
          *(long *)pSVar12 = lVar5;
          *(undefined8 *)pSVar14 = 0;
          *(long *)(this + 0xf0) = lVar16 + -1;
          if ((lVar15 != 0) && (iVar4 = FUN_00340fe0(0xffffffff,lVar15), iVar4 == 1)) {
            FUN_0049784c(lVar15);
          }
          operator_delete(pSVar14);
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar10;
          }
          else if (uVar6 <= uVar11) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar11 / uVar6;
            }
            uVar11 = uVar11 - uVar2 * uVar6;
          }
          if (uVar11 == uVar13) goto LAB_0049998c;
        }
      }
    }
LAB_00499b90:
    *this = (SemanticManager)((byte)*this | 1);
  }
  return;
code_r0x0049976c:
  plVar17 = plVar17 + 1;
  if (plVar17 == plVar19) goto LAB_00499910;
  goto LAB_00499760;
code_r0x00499794:
  plVar17 = plVar17 + 1;
  if (plVar17 == plVar19) goto LAB_00499918;
  goto LAB_00499788;
LAB_0049998c:
  pSVar14 = *(SemanticManager **)pSVar14;
  if (pSVar14 == (SemanticManager *)0x0) goto LAB_00499b90;
  goto LAB_00499994;
}


// ===== 00499bb4  rive::SemanticManager::patchBoundsNode =====

/* rive::SemanticManager::patchBoundsNode(rive::SemanticsDiffNode&, rive::SemanticsDiff&) */

void __thiscall
rive::SemanticManager::patchBoundsNode
          (SemanticManager *this,SemanticsDiffNode *param_1,SemanticsDiff *param_2)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined2 uVar18;
  ushort uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar6 = *(ulong *)(this + 0xe0);
  if (uVar6 != 0) {
    uVar3 = *(uint *)param_1;
    uVar15 = (ulong)uVar3;
    uVar20 = NEON_cnt(uVar6,1);
    uVar18 = NEON_uaddlv(uVar20,1);
    uVar12 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar18) & 0xffffffff;
    if (uVar12 < 2) {
      uVar10 = (ulong)((int)uVar6 - 1U & uVar3);
    }
    else {
      uVar10 = uVar15;
      if (uVar6 <= uVar15) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar15 / uVar6;
        }
        uVar10 = uVar15 - uVar10 * uVar6;
      }
    }
    plVar11 = *(long **)(*(long *)(this + 0xd8) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar13 = plVar11[1];
        if (uVar13 == uVar15) {
          if (*(uint *)(plVar11 + 2) == uVar3) {
            pauVar1 = (undefined1 (*) [16])(plVar11[3] + 0x7c);
            uVar23 = *(undefined8 *)(plVar11[3] + 0x84);
            uVar22 = *(undefined8 *)*pauVar1;
            auVar21 = NEON_fcmeq(*(undefined1 (*) [16])(param_1 + 0x5c),*pauVar1,4);
            uVar20 = NEON_cmlt(CONCAT26((ushort)(byte)~auVar21[0xc] << 0xf,
                                        CONCAT24((ushort)(byte)~auVar21[8] << 0xf,
                                                 CONCAT22((ushort)(byte)~auVar21[4] << 0xf,
                                                          (ushort)(byte)~auVar21[0] << 0xf))),0,2);
            uVar19 = NEON_umaxv(uVar20,2);
            if ((uVar19 & 1) == 0) {
              return;
            }
            puVar14 = *(uint **)(param_2 + 0x98);
            puVar16 = *(uint **)(param_2 + 0xa0);
            *(undefined8 *)(param_1 + 100) = uVar23;
            *(undefined8 *)(param_1 + 0x5c) = uVar22;
            if (puVar14 < puVar16) {
              *puVar14 = uVar3;
              puVar16 = puVar14 + 5;
              *(undefined8 *)(puVar14 + 3) = uVar23;
              *(undefined8 *)(puVar14 + 1) = uVar22;
            }
            else {
              puVar17 = *(uint **)(param_2 + 0x90);
              lVar8 = (long)puVar14 - (long)puVar17 >> 2;
              uVar6 = lVar8 * -0x3333333333333333 + 1;
              if (0xccccccccccccccc < uVar6) {
                FUN_00499dcc();
LAB_00499dc8:
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              lVar7 = (long)puVar16 - (long)puVar17 >> 2;
              uVar12 = lVar7 * -0x6666666666666666;
              if (uVar12 < uVar6 || uVar12 - uVar6 == 0) {
                uVar12 = uVar6;
              }
              if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
                uVar12 = 0xccccccccccccccc;
              }
              if (uVar12 == 0) {
                pvVar5 = (void *)0x0;
              }
              else {
                if (0xccccccccccccccc < uVar12) goto LAB_00499dc8;
                pvVar5 = operator_new(uVar12 * 0x14);
              }
              puVar9 = (uint *)((long)pvVar5 + lVar8 * 4);
              *puVar9 = uVar3;
              puVar16 = puVar9 + 5;
              *(undefined8 *)(puVar9 + 3) = uVar23;
              *(undefined8 *)(puVar9 + 1) = uVar22;
              if (puVar14 != puVar17) {
                do {
                  puVar2 = puVar14 + -1;
                  uVar20 = *(undefined8 *)(puVar14 + -5);
                  uVar22 = *(undefined8 *)(puVar14 + -3);
                  puVar14 = puVar14 + -5;
                  puVar9[-1] = *puVar2;
                  *(undefined8 *)(puVar9 + -3) = uVar22;
                  *(undefined8 *)(puVar9 + -5) = uVar20;
                  puVar9 = puVar9 + -5;
                } while (puVar14 != puVar17);
                puVar14 = *(uint **)(param_2 + 0x90);
              }
              *(uint **)(param_2 + 0x90) = puVar9;
              *(uint **)(param_2 + 0x98) = puVar16;
              *(void **)(param_2 + 0xa0) = (void *)((long)pvVar5 + uVar12 * 0x14);
              if (puVar14 != (uint *)0x0) {
                operator_delete(puVar14);
              }
            }
            *(uint **)(param_2 + 0x98) = puVar16;
            return;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar13 = uVar13 & uVar6 - 1;
          }
          else if (uVar6 <= uVar13) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar4 * uVar6;
          }
          if (uVar13 != uVar10) {
            return;
          }
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}


// ===== 00499dcc  FUN_00499dcc =====

void FUN_00499dcc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00499de0  rive::SemanticManager::patchContentNode =====

/* rive::SemanticManager::patchContentNode(rive::SemanticsDiffNode&, rive::SemanticsDiff&) */

void __thiscall
rive::SemanticManager::patchContentNode
          (SemanticManager *this,SemanticsDiffNode *param_1,SemanticsDiff *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  SemanticsDiffNode SVar8;
  basic_string bVar9;
  byte bVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  SemanticsDiffNode *pSVar17;
  ulong uVar18;
  SemanticsDiffNode *pSVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  basic_string *pbVar23;
  long lVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar15 = *(ulong *)(this + 0xe0);
  if (uVar15 == 0) {
    return;
  }
  uVar4 = *(uint *)param_1;
  uVar14 = (ulong)uVar4;
  uVar26 = NEON_cnt(uVar15,1);
  uVar25 = NEON_uaddlv(uVar26,1);
  uVar16 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
  if (uVar16 < 2) {
    uVar18 = (ulong)((int)uVar15 - 1U & uVar4);
  }
  else {
    uVar18 = uVar14;
    if (uVar15 <= uVar14) {
      uVar18 = 0;
      if (uVar15 != 0) {
        uVar18 = uVar14 / uVar15;
      }
      uVar18 = uVar14 - uVar18 * uVar15;
    }
  }
  plVar20 = *(long **)(*(long *)(this + 0xd8) + uVar18 * 8);
  if (plVar20 == (long *)0x0) {
    return;
  }
  plVar20 = (long *)*plVar20;
  if (plVar20 == (long *)0x0) {
    return;
  }
  do {
    uVar22 = plVar20[1];
    if (uVar22 == uVar14) {
      if (*(uint *)(plVar20 + 2) == uVar4) {
        uVar15 = *(ulong *)(this + 0x198);
        if (uVar15 == 0) goto LAB_00499f44;
        uVar26 = NEON_cnt(uVar15,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        uVar16 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
        if (uVar16 < 2) {
          uVar18 = (ulong)((int)uVar15 - 1U & uVar4);
        }
        else {
          uVar18 = uVar14;
          if (uVar15 <= uVar14) {
            uVar18 = 0;
            if (uVar15 != 0) {
              uVar18 = uVar14 / uVar15;
            }
            uVar18 = uVar14 - uVar18 * uVar15;
          }
        }
        plVar21 = *(long **)(*(long *)(this + 400) + uVar18 * 8);
        if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
        goto LAB_00499f44;
        break;
      }
    }
    else {
      if (uVar16 < 2) {
        uVar22 = uVar22 & uVar15 - 1;
      }
      else if (uVar15 <= uVar22) {
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar22 / uVar15;
        }
        uVar22 = uVar22 - uVar11 * uVar15;
      }
      if (uVar22 != uVar18) {
        return;
      }
    }
    plVar20 = (long *)*plVar20;
    if (plVar20 == (long *)0x0) {
      return;
    }
  } while( true );
  do {
    uVar22 = plVar21[1];
    if (uVar22 == uVar14) {
      if (*(uint *)(plVar21 + 2) == uVar4) {
        lVar24 = plVar20[3];
        pbVar23 = (basic_string *)(plVar21 + 3);
        goto LAB_00499f4c;
      }
    }
    else {
      if (uVar16 < 2) {
        uVar22 = uVar22 & uVar15 - 1;
      }
      else if (uVar15 <= uVar22) {
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar22 / uVar15;
        }
        uVar22 = uVar22 - uVar11 * uVar15;
      }
      if (uVar22 != uVar18) break;
    }
    plVar21 = (long *)*plVar21;
  } while (plVar21 != (long *)0x0);
LAB_00499f44:
  lVar24 = plVar20[3];
  pbVar23 = (basic_string *)(lVar24 + 0x30);
LAB_00499f4c:
  iVar5 = *(int *)(lVar24 + 0x28);
  if (*(int *)(param_1 + 4) == iVar5) {
    SVar8 = param_1[8];
    bVar9 = *pbVar23;
    uVar15 = (ulong)((byte)SVar8 >> 1);
    sVar1 = uVar15;
    if (((byte)SVar8 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x10);
    }
    sVar2 = (ulong)((byte)bVar9 >> 1);
    if (((byte)bVar9 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar23 + 8);
    }
    if (sVar1 == sVar2) {
      pSVar19 = *(SemanticsDiffNode **)(pbVar23 + 0x10);
      if (((byte)bVar9 & 1) == 0) {
        pSVar19 = (SemanticsDiffNode *)(pbVar23 + 1);
      }
      if (((byte)SVar8 & 1) == 0) {
        if (1 < (byte)SVar8) {
          pSVar17 = param_1 + 9;
          do {
            if (*pSVar17 != *pSVar19) goto LAB_0049a134;
            uVar15 = uVar15 - 1;
            pSVar17 = pSVar17 + 1;
            pSVar19 = pSVar19 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        iVar12 = memcmp(*(void **)(param_1 + 0x18),pSVar19,*(size_t *)(param_1 + 0x10));
        if (iVar12 != 0) goto LAB_0049a134;
      }
      SVar8 = param_1[0x20];
      bVar10 = *(byte *)(lVar24 + 0x48);
      uVar15 = (ulong)((byte)SVar8 >> 1);
      sVar1 = uVar15;
      if (((byte)SVar8 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x28);
      }
      sVar2 = (ulong)(bVar10 >> 1);
      if ((bVar10 & 1) != 0) {
        sVar2 = *(size_t *)(lVar24 + 0x50);
      }
      if (sVar1 == sVar2) {
        pSVar19 = (SemanticsDiffNode *)(lVar24 + 0x49);
        if ((bVar10 & 1) != 0) {
          pSVar19 = *(SemanticsDiffNode **)(lVar24 + 0x58);
        }
        if (((byte)SVar8 & 1) == 0) {
          if (1 < (byte)SVar8) {
            pSVar17 = param_1 + 0x21;
            do {
              if (*pSVar17 != *pSVar19) goto LAB_0049a134;
              uVar15 = uVar15 - 1;
              pSVar17 = pSVar17 + 1;
              pSVar19 = pSVar19 + 1;
            } while (uVar15 != 0);
          }
        }
        else {
          iVar12 = memcmp(*(void **)(param_1 + 0x30),pSVar19,*(size_t *)(param_1 + 0x28));
          if (iVar12 != 0) goto LAB_0049a134;
        }
        SVar8 = param_1[0x38];
        bVar10 = *(byte *)(lVar24 + 0x60);
        uVar15 = (ulong)((byte)SVar8 >> 1);
        sVar1 = uVar15;
        if (((byte)SVar8 & 1) != 0) {
          sVar1 = *(size_t *)(param_1 + 0x40);
        }
        sVar2 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar2 = *(size_t *)(lVar24 + 0x68);
        }
        if (sVar1 == sVar2) {
          pSVar19 = (SemanticsDiffNode *)(lVar24 + 0x61);
          if ((bVar10 & 1) != 0) {
            pSVar19 = *(SemanticsDiffNode **)(lVar24 + 0x70);
          }
          if (((byte)SVar8 & 1) == 0) {
            if (1 < (byte)SVar8) {
              pSVar17 = param_1 + 0x39;
              do {
                if (*pSVar17 != *pSVar19) goto LAB_0049a134;
                uVar15 = uVar15 - 1;
                pSVar17 = pSVar17 + 1;
                pSVar19 = pSVar19 + 1;
              } while (uVar15 != 0);
            }
          }
          else {
            iVar12 = memcmp(*(void **)(param_1 + 0x48),pSVar19,*(size_t *)(param_1 + 0x40));
            if (iVar12 != 0) goto LAB_0049a134;
          }
          if (((*(int *)(param_1 + 0x50) == *(int *)(lVar24 + 0x2c)) &&
              (*(int *)(param_1 + 0x54) == *(int *)(lVar24 + 0x8c))) &&
             (*(int *)(param_1 + 0x58) == *(int *)(lVar24 + 0x78))) {
            return;
          }
        }
      }
    }
  }
LAB_0049a134:
  *(int *)(param_1 + 4) = iVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_1 + 8),pbVar23);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_1 + 0x20),(basic_string *)(plVar20[3] + 0x48));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_1 + 0x38),(basic_string *)(plVar20[3] + 0x60));
  lVar24 = plVar20[3];
  puVar3 = *(undefined8 **)(param_2 + 0x80);
  puVar13 = *(undefined8 **)(param_2 + 0x88);
  uVar6 = *(undefined4 *)(lVar24 + 0x8c);
  uVar7 = *(undefined4 *)(lVar24 + 0x78);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar24 + 0x2c);
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  if (puVar3 < puVar13) {
    *puVar3 = *(undefined8 *)param_1;
    if (((byte)param_1[8] & 1) == 0) {
      uVar27 = *(undefined8 *)(param_1 + 0x10);
      uVar26 = *(undefined8 *)(param_1 + 8);
      puVar3[3] = *(undefined8 *)(param_1 + 0x18);
      puVar3[2] = uVar27;
      puVar3[1] = uVar26;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar3 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
    }
    if (((byte)param_1[0x20] & 1) == 0) {
      uVar27 = *(undefined8 *)(param_1 + 0x28);
      uVar26 = *(undefined8 *)(param_1 + 0x20);
      puVar3[6] = *(undefined8 *)(param_1 + 0x30);
      puVar3[5] = uVar27;
      puVar3[4] = uVar26;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar3 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
    }
    if (((byte)param_1[0x38] & 1) == 0) {
      uVar27 = *(undefined8 *)(param_1 + 0x40);
      uVar26 = *(undefined8 *)(param_1 + 0x38);
      puVar3[9] = *(undefined8 *)(param_1 + 0x48);
      puVar3[8] = uVar27;
      puVar3[7] = uVar26;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar3 + 7),*(char **)(param_1 + 0x48),*(ulong *)(param_1 + 0x40));
    }
    uVar29 = *(undefined8 *)(param_1 + 0x58);
    uVar28 = *(undefined8 *)(param_1 + 0x50);
    uVar27 = *(undefined8 *)(param_1 + 0x68);
    uVar26 = *(undefined8 *)(param_1 + 0x60);
    puVar13 = puVar3 + 0xf;
    *(undefined4 *)(puVar3 + 0xe) = *(undefined4 *)(param_1 + 0x70);
    puVar3[0xb] = uVar29;
    puVar3[10] = uVar28;
    puVar3[0xd] = uVar27;
    puVar3[0xc] = uVar26;
  }
  else {
    puVar13 = (undefined8 *)FUN_0049a25c(param_2 + 0x78);
  }
  *(undefined8 **)(param_2 + 0x80) = puVar13;
  return;
}


// ===== 0049a25c  FUN_0049a25c =====

undefined8 * FUN_0049a25c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar7 * -0x1111111111111111 + 1;
  if (uVar1 < 0x222222222222223) {
    lVar10 = param_1[2] - *param_1 >> 3;
    uVar11 = lVar10 * -0x2222222222222222;
    if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
      uVar11 = uVar1;
    }
    if (0x111111111111110 < (ulong)(lVar10 * -0x1111111111111111)) {
      uVar11 = 0x222222222222222;
    }
    if (uVar11 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0x222222222222222 < uVar11) goto LAB_0049a4d8;
      pvVar6 = operator_new(uVar11 * 0x78);
    }
    puVar14 = (undefined8 *)((long)pvVar6 + lVar7 * 8);
    bVar5 = *(byte *)(param_2 + 1);
    *puVar14 = *param_2;
    if ((bVar5 & 1) == 0) {
      uVar16 = param_2[1];
      uVar8 = param_2[3];
      puVar14[2] = param_2[2];
      puVar14[1] = uVar16;
      puVar14[3] = uVar8;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar14 + 1),(char *)param_2[3],param_2[2]);
    }
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      uVar16 = param_2[4];
      uVar8 = param_2[6];
      *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x28) = param_2[5];
      *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x20) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x30) = uVar8;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 ((long)pvVar6 + lVar7 * 8 + 0x20),(char *)param_2[6],param_2[5]);
    }
    if ((*(byte *)(param_2 + 7) & 1) == 0) {
      uVar16 = param_2[7];
      uVar8 = param_2[9];
      *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x40) = param_2[8];
      *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x38) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x48) = uVar8;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 ((long)pvVar6 + lVar7 * 8 + 0x38),(char *)param_2[9],param_2[8]);
    }
    uVar8 = param_2[10];
    uVar17 = param_2[0xd];
    uVar16 = param_2[0xc];
    uVar4 = *(undefined4 *)(param_2 + 0xe);
    puVar2 = puVar14 + 0xf;
    pvVar9 = (void *)((long)pvVar6 + uVar11 * 0x78);
    puVar3 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x58) = param_2[0xb];
    *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x50) = uVar8;
    *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x68) = uVar17;
    *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x60) = uVar16;
    *(undefined4 *)((long)pvVar6 + lVar7 * 8 + 0x70) = uVar4;
    if (puVar13 == puVar3) {
      *param_1 = (long)puVar14;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar9;
    }
    else {
      do {
        puVar12 = puVar13 + -0xf;
        puVar15 = puVar14 + -0xf;
        *puVar15 = *puVar12;
        uVar16 = puVar13[-0xd];
        uVar8 = puVar13[-0xe];
        puVar14[-0xc] = puVar13[-0xc];
        puVar14[-0xd] = uVar16;
        puVar14[-0xe] = uVar8;
        uVar16 = puVar13[-10];
        uVar8 = puVar13[-0xb];
        puVar13[-0xd] = 0;
        puVar13[-0xc] = 0;
        puVar13[-0xe] = 0;
        puVar14[-9] = puVar13[-9];
        puVar14[-10] = uVar16;
        puVar14[-0xb] = uVar8;
        uVar16 = puVar13[-7];
        uVar8 = puVar13[-8];
        puVar13[-10] = 0;
        puVar13[-9] = 0;
        puVar13[-0xb] = 0;
        puVar14[-6] = puVar13[-6];
        puVar14[-7] = uVar16;
        puVar14[-8] = uVar8;
        uVar18 = puVar13[-4];
        uVar17 = puVar13[-5];
        uVar16 = puVar13[-2];
        uVar8 = puVar13[-3];
        puVar13[-7] = 0;
        puVar13[-6] = 0;
        puVar13[-8] = 0;
        *(undefined4 *)(puVar14 + -1) = *(undefined4 *)(puVar13 + -1);
        puVar14[-4] = uVar18;
        puVar14[-5] = uVar17;
        puVar14[-2] = uVar16;
        puVar14[-3] = uVar8;
        puVar13 = puVar12;
        puVar14 = puVar15;
      } while (puVar12 != puVar3);
      puVar13 = (undefined8 *)*param_1;
      puVar14 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar15;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar9;
      for (; puVar14 != puVar13; puVar14 = puVar14 + -0xf) {
        if ((*(byte *)(puVar14 + -8) & 1) == 0) {
          if ((*(byte *)(puVar14 + -0xb) & 1) == 0) goto LAB_0049a46c;
LAB_0049a488:
          operator_delete((void *)puVar14[-9]);
          bVar5 = *(byte *)(puVar14 + -0xe);
        }
        else {
          operator_delete((void *)puVar14[-6]);
          if ((*(byte *)(puVar14 + -0xb) & 1) != 0) goto LAB_0049a488;
LAB_0049a46c:
          bVar5 = *(byte *)(puVar14 + -0xe);
        }
        if ((bVar5 & 1) != 0) {
          operator_delete((void *)puVar14[-0xc]);
        }
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      operator_delete(puVar13);
    }
    return puVar2;
  }
  FUN_0049a4dc();
LAB_0049a4d8:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 0049a4dc  FUN_0049a4dc =====

void FUN_0049a4dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0049a4f0  rive::SemanticManager::refresh =====

/* WARNING: Type propagation algorithm not settling */
/* rive::SemanticManager::refresh() */

void rive::SemanticManager::refresh(void)

{
  bool bVar1;
  bool bVar2;
  SemanticsDiffNode *pSVar3;
  SemanticNode SVar4;
  byte bVar5;
  SemanticsDiffNode SVar6;
  ulong uVar7;
  uint *puVar8;
  SemanticNode **ppSVar9;
  SemanticNode **ppSVar10;
  undefined8 **ppuVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  SemanticNode *in_x0;
  SemanticNode *in_x2;
  SemanticNode **in_x3;
  long lVar15;
  ulong uVar16;
  SemanticNode *pSVar17;
  SemanticNode **ppSVar18;
  SemanticNode *pSVar19;
  long lVar20;
  SemanticNode **ppSVar21;
  undefined8 *puVar22;
  long *plVar23;
  uint uVar24;
  ulong uVar25;
  SemanticsDiffNode *pSVar26;
  ulong uVar27;
  long *plVar28;
  SemanticNode *pSVar29;
  bool bVar30;
  SemanticsDiffNode *pSVar31;
  long lVar32;
  uint *puVar33;
  uint *puVar34;
  void *pvVar35;
  ulong uVar36;
  ulong uVar37;
  uint *puVar38;
  uint *puVar39;
  SemanticNode *pSVar40;
  bool bVar41;
  long *plVar42;
  void *pvVar43;
  void *pvVar44;
  undefined8 *puVar45;
  uint *puVar46;
  long *plVar47;
  SemanticNode **ppSVar48;
  SemanticNode **unaff_x22;
  SemanticsDiffNode *pSVar49;
  long *plVar50;
  SemanticNode **ppSVar51;
  ulong unaff_x25;
  SemanticsDiffNode *pSVar52;
  long *unaff_x26;
  uint *puVar53;
  ulong unaff_x27;
  uint *puVar54;
  ulong uVar55;
  long lVar56;
  undefined2 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  uint uVar67;
  uint uVar68;
  undefined1 auVar69 [16];
  ulong uStack_328;
  ulong uStack_320;
  void *pvStack_318;
  ulong uStack_310;
  ulong uStack_308;
  void *pvStack_300;
  long lStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  ulong uStack_2e0;
  long *plStack_2d0;
  SemanticsDiffNode *pSStack_2c8;
  SemanticNode **ppSStack_2c0;
  SemanticsDiffNode *pSStack_2b8;
  SemanticNode **ppSStack_2b0;
  SemanticNode **ppSStack_2a8;
  SemanticsDiffNode *pSStack_2a0;
  undefined8 *local_288;
  uint local_27c;
  long local_278;
  SemanticNode *local_270;
  SemanticsDiffNode *pSStack_268;
  undefined8 local_260;
  uint local_258 [2];
  void *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  uint *local_238;
  uint *local_230;
  uint *local_228;
  SemanticNode *local_220;
  ulong uStack_218;
  undefined8 local_210;
  uint *puStack_208;
  uint *local_200;
  uint *local_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  uint *puStack_1c0;
  uint *local_1b8;
  uint *puStack_1b0;
  undefined8 *local_1a8;
  undefined8 *puStack_1a0;
  undefined8 *local_198;
  SemanticNode **ppSStack_190;
  SemanticNode **local_188;
  SemanticNode **ppSStack_180;
  void *local_170;
  undefined8 uStack_168;
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  void *local_140;
  void *local_138;
  undefined8 *local_130;
  long local_128;
  void *local_118;
  void *local_110;
  undefined8 *puStack_108;
  long local_100;
  void *local_f0;
  ulong uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 **local_c0;
  ulong uStack_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar32 = tpidr_el0;
  local_98 = *(long *)(lVar32 + 0x28);
  SVar4 = *in_x0;
  pSVar49 = (SemanticsDiffNode *)(ulong)(byte)SVar4;
  uVar24 = (byte)SVar4 >> 2 & 1;
  if (*(long *)(in_x0 + 0x180) != 0) {
    plVar42 = *(long **)(in_x0 + 0x178);
    if (plVar42 == (long *)0x0) {
LAB_0049a624:
      lVar15 = *(long *)(in_x0 + 0x170);
      *(undefined8 *)(in_x0 + 0x178) = 0;
      if (lVar15 != 0) {
        lVar20 = 0;
        do {
          *(undefined8 *)(*(long *)(in_x0 + 0x168) + lVar20 * 8) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar15 != lVar20);
      }
      *(undefined8 *)(in_x0 + 0x180) = 0;
    }
    else {
      do {
        uVar55 = *(ulong *)(in_x0 + 0xe0);
        if (uVar55 != 0) {
          uVar67 = *(uint *)(plVar42 + 2);
          uVar37 = (ulong)uVar67;
          uVar58 = NEON_cnt(uVar55,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar16 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar16 < 2) {
            uVar25 = (ulong)((int)uVar55 - 1U & uVar67);
          }
          else {
            uVar25 = uVar37;
            if (uVar55 <= uVar37) {
              uVar25 = 0;
              if (uVar55 != 0) {
                uVar25 = uVar37 / uVar55;
              }
              uVar25 = uVar37 - uVar25 * uVar55;
            }
          }
          plVar47 = *(long **)(*(long *)(in_x0 + 0xd8) + uVar25 * 8);
          if ((plVar47 != (long *)0x0) && (plVar47 = (long *)*plVar47, plVar47 != (long *)0x0)) {
            do {
              uVar27 = plVar47[1];
              if (uVar27 == uVar37) {
                if (*(uint *)(plVar47 + 2) == uVar67) {
                  reconcileBoundsForSubtree(in_x0);
                  break;
                }
              }
              else {
                if (uVar16 < 2) {
                  uVar27 = uVar27 & uVar55 - 1;
                }
                else if (uVar55 <= uVar27) {
                  uVar36 = 0;
                  if (uVar55 != 0) {
                    uVar36 = uVar27 / uVar55;
                  }
                  uVar27 = uVar27 - uVar36 * uVar55;
                }
                if (uVar27 != uVar25) break;
              }
              plVar47 = (long *)*plVar47;
            } while (plVar47 != (long *)0x0);
          }
        }
        plVar42 = (long *)*plVar42;
      } while (plVar42 != (long *)0x0);
      if (*(long *)(in_x0 + 0x180) != 0) {
        puVar22 = (undefined8 *)*(void **)(in_x0 + 0x178);
        while (puVar22 != (undefined8 *)0x0) {
          pvVar43 = (void *)*puVar22;
          operator_delete(puVar22);
          puVar22 = (undefined8 *)pvVar43;
        }
        goto LAB_0049a624;
      }
    }
    if (*(long *)(in_x0 + 0x158) != 0) {
      uVar24 = 1;
    }
  }
  ppSVar51 = (SemanticNode **)(ulong)uVar24;
  if ((((byte)SVar4 & 3) == 0) && (uVar24 == 0)) goto LAB_0049c384;
  bVar41 = false;
  local_278 = lVar32;
  if ((((byte)SVar4 & 1) == 0) && (uVar24 == 1)) {
    if (*(long *)(in_x0 + 0xb0) != *(long *)(in_x0 + 0xb8)) {
      unaff_x26 = *(long **)(in_x0 + 0x150);
      local_200 = (uint *)CONCAT44(local_200._4_4_,0x3f800000);
      uStack_218 = 0;
      local_220 = (SemanticNode *)0x0;
      puStack_208 = (uint *)0x0;
      local_210 = (long *)0x0;
      if (unaff_x26 != (long *)0x0) {
        uVar55 = 0;
        puVar46 = (uint *)0x0;
        local_288 = &local_210;
        local_27c = 0;
LAB_0049a6d0:
        uVar16 = *(ulong *)(in_x0 + 0xe0);
        if (uVar16 != 0) {
          uVar67 = *(uint *)(unaff_x26 + 2);
          uVar25 = (ulong)uVar67;
          uVar58 = NEON_cnt(uVar16,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar37 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar37 < 2) {
            uVar27 = (ulong)((int)uVar16 - 1U & uVar67);
          }
          else {
            uVar27 = uVar25;
            if (uVar16 <= uVar25) {
              uVar27 = 0;
              if (uVar16 != 0) {
                uVar27 = uVar25 / uVar16;
              }
              uVar27 = uVar25 - uVar27 * uVar16;
            }
          }
          plVar42 = *(long **)(*(long *)(in_x0 + 0xd8) + uVar27 * 8);
          if ((plVar42 != (long *)0x0) && (plVar42 = (long *)*plVar42, plVar42 != (long *)0x0)) {
            do {
              uVar36 = plVar42[1];
              if (uVar36 == uVar25) {
                if (*(uint *)(plVar42 + 2) == uVar67) {
                  unaff_x22 = *(SemanticNode ***)(plVar42[3] + 8);
                  if (unaff_x22 != (SemanticNode **)0x0) {
                    uVar16 = ((ulong)(uint)((int)unaff_x22 << 3) + 8 ^ (ulong)unaff_x22 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar16 = ((ulong)unaff_x22 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) *
                             -0x622015f714c7d297;
                    unaff_x27 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
                    if (uVar55 == 0) goto LAB_0049a860;
                    uVar58 = NEON_cnt(uVar55,1);
                    uVar57 = NEON_uaddlv(uVar58,1);
                    uVar16 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
                    if (uVar16 < 2) {
                      unaff_x25 = unaff_x27 & uVar55 - 1;
                    }
                    else {
                      unaff_x25 = unaff_x27;
                      if (uVar55 <= unaff_x27) {
                        uVar37 = 0;
                        if (uVar55 != 0) {
                          uVar37 = unaff_x27 / uVar55;
                        }
                        unaff_x25 = unaff_x27 - uVar37 * uVar55;
                      }
                    }
                    if ((*(long **)(local_220 + unaff_x25 * 8) == (long *)0x0) ||
                       (plVar42 = (long *)**(long **)(local_220 + unaff_x25 * 8),
                       plVar42 == (long *)0x0)) goto LAB_0049a860;
                    goto LAB_0049a82c;
                  }
                  local_27c = 1;
                  break;
                }
              }
              else {
                if (uVar37 < 2) {
                  uVar36 = uVar36 & uVar16 - 1;
                }
                else if (uVar16 <= uVar36) {
                  uVar7 = 0;
                  if (uVar16 != 0) {
                    uVar7 = uVar36 / uVar16;
                  }
                  uVar36 = uVar36 - uVar7 * uVar16;
                }
                if (uVar36 != uVar27) break;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        goto LAB_0049a6c8;
      }
    }
    bVar41 = false;
  }
  goto LAB_0049ad14;
LAB_0049a82c:
  do {
    uVar37 = plVar42[1];
    if (uVar37 == unaff_x27) {
      if ((SemanticNode **)plVar42[2] == unaff_x22) goto LAB_0049a6c8;
    }
    else {
      if (uVar16 < 2) {
        uVar37 = uVar37 & uVar55 - 1;
      }
      else if (uVar55 <= uVar37) {
        uVar25 = 0;
        if (uVar55 != 0) {
          uVar25 = uVar37 / uVar55;
        }
        uVar37 = uVar37 - uVar25 * uVar55;
      }
      if (uVar37 != unaff_x25) break;
    }
    plVar42 = (long *)*plVar42;
  } while (plVar42 != (long *)0x0);
LAB_0049a860:
  plVar42 = (long *)operator_new(0x18);
  *plVar42 = 0;
  plVar42[1] = unaff_x27;
  plVar42[2] = (long)unaff_x22;
  if ((uVar55 == 0) || (local_200._0_4_ * (float)uVar55 < (float)((long)puVar46 + 1))) {
    if (uVar55 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar55 & uVar55 - 1) != 0);
    }
    uVar16 = uVar16 | uVar55 << 1;
    uVar37 = (ulong)((float)((long)puVar46 + 1) / local_200._0_4_);
    if (uVar16 <= uVar37) {
      uVar16 = uVar37;
    }
    uVar37 = uVar55;
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      uVar16 = std::__ndk1::__next_prime(uVar16);
      uVar37 = uStack_218;
    }
    if (uVar37 < uVar16) {
LAB_0049a8f8:
      if (uVar16 >> 0x3d != 0) goto LAB_0049c66c;
      pSVar17 = (SemanticNode *)operator_new(uVar16 << 3);
      pSVar19 = local_220;
      bVar41 = local_220 != (SemanticNode *)0x0;
      local_220 = pSVar17;
      if (bVar41) {
        operator_delete(pSVar19);
      }
      uVar55 = 0;
      do {
        *(undefined8 *)(local_220 + uVar55 * 8) = 0;
        uVar55 = uVar55 + 1;
      } while (uVar16 != uVar55);
      uVar55 = uVar16;
      uStack_218 = uVar16;
      if (local_210 != (long *)0x0) {
        uVar37 = local_210[1];
        uVar58 = NEON_cnt(uVar16,1);
        uVar57 = NEON_uaddlv(uVar58,1);
        uVar25 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
        if (uVar25 < 2) {
          uVar37 = uVar37 & uVar16 - 1;
        }
        else if (uVar16 <= uVar37) {
          uVar27 = 0;
          if (uVar16 != 0) {
            uVar27 = uVar37 / uVar16;
          }
          uVar37 = uVar37 - uVar27 * uVar16;
        }
        *(undefined8 **)(local_220 + uVar37 * 8) = local_288;
        plVar47 = (long *)*local_210;
        if (plVar47 != (long *)0x0) {
          plVar50 = local_210;
          do {
            uVar27 = plVar47[1];
            if (uVar25 < 2) {
              uVar27 = uVar27 & uVar16 - 1;
            }
            else if (uVar16 <= uVar27) {
              uVar36 = 0;
              if (uVar16 != 0) {
                uVar36 = uVar27 / uVar16;
              }
              uVar27 = uVar27 - uVar36 * uVar16;
            }
            if (uVar27 != uVar37) {
              if (*(long *)(local_220 + uVar27 * 8) == 0) {
                *(long **)(local_220 + uVar27 * 8) = plVar50;
                uVar37 = uVar27;
              }
              else {
                *plVar50 = *plVar47;
                *plVar47 = **(long **)(local_220 + uVar27 * 8);
                **(undefined8 **)(local_220 + uVar27 * 8) = plVar47;
                plVar47 = plVar50;
              }
            }
            plVar50 = plVar47;
            plVar47 = (long *)*plVar50;
          } while (plVar47 != (long *)0x0);
        }
      }
    }
    else {
      uVar55 = uVar37;
      if (uVar16 < uVar37) {
        uVar55 = (ulong)((float)puStack_208 / local_200._0_4_);
        if (uVar37 < 3) {
LAB_0049ab18:
          uVar55 = std::__ndk1::__next_prime(uVar55);
        }
        else {
          uVar58 = NEON_cnt(uVar37,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57)) goto LAB_0049ab18;
          if (1 < uVar55) {
            uVar55 = 1L << (-LZCOUNT(uVar55 - 1) & 0x3fU);
          }
        }
        pSVar19 = local_220;
        if (uVar16 <= uVar55) {
          uVar16 = uVar55;
        }
        uVar55 = uStack_218;
        if (uVar16 < uVar37) {
          if (uVar16 != 0) goto LAB_0049a8f8;
          local_220 = (SemanticNode *)0x0;
          if (pSVar19 != (SemanticNode *)0x0) {
            operator_delete(pSVar19);
          }
          uStack_218 = 0;
          uVar55 = 0;
        }
      }
    }
    if ((uVar55 & uVar55 - 1) == 0) {
      unaff_x25 = uVar55 - 1 & unaff_x27;
    }
    else {
      unaff_x25 = unaff_x27;
      if (uVar55 <= unaff_x27) {
        uVar16 = 0;
        if (uVar55 != 0) {
          uVar16 = unaff_x27 / uVar55;
        }
        unaff_x25 = unaff_x27 - uVar16 * uVar55;
      }
    }
  }
  pSVar19 = *(SemanticNode **)(local_220 + unaff_x25 * 8);
  if (pSVar19 == (SemanticNode *)0x0) {
    *plVar42 = (long)local_210;
    *(undefined8 **)(local_220 + unaff_x25 * 8) = local_288;
    local_210 = plVar42;
    if (*plVar42 == 0) goto LAB_0049ab08;
    uVar16 = *(ulong *)(*plVar42 + 8);
    if ((uVar55 & uVar55 - 1) == 0) {
      uVar16 = uVar16 & uVar55 - 1;
    }
    else if (uVar55 <= uVar16) {
      uVar37 = 0;
      if (uVar55 != 0) {
        uVar37 = uVar16 / uVar55;
      }
      uVar16 = uVar16 - uVar37 * uVar55;
    }
    pSVar19 = local_220 + uVar16 * 8;
  }
  else {
    *plVar42 = *(long *)pSVar19;
  }
  *(long **)pSVar19 = plVar42;
LAB_0049ab08:
  puVar46 = (uint *)((long)puStack_208 + 1);
  puStack_208 = puVar46;
LAB_0049a6c8:
  unaff_x26 = (long *)*unaff_x26;
  if (unaff_x26 == (long *)0x0) goto LAB_0049ab54;
  goto LAB_0049a6d0;
  while( true ) {
    pSVar17 = pSVar17 + -1;
    pSVar29 = pSVar29 + 1;
    pSVar19 = pSVar19 + 1;
    if (pSVar17 == (SemanticNode *)0x0) break;
LAB_0049b578:
    if (*pSVar29 != *pSVar19) goto LAB_0049b5c8;
  }
LAB_0049b5a8:
  if ((*(uint *)(lVar32 + 0x50) != *(uint *)(pSVar31 + 0x50)) ||
     (*(uint *)(lVar32 + 0x54) != *(uint *)(pSVar31 + 0x54))) {
LAB_0049b5c8:
    puVar22 = puStack_1a0;
    if (puStack_1a0 < local_198) {
      *puStack_1a0 = *(SemanticNode **)pSVar31;
      if (((byte)pSVar31[8] & 1) == 0) {
        pSVar17 = *(SemanticNode **)(pSVar31 + 0x10);
        pSVar19 = *(SemanticNode **)(pSVar31 + 8);
        puStack_1a0[3] = *(SemanticNode **)(pSVar31 + 0x18);
        puStack_1a0[2] = pSVar17;
        *(SemanticNode **)(puStack_1a0 + 1) = pSVar19;
      }
      else {
        in_x2 = *(SemanticNode **)(pSVar31 + 0x10);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(puStack_1a0 + 1),(char *)*(SemanticNode **)(pSVar31 + 0x18),(ulong)in_x2);
      }
      if (((byte)pSVar31[0x20] & 1) == 0) {
        pSVar17 = *(SemanticNode **)(pSVar31 + 0x28);
        pSVar19 = *(SemanticNode **)(pSVar31 + 0x20);
        puVar22[6] = *(SemanticNode **)(pSVar31 + 0x30);
        puVar22[5] = pSVar17;
        puVar22[4] = pSVar19;
      }
      else {
        in_x2 = *(SemanticNode **)(pSVar31 + 0x28);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(puVar22 + 4),(char *)*(SemanticNode **)(pSVar31 + 0x30),(ulong)in_x2);
      }
      if (((byte)pSVar31[0x38] & 1) == 0) {
        pSVar17 = *(SemanticNode **)(pSVar31 + 0x40);
        pSVar19 = *(SemanticNode **)(pSVar31 + 0x38);
        puVar22[9] = *(SemanticNode **)(pSVar31 + 0x48);
        puVar22[8] = pSVar17;
        puVar22[7] = pSVar19;
      }
      else {
        in_x2 = *(SemanticNode **)(pSVar31 + 0x40);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(puVar22 + 7),(char *)*(SemanticNode **)(pSVar31 + 0x48),(ulong)in_x2);
      }
      pSVar40 = *(SemanticNode **)(pSVar31 + 0x58);
      pSVar29 = *(SemanticNode **)(pSVar31 + 0x50);
      pSVar17 = *(SemanticNode **)(pSVar31 + 0x68);
      pSVar19 = *(SemanticNode **)(pSVar31 + 0x60);
      puStack_1a0 = puVar22 + 0xf;
      *(uint *)(puVar22 + 0xe) = *(uint *)(pSVar31 + 0x70);
      puVar22[0xb] = pSVar40;
      puVar22[10] = pSVar29;
      puVar22[0xd] = pSVar17;
      puVar22[0xc] = pSVar19;
    }
    else {
      puStack_1a0 = (undefined8 *)FUN_0049a25c(&local_1a8,pSVar31);
    }
  }
  ppSVar48 = local_188;
  ppSVar10 = ppSStack_190;
  fVar65 = *(float *)(pSVar31 + 0x5c);
  if (*(float *)(lVar32 + 0x5c) == fVar65) {
    fVar66 = *(float *)(pSVar31 + 0x60);
    if (((*(float *)(lVar32 + 0x60) == fVar66) &&
        (*(float *)(lVar32 + 100) == *(float *)(pSVar31 + 100))) &&
       (*(float *)(lVar32 + 0x68) == *(float *)(pSVar31 + 0x68))) goto LAB_0049b2cc;
  }
  else {
    fVar66 = *(float *)(pSVar31 + 0x60);
  }
  uVar24 = *(uint *)pSVar31;
  unaff_x26 = (long *)(ulong)uVar24;
  uVar68 = *(uint *)(pSVar31 + 100);
  uVar67 = *(uint *)(pSVar31 + 0x68);
  if (local_188 < ppSStack_180) {
    *(uint *)local_188 = uVar24;
    *(float *)((long)local_188 + 4) = fVar65;
    *(float *)(local_188 + 1) = fVar66;
    *(uint *)((long)local_188 + 0xc) = uVar68;
    *(uint *)(local_188 + 2) = uVar67;
    local_188 = (SemanticNode **)((long)local_188 + 0x14);
  }
  else {
    lVar32 = (long)local_188 - (long)ppSStack_190 >> 2;
    pSVar3 = (SemanticsDiffNode *)(lVar32 * -0x3333333333333333 + 1);
    unaff_x22 = ppSStack_190;
    if ((SemanticsDiffNode *)0xccccccccccccccc < pSVar3) goto LAB_0049c680;
    lVar15 = (long)ppSStack_180 - (long)ppSStack_190 >> 2;
    pSVar26 = (SemanticsDiffNode *)(lVar15 * -0x6666666666666666);
    if (pSVar26 < pSVar3 || (long)pSVar26 - (long)pSVar3 == 0) {
      pSVar26 = pSVar3;
    }
    if (0x666666666666665 < (ulong)(lVar15 * -0x3333333333333333)) {
      pSVar26 = pSVar52;
    }
    if (pSVar26 == (SemanticsDiffNode *)0x0) {
      pvVar43 = (void *)0x0;
    }
    else {
      if ((SemanticsDiffNode *)0xccccccccccccccc < pSVar26) goto LAB_0049c66c;
      pvVar43 = operator_new((long)pSVar26 * 0x14);
    }
    ppSVar18 = (SemanticNode **)((long)pvVar43 + lVar32 * 4);
    *(uint *)ppSVar18 = uVar24;
    *(float *)((long)ppSVar18 + 4) = fVar65;
    *(float *)(ppSVar18 + 1) = fVar66;
    *(uint *)((long)ppSVar18 + 0xc) = uVar68;
    *(uint *)(ppSVar18 + 2) = uVar67;
    ppSVar21 = ppSVar18;
    ppSVar9 = ppSVar48;
    for (; ppSVar48 != ppSVar10; ppSVar48 = (SemanticNode **)((long)ppSVar48 + -0x14)) {
      uVar59 = *(undefined8 *)((long)ppSVar48 + -0xc);
      uVar58 = *(undefined8 *)((long)ppSVar48 + -0x14);
      *(uint *)((long)ppSVar21 + -4) = *(uint *)((long)ppSVar48 + -4);
      *(undefined8 *)((long)ppSVar21 + -0xc) = uVar59;
      *(undefined8 *)((long)ppSVar21 + -0x14) = uVar58;
      ppSVar21 = (SemanticNode **)((long)ppSVar21 + -0x14);
      ppSVar9 = ppSStack_190;
    }
    ppSStack_180 = (SemanticNode **)((long)pvVar43 + (long)pSVar26 * 0x14);
    ppSVar18 = (SemanticNode **)((long)ppSVar18 + 0x14);
    ppSStack_190 = ppSVar21;
    local_188 = ppSVar18;
    if (ppSVar9 != (SemanticNode **)0x0) {
      operator_delete(ppSVar9);
      local_188 = ppSVar18;
    }
  }
LAB_0049b2cc:
  pSVar31 = pSVar31 + 0x78;
  if (pSVar31 == pSVar49) goto LAB_0049b7d4;
  goto LAB_0049b2d8;
LAB_0049ab54:
  plVar47 = local_210;
  pSVar19 = local_220;
  plVar42 = local_210;
  if (local_210 == (long *)0x0) {
    plVar47 = (long *)0x0;
    if ((local_27c & 1) != 0) goto LAB_0049ac28;
LAB_0049acec:
    bVar41 = false;
  }
  else {
    do {
      plVar50 = *(long **)(plVar47[2] + 0x10);
      plVar23 = *(long **)(plVar47[2] + 0x18);
      if (plVar23 != plVar50 && 0xf < (ulong)((long)plVar23 - (long)plVar50)) {
        fVar65 = 0.0;
        fVar66 = 0.0;
        bVar30 = false;
        do {
          lVar32 = *plVar50;
          fVar63 = *(float *)(lVar32 + 0x80);
          fVar61 = *(float *)(lVar32 + 0x7c);
          fVar62 = *(float *)(lVar32 + 0x84) - fVar61;
          fVar64 = *(float *)(lVar32 + 0x88) - fVar63;
          bVar12 = fVar62 != 0.0;
          bVar2 = fVar62 < 0.0 == NAN(fVar62);
          bVar13 = fVar64 != 0.0;
          bVar1 = fVar64 < 0.0 == NAN(fVar64);
          fVar64 = fVar65;
          fVar62 = fVar66;
          if ((bVar13 && bVar1) && (bVar12 && bVar2)) {
            fVar64 = fVar61;
            fVar62 = fVar63;
          }
          bVar41 = (bool)(((bVar13 && bVar1) && (bVar12 && bVar2)) | bVar30);
          if (((bVar13 && bVar1) && (bVar12 && bVar2)) && (bVar30)) {
            bVar41 = true;
            plVar28 = local_210;
            if (fVar63 < fVar66) goto LAB_0049acf4;
            fVar62 = fVar63;
            fVar64 = fVar61;
            if ((fVar63 == fVar66) && (fVar61 < fVar65)) goto LAB_0049acf4;
          }
          plVar50 = plVar50 + 1;
          fVar65 = fVar64;
          fVar66 = fVar62;
          bVar30 = bVar41;
        } while (plVar50 != plVar23);
      }
      plVar47 = (long *)*plVar47;
    } while (plVar47 != (long *)0x0);
    plVar47 = local_210;
    if ((local_27c & 1) == 0) goto LAB_0049acec;
LAB_0049ac28:
    plVar50 = *(long **)(in_x0 + 0x100);
    plVar23 = *(long **)(in_x0 + 0x108);
    bVar41 = false;
    if ((plVar23 != plVar50) && (0xf < (ulong)((long)plVar23 - (long)plVar50))) {
      fVar65 = 0.0;
      fVar66 = 0.0;
      bVar30 = false;
      do {
        lVar32 = *plVar50;
        fVar63 = *(float *)(lVar32 + 0x80);
        fVar61 = *(float *)(lVar32 + 0x7c);
        fVar62 = *(float *)(lVar32 + 0x84) - fVar61;
        fVar64 = *(float *)(lVar32 + 0x88) - fVar63;
        bVar12 = fVar62 != 0.0;
        bVar2 = fVar62 < 0.0 == NAN(fVar62);
        bVar13 = fVar64 != 0.0;
        bVar1 = fVar64 < 0.0 == NAN(fVar64);
        fVar64 = fVar65;
        fVar62 = fVar66;
        if ((bVar13 && bVar1) && (bVar12 && bVar2)) {
          fVar64 = fVar61;
          fVar62 = fVar63;
        }
        bVar41 = (bool)(((bVar13 && bVar1) && (bVar12 && bVar2)) | bVar30);
        if (((bVar13 && bVar1) && (bVar12 && bVar2)) && (bVar30)) {
          bVar41 = true;
          if ((fVar63 < fVar66) ||
             ((fVar62 = fVar63, fVar64 = fVar61, fVar63 == fVar66 && (fVar61 < fVar65))))
          goto joined_r0x0049acf0;
        }
        plVar50 = plVar50 + 1;
        fVar65 = fVar64;
        fVar66 = fVar62;
        bVar30 = bVar41;
      } while (plVar50 != plVar23);
      goto LAB_0049acec;
    }
  }
joined_r0x0049acf0:
  while (plVar28 = plVar47, local_220 = pSVar19, plVar42 != (long *)0x0) {
LAB_0049acf4:
    plVar47 = (long *)*plVar28;
    operator_delete(plVar28);
    pSVar19 = local_220;
    plVar42 = plVar47;
  }
  local_220 = (SemanticNode *)0x0;
  unaff_x26 = (long *)0x0;
  if (pSVar19 != (SemanticNode *)0x0) {
    operator_delete(pSVar19);
  }
LAB_0049ad14:
  ppSVar48 = &local_220;
  if (((((byte)SVar4 >> 1 & 1) != 0) && (*(long *)(in_x0 + 0x1d0) != 0)) &&
     (plVar42 = *(long **)(in_x0 + 0x128), plVar42 != (long *)0x0)) {
    uVar55 = *(ulong *)(in_x0 + 0x1c0);
    uVar58 = NEON_cnt(uVar55,1);
    uVar57 = NEON_uaddlv(uVar58,1);
    uVar16 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
    do {
      if (uVar55 != 0) {
        uVar37 = (ulong)*(uint *)(plVar42 + 2);
        if (uVar16 < 2) {
          uVar25 = uVar55 + 0xffffffff & uVar37;
        }
        else {
          uVar25 = uVar37;
          if (uVar55 <= uVar37) {
            uVar25 = 0;
            if (uVar55 != 0) {
              uVar25 = uVar37 / uVar55;
            }
            uVar25 = uVar37 - uVar25 * uVar55;
          }
        }
        plVar47 = *(long **)(*(long *)(in_x0 + 0x1b8) + uVar25 * 8);
        if (plVar47 != (long *)0x0) {
          do {
            while( true ) {
              plVar47 = (long *)*plVar47;
              if (plVar47 == (long *)0x0) goto LAB_0049ad50;
              uVar27 = plVar47[1];
              if (uVar27 != uVar37) break;
              if (*(uint *)(plVar47 + 2) == *(uint *)(plVar42 + 2)) {
                if (((byte)SVar4 & 1) != 0 || bVar41) goto LAB_0049ade4;
                goto LAB_0049bef8;
              }
            }
            if (uVar16 < 2) {
              uVar27 = uVar27 & uVar55 - 1;
            }
            else if (uVar55 <= uVar27) {
              uVar36 = 0;
              if (uVar55 != 0) {
                uVar36 = uVar27 / uVar55;
              }
              uVar27 = uVar27 - uVar36 * uVar55;
            }
          } while (uVar27 == uVar25);
        }
      }
LAB_0049ad50:
      plVar42 = (long *)*plVar42;
    } while (plVar42 != (long *)0x0);
  }
  if (bVar41 || ((byte)SVar4 & 1) != 0) {
LAB_0049ade4:
    sortChildrenByVisualPosition(in_x0 + 0x100);
LAB_0049adec:
    if (*(long *)(in_x0 + 0x1a8) != 0) {
      puVar22 = (undefined8 *)*(void **)(in_x0 + 0x1a0);
      while (puVar22 != (undefined8 *)0x0) {
        pvVar43 = (void *)*puVar22;
        if ((*(byte *)(puVar22 + 3) & 1) != 0) {
          operator_delete((void *)puVar22[5]);
        }
        operator_delete(puVar22);
        puVar22 = (undefined8 *)pvVar43;
      }
      lVar32 = *(long *)(in_x0 + 0x198);
      *(undefined8 *)(in_x0 + 0x1a0) = 0;
      if (lVar32 != 0) {
        lVar15 = 0;
        do {
          *(undefined8 *)(*(long *)(in_x0 + 400) + lVar15 * 8) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar32 != lVar15);
      }
      *(undefined8 *)(in_x0 + 0x1a8) = 0;
    }
    if (*(long *)(in_x0 + 0x1d0) != 0) {
      puVar22 = (undefined8 *)*(void **)(in_x0 + 0x1c8);
      while (puVar22 != (undefined8 *)0x0) {
        pvVar43 = (void *)*puVar22;
        operator_delete(puVar22);
        puVar22 = (undefined8 *)pvVar43;
      }
      lVar32 = *(long *)(in_x0 + 0x1c0);
      *(undefined8 *)(in_x0 + 0x1c8) = 0;
      if (lVar32 != 0) {
        lVar15 = 0;
        do {
          *(undefined8 *)(*(long *)(in_x0 + 0x1b8) + lVar15 * 8) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar32 != lVar15);
      }
      *(undefined8 *)(in_x0 + 0x1d0) = 0;
    }
    lVar32 = *(long *)(in_x0 + 0x100);
    lVar15 = *(long *)(in_x0 + 0x108);
    uStack_1d0 = (undefined8 *)CONCAT44(uStack_1d0._4_4_,0x3f800000);
    puStack_208 = (uint *)0x0;
    local_210 = (long *)0x0;
    local_1f8 = (uint *)0x0;
    local_200 = (uint *)0x0;
    puStack_1e8 = (undefined8 *)0x0;
    puStack_1f0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    puStack_1e0 = (undefined8 *)0x0;
    uStack_218 = 0;
    local_220 = (SemanticNode *)0x0;
    if (lVar32 != lVar15) {
      do {
        in_x2 = in_x0 + 0x1b8;
        in_x3 = &local_220;
        FUN_0049c684(lVar32,in_x0 + 400);
        lVar32 = lVar32 + 8;
        puVar22 = puStack_1e0;
      } while (lVar32 != lVar15);
      while (puVar22 != (undefined8 *)0x0) {
        pvVar43 = (void *)*puVar22;
        operator_delete(puVar22);
        puVar22 = (undefined8 *)pvVar43;
      }
    }
    puVar22 = puStack_1f0;
    puStack_1f0 = (undefined8 *)0x0;
    if (puVar22 != (undefined8 *)0x0) {
      operator_delete(puVar22);
    }
    if (((ulong)puStack_208 & 1) != 0) {
      operator_delete(local_1f8);
    }
    if (((ulong)local_220 & 1) != 0) {
      operator_delete(local_210);
    }
    pSStack_268 = (SemanticsDiffNode *)0x0;
    local_260 = 0;
    local_270 = (SemanticNode *)0x0;
    if (*(long *)(in_x0 + 0xf0) != 0) {
      FUN_0049cd44(&local_270);
    }
    lVar32 = *(long *)(in_x0 + 0x100);
    lVar15 = *(long *)(in_x0 + 0x108);
    local_220 = (SemanticNode *)((ulong)local_220 & 0xffffffff00000000);
    pvVar43 = local_210;
    for (; lVar32 != lVar15; lVar32 = lVar32 + 8) {
      in_x2 = (SemanticNode *)&local_220;
      in_x3 = &local_270;
      local_210 = (long *)pvVar43;
      FUN_0049cedc(lVar32,0xffffffff,in_x2,in_x3,in_x0 + 0x1b8,in_x0 + 400);
      pvVar43 = local_210;
    }
    puStack_1e0 = (undefined8 *)0x0;
    puStack_1e8 = (undefined8 *)0x0;
    uStack_1d0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    puStack_1c0 = (uint *)0x0;
    local_1c8 = (undefined8 *)0x0;
    puStack_1b0 = (uint *)0x0;
    local_1b8 = (uint *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    local_1a8 = (undefined8 *)0x0;
    local_220 = *(SemanticNode **)PTR_sm_frameId_0067cf90;
    uStack_218 = *(long *)(in_x0 + 200) + 1;
    ppSStack_190 = (SemanticNode **)0x0;
    local_198 = (undefined8 *)0x0;
    ppSStack_180 = (SemanticNode **)0x0;
    local_188 = (SemanticNode **)0x0;
    local_210 = (long *)((ulong)pvVar43 & 0xffffffff00000000);
    local_200 = (uint *)0x0;
    puStack_208 = (uint *)0x0;
    puStack_1f0 = (undefined8 *)0x0;
    local_1f8 = (uint *)0x0;
    if (local_270 != (SemanticNode *)pSStack_268) {
      iVar14 = 0;
      uVar24 = 0;
      pSVar49 = (SemanticsDiffNode *)local_270;
      do {
        pSVar31 = pSVar49 + 0x78;
        if (*(uint *)(pSVar49 + 0x6c) == 0xffffffff) {
          iVar14 = iVar14 + 1;
          uVar24 = *(uint *)pSVar49;
        }
        pSVar49 = pSVar31;
      } while (pSVar31 != pSStack_268);
      if (iVar14 == 1) {
        local_210._4_4_ = (undefined4)((ulong)pvVar43 >> 0x20);
        local_210 = (long *)CONCAT44(local_210._4_4_,uVar24);
      }
    }
    if (*(long *)(in_x0 + 0xb0) == *(long *)(in_x0 + 0xb8)) {
      FUN_0049d2b0(&local_c0,&local_270);
      local_d0 = 0x3f800000;
      uStack_e8 = 0;
      local_f0 = (void *)0x0;
      uStack_d8 = 0;
      local_e0 = (undefined8 *)0x0;
      FUN_0049db20(&local_f0,local_a8);
      pSVar52 = pSStack_268;
      pSVar31 = (SemanticsDiffNode *)local_270;
      for (pSVar49 = (SemanticsDiffNode *)local_270; pSVar49 != pSVar52; pSVar49 = pSVar49 + 0x78) {
        uVar55 = FUN_0049dc1c(&local_f0,*(uint *)(pSVar49 + 0x6c),*(uint *)(pSVar49 + 0x6c));
        if (((uVar55 & 1) != 0) && (uStack_b8 != 0)) {
          uVar24 = *(uint *)(pSVar49 + 0x6c);
          uVar16 = (ulong)(int)uVar24;
          uVar58 = NEON_cnt(uStack_b8,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar55 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar55 < 2) {
            uVar37 = uStack_b8 - 1 & uVar16;
          }
          else {
            uVar37 = uVar16;
            if (uStack_b8 <= uVar16) {
              uVar37 = 0;
              if (uStack_b8 != 0) {
                uVar37 = uVar16 / uStack_b8;
              }
              uVar37 = uVar16 - uVar37 * uStack_b8;
            }
          }
          if ((local_c0[uVar37] != (long *)0x0) &&
             (plVar42 = (long *)*local_c0[uVar37], plVar42 != (long *)0x0)) {
            do {
              uVar25 = plVar42[1];
              if (uVar25 == uVar16) {
                if (*(uint *)(plVar42 + 2) == uVar24) {
                  puStack_108 = (undefined8 *)0x0;
                  local_100 = 0;
                  local_110 = (void *)0x0;
                  local_118 = (void *)CONCAT44(local_118._4_4_,uVar24);
                  FUN_003bf3d0(&local_110,plVar42[3],plVar42[4],plVar42[4] - plVar42[3] >> 2);
                  if (local_1b8 < puStack_1b0) {
                    *local_1b8 = (uint)local_118;
                    *(undefined8 **)(local_1b8 + 4) = puStack_108;
                    *(void **)(local_1b8 + 2) = local_110;
                    *(long *)(local_1b8 + 6) = local_100;
                    local_1b8 = local_1b8 + 8;
                  }
                  else {
                    local_1b8 = (uint *)FUN_0049dec0(&puStack_1c0,&local_118);
                    if (local_110 != (void *)0x0) {
                      operator_delete(local_110);
                    }
                  }
                  break;
                }
              }
              else {
                if (uVar55 < 2) {
                  uVar25 = uVar25 & uStack_b8 - 1;
                }
                else if (uStack_b8 <= uVar25) {
                  uVar27 = 0;
                  if (uStack_b8 != 0) {
                    uVar27 = uVar25 / uStack_b8;
                  }
                  uVar25 = uVar25 - uVar27 * uStack_b8;
                }
                if (uVar25 != uVar37) break;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        pSVar31 = pSStack_268;
      }
      FUN_0049cd44(&puStack_1f0,((long)pSVar31 - (long)local_270 >> 3) * -0x1111111111111111);
      pSVar31 = pSStack_268;
      puVar22 = puStack_1e8;
      for (pSVar49 = (SemanticsDiffNode *)local_270; puStack_1e8 = puVar22, pvVar43 = local_f0,
          puVar45 = local_e0, pSVar49 != pSVar31; pSVar49 = pSVar49 + 0x78) {
        if (puVar22 < puStack_1e0) {
          *puVar22 = *(SemanticNode **)pSVar49;
          if (((byte)pSVar49[8] & 1) == 0) {
            pSVar17 = *(SemanticNode **)(pSVar49 + 0x10);
            pSVar19 = *(SemanticNode **)(pSVar49 + 8);
            puVar22[3] = *(SemanticNode **)(pSVar49 + 0x18);
            puVar22[2] = pSVar17;
            *(SemanticNode **)(puVar22 + 1) = pSVar19;
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puVar22 + 1),(char *)*(SemanticNode **)(pSVar49 + 0x18),
                       (ulong)*(SemanticNode **)(pSVar49 + 0x10));
          }
          if (((byte)pSVar49[0x20] & 1) == 0) {
            pSVar17 = *(SemanticNode **)(pSVar49 + 0x28);
            pSVar19 = *(SemanticNode **)(pSVar49 + 0x20);
            puVar22[6] = *(SemanticNode **)(pSVar49 + 0x30);
            puVar22[5] = pSVar17;
            puVar22[4] = pSVar19;
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puVar22 + 4),(char *)*(SemanticNode **)(pSVar49 + 0x30),
                       (ulong)*(SemanticNode **)(pSVar49 + 0x28));
          }
          if (((byte)pSVar49[0x38] & 1) == 0) {
            pSVar17 = *(SemanticNode **)(pSVar49 + 0x40);
            pSVar19 = *(SemanticNode **)(pSVar49 + 0x38);
            puVar22[9] = *(SemanticNode **)(pSVar49 + 0x48);
            puVar22[8] = pSVar17;
            puVar22[7] = pSVar19;
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puVar22 + 7),(char *)*(SemanticNode **)(pSVar49 + 0x48),
                       (ulong)*(SemanticNode **)(pSVar49 + 0x40));
          }
          pSVar40 = *(SemanticNode **)(pSVar49 + 0x58);
          pSVar29 = *(SemanticNode **)(pSVar49 + 0x50);
          pSVar17 = *(SemanticNode **)(pSVar49 + 0x68);
          pSVar19 = *(SemanticNode **)(pSVar49 + 0x60);
          *(uint *)(puVar22 + 0xe) = *(uint *)(pSVar49 + 0x70);
          puVar22[0xb] = pSVar40;
          puVar22[10] = pSVar29;
          puVar22[0xd] = pSVar17;
          puVar22[0xc] = pSVar19;
          puVar22 = puVar22 + 0xf;
        }
        else {
          puVar22 = (undefined8 *)FUN_0049a25c(&puStack_1f0,pSVar49);
        }
      }
      while (puVar45 != (undefined8 *)0x0) {
        pvVar44 = (void *)*puVar45;
        local_f0 = pvVar43;
        operator_delete(puVar45);
        pvVar43 = local_f0;
        puVar45 = (undefined8 *)pvVar44;
      }
      local_f0 = (void *)0x0;
      puVar22 = local_b0;
      if (pvVar43 != (void *)0x0) {
        operator_delete(pvVar43);
        puVar22 = local_b0;
      }
      while (puVar22 != (undefined8 *)0x0) {
        pvVar43 = (void *)puVar22[3];
        pvVar44 = (void *)*puVar22;
        if (pvVar43 != (void *)0x0) {
          puVar22[4] = pvVar43;
          operator_delete(pvVar43);
        }
        operator_delete(puVar22);
        puVar22 = (undefined8 *)pvVar44;
      }
    }
    else {
      local_a0 = 0x3f800000;
      uStack_b8 = 0;
      local_c0 = (undefined8 **)0x0;
      local_a8 = 0;
      local_b0 = (undefined8 *)0x0;
      FUN_0049e018(&local_c0,((long)pSStack_268 - (long)local_270 >> 3) * -0x1111111111111111);
      pSVar31 = pSStack_268;
      for (pSVar49 = (SemanticsDiffNode *)local_270; pSVar49 != pSVar31; pSVar49 = pSVar49 + 0x78) {
        in_x2 = (SemanticNode *)pSVar49;
        lVar32 = FUN_0049e114(&local_c0,*(uint *)pSVar49);
        *(SemanticsDiffNode **)(lVar32 + 0x18) = pSVar49;
      }
      local_d0 = 0x3f800000;
      uStack_e8 = 0;
      local_f0 = (void *)0x0;
      uStack_d8 = 0;
      local_e0 = (undefined8 *)0x0;
      FUN_0049e018(&local_f0,
                   (*(long *)(in_x0 + 0xb8) - *(long *)(in_x0 + 0xb0) >> 3) * -0x1111111111111111);
      pSVar17 = *(SemanticNode **)(in_x0 + 0xb8);
      for (pSVar19 = *(SemanticNode **)(in_x0 + 0xb0); pSVar19 != pSVar17; pSVar19 = pSVar19 + 0x78)
      {
        in_x2 = pSVar19;
        lVar32 = FUN_0049e114(&local_f0,*(uint *)pSVar19);
        *(SemanticNode **)(lVar32 + 0x18) = pSVar19;
      }
      FUN_0049d2b0(&local_118,&local_270);
      FUN_0049d2b0(&local_140,in_x0 + 0xb0);
      puVar54 = *(uint **)(in_x0 + 0xb8);
      pSVar31 = (SemanticsDiffNode *)local_270;
      pSVar49 = pSStack_268;
      puVar53 = puStack_208;
      puVar34 = local_200;
      for (puVar46 = *(uint **)(in_x0 + 0xb0); local_270 = (SemanticNode *)pSVar31,
          pSStack_268 = pSVar49, puStack_208 = puVar53, local_200 = puVar34, puVar46 != puVar54;
          puVar46 = puVar46 + 0x1e) {
        uVar24 = *puVar46;
        uVar55 = (ulong)uVar24;
        if (uStack_b8 != 0) {
          uVar58 = NEON_cnt(uStack_b8,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar16 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar16 < 2) {
            uVar37 = (ulong)((int)uStack_b8 - 1U & uVar24);
          }
          else {
            uVar37 = uVar55;
            if (uStack_b8 <= uVar55) {
              uVar37 = 0;
              if (uStack_b8 != 0) {
                uVar37 = uVar55 / uStack_b8;
              }
              uVar37 = uVar55 - uVar37 * uStack_b8;
            }
          }
          if ((local_c0[uVar37] != (long *)0x0) &&
             (plVar42 = (long *)*local_c0[uVar37], plVar42 != (long *)0x0)) {
            do {
              uVar25 = plVar42[1];
              if (uVar25 == uVar55) {
                if (*(uint *)(plVar42 + 2) == uVar24) goto LAB_0049b264;
              }
              else {
                if (uVar16 < 2) {
                  uVar25 = uVar25 & uStack_b8 - 1;
                }
                else if (uStack_b8 <= uVar25) {
                  uVar27 = 0;
                  if (uStack_b8 != 0) {
                    uVar27 = uVar25 / uStack_b8;
                  }
                  uVar25 = uVar25 - uVar27 * uStack_b8;
                }
                if (uVar25 != uVar37) break;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        if (puVar34 < local_1f8) {
          *puVar34 = uVar24;
          local_200 = puVar34 + 1;
        }
        else {
          lVar32 = (long)puVar34 - (long)puVar53 >> 2;
          uVar55 = lVar32 + 1;
          if (uVar55 >> 0x3e != 0) goto LAB_0049c678;
          uVar16 = (long)local_1f8 - (long)puVar53 >> 1;
          if (uVar16 <= uVar55) {
            uVar16 = uVar55;
          }
          if (0x7ffffffffffffffb < (ulong)((long)local_1f8 - (long)puVar53)) {
            uVar16 = 0x3fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar43 = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3e != 0) goto LAB_0049c66c;
            pvVar43 = operator_new(uVar16 << 2);
            uVar24 = *puVar46;
          }
          puStack_208 = (uint *)((long)pvVar43 + lVar32 * 4);
          puVar39 = puStack_208 + 1;
          *puStack_208 = uVar24;
          if ((long)puVar34 - (long)puVar53 != 0) {
            uVar55 = ((long)puVar34 - (long)puVar53) - 4;
            if ((0x1b < uVar55) &&
               (0x1f < (ulong)((long)puVar34 + (-((long)puVar34 - (long)puVar53) - (long)pvVar43))))
            {
              puVar33 = puStack_208 + -4;
              puVar38 = puVar34 + -4;
              uVar55 = (uVar55 >> 2) + 1;
              uVar25 = uVar55 & 0x7ffffffffffffff8;
              puVar34 = puVar34 + -uVar25;
              uVar37 = uVar25;
              do {
                puVar8 = puVar38 + -2;
                uVar60 = *(undefined8 *)(puVar38 + -4);
                uVar59 = *(undefined8 *)(puVar38 + 2);
                uVar58 = *(undefined8 *)puVar38;
                uVar37 = uVar37 - 8;
                puVar38 = puVar38 + -8;
                *(undefined8 *)(puVar33 + -2) = *(undefined8 *)puVar8;
                *(undefined8 *)(puVar33 + -4) = uVar60;
                *(undefined8 *)(puVar33 + 2) = uVar59;
                *(undefined8 *)puVar33 = uVar58;
                puVar33 = puVar33 + -8;
              } while (uVar37 != 0);
              puStack_208 = puStack_208 + -uVar25;
              if (uVar55 == uVar25) goto LAB_0049b248;
            }
            do {
              puVar34 = puVar34 + -1;
              puStack_208 = puStack_208 + -1;
              *puStack_208 = *puVar34;
            } while (puVar34 != puVar53);
          }
LAB_0049b248:
          local_1f8 = (uint *)((long)pvVar43 + uVar16 * 4);
          local_200 = puVar39;
          if (puVar53 != (uint *)0x0) {
            operator_delete(puVar53);
            local_200 = puVar39;
          }
        }
LAB_0049b264:
        pSVar31 = (SemanticsDiffNode *)local_270;
        pSVar49 = pSStack_268;
        puVar53 = puStack_208;
        puVar34 = local_200;
      }
      if (pSVar31 != pSVar49) {
        ppSVar51 = &local_220;
        pSVar52 = (SemanticsDiffNode *)0xccccccccccccccc;
LAB_0049b2d8:
        puVar45 = uStack_1d0;
        puVar22 = puStack_1e8;
        unaff_x27 = 0xcccccccccccccccd;
        if (uStack_e8 != 0) {
          uVar24 = *(uint *)pSVar31;
          uVar16 = (ulong)uVar24;
          uVar58 = NEON_cnt(uStack_e8,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar55 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar55 < 2) {
            uVar37 = (ulong)((int)uStack_e8 - 1U & uVar24);
          }
          else {
            uVar37 = uVar16;
            if (uStack_e8 <= uVar16) {
              uVar37 = 0;
              if (uStack_e8 != 0) {
                uVar37 = uVar16 / uStack_e8;
              }
              uVar37 = uVar16 - uVar37 * uStack_e8;
            }
          }
          plVar42 = *(long **)((long)local_f0 + uVar37 * 8);
          if ((plVar42 != (long *)0x0) && (plVar42 = (long *)*plVar42, plVar42 != (long *)0x0)) {
            do {
              uVar25 = plVar42[1];
              if (uVar25 == uVar16) {
                if (*(uint *)(plVar42 + 2) == uVar24) {
                  lVar32 = plVar42[3];
                  if ((*(uint *)(lVar32 + 0x6c) != *(uint *)(pSVar31 + 0x6c)) ||
                     (*(uint *)(lVar32 + 0x70) != *(uint *)(pSVar31 + 0x70))) {
                    if (uStack_1d0 < local_1c8) {
                      *uStack_1d0 = *(SemanticNode **)pSVar31;
                      if (((byte)pSVar31[8] & 1) == 0) {
                        pSVar17 = *(SemanticNode **)(pSVar31 + 0x10);
                        pSVar19 = *(SemanticNode **)(pSVar31 + 8);
                        uStack_1d0[3] = *(SemanticNode **)(pSVar31 + 0x18);
                        uStack_1d0[2] = pSVar17;
                        *(SemanticNode **)(uStack_1d0 + 1) = pSVar19;
                      }
                      else {
                        in_x2 = *(SemanticNode **)(pSVar31 + 0x10);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::__init_copy_ctor_external
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)(uStack_1d0 + 1),(char *)*(SemanticNode **)(pSVar31 + 0x18),
                                   (ulong)in_x2);
                      }
                      if (((byte)pSVar31[0x20] & 1) == 0) {
                        pSVar17 = *(SemanticNode **)(pSVar31 + 0x28);
                        pSVar19 = *(SemanticNode **)(pSVar31 + 0x20);
                        puVar45[6] = *(SemanticNode **)(pSVar31 + 0x30);
                        puVar45[5] = pSVar17;
                        puVar45[4] = pSVar19;
                      }
                      else {
                        in_x2 = *(SemanticNode **)(pSVar31 + 0x28);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::__init_copy_ctor_external
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)(puVar45 + 4),(char *)*(SemanticNode **)(pSVar31 + 0x30),
                                   (ulong)in_x2);
                      }
                      if (((byte)pSVar31[0x38] & 1) == 0) {
                        pSVar17 = *(SemanticNode **)(pSVar31 + 0x40);
                        pSVar19 = *(SemanticNode **)(pSVar31 + 0x38);
                        puVar45[9] = *(SemanticNode **)(pSVar31 + 0x48);
                        puVar45[8] = pSVar17;
                        puVar45[7] = pSVar19;
                      }
                      else {
                        in_x2 = *(SemanticNode **)(pSVar31 + 0x40);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::__init_copy_ctor_external
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)(puVar45 + 7),(char *)*(SemanticNode **)(pSVar31 + 0x48),
                                   (ulong)in_x2);
                      }
                      pSVar40 = *(SemanticNode **)(pSVar31 + 0x58);
                      pSVar29 = *(SemanticNode **)(pSVar31 + 0x50);
                      pSVar17 = *(SemanticNode **)(pSVar31 + 0x68);
                      pSVar19 = *(SemanticNode **)(pSVar31 + 0x60);
                      uStack_1d0 = puVar45 + 0xf;
                      *(uint *)(puVar45 + 0xe) = *(uint *)(pSVar31 + 0x70);
                      puVar45[0xb] = pSVar40;
                      puVar45[10] = pSVar29;
                      puVar45[0xd] = pSVar17;
                      puVar45[0xc] = pSVar19;
                    }
                    else {
                      uStack_1d0 = (undefined8 *)FUN_0049a25c(&local_1d8,pSVar31);
                    }
                  }
                  if (*(uint *)(lVar32 + 4) != *(uint *)(pSVar31 + 4)) goto LAB_0049b5c8;
                  bVar5 = *(byte *)(lVar32 + 8);
                  SVar6 = pSVar31[8];
                  in_x2 = *(SemanticNode **)(lVar32 + 0x10);
                  pSVar17 = (SemanticNode *)(ulong)(bVar5 >> 1);
                  pSVar19 = pSVar17;
                  if ((bVar5 & 1) != 0) {
                    pSVar19 = in_x2;
                  }
                  pSVar29 = (SemanticNode *)(ulong)((byte)SVar6 >> 1);
                  if (((byte)SVar6 & 1) != 0) {
                    pSVar29 = *(SemanticNode **)(pSVar31 + 0x10);
                  }
                  if (pSVar19 != pSVar29) goto LAB_0049b5c8;
                  pSVar19 = (SemanticNode *)(pSVar31 + 9);
                  if (((byte)SVar6 & 1) != 0) {
                    pSVar19 = *(SemanticNode **)(pSVar31 + 0x18);
                  }
                  if ((bVar5 & 1) != 0) {
                    iVar14 = memcmp(*(void **)(lVar32 + 0x18),pSVar19,(size_t)in_x2);
                    if (iVar14 != 0) goto LAB_0049b5c8;
                    goto LAB_0049b5a8;
                  }
                  if (bVar5 < 2) goto LAB_0049b5a8;
                  pSVar29 = (SemanticNode *)(lVar32 + 9);
                  goto LAB_0049b578;
                }
              }
              else {
                if (uVar55 < 2) {
                  uVar25 = uVar25 & uStack_e8 - 1;
                }
                else if (uStack_e8 <= uVar25) {
                  uVar27 = 0;
                  if (uStack_e8 != 0) {
                    uVar27 = uVar25 / uStack_e8;
                  }
                  uVar25 = uVar25 - uVar27 * uStack_e8;
                }
                if (uVar25 != uVar37) break;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        if (puStack_1e8 < puStack_1e0) {
          *puStack_1e8 = *(SemanticNode **)pSVar31;
          if (((byte)pSVar31[8] & 1) == 0) {
            pSVar17 = *(SemanticNode **)(pSVar31 + 0x10);
            pSVar19 = *(SemanticNode **)(pSVar31 + 8);
            puStack_1e8[3] = *(SemanticNode **)(pSVar31 + 0x18);
            puStack_1e8[2] = pSVar17;
            *(SemanticNode **)(puStack_1e8 + 1) = pSVar19;
          }
          else {
            in_x2 = *(SemanticNode **)(pSVar31 + 0x10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puStack_1e8 + 1),(char *)*(SemanticNode **)(pSVar31 + 0x18),(ulong)in_x2)
            ;
          }
          if (((byte)pSVar31[0x20] & 1) == 0) {
            pSVar17 = *(SemanticNode **)(pSVar31 + 0x28);
            pSVar19 = *(SemanticNode **)(pSVar31 + 0x20);
            puVar22[6] = *(SemanticNode **)(pSVar31 + 0x30);
            puVar22[5] = pSVar17;
            puVar22[4] = pSVar19;
          }
          else {
            in_x2 = *(SemanticNode **)(pSVar31 + 0x28);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puVar22 + 4),(char *)*(SemanticNode **)(pSVar31 + 0x30),(ulong)in_x2);
          }
          if (((byte)pSVar31[0x38] & 1) == 0) {
            pSVar17 = *(SemanticNode **)(pSVar31 + 0x40);
            pSVar19 = *(SemanticNode **)(pSVar31 + 0x38);
            puVar22[9] = *(SemanticNode **)(pSVar31 + 0x48);
            puVar22[8] = pSVar17;
            puVar22[7] = pSVar19;
          }
          else {
            in_x2 = *(SemanticNode **)(pSVar31 + 0x40);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puVar22 + 7),(char *)*(SemanticNode **)(pSVar31 + 0x48),(ulong)in_x2);
          }
          pSVar40 = *(SemanticNode **)(pSVar31 + 0x58);
          pSVar29 = *(SemanticNode **)(pSVar31 + 0x50);
          pSVar17 = *(SemanticNode **)(pSVar31 + 0x68);
          pSVar19 = *(SemanticNode **)(pSVar31 + 0x60);
          *(uint *)(puVar22 + 0xe) = *(uint *)(pSVar31 + 0x70);
          puStack_1e8 = puVar22 + 0xf;
          puVar22[0xb] = pSVar40;
          puVar22[10] = pSVar29;
          puVar22[0xd] = pSVar17;
          puVar22[0xc] = pSVar19;
        }
        else {
          puStack_1e8 = (undefined8 *)FUN_0049a25c(&puStack_1f0,pSVar31);
        }
        goto LAB_0049b2cc;
      }
LAB_0049b7d4:
      local_238 = (uint *)0x0;
      local_230 = (uint *)0x0;
      uVar55 = local_128 + local_100;
      local_228 = (uint *)0x0;
      local_150 = 0x3f800000;
      uStack_168 = 0;
      local_170 = (void *)0x0;
      uStack_158 = 0;
      local_160 = (undefined8 *)0x0;
      if (uVar55 != 0) {
        if (uVar55 >> 0x3e != 0) {
LAB_0049c670:
          FUN_00330fec(&local_238);
LAB_0049c678:
                    /* WARNING: Subroutine does not return */
          FUN_003b1ebc();
        }
        local_230 = (uint *)operator_new(uVar55 * 4);
        local_228 = local_230 + uVar55;
      }
      local_238 = local_230;
      FUN_0049db20(&local_170,(long)local_228 - (long)local_230 >> 2);
      pSVar31 = pSStack_268;
      for (pSVar49 = (SemanticsDiffNode *)local_270; pSVar49 != pSVar31; pSVar49 = pSVar49 + 0x78) {
        uVar55 = FUN_0049dc1c(&local_170,*(uint *)(pSVar49 + 0x6c),*(uint *)(pSVar49 + 0x6c));
        puVar54 = local_230;
        puVar46 = local_238;
        if ((uVar55 & 1) != 0) {
          if (local_230 < local_228) {
            *local_230 = *(uint *)(pSVar49 + 0x6c);
            local_230 = local_230 + 1;
          }
          else {
            lVar15 = (long)local_230 - (long)local_238;
            lVar32 = lVar15 >> 2;
            uVar55 = lVar32 + 1;
            if (uVar55 >> 0x3e != 0) goto LAB_0049c670;
            uVar16 = (long)local_228 - (long)local_238 >> 1;
            if (uVar16 <= uVar55) {
              uVar16 = uVar55;
            }
            if (0x7ffffffffffffffb < (ulong)((long)local_228 - (long)local_238)) {
              uVar16 = 0x3fffffffffffffff;
            }
            if (uVar16 == 0) {
              pvVar43 = (void *)0x0;
            }
            else {
              if (uVar16 >> 0x3e != 0) goto LAB_0049c66c;
              pvVar43 = operator_new(uVar16 << 2);
            }
            local_238 = (uint *)((long)pvVar43 + lVar32 * 4);
            puVar53 = local_238 + 1;
            *local_238 = *(uint *)(pSVar49 + 0x6c);
            if ((long)puVar54 - (long)puVar46 != 0) {
              uVar55 = ((long)puVar54 - (long)puVar46) - 4;
              if ((0x1b < uVar55) && (0x1f < (ulong)((long)puVar54 + (-lVar15 - (long)pvVar43)))) {
                puVar34 = local_238 + -4;
                puVar39 = puVar54 + -4;
                uVar55 = (uVar55 >> 2) + 1;
                uVar25 = uVar55 & 0x7ffffffffffffff8;
                puVar54 = puVar54 + -uVar25;
                uVar37 = uVar25;
                do {
                  puVar33 = puVar39 + -2;
                  uVar60 = *(undefined8 *)(puVar39 + -4);
                  uVar59 = *(undefined8 *)(puVar39 + 2);
                  uVar58 = *(undefined8 *)puVar39;
                  uVar37 = uVar37 - 8;
                  puVar39 = puVar39 + -8;
                  *(undefined8 *)(puVar34 + -2) = *(undefined8 *)puVar33;
                  *(undefined8 *)(puVar34 + -4) = uVar60;
                  *(undefined8 *)(puVar34 + 2) = uVar59;
                  *(undefined8 *)puVar34 = uVar58;
                  puVar34 = puVar34 + -8;
                } while (uVar37 != 0);
                local_238 = local_238 + -uVar25;
                if (uVar55 == uVar25) goto LAB_0049ba50;
              }
              do {
                puVar54 = puVar54 + -1;
                local_238 = local_238 + -1;
                *local_238 = *puVar54;
              } while (puVar54 != puVar46);
            }
LAB_0049ba50:
            local_228 = (uint *)((long)pvVar43 + uVar16 * 4);
            local_230 = puVar53;
            if (puVar46 != (uint *)0x0) {
              operator_delete(puVar46);
              local_230 = puVar53;
            }
          }
        }
      }
      lVar15 = *(long *)(in_x0 + 0xb8);
      puVar46 = local_230;
      for (lVar32 = *(long *)(in_x0 + 0xb0); local_230 = puVar46, puVar54 = local_238,
          lVar32 != lVar15; lVar32 = lVar32 + 0x78) {
        uVar55 = FUN_0049dc1c(&local_170,*(undefined4 *)(lVar32 + 0x6c),
                              *(undefined4 *)(lVar32 + 0x6c));
        puVar54 = local_230;
        puVar46 = local_238;
        if ((uVar55 & 1) != 0) {
          if (local_230 < local_228) {
            *local_230 = *(uint *)(lVar32 + 0x6c);
            local_230 = local_230 + 1;
          }
          else {
            lVar56 = (long)local_230 - (long)local_238;
            lVar20 = lVar56 >> 2;
            uVar55 = lVar20 + 1;
            if (uVar55 >> 0x3e != 0) goto LAB_0049c670;
            uVar16 = (long)local_228 - (long)local_238 >> 1;
            if (uVar16 <= uVar55) {
              uVar16 = uVar55;
            }
            if (0x7ffffffffffffffb < (ulong)((long)local_228 - (long)local_238)) {
              uVar16 = 0x3fffffffffffffff;
            }
            if (uVar16 == 0) {
              pvVar43 = (void *)0x0;
            }
            else {
              if (uVar16 >> 0x3e != 0) {
LAB_0049c66c:
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              pvVar43 = operator_new(uVar16 << 2);
            }
            local_238 = (uint *)((long)pvVar43 + lVar20 * 4);
            puVar53 = local_238 + 1;
            *local_238 = *(uint *)(lVar32 + 0x6c);
            if ((long)puVar54 - (long)puVar46 != 0) {
              uVar55 = ((long)puVar54 - (long)puVar46) - 4;
              if ((0x1b < uVar55) && (0x1f < (ulong)((long)puVar54 + (-lVar56 - (long)pvVar43)))) {
                puVar34 = local_238 + -4;
                puVar39 = puVar54 + -4;
                uVar55 = (uVar55 >> 2) + 1;
                uVar25 = uVar55 & 0x7ffffffffffffff8;
                puVar54 = puVar54 + -uVar25;
                uVar37 = uVar25;
                do {
                  puVar33 = puVar39 + -2;
                  uVar60 = *(undefined8 *)(puVar39 + -4);
                  uVar59 = *(undefined8 *)(puVar39 + 2);
                  uVar58 = *(undefined8 *)puVar39;
                  uVar37 = uVar37 - 8;
                  puVar39 = puVar39 + -8;
                  *(undefined8 *)(puVar34 + -2) = *(undefined8 *)puVar33;
                  *(undefined8 *)(puVar34 + -4) = uVar60;
                  *(undefined8 *)(puVar34 + 2) = uVar59;
                  *(undefined8 *)puVar34 = uVar58;
                  puVar34 = puVar34 + -8;
                } while (uVar37 != 0);
                local_238 = local_238 + -uVar25;
                if (uVar55 == uVar25) goto LAB_0049bb9c;
              }
              do {
                puVar54 = puVar54 + -1;
                local_238 = local_238 + -1;
                *local_238 = *puVar54;
              } while (puVar54 != puVar46);
            }
LAB_0049bb9c:
            local_228 = (uint *)((long)pvVar43 + uVar16 * 4);
            local_230 = puVar53;
            if (puVar46 != (uint *)0x0) {
              operator_delete(puVar46);
              local_230 = puVar53;
            }
          }
        }
        puVar46 = local_230;
      }
      for (; pvVar43 = local_170, puVar22 = local_160, puVar54 != puVar46; puVar54 = puVar54 + 1) {
        uVar24 = *puVar54;
        pvVar43 = (void *)(long)(int)uVar24;
        if (local_110 == (void *)0x0) {
LAB_0049bca8:
          plVar42 = (long *)0x0;
        }
        else {
          uVar58 = NEON_cnt(local_110,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar55 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar55 < 2) {
            pvVar44 = (void *)((long)local_110 - 1U & (ulong)pvVar43);
          }
          else {
            pvVar44 = pvVar43;
            if (local_110 <= pvVar43) {
              uVar16 = 0;
              if (local_110 != (void *)0x0) {
                uVar16 = (ulong)pvVar43 / (ulong)local_110;
              }
              pvVar44 = (void *)((long)pvVar43 - uVar16 * (long)local_110);
            }
          }
          plVar42 = *(long **)((long)local_118 + (long)pvVar44 * 8);
          if (plVar42 == (long *)0x0) goto LAB_0049bca8;
          plVar42 = (long *)*plVar42;
          if (plVar42 != (long *)0x0) {
            do {
              pvVar35 = (void *)plVar42[1];
              if (pvVar35 == pvVar43) {
                if (*(uint *)(plVar42 + 2) == uVar24) break;
              }
              else {
                if (uVar55 < 2) {
                  pvVar35 = (void *)((ulong)pvVar35 & (long)local_110 - 1U);
                }
                else if (local_110 <= pvVar35) {
                  uVar16 = 0;
                  if (local_110 != (void *)0x0) {
                    uVar16 = (ulong)pvVar35 / (ulong)local_110;
                  }
                  pvVar35 = (void *)((long)pvVar35 - uVar16 * (long)local_110);
                }
                if (pvVar35 != pvVar44) goto LAB_0049bca8;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        if (local_138 == (void *)0x0) {
LAB_0049bd50:
          plVar47 = (long *)0x0;
        }
        else {
          uVar58 = NEON_cnt(local_138,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar55 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar55 < 2) {
            pvVar44 = (void *)((long)local_138 - 1U & (ulong)pvVar43);
          }
          else {
            pvVar44 = pvVar43;
            if (local_138 <= pvVar43) {
              uVar16 = 0;
              if (local_138 != (void *)0x0) {
                uVar16 = (ulong)pvVar43 / (ulong)local_138;
              }
              pvVar44 = (void *)((long)pvVar43 - uVar16 * (long)local_138);
            }
          }
          plVar47 = *(long **)((long)local_140 + (long)pvVar44 * 8);
          if ((plVar47 != (long *)0x0) && (plVar47 = (long *)*plVar47, plVar47 != (long *)0x0)) {
            do {
              pvVar35 = (void *)plVar47[1];
              if (pvVar35 == pvVar43) {
                if (*(uint *)(plVar47 + 2) == uVar24) break;
              }
              else {
                if (uVar55 < 2) {
                  pvVar35 = (void *)((ulong)pvVar35 & (long)local_138 - 1U);
                }
                else if (local_138 <= pvVar35) {
                  uVar16 = 0;
                  if (local_138 != (void *)0x0) {
                    uVar16 = (ulong)pvVar35 / (ulong)local_138;
                  }
                  pvVar35 = (void *)((long)pvVar35 - uVar16 * (long)local_138);
                }
                if (pvVar35 != pvVar44) goto LAB_0049bd50;
              }
              plVar47 = (long *)*plVar47;
            } while (plVar47 != (long *)0x0);
          }
        }
        if (plVar42 == (long *)0x0) {
          lVar32 = 0;
          pvVar43 = (void *)0x0;
          if (plVar47 != (long *)0x0) goto LAB_0049bd60;
LAB_0049bd74:
          lVar15 = 0;
          pvVar44 = (void *)0x0;
        }
        else {
          pvVar43 = (void *)plVar42[3];
          lVar32 = plVar42[4];
          if (plVar47 == (long *)0x0) goto LAB_0049bd74;
LAB_0049bd60:
          pvVar44 = (void *)plVar47[3];
          lVar15 = plVar47[4];
        }
        if ((lVar32 - (long)pvVar43 != lVar15 - (long)pvVar44) ||
           (iVar14 = memcmp(pvVar43,pvVar44,lVar32 - (long)pvVar43), iVar14 != 0)) {
          local_250 = (void *)0x0;
          uStack_248 = 0;
          local_240 = 0;
          if (plVar42 == (long *)0x0) {
            lVar15 = 0;
          }
          else {
            lVar15 = plVar42[3];
          }
          local_258[0] = uVar24;
          FUN_003bf3d0(&local_250,lVar15,lVar32,lVar32 - lVar15 >> 2);
          if (local_1b8 < puStack_1b0) {
            *local_1b8 = local_258[0];
            *(undefined8 *)(local_1b8 + 4) = uStack_248;
            *(void **)(local_1b8 + 2) = local_250;
            *(undefined8 *)(local_1b8 + 6) = local_240;
            local_1b8 = local_1b8 + 8;
          }
          else {
            local_1b8 = (uint *)FUN_0049dec0(&puStack_1c0,local_258);
            if (local_250 != (void *)0x0) {
              operator_delete(local_250);
            }
          }
        }
      }
      while (puVar22 != (undefined8 *)0x0) {
        pvVar44 = (void *)*puVar22;
        local_170 = pvVar43;
        operator_delete(puVar22);
        pvVar43 = local_170;
        puVar22 = (undefined8 *)pvVar44;
      }
      local_170 = (void *)0x0;
      if (pvVar43 != (void *)0x0) {
        operator_delete(pvVar43);
      }
      pvVar43 = local_140;
      if (local_238 != (uint *)0x0) {
        local_230 = local_238;
        operator_delete(local_238);
        pvVar43 = local_140;
      }
      while (local_130 != (undefined8 *)0x0) {
        pvVar44 = (void *)local_130[3];
        pvVar35 = (void *)*local_130;
        local_140 = pvVar43;
        if (pvVar44 != (void *)0x0) {
          local_130[4] = pvVar44;
          operator_delete(pvVar44);
        }
        operator_delete(local_130);
        pvVar43 = local_140;
        local_130 = (undefined8 *)pvVar35;
      }
      local_140 = (void *)0x0;
      pvVar44 = local_118;
      puVar22 = puStack_108;
      if (pvVar43 != (void *)0x0) {
        operator_delete(pvVar43);
        pvVar44 = local_118;
        puVar22 = puStack_108;
      }
      while (puVar22 != (undefined8 *)0x0) {
        pvVar43 = (void *)puVar22[3];
        pvVar35 = (void *)*puVar22;
        local_118 = pvVar44;
        if (pvVar43 != (void *)0x0) {
          puVar22[4] = pvVar43;
          operator_delete(pvVar43);
        }
        operator_delete(puVar22);
        pvVar44 = local_118;
        puVar22 = (undefined8 *)pvVar35;
      }
      local_118 = (void *)0x0;
      pvVar43 = local_f0;
      puVar22 = local_e0;
      if (pvVar44 != (void *)0x0) {
        operator_delete(pvVar44);
        pvVar43 = local_f0;
        puVar22 = local_e0;
      }
      while (puVar22 != (undefined8 *)0x0) {
        puVar45 = (undefined8 *)*puVar22;
        local_f0 = pvVar43;
        operator_delete(puVar22);
        pvVar43 = local_f0;
        puVar22 = puVar45;
      }
      local_f0 = (void *)0x0;
      puVar22 = local_b0;
      if (pvVar43 != (void *)0x0) {
        operator_delete(pvVar43);
        puVar22 = local_b0;
      }
      while (puVar22 != (undefined8 *)0x0) {
        puVar45 = (undefined8 *)*puVar22;
        operator_delete(puVar22);
        puVar22 = puVar45;
      }
    }
    ppuVar11 = local_c0;
    local_c0 = (undefined8 **)0x0;
    if (ppuVar11 != (undefined8 **)0x0) {
      operator_delete(ppuVar11);
    }
    if ((((puStack_208 != local_200) || (puStack_1f0 != puStack_1e8)) || (local_1d8 != uStack_1d0))
       || (((puStack_1c0 != local_1b8 || (local_1a8 != puStack_1a0)) || (ppSStack_190 != local_188))
          )) {
      *(long *)(in_x0 + 200) = *(long *)(in_x0 + 200) + 1;
      FUN_0049e3d8(in_x0 + 8,&local_220);
      FUN_0049e550(in_x0 + 0xb0);
      uVar58 = local_260;
      pSVar49 = pSStack_268;
      pSStack_268 = (SemanticsDiffNode *)0x0;
      local_260 = 0;
      *(SemanticsDiffNode **)(in_x0 + 0xb8) = pSVar49;
      *(SemanticNode **)(in_x0 + 0xb0) = local_270;
      *(undefined8 *)(in_x0 + 0xc0) = uVar58;
      local_270 = (SemanticNode *)0x0;
    }
    if (ppSStack_190 != (SemanticNode **)0x0) {
      local_188 = ppSStack_190;
      operator_delete(ppSStack_190);
    }
    local_c0 = &local_1a8;
    FUN_0034f2a4(&local_c0);
    puVar54 = puStack_1c0;
    puVar46 = local_1b8;
    if (puStack_1c0 != (uint *)0x0) {
      for (; puVar46 != puVar54; puVar46 = puVar46 + -8) {
        pvVar43 = *(void **)(puVar46 + -6);
        if (pvVar43 != (void *)0x0) {
          *(void **)(puVar46 + -4) = pvVar43;
          operator_delete(pvVar43);
        }
      }
      local_1b8 = puVar54;
      operator_delete(puStack_1c0);
    }
    local_c0 = &local_1d8;
    FUN_0034f2a4(&local_c0);
    local_c0 = &puStack_1f0;
    FUN_0034f2a4(&local_c0);
    if (puStack_208 != (uint *)0x0) {
      local_200 = puStack_208;
      operator_delete(puStack_208);
    }
    local_220 = (SemanticNode *)&local_270;
    FUN_0034f2a4(&local_220);
  }
  else {
    pSVar31 = *(SemanticsDiffNode **)(in_x0 + 0xb0);
    pSVar52 = *(SemanticsDiffNode **)(in_x0 + 0xb8);
    if (pSVar31 == pSVar52) {
LAB_0049bef8:
      if (*(long *)(in_x0 + 0xb0) == *(long *)(in_x0 + 0xb8)) goto LAB_0049ade4;
      goto LAB_0049adec;
    }
    puStack_1e0 = (undefined8 *)0x0;
    puStack_1e8 = (undefined8 *)0x0;
    uStack_1d0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    puStack_1c0 = (uint *)0x0;
    local_1c8 = (undefined8 *)0x0;
    puStack_1b0 = (uint *)0x0;
    local_1b8 = (uint *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    local_1a8 = (undefined8 *)0x0;
    ppSStack_190 = (SemanticNode **)0x0;
    local_198 = (undefined8 *)0x0;
    ppSStack_180 = (SemanticNode **)0x0;
    local_188 = (SemanticNode **)0x0;
    local_210 = (long *)((ulong)local_210 & 0xffffffff00000000);
    local_220 = *(SemanticNode **)PTR_sm_frameId_0067cf90;
    local_200 = (uint *)0x0;
    puStack_208 = (uint *)0x0;
    puStack_1f0 = (undefined8 *)0x0;
    local_1f8 = (uint *)0x0;
    uStack_218 = 0;
    uVar67 = 0;
    if (((byte)SVar4 & 2) == 0) {
      uVar67 = uVar24 ^ 1;
    }
    if (uVar67 == 0) {
      if ((uVar24 != 0) && (uVar55 = *(ulong *)(in_x0 + 0x158), uVar55 != 0)) {
        if (0xccccccccccccccc < uVar55) {
LAB_0049c680:
          auVar69 = FUN_00499dcc();
          plVar47 = auVar69._8_8_;
          plVar42 = auVar69._0_8_;
          pcStack_2e8 = FUN_0049c684;
          lVar32 = tpidr_el0;
          lStack_2f8 = *(long *)(lVar32 + 0x28);
          lVar15 = *plVar42;
          puStack_2f0 = &stack0xffffffffffffffa0;
          uStack_2e0 = unaff_x27;
          plStack_2d0 = unaff_x26;
          pSStack_2c8 = pSVar52;
          ppSStack_2c0 = ppSVar51;
          pSStack_2b8 = pSVar49;
          ppSStack_2b0 = unaff_x22;
          ppSStack_2a8 = ppSVar48;
          pSStack_2a0 = pSVar31;
          if (0x11 < *(byte *)(lVar15 + 0x28) ||
              (1 << (ulong)(*(byte *)(lVar15 + 0x28) & 0x1f) & 0x2183eU) == 0) goto LAB_0049cbf8;
          uVar55 = (ulong)(*(byte *)(lVar15 + 0x30) >> 1);
          if ((*(byte *)(lVar15 + 0x30) & 1) != 0) {
            uVar55 = *(ulong *)(lVar15 + 0x38);
          }
          if (uVar55 != 0) goto LAB_0049cbf8;
          if (((ulong)*in_x3 & 1) == 0) {
            *(undefined2 *)in_x3 = 0;
          }
          else {
            *in_x3[2] = (SemanticNode)0x0;
            in_x3[1] = (SemanticNode *)0x0;
          }
          ppSVar51 = in_x3 + 3;
          if (((ulong)*ppSVar51 & 1) == 0) {
            *(undefined2 *)(in_x3 + 3) = 0;
            pSVar19 = in_x3[9];
          }
          else {
            *in_x3[5] = (SemanticNode)0x0;
            in_x3[4] = (SemanticNode *)0x0;
            pSVar19 = in_x3[9];
          }
          if (pSVar19 != (SemanticNode *)0x0) {
            pSVar19 = in_x3[8];
            while (pSVar19 != (SemanticNode *)0x0) {
              pSVar17 = *(SemanticNode **)pSVar19;
              operator_delete(pSVar19);
              pSVar19 = pSVar17;
            }
            pSVar19 = in_x3[7];
            in_x3[8] = (SemanticNode *)0x0;
            if (pSVar19 != (SemanticNode *)0x0) {
              pSVar17 = (SemanticNode *)0x0;
              do {
                *(undefined8 *)(in_x3[6] + (long)pSVar17 * 8) = 0;
                pSVar17 = pSVar17 + 1;
              } while (pSVar19 != pSVar17);
            }
            in_x3[9] = (SemanticNode *)0x0;
          }
          uVar16 = *(ulong *)(*plVar42 + 0x18);
          for (uVar55 = *(ulong *)(*plVar42 + 0x10); uVar55 != uVar16; uVar55 = uVar55 + 8) {
            FUN_0049fa84(uVar55,in_x3,ppSVar51,in_x3 + 6);
          }
          FUN_0049f970(&uStack_310,in_x3);
          uVar37 = (ulong)((byte)uStack_310 >> 1);
          uVar16 = uVar37;
          if ((uStack_310 & 1) != 0) {
            uVar16 = uStack_308;
          }
          bVar5 = (byte)uStack_310;
          if (uVar16 == 0) {
            FUN_0049f970(&uStack_328,ppSVar51);
            if ((uStack_310 & 1) != 0) {
              operator_delete(pvStack_300);
            }
            uStack_308 = uStack_320;
            uStack_310 = uStack_328;
            uVar16 = uStack_310;
            uStack_310._0_1_ = (byte)uStack_328;
            pvStack_300 = pvStack_318;
            uVar37 = (ulong)((byte)uStack_310 >> 1);
            bVar5 = (byte)uStack_310;
            uStack_310 = uVar16;
          }
          if ((bVar5 & 1) != 0) {
            uVar37 = uStack_308;
          }
          if (uVar37 == 0) {
LAB_0049cbe8:
            if ((bVar5 & 1) != 0) {
              operator_delete(pvStack_300);
            }
          }
          else {
            uVar16 = plVar47[1];
            uVar24 = *(uint *)(*plVar42 + 4);
            uVar37 = (ulong)uVar24;
            if (uVar16 != 0) {
              uVar58 = NEON_cnt(uVar16,1);
              uVar57 = NEON_uaddlv(uVar58,1);
              uVar25 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
              if (uVar25 < 2) {
                uVar55 = (ulong)((int)uVar16 - 1U & uVar24);
              }
              else {
                uVar55 = uVar37;
                if (uVar16 <= uVar37) {
                  uVar55 = 0;
                  if (uVar16 != 0) {
                    uVar55 = uVar37 / uVar16;
                  }
                  uVar55 = uVar37 - uVar55 * uVar16;
                }
              }
              puVar22 = *(undefined8 **)(*plVar47 + uVar55 * 8);
              if ((puVar22 != (undefined8 *)0x0) &&
                 (plVar50 = (long *)*puVar22, plVar50 != (long *)0x0)) {
                do {
                  uVar27 = plVar50[1];
                  if (uVar27 == uVar37) {
                    if (*(uint *)(plVar50 + 2) == uVar24) goto LAB_0049cb9c;
                  }
                  else {
                    if (uVar25 < 2) {
                      uVar27 = uVar27 & uVar16 - 1;
                    }
                    else if (uVar16 <= uVar27) {
                      uVar36 = 0;
                      if (uVar16 != 0) {
                        uVar36 = uVar27 / uVar16;
                      }
                      uVar27 = uVar27 - uVar36 * uVar16;
                    }
                    if (uVar27 != uVar55) break;
                  }
                  plVar50 = (long *)*plVar50;
                } while (plVar50 != (long *)0x0);
              }
            }
            plVar50 = (long *)operator_new(0x30);
            lVar15 = plVar47[3];
            fVar65 = *(float *)(plVar47 + 4);
            *plVar50 = 0;
            plVar50[1] = uVar37;
            *(uint *)(plVar50 + 2) = uVar24;
            plVar50[4] = 0;
            plVar50[5] = 0;
            plVar50[3] = 0;
            if ((uVar16 == 0) || (fVar65 * (float)uVar16 < (float)(lVar15 + 1))) {
              if (uVar16 < 3) {
                uVar55 = 1;
              }
              else {
                uVar55 = (ulong)((uVar16 & uVar16 - 1) != 0);
              }
              uVar55 = uVar55 | uVar16 << 1;
              uVar25 = (ulong)((float)(lVar15 + 1) / fVar65);
              if (uVar55 <= uVar25) {
                uVar55 = uVar25;
              }
              if (uVar55 - 1 == 0) {
                uVar55 = 2;
              }
              else if ((uVar55 & uVar55 - 1) != 0) {
                uVar55 = std::__ndk1::__next_prime(uVar55);
                uVar16 = plVar47[1];
              }
              if (uVar16 < uVar55) {
LAB_0049c980:
                if (uVar55 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00324008();
                }
                pvVar43 = operator_new(uVar55 << 3);
                pvVar44 = (void *)*plVar47;
                *plVar47 = (long)pvVar43;
                if (pvVar44 != (void *)0x0) {
                  operator_delete(pvVar44);
                }
                uVar16 = 0;
                plVar47[1] = uVar55;
                do {
                  *(undefined8 *)(*plVar47 + uVar16 * 8) = 0;
                  uVar16 = uVar16 + 1;
                } while (uVar55 != uVar16);
                plVar23 = (long *)plVar47[2];
                uVar16 = uVar55;
                if (plVar23 != (long *)0x0) {
                  uVar25 = plVar23[1];
                  uVar58 = NEON_cnt(uVar55,1);
                  uVar57 = NEON_uaddlv(uVar58,1);
                  uVar27 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
                  if (uVar27 < 2) {
                    uVar25 = uVar25 & uVar55 - 1;
                  }
                  else if (uVar55 <= uVar25) {
                    uVar36 = 0;
                    if (uVar55 != 0) {
                      uVar36 = uVar25 / uVar55;
                    }
                    uVar25 = uVar25 - uVar36 * uVar55;
                  }
                  *(long **)(*plVar47 + uVar25 * 8) = plVar47 + 2;
                  plVar28 = (long *)*plVar23;
                  if (plVar28 != (long *)0x0) {
                    do {
                      uVar36 = plVar28[1];
                      if (uVar27 < 2) {
                        uVar36 = uVar36 & uVar55 - 1;
                      }
                      else if (uVar55 <= uVar36) {
                        uVar7 = 0;
                        if (uVar55 != 0) {
                          uVar7 = uVar36 / uVar55;
                        }
                        uVar36 = uVar36 - uVar7 * uVar55;
                      }
                      if (uVar36 != uVar25) {
                        if (*(long *)(*plVar47 + uVar36 * 8) == 0) {
                          *(long **)(*plVar47 + uVar36 * 8) = plVar23;
                          uVar25 = uVar36;
                        }
                        else {
                          *plVar23 = *plVar28;
                          *plVar28 = **(long **)(*plVar47 + uVar36 * 8);
                          **(undefined8 **)(*plVar47 + uVar36 * 8) = plVar28;
                          plVar28 = plVar23;
                        }
                      }
                      plVar23 = plVar28;
                      plVar28 = (long *)*plVar23;
                    } while (plVar28 != (long *)0x0);
                  }
                }
              }
              else if (uVar55 < uVar16) {
                uVar25 = (ulong)((float)(ulong)plVar47[3] / *(float *)(plVar47 + 4));
                if (uVar16 < 3) {
LAB_0049cd00:
                  uVar25 = std::__ndk1::__next_prime(uVar25);
                }
                else {
                  uVar58 = NEON_cnt(uVar16,1);
                  uVar57 = NEON_uaddlv(uVar58,1);
                  if (1 < (uint)CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57)) goto LAB_0049cd00;
                  if (1 < uVar25) {
                    uVar25 = 1L << (-LZCOUNT(uVar25 - 1) & 0x3fU);
                  }
                }
                if (uVar55 <= uVar25) {
                  uVar55 = uVar25;
                }
                if (uVar55 < uVar16) {
                  if (uVar55 != 0) goto LAB_0049c980;
                  pvVar43 = (void *)*plVar47;
                  *plVar47 = 0;
                  if (pvVar43 != (void *)0x0) {
                    operator_delete(pvVar43);
                  }
                  plVar47[1] = 0;
                  uVar16 = 0;
                }
                else {
                  uVar16 = plVar47[1];
                }
              }
              if ((uVar16 & uVar16 - 1) == 0) {
                uVar55 = (ulong)((int)uVar16 - 1U & uVar24);
              }
              else {
                uVar55 = uVar37;
                if (uVar16 <= uVar37) {
                  uVar55 = 0;
                  if (uVar16 != 0) {
                    uVar55 = uVar37 / uVar16;
                  }
                  uVar55 = uVar37 - uVar55 * uVar16;
                }
              }
            }
            lVar15 = *plVar47;
            plVar23 = *(long **)(lVar15 + uVar55 * 8);
            if (plVar23 == (long *)0x0) {
              plVar23 = plVar47 + 2;
              lVar20 = *plVar23;
              *plVar23 = (long)plVar50;
              *plVar50 = lVar20;
              *(long **)(lVar15 + uVar55 * 8) = plVar23;
              if (*plVar50 != 0) {
                uVar55 = *(ulong *)(*plVar50 + 8);
                if ((uVar16 & uVar16 - 1) == 0) {
                  uVar55 = uVar55 & uVar16 - 1;
                }
                else if (uVar16 <= uVar55) {
                  uVar37 = 0;
                  if (uVar16 != 0) {
                    uVar37 = uVar55 / uVar16;
                  }
                  uVar55 = uVar55 - uVar37 * uVar16;
                }
                plVar23 = (long *)(*plVar47 + uVar55 * 8);
                goto LAB_0049cb8c;
              }
            }
            else {
              *plVar50 = *plVar23;
LAB_0049cb8c:
              *plVar23 = (long)plVar50;
            }
            plVar47[3] = plVar47[3] + 1;
LAB_0049cb9c:
            if ((plVar50[3] & 1U) != 0) {
              operator_delete((void *)plVar50[5]);
            }
            uVar55 = uStack_310;
            uStack_310 = uStack_310 & 0xffffffffffff0000;
            plVar50[5] = (long)pvStack_300;
            plVar50[4] = uStack_308;
            plVar50[3] = uVar55;
            pSVar19 = in_x3[8];
            if (pSVar19 != (SemanticNode *)0x0) {
              do {
                FUN_004987d0(in_x2,*(undefined4 *)(pSVar19 + 0x10),*(undefined4 *)(pSVar19 + 0x10));
                pSVar19 = *(SemanticNode **)pSVar19;
              } while (pSVar19 != (SemanticNode *)0x0);
              bVar5 = (byte)uStack_310;
              goto LAB_0049cbe8;
            }
          }
          lVar15 = *plVar42;
LAB_0049cbf8:
          plVar42 = *(long **)(lVar15 + 0x10);
          plVar50 = *(long **)(lVar15 + 0x18);
          do {
            if (plVar42 == plVar50) {
              if (*(long *)(lVar32 + 0x28) != lStack_2f8) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
            pSVar19 = *(SemanticNode **)(in_x2 + 8);
            if (pSVar19 != (SemanticNode *)0x0) {
              uVar24 = *(uint *)(*plVar42 + 4);
              pSVar17 = (SemanticNode *)(ulong)uVar24;
              uVar58 = NEON_cnt(pSVar19,1);
              uVar57 = NEON_uaddlv(uVar58,1);
              uVar55 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
              if (uVar55 < 2) {
                pSVar29 = (SemanticNode *)(ulong)((int)pSVar19 - 1U & uVar24);
              }
              else {
                pSVar29 = pSVar17;
                if (pSVar19 <= pSVar17) {
                  uVar16 = 0;
                  if (pSVar19 != (SemanticNode *)0x0) {
                    uVar16 = (ulong)pSVar17 / (ulong)pSVar19;
                  }
                  pSVar29 = pSVar17 + -(uVar16 * (long)pSVar19);
                }
              }
              if ((*(long **)(*(SemanticNode **)in_x2 + (long)pSVar29 * 8) != (long *)0x0) &&
                 (plVar23 = (long *)**(long **)(*(SemanticNode **)in_x2 + (long)pSVar29 * 8),
                 plVar23 != (long *)0x0)) {
                do {
                  pSVar40 = (SemanticNode *)plVar23[1];
                  if (pSVar40 == pSVar17) {
                    if (*(uint *)(plVar23 + 2) == uVar24) goto LAB_0049cc14;
                  }
                  else {
                    if (uVar55 < 2) {
                      pSVar40 = (SemanticNode *)((ulong)pSVar40 & (ulong)(pSVar19 + -1));
                    }
                    else if (pSVar19 <= pSVar40) {
                      uVar16 = 0;
                      if (pSVar19 != (SemanticNode *)0x0) {
                        uVar16 = (ulong)pSVar40 / (ulong)pSVar19;
                      }
                      pSVar40 = pSVar40 + -(uVar16 * (long)pSVar19);
                    }
                    if (pSVar40 != pSVar29) break;
                  }
                  plVar23 = (long *)*plVar23;
                } while (plVar23 != (long *)0x0);
              }
            }
            FUN_0049c684(plVar42,plVar47,in_x2,in_x3);
LAB_0049cc14:
            plVar42 = plVar42 + 1;
          } while( true );
        }
        local_188 = (SemanticNode **)operator_new(uVar55 * 0x14);
        ppSStack_180 = (SemanticNode **)((long)local_188 + uVar55 * 0x14);
      }
      ppSStack_190 = local_188;
      if (((byte)SVar4 >> 1 & 1) != 0) {
        FUN_0049cd44(&local_1a8,*(undefined8 *)(in_x0 + 0x130));
        pSVar31 = *(SemanticsDiffNode **)(in_x0 + 0xb0);
        pSVar52 = *(SemanticsDiffNode **)(in_x0 + 0xb8);
      }
      for (; pSVar31 != pSVar52; pSVar31 = pSVar31 + 0x78) {
        if ((uVar24 != 0) && (uVar55 = *(ulong *)(in_x0 + 0x148), uVar55 != 0)) {
          uVar67 = *(uint *)pSVar31;
          uVar37 = (ulong)uVar67;
          uVar58 = NEON_cnt(uVar55,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar16 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar16 < 2) {
            uVar25 = (ulong)((int)uVar55 - 1U & uVar67);
          }
          else {
            uVar25 = uVar37;
            if (uVar55 <= uVar37) {
              uVar25 = 0;
              if (uVar55 != 0) {
                uVar25 = uVar37 / uVar55;
              }
              uVar25 = uVar37 - uVar25 * uVar55;
            }
          }
          plVar42 = *(long **)(*(long *)(in_x0 + 0x140) + uVar25 * 8);
          if ((plVar42 != (long *)0x0) && (plVar42 = (long *)*plVar42, plVar42 != (long *)0x0)) {
            do {
              uVar27 = plVar42[1];
              if (uVar27 == uVar37) {
                if (*(uint *)(plVar42 + 2) == uVar67) {
                  patchBoundsNode((SemanticManager *)in_x0,pSVar31,(SemanticsDiff *)&local_220);
                  break;
                }
              }
              else {
                if (uVar16 < 2) {
                  uVar27 = uVar27 & uVar55 - 1;
                }
                else if (uVar55 <= uVar27) {
                  uVar36 = 0;
                  if (uVar55 != 0) {
                    uVar36 = uVar27 / uVar55;
                  }
                  uVar27 = uVar27 - uVar36 * uVar55;
                }
                if (uVar27 != uVar25) break;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        if ((((byte)SVar4 >> 1 & 1) != 0) && (uVar55 = *(ulong *)(in_x0 + 0x120), uVar55 != 0)) {
          uVar67 = *(uint *)pSVar31;
          uVar37 = (ulong)uVar67;
          uVar58 = NEON_cnt(uVar55,1);
          uVar57 = NEON_uaddlv(uVar58,1);
          uVar16 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar57) & 0xffffffff;
          if (uVar16 < 2) {
            uVar25 = (ulong)((int)uVar55 - 1U & uVar67);
          }
          else {
            uVar25 = uVar37;
            if (uVar55 <= uVar37) {
              uVar25 = 0;
              if (uVar55 != 0) {
                uVar25 = uVar37 / uVar55;
              }
              uVar25 = uVar37 - uVar25 * uVar55;
            }
          }
          plVar42 = *(long **)(*(long *)(in_x0 + 0x118) + uVar25 * 8);
          if ((plVar42 != (long *)0x0) && (plVar42 = (long *)*plVar42, plVar42 != (long *)0x0)) {
            do {
              uVar27 = plVar42[1];
              if (uVar27 == uVar37) {
                if (*(uint *)(plVar42 + 2) == uVar67) {
                  patchContentNode((SemanticManager *)in_x0,pSVar31,(SemanticsDiff *)&local_220);
                  break;
                }
              }
              else {
                if (uVar16 < 2) {
                  uVar27 = uVar27 & uVar55 - 1;
                }
                else if (uVar55 <= uVar27) {
                  uVar36 = 0;
                  if (uVar55 != 0) {
                    uVar36 = uVar27 / uVar55;
                  }
                  uVar27 = uVar27 - uVar36 * uVar55;
                }
                if (uVar27 != uVar25) break;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
      }
    }
    if (*(long *)(in_x0 + 0x108) - (long)*(long **)(in_x0 + 0x100) == 8) {
      local_210 = (long *)CONCAT44(local_210._4_4_,*(undefined4 *)(**(long **)(in_x0 + 0x100) + 4));
    }
    if (((((puStack_208 != local_200) || (puStack_1f0 != puStack_1e8)) || (local_1d8 != uStack_1d0))
        || ((puStack_1c0 != local_1b8 || (local_1a8 != puStack_1a0)))) ||
       (ppSStack_190 != local_188)) {
      uStack_218 = *(long *)(in_x0 + 200) + 1;
      *(ulong *)(in_x0 + 200) = uStack_218;
      FUN_0049e3d8(in_x0 + 8,&local_220);
    }
    if (ppSStack_190 != (SemanticNode **)0x0) {
      local_188 = ppSStack_190;
      operator_delete(ppSStack_190);
    }
    local_c0 = &local_1a8;
    FUN_0034f2a4(&local_c0);
    puVar54 = puStack_1c0;
    puVar46 = local_1b8;
    if (puStack_1c0 != (uint *)0x0) {
      for (; puVar46 != puVar54; puVar46 = puVar46 + -8) {
        pvVar43 = *(void **)(puVar46 + -6);
        if (pvVar43 != (void *)0x0) {
          *(void **)(puVar46 + -4) = pvVar43;
          operator_delete(pvVar43);
        }
      }
      local_1b8 = puVar54;
      operator_delete(puStack_1c0);
    }
    local_c0 = &local_1d8;
    FUN_0034f2a4(&local_c0);
    local_c0 = &puStack_1f0;
    FUN_0034f2a4(&local_c0);
    if (puStack_208 != (uint *)0x0) {
      local_200 = puStack_208;
      operator_delete(puStack_208);
    }
  }
  lVar32 = local_278;
  *in_x0 = (SemanticNode)0x0;
  if (*(long *)(in_x0 + 0x130) != 0) {
    puVar22 = (undefined8 *)*(void **)(in_x0 + 0x128);
    while (puVar22 != (undefined8 *)0x0) {
      pvVar43 = (void *)*puVar22;
      operator_delete(puVar22);
      puVar22 = (undefined8 *)pvVar43;
    }
    lVar15 = *(long *)(in_x0 + 0x120);
    *(undefined8 *)(in_x0 + 0x128) = 0;
    if (lVar15 != 0) {
      lVar20 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x118) + lVar20 * 8) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar15 != lVar20);
    }
    *(undefined8 *)(in_x0 + 0x130) = 0;
  }
  if (*(long *)(in_x0 + 0x158) != 0) {
    puVar22 = (undefined8 *)*(void **)(in_x0 + 0x150);
    while (puVar22 != (undefined8 *)0x0) {
      pvVar43 = (void *)*puVar22;
      operator_delete(puVar22);
      puVar22 = (undefined8 *)pvVar43;
    }
    lVar15 = *(long *)(in_x0 + 0x148);
    *(undefined8 *)(in_x0 + 0x150) = 0;
    if (lVar15 != 0) {
      lVar20 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x140) + lVar20 * 8) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar15 != lVar20);
    }
    *(undefined8 *)(in_x0 + 0x158) = 0;
  }
LAB_0049c384:
  if (*(long *)(lVar32 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049c684  FUN_0049c684 =====

void FUN_0049c684(long *param_1,long *param_2,long *param_3,byte *param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  ulong uVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  float fVar22;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar6 = *param_1;
  if (0x11 < *(byte *)(lVar6 + 0x28) ||
      (1 << (ulong)(*(byte *)(lVar6 + 0x28) & 0x1f) & 0x2183eU) == 0) goto LAB_0049cbf8;
  uVar9 = (ulong)(*(byte *)(lVar6 + 0x30) >> 1);
  if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
    uVar9 = *(ulong *)(lVar6 + 0x38);
  }
  if (uVar9 != 0) goto LAB_0049cbf8;
  if ((*param_4 & 1) == 0) {
    param_4[0] = 0;
    param_4[1] = 0;
  }
  else {
    **(undefined1 **)(param_4 + 0x10) = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
  }
  pbVar17 = param_4 + 0x18;
  if ((*pbVar17 & 1) == 0) {
    param_4[0x18] = 0;
    param_4[0x19] = 0;
    lVar6 = *(long *)(param_4 + 0x48);
  }
  else {
    **(undefined1 **)(param_4 + 0x28) = 0;
    param_4[0x20] = 0;
    param_4[0x21] = 0;
    param_4[0x22] = 0;
    param_4[0x23] = 0;
    param_4[0x24] = 0;
    param_4[0x25] = 0;
    param_4[0x26] = 0;
    param_4[0x27] = 0;
    lVar6 = *(long *)(param_4 + 0x48);
  }
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)*(void **)(param_4 + 0x40);
    while (puVar8 != (undefined8 *)0x0) {
      pvVar5 = (void *)*puVar8;
      operator_delete(puVar8);
      puVar8 = (undefined8 *)pvVar5;
    }
    lVar6 = *(long *)(param_4 + 0x38);
    param_4[0x40] = 0;
    param_4[0x41] = 0;
    param_4[0x42] = 0;
    param_4[0x43] = 0;
    param_4[0x44] = 0;
    param_4[0x45] = 0;
    param_4[0x46] = 0;
    param_4[0x47] = 0;
    if (lVar6 != 0) {
      lVar14 = 0;
      do {
        *(undefined8 *)(*(long *)(param_4 + 0x30) + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
    }
    param_4[0x48] = 0;
    param_4[0x49] = 0;
    param_4[0x4a] = 0;
    param_4[0x4b] = 0;
    param_4[0x4c] = 0;
    param_4[0x4d] = 0;
    param_4[0x4e] = 0;
    param_4[0x4f] = 0;
  }
  uVar19 = *(ulong *)(*param_1 + 0x18);
  for (uVar9 = *(ulong *)(*param_1 + 0x10); uVar9 != uVar19; uVar9 = uVar9 + 8) {
    FUN_0049fa84(uVar9,param_4,pbVar17,param_4 + 0x30);
  }
  FUN_0049f970(&local_80,param_4);
  uVar11 = (ulong)((byte)local_80 >> 1);
  uVar19 = uVar11;
  if ((local_80 & 1) != 0) {
    uVar19 = uStack_78;
  }
  bVar2 = (byte)local_80;
  if (uVar19 == 0) {
    FUN_0049f970(&local_98,pbVar17);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    uStack_78 = uStack_90;
    local_80 = local_98;
    uVar19 = local_80;
    local_80._0_1_ = (byte)local_98;
    local_70 = local_88;
    uVar11 = (ulong)((byte)local_80 >> 1);
    bVar2 = (byte)local_80;
    local_80 = uVar19;
  }
  if ((bVar2 & 1) != 0) {
    uVar11 = uStack_78;
  }
  if (uVar11 == 0) {
LAB_0049cbe8:
    if ((bVar2 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  else {
    uVar19 = param_2[1];
    uVar1 = *(uint *)(*param_1 + 4);
    uVar11 = (ulong)uVar1;
    if (uVar19 != 0) {
      uVar21 = NEON_cnt(uVar19,1);
      uVar20 = NEON_uaddlv(uVar21,1);
      uVar13 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
      if (uVar13 < 2) {
        uVar9 = (ulong)((int)uVar19 - 1U & uVar1);
      }
      else {
        uVar9 = uVar11;
        if (uVar19 <= uVar11) {
          uVar9 = 0;
          if (uVar19 != 0) {
            uVar9 = uVar11 / uVar19;
          }
          uVar9 = uVar11 - uVar9 * uVar19;
        }
      }
      puVar8 = *(undefined8 **)(*param_2 + uVar9 * 8);
      if ((puVar8 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar8, plVar18 != (long *)0x0)) {
        do {
          uVar12 = plVar18[1];
          if (uVar12 == uVar11) {
            if (*(uint *)(plVar18 + 2) == uVar1) goto LAB_0049cb9c;
          }
          else {
            if (uVar13 < 2) {
              uVar12 = uVar12 & uVar19 - 1;
            }
            else if (uVar19 <= uVar12) {
              uVar16 = 0;
              if (uVar19 != 0) {
                uVar16 = uVar12 / uVar19;
              }
              uVar12 = uVar12 - uVar16 * uVar19;
            }
            if (uVar12 != uVar9) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
    plVar18 = (long *)operator_new(0x30);
    lVar6 = param_2[3];
    fVar22 = *(float *)(param_2 + 4);
    *plVar18 = 0;
    plVar18[1] = uVar11;
    *(uint *)(plVar18 + 2) = uVar1;
    plVar18[4] = 0;
    plVar18[5] = 0;
    plVar18[3] = 0;
    if ((uVar19 == 0) || (fVar22 * (float)uVar19 < (float)(lVar6 + 1))) {
      if (uVar19 < 3) {
        uVar9 = 1;
      }
      else {
        uVar9 = (ulong)((uVar19 & uVar19 - 1) != 0);
      }
      uVar9 = uVar9 | uVar19 << 1;
      uVar13 = (ulong)((float)(lVar6 + 1) / fVar22);
      if (uVar9 <= uVar13) {
        uVar9 = uVar13;
      }
      if (uVar9 - 1 == 0) {
        uVar9 = 2;
      }
      else if ((uVar9 & uVar9 - 1) != 0) {
        uVar9 = std::__ndk1::__next_prime(uVar9);
        uVar19 = param_2[1];
      }
      if (uVar19 < uVar9) {
LAB_0049c980:
        if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar5 = operator_new(uVar9 << 3);
        pvVar7 = (void *)*param_2;
        *param_2 = (long)pvVar5;
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
        uVar19 = 0;
        param_2[1] = uVar9;
        do {
          *(undefined8 *)(*param_2 + uVar19 * 8) = 0;
          uVar19 = uVar19 + 1;
        } while (uVar9 != uVar19);
        plVar10 = (long *)param_2[2];
        uVar19 = uVar9;
        if (plVar10 != (long *)0x0) {
          uVar13 = plVar10[1];
          uVar21 = NEON_cnt(uVar9,1);
          uVar20 = NEON_uaddlv(uVar21,1);
          uVar12 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
          if (uVar12 < 2) {
            uVar13 = uVar13 & uVar9 - 1;
          }
          else if (uVar9 <= uVar13) {
            uVar16 = 0;
            if (uVar9 != 0) {
              uVar16 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar16 * uVar9;
          }
          *(long **)(*param_2 + uVar13 * 8) = param_2 + 2;
          plVar15 = (long *)*plVar10;
          if (plVar15 != (long *)0x0) {
            do {
              uVar16 = plVar15[1];
              if (uVar12 < 2) {
                uVar16 = uVar16 & uVar9 - 1;
              }
              else if (uVar9 <= uVar16) {
                uVar3 = 0;
                if (uVar9 != 0) {
                  uVar3 = uVar16 / uVar9;
                }
                uVar16 = uVar16 - uVar3 * uVar9;
              }
              if (uVar16 != uVar13) {
                if (*(long *)(*param_2 + uVar16 * 8) == 0) {
                  *(long **)(*param_2 + uVar16 * 8) = plVar10;
                  uVar13 = uVar16;
                }
                else {
                  *plVar10 = *plVar15;
                  *plVar15 = **(long **)(*param_2 + uVar16 * 8);
                  **(undefined8 **)(*param_2 + uVar16 * 8) = plVar15;
                  plVar15 = plVar10;
                }
              }
              plVar10 = plVar15;
              plVar15 = (long *)*plVar10;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      else if (uVar9 < uVar19) {
        uVar13 = (ulong)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
        if (uVar19 < 3) {
LAB_0049cd00:
          uVar13 = std::__ndk1::__next_prime(uVar13);
        }
        else {
          uVar21 = NEON_cnt(uVar19,1);
          uVar20 = NEON_uaddlv(uVar21,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20)) goto LAB_0049cd00;
          if (1 < uVar13) {
            uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
          }
        }
        if (uVar9 <= uVar13) {
          uVar9 = uVar13;
        }
        if (uVar9 < uVar19) {
          if (uVar9 != 0) goto LAB_0049c980;
          pvVar5 = (void *)*param_2;
          *param_2 = 0;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
          param_2[1] = 0;
          uVar19 = 0;
        }
        else {
          uVar19 = param_2[1];
        }
      }
      if ((uVar19 & uVar19 - 1) == 0) {
        uVar9 = (ulong)((int)uVar19 - 1U & uVar1);
      }
      else {
        uVar9 = uVar11;
        if (uVar19 <= uVar11) {
          uVar9 = 0;
          if (uVar19 != 0) {
            uVar9 = uVar11 / uVar19;
          }
          uVar9 = uVar11 - uVar9 * uVar19;
        }
      }
    }
    lVar6 = *param_2;
    plVar10 = *(long **)(lVar6 + uVar9 * 8);
    if (plVar10 == (long *)0x0) {
      plVar10 = param_2 + 2;
      lVar14 = *plVar10;
      *plVar10 = (long)plVar18;
      *plVar18 = lVar14;
      *(long **)(lVar6 + uVar9 * 8) = plVar10;
      if (*plVar18 != 0) {
        uVar9 = *(ulong *)(*plVar18 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar9 = uVar9 & uVar19 - 1;
        }
        else if (uVar19 <= uVar9) {
          uVar11 = 0;
          if (uVar19 != 0) {
            uVar11 = uVar9 / uVar19;
          }
          uVar9 = uVar9 - uVar11 * uVar19;
        }
        plVar10 = (long *)(*param_2 + uVar9 * 8);
        goto LAB_0049cb8c;
      }
    }
    else {
      *plVar18 = *plVar10;
LAB_0049cb8c:
      *plVar10 = (long)plVar18;
    }
    param_2[3] = param_2[3] + 1;
LAB_0049cb9c:
    if ((plVar18[3] & 1U) != 0) {
      operator_delete((void *)plVar18[5]);
    }
    uVar9 = local_80;
    local_80 = local_80 & 0xffffffffffff0000;
    plVar18[5] = (long)local_70;
    plVar18[4] = uStack_78;
    plVar18[3] = uVar9;
    plVar18 = *(long **)(param_4 + 0x40);
    if (plVar18 != (long *)0x0) {
      do {
        FUN_004987d0(param_3,(int)plVar18[2],(int)plVar18[2]);
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      bVar2 = (byte)local_80;
      goto LAB_0049cbe8;
    }
  }
  lVar6 = *param_1;
LAB_0049cbf8:
  plVar18 = *(long **)(lVar6 + 0x10);
  plVar10 = *(long **)(lVar6 + 0x18);
  do {
    if (plVar18 == plVar10) {
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar9 = param_3[1];
    if (uVar9 != 0) {
      uVar1 = *(uint *)(*plVar18 + 4);
      uVar11 = (ulong)uVar1;
      uVar21 = NEON_cnt(uVar9,1);
      uVar20 = NEON_uaddlv(uVar21,1);
      uVar19 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
      if (uVar19 < 2) {
        uVar13 = (ulong)((int)uVar9 - 1U & uVar1);
      }
      else {
        uVar13 = uVar11;
        if (uVar9 <= uVar11) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar11 / uVar9;
          }
          uVar13 = uVar11 - uVar13 * uVar9;
        }
      }
      plVar15 = *(long **)(*param_3 + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar11) {
            if (*(uint *)(plVar15 + 2) == uVar1) goto LAB_0049cc14;
          }
          else {
            if (uVar19 < 2) {
              uVar12 = uVar12 & uVar9 - 1;
            }
            else if (uVar9 <= uVar12) {
              uVar16 = 0;
              if (uVar9 != 0) {
                uVar16 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar16 * uVar9;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
    FUN_0049c684(plVar18,param_2,param_3,param_4);
LAB_0049cc14:
    plVar18 = plVar18 + 1;
  } while( true );
}


// ===== 0049cd44  FUN_0049cd44 =====

void FUN_0049cd44(long *param_1,ulong param_2,int *param_3,long param_4,long *param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  ulong uVar9;
  void *pvVar10;
  long *plVar11;
  undefined8 *puVar12;
  basic_string *pbVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  void *pvVar21;
  void *pvVar22;
  long lVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  ulong uStack_f0;
  char *pcStack_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bStack_e0;
  undefined1 uStack_df;
  undefined6 uStack_de;
  ulong uStack_d8;
  char *pcStack_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bStack_c8;
  undefined1 uStack_c7;
  undefined6 uStack_c6;
  ulong uStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  pvVar21 = (void *)*param_1;
  if (param_2 <= (ulong)((param_1[2] - (long)pvVar21 >> 3) * -0x1111111111111111)) {
    return;
  }
  if (param_2 < 0x222222222222223) {
    lVar23 = param_1[1];
    pvVar10 = operator_new(param_2 * 0x78);
    lVar1 = (long)pvVar10 + (lVar23 - (long)pvVar21);
    pvVar10 = (void *)((long)pvVar10 + param_2 * 0x78);
    if (lVar23 - (long)pvVar21 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar10;
    }
    else {
      lVar15 = 0;
      do {
        lVar2 = lVar23 + lVar15;
        lVar3 = lVar1 + lVar15;
        lVar15 = lVar15 + -0x78;
        *(undefined8 *)(lVar3 + -0x78) = *(undefined8 *)(lVar2 + -0x78);
        uVar26 = *(undefined8 *)(lVar2 + -0x68);
        uVar25 = *(undefined8 *)(lVar2 + -0x70);
        *(undefined8 *)(lVar3 + -0x60) = *(undefined8 *)(lVar2 + -0x60);
        *(undefined8 *)(lVar3 + -0x68) = uVar26;
        *(undefined8 *)(lVar3 + -0x70) = uVar25;
        uVar26 = *(undefined8 *)(lVar2 + -0x50);
        uVar25 = *(undefined8 *)(lVar2 + -0x58);
        *(undefined8 *)(lVar2 + -0x68) = 0;
        *(undefined8 *)(lVar2 + -0x60) = 0;
        *(undefined8 *)(lVar2 + -0x70) = 0;
        *(undefined8 *)(lVar3 + -0x48) = *(undefined8 *)(lVar2 + -0x48);
        *(undefined8 *)(lVar3 + -0x50) = uVar26;
        *(undefined8 *)(lVar3 + -0x58) = uVar25;
        uVar26 = *(undefined8 *)(lVar2 + -0x38);
        uVar25 = *(undefined8 *)(lVar2 + -0x40);
        *(undefined8 *)(lVar2 + -0x50) = 0;
        *(undefined8 *)(lVar2 + -0x48) = 0;
        *(undefined8 *)(lVar2 + -0x58) = 0;
        *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(lVar2 + -0x30);
        *(undefined8 *)(lVar3 + -0x38) = uVar26;
        *(undefined8 *)(lVar3 + -0x40) = uVar25;
        *(undefined8 *)(lVar2 + -0x38) = 0;
        *(undefined8 *)(lVar2 + -0x30) = 0;
        uVar26 = *(undefined8 *)(lVar2 + -0x10);
        uVar25 = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)(lVar2 + -0x40) = 0;
        uVar28 = *(undefined8 *)(lVar2 + -0x20);
        uVar27 = *(undefined8 *)(lVar2 + -0x28);
        *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar2 + -8);
        *(undefined8 *)(lVar3 + -0x10) = uVar26;
        *(undefined8 *)(lVar3 + -0x18) = uVar25;
        *(undefined8 *)(lVar3 + -0x20) = uVar28;
        *(undefined8 *)(lVar3 + -0x28) = uVar27;
      } while ((void *)(lVar23 + lVar15) != pvVar21);
      pvVar21 = (void *)*param_1;
      pvVar22 = (void *)param_1[1];
      *param_1 = lVar1 + lVar15;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar10;
      for (; pvVar22 != pvVar21; pvVar22 = (void *)((long)pvVar22 + -0x78)) {
        if ((*(byte *)((long)pvVar22 + -0x40) & 1) == 0) {
          if ((*(byte *)((long)pvVar22 + -0x58) & 1) == 0) goto LAB_0049ce84;
LAB_0049cea0:
          operator_delete(*(void **)((long)pvVar22 + -0x48));
          bVar8 = *(byte *)((long)pvVar22 + -0x70);
        }
        else {
          operator_delete(*(void **)((long)pvVar22 + -0x30));
          if ((*(byte *)((long)pvVar22 + -0x58) & 1) != 0) goto LAB_0049cea0;
LAB_0049ce84:
          bVar8 = *(byte *)((long)pvVar22 + -0x70);
        }
        if ((bVar8 & 1) != 0) {
          operator_delete(*(void **)((long)pvVar22 + -0x60));
        }
      }
    }
    if (pvVar21 == (void *)0x0) {
      return;
    }
    operator_delete(pvVar21);
    return;
  }
  auVar29 = FUN_0049a4dc();
  plVar11 = auVar29._0_8_;
  pcStack_78 = FUN_0049cedc;
  lVar1 = tpidr_el0;
  lStack_88 = *(long *)(lVar1 + 0x28);
  lVar23 = *plVar11;
  uVar16 = param_5[1];
  uVar5 = *(uint *)(lVar23 + 4);
  uVar14 = (ulong)uVar5;
  if (uVar16 != 0) {
    uVar25 = NEON_cnt(uVar16,1);
    uVar24 = NEON_uaddlv(uVar25,1);
    uVar17 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar16 - 1U & uVar5);
    }
    else {
      uVar18 = uVar14;
      if (uVar16 <= uVar14) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = uVar14 / uVar16;
        }
        uVar18 = uVar14 - uVar18 * uVar16;
      }
    }
    plVar19 = *(long **)(*param_5 + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      do {
        uVar20 = plVar19[1];
        if (uVar20 == uVar14) {
          if (*(uint *)(plVar19 + 2) == uVar5) goto LAB_0049cfd0;
        }
        else {
          if (uVar17 < 2) {
            uVar20 = uVar20 & uVar16 - 1;
          }
          else if (uVar16 <= uVar20) {
            uVar9 = 0;
            if (uVar16 != 0) {
              uVar9 = uVar20 / uVar16;
            }
            uVar20 = uVar20 - uVar9 * uVar16;
          }
          if (uVar20 != uVar18) break;
        }
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
    }
  }
  if (*(char *)(lVar23 + 0xa0) != '\0') {
LAB_0049cfd0:
    lVar15 = *(long *)(lVar23 + 0x18);
    puStack_80 = &stack0xffffffffffffffd0;
    for (lVar23 = *(long *)(lVar23 + 0x10); lVar23 != lVar15; lVar23 = lVar23 + 8) {
      FUN_0049cedc(lVar23,auVar29._8_8_ & 0xffffffff,param_3,param_4,param_5,param_6);
    }
    goto LAB_0049d254;
  }
  bStack_c8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_c7 = 0;
  uStack_b0 = 0;
  uVar16 = param_6[1];
  uStack_98 = 0;
  bStack_e0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_df = 0;
  uStack_94 = 0xffffffff;
  iStack_90 = 0;
  bStack_f8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_f7 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_fc = *(undefined4 *)(lVar23 + 0x28);
  if (uVar16 != 0) {
    uVar25 = NEON_cnt(uVar16,1);
    uVar24 = NEON_uaddlv(uVar25,1);
    uVar17 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar16 - 1U & uVar5);
    }
    else {
      uVar18 = uVar14;
      if (uVar16 <= uVar14) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = uVar14 / uVar16;
        }
        uVar18 = uVar14 - uVar18 * uVar16;
      }
    }
    plVar19 = *(long **)(*param_6 + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      do {
        uVar20 = plVar19[1];
        if (uVar20 == uVar14) {
          if (*(uint *)(plVar19 + 2) == uVar5) {
            pbVar13 = (basic_string *)(plVar19 + 3);
            goto LAB_0049d0e4;
          }
        }
        else {
          if (uVar17 < 2) {
            uVar20 = uVar20 & uVar16 - 1;
          }
          else if (uVar16 <= uVar20) {
            uVar9 = 0;
            if (uVar16 != 0) {
              uVar9 = uVar20 / uVar16;
            }
            uVar20 = uVar20 - uVar9 * uVar16;
          }
          if (uVar20 != uVar18) break;
        }
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
    }
  }
  pbVar13 = (basic_string *)(lVar23 + 0x30);
LAB_0049d0e4:
  uStack_100 = uVar5;
  puStack_80 = &stack0xffffffffffffffd0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(&bStack_f8,pbVar13);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(&bStack_e0,(basic_string *)(*plVar11 + 0x48));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(&bStack_c8,(basic_string *)(*plVar11 + 0x60));
  lVar23 = *plVar11;
  iStack_90 = *param_3;
  uVar6 = *(undefined4 *)(lVar23 + 0x2c);
  uVar7 = *(undefined4 *)(lVar23 + 0x8c);
  uVar26 = *(undefined8 *)(lVar23 + 0x84);
  uVar25 = *(undefined8 *)(lVar23 + 0x7c);
  uStack_a8 = *(undefined4 *)(lVar23 + 0x78);
  uStack_94 = auVar29._8_4_;
  *param_3 = iStack_90 + 1;
  puVar4 = *(undefined8 **)(param_4 + 8);
  uStack_b0 = CONCAT44(uVar7,uVar6);
  uStack_9c = (undefined4)uVar26;
  uStack_98 = (undefined4)((ulong)uVar26 >> 0x20);
  uStack_a4 = (undefined4)uVar25;
  uStack_a0 = (undefined4)((ulong)uVar25 >> 0x20);
  if (puVar4 < *(undefined8 **)(param_4 + 0x10)) {
    *puVar4 = CONCAT44(uStack_fc,uStack_100);
    if (((byte)bStack_f8 & 1) == 0) {
      puVar4[3] = pcStack_e8;
      puVar4[2] = uStack_f0;
      *(ulong *)(puVar4 + 1) = CONCAT62(uStack_f6,CONCAT11(uStack_f7,bStack_f8));
      if (((byte)bStack_e0 & 1) != 0) goto LAB_0049d174;
LAB_0049d1b8:
      puVar4[6] = pcStack_d0;
      puVar4[5] = uStack_d8;
      puVar4[4] = CONCAT62(uStack_de,CONCAT11(uStack_df,bStack_e0));
      if (((byte)bStack_c8 & 1) == 0) goto LAB_0049d1d0;
LAB_0049d188:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar4 + 7),pcStack_b8,uStack_c0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar4 + 1),pcStack_e8,uStack_f0);
      if (((byte)bStack_e0 & 1) == 0) goto LAB_0049d1b8;
LAB_0049d174:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar4 + 4),pcStack_d0,uStack_d8);
      if (((byte)bStack_c8 & 1) != 0) goto LAB_0049d188;
LAB_0049d1d0:
      puVar4[9] = pcStack_b8;
      puVar4[8] = uStack_c0;
      puVar4[7] = CONCAT62(uStack_c6,CONCAT11(uStack_c7,bStack_c8));
    }
    puVar12 = puVar4 + 0xf;
    *(int *)(puVar4 + 0xe) = iStack_90;
    puVar4[0xb] = CONCAT44(uStack_a4,uStack_a8);
    puVar4[10] = uStack_b0;
    puVar4[0xd] = CONCAT44(uStack_94,uStack_98);
    puVar4[0xc] = CONCAT44(uStack_9c,uStack_a0);
  }
  else {
    puVar12 = (undefined8 *)FUN_0049a25c(param_4,&uStack_100);
  }
  lVar23 = *plVar11;
  *(undefined8 **)(param_4 + 8) = puVar12;
  uStack_104 = 0;
  lVar15 = *(long *)(lVar23 + 0x18);
  for (lVar23 = *(long *)(lVar23 + 0x10); lVar23 != lVar15; lVar23 = lVar23 + 8) {
    FUN_0049cedc(lVar23,uStack_100,&uStack_104,param_4,param_5,param_6);
  }
  if (((byte)bStack_c8 & 1) != 0) {
    operator_delete(pcStack_b8);
  }
  if (((byte)bStack_e0 & 1) != 0) {
    operator_delete(pcStack_d0);
  }
  if (((byte)bStack_f8 & 1) != 0) {
    operator_delete(pcStack_e8);
  }
LAB_0049d254:
  if (*(long *)(lVar1 + 0x28) == lStack_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049cedc  FUN_0049cedc =====

void FUN_0049cedc(long *param_1,undefined4 param_2,int *param_3,long param_4,long *param_5,
                 long *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  basic_string *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_d4;
  uint local_d0;
  undefined4 uStack_cc;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8;
  undefined1 uStack_c7;
  undefined6 uStack_c6;
  ulong uStack_c0;
  char *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  ulong uStack_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  ulong uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  int iStack_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  lVar10 = *param_1;
  uVar12 = param_5[1];
  uVar3 = *(uint *)(lVar10 + 4);
  uVar11 = (ulong)uVar3;
  if (uVar12 != 0) {
    uVar18 = NEON_cnt(uVar12,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar13 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar13 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & uVar3);
    }
    else {
      uVar14 = uVar11;
      if (uVar12 <= uVar11) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar11 / uVar12;
        }
        uVar14 = uVar11 - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*param_5 + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      do {
        uVar16 = plVar15[1];
        if (uVar16 == uVar11) {
          if (*(uint *)(plVar15 + 2) == uVar3) goto LAB_0049cfd0;
        }
        else {
          if (uVar13 < 2) {
            uVar16 = uVar16 & uVar12 - 1;
          }
          else if (uVar12 <= uVar16) {
            uVar6 = 0;
            if (uVar12 != 0) {
              uVar6 = uVar16 / uVar12;
            }
            uVar16 = uVar16 - uVar6 * uVar12;
          }
          if (uVar16 != uVar14) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  if (*(char *)(lVar10 + 0xa0) != '\0') {
LAB_0049cfd0:
    lVar2 = *(long *)(lVar10 + 0x18);
    for (lVar10 = *(long *)(lVar10 + 0x10); lVar10 != lVar2; lVar10 = lVar10 + 8) {
      FUN_0049cedc(lVar10,param_2,param_3,param_4,param_5,param_6);
    }
    goto LAB_0049d254;
  }
  local_98 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_97 = 0;
  local_80 = 0;
  uVar12 = param_6[1];
  local_68 = 0;
  local_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_af = 0;
  local_64 = 0xffffffff;
  iStack_60 = 0;
  local_c8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_c7 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_cc = *(undefined4 *)(lVar10 + 0x28);
  if (uVar12 != 0) {
    uVar18 = NEON_cnt(uVar12,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar13 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar13 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & uVar3);
    }
    else {
      uVar14 = uVar11;
      if (uVar12 <= uVar11) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar11 / uVar12;
        }
        uVar14 = uVar11 - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*param_6 + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      do {
        uVar16 = plVar15[1];
        if (uVar16 == uVar11) {
          if (*(uint *)(plVar15 + 2) == uVar3) {
            pbVar9 = (basic_string *)(plVar15 + 3);
            goto LAB_0049d0e4;
          }
        }
        else {
          if (uVar13 < 2) {
            uVar16 = uVar16 & uVar12 - 1;
          }
          else if (uVar12 <= uVar16) {
            uVar6 = 0;
            if (uVar12 != 0) {
              uVar6 = uVar16 / uVar12;
            }
            uVar16 = uVar16 - uVar6 * uVar12;
          }
          if (uVar16 != uVar14) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  pbVar9 = (basic_string *)(lVar10 + 0x30);
LAB_0049d0e4:
  local_d0 = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(&local_c8,pbVar9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(&local_b0,(basic_string *)(*param_1 + 0x48));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(&local_98,(basic_string *)(*param_1 + 0x60));
  lVar10 = *param_1;
  iStack_60 = *param_3;
  uVar4 = *(undefined4 *)(lVar10 + 0x2c);
  uVar5 = *(undefined4 *)(lVar10 + 0x8c);
  uVar19 = *(undefined8 *)(lVar10 + 0x84);
  uVar18 = *(undefined8 *)(lVar10 + 0x7c);
  uStack_78 = *(undefined4 *)(lVar10 + 0x78);
  *param_3 = iStack_60 + 1;
  puVar1 = *(undefined8 **)(param_4 + 8);
  local_80 = CONCAT44(uVar5,uVar4);
  uStack_6c = (undefined4)uVar19;
  local_68 = (undefined4)((ulong)uVar19 >> 0x20);
  uStack_74 = (undefined4)uVar18;
  uStack_70 = (undefined4)((ulong)uVar18 >> 0x20);
  local_64 = param_2;
  if (puVar1 < *(undefined8 **)(param_4 + 0x10)) {
    *puVar1 = CONCAT44(uStack_cc,local_d0);
    if (((byte)local_c8 & 1) == 0) {
      puVar1[3] = local_b8;
      puVar1[2] = uStack_c0;
      *(ulong *)(puVar1 + 1) = CONCAT62(uStack_c6,CONCAT11(uStack_c7,local_c8));
      if (((byte)local_b0 & 1) != 0) goto LAB_0049d174;
LAB_0049d1b8:
      puVar1[6] = local_a0;
      puVar1[5] = uStack_a8;
      puVar1[4] = CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0));
      if (((byte)local_98 & 1) == 0) goto LAB_0049d1d0;
LAB_0049d188:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar1 + 7),local_88,uStack_90);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar1 + 1),local_b8,uStack_c0);
      if (((byte)local_b0 & 1) == 0) goto LAB_0049d1b8;
LAB_0049d174:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar1 + 4),local_a0,uStack_a8);
      if (((byte)local_98 & 1) != 0) goto LAB_0049d188;
LAB_0049d1d0:
      puVar1[9] = local_88;
      puVar1[8] = uStack_90;
      puVar1[7] = CONCAT62(uStack_96,CONCAT11(uStack_97,local_98));
    }
    puVar8 = puVar1 + 0xf;
    *(int *)(puVar1 + 0xe) = iStack_60;
    puVar1[0xb] = CONCAT44(uStack_74,uStack_78);
    puVar1[10] = local_80;
    puVar1[0xd] = CONCAT44(local_64,local_68);
    puVar1[0xc] = CONCAT44(uStack_6c,uStack_70);
  }
  else {
    puVar8 = (undefined8 *)FUN_0049a25c(param_4,&local_d0);
  }
  lVar10 = *param_1;
  *(undefined8 **)(param_4 + 8) = puVar8;
  local_d4 = 0;
  lVar2 = *(long *)(lVar10 + 0x18);
  for (lVar10 = *(long *)(lVar10 + 0x10); lVar10 != lVar2; lVar10 = lVar10 + 8) {
    FUN_0049cedc(lVar10,local_d0,&local_d4,param_4,param_5,param_6);
  }
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (((byte)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
LAB_0049d254:
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d2b0  FUN_0049d2b0 =====

void FUN_0049d2b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x19;
  long *plVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  void *local_90;
  undefined8 *puStack_88;
  long *local_80;
  ulong local_78;
  float local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 1.0;
  uVar7 = (ulong)(float)(ulong)((param_2[1] - *param_2 >> 3) * -0x1111111111111111);
  puStack_88 = (undefined8 *)0x0;
  local_90 = (void *)0x0;
  local_78 = 0;
  local_80 = (long *)0x0;
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
LAB_0049d340:
    FUN_0049f814(&local_90,uVar7);
  }
  else {
    if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__ndk1::__next_prime(uVar7);
    }
    if (uVar7 != 0) goto LAB_0049d340;
  }
  puVar18 = (undefined4 *)*param_2;
  puVar19 = (undefined4 *)param_2[1];
  if (puVar18 != puVar19) {
    do {
      puVar15 = puStack_88;
      puVar20 = (undefined8 *)(long)(int)puVar18[0x1b];
      if (puStack_88 != (undefined8 *)0x0) {
        uVar26 = NEON_cnt(puStack_88,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        uVar7 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
        if (uVar7 < 2) {
          unaff_x19 = (undefined8 *)((long)puStack_88 - 1U & (ulong)puVar20);
        }
        else {
          unaff_x19 = puVar20;
          if (puStack_88 <= puVar20) {
            uVar13 = 0;
            if (puStack_88 != (undefined8 *)0x0) {
              uVar13 = (ulong)puVar20 / (ulong)puStack_88;
            }
            unaff_x19 = (undefined8 *)((long)puVar20 - uVar13 * (long)puStack_88);
          }
        }
        puVar11 = *(undefined8 **)((long)local_90 + (long)unaff_x19 * 8);
        if ((puVar11 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar11, plVar17 != (long *)0x0))
        {
          do {
            puVar11 = (undefined8 *)plVar17[1];
            if (puVar11 == puVar20) {
              if ((int)plVar17[2] == puVar18[0x1b]) goto LAB_0049d5f4;
            }
            else {
              if (uVar7 < 2) {
                puVar11 = (undefined8 *)((ulong)puVar11 & (long)puStack_88 - 1U);
              }
              else if (puStack_88 <= puVar11) {
                uVar13 = 0;
                if (puStack_88 != (undefined8 *)0x0) {
                  uVar13 = (ulong)puVar11 / (ulong)puStack_88;
                }
                puVar11 = (undefined8 *)((long)puVar11 - uVar13 * (long)puStack_88);
              }
              if (puVar11 != unaff_x19) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
      plVar17 = (long *)operator_new(0x30);
      uVar2 = puVar18[0x1b];
      *plVar17 = 0;
      plVar17[1] = (long)puVar20;
      *(undefined4 *)(plVar17 + 2) = uVar2;
      plVar17[4] = 0;
      plVar17[5] = 0;
      plVar17[3] = 0;
      if ((puVar15 == (undefined8 *)0x0) || (local_70 * (float)puVar15 < (float)(local_78 + 1))) {
        if (puVar15 < (undefined8 *)0x3) {
          uVar7 = 1;
        }
        else {
          uVar7 = (ulong)(((ulong)puVar15 & (long)puVar15 - 1U) != 0);
        }
        puVar11 = (undefined8 *)(uVar7 | (long)puVar15 << 1);
        puVar12 = (undefined8 *)(long)((float)(local_78 + 1) / local_70);
        if (puVar11 <= puVar12) {
          puVar11 = puVar12;
        }
        if ((long)puVar11 - 1U == 0) {
          puVar11 = (undefined8 *)0x2;
        }
        else if (((ulong)puVar11 & (long)puVar11 - 1U) != 0) {
          puVar11 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar11);
          puVar15 = puStack_88;
        }
        if (puVar15 < puVar11) {
LAB_0049d4d4:
          FUN_0049f814(&local_90);
        }
        else if (puVar11 < puVar15) {
          puVar12 = (undefined8 *)(long)((float)local_78 / local_70);
          if (puVar15 < (undefined8 *)0x3) {
LAB_0049d538:
            puVar12 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar12);
          }
          else {
            uVar26 = NEON_cnt(puVar15,1);
            uVar25 = NEON_uaddlv(uVar26,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_0049d538;
            if ((undefined8 *)0x1 < puVar12) {
              puVar12 = (undefined8 *)(1L << (-LZCOUNT((long)puVar12 + -1) & 0x3fU));
            }
          }
          if (puVar11 <= puVar12) {
            puVar11 = puVar12;
          }
          if (puVar11 < puVar15) goto LAB_0049d4d4;
        }
        puVar15 = puStack_88;
        if (((ulong)puStack_88 & (long)puStack_88 - 1U) == 0) {
          unaff_x19 = (undefined8 *)((long)puStack_88 - 1U & (ulong)puVar20);
        }
        else {
          unaff_x19 = puVar20;
          if (puStack_88 <= puVar20) {
            uVar7 = 0;
            if (puStack_88 != (undefined8 *)0x0) {
              uVar7 = (ulong)puVar20 / (ulong)puStack_88;
            }
            unaff_x19 = (undefined8 *)((long)puVar20 - uVar7 * (long)puStack_88);
          }
        }
      }
      plVar8 = *(long **)((long)local_90 + (long)unaff_x19 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar17 = (long)local_80;
        *(long ***)((long)local_90 + (long)unaff_x19 * 8) = &local_80;
        local_80 = plVar17;
        if (*plVar17 != 0) {
          puVar20 = *(undefined8 **)(*plVar17 + 8);
          if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
            puVar20 = (undefined8 *)((ulong)puVar20 & (long)puVar15 - 1U);
          }
          else if (puVar15 <= puVar20) {
            uVar7 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              uVar7 = (ulong)puVar20 / (ulong)puVar15;
            }
            puVar20 = (undefined8 *)((long)puVar20 - uVar7 * (long)puVar15);
          }
          plVar8 = (long *)((long)local_90 + (long)puVar20 * 8);
          goto LAB_0049d5e4;
        }
      }
      else {
        *plVar17 = *plVar8;
LAB_0049d5e4:
        *plVar8 = (long)plVar17;
      }
      local_78 = local_78 + 1;
LAB_0049d5f4:
      puVar15 = (undefined8 *)plVar17[4];
      if (puVar15 < (undefined8 *)plVar17[5]) {
        unaff_x19 = puVar15 + 1;
        *(undefined4 *)puVar15 = puVar18[0x1c];
        *(undefined4 *)((long)puVar15 + 4) = *puVar18;
      }
      else {
        puVar20 = (undefined8 *)plVar17[3];
        lVar24 = (long)puVar15 - (long)puVar20;
        uVar7 = (lVar24 >> 3) + 1;
        if (uVar7 >> 0x3d != 0) {
          FUN_0049e8c8();
          goto LAB_0049db1c;
        }
        uVar9 = plVar17[5] - (long)puVar20;
        uVar13 = (long)uVar9 >> 2;
        if (uVar13 <= uVar7) {
          uVar13 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar13 = 0x1fffffffffffffff;
        }
        if (uVar13 >> 0x3d != 0) {
LAB_0049db14:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar6 = operator_new(uVar13 * 8);
        puVar11 = (undefined8 *)((long)pvVar6 + lVar24);
        unaff_x19 = puVar11 + 1;
        *(undefined4 *)puVar11 = puVar18[0x1c];
        *(undefined4 *)((long)pvVar6 + (lVar24 >> 3) * 8 + 4) = *puVar18;
        if ((long)puVar15 - (long)puVar20 != 0) {
          uVar7 = ((long)puVar15 - (long)puVar20) - 8;
          if ((0x17 < uVar7) && (0x1f < (ulong)((long)puVar20 - (long)pvVar6))) {
            puVar16 = puVar15 + -2;
            puVar12 = (undefined8 *)((long)pvVar6 + lVar24 + -0x10);
            uVar7 = (uVar7 >> 3) + 1;
            uVar14 = uVar7 & 0x3ffffffffffffffc;
            puVar15 = puVar15 + -uVar14;
            uVar9 = uVar14;
            do {
              puVar4 = puVar16 + -1;
              uVar28 = puVar16[-2];
              uVar27 = puVar16[1];
              uVar26 = *puVar16;
              uVar9 = uVar9 - 4;
              puVar16 = puVar16 + -4;
              puVar12[-1] = *puVar4;
              puVar12[-2] = uVar28;
              puVar12[1] = uVar27;
              *puVar12 = uVar26;
              puVar12 = puVar12 + -4;
            } while (uVar9 != 0);
            puVar11 = puVar11 + -uVar14;
            if (uVar7 == uVar14) goto LAB_0049d6e8;
          }
          do {
            puVar15 = puVar15 + -1;
            puVar11 = puVar11 + -1;
            *puVar11 = *puVar15;
          } while (puVar15 != puVar20);
        }
LAB_0049d6e8:
        plVar17[3] = (long)puVar11;
        plVar17[4] = (long)unaff_x19;
        plVar17[5] = (long)((long)pvVar6 + uVar13 * 8);
        if (puVar20 != (undefined8 *)0x0) {
          operator_delete(puVar20);
        }
      }
      puVar18 = puVar18 + 0x1e;
      plVar17[4] = (long)unaff_x19;
    } while (puVar18 != puVar19);
  }
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar7 = (ulong)(float)local_78;
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) == 0) {
    uVar13 = 0;
    bVar5 = true;
    if (uVar7 == 0) {
LAB_0049d768:
      if (bVar5) goto LAB_0049d7e8;
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar13 < 3) {
LAB_0049d7c4:
        uVar9 = std::__ndk1::__next_prime(uVar9);
      }
      else {
        uVar26 = NEON_cnt(uVar13,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_0049d7c4;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar13 <= uVar7) goto LAB_0049d7e8;
    }
  }
  else {
    uVar7 = std::__ndk1::__next_prime(uVar7);
    uVar13 = param_1[1];
    bVar5 = uVar13 <= uVar7;
    if (uVar7 <= uVar13) goto LAB_0049d768;
  }
  FUN_003f5e70(param_1,uVar7);
LAB_0049d7e8:
  plVar17 = local_80;
  if (local_80 != (long *)0x0) {
    do {
      lVar23 = plVar17[3];
      lVar1 = plVar17[4];
      lVar24 = 0;
      if (lVar1 != lVar23) {
        lVar24 = LZCOUNT(lVar1 - lVar23 >> 3) * -2 + 0x7e;
      }
      FUN_0049e8dc(lVar23,lVar1,lVar24,1);
      lVar24 = FUN_003f5bac(param_1,(int)plVar17[2]);
      puVar18 = *(undefined4 **)(lVar24 + 0x18);
      uVar7 = plVar17[4] - plVar17[3] >> 3;
      if ((ulong)(*(long *)(lVar24 + 0x28) - (long)puVar18 >> 2) < uVar7) {
        if (uVar7 >> 0x3e != 0) {
LAB_0049db10:
                    /* WARNING: Subroutine does not return */
          FUN_003b1ebc();
        }
        puVar21 = *(undefined4 **)(lVar24 + 0x20);
        pvVar6 = operator_new(plVar17[4] - plVar17[3] >> 1);
        lVar23 = (long)puVar21 - (long)puVar18;
        puVar19 = (undefined4 *)((long)pvVar6 + lVar23);
        puVar10 = puVar19;
        if (lVar23 != 0) {
          if ((0x1b < lVar23 - 4U) && (0x1f < (ulong)((long)puVar18 - (long)pvVar6))) {
            uVar13 = (lVar23 - 4U >> 2) + 1;
            uVar14 = uVar13 & 0x7ffffffffffffff8;
            puVar15 = (undefined8 *)((long)pvVar6 + lVar23 + -0x10);
            puVar20 = (undefined8 *)(puVar21 + -4);
            uVar9 = uVar14;
            do {
              puVar11 = puVar20 + -1;
              uVar28 = puVar20[-2];
              uVar27 = puVar20[1];
              uVar26 = *puVar20;
              uVar9 = uVar9 - 8;
              puVar20 = puVar20 + -4;
              puVar15[-1] = *puVar11;
              puVar15[-2] = uVar28;
              puVar15[1] = uVar27;
              *puVar15 = uVar26;
              puVar15 = puVar15 + -4;
            } while (uVar9 != 0);
            puVar10 = puVar19 + -uVar14;
            puVar21 = puVar21 + -uVar14;
            if (uVar13 == uVar14) goto LAB_0049d904;
          }
          do {
            puVar21 = puVar21 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar21;
          } while (puVar21 != puVar18);
        }
LAB_0049d904:
        *(undefined4 **)(lVar24 + 0x18) = puVar10;
        *(undefined4 **)(lVar24 + 0x20) = puVar19;
        *(void **)(lVar24 + 0x28) = (void *)((long)pvVar6 + uVar7 * 4);
        if (puVar18 != (undefined4 *)0x0) {
          operator_delete(puVar18);
        }
      }
      lVar23 = plVar17[3];
      lVar1 = plVar17[4];
      if (lVar23 != lVar1) {
        puVar18 = *(undefined4 **)(lVar24 + 0x20);
        do {
          if (puVar18 < *(undefined4 **)(lVar24 + 0x28)) {
            *puVar18 = *(undefined4 *)(lVar23 + 4);
            puVar18 = puVar18 + 1;
          }
          else {
            puVar19 = *(undefined4 **)(lVar24 + 0x18);
            lVar22 = (long)puVar18 - (long)puVar19;
            uVar7 = (lVar22 >> 2) + 1;
            if (uVar7 >> 0x3e != 0) goto LAB_0049db10;
            uVar9 = (long)*(undefined4 **)(lVar24 + 0x28) - (long)puVar19;
            uVar13 = (long)uVar9 >> 1;
            if (uVar13 <= uVar7) {
              uVar13 = uVar7;
            }
            if (0x7ffffffffffffffb < uVar9) {
              uVar13 = 0x3fffffffffffffff;
            }
            if (uVar13 == 0) {
              pvVar6 = (void *)0x0;
            }
            else {
              if (uVar13 >> 0x3e != 0) goto LAB_0049db14;
              pvVar6 = operator_new(uVar13 << 2);
            }
            puVar10 = (undefined4 *)((long)pvVar6 + (lVar22 >> 2) * 4);
            puVar21 = puVar10 + 1;
            *puVar10 = *(undefined4 *)(lVar23 + 4);
            if ((long)puVar18 - (long)puVar19 != 0) {
              uVar7 = ((long)puVar18 - (long)puVar19) - 4;
              if ((((0xab < uVar7) &&
                   (uVar9 = (long)pvVar6 + lVar22 + -4,
                   uVar9 - (uVar7 & 0xfffffffffffffffc) <= uVar9)) &&
                  ((undefined4 *)((long)(puVar18 + -1) - (uVar7 & 0xfffffffffffffffc)) <=
                   puVar18 + -1)) && (0x1f < (ulong)((long)puVar18 + (-lVar22 - (long)pvVar6)))) {
                puVar15 = (undefined8 *)(puVar10 + -4);
                puVar20 = (undefined8 *)(puVar18 + -4);
                uVar7 = (uVar7 >> 2) + 1;
                uVar14 = uVar7 & 0x7ffffffffffffff8;
                puVar18 = puVar18 + -uVar14;
                uVar9 = uVar14;
                do {
                  puVar11 = puVar20 + -1;
                  uVar28 = puVar20[-2];
                  uVar27 = puVar20[1];
                  uVar26 = *puVar20;
                  uVar9 = uVar9 - 8;
                  puVar20 = puVar20 + -4;
                  puVar15[-1] = *puVar11;
                  puVar15[-2] = uVar28;
                  puVar15[1] = uVar27;
                  *puVar15 = uVar26;
                  puVar15 = puVar15 + -4;
                } while (uVar9 != 0);
                puVar10 = puVar10 + -uVar14;
                if (uVar7 == uVar14) goto LAB_0049d9e4;
              }
              do {
                puVar18 = puVar18 + -1;
                puVar10 = puVar10 + -1;
                *puVar10 = *puVar18;
              } while (puVar18 != puVar19);
            }
LAB_0049d9e4:
            *(undefined4 **)(lVar24 + 0x18) = puVar10;
            *(undefined4 **)(lVar24 + 0x20) = puVar21;
            *(void **)(lVar24 + 0x28) = (void *)((long)pvVar6 + uVar13 * 4);
            puVar18 = puVar21;
            if (puVar19 != (undefined4 *)0x0) {
              operator_delete(puVar19);
            }
          }
          lVar23 = lVar23 + 8;
          *(undefined4 **)(lVar24 + 0x20) = puVar18;
        } while (lVar23 != lVar1);
      }
      plVar17 = (long *)*plVar17;
      plVar8 = local_80;
    } while (plVar17 != (long *)0x0);
    while (plVar8 != (long *)0x0) {
      pvVar6 = (void *)plVar8[3];
      plVar17 = (long *)*plVar8;
      if (pvVar6 != (void *)0x0) {
        plVar8[4] = (long)pvVar6;
        operator_delete(pvVar6);
      }
      operator_delete(plVar8);
      plVar8 = plVar17;
    }
  }
  pvVar6 = local_90;
  local_90 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_0049db1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049db20  FUN_0049db20 =====

void FUN_0049db20(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  
  uVar1 = (ulong)((float)param_2 / *(float *)(param_1 + 0x20));
  if (uVar1 - 1 == 0) {
    uVar1 = 2;
  }
  else if ((uVar1 & uVar1 - 1) != 0) {
    uVar1 = std::__ndk1::__next_prime(uVar1);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < uVar1) goto LAB_0049db78;
  if (uVar3 <= uVar1) {
    return;
  }
  uVar2 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if (uVar3 < 3) {
LAB_0049dbe0:
    uVar2 = std::__ndk1::__next_prime(uVar2);
  }
  else {
    uVar5 = NEON_cnt(uVar3,1);
    uVar4 = NEON_uaddlv(uVar5,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4)) goto LAB_0049dbe0;
    if (1 < uVar2) {
      uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
    }
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar3 <= uVar1) {
    return;
  }
LAB_0049db78:
  FUN_0049e76c(param_1);
  return;
}


// ===== 0049dc1c  FUN_0049dc1c =====

undefined8 FUN_0049dc1c(long *param_1,int param_2,undefined4 param_3)

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
      unaff_x24 = uVar8 - 1 & uVar9;
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
          if ((int)plVar5[2] == param_2) {
            return 0;
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
LAB_0049dd80:
      FUN_0049e76c(param_1);
    }
    else if (uVar6 < uVar8) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_0049ddec:
        uVar7 = std::__ndk1::__next_prime(uVar7);
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10)) goto LAB_0049ddec;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar8) goto LAB_0049dd80;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
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
    if (lVar4 == 0) goto LAB_0049de9c;
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
LAB_0049de9c:
  param_1[3] = param_1[3] + 1;
  return 1;
}


// ===== 0049dec0  FUN_0049dec0 =====

undefined4 * FUN_0049dec0(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar13 = param_1[1] - *param_1;
  lVar10 = lVar13 >> 5;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 >> 0x3b == 0) {
      pvVar4 = operator_new(uVar7 * 0x20);
      uVar15 = *(undefined8 *)(param_2 + 4);
      uVar14 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      uVar8 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 6) = 0;
      puVar2 = (undefined4 *)((long)pvVar4 + lVar13);
      pvVar12 = (void *)*param_1;
      pvVar11 = (void *)param_1[1];
      uVar3 = *param_2;
      *(undefined8 *)((long)pvVar4 + lVar10 * 0x20 + 0x10) = uVar15;
      *(undefined8 *)((long)pvVar4 + lVar10 * 0x20 + 8) = uVar14;
      puVar9 = puVar2 + 8;
      *puVar2 = uVar3;
      pvVar5 = (void *)((long)pvVar4 + uVar7 * 0x20);
      *(undefined8 *)((long)pvVar4 + lVar10 * 0x20 + 0x18) = 0;
      *(undefined8 *)((long)pvVar4 + lVar10 * 0x20 + 0x18) = uVar8;
      if (pvVar11 == pvVar12) {
        *param_1 = (long)puVar2;
        param_1[1] = (long)puVar9;
        param_1[2] = (long)pvVar5;
      }
      else {
        lVar10 = 0;
        do {
          lVar13 = lVar10 + -0x20;
          uVar8 = *(undefined8 *)((long)pvVar11 + lVar10 + -0x18);
          uVar3 = *(undefined4 *)((long)pvVar11 + lVar10 + -0x20);
          *(undefined8 *)((long)puVar2 + lVar10 + -0x10) =
               *(undefined8 *)((long)pvVar11 + lVar10 + -0x10);
          *(undefined8 *)((long)puVar2 + lVar10 + -0x18) = uVar8;
          uVar8 = *(undefined8 *)((long)pvVar11 + lVar10 + -8);
          *(undefined4 *)((long)puVar2 + lVar10 + -0x20) = uVar3;
          *(undefined8 *)((long)puVar2 + lVar10 + -8) = uVar8;
          *(undefined8 *)((long)pvVar11 + lVar10 + -0x18) = 0;
          *(undefined8 *)((long)pvVar11 + lVar10 + -0x10) = 0;
          *(undefined8 *)((long)pvVar11 + lVar10 + -8) = 0;
          lVar10 = lVar13;
        } while ((void *)((long)pvVar11 + lVar13) != pvVar12);
        pvVar11 = (void *)*param_1;
        pvVar12 = (void *)param_1[1];
        *param_1 = (long)puVar2 + lVar13;
        param_1[1] = (long)puVar9;
        param_1[2] = (long)pvVar5;
        for (; pvVar12 != pvVar11; pvVar12 = (void *)((long)pvVar12 + -0x20)) {
          pvVar5 = *(void **)((long)pvVar12 + -0x18);
          if (pvVar5 != (void *)0x0) {
            *(void **)((long)pvVar12 + -0x10) = pvVar5;
            operator_delete(pvVar5);
          }
        }
      }
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
      return puVar9;
    }
  }
  else {
    FUN_0049e758();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 0049e018  FUN_0049e018 =====

void FUN_0049e018(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  
  uVar1 = (ulong)((float)param_2 / *(float *)(param_1 + 0x20));
  if (uVar1 - 1 == 0) {
    uVar1 = 2;
  }
  else if ((uVar1 & uVar1 - 1) != 0) {
    uVar1 = std::__ndk1::__next_prime(uVar1);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < uVar1) goto LAB_0049e070;
  if (uVar3 <= uVar1) {
    return;
  }
  uVar2 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if (uVar3 < 3) {
LAB_0049e0d8:
    uVar2 = std::__ndk1::__next_prime(uVar2);
  }
  else {
    uVar5 = NEON_cnt(uVar3,1);
    uVar4 = NEON_uaddlv(uVar5,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4)) goto LAB_0049e0d8;
    if (1 < uVar2) {
      uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
    }
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar3 <= uVar1) {
    return;
  }
LAB_0049e070:
  FUN_0049e5fc(param_1);
  return;
}


// ===== 0049e114  FUN_0049e114 =====

void FUN_0049e114(long *param_1,uint param_2,undefined4 *param_3)

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
      unaff_x23 = (ulong)((int)uVar9 - 1U & param_2);
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
          if (*(uint *)(plVar5 + 2) == param_2) {
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
  plVar5 = (long *)operator_new(0x20);
  lVar3 = param_1[3];
  uVar1 = *param_3;
  fVar13 = *(float *)(param_1 + 4);
  *plVar5 = 0;
  plVar5[1] = uVar10;
  *(undefined4 *)(plVar5 + 2) = uVar1;
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
LAB_0049e284:
      FUN_0049e5fc(param_1);
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar9 < 3) {
LAB_0049e2f0:
        uVar7 = std::__ndk1::__next_prime(uVar7);
      }
      else {
        uVar12 = NEON_cnt(uVar9,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11)) goto LAB_0049e2f0;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) goto LAB_0049e284;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar9 - 1U & param_2);
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
    if (*plVar5 == 0) goto LAB_0049e3b8;
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
LAB_0049e3b8:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 0049e3d8  FUN_0049e3d8 =====

undefined8 * FUN_0049e3d8(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  pvVar1 = (void *)param_1[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar6;
  *param_1 = uVar5;
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_0049e550(param_1 + 6);
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_0049e550(param_1 + 9);
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  puVar3 = param_1 + 0xc;
  pvVar1 = (void *)*puVar3;
  if (pvVar1 != (void *)0x0) {
    pvVar4 = (void *)param_1[0xd];
    pvVar2 = pvVar1;
    if (pvVar4 != pvVar1) {
      do {
        pvVar2 = *(void **)((long)pvVar4 + -0x18);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar4 + -0x10) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x20);
      } while (pvVar4 != pvVar1);
      pvVar2 = (void *)*puVar3;
    }
    param_1[0xd] = pvVar1;
    operator_delete(pvVar2);
    *puVar3 = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  uVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  FUN_0049e550(param_1 + 0xf);
  uVar5 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar5;
  param_1[0x11] = param_2[0x11];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  pvVar1 = (void *)param_1[0x12];
  if (pvVar1 != (void *)0x0) {
    param_1[0x13] = pvVar1;
    operator_delete(pvVar1);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  uVar5 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  param_1[0x14] = param_2[0x14];
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return param_1;
}


// ===== 0049e550  FUN_0049e550 =====

void FUN_0049e550(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        if ((*(byte *)((long)pvVar4 + -0x40) & 1) == 0) {
          if ((*(byte *)((long)pvVar4 + -0x58) & 1) == 0) goto LAB_0049e59c;
LAB_0049e5b8:
          operator_delete(*(void **)((long)pvVar4 + -0x48));
          bVar1 = *(byte *)((long)pvVar4 + -0x70);
        }
        else {
          operator_delete(*(void **)((long)pvVar4 + -0x30));
          if ((*(byte *)((long)pvVar4 + -0x58) & 1) != 0) goto LAB_0049e5b8;
LAB_0049e59c:
          bVar1 = *(byte *)((long)pvVar4 + -0x70);
        }
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -0x60));
        }
        pvVar4 = (void *)((long)pvVar4 + -0x78);
      } while (pvVar4 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 0049e5fc  FUN_0049e5fc =====

void FUN_0049e5fc(long *param_1,ulong param_2)

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


// ===== 0049e758  FUN_0049e758 =====

void FUN_0049e758(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0049e76c  FUN_0049e76c =====

void FUN_0049e76c(long *param_1,ulong param_2)

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


// ===== 0049e8c8  FUN_0049e8c8 =====

void FUN_0049e8c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0049e8dc  FUN_0049e8dc =====

void FUN_0049e8dc(uint *param_1,uint *param_2,long param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  uint *puVar22;
  
LAB_0049e90c:
  puVar11 = param_2 + -2;
  puVar10 = param_2 + -1;
  puVar17 = param_1;
LAB_0049e924:
  do {
    param_1 = puVar17;
    uVar14 = (long)param_2 - (long)param_1 >> 3;
    if (uVar14 - 2 == 0 || (long)uVar14 < 2) {
      if (uVar14 < 2) {
        return;
      }
      if (uVar14 == 2) {
        uVar7 = *param_1;
        if (uVar7 <= *puVar11) {
          return;
        }
        *param_1 = *puVar11;
        *puVar11 = uVar7;
        uVar7 = param_1[1];
        param_1[1] = *puVar10;
        *puVar10 = uVar7;
        return;
      }
    }
    else {
      if (uVar14 == 3) {
        uVar7 = param_1[2];
        uVar6 = *param_1;
        uVar19 = *puVar11;
        if (uVar7 < uVar6) {
          if (uVar19 < uVar7) {
            *param_1 = uVar19;
            puVar12 = param_1 + 1;
          }
          else {
            *param_1 = uVar7;
            puVar12 = param_1 + 3;
            uVar7 = *puVar12;
            *puVar12 = param_1[1];
            param_1[1] = uVar7;
            param_1[2] = uVar6;
            if (uVar6 <= *puVar11) {
              return;
            }
            param_1[2] = *puVar11;
          }
          *puVar11 = uVar6;
          puVar17 = puVar10;
        }
        else {
          if (uVar7 <= uVar19) {
            return;
          }
          param_1[2] = uVar19;
          *puVar11 = uVar7;
          puVar17 = param_1 + 3;
          uVar7 = *puVar17;
          *puVar17 = *puVar10;
          *puVar10 = uVar7;
          uVar7 = *param_1;
          if (uVar7 <= param_1[2]) {
            return;
          }
          *param_1 = param_1[2];
          puVar12 = param_1 + 1;
          param_1[2] = uVar7;
        }
        uVar7 = *puVar12;
        *puVar12 = *puVar17;
        *puVar17 = uVar7;
        return;
      }
      if (uVar14 == 4) {
        FUN_0049f3cc(param_1,param_1 + 2,param_1 + 4,puVar11);
        return;
      }
      if (uVar14 == 5) {
        FUN_0049f3cc(param_1,param_1 + 2,param_1 + 4,param_1 + 6);
        uVar7 = param_1[6];
        if (uVar7 <= *puVar11) {
          return;
        }
        param_1[6] = *puVar11;
        *puVar11 = uVar7;
        uVar7 = param_1[7];
        param_1[7] = *puVar10;
        *puVar10 = uVar7;
        uVar7 = param_1[6];
        uVar6 = param_1[4];
        if (uVar6 <= uVar7) {
          return;
        }
        uVar19 = param_1[2];
        uVar3 = param_1[7];
        uVar4 = param_1[5];
        param_1[4] = uVar7;
        param_1[5] = uVar3;
        param_1[6] = uVar6;
        param_1[7] = uVar4;
        if (uVar19 <= uVar7) {
          return;
        }
        uVar6 = *param_1;
        uVar4 = param_1[3];
        param_1[2] = uVar7;
        param_1[3] = uVar3;
        param_1[4] = uVar19;
        param_1[5] = uVar4;
        if (uVar6 <= uVar7) {
          return;
        }
        uVar19 = param_1[1];
        *param_1 = uVar7;
        param_1[1] = uVar3;
        param_1[2] = uVar6;
        param_1[3] = uVar19;
        return;
      }
    }
    if ((long)uVar14 < 0x18) {
      puVar17 = param_1 + 2;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar17 == param_2) {
          return;
        }
        puVar11 = param_1 + 3;
        do {
          puVar10 = puVar17;
          uVar7 = *param_1;
          if (param_1[2] < uVar7) {
            uVar8 = *(undefined8 *)puVar10;
            puVar17 = puVar11;
            do {
              puVar12 = puVar17;
              puVar12[-1] = uVar7;
              uVar7 = puVar12[-5];
              uVar6 = (uint)uVar8;
              *puVar12 = puVar12[-2];
              puVar17 = puVar12 + -2;
            } while (uVar6 < uVar7);
            puVar12[-3] = uVar6;
            puVar12[-2] = (uint)((ulong)uVar8 >> 0x20);
          }
          puVar11 = puVar11 + 2;
          puVar17 = puVar10 + 2;
          param_1 = puVar10;
        } while (puVar10 + 2 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar17 == param_2) {
        return;
      }
      lVar21 = 0;
      puVar11 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar9 = uVar14 - 2 >> 1;
      uVar13 = uVar9;
      goto LAB_0049f0e4;
    }
    uVar13 = uVar14 >> 1;
    uVar7 = *puVar11;
    puVar17 = param_1 + uVar13 * 2;
    if (uVar14 < 0x81) {
      uVar6 = *param_1;
      uVar19 = *puVar17;
      if (uVar6 < uVar19) {
        puVar12 = puVar17 + 1;
        if (uVar7 < uVar6) {
          *puVar17 = uVar7;
          puVar15 = puVar12;
        }
        else {
          *puVar17 = uVar6;
          uVar7 = *puVar12;
          puVar15 = param_1 + 1;
          *param_1 = uVar19;
          *puVar12 = *puVar15;
          *puVar15 = uVar7;
          if (uVar19 <= *puVar11) goto LAB_0049ed0c;
          *param_1 = *puVar11;
        }
        *puVar11 = uVar19;
        puVar12 = puVar10;
        goto LAB_0049ecfc;
      }
      if (uVar7 < uVar6) {
        *param_1 = uVar7;
        *puVar11 = uVar6;
        puVar12 = param_1 + 1;
        uVar7 = *puVar12;
        *puVar12 = *puVar10;
        *puVar10 = uVar7;
        uVar7 = *puVar17;
        if (*param_1 < uVar7) {
          *puVar17 = *param_1;
          puVar15 = puVar17 + 1;
          *param_1 = uVar7;
          goto LAB_0049ecfc;
        }
      }
    }
    else {
      uVar6 = *puVar17;
      uVar19 = *param_1;
      if (uVar6 < uVar19) {
        if (uVar7 < uVar6) {
          *param_1 = uVar7;
          puVar15 = param_1 + 1;
        }
        else {
          *param_1 = uVar6;
          puVar12 = param_1 + 1;
          uVar7 = *puVar12;
          puVar15 = puVar12 + uVar13 * 2;
          *puVar17 = uVar19;
          *puVar12 = *puVar15;
          *puVar15 = uVar7;
          if (uVar19 <= *puVar11) goto LAB_0049ea98;
          *puVar17 = *puVar11;
        }
        *puVar11 = uVar19;
        puVar12 = puVar10;
LAB_0049ea88:
        uVar7 = *puVar15;
        *puVar15 = *puVar12;
        *puVar12 = uVar7;
      }
      else if (uVar7 < uVar6) {
        *puVar17 = uVar7;
        *puVar11 = uVar6;
        puVar12 = puVar17 + 1;
        uVar7 = *puVar12;
        *puVar12 = *puVar10;
        *puVar10 = uVar7;
        uVar7 = *param_1;
        if (*puVar17 < uVar7) {
          puVar15 = param_1 + 1;
          *param_1 = *puVar17;
          *puVar17 = uVar7;
          goto LAB_0049ea88;
        }
      }
LAB_0049ea98:
      uVar7 = param_1[2];
      uVar19 = param_2[-4];
      puVar12 = param_1 + (uVar13 - 1) * 2;
      uVar6 = *puVar12;
      if (uVar6 < uVar7) {
        if (uVar19 < uVar6) {
          param_1[2] = uVar19;
          puVar16 = param_1 + 3;
        }
        else {
          uVar19 = param_1[3];
          puVar16 = puVar12 + 1;
          uVar3 = *puVar16;
          param_1[2] = uVar6;
          param_1[3] = uVar3;
          *puVar12 = uVar7;
          *puVar16 = uVar19;
          if (uVar7 <= param_2[-4]) goto LAB_0049eb88;
          *puVar12 = param_2[-4];
        }
        param_2[-4] = uVar7;
        puVar15 = param_2 + -3;
LAB_0049eb78:
        uVar7 = *puVar16;
        *puVar16 = *puVar15;
        *puVar15 = uVar7;
      }
      else if (uVar19 < uVar6) {
        *puVar12 = uVar19;
        param_2[-4] = uVar6;
        puVar15 = puVar12 + 1;
        uVar7 = *puVar15;
        *puVar15 = param_2[-3];
        param_2[-3] = uVar7;
        uVar7 = param_1[2];
        if (*puVar12 < uVar7) {
          param_1[2] = *puVar12;
          puVar16 = param_1 + 3;
          *puVar12 = uVar7;
          goto LAB_0049eb78;
        }
      }
LAB_0049eb88:
      uVar6 = param_1[4];
      uVar19 = param_2[-6];
      puVar15 = param_1 + (uVar13 + 1) * 2;
      uVar7 = *puVar15;
      if (uVar7 < uVar6) {
        if (uVar19 < uVar7) {
          param_1[4] = uVar19;
          puVar22 = param_1 + 5;
        }
        else {
          uVar19 = param_1[5];
          puVar22 = puVar15 + 1;
          uVar3 = *puVar22;
          param_1[4] = uVar7;
          param_1[5] = uVar3;
          *puVar15 = uVar6;
          *puVar22 = uVar19;
          if (uVar6 <= param_2[-6]) goto LAB_0049ec40;
          *puVar15 = param_2[-6];
        }
        param_2[-6] = uVar6;
        puVar16 = param_2 + -5;
LAB_0049ec2c:
        uVar7 = *puVar22;
        *puVar22 = *puVar16;
        *puVar16 = uVar7;
        uVar6 = *puVar15;
      }
      else {
        uVar6 = uVar7;
        if (uVar19 < uVar7) {
          *puVar15 = uVar19;
          param_2[-6] = uVar7;
          puVar16 = puVar15 + 1;
          uVar7 = *puVar16;
          *puVar16 = param_2[-5];
          param_2[-5] = uVar7;
          uVar6 = *puVar15;
          uVar7 = param_1[4];
          if (uVar6 < uVar7) {
            param_1[4] = uVar6;
            puVar22 = param_1 + 5;
            *puVar15 = uVar7;
            goto LAB_0049ec2c;
          }
        }
      }
LAB_0049ec40:
      uVar7 = *puVar17;
      uVar19 = *puVar12;
      if (uVar7 < uVar19) {
        puVar16 = puVar12 + 1;
        if (uVar6 < uVar7) {
          *puVar12 = uVar6;
          puVar12 = puVar16;
        }
        else {
          *puVar12 = uVar7;
          uVar7 = *puVar16;
          puVar12 = puVar17 + 1;
          *puVar17 = uVar19;
          *puVar16 = *puVar12;
          *puVar12 = uVar7;
          uVar7 = uVar19;
          if (uVar19 <= uVar6) goto LAB_0049ece8;
          *puVar17 = uVar6;
        }
        puVar16 = puVar15 + 1;
        *puVar15 = uVar19;
LAB_0049ecd4:
        uVar7 = *puVar12;
        *puVar12 = *puVar16;
        *puVar16 = uVar7;
        uVar7 = *puVar17;
      }
      else if (uVar6 < uVar7) {
        uVar3 = puVar15[1];
        puVar16 = puVar17 + 1;
        uVar4 = *puVar16;
        *puVar17 = uVar6;
        *puVar16 = uVar3;
        *puVar15 = uVar7;
        puVar15[1] = uVar4;
        uVar7 = uVar6;
        if (uVar6 < uVar19) {
          *puVar12 = uVar6;
          puVar12 = puVar12 + 1;
          *puVar17 = uVar19;
          goto LAB_0049ecd4;
        }
      }
LAB_0049ece8:
      uVar6 = *param_1;
      puVar15 = param_1 + 1;
      *param_1 = uVar7;
      *puVar17 = uVar6;
      puVar12 = puVar15 + uVar13 * 2;
LAB_0049ecfc:
      uVar7 = *puVar15;
      *puVar15 = *puVar12;
      *puVar12 = uVar7;
    }
LAB_0049ed0c:
    param_3 = param_3 + -1;
    if (((param_4 & 1) != 0) || (param_1[-2] < *param_1)) {
      uVar8 = *(undefined8 *)param_1;
      puVar12 = param_1;
      do {
        puVar17 = puVar12;
        puVar12 = puVar17 + 2;
        uVar7 = *puVar12;
        uVar6 = (uint)uVar8;
      } while (uVar7 < uVar6);
      puVar15 = param_2;
      if (puVar17 == param_1) {
        do {
          if (puVar15 <= puVar12) break;
          puVar15 = puVar15 + -2;
        } while (uVar6 <= *puVar15);
      }
      else {
        do {
          puVar15 = puVar15 + -2;
        } while (uVar6 <= *puVar15);
      }
      puVar17 = puVar12;
      if (puVar12 < puVar15) {
        uVar19 = *puVar15;
        puVar16 = puVar15;
        do {
          *puVar17 = uVar19;
          *puVar16 = uVar7;
          uVar7 = puVar17[1];
          puVar17[1] = puVar16[1];
          puVar16[1] = uVar7;
          do {
            puVar17 = puVar17 + 2;
            uVar7 = *puVar17;
          } while (uVar7 < uVar6);
          do {
            puVar16 = puVar16 + -2;
            uVar19 = *puVar16;
          } while (uVar6 <= uVar19);
        } while (puVar17 < puVar16);
      }
      puVar16 = puVar17 + -2;
      if (puVar16 != param_1) {
        *param_1 = puVar17[-2];
        param_1[1] = puVar17[-1];
      }
      puVar17[-2] = uVar6;
      puVar17[-1] = (uint)((ulong)uVar8 >> 0x20);
      if (puVar15 <= puVar12) {
        uVar14 = FUN_0049f500(param_1,puVar16);
        uVar13 = FUN_0049f500(puVar17,param_2);
        if ((uVar13 & 1) != 0) goto LAB_0049ef1c;
        if ((uVar14 & 1) != 0) goto LAB_0049e924;
      }
      FUN_0049e8dc(param_1,puVar16,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_0049e924;
    }
    uVar8 = *(undefined8 *)param_1;
    uVar7 = (uint)uVar8;
    puVar17 = param_1;
    if (uVar7 < *puVar11) {
      do {
        puVar17 = puVar17 + 2;
      } while (*puVar17 <= uVar7);
    }
    else {
      do {
        puVar17 = puVar17 + 2;
        if (param_2 <= puVar17) break;
      } while (*puVar17 <= uVar7);
    }
    puVar12 = param_2;
    if (puVar17 < param_2) {
      do {
        puVar12 = puVar12 + -2;
      } while (uVar7 < *puVar12);
    }
    if (puVar17 < puVar12) {
      uVar6 = *puVar17;
      uVar19 = *puVar12;
      do {
        *puVar17 = uVar19;
        *puVar12 = uVar6;
        uVar6 = puVar17[1];
        puVar17[1] = puVar12[1];
        puVar12[1] = uVar6;
        do {
          puVar17 = puVar17 + 2;
          uVar6 = *puVar17;
        } while (uVar6 <= uVar7);
        do {
          puVar12 = puVar12 + -2;
          uVar19 = *puVar12;
        } while (uVar7 < uVar19);
      } while (puVar17 < puVar12);
    }
    if (puVar17 + -2 != param_1) {
      *param_1 = puVar17[-2];
      param_1[1] = puVar17[-1];
    }
    param_4 = 0;
    puVar17[-2] = uVar7;
    puVar17[-1] = (uint)((ulong)uVar8 >> 0x20);
  } while( true );
LAB_0049f078:
  puVar10 = puVar17;
  uVar7 = *puVar11;
  if (puVar11[2] < uVar7) {
    uVar6 = *puVar10;
    uVar19 = puVar10[1];
    lVar5 = lVar21;
    do {
      lVar20 = lVar5;
      *(uint *)((long)param_1 + lVar20 + 8) = uVar7;
      *(undefined4 *)((long)param_1 + lVar20 + 0xc) = *(undefined4 *)((long)param_1 + lVar20 + 4);
      puVar17 = param_1;
      if (lVar20 == 0) goto LAB_0049f064;
      uVar7 = *(uint *)((long)param_1 + lVar20 + -8);
      lVar5 = lVar20 + -8;
    } while (uVar6 < uVar7);
    puVar17 = (uint *)((long)param_1 + lVar20);
LAB_0049f064:
    *puVar17 = uVar6;
    puVar17[1] = uVar19;
  }
  lVar21 = lVar21 + 8;
  puVar17 = puVar10 + 2;
  puVar11 = puVar10;
  if (puVar10 + 2 == param_2) {
    return;
  }
  goto LAB_0049f078;
LAB_0049f0e4:
  do {
    if ((long)uVar13 <= (long)uVar9) {
      uVar2 = (uVar13 & 0x1fffffffffffffff) << 1 | 1;
      uVar18 = (uVar13 & 0x1fffffffffffffff) * 2 + 2;
      puVar17 = param_1 + uVar2 * 2;
      if ((long)uVar18 < (long)uVar14) {
        uVar6 = *puVar17;
        uVar19 = puVar17[2];
        uVar7 = uVar6;
        if (uVar6 <= uVar19) {
          uVar7 = uVar19;
        }
        puVar11 = puVar17 + 2;
        if (uVar19 <= uVar6) {
          puVar11 = puVar17;
          uVar18 = uVar2;
        }
      }
      else {
        uVar7 = *puVar17;
        puVar11 = puVar17;
        uVar18 = uVar2;
      }
      puVar17 = param_1 + uVar13 * 2;
      if (*puVar17 <= uVar7) {
        uVar6 = *puVar17;
        uVar19 = puVar17[1];
        do {
          while( true ) {
            puVar10 = puVar11;
            *puVar17 = uVar7;
            puVar17[1] = puVar10[1];
            if ((long)uVar9 < (long)uVar18) goto LAB_0049f0d4;
            uVar2 = uVar18 << 1 | 1;
            uVar18 = uVar18 * 2 + 2;
            puVar12 = param_1 + uVar2 * 2;
            puVar17 = puVar10;
            if ((long)uVar18 < (long)uVar14) break;
            uVar7 = *puVar12;
            puVar11 = puVar12;
            uVar18 = uVar2;
            if (uVar7 < uVar6) goto LAB_0049f0d4;
          }
          uVar3 = *puVar12;
          uVar4 = puVar12[2];
          uVar7 = uVar3;
          if (uVar3 <= uVar4) {
            uVar7 = uVar4;
          }
          puVar11 = puVar12 + 2;
          if (uVar4 <= uVar3) {
            uVar18 = uVar2;
            puVar11 = puVar12;
          }
        } while (uVar6 <= uVar7);
LAB_0049f0d4:
        *puVar10 = uVar6;
        puVar10[1] = uVar19;
      }
    }
    bVar1 = 0 < (long)uVar13;
    uVar13 = uVar13 - 1;
  } while (bVar1);
  do {
    uVar8 = *(undefined8 *)param_1;
    uVar13 = 0;
    puVar17 = param_1;
    do {
      uVar18 = uVar13 << 1 | 1;
      uVar9 = uVar13 * 2 + 2;
      puVar11 = puVar17 + uVar13 * 2 + 2;
      if ((long)uVar9 < (long)uVar14) {
        uVar19 = puVar17[uVar13 * 2 + 4];
        uVar6 = puVar17[uVar13 * 2 + 2];
        uVar7 = uVar6;
        if (uVar6 <= uVar19) {
          uVar7 = uVar19;
        }
        puVar10 = puVar17 + uVar13 * 2 + 4;
        uVar13 = uVar9;
        if (uVar19 <= uVar6) {
          puVar10 = puVar11;
          uVar13 = uVar18;
        }
      }
      else {
        uVar7 = *puVar11;
        puVar10 = puVar11;
        uVar13 = uVar18;
      }
      *puVar17 = uVar7;
      puVar17[1] = puVar10[1];
      puVar17 = puVar10;
    } while ((long)uVar13 <= (long)(uVar14 - 2 >> 1));
    uVar7 = (uint)uVar8;
    uVar6 = (uint)((ulong)uVar8 >> 0x20);
    if (puVar10 == param_2 + -2) {
      *puVar10 = uVar7;
      puVar10[1] = uVar6;
    }
    else {
      *puVar10 = param_2[-2];
      lVar21 = (long)puVar10 + (8 - (long)param_1) >> 3;
      puVar10[1] = param_2[-1];
      param_2[-2] = uVar7;
      param_2[-1] = uVar6;
      if (1 < lVar21) {
        uVar13 = lVar21 - 2U >> 1;
        uVar7 = param_1[uVar13 * 2];
        if (uVar7 < *puVar10) {
          uVar6 = *puVar10;
          uVar19 = puVar10[1];
          puVar17 = param_1 + uVar13 * 2;
          do {
            puVar11 = puVar17;
            *puVar10 = uVar7;
            puVar10[1] = puVar11[1];
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            uVar7 = param_1[uVar13 * 2];
            puVar10 = puVar11;
            puVar17 = param_1 + uVar13 * 2;
          } while (uVar7 < uVar6);
          *puVar11 = uVar6;
          puVar11[1] = uVar19;
        }
      }
    }
    bVar1 = (long)uVar14 < 3;
    uVar14 = uVar14 - 1;
    param_2 = param_2 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_0049ef1c:
  param_2 = puVar16;
  if ((uVar14 & 1) != 0) {
    return;
  }
  goto LAB_0049e90c;
}


// ===== 0049f3cc  FUN_0049f3cc =====

void FUN_0049f3cc(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar5 = *param_1;
  uVar2 = *param_3;
  if (uVar1 < uVar5) {
    if (uVar2 < uVar1) {
      *param_1 = uVar2;
      puVar4 = param_1 + 1;
    }
    else {
      *param_1 = uVar1;
      *param_2 = uVar5;
      puVar4 = param_2 + 1;
      uVar1 = param_1[1];
      param_1[1] = *puVar4;
      *puVar4 = uVar1;
      uVar5 = *param_2;
      if (uVar5 <= *param_3) goto LAB_0049f484;
      *param_2 = *param_3;
    }
    puVar3 = param_3 + 1;
    *param_3 = uVar5;
  }
  else {
    if (uVar1 <= uVar2) goto LAB_0049f484;
    *param_2 = uVar2;
    *param_3 = uVar1;
    puVar3 = param_2 + 1;
    uVar1 = *puVar3;
    *puVar3 = param_3[1];
    param_3[1] = uVar1;
    uVar1 = *param_1;
    if (uVar1 <= *param_2) goto LAB_0049f484;
    puVar4 = param_1 + 1;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = *puVar4;
  *puVar4 = *puVar3;
  *puVar3 = uVar1;
LAB_0049f484:
  uVar1 = *param_3;
  if (*param_4 < uVar1) {
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        *param_1 = *param_2;
        *param_2 = uVar1;
        uVar1 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = uVar1;
      }
    }
  }
  return;
}


// ===== 0049f500  FUN_0049f500 =====

bool FUN_0049f500(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  
  uVar7 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      uVar12 = *param_1;
      if (uVar12 <= param_2[-2]) {
        return true;
      }
      *param_1 = param_2[-2];
      param_2[-2] = uVar12;
      uVar12 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = uVar12;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      uVar12 = param_1[2];
      uVar3 = *param_1;
      uVar4 = param_2[-2];
      if (uVar12 < uVar3) {
        if (uVar4 < uVar12) {
          *param_1 = uVar4;
          puVar8 = param_1 + 1;
        }
        else {
          *param_1 = uVar12;
          puVar8 = param_1 + 3;
          uVar12 = *puVar8;
          *puVar8 = param_1[1];
          param_1[1] = uVar12;
          param_1[2] = uVar3;
          if (uVar3 <= param_2[-2]) {
            return true;
          }
          param_1[2] = param_2[-2];
        }
        puVar9 = param_2 + -1;
        param_2[-2] = uVar3;
      }
      else {
        if (uVar12 <= uVar4) {
          return true;
        }
        param_1[2] = uVar4;
        param_2[-2] = uVar12;
        puVar9 = param_1 + 3;
        uVar12 = *puVar9;
        *puVar9 = param_2[-1];
        param_2[-1] = uVar12;
        uVar12 = *param_1;
        if (uVar12 <= param_1[2]) {
          return true;
        }
        *param_1 = param_1[2];
        puVar8 = param_1 + 1;
        param_1[2] = uVar12;
      }
      uVar12 = *puVar8;
      *puVar8 = *puVar9;
      *puVar9 = uVar12;
      return true;
    }
    if (uVar7 == 4) {
      FUN_0049f3cc(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
      return true;
    }
    if (uVar7 == 5) {
      FUN_0049f3cc(param_1,param_1 + 2,param_1 + 4,param_1 + 6);
      uVar12 = param_1[6];
      if (uVar12 <= param_2[-2]) {
        return true;
      }
      param_1[6] = param_2[-2];
      param_2[-2] = uVar12;
      uVar12 = param_1[7];
      param_1[7] = param_2[-1];
      param_2[-1] = uVar12;
      uVar12 = param_1[6];
      uVar3 = param_1[4];
      if (uVar3 <= uVar12) {
        return true;
      }
      uVar4 = param_1[2];
      uVar5 = param_1[7];
      uVar2 = param_1[5];
      param_1[4] = uVar12;
      param_1[5] = uVar5;
      param_1[6] = uVar3;
      param_1[7] = uVar2;
      if (uVar4 <= uVar12) {
        return true;
      }
      uVar3 = *param_1;
      uVar2 = param_1[3];
      param_1[2] = uVar12;
      param_1[3] = uVar5;
      param_1[4] = uVar4;
      param_1[5] = uVar2;
      if (uVar3 <= uVar12) {
        return true;
      }
      uVar4 = param_1[1];
      *param_1 = uVar12;
      param_1[1] = uVar5;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      return true;
    }
  }
  uVar12 = param_1[2];
  uVar3 = *param_1;
  uVar4 = param_1[4];
  if (uVar12 < uVar3) {
    if (uVar4 < uVar12) {
      *param_1 = uVar4;
      puVar8 = param_1 + 1;
    }
    else {
      puVar8 = param_1 + 3;
      uVar5 = *puVar8;
      *param_1 = uVar12;
      *puVar8 = param_1[1];
      param_1[1] = uVar5;
      param_1[2] = uVar3;
      if (uVar3 <= uVar4) goto LAB_0049f768;
      param_1[2] = uVar4;
    }
    puVar9 = param_1 + 5;
    param_1[4] = uVar3;
  }
  else {
    if (uVar12 <= uVar4) goto LAB_0049f768;
    puVar9 = param_1 + 3;
    uVar5 = param_1[5];
    param_1[4] = uVar12;
    param_1[5] = *puVar9;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    if (uVar3 <= uVar4) goto LAB_0049f768;
    *param_1 = uVar4;
    puVar8 = param_1 + 1;
    param_1[2] = uVar3;
  }
  uVar12 = *puVar8;
  *puVar8 = *puVar9;
  *puVar9 = uVar12;
LAB_0049f768:
  if (param_1 + 6 != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    puVar9 = param_1 + 4;
    puVar8 = param_1 + 6;
    do {
      uVar12 = *puVar9;
      if (*puVar8 < uVar12) {
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        lVar6 = lVar10;
        do {
          lVar13 = lVar6;
          *(uint *)((long)param_1 + lVar13 + 0x18) = uVar12;
          *(undefined4 *)((long)param_1 + lVar13 + 0x1c) =
               *(undefined4 *)((long)param_1 + lVar13 + 0x14);
          puVar9 = param_1;
          if (lVar13 == -0x10) goto LAB_0049f784;
          uVar12 = *(uint *)((long)param_1 + lVar13 + 8);
          lVar6 = lVar13 + -8;
        } while (uVar3 < uVar12);
        puVar9 = (uint *)((long)param_1 + lVar13 + 0x10);
LAB_0049f784:
        iVar11 = iVar11 + 1;
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
        if (iVar11 == 8) {
          return puVar8 + 2 == param_2;
        }
      }
      puVar1 = puVar8 + 2;
      lVar10 = lVar10 + 8;
      puVar9 = puVar8;
      puVar8 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}


// ===== 0049f814  FUN_0049f814 =====

void FUN_0049f814(long *param_1,ulong param_2)

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


// ===== 0049f970  FUN_0049f970 =====

void FUN_0049f970(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)param_1);
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
  if (uVar6 != 0) {
    uVar3 = 1;
    do {
      bVar2 = *pbVar4;
      if (bVar2 < 0x21) {
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)(*param_1 >> 1);
          if ((*param_1 & 1) != 0) {
            uVar3 = *(ulong *)(param_1 + 8);
          }
          if (uVar3 != 0) goto LAB_0049f9e8;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
LAB_0049f9e8:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back((char)param_1);
        uVar3 = (ulong)(bVar2 < 0x21);
      }
      uVar6 = uVar6 - 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
  }
  bVar2 = *param_1;
  uVar6 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if (uVar6 != 0) {
    pbVar4 = *(byte **)(param_1 + 0x10);
    pbVar1 = pbVar4;
    if ((bVar2 & 1) == 0) {
      pbVar1 = param_1 + 1;
    }
    if (pbVar1[uVar6 - 1] == 0x20) {
      lVar5 = uVar6 - 1;
      if ((bVar2 & 1) == 0) {
        pbVar4 = param_1 + 1;
        *param_1 = (byte)((int)lVar5 << 1);
      }
      else {
        *(long *)(param_1 + 8) = lVar5;
      }
      pbVar4[lVar5] = 0;
    }
  }
  return;
}


// ===== 0049fa84  FUN_0049fa84 =====

void FUN_0049fa84(long *param_1,byte *param_2,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  basic_string bVar6;
  byte bVar7;
  basic_string *pbVar8;
  long lVar9;
  
  uVar4 = *(uint *)(*param_1 + 0x28);
  uVar1 = uVar4 & 0xff;
  if (0x11 < uVar1 || (1 << (ulong)(uVar4 & 0x1f) & 0x2183eU) == 0) {
    uVar5 = *(undefined4 *)(*param_1 + 4);
    FUN_00400e34(param_4,uVar5,uVar5);
    if (uVar1 == 8) {
      pbVar8 = (basic_string *)(*param_1 + 0x30);
      bVar6 = *pbVar8;
      uVar2 = (ulong)((byte)bVar6 >> 1);
      if (((byte)bVar6 & 1) != 0) {
        uVar2 = *(ulong *)(*param_1 + 0x38);
      }
      if (uVar2 != 0) {
        uVar2 = (ulong)((byte)*param_3 >> 1);
        if (((byte)*param_3 & 1) != 0) {
          uVar2 = *(ulong *)(param_3 + 8);
        }
        if (uVar2 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    (param_3,pbVar8);
        }
      }
    }
    else if (uVar1 == 7) {
      lVar9 = *param_1;
      bVar7 = *(byte *)(lVar9 + 0x30);
      uVar2 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        uVar2 = *(ulong *)(lVar9 + 0x38);
      }
      if (uVar2 != 0) {
        uVar2 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          uVar2 = *(ulong *)(param_2 + 8);
        }
        if (uVar2 != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)param_2);
          lVar9 = *param_1;
          bVar7 = *(byte *)(lVar9 + 0x30);
        }
        uVar2 = lVar9 + 0x31;
        if ((bVar7 & 1) != 0) {
          uVar2 = *(ulong *)(lVar9 + 0x40);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_2,uVar2);
      }
    }
    lVar3 = *(long *)(*param_1 + 0x18);
    for (lVar9 = *(long *)(*param_1 + 0x10); lVar9 != lVar3; lVar9 = lVar9 + 8) {
      FUN_0049fa84(lVar9,param_2,param_3,param_4);
    }
  }
  return;
}


// ===== 0049fbf8  rive::SemanticManager::drainDiff =====

/* rive::SemanticManager::drainDiff() */

void rive::SemanticManager::drainDiff(void)

{
  refresh();
  consumeDiff();
  return;
}


// ===== 0049fc24  rive::SemanticManager::consumeDiff =====

/* rive::SemanticManager::consumeDiff() */

void rive::SemanticManager::consumeDiff(void)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long in_x0;
  void *pvVar5;
  undefined8 *in_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  void *local_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  void *local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(in_x0 + 8);
  uVar1 = *(undefined4 *)(in_x0 + 0x18);
  local_50 = 0;
  in_x8[1] = *(undefined8 *)(in_x0 + 0x10);
  *in_x8 = uVar6;
  uVar8 = *(undefined8 *)(in_x0 + 0x28);
  uVar7 = *(undefined8 *)(in_x0 + 0x20);
  *(undefined4 *)(in_x8 + 2) = uVar1;
  uVar6 = *(undefined8 *)(in_x0 + 0x30);
  in_x8[4] = uVar8;
  in_x8[3] = uVar7;
  uVar8 = *(undefined8 *)(in_x0 + 0x40);
  uVar7 = *(undefined8 *)(in_x0 + 0x38);
  in_x8[5] = uVar6;
  uVar6 = *(undefined8 *)(in_x0 + 0x48);
  in_x8[7] = uVar8;
  in_x8[6] = uVar7;
  uVar8 = *(undefined8 *)(in_x0 + 0x58);
  uVar7 = *(undefined8 *)(in_x0 + 0x50);
  in_x8[8] = uVar6;
  uVar6 = *(undefined8 *)(in_x0 + 0x60);
  in_x8[10] = uVar8;
  in_x8[9] = uVar7;
  uVar8 = *(undefined8 *)(in_x0 + 0x70);
  uVar7 = *(undefined8 *)(in_x0 + 0x68);
  in_x8[0xb] = uVar6;
  uVar6 = *(undefined8 *)(in_x0 + 0x78);
  in_x8[0xd] = uVar8;
  in_x8[0xc] = uVar7;
  uVar8 = *(undefined8 *)(in_x0 + 0x88);
  uVar7 = *(undefined8 *)(in_x0 + 0x80);
  in_x8[0xe] = uVar6;
  uVar6 = *(undefined8 *)(in_x0 + 0x90);
  in_x8[0x10] = uVar8;
  in_x8[0xf] = uVar7;
  uVar8 = *(undefined8 *)(in_x0 + 0xa0);
  uVar7 = *(undefined8 *)(in_x0 + 0x98);
  in_x8[0x11] = uVar6;
  uVar6 = *(undefined8 *)(in_x0 + 0xa8);
  in_x8[0x13] = uVar8;
  in_x8[0x12] = uVar7;
  *(undefined8 *)(in_x0 + 0x20) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  *(undefined8 *)(in_x0 + 0x40) = 0;
  *(undefined8 *)(in_x0 + 0x48) = 0;
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(undefined8 *)(in_x0 + 0x58) = 0;
  *(undefined8 *)(in_x0 + 0x60) = 0;
  *(undefined8 *)(in_x0 + 0x68) = 0;
  *(undefined8 *)(in_x0 + 0x70) = 0;
  *(undefined8 *)(in_x0 + 0x78) = 0;
  *(undefined8 *)(in_x0 + 0x80) = 0;
  *(undefined8 *)(in_x0 + 0x88) = 0;
  *(undefined8 *)(in_x0 + 0x90) = 0;
  *(undefined8 *)(in_x0 + 0x98) = 0;
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  *(undefined8 *)(in_x0 + 0xa8) = 0;
  in_x8[0x14] = uVar6;
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = (void *)0x0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = (void *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = (void *)0x0;
  local_60 = (void *)0x0;
  FUN_0049e3d8(in_x0 + 8,&local_f0);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  local_40 = &uStack_78;
  FUN_0034f2a4(&local_40);
  pvVar4 = local_90;
  pvVar3 = pvStack_88;
  if (local_90 != (void *)0x0) {
    for (; pvVar3 != pvVar4; pvVar3 = (void *)((long)pvVar3 + -0x20)) {
      pvVar5 = *(void **)((long)pvVar3 + -0x18);
      if (pvVar5 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x10) = pvVar5;
        operator_delete(pvVar5);
      }
    }
    pvStack_88 = pvVar4;
    operator_delete(local_90);
  }
  local_40 = &uStack_a8;
  FUN_0034f2a4(&local_40);
  local_40 = &uStack_c0;
  FUN_0034f2a4(&local_40);
  if (local_d8 != (void *)0x0) {
    local_d0 = local_d8;
    operator_delete(local_d8);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049fdc8  rive::SemanticManager::requestFocus =====

/* rive::SemanticManager::requestFocus(unsigned int) */

undefined8 __thiscall rive::SemanticManager::requestFocus(SemanticManager *this,uint param_1)

{
  ulong uVar1;
  SemanticData *this_00;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = *(ulong *)(this + 0xe0);
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
    plVar5 = *(long **)(*(long *)(this + 0xd8) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
          if (*(uint *)(plVar5 + 2) == param_1) {
            if (plVar5[3] == 0) {
              return 0;
            }
            this_00 = *(SemanticData **)(plVar5[3] + 0xa8);
            if (this_00 == (SemanticData *)0x0) {
              return 0;
            }
            uVar8 = SemanticData::requestFocus(this_00);
            return uVar8;
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
            return 0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 0049fe90  rive::SemanticProvider::rootTransformAABB =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::SemanticProvider::rootTransformAABB(rive::Artboard*, rive::AABB const&) */

void rive::SemanticProvider::rootTransformAABB(Artboard *param_1,AABB *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *plVar24;
  undefined4 uVar25;
  ulong extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 in_s1;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 in_register_00005024;
  uint uVar31;
  undefined4 uVar32;
  undefined8 in_register_00005028;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 uVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = *(ulong *)param_2;
  plVar24 = *(long **)(param_1 + 0xc38);
  if (plVar24 == (long *)0x0) {
    uStack_68 = 0;
    local_60 = local_70 >> 0x20;
    uStack_58 = 0;
  }
  else {
    local_40 = local_70;
    (**(code **)(*plVar24 + 0x50))(plVar24,&local_40,param_1);
    local_60 = CONCAT44(in_register_00005024,in_s1);
    local_70 = extraout_d0;
    uStack_68 = extraout_var;
    uStack_58 = in_register_00005028;
  }
  uVar34 = *(undefined8 *)(param_2 + 4);
  uVar28 = (uint)uVar34;
  uVar31 = (uint)((ulong)uVar34 >> 0x20);
  uVar33 = 0;
  plVar24 = *(long **)(param_1 + 0xc38);
  local_40 = NEON_rev64(uVar34,4);
  if (plVar24 == (long *)0x0) {
    local_80 = (ulong)uVar31;
    uStack_78 = 0;
  }
  else {
    auVar26 = (**(code **)(*plVar24 + 0x50))(plVar24,&local_40,param_1);
    uStack_78 = auVar26._8_8_;
    local_80 = auVar26._0_8_;
  }
  local_40 = *(ulong *)(param_2 + 8);
  uVar25 = (undefined4)local_40;
  uVar29 = (uint)(local_40 >> 0x20);
  plVar24 = *(long **)(param_1 + 0xc38);
  uVar65 = uVar29;
  if (plVar24 != (long *)0x0) {
    uVar29 = uVar28;
    uVar25 = (**(code **)(*plVar24 + 0x50))(plVar24,&local_40,param_1);
    uVar65 = 0;
  }
  auVar26 = ZEXT416(*(uint *)param_2);
  uVar30 = *(undefined4 *)(param_2 + 0xc);
  uVar32 = 0;
  uVar34 = 0;
  plVar24 = *(long **)(param_1 + 0xc38);
  local_40 = CONCAT44(uVar30,*(uint *)param_2);
  if (plVar24 != (long *)0x0) {
    auVar26 = (**(code **)(*plVar24 + 0x50))(plVar24,&local_40,param_1);
  }
  auVar19._8_8_ = uStack_68;
  auVar19._0_8_ = local_70;
  auVar18._8_8_ = uStack_68;
  auVar18._0_8_ = local_70;
  auVar40._4_4_ = 0x7f7fffff;
  auVar40._0_4_ = (int)local_70;
  auVar35 = NEON_fcmgt(ZEXT816(0x7f7fffff),auVar18,4);
  auVar40._8_4_ = 0xff7fffff;
  auVar36._0_4_ = auVar35._0_4_;
  auVar36._4_4_ = auVar36._0_4_;
  auVar36._8_4_ = auVar36._0_4_;
  auVar36._12_4_ = auVar36._0_4_;
  auVar40._12_4_ = 0xff7fffff;
  auVar35._8_4_ = _UNK_0024e258;
  auVar35._0_8_ = _DAT_0024e250;
  auVar35._12_4_ = _UNK_0024e25c;
  auVar35 = NEON_bsl(auVar36,auVar40,auVar35,1);
  uVar39 = auVar35._8_4_;
  auVar41._4_4_ = uVar39;
  auVar41._0_4_ = uVar39;
  auVar41._8_4_ = uVar39;
  auVar41._12_4_ = uVar39;
  auVar42 = NEON_fcmgt(auVar19,auVar41,4);
  auVar21._8_8_ = uStack_58;
  auVar21._0_8_ = local_60;
  auVar20._8_8_ = uStack_58;
  auVar20._0_8_ = local_60;
  auVar43._0_4_ = auVar42._0_4_;
  auVar43._4_4_ = auVar43._0_4_;
  auVar43._8_4_ = auVar43._0_4_;
  auVar43._12_4_ = auVar43._0_4_;
  auVar42._8_4_ = (int)local_70;
  auVar42._0_8_ = auVar35._0_8_;
  auVar42._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar42,auVar43,1);
  uVar39 = auVar35._4_4_;
  auVar44._4_4_ = uVar39;
  auVar44._0_4_ = uVar39;
  auVar44._8_4_ = uVar39;
  auVar44._12_4_ = uVar39;
  auVar42 = NEON_fcmgt(auVar44,auVar20,4);
  auVar45._0_4_ = auVar42._0_4_;
  auVar45._4_4_ = auVar45._0_4_;
  auVar45._8_4_ = auVar45._0_4_;
  auVar45._12_4_ = auVar45._0_4_;
  auVar2._4_4_ = (int)local_60;
  auVar2._0_4_ = auVar35._0_4_;
  auVar2._8_4_ = auVar35._8_4_;
  auVar2._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar2,auVar45,1);
  uVar39 = auVar35._12_4_;
  auVar46._4_4_ = uVar39;
  auVar46._0_4_ = uVar39;
  auVar46._8_4_ = uVar39;
  auVar46._12_4_ = uVar39;
  auVar42 = NEON_fcmgt(auVar21,auVar46,4);
  auVar17._8_8_ = uStack_78;
  auVar17._0_8_ = local_80;
  auVar16._8_8_ = uStack_78;
  auVar16._0_8_ = local_80;
  auVar47._0_4_ = auVar42._0_4_;
  auVar47._4_4_ = auVar47._0_4_;
  auVar47._8_4_ = auVar47._0_4_;
  auVar47._12_4_ = auVar47._0_4_;
  auVar3._12_4_ = (int)local_60;
  auVar3._0_12_ = auVar35._0_12_;
  auVar35 = NEON_bit(auVar35,auVar3,auVar47,1);
  auVar42 = NEON_fcmgt(auVar35,auVar16,4);
  auVar48._0_4_ = auVar42._0_4_;
  auVar48._4_4_ = auVar48._0_4_;
  auVar48._8_4_ = auVar48._0_4_;
  auVar48._12_4_ = auVar48._0_4_;
  auVar4._4_4_ = auVar35._4_4_;
  auVar4._0_4_ = (int)local_80;
  auVar4._8_4_ = auVar35._8_4_;
  auVar4._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar4,auVar48,1);
  uVar39 = auVar35._8_4_;
  auVar49._4_4_ = uVar39;
  auVar49._0_4_ = uVar39;
  auVar49._8_4_ = uVar39;
  auVar49._12_4_ = uVar39;
  auVar42 = NEON_fcmgt(auVar17,auVar49,4);
  auVar23._8_8_ = uVar33;
  auVar23._0_8_ = CONCAT44(uVar31,uVar28);
  auVar22._8_8_ = uVar33;
  auVar22._0_8_ = CONCAT44(uVar31,uVar28);
  auVar50._0_4_ = auVar42._0_4_;
  auVar50._4_4_ = auVar50._0_4_;
  auVar50._8_4_ = auVar50._0_4_;
  auVar50._12_4_ = auVar50._0_4_;
  auVar5._8_4_ = (int)local_80;
  auVar5._0_8_ = auVar35._0_8_;
  auVar5._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar5,auVar50,1);
  uVar39 = auVar35._4_4_;
  auVar51._4_4_ = uVar39;
  auVar51._0_4_ = uVar39;
  auVar51._8_4_ = uVar39;
  auVar51._12_4_ = uVar39;
  auVar42 = NEON_fcmgt(auVar51,auVar22,4);
  auVar52._0_4_ = auVar42._0_4_;
  auVar52._4_4_ = auVar52._0_4_;
  auVar52._8_4_ = auVar52._0_4_;
  auVar52._12_4_ = auVar52._0_4_;
  auVar6._4_4_ = uVar28;
  auVar6._0_4_ = auVar35._0_4_;
  auVar6._8_4_ = auVar35._8_4_;
  auVar6._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar6,auVar52,1);
  uVar39 = auVar35._12_4_;
  auVar53._4_4_ = uVar39;
  auVar53._0_4_ = uVar39;
  auVar53._8_4_ = uVar39;
  auVar53._12_4_ = uVar39;
  auVar42 = NEON_fcmgt(auVar23,auVar53,4);
  auVar54._0_4_ = auVar42._0_4_;
  auVar54._4_4_ = auVar54._0_4_;
  auVar54._8_4_ = auVar54._0_4_;
  auVar54._12_4_ = auVar54._0_4_;
  auVar7._12_4_ = uVar28;
  auVar7._0_12_ = auVar35._0_12_;
  auVar35 = NEON_bit(auVar35,auVar7,auVar54,1);
  auVar14._4_4_ = uVar65;
  auVar14._0_4_ = uVar25;
  auVar14._8_8_ = 0;
  auVar42 = NEON_fcmgt(auVar35,auVar14,4);
  auVar55._0_4_ = auVar42._0_4_;
  auVar55._4_4_ = auVar55._0_4_;
  auVar55._8_4_ = auVar55._0_4_;
  auVar55._12_4_ = auVar55._0_4_;
  auVar8._4_4_ = auVar35._4_4_;
  auVar8._0_4_ = uVar25;
  auVar8._8_4_ = auVar35._8_4_;
  auVar8._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar8,auVar55,1);
  uVar39 = auVar35._8_4_;
  auVar56._4_4_ = uVar39;
  auVar56._0_4_ = uVar39;
  auVar56._8_4_ = uVar39;
  auVar56._12_4_ = uVar39;
  auVar15._4_4_ = uVar65;
  auVar15._0_4_ = uVar25;
  auVar15._8_8_ = 0;
  auVar42 = NEON_fcmgt(auVar15,auVar56,4);
  auVar57._0_4_ = auVar42._0_4_;
  auVar57._4_4_ = auVar57._0_4_;
  auVar57._8_4_ = auVar57._0_4_;
  auVar57._12_4_ = auVar57._0_4_;
  auVar9._8_4_ = uVar25;
  auVar9._0_8_ = auVar35._0_8_;
  auVar9._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar9,auVar57,1);
  uVar25 = auVar35._4_4_;
  auVar58._4_4_ = uVar25;
  auVar58._0_4_ = uVar25;
  auVar58._8_4_ = uVar25;
  auVar58._12_4_ = uVar25;
  auVar42 = NEON_fcmgt(auVar58,ZEXT416(uVar29),4);
  auVar59._0_4_ = auVar42._0_4_;
  auVar59._4_4_ = auVar59._0_4_;
  auVar59._8_4_ = auVar59._0_4_;
  auVar59._12_4_ = auVar59._0_4_;
  auVar10._4_4_ = uVar29;
  auVar10._0_4_ = auVar35._0_4_;
  auVar10._8_4_ = auVar35._8_4_;
  auVar10._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar10,auVar59,1);
  uVar25 = auVar35._12_4_;
  auVar60._4_4_ = uVar25;
  auVar60._0_4_ = uVar25;
  auVar60._8_4_ = uVar25;
  auVar60._12_4_ = uVar25;
  auVar42 = NEON_fcmgt(ZEXT416(uVar29),auVar60,4);
  auVar61._0_4_ = auVar42._0_4_;
  auVar61._4_4_ = auVar61._0_4_;
  auVar61._8_4_ = auVar61._0_4_;
  auVar61._12_4_ = auVar61._0_4_;
  auVar11._12_4_ = uVar29;
  auVar11._0_12_ = auVar35._0_12_;
  auVar35 = NEON_bit(auVar35,auVar11,auVar61,1);
  auVar42 = NEON_fcmgt(auVar35,auVar26,4);
  auVar62._0_4_ = auVar42._0_4_;
  auVar62._4_4_ = auVar62._0_4_;
  auVar62._8_4_ = auVar62._0_4_;
  auVar62._12_4_ = auVar62._0_4_;
  auVar12._4_4_ = auVar35._4_4_;
  auVar12._0_4_ = auVar26._0_4_;
  auVar12._8_4_ = auVar35._8_4_;
  auVar12._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bit(auVar35,auVar12,auVar62,1);
  uVar25 = auVar35._8_4_;
  auVar63._4_4_ = uVar25;
  auVar63._0_4_ = uVar25;
  auVar63._8_4_ = uVar25;
  auVar63._12_4_ = uVar25;
  auVar42 = NEON_fcmgt(auVar26,auVar63,4);
  uVar25 = auVar42._0_4_;
  auVar27._4_4_ = uVar25;
  auVar27._0_4_ = uVar25;
  auVar27._8_4_ = uVar25;
  auVar27._12_4_ = uVar25;
  auVar13._8_4_ = auVar26._0_4_;
  auVar13._0_8_ = auVar35._0_8_;
  auVar13._12_4_ = auVar35._12_4_;
  auVar35 = NEON_bsl(auVar27,auVar13,auVar35,1);
  uVar25 = auVar35._4_4_;
  auVar37._4_4_ = uVar25;
  auVar37._0_4_ = uVar25;
  auVar37._8_4_ = uVar25;
  auVar37._12_4_ = uVar25;
  auVar26._4_4_ = uVar32;
  auVar26._0_4_ = uVar30;
  auVar26._8_8_ = uVar34;
  auVar26 = NEON_fcmgt(auVar37,auVar26,4);
  auVar64._0_4_ = auVar35._0_4_;
  auVar64._4_4_ = uVar30;
  auVar64._8_8_ = auVar35._8_8_;
  auVar38._0_4_ = auVar26._0_4_;
  auVar38._4_4_ = auVar38._0_4_;
  auVar38._8_4_ = auVar38._0_4_;
  auVar38._12_4_ = auVar38._0_4_;
  NEON_bit(auVar35,auVar64,auVar38,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a0158  rive::SemanticProvider::canInferSemantics =====

/* rive::SemanticProvider::canInferSemantics(rive::Component*) */

void rive::SemanticProvider::canInferSemantics(Component *param_1)

{
  if (param_1 != (Component *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a0168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0x86);
    return;
  }
  return;
}


// ===== 004a0170  rive::SemanticProvider::resolveSemanticData =====

/* rive::SemanticProvider::resolveSemanticData(rive::Component*) */

void __thiscall
rive::SemanticProvider::resolveSemanticData(SemanticProvider *this,Component *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ResolvedSemanticData *in_x8;
  long *plVar5;
  
  *in_x8 = (ResolvedSemanticData)0x0;
  *(undefined4 *)(in_x8 + 4) = 0;
  *(undefined2 *)(in_x8 + 8) = 0;
  if ((this != (SemanticProvider *)0x0) &&
     (uVar4 = (**(code **)(*(long *)this + 0x18))(this,2), (uVar4 & 1) != 0)) {
    puVar1 = *(undefined8 **)(this + 0x88);
    puVar2 = *(undefined8 **)(this + 0x90);
    while( true ) {
      if (puVar1 == puVar2) {
        resolveInferredSemantics((Component *)this,in_x8);
        return;
      }
      plVar5 = (long *)*puVar1;
      uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29c);
      if ((uVar4 & 1) != 0) break;
      puVar1 = puVar1 + 1;
    }
    lVar3 = plVar5[0x11];
    *in_x8 = (ResolvedSemanticData)0x1;
    *(int *)(in_x8 + 4) = (int)lVar3;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x8 + 8),(basic_string *)(plVar5 + 0x12));
    return;
  }
  return;
}


// ===== 004a0244  rive::SemanticProvider::semanticBounds =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::SemanticProvider::semanticBounds(rive::Component*) */

void rive::SemanticProvider::semanticBounds(Component *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint3 uVar5;
  ulong uVar6;
  Artboard *pAVar7;
  undefined ***pppuVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined1 extraout_b0;
  byte bVar12;
  byte extraout_b0_00;
  byte extraout_b0_01;
  undefined1 extraout_var;
  byte bVar13;
  undefined1 extraout_var_00;
  byte bVar14;
  undefined1 extraout_var_01;
  byte bVar15;
  undefined1 extraout_var_02;
  byte bVar16;
  undefined1 extraout_var_03;
  byte bVar17;
  undefined1 extraout_var_04;
  byte bVar18;
  undefined1 extraout_var_05;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar28;
  byte bVar29;
  float fVar25;
  byte bVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float in_s2;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  int iVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  int iVar44;
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined8 *puStack_78;
  float *local_70;
  undefined ***local_60;
  float local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (Component *)0x0) {
    bVar12 = 0;
    goto LAB_004a0598;
  }
  uVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1,2);
  fVar36 = 0.0;
  fVar25 = 0.0;
  bVar12 = 0;
  if ((uVar6 & 1) == 0) goto LAB_004a0598;
  (**(code **)(*(long *)param_1 + 0xf0))(0,param_1);
  fVar39 = in_s2 - (float)CONCAT13(extraout_var_01,
                                   CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  if ((fVar39 == 0.0 || fVar39 < 0.0 != NAN(fVar39)) ||
     (fVar39 = fVar36 - fVar25, fVar39 == 0.0 || fVar39 < 0.0 != NAN(fVar39))) {
LAB_004a04c0:
    uVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0xb);
    if ((uVar6 & 1) != 0) {
      puStack_78 = &local_90;
      local_70 = &local_48;
      local_48 = (float)((uint)local_48 & 0xffffff00);
      local_80 = &PTR_FUN_0066c930;
      uStack_88 = _UNK_0024e258;
      local_90 = _DAT_0024e250;
      local_60 = &local_80;
      ContainerComponent::forEachChild((ContainerComponent *)param_1,&local_80);
      if (local_60 == &local_80) {
        lVar10 = 4;
        pppuVar8 = &local_80;
LAB_004a0534:
        (*(code *)(*pppuVar8)[lVar10])();
      }
      else if (local_60 != (undefined ***)0x0) {
        lVar10 = 5;
        pppuVar8 = local_60;
        goto LAB_004a0534;
      }
      if (local_48._0_1_ != '\0') {
        pAVar7 = *(Artboard **)(param_1 + 0x40);
        if (pAVar7 == (Artboard *)0x0) {
          bVar12 = (byte)local_90;
          goto LAB_004a0598;
        }
        goto LAB_004a0550;
      }
    }
    bVar12 = (byte)*(undefined4 *)(param_1 + 0xb4);
    uVar49 = *(undefined8 *)(param_1 + 0xb4);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0xc38), local_90 = uVar49,
       plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x50))(plVar9,&local_90);
      bVar12 = extraout_b0_01;
    }
  }
  else {
    local_40 = *(undefined4 *)(param_1 + 0xac);
    fVar31 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    local_48 = (float)*(undefined8 *)(param_1 + 0xa4);
    uStack_44 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xa4) >> 0x20);
    fVar46 = *(float *)(param_1 + 0xb0);
    auVar47._8_8_ = CONCAT44(local_40,uStack_44);
    auVar47._0_8_ = CONCAT44(local_40,uStack_44);
    auVar47 = NEON_rev64(auVar47,4);
    auVar26._4_4_ = fVar36;
    auVar26._0_4_ = in_s2;
    uVar49 = NEON_fcmeq(auVar47._0_8_,0,4);
    fVar39 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    auVar26[0xc] = extraout_var_02;
    auVar26._8_4_ = fVar39;
    auVar26[0xd] = extraout_var_03;
    auVar26[0xe] = extraout_var_04;
    auVar26[0xf] = extraout_var_05;
    uVar49 = CONCAT17(~(byte)((ulong)uVar49 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar49 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar49 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar49 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar49 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar49 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar49 >>
                                                                                   8),~(byte)uVar49)
                                                                  ))))));
    uVar6 = NEON_umaxp(uVar49,uVar49,4);
    auVar33._0_12_ = auVar26._0_12_;
    auVar33._12_4_ = fVar36;
    if ((uVar6 & 1) == 0) {
      auVar45._0_4_ = local_48 * fVar31;
      auVar45._4_4_ = fVar46 * fVar25;
      auVar45._8_4_ = local_48 * in_s2;
      auVar45._12_4_ = fVar46 * fVar25;
      auVar38._8_4_ = 0xff800000;
      auVar38._0_8_ = 0xff800000ff800000;
      auVar38._12_4_ = 0xff800000;
      auVar35._8_4_ = 0x7f800000;
      auVar35._0_8_ = 0x7f8000007f800000;
      auVar35._12_4_ = 0x7f800000;
      auVar42._0_4_ = local_48 * in_s2;
      auVar42._4_4_ = fVar46 * fVar36;
      auVar42._8_4_ = local_48 * fVar39;
      auVar42._12_4_ = fVar46 * fVar36;
      auVar47 = NEON_fminnm(auVar45,auVar35,4);
      auVar26 = NEON_fmaxnm(auVar45,auVar38,4);
      auVar47 = NEON_fminnm(auVar42,auVar47,4);
      auVar26 = NEON_fmaxnm(auVar42,auVar26,4);
    }
    else {
      auVar4._4_4_ = fVar25;
      auVar4._0_4_ = fVar31;
      auVar4._8_4_ = in_s2;
      auVar4._12_4_ = fVar25;
      auVar26 = NEON_rev64(auVar4,4);
      auVar33 = NEON_rev64(auVar33,4);
      auVar37._8_4_ = 0x7f800000;
      auVar37._0_8_ = 0x7f8000007f800000;
      auVar37._12_4_ = 0x7f800000;
      auVar48._8_4_ = 0xff800000;
      auVar48._0_8_ = 0xff800000ff800000;
      auVar48._12_4_ = 0xff800000;
      auVar27._0_4_ = auVar47._0_4_ * auVar26._0_4_ + fVar31 * local_48;
      auVar27._4_4_ = auVar47._4_4_ * auVar26._4_4_ + fVar25 * fVar46;
      auVar27._8_4_ = auVar47._8_4_ * auVar26._8_4_ + in_s2 * local_48;
      auVar27._12_4_ = auVar47._12_4_ * auVar26._12_4_ + fVar25 * fVar46;
      auVar34._0_4_ = auVar47._0_4_ * auVar33._0_4_ + in_s2 * local_48;
      auVar34._4_4_ = auVar47._4_4_ * auVar33._4_4_ + fVar36 * fVar46;
      auVar34._8_4_ = auVar47._8_4_ * auVar33._8_4_ + fVar39 * local_48;
      auVar34._12_4_ = auVar47._12_4_ * auVar33._12_4_ + fVar36 * fVar46;
      auVar47 = NEON_fminnm(auVar27,auVar37,4);
      auVar26 = NEON_fmaxnm(auVar27,auVar48,4);
      auVar47 = NEON_fminnm(auVar34,auVar47,4);
      auVar26 = NEON_fmaxnm(auVar34,auVar26,4);
    }
    auVar33 = NEON_ext(auVar47,auVar47,8,1);
    auVar45 = NEON_ext(auVar26,auVar26,8,1);
    uVar49 = NEON_fminnm(auVar47._0_8_,auVar33._0_8_,4);
    uVar32 = NEON_fmaxnm(auVar26._0_8_,auVar45._0_8_,4);
    fVar31 = (float)((ulong)uVar49 >> 0x20);
    fVar46 = (float)((ulong)uVar32 >> 0x20);
    uVar41 = NEON_fcmge(CONCAT44(fVar46 - fVar31,(float)uVar32 - (float)uVar49),0,4);
    fVar25 = (float)*(undefined8 *)(param_1 + 0xb4);
    fVar39 = fVar25 + (float)uVar49;
    fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
    fVar31 = fVar36 + fVar31;
    fVar25 = fVar25 + (float)uVar32;
    fVar36 = fVar36 + fVar46;
    iVar40 = CONCAT13((byte)((ulong)DAT_0024e7a8 >> 0x18) & ~(byte)((ulong)uVar41 >> 0x18),
                      CONCAT12((byte)((ulong)DAT_0024e7a8 >> 0x10) & ~(byte)((ulong)uVar41 >> 0x10),
                               CONCAT11((byte)((ulong)DAT_0024e7a8 >> 8) &
                                        ~(byte)((ulong)uVar41 >> 8),
                                        (byte)DAT_0024e7a8 & ~(byte)uVar41)));
    iVar44 = (int)(CONCAT17((byte)((ulong)DAT_0024e7a8 >> 0x38) & ~(byte)((ulong)uVar41 >> 0x38),
                            CONCAT16((byte)((ulong)DAT_0024e7a8 >> 0x30) &
                                     ~(byte)((ulong)uVar41 >> 0x30),
                                     CONCAT15((byte)((ulong)DAT_0024e7a8 >> 0x28) &
                                              ~(byte)((ulong)uVar41 >> 0x28),
                                              CONCAT14((byte)((ulong)DAT_0024e7a8 >> 0x20) &
                                                       ~(byte)((ulong)uVar41 >> 0x20),iVar40)))) >>
                  0x20);
    iVar11 = iVar40 + iVar44;
    auVar43._0_8_ =
         CONCAT17((char)((uint)iVar11 >> 0x18),
                  CONCAT16((char)((uint)iVar11 >> 0x10),
                           CONCAT15((char)((uint)iVar11 >> 8),CONCAT14((char)iVar11,iVar40 + iVar44)
                                   ))) & 0x303030303030303;
    auVar43._8_8_ = 0;
    auVar47 = NEON_cmeq(auVar43,ZEXT716(0),1);
    bVar12 = auVar47[0];
    uVar5 = CONCAT12(bVar12,CONCAT11(bVar12,bVar12));
    bVar24 = bVar12 & 3 | (byte)((uVar5 & 3) << 2) | (byte)(((uVar5 & 0xff00) >> 8 & 3) << 4) |
             (byte)((bVar12 & 3) << 6);
    bVar28 = bVar12 & 3 | (byte)(((bVar12 & 3) << 10) >> 8) | (byte)(((bVar12 & 3) << 0xc) >> 8) |
             (byte)(((bVar12 & 3) << 0xe) >> 8);
    bVar29 = bVar12 & 3 | (byte)(((bVar12 & 3) << 0x12) >> 0x10) |
             (byte)(((bVar12 & 3) << 0x14) >> 0x10) | (byte)(((bVar12 & 3) << 0x16) >> 0x10);
    bVar30 = bVar12 & 3 | (byte)(((bVar12 & 3) << 0x1a) >> 0x18) |
             (byte)(((bVar12 & 3) << 0x1c) >> 0x18) | (byte)(((uint)bVar12 << 0x1e) >> 0x18);
    bVar12 = SUB41(fVar39,0) & bVar24;
    bVar13 = (byte)((uint)fVar39 >> 8) & bVar28;
    bVar14 = (byte)((uint)fVar39 >> 0x10) & bVar29;
    bVar15 = (byte)((uint)fVar39 >> 0x18) & bVar30;
    bVar16 = SUB41(fVar31,0) & bVar24;
    bVar17 = (byte)((uint)fVar31 >> 8) & bVar28;
    bVar18 = (byte)((uint)fVar31 >> 0x10) & bVar29;
    bVar19 = (byte)((uint)fVar31 >> 0x18) & bVar30;
    bVar20 = SUB41(fVar25,0) & bVar24;
    bVar21 = (byte)((uint)fVar25 >> 8) & bVar28;
    bVar22 = (byte)((uint)fVar25 >> 0x10) & bVar29;
    bVar23 = (byte)((uint)fVar25 >> 0x18) & bVar30;
    bVar24 = SUB41(fVar36,0) & bVar24;
    bVar28 = (byte)((uint)fVar36 >> 8) & bVar28;
    bVar29 = (byte)((uint)fVar36 >> 0x10) & bVar29;
    bVar30 = (byte)((uint)fVar36 >> 0x18) & bVar30;
    auVar2[1] = bVar13;
    auVar2[0] = bVar12;
    auVar2[2] = bVar14;
    auVar2[3] = bVar15;
    auVar2[4] = bVar16;
    auVar2[5] = bVar17;
    auVar2[6] = bVar18;
    auVar2[7] = bVar19;
    auVar2[8] = bVar20;
    auVar2[9] = bVar21;
    auVar2[10] = bVar22;
    auVar2[0xb] = bVar23;
    auVar2[0xc] = bVar24;
    auVar2[0xd] = bVar28;
    auVar2[0xe] = bVar29;
    auVar2[0xf] = bVar30;
    auVar3[1] = bVar13;
    auVar3[0] = bVar12;
    auVar3[2] = bVar14;
    auVar3[3] = bVar15;
    auVar3[4] = bVar16;
    auVar3[5] = bVar17;
    auVar3[6] = bVar18;
    auVar3[7] = bVar19;
    auVar3[8] = bVar20;
    auVar3[9] = bVar21;
    auVar3[10] = bVar22;
    auVar3[0xb] = bVar23;
    auVar3[0xc] = bVar24;
    auVar3[0xd] = bVar28;
    auVar3[0xe] = bVar29;
    auVar3[0xf] = bVar30;
    auVar47 = NEON_ext(auVar2,auVar3,8,1);
    uVar49 = NEON_fcmgt(CONCAT44(auVar47._4_4_ -
                                 (float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))),
                                 auVar47._0_4_ -
                                 (float)CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12)))),0
                        ,4);
    if (((uint)uVar49 & (uint)((ulong)uVar49 >> 0x20) & 1) == 0) goto LAB_004a04c0;
    pAVar7 = *(Artboard **)(param_1 + 0x40);
    uStack_88 = CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar24,CONCAT13(bVar23,
                                                  CONCAT12(bVar22,CONCAT11(bVar21,bVar20)))))));
    local_90 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,
                                                  CONCAT12(bVar14,CONCAT11(bVar13,bVar12)))))));
    if (pAVar7 == (Artboard *)0x0) goto LAB_004a0598;
LAB_004a0550:
    rootTransformAABB(pAVar7,(AABB *)&local_90);
    bVar12 = extraout_b0_00;
  }
LAB_004a0598:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar12);
}


// ===== 004a05d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a05d8  FUN_004a05d8 =====

void FUN_004a05d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0066c930;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 004a0610  FUN_004a0610 =====

void FUN_004a0610(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0066c930;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 004a0628  FUN_004a0628 =====

void FUN_004a0628(void)

{
  return;
}


// ===== 004a062c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a0630  FUN_004a0630 =====

undefined8
FUN_004a0630(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
            undefined8 *param_6)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 auVar3 [16];
  uint3 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar12;
  undefined1 auVar11 [16];
  byte bVar13;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  int iVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  int iVar32;
  undefined1 auVar31 [16];
  float fVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined4 uStack_44;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)*param_6;
  if ((plVar7 != (long *)0x0) && (uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,2), (uVar5 & 1) != 0)
     ) {
    uVar10 = (**(code **)(*plVar7 + 0xf0))(plVar7);
    fVar9 = (float)uVar10;
    fVar27 = param_3 - fVar9;
    if ((fVar27 != 0.0 && fVar27 < 0.0 == NAN(fVar27)) &&
       (fVar27 = param_4 - param_2, fVar27 != 0.0 && fVar27 < 0.0 == NAN(fVar27))) {
      uStack_44 = (undefined4)((ulong)*(undefined8 *)((long)plVar7 + 0xa4) >> 0x20);
      uVar37 = CONCAT44(*(undefined4 *)((long)plVar7 + 0xac),uStack_44);
      fVar27 = (float)*(undefined8 *)((long)plVar7 + 0xa4);
      fVar34 = *(float *)(plVar7 + 0x16);
      auVar35._8_8_ = uVar37;
      auVar35._0_8_ = uVar37;
      auVar35 = NEON_rev64(auVar35,4);
      auVar14._4_4_ = param_4;
      auVar14._0_4_ = param_3;
      uVar37 = NEON_fcmeq(auVar35._0_8_,0,4);
      auVar14._8_8_ = uVar10;
      uVar10 = CONCAT17(~(byte)((ulong)uVar37 >> 0x38),
                        CONCAT16(~(byte)((ulong)uVar37 >> 0x30),
                                 CONCAT15(~(byte)((ulong)uVar37 >> 0x28),
                                          CONCAT14(~(byte)((ulong)uVar37 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)uVar37 >> 0x18),
                                                            CONCAT12(~(byte)((ulong)uVar37 >> 0x10),
                                                                     CONCAT11(~(byte)((ulong)uVar37
                                                                                     >> 8),
                                                                              ~(byte)uVar37)))))));
      uVar5 = NEON_umaxp(uVar10,uVar10,4);
      auVar19._0_12_ = auVar14._0_12_;
      auVar19._12_4_ = param_4;
      if ((uVar5 & 1) == 0) {
        auVar33._0_4_ = fVar27 * fVar9;
        auVar33._4_4_ = fVar34 * param_2;
        auVar33._8_4_ = fVar27 * param_3;
        auVar33._12_4_ = fVar34 * param_2;
        auVar25._8_4_ = 0xff800000;
        auVar25._0_8_ = 0xff800000ff800000;
        auVar25._12_4_ = 0xff800000;
        auVar21._8_4_ = 0x7f800000;
        auVar21._0_8_ = 0x7f8000007f800000;
        auVar21._12_4_ = 0x7f800000;
        auVar30._0_4_ = fVar27 * param_3;
        auVar30._4_4_ = fVar34 * param_4;
        auVar30._8_4_ = fVar27 * fVar9;
        auVar30._12_4_ = fVar34 * param_4;
        auVar35 = NEON_fminnm(auVar33,auVar21,4);
        auVar14 = NEON_fmaxnm(auVar33,auVar25,4);
        auVar35 = NEON_fminnm(auVar30,auVar35,4);
        auVar14 = NEON_fmaxnm(auVar30,auVar14,4);
      }
      else {
        auVar3._4_4_ = param_2;
        auVar3._0_4_ = fVar9;
        auVar3._8_4_ = param_3;
        auVar3._12_4_ = param_2;
        auVar14 = NEON_rev64(auVar3,4);
        auVar19 = NEON_rev64(auVar19,4);
        auVar24._8_4_ = 0x7f800000;
        auVar24._0_8_ = 0x7f8000007f800000;
        auVar24._12_4_ = 0x7f800000;
        auVar36._8_4_ = 0xff800000;
        auVar36._0_8_ = 0xff800000ff800000;
        auVar36._12_4_ = 0xff800000;
        auVar15._0_4_ = auVar35._0_4_ * auVar14._0_4_ + fVar9 * fVar27;
        auVar15._4_4_ = auVar35._4_4_ * auVar14._4_4_ + param_2 * fVar34;
        auVar15._8_4_ = auVar35._8_4_ * auVar14._8_4_ + param_3 * fVar27;
        auVar15._12_4_ = auVar35._12_4_ * auVar14._12_4_ + param_2 * fVar34;
        auVar20._0_4_ = auVar35._0_4_ * auVar19._0_4_ + param_3 * fVar27;
        auVar20._4_4_ = auVar35._4_4_ * auVar19._4_4_ + param_4 * fVar34;
        auVar20._8_4_ = auVar35._8_4_ * auVar19._8_4_ + fVar9 * fVar27;
        auVar20._12_4_ = auVar35._12_4_ * auVar19._12_4_ + param_4 * fVar34;
        auVar35 = NEON_fminnm(auVar15,auVar24,4);
        auVar14 = NEON_fmaxnm(auVar15,auVar36,4);
        auVar35 = NEON_fminnm(auVar20,auVar35,4);
        auVar14 = NEON_fmaxnm(auVar20,auVar14,4);
      }
      auVar19 = NEON_ext(auVar35,auVar35,8,1);
      auVar33 = NEON_ext(auVar14,auVar14,8,1);
      uVar10 = NEON_fminnm(auVar35._0_8_,auVar19._0_8_,4);
      uVar37 = NEON_fmaxnm(auVar14._0_8_,auVar33._0_8_,4);
      fVar34 = (float)((ulong)uVar10 >> 0x20);
      fVar23 = (float)((ulong)uVar37 >> 0x20);
      uVar29 = NEON_fcmge(CONCAT44(fVar23 - fVar34,(float)uVar37 - (float)uVar10),0,4);
      fVar27 = (float)*(undefined8 *)((long)plVar7 + 0xb4);
      fVar9 = fVar27 + (float)uVar10;
      fVar12 = (float)((ulong)*(undefined8 *)((long)plVar7 + 0xb4) >> 0x20);
      fVar34 = fVar12 + fVar34;
      fVar27 = fVar27 + (float)uVar37;
      fVar12 = fVar12 + fVar23;
      iVar28 = CONCAT13((byte)((ulong)DAT_0024e7a8 >> 0x18) & ~(byte)((ulong)uVar29 >> 0x18),
                        CONCAT12((byte)((ulong)DAT_0024e7a8 >> 0x10) &
                                 ~(byte)((ulong)uVar29 >> 0x10),
                                 CONCAT11((byte)((ulong)DAT_0024e7a8 >> 8) &
                                          ~(byte)((ulong)uVar29 >> 8),
                                          (byte)DAT_0024e7a8 & ~(byte)uVar29)));
      iVar32 = (int)(CONCAT17((byte)((ulong)DAT_0024e7a8 >> 0x38) & ~(byte)((ulong)uVar29 >> 0x38),
                              CONCAT16((byte)((ulong)DAT_0024e7a8 >> 0x30) &
                                       ~(byte)((ulong)uVar29 >> 0x30),
                                       CONCAT15((byte)((ulong)DAT_0024e7a8 >> 0x28) &
                                                ~(byte)((ulong)uVar29 >> 0x28),
                                                CONCAT14((byte)((ulong)DAT_0024e7a8 >> 0x20) &
                                                         ~(byte)((ulong)uVar29 >> 0x20),iVar28))))
                    >> 0x20);
      iVar8 = iVar28 + iVar32;
      auVar31._0_8_ =
           CONCAT17((char)((uint)iVar8 >> 0x18),
                    CONCAT16((char)((uint)iVar8 >> 0x10),
                             CONCAT15((char)((uint)iVar8 >> 8),CONCAT14((char)iVar8,iVar28 + iVar32)
                                     ))) & 0x303030303030303;
      auVar31._8_8_ = 0;
      auVar35 = NEON_cmeq(auVar31,ZEXT716(0),1);
      bVar18 = auVar35[0];
      uVar4 = CONCAT12(bVar18,CONCAT11(bVar18,bVar18));
      bVar13 = bVar18 & 3 | (byte)((uVar4 & 3) << 2) | (byte)(((uVar4 & 0xff00) >> 8 & 3) << 4) |
               (byte)((bVar18 & 3) << 6);
      bVar16 = bVar18 & 3 | (byte)(((bVar18 & 3) << 10) >> 8) | (byte)(((bVar18 & 3) << 0xc) >> 8) |
               (byte)(((bVar18 & 3) << 0xe) >> 8);
      bVar17 = bVar18 & 3 | (byte)(((bVar18 & 3) << 0x12) >> 0x10) |
               (byte)(((bVar18 & 3) << 0x14) >> 0x10) | (byte)(((bVar18 & 3) << 0x16) >> 0x10);
      bVar18 = bVar18 & 3 | (byte)(((bVar18 & 3) << 0x1a) >> 0x18) |
               (byte)(((bVar18 & 3) << 0x1c) >> 0x18) | (byte)(((uint)bVar18 << 0x1e) >> 0x18);
      fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & bVar18,
                              CONCAT12((byte)((uint)fVar9 >> 0x10) & bVar17,
                                       CONCAT11((byte)((uint)fVar9 >> 8) & bVar16,
                                                SUB41(fVar9,0) & bVar13)));
      auVar11._0_8_ =
           CONCAT17((byte)((uint)fVar34 >> 0x18) & bVar18,
                    CONCAT16((byte)((uint)fVar34 >> 0x10) & bVar17,
                             CONCAT15((byte)((uint)fVar34 >> 8) & bVar16,
                                      CONCAT14(SUB41(fVar34,0) & bVar13,fVar9))));
      auVar11[8] = SUB41(fVar27,0) & bVar13;
      auVar11[9] = (byte)((uint)fVar27 >> 8) & bVar16;
      auVar11[10] = (byte)((uint)fVar27 >> 0x10) & bVar17;
      auVar11[0xb] = (byte)((uint)fVar27 >> 0x18) & bVar18;
      auVar11[0xc] = SUB41(fVar12,0) & bVar13;
      auVar11[0xd] = (byte)((uint)fVar12 >> 8) & bVar16;
      auVar11[0xe] = (byte)((uint)fVar12 >> 0x10) & bVar17;
      auVar11[0xf] = (byte)((uint)fVar12 >> 0x18) & bVar18;
      auVar35 = NEON_ext(auVar11,auVar11,8,1);
      uVar10 = NEON_fcmgt(CONCAT44(auVar35._4_4_ - (float)((ulong)auVar11._0_8_ >> 0x20),
                                   auVar35._0_4_ - fVar9),0,4);
      if (((uint)uVar10 & (uint)((ulong)uVar10 >> 0x20) & 1) != 0) {
        pauVar1 = *(undefined1 (**) [16])(param_5 + 8);
        auVar35 = *pauVar1;
        **(undefined1 **)(param_5 + 0x10) = 1;
        auVar22._8_8_ = auVar35._8_8_;
        auVar22._0_8_ = auVar11._0_8_;
        auVar26._8_8_ = auVar11._8_8_;
        auVar26._0_8_ = auVar35._0_8_;
        auVar14 = NEON_fcmgt(auVar26,auVar22,4);
        auVar35 = NEON_bif(auVar11,auVar35,auVar14,1);
        *(long *)(*pauVar1 + 8) = auVar35._8_8_;
        *(long *)*pauVar1 = auVar35._0_8_;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a08cc  rive::ClippingShapeStart::draw =====

/* rive::ClippingShapeStart::draw(rive::Renderer*, bool) */

void __thiscall
rive::ClippingShapeStart::draw(ClippingShapeStart *this,Renderer *param_1,bool param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (*(char *)(lVar2 + 0x90) != '\0') {
    if (param_2) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
      lVar2 = *(long *)(this + 8);
      if (lVar2 == 0) {
        return;
      }
    }
    if (*(ShapePaintPath **)(lVar2 + 0x160) != (ShapePaintPath *)0x0) {
      uVar1 = ShapePaintPath::renderPath
                        (*(ShapePaintPath **)(lVar2 + 0x160),
                         *(Factory **)(*(long *)(lVar2 + 0x40) + 0xbd8));
                    /* WARNING: Could not recover jumptable at 0x004a0934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x30))(param_1,uVar1);
      return;
    }
  }
  return;
}


// ===== 004a0944  rive::ClippingShapeStart::emptyClipCount =====

/* rive::ClippingShapeStart::emptyClipCount() */

undefined8 __thiscall rive::ClippingShapeStart::emptyClipCount(ClippingShapeStart *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 8);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x90) != '\0')) && (*(long *)(lVar1 + 0x160) == 0)) {
    return 1;
  }
  return 0;
}


// ===== 004a096c  rive::ClippingShapeStart::isVisible =====

/* rive::ClippingShapeStart::isVisible() */

bool __thiscall rive::ClippingShapeStart::isVisible(ClippingShapeStart *this)

{
  if (*(long *)(this + 8) != 0) {
    return *(char *)(*(long *)(this + 8) + 0x90) != '\0';
  }
  return false;
}


// ===== 004a098c  rive::ClippingShapeEnd::emptyClipCount =====

/* rive::ClippingShapeEnd::emptyClipCount() */

undefined8 __thiscall rive::ClippingShapeEnd::emptyClipCount(ClippingShapeEnd *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 8);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x90) != '\0')) && (*(long *)(lVar1 + 0x160) == 0)) {
    return 0xffffffff;
  }
  return 0;
}


// ===== 004a09b4  rive::ClippingShapeEnd::draw =====

/* rive::ClippingShapeEnd::draw(rive::Renderer*, bool) */

void __thiscall rive::ClippingShapeEnd::draw(ClippingShapeEnd *this,Renderer *param_1,bool param_2)

{
  if ((*(char *)(*(long *)(this + 8) + 0x90) != '\0') && (param_2)) {
                    /* WARNING: Could not recover jumptable at 0x004a09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
    return;
  }
  return;
}


// ===== 004a09d8  rive::ClippingShape::~ClippingShape =====

/* rive::ClippingShape::~ClippingShape() */

void __thiscall rive::ClippingShape::~ClippingShape(ClippingShape *this)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0xb0);
  plVar1 = *(long **)(this + 0xb8);
  *(undefined **)this = PTR_vtable_0067d408 + 0x10;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if ((long *)*plVar4 != (long *)0x0) {
      (**(code **)(*(long *)*plVar4 + 8))();
    }
  }
  plVar1 = *(long **)(this + 0xd0);
  for (plVar4 = *(long **)(this + 200); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if ((long *)*plVar4 != (long *)0x0) {
      (**(code **)(*(long *)*plVar4 + 8))();
    }
  }
  pvVar3 = *(void **)(this + 0x130);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x138) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x118);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(this + 0x110);
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar2 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pvVar3 = *(void **)(this + 200);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xb0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x98);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar3;
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
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 004a0b3c  rive::ClippingShape::~ClippingShape =====

/* rive::ClippingShape::~ClippingShape() */

void __thiscall rive::ClippingShape::~ClippingShape(ClippingShape *this)

{
  ~ClippingShape(this);
  operator_delete(this);
  return;
}


// ===== 004a0b60  FUN_004a0b60 =====

undefined8 FUN_004a0b60(void)

{
  return 0x2a;
}


// ===== 004a0b68  FUN_004a0b68 =====

bool FUN_004a0b68(undefined8 param_1,int param_2)

{
  return (param_2 - 10U & 0xffdf) == 0;
}


// ===== 004a0b7c  FUN_004a0b7c =====

undefined8 FUN_004a0b7c(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x5c) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004a0d74;
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
LAB_004a0d74:
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
      if (param_2 != 5) goto LAB_004a0dec;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004a0dc4;
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
LAB_004a0dc4:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x5e) {
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0x90) = *pcVar7 == '\x01';
    }
  }
  else if (param_2 == 0x5d) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004a0d58;
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
LAB_004a0d58:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x8c) = (int)uVar6;
  }
  else {
    if (param_2 != 0x5c) goto LAB_004a0dec;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004a0dac;
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
LAB_004a0dac:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004a0dec:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a0e14  rive::ClippingShape::onAddedDirty =====

/* rive::ClippingShape::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::ClippingShape::onAddedDirty(ClippingShape *this,CoreContext *param_1)

{
  ClippingShape *pCVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pCVar1 = (ClippingShape *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pCVar1 = (ClippingShape *)(param_1 + -0x998);
  }
  *(ClippingShape **)(this + 0x40) = pCVar1;
  *(ClippingShape **)(this + 0x80) = pCVar1;
  if (pCVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x88));
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,2), (uVar3 & 1) == 0)
     ) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    *(long **)(this + 0xe0) = plVar2;
  }
  return uVar4;
}


// ===== 004a0eb8  rive::ClippingShape::onAddedClean =====

/* rive::ClippingShape::onAddedClean(rive::CoreContext*) */

undefined8 rive::ClippingShape::onAddedClean(CoreContext *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  ContainerComponent **ppCVar4;
  undefined ***pppuVar5;
  long lVar6;
  ContainerComponent *pCVar7;
  undefined **local_d0;
  CoreContext *pCStack_c8;
  long *local_b0;
  undefined **local_a0;
  CoreContext *pCStack_98;
  undefined ***local_80;
  ContainerComponent *local_70 [4];
  ContainerComponent **local_50;
  long local_38;
  
  pppuVar5 = &local_d0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar7 = *(ContainerComponent **)(param_1 + 0x30);
  local_a0 = &PTR_FUN_0066c978;
  pCStack_98 = param_1;
  local_80 = &local_a0;
  local_70[0] = pCVar7;
  uVar2 = FUN_004a14d8(&local_a0,local_70);
  if ((uVar2 & 1) != 0) {
    if (local_80 == (undefined ***)0x0) {
      local_50 = (ContainerComponent **)0x0;
    }
    else if (local_80 == &local_a0) {
      local_50 = local_70;
      (*(code *)local_a0[3])(&local_a0,local_70);
    }
    else {
      local_50 = (ContainerComponent **)(*(code *)(*local_80)[2])();
    }
    ContainerComponent::forEachChild(pCVar7,local_70);
    if (local_50 == local_70) {
      lVar6 = 4;
      ppCVar4 = local_70;
    }
    else {
      if (local_50 == (ContainerComponent **)0x0) goto LAB_004a0f90;
      lVar6 = 5;
      ppCVar4 = local_50;
    }
    (**(code **)(*ppCVar4 + lVar6 * 8))();
  }
LAB_004a0f90:
  if (local_80 == &local_a0) {
    lVar6 = 4;
    pppuVar3 = &local_a0;
LAB_004a0fb0:
    (*(code *)(*pppuVar3)[lVar6])();
  }
  else if (local_80 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar3 = local_80;
    goto LAB_004a0fb0;
  }
  pCVar7 = *(ContainerComponent **)(param_1 + 0xe0);
  if (pCVar7 == (ContainerComponent *)0x0) goto LAB_004a10a0;
  local_d0 = &PTR_FUN_0066c9c0;
  pCStack_c8 = param_1;
  local_b0 = (long *)&local_d0;
  local_70[0] = pCVar7;
  uVar2 = FUN_004a12e8(&local_d0,local_70);
  if ((uVar2 & 1) != 0) {
    if (local_b0 == (long *)0x0) {
      local_50 = (ContainerComponent **)0x0;
    }
    else if ((undefined ***)local_b0 == &local_d0) {
      local_50 = local_70;
      (*(code *)local_d0[3])(&local_d0,local_70);
    }
    else {
      local_50 = (ContainerComponent **)(**(code **)(*local_b0 + 0x10))();
    }
    ContainerComponent::forEachChild(pCVar7,local_70);
    if (local_50 == local_70) {
      lVar6 = 4;
      ppCVar4 = local_70;
    }
    else {
      if (local_50 == (ContainerComponent **)0x0) goto LAB_004a1074;
      lVar6 = 5;
      ppCVar4 = local_50;
    }
    (**(code **)(*ppCVar4 + lVar6 * 8))();
  }
LAB_004a1074:
  if ((undefined ***)local_b0 == &local_d0) {
    lVar6 = 4;
  }
  else {
    if (local_b0 == (long *)0x0) goto LAB_004a10a0;
    lVar6 = 5;
    pppuVar5 = (undefined ***)local_b0;
  }
  (**(code **)((long)*pppuVar5 + lVar6 * 8))();
LAB_004a10a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a10cc  rive::ClippingShape::buildDependencies =====

/* rive::ClippingShape::buildDependencies() */

void __thiscall rive::ClippingShape::buildDependencies(ClippingShape *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(this + 0xa0);
  for (plVar2 = *(long **)(this + 0x98); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    Component::addDependent((Component *)(*plVar2 + 0x1a0),(Component *)this);
  }
  *(ClippingShape **)(this + 0xf0) = this;
  *(ClippingShape **)(this + 0x100) = this;
  return;
}


// ===== 004a111c  rive::ClippingShape::update =====

/* rive::ClippingShape::update(rive::ComponentDirt) */

void __thiscall rive::ClippingShape::update(ClippingShape *this,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((param_2 & 0x2090) != 0) {
    plVar3 = *(long **)(this + 0x98);
    plVar1 = *(long **)(this + 0xa0);
    this[0x158] = (ClippingShape)0x0;
    *(undefined4 *)(this + 0x15c) = *(undefined4 *)(this + 0x8c);
    *(undefined8 *)(this + 0x120) = *(undefined8 *)(this + 0x118);
    *(undefined8 *)(this + 0x138) = *(undefined8 *)(this + 0x130);
    this[0x150] = (ClippingShape)0x0;
    this[0x108] = (ClippingShape)0x1;
    *(undefined8 *)(this + 0x160) = 0;
    if (plVar3 != plVar1) {
      do {
        lVar4 = *plVar3;
        plVar6 = *(long **)(lVar4 + 0x348);
        for (plVar5 = *(long **)(lVar4 + 0x340); plVar5 != plVar6; plVar5 = plVar5 + 1) {
          if (((*(byte *)(*plVar5 + 0x134) & 1) == 0) &&
             (uVar2 = (**(code **)(*(long *)*plVar5 + 0x80))(), (uVar2 & 1) == 0)) {
            auVar7 = RawPath::addPath((RawPath *)(this + 0x118),(RawPath *)(lVar4 + 0x298),
                                      (Mat2D *)&DAT_00686158);
            RawPath::pruneEmptySegments(this + 0x118,auVar7._0_8_,auVar7._8_8_);
            this[0x108] = (ClippingShape)0x1;
            *(ClippingShape **)(this + 0x160) = this + 0x108;
            break;
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  return;
}


// ===== 004a1224  FUN_004a1224 =====

void FUN_004a1224(void)

{
  return;
}


// ===== 004a1228  FUN_004a1228 =====

void FUN_004a1228(void)

{
  return;
}


// ===== 004a122c  rive::ClippingShape::isVisibleChanged =====

/* rive::ClippingShape::isVisibleChanged() */

void __thiscall rive::ClippingShape::isVisibleChanged(ClippingShape *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if (-1 < (short)*(ushort *)(plVar3 + 0xc)) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x8000;
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


// ===== 004a1294  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a1298  FUN_004a1298 =====

void FUN_004a1298(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0066c9c0;
  puVar1[1] = uVar2;
  return;
}


// ===== 004a12cc  FUN_004a12cc =====

void FUN_004a12cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0066c9c0;
  param_2[1] = uVar1;
  return;
}


// ===== 004a12e0  FUN_004a12e0 =====

void FUN_004a12e0(void)

{
  return;
}


// ===== 004a12e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a12e8  FUN_004a12e8 =====

undefined8 FUN_004a12e8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  plVar11 = (long *)*param_2;
  lVar12 = *(long *)(param_1 + 8);
  uVar1 = (**(code **)(*plVar11 + 0x18))(plVar11,3);
  if ((uVar1 & 1) == 0) {
    return 1;
  }
  puVar10 = *(undefined8 **)(lVar12 + 0xa0);
  puVar4 = *(undefined8 **)(lVar12 + 0xa8);
  *(byte *)(plVar11 + 0x30) = *(byte *)(plVar11 + 0x30) | 0xc;
  if (puVar10 < puVar4) {
    puVar14 = puVar10 + 1;
    *puVar10 = plVar11;
    goto LAB_004a1448;
  }
  puVar9 = *(undefined8 **)(lVar12 + 0x98);
  lVar13 = (long)puVar10 - (long)puVar9 >> 3;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_004a1470();
LAB_004a146c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)puVar4 - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004a146c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar13 * 8);
  puVar14 = puVar4 + 1;
  *puVar4 = plVar11;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar1 = ((long)puVar10 - (long)puVar9) - 8;
    puVar15 = puVar10;
    if ((0x37 < uVar1) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar7 = puVar4 + -2;
      puVar8 = puVar10 + -2;
      uVar1 = (uVar1 >> 3) + 1;
      uVar6 = uVar1 & 0x3ffffffffffffffc;
      puVar15 = puVar10 + -uVar6;
      uVar3 = uVar6;
      do {
        puVar10 = puVar8 + -1;
        uVar18 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar7[-1] = *puVar10;
        puVar7[-2] = uVar18;
        puVar7[1] = uVar17;
        *puVar7 = uVar16;
        puVar7 = puVar7 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar6;
      puVar10 = puVar9;
      if (uVar1 == uVar6) goto LAB_004a1434;
    }
    do {
      puVar15 = puVar15 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar15;
    } while (puVar15 != puVar9);
    puVar10 = *(undefined8 **)(lVar12 + 0x98);
  }
LAB_004a1434:
  *(undefined8 **)(lVar12 + 0x98) = puVar4;
  *(undefined8 **)(lVar12 + 0xa0) = puVar14;
  *(void **)(lVar12 + 0xa8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004a1448:
  *(undefined8 **)(lVar12 + 0xa0) = puVar14;
  return 1;
}


// ===== 004a1470  FUN_004a1470 =====

void FUN_004a1470(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004a1484  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a1488  FUN_004a1488 =====

void FUN_004a1488(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0066c978;
  puVar1[1] = uVar2;
  return;
}


// ===== 004a14bc  FUN_004a14bc =====

void FUN_004a14bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0066c978;
  param_2[1] = uVar1;
  return;
}


// ===== 004a14d0  FUN_004a14d0 =====

void FUN_004a14d0(void)

{
  return;
}


// ===== 004a14d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a14d8  FUN_004a14d8 =====

undefined8 FUN_004a14d8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  Drawable *this;
  ClippingShape *pCVar2;
  
  this = (Drawable *)*param_2;
  pCVar2 = *(ClippingShape **)(param_1 + 8);
  uVar1 = (**(code **)(*(long *)this + 0x18))(this,0xd);
  if ((uVar1 & 1) != 0) {
    rive::Drawable::addClippingShape(this,pCVar2);
  }
  return 1;
}


// ===== 004a1520  FUN_004a1520 =====

void FUN_004a1520(void)

{
  return;
}


// ===== 004a1524  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a1528  FUN_004a1528 =====

undefined8 FUN_004a1528(void)

{
  return 1;
}


// ===== 004a1530  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004a1534  FUN_004a1534 =====

undefined8 FUN_004a1534(void)

{
  return 0;
}


// ===== 004a153c  FUN_004a153c =====

undefined8 FUN_004a153c(void)

{
  return 1;
}


// ===== 004a1544  rive::ClippingShapeBase::clone =====

/* rive::ClippingShapeBase::clone() const */

long * __thiscall rive::ClippingShapeBase::clone(ClippingShapeBase *this)

{
  ClippingShapeBase CVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)operator_new(0x168);
  plVar4[0x2c] = 0;
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
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
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
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[0x27] = 0;
  plVar4[0x26] = 0;
  plVar4[0x29] = 0;
  plVar4[0x28] = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2a] = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  plVar4[6] = 0;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  puVar2 = PTR_vtable_0067d408;
  *(undefined4 *)(plVar4 + 0x11) = 0xffffffff;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  puVar2 = PTR_vtable_0067d410;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  puVar3 = PTR_vtable_0067d418;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1d] = (long)(puVar2 + 0x10);
  plVar4[0x1f] = (long)(puVar3 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar4 + 0x21),true);
  lVar5 = *(long *)(this + 0x88);
  CVar1 = this[0x90];
  plVar4[0x2c] = 0;
  plVar4[0x11] = lVar5;
  *(ClippingShapeBase *)(plVar4 + 0x12) = CVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 004a1658  FUN_004a1658 =====

void FUN_004a1658(long *param_1)

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


// ===== 004a16c4  FUN_004a16c4 =====

void FUN_004a16c4(void)

{
  return;
}


// ===== 004a16c8  rive::CubicAsymmetricVertex::computeIn =====

/* rive::CubicAsymmetricVertex::computeIn() */

void __thiscall rive::CubicAsymmetricVertex::computeIn(CubicAsymmetricVertex *this)

{
  float local_28;
  float local_24;
  
  sincosf(*(float *)(this + 0xc4),&local_24,&local_28);
  *(ulong *)(this + 0xb4) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20) -
                local_24 * (float)*(undefined8 *)(this + 200),
                (float)*(undefined8 *)(this + 0xa0) - local_28 * (float)*(undefined8 *)(this + 200))
  ;
  return;
}


// ===== 004a171c  rive::CubicAsymmetricVertex::computeOut =====

/* rive::CubicAsymmetricVertex::computeOut() */

void __thiscall rive::CubicAsymmetricVertex::computeOut(CubicAsymmetricVertex *this)

{
  float local_28;
  float local_24;
  
  sincosf(*(float *)(this + 0xc4),&local_24,&local_28);
  *(ulong *)(this + 0xbc) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20) +
                local_24 * *(float *)(this + 0xcc),
                (float)*(undefined8 *)(this + 0xa0) + local_28 * *(float *)(this + 0xcc));
  return;
}


// ===== 004a1770  rive::CubicAsymmetricVertex::rotationChanged =====

/* rive::CubicAsymmetricVertex::rotationChanged() */

void __thiscall rive::CubicAsymmetricVertex::rotationChanged(CubicAsymmetricVertex *this)

{
  *(undefined2 *)(this + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x004a177c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1780  rive::CubicAsymmetricVertex::inDistanceChanged =====

/* rive::CubicAsymmetricVertex::inDistanceChanged() */

void __thiscall rive::CubicAsymmetricVertex::inDistanceChanged(CubicAsymmetricVertex *this)

{
  this[0xb0] = (CubicAsymmetricVertex)0x0;
                    /* WARNING: Could not recover jumptable at 0x004a178c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1790  rive::CubicAsymmetricVertex::outDistanceChanged =====

/* rive::CubicAsymmetricVertex::outDistanceChanged() */

void __thiscall rive::CubicAsymmetricVertex::outDistanceChanged(CubicAsymmetricVertex *this)

{
  this[0xb1] = (CubicAsymmetricVertex)0x0;
                    /* WARNING: Could not recover jumptable at 0x004a179c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a17a0  FUN_004a17a0 =====

void FUN_004a17a0(long *param_1)

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


// ===== 004a182c  FUN_004a182c =====

undefined8 FUN_004a182c(void)

{
  return 0x22;
}


// ===== 004a1834  FUN_004a1834 =====

bool FUN_004a1834(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x25) && ((1L << ((ulong)param_2 & 0x3f) & 0x1400004c00U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x6b;
}


// ===== 004a1870  FUN_004a1870 =====

undefined8 FUN_004a1870(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0x51) {
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
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
  }
  else if (param_2 == 0x50) {
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
    *(undefined4 *)(param_1 + 200) = uVar4;
  }
  else {
    if (param_2 != 0x4f) {
      uVar1 = FUN_003cdee4();
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
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
  }
  param_3[2] = (long)puVar2;
  return 1;
}


// ===== 004a1940  rive::CubicAsymmetricVertexBase::clone =====

/* rive::CubicAsymmetricVertexBase::clone() const */

long * __thiscall rive::CubicAsymmetricVertexBase::clone(CubicAsymmetricVertexBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
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
  plVar2[0x12] = 0;
  plVar2[0x11] = 0;
  plVar2[0x14] = 0;
  plVar2[0x13] = 0;
  *(undefined8 *)((long)plVar2 + 0xaa) = 0;
  *(undefined8 *)((long)plVar2 + 0xa2) = 0;
  uVar4 = *(undefined8 *)(this + 0xc4);
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  puVar1 = PTR_vtable_0067d3e0;
  *(undefined8 *)((long)plVar2 + 0xc4) = uVar4;
  uVar3 = *(undefined4 *)(this + 0xcc);
  plVar2[0xf] = 0;
  *(undefined4 *)((long)plVar2 + 0xcc) = uVar3;
  lVar5 = *(long *)(this + 0xa0);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x14] = lVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004a19f0  FUN_004a19f0 =====

void FUN_004a19f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a19f4);
  (*pcVar1)();
}


// ===== 004a19f4  FUN_004a19f4 =====

void FUN_004a19f4(void)

{
  return;
}


// ===== 004a19f8  FUN_004a19f8 =====

void FUN_004a19f8(void)

{
  return;
}


// ===== 004a19fc  FUN_004a19fc =====

void FUN_004a19fc(void)

{
  return;
}


// ===== 004a1a00  rive::CubicDetachedVertex::computeIn =====

/* rive::CubicDetachedVertex::computeIn() */

void __thiscall rive::CubicDetachedVertex::computeIn(CubicDetachedVertex *this)

{
  float local_28;
  float local_24;
  
  sincosf(*(float *)(this + 0xc4),&local_24,&local_28);
  *(ulong *)(this + 0xb4) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20) +
                local_24 * (float)*(undefined8 *)(this + 200),
                (float)*(undefined8 *)(this + 0xa0) + local_28 * (float)*(undefined8 *)(this + 200))
  ;
  return;
}


// ===== 004a1a54  rive::CubicDetachedVertex::computeOut =====

/* rive::CubicDetachedVertex::computeOut() */

void __thiscall rive::CubicDetachedVertex::computeOut(CubicDetachedVertex *this)

{
  float local_28;
  float local_24;
  
  sincosf(*(float *)(this + 0xcc),&local_24,&local_28);
  *(ulong *)(this + 0xbc) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20) +
                local_24 * *(float *)(this + 0xd0),
                (float)*(undefined8 *)(this + 0xa0) + local_28 * *(float *)(this + 0xd0));
  return;
}


// ===== 004a1aa8  rive::CubicDetachedVertex::inRotationChanged =====

/* rive::CubicDetachedVertex::inRotationChanged() */

void __thiscall rive::CubicDetachedVertex::inRotationChanged(CubicDetachedVertex *this)

{
  this[0xb0] = (CubicDetachedVertex)0x0;
                    /* WARNING: Could not recover jumptable at 0x004a1ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1ab8  rive::CubicDetachedVertex::inDistanceChanged =====

/* rive::CubicDetachedVertex::inDistanceChanged() */

void __thiscall rive::CubicDetachedVertex::inDistanceChanged(CubicDetachedVertex *this)

{
  this[0xb0] = (CubicDetachedVertex)0x0;
                    /* WARNING: Could not recover jumptable at 0x004a1ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1ac8  rive::CubicDetachedVertex::outRotationChanged =====

/* rive::CubicDetachedVertex::outRotationChanged() */

void __thiscall rive::CubicDetachedVertex::outRotationChanged(CubicDetachedVertex *this)

{
  this[0xb1] = (CubicDetachedVertex)0x0;
                    /* WARNING: Could not recover jumptable at 0x004a1ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1ad8  rive::CubicDetachedVertex::outDistanceChanged =====

/* rive::CubicDetachedVertex::outDistanceChanged() */

void __thiscall rive::CubicDetachedVertex::outDistanceChanged(CubicDetachedVertex *this)

{
  this[0xb1] = (CubicDetachedVertex)0x0;
                    /* WARNING: Could not recover jumptable at 0x004a1ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1ae8  FUN_004a1ae8 =====

void FUN_004a1ae8(long *param_1)

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


// ===== 004a1b74  FUN_004a1b74 =====

undefined8 FUN_004a1b74(void)

{
  return 6;
}


// ===== 004a1b7c  FUN_004a1b7c =====

bool FUN_004a1b7c(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x25) && ((1L << ((ulong)param_2 & 0x3f) & 0x1000004c40U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x6b;
}


// ===== 004a1bb8  FUN_004a1bb8 =====

undefined8 FUN_004a1bb8(long param_1,ushort param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 < 0x56) {
    if (param_2 == 0x54) {
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
      *(undefined4 *)(param_1 + 0xc4) = uVar4;
    }
    else {
      if (param_2 != 0x55) {
LAB_004a1c34:
        uVar1 = FUN_003cdee4();
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
      *(undefined4 *)(param_1 + 200) = uVar4;
    }
  }
  else if (param_2 == 0x56) {
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
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
  }
  else {
    if (param_2 != 0x57) goto LAB_004a1c34;
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
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
  }
  param_3[2] = (long)puVar2;
  return 1;
}


// ===== 004a1cd0  rive::CubicDetachedVertexBase::clone =====

/* rive::CubicDetachedVertexBase::clone() const */

long * __thiscall rive::CubicDetachedVertexBase::clone(CubicDetachedVertexBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)operator_new(0xd8);
  plVar2[0x1a] = 0;
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
  plVar2[0xf] = 0;
  *(undefined8 *)((long)plVar2 + 0xaa) = 0;
  *(undefined8 *)((long)plVar2 + 0xa2) = 0;
  plVar2[0x14] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x11] = 0;
  puVar1 = PTR_vtable_0067d428;
  uVar5 = *(undefined8 *)(this + 0xcc);
  uVar3 = *(undefined8 *)(this + 0xc4);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  *(undefined8 *)((long)plVar2 + 0xcc) = uVar5;
  *(undefined8 *)((long)plVar2 + 0xc4) = uVar3;
  lVar4 = *(long *)(this + 0xa0);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x14] = lVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004a1d7c  FUN_004a1d7c =====

void FUN_004a1d7c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a1d80);
  (*pcVar1)();
}


// ===== 004a1d80  FUN_004a1d80 =====

void FUN_004a1d80(void)

{
  return;
}


// ===== 004a1d84  FUN_004a1d84 =====

void FUN_004a1d84(void)

{
  return;
}


// ===== 004a1d88  FUN_004a1d88 =====

void FUN_004a1d88(void)

{
  return;
}


// ===== 004a1d8c  FUN_004a1d8c =====

void FUN_004a1d8c(void)

{
  return;
}


// ===== 004a1d90  rive::CubicMirroredVertex::computeIn =====

/* rive::CubicMirroredVertex::computeIn() */

void __thiscall rive::CubicMirroredVertex::computeIn(CubicMirroredVertex *this)

{
  float local_28;
  float local_24;
  
  sincosf(*(float *)(this + 0xc4),&local_24,&local_28);
  *(ulong *)(this + 0xb4) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20) -
                local_24 * *(float *)(this + 200),
                (float)*(undefined8 *)(this + 0xa0) - local_28 * *(float *)(this + 200));
  return;
}


// ===== 004a1de4  rive::CubicMirroredVertex::computeOut =====

/* rive::CubicMirroredVertex::computeOut() */

void __thiscall rive::CubicMirroredVertex::computeOut(CubicMirroredVertex *this)

{
  float local_28;
  float local_24;
  
  sincosf(*(float *)(this + 0xc4),&local_24,&local_28);
  *(ulong *)(this + 0xbc) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20) +
                local_24 * *(float *)(this + 200),
                (float)*(undefined8 *)(this + 0xa0) + local_28 * *(float *)(this + 200));
  return;
}


// ===== 004a1e38  rive::CubicMirroredVertex::rotationChanged =====

/* rive::CubicMirroredVertex::rotationChanged() */

void __thiscall rive::CubicMirroredVertex::rotationChanged(CubicMirroredVertex *this)

{
  *(undefined2 *)(this + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x004a1e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1e48  rive::CubicMirroredVertex::distanceChanged =====

/* rive::CubicMirroredVertex::distanceChanged() */

void __thiscall rive::CubicMirroredVertex::distanceChanged(CubicMirroredVertex *this)

{
  *(undefined2 *)(this + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x004a1e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004a1e58  FUN_004a1e58 =====

void FUN_004a1e58(long *param_1)

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


// ===== 004a1ee4  FUN_004a1ee4 =====

undefined8 FUN_004a1ee4(void)

{
  return 0x23;
}


// ===== 004a1eec  FUN_004a1eec =====

bool FUN_004a1eec(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x25) && ((1L << ((ulong)param_2 & 0x3f) & 0x1800004c00U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x6b;
}


// ===== 004a1f28  FUN_004a1f28 =====

undefined8 FUN_004a1f28(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0x53) {
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
    *(undefined4 *)(param_1 + 200) = uVar4;
  }
  else {
    if (param_2 != 0x52) {
      uVar1 = FUN_003cdee4();
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
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
  }
  param_3[2] = (long)puVar2;
  return 1;
}


// ===== 004a1fb8  rive::CubicMirroredVertexBase::clone =====

/* rive::CubicMirroredVertexBase::clone() const */

long * __thiscall rive::CubicMirroredVertexBase::clone(CubicMirroredVertexBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
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
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0x12] = 0;
  plVar2[0x11] = 0;
  plVar2[0x14] = 0;
  plVar2[0x13] = 0;
  *(undefined8 *)((long)plVar2 + 0xaa) = 0;
  *(undefined8 *)((long)plVar2 + 0xa2) = 0;
  puVar1 = PTR_vtable_0067d3f8;
  uVar3 = *(undefined8 *)(this + 0xc4);
  plVar2[0xf] = 0;
  *(undefined8 *)((long)plVar2 + 0xc4) = uVar3;
  lVar4 = *(long *)(this + 0xa0);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x14] = lVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004a2060  FUN_004a2060 =====

void FUN_004a2060(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a2064);
  (*pcVar1)();
}


// ===== 004a2064  FUN_004a2064 =====

void FUN_004a2064(void)

{
  return;
}


// ===== 004a2068  FUN_004a2068 =====

void FUN_004a2068(void)

{
  return;
}


// ===== 004a206c  rive::CubicVertex::renderIn =====

/* rive::CubicVertex::renderIn() */

CubicVertex * __thiscall rive::CubicVertex::renderIn(CubicVertex *this)

{
  if (*(long *)(this + 0xa8) != 0) {
    return (CubicVertex *)(*(long *)(this + 0xa8) + 0xa8);
  }
  if (this[0xb0] != (CubicVertex)0x0) {
    return this + 0xb4;
  }
  (**(code **)(*(long *)this + 0xb8))();
  this[0xb0] = (CubicVertex)0x1;
  return this + 0xb4;
}


// ===== 004a20c4  rive::CubicVertex::inPoint =====

/* rive::CubicVertex::inPoint() */

CubicVertex * __thiscall rive::CubicVertex::inPoint(CubicVertex *this)

{
  if (this[0xb0] == (CubicVertex)0x0) {
    (**(code **)(*(long *)this + 0xb8))(this);
    this[0xb0] = (CubicVertex)0x1;
  }
  return this + 0xb4;
}


// ===== 004a2104  rive::CubicVertex::renderOut =====

/* rive::CubicVertex::renderOut() */

CubicVertex * __thiscall rive::CubicVertex::renderOut(CubicVertex *this)

{
  if (*(long *)(this + 0xa8) != 0) {
    return (CubicVertex *)(*(long *)(this + 0xa8) + 0xb0);
  }
  if (this[0xb1] != (CubicVertex)0x0) {
    return this + 0xbc;
  }
  (**(code **)(*(long *)this + 0xc0))();
  this[0xb1] = (CubicVertex)0x1;
  return this + 0xbc;
}


// ===== 004a215c  rive::CubicVertex::outPoint =====

/* rive::CubicVertex::outPoint() */

CubicVertex * __thiscall rive::CubicVertex::outPoint(CubicVertex *this)

{
  if (this[0xb1] == (CubicVertex)0x0) {
    (**(code **)(*(long *)this + 0xc0))(this);
    this[0xb1] = (CubicVertex)0x1;
  }
  return this + 0xbc;
}


// ===== 004a219c  rive::CubicVertex::outPoint =====

/* rive::CubicVertex::outPoint(rive::Vec2D const&) */

void __thiscall rive::CubicVertex::outPoint(CubicVertex *this,Vec2D *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  this[0xb1] = (CubicVertex)0x1;
  *(undefined8 *)(this + 0xbc) = uVar1;
  return;
}


// ===== 004a21b0  rive::CubicVertex::inPoint =====

/* rive::CubicVertex::inPoint(rive::Vec2D const&) */

void __thiscall rive::CubicVertex::inPoint(CubicVertex *this,Vec2D *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  this[0xb0] = (CubicVertex)0x1;
  *(undefined8 *)(this + 0xb4) = uVar1;
  return;
}


// ===== 004a21c4  rive::CubicVertex::xChanged =====

/* rive::CubicVertex::xChanged() */

void __thiscall rive::CubicVertex::xChanged(CubicVertex *this)

{
  (**(code **)(*(long *)this + 0xb0))();
  *(undefined2 *)(this + 0xb0) = 0;
  return;
}


// ===== 004a21f0  rive::CubicVertex::yChanged =====

/* rive::CubicVertex::yChanged() */

void __thiscall rive::CubicVertex::yChanged(CubicVertex *this)

{
  (**(code **)(*(long *)this + 0xb0))();
  *(undefined2 *)(this + 0xb0) = 0;
  return;
}


// ===== 004a221c  rive::CubicVertex::deform =====

/* rive::CubicVertex::deform(rive::Mat2D const&, float const*) */

void __thiscall rive::CubicVertex::deform(CubicVertex *this,Mat2D *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float *pfVar7;
  long lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  Vertex::deform((Vertex *)this,param_1,param_2);
  lVar8 = *(long *)(this + 0xa8);
  if (this[0xb0] == (CubicVertex)0x0) {
    (**(code **)(*(long *)this + 0xb8))(this);
    this[0xb0] = (CubicVertex)0x1;
  }
  uVar1 = *(uint *)(lVar8 + 0x98);
  uVar2 = *(uint *)(lVar8 + 0x9c);
  if ((uVar1 & 0xff) == 0) {
    fVar9 = 0.0;
    fVar15 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    pfVar7 = param_2 + ((ulong)uVar2 & 0xff) * 6;
    fVar15 = (float)(uVar1 & 0xff) / 255.0;
    fVar11 = (float)*(undefined8 *)(pfVar7 + 2) * fVar15 + 0.0;
    fVar12 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar15 + 0.0;
    fVar13 = (float)*(undefined8 *)(pfVar7 + 4) * fVar15 + 0.0;
    fVar14 = (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar15 + 0.0;
    fVar9 = fVar15 * (float)*(undefined8 *)pfVar7 + 0.0;
    fVar15 = fVar15 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) + 0.0;
  }
  uVar3 = uVar1 >> 8 & 0xff;
  if (uVar3 != 0) {
    pfVar7 = param_2 + ((ulong)(uVar2 >> 8) & 0xff) * 6;
    fVar16 = (float)uVar3 / 255.0;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar7 + 2) * fVar16;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar16;
    fVar13 = fVar13 + (float)*(undefined8 *)(pfVar7 + 4) * fVar16;
    fVar14 = fVar14 + (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar16;
    fVar9 = fVar9 + fVar16 * (float)*(undefined8 *)pfVar7;
    fVar15 = fVar15 + fVar16 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  }
  uVar3 = uVar1 >> 0x10 & 0xff;
  if (uVar3 != 0) {
    fVar16 = (float)uVar3 / 255.0;
    pfVar7 = param_2 + ((uVar2 >> 0x10 & 0xff) + (uVar2 >> 0x10 & 0xff) * 2) * 2;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar7 + 2) * fVar16;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar16;
    fVar13 = fVar13 + (float)*(undefined8 *)(pfVar7 + 4) * fVar16;
    fVar14 = fVar14 + (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar16;
    fVar9 = fVar9 + fVar16 * (float)*(undefined8 *)pfVar7;
    fVar15 = fVar15 + fVar16 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  }
  if (uVar1 >> 0x18 != 0) {
    fVar16 = (float)(uVar1 >> 0x18) / 255.0;
    pfVar7 = param_2 + (uVar2 >> 0x18) * 6;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar7 + 2) * fVar16;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar16;
    fVar13 = fVar13 + (float)*(undefined8 *)(pfVar7 + 4) * fVar16;
    fVar14 = fVar14 + (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar16;
    fVar9 = fVar9 + fVar16 * (float)*(undefined8 *)pfVar7;
    fVar15 = fVar15 + fVar16 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  }
  fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),*(undefined4 *)(this + 0xb4),
                             *(float *)(this + 0xb8) * *(float *)(param_1 + 0xc));
  fVar16 = (float)NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(this + 0xb4),
                             *(float *)(this + 0xb8) * *(float *)(param_1 + 8));
  auVar10._4_4_ = fVar12;
  auVar10._0_4_ = fVar11;
  auVar10._8_4_ = fVar13;
  auVar10._12_4_ = fVar14;
  auVar4._4_4_ = fVar12;
  auVar4._0_4_ = fVar11;
  auVar4._8_4_ = fVar13;
  auVar4._12_4_ = fVar14;
  auVar10 = NEON_ext(auVar10,auVar4,8,1);
  *(ulong *)(lVar8 + 0xa8) =
       CONCAT44(auVar10._4_4_ +
                fVar12 * (*(float *)(param_1 + 0x14) + fVar17) +
                fVar15 * (*(float *)(param_1 + 0x10) + fVar16),
                auVar10._0_4_ +
                fVar11 * (*(float *)(param_1 + 0x14) + fVar17) +
                fVar9 * (*(float *)(param_1 + 0x10) + fVar16));
  if (this[0xb1] == (CubicVertex)0x0) {
    (**(code **)(*(long *)this + 0xc0))(this);
    this[0xb1] = (CubicVertex)0x1;
  }
  uVar1 = *(uint *)(lVar8 + 0xa0);
  uVar2 = *(uint *)(lVar8 + 0xa4);
  if ((uVar1 & 0xff) == 0) {
    fVar9 = 0.0;
    fVar15 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    pfVar7 = param_2 + ((ulong)uVar2 & 0xff) * 6;
    fVar15 = (float)(uVar1 & 0xff) / 255.0;
    fVar11 = (float)*(undefined8 *)(pfVar7 + 2) * fVar15 + 0.0;
    fVar12 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar15 + 0.0;
    fVar13 = (float)*(undefined8 *)(pfVar7 + 4) * fVar15 + 0.0;
    fVar14 = (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar15 + 0.0;
    fVar9 = fVar15 * (float)*(undefined8 *)pfVar7 + 0.0;
    fVar15 = fVar15 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) + 0.0;
  }
  uVar3 = uVar1 >> 8 & 0xff;
  if (uVar3 != 0) {
    pfVar7 = param_2 + ((ulong)(uVar2 >> 8) & 0xff) * 6;
    fVar16 = (float)uVar3 / 255.0;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar7 + 2) * fVar16;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar16;
    fVar13 = fVar13 + (float)*(undefined8 *)(pfVar7 + 4) * fVar16;
    fVar14 = fVar14 + (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar16;
    fVar9 = fVar9 + fVar16 * (float)*(undefined8 *)pfVar7;
    fVar15 = fVar15 + fVar16 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  }
  uVar3 = uVar1 >> 0x10 & 0xff;
  if (uVar3 != 0) {
    fVar16 = (float)uVar3 / 255.0;
    pfVar7 = param_2 + ((uVar2 >> 0x10 & 0xff) + (uVar2 >> 0x10 & 0xff) * 2) * 2;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar7 + 2) * fVar16;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar16;
    fVar13 = fVar13 + (float)*(undefined8 *)(pfVar7 + 4) * fVar16;
    fVar14 = fVar14 + (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar16;
    fVar9 = fVar9 + fVar16 * (float)*(undefined8 *)pfVar7;
    fVar15 = fVar15 + fVar16 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  }
  if (uVar1 >> 0x18 != 0) {
    fVar16 = (float)(uVar1 >> 0x18) / 255.0;
    pfVar7 = param_2 + (uVar2 >> 0x18) * 6;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar7 + 2) * fVar16;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar16;
    fVar13 = fVar13 + (float)*(undefined8 *)(pfVar7 + 4) * fVar16;
    fVar14 = fVar14 + (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar16;
    fVar9 = fVar9 + fVar16 * (float)*(undefined8 *)pfVar7;
    fVar15 = fVar15 + fVar16 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  }
  fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),*(undefined4 *)(this + 0xbc),
                             *(float *)(this + 0xc0) * *(float *)(param_1 + 0xc));
  fVar16 = (float)NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(this + 0xbc),
                             *(float *)(this + 0xc0) * *(float *)(param_1 + 8));
  auVar5._4_4_ = fVar12;
  auVar5._0_4_ = fVar11;
  auVar5._8_4_ = fVar13;
  auVar5._12_4_ = fVar14;
  auVar6._4_4_ = fVar12;
  auVar6._0_4_ = fVar11;
  auVar6._8_4_ = fVar13;
  auVar6._12_4_ = fVar14;
  auVar10 = NEON_ext(auVar5,auVar6,8,1);
  *(ulong *)(lVar8 + 0xb0) =
       CONCAT44(auVar10._4_4_ +
                fVar12 * (*(float *)(param_1 + 0x14) + fVar17) +
                fVar15 * (*(float *)(param_1 + 0x10) + fVar16),
                auVar10._0_4_ +
                fVar11 * (*(float *)(param_1 + 0x14) + fVar17) +
                fVar9 * (*(float *)(param_1 + 0x10) + fVar16));
  return;
}


// ===== 004a2530  FUN_004a2530 =====

void FUN_004a2530(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a2534);
  (*pcVar1)();
}


// ===== 004a2534  FUN_004a2534 =====

undefined8 FUN_004a2534(void)

{
  return 0x24;
}


// ===== 004a253c  FUN_004a253c =====

bool FUN_004a253c(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x25) && ((1L << ((ulong)param_2 & 0x3f) & 0x1000004c00U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x6b;
}


// ===== 004a2578  rive::Ellipse::Ellipse =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Ellipse::Ellipse() */

void __thiscall rive::Ellipse::Ellipse(Ellipse *this)

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
  this[0x130] = (Ellipse)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (Ellipse)0x0;
  this[0x1a0] = (Ellipse)0x0;
  *(undefined2 *)(this + 0x160) = 0;
  puVar1 = PTR_vtable_0067d700;
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
  *(undefined8 *)(this + 0x27c) = 0;
  *(undefined8 *)(this + 0x284) = 0;
  *(undefined8 *)(this + 0x262) = 0;
  *(undefined8 *)(this + 0x25a) = 0;
  puVar1 = PTR_vtable_0067d428;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x298) = 0xffffffff;
  puVar1 = puVar1 + 0x10;
  *(undefined2 *)(this + 0x2a0) = 0;
  *(undefined **)(this + 0x1b8) = puVar1;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined2 *)(this + 0x2f0) = 0xfffe;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x35c) = 0;
  *(undefined8 *)(this + 0x354) = 0;
  *(undefined8 *)(this + 0x33a) = 0;
  *(undefined8 *)(this + 0x332) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined **)(this + 0x290) = puVar1;
  *(undefined4 *)(this + 0x370) = 0xffffffff;
  *(undefined2 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined2 *)(this + 0x3c8) = 0xfffe;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x434) = 0;
  *(undefined8 *)(this + 0x42c) = 0;
  *(undefined8 *)(this + 0x412) = 0;
  *(undefined8 *)(this + 0x40a) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined **)(this + 0x368) = puVar1;
  *(undefined4 *)(this + 0x448) = 0xffffffff;
  *(undefined2 *)(this + 0x450) = 0;
  *(undefined4 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined2 *)(this + 0x4a0) = 0xfffe;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x50c) = 0;
  *(undefined8 *)(this + 0x504) = 0;
  *(undefined8 *)(this + 0x4ea) = 0;
  *(undefined8 *)(this + 0x4e2) = 0;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined **)(this + 0x440) = puVar1;
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x1b8));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x290));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x368));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x440));
  return;
}


// ===== 004a2794  FUN_004a2794 =====

void FUN_004a2794(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  puVar2 = PTR_vtable_0067ced8;
  pvVar3 = (void *)param_1[0x99];
  puVar1 = PTR_vtable_0067d700 + 0x240;
  *param_1 = (long)(PTR_vtable_0067d700 + 0x10);
  param_1[0x19] = (long)puVar1;
  param_1[0x88] = (long)(puVar2 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x9a] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  puVar1 = PTR_vtable_0067cee0;
  pvVar3 = (void *)param_1[0x95];
  param_1[0x88] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x96] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x91];
  if (pvVar3 != (void *)0x0) {
    param_1[0x92] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  param_1[0x88] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 0x8a) & 1) != 0) {
    operator_delete((void *)param_1[0x8c]);
  }
  pvVar3 = (void *)param_1[0x7e];
  param_1[0x6d] = (long)(puVar2 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x7f] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x7a];
  param_1[0x6d] = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x7b] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x76];
  if (pvVar3 != (void *)0x0) {
    param_1[0x77] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  param_1[0x6d] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 0x6f) & 1) != 0) {
    operator_delete((void *)param_1[0x71]);
  }
  pvVar3 = (void *)param_1[99];
  param_1[0x52] = (long)(puVar2 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[100] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x5f];
  param_1[0x52] = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x60] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x5b];
  if (pvVar3 != (void *)0x0) {
    param_1[0x5c] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  param_1[0x52] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    operator_delete((void *)param_1[0x56]);
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


// ===== 004a293c  FUN_004a293c =====

void FUN_004a293c(void *param_1)

{
  FUN_004a2794();
  operator_delete(param_1);
  return;
}


// ===== 004a2960  FUN_004a2960 =====

undefined8 FUN_004a2960(void)

{
  return 4;
}


// ===== 004a2968  FUN_004a2968 =====

bool FUN_004a2968(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000009c14U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004a29a4  FUN_004a29a4 =====

undefined8 FUN_004a29a4(long param_1,ushort param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  if (param_2 < 0x7b) {
    if (param_2 < 0x14) {
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
        if (param_2 != 0xe) goto LAB_004a2b78;
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
    else if (param_2 == 0x14) {
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
      *(undefined4 *)(param_1 + 0x1a8) = uVar13;
    }
    else {
      if (param_2 != 0x15) goto LAB_004a2b78;
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
      *(undefined4 *)(param_1 + 0x1ac) = uVar13;
    }
  }
  else {
    if (0x7f < param_2) {
      if (param_2 == 0x80) {
        uVar12 = 0;
        uVar7 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004a2b84;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar7 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar7;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar7 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004a2b84:
          uVar7 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x134) = (int)uVar7;
        return 1;
      }
      if (param_2 == 0x302) {
        lVar1 = *param_3;
        lVar2 = param_3[1];
        pcVar6 = (char *)param_3[2];
        if (0 < (lVar1 + lVar2) - (long)pcVar6) {
          param_3[2] = (long)(pcVar6 + 1);
          *(bool *)(param_1 + 0x138) = *pcVar6 == '\x01';
          return 1;
        }
        *(undefined1 *)(param_1 + 0x138) = 0;
        param_3[2] = lVar1 + lVar2;
        *(undefined1 *)(param_3 + 3) = 1;
        return 1;
      }
LAB_004a2b78:
      uVar5 = FUN_0035ea44();
      return uVar5;
    }
    if (param_2 == 0x7b) {
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
      *(undefined4 *)(param_1 + 0x1b0) = uVar13;
    }
    else {
      if (param_2 != 0x7c) goto LAB_004a2b78;
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
      *(undefined4 *)(param_1 + 0x1b4) = uVar13;
    }
  }
  param_3[2] = (long)puVar8;
  return 1;
}


// ===== 004a2c18  rive::Ellipse::update =====

/* rive::Ellipse::update(rive::ComponentDirt) */

void __thiscall rive::Ellipse::update(Ellipse *this,uint param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((param_2 >> 4 & 1) != 0) {
    fVar3 = *(float *)(this + 0x1a8) * 0.5;
    fVar5 = *(float *)(this + 0x1ac) * 0.5;
    fVar4 = (float)NEON_fmsub(*(undefined4 *)(this + 0x1b0),*(float *)(this + 0x1a8),fVar3);
    fVar2 = (float)NEON_fmsub(*(undefined4 *)(this + 0x1b4),*(float *)(this + 0x1ac),fVar5);
    if (*(float *)(this + 600) != fVar4) {
      *(float *)(this + 600) = fVar4;
      (**(code **)(*(long *)(this + 0x1b8) + 0x98))(this + 0x1b8);
    }
    fVar8 = fVar2 - fVar5;
    if (*(float *)(this + 0x25c) != fVar8) {
      *(float *)(this + 0x25c) = fVar8;
      (**(code **)(*(long *)(this + 0x1b8) + 0xa0))(this + 0x1b8);
    }
    fVar6 = fVar3 + fVar4;
    *(float *)(this + 0x270) = fVar8;
    *(float *)(this + 0x278) = fVar8;
    *(undefined2 *)(this + 0x268) = 0x101;
    uVar1 = NEON_fmsub(fVar3,0x3f0d6289,fVar4);
    uVar7 = NEON_fmadd(fVar3,0x3f0d6289,fVar4);
    *(undefined4 *)(this + 0x26c) = uVar1;
    *(undefined4 *)(this + 0x274) = uVar7;
    if (*(float *)(this + 0x330) != fVar6) {
      *(float *)(this + 0x330) = fVar6;
      (**(code **)(*(long *)(this + 0x290) + 0x98))(this + 0x290);
    }
    if (*(float *)(this + 0x334) != fVar2) {
      *(float *)(this + 0x334) = fVar2;
      (**(code **)(*(long *)(this + 0x290) + 0xa0))(this + 0x290);
    }
    *(float *)(this + 0x344) = fVar6;
    *(float *)(this + 0x34c) = fVar6;
    *(undefined2 *)(this + 0x340) = 0x101;
    uVar9 = NEON_fmsub(fVar5,0x3f0d6289,fVar2);
    uVar10 = NEON_fmadd(fVar5,0x3f0d6289,fVar2);
    *(undefined4 *)(this + 0x348) = uVar9;
    *(undefined4 *)(this + 0x350) = uVar10;
    if (*(float *)(this + 0x408) != fVar4) {
      *(float *)(this + 0x408) = fVar4;
      (**(code **)(*(long *)(this + 0x368) + 0x98))(this + 0x368);
    }
    fVar5 = fVar5 + fVar2;
    if (*(float *)(this + 0x40c) != fVar5) {
      *(float *)(this + 0x40c) = fVar5;
      (**(code **)(*(long *)(this + 0x368) + 0xa0))(this + 0x368);
    }
    fVar4 = fVar4 - fVar3;
    *(undefined4 *)(this + 0x41c) = uVar7;
    *(float *)(this + 0x420) = fVar5;
    *(undefined2 *)(this + 0x418) = 0x101;
    *(float *)(this + 0x428) = fVar5;
    *(undefined4 *)(this + 0x424) = uVar1;
    if (*(float *)(this + 0x4e0) != fVar4) {
      *(float *)(this + 0x4e0) = fVar4;
      (**(code **)(*(long *)(this + 0x440) + 0x98))(this + 0x440);
    }
    if (*(float *)(this + 0x4e4) != fVar2) {
      *(float *)(this + 0x4e4) = fVar2;
      (**(code **)(*(long *)(this + 0x440) + 0xa0))(this + 0x440);
    }
    *(float *)(this + 0x4f4) = fVar4;
    *(undefined4 *)(this + 0x4f8) = uVar10;
    *(undefined2 *)(this + 0x4f0) = 0x101;
    *(float *)(this + 0x4fc) = fVar4;
    *(undefined4 *)(this + 0x500) = uVar9;
  }
  Path::update((Path *)this,param_2);
  return;
}


// ===== 004a2e30  FUN_004a2e30 =====

void FUN_004a2e30(void)

{
  return;
}


// ===== 004a2e34  FUN_004a2e34 =====

undefined8 FUN_004a2e34(void)

{
  return 1;
}


// ===== 004a2e3c  rive::EllipseBase::clone =====

/* rive::EllipseBase::clone() const */

Ellipse * __thiscall rive::EllipseBase::clone(EllipseBase *this)

{
  EllipseBase EVar1;
  Ellipse *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  this_00 = (Ellipse *)operator_new(0x518);
  Ellipse::Ellipse(this_00);
  uVar6 = *(undefined8 *)(this + 0xbc);
  uVar3 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(this + 0x110);
  uVar5 = *(undefined8 *)(this + 0x1b0);
  uVar4 = *(undefined8 *)(this + 0x1a8);
  *(undefined8 *)(this_00 + 0xbc) = uVar6;
  *(undefined8 *)(this_00 + 0x1b0) = uVar5;
  *(undefined8 *)(this_00 + 0x1a8) = uVar4;
  uVar2 = *(undefined4 *)(this + 0xc4);
  EVar1 = this[0x138];
  *(undefined4 *)(this_00 + 0x134) = uVar3;
  *(undefined4 *)(this_00 + 0xc4) = uVar2;
  uVar3 = *(undefined4 *)(this + 0xa0);
  *(EllipseBase *)(this_00 + 0x138) = EVar1;
  *(undefined4 *)(this_00 + 0xa0) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004a2ec0  FUN_004a2ec0 =====

void FUN_004a2ec0(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004a2ee4  rive::Image::draw =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Image::draw(rive::Renderer*) */

void __thiscall rive::Image::draw(Image *this,Renderer *param_1)

{
  Image IVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(*(long *)(this + 0x198) + 0x88);
  if (lVar4 != 0) {
    if (this[0x170] != (Image)0x0) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
    plVar3 = *(long **)(this + 0x1a0);
    if (plVar3 == (long *)0x0) {
      uVar5 = NEON_scvtf(*(undefined8 *)(lVar4 + 0x10),4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,this + 0xa4);
      local_50 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x178) >> 0x20) *
                          -(float)((ulong)uVar5 >> 0x20),
                          (float)*(undefined8 *)(this + 0x178) * -(float)uVar5);
      uStack_58 = _UNK_0024e5b8;
      local_60 = _DAT_0024e5b0;
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_60);
      (**(code **)(*(long *)param_1 + 0x38))
                (*(undefined4 *)(this + 0xe8),param_1,lVar4,0,*(undefined4 *)(this + 0x134));
      IVar1 = this[0x170];
    }
    else {
      (**(code **)(*plVar3 + 0x20))
                (*(undefined4 *)(this + 0xe8),plVar3,param_1,lVar4,0,*(undefined4 *)(this + 0x134));
      IVar1 = this[0x170];
    }
    if (IVar1 != (Image)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004a2f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_1 + 0x18))(param_1);
        return;
      }
      goto LAB_004a3034;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004a3034:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a3038  rive::Image::imageAsset =====

/* rive::Image::imageAsset() const */

undefined8 __thiscall rive::Image::imageAsset(Image *this)

{
  return *(undefined8 *)(this + 0x198);
}


// ===== 004a3040  rive::Image::willDraw =====

/* rive::Image::willDraw() */

bool __thiscall rive::Image::willDraw(Image *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)this + 0x1e8))();
  bVar1 = false;
  if (((uVar2 & 1) == 0) && (*(float *)(this + 0xe8) != 0.0)) {
    bVar1 = *(long *)(this + 0x198) != 0;
  }
  return bVar1;
}


// ===== 004a308c  rive::Image::hitTest =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Image::hitTest(rive::HitInfo*, rive::Mat2D const&) */

Image * __thiscall rive::Image::hitTest(Image *this,HitInfo *param_1,Mat2D *param_2)

{
  Image *pIVar1;
  long lVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined2 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  uint *puVar30;
  uint *puVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  float fVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  float fVar57;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined4 uVar82;
  float fVar84;
  undefined1 auVar83 [16];
  undefined8 uVar85;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  int local_5c;
  char local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  uint *puVar31;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x1a0) == 0) {
    pIVar1 = this + 0xa8;
    uVar85 = *(undefined8 *)(this + 0xb0);
    uVar46 = (undefined1)((ulong)uVar85 >> 8);
    uVar48 = (undefined1)((ulong)uVar85 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar85 >> 0x18);
    auVar3[9] = uVar46;
    auVar3._0_9_ = *(unkbyte9 *)pIVar1;
    auVar3[10] = uVar48;
    auVar3[0xb] = uVar50;
    auVar4[9] = uVar46;
    auVar4._0_9_ = *(unkbyte9 *)pIVar1;
    auVar4[10] = uVar48;
    auVar4[0xb] = uVar50;
    uVar85 = NEON_scvtf(*(undefined8 *)(*(long *)(*(long *)(this + 0x198) + 0x88) + 0x10),4);
    fVar14 = (float)*(undefined8 *)(param_2 + 8);
    fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar10 = (float)*(undefined8 *)param_2;
    fVar8 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar57 = (float)((ulong)*(undefined8 *)pIVar1 >> 0x20);
    fVar17 = fVar14 * (float)*(unkbyte9 *)pIVar1 + (float)*(undefined8 *)(this + 0xa4) * fVar10;
    fVar19 = fVar12 * (float)*(unkbyte9 *)pIVar1 + (float)*(undefined8 *)(this + 0xa4) * fVar8;
    uVar46 = SUB41(fVar19,0);
    uVar48 = (undefined1)((uint)fVar19 >> 8);
    uVar50 = (undefined1)((uint)fVar19 >> 0x10);
    uVar76 = (undefined1)((uint)fVar19 >> 0x18);
    fVar20 = fVar14 * auVar4._8_4_ + fVar57 * fVar10;
    uVar78 = (undefined1)((uint)fVar20 >> 8);
    uVar79 = (undefined1)((uint)fVar20 >> 0x10);
    uVar80 = (undefined1)((uint)fVar20 >> 0x18);
    fVar57 = fVar12 * auVar3._8_4_ + fVar57 * fVar8;
    uVar81 = SUB41(fVar57,0);
    uVar73 = (undefined1)((uint)fVar57 >> 8);
    uVar74 = (undefined1)((uint)fVar57 >> 0x10);
    uVar75 = (undefined1)((uint)fVar57 >> 0x18);
    fVar9 = (float)*(undefined8 *)(this + 0x178) * -(float)uVar85;
    fVar11 = (float)((ulong)*(undefined8 *)(this + 0x178) >> 0x20) * -(float)((ulong)uVar85 >> 0x20)
    ;
    fVar7 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
    fStack_88 = (float)_UNK_0024e5b8;
    fVar24 = fStack_88;
    fStack_8c = (float)((ulong)_DAT_0024e5b0 >> 0x20);
    fVar23 = fStack_8c;
    auVar83[4] = uVar46;
    auVar83._0_4_ = fVar17;
    auVar83[5] = uVar48;
    auVar83[6] = uVar50;
    auVar83[7] = uVar76;
    auVar83[8] = SUB41(fVar20,0);
    auVar83[9] = uVar78;
    auVar83[10] = uVar79;
    auVar83[0xb] = uVar80;
    auVar83[0xc] = uVar81;
    auVar83[0xd] = uVar73;
    auVar83[0xe] = uVar74;
    auVar83[0xf] = uVar75;
    auVar15[4] = uVar46;
    auVar15._0_4_ = fVar17;
    auVar15[5] = uVar48;
    auVar15[6] = uVar50;
    auVar15[7] = uVar76;
    auVar15[8] = SUB41(fVar20,0);
    auVar15[9] = uVar78;
    auVar15[10] = uVar79;
    auVar15[0xb] = uVar80;
    auVar15[0xc] = uVar81;
    auVar15[0xd] = uVar73;
    auVar15[0xe] = uVar74;
    auVar15[0xf] = uVar75;
    auVar83 = NEON_ext(auVar83,auVar15,8,1);
    fVar57 = (float)*(undefined8 *)(this + 0xb4);
    local_90 = 0;
    fStack_8c = 0.0;
    fStack_88 = 0.0;
    uStack_84 = 0;
    local_80 = 0;
    uStack_7c = 0;
    fVar36 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
    fVar84 = (float)(CONCAT17(uVar75,CONCAT16(uVar74,CONCAT15(uVar73,CONCAT14(uVar81,fVar20)))) >>
                    0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
            fVar12 * fVar7 + fVar8 * fVar57 + auVar83._4_4_ * fVar11 + fVar19 * fVar9;
    uVar16 = (undefined2)(CONCAT15(uVar48,CONCAT14(uVar46,fVar17)) >> 0x20);
    fVar12 = fVar84 * fVar23 + (float)CONCAT13(uVar76,CONCAT12(uVar50,uVar16)) * 1.0;
    fVar19 = fVar84 * fVar36 + fVar24 * (float)CONCAT13(uVar76,CONCAT12(uVar50,uVar16));
    local_40 = CONCAT17((char)((uint)fVar8 >> 0x18),
                        CONCAT16((char)((uint)fVar8 >> 0x10),
                                 CONCAT15((char)((uint)fVar8 >> 8),
                                          CONCAT14(SUB41(fVar8,0),
                                                   (float)*(undefined8 *)(param_2 + 0x10) +
                                                   fVar14 * fVar7 + fVar10 * fVar57 +
                                                   auVar83._0_4_ * fVar11 + fVar17 * fVar9))));
    uStack_48 = CONCAT17((char)((uint)fVar19 >> 0x18),
                         CONCAT16((char)((uint)fVar19 >> 0x10),
                                  CONCAT15((char)((uint)fVar19 >> 8),
                                           CONCAT14(SUB41(fVar19,0),
                                                    fVar20 * fVar36 + fVar24 * fVar17))));
    local_50 = CONCAT17((char)((uint)fVar12 >> 0x18),
                        CONCAT16((char)((uint)fVar12 >> 0x10),
                                 CONCAT15((char)((uint)fVar12 >> 8),
                                          CONCAT14(SUB41(fVar12,0),fVar20 * fVar23 + fVar17 * 1.0)))
                       );
    HitTester::reset((HitTester *)&local_90,(TAABB *)param_1);
    local_a0 = 0;
    local_98 = uVar85;
    HitTester::addRect((HitTester *)&local_90,&local_a0,&local_50,1);
    puVar22 = (uint *)CONCAT44(fStack_8c,local_90);
    if (local_54 == '\0') {
      if (local_6c != local_74) {
        if (local_6c == local_74 || local_6c < local_74 != (NAN(local_6c) || NAN(local_74))) {
          iVar26 = 1;
          uVar46 = SUB41(local_6c,0);
          uVar48 = (undefined1)((uint)local_6c >> 8);
          uVar50 = (undefined1)((uint)local_6c >> 0x10);
          uVar76 = (undefined1)((uint)local_6c >> 0x18);
          uVar78 = SUB41(local_70,0);
          uVar79 = (undefined1)((uint)local_70 >> 8);
          uVar80 = (undefined1)((uint)local_70 >> 0x10);
          uVar81 = (undefined1)((uint)local_70 >> 0x18);
          local_70 = local_78;
          local_6c = local_74;
        }
        else {
          uVar46 = SUB41(local_74,0);
          uVar48 = (undefined1)((uint)local_74 >> 8);
          uVar50 = (undefined1)((uint)local_74 >> 0x10);
          uVar76 = (undefined1)((uint)local_74 >> 0x18);
          uVar78 = SUB41(local_78,0);
          uVar79 = (undefined1)((uint)local_78 >> 8);
          uVar80 = (undefined1)((uint)local_78 >> 0x10);
          uVar81 = (undefined1)((uint)local_78 >> 0x18);
          iVar26 = -1;
        }
        if (((float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) < local_60 !=
             (NAN((float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) || NAN(local_60)
             )) && (0.0 < local_6c)) {
          fVar10 = 0.0;
          if (NAN((float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) ||
              0.0 <= (float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) {
            fVar10 = (float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
          }
          if (local_6c == local_60 || local_6c < local_60 != (NAN(local_6c) || NAN(local_60))) {
            local_60 = local_6c;
          }
          iVar29 = (int)(fVar10 + 0.5);
          iVar27 = (int)(local_60 + 0.5) - iVar29;
          if (iVar27 != 0 && iVar29 <= (int)(local_60 + 0.5)) {
            fVar57 = (local_70 - (float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78)))) /
                     (local_6c - (float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))));
            puVar32 = puVar22 + local_5c * iVar29;
            uVar82 = NEON_fmadd(fVar57,0.0 - (float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))),
                                CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78))));
            uVar73 = (char)uVar82;
            uVar74 = (char)((uint)uVar82 >> 8);
            uVar75 = (char)((uint)uVar82 >> 0x10);
            uVar77 = (char)((uint)uVar82 >> 0x18);
            if (NAN((float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) ||
                0.0 <= (float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) {
              uVar73 = uVar78;
              uVar74 = uVar79;
              uVar75 = uVar80;
              uVar77 = uVar81;
            }
            fVar10 = (float)NEON_fmadd(fVar57,((float)iVar29 - fVar10) + 0.5,
                                       CONCAT13(uVar77,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))));
            fVar10 = fVar10 + 0.5;
            uVar46 = SUB41(fVar10,0);
            uVar48 = (undefined1)((uint)fVar10 >> 8);
            uVar50 = (undefined1)((uint)fVar10 >> 0x10);
            uVar76 = (undefined1)((uint)fVar10 >> 0x18);
            do {
              uVar78 = 0;
              uVar79 = 0;
              uVar80 = 0;
              uVar81 = 0;
              if (NAN((float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) ||
                  0.0 <= (float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) {
                uVar78 = uVar46;
                uVar79 = uVar48;
                uVar80 = uVar50;
                uVar81 = uVar76;
              }
              uVar34 = (uint)(float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78)));
              if ((int)uVar34 < local_5c) {
                uVar28 = -(ulong)(uVar34 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar34 << 2;
                *(int *)((long)puVar32 + uVar28) = *(int *)((long)puVar32 + uVar28) + iVar26;
              }
              fVar10 = fVar57 + (float)CONCAT13(uVar76,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
              uVar46 = SUB41(fVar10,0);
              uVar48 = (undefined1)((uint)fVar10 >> 8);
              uVar50 = (undefined1)((uint)fVar10 >> 0x10);
              uVar76 = (undefined1)((uint)fVar10 >> 0x18);
              iVar27 = iVar27 + -1;
              puVar32 = puVar32 + local_5c;
            } while (iVar27 != 0);
          }
        }
      }
      local_54 = '\x01';
    }
    puVar32 = (uint *)CONCAT44(uStack_84,fStack_88);
    if (puVar22 == puVar32) {
      bVar25 = false;
    }
    else {
      uVar28 = (long)puVar32 + (-4 - (long)puVar22);
      if (uVar28 < 0x1c) {
        uVar34 = 0;
        puVar30 = puVar22;
LAB_004a3260:
        do {
          puVar31 = puVar30 + 1;
          uVar34 = *puVar30 | uVar34;
          puVar30 = puVar31;
        } while (puVar31 != puVar32);
      }
      else {
        bVar37 = 0;
        bVar38 = 0;
        bVar39 = 0;
        bVar40 = 0;
        bVar41 = 0;
        bVar42 = 0;
        bVar43 = 0;
        bVar44 = 0;
        bVar45 = 0;
        bVar47 = 0;
        bVar49 = 0;
        bVar51 = 0;
        bVar52 = 0;
        bVar53 = 0;
        bVar54 = 0;
        bVar55 = 0;
        bVar56 = 0;
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
        bVar69 = 0;
        bVar70 = 0;
        bVar71 = 0;
        bVar72 = 0;
        puVar30 = puVar22 + 4;
        uVar28 = (uVar28 >> 2) + 1;
        uVar33 = uVar28 & 0x7ffffffffffffff8;
        uVar35 = uVar33;
        do {
          uVar13 = *(undefined8 *)(puVar30 + -2);
          uVar85 = *(undefined8 *)(puVar30 + -4);
          uVar21 = *(undefined8 *)(puVar30 + 2);
          uVar18 = *(undefined8 *)puVar30;
          uVar35 = uVar35 - 8;
          puVar30 = puVar30 + 8;
          bVar37 = (byte)uVar85 | bVar37;
          bVar38 = (byte)((ulong)uVar85 >> 8) | bVar38;
          bVar39 = (byte)((ulong)uVar85 >> 0x10) | bVar39;
          bVar40 = (byte)((ulong)uVar85 >> 0x18) | bVar40;
          bVar41 = (byte)((ulong)uVar85 >> 0x20) | bVar41;
          bVar42 = (byte)((ulong)uVar85 >> 0x28) | bVar42;
          bVar43 = (byte)((ulong)uVar85 >> 0x30) | bVar43;
          bVar44 = (byte)((ulong)uVar85 >> 0x38) | bVar44;
          bVar45 = (byte)uVar13 | bVar45;
          bVar47 = (byte)((ulong)uVar13 >> 8) | bVar47;
          bVar49 = (byte)((ulong)uVar13 >> 0x10) | bVar49;
          bVar51 = (byte)((ulong)uVar13 >> 0x18) | bVar51;
          bVar52 = (byte)((ulong)uVar13 >> 0x20) | bVar52;
          bVar53 = (byte)((ulong)uVar13 >> 0x28) | bVar53;
          bVar54 = (byte)((ulong)uVar13 >> 0x30) | bVar54;
          bVar55 = (byte)((ulong)uVar13 >> 0x38) | bVar55;
          bVar56 = (byte)uVar18 | bVar56;
          bVar58 = (byte)((ulong)uVar18 >> 8) | bVar58;
          bVar59 = (byte)((ulong)uVar18 >> 0x10) | bVar59;
          bVar60 = (byte)((ulong)uVar18 >> 0x18) | bVar60;
          bVar61 = (byte)((ulong)uVar18 >> 0x20) | bVar61;
          bVar62 = (byte)((ulong)uVar18 >> 0x28) | bVar62;
          bVar63 = (byte)((ulong)uVar18 >> 0x30) | bVar63;
          bVar64 = (byte)((ulong)uVar18 >> 0x38) | bVar64;
          bVar65 = (byte)uVar21 | bVar65;
          bVar66 = (byte)((ulong)uVar21 >> 8) | bVar66;
          bVar67 = (byte)((ulong)uVar21 >> 0x10) | bVar67;
          bVar68 = (byte)((ulong)uVar21 >> 0x18) | bVar68;
          bVar69 = (byte)((ulong)uVar21 >> 0x20) | bVar69;
          bVar70 = (byte)((ulong)uVar21 >> 0x28) | bVar70;
          bVar71 = (byte)((ulong)uVar21 >> 0x30) | bVar71;
          bVar72 = (byte)((ulong)uVar21 >> 0x38) | bVar72;
        } while (uVar35 != 0);
        bVar56 = bVar56 | bVar37;
        bVar58 = bVar58 | bVar38;
        bVar59 = bVar59 | bVar39;
        bVar60 = bVar60 | bVar40;
        bVar61 = bVar61 | bVar41;
        bVar62 = bVar62 | bVar42;
        bVar63 = bVar63 | bVar43;
        bVar64 = bVar64 | bVar44;
        auVar5[1] = bVar58;
        auVar5[0] = bVar56;
        auVar5[2] = bVar59;
        auVar5[3] = bVar60;
        auVar5[4] = bVar61;
        auVar5[5] = bVar62;
        auVar5[6] = bVar63;
        auVar5[7] = bVar64;
        auVar5[8] = bVar65 | bVar45;
        auVar5[9] = bVar66 | bVar47;
        auVar5[10] = bVar67 | bVar49;
        auVar5[0xb] = bVar68 | bVar51;
        auVar5[0xc] = bVar69 | bVar52;
        auVar5[0xd] = bVar70 | bVar53;
        auVar5[0xe] = bVar71 | bVar54;
        auVar5[0xf] = bVar72 | bVar55;
        auVar6[1] = bVar58;
        auVar6[0] = bVar56;
        auVar6[2] = bVar59;
        auVar6[3] = bVar60;
        auVar6[4] = bVar61;
        auVar6[5] = bVar62;
        auVar6[6] = bVar63;
        auVar6[7] = bVar64;
        auVar6[8] = bVar65 | bVar45;
        auVar6[9] = bVar66 | bVar47;
        auVar6[10] = bVar67 | bVar49;
        auVar6[0xb] = bVar68 | bVar51;
        auVar6[0xc] = bVar69 | bVar52;
        auVar6[0xd] = bVar70 | bVar53;
        auVar6[0xe] = bVar71 | bVar54;
        auVar6[0xf] = bVar72 | bVar55;
        auVar83 = NEON_ext(auVar5,auVar6,8,1);
        uVar34 = CONCAT13(bVar60 | auVar83[3],
                          CONCAT12(bVar59 | auVar83[2],
                                   CONCAT11(bVar58 | auVar83[1],bVar56 | auVar83[0])));
        uVar34 = uVar34 | (uint)(CONCAT17(bVar64 | auVar83[7],
                                          CONCAT16(bVar63 | auVar83[6],
                                                   CONCAT15(bVar62 | auVar83[5],
                                                            CONCAT14(bVar61 | auVar83[4],uVar34))))
                                >> 0x20);
        if (uVar28 != uVar33) {
          puVar30 = puVar22 + uVar33;
          goto LAB_004a3260;
        }
      }
      bVar25 = uVar34 != 0;
    }
    if (puVar22 != (uint *)0x0) {
      fStack_88 = (float)local_90;
      uStack_84 = fStack_8c;
      operator_delete(puVar22);
    }
    if (bVar25) goto LAB_004a3290;
  }
  else {
    puts("Missing mesh");
  }
  this = (Image *)0x0;
LAB_004a3290:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a33b0  rive::Image::import =====

/* rive::Image::import(rive::ImportStack&) */

undefined8 __thiscall rive::Image::import(Image *this,ImportStack *param_1)

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
                      ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 400));
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


// ===== 004a34ac  rive::Image::assetId =====

/* rive::Image::assetId() */

undefined4 __thiscall rive::Image::assetId(Image *this)

{
  return *(undefined4 *)(this + 0x174);
}


// ===== 004a34b4  rive::Image::assetId =====

/* non-virtual thunk to rive::Image::assetId() */

undefined4 __thiscall rive::Image::assetId(Image *this)

{
  return *(undefined4 *)(this + -0x1c);
}


// ===== 004a34bc  rive::Image::setAsset =====

/* rive::Image::setAsset(rive::rcp<rive::FileAsset>) */

void __thiscall rive::Image::setAsset(Image *this,long *param_2)

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
     (uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0x69), (uVar3 & 1) != 0)) {
    param_2 = (long *)*param_2;
    local_40 = param_2;
    if (param_2 == (long *)0x0) {
      FileAssetReferencer::setAsset((FileAssetReferencer *)(this + 400),&local_40);
      plVar4 = *(long **)(this + 0x1a0);
    }
    else {
      FUN_00340fb0(1,param_2 + 9);
      FileAssetReferencer::setAsset((FileAssetReferencer *)(this + 400),&local_40);
      iVar2 = FUN_00340fe0(0xffffffff,param_2 + 9);
      if (iVar2 == 1) {
        (**(code **)(*param_2 + 8))(param_2);
      }
      plVar4 = *(long **)(this + 0x1a0);
    }
    if ((plVar4 != (long *)0x0) && (*(char *)(*(long *)(this + 0x40) + 0xbe8) == '\0')) {
      (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(*(long *)(this + 0x198) + 0x88));
    }
    updateImageScale(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a35c0  rive::Image::updateImageScale =====

/* rive::Image::updateImageScale() */

void __thiscall rive::Image::updateImageScale(Image *this)

{
  Image IVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined1 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  if (*(long *)(this + 0x198) == 0) {
    if ((*(float *)(this + 0x1b0) == 0.0) && (*(float *)(this + 0x1b4) == 0.0)) {
      return;
    }
    *(undefined8 *)(this + 0x1b0) = 0;
    uVar2 = *(ushort *)(this + 0x60);
    goto joined_r0x004a3658;
  }
  uVar14 = 0;
  lVar5 = *(long *)(*(long *)(this + 0x198) + 0x88);
  if (((lVar5 != 0) && (fVar10 = *(float *)(this + 0x1a8), !NAN(fVar10))) &&
     (fVar7 = *(float *)(this + 0x1ac), !NAN(fVar7))) {
    IVar1 = this[0x180];
    uVar11 = NEON_scvtf(*(undefined8 *)(lVar5 + 0x10),4);
    fVar13 = (float)uVar11;
    fVar12 = (float)((ulong)uVar11 >> 0x20);
    if ((byte)IVar1 < 4) {
      if (IVar1 == (Image)0x1) {
        fVar10 = (float)NEON_fminnm(fVar10 / fVar13,fVar7 / fVar12);
LAB_004a36d4:
        uVar11 = CONCAT44(fVar10,fVar10);
        goto LAB_004a36d8;
      }
      if (IVar1 == (Image)0x2) {
        fVar10 = fVar10 / fVar13;
        goto LAB_004a36d4;
      }
      if (IVar1 == (Image)0x3) {
        fVar10 = fVar10 / fVar13;
        goto LAB_004a36d4;
      }
LAB_004a36b4:
      uVar11 = CONCAT44(fVar7 / fVar12,fVar10 / fVar13);
      if (IVar1 != (Image)0x0) goto LAB_004a36d8;
    }
    else {
      if (IVar1 == (Image)0x4) {
        fVar10 = fVar7 / fVar12;
        goto LAB_004a36d4;
      }
      if (IVar1 != (Image)0x5) {
        if (IVar1 != (Image)0x6) goto LAB_004a36b4;
        uVar8 = NEON_fminnm(fVar10 / fVar13,fVar7 / fVar12);
        fVar10 = (float)NEON_fminnm(uVar8,0x3f800000);
        goto LAB_004a36d4;
      }
      uVar11 = NEON_fmov(0x3f800000,4);
LAB_004a36d8:
      uVar14 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x178) >> 0x20) * -fVar12,
                        (float)*(undefined8 *)(this + 0x178) * -fVar13);
      if (*(undefined8 **)(this + 0x1a0) != (undefined8 *)0x0) {
        uVar4 = (**(code **)**(undefined8 **)(this + 0x1a0))();
        uVar9 = NEON_cmeq((ulong)uVar4,0,1);
        uVar6 = (undefined1)uVar9;
        uVar14 = NEON_bit(uVar14,CONCAT44(fVar12 * -0.5,fVar13 * -0.5),
                          CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,CONCAT13(uVar6
                                                  ,CONCAT12(uVar6,CONCAT11(uVar6,uVar6))))))),1);
      }
      uVar9 = NEON_fmov(0x3f800000,4);
      fVar10 = (float)((ulong)uVar11 >> 0x20);
      uVar14 = CONCAT44(fVar10 * -(float)((ulong)uVar14 >> 0x20) +
                        ((float)((ulong)*(undefined8 *)(this + 0x184) >> 0x20) +
                        (float)((ulong)uVar9 >> 0x20)) * 0.5 *
                        ((float)((ulong)*(undefined8 *)(this + 0x1a8) >> 0x20) + fVar10 * -fVar12),
                        (float)uVar11 * -(float)uVar14 +
                        ((float)*(undefined8 *)(this + 0x184) + (float)uVar9) * 0.5 *
                        ((float)*(undefined8 *)(this + 0x1a8) + (float)uVar11 * -fVar13));
    }
    fVar10 = *(float *)(this + 0xc4);
    fVar13 = (float)((ulong)uVar11 >> 0x20);
    fVar7 = (float)uVar11;
    bVar3 = false;
    if ((fVar7 == *(float *)(this + 0xc0)) && (bVar3 = false, !NAN(fVar13) && !NAN(fVar10))) {
      bVar3 = fVar13 == fVar10;
    }
    if (!bVar3) {
      if (*(float *)(this + 0xc0) != fVar7) {
        *(float *)(this + 0xc0) = fVar7;
        (**(code **)(*(long *)this + 0xb0))(this);
        fVar10 = *(float *)(this + 0xc4);
      }
      if (fVar10 != fVar13) {
        *(float *)(this + 0xc4) = fVar13;
        (**(code **)(*(long *)this + 0xb8))(this);
      }
    }
  }
  uVar11 = NEON_fcmeq(uVar14,*(undefined8 *)(this + 0x1b0),4);
  if (((~(byte)uVar11 | ~(byte)((ulong)uVar11 >> 0x20)) & 1) == 0) {
    return;
  }
  *(undefined8 *)(this + 0x1b0) = uVar14;
  uVar2 = *(ushort *)(this + 0x60);
joined_r0x004a3658:
  if ((uVar2 >> 6 & 1) != 0) {
    return;
  }
  *(ushort *)(this + 0x60) = uVar2 | 0x40;
  (**(code **)(*(long *)this + 0x70))(this);
  lVar5 = *(long *)(this + 0x80);
  uVar4 = *(uint *)(this + 0x38);
  *(undefined1 *)(lVar5 + 0xc32) = 1;
  *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
  if (uVar4 < *(uint *)(lVar5 + 0xbd4)) {
    *(uint *)(lVar5 + 0xbd4) = uVar4;
  }
  Component::addDirt((Component *)this,0x80,1);
  return;
}


// ===== 004a384c  rive::Image::setAsset =====

/* non-virtual thunk to rive::Image::setAsset(rive::rcp<rive::FileAsset>) */

void __thiscall rive::Image::setAsset(Image *this)

{
  setAsset(this + -400);
  return;
}


// ===== 004a3854  rive::Image::assetUpdated =====

/* rive::Image::assetUpdated() */

void __thiscall rive::Image::assetUpdated(Image *this)

{
  updateImageScale(this);
  Component::addDirt((Component *)this,0x80,1);
  return;
}


// ===== 004a3880  rive::Image::assetUpdated =====

/* non-virtual thunk to rive::Image::assetUpdated() */

void __thiscall rive::Image::assetUpdated(Image *this)

{
  updateImageScale(this + -400);
  Component::addDirt((Component *)(this + -400),0x80,1);
  return;
}


// ===== 004a38b0  rive::Image::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Image::clone() const */

long * __thiscall rive::Image::clone(Image *this)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)operator_new(0x1b8);
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
  lVar2 = _UNK_00281c00;
  lVar9 = _DAT_00281bf8;
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
  *(long *)((long)plVar5 + 0xac) = lVar2;
  *(long *)((long)plVar5 + 0xa4) = lVar9;
  plVar5[0x1b] = lVar2;
  plVar5[0x1a] = lVar9;
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
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x2e] = 0;
  plVar5[0x24] = lVar2;
  plVar5[0x23] = lVar9;
  puVar3 = PTR_vtable_0067d420;
  *(undefined1 *)(plVar5 + 0x2e) = 1;
  uVar10 = *(undefined4 *)(this + 0x188);
  plVar5[0x33] = 0;
  plVar5[0x34] = 0;
  *(undefined4 *)(plVar5 + 0x31) = uVar10;
  uVar12 = *(undefined8 *)(this + 0xbc);
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[0x19] = (long)(puVar3 + 0x2a8);
  lVar2 = _UNK_0024e528;
  lVar9 = _DAT_0024e520;
  plVar5[0x32] = (long)(puVar3 + 0x2d0);
  uVar10 = *(undefined4 *)(this + 0x174);
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar12;
  uVar11 = *(undefined4 *)(this + 0xa0);
  plVar5[0x36] = lVar2;
  plVar5[0x35] = lVar9;
  lVar9 = *(long *)(this + 0x178);
  uVar8 = *(undefined4 *)(this + 0x180);
  *(undefined4 *)((long)plVar5 + 0x174) = uVar10;
  uVar10 = *(undefined4 *)(this + 0x138);
  plVar5[0x2f] = lVar9;
  uVar7 = *(undefined4 *)(this + 0x184);
  *(undefined4 *)(plVar5 + 0x30) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x134);
  *(undefined4 *)((long)plVar5 + 0x184) = uVar7;
  lVar9 = *(long *)(this + 0x110);
  *(undefined4 *)((long)plVar5 + 0x134) = uVar8;
  plVar5[0x22] = lVar9;
  uVar8 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(plVar5 + 0x27) = uVar10;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar8;
  *(undefined4 *)(plVar5 + 0x14) = uVar11;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  plVar6 = *(long **)(this + 0x198);
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  if (plVar6 != (long *)0x0) {
    FUN_00340fb0(1,plVar6 + 9);
    local_40 = plVar6;
    (**(code **)(*plVar5 + 0x260))(plVar5,&local_40);
    plVar6 = local_40;
    if ((local_40 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_40 + 9), iVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a3a9c  rive::Image::setMesh =====

/* rive::Image::setMesh(rive::MeshDrawable*) */

void __thiscall rive::Image::setMesh(Image *this,MeshDrawable *param_1)

{
  if (*(MeshDrawable **)(this + 0x1a0) != param_1) {
    *(MeshDrawable **)(this + 0x1a0) = param_1;
    updateImageScale(this);
    return;
  }
  return;
}


// ===== 004a3ab4  rive::Image::width =====

/* rive::Image::width() const */

float __thiscall rive::Image::width(Image *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x198);
  if (lVar1 == 0) {
    return 0.0;
  }
  if (*(long *)(lVar1 + 0x88) != 0) {
    return (float)*(int *)(*(long *)(lVar1 + 0x88) + 0x10);
  }
  return *(float *)(lVar1 + 0x84);
}


// ===== 004a3ae0  rive::Image::height =====

/* rive::Image::height() const */

float __thiscall rive::Image::height(Image *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x198);
  if (lVar1 == 0) {
    return 0.0;
  }
  if (*(long *)(lVar1 + 0x88) != 0) {
    return (float)*(int *)(*(long *)(lVar1 + 0x88) + 0x14);
  }
  return *(float *)(lVar1 + 0x80);
}


// ===== 004a3b0c  rive::Image::measureLayout =====

/* rive::Image::measureLayout(float, rive::LayoutMeasureMode, float, rive::LayoutMeasureMode) */

ulong rive::Image::measureLayout(ulong param_1,long param_2,char param_3,char param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == '\0') {
    lVar1 = *(long *)(param_2 + 0x198);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else if (*(long *)(lVar1 + 0x88) == 0) {
      param_1 = (ulong)*(uint *)(lVar1 + 0x84);
    }
    else {
      param_1 = (ulong)(uint)(float)*(int *)(*(long *)(lVar1 + 0x88) + 0x10);
    }
  }
  else if (param_3 == '\x02') {
    lVar1 = *(long *)(param_2 + 0x198);
    if (lVar1 == 0) {
      fVar3 = 0.0;
    }
    else if (*(long *)(lVar1 + 0x88) == 0) {
      fVar3 = *(float *)(lVar1 + 0x84);
    }
    else {
      fVar3 = (float)*(int *)(*(long *)(lVar1 + 0x88) + 0x10);
    }
    fVar2 = (float)param_1;
    param_1 = param_1 & 0xffffffff;
    if (fVar2 <= fVar3) {
      param_1 = (ulong)(uint)fVar3;
    }
  }
  if (param_4 == '\0') {
    if (*(long *)(param_2 + 0x198) == 0) {
      return param_1;
    }
    if (*(long *)(*(long *)(param_2 + 0x198) + 0x88) == 0) {
      return param_1;
    }
  }
  else if (param_4 != '\x01') {
    return param_1;
  }
  return param_1;
}


// ===== 004a3bfc  rive::Image::measureLayout =====

/* non-virtual thunk to rive::Image::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

ulong __thiscall rive::Image::measureLayout(ulong param_1,Image *this,char param_3,char param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == '\0') {
    lVar1 = *(long *)(this + 0xd0);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else if (*(long *)(lVar1 + 0x88) == 0) {
      param_1 = (ulong)*(uint *)(lVar1 + 0x84);
    }
    else {
      param_1 = (ulong)(uint)(float)*(int *)(*(long *)(lVar1 + 0x88) + 0x10);
    }
  }
  else if (param_3 == '\x02') {
    lVar1 = *(long *)(this + 0xd0);
    if (lVar1 == 0) {
      fVar3 = 0.0;
    }
    else if (*(long *)(lVar1 + 0x88) == 0) {
      fVar3 = *(float *)(lVar1 + 0x84);
    }
    else {
      fVar3 = (float)*(int *)(*(long *)(lVar1 + 0x88) + 0x10);
    }
    fVar2 = (float)param_1;
    param_1 = param_1 & 0xffffffff;
    if (fVar2 <= fVar3) {
      param_1 = (ulong)(uint)fVar3;
    }
  }
  if (param_4 == '\0') {
    if (*(long *)(this + 0xd0) == 0) {
      return param_1;
    }
    if (*(long *)(*(long *)(this + 0xd0) + 0x88) == 0) {
      return param_1;
    }
  }
  else if (param_4 != '\x01') {
    return param_1;
  }
  return param_1;
}


// ===== 004a3cec  rive::Image::controlSize =====

/* rive::Image::controlSize(rive::Vec2D, rive::LayoutScaleType, rive::LayoutScaleType,
   rive::LayoutDirection) */

void rive::Image::controlSize(float param_1,float param_2,Image *param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_3 + 0x1a8) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x1ac)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0x1ac) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x1a8) = param_1;
    *(float *)(param_3 + 0x1ac) = param_2;
    updateImageScale(param_3);
    return;
  }
  return;
}


// ===== 004a3d10  rive::Image::controlSize =====

/* non-virtual thunk to rive::Image::controlSize(rive::Vec2D, rive::LayoutScaleType,
   rive::LayoutScaleType, rive::LayoutDirection) */

void __thiscall rive::Image::controlSize(float param_1,float param_2,Image *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(this + 0xe0) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(this + 0xe4)) && !NAN(param_2))) {
    bVar1 = *(float *)(this + 0xe4) == param_2;
  }
  if (!bVar1) {
    *(float *)(this + 0xe0) = param_1;
    *(float *)(this + 0xe4) = param_2;
    updateImageScale(this + -200);
    return;
  }
  return;
}


// ===== 004a3d3c  rive::Image::updateTransform =====

/* rive::Image::updateTransform() */

void __thiscall rive::Image::updateTransform(Image *this)

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
  *(ulong *)(this + 0xe0) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1b0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20),
                (float)*(undefined8 *)(this + 0x1b0) + (float)*(undefined8 *)(this + 0xe0));
  return;
}


// ===== 004a3dd8  rive::Image::localBounds =====

/* rive::Image::localBounds() const */

undefined1  [16] __thiscall rive::Image::localBounds(Image *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  lVar1 = *(long *)(this + 0x198);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x88) == 0) {
      uVar3 = NEON_rev64(*(undefined8 *)(lVar1 + 0x80),4);
    }
    else {
      uVar3 = NEON_scvtf(*(undefined8 *)(*(long *)(lVar1 + 0x88) + 0x10),4);
    }
    auVar2._0_4_ = (float)*(undefined8 *)(this + 0x178) * -(float)uVar3;
    auVar2._4_4_ = (float)((ulong)*(undefined8 *)(this + 0x178) >> 0x20) *
                   -(float)((ulong)uVar3 >> 0x20);
    auVar2._8_8_ = 0;
    return auVar2;
  }
  return ZEXT816(0);
}


// ===== 004a3e2c  FUN_004a3e2c =====

void FUN_004a3e2c(long param_1)

{
  size_t __n;
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *__dest;
  
  plVar3 = *(long **)(param_1 + 0x198);
  *(undefined **)(param_1 + 400) = PTR_vtable_0067d008 + 0x10;
  if (plVar3 != (long *)0x0) {
    __dest = (long *)plVar3[0xd];
    plVar2 = (long *)plVar3[0xe];
    if (__dest != plVar2) {
      do {
        while (*__dest == param_1 + 400) {
          __n = (long)plVar2 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar2 = (long *)((long)__dest + __n);
          plVar3[0xe] = (long)plVar2;
          if (__dest == plVar2) goto LAB_004a3eb0;
        }
        __dest = __dest + 1;
      } while (__dest != plVar2);
LAB_004a3eb0:
      plVar3 = *(long **)(param_1 + 0x198);
      if (plVar3 == (long *)0x0) goto LAB_004a3edc;
    }
    iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9);
    if (iVar1 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
LAB_004a3edc:
  FUN_0035e448(param_1);
  return;
}


// ===== 004a3ef4  FUN_004a3ef4 =====

void FUN_004a3ef4(void *param_1)

{
  size_t __n;
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *__dest;
  
  plVar3 = *(long **)((long)param_1 + 0x198);
  *(undefined **)((long)param_1 + 400) = PTR_vtable_0067d008 + 0x10;
  if (plVar3 != (long *)0x0) {
    __dest = (long *)plVar3[0xd];
    plVar2 = (long *)plVar3[0xe];
    if (__dest != plVar2) {
      do {
        while (*__dest == (long)param_1 + 400) {
          __n = (long)plVar2 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar2 = (long *)((long)__dest + __n);
          plVar3[0xe] = (long)plVar2;
          if (__dest == plVar2) goto LAB_004a3f78;
        }
        __dest = __dest + 1;
      } while (__dest != plVar2);
LAB_004a3f78:
      plVar3 = *(long **)((long)param_1 + 0x198);
      if (plVar3 == (long *)0x0) goto LAB_004a3fa4;
    }
    iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9);
    if (iVar1 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
LAB_004a3fa4:
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004a3fc4  FUN_004a3fc4 =====

undefined8 FUN_004a3fc4(void)

{
  return 100;
}


// ===== 004a3fcc  FUN_004a3fcc =====

undefined8 FUN_004a3fcc(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 100)) {
    return 0;
  }
  return 1;
}


// ===== 004a4014  FUN_004a4014 =====

undefined8 FUN_004a4014(long param_1,ushort param_2,long *param_3)

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
  
  if (param_2 < 0x17c) {
    if (0x16 < param_2) {
      if (param_2 == 0x17) {
        uVar9 = 0;
        uVar4 = 0;
        pbVar7 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004a42bc;
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
LAB_004a42bc:
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
            goto LAB_004a4310;
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
LAB_004a4310:
          uVar4 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x138) = (int)uVar4;
        return 1;
      }
      if (param_2 == 0xce) {
        uVar9 = 0;
        uVar4 = 0;
        pbVar7 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004a42f4;
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
LAB_004a42f4:
          uVar4 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x174) = (int)uVar4;
        return 1;
      }
LAB_004a42b0:
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
      if (param_2 != 0xe) goto LAB_004a42b0;
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
  }
  else if (param_2 < 0x3ce) {
    if (param_2 == 0x17c) {
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
      *(undefined4 *)(param_1 + 0x178) = uVar10;
    }
    else {
      if (param_2 != 0x17d) goto LAB_004a42b0;
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
      *(undefined4 *)(param_1 + 0x17c) = uVar10;
    }
  }
  else {
    if (param_2 == 0x3ce) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004a42d8;
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
LAB_004a42d8:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x180) = (int)uVar4;
      return 1;
    }
    if (param_2 == 0x3cf) {
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
      *(undefined4 *)(param_1 + 0x184) = uVar10;
    }
    else {
      if (param_2 != 0x3d0) goto LAB_004a42b0;
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
      *(undefined4 *)(param_1 + 0x188) = uVar10;
    }
  }
  param_3[2] = (long)puVar5;
  return 1;
}


// ===== 004a438c  FUN_004a438c =====

void FUN_004a438c(void)

{
  return;
}


// ===== 004a4390  FUN_004a4390 =====

void FUN_004a4390(void)

{
  return;
}


// ===== 004a4394  FUN_004a4394 =====

void FUN_004a4394(void)

{
  return;
}


// ===== 004a4398  FUN_004a4398 =====

void FUN_004a4398(void)

{
  return;
}


// ===== 004a439c  FUN_004a439c =====

void FUN_004a439c(void)

{
  return;
}


// ===== 004a43a0  FUN_004a43a0 =====

void FUN_004a43a0(void)

{
  return;
}


// ===== 004a43a4  FUN_004a43a4 =====

void FUN_004a43a4(long *param_1)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *__dest;
  
  plVar3 = (long *)param_1[1];
  *param_1 = (long)(PTR_vtable_0067d008 + 0x10);
  if (plVar3 != (long *)0x0) {
    __dest = (undefined8 *)plVar3[0xd];
    puVar2 = (undefined8 *)plVar3[0xe];
    if (__dest != puVar2) {
      do {
        while ((long *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar2) goto LAB_004a4420;
        }
        __n = (long)puVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar2 = (undefined8 *)((long)__dest + __n);
        plVar3[0xe] = (long)puVar2;
      } while (__dest != puVar2);
LAB_004a4420:
      plVar3 = (long *)param_1[1];
      if (plVar3 == (long *)0x0) goto LAB_004a444c;
    }
    iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9);
    if (iVar1 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
LAB_004a444c:
  FUN_0035e448(param_1 + -0x32);
  return;
}


// ===== 004a4460  FUN_004a4460 =====

void FUN_004a4460(long *param_1)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *__dest;
  
  plVar3 = (long *)param_1[1];
  *param_1 = (long)(PTR_vtable_0067d008 + 0x10);
  if (plVar3 != (long *)0x0) {
    __dest = (undefined8 *)plVar3[0xd];
    puVar2 = (undefined8 *)plVar3[0xe];
    if (__dest != puVar2) {
      do {
        while ((long *)*__dest != param_1) {
          __dest = __dest + 1;
          if (__dest == puVar2) goto LAB_004a44dc;
        }
        __n = (long)puVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar2 = (undefined8 *)((long)__dest + __n);
        plVar3[0xe] = (long)puVar2;
      } while (__dest != puVar2);
LAB_004a44dc:
      plVar3 = (long *)param_1[1];
      if (plVar3 == (long *)0x0) goto LAB_004a4508;
    }
    iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9);
    if (iVar1 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
LAB_004a4508:
  FUN_0035e448(param_1 + -0x32);
  operator_delete(param_1 + -0x32);
  return;
}


// ===== 004a4528  rive::HitTester::reset =====

/* rive::HitTester::reset() */

void __thiscall rive::HitTester::reset(HitTester *this)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  return;
}


// ===== 004a4534  rive::HitTester::reset =====

/* rive::HitTester::reset(rive::TAABB<int> const&) */

void __thiscall rive::HitTester::reset(HitTester *this,TAABB *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 *__s;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *__s_00;
  undefined4 *__s_01;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar12 = NEON_scvtf(*(undefined8 *)param_1,4);
  *(undefined8 *)(this + 0x28) = uVar12;
  __s = *(undefined4 **)this;
  __s_00 = *(undefined4 **)(this + 8);
  lVar10 = (long)__s_00 - (long)__s;
  iVar11 = (int)*(undefined8 *)(param_1 + 8) - (int)*(undefined8 *)param_1;
  iVar13 = (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) -
           (int)((ulong)*(undefined8 *)param_1 >> 0x20);
  *(ulong *)(this + 0x34) = CONCAT44(iVar13,iVar11);
  iVar11 = iVar11 * iVar13;
  uVar3 = (ulong)iVar11;
  uVar5 = lVar10 >> 2;
  *(float *)(this + 0x30) = (float)iVar13;
  uVar7 = uVar3 - uVar5;
  if (uVar3 < uVar5 || uVar7 == 0) {
    if (uVar3 < uVar5) {
      __s_00 = __s + uVar3;
      *(undefined4 **)(this + 8) = __s_00;
    }
    goto LAB_004a46dc;
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__s_00 >> 2) < uVar7) {
    if (iVar11 < 0) {
      FUN_00330fec(this);
LAB_004a472c:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    uVar6 = *(long *)(this + 0x10) - (long)__s;
    uVar5 = (long)uVar6 >> 1;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar5 = 0x3fffffffffffffff;
    }
    if (uVar5 >> 0x3e != 0) goto LAB_004a472c;
    pvVar2 = operator_new(uVar5 * 4);
    __s_01 = (undefined4 *)((long)pvVar2 + lVar10);
    memset(__s_01,0,uVar7 * 4);
    puVar4 = __s_01 + uVar7;
    if ((long)__s_00 - (long)__s != 0) {
      uVar7 = ((long)__s_00 - (long)__s) - 4;
      if ((0x1b < uVar7) && (0x1f < (ulong)((long)__s_00 + (-(long)pvVar2 - lVar10)))) {
        puVar8 = (undefined8 *)(__s_00 + -4);
        uVar7 = (uVar7 >> 2) + 1;
        uVar6 = uVar7 & 0x7ffffffffffffff8;
        __s_00 = __s_00 + -uVar6;
        puVar9 = (undefined8 *)((long)pvVar2 + ((long)puVar8 - (long)__s));
        uVar3 = uVar6;
        do {
          puVar1 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar14 = puVar8[1];
          uVar12 = *puVar8;
          uVar3 = uVar3 - 8;
          puVar8 = puVar8 + -4;
          puVar9[-1] = *puVar1;
          puVar9[-2] = uVar15;
          puVar9[1] = uVar14;
          *puVar9 = uVar12;
          puVar9 = puVar9 + -4;
        } while (uVar3 != 0);
        __s_01 = __s_01 + -uVar6;
        if (uVar7 == uVar6) goto LAB_004a4690;
      }
      do {
        __s_00 = __s_00 + -1;
        __s_01 = __s_01 + -1;
        *__s_01 = *__s_00;
      } while (__s_00 != __s);
    }
LAB_004a4690:
    *(undefined4 **)this = __s_01;
    *(undefined4 **)(this + 8) = puVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar5 * 4);
    if (__s != (undefined4 *)0x0) {
      operator_delete(__s);
      puVar4 = *(undefined4 **)(this + 8);
    }
  }
  else {
    memset(__s_00,0,uVar7 * 4);
    puVar4 = __s_00 + uVar7;
    *(undefined4 **)(this + 8) = puVar4;
  }
  __s = *(undefined4 **)this;
  __s_00 = puVar4;
LAB_004a46dc:
  if (__s_00 != __s) {
    uVar7 = (long)__s_00 - (long)__s >> 2;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    memset(__s,0,uVar7 << 2);
  }
  this[0x3c] = (HitTester)0x1;
  return;
}


// ===== 004a4730  rive::HitTester::move =====

/* rive::HitTester::move(rive::Vec2D) */

void rive::HitTester::move(float param_1,float param_2,HitTester *param_3)

{
  undefined8 uVar1;
  
  if (param_3[0x3c] == (HitTester)0x0) {
    close(param_3);
  }
  uVar1 = CONCAT44(param_2 - (float)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20),
                   param_1 - (float)*(undefined8 *)(param_3 + 0x28));
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  param_3[0x3c] = (HitTester)0x0;
  return;
}


// ===== 004a4780  rive::HitTester::close =====

/* rive::HitTester::close() */

void __thiscall rive::HitTester::close(HitTester *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = *(float *)(this + 0x24);
  fVar9 = *(float *)(this + 0x1c);
  if (fVar8 != fVar9) {
    fVar13 = *(float *)(this + 0x30);
    fVar12 = *(float *)(this + 0x18);
    if (fVar8 == fVar9 || fVar8 < fVar9 != (NAN(fVar8) || NAN(fVar9))) {
      iVar2 = 1;
      fVar10 = fVar9;
      fVar11 = *(float *)(this + 0x20);
      if (fVar8 < fVar13 == (NAN(fVar8) || NAN(fVar13))) goto LAB_004a4790;
    }
    else {
      iVar2 = -1;
      fVar10 = fVar8;
      fVar8 = fVar9;
      fVar11 = fVar12;
      fVar12 = *(float *)(this + 0x20);
      if (fVar9 < fVar13 == (NAN(fVar9) || NAN(fVar13))) goto LAB_004a4790;
    }
    if (0.0 < fVar10) {
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      if (fVar10 == fVar13 || fVar10 < fVar13 != (NAN(fVar10) || NAN(fVar13))) {
        fVar13 = fVar10;
      }
      iVar4 = (int)(fVar9 + 0.5);
      iVar3 = (int)(fVar13 + 0.5) - iVar4;
      if (iVar3 != 0 && iVar4 <= (int)(fVar13 + 0.5)) {
        iVar1 = *(int *)(this + 0x34);
        fVar13 = (fVar12 - fVar11) / (fVar10 - fVar8);
        lVar5 = *(long *)this + (long)(iVar1 * iVar4) * 4;
        fVar12 = (float)NEON_fmadd(fVar13,0.0 - fVar8,fVar11);
        if (0.0 <= fVar8) {
          fVar12 = fVar11;
        }
        fVar8 = (float)NEON_fmadd(fVar13,((float)iVar4 - fVar9) + 0.5,fVar12);
        fVar8 = fVar8 + 0.5;
        do {
          fVar9 = 0.0;
          if (0.0 <= fVar8) {
            fVar9 = fVar8;
          }
          uVar6 = (uint)fVar9;
          if ((int)uVar6 < iVar1) {
            uVar7 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
            *(int *)(lVar5 + uVar7) = *(int *)(lVar5 + uVar7) + iVar2;
          }
          fVar8 = fVar13 + fVar8;
          iVar3 = iVar3 + -1;
          lVar5 = lVar5 + (long)iVar1 * 4;
        } while (iVar3 != 0);
      }
    }
  }
LAB_004a4790:
  this[0x3c] = (HitTester)0x1;
  return;
}


// ===== 004a4898  rive::HitTester::line =====

/* rive::HitTester::line(rive::Vec2D) */

void rive::HitTester::line(float param_1,float param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  param_2 = param_2 - *(float *)((long)param_3 + 0x2c);
  fVar8 = *(float *)((long)param_3 + 0x24);
  param_1 = param_1 - *(float *)(param_3 + 5);
  if (fVar8 != param_2) {
    fVar12 = *(float *)(param_3 + 6);
    if (fVar8 == param_2 || fVar8 < param_2 != (NAN(fVar8) || NAN(param_2))) {
      iVar2 = 1;
      fVar9 = param_2;
      fVar10 = *(float *)(param_3 + 4);
      fVar11 = param_1;
      if (fVar8 < fVar12 == (NAN(fVar8) || NAN(fVar12))) goto LAB_004a48b0;
    }
    else {
      iVar2 = -1;
      fVar9 = fVar8;
      fVar8 = param_2;
      fVar10 = param_1;
      fVar11 = *(float *)(param_3 + 4);
      if (param_2 < fVar12 == (NAN(param_2) || NAN(fVar12))) goto LAB_004a48b0;
    }
    if (0.0 < fVar9) {
      fVar13 = 0.0;
      if (0.0 <= fVar8) {
        fVar13 = fVar8;
      }
      if (fVar9 == fVar12 || fVar9 < fVar12 != (NAN(fVar9) || NAN(fVar12))) {
        fVar12 = fVar9;
      }
      iVar4 = (int)(fVar13 + 0.5);
      iVar3 = (int)(fVar12 + 0.5) - iVar4;
      if (iVar3 != 0 && iVar4 <= (int)(fVar12 + 0.5)) {
        iVar1 = *(int *)((long)param_3 + 0x34);
        fVar9 = (fVar11 - fVar10) / (fVar9 - fVar8);
        lVar5 = *param_3 + (long)(iVar1 * iVar4) * 4;
        fVar12 = (float)NEON_fmadd(fVar9,0.0 - fVar8,fVar10);
        if (0.0 <= fVar8) {
          fVar12 = fVar10;
        }
        fVar8 = (float)NEON_fmadd(fVar9,((float)iVar4 - fVar13) + 0.5,fVar12);
        fVar8 = fVar8 + 0.5;
        do {
          fVar12 = 0.0;
          if (0.0 <= fVar8) {
            fVar12 = fVar8;
          }
          uVar6 = (uint)fVar12;
          if ((int)uVar6 < iVar1) {
            uVar7 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
            *(int *)(lVar5 + uVar7) = *(int *)(lVar5 + uVar7) + iVar2;
          }
          fVar8 = fVar9 + fVar8;
          iVar3 = iVar3 + -1;
          lVar5 = lVar5 + (long)iVar1 * 4;
        } while (iVar3 != 0);
      }
    }
  }
LAB_004a48b0:
  *(float *)(param_3 + 4) = param_1;
  *(float *)((long)param_3 + 0x24) = param_2;
  return;
}


// ===== 004a49b0  rive::HitTester::quad =====

/* rive::HitTester::quad(rive::Vec2D, rive::Vec2D) */

void rive::HitTester::quad
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)(param_5 + 0x24) = param_4;
  return;
}


// ===== 004a49b8  rive::HitTester::recurse_cubic =====

/* rive::HitTester::recurse_cubic(rive::Vec2D, rive::Vec2D, rive::Vec2D, int) */

void rive::HitTester::recurse_cubic
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long *param_7,uint param_8)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ushort uVar13;
  undefined8 uVar14;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar29 = *(float *)((long)param_7 + 0x24);
  if (0.0 < fVar29) goto LAB_004a4a18;
  if (0.0 < param_2) goto LAB_004a4a18;
  if (0.0 < param_4) goto LAB_004a4a18;
  while (0.0 < param_6) {
LAB_004a4a18:
    do {
      auVar15._12_4_ = param_4;
      auVar15._8_4_ = param_4;
      fVar11 = *(float *)(param_7 + 6);
      auVar15._4_4_ = fVar29;
      auVar15._0_4_ = param_2;
      auVar16._0_12_ = auVar15._0_12_;
      auVar16._12_4_ = param_6;
      auVar17._4_4_ = fVar11;
      auVar17._0_4_ = fVar11;
      auVar17._8_4_ = fVar11;
      auVar17._12_4_ = fVar11;
      auVar17 = NEON_fcmge(auVar16,auVar17,4);
      uVar14 = NEON_cmlt(CONCAT26(auVar17._12_2_ << 0xf,
                                  CONCAT24(auVar17._8_2_ << 0xf,
                                           CONCAT22(auVar17._4_2_ << 0xf,auVar17._0_2_ << 0xf))),0,2
                        );
      uVar13 = NEON_uminv(uVar14,2);
      if ((uVar13 & 1) != 0) goto LAB_004a4cb0;
      fVar22 = *(float *)(param_7 + 4);
      if ((int)param_8 < 0x11) {
        lVar3 = *param_7;
        fVar18 = fVar29;
        fVar10 = fVar22;
        if ((int)param_8 < 3) goto LAB_004a4ca8;
        uVar14 = NEON_fmov(0x40400000,4);
        iVar4 = 1;
        fVar19 = (float)uVar14;
        fVar20 = (float)((ulong)uVar14 >> 0x20);
        fVar21 = 1.0 / (float)(int)param_8;
        fVar25 = fVar22;
        fVar26 = fVar29;
        goto LAB_004a4b94;
      }
      param_8 = param_8 + 1 >> 1;
      fVar11 = param_1 + (param_3 - param_1) * 0.5;
      fVar18 = param_2 + (param_4 - param_2) * 0.5;
      param_3 = param_3 + (param_5 - param_3) * 0.5;
      param_4 = param_4 + (param_6 - param_4) * 0.5;
      fVar22 = fVar22 + (param_1 - fVar22) * 0.5;
      fVar29 = fVar29 + (param_2 - fVar29) * 0.5;
      param_1 = fVar11 + (param_3 - fVar11) * 0.5;
      param_2 = fVar18 + (param_4 - fVar18) * 0.5;
      fVar11 = fVar22 + (fVar11 - fVar22) * 0.5;
      fVar18 = fVar29 + (fVar18 - fVar29) * 0.5;
      recurse_cubic(CONCAT44(fVar29,fVar22),fVar29,CONCAT44(fVar18,fVar11),fVar18,
                    fVar11 + (param_1 - fVar11) * 0.5,fVar18 + (param_2 - fVar18) * 0.5,param_7,
                    param_8);
      fVar29 = *(float *)((long)param_7 + 0x24);
    } while (((0.0 < fVar29) ||
             (uVar12 = NEON_fcmle(CONCAT44(param_2,param_4),0,2), (uVar12 & 0x100000000) == 0)) ||
            ((uVar12 & 1) == 0));
  }
  goto LAB_004a4cb0;
LAB_004a4b94:
  do {
    fVar10 = fVar22 + ((param_1 - fVar22) * fVar19 +
                      (((param_3 - param_1) + (fVar22 - param_1)) * fVar19 +
                      ((param_1 - param_3) * fVar19 + (param_5 - fVar22)) * fVar21) * fVar21) *
                      fVar21;
    fVar18 = fVar29 + ((param_2 - fVar29) * fVar20 +
                      (((param_4 - param_2) + (fVar29 - param_2)) * fVar20 +
                      ((param_2 - param_4) * fVar20 + (param_6 - fVar29)) * fVar21) * fVar21) *
                      fVar21;
    if (fVar26 != fVar18) {
      if (fVar26 == fVar18 || fVar26 < fVar18 != (NAN(fVar26) || NAN(fVar18))) {
        iVar5 = 1;
        fVar24 = fVar10;
        fVar23 = fVar18;
        if (fVar26 < fVar11 != (NAN(fVar26) || NAN(fVar11))) goto LAB_004a4bf8;
      }
      else {
        iVar5 = -1;
        fVar24 = fVar25;
        fVar23 = fVar26;
        fVar26 = fVar18;
        fVar25 = fVar10;
        if (fVar18 < fVar11 != (NAN(fVar18) || NAN(fVar11))) {
LAB_004a4bf8:
          if (0.0 < fVar23) {
            fVar27 = 0.0;
            if (0.0 <= fVar26) {
              fVar27 = fVar26;
            }
            fVar28 = fVar11;
            if (fVar23 == fVar11 || fVar23 < fVar11 != (NAN(fVar23) || NAN(fVar11))) {
              fVar28 = fVar23;
            }
            iVar8 = (int)(fVar27 + 0.5);
            iVar6 = (int)(fVar28 + 0.5) - iVar8;
            if (iVar6 != 0 && iVar8 <= (int)(fVar28 + 0.5)) {
              iVar1 = *(int *)((long)param_7 + 0x34);
              fVar23 = (fVar24 - fVar25) / (fVar23 - fVar26);
              lVar9 = lVar3 + (long)(iVar1 * iVar8) * 4;
              fVar24 = (float)NEON_fmadd(fVar23,0.0 - fVar26,fVar25);
              if (0.0 <= fVar26) {
                fVar24 = fVar25;
              }
              fVar25 = (float)NEON_fmadd(fVar23,((float)iVar8 - fVar27) + 0.5,fVar24);
              fVar25 = fVar25 + 0.5;
              do {
                fVar26 = 0.0;
                if (0.0 <= fVar25) {
                  fVar26 = fVar25;
                }
                uVar7 = (uint)fVar26;
                if ((int)uVar7 < iVar1) {
                  uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
                  *(int *)(lVar9 + uVar12) = *(int *)(lVar9 + uVar12) + iVar5;
                }
                fVar25 = fVar23 + fVar25;
                iVar6 = iVar6 + -1;
                lVar9 = lVar9 + (long)iVar1 * 4;
              } while (iVar6 != 0);
            }
          }
        }
      }
    }
    fVar21 = 1.0 / (float)(int)param_8 + fVar21;
    bVar2 = iVar4 != param_8 - 2;
    iVar4 = iVar4 + 1;
    fVar25 = fVar10;
    fVar26 = fVar18;
  } while (bVar2);
LAB_004a4ca8:
  if (fVar18 != param_6) {
    if (fVar18 == param_6 || fVar18 < param_6 != (NAN(fVar18) || NAN(param_6))) {
      iVar4 = 1;
      fVar29 = fVar18;
      fVar22 = fVar10;
      fVar18 = param_6;
      fVar10 = param_5;
    }
    else {
      iVar4 = -1;
      fVar29 = param_6;
      fVar22 = param_5;
    }
    if ((fVar29 < fVar11 != (NAN(fVar29) || NAN(fVar11))) && (0.0 < fVar18)) {
      fVar21 = 0.0;
      if (0.0 <= fVar29) {
        fVar21 = fVar29;
      }
      if (fVar18 == fVar11 || fVar18 < fVar11 != (NAN(fVar18) || NAN(fVar11))) {
        fVar11 = fVar18;
      }
      iVar6 = (int)(fVar21 + 0.5);
      iVar5 = (int)(fVar11 + 0.5) - iVar6;
      if (iVar5 != 0 && iVar6 <= (int)(fVar11 + 0.5)) {
        iVar8 = *(int *)((long)param_7 + 0x34);
        fVar18 = (fVar10 - fVar22) / (fVar18 - fVar29);
        lVar3 = lVar3 + (long)(iVar8 * iVar6) * 4;
        fVar11 = (float)NEON_fmadd(fVar18,0.0 - fVar29,fVar22);
        if (0.0 <= fVar29) {
          fVar11 = fVar22;
        }
        fVar29 = (float)NEON_fmadd(fVar18,((float)iVar6 - fVar21) + 0.5,fVar11);
        fVar29 = fVar29 + 0.5;
        do {
          fVar11 = 0.0;
          if (0.0 <= fVar29) {
            fVar11 = fVar29;
          }
          uVar7 = (uint)fVar11;
          if ((int)uVar7 < iVar8) {
            uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
            *(int *)(lVar3 + uVar12) = *(int *)(lVar3 + uVar12) + iVar4;
          }
          fVar29 = fVar18 + fVar29;
          iVar5 = iVar5 + -1;
          lVar3 = lVar3 + (long)iVar8 * 4;
        } while (iVar5 != 0);
      }
    }
  }
LAB_004a4cb0:
  *(float *)(param_7 + 4) = param_5;
  *(float *)((long)param_7 + 0x24) = param_6;
  return;
}


// ===== 004a4db8  rive::HitTester::cubic =====

/* rive::HitTester::cubic(rive::Vec2D, rive::Vec2D, rive::Vec2D) */

void rive::HitTester::cubic
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *(float *)(param_7 + 0x28);
  fVar9 = *(float *)(param_7 + 0x2c);
  fVar6 = *(float *)(param_7 + 0x24);
  param_2 = param_2 - fVar9;
  param_4 = param_4 - fVar9;
  param_6 = param_6 - fVar9;
  if ((((fVar6 <= 0.0) && (param_2 <= 0.0)) && (param_4 <= 0.0)) && (param_6 <= 0.0)) {
LAB_004a4e10:
    *(float *)(param_7 + 0x20) = param_5 - fVar7;
    *(float *)(param_7 + 0x24) = param_6;
    return;
  }
  fVar9 = *(float *)(param_7 + 0x30);
  if (fVar6 < fVar9 == (NAN(fVar6) || NAN(fVar9))) {
    bVar1 = true;
    bVar3 = false;
    if (param_2 < fVar9 == (NAN(param_2) || NAN(fVar9))) {
      bVar1 = false;
      bVar3 = true;
      if (!NAN(param_4) && !NAN(fVar9)) {
        bVar1 = param_4 < fVar9;
        bVar3 = false;
      }
    }
    bVar2 = true;
    bVar4 = false;
    if (bVar1 == bVar3) {
      bVar2 = false;
      bVar4 = true;
      if (!NAN(param_6) && !NAN(fVar9)) {
        bVar2 = param_6 < fVar9;
        bVar4 = false;
      }
    }
    if (bVar2 == bVar4) goto LAB_004a4e10;
  }
  param_1 = param_1 - fVar7;
  param_3 = param_3 - fVar7;
  fVar9 = ABS(param_4 + ((fVar6 - param_2) - param_2));
  fVar6 = ABS(param_6 + ((param_2 - param_4) - param_4));
  fVar8 = ABS(param_3 + ((*(float *)(param_7 + 0x20) - param_1) - param_1));
  fVar7 = ABS((param_5 - fVar7) + ((param_1 - param_3) - param_3));
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  if (fVar6 <= fVar9) {
    fVar6 = fVar9;
  }
  fVar6 = (float)NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
  iVar5 = (int)SQRT(SQRT(fVar6) * 3.0);
  if (0xff < iVar5) {
    iVar5 = 0x100;
  }
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  recurse_cubic(param_7,iVar5);
  return;
}


// ===== 004a4ea4  rive::HitTester::addRect =====

/* rive::HitTester::addRect(rive::AABB const&, rive::Mat2D const&, rive::PathDirection) */

void __thiscall
rive::HitTester::addRect(HitTester *this,undefined4 *param_1,undefined4 *param_2,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  
  uVar12 = *param_2;
  uVar13 = param_2[1];
  fVar4 = (float)param_2[2];
  fVar3 = (float)param_2[3];
  fVar11 = (float)param_2[4];
  fVar10 = (float)param_2[5];
  uVar15 = *param_1;
  fVar16 = (float)param_1[1];
  uVar14 = param_1[2];
  fVar17 = (float)param_1[3];
  if (this[0x3c] == (HitTester)0x0) {
    close(this);
  }
  fVar1 = fVar16 * fVar4;
  fVar16 = fVar16 * fVar3;
  fVar3 = fVar3 * fVar17;
  fVar4 = fVar4 * fVar17;
  this[0x3c] = (HitTester)0x0;
  fVar6 = (float)NEON_fmadd(uVar12,uVar15,fVar1);
  fVar7 = (float)NEON_fmadd(uVar13,uVar15,fVar16);
  fVar8 = (float)NEON_fmadd(uVar13,uVar15,fVar3);
  fVar9 = (float)NEON_fmadd(uVar12,uVar15,fVar4);
  fVar2 = (float)NEON_fmadd(uVar13,uVar14,fVar16);
  fVar17 = (float)NEON_fmadd(uVar12,uVar14,fVar1);
  fVar1 = (float)NEON_fmadd(uVar13,uVar14,fVar3);
  fVar5 = (float)NEON_fmadd(uVar12,uVar14,fVar4);
  fVar4 = fVar10 + fVar2;
  fVar16 = fVar11 + fVar17;
  fVar3 = fVar11 + fVar9;
  if (param_4 != 0) {
    fVar4 = fVar10 + fVar8;
    fVar16 = fVar11 + fVar9;
    fVar3 = fVar11 + fVar17;
  }
  *(float *)(this + 0x20) = (fVar11 + fVar6) - *(float *)(this + 0x28);
  *(float *)(this + 0x24) = (fVar10 + fVar7) - *(float *)(this + 0x2c);
  fVar17 = fVar10 + fVar8;
  if (param_4 != 0) {
    fVar17 = fVar10 + fVar2;
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x20);
  line(fVar16,fVar4,this);
  line(fVar11 + fVar5,fVar10 + fVar1,this);
  line(fVar3,fVar17,this);
  close(this);
  return;
}


// ===== 004a4fc4  rive::HitTester::test =====

/* rive::HitTester::test(rive::FillRule) */

bool __thiscall rive::HitTester::test(HitTester *this,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  byte bVar10;
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
  byte bVar41;
  byte bVar42;
  undefined1 auVar27 [16];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  
  if (this[0x3c] == (HitTester)0x0) {
    close(this);
  }
  puVar4 = *(uint **)this;
  puVar2 = *(uint **)(this + 8);
  uVar1 = 1;
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  if (puVar4 == puVar2) {
    return false;
  }
  uVar6 = (long)puVar2 + (-4 - (long)puVar4);
  if (uVar6 < 0x1c) {
    uVar5 = 0;
  }
  else {
    bVar10 = 0;
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
    bVar41 = 0;
    bVar42 = 0;
    puVar8 = puVar4 + 4;
    uVar6 = (uVar6 >> 2) + 1;
    uVar7 = uVar6 & 0x7ffffffffffffff8;
    uVar9 = uVar7;
    do {
      uVar48 = *(undefined8 *)(puVar8 + -2);
      uVar47 = *(undefined8 *)(puVar8 + -4);
      uVar50 = *(undefined8 *)(puVar8 + 2);
      uVar49 = *(undefined8 *)puVar8;
      uVar9 = uVar9 - 8;
      puVar8 = puVar8 + 8;
      bVar43 = (byte)uVar1;
      bVar44 = (byte)(uVar1 >> 8);
      bVar45 = (byte)(uVar1 >> 0x10);
      bVar46 = (byte)(uVar1 >> 0x18);
      bVar10 = (byte)uVar47 & bVar43 | bVar10;
      bVar11 = (byte)((ulong)uVar47 >> 8) & bVar44 | bVar11;
      bVar12 = (byte)((ulong)uVar47 >> 0x10) & bVar45 | bVar12;
      bVar13 = (byte)((ulong)uVar47 >> 0x18) & bVar46 | bVar13;
      bVar14 = (byte)((ulong)uVar47 >> 0x20) & bVar43 | bVar14;
      bVar15 = (byte)((ulong)uVar47 >> 0x28) & bVar44 | bVar15;
      bVar16 = (byte)((ulong)uVar47 >> 0x30) & bVar45 | bVar16;
      bVar17 = (byte)((ulong)uVar47 >> 0x38) & bVar46 | bVar17;
      bVar18 = (byte)uVar48 & bVar43 | bVar18;
      bVar19 = (byte)((ulong)uVar48 >> 8) & bVar44 | bVar19;
      bVar20 = (byte)((ulong)uVar48 >> 0x10) & bVar45 | bVar20;
      bVar21 = (byte)((ulong)uVar48 >> 0x18) & bVar46 | bVar21;
      bVar22 = (byte)((ulong)uVar48 >> 0x20) & bVar43 | bVar22;
      bVar23 = (byte)((ulong)uVar48 >> 0x28) & bVar44 | bVar23;
      bVar24 = (byte)((ulong)uVar48 >> 0x30) & bVar45 | bVar24;
      bVar25 = (byte)((ulong)uVar48 >> 0x38) & bVar46 | bVar25;
      bVar26 = (byte)uVar49 & bVar43 | bVar26;
      bVar28 = (byte)((ulong)uVar49 >> 8) & bVar44 | bVar28;
      bVar29 = (byte)((ulong)uVar49 >> 0x10) & bVar45 | bVar29;
      bVar30 = (byte)((ulong)uVar49 >> 0x18) & bVar46 | bVar30;
      bVar31 = (byte)((ulong)uVar49 >> 0x20) & bVar43 | bVar31;
      bVar32 = (byte)((ulong)uVar49 >> 0x28) & bVar44 | bVar32;
      bVar33 = (byte)((ulong)uVar49 >> 0x30) & bVar45 | bVar33;
      bVar34 = (byte)((ulong)uVar49 >> 0x38) & bVar46 | bVar34;
      bVar35 = (byte)uVar50 & bVar43 | bVar35;
      bVar36 = (byte)((ulong)uVar50 >> 8) & bVar44 | bVar36;
      bVar37 = (byte)((ulong)uVar50 >> 0x10) & bVar45 | bVar37;
      bVar38 = (byte)((ulong)uVar50 >> 0x18) & bVar46 | bVar38;
      bVar39 = (byte)((ulong)uVar50 >> 0x20) & bVar43 | bVar39;
      bVar40 = (byte)((ulong)uVar50 >> 0x28) & bVar44 | bVar40;
      bVar41 = (byte)((ulong)uVar50 >> 0x30) & bVar45 | bVar41;
      bVar42 = (byte)((ulong)uVar50 >> 0x38) & bVar46 | bVar42;
    } while (uVar9 != 0);
    bVar26 = bVar26 | bVar10;
    bVar28 = bVar28 | bVar11;
    bVar29 = bVar29 | bVar12;
    bVar30 = bVar30 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    bVar34 = bVar34 | bVar17;
    auVar27[1] = bVar28;
    auVar27[0] = bVar26;
    auVar27[2] = bVar29;
    auVar27[3] = bVar30;
    auVar27[4] = bVar31;
    auVar27[5] = bVar32;
    auVar27[6] = bVar33;
    auVar27[7] = bVar34;
    auVar27[8] = bVar35 | bVar18;
    auVar27[9] = bVar36 | bVar19;
    auVar27[10] = bVar37 | bVar20;
    auVar27[0xb] = bVar38 | bVar21;
    auVar27[0xc] = bVar39 | bVar22;
    auVar27[0xd] = bVar40 | bVar23;
    auVar27[0xe] = bVar41 | bVar24;
    auVar27[0xf] = bVar42 | bVar25;
    auVar3[1] = bVar28;
    auVar3[0] = bVar26;
    auVar3[2] = bVar29;
    auVar3[3] = bVar30;
    auVar3[4] = bVar31;
    auVar3[5] = bVar32;
    auVar3[6] = bVar33;
    auVar3[7] = bVar34;
    auVar3[8] = bVar35 | bVar18;
    auVar3[9] = bVar36 | bVar19;
    auVar3[10] = bVar37 | bVar20;
    auVar3[0xb] = bVar38 | bVar21;
    auVar3[0xc] = bVar39 | bVar22;
    auVar3[0xd] = bVar40 | bVar23;
    auVar3[0xe] = bVar41 | bVar24;
    auVar3[0xf] = bVar42 | bVar25;
    auVar27 = NEON_ext(auVar27,auVar3,8,1);
    uVar5 = CONCAT13(bVar30 | auVar27[3],
                     CONCAT12(bVar29 | auVar27[2],CONCAT11(bVar28 | auVar27[1],bVar26 | auVar27[0]))
                    );
    uVar5 = uVar5 | (uint)(CONCAT17(bVar34 | auVar27[7],
                                    CONCAT16(bVar33 | auVar27[6],
                                             CONCAT15(bVar32 | auVar27[5],
                                                      CONCAT14(bVar31 | auVar27[4],uVar5)))) >> 0x20
                          );
    if (uVar6 == uVar7) goto LAB_004a50a0;
    puVar4 = puVar4 + uVar7;
  }
  do {
    puVar8 = puVar4 + 1;
    uVar5 = *puVar4 & uVar1 | uVar5;
    puVar4 = puVar8;
  } while (puVar8 != puVar2);
LAB_004a50a0:
  return uVar5 != 0;
}


// ===== 004a50b4  rive::HitTester::testMesh =====

/* rive::HitTester::testMesh(rive::Vec2D, rive::Span<rive::Vec2D>, rive::Span<unsigned short>) */

void rive::HitTester::testMesh
               (float param_1,float param_2,long param_3,ulong param_4,long param_5,ulong param_6)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (2 < param_4) {
    AABB::AABB((AABB *)&local_58,param_3,param_4);
    bVar8 = false;
    if ((((local_4c < param_2) || (param_2 < local_54)) || (local_50 < param_1)) ||
       (param_1 < local_58)) goto LAB_004a50e4;
    if (param_6 != 0) {
      uVar9 = 0;
      do {
        puVar1 = (ushort *)(param_5 + uVar9 * 2);
        pfVar2 = (float *)(param_3 + (ulong)*puVar1 * 8);
        pfVar3 = (float *)(param_3 + (ulong)puVar1[1] * 8);
        pfVar4 = (float *)(param_3 + (ulong)puVar1[2] * 8);
        fVar10 = *pfVar2 - param_1;
        fVar11 = pfVar2[1] - param_2;
        fVar12 = *pfVar3 - param_1;
        fVar13 = pfVar3[1] - param_2;
        fVar14 = *pfVar4 - param_1;
        fVar15 = pfVar4[1] - param_2;
        bVar8 = fVar10 * fVar13 < fVar11 * fVar12;
        bVar6 = bVar8 != fVar13 * fVar14 <= fVar12 * fVar15;
        bVar7 = bVar8 != fVar10 * fVar15 <= fVar11 * fVar14;
        bVar8 = bVar6 && bVar7;
        if (bVar6 && bVar7) break;
        uVar9 = uVar9 + 3;
      } while (uVar9 < param_6);
      goto LAB_004a50e4;
    }
  }
  bVar8 = false;
LAB_004a50e4:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar8);
}


// ===== 004a5200  rive::HitTester::testMesh =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::HitTester::testMesh(rive::TAABB<int> const&, rive::Span<rive::Vec2D>, rive::Span<unsigned
   short>) */

long * rive::HitTester::testMesh(int *param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  uint *__s;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ushort uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  byte bVar64;
  byte bVar67;
  byte bVar68;
  float fVar65;
  float fVar66;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 uStack_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  long local_68;
  
  lVar35 = tpidr_el0;
  local_68 = *(long *)(lVar35 + 0x28);
  uVar33 = *(undefined8 *)param_1;
  if (((int)*(undefined8 *)(param_1 + 2) - (int)uVar33) *
      ((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) - (int)((ulong)uVar33 >> 0x20)) == 1) {
    if (2 < param_3) {
      uVar33 = NEON_scvtf(uVar33,4);
      uStack_88 = (undefined1)uVar33;
      AABB::AABB((AABB *)&local_80);
      uVar41 = (undefined1)((ulong)uVar33 >> 8);
      uVar43 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar45 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar47 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar58 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar60 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar62 = (undefined1)((ulong)uVar33 >> 0x38);
      auVar6[8] = uStack_88;
      auVar6._0_8_ = uVar33;
      auVar5[8] = uStack_88;
      auVar5._0_8_ = uVar33;
      auVar7._4_4_ = fStack_7c;
      auVar7._0_4_ = local_80;
      auVar7._8_4_ = local_78;
      auVar7._12_4_ = local_74;
      auVar5[9] = uVar41;
      auVar5[10] = uVar43;
      auVar5[0xb] = uVar45;
      auVar5[0xc] = uVar47;
      auVar5[0xd] = uVar58;
      auVar5[0xe] = uVar60;
      auVar5[0xf] = uVar62;
      auVar40 = NEON_fcmgt(auVar7,auVar5,4);
      auVar6[9] = uVar41;
      auVar6[10] = uVar43;
      auVar6[0xb] = uVar45;
      auVar6[0xc] = uVar47;
      auVar6[0xd] = uVar58;
      auVar6[0xe] = uVar60;
      auVar6[0xf] = uVar62;
      auVar36 = NEON_fcmgt(auVar6,auVar7,4);
      uVar34 = NEON_cmlt(CONCAT26(auVar36._12_2_ << 0xf,
                                  CONCAT24(auVar36._8_2_ << 0xf,
                                           CONCAT22(auVar40._4_2_ << 0xf,auVar40._0_2_ << 0xf))),0,2
                        );
      uVar29 = NEON_umaxv(uVar34,2);
      if (((uVar29 & 1) == 0) && (param_5 != 0)) {
        fVar90 = (float)((ulong)uVar33 >> 0x20);
        uVar20 = 0;
        do {
          puVar1 = (ushort *)(param_4 + uVar20 * 2);
          pfVar2 = (float *)(param_2 + (ulong)*puVar1 * 8);
          pfVar3 = (float *)(param_2 + (ulong)puVar1[1] * 8);
          pfVar4 = (float *)(param_2 + (ulong)puVar1[2] * 8);
          fVar84 = (float)uVar33;
          fVar37 = *pfVar2 - fVar84;
          fVar30 = pfVar2[1] - fVar90;
          fVar65 = *pfVar3 - fVar84;
          fVar82 = pfVar3[1] - fVar90;
          fVar84 = *pfVar4 - fVar84;
          fVar88 = pfVar4[1] - fVar90;
          bVar9 = fVar37 * fVar82 < fVar30 * fVar65;
          uVar27 = (uint)(bVar9 != fVar82 * fVar84 <= fVar65 * fVar88 &&
                         bVar9 != fVar37 * fVar88 <= fVar30 * fVar84);
          plVar10 = (long *)(ulong)uVar27;
          if (uVar27 != 0) break;
          uVar20 = uVar20 + 3;
        } while (uVar20 < param_5);
        goto LAB_004a5410;
      }
    }
  }
  else if (2 < param_3) {
    AABB::AABB((AABB *)&local_80);
    fVar90 = (float)param_1[1];
    if ((fVar90 < local_74) &&
       (fVar30 = (float)param_1[3], fStack_7c < fVar30 != (NAN(fStack_7c) || NAN(fVar30)))) {
      fVar30 = (float)*param_1;
      if ((fVar30 < local_78) &&
         (fVar37 = (float)param_1[2], local_80 < fVar37 != (NAN(local_80) || NAN(fVar37)))) {
        local_80 = 0.0;
        fStack_7c = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        iVar15 = (param_1[3] - param_1[1]) * (param_1[2] - *param_1);
        local_70 = 0;
        if (iVar15 == 0) {
          puVar19 = (uint *)0x0;
          __s = (uint *)0x0;
        }
        else {
          if (iVar15 < 0) {
            lVar11 = FUN_00330fec(&local_80);
            plVar10 = (long *)operator_new(0x1b8);
            plVar10[1] = 0;
            *plVar10 = 0;
            plVar10[5] = 0;
            plVar10[4] = 0;
            plVar10[7] = 0;
            plVar10[6] = 0;
            plVar10[9] = 0;
            plVar10[8] = 0;
            plVar10[0xb] = 0;
            plVar10[10] = 0;
            plVar10[0xd] = 0;
            plVar10[0xc] = 0;
            plVar10[0xf] = 0;
            plVar10[0xe] = 0;
            plVar10[0x11] = 0;
            plVar10[0x10] = 0;
            plVar10[0x13] = 0;
            plVar10[0x12] = 0;
            plVar10[0x15] = 0;
            plVar10[0x14] = 0;
            plVar10[0x17] = 0;
            plVar10[0x16] = 0;
            plVar10[0x19] = 0;
            plVar10[0x18] = 0;
            plVar10[0x1b] = 0;
            plVar10[0x1a] = 0;
            plVar10[0x1f] = 0;
            plVar10[0x1e] = 0;
            plVar10[0x21] = 0;
            plVar10[0x20] = 0;
            plVar10[0x23] = 0;
            plVar10[0x22] = 0;
            plVar10[0x25] = 0;
            plVar10[0x24] = 0;
            plVar10[0x27] = 0;
            plVar10[0x26] = 0;
            plVar10[0x29] = 0;
            plVar10[0x28] = 0;
            plVar10[0x2b] = 0;
            plVar10[0x2a] = 0;
            plVar10[0x2d] = 0;
            plVar10[0x2c] = 0;
            plVar10[0x31] = 0;
            plVar10[0x30] = 0;
            plVar10[3] = 0;
            *(undefined8 *)(plVar10 + 2) = 0;
            *(undefined4 *)(plVar10 + 1) = 0xffffffff;
            *(undefined2 *)(plVar10 + 0xc) = 0xfffe;
            lVar12 = _UNK_00281c00;
            lVar35 = _DAT_00281bf8;
            plVar10[6] = 0;
            plVar10[9] = 0;
            plVar10[8] = 0;
            plVar10[0xb] = 0;
            plVar10[10] = 0;
            plVar10[0xe] = 0;
            plVar10[0xf] = 0;
            plVar10[0xd] = 0;
            plVar10[0x12] = 0;
            plVar10[0x13] = 0;
            plVar10[0x11] = 0;
            *(undefined8 *)((long)plVar10 + 0xb4) = 0;
            *(long *)((long)plVar10 + 0xac) = lVar12;
            *(long *)((long)plVar10 + 0xa4) = lVar35;
            plVar10[0x1b] = lVar12;
            plVar10[0x1a] = lVar35;
            plVar10[0x1d] = 0;
            plVar10[0x1c] = 0;
            plVar10[0x1c] = 0;
            plVar10[0x1f] = 0;
            plVar10[0x1e] = 0;
            plVar10[0x21] = 0;
            plVar10[0x20] = 0;
            plVar10[0x25] = 0;
            plVar10[0x29] = 0;
            plVar10[0x28] = 0;
            plVar10[0x2b] = 0;
            plVar10[0x2a] = 0;
            plVar10[0x2d] = 0;
            plVar10[0x2c] = 0;
            plVar10[0x2f] = 0;
            plVar10[0x2e] = 0;
            plVar10[0x24] = lVar12;
            plVar10[0x23] = lVar35;
            puVar8 = PTR_vtable_0067d420;
            *(undefined1 *)(plVar10 + 0x2e) = 1;
            uVar38 = *(undefined4 *)(lVar11 + 0x188);
            plVar10[0x33] = 0;
            plVar10[0x34] = 0;
            *(undefined4 *)(plVar10 + 0x31) = uVar38;
            uVar33 = *(undefined8 *)(lVar11 + 0xbc);
            *plVar10 = (long)(puVar8 + 0x10);
            plVar10[0x19] = (long)(puVar8 + 0x2a8);
            lVar12 = _UNK_0024e528;
            lVar35 = _DAT_0024e520;
            plVar10[0x32] = (long)(puVar8 + 0x2d0);
            uVar38 = *(undefined4 *)(lVar11 + 0x174);
            *(undefined8 *)((long)plVar10 + 0xbc) = uVar33;
            uVar39 = *(undefined4 *)(lVar11 + 0xa0);
            plVar10[0x36] = lVar12;
            plVar10[0x35] = lVar35;
            lVar35 = *(long *)(lVar11 + 0x178);
            uVar32 = *(undefined4 *)(lVar11 + 0x180);
            *(undefined4 *)((long)plVar10 + 0x174) = uVar38;
            uVar38 = *(undefined4 *)(lVar11 + 0x138);
            plVar10[0x2f] = lVar35;
            uVar31 = *(undefined4 *)(lVar11 + 0x184);
            *(undefined4 *)(plVar10 + 0x30) = uVar32;
            uVar32 = *(undefined4 *)(lVar11 + 0x134);
            *(undefined4 *)((long)plVar10 + 0x184) = uVar31;
            lVar35 = *(long *)(lVar11 + 0x110);
            *(undefined4 *)((long)plVar10 + 0x134) = uVar32;
            plVar10[0x22] = lVar35;
            uVar32 = *(undefined4 *)(lVar11 + 0xc4);
            *(undefined4 *)(plVar10 + 0x27) = uVar38;
            *(undefined4 *)((long)plVar10 + 0xc4) = uVar32;
            *(undefined4 *)(plVar10 + 0x14) = uVar39;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(plVar10 + 2),(basic_string *)(lVar11 + 0x10));
            *(undefined4 *)(plVar10 + 5) = *(undefined4 *)(lVar11 + 0x28);
            return plVar10;
          }
          uVar20 = (long)iVar15 * 4;
          __s = (uint *)operator_new(uVar20);
          memset(__s,0,uVar20);
          puVar19 = __s + iVar15;
        }
        if (param_5 != 0) {
          fVar37 = 0.0;
          uVar22 = (long)puVar19 + (-4 - (long)__s);
          uVar21 = 0;
          uVar20 = (uVar22 >> 2) + 1;
          uVar23 = uVar20 & 0x7ffffffffffffff8;
          do {
            lVar12 = uVar21 * 2;
            iVar17 = *param_1;
            pfVar2 = (float *)(param_2 + (ulong)*(ushort *)(param_4 + 2 + lVar12) * 8);
            pfVar3 = (float *)(param_2 + (ulong)*(ushort *)(param_4 + lVar12) * 8);
            pfVar4 = (float *)(param_2 + (ulong)*(ushort *)(param_4 + 4 + lVar12) * 8);
            iVar15 = param_1[2];
            fVar65 = pfVar3[1] - fVar90;
            uVar41 = SUB41(fVar65,0);
            uVar43 = (undefined1)((uint)fVar65 >> 8);
            uVar45 = (undefined1)((uint)fVar65 >> 0x10);
            uVar47 = (undefined1)((uint)fVar65 >> 0x18);
            fVar89 = *pfVar4;
            fVar91 = pfVar4[1];
            fVar88 = pfVar2[1] - fVar90;
            fVar84 = *pfVar2 - fVar30;
            fVar82 = (float)(param_1[3] - param_1[1]);
            fVar66 = *pfVar3 - fVar30;
            uVar27 = iVar15 - iVar17;
            uVar13 = (ulong)uVar27;
            if (fVar65 != fVar88) {
              if (fVar65 == fVar88 || fVar65 < fVar88 != (NAN(fVar65) || NAN(fVar88))) {
                iVar18 = 1;
                fVar83 = fVar66;
                fVar85 = fVar88;
                fVar92 = fVar84;
                fVar93 = fVar65;
              }
              else {
                iVar18 = -1;
                fVar83 = fVar84;
                fVar85 = fVar65;
                fVar92 = fVar66;
                fVar93 = fVar88;
              }
              if ((fVar93 < fVar82 != (NAN(fVar93) || NAN(fVar82))) && (0.0 < fVar85)) {
                fVar94 = 0.0;
                if (0.0 <= fVar93) {
                  fVar94 = fVar93;
                }
                fVar95 = fVar82;
                if (fVar85 == fVar82 || fVar85 < fVar82 != (NAN(fVar85) || NAN(fVar82))) {
                  fVar95 = fVar85;
                }
                iVar25 = (int)(fVar94 + 0.5);
                iVar24 = (int)(fVar95 + 0.5) - iVar25;
                if (iVar24 != 0 && iVar25 <= (int)(fVar95 + 0.5)) {
                  fVar85 = (fVar92 - fVar83) / (fVar85 - fVar93);
                  puVar14 = __s + (int)(uVar27 * iVar25);
                  fVar82 = (float)NEON_fmadd(fVar85,0.0 - fVar93,fVar83);
                  if (0.0 <= fVar93) {
                    fVar82 = fVar83;
                  }
                  fVar82 = (float)NEON_fmadd(fVar85,((float)iVar25 - fVar94) + 0.5,fVar82);
                  fVar82 = fVar82 + 0.5;
                  do {
                    fVar83 = fVar37;
                    if (0.0 <= fVar82) {
                      fVar83 = fVar82;
                    }
                    uVar26 = (uint)fVar83;
                    if ((int)uVar26 < (int)uVar27) {
                      uVar13 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar26 << 2;
                      *(int *)((long)puVar14 + uVar13) = *(int *)((long)puVar14 + uVar13) + iVar18;
                    }
                    fVar82 = fVar85 + fVar82;
                    iVar24 = iVar24 + -1;
                    puVar14 = puVar14 + ((long)iVar15 - (long)iVar17);
                  } while (iVar24 != 0);
                  fVar82 = (float)(param_1[3] - param_1[1]);
                  uVar13 = (ulong)(uint)(param_1[2] - *param_1);
                }
              }
            }
            fVar91 = fVar91 - fVar90;
            fVar89 = fVar89 - fVar30;
            if (fVar88 != fVar91) {
              if (fVar88 == fVar91 || fVar88 < fVar91 != (NAN(fVar88) || NAN(fVar91))) {
                iVar15 = 1;
                fVar83 = fVar89;
                fVar85 = fVar91;
              }
              else {
                iVar15 = -1;
                fVar83 = fVar84;
                fVar84 = fVar89;
                fVar85 = fVar88;
                fVar88 = fVar91;
              }
              if ((fVar88 < fVar82 != (NAN(fVar88) || NAN(fVar82))) && (0.0 < fVar85)) {
                fVar92 = fVar37;
                if (0.0 <= fVar88) {
                  fVar92 = fVar88;
                }
                fVar93 = fVar82;
                if (fVar85 == fVar82 || fVar85 < fVar82 != (NAN(fVar85) || NAN(fVar82))) {
                  fVar93 = fVar85;
                }
                iVar18 = (int)(fVar92 + 0.5);
                iVar17 = (int)(fVar93 + 0.5) - iVar18;
                if (iVar17 != 0 && iVar18 <= (int)(fVar93 + 0.5)) {
                  fVar83 = (fVar83 - fVar84) / (fVar85 - fVar88);
                  puVar14 = __s + (int)uVar13 * iVar18;
                  fVar82 = (float)NEON_fmadd(fVar83,0.0 - fVar88,fVar84);
                  if (0.0 <= fVar88) {
                    fVar82 = fVar84;
                  }
                  fVar82 = (float)NEON_fmadd(fVar83,((float)iVar18 - fVar92) + 0.5,fVar82);
                  fVar82 = fVar82 + 0.5;
                  do {
                    fVar84 = 0.0;
                    if (0.0 <= fVar82) {
                      fVar84 = fVar82;
                    }
                    uVar27 = (uint)fVar84;
                    if ((int)uVar27 < (int)uVar13) {
                      uVar28 = -(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar27 << 2;
                      *(int *)((long)puVar14 + uVar28) = *(int *)((long)puVar14 + uVar28) + iVar15;
                    }
                    fVar82 = fVar83 + fVar82;
                    iVar17 = iVar17 + -1;
                    puVar14 = (uint *)((long)puVar14 +
                                      (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
                  } while (iVar17 != 0);
                  fVar82 = (float)(param_1[3] - param_1[1]);
                  uVar13 = (ulong)(uint)(param_1[2] - *param_1);
                }
              }
            }
            if (fVar91 != fVar65) {
              if (fVar91 == fVar65 || fVar91 < fVar65 != (NAN(fVar91) || NAN(fVar65))) {
                iVar15 = 1;
                fVar84 = fVar89;
              }
              else {
                iVar15 = -1;
                uVar41 = SUB41(fVar91,0);
                uVar43 = (undefined1)((uint)fVar91 >> 8);
                uVar45 = (undefined1)((uint)fVar91 >> 0x10);
                uVar47 = (undefined1)((uint)fVar91 >> 0x18);
                fVar84 = fVar66;
                fVar91 = fVar65;
                fVar66 = fVar89;
              }
              if ((fVar91 < fVar82 != (NAN(fVar91) || NAN(fVar82))) &&
                 (NAN((float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) ||
                  0.0 <= (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) &&
                  (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) != 0.0)) {
                fVar65 = fVar37;
                if (0.0 <= fVar91) {
                  fVar65 = fVar91;
                }
                if ((float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) == fVar82 ||
                    (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) < fVar82 !=
                    (NAN((float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) ||
                    NAN(fVar82))) {
                  fVar82 = (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)));
                }
                iVar18 = (int)(fVar65 + 0.5);
                iVar17 = (int)(fVar82 + 0.5) - iVar18;
                if (iVar17 != 0 && iVar18 <= (int)(fVar82 + 0.5)) {
                  fVar82 = (fVar66 - fVar84) /
                           ((float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) -
                           fVar91);
                  puVar14 = __s + (int)uVar13 * iVar18;
                  fVar88 = (float)NEON_fmadd(fVar82,0.0 - fVar91,fVar84);
                  if (0.0 <= fVar91) {
                    fVar88 = fVar84;
                  }
                  fVar65 = (float)NEON_fmadd(fVar82,((float)iVar18 - fVar65) + 0.5,fVar88);
                  fVar65 = fVar65 + 0.5;
                  do {
                    fVar84 = 0.0;
                    if (0.0 <= fVar65) {
                      fVar84 = fVar65;
                    }
                    uVar27 = (uint)fVar84;
                    if ((int)uVar27 < (int)uVar13) {
                      uVar28 = -(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar27 << 2;
                      *(int *)((long)puVar14 + uVar28) = *(int *)((long)puVar14 + uVar28) + iVar15;
                    }
                    fVar65 = fVar82 + fVar65;
                    iVar17 = iVar17 + -1;
                    puVar14 = (uint *)((long)puVar14 +
                                      (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
                  } while (iVar17 != 0);
                }
              }
            }
            if (__s != puVar19) {
              if (uVar22 < 0x1c) {
                uVar27 = 0;
                puVar14 = __s;
LAB_004a55c8:
                do {
                  puVar16 = puVar14 + 1;
                  uVar27 = *puVar14 | uVar27;
                  puVar14 = puVar16;
                } while (puVar16 != puVar19);
              }
              else {
                bVar42 = 0;
                bVar44 = 0;
                bVar46 = 0;
                bVar48 = 0;
                bVar49 = 0;
                bVar50 = 0;
                bVar51 = 0;
                bVar52 = 0;
                bVar53 = 0;
                bVar54 = 0;
                bVar55 = 0;
                bVar56 = 0;
                bVar57 = 0;
                bVar59 = 0;
                bVar61 = 0;
                bVar63 = 0;
                bVar64 = 0;
                bVar67 = 0;
                bVar68 = 0;
                bVar69 = 0;
                bVar70 = 0;
                bVar71 = 0;
                bVar72 = 0;
                bVar73 = 0;
                bVar74 = 0;
                bVar75 = 0;
                bVar76 = 0;
                bVar77 = 0;
                bVar78 = 0;
                bVar79 = 0;
                bVar80 = 0;
                bVar81 = 0;
                puVar14 = __s + 4;
                uVar13 = uVar23;
                do {
                  uVar34 = *(undefined8 *)(puVar14 + -2);
                  uVar33 = *(undefined8 *)(puVar14 + -4);
                  uVar87 = *(undefined8 *)(puVar14 + 2);
                  uVar86 = *(undefined8 *)puVar14;
                  uVar13 = uVar13 - 8;
                  puVar14 = puVar14 + 8;
                  bVar42 = (byte)uVar33 | bVar42;
                  bVar44 = (byte)((ulong)uVar33 >> 8) | bVar44;
                  bVar46 = (byte)((ulong)uVar33 >> 0x10) | bVar46;
                  bVar48 = (byte)((ulong)uVar33 >> 0x18) | bVar48;
                  bVar49 = (byte)((ulong)uVar33 >> 0x20) | bVar49;
                  bVar50 = (byte)((ulong)uVar33 >> 0x28) | bVar50;
                  bVar51 = (byte)((ulong)uVar33 >> 0x30) | bVar51;
                  bVar52 = (byte)((ulong)uVar33 >> 0x38) | bVar52;
                  bVar53 = (byte)uVar34 | bVar53;
                  bVar54 = (byte)((ulong)uVar34 >> 8) | bVar54;
                  bVar55 = (byte)((ulong)uVar34 >> 0x10) | bVar55;
                  bVar56 = (byte)((ulong)uVar34 >> 0x18) | bVar56;
                  bVar57 = (byte)((ulong)uVar34 >> 0x20) | bVar57;
                  bVar59 = (byte)((ulong)uVar34 >> 0x28) | bVar59;
                  bVar61 = (byte)((ulong)uVar34 >> 0x30) | bVar61;
                  bVar63 = (byte)((ulong)uVar34 >> 0x38) | bVar63;
                  bVar64 = (byte)uVar86 | bVar64;
                  bVar67 = (byte)((ulong)uVar86 >> 8) | bVar67;
                  bVar68 = (byte)((ulong)uVar86 >> 0x10) | bVar68;
                  bVar69 = (byte)((ulong)uVar86 >> 0x18) | bVar69;
                  bVar70 = (byte)((ulong)uVar86 >> 0x20) | bVar70;
                  bVar71 = (byte)((ulong)uVar86 >> 0x28) | bVar71;
                  bVar72 = (byte)((ulong)uVar86 >> 0x30) | bVar72;
                  bVar73 = (byte)((ulong)uVar86 >> 0x38) | bVar73;
                  bVar74 = (byte)uVar87 | bVar74;
                  bVar75 = (byte)((ulong)uVar87 >> 8) | bVar75;
                  bVar76 = (byte)((ulong)uVar87 >> 0x10) | bVar76;
                  bVar77 = (byte)((ulong)uVar87 >> 0x18) | bVar77;
                  bVar78 = (byte)((ulong)uVar87 >> 0x20) | bVar78;
                  bVar79 = (byte)((ulong)uVar87 >> 0x28) | bVar79;
                  bVar80 = (byte)((ulong)uVar87 >> 0x30) | bVar80;
                  bVar81 = (byte)((ulong)uVar87 >> 0x38) | bVar81;
                } while (uVar13 != 0);
                bVar64 = bVar64 | bVar42;
                bVar67 = bVar67 | bVar44;
                bVar68 = bVar68 | bVar46;
                bVar69 = bVar69 | bVar48;
                bVar70 = bVar70 | bVar49;
                bVar71 = bVar71 | bVar50;
                bVar72 = bVar72 | bVar51;
                bVar73 = bVar73 | bVar52;
                auVar36[1] = bVar67;
                auVar36[0] = bVar64;
                auVar36[2] = bVar68;
                auVar36[3] = bVar69;
                auVar36[4] = bVar70;
                auVar36[5] = bVar71;
                auVar36[6] = bVar72;
                auVar36[7] = bVar73;
                auVar36[8] = bVar74 | bVar53;
                auVar36[9] = bVar75 | bVar54;
                auVar36[10] = bVar76 | bVar55;
                auVar36[0xb] = bVar77 | bVar56;
                auVar36[0xc] = bVar78 | bVar57;
                auVar36[0xd] = bVar79 | bVar59;
                auVar36[0xe] = bVar80 | bVar61;
                auVar36[0xf] = bVar81 | bVar63;
                auVar40[1] = bVar67;
                auVar40[0] = bVar64;
                auVar40[2] = bVar68;
                auVar40[3] = bVar69;
                auVar40[4] = bVar70;
                auVar40[5] = bVar71;
                auVar40[6] = bVar72;
                auVar40[7] = bVar73;
                auVar40[8] = bVar74 | bVar53;
                auVar40[9] = bVar75 | bVar54;
                auVar40[10] = bVar76 | bVar55;
                auVar40[0xb] = bVar77 | bVar56;
                auVar40[0xc] = bVar78 | bVar57;
                auVar40[0xd] = bVar79 | bVar59;
                auVar40[0xe] = bVar80 | bVar61;
                auVar40[0xf] = bVar81 | bVar63;
                auVar36 = NEON_ext(auVar36,auVar40,8,1);
                uVar27 = CONCAT13(bVar69 | auVar36[3],
                                  CONCAT12(bVar68 | auVar36[2],
                                           CONCAT11(bVar67 | auVar36[1],bVar64 | auVar36[0])));
                uVar27 = uVar27 | (uint)(CONCAT17(bVar73 | auVar36[7],
                                                  CONCAT16(bVar72 | auVar36[6],
                                                           CONCAT15(bVar71 | auVar36[5],
                                                                    CONCAT14(bVar70 | auVar36[4],
                                                                             uVar27)))) >> 0x20);
                puVar14 = __s + uVar23;
                if (uVar20 != uVar23) goto LAB_004a55c8;
              }
              if (uVar27 != 0) {
                uVar27 = 1;
                goto LAB_004a586c;
              }
            }
            uVar21 = uVar21 + 3;
          } while (uVar21 < param_5);
        }
        uVar27 = 0;
LAB_004a586c:
        if (__s != (uint *)0x0) {
          operator_delete(__s);
        }
        plVar10 = (long *)(ulong)uVar27;
        goto LAB_004a5410;
      }
    }
  }
  plVar10 = (long *)0x0;
LAB_004a5410:
  if (*(long *)(lVar35 + 0x28) == local_68) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar10);
}


// ===== 004a5888  rive::ImageBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ImageBase::clone() const */

long * __thiscall rive::ImageBase::clone(ImageBase *this)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar3 = (long *)operator_new(0x1b8);
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
  plVar3[0x2d] = 0;
  plVar3[0x2c] = 0;
  plVar3[0x31] = 0;
  plVar3[0x30] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  lVar1 = _UNK_00281c00;
  lVar6 = _DAT_00281bf8;
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
  *(undefined8 *)((long)plVar3 + 0xb4) = 0;
  *(long *)((long)plVar3 + 0xac) = lVar1;
  *(long *)((long)plVar3 + 0xa4) = lVar6;
  plVar3[0x1b] = lVar1;
  plVar3[0x1a] = lVar6;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[0x25] = 0;
  plVar3[0x29] = 0;
  plVar3[0x28] = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2a] = 0;
  plVar3[0x2d] = 0;
  plVar3[0x2c] = 0;
  plVar3[0x2f] = 0;
  plVar3[0x2e] = 0;
  plVar3[0x24] = lVar1;
  plVar3[0x23] = lVar6;
  puVar2 = PTR_vtable_0067d420;
  *(undefined1 *)(plVar3 + 0x2e) = 1;
  uVar7 = *(undefined4 *)(this + 0x188);
  plVar3[0x33] = 0;
  plVar3[0x34] = 0;
  *(undefined4 *)(plVar3 + 0x31) = uVar7;
  uVar9 = *(undefined8 *)(this + 0xbc);
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x19] = (long)(puVar2 + 0x2a8);
  lVar1 = _UNK_0024e528;
  lVar6 = _DAT_0024e520;
  plVar3[0x32] = (long)(puVar2 + 0x2d0);
  uVar7 = *(undefined4 *)(this + 0x174);
  *(undefined8 *)((long)plVar3 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  plVar3[0x36] = lVar1;
  plVar3[0x35] = lVar6;
  lVar6 = *(long *)(this + 0x178);
  uVar5 = *(undefined4 *)(this + 0x180);
  *(undefined4 *)((long)plVar3 + 0x174) = uVar7;
  uVar7 = *(undefined4 *)(this + 0x138);
  plVar3[0x2f] = lVar6;
  uVar4 = *(undefined4 *)(this + 0x184);
  *(undefined4 *)(plVar3 + 0x30) = uVar5;
  uVar5 = *(undefined4 *)(this + 0x134);
  *(undefined4 *)((long)plVar3 + 0x184) = uVar4;
  lVar6 = *(long *)(this + 0x110);
  *(undefined4 *)((long)plVar3 + 0x134) = uVar5;
  plVar3[0x22] = lVar6;
  uVar5 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(plVar3 + 0x27) = uVar7;
  *(undefined4 *)((long)plVar3 + 0xc4) = uVar5;
  *(undefined4 *)(plVar3 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004a59ec  FUN_004a59ec =====

void FUN_004a59ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a59f0);
  (*pcVar1)();
}


// ===== 004a59f0  rive::VertexListener::VertexListener =====

/* rive::VertexListener::VertexListener(rive::Vertex*, rive::rcp<rive::ViewModelInstance>,
   rive::Path*) */

void __thiscall
rive::VertexListener::VertexListener
          (VertexListener *this,undefined8 param_1,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_3;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(this + 8) = param_1;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    FUN_00340fb0(1,(long)plVar2 + 0xa4);
    *(undefined **)this = PTR_vtable_0067d7e0 + 0x10;
    *(undefined8 *)(this + 8) = param_1;
    FUN_00340fb0(1,(long)plVar2 + 0xa4);
    *(long **)(this + 0x10) = plVar2;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4);
    if (iVar1 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  *(undefined **)this = PTR_vtable_0067d708 + 0x10;
  *(undefined8 *)(this + 0x30) = param_4;
  createProperties(this);
  return;
}


// ===== 004a5aa0  rive::VertexListener::createProperties =====

/* rive::VertexListener::createProperties() */

void __thiscall rive::VertexListener::createProperties(VertexListener *this)

{
  (**(code **)(*(long *)this + 0x20))();
  createPropertyListener(this,1);
  createPropertyListener(this,2);
  createPropertyListener(this,7);
  createPropertyListener(this,8);
  createPropertyListener(this,9);
  createPropertyListener(this,10);
  createPropertyListener(this,0xb);
  createPropertyListener(this,0xc);
  createInPointPropertyListener(this);
  createOutPointPropertyListener(this);
  return;
}


// ===== 004a5b34  rive::VertexListener::createPropertyListener =====

/* rive::VertexListener::createPropertyListener(rive::SymbolType) */

void __thiscall rive::VertexListener::createPropertyListener(VertexListener *this,uint param_2)

{
  ulong uVar1;
  void *pvVar2;
  VertexPropertyListenerSingle *this_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ushort uVar12;
  long *plVar13;
  long lVar14;
  ViewModelInstanceValue *pVVar15;
  long *plVar16;
  long *plVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  
  fVar22 = 1.0;
  param_2 = param_2 & 0xff;
  uVar3 = (ulong)param_2;
  if (param_2 < 9) {
    if (param_2 < 7) {
      if (param_2 == 1) {
        uVar12 = 0x18;
      }
      else {
        if (param_2 != 2) {
          return;
        }
        uVar12 = 0x19;
        fVar22 = 1.0;
      }
      goto LAB_004a5c3c;
    }
    if (param_2 != 7) {
      if (param_2 != 8) {
        return;
      }
      uVar12 = 0x54;
LAB_004a5bf4:
      fVar22 = 0.017453292;
LAB_004a5c3c:
      uVar5 = *(ulong *)(*(long *)(this + 0x10) + 0xf8);
      if (uVar5 != 0) {
        uVar19 = NEON_cnt(uVar5,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        uVar4 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
        if (uVar4 < 2) {
          uVar7 = (ulong)((int)uVar5 - 1U & param_2);
        }
        else {
          uVar7 = uVar3;
          if (uVar5 <= uVar3) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar3 / uVar5;
            }
            uVar7 = uVar3 - uVar7 * uVar5;
          }
        }
        plVar8 = *(long **)(*(long *)(*(long *)(this + 0x10) + 0xf0) + uVar7 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          do {
            uVar9 = plVar8[1];
            if (uVar9 == uVar3) {
              if (*(byte *)(plVar8 + 2) == param_2) {
                pVVar15 = (ViewModelInstanceValue *)plVar8[3];
                if (pVVar15 == (ViewModelInstanceValue *)0x0) {
                  return;
                }
                uVar3 = (**(code **)(*(long *)pVVar15 + 0x18))(pVVar15,0x1ba);
                if ((uVar3 & 1) == 0) {
                  return;
                }
                this_00 = (VertexPropertyListenerSingle *)operator_new(0x28);
                VertexPropertyListenerSingle::VertexPropertyListenerSingle
                          (this_00,*(Core **)(this + 8),this,pVVar15,uVar12,fVar22);
                goto LAB_004a5c10;
              }
            }
            else {
              if (uVar4 < 2) {
                uVar9 = uVar9 & uVar5 - 1;
              }
              else if (uVar5 <= uVar9) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar9 / uVar5;
                }
                uVar9 = uVar9 - uVar1 * uVar5;
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
    this_00 = (VertexPropertyListenerSingle *)createRotationPropertyListener(this);
  }
  else {
    if (10 < param_2) {
      if (param_2 == 0xb) {
        uVar12 = 0x55;
      }
      else {
        if (param_2 != 0xc) {
          return;
        }
        uVar12 = 0x57;
      }
      goto LAB_004a5c3c;
    }
    if (param_2 == 9) {
      uVar12 = 0x56;
      goto LAB_004a5bf4;
    }
    if (param_2 != 10) {
      return;
    }
    this_00 = (VertexPropertyListenerSingle *)createDistancePropertyListener(this);
  }
  if (this_00 == (VertexPropertyListenerSingle *)0x0) {
    return;
  }
LAB_004a5c10:
  (**(code **)(*(long *)this_00 + 0x20))(this_00);
  plVar8 = *(long **)(this + 0x20);
  if (plVar8 < *(long **)(this + 0x28)) {
    plVar16 = plVar8 + 1;
    *plVar8 = (long)this_00;
    goto LAB_004a5e34;
  }
  plVar13 = *(long **)(this + 0x18);
  lVar14 = (long)plVar8 - (long)plVar13 >> 3;
  uVar3 = lVar14 + 1;
  if (uVar3 >> 0x3d != 0) {
    FUN_004a64d8();
LAB_004a5e58:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = (long)*(long **)(this + 0x28) - (long)plVar13;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar3) {
    uVar5 = uVar3;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_004a5e58;
    pvVar2 = operator_new(uVar5 << 3);
  }
  plVar6 = (long *)((long)pvVar2 + lVar14 * 8);
  plVar16 = plVar6 + 1;
  *plVar6 = (long)this_00;
  if ((long)plVar8 - (long)plVar13 != 0) {
    uVar3 = ((long)plVar8 - (long)plVar13) - 8;
    plVar17 = plVar8;
    if ((0x37 < uVar3) &&
       (0x1f < (ulong)((long)plVar8 + (-((long)plVar8 - (long)plVar13) - (long)pvVar2)))) {
      plVar10 = plVar6 + -2;
      plVar11 = plVar8 + -2;
      uVar3 = (uVar3 >> 3) + 1;
      uVar7 = uVar3 & 0x3ffffffffffffffc;
      plVar17 = plVar8 + -uVar7;
      uVar4 = uVar7;
      do {
        plVar8 = plVar11 + -1;
        lVar21 = plVar11[-2];
        lVar20 = plVar11[1];
        lVar14 = *plVar11;
        uVar4 = uVar4 - 4;
        plVar11 = plVar11 + -4;
        plVar10[-1] = *plVar8;
        plVar10[-2] = lVar21;
        plVar10[1] = lVar20;
        *plVar10 = lVar14;
        plVar10 = plVar10 + -4;
      } while (uVar4 != 0);
      plVar6 = plVar6 + -uVar7;
      plVar8 = plVar13;
      if (uVar3 == uVar7) goto LAB_004a5e20;
    }
    do {
      plVar17 = plVar17 + -1;
      plVar6 = plVar6 + -1;
      *plVar6 = *plVar17;
    } while (plVar17 != plVar13);
    plVar8 = *(long **)(this + 0x18);
  }
LAB_004a5e20:
  *(long **)(this + 0x18) = plVar6;
  *(long **)(this + 0x20) = plVar16;
  *(void **)(this + 0x28) = (void *)((long)pvVar2 + uVar5 * 8);
  if (plVar8 != (long *)0x0) {
    operator_delete(plVar8);
  }
LAB_004a5e34:
  *(long **)(this + 0x20) = plVar16;
  return;
}


// ===== 004a5e5c  rive::VertexListener::createInPointPropertyListener =====

/* rive::VertexListener::createInPointPropertyListener() */

void __thiscall rive::VertexListener::createInPointPropertyListener(VertexListener *this)

{
  ulong uVar1;
  VertexPropertyListenerPoint *this_00;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ViewModelInstanceValue *pVVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ViewModelInstanceValue *pVVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar4 = *(long *)(this + 0x10);
  uVar3 = *(ulong *)(lVar4 + 0xf8);
  if (uVar3 == 0) {
    return;
  }
  uVar19 = NEON_cnt(uVar3,1);
  uVar18 = NEON_uaddlv(uVar19,1);
  uVar6 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
  if (uVar6 < 2) {
    uVar7 = (ulong)((int)uVar3 - 1) & 3;
  }
  else {
    uVar7 = 3;
    if (uVar3 < 4) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = 3 / uVar3;
      }
      uVar7 = 3 - uVar7 * uVar3;
    }
  }
  plVar8 = *(long **)(*(long *)(lVar4 + 0xf0) + uVar7 * 8);
  if ((plVar8 == (long *)0x0) || (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0)) {
    pVVar12 = (ViewModelInstanceValue *)0x0;
LAB_004a5f30:
    uVar19 = NEON_cnt(uVar3,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar6 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((int)uVar3 - 1) & 4;
    }
    else {
      uVar7 = 4;
      if (uVar3 < 5) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = 4 / uVar3;
        }
        uVar7 = 4 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar4 + 0xf0) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 4) {
          if ((char)plVar8[2] == '\x04') {
            pVVar15 = (ViewModelInstanceValue *)plVar8[3];
            goto joined_r0x004a6188;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar3 - 1;
          }
          else if (uVar3 <= uVar9) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar9 / uVar3;
            }
            uVar9 = uVar9 - uVar1 * uVar3;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  else {
    do {
      uVar9 = plVar8[1];
      if (uVar9 == 3) {
        if ((char)plVar8[2] == '\x03') {
          pVVar12 = (ViewModelInstanceValue *)plVar8[3];
          goto joined_r0x004a5fd4;
        }
      }
      else {
        if (uVar6 < 2) {
          uVar9 = uVar9 & uVar3 - 1;
        }
        else if (uVar3 <= uVar9) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar9 / uVar3;
          }
          uVar9 = uVar9 - uVar1 * uVar3;
        }
        if (uVar9 != uVar7) break;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
    pVVar12 = (ViewModelInstanceValue *)0x0;
joined_r0x004a5fd4:
    if (uVar3 != 0) goto LAB_004a5f30;
  }
  pVVar15 = (ViewModelInstanceValue *)0x0;
joined_r0x004a6188:
  if ((pVVar12 == (ViewModelInstanceValue *)0x0) ||
     (uVar3 = (**(code **)(*(long *)pVVar12 + 0x18))(pVVar12,0x1ba), (uVar3 & 1) == 0)) {
    if (pVVar15 == (ViewModelInstanceValue *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*(long *)pVVar15 + 0x18))(pVVar15,0x1ba);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  this_00 = (VertexPropertyListenerPoint *)operator_new(0x30);
  VertexPropertyListenerPoint::VertexPropertyListenerPoint
            (this_00,*(Core **)(this + 8),this,pVVar12,pVVar15,0x55,0x54);
  (**(code **)(*(long *)this_00 + 0x20))(this_00);
  puVar14 = *(undefined8 **)(this + 0x20);
  if (puVar14 < *(undefined8 **)(this + 0x28)) {
    puVar16 = puVar14 + 1;
    *puVar14 = this_00;
    goto LAB_004a6168;
  }
  puVar13 = *(undefined8 **)(this + 0x18);
  lVar4 = (long)puVar14 - (long)puVar13 >> 3;
  uVar3 = lVar4 + 1;
  if (uVar3 >> 0x3d != 0) {
    FUN_004a64d8();
LAB_004a6194:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar7 = (long)*(undefined8 **)(this + 0x28) - (long)puVar13;
  uVar6 = (long)uVar7 >> 2;
  if (uVar6 <= uVar3) {
    uVar6 = uVar3;
  }
  if (0x7ffffffffffffff7 < uVar7) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_004a6194;
    pvVar2 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar2 + lVar4 * 8);
  puVar16 = puVar5 + 1;
  *puVar5 = this_00;
  if ((long)puVar14 - (long)puVar13 != 0) {
    uVar3 = ((long)puVar14 - (long)puVar13) - 8;
    puVar17 = puVar14;
    if ((0x37 < uVar3) &&
       (0x1f < (ulong)((long)puVar14 + (-((long)puVar14 - (long)puVar13) - (long)pvVar2)))) {
      puVar10 = puVar5 + -2;
      puVar11 = puVar14 + -2;
      uVar3 = (uVar3 >> 3) + 1;
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      puVar17 = puVar14 + -uVar9;
      uVar7 = uVar9;
      do {
        puVar14 = puVar11 + -1;
        uVar21 = puVar11[-2];
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        uVar7 = uVar7 - 4;
        puVar11 = puVar11 + -4;
        puVar10[-1] = *puVar14;
        puVar10[-2] = uVar21;
        puVar10[1] = uVar20;
        *puVar10 = uVar19;
        puVar10 = puVar10 + -4;
      } while (uVar7 != 0);
      puVar5 = puVar5 + -uVar9;
      puVar14 = puVar13;
      if (uVar3 == uVar9) goto LAB_004a6154;
    }
    do {
      puVar17 = puVar17 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar17;
    } while (puVar17 != puVar13);
    puVar14 = *(undefined8 **)(this + 0x18);
  }
LAB_004a6154:
  *(undefined8 **)(this + 0x18) = puVar5;
  *(undefined8 **)(this + 0x20) = puVar16;
  *(void **)(this + 0x28) = (void *)((long)pvVar2 + uVar6 * 8);
  if (puVar14 != (undefined8 *)0x0) {
    operator_delete(puVar14);
  }
LAB_004a6168:
  *(undefined8 **)(this + 0x20) = puVar16;
  return;
}


// ===== 004a6198  rive::VertexListener::createOutPointPropertyListener =====

/* rive::VertexListener::createOutPointPropertyListener() */

void __thiscall rive::VertexListener::createOutPointPropertyListener(VertexListener *this)

{
  ulong uVar1;
  VertexPropertyListenerPoint *this_00;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ViewModelInstanceValue *pVVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ViewModelInstanceValue *pVVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar4 = *(long *)(this + 0x10);
  uVar3 = *(ulong *)(lVar4 + 0xf8);
  if (uVar3 == 0) {
    return;
  }
  uVar19 = NEON_cnt(uVar3,1);
  uVar18 = NEON_uaddlv(uVar19,1);
  uVar6 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
  if (uVar6 < 2) {
    uVar7 = (ulong)((int)uVar3 - 1) & 5;
  }
  else {
    uVar7 = 5;
    if (uVar3 < 6) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = 5 / uVar3;
      }
      uVar7 = 5 - uVar7 * uVar3;
    }
  }
  plVar8 = *(long **)(*(long *)(lVar4 + 0xf0) + uVar7 * 8);
  if ((plVar8 == (long *)0x0) || (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0)) {
    pVVar12 = (ViewModelInstanceValue *)0x0;
LAB_004a6270:
    uVar19 = NEON_cnt(uVar3,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar6 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((int)uVar3 - 1) & 6;
    }
    else {
      uVar7 = 6;
      if (uVar3 < 7) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = 6 / uVar3;
        }
        uVar7 = 6 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar4 + 0xf0) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 6) {
          if ((char)plVar8[2] == '\x06') {
            pVVar15 = (ViewModelInstanceValue *)plVar8[3];
            goto joined_r0x004a64c8;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar3 - 1;
          }
          else if (uVar3 <= uVar9) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar9 / uVar3;
            }
            uVar9 = uVar9 - uVar1 * uVar3;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  else {
    do {
      uVar9 = plVar8[1];
      if (uVar9 == 5) {
        if ((char)plVar8[2] == '\x05') {
          pVVar12 = (ViewModelInstanceValue *)plVar8[3];
          goto joined_r0x004a6314;
        }
      }
      else {
        if (uVar6 < 2) {
          uVar9 = uVar9 & uVar3 - 1;
        }
        else if (uVar3 <= uVar9) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar9 / uVar3;
          }
          uVar9 = uVar9 - uVar1 * uVar3;
        }
        if (uVar9 != uVar7) break;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
    pVVar12 = (ViewModelInstanceValue *)0x0;
joined_r0x004a6314:
    if (uVar3 != 0) goto LAB_004a6270;
  }
  pVVar15 = (ViewModelInstanceValue *)0x0;
joined_r0x004a64c8:
  if ((pVVar12 == (ViewModelInstanceValue *)0x0) ||
     (uVar3 = (**(code **)(*(long *)pVVar12 + 0x18))(pVVar12,0x1ba), (uVar3 & 1) == 0)) {
    if (pVVar15 == (ViewModelInstanceValue *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*(long *)pVVar15 + 0x18))(pVVar15,0x1ba);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  this_00 = (VertexPropertyListenerPoint *)operator_new(0x30);
  VertexPropertyListenerPoint::VertexPropertyListenerPoint
            (this_00,*(Core **)(this + 8),this,pVVar12,pVVar15,0x57,0x56);
  (**(code **)(*(long *)this_00 + 0x20))(this_00);
  puVar14 = *(undefined8 **)(this + 0x20);
  if (puVar14 < *(undefined8 **)(this + 0x28)) {
    puVar16 = puVar14 + 1;
    *puVar14 = this_00;
    goto LAB_004a64a8;
  }
  puVar13 = *(undefined8 **)(this + 0x18);
  lVar4 = (long)puVar14 - (long)puVar13 >> 3;
  uVar3 = lVar4 + 1;
  if (uVar3 >> 0x3d != 0) {
    FUN_004a64d8();
LAB_004a64d4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar7 = (long)*(undefined8 **)(this + 0x28) - (long)puVar13;
  uVar6 = (long)uVar7 >> 2;
  if (uVar6 <= uVar3) {
    uVar6 = uVar3;
  }
  if (0x7ffffffffffffff7 < uVar7) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_004a64d4;
    pvVar2 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar2 + lVar4 * 8);
  puVar16 = puVar5 + 1;
  *puVar5 = this_00;
  if ((long)puVar14 - (long)puVar13 != 0) {
    uVar3 = ((long)puVar14 - (long)puVar13) - 8;
    puVar17 = puVar14;
    if ((0x37 < uVar3) &&
       (0x1f < (ulong)((long)puVar14 + (-((long)puVar14 - (long)puVar13) - (long)pvVar2)))) {
      puVar10 = puVar5 + -2;
      puVar11 = puVar14 + -2;
      uVar3 = (uVar3 >> 3) + 1;
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      puVar17 = puVar14 + -uVar9;
      uVar7 = uVar9;
      do {
        puVar14 = puVar11 + -1;
        uVar21 = puVar11[-2];
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        uVar7 = uVar7 - 4;
        puVar11 = puVar11 + -4;
        puVar10[-1] = *puVar14;
        puVar10[-2] = uVar21;
        puVar10[1] = uVar20;
        *puVar10 = uVar19;
        puVar10 = puVar10 + -4;
      } while (uVar7 != 0);
      puVar5 = puVar5 + -uVar9;
      puVar14 = puVar13;
      if (uVar3 == uVar9) goto LAB_004a6494;
    }
    do {
      puVar17 = puVar17 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar17;
    } while (puVar17 != puVar13);
    puVar14 = *(undefined8 **)(this + 0x18);
  }
LAB_004a6494:
  *(undefined8 **)(this + 0x18) = puVar5;
  *(undefined8 **)(this + 0x20) = puVar16;
  *(void **)(this + 0x28) = (void *)((long)pvVar2 + uVar6 * 8);
  if (puVar14 != (undefined8 *)0x0) {
    operator_delete(puVar14);
  }
LAB_004a64a8:
  *(undefined8 **)(this + 0x20) = puVar16;
  return;
}


// ===== 004a64d8  FUN_004a64d8 =====

void FUN_004a64d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004a64ec  rive::VertexPropertyListenerPoint::VertexPropertyListenerPoint =====

/* rive::VertexPropertyListenerPoint::VertexPropertyListenerPoint(rive::Core*,
   rive::VertexListener*, rive::ViewModelInstanceValue*, rive::ViewModelInstanceValue*, unsigned
   short, unsigned short) */

void __thiscall
rive::VertexPropertyListenerPoint::VertexPropertyListenerPoint
          (VertexPropertyListenerPoint *this,Core *param_1,VertexListener *param_2,
          ViewModelInstanceValue *param_3,ViewModelInstanceValue *param_4,ushort param_5,
          ushort param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d7d8;
  *(VertexListener **)(this + 0x10) = param_2;
  *(ViewModelInstanceValue **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(Core **)(this + 8) = param_1;
  if (param_3 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_3,(ViewModelValueDependent *)this);
  }
  puVar1 = PTR_vtable_0067d720;
  *(ViewModelInstanceValue **)(this + 0x20) = param_4;
  *(ushort *)(this + 0x28) = param_5;
  *(ushort *)(this + 0x2a) = param_6;
  *(undefined **)this = puVar1 + 0x10;
  if (param_4 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_4,(ViewModelValueDependent *)this);
    return;
  }
  return;
}


// ===== 004a6578  FUN_004a6578 =====

void FUN_004a6578(void)

{
  return;
}


// ===== 004a657c  rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint =====

/* rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint() */

void __thiscall
rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint(VertexPropertyListenerPoint *this)

{
  ~VertexPropertyListenerPoint(this);
  operator_delete(this);
  return;
}


// ===== 004a65a0  rive::VertexPropertyListenerPoint::writeValue =====

/* rive::VertexPropertyListenerPoint::writeValue() */

void __thiscall rive::VertexPropertyListenerPoint::writeValue(VertexPropertyListenerPoint *this)

{
  float fVar1;
  float __x;
  float fVar2;
  
  fVar1 = 0.0;
  __x = 0.0;
  if (*(long *)(this + 0x18) != 0) {
    __x = *(float *)(*(long *)(this + 0x18) + 0x110);
  }
  if (*(long *)(this + 0x20) != 0) {
    fVar1 = *(float *)(*(long *)(this + 0x20) + 0x110);
  }
  fVar2 = (float)NEON_fmadd(__x,__x,fVar1 * fVar1);
  fVar1 = atan2f(fVar1,__x);
  FUN_003575a8(SQRT(fVar2),*(undefined8 *)(this + 8),*(undefined2 *)(this + 0x28));
  FUN_003575a8(fVar1,*(undefined8 *)(this + 8),*(undefined2 *)(this + 0x2a));
  return;
}


// ===== 004a6614  rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint =====

/* WARNING: Removing unreachable block (ram,0x004a66c4) */
/* WARNING: Removing unreachable block (ram,0x004a6780) */
/* rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint() */

void __thiscall
rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint(VertexPropertyListenerPoint *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x20);
  *(undefined **)this = PTR_vtable_0067d720 + 0x10;
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 0xf0);
    puVar4 = *(undefined8 **)(lVar5 + 0xe8);
    puVar2 = puVar4;
    for (; (puVar4 != puVar1 && (puVar2 = puVar4, (VertexPropertyListenerPoint *)*puVar4 != this));
        puVar4 = puVar4 + 1) {
      puVar2 = puVar1;
    }
    if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
      do {
        puVar2 = puVar3;
        if ((VertexPropertyListenerPoint *)*puVar4 != this) {
          puVar2 = puVar3 + 1;
          *puVar3 = (VertexPropertyListenerPoint *)*puVar4;
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
  lVar5 = *(long *)(this + 0x18);
  *(undefined **)this = PTR_vtable_0067d7d8 + 0x10;
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 0xf0);
    puVar4 = *(undefined8 **)(lVar5 + 0xe8);
    puVar2 = puVar4;
    for (; (puVar4 != puVar1 && (puVar2 = puVar4, (VertexPropertyListenerPoint *)*puVar4 != this));
        puVar4 = puVar4 + 1) {
      puVar2 = puVar1;
    }
    if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
      do {
        puVar2 = puVar3;
        if ((VertexPropertyListenerPoint *)*puVar4 != this) {
          puVar2 = puVar3 + 1;
          *puVar3 = (VertexPropertyListenerPoint *)*puVar4;
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


// ===== 004a67a4  rive::VertexListener::createDistancePropertyListener =====

/* rive::VertexListener::createDistancePropertyListener() */

void __thiscall rive::VertexListener::createDistancePropertyListener(VertexListener *this)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(*(long *)(this + 0x10) + 0xf8);
  if (uVar5 != 0) {
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((int)uVar5 - 1) & 10;
    }
    else {
      uVar7 = 10;
      if (uVar5 < 0xb) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = 10 / uVar5;
        }
        uVar7 = 10 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(*(long *)(this + 0x10) + 0xf0) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 10) {
          if ((char)plVar8[2] == '\n') {
            plVar8 = (long *)plVar8[3];
            if ((plVar8 != (long *)0x0) &&
               (uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,0x1ba), (uVar5 & 1) != 0)) {
              puVar3 = (undefined4 *)operator_new(4);
              *puVar3 = 0x570055;
              pvVar4 = operator_new(0x40);
              uVar11 = *(undefined8 *)(this + 8);
              local_70 = (undefined4 *)operator_new(4);
              local_68 = local_70 + 1;
              *local_70 = *puVar3;
              puStack_60 = local_68;
              VertexPropertyListenerMulti::VertexPropertyListenerMulti
                        ((VertexPropertyListenerMulti *)0x3f800000,pvVar4,uVar11,this,plVar8,
                         &local_70);
              if (local_70 != (undefined4 *)0x0) {
                local_68 = local_70;
                operator_delete(local_70);
              }
              operator_delete(puVar3);
              goto LAB_004a6924;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar1 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  pvVar4 = (void *)0x0;
LAB_004a6924:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar4);
  }
  return;
}


// ===== 004a6954  rive::VertexListener::createRotationPropertyListener =====

/* rive::VertexListener::createRotationPropertyListener() */

void __thiscall rive::VertexListener::createRotationPropertyListener(VertexListener *this)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(*(long *)(this + 0x10) + 0xf8);
  if (uVar5 != 0) {
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((int)uVar5 - 1) & 7;
    }
    else {
      uVar7 = 7;
      if (uVar5 < 8) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = 7 / uVar5;
        }
        uVar7 = 7 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(*(long *)(this + 0x10) + 0xf0) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 7) {
          if ((char)plVar8[2] == '\a') {
            plVar8 = (long *)plVar8[3];
            if ((plVar8 != (long *)0x0) &&
               (uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,0x1ba), (uVar5 & 1) != 0)) {
              puVar3 = (undefined4 *)operator_new(4);
              *puVar3 = 0x560054;
              pvVar4 = operator_new(0x40);
              uVar11 = *(undefined8 *)(this + 8);
              local_70 = (undefined4 *)operator_new(4);
              local_68 = local_70 + 1;
              *local_70 = *puVar3;
              puStack_60 = local_68;
              VertexPropertyListenerMulti::VertexPropertyListenerMulti
                        ((VertexPropertyListenerMulti *)0x3c8efa35,pvVar4,uVar11,this,plVar8,
                         &local_70);
              if (local_70 != (undefined4 *)0x0) {
                local_68 = local_70;
                operator_delete(local_70);
              }
              operator_delete(puVar3);
              goto LAB_004a6ad8;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar1 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  pvVar4 = (void *)0x0;
LAB_004a6ad8:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar4);
  }
  return;
}


// ===== 004a6b08  rive::VertexPropertyListenerMulti::VertexPropertyListenerMulti =====

/* WARNING: Removing unreachable block (ram,0x004a6ce8) */
/* rive::VertexPropertyListenerMulti::VertexPropertyListenerMulti(rive::Core*,
   rive::VertexListener*, rive::ViewModelInstanceValue*, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> >, float) */

void __thiscall
rive::VertexPropertyListenerMulti::VertexPropertyListenerMulti
          (undefined4 param_1_00,VertexPropertyListenerMulti *this,undefined8 param_1,
          undefined8 param_2,ViewModelInstanceValue *param_3,undefined8 *param_6)

{
  ulong uVar1;
  undefined *puVar2;
  void *__dest;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  pvVar3 = (void *)*param_6;
  uVar1 = param_6[1] - (long)pvVar3;
  if (uVar1 == 0) {
    __dest = (void *)0x0;
    lVar9 = 0;
  }
  else {
    if ((long)uVar1 < 0) goto LAB_004a6c14;
    __dest = operator_new(uVar1);
    lVar9 = (long)__dest + uVar1;
    memcpy(__dest,pvVar3,uVar1);
  }
  puVar2 = PTR_vtable_0067d7d8;
  *(undefined8 *)(this + 0x10) = param_2;
  *(ViewModelInstanceValue **)(this + 0x18) = param_3;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 8) = param_1;
  if (param_3 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_3,(ViewModelValueDependent *)this);
  }
  uVar1 = lVar9 - (long)__dest;
  *(undefined ***)this = &PTR_addDirt_006769b0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
LAB_004a6c14:
      plVar4 = (long *)FUN_00375898();
      pvVar3 = (void *)plVar4[4];
      *plVar4 = (long)&PTR_addDirt_006769b0;
      if (pvVar3 != (void *)0x0) {
        plVar4[5] = (long)pvVar3;
        operator_delete(pvVar3);
      }
      lVar9 = plVar4[3];
      *plVar4 = (long)(PTR_vtable_0067d7d8 + 0x10);
      if (lVar9 != 0) {
        puVar5 = *(undefined8 **)(lVar9 + 0xf0);
        puVar8 = *(undefined8 **)(lVar9 + 0xe8);
        puVar6 = puVar8;
        for (; (puVar8 != puVar5 && (puVar6 = puVar8, (long *)*puVar8 != plVar4));
            puVar8 = puVar8 + 1) {
          puVar6 = puVar5;
        }
        if ((puVar6 != puVar5) && (puVar8 = puVar6 + 1, puVar7 = puVar6, puVar8 != puVar5)) {
          do {
            puVar6 = puVar7;
            if ((long *)*puVar8 != plVar4) {
              puVar6 = puVar7 + 1;
              *puVar7 = (long *)*puVar8;
            }
            puVar8 = puVar8 + 1;
            puVar7 = puVar6;
          } while (puVar8 != puVar5);
          puVar5 = *(undefined8 **)(lVar9 + 0xf0);
        }
        if (puVar6 != puVar5) {
          *(undefined8 **)(lVar9 + 0xf0) = puVar6;
        }
      }
      return;
    }
    pvVar3 = operator_new(uVar1);
    *(void **)(this + 0x20) = pvVar3;
    *(ulong *)(this + 0x30) = (long)pvVar3 + uVar1;
    memcpy(pvVar3,__dest,uVar1);
    *(ulong *)(this + 0x28) = (long)pvVar3 + uVar1;
  }
  if (__dest != (void *)0x0) {
    operator_delete(__dest);
  }
  *(undefined **)this = PTR_vtable_0067d718 + 0x10;
  *(undefined4 *)(this + 0x38) = param_1_00;
  return;
}


// ===== 004a6c18  FUN_004a6c18 =====

/* WARNING: Removing unreachable block (ram,0x004a6ce8) */

void FUN_004a6c18(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  pvVar1 = (void *)param_1[4];
  *param_1 = (long)&PTR_addDirt_006769b0;
  if (pvVar1 != (void *)0x0) {
    param_1[5] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  lVar6 = param_1[3];
  *param_1 = (long)(PTR_vtable_0067d7d8 + 0x10);
  if (lVar6 != 0) {
    puVar2 = *(undefined8 **)(lVar6 + 0xf0);
    puVar5 = *(undefined8 **)(lVar6 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar6 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar6 + 0xf0) = puVar3;
    }
  }
  return;
}


// ===== 004a6d0c  FUN_004a6d0c =====

/* WARNING: Removing unreachable block (ram,0x004a6ddc) */

void FUN_004a6d0c(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  pvVar1 = (void *)param_1[4];
  *param_1 = (long)&PTR_addDirt_006769b0;
  if (pvVar1 != (void *)0x0) {
    param_1[5] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  lVar6 = param_1[3];
  *param_1 = (long)(PTR_vtable_0067d7d8 + 0x10);
  if (lVar6 != 0) {
    puVar2 = *(undefined8 **)(lVar6 + 0xf0);
    puVar5 = *(undefined8 **)(lVar6 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar6 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar6 + 0xf0) = puVar3;
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004a6e04  rive::VertexPropertyListenerMulti::writeValue =====

/* rive::VertexPropertyListenerMulti::writeValue() */

void __thiscall rive::VertexPropertyListenerMulti::writeValue(VertexPropertyListenerMulti *this)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = *(undefined2 **)(this + 0x28);
  for (puVar2 = *(undefined2 **)(this + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_003575a8(*(float *)(*(long *)(this + 0x18) + 0x110) * *(float *)(this + 0x38),
                 *(undefined8 *)(this + 8),*puVar2);
  }
  return;
}


// ===== 004a6e58  FUN_004a6e58 =====

void FUN_004a6e58(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a6e5c);
  (*pcVar1)();
}


// ===== 004a6e5c  rive::VertexPropertyListenerSingle::VertexPropertyListenerSingle =====

/* rive::VertexPropertyListenerSingle::VertexPropertyListenerSingle(rive::Core*,
   rive::VertexListener*, rive::ViewModelInstanceValue*, unsigned short, float) */

void __thiscall
rive::VertexPropertyListenerSingle::VertexPropertyListenerSingle
          (VertexPropertyListenerSingle *this,Core *param_1,VertexListener *param_2,
          ViewModelInstanceValue *param_3,ushort param_4,float param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d7d8;
  *(VertexListener **)(this + 0x10) = param_2;
  *(ViewModelInstanceValue **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(Core **)(this + 8) = param_1;
  if (param_3 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_3,(ViewModelValueDependent *)this);
  }
  puVar1 = PTR_vtable_0067d710;
  *(ushort *)(this + 0x20) = param_4;
  *(undefined **)this = puVar1 + 0x10;
  *(float *)(this + 0x24) = param_5;
  return;
}


// ===== 004a6ec4  FUN_004a6ec4 =====

/* WARNING: Removing unreachable block (ram,0x004a6f74) */

void FUN_004a6ec4(long *param_1)

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


// ===== 004a6fa0  rive::VertexPropertyListenerSingle::writeValue =====

/* rive::VertexPropertyListenerSingle::writeValue() */

void __thiscall rive::VertexPropertyListenerSingle::writeValue(VertexPropertyListenerSingle *this)

{
  FUN_003575a8(*(float *)(*(long *)(this + 0x18) + 0x110) * *(float *)(this + 0x24),
               *(undefined8 *)(this + 8),*(undefined2 *)(this + 0x20));
  return;
}


// ===== 004a6fc0  FUN_004a6fc0 =====

void FUN_004a6fc0(long *param_1)

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


// ===== 004a7050  FUN_004a7050 =====

void FUN_004a7050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004a7060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x1e0))(*(long **)(param_1 + 0x30),1);
  return;
}


// ===== 004a7064  rive::VertexListener::createSinglePropertyListener =====

/* rive::VertexListener::createSinglePropertyListener(rive::SymbolType) */

VertexPropertyListenerSingle * __thiscall
rive::VertexListener::createSinglePropertyListener(VertexListener *this,byte param_2)

{
  byte bVar1;
  ulong uVar2;
  VertexPropertyListenerSingle *this_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ushort uVar9;
  ViewModelInstanceValue *pVVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  bVar1 = param_2 - 1;
  if (bVar1 < 0xc) {
    fVar13 = *(float *)(&DAT_0025362c + (ulong)bVar1 * 4);
    uVar9 = *(ushort *)(&DAT_0025365c + (ulong)bVar1 * 2);
  }
  else {
    fVar13 = 1.0;
    uVar9 = 0;
  }
  uVar3 = *(ulong *)(*(long *)(this + 0x10) + 0xf8);
  if (uVar3 != 0) {
    uVar5 = (ulong)param_2;
    uVar12 = NEON_cnt(uVar3,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar4 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar4 < 2) {
      uVar6 = (int)uVar3 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(*(long *)(this + 0x10) + 0xf0) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if (*(byte *)(plVar7 + 2) == param_2) {
            pVVar10 = (ViewModelInstanceValue *)plVar7[3];
            if (pVVar10 == (ViewModelInstanceValue *)0x0) {
              return (VertexPropertyListenerSingle *)0x0;
            }
            uVar3 = (**(code **)(*(long *)pVVar10 + 0x18))(pVVar10,0x1ba);
            if ((uVar3 & 1) == 0) {
              return (VertexPropertyListenerSingle *)0x0;
            }
            this_00 = (VertexPropertyListenerSingle *)operator_new(0x28);
            VertexPropertyListenerSingle::VertexPropertyListenerSingle
                      (this_00,*(Core **)(this + 8),this,pVVar10,uVar9,fVar13);
            return this_00;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar2 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (VertexPropertyListenerSingle *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return (VertexPropertyListenerSingle *)0x0;
}


// ===== 004a71c8  rive::ListPath::~ListPath =====

/* rive::ListPath::~ListPath() */

void __thiscall rive::ListPath::~ListPath(ListPath *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x1b8);
  plVar3 = *(long **)(this + 0x1c0);
  puVar1 = PTR_vtable_0067d400 + 0x228;
  puVar2 = PTR_vtable_0067d400 + 0x250;
  *(undefined **)this = PTR_vtable_0067d400 + 0x10;
  *(undefined **)(this + 200) = puVar1;
  *(undefined **)(this + 0x1b0) = puVar2;
  if (plVar4 != plVar3) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
    plVar4 = *(long **)(this + 0x1b8);
  }
  if (plVar4 != (long *)0x0) {
    *(long **)(this + 0x1c0) = plVar4;
    operator_delete(plVar4);
  }
  FUN_004125dc(this);
  return;
}


// ===== 004a725c  rive::ListPath::~ListPath =====

/* rive::ListPath::~ListPath() */

void __thiscall rive::ListPath::~ListPath(ListPath *this)

{
  ~ListPath(this);
  operator_delete(this);
  return;
}


// ===== 004a7280  FUN_004a7280 =====

undefined8 FUN_004a7280(void)

{
  return 0x26b;
}


// ===== 004a7288  FUN_004a7288 =====

undefined8 FUN_004a7288(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000001c04U) == 0)) &&
      (1 < uVar1 - 0x26b)) && (uVar1 != 0x5b)) {
    return 0;
  }
  return 1;
}


// ===== 004a72d4  FUN_004a72d4 =====

undefined8 FUN_004a72d4(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (param_2 != 0x36a) {
    uVar3 = FUN_004a77b8();
    return uVar3;
  }
  uVar7 = 0;
  uVar4 = 0;
  pbVar5 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_004a7344;
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
LAB_004a7344:
    uVar4 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x1ac) = (int)uVar4;
  return 1;
}


// ===== 004a7358  FUN_004a7358 =====

undefined1 FUN_004a7358(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a8);
}


// ===== 004a7360  FUN_004a7360 =====

void FUN_004a7360(void)

{
  return;
}


// ===== 004a7364  FUN_004a7364 =====

void FUN_004a7364(void)

{
  return;
}


// ===== 004a7368  rive::ListPath::updateList =====

/* rive::ListPath::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::ListPath::updateList(ListPath *this,vector *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  PathVertex *pPVar6;
  VertexListener *pVVar7;
  void *pvVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar23 = *(long *)(this + 0x1b8);
  plVar17 = *(long **)(this + 0x1c0);
  plVar9 = *(long **)param_1;
  plVar2 = *(long **)(param_1 + 8);
  uVar21 = (long)plVar17 - lVar23 >> 3;
  if (plVar9 == plVar2) {
    uVar22 = 0;
    if (uVar21 == 0) goto LAB_004a7710;
  }
  else {
    uVar22 = 0;
    puVar1 = PTR_vtable_0067d428 + 0x10;
    do {
      plVar17 = *(long **)(*plVar9 + 0x18);
      if (plVar17 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar17 + 0xa4);
        if (uVar22 < uVar21) {
          plVar18 = *(long **)(*(long *)(this + 0x1b8) + uVar22 * 8);
          FUN_00340fb0(1,(long)plVar17 + 0xa4);
          if (plVar17 != (long *)plVar18[2]) {
            FUN_00340fb0(1,(long)plVar17 + 0xa4);
            plVar19 = (long *)plVar18[2];
            plVar18[2] = (long)plVar17;
            if ((plVar19 != (long *)0x0) &&
               (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0xa4), iVar5 == 1)) {
              (**(code **)(*plVar19 + 8))(plVar19);
            }
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
          iVar5 = FUN_00340fe0(0xffffffff,(long)plVar17 + 0xa4);
          if (iVar5 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
        else {
          pPVar6 = (PathVertex *)operator_new(0xd8);
          *(undefined8 *)(pPVar6 + 0xd0) = 0;
          *(undefined8 *)(pPVar6 + 8) = 0;
          *(undefined8 *)pPVar6 = 0;
          *(undefined8 *)(pPVar6 + 0x18) = 0;
          *(undefined8 *)(pPVar6 + 0x10) = 0;
          *(undefined8 *)(pPVar6 + 0x28) = 0;
          *(undefined8 *)(pPVar6 + 0x20) = 0;
          *(undefined8 *)(pPVar6 + 0x38) = 0;
          *(undefined8 *)(pPVar6 + 0x30) = 0;
          *(undefined8 *)(pPVar6 + 0x48) = 0;
          *(undefined8 *)(pPVar6 + 0x40) = 0;
          *(undefined8 *)(pPVar6 + 0x58) = 0;
          *(undefined8 *)(pPVar6 + 0x50) = 0;
          *(undefined8 *)(pPVar6 + 0x68) = 0;
          *(undefined8 *)(pPVar6 + 0x60) = 0;
          *(undefined8 *)(pPVar6 + 0x78) = 0;
          *(undefined8 *)(pPVar6 + 0x70) = 0;
          *(undefined2 *)(pPVar6 + 0x60) = 0xfffe;
          *(undefined8 *)(pPVar6 + 0x88) = 0;
          *(undefined8 *)(pPVar6 + 0x80) = 0;
          *(undefined8 *)(pPVar6 + 0x98) = 0;
          *(undefined8 *)(pPVar6 + 0x90) = 0;
          *(undefined8 *)(pPVar6 + 0xa8) = 0;
          *(undefined8 *)(pPVar6 + 0xa0) = 0;
          *(undefined8 *)(pPVar6 + 0xb8) = 0;
          *(undefined8 *)(pPVar6 + 0xb0) = 0;
          *(undefined8 *)(pPVar6 + 200) = 0;
          *(undefined8 *)(pPVar6 + 0xc0) = 0;
          *(undefined4 *)(pPVar6 + 8) = 0xffffffff;
          *(undefined8 *)(pPVar6 + 0x30) = 0;
          *(undefined8 *)(pPVar6 + 0x70) = 0;
          *(undefined8 *)(pPVar6 + 0x78) = 0;
          *(undefined8 *)(pPVar6 + 0x68) = 0;
          *(undefined8 *)(pPVar6 + 0xcc) = 0;
          *(undefined8 *)(pPVar6 + 0xc4) = 0;
          *(undefined8 *)(pPVar6 + 0x90) = 0;
          *(undefined8 *)(pPVar6 + 0x88) = 0;
          *(undefined8 *)(pPVar6 + 0xa0) = 0;
          *(undefined8 *)(pPVar6 + 0x98) = 0;
          *(undefined8 *)(pPVar6 + 0xaa) = 0;
          *(undefined8 *)(pPVar6 + 0xa2) = 0;
          *(undefined **)pPVar6 = puVar1;
          pVVar7 = (VertexListener *)operator_new(0x38);
          FUN_00340fb0(1,(long)plVar17 + 0xa4);
          local_70 = plVar17;
          VertexListener::VertexListener(pVVar7,pPVar6,&local_70,this);
          plVar18 = local_70;
          if ((local_70 != (long *)0x0) &&
             (iVar5 = FUN_00340fe0(0xffffffff,(long)local_70 + 0xa4), iVar5 == 1)) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
          puVar20 = *(undefined8 **)(this + 0x1c0);
          if (puVar20 < *(undefined8 **)(this + 0x1c8)) {
            *puVar20 = pVVar7;
            *(undefined8 **)(this + 0x1c0) = puVar20 + 1;
            Path::addVertex((Path *)this,pPVar6);
          }
          else {
            puVar25 = *(undefined8 **)(this + 0x1b8);
            lVar23 = (long)puVar20 - (long)puVar25 >> 3;
            uVar12 = lVar23 + 1;
            if (uVar12 >> 0x3d != 0) {
              FUN_004a77a4();
LAB_004a7794:
                    /* WARNING: Subroutine does not return */
              FUN_00324008();
            }
            uVar10 = (long)*(undefined8 **)(this + 0x1c8) - (long)puVar25;
            uVar13 = (long)uVar10 >> 2;
            if (uVar13 <= uVar12) {
              uVar13 = uVar12;
            }
            if (0x7ffffffffffffff7 < uVar10) {
              uVar13 = 0x1fffffffffffffff;
            }
            if (uVar13 == 0) {
              pvVar8 = (void *)0x0;
            }
            else {
              if (uVar13 >> 0x3d != 0) goto LAB_004a7794;
              pvVar8 = operator_new(uVar13 << 3);
            }
            puVar11 = (undefined8 *)((long)pvVar8 + lVar23 * 8);
            puVar24 = puVar11 + 1;
            *puVar11 = pVVar7;
            puVar15 = puVar20;
            if ((long)puVar20 - (long)puVar25 != 0) {
              uVar12 = ((long)puVar20 - (long)puVar25) - 8;
              if ((0x37 < uVar12) &&
                 (0x1f < (ulong)((long)puVar20 + (-((long)puVar20 - (long)puVar25) - (long)pvVar8)))
                 ) {
                puVar15 = puVar11 + -2;
                puVar16 = puVar20 + -2;
                uVar12 = (uVar12 >> 3) + 1;
                uVar14 = uVar12 & 0x3ffffffffffffffc;
                puVar20 = puVar20 + -uVar14;
                uVar10 = uVar14;
                do {
                  puVar4 = puVar16 + -1;
                  uVar28 = puVar16[-2];
                  uVar27 = puVar16[1];
                  uVar26 = *puVar16;
                  uVar10 = uVar10 - 4;
                  puVar16 = puVar16 + -4;
                  puVar15[-1] = *puVar4;
                  puVar15[-2] = uVar28;
                  puVar15[1] = uVar27;
                  *puVar15 = uVar26;
                  puVar15 = puVar15 + -4;
                } while (uVar10 != 0);
                puVar11 = puVar11 + -uVar14;
                puVar15 = puVar25;
                if (uVar12 == uVar14) goto LAB_004a768c;
              }
              do {
                puVar20 = puVar20 + -1;
                puVar11 = puVar11 + -1;
                *puVar11 = *puVar20;
              } while (puVar20 != puVar25);
              puVar15 = *(undefined8 **)(this + 0x1b8);
            }
LAB_004a768c:
            *(undefined8 **)(this + 0x1b8) = puVar11;
            *(undefined8 **)(this + 0x1c0) = puVar24;
            *(void **)(this + 0x1c8) = (void *)((long)pvVar8 + uVar13 * 8);
            if (puVar15 != (undefined8 *)0x0) {
              operator_delete(puVar15);
            }
            *(undefined8 **)(this + 0x1c0) = puVar24;
            Path::addVertex((Path *)this,pPVar6);
          }
        }
        uVar22 = uVar22 + 1;
        iVar5 = FUN_00340fe0(0xffffffff,(long)plVar17 + 0xa4);
        if (iVar5 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
    lVar23 = *(long *)(this + 0x1b8);
    plVar17 = *(long **)(this + 0x1c0);
    if ((ulong)((long)plVar17 - lVar23 >> 3) <= uVar22) goto LAB_004a7710;
  }
  do {
    plVar17 = plVar17 + -1;
    plVar9 = (long *)*plVar17;
    *(long **)(this + 0x1c0) = plVar17;
    *(long *)(this + 0x150) = *(long *)(this + 0x150) + -8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
      lVar23 = *(long *)(this + 0x1b8);
      plVar17 = *(long **)(this + 0x1c0);
    }
  } while (uVar22 < (ulong)((long)plVar17 - lVar23 >> 3));
LAB_004a7710:
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a779c  rive::ListPath::updateList =====

/* non-virtual thunk to
   rive::ListPath::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::ListPath::updateList(ListPath *this,vector *param_1)

{
  updateList(this + -0x1b0,param_1);
  return;
}


// ===== 004a77a4  FUN_004a77a4 =====

void FUN_004a77a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004a77b8  FUN_004a77b8 =====

undefined8 FUN_004a77b8(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  if (param_2 < 0x20) {
    if (param_2 == 0xd) {
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
      *(undefined4 *)(param_1 + 0x110) = uVar12;
    }
    else {
      if (param_2 != 0xe) goto LAB_004a78fc;
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
      *(undefined4 *)(param_1 + 0x114) = uVar12;
    }
    param_3[2] = (long)puVar6;
    return 1;
  }
  if (param_2 == 0x302) {
    pcVar4 = (char *)param_3[2];
    lVar8 = *param_3 + param_3[1];
    if (0 < lVar8 - (long)pcVar4) {
      param_3[2] = (long)(pcVar4 + 1);
      *(bool *)(param_1 + 0x138) = *pcVar4 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  else {
    if (param_2 == 0x80) {
      uVar11 = 0;
      uVar5 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004a7908;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar2 = uVar11 & 0x3f;
        uVar11 = (ulong)(((uint)uVar11 & 0xff) + 7);
        uVar5 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar5;
        pbVar9 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar5 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004a7908:
        uVar5 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x134) = (int)uVar5;
      return 1;
    }
    if (param_2 != 0x20) {
LAB_004a78fc:
      uVar3 = FUN_0035ea44();
      return uVar3;
    }
    pcVar4 = (char *)param_3[2];
    lVar8 = *param_3 + param_3[1];
    if (0 < lVar8 - (long)pcVar4) {
      param_3[2] = (long)(pcVar4 + 1);
      *(bool *)(param_1 + 0x1a8) = *pcVar4 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  param_3[2] = lVar8;
  *(undefined1 *)(param_3 + 3) = 1;
  return 1;
}


// ===== 004a7968  rive::ListPathBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ListPathBase::clone() const */

long * __thiscall rive::ListPathBase::clone(ListPathBase *this)

{
  undefined4 uVar1;
  ListPathBase LVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x1d0);
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
  puVar4 = PTR_vtable_0067d400;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  lVar7 = *(long *)(this + 0x110);
  uVar9 = *(undefined8 *)(this + 0xbc);
  *(undefined2 *)(plVar5 + 0x2c) = 0;
  plVar5[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[0x19] = (long)(puVar4 + 0x228);
  LVar2 = this[0x1a8];
  plVar5[0x36] = (long)(puVar4 + 0x250);
  plVar5[0x37] = 0;
  uVar1 = *(undefined4 *)(this + 0x1ac);
  *(ListPathBase *)(plVar5 + 0x35) = LVar2;
  LVar2 = this[0x138];
  *(undefined4 *)((long)plVar5 + 0x1ac) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  plVar5[0x38] = 0;
  plVar5[0x39] = 0;
  *(undefined4 *)((long)plVar5 + 0x134) = uVar1;
  *(ListPathBase *)(plVar5 + 0x27) = LVar2;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar6;
  *(undefined4 *)(plVar5 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004a7ab0  FUN_004a7ab0 =====

void FUN_004a7ab0(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004a7ad4  rive::Mesh::markDrawableDirty =====

/* rive::Mesh::markDrawableDirty() */

void __thiscall rive::Mesh::markDrawableDirty(Mesh *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xa8);
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


// ===== 004a7b90  rive::Mesh::addVertex =====

/* rive::Mesh::addVertex(rive::MeshVertex*) */

void __thiscall rive::Mesh::addVertex(Mesh *this,MeshVertex *param_1)

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
    goto LAB_004a7cd0;
  }
  puVar9 = *(undefined8 **)(this + 0xe0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004a7cf4();
LAB_004a7cf0:
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
    if (uVar5 >> 0x3d != 0) goto LAB_004a7cf0;
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
      if (uVar6 == uVar7) goto LAB_004a7cbc;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xe0);
  }
LAB_004a7cbc:
  *(undefined8 **)(this + 0xe0) = puVar4;
  *(undefined8 **)(this + 0xe8) = puVar13;
  *(void **)(this + 0xf0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004a7cd0:
  *(undefined8 **)(this + 0xe8) = puVar13;
  return;
}


// ===== 004a7cf4  FUN_004a7cf4 =====

void FUN_004a7cf4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004a7d08  rive::Mesh::onAddedDirty =====

/* rive::Mesh::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::Mesh::onAddedDirty(Mesh *this,CoreContext *param_1)

{
  Mesh *pMVar1;
  long *plVar2;
  ulong uVar3;
  Image *this_00;
  undefined8 uVar4;
  long lVar5;
  
  pMVar1 = (Mesh *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pMVar1 = (Mesh *)(param_1 + -0x998);
  }
  *(Mesh **)(this + 0x40) = pMVar1;
  *(Mesh **)(this + 0x80) = pMVar1;
  if (pMVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),100);
  if ((uVar3 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    this_00 = *(Image **)(this + 0x30);
    if (*(Mesh **)(this_00 + 0x1a0) != this + 0xb0) {
      *(Mesh **)(this_00 + 0x1a0) = this + 0xb0;
      Image::updateImageScale(this_00);
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 004a7dac  rive::Mesh::onAddedClean =====

/* rive::Mesh::onAddedClean(rive::CoreContext*) */

undefined8 rive::Mesh::onAddedClean(CoreContext *param_1)

{
  ushort *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  puVar1 = (ushort *)*plVar2;
  if (puVar1 != (ushort *)plVar2[1]) {
    do {
      if ((ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 3) <= (ulong)*puVar1) {
        return 2;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != (ushort *)plVar2[1]);
  }
  return 0;
}


// ===== 004a7df4  rive::Mesh::decodeTriangleIndexBytes =====

/* rive::Mesh::decodeTriangleIndexBytes(rive::Span<unsigned char const>) */

void rive::Mesh::decodeTriangleIndexBytes(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long local_88;
  long lStack_80;
  byte *local_78;
  char local_70;
  char local_6f;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)operator_new(0x20);
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 3) = 1;
  BinaryReader::BinaryReader((BinaryReader *)&local_88,param_2,param_3);
  puVar19 = (undefined2 *)0x0;
  puVar18 = (undefined2 *)0x0;
  puVar17 = (undefined2 *)0x0;
  do {
    pbVar1 = (byte *)(local_88 + lStack_80);
    if ((local_78 == pbVar1 || local_70 != '\0') || local_6f != '\0') {
      FUN_00340fb0(1,plVar6 + 3);
      puVar16 = *(undefined8 **)(param_1 + 0xd8);
      *(long **)(param_1 + 0xd8) = plVar6;
      if ((puVar16 != (undefined8 *)0x0) &&
         (iVar5 = FUN_00340fe0(0xffffffff,puVar16 + 3), iVar5 == 1)) {
        pvVar7 = (void *)*puVar16;
        if (pvVar7 != (void *)0x0) {
          puVar16[1] = pvVar7;
          operator_delete(pvVar7);
        }
        operator_delete(puVar16);
      }
      iVar5 = FUN_00340fe0(0xffffffff,plVar6 + 3);
      if (iVar5 == 1) {
        pvVar7 = (void *)*plVar6;
        if (pvVar7 != (void *)0x0) {
          plVar6[1] = (long)pvVar7;
          operator_delete(pvVar7);
        }
        operator_delete(plVar6);
      }
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar10 = 0;
    uVar13 = 0;
    do {
      if (pbVar1 <= local_78) {
        local_70 = '\x01';
        goto LAB_004a7ee4;
      }
      pbVar8 = local_78 + 1;
      bVar2 = *local_78;
      uVar9 = uVar10 & 0x3f;
      uVar10 = (ulong)(((uint)uVar10 & 0xff) + 7);
      uVar13 = ((ulong)bVar2 & 0x7f) << uVar9 | uVar13;
      local_78 = pbVar8;
    } while ((char)bVar2 < '\0');
    if (0xffff < uVar13) {
      local_6f = '\x01';
LAB_004a7ee4:
      uVar13 = 0;
      local_78 = pbVar1;
    }
    if (puVar18 < puVar19) {
      *puVar18 = (short)uVar13;
      puVar15 = puVar17;
      puVar18 = puVar18 + 1;
    }
    else {
      lVar14 = (long)puVar18 - (long)puVar17 >> 1;
      if (lVar14 == -2 || lVar14 + 2 < 0 != SCARRY8(lVar14,2)) {
        FUN_00375898();
LAB_004a809c:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      uVar9 = (long)puVar19 - (long)puVar17;
      uVar10 = uVar9;
      if (uVar9 <= lVar14 + 1U) {
        uVar10 = lVar14 + 1;
      }
      if (0x7ffffffffffffffd < uVar9) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        if ((long)uVar10 < 0) goto LAB_004a809c;
        pvVar7 = operator_new(uVar10 << 1);
      }
      puVar15 = (undefined2 *)((long)pvVar7 + lVar14 * 2);
      puVar20 = puVar15 + 1;
      *puVar15 = (short)uVar13;
      if ((long)puVar18 - (long)puVar17 != 0) {
        uVar13 = ((long)puVar18 - (long)puVar17) - 2;
        if ((0x1d < uVar13) &&
           (0x1f < (ulong)((long)puVar18 + (-((long)puVar18 - (long)puVar17) - (long)pvVar7)))) {
          puVar16 = (undefined8 *)(puVar15 + -8);
          puVar12 = (undefined8 *)(puVar18 + -8);
          uVar13 = (uVar13 >> 1) + 1;
          uVar11 = uVar13 & 0xfffffffffffffff0;
          puVar18 = puVar18 + -uVar11;
          uVar9 = uVar11;
          do {
            puVar4 = puVar12 + -1;
            uVar23 = puVar12[-2];
            uVar22 = puVar12[1];
            uVar21 = *puVar12;
            uVar9 = uVar9 - 0x10;
            puVar12 = puVar12 + -4;
            puVar16[-1] = *puVar4;
            puVar16[-2] = uVar23;
            puVar16[1] = uVar22;
            *puVar16 = uVar21;
            puVar16 = puVar16 + -4;
          } while (uVar9 != 0);
          puVar15 = puVar15 + -uVar11;
          if (uVar13 == uVar11) goto LAB_004a7fd0;
        }
        do {
          puVar18 = puVar18 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *puVar18;
        } while (puVar18 != puVar17);
      }
LAB_004a7fd0:
      puVar19 = (undefined2 *)((long)pvVar7 + uVar10 * 2);
      *plVar6 = (long)puVar15;
      plVar6[1] = (long)puVar20;
      plVar6[2] = (long)puVar19;
      puVar18 = puVar20;
      if (puVar17 != (undefined2 *)0x0) {
        operator_delete(puVar17);
      }
    }
    plVar6[1] = (long)puVar18;
    puVar17 = puVar15;
  } while( true );
}


// ===== 004a80a4  rive::Mesh::copyTriangleIndexBytes =====

/* rive::Mesh::copyTriangleIndexBytes(rive::MeshBase const&) */

void __thiscall rive::Mesh::copyTriangleIndexBytes(Mesh *this,MeshBase *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (this != (Mesh *)param_1) {
    lVar4 = *(long *)(param_1 + 0xd8);
    if (lVar4 != 0) {
      FUN_00340fb0(1,lVar4 + 0x18);
    }
    puVar3 = *(undefined8 **)(this + 0xd8);
    *(long *)(this + 0xd8) = lVar4;
    if ((puVar3 != (undefined8 *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,puVar3 + 3), iVar1 == 1))
    {
      pvVar2 = (void *)*puVar3;
      if (pvVar2 != (void *)0x0) {
        puVar3[1] = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(puVar3);
      return;
    }
  }
  return;
}


// ===== 004a8128  rive::Mesh::markSkinDirty =====

/* rive::Mesh::markSkinDirty() */

void __thiscall rive::Mesh::markSkinDirty(Mesh *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 5 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x20;
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


// ===== 004a818c  rive::Mesh::markSkinDirty =====

/* non-virtual thunk to rive::Mesh::markSkinDirty() */

void __thiscall rive::Mesh::markSkinDirty(Mesh *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + -0x40) >> 5 & 1) == 0) {
    *(ushort *)(this + -0x40) = *(ushort *)(this + -0x40) | 0x20;
    (**(code **)(*(long *)(this + -0xa0) + 0x70))();
    lVar2 = *(long *)(this + -0x20);
    uVar1 = *(uint *)(this + -0x68);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004a81f0  rive::Mesh::clone =====

/* rive::Mesh::clone() const */

Mesh * __thiscall rive::Mesh::clone(Mesh *this)

{
  long lVar1;
  int iVar2;
  Mesh *pMVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(*(long *)(this + 0x40) + 0xbd8);
  pMVar3 = (Mesh *)MeshBase::clone((MeshBase *)this);
  lVar4 = *plVar5;
  pMVar3[0xd0] = (Mesh)0x1;
  (**(code **)(lVar4 + 0x10))(&local_50,plVar5,1,0,*(long *)(this + 0xe8) - *(long *)(this + 0xe0));
  plVar5 = local_50;
  plVar6 = *(long **)(pMVar3 + 0xc0);
  local_50 = (long *)0x0;
  *(long **)(pMVar3 + 0xc0) = plVar5;
  if (plVar6 != (long *)0x0) {
    iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 1);
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar5 = local_50;
    if ((local_50 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_50 + 1), iVar2 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  if (pMVar3 != this) {
    lVar4 = *(long *)(this + 200);
    if (lVar4 != 0) {
      FUN_00340fb0(1,lVar4 + 8);
    }
    plVar5 = *(long **)(pMVar3 + 200);
    *(long *)(pMVar3 + 200) = lVar4;
    if ((plVar5 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1), iVar2 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    lVar4 = *(long *)(this + 0xb8);
    if (lVar4 != 0) {
      FUN_00340fb0(1,lVar4 + 8);
    }
    plVar5 = *(long **)(pMVar3 + 0xb8);
    *(long *)(pMVar3 + 0xb8) = lVar4;
    if ((plVar5 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1), iVar2 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pMVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a8378  rive::Mesh::onAssetLoaded =====

/* rive::Mesh::onAssetLoaded(rive::RenderImage*) */

void __thiscall rive::Mesh::onAssetLoaded(Mesh *this,RenderImage *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__dest;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == (RenderImage *)0x0) {
    uVar9 = 0;
    uVar10 = DAT_0024e668;
    uVar11 = DAT_0024e658;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  plVar5 = *(long **)(*(long *)(this + 0x40) + 0xbd8);
  this[0xd0] = (Mesh)0x1;
  (**(code **)(*plVar5 + 0x10))
            (&local_60,plVar5,1,0,*(long *)(this + 0xe8) - *(long *)(this + 0xe0));
  plVar3 = local_60;
  plVar6 = *(long **)(this + 0xc0);
  local_60 = (long *)0x0;
  *(long **)(this + 0xc0) = plVar3;
  if (plVar6 != (long *)0x0) {
    iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 1);
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar3 = local_60;
    if ((local_60 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_60 + 1), iVar2 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  (**(code **)(*plVar5 + 0x10))
            (&local_60,plVar5,1,1,*(long *)(this + 0xe8) - *(long *)(this + 0xe0));
  plVar3 = local_60;
  plVar6 = *(long **)(this + 200);
  local_60 = (long *)0x0;
  *(long **)(this + 200) = plVar3;
  if (plVar6 != (long *)0x0) {
    iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 1);
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar3 = local_60;
    if ((local_60 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_60 + 1), iVar2 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    plVar3 = *(long **)(this + 200);
  }
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 4) = 1;
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))();
    if (puVar4 != (undefined8 *)0x0) {
      plVar6 = *(long **)(this + 0xe8);
      for (plVar3 = *(long **)(this + 0xe0); plVar3 != plVar6; plVar3 = plVar3 + 1) {
        fVar8 = *(float *)(*plVar3 + 0xb0);
        fVar7 = *(float *)(*plVar3 + 0xb4);
        *puVar4 = CONCAT44((float)((ulong)uVar9 >> 0x20) +
                           (float)((ulong)uVar11 >> 0x20) * fVar7 +
                           (float)((ulong)uVar10 >> 0x20) * fVar8,
                           (float)uVar9 + (float)uVar11 * fVar7 + (float)uVar10 * fVar8);
        puVar4 = puVar4 + 1;
      }
      (**(code **)(**(long **)(this + 200) + 0x18))();
    }
  }
  plVar3 = *(long **)(this + 0xd8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(&local_60,plVar5,0,1,plVar3[1] - *plVar3);
    plVar3 = local_60;
    plVar5 = *(long **)(this + 0xb8);
    local_60 = (long *)0x0;
    *(long **)(this + 0xb8) = plVar3;
    if (plVar5 != (long *)0x0) {
      iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1);
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      plVar3 = local_60;
      if ((local_60 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_60 + 1), iVar2 == 1))
      {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      plVar3 = *(long **)(this + 0xb8);
    }
    if (plVar3 != (long *)0x0) {
      *(undefined1 *)(plVar3 + 4) = 1;
      __dest = (void *)(**(code **)(*plVar3 + 0x10))();
      if (__dest != (void *)0x0) {
        memcpy(__dest,(void *)**(undefined8 **)(this + 0xd8),
               *(size_t *)(*(long *)(this + 0xb8) + 0x18));
        (**(code **)(**(long **)(this + 0xb8) + 0x18))();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a8648  rive::Mesh::onAssetLoaded =====

/* non-virtual thunk to rive::Mesh::onAssetLoaded(rive::RenderImage*) */

void __thiscall rive::Mesh::onAssetLoaded(Mesh *this,RenderImage *param_1)

{
  onAssetLoaded(this + -0xb0,param_1);
  return;
}


// ===== 004a8650  rive::Mesh::buildDependencies =====

/* rive::Mesh::buildDependencies() */

void __thiscall rive::Mesh::buildDependencies(Mesh *this)

{
  if (*(Component **)(this + 0xa8) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0xa8),(Component *)this);
  }
  Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
  return;
}


// ===== 004a8684  rive::Mesh::update =====

/* rive::Mesh::update(rive::ComponentDirt) */

void __thiscall rive::Mesh::update(Mesh *this,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((param_2 >> 5 & 1) != 0) {
    lVar3 = *(long *)(this + 0xa8);
    if (lVar3 != 0) {
      puVar2 = *(undefined8 **)(this + 0xe0);
      for (lVar1 = *(long *)(this + 0xe8) - (long)*(undefined8 **)(this + 0xe0); lVar1 != 0;
          lVar1 = lVar1 + -8) {
        (**(code **)(*(long *)*puVar2 + 0xa8))
                  ((long *)*puVar2,lVar3 + 0xb8,*(undefined8 *)(lVar3 + 0xe8));
        puVar2 = puVar2 + 1;
      }
    }
    this[0xd0] = (Mesh)0x1;
  }
  return;
}


// ===== 004a86e8  rive::Mesh::draw =====

/* rive::Mesh::draw(rive::Renderer*, rive::RenderImage const*, rive::ImageSampler, rive::BlendMode,
   float) */

void __thiscall
rive::Mesh::draw(undefined4 param_1_00,Mesh *this,long *param_1,undefined8 param_2,ulong param_5,
                undefined1 param_6)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((this[0xd0] != (Mesh)0x0) && (plVar5 = *(long **)(this + 0xc0), plVar5 != (long *)0x0)) {
    *(undefined1 *)(plVar5 + 4) = 1;
    puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x10))();
    if (puVar6 != (undefined4 *)0x0) {
      plVar5 = *(long **)(this + 0xe8);
      plVar9 = *(long **)(this + 0xe0);
      while (plVar9 != plVar5) {
        lVar7 = *plVar9;
        lVar8 = *(long *)(lVar7 + 0xa8);
        puVar1 = (undefined4 *)(lVar7 + 0xa4);
        puVar3 = (undefined4 *)(lVar7 + 0xa0);
        if (lVar8 != 0) {
          puVar1 = (undefined4 *)(lVar8 + 0x94);
          puVar3 = (undefined4 *)(lVar8 + 0x90);
        }
        uVar10 = *puVar1;
        *puVar6 = *puVar3;
        puVar6[1] = uVar10;
        plVar9 = plVar9 + 1;
        puVar6 = puVar6 + 2;
      }
      (**(code **)(**(long **)(this + 0xc0) + 0x18))();
    }
    this[0xd0] = (Mesh)0x0;
  }
  if (*(long *)(this + 0xa8) == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,*(long *)(this + 0x30) + 0xa4);
  }
  plVar5 = *(long **)(this + 0xc0);
  if (plVar5 != (long *)0x0) {
    FUN_00340fb0(1,plVar5 + 1);
  }
  plVar9 = *(long **)(this + 200);
  local_70 = plVar5;
  if (plVar9 != (long *)0x0) {
    FUN_00340fb0(1,plVar9 + 1);
  }
  plVar5 = *(long **)(this + 0xb8);
  local_78 = plVar9;
  if (plVar5 != (long *)0x0) {
    FUN_00340fb0(1,plVar5 + 1);
  }
  local_80 = plVar5;
  (**(code **)(*param_1 + 0x40))
            (param_1_00,param_1,param_2,param_5 & 0xffffff,&local_70,&local_78,&local_80,
             (ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0)) >> 3,
             (ulong)((*(long **)(this + 0xd8))[1] - **(long **)(this + 0xd8)) >> 1,param_6);
  plVar5 = local_80;
  if ((local_80 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_80 + 1), iVar4 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  plVar5 = local_78;
  if ((local_78 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_78 + 1), iVar4 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_70 + 1), iVar4 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a8914  rive::Mesh::draw =====

/* non-virtual thunk to rive::Mesh::draw(rive::Renderer*, rive::RenderImage const*,
   rive::ImageSampler, rive::BlendMode, float) */

void __thiscall rive::Mesh::draw(Mesh *this,undefined8 param_1,undefined8 param_2,ulong param_4)

{
  draw(this + -0xb0,param_1,param_2,param_4 & 0xffffff);
  return;
}


// ===== 004a8920  FUN_004a8920 =====

void FUN_004a8920(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  pvVar4 = (void *)param_1[0x1c];
  puVar1 = PTR_vtable_0067d3e8 + 0xe8;
  puVar2 = PTR_vtable_0067d3e8 + 0x110;
  *param_1 = (long)(PTR_vtable_0067d3e8 + 0x10);
  param_1[0x14] = (long)puVar1;
  param_1[0x16] = (long)puVar2;
  if (pvVar4 != (void *)0x0) {
    param_1[0x1d] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  puVar5 = (undefined8 *)param_1[0x1b];
  if ((puVar5 != (undefined8 *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,puVar5 + 3), iVar3 == 1)) {
    pvVar4 = (void *)*puVar5;
    if (pvVar4 != (void *)0x0) {
      puVar5[1] = pvVar4;
      operator_delete(pvVar4);
    }
    operator_delete(puVar5);
  }
  plVar6 = (long *)param_1[0x19];
  param_1[0x16] = (long)&PTR_FUN_00671890;
  if ((plVar6 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar3 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  plVar6 = (long *)param_1[0x18];
  if ((plVar6 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar3 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  plVar6 = (long *)param_1[0x17];
  if ((plVar6 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar3 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
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


// ===== 004a8aa4  FUN_004a8aa4 =====

undefined8 FUN_004a8aa4(void)

{
  return 0;
}


// ===== 004a8aac  FUN_004a8aac =====

void FUN_004a8aac(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  *param_1 = &PTR_FUN_00671890;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x004a8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 004a8b60  FUN_004a8b60 =====

void FUN_004a8b60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a8b64);
  (*pcVar1)();
}


// ===== 004a8b64  FUN_004a8b64 =====

void FUN_004a8b64(void *param_1)

{
  FUN_004a8920();
  operator_delete(param_1);
  return;
}


// ===== 004a8b88  FUN_004a8b88 =====

undefined8 FUN_004a8b88(void)

{
  return 0x6d;
}


// ===== 004a8b90  FUN_004a8b90 =====

bool FUN_004a8b90(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x6d;
}


// ===== 004a8bb0  FUN_004a8bb0 =====

void FUN_004a8bb0(long *param_1,short param_2,long *param_3)

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
        goto LAB_004a8d10;
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
LAB_004a8d10:
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
        goto LAB_004a8cf4;
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
LAB_004a8cf4:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 5) = (int)uVar7;
  }
  else {
    if (param_2 != 0xdf) {
      uVar5 = 0;
      goto LAB_004a8d68;
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
        goto LAB_004a8d50;
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
LAB_004a8d50:
    lVar10 = *param_1;
    param_3[2] = (long)pbVar12;
    (**(code **)(lVar10 + 0x98))(param_1,pbVar6,uVar7);
  }
  uVar5 = 1;
LAB_004a8d68:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004a8d8c  FUN_004a8d8c =====

void FUN_004a8d8c(void)

{
  return;
}


// ===== 004a8d90  FUN_004a8d90 =====

void FUN_004a8d90(long param_1)

{
  FUN_004a8920(param_1 + -0xa0);
  return;
}


// ===== 004a8d98  FUN_004a8d98 =====

void FUN_004a8d98(long param_1)

{
  FUN_004a8920((void *)(param_1 + -0xa0));
  operator_delete((void *)(param_1 + -0xa0));
  return;
}


// ===== 004a8dc0  FUN_004a8dc0 =====

void FUN_004a8dc0(long param_1)

{
  FUN_004a8920(param_1 + -0xb0);
  return;
}


// ===== 004a8dc8  FUN_004a8dc8 =====

void FUN_004a8dc8(long param_1)

{
  FUN_004a8920((void *)(param_1 + -0xb0));
  operator_delete((void *)(param_1 + -0xb0));
  return;
}


// ===== 004a8df0  rive::MeshBase::clone =====

/* rive::MeshBase::clone() const */

MeshBase * __thiscall rive::MeshBase::clone(MeshBase *this)

{
  undefined *puVar1;
  int iVar2;
  MeshBase *pMVar3;
  void *pvVar4;
  undefined8 *puVar5;
  MeshBase *pMVar6;
  long lVar7;
  
  pMVar3 = (MeshBase *)operator_new(0xf8);
  *(long *)(pMVar3 + 8) = 0;
  *(long *)pMVar3 = 0;
  *(long *)(pMVar3 + 0x18) = 0;
  *(long *)(pMVar3 + 0x10) = 0;
  *(undefined4 *)(pMVar3 + 8) = 0xffffffff;
  *(long *)(pMVar3 + 0x28) = 0;
  *(long *)(pMVar3 + 0x20) = 0;
  *(long *)(pMVar3 + 0x38) = 0;
  *(long *)(pMVar3 + 0x30) = 0;
  *(long *)(pMVar3 + 0x48) = 0;
  *(long *)(pMVar3 + 0x40) = 0;
  *(long *)(pMVar3 + 0x58) = 0;
  *(long *)(pMVar3 + 0x50) = 0;
  *(long *)(pMVar3 + 0x68) = 0;
  *(long *)(pMVar3 + 0x60) = 0;
  *(long *)(pMVar3 + 0x78) = 0;
  *(long *)(pMVar3 + 0x70) = 0;
  *(long *)(pMVar3 + 0x88) = 0;
  *(long *)(pMVar3 + 0x80) = 0;
  *(long *)(pMVar3 + 0x98) = 0;
  *(long *)(pMVar3 + 0x90) = 0;
  *(long *)(pMVar3 + 0xa8) = 0;
  *(long *)(pMVar3 + 0xa0) = 0;
  *(long *)(pMVar3 + 0xb8) = 0;
  *(long *)(pMVar3 + 0xb0) = 0;
  *(long *)(pMVar3 + 200) = 0;
  *(long *)(pMVar3 + 0xc0) = 0;
  *(long *)(pMVar3 + 0xd8) = 0;
  *(long *)(pMVar3 + 0xd0) = 0;
  *(long *)(pMVar3 + 0x30) = 0;
  *(undefined2 *)(pMVar3 + 0x60) = 0xfffe;
  *(long *)(pMVar3 + 0x70) = 0;
  *(long *)(pMVar3 + 0x78) = 0;
  *(long *)(pMVar3 + 0x68) = 0;
  *(long *)(pMVar3 + 0x88) = 0;
  *(long *)(pMVar3 + 0x90) = 0;
  *(long *)(pMVar3 + 0x98) = 0;
  puVar1 = PTR_vtable_0067d3e8;
  *(long *)(pMVar3 + 0xc0) = 0;
  *(long *)(pMVar3 + 200) = 0;
  pMVar6 = pMVar3 + 0xd8;
  *(long *)(pMVar3 + 0xe0) = 0;
  *(long *)pMVar6 = 0;
  *(long *)(pMVar3 + 0xf0) = 0;
  *(long *)(pMVar3 + 0xe8) = 0;
  *(undefined **)pMVar3 = puVar1 + 0x10;
  *(undefined **)(pMVar3 + 0xb0) = puVar1 + 0x110;
  *(long *)(pMVar3 + 0xb8) = 0;
  *(undefined **)(pMVar3 + 0xa0) = puVar1 + 0xe8;
  pMVar3[0xd0] = (MeshBase)0x1;
  if (pMVar3 != this) {
    lVar7 = *(long *)(this + 0xd8);
    if (lVar7 == 0) {
      *(long *)pMVar6 = 0;
    }
    else {
      FUN_00340fb0(1,lVar7 + 0x18);
      puVar5 = *(undefined8 **)pMVar6;
      *(long *)pMVar6 = lVar7;
      if ((puVar5 != (undefined8 *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,puVar5 + 3), iVar2 == 1)
         ) {
        pvVar4 = (void *)*puVar5;
        if (pvVar4 != (void *)0x0) {
          puVar5[1] = pvVar4;
          operator_delete(pvVar4);
        }
        operator_delete(puVar5);
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pMVar3 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(pMVar3 + 0x28) = *(undefined4 *)(this + 0x28);
  return pMVar3;
}


// ===== 004a8f18  FUN_004a8f18 =====

void FUN_004a8f18(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a8f1c);
  (*pcVar1)();
}


// ===== 004a8f1c  rive::MeshVertex::markGeometryDirty =====

/* rive::MeshVertex::markGeometryDirty() */

void __thiscall rive::MeshVertex::markGeometryDirty(MeshVertex *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[0x15];
  if ((plVar4 != (long *)0x0) && ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0)) {
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


// ===== 004a8fd8  rive::MeshVertex::onAddedDirty =====

/* rive::MeshVertex::onAddedDirty(rive::CoreContext*) */

bool __thiscall rive::MeshVertex::onAddedDirty(MeshVertex *this,CoreContext *param_1)

{
  bool bVar1;
  MeshVertex *pMVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  pMVar2 = (MeshVertex *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pMVar2 = (MeshVertex *)(param_1 + -0x998);
  }
  *(MeshVertex **)(this + 0x40) = pMVar2;
  *(MeshVertex **)(this + 0x80) = pMVar2;
  if (pMVar2 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar5 + 0x90))(plVar3,this);
  }
  uVar4 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x6d);
  bVar1 = (uVar4 & 1) == 0;
  if (!bVar1) {
    Mesh::addVertex(*(Mesh **)(this + 0x30),this);
  }
  return bVar1;
}


// ===== 004a906c  FUN_004a906c =====

void FUN_004a906c(long *param_1)

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


// ===== 004a90f8  FUN_004a90f8 =====

undefined8 FUN_004a90f8(void)

{
  return 0x6c;
}


// ===== 004a9100  FUN_004a9100 =====

bool FUN_004a9100(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) - 0x6b < 2;
}


// ===== 004a9124  rive::MeshVertexBase::clone =====

/* rive::MeshVertexBase::clone() const */

long * __thiscall rive::MeshVertexBase::clone(MeshVertexBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x14] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x11] = 0;
  puVar1 = PTR_vtable_0067d3d0;
  lVar3 = *(long *)(this + 0xb0);
  plVar2[0x15] = 0;
  plVar2[0x16] = lVar3;
  lVar3 = *(long *)(this + 0xa0);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x14] = lVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004a91c4  FUN_004a91c4 =====

void FUN_004a91c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a91c8);
  (*pcVar1)();
}


// ===== 004a91c8  rive::colorARGB =====

/* rive::colorARGB(int, int, int, int) */

uint rive::colorARGB(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 << 0x18 | (param_2 & 0xffU) << 0x10 | (param_3 & 0xffU) << 8 | param_4 & 0xffU;
}


// ===== 004a91dc  rive::colorRed =====

/* rive::colorRed(unsigned int) */

uint rive::colorRed(uint param_1)

{
  return param_1 >> 0x10 & 0xff;
}


// ===== 004a91e4  rive::colorGreen =====

/* rive::colorGreen(unsigned int) */

uint rive::colorGreen(uint param_1)

{
  return param_1 >> 8 & 0xff;
}


// ===== 004a91ec  rive::colorBlue =====

/* rive::colorBlue(unsigned int) */

uint rive::colorBlue(uint param_1)

{
  return param_1 & 0xff;
}


// ===== 004a91f4  rive::colorAlpha =====

/* rive::colorAlpha(unsigned int) */

uint rive::colorAlpha(uint param_1)

{
  return param_1 >> 0x18;
}


// ===== 004a91fc  rive::UnpackColorToRGBA8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::UnpackColorToRGBA8(unsigned int, unsigned char*) */

void rive::UnpackColorToRGBA8(uint param_1,uchar *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = param_1;
  auVar1._0_4_ = param_1;
  auVar1._8_4_ = param_1;
  auVar1._12_4_ = param_1;
  auVar1 = NEON_ushl(auVar1,_DAT_0024e350,4);
  *(uint *)param_2 = CONCAT13(auVar1[0xc],CONCAT12(auVar1[8],CONCAT11(auVar1[4],auVar1[0])));
  return;
}


// ===== 004a921c  rive::UnpackColorToRGBA32F =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::UnpackColorToRGBA32F(unsigned int, float*) */

void rive::UnpackColorToRGBA32F(uint param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._4_4_ = param_1;
  auVar1._0_4_ = param_1;
  auVar1._8_4_ = param_1;
  auVar1._12_4_ = param_1;
  auVar2._8_4_ = _UNK_0024e358;
  auVar2._0_8_ = _DAT_0024e350;
  auVar2._12_4_ = _UNK_0024e35c;
  auVar2 = NEON_ushl(auVar1,auVar2,4);
  auVar3[0] = auVar2[0];
  auVar3._1_3_ = 0;
  auVar3[4] = auVar2[4];
  auVar3._5_3_ = 0;
  auVar3[8] = auVar2[8];
  auVar3._9_3_ = 0;
  auVar3[0xc] = auVar2[0xc];
  auVar3._13_3_ = 0;
  auVar2 = NEON_ucvtf(auVar3,4);
  param_2[4] = auVar2._8_4_ * 0.003921569;
  param_2[5] = auVar2._12_4_ * 0.003921569;
  *param_2 = auVar2._0_4_ * 0.003921569;
  param_2[1] = auVar2._4_4_ * 0.003921569;
  return;
}


// ===== 004a9250  rive::UnpackColorToRGBA32FPremul =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::UnpackColorToRGBA32FPremul(unsigned int, float*) */

void rive::UnpackColorToRGBA32FPremul(uint param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  
  auVar1._4_4_ = param_1;
  auVar1._0_4_ = param_1;
  auVar1._8_4_ = param_1;
  auVar1._12_4_ = param_1;
  auVar2._8_4_ = _UNK_0024e358;
  auVar2._0_8_ = _DAT_0024e350;
  auVar2._12_4_ = _UNK_0024e35c;
  auVar2 = NEON_ushl(auVar1,auVar2,4);
  auVar3[0] = auVar2[0];
  auVar3._1_3_ = 0;
  auVar3[4] = auVar2[4];
  auVar3._5_3_ = 0;
  auVar3[8] = auVar2[8];
  auVar3._9_3_ = 0;
  auVar3[0xc] = auVar2[0xc];
  auVar3._13_3_ = 0;
  auVar2 = NEON_ucvtf(auVar3,4);
  fVar4 = auVar2._12_4_ * 0.003921569;
  param_2[4] = auVar2._8_4_ * 0.003921569 * fVar4;
  param_2[5] = fVar4 * 1.0;
  *param_2 = auVar2._0_4_ * 0.003921569 * fVar4;
  param_2[1] = auVar2._4_4_ * 0.003921569 * fVar4;
  return;
}


// ===== 004a9294  rive::colorOpacity =====

/* rive::colorOpacity(unsigned int) */

float rive::colorOpacity(uint param_1)

{
  return (float)(param_1 >> 0x18) / 255.0;
}


// ===== 004a92ac  rive::opacityToAlpha =====

/* rive::opacityToAlpha(float) */

long rive::opacityToAlpha(float param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (long)(fVar1 * 255.0);
}


// ===== 004a92d0  rive::colorWithAlpha =====

/* rive::colorWithAlpha(unsigned int, unsigned int) */

uint rive::colorWithAlpha(uint param_1,uint param_2)

{
  return param_1 & 0xffffff | param_2 << 0x18;
}


// ===== 004a92d8  rive::colorWithOpacity =====

/* rive::colorWithOpacity(unsigned int, float) */

uint rive::colorWithOpacity(uint param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_2,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return param_1 & 0xffffff | (int)(long)(fVar1 * 255.0) << 0x18;
}


// ===== 004a9300  rive::colorModulateOpacity =====

/* rive::colorModulateOpacity(unsigned int, float) */

uint rive::colorModulateOpacity(uint param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(((float)(param_1 >> 0x18) / 255.0) * param_2,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return param_1 & 0xffffff | (int)(long)(fVar1 * 255.0) << 0x18;
}


// ===== 004a9338  rive::colorLerp =====

/* rive::colorLerp(unsigned int, unsigned int, float) */

uint rive::colorLerp(uint param_1,uint param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar4 = 1.0 - param_3;
  uVar2 = NEON_fmadd((float)(param_1 >> 0x18),fVar4,(float)(param_2 >> 0x18) * param_3);
  uVar5 = NEON_fmadd((float)(param_1 >> 0x10 & 0xff),fVar4,(float)(param_2 >> 0x10 & 0xff) * param_3
                    );
  fVar3 = (float)NEON_fminnm(uVar2,0x437f0000);
  uVar7 = NEON_fmadd((float)(param_1 >> 8 & 0xff),fVar4,(float)(param_2 >> 8 & 0xff) * param_3);
  uVar2 = NEON_fmadd((float)(param_1 & 0xff),fVar4,(float)(param_2 & 0xff) * param_3);
  fVar4 = (float)NEON_fminnm(uVar5,0x437f0000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar6 = (float)NEON_fminnm(uVar7,0x437f0000);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar1 = (float)NEON_fminnm(uVar2,0x437f0000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (int)(long)fVar3 << 0x18 | ((uint)(long)fVar4 & 0xff) << 0x10 |
         ((uint)(long)fVar6 & 0xff) << 8 | (uint)(long)fVar1 & 0xff;
}


// ===== 004a93f0  rive::Dash::Dash =====

/* rive::Dash::Dash() */

void __thiscall rive::Dash::Dash(Dash *this)

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
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  puVar1 = PTR_vtable_0067d728;
  *(undefined4 *)(this + 0x88) = 0;
  this[0x8c] = (Dash)0x0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


// ===== 004a9438  FUN_004a9438 =====

void FUN_004a9438(long *param_1)

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


// ===== 004a94a4  FUN_004a94a4 =====

undefined8 FUN_004a94a4(void)

{
  return 0x1fb;
}


// ===== 004a94ac  FUN_004a94ac =====

bool FUN_004a94ac(undefined8 param_1,short param_2)

{
  return param_2 == 0x1fb || param_2 == 10;
}


// ===== 004a94c0  FUN_004a94c0 =====

undefined8 FUN_004a94c0(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2b4) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004a9638;
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
LAB_004a9638:
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
      if (param_2 != 5) goto LAB_004a9698;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004a961c;
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
LAB_004a961c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0x2b5) {
      if (param_2 == 0x2b4) {
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
      goto LAB_004a9698;
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
LAB_004a9698:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a96c0  rive::Dash::onAddedClean =====

/* rive::Dash::onAddedClean(rive::CoreContext*) */

undefined4 rive::Dash::onAddedClean(CoreContext *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),0x1fa);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 004a96f0  rive::Dash::lengthChanged =====

/* rive::Dash::lengthChanged() */

void __thiscall rive::Dash::lengthChanged(Dash *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x30);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x1fa), (uVar2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004a9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0xb0))();
    return;
  }
  return;
}


// ===== 004a9740  rive::Dash::lengthIsPercentageChanged =====

/* rive::Dash::lengthIsPercentageChanged() */

void __thiscall rive::Dash::lengthIsPercentageChanged(Dash *this)

{
                    /* WARNING: Could not recover jumptable at 0x004a9748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x90))();
  return;
}


// ===== 004a974c  rive::Dash::Dash =====

/* rive::Dash::Dash(float, bool) */

void __thiscall rive::Dash::Dash(Dash *this,float param_1,bool param_2)

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
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  puVar1 = PTR_vtable_0067d728;
  *(undefined4 *)(this + 0x88) = 0;
  this[0x8c] = (Dash)0x0;
  *(undefined **)this = puVar1 + 0x10;
  if (param_1 != 0.0) {
    *(float *)(this + 0x88) = param_1;
  }
  if (!param_2) {
    return;
  }
  this[0x8c] = (Dash)0x1;
  return;
}


// ===== 004a97b4  rive::Dash::normalizedLength =====

/* rive::Dash::normalizedLength(float, bool) const */

float __thiscall rive::Dash::normalizedLength(Dash *this,float param_1,bool param_2)

{
  Dash DVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x88);
  DVar1 = this[0x8c];
  if (param_2) {
    fVar2 = param_1;
    if (DVar1 != (Dash)0x0) {
      fVar2 = 1.0;
    }
    fVar3 = fmodf(fVar3,fVar2);
    if (0.0 <= fVar3) {
      fVar2 = -0.0;
    }
    fVar3 = fVar3 + fVar2;
  }
  fVar2 = 1.0;
  if (DVar1 != (Dash)0x0) {
    fVar2 = param_1;
  }
  return fVar3 * fVar2;
}


// ===== 004a981c  rive::DashBase::clone =====

/* rive::DashBase::clone() const */

Dash * __thiscall rive::DashBase::clone(DashBase *this)

{
  DashBase DVar1;
  Dash *this_00;
  
  this_00 = (Dash *)operator_new(0x90);
  Dash::Dash(this_00);
  DVar1 = this[0x8c];
  *(undefined4 *)(this_00 + 0x88) = *(undefined4 *)(this + 0x88);
  *(DashBase *)(this_00 + 0x8c) = DVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004a9870  FUN_004a9870 =====

void FUN_004a9870(long *param_1)

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


// ===== 004a98dc  FUN_004a98dc =====

void FUN_004a98dc(void)

{
  return;
}


// ===== 004a98e0  FUN_004a98e0 =====

void FUN_004a98e0(void)

{
  return;
}


// ===== 004a98e4  rive::DashEffectPath::invalidateEffect =====

/* rive::DashEffectPath::invalidateEffect() */

void __thiscall rive::DashEffectPath::invalidateEffect(DashEffectPath *this)

{
  this[0x50] = (DashEffectPath)0x0;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
  this[8] = (DashEffectPath)0x1;
  return;
}


// ===== 004a9904  rive::DashEffectPath::createPathMeasure =====

/* rive::DashEffectPath::createPathMeasure(rive::RawPath const*) */

void __thiscall rive::DashEffectPath::createPathMeasure(DashEffectPath *this,RawPath *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PathMeasure::PathMeasure((PathMeasure *)local_60,param_1,0.5);
  *(undefined4 *)(this + 0x60) = local_60[0];
  FUN_003dc300(this + 0x68);
  uVar3 = local_48;
  uVar2 = uStack_50;
  uStack_50 = 0;
  local_48 = 0;
  *(undefined8 *)(this + 0x70) = uVar2;
  *(undefined8 *)(this + 0x68) = local_58;
  *(undefined8 *)(this + 0x78) = uVar3;
  local_58 = 0;
  local_40 = &local_58;
  FUN_003dc3a8(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a9998  rive::PathDasher::invalidateDash =====

/* rive::PathDasher::invalidateDash() */

void rive::PathDasher::invalidateDash(void)

{
  return;
}


// ===== 004a999c  rive::PathDasher::dash =====

/* rive::PathDasher::dash(rive::ShapePaintPath*, rive::RawPath const*, rive::PathMeasure*,
   rive::Dash*, rive::Span<rive::Dash*>) */

char * rive::PathDasher::dash(undefined8 param_1,char *param_2)

{
  if ((*(long *)(param_2 + 8) == 0) || (*param_2 != '\0')) {
    param_2[0x48] = '\0';
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    *param_2 = '\x01';
    applyDash(param_1,param_2);
  }
  return param_2;
}


// ===== 004a99f0  rive::PathDasher::applyDash =====

/* rive::PathDasher::applyDash(rive::ShapePaintPath*, rive::RawPath const*, rive::PathMeasure*,
   rive::Dash*, rive::Span<rive::Dash*>) */

long rive::PathDasher::applyDash
               (undefined8 param_1,long param_2,undefined8 param_3,PathMeasure *param_4,long param_5
               ,long *param_6,ulong param_7)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_7 != 0) {
    fVar9 = *(float *)param_4;
    lVar4 = param_7 << 3;
    plVar5 = param_6;
    do {
      fVar10 = 1.0;
      if (*(char *)(*plVar5 + 0x8c) != '\0') {
        fVar10 = fVar9;
      }
      fVar10 = *(float *)(*plVar5 + 0x88) * fVar10;
      if (fVar10 != 0.0 && fVar10 < 0.0 == NAN(fVar10)) {
        if (fVar9 == 0.0 || fVar9 < 0.0 != NAN(fVar9)) {
          return param_2;
        }
        fVar8 = 1.0;
        fVar10 = fVar9;
        if (*(char *)(param_5 + 0x8c) != '\0') {
          fVar10 = 1.0;
          fVar8 = fVar9;
        }
        fVar7 = fmodf(*(float *)(param_5 + 0x88),fVar10);
        uVar6 = 0;
        fVar11 = 0.0;
        bVar2 = true;
        if (0.0 <= fVar7) {
          fVar10 = -0.0;
        }
        fVar8 = (fVar7 + fVar10) * fVar8;
        do {
          uVar1 = 0;
          if (param_7 != 0) {
            uVar1 = uVar6 / param_7;
          }
          fVar10 = 1.0;
          if (*(char *)(param_6[uVar6 - uVar1 * param_7] + 0x8c) != '\0') {
            fVar10 = fVar9;
          }
          fVar10 = *(float *)(param_6[uVar6 - uVar1 * param_7] + 0x88) * fVar10;
          fVar7 = fVar9;
          if (fVar10 == fVar9 || fVar10 < fVar9 != (NAN(fVar10) || NAN(fVar9))) {
            fVar7 = fVar10;
          }
          fVar10 = fVar8 + fVar7;
          if (fVar10 == fVar9 || fVar10 < fVar9 != (NAN(fVar10) || NAN(fVar9))) {
            if (bVar2) {
              PathMeasure::getSegment(param_4,fVar8,fVar10,(RawPath *)(param_2 + 0x10),true);
            }
          }
          else {
            if (bVar2) {
              if (fVar9 <= fVar8) {
                bVar3 = true;
              }
              else {
                PathMeasure::getSegment(param_4,fVar8,fVar9,(RawPath *)(param_2 + 0x10),true);
                if (*(long *)(param_4 + 0x10) - (long)*(long **)(param_4 + 8) == 8) {
                  bVar3 = *(char *)(**(long **)(param_4 + 8) + 0x3c) != '\0';
                }
                else {
                  bVar3 = false;
                }
                bVar3 = (bool)(bVar3 ^ 1);
              }
              PathMeasure::getSegment(param_4,0.0,fVar10 - fVar9,(RawPath *)(param_2 + 0x10),bVar3);
            }
            fVar10 = fVar7 + ((fVar10 - fVar9) - fVar7);
          }
          fVar8 = fVar10;
          fVar11 = fVar11 + fVar7;
          fVar9 = *(float *)param_4;
          bVar2 = (bool)(bVar2 ^ 1);
          uVar6 = uVar6 + 1;
        } while (fVar11 < fVar9);
        return param_2;
      }
      lVar4 = lVar4 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
  }
  return param_2;
}


// ===== 004a9bb0  rive::DashPath::onAddedClean =====

/* rive::DashPath::onAddedClean(rive::CoreContext*) */

undefined8 rive::DashPath::onAddedClean(CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  plVar14 = *(long **)(param_1 + 0x30);
  if (plVar14 == (long *)0x0) {
LAB_004a9d90:
    uVar6 = 2;
  }
  else {
    uVar3 = (**(code **)(*plVar14 + 0x10))(plVar14);
    if ((uVar3 & 0xffff) < 0x19 && (1 << (ulong)(uVar3 & 0x1f) & 0x1300000U) != 0) {
      lVar7 = 0xa8;
    }
    else {
      if ((uVar3 & 0xffff) != 0x285) goto LAB_004a9d90;
      lVar7 = 0xa0;
    }
    (*(code *)**(undefined8 **)((long)plVar14 + lVar7))((long)plVar14 + lVar7,param_1 + 0xb0);
    puVar1 = *(undefined8 **)(param_1 + 0x88);
    puVar2 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar14 = (long *)*puVar1;
      uVar4 = (**(code **)(*plVar14 + 0x18))(plVar14,0x1fb);
      if ((uVar4 & 1) != 0) {
        puVar16 = *(undefined8 **)(param_1 + 0xe8);
        if (puVar16 < *(undefined8 **)(param_1 + 0xf0)) {
          puVar17 = puVar16 + 1;
          *puVar16 = plVar14;
        }
        else {
          puVar15 = *(undefined8 **)(param_1 + 0xe0);
          lVar7 = (long)puVar16 - (long)puVar15 >> 3;
          uVar4 = lVar7 + 1;
          if (uVar4 >> 0x3d != 0) {
            FUN_004a9dc0();
LAB_004a9dbc:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar8 = (long)*(undefined8 **)(param_1 + 0xf0) - (long)puVar15;
          uVar10 = (long)uVar8 >> 2;
          if (uVar10 <= uVar4) {
            uVar10 = uVar4;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            if (uVar10 >> 0x3d != 0) goto LAB_004a9dbc;
            pvVar5 = operator_new(uVar10 << 3);
          }
          puVar9 = (undefined8 *)((long)pvVar5 + lVar7 * 8);
          puVar17 = puVar9 + 1;
          *puVar9 = plVar14;
          if ((long)puVar16 - (long)puVar15 != 0) {
            uVar4 = ((long)puVar16 - (long)puVar15) - 8;
            puVar18 = puVar16;
            if ((0x37 < uVar4) &&
               (0x1f < (ulong)((long)puVar16 + (-((long)puVar16 - (long)puVar15) - (long)pvVar5))))
            {
              puVar12 = puVar9 + -2;
              puVar13 = puVar16 + -2;
              uVar4 = (uVar4 >> 3) + 1;
              uVar11 = uVar4 & 0x3ffffffffffffffc;
              puVar18 = puVar16 + -uVar11;
              uVar8 = uVar11;
              do {
                puVar16 = puVar13 + -1;
                uVar20 = puVar13[-2];
                uVar19 = puVar13[1];
                uVar6 = *puVar13;
                uVar8 = uVar8 - 4;
                puVar13 = puVar13 + -4;
                puVar12[-1] = *puVar16;
                puVar12[-2] = uVar20;
                puVar12[1] = uVar19;
                *puVar12 = uVar6;
                puVar12 = puVar12 + -4;
              } while (uVar8 != 0);
              puVar9 = puVar9 + -uVar11;
              puVar16 = puVar15;
              if (uVar4 == uVar11) goto LAB_004a9d74;
            }
            do {
              puVar18 = puVar18 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar18;
            } while (puVar18 != puVar15);
            puVar16 = *(undefined8 **)(param_1 + 0xe0);
          }
LAB_004a9d74:
          *(undefined8 **)(param_1 + 0xe0) = puVar9;
          *(undefined8 **)(param_1 + 0xe8) = puVar17;
          *(void **)(param_1 + 0xf0) = (void *)((long)pvVar5 + uVar10 * 8);
          if (puVar16 != (undefined8 *)0x0) {
            operator_delete(puVar16);
          }
        }
        *(undefined8 **)(param_1 + 0xe8) = puVar17;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


// ===== 004a9dc0  FUN_004a9dc0 =====

void FUN_004a9dc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004a9dd4  rive::DashPath::offsetChanged =====

/* rive::DashPath::offsetChanged() */

void __thiscall rive::DashPath::offsetChanged(DashPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004a9ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0xb0) + 0x38))();
  return;
}


// ===== 004a9de0  rive::DashPath::offsetIsPercentageChanged =====

/* rive::DashPath::offsetIsPercentageChanged() */

void __thiscall rive::DashPath::offsetIsPercentageChanged(DashPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004a9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0xb0) + 0x38))();
  return;
}


// ===== 004a9dec  rive::DashPath::updateEffect =====

/* rive::DashPath::updateEffect(rive::PathProvider*, rive::ShapePaintPath const*, rive::ShapePaint
   const*) */

void __thiscall
rive::DashPath::updateEffect
          (DashPath *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  ShapePaintPath SVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ShapePaintPath *this_00;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined4 local_100 [2];
  long local_f8;
  long lStack_f0;
  long local_e8;
  long *local_e0;
  undefined **local_d8 [2];
  byte local_c8;
  void *local_b8;
  void *local_90;
  void *local_88;
  void *local_70;
  void *local_68;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = *(ulong *)(this + 0xc0);
  if (uVar6 != 0) {
    uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar14 = NEON_cnt(uVar6,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar7 = ((ulong)param_1 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar10 = uVar6 - 1 & uVar7;
    }
    else {
      uVar10 = uVar7;
      if (uVar6 <= uVar7) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar7 / uVar6;
        }
        uVar10 = uVar7 - uVar10 * uVar6;
      }
    }
    plVar11 = *(long **)(*(long *)(this + 0xb8) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar12 = plVar11[1];
        if (uVar12 == uVar7) {
          if ((PathProvider *)plVar11[2] == param_1) {
            plVar11 = (long *)plVar11[3];
            this_00 = (ShapePaintPath *)(**(code **)(*plVar11 + 0x18))(plVar11);
            if (*(long *)(this_00 + 8) == 0 || *this_00 != (ShapePaintPath)0x0) {
              SVar1 = param_2[0x50];
              this_00[0x48] = (ShapePaintPath)0x0;
              this_00[0x50] = SVar1;
              *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)(this_00 + 0x10);
              lVar9 = *(long *)param_3;
              *(undefined8 *)(this_00 + 0x30) = *(undefined8 *)(this_00 + 0x28);
              *this_00 = (ShapePaintPath)0x1;
              iVar5 = (**(code **)(lVar9 + 0xf8))(param_3);
              if (iVar5 == 1) {
                if (*(long *)(lVar3 + 0x28) == local_48) {
                  ShapePaintPath::addPath(this_00,(RawPath *)(param_2 + 0x10),(Mat2D *)0x0);
                  return;
                }
                goto LAB_004aa088;
              }
              Dash::Dash((Dash *)local_d8,*(float *)(this + 0xa0),(bool)this[0xa4]);
              PathMeasure::PathMeasure((PathMeasure *)local_100,(RawPath *)(param_2 + 0x10),0.5);
              *(undefined4 *)(plVar11 + 0xc) = local_100[0];
              FUN_003dc300(plVar11 + 0xd);
              lVar4 = local_e8;
              lVar9 = lStack_f0;
              lStack_f0 = 0;
              local_e8 = 0;
              plVar11[0xe] = lVar9;
              plVar11[0xd] = local_f8;
              plVar11[0xf] = lVar4;
              local_f8 = 0;
              local_e0 = &local_f8;
              uVar14 = FUN_003dc3a8(&local_e0);
              PathDasher::applyDash(uVar14,this_00);
              local_d8[0] = (undefined **)(PTR_vtable_0067cee0 + 0x10);
              if (local_70 != (void *)0x0) {
                local_68 = local_70;
                operator_delete(local_70);
              }
              if (local_90 != (void *)0x0) {
                local_88 = local_90;
                operator_delete(local_90);
              }
              local_d8[0] = &PTR_FUN_00678650;
              if ((local_c8 & 1) != 0) {
                operator_delete(local_b8);
              }
            }
            break;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar12 = uVar12 & uVar6 - 1;
          }
          else if (uVar6 <= uVar12) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar12 / uVar6;
            }
            uVar12 = uVar12 - uVar2 * uVar6;
          }
          if (uVar12 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_004aa088:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aa08c  rive::DashPath::updateEffect =====

/* non-virtual thunk to rive::DashPath::updateEffect(rive::PathProvider*, rive::ShapePaintPath
   const*, rive::ShapePaint const*) */

void __thiscall
rive::DashPath::updateEffect
          (DashPath *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  updateEffect(this + -0xb0,param_1,param_2,param_3);
  return;
}


// ===== 004aa094  rive::DashPath::invalidateDash =====

/* rive::DashPath::invalidateDash() */

void __thiscall rive::DashPath::invalidateDash(DashPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004aa09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0xb0) + 0x38))();
  return;
}


// ===== 004aa0a0  rive::DashPath::invalidateDash =====

/* non-virtual thunk to rive::DashPath::invalidateDash() */

void __thiscall rive::DashPath::invalidateDash(DashPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004aa0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 8) + 0x38))();
  return;
}


// ===== 004aa0ac  rive::DashPath::parentPaint =====

/* rive::DashPath::parentPaint() */

long * __thiscall rive::DashPath::parentPaint(DashPath *this)

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


// ===== 004aa118  rive::DashPath::parentPaint =====

/* non-virtual thunk to rive::DashPath::parentPaint() */

long * __thiscall rive::DashPath::parentPaint(DashPath *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + -0x80);
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


// ===== 004aa184  rive::DashPath::createEffectPath =====

/* rive::DashPath::createEffectPath() */

long * rive::DashPath::createEffectPath(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x80);
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
  puVar1 = PTR_vtable_0067d730;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0xd] = 0;
  *(undefined8 *)(plVar2 + 0xc) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar2 + 1),true);
  PathMeasure::PathMeasure((PathMeasure *)(plVar2 + 0xc));
  return plVar2;
}


// ===== 004aa1e8  FUN_004aa1e8 =====

void FUN_004aa1e8(long *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1 + 0xd;
  *param_1 = (long)(PTR_vtable_0067d730 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x004aa28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aa2b4  FUN_004aa2b4 =====

void FUN_004aa2b4(long *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1 + 0xd;
  *param_1 = (long)(PTR_vtable_0067d730 + 0x10);
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


// ===== 004aa370  FUN_004aa370 =====

long FUN_004aa370(long param_1)

{
  return param_1 + 8;
}


// ===== 004aa378  rive::DashPath::createEffectPath =====

/* non-virtual thunk to rive::DashPath::createEffectPath() */

long * __thiscall rive::DashPath::createEffectPath(DashPath *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x80);
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
  puVar1 = PTR_vtable_0067d730;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0xd] = 0;
  *(undefined8 *)(plVar2 + 0xc) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar2 + 1),true);
  PathMeasure::PathMeasure((PathMeasure *)(plVar2 + 0xc));
  return plVar2;
}


// ===== 004aa3dc  FUN_004aa3dc =====

void FUN_004aa3dc(void)

{
  return;
}


// ===== 004aa3e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004aa3e4  FUN_004aa3e4 =====

void FUN_004aa3e4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  
  pvVar4 = (void *)param_1[0x1c];
  puVar1 = PTR_vtable_0067d388 + 0xe8;
  puVar2 = PTR_vtable_0067d388 + 0x110;
  *param_1 = (long)(PTR_vtable_0067d388 + 0x10);
  param_1[0x15] = (long)puVar1;
  param_1[0x16] = (long)puVar2;
  if (pvVar4 != (void *)0x0) {
    param_1[0x1d] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  plVar5 = (long *)param_1[0x19];
  param_1[0x16] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar5 != (long *)0x0) {
    do {
      if ((long *)plVar5[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[3] + 8))();
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar3 = (undefined8 *)param_1[0x19];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar3;
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar4;
    }
  }
  pvVar4 = (void *)param_1[0x17];
  param_1[0x17] = 0;
  if (pvVar4 != (void *)0x0) {
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


// ===== 004aa504  FUN_004aa504 =====

void FUN_004aa504(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  
  pvVar4 = (void *)param_1[0x1c];
  puVar1 = PTR_vtable_0067d388 + 0xe8;
  puVar2 = PTR_vtable_0067d388 + 0x110;
  *param_1 = (long)(PTR_vtable_0067d388 + 0x10);
  param_1[0x15] = (long)puVar1;
  param_1[0x16] = (long)puVar2;
  if (pvVar4 != (void *)0x0) {
    param_1[0x1d] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  plVar5 = (long *)param_1[0x19];
  param_1[0x16] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar5 != (long *)0x0) {
    do {
      if ((long *)plVar5[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[3] + 8))();
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar3 = (undefined8 *)param_1[0x19];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar3;
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar4;
    }
  }
  pvVar4 = (void *)param_1[0x17];
  param_1[0x17] = 0;
  if (pvVar4 != (void *)0x0) {
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
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004aa620  FUN_004aa620 =====

undefined8 FUN_004aa620(void)

{
  return 0x1fa;
}


// ===== 004aa628  FUN_004aa628 =====

bool FUN_004aa628(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x1fa;
}


// ===== 004aa648  FUN_004aa648 =====

undefined8 FUN_004aa648(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2b2) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004aa7c0;
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
LAB_004aa7c0:
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
      if (param_2 != 5) goto LAB_004aa820;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004aa7a4;
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
LAB_004aa7a4:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0x2b3) {
      if (param_2 == 0x2b2) {
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
      goto LAB_004aa820;
    }
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0xa4) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0xa4) = *pcVar7 == '\x01';
    }
  }
  uVar5 = 1;
LAB_004aa820:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aa848  FUN_004aa848 =====

void FUN_004aa848(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  
  pvVar4 = (void *)param_1[7];
  puVar1 = PTR_vtable_0067d388 + 0xe8;
  puVar2 = PTR_vtable_0067d388 + 0x110;
  param_1[-0x15] = (long)(PTR_vtable_0067d388 + 0x10);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  if (pvVar4 != (void *)0x0) {
    param_1[8] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  plVar5 = (long *)param_1[4];
  param_1[1] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar5 != (long *)0x0) {
    do {
      if ((long *)plVar5[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[3] + 8))();
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar3 = (undefined8 *)param_1[4];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar3;
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar4;
    }
  }
  pvVar4 = (void *)param_1[2];
  param_1[2] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[-4];
  param_1[-0x15] = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[-3] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[-8];
  param_1[-0x15] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[-7] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[-0xc];
  if (pvVar4 != (void *)0x0) {
    param_1[-0xb] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  param_1[-0x15] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x13) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[-0x11]);
  return;
}


// ===== 004aa968  FUN_004aa968 =====

void FUN_004aa968(long param_1)

{
  FUN_004aa504(param_1 + -0xa8);
  return;
}


// ===== 004aa970  FUN_004aa970 =====

void FUN_004aa970(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  
  pvVar4 = (void *)param_1[6];
  puVar1 = PTR_vtable_0067d388 + 0xe8;
  puVar2 = PTR_vtable_0067d388 + 0x110;
  param_1[-0x16] = (long)(PTR_vtable_0067d388 + 0x10);
  param_1[-1] = (long)puVar1;
  *param_1 = (long)puVar2;
  if (pvVar4 != (void *)0x0) {
    param_1[7] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  plVar5 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar5 != (long *)0x0) {
    do {
      if ((long *)plVar5[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[3] + 8))();
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar3 = (undefined8 *)param_1[3];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar3;
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar4;
    }
  }
  pvVar4 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[-5];
  param_1[-0x16] = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[-4] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[-9];
  param_1[-0x16] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[-8] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[-0xd];
  if (pvVar4 != (void *)0x0) {
    param_1[-0xc] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  param_1[-0x16] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x14) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[-0x12]);
  return;
}


// ===== 004aaa90  FUN_004aaa90 =====

void FUN_004aaa90(long param_1)

{
  FUN_004aa504(param_1 + -0xb0);
  return;
}


// ===== 004aaa98  rive::DashPathBase::clone =====

/* rive::DashPathBase::clone() const */

long * __thiscall rive::DashPathBase::clone(DashPathBase *this)

{
  DashPathBase DVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  
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
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x13] = 0;
  puVar2 = PTR_vtable_0067d388;
  *(undefined4 *)(plVar3 + 0x1b) = 0x3f800000;
  uVar4 = *(undefined4 *)(this + 0xa0);
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x15] = (long)(puVar2 + 0xe8);
  plVar3[0x16] = (long)(puVar2 + 0x110);
  DVar1 = this[0xa4];
  plVar3[0x1c] = 0;
  *(undefined4 *)(plVar3 + 0x14) = uVar4;
  *(DashPathBase *)((long)plVar3 + 0xa4) = DVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004aab60  FUN_004aab60 =====

void FUN_004aab60(long *param_1)

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


// ===== 004aabec  FUN_004aabec =====

void FUN_004aabec(void)

{
  return;
}


// ===== 004aabf0  FUN_004aabf0 =====

void FUN_004aabf0(void)

{
  return;
}


// ===== 004aabf4  rive::EffectsContainer::addStrokeEffect =====

/* rive::EffectsContainer::addStrokeEffect(rive::StrokeEffect*) */

void __thiscall
rive::EffectsContainer::addStrokeEffect(EffectsContainer *this,StrokeEffect *param_1)

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
    goto LAB_004aad34;
  }
  puVar9 = *(undefined8 **)(this + 8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004aad58();
LAB_004aad54:
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
    if (uVar5 >> 0x3d != 0) goto LAB_004aad54;
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
      if (uVar6 == uVar7) goto LAB_004aad20;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 8);
  }
LAB_004aad20:
  *(undefined8 **)(this + 8) = puVar4;
  *(undefined8 **)(this + 0x10) = puVar13;
  *(void **)(this + 0x18) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004aad34:
  *(undefined8 **)(this + 0x10) = puVar13;
  return;
}


// ===== 004aad58  FUN_004aad58 =====

void FUN_004aad58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004aad6c  rive::EffectsContainer::from =====

/* rive::EffectsContainer::from(rive::Component*) */

Component * rive::EffectsContainer::from(Component *param_1)

{
  uint uVar1;
  
  if (param_1 != (Component *)0x0) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      param_1 = param_1 + 0xa8;
    }
    else if ((uVar1 & 0xffff) == 0x285) {
      param_1 = param_1 + 0xa0;
    }
    else {
      param_1 = (Component *)0x0;
    }
  }
  return param_1;
}


// ===== 004aadd4  rive::EffectsContainer::invalidateEffects =====

/* rive::EffectsContainer::invalidateEffects(rive::StrokeEffect*) */

void __thiscall
rive::EffectsContainer::invalidateEffects(EffectsContainer *this,StrokeEffect *param_1)

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
  return;
}


// ===== 004aae48  rive::EffectsContainer::lastEffectPath =====

/* rive::EffectsContainer::lastEffectPath(rive::PathProvider*) */

long __thiscall rive::EffectsContainer::lastEffectPath(EffectsContainer *this,PathProvider *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  int iVar5;
  
  if (*(long *)(this + 0x10) - *(long *)(this + 8) != 0) {
    lVar4 = (*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) + -1;
    do {
      plVar2 = *(long **)(*(long *)(this + 8) + lVar4 * 8);
      lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = lVar4 + -1;
      }
      iVar5 = 3;
      if (lVar4 != 0) {
        iVar5 = 0;
      }
      if (lVar3 != 0) {
        iVar5 = 1;
        unaff_x20 = lVar3;
        lVar1 = lVar4;
      }
      lVar4 = lVar1;
    } while (iVar5 == 0);
    if (iVar5 != 3) {
      return unaff_x20;
    }
  }
  return 0;
}


// ===== 004aaedc  rive::EffectsContainer::invalidateEffects =====

/* rive::EffectsContainer::invalidateEffects() */

void __thiscall rive::EffectsContainer::invalidateEffects(EffectsContainer *this)

{
                    /* WARNING: Could not recover jumptable at 0x004aaee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))(this,0);
  return;
}


// ===== 004aaeec  rive::Feather::validate =====

/* rive::Feather::validate(rive::CoreContext*) */

undefined8 __thiscall rive::Feather::validate(Feather *this,CoreContext *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xb), (uVar2 & 1) != 0)) {
    plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
                    /* WARNING: Could not recover jumptable at 0x004aaf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,0x15);
    return uVar3;
  }
  return 0;
}


// ===== 004aaf68  rive::Feather::onAddedDirty =====

/* rive::Feather::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::Feather::onAddedDirty(Feather *this,CoreContext *param_1)

{
  Feather *pFVar1;
  long *plVar2;
  long lVar3;
  
  pFVar1 = (Feather *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pFVar1 = (Feather *)(param_1 + -0x998);
  }
  *(Feather **)(this + 0x40) = pFVar1;
  *(Feather **)(this + 0x80) = pFVar1;
  if (pFVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar3 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar3 + 0x90))(plVar2,this);
  }
  *(Feather **)(*(long *)(this + 0x30) + 0xd8) = this;
  return 0;
}


// ===== 004aafd8  rive::Feather::update =====

/* rive::Feather::update(rive::ComponentDirt) */

void __thiscall rive::Feather::update(Feather *this,uint param_2)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ShapePaintPath *pSVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(this + 0x30);
  if ((param_2 >> 9 & 1) != 0) {
    (**(code **)(*(long *)plVar6[0x19] + 0x38))(*(undefined4 *)(this + 0xa4));
  }
  if (((param_2 & 0x90) == 0) || (this[0xb0] == (Feather)0x0)) goto LAB_004ab11c;
  plVar7 = (long *)plVar6[6];
  iVar1 = *(int *)(this + 0xa0);
  uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
  if (uVar3 < 0x201) {
    lVar8 = 400;
    if (uVar3 < 0x89) {
      if (uVar3 != 1) {
        if (uVar3 != 3) goto LAB_004ab11c;
        goto LAB_004ab0c0;
      }
    }
    else if (uVar3 == 0x89) {
      lVar8 = 0x138;
    }
    else if (uVar3 != 0x199) goto LAB_004ab11c;
  }
  else {
    if (uVar3 < 0x23c) {
      if ((uVar3 != 0x201) && (uVar3 != 0x23b)) goto LAB_004ab11c;
    }
    else if ((uVar3 != 0x23c) && ((uVar3 != 0x23e && (uVar3 != 0x23f)))) goto LAB_004ab11c;
LAB_004ab0c0:
    lVar8 = 0x178;
  }
  puVar4 = (undefined8 *)(**(code **)(*(long *)((long)plVar7 + lVar8) + 0x20))((long)plVar7 + lVar8)
  ;
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  local_50 = puVar4[2];
  pSVar5 = (ShapePaintPath *)(**(code **)(*plVar6 + 0xf0))(plVar6,(long)plVar7 + lVar8);
  if (pSVar5 != (ShapePaintPath *)0x0) {
    rebuildInnerPath(this,pSVar5,(Mat2D *)&local_60,iVar1 == 0);
    this[0x110] = (Feather)0x1;
  }
LAB_004ab11c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ab150  rive::Feather::rebuildInnerPath =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Feather::rebuildInnerPath(rive::ShapePaintPath const*, rive::Mat2D const&, bool) */

void __thiscall
rive::Feather::rebuildInnerPath(Feather *this,ShapePaintPath *param_1,Mat2D *param_2,bool param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  RawPath *this_00;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pauVar5 = *(undefined1 (**) [16])(param_1 + 0x10);
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x18);
  this[0x110] = (Feather)0x0;
  lVar6 = (long)pauVar1 - (long)pauVar5;
  uVar3 = lVar6 >> 3;
  if (((uint)lVar6 >> 3 & 1) == 0) {
    if (pauVar5 == pauVar1) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = *pauVar5;
    }
    uVar4 = 2;
    auVar10 = auVar8;
    if (uVar3 < 3) goto LAB_004ab1ec;
  }
  else {
    auVar8._0_8_ = *(undefined8 *)*pauVar5;
    uVar4 = 1;
    auVar8._8_8_ = auVar8._0_8_;
    auVar10 = auVar8;
    if (uVar3 < 2) goto LAB_004ab1ec;
  }
  pauVar5 = (undefined1 (*) [16])(*pauVar5 + uVar4 * 8);
  auVar10 = auVar8;
  do {
    uVar4 = uVar4 + 2;
    auVar8 = NEON_fminnm(auVar8,*pauVar5,4);
    auVar10 = NEON_fmaxnm(auVar10,*pauVar5,4);
    pauVar5 = pauVar5 + 1;
  } while (uVar4 < uVar3);
LAB_004ab1ec:
  auVar12 = NEON_ext(auVar8,auVar8,8,1);
  auVar13 = NEON_ext(auVar10,auVar10,8,1);
  local_80 = *(undefined8 *)(this + 0xa8);
  uVar7 = NEON_fminnm(auVar8._0_8_,auVar12._0_8_,4);
  uVar9 = NEON_fmaxnm(auVar10._0_8_,auVar13._0_8_,4);
  fVar11 = *(float *)(this + 0xa4) * 1.5;
  local_70 = CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar11,(float)uVar7 - fVar11);
  uStack_68 = CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar11,(float)uVar9 + fVar11);
  if (param_3) {
    fVar11 = -(float)*(undefined8 *)(param_2 + 4);
    fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    fVar15 = (float)NEON_fmadd(*(float *)param_2,*(float *)(param_2 + 0xc),fVar11 * fVar14);
    if (fVar15 == 0.0) {
      auVar10._8_8_ = _UNK_0024e5b8;
      auVar10._0_8_ = _DAT_0024e5b0;
    }
    else {
      fVar15 = 1.0 / fVar15;
      auVar10._0_4_ = *(float *)(param_2 + 0xc) * fVar15;
      auVar10._4_4_ = fVar11 * fVar15;
      auVar10._8_4_ = -fVar14 * fVar15;
      auVar10._12_4_ = *(float *)param_2 * fVar15;
    }
    auVar8 = NEON_ext(auVar10,auVar10,8,1);
    fVar11 = (float)((ulong)local_80 >> 0x20);
    local_80 = CONCAT44(auVar8._4_4_ * fVar11 + auVar10._4_4_ * (float)local_80,
                        auVar8._0_4_ * fVar11 + auVar10._0_4_ * (float)local_80);
  }
  this_00 = (RawPath *)(this + 200);
  this[0x100] = (Feather)0x0;
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)this_00;
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(this + 0xe0);
  this[0xb8] = (Feather)0x1;
  RawPath::addRect(this_00,&local_70,0);
  uStack_58 = _UNK_0024e5b8;
  local_60 = _DAT_0024e5b0;
  local_50 = local_80;
  auVar8 = RawPath::addPathBackwards(this_00,(RawPath *)(param_1 + 0x10),(Mat2D *)&local_60);
  RawPath::pruneEmptySegments(this_00,auVar8._0_8_,auVar8._8_8_);
  this[0xb8] = (Feather)0x1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ab324  rive::Feather::buildDependencies =====

/* rive::Feather::buildDependencies() */

void __thiscall rive::Feather::buildDependencies(Feather *this)

{
  Component *this_00;
  ulong uVar1;
  Component *pCVar2;
  
  pCVar2 = *(Component **)(*(long *)(this + 0x30) + 0x30);
  if (pCVar2 != (Component *)0x0) {
    uVar1 = (**(code **)(*(long *)pCVar2 + 0x18))(pCVar2,3);
    this_00 = pCVar2 + 0x1a0;
    if ((uVar1 & 1) == 0) {
      this_00 = pCVar2;
    }
    Component::addDependent(this_00,(Component *)this);
    return;
  }
  return;
}


// ===== 004ab37c  rive::Feather::strengthChanged =====

/* rive::Feather::strengthChanged() */

void __thiscall rive::Feather::strengthChanged(Feather *this)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  
  uVar3 = 0x200;
  if (this[0xb0] != (Feather)0x0) {
    uVar3 = 0x280;
  }
  if ((uVar3 & (*(ushort *)(this + 0x60) ^ 0xffff)) != 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | uVar3;
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


// ===== 004ab3f8  rive::Feather::offsetXChanged =====

/* rive::Feather::offsetXChanged() */

void __thiscall rive::Feather::offsetXChanged(Feather *this)

{
                    /* WARNING: Could not recover jumptable at 0x004ab400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa0))();
  return;
}


// ===== 004ab404  rive::Feather::offsetYChanged =====

/* rive::Feather::offsetYChanged() */

void __thiscall rive::Feather::offsetYChanged(Feather *this)

{
                    /* WARNING: Could not recover jumptable at 0x004ab40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa0))();
  return;
}


// ===== 004ab410  FUN_004ab410 =====

void FUN_004ab410(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0x1c];
  *param_1 = (long)(PTR_vtable_0067d3b8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0x1d] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x19];
  if (pvVar2 != (void *)0x0) {
    param_1[0x1a] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0x18];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
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


// ===== 004ab4fc  FUN_004ab4fc =====

void FUN_004ab4fc(void *param_1)

{
  FUN_004ab410();
  operator_delete(param_1);
  return;
}


// ===== 004ab520  FUN_004ab520 =====

undefined8 FUN_004ab520(void)

{
  return 0x215;
}


// ===== 004ab528  FUN_004ab528 =====

bool FUN_004ab528(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x215;
}


// ===== 004ab548  FUN_004ab548 =====

undefined8 FUN_004ab548(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x2ed) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004ab768;
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
LAB_004ab768:
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
          goto LAB_004ab7b8;
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
LAB_004ab7b8:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
    else {
      if (param_2 != 0x2ec) goto LAB_004ab828;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004ab7a0;
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
LAB_004ab7a0:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xa0) = (int)uVar6;
    }
  }
  else {
    if (param_2 < 0x2ef) {
      if (param_2 == 0x2ed) {
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
      else if (param_2 == 0x2ee) {
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
      goto LAB_004ab828;
    }
    if (param_2 == 0x2ef) {
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
      *(undefined4 *)(param_1 + 0xac) = uVar15;
      goto LAB_004ab828;
    }
    if (param_2 != 0x2f0) goto LAB_004ab828;
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0xb0) = *pcVar7 == '\x01';
    }
  }
  uVar5 = 1;
LAB_004ab828:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ab850  FUN_004ab850 =====

void FUN_004ab850(void)

{
  return;
}


// ===== 004ab854  FUN_004ab854 =====

void FUN_004ab854(void)

{
  return;
}


// ===== 004ab858  rive::FeatherBase::clone =====

/* rive::FeatherBase::clone() const */

long * __thiscall rive::FeatherBase::clone(FeatherBase *this)

{
  undefined4 uVar1;
  FeatherBase FVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  plVar4 = (long *)operator_new(0x118);
  plVar4[0x22] = 0;
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
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
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
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[6] = 0;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x11] = 0;
  puVar3 = PTR_vtable_0067d3b8;
  plVar4[0x14] = 0x4140000000000000;
  plVar4[0x15] = 0;
  *(undefined1 *)(plVar4 + 0x16) = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar4 + 0x17),true);
  uVar1 = *(undefined4 *)(this + 0xa0);
  uVar5 = *(undefined8 *)(this + 0xa4);
  uVar6 = *(undefined4 *)(this + 0xac);
  *(undefined1 *)(plVar4 + 0x22) = 1;
  *(undefined4 *)(plVar4 + 0x14) = uVar1;
  FVar2 = this[0xb0];
  *(undefined8 *)((long)plVar4 + 0xa4) = uVar5;
  *(undefined4 *)((long)plVar4 + 0xac) = uVar6;
  *(FeatherBase *)(plVar4 + 0x16) = FVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 004ab948  FUN_004ab948 =====

void FUN_004ab948(long *param_1)

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


// ===== 004ab9d4  FUN_004ab9d4 =====

void FUN_004ab9d4(void)

{
  return;
}


