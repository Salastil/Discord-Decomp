// ===== 0013aa70  _JNIEnv::CallIntMethod =====

/* _JNIEnv::CallIntMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 400))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013ab0c  FUN_0013ab0c =====

void FUN_0013ab0c(undefined8 *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      pbVar3 = (byte *)param_1[5];
      pvVar2 = (void *)*param_1;
      if (pbVar3 != (byte *)0x0) {
        pbVar1 = (byte *)param_1[6];
        pbVar4 = pbVar3;
        if (pbVar1 != pbVar3) {
          do {
            pbVar4 = pbVar1 + -0x18;
            if ((*pbVar4 & 1) != 0) {
              operator_delete(*(void **)(pbVar1 + -8));
            }
            pbVar1 = pbVar4;
          } while (pbVar4 != pbVar3);
          pbVar4 = (byte *)param_1[5];
        }
        param_1[6] = pbVar3;
        operator_delete(pbVar4);
      }
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        operator_delete((void *)param_1[4]);
      }
      operator_delete(param_1);
      param_1 = (undefined8 *)pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}


// ===== 0013abac  FUN_0013abac =====

void FUN_0013abac(int *param_1)

{
  byte *****pppppbVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  double dVar6;
  undefined1 auVar7 [16];
  byte ****local_68;
  byte ****local_60;
  byte ****ppppbStack_58;
  byte ****local_50;
  byte ****ppppbStack_48;
  byte ****local_40;
  byte ****ppppbStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if (param_1[0xc] == 1) {
    dVar6 = (double)facebook::jsi::Value::asNumber();
    piVar5 = (int *)(long)dVar6;
  }
  else {
    if (param_1[0xc] != 0) {
LAB_0013ad10:
      if (*(long *)(lVar4 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_0012e304();
      }
      goto LAB_0013ad40;
    }
    iVar3 = *param_1;
    if (iVar3 < 4) {
      if (iVar3 == 2) {
        piVar5 = (int *)(ulong)*(byte *)(param_1 + 2);
      }
      else {
        if (iVar3 != 3) {
LAB_0013ad24:
          if (*(long *)(lVar4 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00123890("int/double/bool/string");
          }
          goto LAB_0013ad40;
        }
        piVar5 = (int *)FUN_00137738(param_1 + 2);
      }
    }
    else if (iVar3 == 6) {
      uVar2 = (ulong)(*(byte *)(param_1 + 2) >> 1);
      local_60 = (byte ****)((long)param_1 + 9);
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 4);
        local_60 = (byte ****)*(byte ******)(param_1 + 6);
      }
      ppppbStack_58 = (byte ****)((long)local_60 + uVar2);
      local_50 = local_60;
      ppppbStack_48 = ppppbStack_58;
      auVar7 = folly::detail::str_to_integral<long>((Range *)&local_50);
      piVar5 = auVar7._8_8_;
      param_1 = auVar7._0_8_;
      if (((ulong)param_1 & 0xff) != 1) {
LAB_0013acec:
        local_50 = (byte ****)&local_60;
        if (*(long *)(lVar4 + 0x28) != local_28) goto LAB_0013ad40;
        param_1 = (int *)FUN_00137bb0(&local_50,(ulong)param_1 >> 8);
        goto LAB_0013ad10;
      }
      local_30 = 1;
      local_40 = local_50;
      ppppbStack_38 = ppppbStack_48;
      pppppbVar1 = (byte *****)local_50;
      while( true ) {
        if ((byte *****)ppppbStack_48 == pppppbVar1) break;
        if ((*(byte *)pppppbVar1 != 0x20) && (4 < *(byte *)pppppbVar1 - 9)) {
          local_68 = (byte ****)&local_40;
          param_1 = piVar5;
          if (*(long *)(lVar4 + 0x28) != local_28) goto LAB_0013ad40;
          param_1 = (int *)FUN_00137cf4(&local_68);
          goto LAB_0013acec;
        }
        pppppbVar1 = (byte *****)((long)pppppbVar1 + 1);
      }
    }
    else {
      if (iVar3 != 4) goto LAB_0013ad24;
      piVar5 = *(int **)(param_1 + 2);
    }
  }
  param_1 = piVar5;
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
LAB_0013ad40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0013ad44  FUN_0013ad44 =====

void FUN_0013ad44(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00134010(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x656e6f6e) {
      *param_2 = 1;
    }
    else {
      if ((int)*plVar2 != 0x6f747561) goto LAB_0013ae80;
      *param_2 = 3;
    }
  }
  else {
    if (uVar1 != 8) {
LAB_0013ae80:
      if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0013ae90 to 0013ae93 has its CatchHandler @ 0013ae94 */
        abort();
      }
      goto LAB_0013aec0;
    }
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x656e6f6e2d786f62) {
      *param_2 = 0;
    }
    else {
      if (*plVar2 != 0x796c6e6f2d786f62) goto LAB_0013ae80;
      *param_2 = 2;
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_0013aec0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013aec4  FUN_0013aec4 =====

void FUN_0013aec4(undefined8 param_1,byte *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00134010(&local_40);
  if ((*param_2 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 0x10));
  }
  *(undefined8 *)(param_2 + 8) = uStack_38;
  *(undefined8 *)param_2 = local_40;
  *(undefined8 *)(param_2 + 0x10) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013af30  FUN_0013af30 =====

void FUN_0013af30(dynamic *param_1,dynamic *param_2)

{
  long lVar1;
  function *pfVar2;
  long lVar3;
  dynamic adStack_a0 [48];
  function local_70 [32];
  function *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x30) == 1) {
    local_50 = (function *)0x0;
                    /* try { // try from 0013af80 to 0013af93 has its CatchHandler @ 0013b00c */
    facebook::jsi::dynamicFromValue(*(Runtime **)param_1,(Value *)(param_1 + 8),local_70);
    if (local_50 == local_70) {
      lVar3 = 4;
      pfVar2 = local_70;
    }
    else {
      if (local_50 == (function *)0x0) goto LAB_0013afc0;
      lVar3 = 5;
      pfVar2 = local_50;
    }
    (**(code **)(*(long *)pfVar2 + lVar3 * 8))();
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0012e304();
      }
      goto LAB_0013b058;
    }
    folly::dynamic::dynamic(adStack_a0,param_1);
  }
LAB_0013afc0:
  folly::dynamic::operator=(param_2,adStack_a0);
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0013b058:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013b05c  FUN_0013b05c =====

void FUN_0013b05c(undefined8 *param_1,undefined8 *param_2)

{
  ulong __n;
  void *__dest;
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = (void *)*param_2;
  __n = param_2[1] - (long)pvVar2;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0013b0bc to 0013b0bf has its CatchHandler @ 0013b0c0 */
      uVar1 = FUN_0013b6a0();
                    /* catch() { ... } // from try @ 0013b088 with catch @ 0013b0c0
                       catch() { ... } // from try @ 0013b0bc with catch @ 0013b0c0 */
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        operator_delete(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar1);
    }
                    /* try { // try from 0013b088 to 0013b08f has its CatchHandler @ 0013b0c0 */
    __dest = operator_new(__n);
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,pvVar2,__n);
    param_1[1] = (long)__dest + __n;
  }
  return;
}


// ===== 0013b0e0  FUN_0013b0e0 =====

void FUN_0013b0e0(int *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  void *pvVar16;
  undefined4 *puVar17;
  void *pvVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  void *local_90;
  void *pvStack_88;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1[0xc] == 1) {
    if (param_1[2] == 7) {
      plVar22 = *(long **)param_1;
                    /* try { // try from 0013b308 to 0013b37b has its CatchHandler @ 0013b668 */
      local_70 = (undefined8 *)(**(code **)(*plVar22 + 0x88))(plVar22,*(undefined8 *)(param_1 + 4));
      uVar10 = (**(code **)(*plVar22 + 0x1e0))(plVar22,&local_70);
      if ((uVar10 & 1) != 0) {
        local_78 = (undefined8 *)(**(code **)(*plVar22 + 0x88))(plVar22,local_70);
        lVar8 = (**(code **)(*plVar22 + 0x240))(plVar22,&local_78);
        if (lVar8 != 0) {
          (**(code **)(*plVar22 + 0x260))(&local_90,plVar22,&local_78,0);
          facebook::jsi::Value::~Value((Value *)&local_90);
        }
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)();
        }
      }
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)();
      }
      if ((uVar10 & 1) != 0) {
        if (param_1[0xc] == 1) {
          FUN_0013b928(&local_90,*(undefined8 *)param_1,param_1 + 2);
          goto LAB_0013b134;
        }
        if (param_1[0xc] == 0) goto LAB_0013b12c;
        goto LAB_0013b3c4;
      }
    }
LAB_0013b3d8:
    pvVar16 = (void *)*param_2;
    param_2[1] = (long)pvVar16;
    if ((void *)param_2[2] == pvVar16) {
      pvVar6 = operator_new(4);
      *param_2 = (long)pvVar6;
      param_2[1] = (long)pvVar6;
      param_2[2] = (long)pvVar6 + 4;
      if (pvVar16 != (void *)0x0) {
        operator_delete(pvVar16);
      }
    }
    uVar4 = FUN_0013abac(param_1);
    puVar19 = (undefined4 *)param_2[1];
    if (puVar19 < (undefined4 *)param_2[2]) {
      puVar12 = puVar19 + 1;
      *puVar19 = uVar4;
    }
    else {
      puVar17 = (undefined4 *)*param_2;
      lVar8 = (long)puVar19 - (long)puVar17 >> 2;
      uVar10 = lVar8 + 1;
      if (uVar10 >> 0x3e != 0) {
        if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_0013b69c;
        FUN_0013b6a0();
LAB_0013b638:
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0012dfd0();
        }
        goto LAB_0013b69c;
      }
      uVar9 = param_2[2] - (long)puVar17;
      uVar20 = (long)uVar9 >> 1;
      if (uVar20 <= uVar10) {
        uVar20 = uVar10;
      }
      if (0x7ffffffffffffffb < uVar9) {
        uVar20 = 0x3fffffffffffffff;
      }
      if (uVar20 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (uVar20 >> 0x3e != 0) goto LAB_0013b638;
        pvVar16 = operator_new(uVar20 << 2);
      }
      puVar21 = (undefined4 *)((long)pvVar16 + lVar8 * 4);
      puVar12 = puVar21 + 1;
      *puVar21 = uVar4;
      if ((long)puVar19 - (long)puVar17 != 0) {
        uVar10 = ((long)puVar19 - (long)puVar17) - 4;
        puVar11 = puVar21;
        if ((0x1b < uVar10) &&
           (0x1f < (ulong)((long)puVar19 + (-((long)puVar19 - (long)puVar17) - (long)pvVar16)))) {
          puVar15 = (undefined8 *)(puVar19 + -4);
          uVar10 = (uVar10 >> 2) + 1;
          uVar14 = uVar10 & 0x7ffffffffffffff8;
          puVar19 = puVar19 + -uVar14;
          puVar11 = puVar21 + -uVar14;
          puVar13 = (undefined8 *)(puVar21 + -4);
          uVar9 = uVar14;
          do {
            puVar2 = puVar15 + -1;
            uVar24 = puVar15[-2];
            uVar23 = puVar15[1];
            uVar7 = *puVar15;
            uVar9 = uVar9 - 8;
            puVar15 = puVar15 + -4;
            puVar13[-1] = *puVar2;
            puVar13[-2] = uVar24;
            puVar13[1] = uVar23;
            *puVar13 = uVar7;
            puVar13 = puVar13 + -4;
          } while (uVar9 != 0);
          puVar21 = puVar11;
          if (uVar10 == uVar14) goto LAB_0013b598;
        }
        do {
          puVar19 = puVar19 + -1;
          puVar21 = puVar11 + -1;
          *puVar21 = *puVar19;
          puVar11 = puVar21;
        } while (puVar19 != puVar17);
      }
LAB_0013b598:
      *param_2 = (long)puVar21;
      param_2[1] = (long)puVar12;
      param_2[2] = (long)((long)pvVar16 + uVar20 * 4);
      if (puVar17 != (undefined4 *)0x0) {
        operator_delete(puVar17);
      }
    }
    param_2[1] = (long)puVar12;
  }
  else {
    if (param_1[0xc] != 0) {
LAB_0013b3c4:
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0012e304();
      }
      goto LAB_0013b69c;
    }
    if (*param_1 != 1) goto LAB_0013b3d8;
LAB_0013b12c:
    FUN_0013b77c(&local_90);
LAB_0013b134:
    pvVar3 = local_90;
    pvVar18 = (void *)*param_2;
    param_2[1] = (long)pvVar18;
    lVar8 = (long)pvStack_88 - (long)local_90 >> 3;
    uVar20 = lVar8 * 0x6db6db6db6db6db7;
    uVar10 = param_2[2] - (long)pvVar18 >> 2;
    pvVar16 = pvVar3;
    pvVar6 = pvStack_88;
    if (uVar10 <= uVar20 && uVar20 - uVar10 != 0) {
      if (uVar20 >> 0x3e != 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0013b65c to 0013b65f has its CatchHandler @ 0013b660 */
          uVar7 = FUN_0013b6a0();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0013b178 with catch @ 0013b660
                       catch(type#1 @ 00000000) { ... } // from try @ 0013b65c with catch @ 0013b660
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0013b1c8 with catch @ 0013b674
                        */
          FUN_0013b6b4(&local_90);
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_0011cd74(uVar7);
          }
        }
        goto LAB_0013b69c;
      }
                    /* try { // try from 0013b178 to 0013b17b has its CatchHandler @ 0013b660 */
      pvVar5 = operator_new(lVar8 * -0x4924924924924924);
      *param_2 = (long)pvVar5;
      param_2[1] = (long)pvVar5;
      param_2[2] = (long)((long)pvVar5 + lVar8 * -0x4924924924924924);
      if (pvVar18 != (void *)0x0) {
        operator_delete(pvVar18);
      }
    }
    for (; pvVar16 != pvStack_88; pvVar16 = (void *)((long)pvVar16 + 0x38)) {
                    /* try { // try from 0013b1c8 to 0013b227 has its CatchHandler @ 0013b674 */
      uVar4 = FUN_0013abac(pvVar16);
      puVar19 = (undefined4 *)param_2[1];
      if (puVar19 < (undefined4 *)param_2[2]) {
        puVar17 = puVar19 + 1;
        *puVar19 = uVar4;
      }
      else {
        puVar21 = (undefined4 *)*param_2;
        lVar8 = (long)puVar19 - (long)puVar21 >> 2;
        uVar10 = lVar8 + 1;
        if (uVar10 >> 0x3e != 0) {
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0013b608 to 0013b623 has its CatchHandler @ 0013b670 */
            FUN_0013b6a0();
LAB_0013b60c:
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_0012dfd0();
            }
          }
          goto LAB_0013b69c;
        }
        uVar9 = param_2[2] - (long)puVar21;
        uVar20 = (long)uVar9 >> 1;
        if (uVar20 <= uVar10) {
          uVar20 = uVar10;
        }
        if (0x7ffffffffffffffb < uVar9) {
          uVar20 = 0x3fffffffffffffff;
        }
        if (uVar20 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar20 >> 0x3e != 0) goto LAB_0013b60c;
          pvVar6 = operator_new(uVar20 << 2);
        }
        puVar12 = (undefined4 *)((long)pvVar6 + lVar8 * 4);
        puVar17 = puVar12 + 1;
        *puVar12 = uVar4;
        if ((long)puVar19 - (long)puVar21 != 0) {
          uVar10 = ((long)puVar19 - (long)puVar21) - 4;
          puVar11 = puVar12;
          if ((0x1b < uVar10) &&
             (0x1f < (ulong)((long)puVar19 + (-((long)puVar19 - (long)puVar21) - (long)pvVar6)))) {
            puVar15 = (undefined8 *)(puVar19 + -4);
            uVar10 = (uVar10 >> 2) + 1;
            uVar14 = uVar10 & 0x7ffffffffffffff8;
            puVar19 = puVar19 + -uVar14;
            puVar11 = puVar12 + -uVar14;
            puVar13 = (undefined8 *)(puVar12 + -4);
            uVar9 = uVar14;
            do {
              puVar2 = puVar15 + -1;
              uVar24 = puVar15[-2];
              uVar23 = puVar15[1];
              uVar7 = *puVar15;
              uVar9 = uVar9 - 8;
              puVar15 = puVar15 + -4;
              puVar13[-1] = *puVar2;
              puVar13[-2] = uVar24;
              puVar13[1] = uVar23;
              *puVar13 = uVar7;
              puVar13 = puVar13 + -4;
            } while (uVar9 != 0);
            puVar12 = puVar11;
            if (uVar10 == uVar14) goto LAB_0013b2c8;
          }
          do {
            puVar19 = puVar19 + -1;
            puVar12 = puVar11 + -1;
            *puVar12 = *puVar19;
            puVar11 = puVar12;
          } while (puVar19 != puVar21);
        }
LAB_0013b2c8:
        *param_2 = (long)puVar12;
        param_2[1] = (long)puVar17;
        param_2[2] = (long)((long)pvVar6 + uVar20 * 4);
        if (puVar21 != (undefined4 *)0x0) {
          operator_delete(puVar21);
        }
      }
      param_2[1] = (long)puVar17;
      pvVar6 = pvVar3;
    }
    pvVar16 = pvStack_88;
    if (pvVar6 != (void *)0x0) {
      while (pvVar16 != pvVar6) {
        if (*(uint *)((long)pvVar16 + -8) != 0xffffffff) {
                    /* try { // try from 0013b4d8 to 0013b4e3 has its CatchHandler @ 0013b66c */
          (*(code *)(&PTR_FUN_00144948)[*(uint *)((long)pvVar16 + -8)])
                    (&local_70,(void *)((long)pvVar16 + -0x38));
        }
        *(undefined4 *)((long)pvVar16 + -8) = 0xffffffff;
        pvVar16 = (void *)((long)pvVar16 + -0x38);
        pvStack_88 = local_90;
      }
      operator_delete(pvStack_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_0013b69c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013b6a0  FUN_0013b6a0 =====

void FUN_0013b6a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 0013b6b4  FUN_0013b6b4 =====

void FUN_0013b6b4(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x38);
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0013b72c to 0013b737 has its CatchHandler @ 0013b778 */
          (*(code *)(&PTR_FUN_00144948)[*(uint *)((long)pvVar4 + -8)])(&uStack_59,pvVar2);
        }
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0013b77c  FUN_0013b77c =====

/* WARNING: Removing unreachable block (ram,0x0013b868) */

void FUN_0013b77c(undefined8 *param_1,int *param_2)

{
  dynamic *pdVar1;
  undefined1 *puVar2;
  dynamic *pdVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 uStack_91;
  dynamic adStack_90 [48];
  uint local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 0013b7b4 to 0013b7c3 has its CatchHandler @ 0013b8e4 */
  uVar5 = folly::dynamic::size();
  FUN_0013bbc4(param_1,uVar5);
  if (*param_2 == 1) {
    pdVar3 = *(dynamic **)(param_2 + 4);
    for (pdVar1 = *(dynamic **)(param_2 + 2); pdVar1 != pdVar3; pdVar1 = pdVar1 + 0x30) {
                    /* try { // try from 0013b800 to 0013b80b has its CatchHandler @ 0013b924 */
      folly::dynamic::dynamic(adStack_90,pdVar1);
      puVar2 = (undefined1 *)param_1[1];
      local_60 = 0;
      if (puVar2 < (undefined1 *)param_1[2]) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 0x30) = 0xffffffff;
                    /* try { // try from 0013b834 to 0013b843 has its CatchHandler @ 0013b8ec */
        (*(code *)
          PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00144968
        )(&uStack_91,puVar2,adStack_90);
        puVar6 = puVar2 + 0x38;
        *(uint *)(puVar2 + 0x30) = local_60;
      }
      else {
                    /* try { // try from 0013b854 to 0013b85f has its CatchHandler @ 0013b8f0 */
        puVar6 = (undefined1 *)FUN_0013bd98(param_1,adStack_90);
      }
      param_1[1] = puVar6;
      if ((ulong)local_60 != 0xffffffff) {
                    /* try { // try from 0013b880 to 0013b88b has its CatchHandler @ 0013b920 */
        (*(code *)(&PTR_FUN_00144948)[local_60])(&uStack_91,adStack_90);
      }
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 0013b8cc to 0013b8db has its CatchHandler @ 0013b8dc */
                    /* WARNING: Subroutine does not return */
    FUN_00123890(*(undefined8 *)PTR_name_00144f00);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013b928  FUN_0013b928 =====

void FUN_0013b928(undefined8 *param_1,IRuntime *param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  Value aVStack_e0 [16];
  undefined8 *local_d0;
  Value aVStack_c8 [16];
  IRuntime *local_b8;
  Value aVStack_b0 [16];
  IRuntime *local_a0;
  Value aVStack_98 [40];
  uint local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 0013b978 to 0013b987 has its CatchHandler @ 0013bb40 */
  local_d0 = (undefined8 *)(**(code **)(*(long *)param_2 + 0x88))(param_2,puVar3);
                    /* try { // try from 0013b994 to 0013b99f has its CatchHandler @ 0013bb38 */
  lVar4 = (**(code **)(*(long *)param_2 + 0x240))(param_2,&local_d0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 0013b9ac to 0013b9b7 has its CatchHandler @ 0013bb34 */
  FUN_0013bbc4(param_1,lVar4);
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
                    /* try { // try from 0013b9f8 to 0013ba0b has its CatchHandler @ 0013bb68 */
      (**(code **)(*(long *)param_2 + 0x260))(aVStack_e0,param_2,&local_d0,lVar7);
                    /* try { // try from 0013ba0c to 0013ba1b has its CatchHandler @ 0013bbc0 */
      facebook::jsi::Value::Value(aVStack_c8,param_2,aVStack_e0);
      local_b8 = param_2;
      facebook::jsi::Value::Value(aVStack_b0,aVStack_c8);
      local_a0 = local_b8;
      facebook::jsi::Value::Value(aVStack_98,aVStack_b0);
      local_70 = 1;
      facebook::jsi::Value::~Value(aVStack_b0);
      facebook::jsi::Value::~Value(aVStack_c8);
      puVar1 = (undefined1 *)param_1[1];
      if (puVar1 < (undefined1 *)param_1[2]) {
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 0x30) = 0xffffffff;
        if (local_70 == 0xffffffff) {
          uVar6 = 0xffffffff;
          puVar5 = puVar1 + 0x38;
        }
        else {
                    /* try { // try from 0013ba80 to 0013ba8f has its CatchHandler @ 0013bb48 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00144968
                    )[local_70])(&local_b8,puVar1,&local_a0);
          uVar6 = (ulong)local_70;
          puVar5 = puVar1 + 0x38;
          *(uint *)(puVar1 + 0x30) = local_70;
        }
      }
      else {
                    /* try { // try from 0013baa0 to 0013baab has its CatchHandler @ 0013bb4c */
        puVar5 = (undefined1 *)FUN_0013bd98(param_1,&local_a0);
        uVar6 = (ulong)local_70;
      }
      param_1[1] = puVar5;
      if (uVar6 != 0xffffffff) {
                    /* try { // try from 0013bacc to 0013bad7 has its CatchHandler @ 0013bb64 */
        (*(code *)(&PTR_FUN_00144948)[uVar6])(&local_b8,&local_a0);
      }
      facebook::jsi::Value::~Value(aVStack_e0);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
  }
  if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)();
  }
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013bbc4  FUN_0013bbc4 =====

void FUN_0013bbc4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pvVar7 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar7 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if (0x492492492492492 < param_2) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        FUN_0013bd84();
      }
      goto LAB_0013bd78;
    }
    lVar8 = param_1[1];
    pvVar6 = operator_new(param_2 * 0x38);
    lVar1 = (long)pvVar6 + (lVar8 - (long)pvVar7);
    pvVar6 = (void *)((long)pvVar6 + param_2 * 0x38);
    if (lVar8 - (long)pvVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar6;
    }
    else {
      lVar9 = 0;
      do {
        lVar2 = lVar1 + lVar9;
        lVar3 = lVar8 + lVar9;
        *(undefined4 *)(lVar2 + -8) = 0xffffffff;
        *(undefined1 *)(lVar2 + -0x38) = 0;
        if (*(uint *)(lVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0013bcac to 0013bcb3 has its CatchHandler @ 0013bd80 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00144968
                    )[*(uint *)(lVar3 + -8)])
                    (&uStack_6a,(undefined1 *)(lVar2 + -0x38),lVar3 + -0x38);
          *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar3 + -8);
        }
        lVar9 = lVar9 + -0x38;
      } while ((void *)(lVar8 + lVar9) != pvVar7);
      pvVar7 = (void *)*param_1;
      pvVar4 = (void *)param_1[1];
      *param_1 = lVar1 + lVar9;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar6;
      while (pvVar4 != pvVar7) {
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0013bd10 to 0013bd1b has its CatchHandler @ 0013bd7c */
          (*(code *)(&PTR_FUN_00144948)[*(uint *)((long)pvVar4 + -8)])
                    (&uStack_69,(void *)((long)pvVar4 + -0x38));
        }
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = (void *)((long)pvVar4 + -0x38);
      }
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_0013bd78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013bd84  FUN_0013bd84 =====

void FUN_0013bd84(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 0013bd98  FUN_0013bd98 =====

undefined1 * FUN_0013bd98(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  undefined1 *puVar10;
  void *pvVar11;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pvVar9 = (void *)*param_1;
  pvVar11 = (void *)param_1[1];
  lVar6 = (long)pvVar11 - (long)pvVar9 >> 3;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (uVar1 < 0x492492492492493) {
    lVar7 = param_1[2] - (long)pvVar9 >> 3;
    uVar8 = lVar7 * -0x2492492492492492;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x492492492492492;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar8) goto LAB_0013bfe4;
      pvVar5 = operator_new(uVar8 * 0x38);
    }
    uVar3 = *(uint *)(param_2 + 0x30);
    puVar10 = (undefined1 *)((long)pvVar5 + lVar6 * 8);
    *puVar10 = 0;
    *(undefined4 *)(puVar10 + 0x30) = 0xffffffff;
    if (uVar3 != 0xffffffff) {
                    /* try { // try from 0013be8c to 0013be9b has its CatchHandler @ 0013bffc */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00144968
                )[uVar3])(&uStack_6b,puVar10,param_2);
      pvVar9 = (void *)*param_1;
      pvVar11 = (void *)param_1[1];
      *(undefined4 *)(puVar10 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    pvVar5 = (void *)((long)pvVar5 + uVar8 * 0x38);
    puVar2 = puVar10 + 0x38;
    if (pvVar11 == pvVar9) {
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar5;
    }
    else {
      lVar6 = 0;
      do {
        *(undefined4 *)(puVar10 + lVar6 + -8) = 0xffffffff;
        puVar10[lVar6 + -0x38] = 0;
        uVar3 = *(uint *)((long)pvVar11 + lVar6 + -8);
        if (uVar3 != 0xffffffff) {
                    /* try { // try from 0013bf04 to 0013bf0b has its CatchHandler @ 0013c004 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00144968
                    )[uVar3])(&uStack_6a,puVar10 + lVar6 + -0x38,(long)pvVar11 + lVar6 + -0x38);
          *(undefined4 *)(puVar10 + lVar6 + -8) = *(undefined4 *)((long)pvVar11 + lVar6 + -8);
        }
        lVar6 = lVar6 + -0x38;
      } while ((void *)((long)pvVar11 + lVar6) != pvVar9);
      pvVar9 = (void *)*param_1;
      pvVar11 = (void *)param_1[1];
      param_1[2] = (long)pvVar5;
      *param_1 = (long)(puVar10 + lVar6);
      param_1[1] = (long)puVar2;
      while (pvVar11 != pvVar9) {
        if (*(uint *)((long)pvVar11 + -8) != 0xffffffff) {
                    /* try { // try from 0013bf6c to 0013bf77 has its CatchHandler @ 0013c000 */
          (*(code *)(&PTR_FUN_00144948)[*(uint *)((long)pvVar11 + -8)])
                    (&uStack_69,(void *)((long)pvVar11 + -0x38));
        }
        *(undefined4 *)((long)pvVar11 + -8) = 0xffffffff;
        pvVar11 = (void *)((long)pvVar11 + -0x38);
      }
    }
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return puVar2;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0013bff8;
    FUN_0013bd84();
LAB_0013bfe4:
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_0012dfd0();
    }
  }
LAB_0013bff8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013c008  FUN_0013c008 =====

void FUN_0013c008(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x23;
  undefined8 *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  local_60 = 0;
  uVar3 = lVar2 - lVar1;
  local_68 = param_1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 0013c0c4 to 0013c0c7 has its CatchHandler @ 0013c0d4 */
        uVar6 = FUN_0013c738();
                    /* catch() { ... } // from try @ 0013c070 with catch @ 0013c0c8 */
        *(undefined8 *)(unaff_x19 + 8) = unaff_x23;
        FUN_0013c6ac(&local_68);
        if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_0011cd74(uVar6);
        }
      }
      goto LAB_0013c0f8;
    }
                    /* try { // try from 0013c054 to 0013c05f has its CatchHandler @ 0013c0d4 */
    pvVar5 = operator_new(uVar3);
    *param_1 = pvVar5;
    param_1[1] = pvVar5;
    param_1[2] = (long)pvVar5 + uVar3;
                    /* try { // try from 0013c070 to 0013c083 has its CatchHandler @ 0013c0c8 */
    uVar6 = FUN_0013c74c(param_1 + 2,lVar1,lVar2,pvVar5);
    param_1[1] = uVar6;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_0013c0f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013c0fc  FUN_0013c0fc =====

void FUN_0013c0fc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  void *__dest;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *local_e8;
  undefined8 *local_e0;
  byte local_d0 [8];
  undefined1 local_c8;
  undefined1 local_c4;
  void *local_c0;
  void *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  void *pvStack_80;
  long *local_78;
  long local_70;
  
  uVar5 = tpidr_el0;
  local_70 = *(long *)(uVar5 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_0013b928(&local_e8,*param_1,param_1 + 1);
  }
  else {
    uVar14 = uVar5;
    if (*(int *)(param_1 + 6) != 0) {
LAB_0013c5f4:
      if (*(long *)(uVar14 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_0012e304();
      }
      goto LAB_0013c6a4;
    }
    FUN_0013b77c(&local_e8);
  }
  puVar6 = local_e0;
  if (local_e8 != local_e0) {
    plVar1 = param_2 + 2;
    pcVar15 = (char *)((ulong)local_d0 | 1);
    puVar13 = local_e8;
    do {
      local_b8 = (void *)0x0;
      lStack_b0 = 0;
      local_a0 = 0;
      local_a8 = 0;
      if (*(int *)(puVar13 + 6) == 1) {
        FUN_00138aac(&local_98,*puVar13,puVar13 + 1);
      }
      else {
        if (*(int *)(puVar13 + 6) != 0) {
          if (*(long *)(uVar5 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0013c590 to 0013c593 has its CatchHandler @ 0013c654 */
            FUN_0012e304();
          }
          goto LAB_0013c6a4;
        }
                    /* try { // try from 0013c1bc to 0013c1db has its CatchHandler @ 0013c670 */
        FUN_00138548(&local_98,puVar13);
      }
      uVar17 = s_handlerTags_0010fc1a._0_8_;
      local_d0[0] = 0x16;
      pcVar15[7] = 'T';
      pcVar15[8] = 'a';
      pcVar15[9] = 'g';
      pcVar15[10] = 's';
      *(undefined8 *)pcVar15 = uVar17;
      local_c4 = 0;
      lVar7 = FUN_0013c8e8(&local_98,local_d0);
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if (lVar7 != 0) {
                    /* try { // try from 0013c224 to 0013c22f has its CatchHandler @ 0013c658 */
        FUN_0013b0e0(lVar7 + 0x28,&local_b8);
      }
      local_d0[0] = 0xe;
      local_c8 = 0;
      builtin_strncpy(pcVar15,"viewTag",7);
      lVar7 = FUN_0013c8e8(&local_98,local_d0);
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      pvVar9 = local_98;
      puVar4 = local_88;
      if (lVar7 != 0) {
                    /* try { // try from 0013c278 to 0013c27f has its CatchHandler @ 0013c65c */
        local_a0 = FUN_0013abac(lVar7 + 0x28);
        pvVar9 = local_98;
        puVar4 = local_88;
      }
      while (puVar4 != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)*puVar4;
        local_98 = pvVar9;
        if (*(uint *)(puVar4 + 0xb) != 0xffffffff) {
                    /* try { // try from 0013c328 to 0013c333 has its CatchHandler @ 0013c6a8 */
          (*(code *)(&PTR_FUN_00144948)[*(uint *)(puVar4 + 0xb)])(local_d0,puVar4 + 5);
        }
        *(undefined4 *)(puVar4 + 0xb) = 0xffffffff;
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        pvVar9 = local_98;
        puVar4 = puVar16;
      }
      local_98 = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      pvVar9 = local_b8;
      puVar4 = (undefined8 *)param_2[1];
      if (puVar4 < (undefined8 *)param_2[2]) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        uVar14 = lStack_b0 - (long)local_b8;
        if (uVar14 != 0) {
          if ((long)uVar14 < 0) {
            if (*(long *)(uVar5 + 0x28) != local_70) goto LAB_0013c6a4;
                    /* try { // try from 0013c5d8 to 0013c5db has its CatchHandler @ 0013c62c */
            FUN_0013b6a0();
LAB_0013c5dc:
            if (*(long *)(uVar5 + 0x28) != local_70) goto LAB_0013c6a4;
                    /* try { // try from 0013c5f0 to 0013c5f3 has its CatchHandler @ 0013c608 */
            FUN_0013b6a0();
            goto LAB_0013c5f4;
          }
                    /* try { // try from 0013c2c0 to 0013c2c7 has its CatchHandler @ 0013c630 */
          pvVar8 = operator_new(uVar14);
          *puVar4 = pvVar8;
          puVar4[1] = pvVar8;
          puVar4[2] = (long)pvVar8 + uVar14;
          memcpy(pvVar8,pvVar9,uVar14);
          puVar4[1] = (long)pvVar8 + uVar14;
        }
        *(undefined4 *)(puVar4 + 3) = local_a0;
        param_2[1] = (long)(puVar4 + 4);
        param_2[1] = (long)(puVar4 + 4);
      }
      else {
        puVar16 = (undefined8 *)*param_2;
        lVar7 = (long)puVar4 - (long)puVar16 >> 5;
        uVar14 = lVar7 + 1;
        if (uVar14 >> 0x3b != 0) {
          if (*(long *)(uVar5 + 0x28) == local_70) {
                    /* try { // try from 0013c5a8 to 0013c5c3 has its CatchHandler @ 0013c66c */
            FUN_0013c738();
LAB_0013c5ac:
            if (*(long *)(uVar5 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_0012dfd0();
            }
          }
          goto LAB_0013c6a4;
        }
        uVar10 = param_2[2] - (long)puVar16;
        uVar12 = (long)uVar10 >> 4;
        if (uVar12 <= uVar14) {
          uVar12 = uVar14;
        }
        if (0x7fffffffffffffdf < uVar10) {
          uVar12 = 0x7ffffffffffffff;
        }
        local_78 = plVar1;
        if (uVar12 == 0) {
          local_98 = (void *)0x0;
        }
        else {
          if (uVar12 >> 0x3b != 0) goto LAB_0013c5ac;
                    /* try { // try from 0013c39c to 0013c39f has its CatchHandler @ 0013c670 */
          local_98 = operator_new(uVar12 << 5);
        }
        pvVar8 = local_b8;
        puVar3 = (undefined8 *)((long)local_98 + lVar7 * 0x20);
        pvVar9 = (void *)((long)local_98 + uVar12 * 0x20);
        uVar14 = lStack_b0 - (long)local_b8;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puStack_90 = puVar3;
        pvStack_80 = pvVar9;
        if (uVar14 != 0) {
          local_88 = puVar3;
          if ((long)uVar14 < 0) goto LAB_0013c5dc;
                    /* try { // try from 0013c3d0 to 0013c3d7 has its CatchHandler @ 0013c60c */
          __dest = operator_new(uVar14);
          *puVar3 = __dest;
          puVar3[1] = __dest;
          puVar3[2] = (long)__dest + uVar14;
          memcpy(__dest,pvVar8,uVar14);
          puVar3[1] = (long)__dest + uVar14;
        }
        puVar2 = puVar3 + 4;
        *(undefined4 *)(puVar3 + 3) = local_a0;
        local_88 = puVar2;
        if (puVar4 == puVar16) {
          *param_2 = (long)puVar3;
          param_2[1] = (long)puVar2;
          param_2[2] = (long)pvVar9;
        }
        else {
          lVar7 = 0;
          do {
            lVar11 = lVar7 + -0x20;
            *(undefined8 *)((long)puVar3 + lVar7 + -0x18) = 0;
            *(undefined8 *)((long)puVar3 + lVar7 + -0x10) = 0;
            uVar17 = *(undefined8 *)((long)puVar4 + lVar7 + -0x20);
            *(undefined8 *)((long)puVar3 + lVar7 + -0x18) =
                 *(undefined8 *)((long)puVar4 + lVar7 + -0x18);
            *(undefined8 *)((long)puVar3 + lVar7 + -0x20) = uVar17;
            *(undefined8 *)((long)puVar3 + lVar7 + -0x10) =
                 *(undefined8 *)((long)puVar4 + lVar7 + -0x10);
            *(undefined8 *)((long)puVar4 + lVar7 + -0x20) = 0;
            *(undefined8 *)((long)puVar4 + lVar7 + -0x18) = 0;
            *(undefined8 *)((long)puVar4 + lVar7 + -0x10) = 0;
            *(undefined4 *)((long)puVar3 + lVar7 + -8) = *(undefined4 *)((long)puVar4 + lVar7 + -8);
            lVar7 = lVar11;
          } while ((undefined8 *)((long)puVar4 + lVar11) != puVar16);
          puVar4 = (undefined8 *)*param_2;
          puVar16 = (undefined8 *)param_2[1];
          *param_2 = (long)puVar3 + lVar11;
          param_2[2] = (long)pvStack_80;
          param_2[1] = (long)puVar2;
          while (puVar3 = puVar16, puVar3 != puVar4) {
            puVar16 = puVar3 + -4;
            pvVar9 = (void *)*puVar16;
            if (pvVar9 != (void *)0x0) {
              puVar3[-3] = pvVar9;
              operator_delete(pvVar9);
            }
          }
        }
        if (puVar4 != (undefined8 *)0x0) {
          operator_delete(puVar4);
        }
        param_2[1] = (long)puVar2;
        pvVar9 = local_b8;
      }
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      puVar13 = puVar13 + 7;
    } while (puVar13 != puVar6);
  }
  puVar13 = local_e8;
  puVar6 = local_e0;
  if (local_e8 != (undefined8 *)0x0) {
    while (puVar6 != puVar13) {
      if (*(uint *)(puVar6 + -1) != 0xffffffff) {
                    /* try { // try from 0013c530 to 0013c53b has its CatchHandler @ 0013c650 */
        (*(code *)(&PTR_FUN_00144948)[*(uint *)(puVar6 + -1)])(&local_98,puVar6 + -7);
      }
      *(undefined4 *)(puVar6 + -1) = 0xffffffff;
      puVar6 = puVar6 + -7;
    }
    local_e0 = puVar13;
    operator_delete(local_e8);
  }
  if (*(long *)(uVar5 + 0x28) == local_70) {
    return;
  }
LAB_0013c6a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013c6ac  FUN_0013c6ac =====

void FUN_0013c6ac(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar4 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)*puVar4;
    if (puVar5 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)puVar4[1];
      puVar2 = puVar5;
      if (puVar3 != puVar5) {
        do {
          puVar2 = puVar3 + -4;
          pvVar1 = (void *)*puVar2;
          if (pvVar1 != (void *)0x0) {
            puVar3[-3] = pvVar1;
            operator_delete(pvVar1);
          }
          puVar3 = puVar2;
        } while (puVar2 != puVar5);
        puVar2 = *(undefined8 **)*param_1;
      }
      puVar4[1] = puVar5;
      operator_delete(puVar2);
      return;
    }
  }
  return;
}


// ===== 0013c738  FUN_0013c738 =====

void FUN_0013c738(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 0013c74c  FUN_0013c74c =====

undefined8 *
FUN_0013c74c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__src;
  ulong __n;
  long lVar2;
  undefined8 *puVar3;
  void *__dest;
  undefined8 uVar4;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 **ppuStack_70;
  undefined8 **local_68;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  ppuStack_70 = &local_88;
  local_68 = &local_80;
  local_60 = 0;
  local_88 = param_4;
  local_80 = param_4;
  local_78 = param_1;
  if (param_2 != param_3) {
    do {
      puVar3 = local_80;
      *local_80 = 0;
      local_80[1] = 0;
      local_80[2] = 0;
      __src = (void *)*param_2;
      __n = param_2[1] - (long)__src;
      if (__n != 0) {
        if ((long)__n < 0) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0013c840 to 0013c843 has its CatchHandler @ 0013c84c */
            uVar4 = FUN_0013b6a0();
                    /* catch() { ... } // from try @ 0013c7d8 with catch @ 0013c844 */
            FUN_0013c888(&local_78);
            if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_0011cd74(uVar4);
            }
          }
          goto LAB_0013c884;
        }
                    /* try { // try from 0013c7d8 to 0013c7df has its CatchHandler @ 0013c844 */
        __dest = operator_new(__n);
        *puVar3 = __dest;
        puVar3[1] = __dest;
        puVar3[2] = (long)__dest + __n;
        memcpy(__dest,__src,__n);
        puVar3[1] = (long)__dest + __n;
      }
      puVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)puVar1;
      local_80 = puVar3 + 4;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return local_80;
  }
LAB_0013c884:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013c888  FUN_0013c888 =====

void FUN_0013c888(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    puVar4 = (undefined8 *)**(long **)(param_1 + 0x10);
    while (puVar1 = puVar4, puVar1 != puVar3) {
      puVar4 = puVar1 + -4;
      pvVar2 = (void *)*puVar4;
      if (pvVar2 != (void *)0x0) {
        puVar1[-3] = pvVar2;
        operator_delete(pvVar2);
      }
    }
    return;
  }
  return;
}


// ===== 0013c8e8  FUN_0013c8e8 =====

long * FUN_0013c8e8(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined1 uStack_69;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0013c934 to 0013c93b has its CatchHandler @ 0013caa0 */
  uVar8 = FUN_001391e0(&uStack_69,pbVar3,uVar8);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar15 = NEON_cnt(uVar11,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar11 <= uVar8) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar8 / uVar11;
        }
        uVar13 = uVar8 - uVar13 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar13 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        pbVar3 = param_2 + 1;
        sVar1 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          pbVar3 = *(byte **)(param_2 + 0x10);
          sVar1 = *(size_t *)(param_2 + 8);
        }
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_0013ca68;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 < 2) {
              uVar10 = uVar10 & uVar11 - 1;
            }
            else if (uVar11 <= uVar10) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar5 * uVar11;
            }
            if (uVar10 != uVar13) goto LAB_0013ca64;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_0013ca68;
    }
  }
LAB_0013ca64:
  plVar9 = (long *)0x0;
LAB_0013ca68:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013caa4  FUN_0013caa4 =====

void FUN_0013caa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  while (puVar3 != puVar1) {
    while( true ) {
      puVar4 = puVar3 + -4;
      pvVar2 = (void *)*puVar4;
      param_1[2] = puVar4;
      if (pvVar2 != (void *)0x0) break;
      puVar3 = puVar4;
      if (puVar4 == puVar1) goto LAB_0013caf4;
    }
    puVar3[-3] = pvVar2;
    operator_delete(pvVar2);
    puVar3 = (undefined8 *)param_1[2];
  }
LAB_0013caf4:
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0013cb14  FUN_0013cb14 =====

void FUN_0013cb14(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00134010(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x656e6f6e) {
      *param_2 = 1;
    }
    else {
      if ((int)*plVar2 != 0x6f747561) goto LAB_0013cc50;
      *param_2 = 3;
    }
  }
  else {
    if (uVar1 != 8) {
LAB_0013cc50:
      if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0013cc60 to 0013cc63 has its CatchHandler @ 0013cc64 */
        abort();
      }
      goto LAB_0013cc90;
    }
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x656e6f6e2d786f62) {
      *param_2 = 0;
    }
    else {
      if (*plVar2 != 0x796c6e6f2d786f62) goto LAB_0013cc50;
      *param_2 = 2;
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_0013cc90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013cc94  facebook::react::NativeRNGestureHandlerModuleSpecJSI::NativeRNGestureHandlerModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeRNGestureHandlerModuleSpecJSI::NativeRNGestureHandlerModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeRNGestureHandlerModuleSpecJSI::NativeRNGestureHandlerModuleSpecJSI
          (NativeRNGestureHandlerModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  NativeRNGestureHandlerModuleSpecJSI *pNVar9;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar9 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_00144a18;
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x6c64;
  uStack_4d = 0x65;
  uStack_4c = 0x72;
  uStack_57 = (undefined7)s_createGestureHandler_0010fd5f._8_8_;
  cStack_50 = SUB81(s_createGestureHandler_0010fd5f._8_8_,7);
  uStack_5f = (undefined7)s_createGestureHandler_0010fd5f._0_8_;
  cStack_58 = SUB81(s_createGestureHandler_0010fd5f._0_8_,7);
                    /* try { // try from 0013ccfc to 0013cd0b has its CatchHandler @ 0013d034 */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 3;
  *(code **)(lVar7 + 0x30) = FUN_0013d06c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x6c64;
  uStack_4d = 0x65;
  uStack_4c = 0x72;
  uStack_57 = (undefined7)s_attachGestureHandler_0010facf._8_8_;
  cStack_50 = SUB81(s_attachGestureHandler_0010facf._8_8_,7);
  uStack_5f = (undefined7)s_attachGestureHandler_0010facf._0_8_;
  cStack_58 = SUB81(s_attachGestureHandler_0010facf._0_8_,7);
                    /* try { // try from 0013cd5c to 0013cd6b has its CatchHandler @ 0013d030 */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 3;
  *(code **)(lVar7 + 0x30) = FUN_0013d1c4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
                    /* try { // try from 0013cd8c to 0013cd93 has its CatchHandler @ 0013d028 */
  pcVar8 = (char *)operator_new(0x20);
  uVar5 = _UNK_001106b8;
  uVar4 = _DAT_001106b0;
  uVar3 = s_setGestureHandlerConfig_0010ee24._0_8_;
  uVar2 = CONCAT71(s_setGestureHandlerConfig_0010ee24._16_7_,s_setGestureHandlerConfig_0010ee24[0xf]
                  );
  cStack_50 = (char)pcVar8;
  uStack_4f = (undefined2)((ulong)pcVar8 >> 8);
  uStack_4d = (undefined1)((ulong)pcVar8 >> 0x18);
  uStack_4c = (undefined1)((ulong)pcVar8 >> 0x20);
  uStack_4b = (undefined1)((ulong)pcVar8 >> 0x28);
  uStack_4a = (undefined2)((ulong)pcVar8 >> 0x30);
  *(ulong *)(pcVar8 + 8) =
       CONCAT17(s_setGestureHandlerConfig_0010ee24[0xf],s_setGestureHandlerConfig_0010ee24._8_7_);
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0xf) = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined7)((ulong)uVar5 >> 8);
  local_60 = (byte)uVar4;
  uStack_5f = (undefined7)((ulong)uVar4 >> 8);
  pcVar8[0x17] = '\0';
                    /* try { // try from 0013cdc8 to 0013cdd7 has its CatchHandler @ 0013d024 */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 2;
  *(code **)(lVar7 + 0x30) = FUN_0013d2d4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
                    /* try { // try from 0013cdf8 to 0013cdff has its CatchHandler @ 0013d01c */
  pcVar8 = (char *)operator_new(0x20);
  uVar6 = _UNK_00110658;
  uVar5 = _DAT_00110650;
  uVar4 = s_updateGestureHandlerConfig_0010f9e6._18_8_;
  uVar3 = s_updateGestureHandlerConfig_0010f9e6._0_8_;
  uVar2 = CONCAT26(s_updateGestureHandlerConfig_0010f9e6._16_2_,
                   s_updateGestureHandlerConfig_0010f9e6._10_6_);
  cStack_50 = (char)pcVar8;
  uStack_4f = (undefined2)((ulong)pcVar8 >> 8);
  uStack_4d = (undefined1)((ulong)pcVar8 >> 0x18);
  uStack_4c = (undefined1)((ulong)pcVar8 >> 0x20);
  uStack_4b = (undefined1)((ulong)pcVar8 >> 0x28);
  uStack_4a = (undefined2)((ulong)pcVar8 >> 0x30);
  *(ulong *)(pcVar8 + 8) =
       CONCAT62(s_updateGestureHandlerConfig_0010f9e6._10_6_,
                s_updateGestureHandlerConfig_0010f9e6._8_2_);
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x12) = uVar4;
  *(undefined8 *)(pcVar8 + 10) = uVar2;
  cStack_58 = (char)uVar6;
  uStack_57 = (undefined7)((ulong)uVar6 >> 8);
  local_60 = (byte)uVar5;
  uStack_5f = (undefined7)((ulong)uVar5 >> 8);
  pcVar8[0x1a] = '\0';
                    /* try { // try from 0013ce34 to 0013ce43 has its CatchHandler @ 0013d018 */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 2;
  *(code **)(lVar7 + 0x30) = FUN_0013d430;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
  local_60 = 0x24;
  uStack_4f = 0x736e;
  uStack_57 = (undefined7)s_configureRelations_0010fdcf._8_8_;
  cStack_50 = SUB81(s_configureRelations_0010fdcf._8_8_,7);
  uStack_5f = (undefined7)s_configureRelations_0010fdcf._0_8_;
  cStack_58 = SUB81(s_configureRelations_0010fdcf._0_8_,7);
  uStack_4d = 0;
                    /* try { // try from 0013ce90 to 0013ce9f has its CatchHandler @ 0013d014 */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 2;
  *(code **)(lVar7 + 0x30) = FUN_0013d58c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
  local_60 = 0x24;
  uStack_4f = 0x7265;
  uStack_57 = (undefined7)s_dropGestureHandler_0010ff94._8_8_;
  cStack_50 = SUB81(s_dropGestureHandler_0010ff94._8_8_,7);
  uStack_5f = (undefined7)s_dropGestureHandler_0010ff94._0_8_;
  cStack_58 = SUB81(s_dropGestureHandler_0010ff94._0_8_,7);
  uStack_4d = 0;
                    /* try { // try from 0013ceec to 0013cefb has its CatchHandler @ 0013d010 */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 1;
  *(code **)(lVar7 + 0x30) = FUN_0013d6d8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
  local_60 = 0x1e;
  cStack_50 = 0;
  uStack_5f._0_1_ = s_flushOperations_0010f4d7[0];
  uStack_5f._1_1_ = s_flushOperations_0010f4d7[1];
  uStack_5f._2_1_ = s_flushOperations_0010f4d7[2];
  uStack_5f._3_1_ = s_flushOperations_0010f4d7[3];
  uStack_5f._4_1_ = s_flushOperations_0010f4d7[4];
  uStack_5f._5_1_ = s_flushOperations_0010f4d7[5];
  uStack_5f._6_1_ = s_flushOperations_0010f4d7[6];
  cStack_58 = s_flushOperations_0010f4d7[7];
  uStack_57._0_1_ = s_flushOperations_0010f4d7[8];
  uStack_57._1_1_ = s_flushOperations_0010f4d7[9];
  uStack_57._2_1_ = s_flushOperations_0010f4d7[10];
  uStack_57._3_1_ = s_flushOperations_0010f4d7[0xb];
  uStack_57._4_1_ = s_flushOperations_0010f4d7[0xc];
  uStack_57._5_1_ = s_flushOperations_0010f4d7[0xd];
  uStack_57._6_1_ = s_flushOperations_0010f4d7[0xe];
                    /* try { // try from 0013cf48 to 0013cf57 has its CatchHandler @ 0013d00c */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_0013d7dc;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
                    /* try { // try from 0013cf74 to 0013cf7b has its CatchHandler @ 0013d004 */
  pcVar8 = (char *)operator_new(0x20);
  uVar5 = _UNK_001105c8;
  uVar4 = _DAT_001105c0;
  uVar3 = s_installUIRuntimeBindings_0010fa70._8_8_;
  uVar2 = s_installUIRuntimeBindings_0010fa70._0_8_;
  cStack_50 = (char)pcVar8;
  uStack_4f = (undefined2)((ulong)pcVar8 >> 8);
  uStack_4d = (undefined1)((ulong)pcVar8 >> 0x18);
  uStack_4c = (undefined1)((ulong)pcVar8 >> 0x20);
  uStack_4b = (undefined1)((ulong)pcVar8 >> 0x28);
  uStack_4a = (undefined2)((ulong)pcVar8 >> 0x30);
  *(undefined8 *)(pcVar8 + 0x10) = s_installUIRuntimeBindings_0010fa70._16_8_;
  *(undefined8 *)(pcVar8 + 8) = uVar3;
  *(undefined8 *)pcVar8 = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined7)((ulong)uVar5 >> 8);
  local_60 = (byte)uVar4;
  uStack_5f = (undefined7)((ulong)uVar4 >> 8);
  pcVar8[0x18] = '\0';
                    /* try { // try from 0013cfb0 to 0013cfbf has its CatchHandler @ 0013d000 */
  local_40 = &local_60;
  lVar7 = FUN_0013e488(pNVar9,&local_60,&local_40);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_0013d8dc;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT13(uStack_4d,
                                                                CONCAT21(uStack_4f,cStack_50))))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d06c  FUN_0013d06c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x72656c64;
  uStack_57 = (undefined7)s_createGestureHandler_0010fd5f._8_8_;
  cStack_50 = SUB81(s_createGestureHandler_0010fd5f._8_8_,7);
  local_5f = (char  [8])s_createGestureHandler_0010fd5f._0_8_;
                    /* try { // try from 0013d0cc to 0013d0d3 has its CatchHandler @ 0013d194 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s__Ljava_lang_String_DLcom_faceboo_0010f027._24_8_;
  uVar3 = s__Ljava_lang_String_DLcom_faceboo_0010f027._16_8_;
  uVar2 = s__Ljava_lang_String_DLcom_faceboo_0010f027._0_8_;
  uStack_78 = _UNK_00110698;
  local_80 = _DAT_00110690;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_String_DLcom_faceboo_0010f027._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s__Ljava_lang_String_DLcom_faceboo_0010f027._53_8_;
  uVar4 = s__Ljava_lang_String_DLcom_faceboo_0010f027._32_8_;
  uVar2 = CONCAT35(s__Ljava_lang_String_DLcom_faceboo_0010f027._45_3_,
                   s__Ljava_lang_String_DLcom_faceboo_0010f027._40_5_);
  uVar3 = CONCAT53(s__Ljava_lang_String_DLcom_faceboo_0010f027._48_5_,
                   s__Ljava_lang_String_DLcom_faceboo_0010f027._45_3_);
  local_70[0x3d] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x35) = uVar5;
  *(undefined8 *)(local_70 + 0x2d) = uVar3;
                    /* try { // try from 0013d108 to 0013d133 has its CatchHandler @ 0013d17c */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_0014b640);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d1c4  FUN_0013d1c4 =====

void FUN_0013d1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x28;
  uStack_2b = 0;
  uStack_2f = 0x72656c64;
  local_58[0] = 0xc;
  uStack_37 = (undefined7)s_attachGestureHandler_0010facf._8_8_;
  cStack_30 = SUB81(s_attachGestureHandler_0010facf._8_8_,7);
  local_3f = (char  [8])s_attachGestureHandler_0010facf._0_8_;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x44;
  local_58[4] = 0x44;
  local_58[5] = 0x29;
  local_58[6] = 0x56;
  local_58[7] = 0;
                    /* try { // try from 0013d234 to 0013d253 has its CatchHandler @ 0013d294 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_0014b648);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,cStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d2d4  FUN_0013d2d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uStack_58 = _UNK_001106b8;
  local_60 = _DAT_001106b0;
  uVar3 = s_setGestureHandlerConfig_0010ee24._0_8_;
  uVar2 = CONCAT71(s_setGestureHandlerConfig_0010ee24._16_7_,s_setGestureHandlerConfig_0010ee24[0xf]
                  );
  *(ulong *)(local_50 + 8) =
       CONCAT17(s_setGestureHandlerConfig_0010ee24[0xf],s_setGestureHandlerConfig_0010ee24._8_7_);
  *(undefined8 *)local_50 = uVar3;
  *(undefined8 *)(local_50 + 0xf) = uVar2;
  local_50[0x17] = '\0';
                    /* try { // try from 0013d340 to 0013d347 has its CatchHandler @ 0013d400 */
  local_70 = (char *)operator_new(0x30);
  uVar4 = s__DLcom_facebook_react_bridge_Rea_0010f40b._16_8_;
  uVar3 = s__DLcom_facebook_react_bridge_Rea_0010f40b._0_8_;
  uVar2 = CONCAT53(s__DLcom_facebook_react_bridge_Rea_0010f40b._27_5_,
                   s__DLcom_facebook_react_bridge_Rea_0010f40b._24_3_);
  uStack_78 = _UNK_00110688;
  local_80 = _DAT_00110680;
  *(undefined8 *)(local_70 + 8) = s__DLcom_facebook_react_bridge_Rea_0010f40b._8_8_;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
  uVar3 = s__DLcom_facebook_react_bridge_Rea_0010f40b._35_8_;
  uVar2 = CONCAT35(s__DLcom_facebook_react_bridge_Rea_0010f40b._32_3_,
                   s__DLcom_facebook_react_bridge_Rea_0010f40b._27_5_);
  local_70[0x2b] = '\0';
  *(undefined8 *)(local_70 + 0x23) = uVar3;
  *(undefined8 *)(local_70 + 0x1b) = uVar2;
                    /* try { // try from 0013d374 to 0013d39f has its CatchHandler @ 0013d3e8 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_0014b650);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d430  FUN_0013d430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uStack_58 = _UNK_00110658;
  local_60 = _DAT_00110650;
  uVar4 = s_updateGestureHandlerConfig_0010f9e6._18_8_;
  uVar3 = s_updateGestureHandlerConfig_0010f9e6._0_8_;
  uVar2 = CONCAT26(s_updateGestureHandlerConfig_0010f9e6._16_2_,
                   s_updateGestureHandlerConfig_0010f9e6._10_6_);
  *(ulong *)(local_50 + 8) =
       CONCAT62(s_updateGestureHandlerConfig_0010f9e6._10_6_,
                s_updateGestureHandlerConfig_0010f9e6._8_2_);
  *(undefined8 *)local_50 = uVar3;
  *(undefined8 *)(local_50 + 0x12) = uVar4;
  *(undefined8 *)(local_50 + 10) = uVar2;
  local_50[0x1a] = '\0';
                    /* try { // try from 0013d49c to 0013d4a3 has its CatchHandler @ 0013d55c */
  local_70 = (char *)operator_new(0x30);
  uVar4 = s__DLcom_facebook_react_bridge_Rea_0010f40b._16_8_;
  uVar3 = s__DLcom_facebook_react_bridge_Rea_0010f40b._0_8_;
  uVar2 = CONCAT53(s__DLcom_facebook_react_bridge_Rea_0010f40b._27_5_,
                   s__DLcom_facebook_react_bridge_Rea_0010f40b._24_3_);
  uStack_78 = _UNK_00110688;
  local_80 = _DAT_00110680;
  *(undefined8 *)(local_70 + 8) = s__DLcom_facebook_react_bridge_Rea_0010f40b._8_8_;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
  uVar3 = s__DLcom_facebook_react_bridge_Rea_0010f40b._35_8_;
  uVar2 = CONCAT35(s__DLcom_facebook_react_bridge_Rea_0010f40b._32_3_,
                   s__DLcom_facebook_react_bridge_Rea_0010f40b._27_5_);
  local_70[0x2b] = '\0';
  *(undefined8 *)(local_70 + 0x23) = uVar3;
  *(undefined8 *)(local_70 + 0x1b) = uVar2;
                    /* try { // try from 0013d4d0 to 0013d4fb has its CatchHandler @ 0013d544 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_0014b658);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d58c  FUN_0013d58c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x24;
  uStack_4f = 0x736e;
  uStack_57 = (undefined7)s_configureRelations_0010fdcf._8_8_;
  cStack_50 = SUB81(s_configureRelations_0010fdcf._8_8_,7);
  local_5f = (char  [8])s_configureRelations_0010fdcf._0_8_;
  uStack_4d = 0;
                    /* try { // try from 0013d5e8 to 0013d5ef has its CatchHandler @ 0013d6a8 */
  local_70 = (char *)operator_new(0x30);
  uVar4 = s__DLcom_facebook_react_bridge_Rea_0010f40b._16_8_;
  uVar3 = s__DLcom_facebook_react_bridge_Rea_0010f40b._0_8_;
  uVar2 = CONCAT53(s__DLcom_facebook_react_bridge_Rea_0010f40b._27_5_,
                   s__DLcom_facebook_react_bridge_Rea_0010f40b._24_3_);
  uStack_78 = _UNK_00110688;
  local_80 = _DAT_00110680;
  *(undefined8 *)(local_70 + 8) = s__DLcom_facebook_react_bridge_Rea_0010f40b._8_8_;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
  uVar3 = s__DLcom_facebook_react_bridge_Rea_0010f40b._35_8_;
  uVar2 = CONCAT35(s__DLcom_facebook_react_bridge_Rea_0010f40b._32_3_,
                   s__DLcom_facebook_react_bridge_Rea_0010f40b._27_5_);
  local_70[0x2b] = '\0';
  *(undefined8 *)(local_70 + 0x23) = uVar3;
  *(undefined8 *)(local_70 + 0x1b) = uVar2;
                    /* try { // try from 0013d61c to 0013d647 has its CatchHandler @ 0013d690 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_0014b660);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d6d8  FUN_0013d6d8 =====

void FUN_0013d6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x24;
  uStack_2f = 0x7265;
  local_58[0] = 8;
  uStack_37 = (undefined7)s_dropGestureHandler_0010ff94._8_8_;
  cStack_30 = SUB81(s_dropGestureHandler_0010ff94._8_8_,7);
  local_3f = (char  [8])s_dropGestureHandler_0010ff94._0_8_;
  uStack_2d = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 0013d73c to 0013d75b has its CatchHandler @ 0013d79c */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_0014b668);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,cStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d7dc  FUN_0013d7dc =====

void FUN_0013d7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = (char  [7])s_flushOperations_0010f4d7._0_7_;
  local_58[0] = 6;
  cStack_38 = s_flushOperations_0010f4d7[7];
  acStack_37 = (char  [7])s_flushOperations_0010f4d7._8_7_;
  local_30 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0013d83c to 0013d85b has its CatchHandler @ 0013d89c */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_0014b670);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d8dc  FUN_0013d8dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_installUIRuntimeBindings_0010fa70._16_8_;
  uVar3 = s_installUIRuntimeBindings_0010fa70._8_8_;
  uVar2 = s_installUIRuntimeBindings_0010fa70._0_8_;
  local_50[0x18] = '\0';
  *(undefined8 *)(local_50 + 0x10) = uVar4;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  local_78[0] = 6;
  uStack_58 = _UNK_001105c8;
  local_60 = _DAT_001105c0;
  local_78[1] = 0x28;
  local_78[2] = 0x29;
  local_78[3] = 0x5a;
  local_78[4] = 0;
                    /* try { // try from 0013d95c to 0013d987 has its CatchHandler @ 0013d9d0 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,1,&local_60,local_78,param_4,param_5,&DAT_0014b678);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013da10  facebook::react::rngesturehandler_codegen_ModuleProvider =====

/* facebook::react::rngesturehandler_codegen_ModuleProvider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::react::JavaTurboModule::InitParams const&) */

void __thiscall
facebook::react::rngesturehandler_codegen_ModuleProvider
          (react *this,basic_string *param_1,InitParams *param_2)

{
  ulong uVar1;
  react rVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  react *prVar4;
  
  rVar2 = *this;
  uVar1 = (ulong)((byte)rVar2 >> 1);
  if (((byte)rVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 == 0x16) {
    prVar4 = *(react **)(this + 0x10);
    if (((byte)rVar2 & 1) == 0) {
      prVar4 = this + 1;
    }
    if ((*(long *)prVar4 == 0x7275747365474e52 && *(long *)(prVar4 + 8) == 0x72656c646e614865) &&
        *(long *)(prVar4 + 0xe) == 0x656c75646f4d7265) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_00144a70;
                    /* try { // try from 0013dacc to 0013dad7 has its CatchHandler @ 0013dae0 */
      NativeRNGestureHandlerModuleSpecJSI::NativeRNGestureHandlerModuleSpecJSI
                ((NativeRNGestureHandlerModuleSpecJSI *)(puVar3 + 3),(InitParams *)param_1);
      *in_x8 = (NativeRNGestureHandlerModuleSpecJSI *)(puVar3 + 3);
      in_x8[1] = puVar3;
      return;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  return;
}


// ===== 0013dafc  FUN_0013dafc =====

void FUN_0013dafc(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013db20  FUN_0013db20 =====

void FUN_0013db20(Value *param_1,long *param_2,IRuntime *param_3,undefined8 param_4)

{
  long lVar1;
  IRuntime aIStack_70 [16];
  undefined8 *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x28))();
  if ((param_2[0x10] != 0) && (*(int *)param_1 != 0)) {
                    /* try { // try from 0013db78 to 0013db83 has its CatchHandler @ 0013dc48 */
    (**(code **)(*(long *)param_3 + 0x228))(aIStack_70,param_3);
                    /* try { // try from 0013db84 to 0013db93 has its CatchHandler @ 0013dc38 */
    facebook::jsi::Value::asObject(aIStack_70);
                    /* try { // try from 0013db94 to 0013dba3 has its CatchHandler @ 0013dc1c */
    facebook::jsi::Value::Value(aVStack_58,param_3,param_1);
                    /* try { // try from 0013dbac to 0013dbbf has its CatchHandler @ 0013dc0c */
    (**(code **)(*(long *)param_3 + 0x1b0))(param_3,&local_60,param_4,aVStack_58);
    facebook::jsi::Value::~Value(aVStack_58);
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)();
    }
    facebook::jsi::Value::~Value((Value *)aIStack_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013dc70  FUN_0013dc70 =====

void FUN_0013dc70(ulong *param_1,long param_2,long *param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar12 = *(ulong *)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar12 != 0) {
    if (uVar12 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0013df34 to 0013df37 has its CatchHandler @ 0013df38 */
        uVar5 = FUN_0013eaac();
                    /* catch() { ... } // from try @ 0013dcc8 with catch @ 0013df38
                       catch() { ... } // from try @ 0013df34 with catch @ 0013df38 */
                    /* catch() { ... } // from try @ 0013dd24 with catch @ 0013df5c */
        FUN_0013ea34(param_1);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0011cd74(uVar5);
        }
      }
      goto LAB_0013df84;
    }
                    /* try { // try from 0013dcc8 to 0013dccb has its CatchHandler @ 0013df38 */
    pvVar4 = operator_new(uVar12 << 3);
    *param_1 = (ulong)pvVar4;
    param_1[1] = (ulong)pvVar4;
    param_1[2] = (ulong)((long)pvVar4 + uVar12 * 8);
  }
  for (plVar13 = *(long **)(param_2 + 0x40); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    uVar12 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
    lVar14 = (long)plVar13 + 0x11;
    if ((*(byte *)(plVar13 + 2) & 1) != 0) {
      uVar12 = plVar13[3];
      lVar14 = plVar13[4];
    }
                    /* try { // try from 0013dd24 to 0013dd2f has its CatchHandler @ 0013df5c */
    (**(code **)(*param_3 + 0xa0))(&local_70,param_3,lVar14,uVar12);
    plVar11 = (long *)param_1[1];
    if (plVar11 < (long *)param_1[2]) {
      *plVar11 = (long)local_70;
      param_1[1] = (ulong)(plVar11 + 1);
    }
    else {
      plVar16 = (long *)*param_1;
      lVar14 = (long)plVar11 - (long)plVar16 >> 3;
      uVar12 = lVar14 + 1;
      if (uVar12 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0013df04 to 0013df1f has its CatchHandler @ 0013df40 */
          FUN_0013eaac();
LAB_0013df08:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_0012dfd0();
          }
        }
        goto LAB_0013df84;
      }
      uVar6 = (long)param_1[2] - (long)plVar16;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (uVar8 >> 0x3d != 0) goto LAB_0013df08;
                    /* try { // try from 0013dd80 to 0013dd83 has its CatchHandler @ 0013df3c */
        pvVar4 = operator_new(uVar8 << 3);
      }
      puVar3 = local_70;
      plVar9 = (long *)((long)pvVar4 + lVar14 * 8);
      pvVar1 = (void *)((long)pvVar4 + uVar8 * 8);
      local_70 = (undefined8 *)0x0;
      plVar15 = plVar9 + 1;
      *plVar9 = (long)puVar3;
      if ((long)plVar11 - (long)plVar16 == 0) {
        *param_1 = (ulong)plVar9;
        param_1[1] = (ulong)plVar15;
        param_1[2] = (ulong)pvVar1;
      }
      else {
        uVar12 = ((long)plVar11 - (long)plVar16) - 8;
        plVar7 = plVar9;
        if ((uVar12 < 0x78) ||
           ((uVar8 = (long)plVar11 + (-8 - (long)plVar16) & 0xfffffffffffffff8,
            (long *)((long)pvVar4 + (((long)plVar11 - (long)plVar16) - uVar8) + -8) < plVar11 &&
            ((long *)((long)plVar11 + (-8 - uVar8)) < plVar9)))) {
LAB_0013de40:
          do {
            plVar11 = plVar11 + -1;
            plVar7 = plVar7 + -1;
            *plVar7 = *plVar11;
            *plVar11 = 0;
          } while (plVar11 != plVar16);
        }
        else {
          plVar10 = plVar11 + -2;
          uVar12 = (uVar12 >> 3) + 1;
          uVar6 = uVar12 & 0x3ffffffffffffffc;
          plVar11 = plVar11 + -uVar6;
          plVar7 = plVar9 + -uVar6;
          plVar9 = plVar9 + -2;
          uVar8 = uVar6;
          do {
            lVar19 = plVar10[-1];
            lVar18 = plVar10[-2];
            lVar17 = plVar10[1];
            lVar14 = *plVar10;
            uVar8 = uVar8 - 4;
            plVar10[1] = 0;
            *plVar10 = 0;
            plVar10[-1] = 0;
            plVar10[-2] = 0;
            plVar10 = plVar10 + -4;
            plVar9[-1] = lVar19;
            plVar9[-2] = lVar18;
            plVar9[1] = lVar17;
            *plVar9 = lVar14;
            plVar9 = plVar9 + -4;
          } while (uVar8 != 0);
          if (uVar12 != uVar6) goto LAB_0013de40;
        }
        plVar11 = (long *)*param_1;
        plVar16 = (long *)param_1[1];
        *param_1 = (ulong)plVar7;
        param_1[1] = (ulong)plVar15;
        param_1[2] = (ulong)pvVar1;
        while (plVar16 != plVar11) {
          plVar16 = plVar16 + -1;
          if ((undefined8 *)*plVar16 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar16)();
          }
        }
      }
      if (plVar11 != (long *)0x0) {
        operator_delete(plVar11);
      }
      param_1[1] = (ulong)plVar15;
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)();
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0013df84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013df88  FUN_0013df88 =====

void FUN_0013df88(undefined4 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  char *__s2;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  undefined8 local_f0;
  byte local_e8 [8];
  size_t local_e0;
  char *local_d8;
  undefined **local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined ***local_b0;
  undefined **local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined ***local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  (**(code **)(*param_3 + 0xc0))(local_e8,param_3,param_4);
  __s2 = (char *)((ulong)local_e8 | 1);
  sVar1 = (ulong)(local_e8[0] >> 1);
  pcVar13 = __s2;
  if ((local_e8[0] & 1) != 0) {
    sVar1 = local_e0;
    pcVar13 = local_d8;
  }
                    /* try { // try from 0013e000 to 0013e007 has its CatchHandler @ 0013e484 */
  uVar7 = FUN_001391e0(&local_a0,pcVar13,sVar1);
  uVar17 = *(ulong *)(param_2 + 0x38);
  if (uVar17 != 0) {
    uVar19 = NEON_cnt(uVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar15 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar15 < 2) {
      uVar16 = uVar17 - 1 & uVar7;
    }
    else {
      uVar16 = uVar7;
      if (uVar17 <= uVar7) {
        uVar16 = 0;
        if (uVar17 != 0) {
          uVar16 = uVar7 / uVar17;
        }
        uVar16 = uVar7 - uVar16 * uVar17;
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x30) + uVar16 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      pcVar13 = __s2;
      sVar1 = (ulong)(local_e8[0] >> 1);
      if ((local_e8[0] & 1) != 0) {
        pcVar13 = local_d8;
        sVar1 = local_e0;
      }
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          bVar3 = *(byte *)(plVar9 + 2);
          uVar10 = (ulong)(bVar3 >> 1);
          sVar2 = uVar10;
          if ((bVar3 & 1) != 0) {
            sVar2 = plVar9[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
LAB_0013e150:
                lStack_b8 = plVar9[6];
                local_c0 = plVar9[5];
                local_b0 = &local_d0;
                local_d0 = &PTR_FUN_00144ac0;
                local_a0 = &PTR_FUN_00144ac0;
                    /* try { // try from 0013e190 to 0013e1a3 has its CatchHandler @ 0013e3ec */
                lStack_c8 = param_2;
                local_98 = param_2;
                lStack_90 = local_c0;
                local_88 = lStack_b8;
                local_80 = &local_a0;
                (**(code **)(*param_3 + 0x278))(&local_f0,param_3,param_4,(int)plVar9[5],&local_a0);
                if (local_80 == &local_a0) {
                  lVar11 = 4;
                  pppuVar8 = &local_a0;
LAB_0013e38c:
                  (*(code *)(*pppuVar8)[lVar11])();
                }
                else if (local_80 != (undefined ***)0x0) {
                  lVar11 = 5;
                  pppuVar8 = local_80;
                  goto LAB_0013e38c;
                }
                uVar19 = local_f0;
                local_f0 = 0;
                *param_1 = 7;
                *(undefined8 *)(param_1 + 2) = uVar19;
                if (local_b0 == &local_d0) {
                  lVar11 = 4;
                  pppuVar8 = &local_d0;
                }
                else {
                  if (local_b0 == (undefined ***)0x0) goto LAB_0013e344;
                  lVar11 = 5;
                  pppuVar8 = local_b0;
                }
                (*(code *)(*pppuVar8)[lVar11])();
                goto LAB_0013e344;
              }
              pcVar12 = (char *)((long)plVar9 + 0x11);
              pcVar14 = pcVar13;
              while (*pcVar12 == *pcVar14) {
                uVar10 = uVar10 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar14 = pcVar14 + 1;
                if (uVar10 == 0) goto LAB_0013e150;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],pcVar13,plVar9[3]);
              if (iVar6 == 0) goto LAB_0013e150;
            }
          }
        }
        else {
          if (uVar15 < 2) {
            uVar10 = uVar10 & uVar17 - 1;
          }
          else if (uVar17 <= uVar10) {
            uVar4 = 0;
            if (uVar17 != 0) {
              uVar4 = uVar10 / uVar17;
            }
            uVar10 = uVar10 - uVar4 * uVar17;
          }
          if (uVar10 != uVar16) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  sVar1 = (ulong)(local_e8[0] >> 1);
  pcVar13 = __s2;
  if ((local_e8[0] & 1) != 0) {
    sVar1 = local_e0;
    pcVar13 = local_d8;
  }
                    /* try { // try from 0013e1d8 to 0013e1df has its CatchHandler @ 0013e480 */
  uVar7 = FUN_001391e0(&local_a0,pcVar13,sVar1);
  uVar17 = *(ulong *)(param_2 + 0x60);
  if (uVar17 != 0) {
    uVar19 = NEON_cnt(uVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar15 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar15 < 2) {
      uVar16 = uVar17 - 1 & uVar7;
    }
    else {
      uVar16 = uVar7;
      if (uVar17 <= uVar7) {
        uVar16 = 0;
        if (uVar17 != 0) {
          uVar16 = uVar7 / uVar17;
        }
        uVar16 = uVar7 - uVar16 * uVar17;
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x58) + uVar16 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(local_e8[0] >> 1);
      if ((local_e8[0] & 1) != 0) {
        __s2 = local_d8;
        sVar1 = local_e0;
      }
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          bVar3 = *(byte *)(plVar9 + 2);
          uVar10 = (ulong)(bVar3 >> 1);
          sVar2 = uVar10;
          if ((bVar3 & 1) != 0) {
            sVar2 = plVar9[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
LAB_0013e304:
                    /* try { // try from 0013e310 to 0013e31f has its CatchHandler @ 0013e3e4 */
                (**(code **)(*(long *)plVar9[5] + 0x10))
                          (&local_a0,(long *)plVar9[5],param_3,param_2 + 0x20);
                *param_1 = 7;
                *(undefined ***)(param_1 + 2) = local_a0;
                goto LAB_0013e344;
              }
              pcVar13 = (char *)((long)plVar9 + 0x11);
              pcVar12 = __s2;
              while (*pcVar13 == *pcVar12) {
                uVar10 = uVar10 - 1;
                pcVar13 = pcVar13 + 1;
                pcVar12 = pcVar12 + 1;
                if (uVar10 == 0) goto LAB_0013e304;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar6 == 0) goto LAB_0013e304;
            }
          }
        }
        else {
          if (uVar15 < 2) {
            uVar10 = uVar10 & uVar17 - 1;
          }
          else if (uVar17 <= uVar10) {
            uVar4 = 0;
            if (uVar17 != 0) {
              uVar4 = uVar10 / uVar17;
            }
            uVar10 = uVar10 - uVar4 * uVar17;
          }
          if (uVar10 != uVar16) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  *param_1 = 0;
LAB_0013e344:
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013e488  FUN_0013e488 =====

long * FUN_0013e488(long *param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong unaff_x26;
  undefined2 uVar23;
  undefined8 uVar24;
  float fVar25;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar22 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar22 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0013e4d8 to 0013e4df has its CatchHandler @ 0013e990 */
  uVar9 = FUN_001391e0(&local_80,pbVar4,uVar22);
  uVar22 = param_1[1];
  if (uVar22 != 0) {
    uVar24 = NEON_cnt(uVar22,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    uVar18 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
    if (uVar18 < 2) {
      unaff_x26 = uVar22 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar22 <= uVar9) {
        uVar13 = 0;
        if (uVar22 != 0) {
          uVar13 = uVar9 / uVar22;
        }
        unaff_x26 = uVar9 - uVar13 * uVar22;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar21 = (long *)*puVar12, plVar21 != (long *)0x0)) {
      pbVar4 = param_2 + 1;
      sVar2 = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar4 = *(byte **)(param_2 + 0x10);
        sVar2 = *(size_t *)(param_2 + 8);
      }
      do {
        uVar13 = plVar21[1];
        if (uVar13 == uVar9) {
          bVar5 = *(byte *)(plVar21 + 2);
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = plVar21[3];
          }
          if (sVar3 == sVar2) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) goto LAB_0013e8e4;
              uVar13 = 0;
              while (*(byte *)((long)plVar21 + uVar13 + 0x11) == pbVar4[uVar13]) {
                uVar13 = uVar13 + 1;
                if (bVar5 >> 1 == uVar13) goto LAB_0013e8e4;
              }
            }
            else {
              iVar8 = memcmp((void *)plVar21[4],pbVar4,plVar21[3]);
              if (iVar8 == 0) goto LAB_0013e8e4;
            }
          }
        }
        else {
          if (uVar18 < 2) {
            uVar13 = uVar13 & uVar22 - 1;
          }
          else if (uVar22 <= uVar13) {
            uVar16 = 0;
            if (uVar22 != 0) {
              uVar16 = uVar13 / uVar22;
            }
            uVar13 = uVar13 - uVar16 * uVar22;
          }
          if (uVar13 != unaff_x26) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
  plVar1 = param_1 + 2;
  plVar21 = (long *)operator_new(0x38);
  plVar14 = (long *)*param_3;
  *plVar21 = 0;
  plVar21[1] = uVar9;
  lVar17 = plVar14[1];
  lVar15 = *plVar14;
  plVar21[4] = plVar14[2];
  plVar21[3] = lVar17;
  plVar21[2] = lVar15;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = 0;
  lVar15 = param_1[3];
  fVar25 = *(float *)(param_1 + 4);
  plVar21[5] = 0;
  plVar21[6] = 0;
  local_70 = 1;
  local_80 = plVar21;
  plStack_78 = plVar1;
  if ((uVar22 == 0) || (fVar25 * (float)uVar22 < (float)(lVar15 + 1))) {
    if (uVar22 < 3) {
      uVar18 = 1;
    }
    else {
      uVar18 = (ulong)((uVar22 & uVar22 - 1) != 0);
    }
    uVar18 = uVar18 | uVar22 << 1;
    uVar22 = (ulong)((float)(lVar15 + 1) / fVar25);
    if (uVar18 <= uVar22) {
      uVar18 = uVar22;
    }
    if (uVar18 - 1 == 0) {
      uVar18 = 2;
    }
    else if ((uVar18 & uVar18 - 1) != 0) {
                    /* try { // try from 0013e6bc to 0013e967 has its CatchHandler @ 0013e968 */
      uVar18 = std::__ndk1::__next_prime(uVar18);
    }
    uVar22 = param_1[1];
    if (uVar22 < uVar18) {
LAB_0013e6d4:
      if (uVar18 >> 0x3d != 0) {
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0012dfd0();
        }
        goto LAB_0013e98c;
      }
      pvVar10 = operator_new(uVar18 << 3);
      pvVar11 = (void *)*param_1;
      *param_1 = (long)pvVar10;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
      uVar22 = 0;
      param_1[1] = uVar18;
      do {
        *(undefined8 *)(*param_1 + uVar22 * 8) = 0;
        uVar22 = uVar22 + 1;
      } while (uVar18 != uVar22);
      plVar14 = (long *)*plVar1;
      uVar22 = uVar18;
      if (plVar14 != (long *)0x0) {
        uVar13 = plVar14[1];
        uVar24 = NEON_cnt(uVar18,1);
        uVar23 = NEON_uaddlv(uVar24,1);
        uVar16 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
        if (uVar16 < 2) {
          uVar13 = uVar13 & uVar18 - 1;
        }
        else if (uVar18 <= uVar13) {
          uVar20 = 0;
          if (uVar18 != 0) {
            uVar20 = uVar13 / uVar18;
          }
          uVar13 = uVar13 - uVar20 * uVar18;
        }
        *(long **)(*param_1 + uVar13 * 8) = plVar1;
        plVar19 = (long *)*plVar14;
        if (plVar19 != (long *)0x0) {
          do {
            uVar20 = plVar19[1];
            if (uVar16 < 2) {
              uVar20 = uVar20 & uVar18 - 1;
            }
            else if (uVar18 <= uVar20) {
              uVar6 = 0;
              if (uVar18 != 0) {
                uVar6 = uVar20 / uVar18;
              }
              uVar20 = uVar20 - uVar6 * uVar18;
            }
            if (uVar20 != uVar13) {
              if (*(long *)(*param_1 + uVar20 * 8) == 0) {
                *(long **)(*param_1 + uVar20 * 8) = plVar14;
                uVar13 = uVar20;
              }
              else {
                *plVar14 = *plVar19;
                *plVar19 = **(long **)(*param_1 + uVar20 * 8);
                **(undefined8 **)(*param_1 + uVar20 * 8) = plVar19;
                plVar19 = plVar14;
              }
            }
            plVar14 = plVar19;
            plVar19 = (long *)*plVar14;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    else if (uVar18 < uVar22) {
      uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar22 < 3) {
LAB_0013e918:
        uVar13 = std::__ndk1::__next_prime(uVar13);
      }
      else {
        uVar24 = NEON_cnt(uVar22,1);
        uVar23 = NEON_uaddlv(uVar24,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23)) goto LAB_0013e918;
        if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
      }
      if (uVar18 <= uVar13) {
        uVar18 = uVar13;
      }
      if (uVar18 < uVar22) {
        if (uVar18 != 0) goto LAB_0013e6d4;
        pvVar10 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
        param_1[1] = 0;
        uVar22 = 0;
      }
      else {
        uVar22 = param_1[1];
      }
    }
    if ((uVar22 & uVar22 - 1) == 0) {
      unaff_x26 = uVar22 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar22 <= uVar9) {
        uVar18 = 0;
        if (uVar22 != 0) {
          uVar18 = uVar9 / uVar22;
        }
        unaff_x26 = uVar9 - uVar18 * uVar22;
      }
    }
  }
  lVar15 = *param_1;
  plVar14 = *(long **)(lVar15 + unaff_x26 * 8);
  if (plVar14 == (long *)0x0) {
    lVar17 = *plVar1;
    *plVar1 = (long)plVar21;
    *plVar21 = lVar17;
    *(long **)(lVar15 + unaff_x26 * 8) = plVar1;
    if (*plVar21 != 0) {
      uVar9 = *(ulong *)(*plVar21 + 8);
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar9 = uVar9 & uVar22 - 1;
      }
      else if (uVar22 <= uVar9) {
        uVar18 = 0;
        if (uVar22 != 0) {
          uVar18 = uVar9 / uVar22;
        }
        uVar9 = uVar9 - uVar18 * uVar22;
      }
      plVar14 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_0013e8d4;
    }
  }
  else {
    *plVar21 = *plVar14;
LAB_0013e8d4:
    *plVar14 = (long)plVar21;
  }
  param_1[3] = param_1[3] + 1;
LAB_0013e8e4:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return plVar21;
  }
LAB_0013e98c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013e994  FUN_0013e994 =====

void FUN_0013e994(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)pvVar1 + 0x10) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0013e9e4  FUN_0013e9e4 =====

void FUN_0013e9e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00144a70;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0013e9f4  FUN_0013e9f4 =====

void FUN_0013e9f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00144a70;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013ea24  FUN_0013ea24 =====

void FUN_0013ea24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013ea2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0013ea30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 0013ea34  FUN_0013ea34 =====

void FUN_0013ea34(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)param_1[1];
  plVar1 = plVar2;
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar3)();
      }
    } while (plVar3 != plVar2);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar2;
  operator_delete(plVar1);
  return;
}


// ===== 0013eaac  FUN_0013eaac =====

void FUN_0013eaac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 0013eac0  FUN_0013eac0 =====

void FUN_0013eac0(void)

{
  return;
}


// ===== 0013eac4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 0013eac8  FUN_0013eac8 =====

void FUN_0013eac8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00144ac0;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 0013eb08  FUN_0013eb08 =====

void FUN_0013eb08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00144ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 0013eb28  FUN_0013eb28 =====

void FUN_0013eb28(void)

{
  return;
}


// ===== 0013eb2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 0013eb30  FUN_0013eb30 =====

void FUN_0013eb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0013eb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_2,*(undefined8 *)(param_1 + 8),*param_4,*param_5);
  return;
}


// ===== 0013eb4c  FUN_0013eb4c =====

long FUN_0013eb4c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00144f58) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0013eb68  FUN_0013eb68 =====

undefined * FUN_0013eb68(void)

{
  return PTR_typeinfo_00144f60;
}


// ===== 0013eb80  FUN_0013eb80 =====

void FUN_0013eb80(void)

{
  (*(code *)PTR_00144f80)();
  return;
}


// ===== 0013eba0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00144f88)();
  return;
}


// ===== 0013ebb0  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00144f90)();
  return;
}


// ===== 0013ebc0  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_00144f98)();
  return;
}


// ===== 0013ebd0  facebook::react::RNGestureHandlerDetectorShadowNode::replaceChild =====

void facebook::react::RNGestureHandlerDetectorShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
  (*(code *)PTR_replaceChild_00144fa0)();
  return;
}


// ===== 0013ebe0  facebook::react::RNGestureHandlerDetectorShadowNode::unflattenNode =====

void facebook::react::RNGestureHandlerDetectorShadowNode::unflattenNode(shared_ptr *param_1)

{
  (*(code *)PTR_unflattenNode_00144fa8)();
  return;
}


// ===== 0013ebf0  <EXTERNAL>::facebook::react::ShadowNode::getChildren =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getChildren(void)

{
  (*(code *)PTR_getChildren_00144fb0)();
  return;
}


// ===== 0013ec00  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
  (*(code *)PTR_appendChild_00144fb8)();
  return;
}


// ===== 0013ec10  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
  (*(code *)PTR_replaceChild_00144fc0)();
  return;
}


// ===== 0013ec20  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
  (*(code *)PTR_layout_00144fc8)();
  return;
}


// ===== 0013ec30  <EXTERNAL>::facebook::react::LayoutableShadowNode::setLayoutMetrics =====

void facebook::react::LayoutableShadowNode::setLayoutMetrics(void)

{
  (*(code *)PTR_setLayoutMetrics_00144fd0)();
  return;
}


// ===== 0013ec40  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
  (*(code *)PTR_getLayoutMetrics_00144fd8)();
  return;
}


// ===== 0013ec50  <EXTERNAL>::facebook::react::ShadowNode::clone =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::clone(ShadowNodeFragment *param_1)

{
  (*(code *)PTR_clone_00144fe0)();
  return;
}


// ===== 0013ec60  <EXTERNAL>::facebook::react::ShadowNodeFragment::propsPlaceholder =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::propsPlaceholder(void)

{
  (*(code *)PTR_propsPlaceholder_00144fe8)();
  return;
}


// ===== 0013ec70  <EXTERNAL>::facebook::react::ShadowNodeFragment::childrenPlaceholder =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::childrenPlaceholder(void)

{
  (*(code *)PTR_childrenPlaceholder_00144ff0)();
  return;
}


// ===== 0013ec80  <EXTERNAL>::facebook::react::ShadowNodeFragment::statePlaceholder =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::statePlaceholder(void)

{
  (*(code *)PTR_statePlaceholder_00144ff8)();
  return;
}


// ===== 0013ec90  <EXTERNAL>::facebook::react::ShadowNode::getOrderIndex =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getOrderIndex(void)

{
  (*(code *)PTR_getOrderIndex_00145000)();
  return;
}


// ===== 0013eca0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_completeClone_00145008)();
  return;
}


// ===== 0013ecb0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00145010)();
  return;
}


// ===== 0013ecc0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00145018)();
  return;
}


// ===== 0013ecd0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 0013ece0  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_00145028)();
  return;
}


// ===== 0013ecf0  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_00145030)();
  return;
}


// ===== 0013ed00  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
  (*(code *)PTR_resolveTransform_00145038)();
  return;
}


// ===== 0013ed10  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_00145040
  )();
  return;
}


// ===== 0013ed20  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
  (*(code *)PTR_add_00145048)();
  return;
}


// ===== 0013ed30  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00145050)();
  return pvVar1;
}


// ===== 0013ed40  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00145058)();
  return;
}


// ===== 0013ed50  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00145060)();
  return;
}


// ===== 0013ed60  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
  (*(code *)PTR_ComponentDescriptor_00145068)();
  return;
}


// ===== 0013ed70  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
  (*(code *)PTR_parse_00145070)();
  return;
}


// ===== 0013ed80  facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps =====

void __thiscall
facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps
          (RNGestureHandlerButtonProps *this,PropsParserContext *param_1,
          RNGestureHandlerButtonProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNGestureHandlerButtonProps_00145078)();
  return;
}


// ===== 0013ed90  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
  (*(code *)PTR_postPrepare_00145080)();
  return;
}


// ===== 0013eda0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00145088)();
  return;
}


// ===== 0013edb0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
  (*(code *)PTR___shared_mutex_base_00145090)();
  return;
}


// ===== 0013edc0  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00145098)();
  return;
}


// ===== 0013edd0  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_001450a0)();
  return;
}


// ===== 0013ede0  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_001450a8)();
  return sVar1;
}


// ===== 0013edf0  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_001450b0)();
  return;
}


// ===== 0013ee00  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_001450b8)();
  return;
}


// ===== 0013ee10  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_001450c0)();
  return;
}


// ===== 0013ee20  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_001450c8)();
  return;
}


// ===== 0013ee30  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
  (*(code *)PTR_YogaLayoutableShadowNode_001450d0)();
  return;
}


// ===== 0013ee40  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_transferRuntimeShadowNodeReference_001450d8)();
  return;
}


// ===== 0013ee50  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_YogaLayoutableShadowNode_001450e0)();
  return;
}


// ===== 0013ee60  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
  (*(code *)PTR_isEmpty_001450e8)();
  return;
}


// ===== 0013ee70  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
  (*(code *)PTR_enableExclusivePropsUpdateAndroid_001450f0)();
  return;
}


// ===== 0013ee80  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
  (*(code *)PTR_enableAccumulatedUpdatesInRawPropsAndroid_001450f8)();
  return;
}


// ===== 0013ee90  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
  (*(code *)PTR_enablePropsUpdateReconciliationAndroid_00145100)();
  return;
}


// ===== 0013eea0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00145108)((int)__s1);
  return iVar1;
}


// ===== 0013eeb0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
  (*(code *)PTR_enableCppPropsIteratorSetter_00145110)();
  return;
}


// ===== 0013eec0  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_00145118)();
  return;
}


// ===== 0013eed0  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
  (*(code *)PTR_operator_cast_to_dynamic_00145120)();
  return;
}


// ===== 0013eee0  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
  (*(code *)PTR_setProp_00145128)(param_1,param_2);
  return;
}


// ===== 0013eef0  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00145130)();
  return;
}


// ===== 0013ef00  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_00145138)();
  return;
}


// ===== 0013ef10  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00145140)();
  return;
}


// ===== 0013ef20  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
  (*(code *)PTR_initializeDynamicProps_00145148)();
  return;
}


// ===== 0013ef30  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_00145150)();
  return;
}


// ===== 0013ef40  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_00145158)();
  return;
}


// ===== 0013ef50  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_00145160)();
  return;
}


// ===== 0013ef60  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
  (*(code *)PTR_setShadowNodeFamily_00145168)();
  return;
}


// ===== 0013ef70  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
  (*(code *)PTR_EventEmitter_00145170)();
  return;
}


// ===== 0013ef80  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
  (*(code *)PTR_EventTarget_00145178)();
  return;
}


// ===== 0013ef90  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
  (*(code *)PTR_ShadowNodeFamily_00145180)();
  return;
}


// ===== 0013efa0  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
  (*(code *)PTR__ShadowNodeFamily_00145188)();
  return;
}


// ===== 0013efb0  facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps =====

void __thiscall
facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps
          (RNGestureHandlerRootViewProps *this,PropsParserContext *param_1,
          RNGestureHandlerRootViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNGestureHandlerRootViewProps_00145190)();
  return;
}


// ===== 0013efc0  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

void facebook::react::EventEmitter::dispatchEvent(void)

{
  (*(code *)PTR_dispatchEvent_00145198)();
  return;
}


// ===== 0013efd0  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_001451a0)();
  return;
}


// ===== 0013efe0  <EXTERNAL>::facebook::jsi::valueFromDynamic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::valueFromDynamic(Runtime *param_1,dynamic *param_2)

{
  (*(code *)PTR_valueFromDynamic_001451a8)();
  return;
}


// ===== 0013eff0  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_001451b0)();
  return;
}


// ===== 0013f000  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001451b8)();
  return;
}


// ===== 0013f010  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_001451c0)();
  return;
}


// ===== 0013f020  facebook::react::parsePlatformColor =====

void facebook::react::parsePlatformColor(ContextContainer *param_1,int param_2,RawValue *param_3)

{
  (*(code *)PTR_parsePlatformColor_001451c8)(param_1,param_2);
  return;
}


// ===== 0013f030  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_001451d0)();
  return;
}


// ===== 0013f040  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001451d8)();
  return;
}


// ===== 0013f050  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001451e0)();
  return;
}


// ===== 0013f060  _JNIEnv::CallIntMethod =====

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallIntMethod_001451e8)();
  return;
}


// ===== 0013f070  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_001451f0)();
  return;
}


// ===== 0013f080  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_001451f8)();
  return;
}


// ===== 0013f090  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___00145200)();
  return;
}


// ===== 0013f0a0  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__00145208)();
  return;
}


// ===== 0013f0b0  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__00145210)();
  return;
}


// ===== 0013f0c0  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_00145218)();
  return;
}


// ===== 0013f0d0  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00145220)();
  return;
}


// ===== 0013f0e0  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00145228)((int)__s1);
  return iVar1;
}


// ===== 0013f0f0  <EXTERNAL>::folly::operator== =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
  (*(code *)PTR_operator___00145230)();
  return;
}


// ===== 0013f100  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_00145238)();
  return;
}


// ===== 0013f110  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_00145240)(this,param_1,param_2,param_3);
  return;
}


// ===== 0013f120  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_00145248)();
  return;
}


// ===== 0013f130  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_00145250)();
  return;
}


// ===== 0013f140  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_00145258)();
  return;
}


// ===== 0013f150  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00145260)();
  return;
}


// ===== 0013f160  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
  (*(code *)PTR_asBool_00145268)();
  return;
}


// ===== 0013f170  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_00145270)();
  return;
}


// ===== 0013f180  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_00145278)();
  return;
}


// ===== 0013f190  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_00145280)();
  return;
}


// ===== 0013f1a0  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_00145288)();
  return;
}


// ===== 0013f1b0  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_00145290)();
  return;
}


// ===== 0013f1c0  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_00145298)();
  return;
}


// ===== 0013f1d0  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_001452a0)(param_1);
  return;
}


// ===== 0013f1e0  <EXTERNAL>::facebook::react::getDefaultColorSpace =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::getDefaultColorSpace(void)

{
  (*(code *)PTR_getDefaultColorSpace_001452a8)();
  return;
}


// ===== 0013f1f0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing(void)

{
  (*(code *)PTR_enableNativeCSSParsing_001452b0)();
  return;
}


// ===== 0013f200  <EXTERNAL>::facebook::react::colorFromComponents =====

void facebook::react::colorFromComponents(void)

{
  (*(code *)PTR_colorFromComponents_001452b8)();
  return;
}


// ===== 0013f210  <EXTERNAL>::remainderf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_remainderf_001452c0)();
  return fVar1;
}


// ===== 0013f220  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_001452c8)();
  return;
}


// ===== 0013f230  <EXTERNAL>::nextafter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_nextafter_001452d0)();
  return dVar1;
}


// ===== 0013f240  <EXTERNAL>::std::range_error::~range_error =====

void __thiscall std::range_error::~range_error(range_error *this)

{
  (*(code *)PTR__range_error_001452d8)();
  return;
}


// ===== 0013f250  <EXTERNAL>::folly::makeConversionError =====

void folly::makeConversionError(void)

{
  (*(code *)PTR_makeConversionError_001452e0)();
  return;
}


// ===== 0013f260  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
  (*(code *)PTR_reserve_001452e8)();
  return;
}


// ===== 0013f270  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_001452f0)();
  return;
}


// ===== 0013f280  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
  (*(code *)PTR_ToShortestIeeeNumber_001452f8)();
  return;
}


// ===== 0013f290  <EXTERNAL>::folly::detail::str_to_integral<long> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_integral<long>(Range *param_1)

{
  (*(code *)PTR_str_to_integral<long>_00145300)();
  return;
}


// ===== 0013f2a0  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_00145308)();
  return;
}


// ===== 0013f2b0  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
  (*(code *)PTR_size_00145310)();
  return;
}


// ===== 0013f2c0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
  (*(code *)PTR_push_back_00145318)(param_1);
  return;
}


// ===== 0013f2d0  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
  (*(code *)PTR_str_to_floating<double>_00145320)();
  return;
}


// ===== 0013f2e0  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_00145328)();
  return;
}


// ===== 0013f2f0  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_00145330)();
  return;
}


// ===== 0013f300  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_00145338)();
  return;
}


// ===== 0013f310  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  (*(code *)PTR___call_once_00145340)();
  return;
}


// ===== 0013f320  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_00145348)();
  return;
}


// ===== 0013f330  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_00145350)();
  return;
}


// ===== 0013f340  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
  (*(code *)PTR_lock_shared_00145358)();
  return;
}


// ===== 0013f350  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_00145360)();
  return;
}


// ===== 0013f360  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_00145368)();
  return;
}


// ===== 0013f370  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
  (*(code *)PTR_unlock_shared_00145370)();
  return;
}


// ===== 0013f380  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_00145378)(param_1);
  return;
}


// ===== 0013f390  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_00145380)();
  return;
}


// ===== 0013f3a0  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
  (*(code *)PTR_make_jstring_00145388)();
  return;
}


// ===== 0013f3b0  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_00145390)();
  return;
}


// ===== 0013f3c0  <EXTERNAL>::facebook::jsi::dynamicFromValue =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::dynamicFromValue(Runtime *param_1,Value *param_2,function *param_3)

{
  (*(code *)PTR_dynamicFromValue_00145398)();
  return;
}


// ===== 0013f3d0  facebook::react::NativeRNGestureHandlerModuleSpecJSI::NativeRNGestureHandlerModuleSpecJSI =====

void __thiscall
facebook::react::NativeRNGestureHandlerModuleSpecJSI::NativeRNGestureHandlerModuleSpecJSI
          (NativeRNGestureHandlerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeRNGestureHandlerModuleSpecJSI_001453a0)();
  return;
}


// ===== 0013f3e0  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
  (*(code *)PTR_JavaTurboModule_001453a8)();
  return;
}


// ===== 0013f3f0  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
  (*(code *)PTR__JavaTurboModule_001453b0)();
  return;
}


// ===== 0013f400  <EXTERNAL>::facebook::react::JavaTurboModule::invokeJavaMethod =====

void facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
  (*(code *)PTR_invokeJavaMethod_001453b8)();
  return;
}


// ===== 0013f410  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_001453c0)();
  return;
}


// ===== 0013f420  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001453c8)();
  return;
}


// ===== 0013f430  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_001453d0)();
  return sVar1;
}


// ===== 0013f440  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_001453d8)();
  return pvVar1;
}


// ===== 0013f450  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001453e0)();
  return;
}


// ===== 0013f460  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001453e8)();
  return pvVar1;
}


// ===== 0013f470  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_001453f0)((int)__s1);
  return iVar1;
}


// ===== 0013f480  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_001453f8)((int)__stream);
  return iVar1;
}


// ===== 0013f490  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00145400)();
  return;
}


// ===== 0013f4a0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00145408)((int)__rwlock);
  return iVar1;
}


// ===== 0013f4b0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00145410)();
  return lVar1;
}


// ===== 0013f4c0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00145418)((int)__rwlock);
  return iVar1;
}


// ===== 0013f4d0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00145420)();
  return pvVar1;
}


// ===== 0013f4e0  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00145428)();
  return;
}


// ===== 0013f4f0  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_00145430)();
  return;
}


// ===== 0013f500  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00145438)();
  return _Var1;
}


// ===== 0013f510  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00145440)((int)__rwlock);
  return iVar1;
}


// ===== 0013f520  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00145448)(__s,__c);
  return pvVar1;
}


// ===== 0013f530  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00145450)((int)__stream);
  return iVar1;
}


// ===== 0014c000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c018  <EXTERNAL>::facebook::react::ShadowNode::getChildren =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getChildren(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c020  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c028  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c030  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c038  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c040  <EXTERNAL>::facebook::react::LayoutableShadowNode::setLayoutMetrics =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::setLayoutMetrics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c048  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c050  <EXTERNAL>::facebook::react::ShadowNode::clone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::clone(ShadowNodeFragment *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c058  <EXTERNAL>::facebook::react::ShadowNodeFragment::propsPlaceholder =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::propsPlaceholder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c060  <EXTERNAL>::facebook::react::ShadowNodeFragment::childrenPlaceholder =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::childrenPlaceholder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c068  <EXTERNAL>::facebook::react::ShadowNodeFragment::statePlaceholder =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::statePlaceholder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c070  <EXTERNAL>::facebook::react::ShadowNode::getOrderIndex =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getOrderIndex(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c078  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c080  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layoutTree =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layoutTree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c088  <EXTERNAL>::facebook::react::LayoutableShadowNode::measureContent =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measureContent
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c090  <EXTERNAL>::facebook::react::LayoutableShadowNode::measure =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measure
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c098  <EXTERNAL>::facebook::react::LayoutableShadowNode::getContentOriginOffset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getContentOriginOffset(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0a0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::dirtyLayout =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::dirtyLayout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0a8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::getIsLayoutClean =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::getIsLayoutClean(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0b0  <EXTERNAL>::facebook::react::LayoutableShadowNode::baseline =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::baseline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0b8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0c0  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0c8  <EXTERNAL>::std::bad_optional_access::~bad_optional_access =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_optional_access::~bad_optional_access(bad_optional_access *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0d0  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0d8  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0e0  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0e8  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c0f0  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c128  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c130  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c138  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c140  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c148  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c150  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c158  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c160  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c168  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c170  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c178  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c180  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c188  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c190  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c198  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1a0  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1a8  <EXTERNAL>::__cxa_pure_virtual =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1b0  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1b8  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1c0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1c8  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1d0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1d8  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1e0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1e8  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1f0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c1f8  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c200  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c208  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c210  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c218  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c220  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c228  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c230  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c238  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c240  <EXTERNAL>::folly::TypeError::TypeError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::TypeError::TypeError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c248  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c250  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c258  <EXTERNAL>::std::runtime_error::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c260  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c268  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c270  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c278  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c280  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2c0  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::dispatchEvent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2c8  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2d0  <EXTERNAL>::facebook::jsi::valueFromDynamic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::valueFromDynamic(Runtime *param_1,dynamic *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2d8  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2e0  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2e8  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2f0  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c2f8  <EXTERNAL>::folly::dynamic::operator[] =====

/* WARNING: Control flow encountered bad instruction data */

void folly::dynamic::operator[](void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c300  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c308  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c310  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c318  <EXTERNAL>::facebook::react::Props::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c320  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c328  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c330  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c338  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c340  <EXTERNAL>::folly::operator== =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c348  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c350  <EXTERNAL>::google::LogMessage::LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c358  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c360  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c368  <EXTERNAL>::google::LogMessage::~LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c370  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c378  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c380  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c388  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c390  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c398  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3a0  <EXTERNAL>::std::__ndk1::locale::~locale =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3a8  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3b0  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3b8  <EXTERNAL>::facebook::react::getDefaultColorSpace =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::getDefaultColorSpace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3c0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3c8  <EXTERNAL>::facebook::react::colorFromComponents =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::colorFromComponents(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3d0  <EXTERNAL>::std::out_of_range::~out_of_range =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3d8  <EXTERNAL>::remainderf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3e0  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3e8  <EXTERNAL>::nextafter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3f0  <EXTERNAL>::std::range_error::~range_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::range_error::~range_error(range_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c3f8  <EXTERNAL>::folly::makeConversionError =====

/* WARNING: Control flow encountered bad instruction data */

void folly::makeConversionError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c400  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c408  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c410  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

/* WARNING: Control flow encountered bad instruction data */

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c418  <EXTERNAL>::folly::detail::str_to_integral<long> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_integral<long>(Range *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c420  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c428  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c430  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c438  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c440  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c448  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c450  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c458  <EXTERNAL>::facebook::react::configurePlatformColorCacheInvalidationHook =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::configurePlatformColorCacheInvalidationHook(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c460  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c468  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c470  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c478  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c480  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c488  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c490  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c498  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c4a0  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c4a8  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c4b0  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c4b8  <EXTERNAL>::facebook::jsi::dynamicFromValue =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::dynamicFromValue(Runtime *param_1,Value *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c548  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c550  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c558  <EXTERNAL>::facebook::jsi::HostObject::set =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::HostObject::set(Runtime *param_1,PropNameID *param_2,Value *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c560  <EXTERNAL>::facebook::react::JavaTurboModule::invokeJavaMethod =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c568  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c578  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c580  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c588  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c590  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c598  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5a0  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5a8  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5b0  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5b8  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5c8  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5d0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5d8  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5e0  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5e8  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5f0  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c5f8  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c600  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0014c608  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


