// ===== 0055fb9c  FUN_0055fb9c =====

void FUN_0055fb9c(int *param_1,int *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*param_2 == 1) {
    if (*param_1 == 1) {
      fVar1 = (float)param_2[1];
      if ((fVar1 < (float)param_2[3] != (NAN(fVar1) || NAN((float)param_2[3]))) &&
         ((float)param_2[2] < (float)param_2[4] !=
          (NAN((float)param_2[2]) || NAN((float)param_2[4])))) {
        fVar6 = (float)param_1[1];
        fVar4 = (float)param_1[3];
        if (fVar6 < fVar4 != (NAN(fVar6) || NAN(fVar4))) {
          fVar7 = (float)param_1[2];
          fVar5 = (float)param_1[4];
          if (fVar7 < fVar5 != (NAN(fVar7) || NAN(fVar5))) {
            if (fVar1 < fVar6) {
              fVar6 = fVar1;
            }
            param_1[1] = (int)fVar6;
            if ((float)param_2[2] < fVar7) {
              fVar7 = (float)param_2[2];
            }
            param_1[2] = (int)fVar7;
            fVar1 = (float)param_2[3];
            if (fVar4 < fVar1 != (NAN(fVar4) || NAN(fVar1))) {
              fVar4 = fVar1;
            }
            param_1[3] = (int)fVar4;
            fVar1 = (float)param_2[4];
            if (fVar5 < fVar1 != (NAN(fVar5) || NAN(fVar1))) {
              fVar5 = fVar1;
            }
            param_1[4] = (int)fVar5;
            return;
          }
        }
        uVar2 = *(undefined8 *)(param_2 + 1);
        *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
        *(undefined8 *)(param_1 + 1) = uVar2;
        return;
      }
    }
    else if (*param_1 == 2) {
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)param_2;
      param_1[4] = param_2[4];
      *(undefined8 *)(param_1 + 2) = uVar3;
      *(undefined8 *)param_1 = uVar2;
      return;
    }
  }
  else if (*param_2 == 0) {
    *param_1 = 0;
    return;
  }
  return;
}


// ===== 0055fc6c  FUN_0055fc6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fc6c(float param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  float *pfVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar9;
  undefined1 auVar8 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_5c [4];
  undefined4 uStack_4c;
  float local_48 [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_5 + 4) == 0) {
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    DAT_006870b0 = 0;
    DAT_006870b8 = 0;
    DAT_006870c0 = 0;
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_5 + 8) + (ulong)(*(int *)(param_5 + 4) - 1) * 0x18);
    uVar17 = puVar5[1];
    uVar19 = puVar5[2];
    uVar18 = *puVar5;
  }
  local_5c[0] = param_1;
  local_5c[1] = param_1;
  lVar6 = 0;
  local_48[0] = param_2;
  local_48[1] = (float)param_4;
  local_5c[2] = (float)param_3;
  local_5c[3] = (float)param_3;
  local_48[2] = param_2;
  local_48[3] = (float)param_4;
  auVar8 = _DAT_0024e500;
  do {
    pfVar1 = (float *)((long)local_48 + lVar6);
    fVar10 = *pfVar1;
    fVar15 = (float)uVar19 + (float)uVar18 * *(float *)((long)local_5c + lVar6) +
             (float)uVar17 * fVar10;
    fVar10 = (float)((ulong)uVar19 >> 0x20) +
             (float)((ulong)uVar18 >> 0x20) * *(float *)((long)local_5c + lVar6) +
             (float)((ulong)uVar17 >> 0x20) * fVar10;
    auVar16._0_8_ = CONCAT44(fVar10,fVar15);
    auVar11 = NEON_ext(auVar8,auVar8,8,1);
    *(float *)((long)local_5c + lVar6) = fVar15;
    lVar6 = lVar6 + 4;
    *pfVar1 = fVar10;
    auVar16._8_8_ = auVar11._0_8_;
    uVar9 = auVar8._8_4_;
    auVar12._4_4_ = uVar9;
    auVar12._0_4_ = uVar9;
    auVar12._8_4_ = uVar9;
    auVar12._12_4_ = uVar9;
    auVar13 = NEON_fcmgt(auVar8,auVar12,4);
    auVar11._8_8_ = auVar16._0_8_;
    auVar11._0_8_ = auVar8._0_8_;
    auVar11 = NEON_fcmge(auVar16,auVar11,4);
    auVar14._0_4_ = auVar13._0_4_;
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_4_ = auVar14._0_4_;
    auVar14._12_4_ = auVar14._0_4_;
    auVar13._8_8_ = auVar16._0_8_;
    auVar13._0_8_ = auVar16._0_8_;
    auVar11 = NEON_bif(auVar8,auVar13,auVar11,1);
    auVar8._8_8_ = auVar16._0_8_;
    auVar8._0_8_ = auVar16._0_8_;
    auVar8 = NEON_bit(auVar11,auVar8,auVar14,1);
  } while (lVar6 != 0x10);
  auVar11 = NEON_ext(auVar8,auVar8,8,1);
  uVar7 = *(uint *)(param_5 + 0x14);
  local_5c[3] = auVar8._8_4_;
  uStack_4c = auVar8._12_4_;
  local_5c[1] = auVar8._0_4_;
  local_5c[2] = auVar8._4_4_;
  uVar17 = NEON_fcmge(auVar8._0_8_,auVar11._0_8_,4);
  local_5c[0] = 1.4013e-45;
  if ((((uint)uVar17 | (uint)((ulong)uVar17 >> 0x20)) & 1) != 0) {
    local_5c[0] = 2.8026e-45;
  }
  if (uVar7 == 0) {
    puVar5 = &DAT_006870b0;
    DAT_006870b0 = 0;
    DAT_006870b8 = 0;
    DAT_006870c0 = DAT_006870c0 & 0xffffffff00000000;
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_5 + 0x18) + (ulong)(uVar7 - 1) * 0x14);
  }
  FUN_0055fe38(local_5c,puVar5);
  if (*(int *)(param_5 + 0x10) <= (int)uVar7) {
    uVar4 = FUN_0050b908((int *)(param_5 + 0x10),uVar7 + 1);
    if ((uVar4 & 1) == 0) {
      DAT_006870b0 = 0;
      DAT_006870b8 = 0;
      DAT_006870c0 = DAT_006870c0 & 0xffffffff00000000;
      goto LAB_0055fdc8;
    }
    uVar7 = *(uint *)(param_5 + 0x14);
  }
  auVar3._8_4_ = local_5c[2];
  auVar3._0_8_ = CONCAT44(local_5c[1],local_5c[0]);
  auVar3._12_4_ = local_5c[3];
  puVar5 = (undefined8 *)(*(long *)(param_5 + 0x18) + (ulong)uVar7 * 0x14);
  *(uint *)(param_5 + 0x14) = uVar7 + 1;
  puVar5[1] = auVar3._8_8_;
  *puVar5 = CONCAT44(local_5c[1],local_5c[0]);
  *(undefined4 *)(puVar5 + 2) = uStack_4c;
LAB_0055fdc8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0055fe38  FUN_0055fe38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fe38(int *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = _DAT_0024e500;
  iVar1 = *param_2;
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_0055ff14;
  }
  if (*param_1 != 1) {
    if (*param_1 != 0) {
      return;
    }
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)param_2;
    param_1[4] = param_2[4];
    *(undefined8 *)(param_1 + 2) = uVar4;
    *(undefined8 *)param_1 = uVar3;
    return;
  }
  fVar2 = (float)param_2[1];
  if ((fVar2 < (float)param_2[3] == (NAN(fVar2) || NAN((float)param_2[3]))) ||
     ((float)param_2[2] < (float)param_2[4] == (NAN((float)param_2[2]) || NAN((float)param_2[4]))))
  {
LAB_0055ff04:
    *(undefined8 *)(param_1 + 3) = _UNK_0024e508;
    *(undefined8 *)(param_1 + 1) = uVar3;
  }
  else {
    fVar7 = (float)param_1[1];
    fVar5 = (float)param_1[3];
    if (fVar7 < fVar5 == (NAN(fVar7) || NAN(fVar5))) goto LAB_0055ff04;
    fVar8 = (float)param_1[2];
    fVar6 = (float)param_1[4];
    if (fVar8 < fVar6 == (NAN(fVar8) || NAN(fVar6))) goto LAB_0055ff04;
    if (fVar7 < fVar2 != (NAN(fVar7) || NAN(fVar2))) {
      fVar7 = fVar2;
    }
    param_1[1] = (int)fVar7;
    fVar2 = (float)param_2[2];
    if (fVar8 < fVar2 != (NAN(fVar8) || NAN(fVar2))) {
      fVar8 = fVar2;
    }
    param_1[2] = (int)fVar8;
    if ((float)param_2[3] < fVar5) {
      fVar5 = (float)param_2[3];
    }
    param_1[3] = (int)fVar5;
    if ((float)param_2[4] < fVar6) {
      fVar6 = (float)param_2[4];
    }
    param_1[4] = (int)fVar6;
    if ((fVar7 < fVar5 != (NAN(fVar7) || NAN(fVar5))) &&
       (fVar8 < fVar6 != (NAN(fVar8) || NAN(fVar6)))) {
      return;
    }
  }
  iVar1 = 2;
LAB_0055ff14:
  *param_1 = iVar1;
  return;
}


// ===== 0055ff1c  rive_hb_paint_funcs_set_push_transform_func =====

void rive_hb_paint_funcs_set_push_transform_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0055ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) &&
       (pcVar3 = (code *)**(undefined8 **)(param_1 + 0x88), pcVar3 != (code *)0x0)) {
      if (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = **(undefined8 **)(param_1 + 0x80);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_0056008c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x10) = pcVar3;
      if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = param_3;
      }
      if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0055fffc  FUN_0055fffc =====

undefined8 FUN_0055fffc(long param_1,long param_2,code *param_3)

{
  void *pvVar1;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x80) == 0)) {
    pvVar1 = calloc(1,0x70);
    *(void **)(param_1 + 0x80) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      if (param_3 == (code *)0x0) {
        return 0;
      }
      goto LAB_0056007c;
    }
  }
  if ((param_3 == (code *)0x0) || (*(long *)(param_1 + 0x88) != 0)) {
    return 1;
  }
  pvVar1 = calloc(1,0x70);
  *(void **)(param_1 + 0x88) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return 1;
  }
LAB_0056007c:
  (*param_3)(param_2);
  return 0;
}


// ===== 0056008c  FUN_0056008c =====

void FUN_0056008c(void)

{
  return;
}


// ===== 00560090  rive_hb_paint_funcs_set_pop_transform_func =====

void rive_hb_paint_funcs_set_pop_transform_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005600c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 8), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 8);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560170;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x18) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 8) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560170  FUN_00560170 =====

void FUN_00560170(void)

{
  return;
}


// ===== 00560174  rive_hb_paint_funcs_set_color_glyph_func =====

void rive_hb_paint_funcs_set_color_glyph_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005601a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x10), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560254;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x20) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x10) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560254  FUN_00560254 =====

undefined8 FUN_00560254(void)

{
  return 0;
}


// ===== 0056025c  rive_hb_paint_funcs_set_push_clip_glyph_func =====

void rive_hb_paint_funcs_set_push_clip_glyph_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0056028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x18), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_0056033c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x28) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0056033c  FUN_0056033c =====

void FUN_0056033c(void)

{
  return;
}


// ===== 00560340  rive_hb_paint_funcs_set_push_clip_rectangle_func =====

void rive_hb_paint_funcs_set_push_clip_rectangle_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00560370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x20), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560420;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x20) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560420  FUN_00560420 =====

void FUN_00560420(void)

{
  return;
}


// ===== 00560424  rive_hb_paint_funcs_set_pop_clip_func =====

void rive_hb_paint_funcs_set_pop_clip_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00560454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x28), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560504;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x38) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x28) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560504  FUN_00560504 =====

void FUN_00560504(void)

{
  return;
}


// ===== 00560508  rive_hb_paint_funcs_set_color_func =====

void rive_hb_paint_funcs_set_color_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00560538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x30), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x30);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005605e8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x40) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x30) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x30) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 005605e8  FUN_005605e8 =====

void FUN_005605e8(void)

{
  return;
}


// ===== 005605ec  rive_hb_paint_funcs_set_image_func =====

void rive_hb_paint_funcs_set_image_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0056061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x38), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x38);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005606cc;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x48) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x38) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x38) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 005606cc  FUN_005606cc =====

undefined8 FUN_005606cc(void)

{
  return 0;
}


// ===== 005606d4  rive_hb_paint_funcs_set_linear_gradient_func =====

void rive_hb_paint_funcs_set_linear_gradient_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00560704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x40), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x40);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005607b4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x50) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x40) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x40) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 005607b4  FUN_005607b4 =====

void FUN_005607b4(void)

{
  return;
}


// ===== 005607b8  rive_hb_paint_funcs_set_radial_gradient_func =====

void rive_hb_paint_funcs_set_radial_gradient_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005607e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x48), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560898;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x58) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x48) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560898  FUN_00560898 =====

void FUN_00560898(void)

{
  return;
}


// ===== 0056089c  rive_hb_paint_funcs_set_sweep_gradient_func =====

void rive_hb_paint_funcs_set_sweep_gradient_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005608cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x50), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x50);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_0056097c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x60) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x50) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x50) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0056097c  FUN_0056097c =====

void FUN_0056097c(void)

{
  return;
}


// ===== 00560980  rive_hb_paint_funcs_set_push_group_func =====

void rive_hb_paint_funcs_set_push_group_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005609b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x58), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560a60;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x68) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x58) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560a60  FUN_00560a60 =====

void FUN_00560a60(void)

{
  return;
}


// ===== 00560a64  rive_hb_paint_funcs_set_pop_group_func =====

void rive_hb_paint_funcs_set_pop_group_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00560a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x60), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x60);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560b44;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x70) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x60) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x60) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560b44  FUN_00560b44 =====

void FUN_00560b44(void)

{
  return;
}


// ===== 00560b48  rive_hb_paint_funcs_set_custom_palette_color_func =====

void rive_hb_paint_funcs_set_custom_palette_color_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00560b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x68), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x68);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_0055fffc(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00560c28;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x78) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x68) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x68) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00560c28  FUN_00560c28 =====

undefined8 FUN_00560c28(void)

{
  return 0;
}


// ===== 00560c30  rive_hb_paint_funcs_create =====

undefined4 * rive_hb_paint_funcs_create(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(1,0x90);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)&DAT_006866a8;
  }
  else {
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    memcpy(puVar1 + 4,&PTR_FUN_006866b8,0x70);
  }
  return puVar1;
}


// ===== 00560c90  rive_hb_paint_funcs_get_empty =====

undefined * rive_hb_paint_funcs_get_empty(void)

{
  return &DAT_006866a8;
}


// ===== 00560c9c  rive_hb_paint_funcs_reference =====

int * rive_hb_paint_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 00560cd8  rive_hb_paint_funcs_destroy =====

void rive_hb_paint_funcs_destroy(int *param_1)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    __ptr = *(undefined8 **)(param_1 + 0x22);
    if (__ptr != (undefined8 *)0x0) {
      if ((code *)*__ptr != (code *)0x0) {
        if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = **(undefined8 **)(param_1 + 0x20);
        }
        (*(code *)*__ptr)(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[1] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
        }
        (*(code *)__ptr[1])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[2] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
        }
        (*(code *)__ptr[2])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[3] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        }
        (*(code *)__ptr[3])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[4] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        }
        (*(code *)__ptr[4])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[5] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
        }
        (*(code *)__ptr[5])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[6] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
        }
        (*(code *)__ptr[6])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[7] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
        }
        (*(code *)__ptr[7])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[8] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
        }
        (*(code *)__ptr[8])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[9] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
        }
        (*(code *)__ptr[9])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[10] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
        }
        (*(code *)__ptr[10])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[0xb] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
        }
        (*(code *)__ptr[0xb])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[0xc] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
        }
        (*(code *)__ptr[0xc])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
      if ((code *)__ptr[0xd] != (code *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
        }
        (*(code *)__ptr[0xd])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x22);
      }
    }
    free(__ptr);
    free(*(void **)(param_1 + 0x20));
    free(param_1);
    return;
  }
  return;
}


// ===== 00560f68  rive_hb_paint_funcs_set_user_data =====

int * rive_hb_paint_funcs_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 00561050  rive_hb_paint_funcs_get_user_data =====

void rive_hb_paint_funcs_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 005610d0  rive_hb_paint_funcs_make_immutable =====

void rive_hb_paint_funcs_make_immutable(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 005610e0  rive_hb_paint_funcs_is_immutable =====

byte rive_hb_paint_funcs_is_immutable(long param_1)

{
  return (*(byte *)(param_1 + 4) ^ 0xff) & 1;
}


// ===== 005610f0  rive_hb_color_line_get_color_stops =====

void rive_hb_color_line_get_color_stops
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00561108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(param_1,*param_1,param_2,param_3,param_4,param_1[2]);
  return;
}


// ===== 0056110c  rive_hb_color_line_get_extend =====

void rive_hb_color_line_get_extend(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00561114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])(param_1,*param_1,param_1[4]);
  return;
}


// ===== 00561118  rive_hb_paint_push_transform =====

void rive_hb_paint_push_transform(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x00561144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_1,param_2,uVar1);
  return;
}


// ===== 00561148  rive_hb_paint_push_font_transform =====

void rive_hb_paint_push_font_transform(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_3 + 0x20) + 0x14);
  if (uVar1 == 0) {
    uVar1 = FUN_00564f7c(*(long *)(param_3 + 0x20));
  }
  if (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(param_1 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x0051d5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((float)*(int *)(param_3 + 0x28) / (float)uVar1,0,0,
             (float)*(int *)(param_3 + 0x2c) / (float)uVar1,0,0,param_1,param_2,uVar2);
  return;
}


// ===== 0056114c  rive_hb_paint_push_inverse_font_transform =====

void rive_hb_paint_push_inverse_font_transform(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + 0x20) + 0x14);
  if (uVar1 == 0) {
    uVar1 = FUN_00564f7c(*(long *)(param_3 + 0x20));
  }
  if (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(param_1 + 0x80);
  }
  fVar3 = (float)uVar1;
  fVar4 = fVar3;
  if (*(int *)(param_3 + 0x2c) != 0) {
    fVar4 = (float)*(int *)(param_3 + 0x2c);
  }
  fVar5 = fVar3;
  if (*(int *)(param_3 + 0x28) != 0) {
    fVar5 = (float)*(int *)(param_3 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00520324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (fVar3 / (float)(int)fVar5,0,0,fVar3 / (float)(int)fVar4,0,0,param_1,param_2,uVar2);
  return;
}


// ===== 00561150  rive_hb_paint_pop_transform =====

void rive_hb_paint_pop_transform(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x80) + 8));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00561168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1,param_2,0);
  return;
}


// ===== 0056116c  rive_hb_paint_color_glyph =====

bool rive_hb_paint_color_glyph(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x20))();
  return iVar1 != 0;
}


// ===== 005611a0  rive_hb_paint_push_clip_glyph =====

void rive_hb_paint_push_clip_glyph(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005611b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005611b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))();
  return;
}


// ===== 005611bc  rive_hb_paint_push_clip_rectangle =====

void rive_hb_paint_push_clip_rectangle(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005611cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x30))(param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20))
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005611d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1,param_2,0);
  return;
}


// ===== 005611d8  rive_hb_paint_pop_clip =====

void rive_hb_paint_pop_clip(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005611e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x38))(param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28))
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005611f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,0);
  return;
}


// ===== 005611f4  rive_hb_paint_color =====

void rive_hb_paint_color(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))();
  return;
}


// ===== 00561210  rive_hb_paint_image =====

void rive_hb_paint_image(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0056122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(0);
  return;
}


// ===== 00561230  rive_hb_paint_linear_gradient =====

void rive_hb_paint_linear_gradient(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x50))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00561248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))();
  return;
}


// ===== 0056124c  rive_hb_paint_radial_gradient =====

void rive_hb_paint_radial_gradient(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0056125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x58))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00561264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))();
  return;
}


// ===== 00561268  rive_hb_paint_sweep_gradient =====

void rive_hb_paint_sweep_gradient(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x60))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00561280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))();
  return;
}


// ===== 00561284  rive_hb_paint_push_group =====

void rive_hb_paint_push_group(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x68))(param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58))
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x68))(param_1,param_2,0);
  return;
}


// ===== 005612a0  rive_hb_paint_pop_group =====

void rive_hb_paint_pop_group(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005612b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x70))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005612b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x70))();
  return;
}


// ===== 005612bc  rive_hb_paint_custom_palette_color =====

bool rive_hb_paint_custom_palette_color(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x78))();
  return iVar1 != 0;
}


// ===== 005612ec  rive_hb_set_create =====

undefined4 * rive_hb_set_create(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(1,0x48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_0025d4b0;
  }
  else {
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  return puVar1;
}


// ===== 0056134c  rive_hb_set_get_empty =====

undefined4 * rive_hb_set_get_empty(void)

{
  return &DAT_0025d4b0;
}


// ===== 00561358  rive_hb_set_reference =====

int * rive_hb_set_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 00561394  rive_hb_set_destroy =====

void rive_hb_set_destroy(int *param_1)

{
  int iVar1;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00530a18(param_1);
    FUN_0051178c(param_1 + 4);
    free(param_1);
    return;
  }
  return;
}


// ===== 00561428  rive_hb_set_set_user_data =====

int * rive_hb_set_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 00561510  rive_hb_set_get_user_data =====

void rive_hb_set_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 00561590  rive_hb_set_allocation_successful =====

undefined1 rive_hb_set_allocation_successful(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}


// ===== 00561598  rive_hb_set_copy =====

undefined4 * rive_hb_set_copy(long param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  puVar1 = (undefined4 *)rive_hb_set_create();
  pcVar2 = (char *)(puVar1 + 4);
  if (*pcVar2 == '\0') {
    puVar1 = &DAT_0025d4b0;
  }
  else {
    FUN_00536d90(pcVar2,param_1 + 0x10);
    if (*pcVar2 != '\0') {
      *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(param_1 + 0x40);
    }
  }
  return puVar1;
}


// ===== 005615fc  rive_hb_set_clear =====

void rive_hb_set_clear(long param_1)

{
  FUN_0052b640(param_1 + 0x10,0,1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}


// ===== 00561638  rive_hb_set_is_empty =====

void rive_hb_set_is_empty(long param_1)

{
  long lVar1;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = -1;
  FUN_00530d58(param_1 + 0x10,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c == -1);
}


// ===== 00561698  rive_hb_set_has =====

uint rive_hb_set_has(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00530e44(param_1 + 0x10);
  return uVar1 & 1;
}


// ===== 005616b4  rive_hb_set_add =====

void rive_hb_set_add(long param_1)

{
  FUN_0052bca8(param_1 + 0x10);
  return;
}


// ===== 005616bc  rive_hb_set_add_sorted_array =====

void rive_hb_set_add_sorted_array(long param_1,uint *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_3 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    cVar1 = *(char *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5;
    while ((puVar2 = (undefined4 *)FUN_0052b46c((char *)(param_1 + 0x10),uVar5,cVar1 == '\0'),
           cVar1 != '\0' || (puVar2 != (undefined4 *)0x0))) {
      uVar3 = (uint)uVar5;
      uVar7 = uVar6;
      do {
        uVar6 = uVar5;
        uVar4 = (uint)uVar6;
        if (uVar4 < (uint)uVar7) {
          return;
        }
        if (uVar4 != 0xffffffff && (puVar2 != (undefined4 *)0x0 || cVar1 == '\0')) {
          uVar4 = uVar4 >> 6 & 7;
          *puVar2 = 0xffffffff;
          *(ulong *)(puVar2 + (ulong)uVar4 * 2 + 2) =
               *(ulong *)(puVar2 + (ulong)uVar4 * 2 + 2) | 1L << (uVar6 & 0x3f);
        }
        param_3 = param_3 + -1;
        if (param_3 == 0) {
          return;
        }
        param_2 = param_2 + 1;
        uVar5 = (ulong)*param_2;
        uVar7 = uVar6;
      } while (*param_2 < (uVar3 & 0xfffffe00) + 0x200);
    }
  }
  return;
}


// ===== 005617a0  rive_hb_set_add_range =====

void rive_hb_set_add_range(long param_1)

{
  FUN_0052b15c(param_1 + 0x10);
  return;
}


// ===== 005617a8  rive_hb_set_del =====

void rive_hb_set_del(long param_1)

{
  FUN_00530e94(param_1 + 0x10);
  return;
}


// ===== 005617b0  rive_hb_set_del_range =====

void rive_hb_set_del_range(long param_1)

{
  FUN_0053696c(param_1 + 0x10);
  return;
}


// ===== 005617b8  rive_hb_set_is_equal =====

void rive_hb_set_is_equal(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40)) {
    if (((*(int *)(param_1 + 0x14) == -1) || (*(int *)(param_2 + 0x14) == -1)) ||
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) {
      uVar1 = *(uint *)(param_1 + 0x34);
      uVar2 = *(uint *)(param_2 + 0x34);
      uVar13 = 0;
      uVar6 = 0;
      if ((uVar1 != 0) && (uVar2 != 0)) {
        lVar14 = *(long *)(param_1 + 0x38);
        lVar15 = *(long *)(param_1 + 0x28);
        uVar13 = 0;
        uVar6 = 0;
        lVar12 = lVar14 + 0x10;
LAB_0056184c:
        lVar7 = *(long *)(param_2 + 0x38);
        lVar10 = *(long *)(param_2 + 0x28);
        uVar17 = (ulong)*(uint *)(lVar15 + uVar13 * 8 + 4);
        piVar16 = (int *)(lVar14 + uVar17 * 0x48);
        do {
          if (*piVar16 == -1) {
            uVar8 = *(ulong *)(piVar16 + 2);
            if (*(ulong *)(piVar16 + 2) == 0) {
              do {
                uVar9 = uVar8;
                if (uVar9 == 7) goto LAB_00561918;
                uVar8 = uVar9 + 1;
              } while (*(long *)(lVar12 + uVar17 * 0x48 + uVar9 * 8) == 0);
              if (6 < uVar9) {
LAB_00561918:
                *piVar16 = 0;
                goto LAB_00561990;
              }
            }
          }
          else if (*piVar16 == 0) goto LAB_00561990;
          uVar3 = *(uint *)(lVar10 + (ulong)uVar6 * 8 + 4);
          piVar11 = (int *)(lVar7 + (ulong)uVar3 * 0x48);
          iVar4 = *piVar11;
          if (iVar4 != 0) {
            if ((iVar4 == -1) && (*(long *)(lVar7 + (ulong)uVar3 * 0x48 + 8) == 0)) {
              uVar8 = 0;
              do {
                uVar9 = uVar8;
                if (uVar9 == 7) goto LAB_00561904;
                uVar8 = uVar9 + 1;
              } while (*(long *)(lVar7 + 0x10 + (ulong)uVar3 * 0x48 + uVar9 * 8) == 0);
              if (6 < uVar9) {
LAB_00561904:
                *piVar11 = 0;
                goto LAB_00561908;
              }
            }
            if ((*(int *)(lVar15 + uVar13 * 8) != *(int *)(lVar10 + (ulong)uVar6 * 8)) ||
               (*(long *)(piVar16 + 2) != *(long *)(lVar7 + (ulong)uVar3 * 0x48 + 8)))
            goto LAB_00561814;
            uVar8 = 0;
            goto LAB_00561960;
          }
LAB_00561908:
          uVar6 = uVar6 + 1;
          if (uVar2 <= uVar6) break;
        } while( true );
      }
LAB_005619a4:
      if ((uint)uVar13 < uVar1) {
        lVar14 = *(long *)(param_1 + 0x38);
        lVar12 = *(long *)(param_1 + 0x28);
        uVar13 = uVar13 & 0xffffffff;
        do {
          uVar3 = *(uint *)(lVar12 + uVar13 * 8 + 4);
          piVar16 = (int *)(lVar14 + (ulong)uVar3 * 0x48);
          iVar4 = *piVar16;
          if (iVar4 != 0) {
            if ((iVar4 != -1) || (*(long *)(lVar14 + (ulong)uVar3 * 0x48 + 8) != 0))
            goto LAB_00561814;
            uVar17 = 0;
            do {
              uVar8 = uVar17;
              if (uVar8 == 7) goto LAB_00561a14;
              uVar17 = uVar8 + 1;
            } while (*(long *)(lVar14 + 0x10 + (ulong)uVar3 * 0x48 + uVar8 * 8) == 0);
            if (uVar8 < 7) goto LAB_00561814;
LAB_00561a14:
            *piVar16 = 0;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar1);
      }
      if (uVar6 < uVar2) {
        lVar12 = *(long *)(param_2 + 0x38);
        lVar14 = *(long *)(param_2 + 0x28);
        uVar13 = (ulong)uVar6;
        do {
          uVar6 = *(uint *)(lVar14 + uVar13 * 8 + 4);
          piVar16 = (int *)(lVar12 + (ulong)uVar6 * 0x48);
          iVar4 = *piVar16;
          if (iVar4 != 0) {
            if ((iVar4 != -1) || (*(long *)(lVar12 + (ulong)uVar6 * 0x48 + 8) != 0))
            goto LAB_00561814;
            uVar17 = 0;
            do {
              uVar8 = uVar17;
              if (uVar8 == 7) goto LAB_00561a94;
              uVar17 = uVar8 + 1;
            } while (*(long *)(lVar12 + 0x10 + (ulong)uVar6 * 0x48 + uVar8 * 8) == 0);
            if (uVar8 < 7) goto LAB_00561814;
LAB_00561a94:
            *piVar16 = 0;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar2);
      }
      uVar6 = 1;
    }
    else {
LAB_00561814:
      uVar6 = 0;
    }
  }
  else {
    FUN_00531a74(&local_70,param_1 + 0x10);
    FUN_00531a74(&local_70,param_2 + 0x10);
    uStack_58 = uStack_68;
    local_60 = local_70;
    uVar6 = FUN_00561b0c(&local_70);
    uVar6 = uVar6 & 1;
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
  while (uVar8 = uVar9 + 1,
        *(long *)(lVar12 + uVar17 * 0x48 + uVar9 * 8) ==
        *(long *)(lVar7 + (ulong)uVar3 * 0x48 + 0x10 + uVar9 * 8)) {
LAB_00561960:
    uVar9 = uVar8;
    if (uVar9 == 7) goto LAB_0056198c;
  }
  if (uVar9 < 7) goto LAB_00561814;
LAB_0056198c:
  uVar6 = uVar6 + 1;
LAB_00561990:
  uVar13 = uVar13 + 1;
  if ((uVar1 <= uVar13) || (uVar2 <= uVar6)) goto LAB_005619a4;
  goto LAB_0056184c;
}


// ===== 00561b0c  FUN_00561b0c =====

void FUN_00561b0c(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_38 = param_1[3];
  local_40 = param_1[2];
  local_30 = param_1[4];
  bVar2 = (int)uStack_48 == -1 || (int)local_38 == -1;
  if (((int)uStack_48 != -1 && (int)local_38 != -1) && ((int)uStack_48 == (int)local_38)) {
    do {
      FUN_00530d58(local_50,(ulong)&local_50 | 8);
      if (uStack_48._4_4_ != 0) {
        uStack_48 = CONCAT44(uStack_48._4_4_ + -1,(int)uStack_48);
      }
      FUN_00530d58(local_40,&local_38);
      if (local_38._4_4_ != 0) {
        local_38 = CONCAT44(local_38._4_4_ + -1,(int)local_38);
      }
      bVar2 = (int)uStack_48 == -1 || (int)local_38 == -1;
    } while (((int)uStack_48 != -1 && (int)local_38 != -1) && ((int)uStack_48 == (int)local_38));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


// ===== 00561bd8  rive_hb_set_hash =====

uint rive_hb_set_hash(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  
  if (*(uint *)(param_1 + 0x24) == 0) {
    uVar8 = 0;
  }
  else {
    piVar9 = *(int **)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 0x38);
    piVar1 = piVar9 + (ulong)*(uint *)(param_1 + 0x24) * 2;
    uVar8 = 0;
    do {
      uVar2 = piVar9[1];
      piVar4 = (int *)(lVar10 + (ulong)uVar2 * 0x48);
      iVar3 = *piVar4;
      if (iVar3 == -1) {
        if (*(long *)(lVar10 + (ulong)uVar2 * 0x48 + 8) == 0) {
          uVar6 = 0;
          do {
            uVar7 = uVar6;
            if (uVar7 == 7) goto LAB_00561c84;
            uVar6 = uVar7 + 1;
          } while (*(long *)(lVar10 + 0x10 + (ulong)uVar2 * 0x48 + uVar7 * 8) == 0);
          if (6 < uVar7) {
LAB_00561c84:
            *piVar4 = 0;
            goto LAB_00561cf0;
          }
        }
LAB_00561c90:
        lVar5 = 0;
        uVar6 = 0xd57c876f71a6a6;
        do {
          uVar7 = *(ulong *)(lVar10 + 8 + (ulong)uVar2 * 0x48 + lVar5);
          lVar5 = lVar5 + 8;
          uVar7 = (uVar7 ^ uVar7 >> 0x17) * 0x2127599bf4325c37;
          uVar6 = (uVar6 ^ uVar7 >> 0x2f ^ uVar7) * -0x77fcaa0de192e69b;
        } while (lVar5 != 0x40);
        lVar5 = (uVar6 ^ uVar6 >> 0x17) * 0x2127599bf4325c37;
        uVar2 = (uint)((ulong)lVar5 >> 0x20);
        uVar8 = *piVar9 * -0x61c8864f + uVar8 * 0x1f + ((uVar2 >> 0xf ^ (uint)lVar5) - uVar2);
      }
      else if (iVar3 != 0) goto LAB_00561c90;
LAB_00561cf0:
      piVar9 = piVar9 + 2;
    } while (piVar9 != piVar1);
  }
  return uVar8 ^ *(byte *)(param_1 + 0x40);
}


// ===== 00561d10  rive_hb_set_is_subset =====

uint rive_hb_set_is_subset(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0053bb7c(param_1 + 0x10,param_2 + 0x10);
  return uVar1 & 1;
}


// ===== 00561d30  rive_hb_set_set =====

void rive_hb_set_set(long param_1,long param_2)

{
  FUN_00536d90(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  }
  return;
}


// ===== 00561d6c  rive_hb_set_union =====

void rive_hb_set_union(long param_1,long param_2)

{
  FUN_0053697c(param_1 + 0x10,param_2 + 0x10);
  return;
}


// ===== 00561d78  rive_hb_set_intersect =====

void rive_hb_set_intersect(long param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      pcVar2 = FUN_00561e38;
      uVar3 = 1;
LAB_00561e18:
      uVar4 = 1;
      goto LAB_00561db8;
    }
    pcVar2 = FUN_00561e5c;
    uVar3 = 0;
  }
  else {
    if (cVar1 != '\0') {
      pcVar2 = FUN_00561e80;
      uVar3 = 0;
      goto LAB_00561e18;
    }
    pcVar2 = FUN_00561efc;
    uVar3 = 1;
  }
  uVar4 = 0;
LAB_00561db8:
  FUN_00536ee4(param_1 + 0x10,pcVar2,uVar3,uVar4,param_2 + 0x10);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(bool *)(param_1 + 0x40) =
         *(char *)(param_1 + 0x40) != '\0' && *(char *)(param_2 + 0x40) != '\0';
  }
  return;
}


// ===== 00561e38  FUN_00561e38 =====

void FUN_00561e38(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = 0;
  do {
    uVar3 = ((undefined8 *)(param_2 + lVar1))[1];
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    uVar5 = ((undefined8 *)(param_3 + lVar1))[1];
    uVar4 = *(undefined8 *)(param_3 + lVar1);
    ((undefined8 *)(param_1 + lVar1))[1] =
         CONCAT17((byte)((ulong)uVar5 >> 0x38) | (byte)((ulong)uVar3 >> 0x38),
                  CONCAT16((byte)((ulong)uVar5 >> 0x30) | (byte)((ulong)uVar3 >> 0x30),
                           CONCAT15((byte)((ulong)uVar5 >> 0x28) | (byte)((ulong)uVar3 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar5 >> 0x20) |
                                             (byte)((ulong)uVar3 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar5 >> 0x18) |
                                                      (byte)((ulong)uVar3 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar5 >> 0x10) |
                                                               (byte)((ulong)uVar3 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar5 >> 8) |
                                                                        (byte)((ulong)uVar3 >> 8),
                                                                        (byte)uVar5 | (byte)uVar3)))
                                            ))));
    *(undefined8 *)(param_1 + lVar1) =
         CONCAT17((byte)((ulong)uVar4 >> 0x38) | (byte)((ulong)uVar2 >> 0x38),
                  CONCAT16((byte)((ulong)uVar4 >> 0x30) | (byte)((ulong)uVar2 >> 0x30),
                           CONCAT15((byte)((ulong)uVar4 >> 0x28) | (byte)((ulong)uVar2 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar4 >> 0x20) |
                                             (byte)((ulong)uVar2 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar4 >> 0x18) |
                                                      (byte)((ulong)uVar2 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar4 >> 0x10) |
                                                               (byte)((ulong)uVar2 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar4 >> 8) |
                                                                        (byte)((ulong)uVar2 >> 8),
                                                                        (byte)uVar4 | (byte)uVar2)))
                                            ))));
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x40);
  return;
}


// ===== 00561e5c  FUN_00561e5c =====

void FUN_00561e5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = 0;
  do {
    uVar3 = ((undefined8 *)(param_2 + lVar1))[1];
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    uVar5 = ((undefined8 *)(param_3 + lVar1))[1];
    uVar4 = *(undefined8 *)(param_3 + lVar1);
    ((undefined8 *)(param_1 + lVar1))[1] =
         CONCAT17((byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)uVar3 >> 0x38),
                  CONCAT16((byte)((ulong)uVar5 >> 0x30) & (byte)((ulong)uVar3 >> 0x30),
                           CONCAT15((byte)((ulong)uVar5 >> 0x28) & (byte)((ulong)uVar3 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar5 >> 0x20) &
                                             (byte)((ulong)uVar3 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar5 >> 0x18) &
                                                      (byte)((ulong)uVar3 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar5 >> 0x10) &
                                                               (byte)((ulong)uVar3 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar5 >> 8) &
                                                                        (byte)((ulong)uVar3 >> 8),
                                                                        (byte)uVar5 & (byte)uVar3)))
                                            ))));
    *(undefined8 *)(param_1 + lVar1) =
         CONCAT17((byte)((ulong)uVar4 >> 0x38) & (byte)((ulong)uVar2 >> 0x38),
                  CONCAT16((byte)((ulong)uVar4 >> 0x30) & (byte)((ulong)uVar2 >> 0x30),
                           CONCAT15((byte)((ulong)uVar4 >> 0x28) & (byte)((ulong)uVar2 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar4 >> 0x20) &
                                             (byte)((ulong)uVar2 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                      (byte)((ulong)uVar2 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar4 >> 0x10) &
                                                               (byte)((ulong)uVar2 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar4 >> 8) &
                                                                        (byte)((ulong)uVar2 >> 8),
                                                                        (byte)uVar4 & (byte)uVar2)))
                                            ))));
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x40);
  return;
}


// ===== 00561e80  FUN_00561e80 =====

void FUN_00561e80(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_58 [9];
  
  lVar1 = tpidr_el0;
  lVar2 = 0;
  local_58[8] = *(long *)(lVar1 + 0x28);
  do {
    uVar4 = ((undefined8 *)(param_2 + lVar2))[1];
    uVar3 = *(undefined8 *)(param_2 + lVar2);
    *(ulong *)((long)local_58 + lVar2 + 8) =
         CONCAT17(~(byte)((ulong)uVar4 >> 0x38),
                  CONCAT16(~(byte)((ulong)uVar4 >> 0x30),
                           CONCAT15(~(byte)((ulong)uVar4 >> 0x28),
                                    CONCAT14(~(byte)((ulong)uVar4 >> 0x20),
                                             CONCAT13(~(byte)((ulong)uVar4 >> 0x18),
                                                      CONCAT12(~(byte)((ulong)uVar4 >> 0x10),
                                                               CONCAT11(~(byte)((ulong)uVar4 >> 8),
                                                                        ~(byte)uVar4)))))));
    *(ulong *)((long)local_58 + lVar2) =
         CONCAT17(~(byte)((ulong)uVar3 >> 0x38),
                  CONCAT16(~(byte)((ulong)uVar3 >> 0x30),
                           CONCAT15(~(byte)((ulong)uVar3 >> 0x28),
                                    CONCAT14(~(byte)((ulong)uVar3 >> 0x20),
                                             CONCAT13(~(byte)((ulong)uVar3 >> 0x18),
                                                      CONCAT12(~(byte)((ulong)uVar3 >> 0x10),
                                                               CONCAT11(~(byte)((ulong)uVar3 >> 8),
                                                                        ~(byte)uVar3)))))));
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  lVar2 = 0;
  do {
    uVar4 = *(undefined8 *)((long)local_58 + lVar2 + 8);
    uVar3 = *(undefined8 *)((long)local_58 + lVar2);
    uVar6 = ((undefined8 *)(param_3 + lVar2))[1];
    uVar5 = *(undefined8 *)(param_3 + lVar2);
    ((undefined8 *)(param_1 + lVar2))[1] =
         CONCAT17((byte)((ulong)uVar6 >> 0x38) & (byte)((ulong)uVar4 >> 0x38),
                  CONCAT16((byte)((ulong)uVar6 >> 0x30) & (byte)((ulong)uVar4 >> 0x30),
                           CONCAT15((byte)((ulong)uVar6 >> 0x28) & (byte)((ulong)uVar4 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar6 >> 0x20) &
                                             (byte)((ulong)uVar4 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar6 >> 0x18) &
                                                      (byte)((ulong)uVar4 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar6 >> 0x10) &
                                                               (byte)((ulong)uVar4 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar6 >> 8) &
                                                                        (byte)((ulong)uVar4 >> 8),
                                                                        (byte)uVar6 & (byte)uVar4)))
                                            ))));
    *(undefined8 *)(param_1 + lVar2) =
         CONCAT17((byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)uVar3 >> 0x38),
                  CONCAT16((byte)((ulong)uVar5 >> 0x30) & (byte)((ulong)uVar3 >> 0x30),
                           CONCAT15((byte)((ulong)uVar5 >> 0x28) & (byte)((ulong)uVar3 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar5 >> 0x20) &
                                             (byte)((ulong)uVar3 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar5 >> 0x18) &
                                                      (byte)((ulong)uVar3 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar5 >> 0x10) &
                                                               (byte)((ulong)uVar3 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar5 >> 8) &
                                                                        (byte)((ulong)uVar3 >> 8),
                                                                        (byte)uVar5 & (byte)uVar3)))
                                            ))));
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  if (*(long *)(lVar1 + 0x28) == local_58[8]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00561efc  FUN_00561efc =====

void FUN_00561efc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_58 [9];
  
  lVar1 = tpidr_el0;
  lVar2 = 0;
  local_58[8] = *(long *)(lVar1 + 0x28);
  do {
    uVar4 = ((undefined8 *)(param_3 + lVar2))[1];
    uVar3 = *(undefined8 *)(param_3 + lVar2);
    *(ulong *)((long)local_58 + lVar2 + 8) =
         CONCAT17(~(byte)((ulong)uVar4 >> 0x38),
                  CONCAT16(~(byte)((ulong)uVar4 >> 0x30),
                           CONCAT15(~(byte)((ulong)uVar4 >> 0x28),
                                    CONCAT14(~(byte)((ulong)uVar4 >> 0x20),
                                             CONCAT13(~(byte)((ulong)uVar4 >> 0x18),
                                                      CONCAT12(~(byte)((ulong)uVar4 >> 0x10),
                                                               CONCAT11(~(byte)((ulong)uVar4 >> 8),
                                                                        ~(byte)uVar4)))))));
    *(ulong *)((long)local_58 + lVar2) =
         CONCAT17(~(byte)((ulong)uVar3 >> 0x38),
                  CONCAT16(~(byte)((ulong)uVar3 >> 0x30),
                           CONCAT15(~(byte)((ulong)uVar3 >> 0x28),
                                    CONCAT14(~(byte)((ulong)uVar3 >> 0x20),
                                             CONCAT13(~(byte)((ulong)uVar3 >> 0x18),
                                                      CONCAT12(~(byte)((ulong)uVar3 >> 0x10),
                                                               CONCAT11(~(byte)((ulong)uVar3 >> 8),
                                                                        ~(byte)uVar3)))))));
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  lVar2 = 0;
  do {
    uVar4 = ((undefined8 *)(param_2 + lVar2))[1];
    uVar3 = *(undefined8 *)(param_2 + lVar2);
    uVar6 = *(undefined8 *)((long)local_58 + lVar2 + 8);
    uVar5 = *(undefined8 *)((long)local_58 + lVar2);
    ((undefined8 *)(param_1 + lVar2))[1] =
         CONCAT17((byte)((ulong)uVar6 >> 0x38) & (byte)((ulong)uVar4 >> 0x38),
                  CONCAT16((byte)((ulong)uVar6 >> 0x30) & (byte)((ulong)uVar4 >> 0x30),
                           CONCAT15((byte)((ulong)uVar6 >> 0x28) & (byte)((ulong)uVar4 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar6 >> 0x20) &
                                             (byte)((ulong)uVar4 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar6 >> 0x18) &
                                                      (byte)((ulong)uVar4 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar6 >> 0x10) &
                                                               (byte)((ulong)uVar4 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar6 >> 8) &
                                                                        (byte)((ulong)uVar4 >> 8),
                                                                        (byte)uVar6 & (byte)uVar4)))
                                            ))));
    *(undefined8 *)(param_1 + lVar2) =
         CONCAT17((byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)uVar3 >> 0x38),
                  CONCAT16((byte)((ulong)uVar5 >> 0x30) & (byte)((ulong)uVar3 >> 0x30),
                           CONCAT15((byte)((ulong)uVar5 >> 0x28) & (byte)((ulong)uVar3 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar5 >> 0x20) &
                                             (byte)((ulong)uVar3 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar5 >> 0x18) &
                                                      (byte)((ulong)uVar3 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar5 >> 0x10) &
                                                               (byte)((ulong)uVar3 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar5 >> 8) &
                                                                        (byte)((ulong)uVar3 >> 8),
                                                                        (byte)uVar5 & (byte)uVar3)))
                                            ))));
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  if (*(long *)(lVar1 + 0x28) == local_58[8]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00561f78  rive_hb_set_subtract =====

void rive_hb_set_subtract(long param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      pcVar2 = FUN_00561e80;
      uVar3 = 0;
LAB_00562018:
      uVar4 = 1;
      goto LAB_00561fb8;
    }
    pcVar2 = FUN_00561efc;
    uVar3 = 1;
  }
  else {
    if (cVar1 != '\0') {
      pcVar2 = FUN_00561e38;
      uVar3 = 1;
      goto LAB_00562018;
    }
    pcVar2 = FUN_00561e5c;
    uVar3 = 0;
  }
  uVar4 = 0;
LAB_00561fb8:
  FUN_00536ee4(param_1 + 0x10,pcVar2,uVar3,uVar4,param_2 + 0x10);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(bool *)(param_1 + 0x40) =
         *(char *)(param_1 + 0x40) != '\0' && *(char *)(param_2 + 0x40) == '\0';
  }
  return;
}


// ===== 00562038  rive_hb_set_symmetric_difference =====

void rive_hb_set_symmetric_difference(long param_1,long param_2)

{
  FUN_00536ee4(param_1 + 0x10,FUN_00562090,1,1,param_2 + 0x10);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(bool *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) != *(char *)(param_2 + 0x40);
  }
  return;
}


// ===== 00562090  FUN_00562090 =====

void FUN_00562090(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = 0;
  do {
    uVar3 = ((undefined8 *)(param_2 + lVar1))[1];
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    uVar5 = ((undefined8 *)(param_3 + lVar1))[1];
    uVar4 = *(undefined8 *)(param_3 + lVar1);
    ((undefined8 *)(param_1 + lVar1))[1] =
         CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                  CONCAT16((byte)((ulong)uVar5 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                           CONCAT15((byte)((ulong)uVar5 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                             (byte)((ulong)uVar3 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar5 >> 0x18) ^
                                                      (byte)((ulong)uVar3 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar5 >> 0x10) ^
                                                               (byte)((ulong)uVar3 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar5 >> 8) ^
                                                                        (byte)((ulong)uVar3 >> 8),
                                                                        (byte)uVar5 ^ (byte)uVar3)))
                                            ))));
    *(undefined8 *)(param_1 + lVar1) =
         CONCAT17((byte)((ulong)uVar4 >> 0x38) ^ (byte)((ulong)uVar2 >> 0x38),
                  CONCAT16((byte)((ulong)uVar4 >> 0x30) ^ (byte)((ulong)uVar2 >> 0x30),
                           CONCAT15((byte)((ulong)uVar4 >> 0x28) ^ (byte)((ulong)uVar2 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar4 >> 0x20) ^
                                             (byte)((ulong)uVar2 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar4 >> 0x18) ^
                                                      (byte)((ulong)uVar2 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar4 >> 0x10) ^
                                                               (byte)((ulong)uVar2 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar4 >> 8) ^
                                                                        (byte)((ulong)uVar2 >> 8),
                                                                        (byte)uVar4 ^ (byte)uVar2)))
                                            ))));
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x40);
  return;
}


// ===== 005620b4  rive_hb_set_invert =====

void rive_hb_set_invert(long param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ 1;
  }
  return;
}


// ===== 005620cc  rive_hb_set_is_inverted =====

undefined1 rive_hb_set_is_inverted(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}


// ===== 005620d4  rive_hb_set_get_population =====

uint rive_hb_set_get_population(long param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x40);
  uVar2 = FUN_00531ae0(param_1 + 0x10);
  return uVar2 ^ -(int)cVar1;
}


// ===== 00562100  rive_hb_set_get_min =====

void rive_hb_set_get_min(long param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0xffffffff;
  FUN_00530d58(param_1 + 0x10,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


// ===== 00562158  rive_hb_set_get_max =====

void rive_hb_set_get_max(long param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0xffffffff;
  FUN_0053b5d0(param_1 + 0x10,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


// ===== 005621b0  rive_hb_set_next =====

uint rive_hb_set_next(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00530d58(param_1 + 0x10);
  return uVar1 & 1;
}


// ===== 005621cc  rive_hb_set_previous =====

uint rive_hb_set_previous(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0053b5d0(param_1 + 0x10);
  return uVar1 & 1;
}


// ===== 005621e8  rive_hb_set_next_range =====

bool rive_hb_set_next_range(long param_1,int *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    bVar1 = FUN_00531168(param_1 + 0x10,param_2,param_3);
    bVar2 = (bool)(bVar1 & 1);
  }
  else {
    uVar3 = FUN_00530d58(param_1 + 0x10,param_3);
    bVar2 = (uVar3 & 1) == 0;
    if (bVar2) {
      iVar4 = -1;
      *param_2 = -1;
    }
    else {
      *param_2 = *param_3;
      FUN_00530f34(param_1 + 0x10,param_3);
      iVar4 = *param_3 + -1;
    }
    bVar2 = !bVar2;
    *param_3 = iVar4;
  }
  return bVar2;
}


// ===== 00562278  rive_hb_set_previous_range =====

uint rive_hb_set_previous_range(long param_1,int *param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar1 = FUN_0053b888(param_1 + 0x10,param_2,param_3);
    uVar1 = uVar1 & 1;
  }
  else {
    uVar2 = FUN_0053b5d0(param_1 + 0x10,param_2);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      *param_2 = -1;
      *param_3 = -1;
    }
    else {
      *param_3 = *param_2;
      FUN_0053b6b8(param_1 + 0x10,param_2);
      uVar1 = 1;
      *param_2 = *param_2 + 1;
    }
  }
  return uVar1;
}


// ===== 0056230c  rive_hb_set_next_many =====

int rive_hb_set_next_many(long param_1,uint param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (param_2 == 0xffffffff) {
      uVar12 = *(uint *)(param_1 + 0x24);
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x18);
      uVar10 = param_2 >> 9;
      uVar12 = *(uint *)(param_1 + 0x24);
      if ((uVar12 <= uVar11) || (*(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar11 * 8) != uVar10)
         ) {
        uVar11 = 0;
        iVar15 = uVar12 - 1;
        if (0 < (int)uVar12) {
          do {
            uVar3 = iVar15 + uVar11 >> 1;
            uVar17 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar3 * 8);
            if ((int)uVar10 < (int)uVar17) {
              iVar15 = uVar3 - 1;
            }
            else {
              uVar11 = uVar3;
              if (uVar10 == uVar17) break;
              uVar11 = uVar3 + 1;
            }
          } while ((int)uVar11 <= iVar15);
        }
        if (uVar12 <= uVar11) {
          return 0;
        }
      }
      uVar10 = param_2 + 1 & 0x1ff;
      if (uVar10 == 0) {
        uVar11 = uVar11 + 1;
      }
    }
    uVar17 = param_4;
    if ((uVar11 < uVar12) && (param_4 != 0)) {
      lVar14 = *(long *)(param_1 + 0x28);
      uVar13 = (ulong)uVar11;
      do {
        piVar1 = (int *)(lVar14 + uVar13 * 8);
        uVar11 = 0;
        iVar15 = *piVar1;
        uVar12 = piVar1[1];
        uVar16 = (ulong)(uVar10 >> 6);
        uVar6 = (ulong)(uVar10 & 0x3f);
        puVar7 = param_3;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)uVar12 * 0x48);
        if (*(uint *)(param_1 + 0x34) <= uVar12) {
          puVar2 = &DAT_0025d4b0;
        }
        do {
          uVar9 = *(ulong *)(puVar2 + uVar16 * 2 + 2);
          do {
            puVar8 = puVar7;
            if ((uVar9 >> (uVar6 & 0x3f) & 1) != 0) {
              uVar11 = uVar11 + 1;
              puVar8 = puVar7 + 1;
              *puVar7 = iVar15 << 9 | (int)uVar16 << 6 | (uint)uVar6;
            }
            puVar7 = puVar8;
          } while ((uVar6 < 0x3f) && (uVar6 = uVar6 + 1, uVar11 < uVar17));
          if (6 < uVar16) break;
          uVar6 = 0;
          uVar16 = uVar16 + 1;
        } while (uVar11 < uVar17);
        uVar13 = uVar13 + 1;
        uVar17 = uVar17 - uVar11;
        if (*(uint *)(param_1 + 0x24) <= uVar13) break;
        param_3 = param_3 + uVar11;
        uVar10 = 0;
      } while (uVar17 != 0);
    }
    return param_4 - uVar17;
  }
  uVar11 = param_4;
  if (param_2 == 0xffffffff) {
    uVar10 = *(uint *)(param_1 + 0x24);
    param_2 = 0;
    uVar12 = 0;
    uVar17 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x18);
    uVar17 = param_2 >> 9;
    uVar10 = *(uint *)(param_1 + 0x24);
    if ((uVar10 <= uVar12) || (*(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar12 * 8) != uVar17))
    {
      uVar12 = 0;
      iVar15 = uVar10 - 1;
      if (0 < (int)uVar10) {
        do {
          uVar4 = iVar15 + uVar12 >> 1;
          uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar4 * 8);
          if ((int)uVar17 < (int)uVar3) {
            iVar15 = uVar4 - 1;
          }
          else {
            uVar12 = uVar4;
            if (uVar17 == uVar3) break;
            uVar12 = uVar4 + 1;
          }
        } while ((int)uVar12 <= iVar15);
      }
      if (uVar10 <= uVar12) {
        param_2 = param_2 + 1;
        if ((param_2 != 0xffffffff) && (uVar12 = param_4, param_4 != 0)) {
          do {
            uVar11 = uVar12 - 1;
            *param_3 = param_2;
            if (param_2 == 0xfffffffe) break;
            bVar5 = uVar12 != 1;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
            uVar12 = uVar11;
          } while (bVar5);
        }
        goto LAB_00562534;
      }
    }
    param_2 = param_2 + 1;
    uVar17 = param_2 & 0x1ff;
    if (uVar17 == 0) {
      uVar12 = uVar12 + 1;
    }
  }
  if ((uVar12 < uVar10) && (param_4 != 0)) {
    lVar14 = *(long *)(param_1 + 0x28);
    uVar13 = (ulong)uVar12;
    do {
      piVar1 = (int *)(lVar14 + uVar13 * 8);
      uVar12 = 0;
      iVar15 = *piVar1;
      uVar10 = piVar1[1];
      uVar16 = (ulong)(uVar17 >> 6);
      uVar6 = (ulong)(uVar17 & 0x3f);
      puVar7 = param_3;
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)uVar10 * 0x48);
      if (*(uint *)(param_1 + 0x34) <= uVar10) {
        puVar2 = &DAT_0025d4b0;
      }
      do {
        uVar9 = *(ulong *)(puVar2 + uVar16 * 2 + 2);
        do {
          if ((uVar9 >> (uVar6 & 0x3f) & 1) != 0) {
            uVar10 = iVar15 << 9 | (int)uVar16 << 6 | (uint)uVar6;
            for (; (param_2 < uVar10 && (uVar12 < uVar11)); uVar12 = uVar12 + 1) {
              *puVar7 = param_2;
              param_2 = param_2 + 1;
              puVar7 = puVar7 + 1;
            }
            param_2 = uVar10 + 1;
          }
        } while ((uVar6 < 0x3f) && (uVar6 = uVar6 + 1, uVar12 < uVar11));
        if (6 < uVar16) break;
        uVar6 = 0;
        uVar16 = uVar16 + 1;
      } while (uVar12 < uVar11);
      uVar13 = uVar13 + 1;
      param_3 = param_3 + uVar12;
      uVar11 = uVar11 - uVar12;
    } while ((uVar13 < *(uint *)(param_1 + 0x24)) && (uVar17 = 0, uVar11 != 0));
  }
  if ((param_2 != 0xffffffff) && (uVar12 = uVar11, uVar11 != 0)) {
    do {
      uVar11 = uVar12 - 1;
      *param_3 = param_2;
      if (param_2 == 0xfffffffe) break;
      bVar5 = uVar12 != 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      uVar12 = uVar11;
    } while (bVar5);
  }
LAB_00562534:
  return param_4 - uVar11;
}


// ===== 00562694  FUN_00562694 =====

undefined8
FUN_00562694(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4,void *param_5,
            uint param_6,undefined8 param_7,undefined4 param_8,undefined8 *param_9)

{
  void *pvVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  char *__s1;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((param_6 == 0) || ((param_2 & 1) == 0)) {
    uVar8 = param_4[1];
    uVar7 = *param_4;
    uVar6 = param_4[3];
    uVar5 = param_4[2];
    pvVar1 = (void *)0x0;
    if ((param_2 & 1) == 0) {
      pvVar1 = param_5;
    }
    __dest = (void *)0x0;
    *(uint *)(param_1 + 5) = param_6;
    param_1[4] = pvVar1;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
  }
  else {
    __dest = calloc((ulong)param_6,0x10);
    if (__dest == (void *)0x0) goto LAB_005628ac;
    uVar8 = param_4[1];
    uVar7 = *param_4;
    uVar6 = param_4[3];
    uVar5 = param_4[2];
    *(uint *)(param_1 + 5) = param_6;
    param_1[4] = __dest;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    memcpy(__dest,param_5,(ulong)param_6 << 4);
    iVar2 = *(int *)((long)__dest + 8);
    iVar4 = *(int *)((long)__dest + 0xc);
    do {
      if (iVar2 != 0) {
        iVar2 = 1;
        *(undefined4 *)((long)__dest + 8) = 1;
      }
      if (iVar4 != -1) {
        iVar4 = 2;
        *(undefined4 *)((long)__dest + 0xc) = 2;
      }
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  rive_hb_ot_layout_table_find_feature_variations
            (param_3,0x47535542,param_7,param_8,(long)param_1 + 0x2c);
  rive_hb_ot_layout_table_find_feature_variations(param_3,0x47504f53,param_7,param_8,param_1 + 6);
  if (param_9 == (undefined8 *)0x0) {
    do {
      if (DAT_006870a8 != 0) break;
      lVar3 = FUN_003410d0(0,&DAT_00678ac8,&DAT_006870a8);
    } while (lVar3 != 0);
    lVar3 = *(long *)(param_3 + 0x58);
    while (lVar3 == 0) {
      if (*(long *)(param_3 + 0x50) == 0) goto LAB_005628ac;
      lVar3 = FUN_003410d0(0,1,(long *)(param_3 + 0x58));
      if (lVar3 == 0) break;
      lVar3 = *(long *)(param_3 + 0x58);
    }
    param_1[7] = FUN_00540394;
    param_1[8] = &DAT_00244bac;
    return 1;
  }
  __s1 = (char *)*param_9;
  while (__s1 != (char *)0x0) {
    iVar2 = strcmp(__s1,"ot");
    if (iVar2 == 0) {
      lVar3 = *(long *)(param_3 + 0x58);
      do {
        if (lVar3 != 0) {
code_r0x0056286c:
          param_1[7] = FUN_00540394;
          param_1[8] = &DAT_00244bac;
          return 1;
        }
        if (*(long *)(param_3 + 0x50) == 0) break;
        lVar3 = FUN_003410d0(0,1,(long *)(param_3 + 0x58));
        if (lVar3 == 0) goto code_r0x0056286c;
        lVar3 = *(long *)(param_3 + 0x58);
      } while( true );
    }
    param_9 = param_9 + 1;
    __s1 = (char *)*param_9;
  }
LAB_005628ac:
  free(__dest);
  return 0;
}


// ===== 005628bc  rive_hb_shape_plan_create =====

void rive_hb_shape_plan_create(void)

{
  rive_hb_shape_plan_create2();
  return;
}


// ===== 005628cc  rive_hb_shape_plan_create2 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
rive_hb_shape_plan_create2
          (undefined *param_1,uint *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
          ,undefined4 param_6,ulong param_7)

{
  short *psVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 *__ptr;
  ulong uVar18;
  int *piVar19;
  void *__dest;
  undefined8 *puVar20;
  void *pvVar21;
  undefined8 uVar22;
  bool bVar23;
  ushort uVar24;
  uint *puVar25;
  byte bVar26;
  uint uVar27;
  int *piVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  int *piVar32;
  uint *puVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  undefined4 *puVar37;
  uint uVar38;
  byte bVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  int *local_180;
  undefined8 local_178;
  long local_170;
  undefined8 uStack_168;
  long local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  void *pvStack_128;
  ulong local_120;
  void *local_118;
  undefined8 local_110;
  byte local_108;
  undefined **local_100;
  int local_f4 [3];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined1 local_d0 [2];
  undefined8 local_ce [2];
  undefined2 local_be [3];
  long local_b8;
  undefined1 auStack_b0 [48];
  ulong local_80;
  uint local_78 [2];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if ((*param_2 & 0xfffffffc) != 4) {
    __ptr = &DAT_0025d4b0;
    goto LAB_00564574;
  }
  __ptr = (undefined4 *)calloc(1,0x108);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    *(undefined1 *)(__ptr + 1) = 1;
    *(undefined8 *)(__ptr + 2) = 0;
    if (param_1 == (undefined *)0x0) {
      param_1 = &DAT_00686440;
    }
    if ((param_1[4] & 1) != 0) {
      param_1[4] = 0;
    }
    *(undefined **)(__ptr + 4) = param_1;
    uVar18 = FUN_00562694(__ptr + 6,1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((uVar18 & 1) != 0) {
      uStack_1f0 = *(undefined8 *)(__ptr + 8);
      local_1f8 = *(undefined8 *)(__ptr + 6);
      uStack_1e0 = *(undefined8 *)(__ptr + 0xc);
      local_1e8 = *(undefined8 *)(__ptr + 10);
      local_1d0._4_4_ = (undefined4)((ulong)local_1f8 >> 0x20);
      uVar15 = local_1d0._4_4_;
      puVar40 = (undefined8 *)(__ptr + 0x22);
      *(undefined8 *)(__ptr + 0x24) = 0;
      *puVar40 = 0;
      *(undefined8 *)(__ptr + 0x2c) = 0;
      *(undefined8 *)(__ptr + 0x2a) = 0;
      *(undefined8 *)(__ptr + 0x30) = 0;
      *(undefined8 *)(__ptr + 0x2e) = 0;
      *(undefined8 *)(__ptr + 0x34) = 0;
      *(undefined8 *)(__ptr + 0x32) = 0;
      *(undefined8 *)(__ptr + 0x38) = 0;
      *(undefined8 *)(__ptr + 0x36) = 0;
      *(undefined8 *)(__ptr + 0x28) = 0;
      *(undefined8 *)(__ptr + 0x26) = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      local_198 = 0;
      local_1a0 = 0;
      uStack_188._0_4_ = 0;
      uStack_188._4_4_ = 0;
      local_190 = 0;
      local_178 = 0;
      local_180 = (int *)0x0;
      uStack_168 = 0;
      local_170 = 0;
      local_160 = 0;
      local_78[0] = 3;
      local_80 = CONCAT44(local_80._4_4_,3);
      local_200 = param_1;
      local_1d8 = param_1;
      local_1d0 = local_1f8;
      uStack_1c8 = uStack_1f0;
      uStack_1c0 = local_1e8;
      uStack_1b8 = uStack_1e0;
      rive_hb_ot_tags_from_script_and_language
                (uVar15,uStack_1f0,local_78,&local_e0,&local_80,local_f4);
      lVar34 = 0;
      bVar10 = true;
      do {
        bVar9 = bVar10;
        uVar5 = (&DAT_0024e6c0)[lVar34];
        lVar36 = lVar34 * 4;
        uVar11 = rive_hb_ot_layout_table_select_script
                           (local_1d8,uVar5,local_78[0],&local_e0,(long)&local_1a0 + lVar36,
                            (long)&local_1b0 + lVar36 + 4);
        uVar15 = *(undefined4 *)((long)&local_1a0 + lVar36);
        *(undefined1 *)((long)&uStack_1a8 + lVar34 + 4) = uVar11;
        rive_hb_ot_layout_script_select_language2
                  (local_1d8,uVar5,uVar15,local_80 & 0xffffffff,local_f4,(long)&local_198 + lVar36,0
                  );
        lVar34 = 1;
        bVar10 = false;
      } while (bVar9);
      uStack_148 = *(undefined8 *)(__ptr + 8);
      local_150 = *(undefined8 *)(__ptr + 6);
      uStack_138 = *(undefined8 *)(__ptr + 0xc);
      uStack_140 = *(undefined8 *)(__ptr + 10);
      local_110 = 0xffffffff00000000;
      pvStack_128 = (void *)0x0;
      local_130 = 0;
      local_118 = (void *)0x0;
      local_120 = 0;
      local_158 = param_1;
      iVar12 = rive_hb_aat_layout_has_substitution(param_1);
      if (iVar12 == 0) {
        local_108 = false;
      }
      else if ((__ptr[6] & 0xfffffffe) == 4) {
        local_108 = true;
      }
      else {
        iVar12 = rive_hb_ot_layout_has_substitution(param_1);
        local_108 = iVar12 == 0;
      }
      uVar35 = __ptr[7];
      local_100 = (undefined **)&DAT_00254448;
      if ((int)uVar35 < 0x4d656466) {
        if ((int)uVar35 < 0x47756b68) {
          if ((int)uVar35 < 0x43687273) {
            if ((int)uVar35 < 0x42657266) {
              if ((int)uVar35 < 0x42616c69) {
                if ((uVar35 != 0x41646c6d) && (uVar35 != 0x41686f6d)) {
                  uVar31 = 0x41726162;
                  goto LAB_00562fc8;
                }
              }
              else if ((uVar35 != 0x42616c69) && (uVar35 != 0x4261746b)) {
                uVar31 = 0x42656e67;
                goto LAB_00563388;
              }
            }
            else if ((int)uVar35 < 0x42756769) {
              if ((uVar35 != 0x42657266) && (uVar35 != 0x42686b73)) {
                uVar31 = 0x42726168;
                goto LAB_005633f4;
              }
            }
            else if ((int)uVar35 < 0x43616b6d) {
              if (uVar35 != 0x42756769) {
                uVar31 = 0x42756864;
                goto LAB_005633f4;
              }
            }
            else if (uVar35 != 0x43616b6d) {
              uVar31 = 0x4368616d;
              goto LAB_005633f4;
            }
          }
          else if ((int)uVar35 < 0x45677970) {
            if ((int)uVar35 < 0x4469616b) {
              if ((uVar35 != 0x43687273) && (uVar35 != 0x43706d6e)) {
                uVar31 = 0x44657661;
LAB_00563388:
                local_100 = (undefined **)&DAT_00254448;
                if (uVar35 == uVar31) {
LAB_00563394:
                  local_100 = (undefined **)&DAT_00254448;
                  if ((local_1b0._4_4_ != 0x44464c54) && (local_1b0._4_4_ != 0x6c61746e)) {
                    local_100 = &PTR_FUN_00678a68;
                    if ((local_1b0._4_4_ & 0xff) != 0x33) {
                      local_100 = &PTR_FUN_006788e8;
                    }
                  }
                }
                goto LAB_00563424;
              }
            }
            else if ((uVar35 != 0x4469616b) && (uVar35 != 0x446f6772)) {
              uVar31 = 0x4475706c;
              goto LAB_005633f4;
            }
          }
          else if ((int)uVar35 < 0x476f6e67) {
            if ((uVar35 != 0x45677970) && (uVar35 != 0x456c796d)) {
              uVar31 = 0x47617261;
              goto LAB_005633f4;
            }
          }
          else if ((int)uVar35 < 0x4772616e) {
            if (uVar35 != 0x476f6e67) {
              uVar31 = 0x476f6e6d;
              goto LAB_005633f4;
            }
          }
          else if (uVar35 != 0x4772616e) {
            uVar31 = 0x47756a72;
            goto LAB_00563388;
          }
          goto LAB_00563400;
        }
        if (0x4b697472 < (int)uVar35) {
          if ((int)uVar35 < 0x4c657063) {
            if ((int)uVar35 < 0x4b746869) {
              if (uVar35 != 0x4b697473) {
                if (uVar35 == 0x4b6e6461) goto LAB_00563394;
                uVar31 = 0x4b726169;
                goto LAB_005633f4;
              }
            }
            else if ((uVar35 != 0x4b746869) && (uVar35 != 0x4c616e61)) {
              uVar31 = 0x4c616f6f;
              goto LAB_00563138;
            }
          }
          else if ((int)uVar35 < 0x4d616b61) {
            if ((uVar35 != 0x4c657063) && (uVar35 != 0x4c696d62)) {
              uVar31 = 0x686a;
              goto LAB_00563368;
            }
          }
          else if ((int)uVar35 < 0x4d616e69) {
            if (uVar35 != 0x4d616b61) {
              uVar31 = 0x6e64;
LAB_00563368:
              uVar31 = uVar31 | 0x4d610000;
              goto LAB_005633f4;
            }
          }
          else if (uVar35 != 0x4d616e69) {
            uVar31 = 0x7263;
            goto LAB_00563368;
          }
          goto LAB_00563400;
        }
        if (0x486d6e6f < (int)uVar35) {
          if (0x4b617768 < (int)uVar35) {
            if ((int)uVar35 < 0x4b686d72) {
              if (uVar35 == 0x4b617769) goto LAB_00563400;
              uVar31 = 0x6172;
            }
            else {
              if (uVar35 == 0x4b686d72) {
                local_100 = &PTR_FUN_00678948;
                goto LAB_00563424;
              }
              uVar31 = 0x6f6a;
            }
            uVar31 = uVar31 | 0x4b680000;
            goto LAB_005633f4;
          }
          if ((uVar35 != 0x486d6e70) && (uVar35 != 0x4a617661)) {
            uVar31 = 0x4b616c69;
            goto LAB_005633f4;
          }
          goto LAB_00563400;
        }
        if ((int)uVar35 < 0x48616e6f) {
          if (uVar35 == 0x47756b68) goto LAB_00563400;
          if (uVar35 == 0x47757275) goto LAB_00563394;
          local_100 = (undefined **)&DAT_00254448;
          if (uVar35 == 0x48616e67) {
            local_100 = &PTR_FUN_00678828;
          }
        }
        else {
          if (uVar35 == 0x48616e6f) goto LAB_00563400;
          if (uVar35 != 0x48656272) {
            uVar31 = 0x486d6e67;
            goto LAB_005633f4;
          }
          local_100 = (undefined **)&DAT_00678888;
        }
      }
      else {
        if ((int)uVar35 < 0x536f676f) {
          if ((int)uVar35 < 0x4f756772) {
            if ((int)uVar35 < 0x4d796d72) {
              if ((int)uVar35 < 0x4d6f6e67) {
                if (uVar35 != 0x4d656466) {
                  if (uVar35 == 0x4d6c796d) goto LAB_00563394;
                  uVar31 = 0x4d6f6469;
LAB_005633f4:
                  if (uVar35 != uVar31) goto LAB_00563424;
                }
              }
              else if ((uVar35 != 0x4d6f6e67) && (uVar35 != 0x4d746569)) {
                uVar31 = 0x4d756c74;
                goto LAB_005633f4;
              }
            }
            else if ((int)uVar35 < 0x4e657761) {
              if (uVar35 == 0x4d796d72) {
                local_100 = (undefined **)&DAT_00254448;
                if (((local_1b0._4_4_ != 0x44464c54) && (local_1b0._4_4_ != 0x6c61746e)) &&
                   (local_1b0._4_4_ != 0x6d796d72)) {
                  local_100 = &PTR_FUN_006789a8;
                }
                goto LAB_00563424;
              }
              if (uVar35 != 0x4e61676d) {
                uVar31 = 0x4e616e64;
                goto LAB_005633f4;
              }
            }
            else if ((int)uVar35 < 0x4f6e616f) {
              if (uVar35 != 0x4e657761) {
                uVar31 = 0x4e6b6f6f;
                goto LAB_005633f4;
              }
            }
            else if (uVar35 != 0x4f6e616f) {
              uVar31 = 0x4f727961;
              goto LAB_00563388;
            }
          }
          else if ((int)uVar35 < 0x53617572) {
            if ((int)uVar35 < 0x506c7264) {
              if ((uVar35 != 0x4f756772) && (uVar35 != 0x50686167)) {
                uVar31 = 0x50686c70;
                goto LAB_005633f4;
              }
            }
            else if ((uVar35 != 0x506c7264) && (uVar35 != 0x526a6e67)) {
              uVar31 = 0x526f6867;
              goto LAB_005633f4;
            }
          }
          else if ((int)uVar35 < 0x53696474) {
            if ((uVar35 != 0x53617572) && (uVar35 != 0x53687264)) {
              uVar31 = 0x6464;
LAB_005632a4:
              uVar31 = uVar31 | 0x53690000;
              goto LAB_005633f4;
            }
          }
          else if ((int)uVar35 < 0x53696e68) {
            if (uVar35 != 0x53696474) {
              uVar31 = 0x6e64;
              goto LAB_005632a4;
            }
          }
          else if (uVar35 != 0x53696e68) {
            uVar31 = 0x536f6764;
            goto LAB_005633f4;
          }
        }
        else if ((int)uVar35 < 0x54666e67) {
          if ((int)uVar35 < 0x54616762) {
            if ((int)uVar35 < 0x53756e75) {
              if ((uVar35 != 0x536f676f) && (uVar35 != 0x536f796f)) {
                uVar31 = 0x53756e64;
                goto LAB_005633f4;
              }
            }
            else if ((uVar35 != 0x53756e75) && (uVar35 != 0x53796c6f)) {
              uVar31 = 0x53797263;
LAB_00562fc8:
              local_100 = (undefined **)&DAT_00254448;
              if ((uVar35 == uVar31) &&
                 (local_100 = (undefined **)&UNK_006787c8,
                 local_1b0._4_4_ == 0x44464c54 && uVar35 != 0x41726162 ||
                 (__ptr[6] & 0xfffffffe) != 4)) {
                local_100 = (undefined **)&DAT_00254448;
              }
              goto LAB_00563424;
            }
          }
          else if ((int)uVar35 < 0x54616d6c) {
            if ((uVar35 != 0x54616762) && (uVar35 != 0x54616b72)) {
              uVar31 = 0x6c65;
              goto LAB_005631a0;
            }
          }
          else {
            if ((int)uVar35 < 0x5461796f) {
              if (uVar35 == 0x54616d6c) goto LAB_00563394;
              uVar31 = 0x7674;
LAB_005631a0:
              uVar31 = uVar31 | 0x54610000;
              goto LAB_005633f4;
            }
            if (uVar35 != 0x5461796f) {
              uVar31 = 0x54656c75;
              goto LAB_00563388;
            }
          }
        }
        else if ((int)uVar35 < 0x546f6c73) {
          if ((int)uVar35 < 0x54696274) {
            if ((uVar35 != 0x54666e67) && (uVar35 != 0x54676c67)) {
              uVar31 = 0x54686169;
LAB_00563138:
              local_100 = (undefined **)&DAT_00254448;
              if (uVar35 == uVar31) {
                local_100 = (undefined **)&DAT_00678a08;
              }
              goto LAB_00563424;
            }
          }
          else if ((int)uVar35 < 0x546e7361) {
            if (uVar35 != 0x54696274) {
              uVar31 = 0x54697268;
              goto LAB_005633f4;
            }
          }
          else if (uVar35 != 0x546e7361) {
            uVar31 = 0x546f6472;
            goto LAB_005633f4;
          }
        }
        else if ((int)uVar35 < 0x56697468) {
          if ((uVar35 != 0x546f6c73) && (uVar35 != 0x546f746f)) {
            uVar31 = 0x54757467;
            goto LAB_005633f4;
          }
        }
        else if ((int)uVar35 < 0x59657a69) {
          if (uVar35 != 0x56697468) {
            uVar31 = 0x5763686f;
            goto LAB_005633f4;
          }
        }
        else if (uVar35 != 0x59657a69) {
          uVar31 = 0x5a616e62;
          goto LAB_005633f4;
        }
LAB_00563400:
        if (local_1b0._4_4_ != 0x44464c54 && local_1b0._4_4_ != 0x6c61746e) {
          local_100 = &PTR_FUN_00678a68;
        }
      }
LAB_00563424:
      bVar10 = (bool)(local_108 ^ 1);
      if (local_100 == (undefined **)&DAT_00254448) {
        bVar10 = true;
      }
      if (!bVar10) {
        local_100 = (undefined **)&DAT_002544a8;
      }
      lVar34 = *(long *)(__ptr + 0xe);
      uVar35 = __ptr[0x10];
      uVar18 = (ulong)uVar35;
      local_1b0 = CONCAT71(local_1b0._1_7_,1);
      FUN_00543d90(&local_1d8,0x7276726e,1,1);
      piVar19 = (int *)FUN_005442b4(&local_178);
      piVar19[2] = 0;
      piVar19[3] = 0;
      *piVar19 = (int)local_190;
      local_190 = CONCAT44(local_190._4_4_,(int)local_190 + 1);
      if ((uint)local_1f8 == 5) {
        FUN_00543d90(&local_1d8,0x72746c61,1,1);
        uVar22 = 0;
        uVar15 = 0x72746c6d;
LAB_00563518:
        FUN_00543d90(&local_1d8,uVar15,uVar22,1);
      }
      else if ((uint)local_1f8 == 4) {
        FUN_00543d90(&local_1d8,0x6c747261,1,1);
        uVar15 = 0x6c74726d;
        uVar22 = 1;
        goto LAB_00563518;
      }
      FUN_00543d90(&local_1d8,0x72616e64,0x21,0xff);
      FUN_00543d90(&local_1d8,0x48617266,1,1);
      FUN_00543d90(&local_1d8,0x48415246,1,1);
      if ((code *)*local_100 != (code *)0x0) {
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        (*(code *)*local_100)(&local_200);
      }
      FUN_00543d90(&local_1d8,0x42757a7a,1,1);
      FUN_00543d90(&local_1d8,0x42555a5a,1,1);
      lVar36 = 0;
      do {
        FUN_00543d90(&local_1d8,*(undefined4 *)((long)&DAT_00253ab8 + lVar36),
                     *(undefined4 *)((long)&DAT_00253abc + lVar36),1);
        lVar36 = lVar36 + 8;
      } while (lVar36 != 0x38);
      if (((uint)local_1f8 & 0xfffffffe) == 4) {
        lVar36 = 0;
        do {
          FUN_00543d90(&local_1d8,*(undefined4 *)((long)&DAT_00253af0 + lVar36),
                       *(undefined4 *)((long)&DAT_00253af4 + lVar36),1);
          lVar36 = lVar36 + 8;
        } while (lVar36 != 0x38);
      }
      else {
        FUN_00543d90(&local_1d8,0x76657274,0x11,1);
      }
      if (uVar35 != 0) {
        piVar19 = (int *)(lVar34 + 8);
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        do {
          if (*piVar19 == 0) {
            bVar10 = piVar19[1] == -1;
          }
          else {
            bVar10 = false;
          }
          FUN_00543d90(&local_1d8,piVar19[-2],bVar10,piVar19[-1]);
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      if ((code *)local_100[1] != (code *)0x0) {
        (*(code *)local_100[1])(&local_200);
      }
      *(undefined ***)(__ptr + 0x20) = local_100;
      lVar34 = 0;
      __ptr[0x25] = 0x80000000;
      *(undefined8 *)(__ptr + 0x1a) = uStack_1f0;
      *(undefined8 *)(__ptr + 0x18) = local_1f8;
      *(undefined8 *)(__ptr + 0x1e) = uStack_1e0;
      *(undefined8 *)(__ptr + 0x1c) = local_1e8;
      local_80 = 0;
      bVar10 = true;
      do {
        bVar9 = bVar10;
        lVar36 = lVar34 * 4;
        uVar6 = (&DAT_0024e6c0)[lVar34];
        uVar11 = *(undefined1 *)((long)&uStack_1a8 + lVar34 + 4);
        uVar15 = *(undefined4 *)((long)&local_1a0 + lVar36);
        uVar5 = *(undefined4 *)((long)&local_198 + lVar36);
        *(undefined4 *)((long)puVar40 + lVar34 * 4) = *(undefined4 *)((long)&local_1b0 + lVar36 + 4)
        ;
        *(undefined1 *)((long)__ptr + lVar34 + 0x90) = uVar11;
        rive_hb_ot_layout_language_get_required_feature
                  (local_1d8,uVar6,uVar15,uVar5,local_f4 + lVar34,local_78 + lVar34);
        lVar34 = 1;
        bVar10 = false;
      } while (bVar9);
      uVar18 = (ulong)uStack_188._4_4_;
      if (uStack_188._4_4_ != 0) {
        if ((char)local_1b0 == '\0') {
          qsort(local_180,uVar18,0x1c,FUN_00544420);
          uVar18 = (ulong)uStack_188._4_4_;
        }
        uVar35 = (uint)uVar18;
        if (uVar35 < 2) {
          uVar31 = 1;
        }
        else {
          uVar31 = 0;
          lVar34 = uVar18 - 1;
          piVar19 = local_180;
          do {
            piVar28 = piVar19 + 7;
            if (*piVar28 == local_180[(ulong)uVar31 * 7]) {
              uVar18 = (ulong)uVar31;
              puVar33 = (uint *)(local_180 + uVar18 * 7 + 3);
              uVar35 = *puVar33;
              if ((*(byte *)(piVar19 + 10) & 1) == 0) {
                if ((uVar35 & 1) != 0) {
                  uVar35 = uVar35 & 0xfffffffe;
                  *puVar33 = uVar35;
                }
                uVar13 = local_180[uVar18 * 7 + 2];
                if ((uint)local_180[uVar18 * 7 + 2] <= (uint)piVar19[9]) {
                  uVar13 = piVar19[9];
                }
                local_180[uVar18 * 7 + 2] = uVar13;
              }
              else {
                uVar35 = uVar35 | 1;
                *puVar33 = uVar35;
                local_180[uVar18 * 7 + 2] = piVar19[9];
                local_180[uVar18 * 7 + 4] = piVar19[0xb];
              }
              *puVar33 = uVar35 | piVar19[10] & 2U;
              uVar22 = NEON_umin(*(undefined8 *)(local_180 + uVar18 * 7 + 5),
                                 *(undefined8 *)(piVar19 + 0xc),4);
              *(undefined8 *)(local_180 + uVar18 * 7 + 5) = uVar22;
            }
            else {
              uVar31 = uVar31 + 1;
              uVar22 = *(undefined8 *)(piVar19 + 10);
              uVar42 = *(undefined8 *)(piVar19 + 9);
              uVar41 = *(undefined8 *)piVar28;
              piVar32 = local_180 + (ulong)uVar31 * 7;
              *(undefined8 *)(piVar32 + 5) = *(undefined8 *)(piVar19 + 0xc);
              *(undefined8 *)(piVar32 + 3) = uVar22;
              *(undefined8 *)(piVar32 + 2) = uVar42;
              *(undefined8 *)piVar32 = uVar41;
            }
            lVar34 = lVar34 + -1;
            piVar19 = piVar28;
          } while (lVar34 != 0);
          uVar31 = uVar31 + 1;
          uVar35 = uStack_188._4_4_;
        }
        uVar31 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
        if ((uVar31 < uVar35) && (uStack_188._4_4_ = uVar31, (int)uStack_188 - 1U < 0xfffffffe)) {
          FUN_00543e78(&uStack_188,uVar31,1);
        }
      }
      lVar34 = 0;
      do {
        lVar36 = lVar34 + 0x30;
        *(undefined4 *)((long)&local_e0 + lVar34) = 1;
        local_dc[lVar34] = 1;
        *(undefined8 *)((long)&local_d8 + lVar34) = 0;
        local_d0[lVar34] = 1;
        *(undefined8 *)(auStack_b0 + lVar34 + -8) = 0;
        *(undefined8 *)((long)local_ce + lVar34 + 8) = 0;
        *(undefined8 *)(local_d0 + lVar34 + 2) = 0;
        *(undefined2 *)((long)local_be + lVar34) = 0;
        lVar34 = lVar36;
      } while (lVar36 != 0x60);
      rive_hb_ot_layout_collect_features_map
                (local_1d8,0x47535542,local_1a0 & 0xffffffff,local_198 & 0xffffffff,&local_e0);
      rive_hb_ot_layout_collect_features_map
                (local_1d8,0x47504f53,local_1a0._4_4_,local_198._4_4_,auStack_b0);
      uVar18 = (ulong)uStack_188._4_4_;
      if (uStack_188._4_4_ != 0) {
        uVar30 = 0;
        uVar35 = 4;
LAB_005638fc:
        if (uVar30 < uStack_188._4_4_) {
          puVar33 = (uint *)(local_180 + uVar30 * 7);
          uVar31 = puVar33[2];
          uVar13 = puVar33[3];
          if (((uVar13 & 1) == 0) || (uVar31 != 1)) {
            uVar27 = 0x20 - (int)LZCOUNT(uVar31);
            if (7 < uVar27) {
              uVar27 = 8;
            }
            if (uVar31 == 0) goto LAB_00563c5c;
          }
          else {
            uVar27 = 0;
          }
          uVar27 = uVar27 + uVar35;
          if (uVar27 < 0x1f) {
            uVar31 = *puVar33;
            bVar10 = false;
            lVar34 = 0;
LAB_0056397c:
            do {
              if (local_78[lVar34] == uVar31) {
                local_78[lVar34 + -2] = puVar33[lVar34 + 5];
              }
              if ((*(long *)(auStack_b0 + lVar34 * 0x30 + -8) != 0) &&
                 (lVar36 = FUN_0053b150(&local_e0 + lVar34 * 0xc,uVar31,uVar31 * -0x61c8864f),
                 lVar36 != 0)) goto LAB_005639dc;
              *(undefined4 *)((long)&local_e8 + lVar34 * 4) = 0xffff;
              bVar9 = lVar34 == 0;
              lVar34 = 1;
            } while (bVar9);
            if (!bVar10) {
              if ((uVar13 >> 4 & 1) == 0) goto LAB_00563adc;
              lVar34 = 0;
              bVar10 = false;
              bVar9 = true;
              do {
                bVar23 = bVar9;
                uVar31 = *puVar33;
                uVar22 = FUN_0052be44(local_1d8,(&DAT_0024e6c0)[lVar34]);
                uVar13 = FUN_0052fc08();
                if (uVar13 == 0) {
                  bVar9 = false;
                }
                else {
                  uVar38 = 0;
                  bVar9 = true;
                  do {
                    uVar14 = FUN_0052fc40(uVar22,uVar38);
                    if (uVar14 == uVar31) goto LAB_00563a8c;
                    uVar38 = uVar38 + 1;
                    bVar9 = uVar38 < uVar13;
                  } while (uVar13 != uVar38);
                }
                uVar38 = 0xffff;
LAB_00563a8c:
                *(uint *)((long)&local_e8 + lVar34 * 4) = uVar38;
                bVar10 = (bool)(bVar10 | bVar9);
                lVar34 = 1;
                bVar9 = false;
              } while (bVar23);
              if (!bVar10) {
                uVar13 = puVar33[3];
LAB_00563adc:
                if ((uVar13 >> 1 & 1) != 0) {
                  bVar39 = 1;
                  goto LAB_00563ae4;
                }
                goto LAB_00563c5c;
              }
            }
            goto LAB_00563a08;
          }
        }
        else {
          DAT_006870b0 = 0;
          DAT_006870b8 = 0;
          _DAT_006870c8 = _DAT_006870c8 & 0xffffffff00000000;
          DAT_006870c0 = 0;
        }
        goto LAB_00563c5c;
      }
LAB_00563d04:
      if (((char)local_1b0 != '\0') && (__ptr[0x27] != 0)) {
        qsort(*(void **)(__ptr + 0x28),(ulong)(uint)__ptr[0x27],0x24,FUN_00544458);
      }
      piVar19 = (int *)FUN_005442b4(&local_178);
      piVar19[2] = 0;
      piVar19[3] = 0;
      *piVar19 = (int)local_190;
      local_190._0_4_ = (int)local_190 + 1;
      piVar19 = (int *)FUN_005442b4(&uStack_168);
      lVar34 = 0;
      piVar19[2] = 0;
      piVar19[3] = 0;
      *piVar19 = local_190._4_4_;
      local_190 = CONCAT44(local_190._4_4_ + 1,(int)local_190);
      bVar10 = true;
      do {
        bVar9 = bVar10;
        puVar33 = (uint *)((long)&local_190 + lVar34 * 4);
        if (*puVar33 != 0) {
          uVar31 = 0;
          uVar35 = 0;
          uVar18 = 0;
          do {
            if ((local_f4[lVar34] != 0xffff) && (local_78[lVar34 + -2] == uVar31)) {
              param_7 = param_7 & 0xffffffffffffff00;
              FUN_00543fa0(&local_1d8,puVar40,lVar34,local_f4[lVar34],__ptr[lVar34 + 0x11],
                           0x80000000,1,1,param_7,0,0x20202020);
            }
            if (__ptr[0x27] != 0) {
              puVar37 = *(undefined4 **)(__ptr + 0x28);
              lVar36 = (ulong)(uint)__ptr[0x27] * 0x24;
              do {
                if (puVar37[lVar34 + 3] == uVar31) {
                  bVar39 = *(byte *)(puVar37 + 8);
                  param_7 = CONCAT71((int7)(param_7 >> 8),bVar39 >> 3) & 0xffffffffffffff01;
                  FUN_00543fa0(&local_1d8,puVar40,lVar34,puVar37[lVar34 + 1],__ptr[lVar34 + 0x11],
                               puVar37[6],bVar39 >> 1 & 1,bVar39 >> 2 & 1,param_7,bVar39 >> 4 & 1,
                               *puVar37);
                }
                lVar36 = lVar36 + -0x24;
                puVar37 = puVar37 + 9;
              } while (lVar36 != 0);
            }
            uVar27 = __ptr[lVar34 * 4 + 0x2b];
            uVar13 = uVar35 + 1;
            uVar30 = (ulong)uVar13;
            if (uVar13 < uVar27) {
              uVar14 = uVar27 - uVar35;
              uVar38 = 0;
              if (uVar35 <= uVar27) {
                uVar38 = uVar14;
              }
              if (uVar14 <= uVar38) {
                uVar38 = uVar14;
              }
              if (uVar38 != 0) {
                qsort((void *)(*(long *)(__ptr + lVar34 * 4 + 0x2c) + (ulong)uVar35 * 0xc),
                      (ulong)uVar38,0xc,FUN_00544470);
                uVar27 = __ptr[lVar34 * 4 + 0x2b];
              }
              if (uVar13 < uVar27) {
                lVar36 = uVar30 * 0xc;
                do {
                  lVar29 = *(long *)(__ptr + lVar34 * 4 + 0x2c);
                  psVar1 = (short *)(lVar29 + lVar36);
                  if (*psVar1 == *(short *)(lVar29 + (ulong)uVar35 * 0xc)) {
                    lVar29 = lVar29 + (ulong)uVar35 * 0xc;
                    *(uint *)(lVar29 + 4) = *(uint *)(lVar29 + 4) | *(uint *)(psVar1 + 2);
                    *(byte *)(lVar29 + 2) = *(byte *)(lVar29 + 2) & (*(byte *)(psVar1 + 1) | 0xfe);
                    lVar29 = *(long *)(__ptr + lVar34 * 4 + 0x2c) + (ulong)uVar35 * 0xc;
                    *(byte *)(lVar29 + 2) =
                         *(byte *)(lVar29 + 2) &
                         (*(byte *)(*(long *)(__ptr + lVar34 * 4 + 0x2c) + lVar36 + 2) | 0xfd);
                  }
                  else {
                    uVar35 = uVar35 + 1;
                    uVar22 = *(undefined8 *)psVar1;
                    puVar20 = (undefined8 *)(lVar29 + (ulong)uVar35 * 0xc);
                    *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(psVar1 + 4);
                    *puVar20 = uVar22;
                  }
                  uVar27 = __ptr[lVar34 * 4 + 0x2b];
                  uVar30 = uVar30 + 1;
                  lVar36 = lVar36 + 0xc;
                } while (uVar30 < uVar27);
                uVar13 = uVar35 + 1;
              }
              uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
              if ((uVar13 < uVar27) &&
                 (__ptr[lVar34 * 4 + 0x2b] = uVar13, uVar27 = uVar13,
                 __ptr[lVar34 * 4 + 0x2a] - 1 < 0xfffffffe)) {
                FUN_0054418c(__ptr + lVar34 * 4 + 0x2a,uVar13,1);
                uVar27 = __ptr[lVar34 * 4 + 0x2b];
              }
            }
            uVar35 = uVar27;
            if ((uVar18 < *(uint *)((long)&local_178 + lVar34 * 0x10 + 4)) &&
               (*(uint *)((&local_170)[lVar34 * 2] + uVar18 * 0x10) == uVar31)) {
              uVar13 = __ptr[lVar34 * 4 + 0x32];
              if ((int)uVar13 < 0) {
LAB_00564134:
                puVar25 = (uint *)&DAT_006870b0;
                DAT_006870b0 = 0;
                DAT_006870b8 = 0;
              }
              else {
                uVar14 = __ptr[lVar34 * 4 + 0x33];
                uVar38 = uVar14 + 1 & ((int)(uVar14 + 1) >> 0x1f ^ 0xffffffffU);
                uVar27 = uVar13;
                if (uVar13 < uVar38) {
                  do {
                    uVar27 = uVar27 + (uVar27 >> 1) + 8;
                  } while (uVar27 < uVar38);
                  if (uVar27 >> 0x1c == 0) {
                    pvVar21 = *(void **)(__ptr + lVar34 * 4 + 0x34);
                    if ((uVar13 == 0) && (pvVar21 != (void *)0x0)) {
                      __dest = malloc((ulong)(uVar27 * 0x10));
                      if (__dest != (void *)0x0) {
                        if (uVar14 != 0) {
                          memcpy(__dest,pvVar21,(ulong)uVar14 << 4);
                        }
LAB_00564104:
                        *(void **)(__ptr + lVar34 * 4 + 0x34) = __dest;
                        __ptr[lVar34 * 4 + 0x32] = uVar27;
                        goto LAB_00564008;
                      }
                    }
                    else {
                      __dest = realloc(pvVar21,(ulong)(uVar27 * 0x10));
                      if (__dest != (void *)0x0) goto LAB_00564104;
                    }
                    uVar13 = __ptr[lVar34 * 4 + 0x32];
                    if (uVar27 <= uVar13) goto LAB_00564008;
                  }
                  __ptr[lVar34 * 4 + 0x32] = ~uVar13;
                  goto LAB_00564134;
                }
LAB_00564008:
                uVar13 = __ptr[lVar34 * 4 + 0x33];
                if ((uVar13 < uVar38) && (uVar27 = (uVar38 - uVar13) * 0x10, uVar27 != 0)) {
                  memset((void *)(*(long *)(__ptr + lVar34 * 4 + 0x34) + (ulong)uVar13 * 0x10),0,
                         (ulong)uVar27);
                }
                __ptr[lVar34 * 4 + 0x33] = uVar38;
                puVar25 = (uint *)(*(long *)(__ptr + lVar34 * 4 + 0x34) + (ulong)(uVar38 - 1) * 0x10
                                  );
              }
              *puVar25 = uVar35;
              if (uVar18 < *(uint *)((long)&local_178 + lVar34 * 0x10 + 4)) {
                uVar22 = *(undefined8 *)((&local_170)[lVar34 * 2] + uVar18 * 0x10 + 8);
              }
              else {
                uVar22 = 0;
                DAT_006870b0 = 0;
                DAT_006870b8 = 0;
              }
              uVar18 = uVar18 + 1;
              *(undefined8 *)(puVar25 + 2) = uVar22;
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < *puVar33);
        }
        lVar34 = 1;
        bVar10 = false;
      } while (bVar9);
      lVar34 = 0x30;
      do {
        FUN_005367bc((long)&local_e0 + lVar34);
        lVar34 = lVar34 + -0x30;
      } while (lVar34 != -0x30);
      if ((local_108 & 1) != 0) {
        FUN_0054498c(&local_158,__ptr + 0x3a);
      }
      iVar12 = __ptr[0x27];
      lVar34 = *(long *)(__ptr + 0x28);
      uVar15 = FUN_0053ff40(iVar12,lVar34,0x72746c6d);
      __ptr[0x40] = uVar15;
      iVar16 = FUN_0053ff40(iVar12,lVar34,0x76657274);
      *(ushort *)(__ptr + 0x41) = *(ushort *)(__ptr + 0x41) & 0xfffe | (ushort)(iVar16 != 0);
      uVar35 = 0x6b65726e;
      if (((uint)local_1f8 & 0xfffffffe) != 4) {
        uVar35 = 0x766b726e;
      }
      iVar16 = iVar12 + -1;
      if (0 < iVar12) {
        iVar12 = 0;
        do {
          uVar13 = (uint)(iVar16 + iVar12) >> 1;
          uVar31 = *(uint *)(lVar34 + (ulong)uVar13 * 0x24);
          if (uVar35 <= uVar31 && uVar31 != uVar35) {
            iVar16 = uVar13 - 1;
          }
          else {
            if (uVar35 <= uVar31) {
              iVar12 = *(int *)(lVar34 + (ulong)uVar13 * 0x24 + 8);
              goto LAB_0056425c;
            }
            iVar12 = uVar13 + 1;
          }
        } while (iVar12 <= iVar16);
      }
      iVar12 = 0xffff;
LAB_0056425c:
      iVar16 = __ptr[0x23];
      iVar4 = *(int *)(*(long *)(__ptr + 0x20) + 0x50);
      iVar17 = rive_hb_ot_layout_has_glyph_classes(local_200);
      uVar24 = *(ushort *)(__ptr + 0x41) | 8;
      if (iVar17 != 0) {
        uVar24 = *(ushort *)(__ptr + 0x41);
      }
      *(ushort *)(__ptr + 0x41) = uVar24 & 0xfdff | (ushort)((local_108 & 1) << 9);
      puVar20 = (undefined8 *)FUN_0054e508(local_200 + 0x118);
      puVar33 = &DAT_0025d4b0;
      if ((uint *)*puVar20 != (uint *)0x0) {
        puVar33 = (uint *)*puVar20;
      }
      puVar25 = &DAT_0025d4b0;
      if (7 < puVar33[6]) {
        puVar25 = *(uint **)(puVar33 + 4);
      }
      uVar24 = (ushort)*puVar25;
      uVar8 = uVar24 >> 8;
      if ((local_108 & 1) == 0) {
        iVar17 = rive_hb_ot_layout_has_substitution(local_200);
        bVar10 = iVar17 == 0;
        if (iVar4 == 0 || iVar4 == iVar16) goto LAB_005642ec;
LAB_00564324:
        if (uVar8 != 0 || (uVar24 & 0xff) != 0) goto LAB_00564328;
        uVar35 = (uint)*(ushort *)(__ptr + 0x41);
        if ((*(ushort *)(__ptr + 0x41) >> 8 & 1) == 0) goto LAB_00564334;
      }
      else {
        bVar10 = true;
        if (iVar4 != 0 && iVar4 != iVar16) goto LAB_00564324;
LAB_005642ec:
        iVar16 = rive_hb_ot_layout_has_positioning(local_200);
        if (iVar16 == 0) {
          bVar10 = true;
        }
        if ((uVar8 == 0 && (uVar24 & 0xff) == 0) || (!bVar10)) {
          uVar35 = (uint)*(ushort *)(__ptr + 0x41);
          if (iVar16 != 0) {
            uVar35 = *(ushort *)(__ptr + 0x41) | 0x40;
          }
          if ((uVar35 >> 8 & 1) == 0) {
LAB_00564334:
            uVar31 = 0;
            if (iVar12 != 0xffff) {
              uVar31 = uVar35 >> 6 & 1;
            }
            if (uVar8 == 0 && (uVar24 & 0xff) == 0) {
              uVar31 = 1;
            }
            if (uVar31 == 0) {
              uVar35 = uVar35 | 0x100;
            }
          }
        }
        else {
LAB_00564328:
          uVar35 = *(ushort *)(__ptr + 0x41) | 0x100;
        }
      }
      bVar39 = local_108;
      if ((local_108 >> 2 & 1) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = ((ushort)(uVar35 >> 1) ^ 0xffff) & 0x80;
        if ((uVar35 & 0x40) != 0) {
          uVar24 = 0;
        }
      }
      uVar24 = (ushort)uVar35 & 0xff78 | uVar24 |
               (ushort)uVar35 & 3 |
               (ushort)((((uint)local_108 << 1 & (uVar35 >> 6 ^ 0xffffffff)) >> 2 & 1) << 2);
      *(ushort *)(__ptr + 0x41) = uVar24;
      iVar12 = FUN_0053ff40(__ptr[0x27],*(undefined8 *)(__ptr + 0x28),0x6d61726b);
      uVar31 = (uVar35 >> 3 ^ 0xffffffff) & 0x20;
      if ((uVar35 & 0x40) != 0) {
        uVar31 = 0;
      }
      uVar2 = (ushort)uVar31;
      uVar8 = 0;
      if (uVar31 != 0) {
        uVar8 = (ushort)((bVar39 & 4) << 2);
      }
      if ((uVar35 & 0x200) != 0) {
        uVar2 = 0;
      }
      *(ushort *)(__ptr + 0x41) = uVar24 & 0xffcd | (ushort)(iVar12 != 0) << 1 | uVar8 | uVar2;
      iVar12 = rive_hb_aat_layout_has_tracking(local_200);
      if (iVar12 == 0) {
        uVar24 = 0;
      }
      else {
        lVar34 = FUN_0053ff98(local_200 + 0xa0);
        puVar33 = &DAT_0025d4b0;
        if (0x13 < *(uint *)(lVar34 + 0x18)) {
          puVar33 = *(uint **)(lVar34 + 0x10);
        }
        uVar35 = (*puVar33 & 0xff00ff00) >> 8 | (*puVar33 & 0xff00ff) << 8;
        uVar24 = (ushort)(uVar35 >> 0x10 != 0 || (uVar35 & 0xffff) != 0) << 10;
      }
      *(ushort *)(__ptr + 0x41) = *(ushort *)(__ptr + 0x41) & 0xfbff | uVar24;
      if (*(code **)(*(long *)(__ptr + 0x20) + 0x10) == (code *)0x0) {
LAB_00564464:
        bVar10 = true;
      }
      else {
        lVar34 = (**(code **)(*(long *)(__ptr + 0x20) + 0x10))(__ptr + 0x18);
        *(long *)(__ptr + 0x3e) = lVar34;
        if (lVar34 != 0) goto LAB_00564464;
        FUN_005402a0(puVar40);
        bVar10 = false;
      }
      if ((int)local_120 - 1U < 0xfffffffe) {
        local_120 = local_120 & 0xffffffff;
        free(local_118);
      }
      local_120 = 0;
      local_118 = (void *)0x0;
      if ((int)local_130 - 1U < 0xfffffffe) {
        local_130 = local_130 & 0xffffffff;
        free(pvStack_128);
      }
      local_130 = 0;
      pvStack_128 = (void *)0x0;
      if ((int)uStack_188 - 1U < 0xfffffffe) {
        uStack_188._4_4_ = 0;
        free(local_180);
      }
      uStack_188 = 0;
      local_180 = (int *)0x0;
      lVar34 = 0;
      bVar9 = true;
      do {
        bVar23 = bVar9;
        piVar19 = (int *)(&local_178 + lVar34 * 2);
        if (*piVar19 - 1U < 0xfffffffe) {
          pvVar21 = (void *)(&local_170)[lVar34 * 2];
          *(undefined4 *)((long)&local_178 + lVar34 * 0x10 + 4) = 0;
          free(pvVar21);
        }
        piVar19[0] = 0;
        piVar19[1] = 0;
        (&local_170)[lVar34 * 2] = 0;
        lVar34 = 1;
        bVar9 = false;
      } while (bVar23);
      lVar34 = 0;
      do {
        piVar19 = (int *)((long)&uStack_168 + lVar34);
        if (*piVar19 - 1U < 0xfffffffe) {
          pvVar21 = *(void **)((long)&local_160 + lVar34);
          *(undefined4 *)((long)&uStack_168 + lVar34 + 4) = 0;
          free(pvVar21);
        }
        lVar36 = lVar34 + -0x10;
        piVar19[0] = 0;
        piVar19[1] = 0;
        *(undefined8 *)((long)&local_160 + lVar34) = 0;
        lVar34 = lVar36;
      } while (lVar36 != -0x20);
      if ((int)uStack_188 - 1U < 0xfffffffe) {
        uStack_188 = uStack_188 & 0xffffffff;
        free(local_180);
      }
      if (bVar10) goto LAB_00564574;
      free(*(void **)(__ptr + 0xe));
    }
    free(__ptr);
  }
  __ptr = &DAT_0025d4b0;
LAB_00564574:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_005639dc:
  bVar10 = true;
  *(undefined4 *)((long)&local_e8 + lVar34 * 4) = *(undefined4 *)(lVar36 + 8);
  bVar9 = lVar34 != 0;
  lVar34 = 1;
  if (bVar9) goto LAB_00563a08;
  goto LAB_0056397c;
LAB_00563a08:
  bVar39 = 0;
LAB_00563ae4:
  uVar31 = __ptr[0x26];
  if ((int)uVar31 < 0) {
LAB_00563ce4:
    puVar25 = (uint *)&DAT_006870b0;
    bVar26 = 0;
    DAT_006870d0._0_4_ = 0;
    DAT_006870b8 = 0;
    DAT_006870b0 = 0;
    _DAT_006870c8 = 0;
    DAT_006870c0 = 0;
  }
  else {
    uVar38 = __ptr[0x27] + 1 & ((int)(__ptr[0x27] + 1) >> 0x1f ^ 0xffffffffU);
    uVar13 = uVar31;
    if (uVar31 < uVar38) {
      do {
        uVar13 = uVar13 + (uVar13 >> 1) + 8;
      } while (uVar13 < uVar38);
      if (0x71c71c7 < uVar13) {
LAB_00563cd8:
        __ptr[0x26] = ~uVar31;
        goto LAB_00563ce4;
      }
      lVar34 = FUN_00544488(__ptr + 0x26,uVar13);
      if (lVar34 == 0) {
        uVar31 = __ptr[0x26];
        if (uVar31 < uVar13) goto LAB_00563cd8;
      }
      else {
        *(long *)(__ptr + 0x28) = lVar34;
        __ptr[0x26] = uVar13;
      }
    }
    uVar31 = __ptr[0x27];
    if ((uVar31 < uVar38) && (uVar13 = (uVar38 - uVar31) * 0x24, uVar13 != 0)) {
      memset((void *)(*(long *)(__ptr + 0x28) + (ulong)uVar31 * 0x24),0,(ulong)uVar13);
    }
    puVar25 = (uint *)(*(long *)(__ptr + 0x28) + (ulong)(uVar38 - 1) * 0x24);
    __ptr[0x27] = uVar38;
    bVar26 = (byte)puVar25[8];
  }
  *puVar25 = *puVar33;
  *(undefined8 *)(puVar25 + 1) = local_e8;
  puVar25[3] = puVar33[5];
  puVar25[4] = puVar33[6];
  bVar26 = ((byte)puVar33[3] >> 1 & 2 | bVar26 & 0xfd) ^ 2;
  *(byte *)(puVar25 + 8) = bVar26;
  bVar3 = ((byte)puVar33[3] >> 1 & 4 | bVar26 & 0xfb) ^ 4;
  *(byte *)(puVar25 + 8) = bVar3;
  bVar26 = (byte)puVar33[3] >> 2 & 8;
  *(byte *)(puVar25 + 8) = bVar3 & 0xf7 | bVar26;
  bVar26 = bVar3 & 0xe7 | bVar26 | (byte)puVar33[3] >> 2 & 0x10;
  *(byte *)(puVar25 + 8) = bVar26;
  if (((puVar33[3] & 1) == 0) || (puVar33[2] != 1)) {
    uVar31 = (1 << (ulong)(uVar27 & 0x1f)) + (-1 << (ulong)(uVar35 & 0x1f));
    __ptr[0x25] = puVar33[4] << (ulong)(uVar35 & 0x1f) & uVar31 | __ptr[0x25];
    bVar26 = (byte)puVar25[8];
    uVar13 = uVar35;
  }
  else {
    uVar31 = 0x80000000;
    uVar27 = uVar35;
    uVar13 = 0x1f;
  }
  uVar35 = uVar27;
  puVar25[5] = uVar13;
  puVar25[6] = uVar31;
  *(byte *)(puVar25 + 8) = bVar26 & 0xfe | bVar39;
  puVar25[7] = 1 << (ulong)(uVar13 & 0x1f) & uVar31;
LAB_00563c5c:
  uVar30 = uVar30 + 1;
  if (uVar30 == uVar18) goto LAB_00563d04;
  goto LAB_005638fc;
}


// ===== 00564658  rive_hb_shape_plan_get_empty =====

undefined4 * rive_hb_shape_plan_get_empty(void)

{
  return &DAT_0025d4b0;
}


// ===== 00564664  rive_hb_shape_plan_reference =====

int * rive_hb_shape_plan_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 005646a0  rive_hb_shape_plan_destroy =====

void rive_hb_shape_plan_destroy(int *param_1)

{
  int iVar1;
  mutex *this;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    free(*(void **)(param_1 + 0xe));
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if (*(code **)(*(long *)(param_1 + 0x20) + 0x18) != (code *)0x0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x3e));
    }
    FUN_005402a0(param_1 + 0x22);
    FUN_0054a930(param_1 + 0x3a);
    lVar3 = 0;
    do {
      piVar4 = (int *)((long)param_1 + lVar3 + 0xd8);
      if (*piVar4 - 1U < 0xfffffffe) {
        *(undefined4 *)((long)param_1 + lVar3 + 0xdc) = 0;
        free(*(void **)((long)param_1 + lVar3 + 0xe0));
      }
      lVar2 = lVar3 + -0x10;
      piVar4[0] = 0;
      piVar4[1] = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0xe0) = 0;
      lVar3 = lVar2;
    } while (lVar2 != -0x20);
    lVar3 = 0;
    do {
      piVar4 = (int *)((long)param_1 + lVar3 + 0xb8);
      if (*piVar4 - 1U < 0xfffffffe) {
        *(undefined4 *)((long)param_1 + lVar3 + 0xbc) = 0;
        free(*(void **)((long)param_1 + lVar3 + 0xc0));
      }
      lVar2 = lVar3 + -0x10;
      piVar4[0] = 0;
      piVar4[1] = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0xc0) = 0;
      lVar3 = lVar2;
    } while (lVar2 != -0x20);
    if (param_1[0x26] - 1U < 0xfffffffe) {
      param_1[0x27] = 0;
      free(*(void **)(param_1 + 0x28));
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 005647ec  rive_hb_shape_plan_set_user_data =====

int * rive_hb_shape_plan_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 005648d4  rive_hb_shape_plan_get_user_data =====

void rive_hb_shape_plan_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 00564954  rive_hb_shape_plan_get_shaper =====

undefined8 rive_hb_shape_plan_get_shaper(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 0056495c  rive_hb_shape_plan_execute =====

undefined8
rive_hb_shape_plan_execute
          (int *param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  
  if (*(int *)(param_3 + 0x60) != 0) {
    if (*param_1 < 1) {
      return 0;
    }
    lVar1 = FUN_0053cb10(param_2 + 0xb0);
    if (lVar1 == 0) {
      return 0;
    }
    FUN_00540394(param_1,param_2,param_3,param_4,param_5);
  }
  if (*(int *)(param_3 + 0x30) == 1) {
    *(undefined4 *)(param_3 + 0x30) = 2;
  }
  return 1;
}


// ===== 005649f0  rive_hb_shape_plan_create_cached =====

void rive_hb_shape_plan_create_cached(void)

{
  rive_hb_shape_plan_create_cached2();
  return;
}


// ===== 00564a00  rive_hb_shape_plan_create_cached2 =====

int * rive_hb_shape_plan_create_cached2
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  int local_b0;
  int iStack_ac;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  uint local_88;
  int iStack_84;
  int local_80;
  long local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar8 = *(undefined8 **)(param_1 + 0x58);
  iVar7 = *param_1;
  do {
    if (iVar7 < 1) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
        piVar9 = (int *)rive_hb_shape_plan_create2
                                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        return piVar9;
      }
LAB_00564d08:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar9 = &DAT_0025d4b0;
    uVar2 = FUN_00562694(&local_b0,0,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((uVar2 & 1) == 0) {
LAB_00564cc4:
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return piVar9;
      }
      goto LAB_00564d08;
    }
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = puVar8;
      do {
        piVar9 = (int *)*puVar3;
        if ((((piVar9[6] == local_b0) && (piVar9[7] == iStack_ac)) &&
            (*(long *)(piVar9 + 8) == local_a8)) &&
           (((*(long *)(piVar9 + 10) == lStack_a0 && (*(long *)(piVar9 + 0xc) == local_98)) &&
            (piVar9[0x10] == local_88)))) {
          if (local_88 != 0) {
            piVar5 = (int *)(*(long *)(piVar9 + 0xe) + 8);
            piVar6 = (int *)(lStack_90 + 8);
            uVar2 = (ulong)local_88;
            do {
              if ((piVar5[-2] != piVar6[-2]) || (piVar5[-1] != piVar6[-1])) goto LAB_00564bb8;
              if (*piVar5 == 0) {
                iVar7 = piVar5[1];
                if (*piVar6 != 0) goto LAB_00564b5c;
                if ((iVar7 == -1) != (piVar6[1] == -1)) goto LAB_00564bb8;
              }
              else if (*piVar6 == 0) {
                iVar7 = piVar6[1];
LAB_00564b5c:
                if (iVar7 == -1) goto LAB_00564bb8;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          if (((piVar9[0x11] == iStack_84) && (piVar9[0x12] == local_80)) &&
             (*(long *)(piVar9 + 0x14) == local_78)) {
            iVar7 = *piVar9;
            goto joined_r0x00564d00;
          }
        }
LAB_00564bb8:
        puVar3 = (undefined8 *)puVar3[1];
      } while (puVar3 != (undefined8 *)0x0);
    }
    piVar9 = (int *)rive_hb_shape_plan_create2
                              (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    puVar3 = (undefined8 *)calloc(1,0x10);
    if (puVar3 == (undefined8 *)0x0) goto LAB_00564cc4;
    *puVar3 = piVar9;
    puVar3[1] = puVar8;
    puVar4 = (undefined8 *)FUN_003410d0(puVar8,puVar3,param_1 + 0x58);
    if (puVar4 == puVar8) {
      if (piVar9 != (int *)0x0) {
        iVar7 = *piVar9;
joined_r0x00564d00:
        if (iVar7 != 0) {
          FUN_00340fe0(1,piVar9);
        }
      }
      goto LAB_00564cc4;
    }
    rive_hb_shape_plan_destroy(piVar9);
    free(puVar3);
    puVar8 = *(undefined8 **)(param_1 + 0x58);
    iVar7 = *param_1;
  } while( true );
}


// ===== 00564d0c  rive_hb_shape_list_shapers =====

undefined * rive_hb_shape_list_shapers(void)

{
  undefined *__ptr;
  long lVar1;
  
  if (DAT_006870a0 == (undefined *)0x0) {
    do {
      __ptr = (undefined *)FUN_00564da4();
      if (__ptr == (undefined *)0x0) {
        lVar1 = FUN_003410d0(0,&DAT_0025d0f0,&DAT_006870a0);
        if (lVar1 == 0) {
          return &DAT_0025d0f0;
        }
      }
      else {
        lVar1 = FUN_003410d0(0,__ptr,&DAT_006870a0);
        if (lVar1 == 0) {
          return __ptr;
        }
        free(__ptr);
      }
    } while (DAT_006870a0 == (undefined *)0x0);
  }
  return DAT_006870a0;
}


// ===== 00564da4  FUN_00564da4 =====

undefined8 * FUN_00564da4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = (undefined8 *)calloc(2,8);
  if (puVar1 != (undefined8 *)0x0) {
    do {
      puVar3 = DAT_006870a8;
      if (DAT_006870a8 != (undefined *)0x0) break;
      lVar2 = FUN_003410d0(0,&DAT_00678ac8,&DAT_006870a8);
      puVar3 = &DAT_00678ac8;
    } while (lVar2 != 0);
    *puVar1 = puVar3;
    puVar1[1] = 0;
  }
  return puVar1;
}


// ===== 00564e18  rive_hb_shape_full =====

undefined4
rive_hb_shape_full(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  else {
    *(undefined2 *)(param_2 + 0xd0) = 0;
    *(undefined4 *)(param_2 + 0xd8) = 0;
    if (uVar1 >> 0x18 == 0) {
      uVar2 = uVar1 << 8;
      if (uVar2 < 0x10001) {
        uVar2 = 0x10000;
      }
      *(uint *)(param_2 + 0xdc) = uVar2;
      if (uVar1 >> 0x14 == 0) {
        uVar1 = uVar1 << 0xc;
        if (uVar1 < 0x10001) {
          uVar1 = 0x10000;
        }
        *(uint *)(param_2 + 0xe0) = uVar1;
      }
    }
    if ((*(byte *)(param_2 + 0x18) >> 5 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = rive_hb_buffer_create();
      rive_hb_buffer_append(lVar5,param_2,0,0xffffffff);
    }
    uVar4 = rive_hb_shape_plan_create_cached2
                      (*(undefined8 *)(param_1 + 0x20),param_2 + 0x38,param_3,param_4,
                       *(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c),param_5);
    uVar3 = rive_hb_shape_plan_execute(uVar4,param_1,param_2,param_3,param_4);
    rive_hb_shape_plan_destroy(uVar4);
    if (lVar5 != 0) {
      rive_hb_buffer_destroy(lVar5);
    }
    *(undefined2 *)(param_2 + 0xd0) = 0;
    *(undefined8 *)(param_2 + 0xdc) = DAT_0024e730;
  }
  return uVar3;
}


// ===== 00564f2c  rive_hb_shape =====

void rive_hb_shape(void)

{
  rive_hb_shape_full();
  return;
}


// ===== 00564f34  FUN_00564f34 =====

void FUN_00564f34(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = FUN_0051c474(param_1 + 0x70);
  puVar1 = &DAT_0025d4b0;
  if (5 < *(uint *)(lVar2 + 0x18)) {
    puVar1 = *(undefined4 **)(lVar2 + 0x10);
  }
  *(uint *)(param_1 + 0x18) =
       (uint)(*(ushort *)(puVar1 + 1) >> 8) | (*(ushort *)(puVar1 + 1) & 0xff00ff) << 8;
  return;
}


// ===== 00564f7c  FUN_00564f7c =====

void FUN_00564f7c(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_0051be58(param_1 + 0x68);
  puVar1 = &DAT_0025d4b0;
  if (0x35 < *(uint *)(lVar3 + 0x18)) {
    puVar1 = *(undefined4 **)(lVar3 + 0x10);
  }
  uVar2 = (uint)(*(ushort *)((long)puVar1 + 0x12) >> 8) |
          (*(ushort *)((long)puVar1 + 0x12) & 0xff00ff) << 8;
  if (0x3ff0 < uVar2 - 0x10) {
    uVar2 = 1000;
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  return;
}


// ===== 00564fd8  rive_hb_style_get_value =====

void rive_hb_style_get_value(long param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined4 local_7c;
  uint local_78 [5];
  uint local_64;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_2 == 0x536c6e74) {
    uVar8 = rive_hb_style_get_value(param_1,0x736c6e74);
    if (*(long *)(lVar5 + 0x28) == local_58) {
      tanf(((float)uVar8 * DAT_00251de4) / 180.0);
      return;
    }
    goto LAB_00565678;
  }
  lVar14 = *(long *)(param_1 + 0x20);
  lVar7 = FUN_0050c97c(lVar14 + 200);
  puVar3 = (ushort *)&DAT_0025d4b0;
  if (0xf < *(uint *)(lVar7 + 0x18)) {
    puVar3 = *(ushort **)(lVar7 + 0x10);
  }
  uVar8 = FUN_0055e2d8(puVar3,param_2,local_78);
  if ((uVar8 & 1) == 0) {
    if ((param_2 != 0x6f70737a) ||
       (uVar8 = (ulong)(uint)*(float *)(param_1 + 0x70), *(float *)(param_1 + 0x70) == 0.0)) {
      lVar7 = FUN_0053ff98(lVar14 + 0xa0);
      puVar3 = (ushort *)&DAT_0025d4b0;
      if (0x13 < *(uint *)(lVar7 + 0x18)) {
        puVar3 = *(ushort **)(lVar7 + 0x10);
      }
      uVar10 = (uint)(puVar3[3] >> 8) | (puVar3[3] & 0xff00ff) << 8;
      if (uVar10 != 0) {
        uVar8 = (ulong)(byte)puVar3[4] * 0x1000000;
        uVar4 = *(uint *)((long)puVar3 +
                         (uVar8 | (ulong)*(byte *)((long)puVar3 + 9) << 0x10 |
                          (ulong)(byte)puVar3[5] << 8 | (ulong)*(byte *)((long)puVar3 + 0xb)));
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        if ((uVar4 >> 0x10 | uVar4 << 0x10) == param_2) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          lVar7 = (long)puVar3 +
                  uVar8 + (ulong)*(byte *)((long)puVar3 + 9) * 0x10000 +
                  (ulong)(byte)puVar3[5] * 0x100 + (ulong)*(byte *)((long)puVar3 + 0xb) + 0xb;
          do {
            if ((ulong)uVar10 - 1 == uVar12) goto LAB_00565210;
            puVar1 = (uint *)(lVar7 + -3);
            lVar7 = lVar7 + 8;
            uVar12 = uVar12 + 1;
            uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
          } while ((uVar4 >> 0x10 | uVar4 << 0x10) != param_2);
          if (uVar10 <= uVar12) goto LAB_00565210;
        }
        uVar10 = (uint)(puVar3[6] >> 8) | (puVar3[6] & 0xff00ff) << 8;
        uVar8 = (ulong)uVar10;
        if (uVar10 != 0) {
          lVar7 = (long)puVar3 +
                  (ulong)(byte)puVar3[7] * 0x1000000 +
                  (ulong)*(byte *)((long)puVar3 + 0xf) * 0x10000 +
                  (ulong)(byte)puVar3[8] * 0x100 + (ulong)*(byte *)((long)puVar3 + 0x11) + 1;
          do {
            uVar10 = (*(uint *)(puVar3 + 7) & 0xff00ff00) >> 8 |
                     (*(uint *)(puVar3 + 7) & 0xff00ff) << 8;
            uVar4 = (uint)(*(ushort *)(lVar7 + -1) >> 8) | (*(ushort *)(lVar7 + -1) & 0xff00ff) << 8
            ;
            puVar2 = (ushort *)&DAT_0025d4b0;
            if (uVar4 != 0) {
              puVar2 = (ushort *)
                       ((long)puVar3 + (ulong)uVar4 + (ulong)(uVar10 >> 0x10 | uVar10 << 0x10));
            }
            uVar10 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
            if (((uVar10 == 3) || (uVar10 == 2)) || (uVar10 == 1)) {
              uVar10 = (uint)(puVar2[1] >> 8) | (puVar2[1] & 0xff00ff) << 8;
            }
            else {
              uVar10 = 0xffffffff;
            }
            if (uVar10 == (uint)uVar12) {
              uVar8 = 0;
              uVar10 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
              if (uVar10 < 3) {
                if ((uVar10 != 1) && (uVar10 != 2)) goto LAB_00565194;
LAB_005655a0:
                uVar10 = (uint)(byte)puVar2[4] << 0x18 | (uint)*(byte *)((long)puVar2 + 9) << 0x10 |
                         (uint)(byte)puVar2[5] << 8;
                pbVar13 = (byte *)((long)puVar2 + 0xb);
              }
              else {
                if (uVar10 == 3) goto LAB_005655a0;
                if (uVar10 != 4) goto LAB_00565194;
                puVar3 = puVar2 + (uVar12 & 0xffffffff) * 3 + 4;
                if (((uint)(puVar2[1] >> 8) | (puVar2[1] & 0xff00ff) << 8) <= (uint)uVar12) {
                  puVar3 = (ushort *)&DAT_0025d4b0;
                }
                pbVar13 = (byte *)((long)puVar3 + 5);
                uVar10 = (uint)(byte)puVar3[1] << 0x18 | (uint)*(byte *)((long)puVar3 + 3) << 0x10 |
                         (uint)(byte)puVar3[2] << 8;
              }
              uVar8 = (ulong)(uint)((float)(int)(uVar10 | *pbVar13) / 65536.0);
              goto LAB_00565194;
            }
            uVar8 = uVar8 - 1;
            lVar7 = lVar7 + 2;
          } while (uVar8 != 0);
        }
      }
LAB_00565210:
      uVar8 = 0;
      if ((int)param_2 < 0x736c6e74) {
        if (param_2 == 0x6974616c) {
          lVar7 = FUN_0053fa38(0,lVar14 + 0x90);
          uVar8 = 0x3f800000;
          puVar3 = (ushort *)&DAT_0025d4b0;
          if (0x4d < *(uint *)(lVar7 + 0x18)) {
            puVar3 = *(ushort **)(lVar7 + 0x10);
          }
          if ((*(byte *)((long)puVar3 + 0x3f) & 1) == 0) {
            lVar7 = FUN_0051be58(0x3f800000,lVar14 + 0x68);
            puVar3 = (ushort *)&DAT_0025d4b0;
            if (0x35 < *(uint *)(lVar7 + 0x18)) {
              puVar3 = *(ushort **)(lVar7 + 0x10);
            }
            uVar10 = 0x3f800000;
            if ((*(byte *)((long)puVar3 + 0x2d) & 2) == 0) {
              uVar10 = 0;
            }
            uVar8 = (ulong)uVar10;
          }
        }
        else if (param_2 == 0x6f70737a) {
          lVar7 = FUN_0053fa38(0,lVar14 + 0x90);
          puVar3 = (ushort *)&DAT_0025d4b0;
          if (0x4d < *(uint *)(lVar7 + 0x18)) {
            puVar3 = *(ushort **)(lVar7 + 0x10);
          }
          puVar2 = puVar3 + 0x30;
          if (((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8) < 5) {
            puVar2 = (ushort *)&DAT_0025d4b0;
          }
          uVar10 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
          uVar4 = (uint)(puVar2[1] >> 8) | (puVar2[1] & 0xff00ff) << 8;
          if ((uVar10 - 1 < 0xfffe && uVar10 < uVar4) && uVar4 - 2 < 0xfffe) {
            uVar8 = (ulong)(uint)((float)(uVar4 + uVar10) / 2.0);
          }
          else {
            iVar6 = rive_hb_ot_layout_get_size_params(lVar14,&local_7c,0,0,0,0);
            if (iVar6 != 0) {
              fVar16 = 10.0;
              fVar15 = (float)NEON_ucvtf(local_7c);
              goto LAB_005653b4;
            }
            uVar8 = 0x41400000;
          }
        }
      }
      else if (param_2 == 0x736c6e74) {
        puVar9 = *(undefined8 **)(lVar14 + 0x98);
        if (*(undefined8 **)(lVar14 + 0x98) == (undefined8 *)0x0) {
          do {
            puVar9 = (undefined8 *)&DAT_0025d4b0;
            if (*(long *)(lVar14 + 0x60) == 0) break;
            puVar9 = (undefined8 *)FUN_00565684();
            if (puVar9 == (undefined8 *)0x0) {
              puVar9 = (undefined8 *)&DAT_0025d4b0;
            }
            lVar7 = FUN_003410d0(0,puVar9,(undefined8 *)(lVar14 + 0x98));
            if (lVar7 == 0) break;
            FUN_00511020(puVar9);
            puVar9 = *(undefined8 **)(lVar14 + 0x98);
          } while (puVar9 == (undefined8 *)0x0);
        }
        fVar16 = *(float *)(param_1 + 0x48);
        puVar3 = (ushort *)&DAT_0025d4b0;
        if ((ushort *)*puVar9 != (ushort *)0x0) {
          puVar3 = (ushort *)*puVar9;
        }
        puVar2 = (ushort *)&DAT_0025d4b0;
        if (0x1f < *(uint *)(puVar3 + 0xc)) {
          puVar2 = *(ushort **)(puVar3 + 8);
        }
        uVar10 = (*(uint *)(puVar2 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar2 + 2) & 0xff00ff) << 8
        ;
        fVar15 = (float)(int)(uVar10 >> 0x10 | uVar10 << 0x10) / 65536.0;
        uVar8 = (ulong)(uint)fVar15;
        if (fVar16 != 0.0) {
          fVar15 = tanf((fVar15 * DAT_00251de4) / 180.0);
          fVar15 = atanf(fVar16 + fVar15);
          fVar15 = fVar15 * -180.0;
          fVar16 = DAT_00251de8;
LAB_005653b4:
          uVar8 = (ulong)(uint)(fVar15 / fVar16);
        }
      }
      else if (param_2 == 0x77647468) {
        lVar7 = FUN_0053fa38(0,lVar14 + 0x90);
        puVar3 = (ushort *)&DAT_0025d4b0;
        if (0x4d < *(uint *)(lVar7 + 0x18)) {
          puVar3 = *(ushort **)(lVar7 + 0x10);
        }
        uVar8 = FUN_0053fadc(puVar3);
        if ((uVar8 & 1) == 0) {
          lVar7 = FUN_0051be58(lVar14 + 0x68);
          puVar3 = (ushort *)&DAT_0025d4b0;
          if (0x35 < *(uint *)(lVar7 + 0x18)) {
            puVar3 = *(ushort **)(lVar7 + 0x10);
          }
          if ((*(byte *)((long)puVar3 + 0x2d) >> 5 & 1) == 0) {
            lVar7 = FUN_0051be58(lVar14 + 0x68);
            puVar3 = (ushort *)&DAT_0025d4b0;
            if (0x35 < *(uint *)(lVar7 + 0x18)) {
              puVar3 = *(ushort **)(lVar7 + 0x10);
            }
            uVar10 = 0x42c80000;
            if ((*(byte *)((long)puVar3 + 0x2d) & 0x40) != 0) {
              uVar10 = 0x42fa0000;
            }
            uVar8 = (ulong)uVar10;
            goto LAB_00565194;
          }
          uVar10 = 0x42960000;
        }
        else {
          lVar7 = FUN_0053fa38(lVar14 + 0x90);
          puVar3 = (ushort *)&DAT_0025d4b0;
          if (0x4d < *(uint *)(lVar7 + 0x18)) {
            puVar3 = *(ushort **)(lVar7 + 0x10);
          }
          uVar10 = ((uint)(puVar3[3] >> 8) | (puVar3[3] & 0xff00ff) << 8) - 1;
          if ((uVar10 & 0xffff) < 9) {
            uVar8 = (ulong)uVar10 & 0xffff;
            puVar11 = &DAT_0025d118;
            goto LAB_00565064;
          }
          uVar10 = 0x42c80000;
        }
        uVar8 = (ulong)uVar10;
      }
      else if (param_2 == 0x77676874) {
        lVar7 = FUN_0053fa38(0,lVar14 + 0x90);
        puVar3 = (ushort *)&DAT_0025d4b0;
        if (0x4d < *(uint *)(lVar7 + 0x18)) {
          puVar3 = *(ushort **)(lVar7 + 0x10);
        }
        uVar8 = FUN_0053fadc(puVar3);
        if ((uVar8 & 1) == 0) {
          lVar7 = FUN_0051be58(lVar14 + 0x68);
          puVar3 = (ushort *)&DAT_0025d4b0;
          if (0x35 < *(uint *)(lVar7 + 0x18)) {
            puVar3 = *(ushort **)(lVar7 + 0x10);
          }
          uVar10 = 400;
          if ((*(byte *)((long)puVar3 + 0x2d) & 1) != 0) {
            uVar10 = 700;
          }
        }
        else {
          lVar7 = FUN_0053fa38(lVar14 + 0x90);
          puVar3 = (ushort *)&DAT_0025d4b0;
          if (0x4d < *(uint *)(lVar7 + 0x18)) {
            puVar3 = *(ushort **)(lVar7 + 0x10);
          }
          uVar10 = (uint)(puVar3[2] >> 8) | (puVar3[2] & 0xff00ff) << 8;
        }
        uVar8 = (ulong)(uint)(float)uVar10;
      }
    }
  }
  else {
    uVar8 = (ulong)local_78[0];
    if (local_78[0] < *(uint *)(param_1 + 0x7c)) {
      puVar11 = *(undefined **)(param_1 + 0x88);
LAB_00565064:
      uVar8 = (ulong)*(uint *)(puVar11 + uVar8 * 4);
    }
    else {
      uVar8 = (ulong)local_64;
    }
  }
LAB_00565194:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_00565678:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 00565684  FUN_00565684 =====

undefined8 * FUN_00565684(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  
  puVar4 = (undefined8 *)calloc(1,0x38);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00564f34(param_1);
  }
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar5 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x706f7374,*(undefined8 *)(param_1 + 0x28)),
     piVar5 == (int *)0x0)) {
    piVar5 = &DAT_0025d4b0;
  }
  if (*piVar5 != 0) {
    FUN_00340fe0(1,piVar5);
  }
  uVar3 = piVar5[6];
  puVar7 = *(uint **)(piVar5 + 4);
  uVar9 = 0x3fffffff;
  if (uVar3 >> 0x1a == 0) {
    uVar9 = uVar3 << 6;
    if (uVar9 < 0x4001) {
      uVar9 = 0x4000;
    }
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
  }
  piVar12 = piVar5;
  if (puVar7 != (uint *)0x0) {
    if (0x1f < uVar3) {
      uVar11 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
      if (uVar11 == 0x10000) {
LAB_005657b8:
        rive_hb_blob_destroy(piVar5);
      }
      else {
        if (uVar11 == 0x20000) {
          if (((0x21 < uVar3) &&
              (uVar11 = (uint)(byte)puVar7[8] << 9 | (uint)*(byte *)((long)puVar7 + 0x21) << 1,
              uVar11 <= uVar3 - 0x22)) && (uVar11 < uVar9)) goto LAB_005657b8;
          uVar9 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
          uVar11 = uVar9 >> 0x10 | uVar9 << 0x10;
        }
        rive_hb_blob_destroy(piVar5);
        if (uVar11 != 0x30000) goto LAB_00565780;
      }
      if ((*(byte *)(piVar5 + 1) & 1) != 0) {
        *(undefined1 *)(piVar5 + 1) = 0;
      }
      goto LAB_005657cc;
    }
    rive_hb_blob_destroy(piVar5);
LAB_00565780:
    piVar12 = &DAT_0025d4b0;
  }
  rive_hb_blob_destroy(piVar5);
  piVar5 = piVar12;
LAB_005657cc:
  uVar9 = piVar5[6];
  puVar8 = *(uint **)(piVar5 + 4);
  *puVar4 = piVar5;
  puVar7 = &DAT_0025d4b0;
  if (0x1f < uVar9) {
    puVar7 = puVar8;
  }
  uVar3 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  *(uint *)(puVar4 + 1) = uVar3;
  if (uVar3 == 0x20000) {
    puVar7 = &DAT_0025d4b0;
    if (0x1f < (uint)piVar5[6]) {
      puVar7 = *(uint **)(piVar5 + 4);
    }
    bVar2 = *(byte *)((long)puVar7 + 0x21);
    puVar8 = puVar7 + 8;
    uVar3 = *puVar8;
    puVar4[2] = puVar8;
    puVar4[5] = (long)puVar8 + ((ulong)(byte)uVar3 << 9 | (ulong)bVar2 << 1) + 2;
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 == 0xffffffff) {
      uVar3 = FUN_00564f34(param_1);
    }
    if (uVar9 >> 3 <= uVar3) {
      uVar3 = uVar9 >> 3;
    }
    FUN_00506734(puVar4 + 3,uVar3,0);
    uVar3 = *(uint *)((long)puVar4 + 0x1c);
    if (uVar3 < 0xffff) {
      pbVar10 = (byte *)puVar4[5];
      pbVar1 = (byte *)((long)puVar7 + (ulong)uVar9);
      if (pbVar10 < pbVar1) {
        while (pbVar10 + *pbVar10 < pbVar1) {
          uVar13 = puVar4[5];
          if ((int)uVar3 < *(int *)(puVar4 + 3)) {
LAB_005658ac:
            *(int *)(puVar4[4] + (ulong)uVar3 * 4) = (int)pbVar10 - (int)uVar13;
            uVar3 = uVar3 + 1;
            *(uint *)((long)puVar4 + 0x1c) = uVar3;
          }
          else {
            uVar6 = FUN_00506734(puVar4 + 3,uVar3 + 1,0);
            if ((uVar6 & 1) != 0) {
              uVar3 = *(uint *)((long)puVar4 + 0x1c);
              goto LAB_005658ac;
            }
            uVar3 = *(uint *)((long)puVar4 + 0x1c);
            DAT_006870b0._0_4_ = 0;
          }
          if (0xfffe < uVar3) {
            return puVar4;
          }
          pbVar10 = pbVar10 + (ulong)*pbVar10 + 1;
          if (pbVar1 <= pbVar10) {
            return puVar4;
          }
        }
      }
    }
  }
  return puVar4;
}


// ===== 00565928  rive_hb_unicode_funcs_get_default =====

undefined4 * rive_hb_unicode_funcs_get_default(void)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (DAT_00687330 == (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)FUN_005661ec();
      if (puVar1 == (undefined4 *)0x0) {
        lVar2 = FUN_003410d0(0,&DAT_00686738,&DAT_00687330);
        if (lVar2 == 0) {
          return &DAT_00686738;
        }
      }
      else {
        lVar2 = FUN_003410d0(0,puVar1,&DAT_00687330);
        if (lVar2 == 0) {
          return puVar1;
        }
        if (puVar1 != &DAT_00686738) {
          rive_hb_unicode_funcs_destroy(puVar1);
        }
      }
    } while (DAT_00687330 == (undefined4 *)0x0);
  }
  return DAT_00687330;
}


// ===== 005659c8  rive_hb_unicode_funcs_create =====

int * rive_hb_unicode_funcs_create(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  piVar1 = (int *)calloc(1,0xa8);
  piVar2 = &DAT_00686738;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = 1;
    if (param_1 != (int *)0x0) {
      piVar2 = param_1;
    }
    piVar1[2] = 0;
    piVar1[3] = 0;
    if ((*(byte *)(piVar2 + 1) & 1) != 0) {
      *(undefined1 *)(piVar2 + 1) = 0;
    }
    if (*piVar2 != 0) {
      FUN_00340fe0(1,piVar2);
    }
    uVar4 = *(undefined8 *)(piVar2 + 8);
    uVar3 = *(undefined8 *)(piVar2 + 6);
    uVar6 = *(undefined8 *)(piVar2 + 0xc);
    uVar5 = *(undefined8 *)(piVar2 + 10);
    uVar8 = *(undefined8 *)(piVar2 + 0x10);
    uVar7 = *(undefined8 *)(piVar2 + 0xe);
    *(int **)(piVar1 + 4) = piVar2;
    *(undefined8 *)(piVar1 + 8) = uVar4;
    *(undefined8 *)(piVar1 + 6) = uVar3;
    uVar4 = *(undefined8 *)(piVar2 + 0x14);
    uVar3 = *(undefined8 *)(piVar2 + 0x12);
    *(undefined8 *)(piVar1 + 0xc) = uVar6;
    *(undefined8 *)(piVar1 + 10) = uVar5;
    uVar6 = *(undefined8 *)(piVar2 + 0x18);
    uVar5 = *(undefined8 *)(piVar2 + 0x16);
    *(undefined8 *)(piVar1 + 0x14) = uVar4;
    *(undefined8 *)(piVar1 + 0x12) = uVar3;
    uVar4 = *(undefined8 *)(piVar2 + 0x1c);
    uVar3 = *(undefined8 *)(piVar2 + 0x1a);
    *(undefined8 *)(piVar1 + 0x10) = uVar8;
    *(undefined8 *)(piVar1 + 0xe) = uVar7;
    *(undefined8 *)(piVar1 + 0x18) = uVar6;
    *(undefined8 *)(piVar1 + 0x16) = uVar5;
    *(undefined8 *)(piVar1 + 0x1c) = uVar4;
    *(undefined8 *)(piVar1 + 0x1a) = uVar3;
    piVar2 = piVar1;
  }
  return piVar2;
}


// ===== 00565a88  FUN_00565a88 =====

undefined8 FUN_00565a88(void)

{
  return 0;
}


// ===== 00565a90  FUN_00565a90 =====

undefined8 FUN_00565a90(void)

{
  return 7;
}


// ===== 00565a98  FUN_00565a98 =====

undefined4 FUN_00565a98(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}


// ===== 00565aa0  FUN_00565aa0 =====

undefined8 FUN_00565aa0(void)

{
  return 0x5a7a7a7a;
}


// ===== 00565aac  FUN_00565aac =====

undefined8 FUN_00565aac(void)

{
  return 0;
}


// ===== 00565ab4  FUN_00565ab4 =====

undefined8 FUN_00565ab4(void)

{
  return 0;
}


// ===== 00565abc  rive_hb_unicode_funcs_get_empty =====

undefined4 * rive_hb_unicode_funcs_get_empty(void)

{
  return &DAT_00686738;
}


// ===== 00565ac8  rive_hb_unicode_funcs_make_immutable =====

void rive_hb_unicode_funcs_make_immutable(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 00565ad8  rive_hb_unicode_funcs_reference =====

int * rive_hb_unicode_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 00565b14  rive_hb_unicode_funcs_destroy =====

void rive_hb_unicode_funcs_destroy(int *param_1)

{
  int iVar1;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*(code **)(param_1 + 0x1e) != (code *)0x0) {
      (**(code **)(param_1 + 0x1e))(*(undefined8 *)(param_1 + 0x12));
    }
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x14));
    }
    if (*(code **)(param_1 + 0x22) != (code *)0x0) {
      (**(code **)(param_1 + 0x22))(*(undefined8 *)(param_1 + 0x16));
    }
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(*(undefined8 *)(param_1 + 0x18));
    }
    if (*(code **)(param_1 + 0x26) != (code *)0x0) {
      (**(code **)(param_1 + 0x26))(*(undefined8 *)(param_1 + 0x1a));
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1c));
    }
    rive_hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 4));
    free(param_1);
    return;
  }
  return;
}


// ===== 00565c00  rive_hb_unicode_funcs_set_user_data =====

int * rive_hb_unicode_funcs_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 00565ce8  rive_hb_unicode_funcs_get_user_data =====

void rive_hb_unicode_funcs_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 00565d68  rive_hb_unicode_funcs_is_immutable =====

byte rive_hb_unicode_funcs_is_immutable(long param_1)

{
  return (*(byte *)(param_1 + 4) ^ 0xff) & 1;
}


// ===== 00565d78  rive_hb_unicode_funcs_get_parent =====

undefined4 * rive_hb_unicode_funcs_get_parent(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00686738;
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
  }
  return puVar1;
}


// ===== 00565d90  rive_hb_unicode_funcs_set_combining_class_func =====

void rive_hb_unicode_funcs_set_combining_class_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00565dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      param_3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
    }
    if (*(code **)(param_1 + 0x78) != (code *)0x0) {
      (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0x48));
    }
    if (param_2 == 0) {
      param_2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    }
    *(long *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x48) = param_3;
    *(code **)(param_1 + 0x78) = UNRECOVERED_JUMPTABLE;
  }
  return;
}


// ===== 00565e28  rive_hb_unicode_funcs_set_general_category_func =====

void rive_hb_unicode_funcs_set_general_category_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00565e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      param_3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
    }
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x50));
    }
    if (param_2 == 0) {
      param_2 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
    }
    *(long *)(param_1 + 0x20) = param_2;
    *(undefined8 *)(param_1 + 0x50) = param_3;
    *(code **)(param_1 + 0x80) = UNRECOVERED_JUMPTABLE;
  }
  return;
}


// ===== 00565ec0  rive_hb_unicode_funcs_set_mirroring_func =====

void rive_hb_unicode_funcs_set_mirroring_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00565ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      param_3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
    }
    if (*(code **)(param_1 + 0x88) != (code *)0x0) {
      (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x58));
    }
    if (param_2 == 0) {
      param_2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    }
    *(long *)(param_1 + 0x28) = param_2;
    *(undefined8 *)(param_1 + 0x58) = param_3;
    *(code **)(param_1 + 0x88) = UNRECOVERED_JUMPTABLE;
  }
  return;
}


// ===== 00565f58  rive_hb_unicode_funcs_set_script_func =====

void rive_hb_unicode_funcs_set_script_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00565f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      param_3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
    }
    if (*(code **)(param_1 + 0x90) != (code *)0x0) {
      (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0x60));
    }
    if (param_2 == 0) {
      param_2 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    }
    *(long *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x60) = param_3;
    *(code **)(param_1 + 0x90) = UNRECOVERED_JUMPTABLE;
  }
  return;
}


// ===== 00565ff0  rive_hb_unicode_funcs_set_compose_func =====

void rive_hb_unicode_funcs_set_compose_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00566020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      param_3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
    }
    if (*(code **)(param_1 + 0x98) != (code *)0x0) {
      (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0x68));
    }
    if (param_2 == 0) {
      param_2 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
    }
    *(long *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x68) = param_3;
    *(code **)(param_1 + 0x98) = UNRECOVERED_JUMPTABLE;
  }
  return;
}


// ===== 00566088  rive_hb_unicode_funcs_set_decompose_func =====

void rive_hb_unicode_funcs_set_decompose_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005660b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      param_3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
    }
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x70));
    }
    if (param_2 == 0) {
      param_2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
    }
    *(long *)(param_1 + 0x40) = param_2;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    *(code **)(param_1 + 0xa0) = UNRECOVERED_JUMPTABLE;
  }
  return;
}


// ===== 00566120  rive_hb_unicode_combining_class =====

void rive_hb_unicode_combining_class(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00566128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1,param_2,*(undefined8 *)(param_1 + 0x48));
  return;
}


// ===== 0056612c  rive_hb_unicode_general_category =====

void rive_hb_unicode_general_category(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00566134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(param_1,param_2,*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 00566138  rive_hb_unicode_mirroring =====

void rive_hb_unicode_mirroring(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00566140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
  return;
}


// ===== 00566144  rive_hb_unicode_script =====

void rive_hb_unicode_script(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0056614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1,param_2,*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 00566150  rive_hb_unicode_compose =====

undefined8 rive_hb_unicode_compose(long param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00566164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x38))();
    return uVar1;
  }
  return 0;
}


// ===== 00566170  rive_hb_unicode_decompose =====

void rive_hb_unicode_decompose
               (long param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x40);
  *param_3 = param_2;
  *param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00566180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00566184  FUN_00566184 =====

byte FUN_00566184(uint param_1)

{
  if (param_1 < 0x1fffe) {
    return (byte)(&DAT_0025d31c)
                 [((ulong)param_1 & 0x38 |
                  (ulong)(byte)(&DAT_0025d27c)
                               [(ulong)(param_1 >> 6) & 0xf |
                                ((ulong)((byte)(&DAT_0025d23c)[param_1 >> 0xb] >>
                                        ((ulong)(param_1 >> 8) & 4)) & 0xf) << 4] << 6) >> 3] >>
           (ulong)(param_1 & 7) & 1;
  }
  return 0;
}


// ===== 005661ec  FUN_005661ec =====

long FUN_005661ec(void)

{
  long lVar1;
  
  lVar1 = rive_hb_unicode_funcs_create(0);
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    if (*(code **)(lVar1 + 0x78) != (code *)0x0) {
      (**(code **)(lVar1 + 0x78))(*(undefined8 *)(lVar1 + 0x48));
    }
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(code **)(lVar1 + 0x18) = FUN_00566328;
    *(undefined8 *)(lVar1 + 0x78) = 0;
  }
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    if (*(code **)(lVar1 + 0x80) != (code *)0x0) {
      (**(code **)(lVar1 + 0x80))(*(undefined8 *)(lVar1 + 0x50));
    }
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(code **)(lVar1 + 0x20) = FUN_005663b0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
  }
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    if (*(code **)(lVar1 + 0x88) != (code *)0x0) {
      (**(code **)(lVar1 + 0x88))(*(undefined8 *)(lVar1 + 0x58));
    }
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(code **)(lVar1 + 0x28) = FUN_00566428;
    *(undefined8 *)(lVar1 + 0x88) = 0;
  }
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    if (*(code **)(lVar1 + 0x90) != (code *)0x0) {
      (**(code **)(lVar1 + 0x90))(*(undefined8 *)(lVar1 + 0x60));
    }
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(code **)(lVar1 + 0x30) = FUN_005664b8;
    *(undefined8 *)(lVar1 + 0x90) = 0;
  }
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    if (*(code **)(lVar1 + 0x98) != (code *)0x0) {
      (**(code **)(lVar1 + 0x98))(*(undefined8 *)(lVar1 + 0x68));
    }
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(code **)(lVar1 + 0x38) = FUN_00566564;
    *(undefined8 *)(lVar1 + 0x98) = 0;
  }
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    if (*(code **)(lVar1 + 0xa0) != (code *)0x0) {
      (**(code **)(lVar1 + 0xa0))(*(undefined8 *)(lVar1 + 0x70));
    }
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(code **)(lVar1 + 0x40) = FUN_005666c4;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
  }
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    *(undefined1 *)(lVar1 + 4) = 0;
  }
  return lVar1;
}


// ===== 00566328  FUN_00566328 =====

undefined1 FUN_00566328(undefined8 param_1,uint param_2)

{
  if (param_2 < 0x1e94b) {
    return (&DAT_0025f3bb)
           [(ulong)param_2 & 3 |
            (ulong)(byte)(&DAT_0025f174)
                         [(ulong)(param_2 >> 2) & 3 |
                          (ulong)(byte)(&DAT_0025ef97)
                                       [(ulong)(byte)(&DAT_0025ee29)
                                                     [(ulong)(byte)(&DAT_0025ed34)[param_2 >> 9] <<
                                                      3 | (ulong)(param_2 >> 6) & 7] << 2 |
                                        (ulong)(param_2 >> 4) & 3] << 2] << 2];
  }
  return 0;
}


// ===== 005663b0  FUN_005663b0 =====

undefined1 FUN_005663b0(undefined8 param_1,uint param_2)

{
  if (param_2 >> 0x10 < 0x11) {
    return (&DAT_0025ebd8)
           [(ulong)param_2 & 1 |
            (ulong)(byte)(&UNK_0025dbb8)
                         [(ulong)*(ushort *)
                                  (&DAT_00260d82 +
                                  (((ulong)(param_2 >> 4) & 7) << 1 |
                                  (ulong)(byte)(&DAT_0025d950)
                                               [(ulong)(param_2 >> 7) & 0xf |
                                                (ulong)(byte)(&DAT_0025d730)[param_2 >> 0xb] << 4]
                                  << 4)) + ((ulong)(param_2 >> 1) & 7)] << 1];
  }
  return 2;
}


// ===== 00566428  FUN_00566428 =====

int FUN_00566428(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0xff64) {
    iVar1 = (int)*(short *)(&DAT_00263562 +
                           (((ulong)param_2 & 1) +
                           (ulong)(byte)(&UNK_0025f736)
                                        [((ulong)(param_2 >> 1) & 3) +
                                         (ulong)(byte)(&UNK_0025f651)
                                                      [((ulong)(param_2 >> 3) & 7) +
                                                       (ulong)(byte)(&DAT_0025f5f3)
                                                                    [((ulong)((byte)(&DAT_0025f5b3)
                                                                                    [param_2 >> 10]
                                                                             >> ((ulong)(param_2 >>
                                                                                        7) & 4)) &
                                                                     0xf) << 3 |
                                                                     (ulong)(param_2 >> 6) & 7]]]) *
                           2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1 + param_2;
}


// ===== 005664b8  FUN_005664b8 =====

undefined4 FUN_005664b8(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_2 >> 9 < 0x701) {
    uVar1 = (ulong)(byte)(&DAT_00260497)
                         [(ulong)param_2 & 3 |
                          (ulong)(byte)(&DAT_002600a7)
                                       [(ulong)(byte)(&DAT_0025facf)
                                                     [(ulong)(byte)(&DAT_0025f913)
                                                                   [(ulong)(byte)(&DAT_0025f84b)
                                                                                 [((ulong)((byte)(&
                                                  DAT_0025f82e)[param_2 >> 0xf] >>
                                                  ((ulong)(param_2 >> 0xc) & 4)) & 0xf) << 4 |
                                                  (ulong)(param_2 >> 10) & 0xf] << 3 |
                                                  (ulong)(param_2 >> 7) & 7] << 3 |
                                                  (ulong)(param_2 >> 4) & 7] << 2 |
                                        (ulong)(param_2 >> 2) & 3] << 2];
  }
  else {
    uVar1 = 2;
  }
  return *(undefined4 *)(&DAT_0026361c + uVar1 * 4);
}


// ===== 00566564  FUN_00566564 =====

undefined8 FUN_00566564(undefined8 param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 - 0xac00 >> 2 < 0xae9 && param_3 - 0x11a8 < 0x1b) {
    uVar3 = param_2 - 0xac00 & 0xffff;
    if (0x9249249 < (uVar3 * -0x49249249 >> 2 | uVar3 * -0x40000000)) goto LAB_005665e4;
    uVar3 = (param_2 + param_3) - 0x11a7;
  }
  else {
    if ((0x12 < param_2 - 0x1100) || (0x14 < param_3 - 0x1161)) {
      if ((param_2 < 0x800) && ((param_3 & 0xffffff80) == 0x300)) {
        iVar5 = 0;
        iVar6 = 0x27d;
        uVar3 = param_2 << 0x15 | (param_3 & 0x7f) << 0xe;
        do {
          uVar2 = (uint)(iVar6 + iVar5) >> 1;
          uVar1 = *(uint *)(&DAT_002638dc + (ulong)uVar2 * 4) & 0xffffc000;
          if (uVar1 <= uVar3) {
            if (uVar1 > uVar3 || uVar3 == uVar1) {
              uVar3 = *(uint *)(&DAT_002638dc + (ulong)uVar2 * 4) & 0x3fff;
              if (uVar3 == 0) {
                return 0;
              }
              goto LAB_005666b8;
            }
            iVar5 = uVar2 + 1;
          }
          else {
            iVar6 = uVar2 - 1;
          }
          if (iVar6 < iVar5) {
            return 0;
          }
        } while( true );
      }
LAB_005665e4:
      iVar5 = 0;
      iVar6 = 0x197;
      uVar4 = (ulong)param_3 << 0x15 | (ulong)param_2 << 0x2a;
      do {
        uVar3 = (uint)(iVar6 + iVar5) >> 1;
        uVar7 = *(ulong *)(&DAT_002642d8 + (ulong)uVar3 * 8);
        uVar8 = uVar7 & 0x7fffffffffe00000;
        if (uVar8 <= uVar4) {
          if (uVar8 > uVar4 || uVar4 == uVar8) {
            uVar3 = (uint)uVar7 & 0x1fffff;
            if ((uVar7 & 0x1fffff) == 0) {
              return 0;
            }
            goto LAB_005666b8;
          }
          iVar5 = uVar3 + 1;
        }
        else {
          iVar6 = uVar3 - 1;
        }
        if (iVar6 < iVar5) {
          return 0;
        }
      } while( true );
    }
    uVar3 = (param_3 * 0x1c + param_2 * 0x24c) - 0x28469c;
  }
LAB_005666b8:
  *param_4 = uVar3;
  return 1;
}


// ===== 005666c4  FUN_005666c4 =====

undefined8 FUN_005666c4(undefined8 param_1,uint param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 - 0xac00;
  if (uVar4 >> 2 < 0xae9) {
    uVar2 = uVar4 + ((uVar4 >> 2 & 0x3fff) / 7) * -0x1c;
    if ((uVar2 & 0xffff) == 0) {
      param_2 = (uVar4 & 0xffff) / 0x24c | 0x1100;
      uVar3 = (uVar4 + ((uVar4 & 0xffff) / 0x24c) * -0x24c >> 2 & 0x3fff) / 7 + 0x1161;
    }
    else {
      param_2 = param_2 - (uVar2 & 0xffff);
      uVar3 = (uVar2 & 0xffff) + 0x11a7;
    }
  }
  else {
    if (0x2fa1d < param_2) {
      return 0;
    }
    uVar1 = *(ushort *)
             (&DAT_00261aa2 +
             (((ulong)param_2 & 0xf) << 1 |
             (ulong)(byte)(&DAT_00260a01)
                          [(ulong)(byte)(&DAT_00260883)[param_2 >> 9] << 5 |
                           (ulong)(param_2 >> 4) & 0x1f] << 5));
    if (uVar1 == 0) {
      return 0;
    }
    uVar4 = (uint)uVar1;
    if (0x3a7 < uVar1) {
      uVar2 = uVar1 - 0x3a8;
      if (uVar2 < 0x27e) {
        uVar3 = *(uint *)(&DAT_002638dc + (ulong)uVar2 * 4) >> 0xe & 0x7f | 0x300;
        *param_3 = *(uint *)(&DAT_002638dc + (ulong)uVar2 * 4) >> 0x15;
      }
      else {
        uVar3 = (uint)(*(ulong *)(&DAT_002642d8 + (ulong)(uVar4 - 0x626) * 8) >> 0x15) & 0x1fffff;
        *param_3 = (uint)(*(ulong *)(&DAT_002642d8 + (ulong)(uVar4 - 0x626) * 8) >> 0x2a);
      }
      goto LAB_005667a4;
    }
    if (uVar4 < 0x33a) {
      param_2 = (uint)*(ushort *)(&DAT_00264f98 + (ulong)(uVar4 - 1) * 2);
    }
    else {
      param_2 = *(ushort *)(&DAT_0026560a + (ulong)(uVar1 - 0x33a) * 2) | 0x20000;
    }
    uVar3 = 0;
  }
  *param_3 = param_2;
LAB_005667a4:
  *param_4 = uVar3;
  return 1;
}


// ===== 0056683c  SBAlgorithmCreate =====

undefined8 * SBAlgorithmCreate(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((((param_1 == (uint *)0x0) || (2 < *param_1)) || (*(long *)(param_1 + 2) == 0)) ||
     (*(long *)(param_1 + 4) == 0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)malloc(*(long *)(param_1 + 4) + 0x28);
    if (puVar4 != (undefined8 *)0x0) {
      uVar9 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 4);
      puVar4[1] = *(undefined8 *)(param_1 + 2);
      *puVar4 = uVar9;
      puVar4[2] = uVar8;
      puVar4[3] = puVar4 + 5;
      puVar4[4] = 1;
      local_70 = 0;
      uVar5 = 0;
      while( true ) {
        uVar6 = uVar5;
        uVar5 = SBCodepointSequenceGetCodepointAt(param_1,&local_70);
        uVar2 = local_70;
        uVar3 = (uint)uVar5;
        if (uVar3 == 0xffffffff) break;
        if (uVar3 >> 0x10 < 0x11) {
          uVar7 = (&DAT_002656e6)
                  [(uVar5 & 0xf) +
                   (ulong)*(ushort *)
                           (&DAT_00266896 +
                           (((uVar5 & 0xffffffff) >> 4 & 0x3f) +
                           (ulong)*(ushort *)(&DAT_00267d96 + (ulong)(uVar3 >> 10) * 2)) * 2)];
        }
        else {
          uVar7 = 0xe;
        }
        *(undefined1 *)((long)(puVar4 + 5) + uVar6) = uVar7;
        uVar5 = uVar6 + 1;
        if (uVar6 + 1 < local_70) {
          memset((void *)((long)puVar4 + uVar6 + 0x29),4,local_70 + ~uVar6);
          uVar5 = uVar2;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00566998  SBCodepointSequenceGetCodepointAt =====

ulong SBCodepointSequenceGetCodepointAt(int *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar6 = *param_2;
  uVar5 = *(ulong *)(param_1 + 4);
  if (uVar5 <= uVar6) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  if (iVar2 == 2) {
    uVar7 = *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4);
    *param_2 = uVar6 + 1;
    if (uVar7 >> 0xb == 0x1b || 0x10ffff < uVar7) {
      uVar7 = 0xfffd;
    }
    uVar4 = (ulong)uVar7;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uVar5 = FUN_00566a6c(*(undefined8 *)(param_1 + 2));
      return uVar5;
    }
    lVar8 = *(long *)(param_1 + 2);
    uVar1 = uVar6 + 1;
    *param_2 = uVar1;
    uVar3 = *(ushort *)(lVar8 + uVar6 * 2);
    uVar4 = (ulong)(uint)uVar3;
    if ((uVar3 & 0xf800) == 0xd800) {
      uVar4 = 0xfffd;
      if (((uVar3 >> 10 < 0x37) && (uVar1 < uVar5)) &&
         (uVar7 = (uint)*(ushort *)(lVar8 + uVar1 * 2), (uVar7 & 0xfc00) == 0xdc00)) {
        *param_2 = uVar6 + 2;
        return (ulong)(uVar7 + (uint)uVar3 * 0x400 + 0xfca02400);
      }
    }
  }
  return uVar4;
}


// ===== 00566a6c  FUN_00566a6c =====

uint FUN_00566a6c(long param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = *param_3;
  lVar1 = (ulong)(byte)(&DAT_0026e90e)[*(byte *)(param_1 + uVar6)] * 4;
  cVar4 = (&DAT_0026e8ea)[lVar1];
  uVar2 = uVar6 + (byte)(&DAT_0026e8eb)[lVar1];
  uVar7 = uVar6 + 1;
  uVar10 = (uint)(byte)(&DAT_0026e8ec)[lVar1];
  uVar9 = (uint)(byte)(&DAT_0026e8ed)[lVar1];
  uVar3 = uVar2;
  if (param_2 <= uVar2) {
    uVar3 = param_2;
  }
  uVar8 = 0x7fU >> (ulong)((byte)(&DAT_0026e8eb)[lVar1] & 0x1f) & (uint)*(byte *)(param_1 + uVar6);
  *param_3 = uVar7;
  if (uVar7 < uVar3) {
    do {
      bVar5 = *(byte *)(param_1 + uVar7);
      if ((bVar5 < uVar10) || (uVar9 <= bVar5 && bVar5 != uVar9)) goto LAB_00566b0c;
      uVar8 = bVar5 & 0x3f | uVar8 << 6;
      uVar7 = uVar7 + 1;
      uVar10 = 0x80;
      uVar9 = 0xbf;
      *param_3 = uVar7;
    } while (uVar3 != uVar7);
  }
  if (cVar4 == '\0' || param_2 < uVar2) {
LAB_00566b0c:
    uVar8 = 0xfffd;
  }
  return uVar8;
}


// ===== 00566b18  SBAlgorithmGetBidiTypesPtr =====

undefined8 SBAlgorithmGetBidiTypesPtr(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00566b20  SBAlgorithmGetParagraphBoundary =====

void SBAlgorithmGetParagraphBoundary
               (long param_1,ulong param_2,ulong param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    param_2 = 0xffffffffffffffff;
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar1 = uVar3 - param_2;
    if (param_3 + param_2 <= uVar3 && !CARRY8(param_3,param_2)) {
      uVar1 = param_3;
    }
    uVar3 = param_2;
    if (param_2 < uVar1 + param_2) {
      uVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x18) + param_2 + uVar4) == '\r') {
          lVar2 = FUN_00566bdc(param_1,param_2 + uVar4);
          uVar3 = lVar2 + param_2 + uVar4;
          if (param_5 != (long *)0x0) {
            *param_5 = lVar2;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        uVar3 = uVar1 + param_2;
      } while (uVar1 != uVar4);
    }
  }
  if (param_4 != (long *)0x0) {
    *param_4 = uVar3 - param_2;
  }
  return;
}


// ===== 00566bdc  FUN_00566bdc =====

long FUN_00566bdc(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  iVar3 = SBCodepointSequenceGetCodepointAt(param_1,&local_40);
  uVar2 = local_40;
  uVar4 = uVar2;
  if (((iVar3 == 0xd) && (local_40 < *(ulong *)(param_1 + 0x10))) &&
     (iVar3 = SBCodepointSequenceGetCodepointAt(param_1,&local_40), uVar4 = local_40, iVar3 != 10))
  {
    uVar4 = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 - param_2;
}


// ===== 00566c6c  SBAlgorithmCreateParagraph =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * SBAlgorithmCreateParagraph(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  short sVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  long *__ptr;
  long *__ptr_00;
  void *pvVar12;
  uint uVar13;
  undefined8 uVar14;
  byte bVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  byte bVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  long lVar34;
  uint uVar35;
  byte *pbVar36;
  long lVar37;
  ulong uVar38;
  byte bVar39;
  undefined8 *puVar40;
  long lVar41;
  uint uVar42;
  ulong uVar43;
  undefined8 *puVar44;
  long *plVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  ulong uVar50;
  uint *puVar51;
  int *piVar52;
  long lVar53;
  bool bVar54;
  undefined1 uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  long lVar59;
  uint uVar60;
  long lVar61;
  void *pvVar62;
  byte bVar63;
  long lVar64;
  long local_c0;
  uint local_84;
  long local_78;
  long local_70;
  long *plVar33;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar24 = *(ulong *)(param_1 + 0x10);
  if (param_2 <= uVar24 && uVar24 - param_2 != 0) {
    uVar43 = uVar24 - param_2;
    if (param_3 + param_2 <= uVar24 && !CARRY8(param_3,param_2)) {
      uVar43 = param_3;
    }
    if (uVar43 != 0) {
      uVar24 = uVar43 + param_2;
      lVar61 = *(long *)(param_1 + 0x18);
      uVar49 = param_2;
      uVar27 = param_2;
      if (param_2 < uVar24) {
        do {
          if (*(char *)(lVar61 + uVar27) == '\r') {
            lVar59 = FUN_00566bdc(param_1,uVar27);
            uVar49 = lVar59 + uVar27;
            break;
          }
          uVar43 = uVar43 - 1;
          uVar49 = uVar24;
          uVar27 = uVar27 + 1;
        } while (uVar43 != 0);
      }
      lVar59 = uVar49 - param_2;
      __ptr = (long *)malloc(lVar59 + 0x3a);
      if (__ptr == (long *)0x0) goto LAB_005681d8;
      __ptr[2] = (long)(__ptr + 7);
      lVar18 = (lVar59 + 2) * 4 + 0x290;
      __ptr_00 = (long *)malloc(lVar18 + lVar59 + 2);
      if (__ptr_00 != (long *)0x0) {
        *__ptr_00 = (long)__ptr_00 + lVar18;
        __ptr_00[1] = (long)(__ptr + 7);
        __ptr_00[2] = (long)(__ptr_00 + 0x52);
        __ptr_00[3] = 0;
        *(undefined1 *)((long)__ptr_00 + lVar18) = 0;
        lVar61 = lVar61 + param_2;
        *(undefined1 *)__ptr_00[1] = 0xff;
        *(undefined4 *)__ptr_00[2] = 0xffffffff;
        __ptr_00[0xd] = 0;
        plVar17 = __ptr_00 + 4;
        __ptr_00[0x2b] = 0;
        __ptr_00[0xc] = (long)plVar17;
        plVar1 = __ptr_00 + 0xf;
        __ptr_00[0x29] = (long)plVar1;
        __ptr_00[0x2a] = (long)plVar1;
        __ptr_00[0x2c] = 0;
        __ptr_00[0x2d] = -1;
        __ptr_00[0x2f] = (long)plVar1;
        __ptr_00[0x30] = 0;
        __ptr_00[0x2e] = -1;
        __ptr_00[10] = 0;
        __ptr_00[0xb] = 0;
        __ptr_00[0xe] = 0;
        __ptr_00[0x27] = 0;
        __ptr_00[0x28] = 0;
        *(undefined1 *)(__ptr_00 + 0x31) = 0;
        __ptr_00[0x4e] = 0;
        *(undefined1 *)(__ptr_00 + 0x4f) = 0;
        __ptr_00[0x4b] = 0;
        __ptr_00[0x4a] = 0;
        __ptr_00[0x49] = 0;
        __ptr_00[0x48] = 0;
        if (uVar49 == param_2) {
          iVar16 = 1;
        }
        else {
          lVar18 = 0;
          lVar29 = -1;
          uVar21 = 0;
          do {
            bVar15 = *(byte *)(lVar61 + lVar18);
            uVar22 = (uint)bVar15;
            iVar16 = (int)lVar18;
            if (uVar22 - 0xd < 0xb) {
              uVar57 = *(uint *)((long)__ptr_00 + 0x1c);
              uVar21 = iVar16 + (uVar57 - (int)lVar29);
              *(byte *)(*__ptr_00 + (ulong)uVar21) = bVar15;
              lVar29 = __ptr_00[2];
              *(int *)(lVar29 + (ulong)uVar21 * 4) = (int)__ptr_00[3];
              *(uint *)(lVar29 + (ulong)uVar57 * 4) = uVar21;
              *(uint *)((long)__ptr_00 + 0x1c) = uVar21;
              lVar29 = lVar18;
              if (uVar22 == 0xd) break;
            }
            else if (uVar22 != uVar21) {
              uVar57 = *(uint *)((long)__ptr_00 + 0x1c);
              uVar21 = iVar16 + (uVar57 - (int)lVar29);
              *(byte *)(*__ptr_00 + (ulong)uVar21) = bVar15;
              lVar29 = __ptr_00[2];
              *(int *)(lVar29 + (ulong)uVar21 * 4) = (int)__ptr_00[3];
              *(uint *)(lVar29 + (ulong)uVar57 * 4) = uVar21;
              *(uint *)((long)__ptr_00 + 0x1c) = uVar21;
              lVar29 = lVar18;
            }
            iVar16 = (int)lVar29;
            lVar18 = lVar18 + 1;
            uVar21 = uVar22;
          } while (lVar59 != lVar18);
          iVar16 = (int)lVar59 - iVar16;
        }
        uVar22 = *(uint *)((long)__ptr_00 + 0x1c);
        uVar21 = uVar22 + iVar16;
        *(undefined1 *)(*__ptr_00 + (ulong)uVar21) = 0;
        lVar18 = __ptr_00[2];
        *(int *)(lVar18 + (ulong)uVar21 * 4) = (int)__ptr_00[3];
        *(uint *)(lVar18 + (ulong)uVar22 * 4) = uVar21;
        uVar22 = *(uint *)(__ptr_00 + 3);
        *(uint *)((long)__ptr_00 + 0x1c) = uVar21;
        if (0x7c < (param_4 & 0xff)) {
          param_4 = FUN_0056821c(__ptr_00,uVar22,uVar22,(param_4 & 0xff) == 0xfd,0);
        }
        __ptr_00[0x32] = param_1;
        __ptr_00[0x33] = lVar61;
        __ptr_00[0x34] = (long)__ptr_00;
        __ptr_00[0x50] = param_2;
        uVar4 = (undefined1)param_4;
        *(undefined1 *)((long)__ptr_00 + 0x28e) = uVar4;
        FUN_005682f8(plVar17,param_4,0xe,0);
        lVar29 = _UNK_0024ded8;
        lVar18 = _DAT_0024ded0;
        lVar19 = __ptr_00[2];
        uVar21 = *(uint *)(lVar19 + (ulong)uVar22 * 4);
        if (uVar21 != uVar22) {
          bVar15 = 0;
          plVar1 = __ptr_00 + 0x4b;
          lVar46 = 0;
          lVar64 = 0;
          uVar24 = (ulong)uVar22;
          local_c0 = 0;
          local_84 = 0xffffffff;
          uVar57 = param_4;
          do {
            uVar43 = (ulong)uVar21;
            bVar63 = *(byte *)(*__ptr_00 + (ulong)uVar21);
            if (bVar63 < 0x12) {
              if (0xe < bVar63) {
                if (bVar63 != 0xf) {
                  if (bVar63 == 0x10) {
                    lVar19 = __ptr_00[0xc] + __ptr_00[0xd] * 3;
                    bVar63 = *(byte *)(lVar19 + 2);
                    cVar10 = *(char *)(lVar19 + 1);
                    *(byte *)(__ptr_00[1] + uVar43) = bVar63;
                    uVar56 = bVar63 + 1;
                    if ((((uVar56 & 0xff) < 0x7e) && (lVar46 == 0)) && (lVar64 == 0)) {
                      cVar9 = FUN_005682f8(plVar17,uVar56 | 1,0xe,1);
                      if (cVar9 == '\0') goto LAB_00568210;
                      lVar46 = 0;
                      local_c0 = local_c0 + 1;
                    }
                    else {
                      lVar46 = lVar46 + 1;
                    }
                    if (cVar10 != '\x0e') {
                      *(char *)(*__ptr_00 + uVar43) = cVar10;
                      goto LAB_0056758c;
                    }
                    goto LAB_005675c0;
                  }
                  if (bVar63 != 0x11) goto LAB_00567374;
                  cVar9 = FUN_0056821c(__ptr_00,uVar21,uVar22,0,1);
                  lVar19 = __ptr_00[0xc] + __ptr_00[0xd] * 3;
                  bVar63 = *(byte *)(lVar19 + 2);
                  cVar10 = *(char *)(lVar19 + 1);
                  uVar56 = (bVar63 & 0xfffffffe) + 2;
                  if (cVar9 != '\0') {
                    uVar56 = bVar63 + 1 | 1;
                  }
                  *(byte *)(__ptr_00[1] + uVar43) = bVar63;
                  if ((((uVar56 & 0xff) < 0x7e) && (lVar46 == 0)) && (lVar64 == 0)) {
                    cVar9 = FUN_005682f8(plVar17,uVar56,0xe,1);
                    if (cVar9 == '\0') goto LAB_00568210;
                    lVar46 = 0;
                    local_c0 = local_c0 + 1;
                  }
                  else {
                    lVar46 = lVar46 + 1;
                  }
                  if (((cVar10 == '\x0e') ||
                      (*(char *)(*__ptr_00 + uVar43) = cVar10,
                      *(char *)(*__ptr_00 + uVar24) != *(char *)(*__ptr_00 + uVar43))) ||
                     (*(char *)(__ptr_00[1] + uVar24) != *(char *)(__ptr_00[1] + uVar43))) {
                    bVar54 = false;
                    goto LAB_005675c4;
                  }
                  lVar19 = __ptr_00[2];
LAB_005675b8:
                  uVar23 = *(undefined4 *)(lVar19 + uVar43 * 4);
                  goto LAB_0056736c;
                }
                lVar19 = __ptr_00[0xc] + __ptr_00[0xd] * 3;
                bVar63 = *(byte *)(lVar19 + 2);
                cVar10 = *(char *)(lVar19 + 1);
                uVar56 = (bVar63 & 0xfffffffe) + 2;
                *(byte *)(__ptr_00[1] + uVar43) = bVar63;
                if ((0x7d < (uVar56 & 0xfe) || lVar46 != 0) || lVar64 != 0) {
                  lVar46 = lVar46 + 1;
LAB_0056740c:
                  if (cVar10 != '\x0e') {
                    *(char *)(*__ptr_00 + uVar43) = cVar10;
                    goto LAB_0056758c;
                  }
                  goto LAB_005675c0;
                }
                cVar9 = FUN_005682f8(plVar17,uVar56,0xe,1);
                if (cVar9 != '\0') {
                  lVar46 = 0;
                  local_c0 = local_c0 + 1;
                  goto LAB_0056740c;
                }
LAB_00568210:
                bVar54 = true;
                goto LAB_00568178;
              }
              if (bVar63 == 0) {
                bVar54 = true;
              }
              else {
                if (bVar63 == 4) goto LAB_00567354;
                if (bVar63 != 0xd) {
LAB_00567374:
                  lVar19 = __ptr_00[0xc] + __ptr_00[0xd] * 3;
                  goto LAB_00567560;
                }
                __ptr_00[0xc] = (long)plVar17;
                __ptr_00[0xd] = 0;
                __ptr_00[0xe] = 0;
                FUN_005682f8(plVar17,param_4,0xe,0);
                bVar54 = false;
                lVar64 = 0;
                lVar46 = 0;
                local_c0 = 0;
              }
              *(undefined1 *)(__ptr_00[1] + uVar43) = uVar4;
LAB_005675c4:
              bVar63 = *(byte *)(__ptr_00[1] + uVar43);
              uVar56 = (uint)bVar63;
              if (bVar15 == 0) {
                uVar57 = (uint)bVar63;
                if ((uint)bVar63 <= (param_4 & 0xff)) {
                  uVar57 = param_4 & 0xff;
                }
                bVar15 = 1;
                local_84 = uVar21;
                if ((uVar57 & 1) != 0) {
                  bVar15 = 2;
                }
LAB_005676b8:
                uVar24 = (ulong)uVar21;
                uVar57 = uVar56;
              }
              else {
                uVar56 = uVar57;
                if ((bool)((uint)bVar63 == (uVar57 & 0xff) & (bVar54 ^ 1U))) goto LAB_005676b8;
                uVar56 = uVar57 & 0xff;
                uVar57 = (uint)bVar63;
                if (uVar56 < bVar63 || uVar56 == uVar57) {
                  uVar56 = uVar57;
                }
                cVar10 = *(char *)(*__ptr_00 + (ulong)local_84);
                bVar8 = (uVar56 & 1) != 0;
                bVar63 = 1;
                if (bVar8) {
                  bVar63 = 2;
                }
                uVar55 = *(undefined1 *)(__ptr_00[1] + (ulong)local_84);
                bVar39 = 0x10;
                if (bVar8) {
                  bVar39 = 0x20;
                }
                uVar23 = *(undefined4 *)(__ptr_00[2] + uVar24 * 4);
                bVar28 = 3;
                if (2 < *(byte *)(*__ptr_00 + uVar24) - 0xf) {
                  bVar28 = 0;
                }
                if (__ptr_00[0x2d] == 7) {
                  lVar19 = __ptr_00[0x2a];
                  pvVar12 = *(void **)(lVar19 + 200);
                  if (pvVar12 == (void *)0x0) {
                    pvVar12 = malloc(0xd0);
                    if (pvVar12 == (void *)0x0) goto LAB_00568210;
                    *(long *)((long)pvVar12 + 0xc0) = lVar19;
                    *(undefined8 *)((long)pvVar12 + 200) = 0;
                    *(void **)(lVar19 + 200) = pvVar12;
                  }
                  lVar19 = 0;
                  __ptr_00[0x2a] = (long)pvVar12;
                }
                else {
                  pvVar12 = (void *)__ptr_00[0x2a];
                  lVar19 = __ptr_00[0x2d] + 1;
                }
                __ptr_00[0x2d] = lVar19;
                puVar40 = (undefined8 *)((long)pvVar12 + lVar19 * 0x18);
                bVar28 = bVar28 | (cVar10 == '\x12') << 2;
                __ptr_00[0x30] = __ptr_00[0x30] + 1;
                *(uint *)(puVar40 + 1) = local_84;
                *(int *)((long)puVar40 + 0xc) = (int)uVar24;
                *puVar40 = 0;
                *(undefined4 *)(puVar40 + 2) = uVar23;
                *(byte *)((long)puVar40 + 0x14) = bVar39 | bVar15;
                *(byte *)((long)puVar40 + 0x15) = bVar28;
                *(undefined1 *)((long)puVar40 + 0x16) = uVar55;
                lVar25 = __ptr_00[0x2e];
                if ((lVar25 != -1) && (cVar10 == '\x12')) {
                  lVar30 = __ptr_00[0x2b];
                  puVar44 = (undefined8 *)(lVar30 + lVar25 * 0x18);
                  *(byte *)((long)pvVar12 + lVar19 * 0x18 + 0x15) = bVar28 | 8;
                  pbVar36 = (byte *)((long)puVar44 + 0x15);
                  bVar15 = *pbVar36;
                  if ((bVar15 & 1) != 0) {
                    *pbVar36 = bVar15 & 0xfd;
                  }
                  lVar37 = __ptr_00[0x29];
                  *puVar44 = puVar40;
                  do {
                    if (lVar30 == lVar37) {
                      lVar41 = __ptr_00[0x2c];
                    }
                    else {
                      lVar41 = 0;
                    }
                    pbVar36 = (byte *)(lVar30 + lVar25 * 0x18 + 0x15);
                    do {
                      if ((*pbVar36 >> 1 & 1) != 0) {
                        __ptr_00[0x2b] = lVar30;
                        __ptr_00[0x2e] = lVar25;
                        goto LAB_005677c4;
                      }
                      bVar8 = lVar41 < lVar25;
                      lVar25 = lVar25 + -1;
                      pbVar36 = pbVar36 + -0x18;
                    } while (bVar8);
                    lVar30 = *(long *)(lVar30 + 0xc0);
                    lVar25 = 7;
                  } while (lVar30 != 0);
                  __ptr_00[0x2b] = 0;
                  __ptr_00[0x2e] = -1;
                  *(undefined1 *)(__ptr_00 + 0x31) = 0;
                }
LAB_005677c4:
                if ((*(byte *)((long)pvVar12 + lVar19 * 0x18 + 0x15) & 1) != 0) {
                  __ptr_00[0x2b] = __ptr_00[0x2a];
                  __ptr_00[0x2e] = __ptr_00[0x2d];
                }
                if (((char)__ptr_00[0x31] != '\0' || bVar54) && (__ptr_00[0x30] != 0)) {
                  plVar31 = (long *)__ptr_00[0x2f];
                  do {
                    bVar15 = *(byte *)((long)plVar31 + 0x15);
                    if ((bVar15 >> 3 & 1) == 0) {
                      plVar20 = (long *)__ptr_00[0x34];
                      plVar45 = (long *)*plVar31;
                      lVar19 = plVar31[1];
                      __ptr_00[0x35] = (long)plVar31;
                      uVar56 = *(uint *)(plVar20 + 3);
                      lVar25 = plVar20[2];
                      *(undefined4 *)(__ptr_00 + 0x51) = *(undefined4 *)(lVar25 + (ulong)uVar56 * 4)
                      ;
                      *(int *)(lVar25 + (ulong)uVar56 * 4) = (int)lVar19;
                      plVar33 = plVar31;
                      while (plVar6 = plVar45, plVar6 != (long *)0x0) {
                        plVar45 = (long *)*plVar6;
                        *(undefined4 *)(lVar25 + (ulong)*(uint *)((long)plVar33 + 0xc) * 4) =
                             *(undefined4 *)(plVar6 + 1);
                        plVar33 = plVar6;
                      }
                      uVar56 = *(uint *)((long)plVar33 + 0xc);
                      bVar39 = *(byte *)((long)plVar31 + 0x14);
                      lVar19 = plVar20[3];
                      __ptr_00[0x36] = (long)plVar33;
                      *(int *)(lVar25 + (ulong)uVar56 * 4) = (int)lVar19;
                      uVar56 = bVar39 & 0xf;
                      *(char *)((long)__ptr_00 + 0x28c) = (char)uVar56;
                      if ((bVar15 >> 1 & 1) == 0) {
                        bVar39 = *(byte *)((long)plVar33 + 0x14) >> 4;
                      }
                      else {
                        bVar15 = *(byte *)((long)plVar31 + 0x16);
                        if (*(byte *)((long)plVar31 + 0x16) <= *(byte *)((long)__ptr_00 + 0x28e)) {
                          bVar15 = *(byte *)((long)__ptr_00 + 0x28e);
                        }
                        bVar39 = 1;
                        if ((bVar15 & 1) != 0) {
                          bVar39 = 2;
                        }
                      }
                      *(byte *)((long)__ptr_00 + 0x28d) = bVar39;
                      uVar60 = *(uint *)(plVar20 + 3);
                      lVar19 = plVar33[2];
                      uVar35 = *(uint *)(plVar20[2] + (ulong)uVar60 * 4);
                      if (uVar35 == uVar60) {
LAB_00567998:
                        uVar24 = (ulong)uVar60;
                      }
                      else {
                        uVar24 = (ulong)uVar60;
                        uVar42 = uVar56;
                        uVar11 = uVar56;
                        do {
                          bVar15 = *(byte *)(*plVar20 + (ulong)uVar35);
                          uVar58 = (uint)bVar15;
                          if (bVar15 == 5) {
                            uVar58 = 0xe;
                            if (3 < uVar11 - 0xf) {
                              uVar58 = uVar11;
                            }
                            bVar8 = uVar11 == 0xe;
                            *(char *)(*plVar20 + (ulong)uVar35) = (char)uVar58;
                            bVar54 = !bVar8;
                          }
                          else {
                            bVar8 = false;
                            bVar54 = true;
                          }
                          uVar11 = uVar58;
                          if (uVar58 == 3) {
                            uVar55 = 2;
LAB_00567920:
                            *(undefined1 *)(*plVar20 + (ulong)uVar35) = uVar55;
LAB_00567928:
                            if (2 < uVar58 - 1) {
                              uVar11 = uVar42;
                            }
LAB_00567934:
                            if (*(byte *)(*plVar20 + uVar24) == uVar58) {
                              bVar8 = true;
                            }
                            uVar42 = uVar11;
                            if (bVar8) goto LAB_00567948;
LAB_00567978:
                            uVar24 = (ulong)uVar35;
                          }
                          else {
                            if (uVar58 == 7) {
                              if (uVar42 == 3) {
                                uVar55 = 6;
                                goto LAB_00567920;
                              }
                              goto LAB_00567928;
                            }
                            if (2 < uVar58 - 1) {
                              uVar11 = uVar42;
                            }
                            if (uVar58 != 0xe) goto LAB_00567934;
                            uVar42 = uVar11;
                            if (bVar54) goto LAB_00567978;
LAB_00567948:
                            lVar25 = plVar20[2];
                            *(undefined4 *)(lVar25 + uVar24 * 4) =
                                 *(undefined4 *)(lVar25 + (ulong)*(uint *)(lVar25 + uVar24 * 4) * 4)
                            ;
                          }
                          lVar25 = plVar20[2];
                          uVar35 = *(uint *)(lVar25 + (ulong)uVar35 * 4);
                          uVar11 = uVar58;
                        } while (uVar35 != uVar60);
                        uVar35 = *(uint *)(lVar25 + (ulong)uVar60 * 4);
                        if (uVar35 == uVar60) goto LAB_00567998;
                        uVar24 = (ulong)uVar60;
                        uVar11 = uVar56;
                        uVar42 = uVar56;
                        do {
                          lVar30 = *plVar20;
                          uVar58 = *(uint *)(lVar25 + (ulong)uVar35 * 4);
                          bVar15 = *(byte *)(lVar30 + (ulong)uVar35);
                          uVar13 = uVar35;
                          do {
                            uVar13 = uVar13 + 1;
                            if (uVar58 == uVar13) break;
                          } while (*(char *)(lVar30 + (ulong)uVar13) == '\x04');
                          uVar7 = uVar56;
                          if ((((uVar58 == uVar13) && (bVar15 - 9 < 2)) && ((uVar11 & 0xfe) == 6))
                             && (uVar11 == *(byte *)(lVar30 + (ulong)uVar58))) {
                            if ((uVar11 != 7) && (bVar15 != 10)) {
                              uVar11 = 9;
LAB_00567a6c:
                              *(undefined1 *)(*plVar20 + (ulong)uVar35) = 0xe;
                              uVar42 = uVar11;
                              goto LAB_00567aa8;
                            }
                            *(char *)(lVar30 + (ulong)uVar35) = (char)uVar11;
LAB_00567a44:
                            uVar42 = uVar11;
                            if (uVar11 < 9) {
                              uVar7 = uVar11;
                              if ((1 < uVar11 - 1) && (uVar7 = uVar56, uVar11 == 7))
                              goto LAB_00567a94;
                              goto LAB_00567aa8;
                            }
                            if (uVar11 - 9 < 2) goto LAB_00567a6c;
                            if (uVar11 != 0xe) goto LAB_00567aa8;
                            lVar25 = plVar20[2];
                            uVar42 = 0xe;
LAB_00567adc:
                            uVar24 = (ulong)uVar35;
                          }
                          else {
                            uVar11 = (uint)bVar15;
                            if (bVar15 != 8) goto LAB_00567a44;
                            if ((uVar42 != 7) && (*(byte *)(lVar30 + (ulong)uVar58) != 7)) {
                              uVar11 = 8;
                              goto LAB_00567a6c;
                            }
                            *(undefined1 *)(lVar30 + (ulong)uVar35) = 7;
                            uVar11 = 8;
LAB_00567a94:
                            if (uVar56 == 1) {
                              *(undefined1 *)(*plVar20 + (ulong)uVar35) = 1;
                            }
                            uVar7 = uVar56;
                            uVar42 = 7;
LAB_00567aa8:
                            uVar56 = uVar7;
                            lVar25 = plVar20[2];
                            if (*(byte *)(*plVar20 + uVar24) != uVar42) goto LAB_00567adc;
                            *(undefined4 *)(lVar25 + uVar24 * 4) =
                                 *(undefined4 *)(lVar25 + (ulong)*(uint *)(lVar25 + uVar24 * 4) * 4)
                            ;
                          }
                          uVar35 = *(uint *)(lVar25 + (ulong)uVar35 * 4);
                        } while (uVar35 != uVar60);
                      }
                      plVar31 = (long *)__ptr_00[0x34];
                      lVar30 = __ptr_00[0x32];
                      __ptr_00[0x4e] = 0;
                      __ptr_00[0x4a] = (long)(__ptr_00 + 0x37);
                      bVar15 = *(byte *)(__ptr_00[0x35] + 0x16);
                      uVar56 = *(uint *)(plVar31 + 3);
                      lVar25 = plVar31[2];
                      __ptr_00[0x4b] = (long)(__ptr_00 + 0x37);
                      uVar60 = *(uint *)(lVar25 + (ulong)uVar56 * 4);
                      __ptr_00[0x4d] = lVar29;
                      __ptr_00[0x4c] = lVar18;
                      uVar55 = 1;
                      if ((bVar15 & 1) != 0) {
                        uVar55 = 2;
                      }
                      lVar25 = __ptr_00[0x50];
                      *(undefined1 *)(__ptr_00 + 0x4f) = 0;
                      *(undefined1 *)((long)__ptr_00 + 0x279) = uVar55;
                      if (uVar60 != uVar56) {
                        uVar35 = 0xffffffff;
LAB_00567b40:
                        bVar15 = *(byte *)(*plVar31 + (ulong)uVar60);
                        if (bVar15 - 1 < 2) {
LAB_00567b64:
                          uVar35 = uVar60;
                          if (__ptr_00[0x4e] != 0) {
                            lVar37 = __ptr_00[0x4d];
                            lVar41 = __ptr_00[0x4a];
                            plVar33 = plVar1;
                            do {
                              lVar32 = *plVar33;
                              if (lVar32 == lVar41) {
                                lVar41 = __ptr_00[0x4c];
                              }
                              else {
                                lVar41 = 0;
                              }
                              do {
                                if ((*(int *)(lVar32 + lVar37 * 4 + 0x60) == -1) &&
                                   (*(char *)(lVar32 + lVar37 + 0x80) !=
                                    *(char *)((long)__ptr_00 + 0x279))) {
                                  *(byte *)(lVar32 + lVar37 + 0x80) = bVar15;
                                }
                                bVar54 = lVar41 < lVar37;
                                lVar37 = lVar37 + -1;
                              } while (bVar54);
                              lVar41 = __ptr_00[0x4a];
                              lVar37 = 7;
                              plVar33 = (long *)(lVar32 + 0x88);
                            } while (lVar32 != lVar41);
                          }
                        }
                        else {
                          if (bVar15 - 6 < 2) {
                            bVar15 = 2;
                            goto LAB_00567b64;
                          }
                          if (bVar15 != 0xe) goto LAB_00567e5c;
                          local_78 = lVar25 + (ulong)(uVar60 - 1);
                          uVar11 = SBCodepointSequenceGetCodepointAt(lVar30,&local_78);
                          if (uVar11 < 0xff64) {
                            uVar42 = (uVar11 & 0xffff) / 0x6a;
                            bVar15 = (&DAT_0026db12)
                                     [(ulong)*(ushort *)(&DAT_0026e418 + (ulong)uVar42 * 2) +
                                      (ulong)(ushort)((short)uVar11 + (short)uVar42 * -0x6a)];
                            if ((bVar15 & 0xc0) != 0) {
                              if ((bVar15 & 0xc0) == 0x80) {
                                if (__ptr_00[0x4e] != 0) {
                                  if ((uVar11 & 0xffff) == 0x232a) {
                                    uVar42 = 0x3009;
                                  }
                                  else {
                                    uVar42 = uVar11;
                                    if ((uVar11 & 0xffff) == 0x3009) {
                                      uVar42 = 0x232a;
                                    }
                                  }
                                  lVar32 = __ptr_00[0x4b];
                                  lVar26 = __ptr_00[0x4d];
                                  lVar34 = __ptr_00[0x4a];
                                  lVar37 = lVar32;
                                  lVar41 = lVar26;
LAB_00567d60:
                                  if (lVar37 == lVar34) {
                                    lVar47 = __ptr_00[0x4c];
                                  }
                                  else {
                                    lVar47 = 0;
                                  }
                                  puVar51 = (uint *)(lVar37 + lVar41 * 4 + 0x60);
LAB_00567d7c:
                                  if (((puVar51[-8] == 0xffffffff) || (*puVar51 != 0xffffffff)) ||
                                     ((puVar51[-0x18] != uVar11 && (puVar51[-0x18] != uVar42))))
                                  goto LAB_00567da8;
                                  *puVar51 = uVar60;
                                  lVar47 = lVar37;
                                  lVar53 = lVar41;
                                  do {
                                    lVar2 = lVar26;
                                    if (lVar47 != lVar32) {
                                      lVar2 = 7;
                                    }
                                    lVar48 = lVar2 - lVar53;
                                    if (lVar48 != 0 && lVar53 <= lVar2) {
                                      piVar52 = (int *)(lVar47 + lVar53 * 4 + 0x44);
                                      do {
                                        if ((*piVar52 != -1) && (piVar52[8] == -1)) {
                                          *piVar52 = -1;
                                        }
                                        lVar48 = lVar48 + -1;
                                        piVar52 = piVar52 + 1;
                                      } while (lVar48 != 0);
                                    }
                                    lVar47 = *(long *)(lVar47 + 0x90);
                                    lVar53 = 0;
                                  } while (lVar47 != 0);
                                  if ((lVar37 != lVar34) || (lVar41 != __ptr_00[0x4c]))
                                  goto LAB_00567e48;
                                  *(undefined1 *)(__ptr_00 + 0x4f) = 1;
                                  goto LAB_00567e50;
                                }
                              }
                              else if ((bVar15 & 0xc0) == 0x40) {
                                uVar49 = __ptr_00[0x4e];
                                if (0x3e < uVar49) goto LAB_00567e6c;
                                sVar3 = *(short *)(&DAT_0026dac8 + ((ulong)bVar15 & 0x3f) * 2);
                                if (__ptr_00[0x4d] == 7) {
                                  lVar37 = *plVar1;
                                  pvVar12 = *(void **)(lVar37 + 0x90);
                                  if (pvVar12 == (void *)0x0) {
                                    pvVar12 = malloc(0x98);
                                    if (pvVar12 == (void *)0x0) goto LAB_00568210;
                                    *(long *)((long)pvVar12 + 0x88) = lVar37;
                                    *(undefined8 *)((long)pvVar12 + 0x90) = 0;
                                    *(void **)(lVar37 + 0x90) = pvVar12;
                                  }
                                  lVar37 = 0;
                                  *plVar1 = (long)pvVar12;
                                }
                                else {
                                  pvVar12 = (void *)*plVar1;
                                  lVar37 = __ptr_00[0x4d] + 1;
                                }
                                piVar52 = (int *)((long)pvVar12 + lVar37 * 4);
                                __ptr_00[0x4d] = lVar37;
                                __ptr_00[0x4e] = uVar49 + 1;
                                piVar52[8] = uVar35;
                                piVar52[0x10] = uVar60;
                                piVar52[0x18] = -1;
                                *piVar52 = uVar11 + (int)sVar3;
                                *(undefined1 *)((long)pvVar12 + lVar37 + 0x80) = 0;
                              }
                            }
                          }
                        }
                        goto LAB_00567e5c;
                      }
LAB_00567e6c:
                      FUN_00568394(__ptr_00 + 0x32);
                      plVar31 = (long *)__ptr_00[0x34];
                      lVar25 = __ptr_00[0x35];
                      uVar27 = (ulong)*(uint *)(plVar31 + 3);
                      lVar30 = plVar31[2];
                      uVar38 = (ulong)*(uint *)(lVar30 + uVar27 * 4);
                      uVar49 = uVar27;
                      if (uVar38 != uVar27) {
                        bVar39 = *(byte *)((long)__ptr_00 + 0x28c);
                        uVar49 = 0xffffffff;
                        bVar15 = 1;
                        if ((*(byte *)(lVar25 + 0x16) & 1) != 0) {
                          bVar15 = 2;
                        }
                        do {
                          bVar28 = *(byte *)(*plVar31 + uVar38);
                          if (bVar28 < 0x13) {
                            uVar56 = 1 << (ulong)(bVar28 & 0x1f);
                            if ((uVar56 & 0x7f800) == 0) {
                              if ((uVar56 & 0xc4) == 0) {
                                if (bVar28 == 1) {
                                  bVar39 = 1;
                                }
                              }
                              else {
                                bVar39 = 2;
                              }
                            }
                            else {
                              uVar50 = uVar38;
                              if (uVar49 != 0xffffffff) {
                                uVar50 = uVar49;
                              }
                              bVar28 = *(byte *)(*plVar31 + (ulong)*(uint *)(lVar30 + uVar38 * 4));
                              if ((bVar28 & 0xfe) == 6) {
                                uVar56 = 2;
                              }
                              else {
                                if (bVar28 == 0) {
                                  bVar28 = *(byte *)((long)__ptr_00 + 0x28d);
                                }
                                uVar56 = (uint)bVar28;
                                uVar49 = uVar50;
                                if (2 < uVar56 - 1) goto LAB_00567f54;
                              }
                              bVar28 = bVar39;
                              if (uVar56 != bVar39) {
                                bVar28 = bVar15;
                              }
                              do {
                                *(byte *)(*plVar31 + uVar50) = bVar28;
                                lVar30 = plVar31[2];
                                uVar50 = (ulong)*(uint *)(lVar30 + uVar50 * 4);
                              } while (uVar50 != *(uint *)(lVar30 + uVar38 * 4));
                              uVar49 = 0xffffffff;
                            }
                          }
LAB_00567f54:
                          uVar38 = (ulong)*(uint *)(lVar30 + uVar38 * 4);
                        } while (uVar38 != uVar27);
                        plVar31 = (long *)__ptr_00[0x34];
                        lVar25 = __ptr_00[0x35];
                        lVar30 = plVar31[2];
                        uVar27 = (ulong)*(uint *)(lVar30 + (ulong)*(uint *)(plVar31 + 3) * 4);
                        uVar49 = (ulong)*(uint *)(plVar31 + 3);
                      }
                      if ((*(byte *)(lVar25 + 0x16) & 1) == 0) {
                        for (; uVar27 != uVar49; uVar27 = (ulong)*(uint *)(lVar30 + uVar27 * 4)) {
                          if (*(char *)(*plVar31 + uVar27) != '\x01') {
                            cVar10 = '\x01';
                            if (*(char *)(*plVar31 + uVar27) != '\x02') {
                              cVar10 = '\x02';
                            }
                            *(char *)(plVar31[1] + uVar27) = cVar10 + *(char *)(plVar31[1] + uVar27)
                            ;
                            lVar30 = plVar31[2];
                          }
                        }
                      }
                      else {
                        for (; uVar27 != uVar49; uVar27 = (ulong)*(uint *)(lVar30 + uVar27 * 4)) {
                          if (*(char *)(*plVar31 + uVar27) != '\x02') {
                            *(char *)(plVar31[1] + uVar27) = *(char *)(plVar31[1] + uVar27) + '\x01'
                            ;
                            lVar30 = plVar31[2];
                          }
                        }
                      }
                      uVar23 = (undefined4)__ptr_00[0x51];
                      uVar56 = *(uint *)(__ptr_00[0x34] + 0x18);
                      lVar25 = *(long *)(__ptr_00[0x34] + 0x10);
                      for (plVar31 = (long *)__ptr_00[0x35];
                          *(undefined4 *)(lVar25 + (ulong)uVar56 * 4) = uVar23,
                          plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
                        uVar56 = *(uint *)((long)plVar31 + 0xc);
                        uVar23 = *(undefined4 *)(plVar31 + 2);
                      }
                      *(int *)(lVar25 + uVar24 * 4) = (int)lVar19;
                    }
                    if (__ptr_00[0x2c] == 7) {
                      lVar25 = __ptr_00[0x29];
                      if (lVar25 == __ptr_00[0x2a]) {
                        lVar19 = 0;
                        __ptr_00[0x2d] = -1;
                      }
                      else {
                        lVar25 = *(long *)(lVar25 + 200);
                        lVar19 = 0;
                        __ptr_00[0x29] = lVar25;
                      }
                    }
                    else {
                      lVar25 = __ptr_00[0x29];
                      lVar19 = __ptr_00[0x2c] + 1;
                    }
                    __ptr_00[0x2c] = lVar19;
                    plVar31 = (long *)(lVar25 + lVar19 * 0x18);
                    lVar19 = __ptr_00[0x30];
                    __ptr_00[0x2f] = (long)plVar31;
                    __ptr_00[0x30] = lVar19 + -1;
                  } while (lVar19 + -1 != 0);
                }
                uVar24 = (ulong)uVar21;
                local_84 = uVar21;
                bVar15 = bVar63;
              }
            }
            else {
              if (bVar63 < 0x15) {
                if (bVar63 == 0x12) {
                  lVar19 = __ptr_00[0xc];
                  lVar25 = __ptr_00[0xd];
                  if (lVar46 == 0) {
                    if (local_c0 == 0) {
                      local_c0 = 0;
                      lVar46 = 0;
                    }
                    else {
                      if (*(char *)(lVar19 + lVar25 * 3) == '\0') {
                        lVar46 = __ptr_00[0xe];
                        do {
                          if (lVar25 == 0) {
                            lVar19 = *(long *)(lVar19 + 0x30);
                            lVar25 = 0xf;
                            __ptr_00[0xc] = lVar19;
                          }
                          else {
                            lVar25 = lVar25 + -1;
                          }
                          lVar46 = lVar46 + -1;
                        } while (*(char *)(lVar19 + lVar25 * 3) == '\0');
                        __ptr_00[0xe] = lVar46;
                      }
                      if (lVar25 == 0) {
                        lVar19 = *(long *)(lVar19 + 0x30);
                        lVar25 = 0xf;
                        __ptr_00[0xc] = lVar19;
                      }
                      else {
                        lVar25 = lVar25 + -1;
                      }
                      lVar64 = 0;
                      lVar46 = 0;
                      __ptr_00[0xd] = lVar25;
                      __ptr_00[0xe] = __ptr_00[0xe] + -1;
                      local_c0 = local_c0 + -1;
                    }
                  }
                  else {
                    lVar46 = lVar46 + -1;
                  }
                  lVar19 = lVar19 + lVar25 * 3;
LAB_00567560:
                  *(undefined1 *)(__ptr_00[1] + uVar43) = *(undefined1 *)(lVar19 + 2);
                  cVar10 = *(char *)(__ptr_00[0xc] + __ptr_00[0xd] * 3 + 1);
                  if (cVar10 != '\x0e') {
                    *(char *)(*__ptr_00 + uVar43) = cVar10;
LAB_0056758c:
                    if ((*(char *)(*__ptr_00 + uVar24) == *(char *)(*__ptr_00 + uVar43)) &&
                       (*(char *)(__ptr_00[1] + uVar24) == *(char *)(__ptr_00[1] + uVar43))) {
                      lVar19 = __ptr_00[2];
                      goto LAB_005675b8;
                    }
                  }
LAB_005675c0:
                  bVar54 = false;
                  goto LAB_005675c4;
                }
                if (bVar63 == 0x13) {
                  uVar21 = (*(byte *)(__ptr_00[0xc] + __ptr_00[0xd] * 3 + 2) & 0xfffffffe) + 2;
                  if ((((uVar21 & 0xfe) < 0x7e) && (lVar46 == 0)) && (lVar64 == 0)) {
LAB_00567240:
                    uVar14 = 0xe;
                    goto LAB_0056732c;
                  }
                }
                else {
                  if (bVar63 != 0x14) goto LAB_00567374;
                  uVar21 = *(byte *)(__ptr_00[0xc] + __ptr_00[0xd] * 3 + 2) + 1;
                  if ((((uVar21 & 0xff) < 0x7e) && (lVar46 == 0)) && (lVar64 == 0)) {
                    uVar21 = uVar21 | 1;
                    goto LAB_00567240;
                  }
                }
LAB_0056734c:
                if (lVar46 == 0) {
                  lVar64 = lVar64 + 1;
                }
              }
              else if (bVar63 == 0x15) {
                uVar21 = (*(byte *)(__ptr_00[0xc] + __ptr_00[0xd] * 3 + 2) & 0xfffffffe) + 2;
                if ((0x7d < (uVar21 & 0xfe) || lVar46 != 0) || lVar64 != 0) goto LAB_0056734c;
                cVar10 = FUN_005682f8(plVar17,uVar21,1,0);
                if (cVar10 == '\0') goto LAB_00568210;
                lVar64 = 0;
                lVar46 = 0;
              }
              else if (bVar63 == 0x16) {
                uVar21 = *(byte *)(__ptr_00[0xc] + __ptr_00[0xd] * 3 + 2) + 1;
                if (((0x7d < (uVar21 & 0xff)) || (lVar46 != 0)) || (lVar64 != 0)) goto LAB_0056734c;
                uVar21 = uVar21 | 1;
                uVar14 = 2;
LAB_0056732c:
                cVar10 = FUN_005682f8(plVar17,uVar21,uVar14,0);
                if (cVar10 == '\0') goto LAB_00568210;
                lVar64 = 0;
                lVar46 = 0;
              }
              else {
                if (bVar63 != 0x17) goto LAB_00567374;
                if (lVar46 == 0) {
                  if (lVar64 == 0) {
                    lVar19 = __ptr_00[0xd];
                    if ((*(char *)(__ptr_00[0xc] + lVar19 * 3) == '\0') &&
                       (1 < (ulong)__ptr_00[0xe])) {
                      if (lVar19 == 0) {
                        __ptr_00[0xc] = *(long *)(__ptr_00[0xc] + 0x30);
                        lVar19 = 0xf;
                      }
                      else {
                        lVar19 = lVar19 + -1;
                      }
                      lVar64 = 0;
                      lVar46 = 0;
                      __ptr_00[0xd] = lVar19;
                      __ptr_00[0xe] = __ptr_00[0xe] - 1;
                    }
                    else {
                      lVar64 = 0;
                      lVar46 = 0;
                    }
                  }
                  else {
                    lVar46 = 0;
                    lVar64 = lVar64 + -1;
                  }
                }
              }
LAB_00567354:
              *(undefined1 *)(*__ptr_00 + uVar43) = 4;
              lVar19 = __ptr_00[2];
              uVar23 = *(undefined4 *)(lVar19 + (ulong)*(uint *)(lVar19 + uVar24 * 4) * 4);
LAB_0056736c:
              *(undefined4 *)(lVar19 + uVar24 * 4) = uVar23;
            }
            lVar19 = __ptr_00[2];
            uVar21 = *(uint *)(lVar19 + uVar43 * 4);
          } while (uVar21 != uVar22);
        }
        uVar21 = *(uint *)(__ptr_00 + 3);
        lVar18 = __ptr[2];
        uVar22 = *(uint *)(lVar19 + (ulong)uVar21 * 4);
        __ptr[2] = lVar18 + 1;
        if (uVar22 != uVar21) {
          uVar24 = 0;
          do {
            uVar43 = (ulong)(uVar22 - 1);
            if (uVar24 <= uVar43 && uVar43 - uVar24 != 0) {
              memset((void *)(lVar18 + 1 + uVar24),param_4,uVar43 - uVar24);
              lVar19 = __ptr_00[2];
              uVar24 = uVar43;
            }
            param_4 = (uint)*(byte *)(__ptr_00[1] + (ulong)uVar22);
            uVar22 = *(uint *)(lVar19 + (ulong)uVar22 * 4);
          } while (uVar22 != uVar21);
        }
        if (param_1 != 0) {
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
        }
        bVar54 = false;
        *(undefined1 *)(__ptr + 5) = uVar4;
        *__ptr = param_1;
        __ptr[1] = lVar61;
        __ptr[3] = param_2;
        __ptr[4] = lVar59;
        __ptr[6] = 1;
LAB_00568178:
        pvVar12 = (void *)__ptr_00[0xb];
        while (pvVar12 != (void *)0x0) {
          pvVar62 = *(void **)((long)pvVar12 + 0x38);
          free(pvVar12);
          pvVar12 = pvVar62;
        }
        pvVar12 = (void *)__ptr_00[0x28];
        while (pvVar12 != (void *)0x0) {
          pvVar62 = *(void **)((long)pvVar12 + 200);
          free(pvVar12);
          pvVar12 = pvVar62;
        }
        pvVar12 = (void *)__ptr_00[0x49];
        while (pvVar12 != (void *)0x0) {
          pvVar62 = *(void **)((long)pvVar12 + 0x90);
          free(pvVar12);
          pvVar12 = pvVar62;
        }
        free(__ptr_00);
        if (!bVar54) goto LAB_005681d8;
      }
      free(__ptr);
    }
  }
  __ptr = (long *)0x0;
LAB_005681d8:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __ptr;
LAB_00567da8:
  puVar51 = puVar51 + -1;
  bVar54 = lVar41 <= lVar47;
  lVar41 = lVar41 + -1;
  if (bVar54) goto code_r0x00567db8;
  goto LAB_00567d7c;
code_r0x00567db8:
  if (lVar37 == lVar34) goto LAB_00567e48;
  lVar37 = *(long *)(lVar37 + 0x88);
  lVar41 = 7;
  goto LAB_00567d60;
LAB_00567e48:
  if ((char)__ptr_00[0x4f] != '\0') {
LAB_00567e50:
    FUN_00568394(__ptr_00 + 0x32);
  }
LAB_00567e5c:
  uVar60 = *(uint *)(plVar31[2] + (ulong)uVar60 * 4);
  if (uVar60 == uVar56) goto LAB_00567e6c;
  goto LAB_00567b40;
}


// ===== 0056821c  FUN_0056821c =====

undefined4 FUN_0056821c(long *param_1,uint param_2,uint param_3,undefined4 param_4,char param_5)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  uVar3 = (ulong)*(uint *)(lVar2 + (ulong)param_2 * 4);
  if (uVar3 == param_3) {
    return param_4;
  }
  uVar4 = (ulong)param_3;
LAB_00568244:
  bVar1 = *(byte *)(*param_1 + uVar3);
  uVar6 = (uint)bVar1;
  if (bVar1 < 0x12) {
    if (uVar6 - 0xf < 3) {
      uVar3 = (ulong)*(uint *)(lVar2 + uVar3 * 4);
      if (uVar3 == uVar4) {
        return param_4;
      }
      lVar5 = 1;
      do {
        uVar6 = (uint)*(byte *)(*param_1 + uVar3);
        if (uVar6 - 0xf < 3) {
          lVar5 = lVar5 + 1;
        }
        else if ((uVar6 == 0x12) && (lVar5 = lVar5 + -1, lVar5 == 0)) goto LAB_005682d0;
        uVar3 = (ulong)*(uint *)(lVar2 + uVar3 * 4);
        if (uVar3 == uVar4) {
          return param_4;
        }
      } while( true );
    }
    if (uVar6 - 2 < 2) {
      return 1;
    }
    if (uVar6 == 1) {
      return 0;
    }
  }
  else if ((uVar6 == 0x12) && (param_5 != '\0')) {
    return param_4;
  }
  goto LAB_005682d8;
LAB_005682d0:
  if (uVar3 == 0xffffffff) {
    return param_4;
  }
LAB_005682d8:
  uVar3 = (ulong)*(uint *)(lVar2 + uVar3 * 4);
  if (uVar3 == uVar4) {
    return param_4;
  }
  goto LAB_00568244;
}


// ===== 005682f8  FUN_005682f8 =====

undefined8 FUN_005682f8(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  void *pvVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x48) == 0xf) {
    lVar3 = *(long *)(param_1 + 0x40);
    pvVar2 = *(void **)(lVar3 + 0x38);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = malloc(0x40);
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      *(long *)((long)pvVar2 + 0x30) = lVar3;
      *(undefined8 *)((long)pvVar2 + 0x38) = 0;
      *(void **)(lVar3 + 0x38) = pvVar2;
    }
    lVar3 = 0;
    *(void **)(param_1 + 0x40) = pvVar2;
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x48) + 1;
  }
  *(long *)(param_1 + 0x48) = lVar3;
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  puVar1 = (undefined1 *)((long)pvVar2 + lVar3 * 3);
  puVar1[2] = param_2;
  puVar1[1] = param_3;
  *puVar1 = param_4;
  return 1;
}


// ===== 00568394  FUN_00568394 =====

void FUN_00568394(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  
  bVar6 = (*(byte *)(*(long *)(param_1 + 0x18) + 0x16) & 1) != 0;
  bVar8 = 1;
  if (bVar6) {
    bVar8 = 2;
  }
  bVar9 = 1;
  if (!bVar6) {
    bVar9 = 2;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    plVar10 = *(long **)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0xd0);
    do {
      lVar1 = *(long *)(param_1 + 0xc0) + lVar11 * 4;
      uVar2 = *(uint *)(lVar1 + 0x40);
      uVar3 = *(uint *)(lVar1 + 0x60);
      if (uVar2 != 0xffffffff && uVar3 != 0xffffffff) {
        bVar12 = *(byte *)(*(long *)(param_1 + 0xc0) + lVar11 + 0x80);
        bVar5 = bVar8;
        if (bVar12 != bVar8) {
          if (bVar12 != bVar9) goto LAB_00568468;
          uVar4 = *(uint *)(lVar1 + 0x20);
          if (uVar4 == 0xffffffff) {
            bVar12 = *(byte *)(param_1 + 0xfc);
          }
          else {
            bVar12 = *(byte *)(*plVar10 + (ulong)uVar4);
            uVar4 = *(uint *)(plVar10[2] + (ulong)uVar4 * 4);
            bVar5 = 2;
            if ((bVar12 & 0xfe) != 6) {
              bVar5 = bVar12;
            }
            while (bVar12 = bVar5, uVar7 = (ulong)uVar4, uVar7 != uVar2) {
              bVar5 = *(byte *)(*plVar10 + uVar7);
              uVar4 = *(uint *)(plVar10[2] + uVar7 * 4);
              if ((bVar5 - 1 & 0xfe) != 0) {
                bVar5 = bVar12;
              }
            }
          }
          bVar5 = bVar9;
          if (bVar12 != bVar9) {
            bVar5 = bVar8;
          }
        }
        *(byte *)(*plVar10 + (ulong)uVar2) = bVar5;
        *(byte *)(*plVar10 + (ulong)uVar3) = bVar5;
        lVar11 = *(long *)(param_1 + 0xd0);
      }
LAB_00568468:
      if (lVar11 == 7) {
        if (*(long *)(param_1 + 0xc0) == *(long *)(param_1 + 200)) {
          lVar11 = 0;
          *(undefined8 *)(param_1 + 0xd8) = 0xffffffffffffffff;
        }
        else {
          lVar11 = 0;
          *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x90);
        }
      }
      else {
        lVar11 = lVar11 + 1;
      }
      *(long *)(param_1 + 0xd0) = lVar11;
      lVar1 = *(long *)(param_1 + 0xe0) + -1;
      *(long *)(param_1 + 0xe0) = lVar1;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 005684b4  SBAlgorithmRetain =====

void SBAlgorithmRetain(long param_1)

{
  if (param_1 != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  return;
}


// ===== 005684c8  SBAlgorithmRelease =====

void SBAlgorithmRelease(void *param_1)

{
  long lVar1;
  
  if ((param_1 != (void *)0x0) &&
     (lVar1 = *(long *)((long)param_1 + 0x20) + -1, *(long *)((long)param_1 + 0x20) = lVar1,
     lVar1 == 0)) {
    free(param_1);
    return;
  }
  return;
}


// ===== 005684e4  SBCodepointGetBidiType =====

undefined1 SBCodepointGetBidiType(ulong param_1)

{
  if (((uint)(param_1 >> 0x10) & 0xffff) < 0x11) {
    return (&DAT_002656e6)
           [(param_1 & 0xf) +
            (ulong)*(ushort *)
                    (&DAT_00266896 +
                    (((param_1 & 0xffffffff) >> 4 & 0x3f) +
                    (ulong)*(ushort *)(&DAT_00267d96 + (param_1 >> 10 & 0x3fffff) * 2)) * 2)];
  }
  return 0xe;
}


// ===== 00568538  SBCodepointGetGeneralCategory =====

undefined1 SBCodepointGetGeneralCategory(ulong param_1)

{
  if ((uint)param_1 < 0x10fffe) {
    return (&DAT_00268616)
           [(param_1 & 0xf) +
            (ulong)*(ushort *)
                    (&DAT_0026b0a4 +
                    ((ulong)*(ushort *)(&DAT_0026cfac + ((param_1 & 0xffffffff) / 0x310) * 2) +
                    (ulong)((uint)param_1 + (int)((param_1 & 0xffffffff) / 0x310) * -0x310 >> 4)) *
                    2)];
  }
  return 0x1e;
}


// ===== 0056859c  SBCodepointGetMirror =====

int SBCodepointGetMirror(uint param_1)

{
  uint uVar1;
  
  if ((param_1 < 0xff64) &&
     (uVar1 = (param_1 & 0xffff) / 0x6a,
     (int)((ulong)(byte)(&DAT_0026db12)
                        [(ulong)*(ushort *)(&DAT_0026e418 + (ulong)uVar1 * 2) +
                         (ulong)(ushort)((short)param_1 + (short)uVar1 * -0x6a)] & 0x3f) != 0)) {
    return (int)*(short *)(&DAT_0026dac8 +
                          ((ulong)(byte)(&DAT_0026db12)
                                        [(ulong)*(ushort *)(&DAT_0026e418 + (ulong)uVar1 * 2) +
                                         (ulong)(ushort)((short)param_1 + (short)uVar1 * -0x6a)] &
                          0x3f) * 2) + param_1;
  }
  return 0;
}


// ===== 00568600  SBCodepointGetScript =====

undefined1 SBCodepointGetScript(uint param_1)

{
  if (param_1 < 0xe01f0) {
    return (&DAT_0026ea0e)
           [((ulong)param_1 & 0xf) +
            (ulong)*(ushort *)
                    (&DAT_0027138e +
                    (((ulong)(param_1 >> 4) & 0x1f) +
                    (ulong)*(ushort *)(&DAT_00272ccc + (ulong)(param_1 >> 9) * 2)) * 2)];
  }
  return 3;
}


// ===== 00568658  SBScriptGetOpenTypeTag =====

undefined4 SBScriptGetOpenTypeTag(uint param_1)

{
  return *(undefined4 *)
          (
          "rtahwulhgnuhtlumwngsmldaskhbcramawenegsognatTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDTLFDbaranmra2gnbopoblryc2vedroegkerg2rjg2ruggnahinahrbehanakanak2dnk oalntal2mlm2yro2lmt2letiahttbitiarbsnacrehcihtermhkgnom2mymmagornurhniscrysaaht  iytrsdhtoglatidhubonahbgatglgttrpcbmilbnilamsowahselatraguigubtpocgalgrahkolysulatgnftoepxilab okngahpxnhpxusxiracmahcilakcpelicylidylkclognjrruasdnus iavimratsvaumabpygeavajihtkanalusilietmhkroilhpitrprmasbrastvatktabharbdnammkaccremoremdrlpdrhsarosrkatbhgassablpudablenarggnmhjohkaniljhaminamdnemidomoormbrantabnmlapcuapmrepplhpddisdnishritarawmoha"
          + ((ulong)(param_1 ^ 0x80) & 0xff) * 4);
}


// ===== 00568670  SBCodepointSequenceGetCodepointBefore =====

void SBCodepointSequenceGetCodepointBefore(int *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar8 = *param_2;
  uVar9 = uVar8 - 1;
  if (uVar9 < *(ulong *)(param_1 + 4)) {
    iVar2 = *param_1;
    if (iVar2 == 2) {
      lVar6 = *(long *)(param_1 + 2);
      *param_2 = uVar9;
      uVar5 = *(uint *)(lVar6 + uVar9 * 4);
      if (uVar5 >> 0xb == 0x1b || 0x10ffff < uVar5) {
        uVar5 = 0xfffd;
      }
      goto LAB_0056870c;
    }
    if (iVar2 == 1) {
      lVar6 = *(long *)(param_1 + 2);
      *param_2 = uVar9;
      uVar3 = *(ushort *)(lVar6 + uVar9 * 2);
      uVar5 = (uint)uVar3;
      if ((((uVar5 & 0xf800) == 0xd800) && (uVar5 = 0xfffd, uVar9 != 0)) && (0x36 < uVar3 >> 10)) {
        uVar7 = (uint)*(ushort *)(lVar6 + (uVar8 - 2) * 2);
        if ((uVar7 & 0xfc00) == 0xd800) {
          *param_2 = uVar8 - 2;
          uVar5 = (uint)uVar3 + uVar7 * 0x400 + 0xfca02400;
        }
      }
      goto LAB_0056870c;
    }
    if (iVar2 == 0) {
      lVar6 = 0;
      uVar10 = uVar8 - 6;
      do {
        if (lVar6 == -6) goto LAB_005687c8;
        if (uVar8 + lVar6 == 1) {
          uVar10 = 0;
          goto LAB_005687c8;
        }
        lVar1 = *(long *)(param_1 + 2) + uVar8 + lVar6;
        lVar6 = lVar6 + -1;
      } while ((*(byte *)(lVar1 + -1) & 0xc0) == 0x80);
      uVar10 = uVar8 + lVar6;
LAB_005687c8:
      local_50 = uVar10;
      uVar5 = FUN_00566a6c(*(long *)(param_1 + 2),*(ulong *)(param_1 + 4),&local_50);
      if (local_50 != uVar8) {
        uVar5 = 0xfffd;
        uVar10 = uVar9;
      }
      *param_2 = uVar10;
      goto LAB_0056870c;
    }
  }
  uVar5 = 0xffffffff;
LAB_0056870c:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 005687f4  SBLineGetOffset =====

undefined8 SBLineGetOffset(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 005687fc  SBLineGetLength =====

undefined8 SBLineGetLength(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00568804  SBLineGetRunCount =====

undefined8 SBLineGetRunCount(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0056880c  SBLineGetRunsPtr =====

undefined8 SBLineGetRunsPtr(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00568814  SBLineRetain =====

void SBLineRetain(long param_1)

{
  if (param_1 != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  }
  return;
}


// ===== 00568828  SBLineRelease =====

void SBLineRelease(void *param_1)

{
  long lVar1;
  
  if ((param_1 != (void *)0x0) &&
     (lVar1 = *(long *)((long)param_1 + 0x38) + -1, *(long *)((long)param_1 + 0x38) = lVar1,
     lVar1 == 0)) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00568844  SBMirrorLocatorCreate =====

void SBMirrorLocatorCreate(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[5] = 1;
    puVar1[2] = 0xffffffffffffffff;
    puVar1[3] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  return;
}


// ===== 00568878  SBMirrorLocatorReset =====

void SBMirrorLocatorReset(long param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  return;
}


// ===== 0056888c  SBMirrorLocatorLoadLine =====

void SBMirrorLocatorLoadLine(long *param_1,long param_2,long param_3)

{
  void *__ptr;
  long lVar1;
  
  __ptr = (void *)*param_1;
  if ((__ptr != (void *)0x0) &&
     (lVar1 = *(long *)((long)__ptr + 0x38) + -1, *(long *)((long)__ptr + 0x38) = lVar1, lVar1 == 0)
     ) {
    free(__ptr);
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 8) == param_3)) {
    lVar1 = *(long *)(param_2 + 0x38);
    *param_1 = param_2;
    *(long *)(param_2 + 0x38) = lVar1 + 1;
  }
  param_1[1] = 0;
  param_1[2] = -1;
  param_1[3] = -1;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00568904  SBMirrorLocatorGetAgent =====

long SBMirrorLocatorGetAgent(long param_1)

{
  return param_1 + 0x18;
}


// ===== 0056890c  SBMirrorLocatorMoveNext =====

/* WARNING: Removing unreachable block (ram,0x00568a08) */

undefined8 SBMirrorLocatorMoveNext(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar11 = *param_1;
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    lVar10 = *(long *)(lVar11 + 0x18);
    uVar12 = param_1[1];
    do {
      if ((*(byte *)(lVar10 + uVar12 * 0x18 + 0x10) & 1) != 0) {
        puVar6 = (ulong *)(lVar10 + uVar12 * 0x18);
        uVar8 = *puVar6;
        uVar1 = puVar6[1];
        local_70 = uVar8;
        if (param_1[2] != 0xffffffffffffffff) {
          local_70 = param_1[2];
        }
        while (uVar4 = local_70, local_70 < uVar1 + uVar8) {
          uVar5 = SBCodepointSequenceGetCodepointAt(lVar11,&local_70);
          if (uVar5 < 0xff64) {
            uVar2 = (uVar5 & 0xffff) / 0x6a;
            uVar7 = (ulong)(byte)(&DAT_0026db12)
                                 [(ulong)*(ushort *)(&DAT_0026e418 + (ulong)uVar2 * 2) +
                                  (ulong)(ushort)((short)uVar5 + (short)uVar2 * -0x6a)] & 0x3f;
            if ((int)uVar7 != 0) {
              uVar7 = (ulong)(uVar5 + (int)*(short *)(&DAT_0026dac8 + uVar7 * 2));
            }
            if ((int)uVar7 != 0) {
              *(int *)(param_1 + 4) = (int)uVar7;
              *(uint *)((long)param_1 + 0x24) = uVar5;
              uVar9 = 1;
              param_1[2] = local_70;
              param_1[3] = uVar4;
              goto LAB_00568a60;
            }
          }
        }
      }
      uVar8 = *(ulong *)(lVar11 + 0x20);
      uVar12 = uVar12 + 1;
      param_1[1] = uVar12;
      param_1[2] = -1;
    } while (uVar12 < uVar8);
    uVar9 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[1] = 0;
    param_1[2] = -1;
    param_1[3] = -1;
  }
LAB_00568a60:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00568a98  SBMirrorLocatorRetain =====

void SBMirrorLocatorRetain(long param_1)

{
  if (param_1 != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  return;
}


// ===== 00568aac  SBMirrorLocatorRelease =====

void SBMirrorLocatorRelease(undefined8 *param_1)

{
  void *__ptr;
  long lVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (lVar1 = param_1[5], param_1[5] = lVar1 + -1, lVar1 + -1 == 0)) {
    __ptr = (void *)*param_1;
    if ((__ptr != (void *)0x0) &&
       (lVar1 = *(long *)((long)__ptr + 0x38) + -1, *(long *)((long)__ptr + 0x38) = lVar1,
       lVar1 == 0)) {
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00568b08  SBParagraphGetOffset =====

undefined8 SBParagraphGetOffset(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00568b10  SBParagraphGetLength =====

undefined8 SBParagraphGetLength(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00568b18  SBParagraphGetBaseLevel =====

undefined1 SBParagraphGetBaseLevel(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}


// ===== 00568b20  SBParagraphGetLevelsPtr =====

undefined8 SBParagraphGetLevelsPtr(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00568b28  SBParagraphCreateLine =====

undefined8 * SBParagraphCreateLine(long *param_1,ulong param_2,size_t param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  long *__ptr;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  byte bVar16;
  char *pcVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined8 *puVar24;
  size_t sVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  
  lVar6 = tpidr_el0;
  uVar20 = param_3 + param_2;
  puVar24 = (undefined8 *)0x0;
  lVar9 = *(long *)(lVar6 + 0x28);
  if (param_2 < uVar20) {
    uVar10 = param_1[3];
    if ((uVar10 <= param_2) && (uVar20 <= param_1[4] + uVar10)) {
      lVar1 = param_1[1];
      lVar11 = param_1[2];
      __ptr = (long *)malloc(param_3 + 0x20);
      if (__ptr == (long *)0x0) {
        puVar24 = (undefined8 *)0x0;
      }
      else {
        lVar1 = lVar1 + (param_2 - uVar10);
        *__ptr = lVar1;
        __ptr[1] = (long)(__ptr + 4);
        if (param_3 == 0) {
          __ptr[2] = 0;
          sVar25 = 0x40;
          *(undefined1 *)(__ptr + 3) = 0;
        }
        else {
          pbVar22 = (byte *)(lVar11 + (param_2 - uVar10));
          memcpy(__ptr + 4,pbVar22,param_3);
          lVar11 = 0;
          bVar16 = 0;
          sVar25 = param_3;
          do {
            bVar2 = *pbVar22;
            sVar25 = sVar25 - 1;
            bVar4 = bVar2;
            if (bVar2 <= bVar16) {
              bVar4 = bVar16;
            }
            if (bVar2 != 0xff) {
              lVar11 = lVar11 + 1;
              bVar16 = bVar4;
            }
            pbVar22 = pbVar22 + 1;
          } while (sVar25 != 0);
          bVar4 = *(byte *)(param_1 + 5);
          lVar14 = 0;
          *(byte *)(__ptr + 3) = bVar16;
          bVar7 = true;
          __ptr[2] = lVar11;
          sVar25 = param_3;
          do {
            bVar16 = *(byte *)(lVar1 + sVar25 + -1);
            if (bVar16 < 0x18) {
              uVar5 = 1 << (ulong)(bVar16 & 0x1f);
              if ((uVar5 & 0xf80010) == 0) {
                if ((uVar5 & 0x78800) == 0) {
                  if ((uVar5 & 0x3000) == 0) goto LAB_00568c98;
                }
                else if (!bVar7) goto LAB_00568c8c;
                if (lVar14 != -1) {
                  memset((void *)((long)__ptr + sVar25 + 0x1f),(uint)bVar4,lVar14 + 1);
                  lVar11 = __ptr[2];
                }
                lVar14 = 0;
                lVar11 = lVar11 + 1;
                bVar7 = true;
                __ptr[2] = lVar11;
              }
              else {
                lVar14 = lVar14 + 1;
              }
            }
            else {
LAB_00568c98:
              lVar14 = 0;
              bVar7 = false;
            }
LAB_00568c8c:
            sVar25 = sVar25 - 1;
          } while (sVar25 != 0);
          sVar25 = lVar11 * 0x18 + 0x40;
        }
        puVar24 = (undefined8 *)malloc(sVar25);
        if (puVar24 != (undefined8 *)0x0) {
          pcVar17 = (char *)__ptr[1];
          puVar12 = puVar24 + 8;
          *puVar12 = param_2;
          puVar24[3] = puVar12;
          *(char *)(puVar24 + 10) = *pcVar17;
          uVar10 = 1;
          puVar18 = puVar12;
          puVar19 = puVar12;
          uVar21 = param_2;
          sVar25 = param_3;
          uVar23 = param_2;
          if (param_3 != 0) {
            do {
              cVar3 = *pcVar17;
              puVar19 = puVar18;
              if (cVar3 != (char)puVar18[2]) {
                puVar19 = puVar18 + 3;
                *puVar19 = uVar21;
                puVar18[1] = uVar21 - uVar23;
                uVar10 = uVar10 + 1;
                *(char *)(puVar18 + 5) = cVar3;
                uVar23 = uVar21;
              }
              sVar25 = sVar25 - 1;
              pcVar17 = pcVar17 + 1;
              puVar18 = puVar19;
              uVar21 = uVar21 + 1;
            } while (sVar25 != 0);
          }
          bVar16 = *(byte *)(__ptr + 3);
          puVar24[4] = uVar10;
          puVar19[1] = uVar20 - uVar23;
          for (; uVar20 = uVar10, bVar16 != 0; bVar16 = bVar16 - 1) {
            while (uVar21 = uVar20, uVar21 != 0) {
              uVar20 = uVar21 - 1;
              if (bVar16 <= (byte)puVar12[uVar20 * 3 + 2]) {
                if (uVar20 == 0) break;
                uVar23 = 1;
                pbVar22 = (byte *)(puVar24 + uVar21 * 3 + 4);
                do {
                  uVar8 = uVar23;
                  if (*pbVar22 < bVar16) break;
                  uVar20 = uVar20 - 1;
                  uVar23 = uVar23 + 1;
                  uVar8 = uVar21;
                  pbVar22 = pbVar22 + -0x18;
                } while (uVar20 != 0);
                if (1 < uVar8) {
                  uVar21 = uVar8 >> 1;
                  puVar19 = puVar12 + uVar20 * 3;
                  puVar18 = puVar24 + uVar8 * 3 + uVar20 * 3 + 5;
                  do {
                    uVar26 = *puVar18;
                    uVar23 = puVar18[2];
                    uVar21 = uVar21 - 1;
                    uVar30 = puVar19[1];
                    uVar29 = *puVar19;
                    uVar8 = puVar19[2];
                    puVar19[1] = puVar18[1];
                    *puVar19 = uVar26;
                    puVar19[2] = uVar23;
                    puVar19 = puVar19 + 3;
                    puVar18[1] = uVar30;
                    *puVar18 = uVar29;
                    puVar18[2] = uVar8;
                    puVar18 = puVar18 + -3;
                  } while (uVar21 != 0);
                }
              }
            }
          }
          puVar13 = (undefined8 *)*param_1;
          uVar15 = puVar13[2];
          uVar28 = puVar13[1];
          uVar27 = *puVar13;
          puVar24[5] = param_2;
          puVar24[6] = param_3;
          puVar24[1] = uVar28;
          *puVar24 = uVar27;
          puVar24[2] = uVar15;
          puVar24[7] = 1;
        }
        free(__ptr);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar24;
}


// ===== 00568e78  SBParagraphRetain =====

void SBParagraphRetain(long param_1)

{
  if (param_1 != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  return;
}


// ===== 00568e8c  SBParagraphRelease =====

void SBParagraphRelease(undefined8 *param_1)

{
  void *__ptr;
  long lVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (lVar1 = param_1[6], param_1[6] = lVar1 + -1, lVar1 + -1 == 0)) {
    __ptr = (void *)*param_1;
    if ((__ptr != (void *)0x0) &&
       (lVar1 = *(long *)((long)__ptr + 0x20) + -1, *(long *)((long)__ptr + 0x20) = lVar1,
       lVar1 == 0)) {
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00568ee8  SBScriptLocatorCreate =====

void SBScriptLocatorCreate(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x248);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0x90) = 1;
    *(undefined8 *)(puVar1 + 0x84) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined1 *)(puVar1 + 0x8e) = 0;
    *(undefined8 *)(puVar1 + 0x88) = 0;
    *(undefined8 *)(puVar1 + 0x86) = 0;
    *(undefined8 *)(puVar1 + 0x8c) = 0;
    *(undefined8 *)(puVar1 + 0x8a) = 0;
  }
  return;
}


// ===== 00568f2c  SBScriptLocatorReset =====

void SBScriptLocatorReset(long param_1)

{
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  return;
}


// ===== 00568f48  SBScriptLocatorLoadCodepoints =====

void SBScriptLocatorLoadCodepoints(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[0x42] = 0xffffffffffffffff;
  param_1[2] = uVar1;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  return;
}


// ===== 00568f74  SBScriptLocatorGetAgent =====

long SBScriptLocatorGetAgent(long param_1)

{
  return param_1 + 0x228;
}


// ===== 00568f7c  SBScriptLocatorMoveNext =====

void SBScriptLocatorMoveNext(long param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar3 = *(long *)(param_1 + 0x230) + *(long *)(param_1 + 0x228);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x218);
    lVar2 = param_1 + 0x18;
    local_70 = uVar3;
    bVar18 = 2;
LAB_00569014:
    uVar10 = local_70;
    uVar12 = SBCodepointSequenceGetCodepointAt(param_1,&local_70);
    if (uVar12 != 0xffffffff) {
      if (0xe01ef < uVar12) {
        bVar11 = true;
        bVar14 = 3;
LAB_00569170:
        if (((2 < bVar14) && (2 < bVar18)) && (bVar18 != bVar14)) goto LAB_00569360;
        if (((bVar18 < 3) && (2 < bVar14)) &&
           (lVar16 = *(long *)(param_1 + 0x220), bVar18 = bVar14, lVar16 != 0)) {
          lVar15 = *(long *)(param_1 + 0x210);
          lVar17 = ((lVar15 - lVar16) + 0x3f) % 0x3f;
          do {
            lVar16 = lVar16 + -1;
            lVar17 = (lVar17 + 1) % 0x3f;
            *(byte *)(lVar2 + lVar17 * 8) = bVar14;
          } while (lVar16 != 0);
          *(undefined8 *)(param_1 + 0x220) = 0;
          lVar16 = 0;
          if (bVar11) goto LAB_00569014;
        }
        else {
          if (bVar11) goto LAB_00569014;
          lVar16 = *(long *)(param_1 + 0x220);
          lVar15 = *(long *)(param_1 + 0x210);
        }
        lVar17 = 0;
        if (lVar16 != 0) {
          lVar17 = lVar16 + -1;
        }
        *(long *)(param_1 + 0x220) = lVar17;
        lVar17 = *(long *)(param_1 + 0x218) + -1;
        *(long *)(param_1 + 0x218) = lVar17;
        lVar16 = (lVar15 + 0x3e) % 0x3f;
        if (lVar17 == 0) {
          lVar16 = -1;
        }
        *(long *)(param_1 + 0x210) = lVar16;
        goto LAB_00569014;
      }
      bVar14 = (&DAT_0026ea0e)
               [((ulong)uVar12 & 0xf) +
                (ulong)*(ushort *)
                        (&DAT_0027138e +
                        (((ulong)(uVar12 >> 4) & 0x1f) +
                        (ulong)*(ushort *)(&DAT_00272ccc + (ulong)(uVar12 >> 9) * 2)) * 2)];
      if (bVar14 != 2) {
        bVar11 = true;
        goto LAB_00569170;
      }
      if ((&DAT_00268616)
          [(ulong)*(ushort *)
                   (&DAT_0026b0a4 +
                   ((ulong)*(ushort *)(&DAT_0026cfac + ((ulong)uVar12 / 0x310) * 2) +
                   (ulong)(uVar12 % 0x310 >> 4)) * 2) + ((ulong)uVar12 & 0xf)] == '\x0f') {
        if ((((uVar12 < 0xff64) &&
             (uVar6 = (uVar12 & 0xffff) / 0x6a,
             (int)((ulong)(byte)(&DAT_0026db12)
                                [(ulong)*(ushort *)(&DAT_0026e418 + (ulong)uVar6 * 2) +
                                 (ulong)(ushort)((short)uVar12 + (short)uVar6 * -0x6a)] & 0x3f) != 0
             )) && (uVar12 + (int)*(short *)(&DAT_0026dac8 +
                                            ((ulong)(byte)(&DAT_0026db12)
                                                          [(ulong)*(ushort *)
                                                                   (&DAT_0026e418 + (ulong)uVar6 * 2
                                                                   ) +
                                                           (ulong)(ushort)((short)uVar12 +
                                                                          (short)uVar6 * -0x6a)] &
                                            0x3f) * 2) != 0)) && (*(long *)*pauVar1 != 0)) {
          lVar16 = *(long *)(param_1 + 0x210);
          lVar15 = *(long *)*pauVar1 + -1;
          do {
            if (*(uint *)(lVar2 + lVar16 * 8 + 4) == uVar12) {
              bVar11 = false;
              bVar14 = *(byte *)(lVar2 + lVar16 * 8);
              goto LAB_00569170;
            }
            *(long *)(param_1 + 0x218) = lVar15;
            lVar17 = 0;
            if (*(long *)(param_1 + 0x220) != 0) {
              lVar17 = *(long *)(param_1 + 0x220) + -1;
            }
            bVar11 = lVar15 == 0;
            lVar15 = lVar15 + -1;
            lVar16 = (lVar16 + 0x3e) % 0x3f;
            *(long *)(param_1 + 0x220) = lVar17;
            lVar17 = lVar16;
            if (bVar11) {
              lVar17 = -1;
            }
            *(long *)(param_1 + 0x210) = lVar17;
          } while (lVar15 != -1);
        }
      }
      else if ((((&DAT_00268616)
                 [(ulong)*(ushort *)
                          (&DAT_0026b0a4 +
                          ((ulong)*(ushort *)(&DAT_0026cfac + ((ulong)uVar12 / 0x310) * 2) +
                          (ulong)(uVar12 % 0x310 >> 4)) * 2) + ((ulong)uVar12 & 0xf)] == '\x0e' &&
                 uVar12 < 0xff64) &&
               (uVar6 = (uVar12 & 0xffff) / 0x6a,
               (int)((ulong)(byte)(&DAT_0026db12)
                                  [(ulong)*(ushort *)(&DAT_0026e418 + (ulong)uVar6 * 2) +
                                   (ulong)(ushort)((short)uVar12 + (short)uVar6 * -0x6a)] & 0x3f) !=
               0)) && (sVar5 = *(short *)(&DAT_0026dac8 +
                                         ((ulong)(byte)(&DAT_0026db12)
                                                       [(ulong)*(ushort *)
                                                                (&DAT_0026e418 + (ulong)uVar6 * 2) +
                                                        (ulong)(ushort)((short)uVar12 +
                                                                       (short)uVar6 * -0x6a)] & 0x3f
                                         ) * 2), uVar12 + (int)sVar5 != 0)) {
        lVar16 = *(long *)(param_1 + 0x210);
        auVar9._8_8_ = 0x3f;
        auVar9._0_8_ = 0x3f;
        auVar19._8_8_ = 0x3f;
        auVar19._0_8_ = 0x3f;
        auVar8 = *pauVar1;
        auVar19 = NEON_cmhi(auVar19,auVar8,8);
        auVar20._8_8_ = auVar8._8_8_ + 1;
        auVar20._0_8_ = auVar8._0_8_ + 1;
        auVar20 = NEON_bsl(auVar19,auVar20,auVar9,1);
        *(long *)(param_1 + 0x220) = auVar20._8_8_;
        *(long *)*pauVar1 = auVar20._0_8_;
        lVar16 = (lVar16 + 1) % 0x3f;
        pbVar4 = (byte *)(lVar2 + lVar16 * 8);
        *(long *)(param_1 + 0x210) = lVar16;
        *pbVar4 = bVar18;
        *(uint *)(pbVar4 + 4) = uVar12 + (int)sVar5;
      }
      goto LAB_00569014;
    }
LAB_00569360:
    *(undefined8 *)(param_1 + 0x220) = 0;
    uVar13 = 1;
    *(ulong *)(param_1 + 0x228) = uVar3;
    *(ulong *)(param_1 + 0x230) = uVar10 - uVar3;
    *(byte *)(param_1 + 0x238) = bVar18;
  }
  else {
    uVar13 = 0;
    *(undefined1 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


// ===== 005693ac  SBScriptLocatorRetain =====

void SBScriptLocatorRetain(long param_1)

{
  if (param_1 != 0) {
    *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x240) + 1;
  }
  return;
}


// ===== 005693c0  SBScriptLocatorRelease =====

void SBScriptLocatorRelease(void *param_1)

{
  long lVar1;
  
  if ((param_1 != (void *)0x0) &&
     (lVar1 = *(long *)((long)param_1 + 0x240) + -1, *(long *)((long)param_1 + 0x240) = lVar1,
     lVar1 == 0)) {
    free(param_1);
    return;
  }
  return;
}


// ===== 005693dc  rive_facebook::yoga::configUpdateInvalidatesLayout =====

/* rive_facebook::yoga::configUpdateInvalidatesLayout(rive_YGConfig*, rive_YGConfig*) */

byte rive_facebook::yoga::configUpdateInvalidatesLayout
               (rive_YGConfig *param_1,rive_YGConfig *param_2)

{
  if (((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) &&
      (((*(uint *)(param_2 + 0x18) ^ *(uint *)(param_1 + 0x18)) & 7) == 0)) &&
     (*(float *)(param_1 + 0x24) == *(float *)(param_2 + 0x24))) {
    return ((byte)param_1[0x10] ^ (byte)param_2[0x10]) & 1;
  }
  return 1;
}


// ===== 00569430  rive_YGConfig::getErrata =====

/* rive_YGConfig::getErrata() const */

undefined4 __thiscall rive_YGConfig::getErrata(rive_YGConfig *this)

{
  return *(undefined4 *)(this + 0x20);
}


// ===== 00569438  rive_YGConfig::getEnabledExperiments =====

/* rive_YGConfig::getEnabledExperiments() const */

undefined8 __thiscall rive_YGConfig::getEnabledExperiments(rive_YGConfig *this)

{
  return *(undefined8 *)(this + 0x18);
}


// ===== 00569440  rive_YGConfig::getPointScaleFactor =====

/* rive_YGConfig::getPointScaleFactor() const */

undefined4 __thiscall rive_YGConfig::getPointScaleFactor(rive_YGConfig *this)

{
  return *(undefined4 *)(this + 0x24);
}


// ===== 00569448  rive_YGConfig::useWebDefaults =====

/* rive_YGConfig::useWebDefaults() const */

byte __thiscall rive_YGConfig::useWebDefaults(rive_YGConfig *this)

{
  return (byte)this[0x10] & 1;
}


// ===== 00569454  rive_YGConfig::rive_YGConfig =====

/* rive_YGConfig::rive_YGConfig(int (*)(rive_YGConfig*, rive_YGNode*, rive_YGLogLevel, char const*,
   std::__va_list)) */

void __thiscall
rive_YGConfig::rive_YGConfig
          (rive_YGConfig *this,
          _func_int_rive_YGConfig_ptr_rive_YGNode_ptr_rive_YGLogLevel_char_ptr___va_list *param_1)

{
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0x3f80000000000000;
  *(undefined8 *)this = 0;
  *(_func_int_rive_YGConfig_ptr_rive_YGNode_ptr_rive_YGLogLevel_char_ptr___va_list **)(this + 8) =
       param_1;
  this[0x10] = (rive_YGConfig)((byte)this[0x10] & 0xf0);
  return;
}


// ===== 00569474  rive_YGConfig::setLogger =====

/* rive_YGConfig::setLogger(int (*)(rive_YGConfig*, rive_YGNode*, rive_YGLogLevel, char const*,
   std::__va_list)) */

void __thiscall
rive_YGConfig::setLogger
          (rive_YGConfig *this,
          _func_int_rive_YGConfig_ptr_rive_YGNode_ptr_rive_YGLogLevel_char_ptr___va_list *param_1)

{
  *(_func_int_rive_YGConfig_ptr_rive_YGNode_ptr_rive_YGLogLevel_char_ptr___va_list **)(this + 8) =
       param_1;
  this[0x10] = (rive_YGConfig)((byte)this[0x10] & 0xf7);
  return;
}


// ===== 00569488  rive_YGConfig::setUseWebDefaults =====

/* rive_YGConfig::setUseWebDefaults(bool) */

void __thiscall rive_YGConfig::setUseWebDefaults(rive_YGConfig *this,bool param_1)

{
  this[0x10] = (rive_YGConfig)((byte)this[0x10] & 0xfe | param_1);
  return;
}


// ===== 0056949c  rive_YGConfig::setShouldPrintTree =====

/* rive_YGConfig::setShouldPrintTree(bool) */

void __thiscall rive_YGConfig::setShouldPrintTree(rive_YGConfig *this,bool param_1)

{
  byte bVar1;
  
  bVar1 = 2;
  if (!param_1) {
    bVar1 = 0;
  }
  this[0x10] = (rive_YGConfig)((byte)this[0x10] & 0xfd | bVar1);
  return;
}


// ===== 005694bc  rive_YGConfig::shouldPrintTree =====

/* rive_YGConfig::shouldPrintTree() const */

byte __thiscall rive_YGConfig::shouldPrintTree(rive_YGConfig *this)

{
  return (byte)this[0x10] >> 1 & 1;
}


// ===== 005694c8  rive_YGConfig::setExperimentalFeatureEnabled =====

/* rive_YGConfig::setExperimentalFeatureEnabled(YGExperimentalFeature, bool) */

void __thiscall
rive_YGConfig::setExperimentalFeatureEnabled(rive_YGConfig *this,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00366188("bitset set argument out of range");
  }
  uVar1 = 1L << ((ulong)param_2 & 0x3f);
  if ((param_3 & 1) != 0) {
    *(ulong *)(this + 0x18) = *(ulong *)(this + 0x18) | uVar1;
    return;
  }
  *(ulong *)(this + 0x18) = *(ulong *)(this + 0x18) & (uVar1 ^ 0xffffffffffffffff);
  return;
}


// ===== 00569510  rive_YGConfig::isExperimentalFeatureEnabled =====

/* rive_YGConfig::isExperimentalFeatureEnabled(YGExperimentalFeature) const */

uint __thiscall rive_YGConfig::isExperimentalFeatureEnabled(rive_YGConfig *this,uint param_2)

{
  if (param_2 < 3) {
    return (uint)(*(ulong *)(this + 0x18) >> ((ulong)param_2 & 0x3f)) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00366188("bitset test argument out of range");
}


// ===== 0056953c  rive_YGConfig::setErrata =====

/* rive_YGConfig::setErrata(rive_YGErrata) */

void __thiscall rive_YGConfig::setErrata(rive_YGConfig *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x20) = param_2;
  return;
}


// ===== 00569544  rive_YGConfig::addErrata =====

/* rive_YGConfig::addErrata(rive_YGErrata) */

void __thiscall rive_YGConfig::addErrata(rive_YGConfig *this,uint param_2)

{
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | param_2;
  return;
}


// ===== 00569554  rive_YGConfig::removeErrata =====

/* rive_YGConfig::removeErrata(rive_YGErrata) */

void __thiscall rive_YGConfig::removeErrata(rive_YGConfig *this,uint param_2)

{
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) & (param_2 ^ 0xffffffff);
  return;
}


// ===== 00569564  rive_YGConfig::hasErrata =====

/* rive_YGConfig::hasErrata(rive_YGErrata) const */

bool __thiscall rive_YGConfig::hasErrata(rive_YGConfig *this,uint param_2)

{
  return (*(uint *)(this + 0x20) & param_2) != 0;
}


// ===== 00569574  rive_YGConfig::setPointScaleFactor =====

/* rive_YGConfig::setPointScaleFactor(float) */

void __thiscall rive_YGConfig::setPointScaleFactor(rive_YGConfig *this,float param_1)

{
  *(float *)(this + 0x24) = param_1;
  return;
}


// ===== 0056957c  rive_YGConfig::setContext =====

/* rive_YGConfig::setContext(void*) */

void __thiscall rive_YGConfig::setContext(rive_YGConfig *this,void *param_1)

{
  *(void **)(this + 0x28) = param_1;
  return;
}


// ===== 00569584  rive_YGConfig::getContext =====

/* rive_YGConfig::getContext() const */

undefined8 __thiscall rive_YGConfig::getContext(rive_YGConfig *this)

{
  return *(undefined8 *)(this + 0x28);
}


// ===== 0056958c  rive_YGConfig::setLogger =====

/* rive_YGConfig::setLogger(int (*)(rive_YGConfig*, rive_YGNode*, rive_YGLogLevel, void*, char
   const*, std::__va_list)) */

void __thiscall
rive_YGConfig::setLogger
          (rive_YGConfig *this,
          _func_int_rive_YGConfig_ptr_rive_YGNode_ptr_rive_YGLogLevel_void_ptr_char_ptr___va_list
          *param_1)

{
  *(_func_int_rive_YGConfig_ptr_rive_YGNode_ptr_rive_YGLogLevel_void_ptr_char_ptr___va_list **)
   (this + 8) = param_1;
  this[0x10] = (rive_YGConfig)((byte)this[0x10] | 8);
  return;
}


// ===== 005695a0  rive_YGConfig::setLogger =====

/* rive_YGConfig::setLogger(decltype(nullptr)) */

void rive_YGConfig::setLogger(_func_decltype_nullptr *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = (_func_decltype_nullptr)((byte)param_1[0x10] & 0xf7);
  return;
}


// ===== 005695b4  rive_YGConfig::log =====

/* rive_YGConfig::log(rive_YGConfig*, rive_YGNode*, rive_YGLogLevel, void*, char const*,
   std::__va_list) const */

void __thiscall
rive_YGConfig::log(rive_YGConfig *this,undefined8 param_1,undefined8 param_2,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x10] >> 3 & 1) == 0) {
    uStack_68 = param_7[1];
    local_70 = *param_7;
    uStack_58 = param_7[3];
    uStack_60 = param_7[2];
    (**(code **)(this + 8))(param_1,param_2,param_4,param_6,&local_70);
  }
  else {
    uStack_48 = param_7[1];
    local_50 = *param_7;
    uStack_38 = param_7[3];
    uStack_40 = param_7[2];
    (**(code **)(this + 8))(param_1,param_2,param_4,param_5,param_6,&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00569648  rive_YGConfig::setCloneNodeCallback =====

/* rive_YGConfig::setCloneNodeCallback(rive_YGNode* (*)(rive_YGNode*, rive_YGNode*, int)) */

void __thiscall
rive_YGConfig::setCloneNodeCallback
          (rive_YGConfig *this,_func_rive_YGNode_ptr_rive_YGNode_ptr_rive_YGNode_ptr_int *param_1)

{
  *(_func_rive_YGNode_ptr_rive_YGNode_ptr_rive_YGNode_ptr_int **)this = param_1;
  this[0x10] = (rive_YGConfig)((byte)this[0x10] & 0xfb);
  return;
}


// ===== 0056965c  rive_YGConfig::setCloneNodeCallback =====

/* rive_YGConfig::setCloneNodeCallback(rive_YGNode* (*)(rive_YGNode*, rive_YGNode*, int, void*)) */

void __thiscall
rive_YGConfig::setCloneNodeCallback
          (rive_YGConfig *this,
          _func_rive_YGNode_ptr_rive_YGNode_ptr_rive_YGNode_ptr_int_void_ptr *param_1)

{
  *(_func_rive_YGNode_ptr_rive_YGNode_ptr_rive_YGNode_ptr_int_void_ptr **)this = param_1;
  this[0x10] = (rive_YGConfig)((byte)this[0x10] | 4);
  return;
}


// ===== 00569670  rive_YGConfig::setCloneNodeCallback =====

/* rive_YGConfig::setCloneNodeCallback(decltype(nullptr)) */

void rive_YGConfig::setCloneNodeCallback(_func_decltype_nullptr *param_1)

{
  *(undefined8 *)param_1 = 0;
  param_1[0x10] = (_func_decltype_nullptr)((byte)param_1[0x10] & 0xfb);
  return;
}


// ===== 00569684  rive_YGConfig::cloneNode =====

/* rive_YGConfig::cloneNode(rive_YGNode*, rive_YGNode*, int, void*) const */

void __thiscall
rive_YGConfig::cloneNode
          (rive_YGConfig *this,rive_YGNode *param_1,rive_YGNode *param_2,int param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)this;
  if (pcVar2 != (code *)0x0) {
    if (((byte)this[0x10] >> 2 & 1) == 0) {
      lVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    else {
      lVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    if (lVar1 != 0) {
      return;
    }
  }
  rive_YGNodeClone(param_1);
  return;
}


// ===== 005696ec  rive_YGNode::rive_YGNode =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_YGNode::rive_YGNode(rive_YGConfig*) */

void __thiscall rive_YGNode::rive_YGNode(rive_YGNode *this,rive_YGConfig *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = _UNK_0024e578;
  uVar1 = _DAT_0024e570;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x34) = 0x7fc000007fc00000;
  this[8] = (rive_YGNode)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x60) = 0x7fc00000;
  *(undefined4 *)(this + 100) = 0x7fc00000;
  *(undefined8 *)(this + 0x50) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x70) = 0x7fc00000;
  *(undefined4 *)(this + 0x74) = 0x7fc00000;
  *(undefined8 *)(this + 0x60) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x80) = 0x7fc00000;
  *(undefined4 *)(this + 0x84) = 0x7fc00000;
  *(undefined8 *)(this + 0x70) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x90) = 0x7fc00000;
  *(undefined4 *)(this + 0x94) = 0x7fc00000;
  *(undefined8 *)(this + 0x80) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xa0) = 0x7fc00000;
  *(undefined4 *)(this + 0xa4) = 0x7fc00000;
  *(undefined8 *)(this + 0x90) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xb0) = 0x7fc00000;
  *(undefined4 *)(this + 0xb4) = 0x7fc00000;
  *(undefined8 *)(this + 0xa0) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xc0) = 0x7fc00000;
  *(undefined4 *)(this + 0xc4) = 0x7fc00000;
  *(undefined8 *)(this + 0xb0) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xd0) = 0x7fc00000;
  *(undefined4 *)(this + 0xd4) = 0x7fc00000;
  *(undefined8 *)(this + 0xc0) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xe0) = 0x7fc00000;
  *(undefined4 *)(this + 0xe4) = 0x7fc00000;
  *(undefined8 *)(this + 0xd0) = 0x7fc000007fc00000;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0xfc) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 0x10c) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0xf0) = 0x7fc000007fc00000;
  *(undefined8 *)(this + 0xe8) = 0x7fc000007fc00000;
  auVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(this + 0x10c) = 0x7fc000007fc00000;
  *(undefined8 *)(this + 0x148) = 0x7fc0000000000000;
  *(undefined4 *)(this + 0x30) = 0x1080;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined8 *)(this + 0x15c) = 0xbf800000bf800000;
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(this + 0x174) = uVar3;
  uVar1 = auVar2._0_8_;
  *(undefined8 *)(this + 0x16c) = uVar1;
  *(undefined8 *)(this + 0x18c) = uVar3;
  *(undefined8 *)(this + 0x184) = uVar1;
  *(undefined8 *)(this + 0x1a4) = uVar3;
  *(undefined8 *)(this + 0x19c) = uVar1;
  *(undefined8 *)(this + 0x1bc) = uVar3;
  *(undefined8 *)(this + 0x1b4) = uVar1;
  *(undefined8 *)(this + 0x1d4) = uVar3;
  *(undefined8 *)(this + 0x1cc) = uVar1;
  *(undefined8 *)(this + 0x1ec) = uVar3;
  *(undefined8 *)(this + 0x1e4) = uVar1;
  *(undefined8 *)(this + 0x204) = uVar3;
  *(undefined8 *)(this + 0x1fc) = uVar1;
  auVar2 = _DAT_0024de30;
  *(undefined8 *)(this + 0x224) = 0xbf800000bf800000;
  *(undefined8 *)(this + 0x22c) = 0;
  *(undefined8 *)(this + 0x234) = 0xbf800000bf800000;
  *(undefined8 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x13c) = 0;
  *(undefined8 *)(this + 0x134) = 0;
  this[0x144] = (rive_YGNode)0x0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x1c4) = 0;
  *(undefined8 *)(this + 0x1dc) = 0;
  *(undefined8 *)(this + 500) = 0;
  *(undefined8 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined8 *)(this + 0x244) = 0;
  *(undefined8 *)(this + 0x23c) = 0;
  *(undefined8 *)(this + 0x254) = 0;
  *(undefined8 *)(this + 0x24c) = 0;
  *(rive_YGConfig **)(this + 0x260) = param_1;
  *(undefined4 *)(this + 0x3c) = 0x7fc00000;
  *(undefined8 *)(this + 0xe0) = 0x7faaaaaa7faaaaaa;
  *(undefined4 *)(this + 0xf8) = 0x7fc00000;
  *(long *)(this + 0x21c) = auVar2._8_8_;
  *(long *)(this + 0x214) = auVar2._0_8_;
  *(undefined8 *)(this + 0x268) = 0x7fc00000;
  *(undefined8 *)(this + 0x270) = 0x7fc00000;
  if (param_1 == (rive_YGConfig *)0x0) {
    rive_facebook::yoga::detail::Log::log
              (0,5,0,&DAT_00242a86,"Attempting to construct YGNode with null config");
  }
  this[8] = (rive_YGNode)((byte)this[8] | 1);
  if (((byte)param_1[0x10] & 1) != 0) {
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) & 0xfffffc73 | 0x208;
  }
  return;
}


// ===== 00569878  rive_YGNode::rive_YGNode =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_YGNode::rive_YGNode(rive_YGNode&&) */

void __thiscall rive_YGNode::rive_YGNode(rive_YGNode *this,rive_YGNode *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)this = 0;
  this[8] = (rive_YGNode)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  uVar3 = _UNK_0024e578;
  uVar4 = _DAT_0024e570;
  *(undefined8 *)(this + 0x34) = 0x7fc000007fc00000;
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined4 *)(this + 0x60) = 0x7fc00000;
  *(undefined4 *)(this + 100) = 0x7fc00000;
  *(undefined8 *)(this + 0x50) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x70) = 0x7fc00000;
  *(undefined4 *)(this + 0x74) = 0x7fc00000;
  *(undefined8 *)(this + 0x60) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x80) = 0x7fc00000;
  *(undefined4 *)(this + 0x84) = 0x7fc00000;
  *(undefined8 *)(this + 0x70) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x90) = 0x7fc00000;
  *(undefined4 *)(this + 0x94) = 0x7fc00000;
  *(undefined8 *)(this + 0x80) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xa0) = 0x7fc00000;
  *(undefined4 *)(this + 0xa4) = 0x7fc00000;
  *(undefined8 *)(this + 0x90) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xb0) = 0x7fc00000;
  *(undefined4 *)(this + 0xb4) = 0x7fc00000;
  *(undefined8 *)(this + 0xa0) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xc0) = 0x7fc00000;
  *(undefined4 *)(this + 0xc4) = 0x7fc00000;
  *(undefined8 *)(this + 0xb0) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xd0) = 0x7fc00000;
  *(undefined4 *)(this + 0xd4) = 0x7fc00000;
  *(undefined8 *)(this + 0xc0) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xe0) = 0x7fc00000;
  *(undefined4 *)(this + 0xe4) = 0x7fc00000;
  *(undefined8 *)(this + 0xd0) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x3c) = 0x7fc00000;
  *(undefined8 *)(this + 0xe0) = 0x7faaaaaa7faaaaaa;
  *(undefined8 *)(this + 0xf0) = 0x7fc000007fc00000;
  *(undefined8 *)(this + 0xe8) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0xf8) = 0x7fc00000;
  *(undefined4 *)(this + 0x30) = 0x1080;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0xfc) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 0x10c) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x10c) = 0x7fc000007fc00000;
  *(undefined8 *)(this + 0x148) = 0x7fc0000000000000;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x13c) = 0;
  *(undefined8 *)(this + 0x134) = 0;
  auVar7 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(this + 0x15c) = 0xbf800000bf800000;
  *(undefined8 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x224) = 0xbf800000bf800000;
  *(undefined8 *)(this + 0x22c) = 0;
  *(undefined8 *)(this + 0x234) = 0xbf800000bf800000;
  this[0x144] = (rive_YGNode)0x0;
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x1c4) = 0;
  *(undefined8 *)(this + 0x1dc) = 0;
  *(undefined8 *)(this + 500) = 0;
  *(undefined8 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined8 *)(this + 0x244) = 0;
  *(undefined8 *)(this + 0x23c) = 0;
  *(undefined8 *)(this + 0x254) = 0;
  *(undefined8 *)(this + 0x24c) = 0;
  *(undefined8 *)(this + 0x268) = 0x7fc00000;
  uVar3 = _UNK_0024de38;
  uVar4 = _DAT_0024de30;
  *(undefined8 *)(this + 0x270) = 0x7fc00000;
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x158) = 0;
  uVar9 = auVar7._8_8_;
  *(undefined8 *)(this + 0x174) = uVar9;
  uVar8 = auVar7._0_8_;
  *(undefined8 *)(this + 0x16c) = uVar8;
  *(undefined8 *)(this + 0x18c) = uVar9;
  *(undefined8 *)(this + 0x184) = uVar8;
  *(undefined8 *)(this + 0x1a4) = uVar9;
  *(undefined8 *)(this + 0x19c) = uVar8;
  *(undefined8 *)(this + 0x1bc) = uVar9;
  *(undefined8 *)(this + 0x1b4) = uVar8;
  *(undefined8 *)(this + 0x1d4) = uVar9;
  *(undefined8 *)(this + 0x1cc) = uVar8;
  *(undefined8 *)(this + 0x1ec) = uVar9;
  *(undefined8 *)(this + 0x1e4) = uVar8;
  *(undefined8 *)(this + 0x204) = uVar9;
  *(undefined8 *)(this + 0x1fc) = uVar8;
  *(undefined8 *)(this + 0x21c) = uVar3;
  *(undefined8 *)(this + 0x214) = uVar4;
  *(undefined8 *)this = uVar2;
  this[8] = param_1[8];
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar4;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x70) = uVar4;
  *(undefined8 *)(this + 0x48) = uVar9;
  *(undefined8 *)(this + 0x40) = uVar8;
  *(undefined8 *)(this + 0x58) = uVar11;
  *(undefined8 *)(this + 0x50) = uVar10;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar11 = *(undefined8 *)(param_1 + 0x98);
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xa0) = uVar2;
  *(undefined8 *)(this + 0xb8) = uVar3;
  *(undefined8 *)(this + 0xb0) = uVar4;
  *(undefined8 *)(this + 0x88) = uVar9;
  *(undefined8 *)(this + 0x80) = uVar8;
  *(undefined8 *)(this + 0x98) = uVar11;
  *(undefined8 *)(this + 0x90) = uVar10;
  uVar11 = *(undefined8 *)(param_1 + 0xd8);
  uVar10 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0xec);
  uVar9 = *(undefined8 *)(param_1 + 200);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0xf4) = *(undefined8 *)(param_1 + 0xf4);
  *(undefined8 *)(this + 0xec) = uVar4;
  *(undefined8 *)(this + 0xd8) = uVar11;
  *(undefined8 *)(this + 0xd0) = uVar10;
  *(undefined8 *)(this + 0xe8) = uVar2;
  *(undefined8 *)(this + 0xe0) = uVar3;
  *(undefined8 *)(this + 200) = uVar9;
  *(undefined8 *)(this + 0xc0) = uVar8;
  memcpy(this + 0xfc,param_1 + 0xfc,0x140);
  uVar4 = *(undefined8 *)(param_1 + 0x240);
  uVar3 = *(undefined8 *)(param_1 + 0x250);
  uVar1 = *(undefined4 *)(param_1 + 0x23c);
  *(undefined8 *)(this + 0x248) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(this + 0x240) = uVar4;
  *(undefined8 *)(this + 0x250) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 600);
  *(undefined4 *)(this + 0x23c) = uVar1;
  *(undefined8 *)(this + 600) = uVar4;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(this + 0x260) = *(undefined8 *)(param_1 + 0x260);
  plVar5 = *(long **)(this + 0x248);
  plVar6 = *(long **)(this + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(this + 0x270) = *(undefined8 *)(param_1 + 0x270);
  *(undefined8 *)(this + 0x268) = uVar4;
  for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
    *(rive_YGNode **)(*plVar5 + 0x240) = this;
  }
  return;
}


// ===== 00569a94  rive_YGNode::print =====

/* rive_YGNode::print(void*) */

void rive_YGNode::print(void *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_1 + 0x20);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    return;
  }
  if ((*(byte *)((long)param_1 + 8) >> 6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00569aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00569aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


// ===== 00569ab0  rive_YGNode::computeEdgeValueForRow =====

/* rive_YGNode::computeEdgeValueForRow(rive_facebook::yoga::detail::Values<9ul> const&, rive_YGEdge,
   rive_YGEdge, rive_facebook::yoga::detail::CompactValue) */

float rive_YGNode::computeEdgeValueForRow(long param_1,uint param_2,uint param_3,float param_4)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + (ulong)param_2 * 4);
  if (((((fVar1 != NAN) && (fVar1 != NAN)) && (fVar1 != NAN)) &&
      (((NAN(fVar1) && (fVar1 = *(float *)(param_1 + (ulong)param_3 * 4), fVar1 != NAN)) &&
       ((fVar1 != NAN && ((fVar1 != NAN && (NAN(fVar1))))))))) &&
     ((fVar1 = *(float *)(param_1 + 0x18), fVar1 != NAN &&
      (((((fVar1 != NAN && (fVar1 != NAN)) && (NAN(fVar1))) &&
        ((fVar1 = *(float *)(param_1 + 0x20), fVar1 != NAN && (fVar1 != NAN)))) &&
       ((fVar1 != NAN && (NAN(fVar1))))))))) {
    return param_4;
  }
  return fVar1;
}


// ===== 00569bc0  rive_YGNode::computeEdgeValueForColumn =====

/* rive_YGNode::computeEdgeValueForColumn(rive_facebook::yoga::detail::Values<9ul> const&,
   rive_YGEdge, rive_facebook::yoga::detail::CompactValue) */

float rive_YGNode::computeEdgeValueForColumn(long param_1,uint param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + (ulong)param_2 * 4);
  if (((((fVar1 != NAN) && (fVar1 != NAN)) && (fVar1 != NAN)) &&
      ((((NAN(fVar1) && (fVar1 = *(float *)(param_1 + 0x1c), fVar1 != NAN)) &&
        ((fVar1 != NAN && ((fVar1 != NAN && (NAN(fVar1))))))) &&
       (fVar1 = *(float *)(param_1 + 0x20), fVar1 != NAN)))) &&
     (((fVar1 != NAN && (fVar1 != NAN)) && (NAN(fVar1))))) {
    return param_3;
  }
  return fVar1;
}


// ===== 00569c90  rive_YGNode::computeRowGap =====

/* rive_YGNode::computeRowGap(rive_facebook::yoga::detail::Values<3ul> const&,
   rive_facebook::yoga::detail::CompactValue) */

float rive_YGNode::computeRowGap(long param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  if (((((fVar1 != NAN) && (fVar1 != NAN)) && (fVar1 != NAN)) &&
      ((NAN(fVar1) && (fVar1 = *(float *)(param_1 + 8), fVar1 != NAN)))) &&
     ((fVar1 != NAN && ((fVar1 != NAN && (NAN(fVar1))))))) {
    return param_2;
  }
  return fVar1;
}


// ===== 00569d20  rive_YGNode::computeColumnGap =====

/* rive_YGNode::computeColumnGap(rive_facebook::yoga::detail::Values<3ul> const&,
   rive_facebook::yoga::detail::CompactValue) */

float rive_YGNode::computeColumnGap(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (((((fVar1 != NAN) && (fVar1 != NAN)) && (fVar1 != NAN)) &&
      ((NAN(fVar1) && (fVar1 = param_1[2], fVar1 != NAN)))) &&
     ((fVar1 != NAN && ((fVar1 != NAN && (NAN(fVar1))))))) {
    return param_2;
  }
  return fVar1;
}


// ===== 00569db0  rive_YGNode::getLeadingPosition =====

/* rive_YGNode::getLeadingPosition(rive_YGFlexDirection, float) const */

float __thiscall rive_YGNode::getLeadingPosition(float param_1,rive_YGNode *this,uint param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x78);
    if (((((fVar2 == NAN) || (fVar2 == NAN)) || (fVar2 == NAN)) ||
        ((!NAN(fVar2) ||
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_3 * 4) * 4
                                    + 0x68), fVar2 == NAN)))) ||
       ((fVar2 == NAN || ((fVar2 == NAN || (!NAN(fVar2))))))) goto LAB_00569e98;
    fVar2 = *(float *)(this + 0x80);
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_3 * 4) * 4 + 0x68
                      );
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_00569e98;
    fVar2 = *(float *)(this + 0x84);
  }
  if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
     (((NAN(fVar2) && (fVar2 = *(float *)(this + 0x88), fVar2 != NAN)) &&
      ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
    return 0.0;
  }
LAB_00569e98:
  fVar4 = 0.0;
  if (fVar2 != NAN) {
    if (fVar2 == NAN) {
      return 0.0;
    }
    pfVar3 = (float *)PTR_rive_YGValueAuto_0067d660;
    if ((fVar2 == NAN) || (pfVar3 = (float *)PTR_rive_YGValueUndefined_0067da20, NAN(fVar2))) {
      fVar4 = *pfVar3;
      if (pfVar3[1] == 1.4013e-45) {
        return fVar4;
      }
      if (pfVar3[1] != 2.8026e-45) {
        return NAN;
      }
    }
    else {
      fVar4 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
      if (((uint)fVar2 >> 0x1e & 1) == 0) {
        return fVar4;
      }
    }
  }
  return fVar4 * param_1 * 0.01;
}


// ===== 00569fd0  rive_YGNode::getTrailingPosition =====

/* rive_YGNode::getTrailingPosition(rive_YGFlexDirection, float) const */

float __thiscall rive_YGNode::getTrailingPosition(float param_1,rive_YGNode *this,uint param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x7c);
    if (((((fVar2 == NAN) || (fVar2 == NAN)) || (fVar2 == NAN)) ||
        ((!NAN(fVar2) ||
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_3 * 4) * 4
                                    + 0x68), fVar2 == NAN)))) ||
       ((fVar2 == NAN || ((fVar2 == NAN || (!NAN(fVar2))))))) goto LAB_0056a0b8;
    fVar2 = *(float *)(this + 0x80);
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_3 * 4) * 4 +
                              0x68);
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_0056a0b8;
    fVar2 = *(float *)(this + 0x84);
  }
  if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
     (((NAN(fVar2) && (fVar2 = *(float *)(this + 0x88), fVar2 != NAN)) &&
      ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
    return 0.0;
  }
LAB_0056a0b8:
  fVar4 = 0.0;
  if (fVar2 != NAN) {
    if (fVar2 == NAN) {
      return 0.0;
    }
    pfVar3 = (float *)PTR_rive_YGValueAuto_0067d660;
    if ((fVar2 == NAN) || (pfVar3 = (float *)PTR_rive_YGValueUndefined_0067da20, NAN(fVar2))) {
      fVar4 = *pfVar3;
      if (pfVar3[1] == 1.4013e-45) {
        return fVar4;
      }
      if (pfVar3[1] != 2.8026e-45) {
        return NAN;
      }
    }
    else {
      fVar4 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
      if (((uint)fVar2 >> 0x1e & 1) == 0) {
        return fVar4;
      }
    }
  }
  return fVar4 * param_1 * 0.01;
}


// ===== 0056a1f0  rive_YGNode::isLeadingPositionDefined =====

/* rive_YGNode::isLeadingPositionDefined(rive_YGFlexDirection) const */

bool __thiscall rive_YGNode::isLeadingPositionDefined(rive_YGNode *this,uint param_2)

{
  bool bVar1;
  float fVar2;
  
  if ((param_2 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x78);
    if (((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
        ((NAN(fVar2) &&
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_2 * 4) * 4
                                    + 0x68), fVar2 != NAN)))) &&
       ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))) {
      fVar2 = *(float *)(this + 0x80);
joined_r0x0056a324:
      if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
         (((NAN(fVar2) && (fVar2 = *(float *)(this + 0x88), fVar2 != NAN)) &&
          ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
        fVar2 = NAN;
        goto LAB_0056a30c;
      }
    }
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_2 * 4) * 4 + 0x68
                      );
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (bVar1) {
      fVar2 = *(float *)(this + 0x84);
      goto joined_r0x0056a324;
    }
  }
  if (fVar2 == NAN) {
    return true;
  }
  if (fVar2 == NAN) {
    return true;
  }
  if (fVar2 == NAN) {
    return true;
  }
LAB_0056a30c:
  return !NAN(fVar2);
}


// ===== 0056a39c  rive_YGNode::isTrailingPosDefined =====

/* rive_YGNode::isTrailingPosDefined(rive_YGFlexDirection) const */

bool __thiscall rive_YGNode::isTrailingPosDefined(rive_YGNode *this,uint param_2)

{
  bool bVar1;
  float fVar2;
  
  if ((param_2 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x7c);
    if (((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
        ((NAN(fVar2) &&
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_2 * 4) * 4
                                    + 0x68), fVar2 != NAN)))) &&
       ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))) {
      fVar2 = *(float *)(this + 0x80);
joined_r0x0056a4d0:
      if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
         (((NAN(fVar2) && (fVar2 = *(float *)(this + 0x88), fVar2 != NAN)) &&
          ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
        fVar2 = NAN;
        goto LAB_0056a4b8;
      }
    }
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_2 * 4) * 4 +
                              0x68);
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (bVar1) {
      fVar2 = *(float *)(this + 0x84);
      goto joined_r0x0056a4d0;
    }
  }
  if (fVar2 == NAN) {
    return true;
  }
  if (fVar2 == NAN) {
    return true;
  }
  if (fVar2 == NAN) {
    return true;
  }
LAB_0056a4b8:
  return !NAN(fVar2);
}


// ===== 0056a548  rive_YGNode::getLeadingMargin =====

/* rive_YGNode::getLeadingMargin(rive_YGFlexDirection, float) const */

float __thiscall rive_YGNode::getLeadingMargin(float param_1,rive_YGNode *this,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x54);
    if (((((fVar2 == NAN) || (fVar2 == NAN)) || (fVar2 == NAN)) ||
        ((!NAN(fVar2) ||
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_3 * 4) * 4
                                    + 0x44), fVar2 == NAN)))) ||
       ((fVar2 == NAN || ((fVar2 == NAN || (!NAN(fVar2))))))) goto LAB_0056a630;
    fVar2 = *(float *)(this + 0x5c);
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_3 * 4) * 4 + 0x44
                      );
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_0056a630;
    fVar2 = *(float *)(this + 0x60);
  }
  if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
     (((NAN(fVar2) && (fVar2 = *(float *)(this + 100), fVar2 != NAN)) &&
      ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
    return 0.0;
  }
LAB_0056a630:
  fVar3 = 0.0;
  if (fVar2 != NAN) {
    if (fVar2 == NAN) {
      return 0.0;
    }
    if (fVar2 == NAN) {
      return 0.0;
    }
    if (NAN(fVar2)) {
      return NAN;
    }
    fVar3 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
    if (((uint)fVar2 >> 0x1e & 1) == 0) {
      return fVar3;
    }
  }
  return fVar3 * param_1 * 0.01;
}


// ===== 0056a740  rive_YGNode::getTrailingMargin =====

/* rive_YGNode::getTrailingMargin(rive_YGFlexDirection, float) const */

float __thiscall rive_YGNode::getTrailingMargin(float param_1,rive_YGNode *this,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x58);
    if (((((fVar2 == NAN) || (fVar2 == NAN)) || (fVar2 == NAN)) ||
        ((!NAN(fVar2) ||
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_3 * 4) * 4
                                    + 0x44), fVar2 == NAN)))) ||
       ((fVar2 == NAN || ((fVar2 == NAN || (!NAN(fVar2))))))) goto LAB_0056a828;
    fVar2 = *(float *)(this + 0x5c);
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_3 * 4) * 4 +
                              0x44);
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_0056a828;
    fVar2 = *(float *)(this + 0x60);
  }
  if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
     (((NAN(fVar2) && (fVar2 = *(float *)(this + 100), fVar2 != NAN)) &&
      ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
    return 0.0;
  }
LAB_0056a828:
  fVar3 = 0.0;
  if (fVar2 != NAN) {
    if (fVar2 == NAN) {
      return 0.0;
    }
    if (fVar2 == NAN) {
      return 0.0;
    }
    if (NAN(fVar2)) {
      return NAN;
    }
    fVar3 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
    if (((uint)fVar2 >> 0x1e & 1) == 0) {
      return fVar3;
    }
  }
  return fVar3 * param_1 * 0.01;
}


// ===== 0056a938  rive_YGNode::getMarginForAxis =====

/* rive_YGNode::getMarginForAxis(rive_YGFlexDirection, float) const */

float __thiscall
rive_YGNode::getMarginForAxis(rive_YGNode *param_1,rive_YGNode *this,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)getLeadingMargin();
  fVar2 = (float)getTrailingMargin(param_1._0_4_,this,param_3);
  return fVar1 + fVar2;
}


// ===== 0056a980  rive_YGNode::getGapForAxis =====

/* rive_YGNode::getGapForAxis(rive_YGFlexDirection, float) const */

float __thiscall rive_YGNode::getGapForAxis(float param_1,rive_YGNode *this,uint param_3)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  if ((param_3 & 0xfffffffe) == 2) {
    fVar1 = *(float *)(this + 0xd4);
  }
  else {
    fVar1 = *(float *)(this + 0xd8);
  }
  if (((((fVar1 != NAN) && (fVar1 != NAN)) && (fVar1 != NAN)) &&
      ((NAN(fVar1) && (fVar1 = *(float *)(this + 0xdc), fVar1 != NAN)))) &&
     ((fVar1 != NAN && ((fVar1 != NAN && (NAN(fVar1))))))) {
    return 0.0;
  }
  fVar3 = 0.0;
  if (fVar1 != NAN) {
    if (fVar1 == NAN) {
      return 0.0;
    }
    pfVar2 = (float *)PTR_rive_YGValueAuto_0067d660;
    if ((fVar1 == NAN) || (pfVar2 = (float *)PTR_rive_YGValueUndefined_0067da20, NAN(fVar1))) {
      fVar3 = *pfVar2;
      if (pfVar2[1] == 1.4013e-45) {
        return fVar3;
      }
      if (pfVar2[1] != 2.8026e-45) {
        return NAN;
      }
    }
    else {
      fVar3 = (float)(((uint)fVar1 & 0xbfffffff) + 0x20000000);
      if (((uint)fVar1 >> 0x1e & 1) == 0) {
        return fVar3;
      }
    }
  }
  return fVar3 * param_1 * 0.01;
}


// ===== 0056aad4  rive_YGNode::measure =====

/* rive_YGNode::measure(float, rive_YGMeasureMode, float, rive_YGMeasureMode, void*) */

void rive_YGNode::measure(long param_1)

{
  if ((*(byte *)(param_1 + 8) >> 4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0056aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}


// ===== 0056aae8  rive_YGNode::baseline =====

/* rive_YGNode::baseline(float, float, void*) */

void rive_YGNode::baseline(float param_1,float param_2,void *param_3)

{
  if ((*(byte *)((long)param_3 + 8) >> 5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0056aaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)param_3 + 0x18))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056aaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((long)param_3 + 0x18))();
  return;
}


// ===== 0056aafc  rive_YGNode::setMeasureFunc =====

/* rive_YGNode::setMeasureFunc(rive_YGNode::{unnamed type#1}) */

void __thiscall rive_YGNode::setMeasureFunc(rive_YGNode *this,long param_2)

{
  rive_YGNode rVar1;
  
  if (param_2 == 0) {
    rVar1 = (rive_YGNode)((byte)this[8] & 0xf7);
  }
  else {
    if (*(long *)(this + 0x250) == *(long *)(this + 0x248)) {
      rVar1 = this[8];
    }
    else {
      rive_facebook::yoga::detail::Log::log
                (this,5,0,&DAT_00242a86,
                 "Cannot set measure function: Nodes with measure functions cannot have children.");
      rVar1 = (rive_YGNode)((byte)this[8] | 0x80);
    }
    rVar1 = (rive_YGNode)((byte)rVar1 | 8);
  }
  this[8] = rVar1;
  *(long *)(this + 0x10) = param_2;
  return;
}


// ===== 0056ab78  rive_YGNode::setMeasureFunc =====

/* rive_YGNode::setMeasureFunc(YGSize (*)(rive_YGNode*, float, rive_YGMeasureMode, float,
   rive_YGMeasureMode)) */

void __thiscall
rive_YGNode::setMeasureFunc
          (rive_YGNode *this,
          _func_YGSize_rive_YGNode_ptr_float_rive_YGMeasureMode_float_rive_YGMeasureMode *param_1)

{
  rive_YGNode rVar1;
  rive_YGNode rVar2;
  
  rVar1 = this[8];
  rVar2 = (rive_YGNode)((byte)rVar1 & 0xef);
  this[8] = rVar2;
  if (param_1 ==
      (_func_YGSize_rive_YGNode_ptr_float_rive_YGMeasureMode_float_rive_YGMeasureMode *)0x0) {
    rVar2 = (rive_YGNode)((byte)rVar1 & 0xe7);
  }
  else {
    if (*(long *)(this + 0x250) != *(long *)(this + 0x248)) {
      rive_facebook::yoga::detail::Log::log
                (this,5,0,&DAT_00242a86,
                 "Cannot set measure function: Nodes with measure functions cannot have children.");
      rVar2 = (rive_YGNode)((byte)this[8] | 0x80);
    }
    rVar2 = (rive_YGNode)((byte)rVar2 | 8);
  }
  this[8] = rVar2;
  *(_func_YGSize_rive_YGNode_ptr_float_rive_YGMeasureMode_float_rive_YGMeasureMode **)(this + 0x10)
       = param_1;
  return;
}


// ===== 0056abf4  rive_YGNode::setMeasureFunc =====

/* rive_YGNode::setMeasureFunc(YGSize (*)(rive_YGNode*, float, rive_YGMeasureMode, float,
   rive_YGMeasureMode, void*)) */

void __thiscall
rive_YGNode::setMeasureFunc
          (rive_YGNode *this,
          _func_YGSize_rive_YGNode_ptr_float_rive_YGMeasureMode_float_rive_YGMeasureMode_void_ptr
          *param_1)

{
  rive_YGNode rVar1;
  rive_YGNode rVar2;
  
  rVar1 = this[8];
  rVar2 = (rive_YGNode)((byte)rVar1 | 0x10);
  this[8] = rVar2;
  if (param_1 ==
      (_func_YGSize_rive_YGNode_ptr_float_rive_YGMeasureMode_float_rive_YGMeasureMode_void_ptr *)0x0
     ) {
    rVar2 = (rive_YGNode)((byte)rVar1 & 0xf7 | 0x10);
  }
  else {
    if (*(long *)(this + 0x250) != *(long *)(this + 0x248)) {
      rive_facebook::yoga::detail::Log::log
                (this,5,0,&DAT_00242a86,
                 "Cannot set measure function: Nodes with measure functions cannot have children.");
      rVar2 = (rive_YGNode)((byte)this[8] | 0x80);
    }
    rVar2 = (rive_YGNode)((byte)rVar2 | 8);
  }
  this[8] = rVar2;
  *(_func_YGSize_rive_YGNode_ptr_float_rive_YGMeasureMode_float_rive_YGMeasureMode_void_ptr **)
   (this + 0x10) = param_1;
  return;
}


// ===== 0056ac70  rive_YGNode::replaceChild =====

/* rive_YGNode::replaceChild(rive_YGNode*, unsigned int) */

void __thiscall rive_YGNode::replaceChild(rive_YGNode *this,rive_YGNode *param_1,uint param_2)

{
  *(rive_YGNode **)(*(long *)(this + 0x248) + (ulong)param_2 * 8) = param_1;
  return;
}


// ===== 0056ac7c  rive_YGNode::replaceChild =====

/* rive_YGNode::replaceChild(rive_YGNode*, rive_YGNode*) */

void __thiscall
rive_YGNode::replaceChild(rive_YGNode *this,rive_YGNode *param_1,rive_YGNode *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  
  puVar2 = *(undefined8 **)(this + 0x248);
  puVar3 = *(undefined8 **)(this + 0x250);
  if (puVar2 != puVar3) {
    uVar4 = (long)puVar3 + (-8 - (long)puVar2);
    if (0x17 < uVar4) {
      pauVar6 = (undefined1 (*) [16])(puVar2 + 2);
      uVar4 = (uVar4 >> 3) + 1;
      uVar5 = uVar4 & 0x3ffffffffffffffc;
      uVar7 = uVar5;
      do {
        auVar8._8_8_ = param_1;
        auVar8._0_8_ = param_1;
        auVar8 = NEON_cmeq(pauVar6[-1],auVar8,8);
        if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          *(rive_YGNode **)pauVar6[-1] = param_2;
        }
        if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          *(rive_YGNode **)(pauVar6[-1] + 8) = param_2;
        }
        auVar1._8_8_ = param_1;
        auVar1._0_8_ = param_1;
        auVar8 = NEON_cmeq(*pauVar6,auVar1,8);
        if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          *(rive_YGNode **)*pauVar6 = param_2;
        }
        if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          *(rive_YGNode **)(*pauVar6 + 8) = param_2;
        }
        uVar7 = uVar7 - 4;
        pauVar6 = pauVar6 + 2;
      } while (uVar7 != 0);
      if (uVar4 == uVar5) {
        return;
      }
      puVar2 = puVar2 + uVar5;
    }
    do {
      if ((rive_YGNode *)*puVar2 == param_1) {
        *puVar2 = param_2;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar3);
  }
  return;
}


// ===== 0056ad48  rive_YGNode::insertChild =====

/* rive_YGNode::insertChild(rive_YGNode*, unsigned int) */

void __thiscall rive_YGNode::insertChild(rive_YGNode *this,rive_YGNode *param_1,uint param_2)

{
  undefined8 *__src;
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *__dest;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar3 = (ulong)param_2;
  puVar5 = *(undefined8 **)(this + 0x250);
  puVar12 = *(undefined8 **)(this + 0x248);
  __src = puVar12 + uVar3;
  if (puVar5 < *(undefined8 **)(this + 600)) {
    if (__src != puVar5) {
      puVar12 = puVar5;
      if (puVar5 + -1 < puVar5) {
        *puVar5 = puVar5[-1];
        puVar12 = puVar5 + 1;
      }
      *(undefined8 **)(this + 0x250) = puVar12;
      if (puVar5 != __src + 1) {
        sVar4 = (long)puVar5 - (long)(__src + 1);
        memmove((void *)((long)puVar5 - sVar4),__src,sVar4);
      }
      *__src = param_1;
      return;
    }
    *__src = param_1;
    *(undefined8 **)(this + 0x250) = __src + 1;
    return;
  }
  uVar8 = ((long)puVar5 - (long)puVar12 >> 3) + 1;
  if (uVar8 >> 0x3d != 0) {
    FUN_0056af98();
LAB_0056af94:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar7 = (long)*(undefined8 **)(this + 600) - (long)puVar12;
  uVar10 = (long)uVar7 >> 2;
  if (uVar10 <= uVar8) {
    uVar10 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar7) {
    uVar10 = 0x1fffffffffffffff;
  }
  if (uVar10 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar10 >> 0x3d != 0) goto LAB_0056af94;
    pvVar2 = operator_new(uVar10 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar2 + uVar10 * 8);
  puVar11 = (undefined8 *)((long)pvVar2 + uVar3 * 8);
  puVar6 = puVar12;
  if (uVar10 == uVar3) {
    if (param_2 == 0) {
      puVar11 = (undefined8 *)operator_new(8);
      puVar5 = puVar11 + 1;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        puVar6 = *(undefined8 **)(this + 0x248);
      }
    }
    else {
      puVar11 = (undefined8 *)((long)puVar11 - (uVar3 * 4 + 4 & 0x7fffffff8));
    }
  }
  __dest = puVar11 + 1;
  *puVar11 = param_1;
  if (puVar6 != __src) {
    uVar8 = (long)__src + (-8 - (long)puVar6);
    puVar9 = __src;
    if ((0x17 < uVar8) && (0x1f < (ulong)((long)__src - (long)puVar11))) {
      puVar9 = puVar11 + -2;
      puVar12 = puVar12 + (uVar3 - 2);
      uVar3 = (uVar8 >> 3) + 1;
      uVar10 = uVar3 & 0x3ffffffffffffffc;
      uVar8 = uVar10;
      do {
        puVar1 = puVar12 + -1;
        uVar15 = puVar12[-2];
        uVar14 = puVar12[1];
        uVar13 = *puVar12;
        uVar8 = uVar8 - 4;
        puVar12 = puVar12 + -4;
        puVar9[-1] = *puVar1;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -4;
      } while (uVar8 != 0);
      puVar11 = puVar11 + -uVar10;
      puVar9 = __src + -uVar10;
      if (uVar3 == uVar10) goto LAB_0056af24;
    }
    do {
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *puVar9;
    } while (puVar9 != puVar6);
  }
LAB_0056af24:
  sVar4 = *(long *)(this + 0x250) - (long)__src;
  if (sVar4 != 0) {
    memmove(__dest,__src,sVar4);
  }
  pvVar2 = *(void **)(this + 0x248);
  *(undefined8 **)(this + 0x248) = puVar11;
  *(size_t *)(this + 0x250) = (long)__dest + sVar4;
  *(undefined8 **)(this + 600) = puVar5;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 0056af98  FUN_0056af98 =====

void FUN_0056af98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0056afac  rive_YGNode::setConfig =====

/* rive_YGNode::setConfig(rive_YGConfig*) */

void __thiscall rive_YGNode::setConfig(rive_YGNode *this,rive_YGConfig *param_1)

{
  rive_YGNode *prVar1;
  long lVar2;
  rive_YGNode *prVar3;
  
  if (param_1 == (rive_YGConfig *)0x0) {
    rive_facebook::yoga::detail::Log::log
              (0,5,0,&DAT_00242a86,"Attempting to set a null config on a YGNode");
  }
  lVar2 = *(long *)(this + 0x260);
  if ((((byte)param_1[0x10] ^ (*(byte *)(lVar2 + 0x10) & 1) == 0) & 1) == 0) {
    rive_facebook::yoga::detail::Log::log
              (param_1,5,0,&DAT_00242a86,
               "UseWebDefaults may not be changed after constructing a YGNode");
    lVar2 = *(long *)(this + 0x260);
  }
  prVar3 = this;
  if ((((*(int *)(lVar2 + 0x20) != *(int *)(param_1 + 0x20)) ||
       (((*(uint *)(param_1 + 0x18) ^ *(uint *)(lVar2 + 0x18)) & 7) != 0)) ||
      (*(float *)(lVar2 + 0x24) != *(float *)(param_1 + 0x24))) ||
     ((*(byte *)(lVar2 + 0x10) & 1) != ((byte)param_1[0x10] & 1))) {
    do {
      if (((byte)prVar3[8] >> 2 & 1) != 0) break;
      prVar3[8] = (rive_YGNode)((byte)prVar3[8] | 4);
      if (*(code **)(prVar3 + 0x28) != (code *)0x0) {
        (**(code **)(prVar3 + 0x28))(prVar3);
      }
      *(undefined4 *)(prVar3 + 0x14c) = 0x7fc00000;
      prVar1 = prVar3 + 0x240;
      prVar3 = *(rive_YGNode **)prVar1;
    } while (*(rive_YGNode **)prVar1 != (rive_YGNode *)0x0);
  }
  *(rive_YGConfig **)(this + 0x260) = param_1;
  return;
}


// ===== 0056b0c4  rive_YGNode::markDirtyAndPropagate =====

/* rive_YGNode::markDirtyAndPropagate() */

void __thiscall rive_YGNode::markDirtyAndPropagate(rive_YGNode *this)

{
  do {
    if (((byte)this[8] >> 2 & 1) != 0) {
      return;
    }
    this[8] = (rive_YGNode)((byte)this[8] | 4);
    if (*(code **)(this + 0x28) != (code *)0x0) {
      (**(code **)(this + 0x28))(this);
    }
    *(undefined4 *)(this + 0x14c) = 0x7fc00000;
    this = *(rive_YGNode **)(this + 0x240);
  } while (this != (rive_YGNode *)0x0);
  return;
}


// ===== 0056b118  rive_YGNode::setDirty =====

/* rive_YGNode::setDirty(bool) */

void __thiscall rive_YGNode::setDirty(rive_YGNode *this,bool param_1)

{
  byte bVar1;
  
  if ((((byte)this[8] & 4) == 0) == param_1) {
    bVar1 = 4;
    if (!param_1) {
      bVar1 = 0;
    }
    this[8] = (rive_YGNode)((byte)this[8] & 0xfb | bVar1);
    if ((param_1) && (*(code **)(this + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0056b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this + 0x28))();
      return;
    }
  }
  return;
}


// ===== 0056b158  rive_YGNode::removeChild =====

/* rive_YGNode::removeChild(rive_YGNode*) */

bool __thiscall rive_YGNode::removeChild(rive_YGNode *this,rive_YGNode *param_1)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *__dest;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x250);
  puVar1 = *(undefined8 **)(this + 0x248);
  __dest = puVar1;
  for (; (puVar1 != puVar2 && (__dest = puVar1, (rive_YGNode *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(this + 0x250) = (long)__dest + __n;
  }
  return __dest != puVar2;
}


// ===== 0056b1d8  rive_YGNode::removeChild =====

/* rive_YGNode::removeChild(unsigned int) */

void __thiscall rive_YGNode::removeChild(rive_YGNode *this,uint param_1)

{
  void *__dest;
  size_t __n;
  
  __dest = (void *)(*(long *)(this + 0x248) + (ulong)param_1 * 8);
  __n = *(long *)(this + 0x250) - ((long)__dest + 8);
  if (__n != 0) {
    memmove(__dest,(void *)((long)__dest + 8),__n);
  }
  *(size_t *)(this + 0x250) = (long)__dest + __n;
  return;
}


// ===== 0056b228  rive_YGNode::setLayoutDirection =====

/* rive_YGNode::setLayoutDirection(rive_YGDirection) */

void __thiscall rive_YGNode::setLayoutDirection(rive_YGNode *this,byte param_2)

{
  this[0x144] = (rive_YGNode)((byte)this[0x144] & 0xfc | param_2 & 3);
  return;
}


// ===== 0056b238  rive_YGNode::setLayoutMargin =====

/* rive_YGNode::setLayoutMargin(float, int) */

void __thiscall rive_YGNode::setLayoutMargin(rive_YGNode *this,float param_1,int param_2)

{
  *(float *)(this + (long)param_2 * 4 + 0x114) = param_1;
  return;
}


// ===== 0056b244  rive_YGNode::setLayoutBorder =====

/* rive_YGNode::setLayoutBorder(float, int) */

void __thiscall rive_YGNode::setLayoutBorder(rive_YGNode *this,float param_1,int param_2)

{
  *(float *)(this + (long)param_2 * 4 + 0x124) = param_1;
  return;
}


// ===== 0056b250  rive_YGNode::setLayoutPadding =====

/* rive_YGNode::setLayoutPadding(float, int) */

void __thiscall rive_YGNode::setLayoutPadding(rive_YGNode *this,float param_1,int param_2)

{
  *(float *)(this + (long)param_2 * 4 + 0x134) = param_1;
  return;
}


// ===== 0056b25c  rive_YGNode::setLayoutLastOwnerDirection =====

/* rive_YGNode::setLayoutLastOwnerDirection(rive_YGDirection) */

void __thiscall rive_YGNode::setLayoutLastOwnerDirection(rive_YGNode *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x154) = param_2;
  return;
}


// ===== 0056b264  rive_YGNode::setLayoutComputedFlexBasis =====

/* rive_YGNode::setLayoutComputedFlexBasis(rive_YGFloatOptional) */

void __thiscall rive_YGNode::setLayoutComputedFlexBasis(undefined4 param_1,rive_YGNode *this)

{
  *(undefined4 *)(this + 0x14c) = param_1;
  return;
}


// ===== 0056b26c  rive_YGNode::setLayoutPosition =====

/* rive_YGNode::setLayoutPosition(float, int) */

void __thiscall rive_YGNode::setLayoutPosition(rive_YGNode *this,float param_1,int param_2)

{
  *(float *)(this + (long)param_2 * 4 + 0xfc) = param_1;
  return;
}


// ===== 0056b278  rive_YGNode::setLayoutComputedFlexBasisGeneration =====

/* rive_YGNode::setLayoutComputedFlexBasisGeneration(unsigned int) */

void __thiscall rive_YGNode::setLayoutComputedFlexBasisGeneration(rive_YGNode *this,uint param_1)

{
  *(uint *)(this + 0x148) = param_1;
  return;
}


// ===== 0056b280  rive_YGNode::setLayoutMeasuredDimension =====

/* rive_YGNode::setLayoutMeasuredDimension(float, int) */

void __thiscall rive_YGNode::setLayoutMeasuredDimension(rive_YGNode *this,float param_1,int param_2)

{
  *(float *)(this + (long)param_2 * 4 + 0x21c) = param_1;
  return;
}


// ===== 0056b28c  rive_YGNode::setLayoutHadOverflow =====

/* rive_YGNode::setLayoutHadOverflow(bool) */

void __thiscall rive_YGNode::setLayoutHadOverflow(rive_YGNode *this,bool param_1)

{
  byte bVar1;
  
  bVar1 = 4;
  if (!param_1) {
    bVar1 = 0;
  }
  this[0x144] = (rive_YGNode)((byte)this[0x144] & 0xfb | bVar1);
  return;
}


// ===== 0056b2ac  rive_YGNode::setLayoutDimension =====

/* rive_YGNode::setLayoutDimension(float, int) */

void __thiscall rive_YGNode::setLayoutDimension(rive_YGNode *this,float param_1,int param_2)

{
  *(float *)(this + (long)param_2 * 4 + 0x10c) = param_1;
  return;
}


// ===== 0056b2b8  rive_YGNode::relativePosition =====

/* rive_YGNode::relativePosition(rive_YGFlexDirection, float) const */

undefined1  [16] __thiscall
rive_YGNode::relativePosition(rive_YGNode *param_1,rive_YGNode *this,undefined4 param_3)

{
  ulong uVar1;
  float extraout_s0;
  float extraout_s0_00;
  float fVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar4;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  
  uVar1 = isLeadingPositionDefined();
  if ((uVar1 & 1) == 0) {
    getTrailingPosition(param_1._0_4_,this,param_3);
    fVar2 = extraout_s0_00;
    uVar4 = extraout_var_00;
    uVar5 = extraout_var_02;
    if (!NAN(extraout_s0_00)) {
      fVar2 = -extraout_s0_00;
      uVar4 = 0;
      uVar5 = 0;
    }
  }
  else {
    getLeadingPosition(param_1._0_4_,this,param_3);
    fVar2 = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_01;
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = fVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}


// ===== 0056b31c  rive_YGNode::setPosition =====

/* rive_YGNode::setPosition(rive_YGDirection, float, float, float) */

void __thiscall
rive_YGNode::setPosition
          (rive_YGNode *param_1,rive_YGNode *param_2,rive_YGNode *param_3,rive_YGNode *this,
          int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *(uint *)(this + 0x30) >> 2 & 3;
  if ((*(long *)(this + 0x240) == 0) || (param_5 != 2)) {
    uVar1 = (uint)(uVar2 < 2) << 1;
  }
  else {
    uVar1 = 2;
    if (uVar2 != 3) {
      uVar1 = uVar2;
    }
    uVar7 = 0;
    if (uVar2 != 3) {
      uVar7 = 3;
    }
    bVar5 = uVar2 != 2;
    uVar2 = 3;
    if (bVar5) {
      uVar2 = uVar1;
    }
    uVar1 = 0;
    if (bVar5) {
      uVar1 = uVar7;
    }
  }
  uVar9 = (ulong)uVar2;
  uVar8 = (ulong)uVar1;
  uVar6 = isLeadingPositionDefined(this,uVar9);
  if ((uVar6 & 1) == 0) {
    fVar10 = (float)getTrailingPosition(param_1._0_4_,this,uVar9);
    if (!NAN(fVar10)) {
      fVar10 = -fVar10;
    }
  }
  else {
    fVar10 = (float)getLeadingPosition(param_1._0_4_,this,uVar9);
  }
  uVar6 = isLeadingPositionDefined(this,uVar8);
  if ((uVar6 & 1) == 0) {
    fVar11 = (float)getTrailingPosition(param_2._0_4_,this,uVar8);
    if (!NAN(fVar11)) {
      fVar11 = -fVar11;
    }
  }
  else {
    fVar11 = (float)getLeadingPosition(param_2._0_4_,this,uVar8);
  }
  fVar12 = (float)getLeadingMargin(param_3._0_4_,this,uVar9);
  puVar3 = PTR_leading_0067da28;
  *(float *)(this + (long)*(int *)(PTR_leading_0067da28 + uVar9 * 4) * 4 + 0xfc) = fVar10 + fVar12;
  fVar12 = (float)getTrailingMargin(param_3._0_4_,this,uVar9);
  puVar4 = PTR_trailing_0067da30;
  *(float *)(this + (long)*(int *)(PTR_trailing_0067da30 + uVar9 * 4) * 4 + 0xfc) = fVar10 + fVar12;
  fVar10 = (float)getLeadingMargin(param_3._0_4_,this,uVar8);
  *(float *)(this + (long)*(int *)(puVar3 + uVar8 * 4) * 4 + 0xfc) = fVar11 + fVar10;
  fVar10 = (float)getTrailingMargin(param_3._0_4_,this,uVar8);
  *(float *)(this + (long)*(int *)(puVar4 + uVar8 * 4) * 4 + 0xfc) = fVar11 + fVar10;
  return;
}


// ===== 0056b4c8  rive_YGNode::marginLeadingValue =====

/* rive_YGNode::marginLeadingValue(rive_YGFlexDirection) const */

ulong __thiscall rive_YGNode::marginLeadingValue(rive_YGNode *this,uint param_2)

{
  uint uVar1;
  float fVar2;
  ulong uVar3;
  
  if ((param_2 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x54);
    if (fVar2 == NAN) goto LAB_0056b594;
    if (fVar2 != NAN) {
      if (fVar2 != NAN) {
        if (NAN(fVar2)) goto LAB_0056b538;
        if (fVar2 == NAN) goto LAB_0056b588;
        if (fVar2 != NAN) goto LAB_0056b5ac;
      }
LAB_0056b57c:
      uVar1 = 0x7fc00000;
      uVar3 = 0x300000000;
      goto LAB_0056b5c8;
    }
  }
  else {
LAB_0056b538:
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_2 * 4) * 4 + 0x44
                      );
    if (fVar2 == NAN) {
LAB_0056b594:
      uVar1 = 0;
      uVar3 = 0x200000000;
      goto LAB_0056b5c8;
    }
    if (fVar2 != NAN) {
      if (fVar2 != NAN) {
        if (NAN(fVar2)) {
          uVar3 = 0;
          uVar1 = 0x7fc00000;
          goto LAB_0056b5c8;
        }
LAB_0056b5ac:
        uVar1 = ((uint)fVar2 & 0xbfffffff) + 0x20000000;
        uVar3 = 0x100000000;
        if (((uint)fVar2 & 0x40000000) != 0) {
          uVar3 = 0x200000000;
        }
        goto LAB_0056b5c8;
      }
      goto LAB_0056b57c;
    }
  }
LAB_0056b588:
  uVar1 = 0;
  uVar3 = 0x100000000;
LAB_0056b5c8:
  return uVar3 | uVar1;
}


// ===== 0056b5e0  rive_YGNode::marginTrailingValue =====

/* rive_YGNode::marginTrailingValue(rive_YGFlexDirection) const */

ulong __thiscall rive_YGNode::marginTrailingValue(rive_YGNode *this,uint param_2)

{
  uint uVar1;
  float fVar2;
  ulong uVar3;
  
  if ((param_2 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x58);
    if (fVar2 == NAN) goto LAB_0056b6ac;
    if (fVar2 != NAN) {
      if (fVar2 != NAN) {
        if (NAN(fVar2)) goto LAB_0056b650;
        if (fVar2 == NAN) goto LAB_0056b6a0;
        if (fVar2 != NAN) goto LAB_0056b6c4;
      }
LAB_0056b694:
      uVar1 = 0x7fc00000;
      uVar3 = 0x300000000;
      goto LAB_0056b6e0;
    }
  }
  else {
LAB_0056b650:
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_2 * 4) * 4 +
                              0x44);
    if (fVar2 == NAN) {
LAB_0056b6ac:
      uVar1 = 0;
      uVar3 = 0x200000000;
      goto LAB_0056b6e0;
    }
    if (fVar2 != NAN) {
      if (fVar2 != NAN) {
        if (NAN(fVar2)) {
          uVar3 = 0;
          uVar1 = 0x7fc00000;
          goto LAB_0056b6e0;
        }
LAB_0056b6c4:
        uVar1 = ((uint)fVar2 & 0xbfffffff) + 0x20000000;
        uVar3 = 0x100000000;
        if (((uint)fVar2 & 0x40000000) != 0) {
          uVar3 = 0x200000000;
        }
        goto LAB_0056b6e0;
      }
      goto LAB_0056b694;
    }
  }
LAB_0056b6a0:
  uVar1 = 0;
  uVar3 = 0x100000000;
LAB_0056b6e0:
  return uVar3 | uVar1;
}


// ===== 0056b6f8  rive_YGNode::resolveFlexBasisPtr =====

/* rive_YGNode::resolveFlexBasisPtr() const */

undefined8 __thiscall rive_YGNode::resolveFlexBasisPtr(rive_YGNode *this)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x40);
  puVar3 = (uint *)PTR_rive_YGValueAuto_0067d660;
  if (fVar4 != NAN) {
    if (fVar4 == NAN) {
      uVar2 = 0;
      uVar1 = 1;
      goto LAB_0056b7bc;
    }
    if (fVar4 == NAN) {
      uVar2 = 0;
      uVar1 = 2;
      goto LAB_0056b7bc;
    }
    puVar3 = (uint *)PTR_rive_YGValueUndefined_0067da20;
    if (!NAN(fVar4)) {
      uVar2 = ((uint)fVar4 & 0xbfffffff) + 0x20000000;
      uVar1 = 1;
      if (((uint)fVar4 & 0x40000000) != 0) {
        uVar1 = 2;
      }
      goto LAB_0056b7bc;
    }
  }
  uVar1 = puVar3[1];
  if ((uVar1 == 3) || (uVar1 == 0)) {
    fVar4 = *(float *)(this + 0x34);
    uVar1 = 3;
    if (fVar4 == 0.0 || fVar4 < 0.0 != NAN(fVar4)) {
      uVar2 = 0x7fc00000;
    }
    else {
      if ((*(byte *)(*(long *)(this + 0x260) + 0x10) & 1) == 0) {
        uVar1 = 1;
      }
      uVar2 = -(*(byte *)(*(long *)(this + 0x260) + 0x10) & 1) & 0x7fc00000;
    }
  }
  else {
    uVar2 = *puVar3;
  }
LAB_0056b7bc:
  return CONCAT44(uVar1,uVar2);
}


// ===== 0056b7d4  rive_YGNode::resolveDimension =====

/* rive_YGNode::resolveDimension() */

void __thiscall rive_YGNode::resolveDimension(rive_YGNode *this)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  fVar2 = *(float *)(this + 0xf0);
  if ((((fVar2 == NAN) || (fVar2 == NAN)) || (fVar2 == NAN)) || (!NAN(fVar2))) {
    fVar1 = *(float *)(this + 0xe8);
    if (fVar2 == NAN) {
      fVar8 = 0.0;
      iVar7 = 2;
    }
    else if (fVar2 == NAN) {
      fVar8 = 0.0;
      iVar7 = 1;
    }
    else if (fVar2 == NAN) {
      iVar7 = 3;
      fVar8 = NAN;
    }
    else if (NAN(fVar2)) {
      iVar7 = 0;
      fVar8 = NAN;
    }
    else {
      fVar8 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
      iVar7 = 1;
      if (((uint)fVar2 & 0x40000000) != 0) {
        iVar7 = 2;
      }
    }
    if (fVar1 == NAN) {
      fVar6 = 0.0;
      if (iVar7 == 2) goto LAB_0056b920;
      goto LAB_0056b954;
    }
    if (fVar1 == NAN) {
      fVar6 = 0.0;
      if (iVar7 == 1) goto LAB_0056b920;
      goto LAB_0056b954;
    }
    if (fVar1 == NAN) {
      iVar4 = 3;
    }
    else {
      if (!NAN(fVar1)) {
        fVar6 = (float)(((uint)fVar1 & 0xbfffffff) + 0x20000000);
        iVar4 = 1;
        if (((uint)fVar1 & 0x40000000) != 0) {
          iVar4 = 2;
        }
        if (iVar7 == iVar4) goto LAB_0056b920;
        goto LAB_0056b954;
      }
      iVar4 = 0;
    }
    fVar6 = NAN;
    if (iVar7 != iVar4) goto LAB_0056b954;
LAB_0056b920:
    if (((iVar7 != 0) && ((!NAN(fVar8) || (!NAN(fVar6))))) && (0.0001 <= ABS(fVar8 - fVar6)))
    goto LAB_0056b954;
  }
  else {
LAB_0056b954:
    fVar2 = *(float *)(this + 0xe0);
  }
  if (fVar2 == NAN) {
    uVar3 = 0;
    uVar5 = 0x200000000;
  }
  else if (fVar2 == NAN) {
    uVar3 = 0;
    uVar5 = 0x100000000;
  }
  else if (fVar2 == NAN) {
    uVar3 = 0x7fc00000;
    uVar5 = 0x300000000;
  }
  else if (NAN(fVar2)) {
    uVar5 = 0;
    uVar3 = 0x7fc00000;
  }
  else {
    uVar3 = ((uint)fVar2 & 0xbfffffff) + 0x20000000;
    uVar5 = 0x100000000;
    if (((uint)fVar2 & 0x40000000) != 0) {
      uVar5 = 0x200000000;
    }
  }
  fVar2 = *(float *)(this + 0xf4);
  *(ulong *)(this + 0x268) = uVar5 | uVar3;
  if (((fVar2 != NAN) && (fVar2 != NAN)) && ((fVar2 != NAN && (NAN(fVar2))))) goto LAB_0056bb68;
  fVar1 = *(float *)(this + 0xec);
  if (fVar2 == NAN) {
    iVar7 = 3;
    fVar8 = NAN;
  }
  else {
    fVar8 = 0.0;
    if (fVar2 == NAN) {
      iVar7 = 1;
    }
    else if (fVar2 == NAN) {
      iVar7 = 2;
    }
    else if (NAN(fVar2)) {
      iVar7 = 0;
      fVar8 = NAN;
    }
    else {
      fVar8 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
      iVar7 = 1;
      if (((uint)fVar2 & 0x40000000) != 0) {
        iVar7 = 2;
      }
    }
  }
  if (fVar1 == NAN) {
    iVar4 = 3;
LAB_0056bafc:
    fVar6 = NAN;
joined_r0x0056bb04:
    if (iVar7 == iVar4) {
LAB_0056bb3c:
      if ((iVar7 == 0) || (((NAN(fVar8) && (NAN(fVar6))) || (ABS(fVar8 - fVar6) < 0.0001))))
      goto LAB_0056bb6c;
    }
  }
  else {
    fVar6 = 0.0;
    if (fVar1 == NAN) {
      if (iVar7 == 1) goto LAB_0056bb3c;
    }
    else {
      if (fVar1 != NAN) {
        if (NAN(fVar1)) {
          iVar4 = 0;
          goto LAB_0056bafc;
        }
        fVar6 = (float)(((uint)fVar1 & 0xbfffffff) + 0x20000000);
        iVar4 = 1;
        if (((uint)fVar1 & 0x40000000) != 0) {
          iVar4 = 2;
        }
        goto joined_r0x0056bb04;
      }
      if (iVar7 == 2) goto LAB_0056bb3c;
    }
  }
LAB_0056bb68:
  fVar2 = *(float *)(this + 0xe4);
LAB_0056bb6c:
  if (fVar2 == NAN) {
    uVar3 = 0x7fc00000;
    uVar5 = 0x300000000;
  }
  else if (fVar2 == NAN) {
    uVar3 = 0;
    uVar5 = 0x100000000;
  }
  else if (fVar2 == NAN) {
    uVar3 = 0;
    uVar5 = 0x200000000;
  }
  else if (NAN(fVar2)) {
    uVar5 = 0;
    uVar3 = 0x7fc00000;
  }
  else {
    uVar3 = ((uint)fVar2 & 0xbfffffff) + 0x20000000;
    uVar5 = 0x100000000;
    if (((uint)fVar2 & 0x40000000) != 0) {
      uVar5 = 0x200000000;
    }
  }
  *(ulong *)(this + 0x270) = uVar5 | uVar3;
  return;
}


// ===== 0056bc40  rive_YGNode::resolveDirection =====

/* rive_YGNode::resolveDirection(rive_YGDirection) */

uint __thiscall rive_YGNode::resolveDirection(rive_YGNode *this,uint param_2)

{
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if ((*(uint *)(this + 0x30) & 3) != 0) {
    param_2 = *(uint *)(this + 0x30) & 3;
  }
  return param_2;
}


// ===== 0056bc58  rive_YGNode::clearChildren =====

/* rive_YGNode::clearChildren() */

void __thiscall rive_YGNode::clearChildren(rive_YGNode *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x248);
  *(void **)(this + 0x250) = pvVar1;
  if (*(void **)(this + 600) != pvVar1) {
    *(undefined8 *)(this + 0x248) = 0;
    *(undefined8 *)(this + 0x250) = 0;
    *(undefined8 *)(this + 600) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
      return;
    }
  }
  return;
}


// ===== 0056bc88  rive_YGNode::cloneChildrenIfNeeded =====

/* rive_YGNode::cloneChildrenIfNeeded(void*) */

void __thiscall rive_YGNode::cloneChildrenIfNeeded(rive_YGNode *this,void *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(this + 0x248);
  plVar6 = *(long **)(this + 0x250);
  if (plVar5 != plVar6) {
    iVar3 = 0;
    do {
      lVar4 = *plVar5;
      if (*(rive_YGNode **)(lVar4 + 0x240) != this) {
        pcVar2 = (code *)**(undefined8 **)(this + 0x260);
        if (pcVar2 == (code *)0x0) {
LAB_0056bcbc:
          lVar1 = rive_YGNodeClone(lVar4);
        }
        else {
          if ((*(byte *)(*(undefined8 **)(this + 0x260) + 2) >> 2 & 1) == 0) {
            lVar1 = (*pcVar2)(lVar4,this,iVar3);
          }
          else {
            lVar1 = (*pcVar2)(lVar4,this,iVar3,param_1);
          }
          if (lVar1 == 0) goto LAB_0056bcbc;
        }
        *plVar5 = lVar1;
        *(rive_YGNode **)(lVar1 + 0x240) = this;
      }
      plVar5 = plVar5 + 1;
      iVar3 = iVar3 + 1;
    } while (plVar5 != plVar6);
  }
  return;
}


// ===== 0056bd48  rive_YGNode::markDirtyAndPropagateDownwards =====

/* rive_YGNode::markDirtyAndPropagateDownwards() */

void __thiscall rive_YGNode::markDirtyAndPropagateDownwards(rive_YGNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x248);
  puVar2 = *(undefined8 **)(this + 0x250);
  this[8] = (rive_YGNode)((byte)this[8] | 4);
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    FUN_0056bd8c(*puVar1);
  }
  return;
}


// ===== 0056bd8c  FUN_0056bd8c =====

void FUN_0056bd8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x248);
  puVar2 = *(undefined8 **)(param_1 + 0x250);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    FUN_0056bd8c(*puVar1);
  }
  return;
}


// ===== 0056bdd0  rive_YGNode::resolveFlexGrow =====

/* rive_YGNode::resolveFlexGrow() const */

float __thiscall rive_YGNode::resolveFlexGrow(rive_YGNode *this)

{
  if (*(long *)(this + 0x240) == 0) {
    return 0.0;
  }
  if (NAN(*(float *)(this + 0x38))) {
    return *(float *)(this + 0x34);
  }
  return *(float *)(this + 0x38);
}


// ===== 0056be00  rive_YGNode::resolveFlexShrink =====

/* rive_YGNode::resolveFlexShrink() const */

float __thiscall rive_YGNode::resolveFlexShrink(rive_YGNode *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (((*(long *)(this + 0x240) != 0) && (fVar1 = *(float *)(this + 0x3c), NAN(fVar1))) &&
     (fVar1 = 1.0, (*(byte *)(*(long *)(this + 0x260) + 0x10) & 1) == 0)) {
    fVar1 = 0.0;
    if (*(float *)(this + 0x34) < 0.0) {
      return -*(float *)(this + 0x34);
    }
  }
  return fVar1;
}


// ===== 0056be44  rive_YGNode::isNodeFlexible =====

/* rive_YGNode::isNodeFlexible() */

bool __thiscall rive_YGNode::isNodeFlexible(rive_YGNode *this)

{
  float fVar1;
  
  if ((*(uint *)(this + 0x30) & 0x30000) == 0x20000) {
    return false;
  }
  fVar1 = 0.0;
  if (*(long *)(this + 0x240) != 0) {
    fVar1 = *(float *)(this + 0x38);
    if (((!NAN(fVar1)) ||
        (fVar1 = *(float *)(this + 0x34), fVar1 != 0.0 && fVar1 < 0.0 == NAN(fVar1))) &&
       (fVar1 != 0.0)) {
      return true;
    }
    fVar1 = *(float *)(this + 0x3c);
    if ((NAN(fVar1)) && (fVar1 = 1.0, (*(byte *)(*(long *)(this + 0x260) + 0x10) & 1) == 0)) {
      fVar1 = 0.0;
      if (*(float *)(this + 0x34) < 0.0) {
        fVar1 = -*(float *)(this + 0x34);
      }
    }
  }
  return fVar1 != 0.0;
}


// ===== 0056bed0  rive_YGNode::getLeadingBorder =====

/* rive_YGNode::getLeadingBorder(rive_YGFlexDirection) const */

float __thiscall rive_YGNode::getLeadingBorder(rive_YGNode *this,uint param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if ((param_2 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0xc0);
    if (((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
        ((NAN(fVar2) &&
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_2 * 4) * 4
                                    + 0xb0), fVar2 != NAN)))) &&
       ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))) {
      fVar2 = *(float *)(this + 200);
joined_r0x0056c024:
      if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
         (((NAN(fVar2) && (fVar2 = *(float *)(this + 0xd0), fVar2 != NAN)) &&
          ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
        fVar3 = 0.0;
        goto LAB_0056c010;
      }
    }
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_2 * 4) * 4 + 0xb0
                      );
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (bVar1) {
      fVar2 = *(float *)(this + 0xcc);
      goto joined_r0x0056c024;
    }
  }
  fVar3 = 0.0;
  if ((fVar2 != NAN) && (fVar2 != NAN)) {
    if ((fVar2 == NAN) || (NAN(fVar2))) {
      fVar3 = NAN;
    }
    else {
      fVar3 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
    }
  }
LAB_0056c010:
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}


// ===== 0056c09c  rive_YGNode::getTrailingBorder =====

/* rive_YGNode::getTrailingBorder(rive_YGFlexDirection) const */

float __thiscall rive_YGNode::getTrailingBorder(rive_YGNode *this,uint param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if ((param_2 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0xc4);
    if (((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
        ((NAN(fVar2) &&
         (fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_2 * 4) * 4
                                    + 0xb0), fVar2 != NAN)))) &&
       ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))) {
      fVar2 = *(float *)(this + 200);
joined_r0x0056c1f0:
      if ((((fVar2 != NAN) && (fVar2 != NAN)) && (fVar2 != NAN)) &&
         (((NAN(fVar2) && (fVar2 = *(float *)(this + 0xd0), fVar2 != NAN)) &&
          ((fVar2 != NAN && ((fVar2 != NAN && (NAN(fVar2))))))))) {
        fVar3 = 0.0;
        goto LAB_0056c1dc;
      }
    }
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_2 * 4) * 4 +
                              0xb0);
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if (bVar1) {
      fVar2 = *(float *)(this + 0xcc);
      goto joined_r0x0056c1f0;
    }
  }
  fVar3 = 0.0;
  if ((fVar2 != NAN) && (fVar2 != NAN)) {
    if ((fVar2 == NAN) || (NAN(fVar2))) {
      fVar3 = NAN;
    }
    else {
      fVar3 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
    }
  }
LAB_0056c1dc:
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}


// ===== 0056c268  rive_YGNode::getLeadingPadding =====

/* rive_YGNode::getLeadingPadding(rive_YGFlexDirection, float) const */

float __thiscall rive_YGNode::getLeadingPadding(float param_1,rive_YGNode *this,uint param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0x9c);
    if (((fVar2 == NAN) ||
        ((((fVar2 == NAN || (fVar2 == NAN)) || (!NAN(fVar2))) ||
         ((fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_3 * 4) * 4
                                     + 0x8c), fVar2 == NAN || (fVar2 == NAN)))))) ||
       ((fVar2 == NAN || ((!NAN(fVar2) || (fVar2 = *(float *)(this + 0xa4), fVar2 == NAN))))))
    goto LAB_0056c350;
LAB_0056c430:
    if (((fVar2 == NAN) ||
        (((fVar2 == NAN || (!NAN(fVar2))) || (fVar2 = *(float *)(this + 0xac), fVar2 == NAN)))) ||
       (((fVar2 == NAN || (fVar2 == NAN)) || (!NAN(fVar2))))) goto LAB_0056c350;
    fVar4 = 0.0;
LAB_0056c3cc:
    bVar1 = fVar4 < 0.0;
    if (bVar1 == NAN(fVar4)) {
      return fVar4;
    }
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_leading_0067da28 + (ulong)param_3 * 4) * 4 + 0x8c
                      );
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if ((bVar1) && (fVar2 = *(float *)(this + 0xa8), fVar2 != NAN)) goto LAB_0056c430;
LAB_0056c350:
    fVar4 = 0.0;
    if (fVar2 == NAN) goto LAB_0056c3e4;
    if (fVar2 == NAN) goto LAB_0056c3cc;
    pfVar3 = (float *)PTR_rive_YGValueAuto_0067d660;
    if ((fVar2 == NAN) || (pfVar3 = (float *)PTR_rive_YGValueUndefined_0067da20, NAN(fVar2))) {
      fVar4 = *pfVar3;
      if (pfVar3[1] != 1.4013e-45) {
        if (pfVar3[1] != 2.8026e-45) {
          fVar4 = NAN;
          goto LAB_0056c408;
        }
        goto LAB_0056c3e4;
      }
    }
    else {
      fVar4 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
      if (((uint)fVar2 >> 0x1e & 1) == 0) goto LAB_0056c3cc;
LAB_0056c3e4:
      fVar4 = fVar4 * param_1 * 0.01;
    }
    bVar1 = fVar4 < 0.0;
    if (bVar1 == NAN(fVar4)) {
      return fVar4;
    }
  }
  if (bVar1) {
    return 0.0;
  }
LAB_0056c408:
  if (NAN(fVar4)) {
    fVar4 = 0.0;
  }
  return fVar4;
}


// ===== 0056c4a4  rive_YGNode::getTrailingPadding =====

/* rive_YGNode::getTrailingPadding(rive_YGFlexDirection, float) const */

float __thiscall rive_YGNode::getTrailingPadding(float param_1,rive_YGNode *this,uint param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *(float *)(this + 0xa0);
    if (((fVar2 == NAN) ||
        ((((fVar2 == NAN || (fVar2 == NAN)) || (!NAN(fVar2))) ||
         ((fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_3 * 4) *
                                     4 + 0x8c), fVar2 == NAN || (fVar2 == NAN)))))) ||
       ((fVar2 == NAN || ((!NAN(fVar2) || (fVar2 = *(float *)(this + 0xa4), fVar2 == NAN))))))
    goto LAB_0056c58c;
LAB_0056c66c:
    if (((fVar2 == NAN) ||
        (((fVar2 == NAN || (!NAN(fVar2))) || (fVar2 = *(float *)(this + 0xac), fVar2 == NAN)))) ||
       (((fVar2 == NAN || (fVar2 == NAN)) || (!NAN(fVar2))))) goto LAB_0056c58c;
    fVar4 = 0.0;
LAB_0056c608:
    bVar1 = fVar4 < 0.0;
    if (bVar1 == NAN(fVar4)) {
      return fVar4;
    }
  }
  else {
    fVar2 = *(float *)(this + (ulong)*(uint *)(PTR_trailing_0067da30 + (ulong)param_3 * 4) * 4 +
                              0x8c);
    bVar1 = false;
    if (((fVar2 != NAN && fVar2 != NAN) && fVar2 != NAN) && (bVar1 = true, !NAN(fVar2))) {
      bVar1 = false;
    }
    if ((bVar1) && (fVar2 = *(float *)(this + 0xa8), fVar2 != NAN)) goto LAB_0056c66c;
LAB_0056c58c:
    fVar4 = 0.0;
    if (fVar2 == NAN) goto LAB_0056c620;
    if (fVar2 == NAN) goto LAB_0056c608;
    pfVar3 = (float *)PTR_rive_YGValueAuto_0067d660;
    if ((fVar2 == NAN) || (pfVar3 = (float *)PTR_rive_YGValueUndefined_0067da20, NAN(fVar2))) {
      fVar4 = *pfVar3;
      if (pfVar3[1] != 1.4013e-45) {
        if (pfVar3[1] != 2.8026e-45) {
          fVar4 = NAN;
          goto LAB_0056c644;
        }
        goto LAB_0056c620;
      }
    }
    else {
      fVar4 = (float)(((uint)fVar2 & 0xbfffffff) + 0x20000000);
      if (((uint)fVar2 >> 0x1e & 1) == 0) goto LAB_0056c608;
LAB_0056c620:
      fVar4 = fVar4 * param_1 * 0.01;
    }
    bVar1 = fVar4 < 0.0;
    if (bVar1 == NAN(fVar4)) {
      return fVar4;
    }
  }
  if (bVar1) {
    return 0.0;
  }
LAB_0056c644:
  if (NAN(fVar4)) {
    fVar4 = 0.0;
  }
  return fVar4;
}


// ===== 0056c6e0  rive_YGNode::getLeadingPaddingAndBorder =====

/* rive_YGNode::getLeadingPaddingAndBorder(rive_YGFlexDirection, float) const */

float rive_YGNode::getLeadingPaddingAndBorder(rive_YGNode *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)getLeadingPadding();
  fVar2 = (float)getLeadingBorder(param_1,param_2);
  return fVar1 + fVar2;
}


// ===== 0056c720  rive_YGNode::getTrailingPaddingAndBorder =====

/* rive_YGNode::getTrailingPaddingAndBorder(rive_YGFlexDirection, float) const */

float rive_YGNode::getTrailingPaddingAndBorder(rive_YGNode *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)getTrailingPadding();
  fVar2 = (float)getTrailingBorder(param_1,param_2);
  return fVar1 + fVar2;
}


// ===== 0056c760  rive_YGNode::reset =====

/* rive_YGNode::reset() */

void __thiscall rive_YGNode::reset(rive_YGNode *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined1 auStack_1c4 [332];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x250) != *(long *)(this + 0x248)) {
    rive_facebook::yoga::detail::Log::log
              (this,5,0,&DAT_00242a86,"Cannot reset a node which still has children attached");
    this[8] = (rive_YGNode)((byte)this[8] | 0x80);
  }
  if (*(long *)(this + 0x240) != 0) {
    rive_facebook::yoga::detail::Log::log
              (this,5,0,&DAT_00242a86,"Cannot reset a node still attached to a owner");
    this[8] = (rive_YGNode)((byte)this[8] | 0x80);
  }
  rive_YGNode((rive_YGNode *)&local_2c0,*(rive_YGConfig **)(this + 0x260));
  *(undefined8 *)(this + 8) = uStack_2b8;
  *(undefined8 *)this = local_2c0;
  *(undefined8 *)(this + 0x18) = uStack_2a8;
  *(undefined8 *)(this + 0x10) = uStack_2b0;
  *(undefined8 *)(this + 200) = uStack_1f8;
  *(undefined8 *)(this + 0xc0) = local_200;
  *(undefined8 *)(this + 0xd8) = uStack_1e8;
  *(undefined8 *)(this + 0xd0) = uStack_1f0;
  *(ulong *)(this + 0xe8) = CONCAT44(uStack_1d4,uStack_1d8);
  *(undefined8 *)(this + 0xe0) = local_1e0;
  *(undefined8 *)(this + 0xf4) = uStack_1cc;
  *(ulong *)(this + 0xec) = CONCAT44(uStack_1d0,uStack_1d4);
  *(undefined8 *)(this + 0x88) = uStack_238;
  *(undefined8 *)(this + 0x80) = local_240;
  *(undefined8 *)(this + 0x98) = uStack_228;
  *(undefined8 *)(this + 0x90) = uStack_230;
  *(undefined8 *)(this + 0xa8) = uStack_218;
  *(undefined8 *)(this + 0xa0) = local_220;
  *(undefined8 *)(this + 0xb8) = uStack_208;
  *(undefined8 *)(this + 0xb0) = uStack_210;
  *(undefined8 *)(this + 0x48) = uStack_278;
  *(undefined8 *)(this + 0x40) = local_280;
  *(undefined8 *)(this + 0x58) = uStack_268;
  *(undefined8 *)(this + 0x50) = uStack_270;
  *(undefined8 *)(this + 0x68) = uStack_258;
  *(undefined8 *)(this + 0x60) = local_260;
  *(undefined8 *)(this + 0x78) = uStack_248;
  *(undefined8 *)(this + 0x70) = uStack_250;
  *(undefined8 *)(this + 0x28) = uStack_298;
  *(undefined8 *)(this + 0x20) = local_2a0;
  *(undefined8 *)(this + 0x38) = uStack_288;
  *(undefined8 *)(this + 0x30) = uStack_290;
  memcpy(this + 0xfc,auStack_1c4,0x14c);
  pvVar2 = *(void **)(this + 0x248);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x250) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined8 *)(this + 600) = local_68;
  *(undefined8 *)(this + 0x268) = uStack_58;
  *(undefined8 *)(this + 0x260) = local_60;
  *(undefined8 *)(this + 0x250) = uStack_70;
  *(undefined8 *)(this + 0x248) = local_78;
  *(undefined8 *)(this + 0x270) = local_50;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056c8c8  rive_YGFlexDirectionCross =====

/* rive_YGFlexDirectionCross(rive_YGFlexDirection, rive_YGDirection) */

undefined4 rive_YGFlexDirectionCross(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2 == 2) {
    uVar1 = 3;
  }
  if (1 < param_1) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0056c8e0  rive_YGFloatMax =====

/* rive_YGFloatMax(float, float) */

float rive_YGFloatMax(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1;
  if (param_1 <= param_2) {
    fVar2 = param_2;
  }
  fVar1 = param_2;
  if (!NAN(param_1)) {
    fVar1 = param_1;
  }
  if (!NAN(param_1) && !NAN(param_2)) {
    fVar1 = fVar2;
  }
  return fVar1;
}


// ===== 0056c8f8  rive_YGFloatMin =====

/* rive_YGFloatMin(float, float) */

float rive_YGFloatMin(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(param_1,param_2);
  fVar1 = param_2;
  if (!NAN(param_1)) {
    fVar1 = param_1;
  }
  if (!NAN(param_1) && !NAN(param_2)) {
    fVar1 = fVar2;
  }
  return fVar1;
}


// ===== 0056c910  rive_YGValueEqual =====

/* rive_YGValueEqual(rive_YGValue const&, rive_YGValue const&) */

bool rive_YGValueEqual(rive_YGValue *param_1,rive_YGValue *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    return false;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if ((!NAN(*(float *)param_1)) || (!NAN(*(float *)param_2))) {
      return ABS(*(float *)param_1 - *(float *)param_2) < 0.0001;
    }
  }
  return true;
}


// ===== 0056c968  rive_YGFloatsEqual =====

/* rive_YGFloatsEqual(float, float) */

bool rive_YGFloatsEqual(float param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((NAN(param_2)) && (bVar1 = true, !NAN(param_1))) {
    bVar1 = false;
  }
  if (!NAN(param_1) && !NAN(param_2)) {
    bVar1 = ABS(param_1 - param_2) < 0.0001;
  }
  return bVar1;
}


// ===== 0056c99c  rive_YGDoubleEqual =====

/* rive_YGDoubleEqual(double, double) */

bool rive_YGDoubleEqual(double param_1,double param_2)

{
  bool bVar1;
  
  bVar1 = NAN(param_2) && NAN(param_1);
  if (!NAN(param_1) && !NAN(param_2)) {
    bVar1 = ABS(param_1 - param_2) < DAT_0024e928;
  }
  return bVar1;
}


// ===== 0056c9cc  rive_YGFloatSanitize =====

/* rive_YGFloatSanitize(float) */

float rive_YGFloatSanitize(float param_1)

{
  if (NAN(param_1)) {
    param_1 = 0.0;
  }
  return param_1;
}


// ===== 0056c9dc  rive_YGFloatOptionalMax =====

/* rive_YGFloatOptionalMax(rive_YGFloatOptional, rive_YGFloatOptional) */

float rive_YGFloatOptionalMax(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1;
  if ((param_1 < param_2 != (NAN(param_1) || NAN(param_2))) &&
     (fVar1 = param_2, param_2 == param_1 || param_2 < param_1 != (NAN(param_2) || NAN(param_1)))) {
    if (!NAN(param_1)) {
      param_2 = param_1;
    }
    return param_2;
  }
  return fVar1;
}


// ===== 0056ca1c  rive_facebook::yoga::throwLogicalErrorWithMessage =====

/* rive_facebook::yoga::throwLogicalErrorWithMessage(char const*) */

void rive_facebook::yoga::throwLogicalErrorWithMessage(char *param_1)

{
  return;
}


// ===== 0056ca20  rive_YGFloatIsUndefined =====

bool rive_YGFloatIsUndefined(float param_1)

{
  return NAN(param_1);
}


// ===== 0056ca2c  rive_YGNodeGetContext =====

undefined8 rive_YGNodeGetContext(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0056ca34  rive_YGNodeSetContext =====

void rive_YGNodeSetContext(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 0056ca3c  rive_YGNodeGetConfig =====

undefined8 rive_YGNodeGetConfig(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}


// ===== 0056ca44  rive_YGNodeSetConfig =====

void __thiscall rive_YGNode::rive_YGNodeSetConfig(rive_YGNode *this,rive_YGConfig *param_1)

{
  (*(code *)PTR_setConfig_00681100)();
  return;
}


// ===== 0056ca48  rive_YGNodeHasMeasureFunc =====

bool rive_YGNodeHasMeasureFunc(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}


// ===== 0056ca58  rive_YGNodeSetMeasureFunc =====

void rive_YGNodeSetMeasureFunc(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  bVar2 = bVar1 & 0xef;
  *(byte *)(param_1 + 8) = bVar2;
  if (param_2 == 0) {
    bVar2 = bVar1 & 0xe7;
  }
  else {
    if (*(long *)(param_1 + 0x250) != *(long *)(param_1 + 0x248)) {
      rive_facebook::yoga::detail::Log::log
                (param_1,5,0,&DAT_00242a86,
                 "Cannot set measure function: Nodes with measure functions cannot have children.");
      bVar2 = *(byte *)(param_1 + 8) | 0x80;
    }
    bVar2 = bVar2 | 8;
  }
  *(byte *)(param_1 + 8) = bVar2;
  *(long *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 0056cad4  rive_YGNodeHasBaselineFunc =====

bool rive_YGNodeHasBaselineFunc(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}


// ===== 0056cae4  rive_YGNodeSetBaselineFunc =====

void rive_YGNodeSetBaselineFunc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xdf;
  return;
}


// ===== 0056caf8  rive_YGNodeGetDirtiedFunc =====

undefined8 rive_YGNodeGetDirtiedFunc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 0056cb00  rive_YGNodeSetDirtiedFunc =====

void rive_YGNodeSetDirtiedFunc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 0056cb08  rive_YGNodeSetPrintFunc =====

void rive_YGNodeSetPrintFunc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xbf;
  return;
}


// ===== 0056cb1c  rive_YGNodeGetHasNewLayout =====

byte rive_YGNodeGetHasNewLayout(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}


// ===== 0056cb28  rive_YGConfigSetPrintTreeFlag =====

void rive_YGConfigSetPrintTreeFlag(long param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if ((param_2 & 1) == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd | bVar1;
  return;
}


// ===== 0056cb48  rive_YGNodeSetHasNewLayout =====

void rive_YGNodeSetHasNewLayout(long param_1,byte param_2)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | param_2;
  return;
}


// ===== 0056cb5c  rive_YGNodeGetNodeType =====

byte rive_YGNodeGetNodeType(long param_1)

{
  return *(byte *)(param_1 + 8) >> 3 & 1;
}


// ===== 0056cb68  rive_YGNodeSetNodeType =====

void rive_YGNodeSetNodeType(long param_1,uint param_2)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf7 | (byte)((param_2 & 1) << 3);
  return;
}


// ===== 0056cb80  rive_YGNodeIsDirty =====

byte rive_YGNodeIsDirty(long param_1)

{
  return *(byte *)(param_1 + 8) >> 2 & 1;
}


// ===== 0056cb8c  rive_YGNodeMarkDirtyAndPropagateToDescendants =====

void rive_YGNodeMarkDirtyAndPropagateToDescendants(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x248);
  puVar2 = *(undefined8 **)(param_1 + 0x250);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    FUN_0056bd8c(*puVar1);
  }
  return;
}


// ===== 0056cbd0  rive_YGNodeNewWithConfig =====

rive_YGNode * rive_YGNodeNewWithConfig(rive_YGConfig *param_1)

{
  long lVar1;
  long lVar2;
  rive_YGNode *this;
  long *plVar3;
  rive_YGConfig *local_50;
  undefined4 local_44;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (rive_YGNode *)operator_new(0x278);
  rive_YGNode::rive_YGNode(this,param_1);
  local_50 = param_1;
  lVar2 = DAT_00687358;
  if (param_1 == (rive_YGConfig *)0x0) {
    rive_facebook::yoga::detail::Log::log
              (0,5,0,&DAT_00242a86,"Tried to construct YGNode with null config");
    lVar2 = DAT_00687358;
  }
  for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x30)) {
    plVar3 = *(long **)(lVar2 + 0x20);
    local_44 = 0;
    if (plVar3 == (long *)0x0) {
      local_40 = (undefined1 *)&local_50;
                    /* WARNING: Subroutine does not return */
      FUN_00338fb0();
    }
    local_40 = (undefined1 *)&local_50;
    (**(code **)(*plVar3 + 0x30))(plVar3,this,&local_44,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


// ===== 0056cca0  rive_YGAssert =====

void rive_YGAssert(ulong param_1,undefined8 param_2)

{
  if ((param_1 & 1) != 0) {
    return;
  }
  rive_facebook::yoga::detail::Log::log(0,5,0,&DAT_00242a86,param_2);
  return;
}


// ===== 0056ccc4  rive_YGAssertWithConfig =====

void rive_YGAssertWithConfig(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  rive_facebook::yoga::detail::Log::log(param_1,5,0,&DAT_00242a86,param_3);
  return;
}


// ===== 0056cce4  rive_YGConfigGetDefault =====

rive_YGConfig * rive_YGConfigGetDefault(void)

{
  int iVar1;
  rive_YGConfig *this;
  
  if (((DAT_00687348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00687348), iVar1 != 0)) {
    this = (rive_YGConfig *)operator_new(0x30);
    rive_YGConfig::rive_YGConfig(this,FUN_0056cdb4);
    *(int *)PTR_gConfigInstanceCount_0067da38 = *(int *)PTR_gConfigInstanceCount_0067da38 + 1;
    DAT_00687340 = this;
    __cxa_guard_release(&DAT_00687348);
  }
  return DAT_00687340;
}


// ===== 0056cd6c  rive_YGConfigNew =====

rive_YGConfig * rive_YGConfigNew(void)

{
  rive_YGConfig *this;
  
  this = (rive_YGConfig *)operator_new(0x30);
  rive_YGConfig::rive_YGConfig(this,FUN_0056cdb4);
  *(int *)PTR_gConfigInstanceCount_0067da38 = *(int *)PTR_gConfigInstanceCount_0067da38 + 1;
  return this;
}


// ===== 0056cdb4  FUN_0056cdb4 =====

void FUN_0056cdb4(undefined8 param_1,undefined8 param_2,int param_3,char *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_3 == 5) || (param_3 == 0)) {
    uStack_48 = param_5[1];
    local_50 = *param_5;
    uStack_38 = param_5[3];
    uStack_40 = param_5[2];
    iVar2 = vfprintf((FILE *)(PTR___sF_0067cee8 + 0x130),param_4,&local_50);
  }
  else {
    uStack_68 = param_5[1];
    local_70 = *param_5;
    uStack_58 = param_5[3];
    uStack_60 = param_5[2];
    iVar2 = vprintf(param_4,&local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 0056ce38  rive_YGNodeNew =====

rive_YGNode * rive_YGNodeNew(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  rive_YGNode *this;
  long *plVar4;
  rive_YGConfig *prVar5;
  rive_YGConfig *local_50;
  undefined4 local_44;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_00687348 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_00687348), iVar3 != 0)) {
    prVar5 = (rive_YGConfig *)operator_new(0x30);
    rive_YGConfig::rive_YGConfig(prVar5,FUN_0056cdb4);
    DAT_00687340 = prVar5;
    *(int *)PTR_gConfigInstanceCount_0067da38 = *(int *)PTR_gConfigInstanceCount_0067da38 + 1;
    __cxa_guard_release(&DAT_00687348);
  }
  prVar5 = DAT_00687340;
  this = (rive_YGNode *)operator_new(0x278);
  rive_YGNode::rive_YGNode(this,prVar5);
  local_50 = prVar5;
  lVar2 = DAT_00687358;
  if (prVar5 == (rive_YGConfig *)0x0) {
    rive_facebook::yoga::detail::Log::log
              (0,5,0,&DAT_00242a86,"Tried to construct YGNode with null config");
    lVar2 = DAT_00687358;
  }
  for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x30)) {
    plVar4 = *(long **)(lVar2 + 0x20);
    local_44 = 0;
    if (plVar4 == (long *)0x0) {
      local_40 = (undefined1 *)&local_50;
                    /* WARNING: Subroutine does not return */
      FUN_00338fb0();
    }
    local_40 = (undefined1 *)&local_50;
    (**(code **)(*plVar4 + 0x30))(plVar4,this,&local_44,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


// ===== 0056cf6c  rive_YGNodeClone =====

void * rive_YGNodeClone(void *param_1)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  void *__dest;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *__dest_00;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x278);
  memcpy(pvVar2,param_1,0x248);
  pvVar10 = *(void **)((long)param_1 + 0x248);
  lVar4 = *(long *)((long)param_1 + 0x250);
  *(undefined8 *)((long)pvVar2 + 0x248) = 0;
  *(undefined8 *)((long)pvVar2 + 600) = 0;
  uVar7 = lVar4 - (long)pvVar10;
  *(undefined8 *)((long)pvVar2 + 0x250) = 0;
  if (uVar7 != 0) {
    if ((long)uVar7 < 0) {
      pvVar2 = (void *)FUN_0056af98();
      pcStack_98 = rive_YGNodeFree;
      lVar1 = tpidr_el0;
      lStack_a8 = *(long *)(lVar1 + 0x28);
      lVar4 = *(long *)((long)pvVar2 + 0x240);
      puStack_a0 = &stack0xffffffffffffffc0;
      if (lVar4 != 0) {
        puVar6 = *(undefined8 **)(lVar4 + 0x250);
        puVar9 = *(undefined8 **)(lVar4 + 0x248);
        __dest_00 = puVar9;
        for (; (puVar9 != puVar6 && (__dest_00 = puVar9, (void *)*puVar9 != pvVar2));
            puVar9 = puVar9 + 1) {
          __dest_00 = puVar6;
        }
        if (__dest_00 != puVar6) {
          __n = (long)puVar6 - (long)(__dest_00 + 1);
          if (__n != 0) {
            memmove(__dest_00,__dest_00 + 1,__n);
          }
          *(size_t *)(lVar4 + 0x250) = (long)__dest_00 + __n;
        }
        *(undefined8 *)((long)pvVar2 + 0x240) = 0;
      }
      pvVar10 = *(void **)((long)pvVar2 + 0x248);
      puVar9 = (undefined8 *)((long)pvVar2 + 0x248);
      uVar7 = *(long *)((long)pvVar2 + 0x250) - (long)pvVar10;
      if ((uVar7 & 0x7fffffff8) != 0) {
        uVar8 = 0;
        do {
          lVar4 = uVar8 * 8;
          uVar8 = uVar8 + 1;
          *(undefined8 *)(*(long *)((long)pvVar10 + lVar4) + 0x240) = 0;
        } while ((uVar7 >> 3 & 0xffffffff) != uVar8);
        pvVar10 = (void *)*puVar9;
      }
      *(void **)((long)pvVar2 + 0x250) = pvVar10;
      if (*(void **)((long)pvVar2 + 600) != pvVar10) {
        *puVar9 = 0;
        *(undefined8 *)((long)pvVar2 + 0x250) = 0;
        *(undefined8 *)((long)pvVar2 + 600) = 0;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
      }
      uStack_c0 = *(undefined8 *)((long)pvVar2 + 0x260);
      for (lVar4 = DAT_00687358; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
        plVar3 = *(long **)(lVar4 + 0x20);
        uStack_b4 = 1;
        if (plVar3 == (long *)0x0) {
          puStack_b0 = (undefined1 *)&uStack_c0;
                    /* WARNING: Subroutine does not return */
          FUN_00338fb0();
        }
        puStack_b0 = (undefined1 *)&uStack_c0;
        (**(code **)(*plVar3 + 0x30))(plVar3,pvVar2,&uStack_b4,&puStack_b0);
      }
      pvVar10 = (void *)*puVar9;
      if (pvVar10 != (void *)0x0) {
        *(void **)((long)pvVar2 + 0x250) = pvVar10;
        operator_delete(pvVar10);
      }
      operator_delete(pvVar2);
      if (*(long *)(lVar1 + 0x28) == lStack_a8) {
        return pvVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __dest = operator_new(uVar7);
    *(void **)((long)pvVar2 + 0x248) = __dest;
    *(ulong *)((long)pvVar2 + 600) = (long)__dest + uVar7;
    memcpy(__dest,pvVar10,uVar7);
    *(ulong *)((long)pvVar2 + 0x250) = (long)__dest + uVar7;
  }
  uVar11 = *(undefined8 *)((long)param_1 + 0x260);
  uVar5 = *(undefined8 *)((long)param_1 + 0x270);
  *(undefined8 *)((long)pvVar2 + 0x268) = *(undefined8 *)((long)param_1 + 0x268);
  *(undefined8 *)((long)pvVar2 + 0x260) = uVar11;
  local_60 = *(undefined8 *)((long)pvVar2 + 0x260);
  *(undefined8 *)((long)pvVar2 + 0x270) = uVar5;
  for (lVar4 = DAT_00687358; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
    plVar3 = *(long **)(lVar4 + 0x20);
    local_54 = 0;
    if (plVar3 == (long *)0x0) {
      local_50 = (undefined1 *)&local_60;
                    /* WARNING: Subroutine does not return */
      FUN_00338fb0();
    }
    local_50 = (undefined1 *)&local_60;
    (**(code **)(*plVar3 + 0x30))(plVar3,pvVar2,&local_54,&local_50);
  }
  *(undefined8 *)((long)pvVar2 + 0x240) = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056d084  rive_YGNodeFree =====

void rive_YGNodeFree(void *param_1)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *__dest;
  long lVar8;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)((long)param_1 + 0x240);
  if (lVar8 != 0) {
    puVar4 = *(undefined8 **)(lVar8 + 0x250);
    puVar7 = *(undefined8 **)(lVar8 + 0x248);
    __dest = puVar7;
    for (; (puVar7 != puVar4 && (__dest = puVar7, (void *)*puVar7 != param_1)); puVar7 = puVar7 + 1)
    {
      __dest = puVar4;
    }
    if (__dest != puVar4) {
      __n = (long)puVar4 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(size_t *)(lVar8 + 0x250) = (long)__dest + __n;
    }
    *(undefined8 *)((long)param_1 + 0x240) = 0;
  }
  pvVar2 = *(void **)((long)param_1 + 0x248);
  puVar7 = (undefined8 *)((long)param_1 + 0x248);
  uVar5 = *(long *)((long)param_1 + 0x250) - (long)pvVar2;
  if ((uVar5 & 0x7fffffff8) != 0) {
    uVar6 = 0;
    do {
      lVar8 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(undefined8 *)(*(long *)((long)pvVar2 + lVar8) + 0x240) = 0;
    } while ((uVar5 >> 3 & 0xffffffff) != uVar6);
    pvVar2 = (void *)*puVar7;
  }
  *(void **)((long)param_1 + 0x250) = pvVar2;
  if (*(void **)((long)param_1 + 600) != pvVar2) {
    *puVar7 = 0;
    *(undefined8 *)((long)param_1 + 0x250) = 0;
    *(undefined8 *)((long)param_1 + 600) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  local_60 = *(undefined8 *)((long)param_1 + 0x260);
  for (lVar8 = DAT_00687358; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x30)) {
    plVar3 = *(long **)(lVar8 + 0x20);
    local_54 = 1;
    if (plVar3 == (long *)0x0) {
      local_50 = (undefined1 *)&local_60;
                    /* WARNING: Subroutine does not return */
      FUN_00338fb0();
    }
    local_50 = (undefined1 *)&local_60;
    (**(code **)(*plVar3 + 0x30))(plVar3,param_1,&local_54,&local_50);
  }
  pvVar2 = (void *)*puVar7;
  if (pvVar2 != (void *)0x0) {
    *(void **)((long)param_1 + 0x250) = pvVar2;
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056d1f8  rive_YGNodeGetChildCount =====

ulong rive_YGNodeGetChildCount(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x250) - *(long *)(param_1 + 0x248)) >> 3;
}


// ===== 0056d20c  rive_YGNodeGetChild =====

undefined8 rive_YGNodeGetChild(long param_1,uint param_2)

{
  if ((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x250) - *(long *)(param_1 + 0x248) >> 3)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x248) + (ulong)param_2 * 8);
  }
  return 0;
}


// ===== 0056d234  rive_YGNodeDeallocate =====

void rive_YGNodeDeallocate(void *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = *(undefined8 *)((long)param_1 + 0x260);
  lVar4 = DAT_00687358;
  if (DAT_00687358 != 0) {
    do {
      plVar2 = *(long **)(lVar4 + 0x20);
      local_54 = 1;
      if (plVar2 == (long *)0x0) {
        local_50 = (undefined1 *)&local_60;
                    /* WARNING: Subroutine does not return */
        FUN_00338fb0();
      }
      local_50 = (undefined1 *)&local_60;
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1,&local_54,&local_50);
      plVar2 = (long *)(lVar4 + 0x30);
      lVar4 = *plVar2;
    } while (*plVar2 != 0);
  }
  pvVar3 = *(void **)((long)param_1 + 0x248);
  if (pvVar3 != (void *)0x0) {
    *(void **)((long)param_1 + 0x250) = pvVar3;
    operator_delete(pvVar3);
  }
  operator_delete(param_1);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0056d2f0  rive_YGNodeFreeRecursiveWithCleanupFunc =====

void rive_YGNodeFreeRecursiveWithCleanupFunc(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x250);
  lVar2 = *(long *)(param_1 + 0x248);
  uVar3 = lVar1 - lVar2;
  if ((uVar3 & 0x7fffffff8) != 0) {
    uVar5 = 0;
    do {
      if (uVar5 < (ulong)((long)uVar3 >> 3)) {
        lVar4 = *(long *)(lVar2 + uVar5 * 8);
      }
      else {
        lVar4 = 0;
      }
      if (*(long *)(lVar4 + 0x240) == param_1) {
        rive_YGNodeRemoveChild(param_1,lVar4);
        rive_YGNodeFreeRecursiveWithCleanupFunc(lVar4,0);
        lVar1 = *(long *)(param_1 + 0x250);
        lVar2 = *(long *)(param_1 + 0x248);
      }
      else {
        uVar5 = uVar5 + 1;
      }
      uVar3 = lVar1 - lVar2;
    } while (uVar5 < (uVar3 >> 3 & 0xffffffff));
  }
  if (param_2 != (code *)0x0) {
    (*param_2)(param_1);
  }
  rive_YGNodeFree(param_1);
  return;
}


// ===== 0056d39c  rive_YGNodeRemoveChild =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rive_YGNodeRemoveChild(long param_1,long param_2)

{
  size_t __n;
  long *plVar1;
  long *plVar2;
  long *__dest;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  
  plVar2 = *(long **)(param_1 + 0x250);
  __dest = *(long **)(param_1 + 0x248);
  plVar1 = __dest;
  if (((long)plVar2 - (long)__dest & 0x7fffffff8U) != 0) {
    for (; (plVar1 != plVar2 && (__dest = plVar1, *plVar1 != param_2)); plVar1 = plVar1 + 1) {
      __dest = plVar2;
    }
    if (__dest != plVar2) {
      lVar3 = *(long *)(param_2 + 0x240);
      __n = (long)plVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(size_t *)(param_1 + 0x250) = (long)__dest + __n;
      if (lVar3 == param_1) {
        *(undefined8 *)(param_2 + 0xfc) = 0;
        *(undefined8 *)(param_2 + 0x104) = 0;
        *(undefined8 *)(param_2 + 0x10c) = 0x7fc000007fc00000;
        *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
        *(undefined8 *)(param_2 + 0x11c) = 0;
        *(undefined8 *)(param_2 + 0x114) = 0;
        *(undefined8 *)(param_2 + 300) = 0;
        *(undefined8 *)(param_2 + 0x124) = 0;
        *(undefined8 *)(param_2 + 0x13c) = 0;
        *(undefined8 *)(param_2 + 0x134) = 0;
        auVar5 = NEON_fmov(0xbf800000,4);
        *(undefined8 *)(param_2 + 0x158) = 0xbf80000000000000;
        *(undefined8 *)(param_2 + 0x160) = 0xbf800000;
        *(undefined8 *)(param_2 + 0x144) = 0;
        uVar6 = auVar5._8_8_;
        *(undefined8 *)(param_2 + 0x174) = uVar6;
        uVar4 = auVar5._0_8_;
        *(undefined8 *)(param_2 + 0x16c) = uVar4;
        *(undefined8 *)(param_2 + 0x18c) = uVar6;
        *(undefined8 *)(param_2 + 0x184) = uVar4;
        *(undefined8 *)(param_2 + 0x1a4) = uVar6;
        *(undefined8 *)(param_2 + 0x19c) = uVar4;
        *(undefined8 *)(param_2 + 0x1bc) = uVar6;
        *(undefined8 *)(param_2 + 0x1b4) = uVar4;
        *(undefined8 *)(param_2 + 0x1d4) = uVar6;
        *(undefined8 *)(param_2 + 0x1cc) = uVar4;
        *(undefined8 *)(param_2 + 0x1ec) = uVar6;
        *(undefined8 *)(param_2 + 0x1e4) = uVar4;
        *(undefined8 *)(param_2 + 0x204) = uVar6;
        *(undefined8 *)(param_2 + 0x1fc) = uVar4;
        uVar6 = _UNK_0024de38;
        uVar4 = _DAT_0024de30;
        *(undefined4 *)(param_2 + 0x150) = 0;
        *(undefined4 *)(param_2 + 0x154) = 0;
        *(undefined8 *)(param_2 + 0x21c) = uVar6;
        *(undefined8 *)(param_2 + 0x214) = uVar4;
        *(undefined4 *)(param_2 + 0x168) = 0;
        *(undefined8 *)(param_2 + 0x224) = 0xbf800000bf800000;
        *(undefined8 *)(param_2 + 0x22c) = 0;
        *(undefined8 *)(param_2 + 0x234) = 0xbf800000bf800000;
        *(undefined8 *)(param_2 + 0x17c) = 0;
        *(undefined8 *)(param_2 + 0x194) = 0;
        *(undefined8 *)(param_2 + 0x1ac) = 0;
        *(undefined8 *)(param_2 + 0x1c4) = 0;
        *(undefined8 *)(param_2 + 0x1dc) = 0;
        *(undefined8 *)(param_2 + 500) = 0;
        *(undefined8 *)(param_2 + 0x20c) = 0;
        *(undefined8 *)(param_2 + 0x240) = 0;
      }
      do {
        if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
          return;
        }
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(param_1);
        }
        *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
        param_1 = *(long *)(param_1 + 0x240);
      } while (param_1 != 0);
    }
  }
  return;
}


// ===== 0056d51c  rive_YGNodeFreeRecursive =====

void rive_YGNodeFreeRecursive(undefined8 param_1)

{
  rive_YGNodeFreeRecursiveWithCleanupFunc(param_1,0);
  return;
}


// ===== 0056d524  rive_YGNodeReset =====

void __thiscall rive_YGNode::rive_YGNodeReset(rive_YGNode *this)

{
  (*(code *)PTR_reset_00681148)();
  return;
}


// ===== 0056d528  rive_YGConfigGetInstanceCount =====

undefined4 rive_YGConfigGetInstanceCount(void)

{
  return *(undefined4 *)PTR_gConfigInstanceCount_0067da38;
}


// ===== 0056d538  rive_YGConfigFree =====

void rive_YGConfigFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
  }
  *(int *)PTR_gConfigInstanceCount_0067da38 = *(int *)PTR_gConfigInstanceCount_0067da38 + -1;
  return;
}


// ===== 0056d564  rive_YGConfigCopy =====

void rive_YGConfigCopy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}


// ===== 0056d578  rive_YGNodeSetIsReferenceBaseline =====

void rive_YGNodeSetIsReferenceBaseline(long param_1,uint param_2)

{
  byte bVar1;
  
  if ((param_2 & 1) != (*(byte *)(param_1 + 8) & 2) >> 1) {
    bVar1 = 2;
    if ((param_2 & 1) == 0) {
      bVar1 = 0;
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd | bVar1;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056d5f8  rive_YGNodeIsReferenceBaseline =====

byte rive_YGNodeIsReferenceBaseline(long param_1)

{
  return *(byte *)(param_1 + 8) >> 1 & 1;
}


// ===== 0056d604  rive_YGNodeInsertChild =====

void rive_YGNodeInsertChild(rive_YGNode *param_1,rive_YGNode *param_2,uint param_3)

{
  if (*(long *)(param_2 + 0x240) != 0) {
    rive_facebook::yoga::detail::Log::log
              (param_1,5,0,&DAT_00242a86,"Child already has a owner, it must be removed first.");
    param_1[8] = (rive_YGNode)((byte)param_1[8] | 0x80);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    rive_facebook::yoga::detail::Log::log
              (param_1,5,0,&DAT_00242a86,
               "Cannot add child: Nodes with measure functions cannot have children.");
    param_1[8] = (rive_YGNode)((byte)param_1[8] | 0x80);
  }
  rive_YGNode::insertChild(param_1,param_2,param_3);
  *(rive_YGNode **)(param_2 + 0x240) = param_1;
  do {
    if (((byte)param_1[8] >> 2 & 1) != 0) {
      return;
    }
    param_1[8] = (rive_YGNode)((byte)param_1[8] | 4);
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(param_1);
    }
    *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
    param_1 = *(rive_YGNode **)(param_1 + 0x240);
  } while (param_1 != (rive_YGNode *)0x0);
  return;
}


// ===== 0056d6e4  rive_YGAssertWithNode =====

void rive_YGAssertWithNode(long param_1,ulong param_2,undefined8 param_3)

{
  if ((param_2 & 1) == 0) {
    rive_facebook::yoga::detail::Log::log(param_1,5,0,&DAT_00242a86,param_3);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x80;
  }
  return;
}


// ===== 0056d728  rive_YGNodeSwapChild =====

void rive_YGNodeSwapChild(long param_1,long param_2,uint param_3)

{
  *(long *)(*(long *)(param_1 + 0x248) + (ulong)param_3 * 8) = param_2;
  *(long *)(param_2 + 0x240) = param_1;
  return;
}


// ===== 0056d738  rive_YGNodeRemoveAllChildren =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rive_YGNodeRemoveAllChildren(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  rive_YGConfig *this;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  
  uVar2 = _UNK_0024de38;
  uVar1 = _DAT_0024de30;
  uVar6 = *(long *)(param_1 + 0x250) - (long)*(long **)(param_1 + 0x248);
  if ((uVar6 & 0x7fffffff8) != 0) {
    if (*(long *)(**(long **)(param_1 + 0x248) + 0x240) == param_1) {
      auVar10 = NEON_fmov(0xbf800000,4);
      uVar8 = 0;
      do {
        if (uVar8 < (ulong)(*(long *)(param_1 + 0x250) - *(long *)(param_1 + 0x248) >> 3)) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x248) + uVar8 * 8);
        }
        else {
          lVar7 = 0;
        }
        if (((DAT_00687348 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00687348), iVar4 != 0)) {
          this = (rive_YGConfig *)operator_new(0x30);
          puVar3 = PTR_gConfigInstanceCount_0067da38;
          rive_YGConfig::rive_YGConfig(this,FUN_0056cdb4);
          DAT_00687340 = this;
          *(int *)puVar3 = *(int *)puVar3 + 1;
          __cxa_guard_release(&DAT_00687348);
        }
        if (DAT_00687340 == (rive_YGConfig *)0x0) {
          rive_facebook::yoga::detail::Log::log
                    (0,5,0,&DAT_00242a86,"Attempting to construct YGNode with null config");
        }
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar7 + 0xfc) = 0;
        uVar11 = auVar10._8_8_;
        *(undefined8 *)(lVar7 + 0x174) = uVar11;
        uVar9 = auVar10._0_8_;
        *(undefined8 *)(lVar7 + 0x16c) = uVar9;
        *(undefined8 *)(lVar7 + 0x18c) = uVar11;
        *(undefined8 *)(lVar7 + 0x184) = uVar9;
        *(undefined8 *)(lVar7 + 0x1a4) = uVar11;
        *(undefined8 *)(lVar7 + 0x19c) = uVar9;
        *(undefined8 *)(lVar7 + 0x1bc) = uVar11;
        *(undefined8 *)(lVar7 + 0x1b4) = uVar9;
        *(undefined8 *)(lVar7 + 0x1d4) = uVar11;
        *(undefined8 *)(lVar7 + 0x1cc) = uVar9;
        *(undefined8 *)(lVar7 + 0x1ec) = uVar11;
        *(undefined8 *)(lVar7 + 0x1e4) = uVar9;
        *(undefined8 *)(lVar7 + 0x204) = uVar11;
        *(undefined8 *)(lVar7 + 0x1fc) = uVar9;
        *(undefined8 *)(lVar7 + 0x21c) = uVar2;
        *(undefined8 *)(lVar7 + 0x214) = uVar1;
        *(undefined8 *)(lVar7 + 0x104) = 0;
        *(undefined8 *)(lVar7 + 0x10c) = 0x7fc000007fc00000;
        *(undefined8 *)(lVar7 + 0x11c) = 0;
        *(undefined8 *)(lVar7 + 0x114) = 0;
        *(undefined8 *)(lVar7 + 300) = 0;
        *(undefined8 *)(lVar7 + 0x124) = 0;
        *(undefined8 *)(lVar7 + 0x13c) = 0;
        *(undefined8 *)(lVar7 + 0x134) = 0;
        *(undefined8 *)(lVar7 + 0x144) = 0;
        *(undefined4 *)(lVar7 + 0x150) = 0;
        *(undefined4 *)(lVar7 + 0x154) = 0;
        *(undefined4 *)(lVar7 + 0x14c) = 0x7fc00000;
        *(undefined8 *)(lVar7 + 0x158) = 0xbf80000000000000;
        *(undefined8 *)(lVar7 + 0x160) = 0xbf800000;
        *(undefined4 *)(lVar7 + 0x168) = 0;
        *(undefined8 *)(lVar7 + 0x17c) = 0;
        *(undefined8 *)(lVar7 + 0x194) = 0;
        *(undefined8 *)(lVar7 + 0x1ac) = 0;
        *(undefined8 *)(lVar7 + 0x1c4) = 0;
        *(undefined8 *)(lVar7 + 0x1dc) = 0;
        *(undefined8 *)(lVar7 + 500) = 0;
        *(undefined8 *)(lVar7 + 0x20c) = 0;
        *(undefined8 *)(lVar7 + 0x224) = 0xbf800000bf800000;
        *(undefined8 *)(lVar7 + 0x22c) = 0;
        *(undefined8 *)(lVar7 + 0x234) = 0xbf800000bf800000;
        *(undefined8 *)(lVar7 + 0x240) = 0;
      } while ((uVar6 >> 3 & 0xffffffff) != uVar8);
      pvVar5 = *(void **)(param_1 + 0x248);
      *(void **)(param_1 + 0x250) = pvVar5;
      if (*(void **)(param_1 + 600) != pvVar5) {
        *(undefined8 *)(param_1 + 0x248) = 0;
        *(undefined8 *)(param_1 + 0x250) = 0;
        *(undefined8 *)(param_1 + 600) = 0;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
      }
      do {
        if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
          return;
        }
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(param_1);
        }
        *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
        param_1 = *(long *)(param_1 + 0x240);
      } while (param_1 != 0);
    }
    else {
      FUN_0056da08((undefined8 *)(param_1 + 0x248),0,0,0);
      do {
        if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
          return;
        }
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(param_1);
        }
        *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
        param_1 = *(long *)(param_1 + 0x240);
      } while (param_1 != 0);
    }
  }
  return;
}


// ===== 0056da08  FUN_0056da08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056da08(undefined8 *param_1,void *param_2,ulong param_3,ulong param_4)

{
  void *__src;
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  void *__dest;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  uVar6 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)((long)(uVar6 - (long)__dest) >> 3) < param_4) {
    uVar8 = param_3;
    if (__dest != (void *)0x0) {
      param_1[1] = __dest;
      operator_delete(__dest);
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar4 = (long)uVar6 >> 2;
    if ((ulong)((long)uVar6 >> 2) <= param_4) {
      uVar4 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 >> 0x3d != 0) {
      auVar16 = FUN_0056af98();
      uVar2 = _UNK_0024de38;
      uVar1 = _DAT_0024de30;
      lVar13 = auVar16._0_8_;
      if (lVar13 != 0) {
        if ((int)uVar8 != 0) {
          uVar6 = (uVar8 & 0xffffffff) * 8;
          plVar3 = (long *)operator_new(uVar6);
          memcpy(plVar3,auVar16._8_8_,uVar6);
          uVar2 = _UNK_0024de38;
          uVar1 = _DAT_0024de30;
          plVar7 = *(long **)(lVar13 + 0x250);
          plVar9 = *(long **)(lVar13 + 0x248);
          if ((((long)plVar7 - (long)plVar9 & 0x7fffffff8U) != 0) && (plVar9 != plVar7)) {
            auVar16 = NEON_fmov(0xbf800000,4);
            do {
              lVar10 = *plVar9;
              uVar4 = uVar6;
              plVar11 = plVar3;
              do {
                plVar12 = plVar11;
                if (*plVar11 == lVar10) break;
                uVar4 = uVar4 - 8;
                plVar11 = plVar11 + 1;
                plVar12 = plVar3 + (uVar8 & 0xffffffff);
              } while (uVar4 != 0);
              if ((long)plVar12 - (long)plVar3 == uVar6) {
                *(undefined8 *)(lVar10 + 0xfc) = 0;
                *(undefined8 *)(lVar10 + 0x104) = 0;
                *(undefined8 *)(lVar10 + 0x10c) = 0x7fc000007fc00000;
                *(undefined8 *)(lVar10 + 0x11c) = 0;
                *(undefined8 *)(lVar10 + 0x114) = 0;
                *(undefined8 *)(lVar10 + 300) = 0;
                *(undefined8 *)(lVar10 + 0x124) = 0;
                *(undefined8 *)(lVar10 + 0x13c) = 0;
                *(undefined8 *)(lVar10 + 0x134) = 0;
                *(undefined8 *)(lVar10 + 0x144) = 0;
                *(undefined4 *)(lVar10 + 0x150) = 0;
                *(undefined4 *)(lVar10 + 0x154) = 0;
                *(undefined4 *)(lVar10 + 0x14c) = 0x7fc00000;
                *(undefined8 *)(lVar10 + 0x158) = 0xbf80000000000000;
                *(undefined8 *)(lVar10 + 0x160) = 0xbf800000;
                *(undefined4 *)(lVar10 + 0x168) = 0;
                *(undefined8 *)(lVar10 + 0x17c) = 0;
                *(undefined8 *)(lVar10 + 0x194) = 0;
                *(undefined8 *)(lVar10 + 0x1ac) = 0;
                *(undefined8 *)(lVar10 + 0x1c4) = 0;
                *(undefined8 *)(lVar10 + 0x1dc) = 0;
                *(undefined8 *)(lVar10 + 500) = 0;
                *(undefined8 *)(lVar10 + 0x20c) = 0;
                *(undefined8 *)(lVar10 + 0x224) = 0xbf800000bf800000;
                *(undefined8 *)(lVar10 + 0x22c) = 0;
                *(undefined8 *)(lVar10 + 0x234) = 0xbf800000bf800000;
                uVar15 = auVar16._8_8_;
                *(undefined8 *)(lVar10 + 0x174) = uVar15;
                uVar14 = auVar16._0_8_;
                *(undefined8 *)(lVar10 + 0x16c) = uVar14;
                *(undefined8 *)(lVar10 + 0x18c) = uVar15;
                *(undefined8 *)(lVar10 + 0x184) = uVar14;
                *(undefined8 *)(lVar10 + 0x1a4) = uVar15;
                *(undefined8 *)(lVar10 + 0x19c) = uVar14;
                *(undefined8 *)(lVar10 + 0x1bc) = uVar15;
                *(undefined8 *)(lVar10 + 0x1b4) = uVar14;
                *(undefined8 *)(lVar10 + 0x1d4) = uVar15;
                *(undefined8 *)(lVar10 + 0x1cc) = uVar14;
                *(undefined8 *)(lVar10 + 0x1ec) = uVar15;
                *(undefined8 *)(lVar10 + 0x1e4) = uVar14;
                *(undefined8 *)(lVar10 + 0x204) = uVar15;
                *(undefined8 *)(lVar10 + 0x1fc) = uVar14;
                *(undefined8 *)(lVar10 + 0x21c) = uVar2;
                *(undefined8 *)(lVar10 + 0x214) = uVar1;
                *(undefined8 *)(lVar10 + 0x240) = 0;
              }
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar7);
          }
          FUN_0056da08(lVar13 + 0x248,plVar3,plVar3 + (uVar8 & 0xffffffff),uVar8 & 0xffffffff);
          uVar8 = 0;
          do {
            plVar9 = (long *)((long)plVar3 + uVar8);
            uVar8 = uVar8 + 8;
            *(long *)(*plVar9 + 0x240) = lVar13;
          } while (uVar6 != uVar8);
          do {
            if ((*(byte *)(lVar13 + 8) >> 2 & 1) != 0) break;
            *(byte *)(lVar13 + 8) = *(byte *)(lVar13 + 8) | 4;
            if (*(code **)(lVar13 + 0x28) != (code *)0x0) {
              (**(code **)(lVar13 + 0x28))(lVar13);
            }
            *(undefined4 *)(lVar13 + 0x14c) = 0x7fc00000;
            lVar13 = *(long *)(lVar13 + 0x240);
          } while (lVar13 != 0);
          operator_delete(plVar3);
          return;
        }
        plVar3 = *(long **)(lVar13 + 0x250);
        plVar9 = *(long **)(lVar13 + 0x248);
        if (((long)plVar3 - (long)plVar9 & 0x7fffffff8U) != 0) {
          if (plVar9 != plVar3) {
            auVar16 = NEON_fmov(0xbf800000,4);
            do {
              plVar7 = plVar9 + 1;
              lVar10 = *plVar9;
              *(undefined8 *)(lVar10 + 0xfc) = 0;
              *(undefined8 *)(lVar10 + 0x104) = 0;
              *(undefined8 *)(lVar10 + 0x10c) = 0x7fc000007fc00000;
              *(undefined8 *)(lVar10 + 0x11c) = 0;
              *(undefined8 *)(lVar10 + 0x114) = 0;
              *(undefined8 *)(lVar10 + 300) = 0;
              *(undefined8 *)(lVar10 + 0x124) = 0;
              *(undefined8 *)(lVar10 + 0x13c) = 0;
              *(undefined8 *)(lVar10 + 0x134) = 0;
              *(undefined8 *)(lVar10 + 0x144) = 0;
              *(undefined4 *)(lVar10 + 0x14c) = 0x7fc00000;
              *(undefined4 *)(lVar10 + 0x150) = 0;
              *(undefined8 *)(lVar10 + 0x154) = 0;
              *(undefined8 *)(lVar10 + 0x15c) = 0xbf800000bf800000;
              *(undefined8 *)(lVar10 + 0x164) = 0;
              uVar15 = auVar16._8_8_;
              *(undefined8 *)(lVar10 + 0x174) = uVar15;
              uVar14 = auVar16._0_8_;
              *(undefined8 *)(lVar10 + 0x16c) = uVar14;
              *(undefined8 *)(lVar10 + 0x17c) = 0;
              *(undefined8 *)(lVar10 + 0x194) = 0;
              *(undefined8 *)(lVar10 + 0x1ac) = 0;
              *(undefined8 *)(lVar10 + 0x1c4) = 0;
              *(undefined8 *)(lVar10 + 0x1dc) = 0;
              *(undefined8 *)(lVar10 + 500) = 0;
              *(undefined8 *)(lVar10 + 0x20c) = 0;
              *(undefined8 *)(lVar10 + 0x224) = 0xbf800000bf800000;
              *(undefined8 *)(lVar10 + 0x22c) = 0;
              *(undefined8 *)(lVar10 + 0x234) = 0xbf800000bf800000;
              *(undefined8 *)(lVar10 + 0x18c) = uVar15;
              *(undefined8 *)(lVar10 + 0x184) = uVar14;
              *(undefined8 *)(lVar10 + 0x1a4) = uVar15;
              *(undefined8 *)(lVar10 + 0x19c) = uVar14;
              *(undefined8 *)(lVar10 + 0x1bc) = uVar15;
              *(undefined8 *)(lVar10 + 0x1b4) = uVar14;
              *(undefined8 *)(lVar10 + 0x1d4) = uVar15;
              *(undefined8 *)(lVar10 + 0x1cc) = uVar14;
              *(undefined8 *)(lVar10 + 0x1ec) = uVar15;
              *(undefined8 *)(lVar10 + 0x1e4) = uVar14;
              *(undefined8 *)(lVar10 + 0x204) = uVar15;
              *(undefined8 *)(lVar10 + 0x1fc) = uVar14;
              *(undefined8 *)(lVar10 + 0x21c) = uVar2;
              *(undefined8 *)(lVar10 + 0x214) = uVar1;
              *(undefined8 *)(lVar10 + 0x240) = 0;
              plVar9 = plVar7;
            } while (plVar7 != plVar3);
          }
          FUN_0056da08(lVar13 + 0x248,0,0,0);
          do {
            if ((*(byte *)(lVar13 + 8) >> 2 & 1) != 0) {
              return;
            }
            *(byte *)(lVar13 + 8) = *(byte *)(lVar13 + 8) | 4;
            if (*(code **)(lVar13 + 0x28) != (code *)0x0) {
              (**(code **)(lVar13 + 0x28))(lVar13);
            }
            *(undefined4 *)(lVar13 + 0x14c) = 0x7fc00000;
            lVar13 = *(long *)(lVar13 + 0x240);
          } while (lVar13 != 0);
        }
      }
      return;
    }
    __dest = operator_new(uVar4 * 8);
    sVar5 = param_3 - (long)param_2;
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = (void *)((long)__dest + uVar4 * 8);
    if (sVar5 != 0) {
      memcpy(__dest,param_2,sVar5);
    }
  }
  else {
    sVar5 = (long)param_1[1] - (long)__dest;
    if ((ulong)((long)sVar5 >> 3) < param_4) {
      __src = (void *)((long)param_2 + sVar5);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,sVar5);
        __dest = (void *)param_1[1];
      }
      lVar13 = -(long)__src;
    }
    else {
      lVar13 = -(long)param_2;
      __src = param_2;
    }
    sVar5 = param_3 + lVar13;
    if (sVar5 != 0) {
      memmove(__dest,__src,sVar5);
    }
  }
  param_1[1] = (long)__dest + sVar5;
  return;
}


// ===== 0056db2c  rive_YGNodeSetChildren =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rive_YGNodeSetChildren(long param_1,void *param_2,uint param_3)

{
  ulong __n;
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  
  uVar2 = _UNK_0024de38;
  uVar1 = _DAT_0024de30;
  if (param_1 != 0) {
    if (param_3 != 0) {
      __n = (ulong)param_3 * 8;
      plVar3 = (long *)operator_new(__n);
      memcpy(plVar3,param_2,__n);
      uVar2 = _UNK_0024de38;
      uVar1 = _DAT_0024de30;
      plVar4 = *(long **)(param_1 + 0x250);
      plVar6 = *(long **)(param_1 + 0x248);
      if ((((long)plVar4 - (long)plVar6 & 0x7fffffff8U) != 0) && (plVar6 != plVar4)) {
        auVar11 = NEON_fmov(0xbf800000,4);
        do {
          lVar7 = *plVar6;
          uVar5 = __n;
          plVar8 = plVar3;
          do {
            plVar9 = plVar8;
            if (*plVar8 == lVar7) break;
            uVar5 = uVar5 - 8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar3 + param_3;
          } while (uVar5 != 0);
          if ((long)plVar9 - (long)plVar3 == __n) {
            *(undefined8 *)(lVar7 + 0xfc) = 0;
            *(undefined8 *)(lVar7 + 0x104) = 0;
            *(undefined8 *)(lVar7 + 0x10c) = 0x7fc000007fc00000;
            *(undefined8 *)(lVar7 + 0x11c) = 0;
            *(undefined8 *)(lVar7 + 0x114) = 0;
            *(undefined8 *)(lVar7 + 300) = 0;
            *(undefined8 *)(lVar7 + 0x124) = 0;
            *(undefined8 *)(lVar7 + 0x13c) = 0;
            *(undefined8 *)(lVar7 + 0x134) = 0;
            *(undefined8 *)(lVar7 + 0x144) = 0;
            *(undefined4 *)(lVar7 + 0x150) = 0;
            *(undefined4 *)(lVar7 + 0x154) = 0;
            *(undefined4 *)(lVar7 + 0x14c) = 0x7fc00000;
            *(undefined8 *)(lVar7 + 0x158) = 0xbf80000000000000;
            *(undefined8 *)(lVar7 + 0x160) = 0xbf800000;
            *(undefined4 *)(lVar7 + 0x168) = 0;
            *(undefined8 *)(lVar7 + 0x17c) = 0;
            *(undefined8 *)(lVar7 + 0x194) = 0;
            *(undefined8 *)(lVar7 + 0x1ac) = 0;
            *(undefined8 *)(lVar7 + 0x1c4) = 0;
            *(undefined8 *)(lVar7 + 0x1dc) = 0;
            *(undefined8 *)(lVar7 + 500) = 0;
            *(undefined8 *)(lVar7 + 0x20c) = 0;
            *(undefined8 *)(lVar7 + 0x224) = 0xbf800000bf800000;
            *(undefined8 *)(lVar7 + 0x22c) = 0;
            *(undefined8 *)(lVar7 + 0x234) = 0xbf800000bf800000;
            uVar12 = auVar11._8_8_;
            *(undefined8 *)(lVar7 + 0x174) = uVar12;
            uVar10 = auVar11._0_8_;
            *(undefined8 *)(lVar7 + 0x16c) = uVar10;
            *(undefined8 *)(lVar7 + 0x18c) = uVar12;
            *(undefined8 *)(lVar7 + 0x184) = uVar10;
            *(undefined8 *)(lVar7 + 0x1a4) = uVar12;
            *(undefined8 *)(lVar7 + 0x19c) = uVar10;
            *(undefined8 *)(lVar7 + 0x1bc) = uVar12;
            *(undefined8 *)(lVar7 + 0x1b4) = uVar10;
            *(undefined8 *)(lVar7 + 0x1d4) = uVar12;
            *(undefined8 *)(lVar7 + 0x1cc) = uVar10;
            *(undefined8 *)(lVar7 + 0x1ec) = uVar12;
            *(undefined8 *)(lVar7 + 0x1e4) = uVar10;
            *(undefined8 *)(lVar7 + 0x204) = uVar12;
            *(undefined8 *)(lVar7 + 0x1fc) = uVar10;
            *(undefined8 *)(lVar7 + 0x21c) = uVar2;
            *(undefined8 *)(lVar7 + 0x214) = uVar1;
            *(undefined8 *)(lVar7 + 0x240) = 0;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar4);
      }
      FUN_0056da08(param_1 + 0x248,plVar3,plVar3 + param_3,param_3);
      uVar5 = 0;
      do {
        plVar6 = (long *)((long)plVar3 + uVar5);
        uVar5 = uVar5 + 8;
        *(long *)(*plVar6 + 0x240) = param_1;
      } while (__n != uVar5);
      do {
        if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) break;
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(param_1);
        }
        *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
        param_1 = *(long *)(param_1 + 0x240);
      } while (param_1 != 0);
      operator_delete(plVar3);
      return;
    }
    plVar3 = *(long **)(param_1 + 0x250);
    plVar6 = *(long **)(param_1 + 0x248);
    if (((long)plVar3 - (long)plVar6 & 0x7fffffff8U) != 0) {
      if (plVar6 != plVar3) {
        auVar11 = NEON_fmov(0xbf800000,4);
        do {
          plVar4 = plVar6 + 1;
          lVar7 = *plVar6;
          *(undefined8 *)(lVar7 + 0xfc) = 0;
          *(undefined8 *)(lVar7 + 0x104) = 0;
          *(undefined8 *)(lVar7 + 0x10c) = 0x7fc000007fc00000;
          *(undefined8 *)(lVar7 + 0x11c) = 0;
          *(undefined8 *)(lVar7 + 0x114) = 0;
          *(undefined8 *)(lVar7 + 300) = 0;
          *(undefined8 *)(lVar7 + 0x124) = 0;
          *(undefined8 *)(lVar7 + 0x13c) = 0;
          *(undefined8 *)(lVar7 + 0x134) = 0;
          *(undefined8 *)(lVar7 + 0x144) = 0;
          *(undefined4 *)(lVar7 + 0x14c) = 0x7fc00000;
          *(undefined4 *)(lVar7 + 0x150) = 0;
          *(undefined8 *)(lVar7 + 0x154) = 0;
          *(undefined8 *)(lVar7 + 0x15c) = 0xbf800000bf800000;
          *(undefined8 *)(lVar7 + 0x164) = 0;
          uVar12 = auVar11._8_8_;
          *(undefined8 *)(lVar7 + 0x174) = uVar12;
          uVar10 = auVar11._0_8_;
          *(undefined8 *)(lVar7 + 0x16c) = uVar10;
          *(undefined8 *)(lVar7 + 0x17c) = 0;
          *(undefined8 *)(lVar7 + 0x194) = 0;
          *(undefined8 *)(lVar7 + 0x1ac) = 0;
          *(undefined8 *)(lVar7 + 0x1c4) = 0;
          *(undefined8 *)(lVar7 + 0x1dc) = 0;
          *(undefined8 *)(lVar7 + 500) = 0;
          *(undefined8 *)(lVar7 + 0x20c) = 0;
          *(undefined8 *)(lVar7 + 0x224) = 0xbf800000bf800000;
          *(undefined8 *)(lVar7 + 0x22c) = 0;
          *(undefined8 *)(lVar7 + 0x234) = 0xbf800000bf800000;
          *(undefined8 *)(lVar7 + 0x18c) = uVar12;
          *(undefined8 *)(lVar7 + 0x184) = uVar10;
          *(undefined8 *)(lVar7 + 0x1a4) = uVar12;
          *(undefined8 *)(lVar7 + 0x19c) = uVar10;
          *(undefined8 *)(lVar7 + 0x1bc) = uVar12;
          *(undefined8 *)(lVar7 + 0x1b4) = uVar10;
          *(undefined8 *)(lVar7 + 0x1d4) = uVar12;
          *(undefined8 *)(lVar7 + 0x1cc) = uVar10;
          *(undefined8 *)(lVar7 + 0x1ec) = uVar12;
          *(undefined8 *)(lVar7 + 0x1e4) = uVar10;
          *(undefined8 *)(lVar7 + 0x204) = uVar12;
          *(undefined8 *)(lVar7 + 0x1fc) = uVar10;
          *(undefined8 *)(lVar7 + 0x21c) = uVar2;
          *(undefined8 *)(lVar7 + 0x214) = uVar1;
          *(undefined8 *)(lVar7 + 0x240) = 0;
          plVar6 = plVar4;
        } while (plVar4 != plVar3);
      }
      FUN_0056da08(param_1 + 0x248,0,0,0);
      do {
        if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
          return;
        }
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(param_1);
        }
        *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
        param_1 = *(long *)(param_1 + 0x240);
      } while (param_1 != 0);
    }
  }
  return;
}


// ===== 0056de14  rive_YGNodeGetOwner =====

undefined8 rive_YGNodeGetOwner(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}


// ===== 0056de1c  rive_YGNodeGetParent =====

undefined8 rive_YGNodeGetParent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}


// ===== 0056de24  rive_YGNodeMarkDirty =====

void rive_YGNodeMarkDirty(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    rive_facebook::yoga::detail::Log::log
              (param_1,5,0,&DAT_00242a86,
               "Only leaf nodes with custom measure functions should manually mark themselves as dirty"
              );
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x80;
  }
  do {
    if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
      return;
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(param_1);
    }
    *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
    param_1 = *(long *)(param_1 + 0x240);
  } while (param_1 != 0);
  return;
}


// ===== 0056deac  rive_YGNodeCopyStyle =====

void rive_YGNodeCopyStyle(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = operator==((rive_YGStyle *)(param_1 + 0x30),(rive_YGStyle *)(param_2 + 0x30));
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    *(undefined8 *)(param_1 + 0x58) = uVar8;
    *(undefined8 *)(param_1 + 0x50) = uVar7;
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    uVar3 = *(undefined8 *)(param_2 + 0xb8);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    uVar6 = *(undefined8 *)(param_2 + 0x88);
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    uVar8 = *(undefined8 *)(param_2 + 0x98);
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    *(undefined8 *)(param_1 + 0x98) = uVar8;
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    uVar8 = *(undefined8 *)(param_2 + 0xd8);
    uVar7 = *(undefined8 *)(param_2 + 0xd0);
    uVar4 = *(undefined8 *)(param_2 + 0xe8);
    uVar3 = *(undefined8 *)(param_2 + 0xe0);
    uVar2 = *(undefined8 *)(param_2 + 0xec);
    uVar6 = *(undefined8 *)(param_2 + 200);
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(param_1 + 0xec) = uVar2;
    *(undefined8 *)(param_1 + 0xd8) = uVar8;
    *(undefined8 *)(param_1 + 0xd0) = uVar7;
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    *(undefined8 *)(param_1 + 0xe0) = uVar3;
    *(undefined8 *)(param_1 + 200) = uVar6;
    *(undefined8 *)(param_1 + 0xc0) = uVar5;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056df54  rive_YGNodeStyleGetFlexGrow =====

float rive_YGNodeStyleGetFlexGrow(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x38);
  if (NAN(*(float *)(param_1 + 0x38))) {
    fVar1 = 0.0;
  }
  return fVar1;
}


// ===== 0056df68  rive_YGNodeStyleGetFlexShrink =====

float rive_YGNodeStyleGetFlexShrink(long param_1)

{
  float fVar1;
  
  if (NAN(*(float *)(param_1 + 0x3c))) {
    fVar1 = 0.0;
    if ((*(byte *)(*(long *)(param_1 + 0x260) + 0x10) & 1) != 0) {
      fVar1 = 1.0;
    }
    return fVar1;
  }
  return *(float *)(param_1 + 0x3c);
}


// ===== 0056df94  rive_YGNodeStyleSetDirection =====

void rive_YGNodeStyleSetDirection(long param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x30) & 3) != param_2) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffffc | param_2 & 3;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e000  rive_YGNodeStyleGetDirection =====

uint rive_YGNodeStyleGetDirection(long param_1)

{
  return *(uint *)(param_1 + 0x30) & 3;
}


// ===== 0056e00c  rive_YGNodeStyleSetFlexDirection =====

void rive_YGNodeStyleSetFlexDirection(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 2 & 3) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xfffffff0 | uVar1 & 3 | (param_2 & 3) << 2;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e078  rive_YGNodeStyleGetFlexDirection =====

uint rive_YGNodeStyleGetFlexDirection(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 2 & 3;
}


// ===== 0056e084  rive_YGNodeStyleSetJustifyContent =====

void rive_YGNodeStyleSetJustifyContent(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 4 & 7) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xffffff80 | uVar1 & 0xf | (param_2 & 7) << 4;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e0f0  rive_YGNodeStyleGetJustifyContent =====

uint rive_YGNodeStyleGetJustifyContent(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 4 & 7;
}


// ===== 0056e0fc  rive_YGNodeStyleSetAlignContent =====

void rive_YGNodeStyleSetAlignContent(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 7 & 7) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xfffffc00 | uVar1 & 0x7f | (param_2 & 7) << 7;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e168  rive_YGNodeStyleGetAlignContent =====

uint rive_YGNodeStyleGetAlignContent(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 7 & 7;
}


// ===== 0056e174  rive_YGNodeStyleSetAlignItems =====

void rive_YGNodeStyleSetAlignItems(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 10 & 7) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xffffe000 | uVar1 & 0x3ff | (param_2 & 7) << 10;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e1e0  rive_YGNodeStyleGetAlignItems =====

uint rive_YGNodeStyleGetAlignItems(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 10 & 7;
}


// ===== 0056e1ec  rive_YGNodeStyleSetAlignSelf =====

void rive_YGNodeStyleSetAlignSelf(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 0xd & 7) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xffff0000 | uVar1 & 0x1fff | (param_2 & 7) << 0xd;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e258  rive_YGNodeStyleGetAlignSelf =====

uint rive_YGNodeStyleGetAlignSelf(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 0xd & 7;
}


// ===== 0056e264  rive_YGNodeStyleSetPositionType =====

void rive_YGNodeStyleSetPositionType(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 0x10 & 3) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xfffc0000 | uVar1 & 0xffff | (param_2 & 3) << 0x10;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e2d0  rive_YGNodeStyleGetPositionType =====

ushort rive_YGNodeStyleGetPositionType(long param_1)

{
  return *(ushort *)(param_1 + 0x32) & 3;
}


// ===== 0056e2dc  rive_YGNodeStyleSetFlexWrap =====

void rive_YGNodeStyleSetFlexWrap(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 0x12 & 3) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xfff00000 | uVar1 & 0x3ffff | (param_2 & 3) << 0x12;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e348  rive_YGNodeStyleGetFlexWrap =====

uint rive_YGNodeStyleGetFlexWrap(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 0x12 & 3;
}


// ===== 0056e354  rive_YGNodeStyleSetOverflow =====

void rive_YGNodeStyleSetOverflow(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 0x14 & 3) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xffc00000 | uVar1 & 0xfffff | (param_2 & 3) << 0x14;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e3c0  rive_YGNodeStyleGetOverflow =====

uint rive_YGNodeStyleGetOverflow(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 0x14 & 3;
}


// ===== 0056e3cc  rive_YGNodeStyleSetDisplay =====

void rive_YGNodeStyleSetDisplay(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 0x16 & 1) != param_2) {
    *(uint *)(param_1 + 0x30) = uVar1 & 0xff800000 | uVar1 & 0x3fffff | (param_2 & 1) << 0x16;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e438  rive_YGNodeStyleGetDisplay =====

uint rive_YGNodeStyleGetDisplay(long param_1)

{
  return *(uint *)(param_1 + 0x30) >> 0x16 & 1;
}


// ===== 0056e444  rive_YGNodeStyleSetFlex =====

void rive_YGNodeStyleSetFlex(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x34) == param_1) {
    return;
  }
  if ((!NAN(param_1)) || (!NAN(*(float *)(param_2 + 0x34)))) {
    *(float *)(param_2 + 0x34) = param_1;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056e4bc  rive_YGNodeStyleGetFlex =====

float rive_YGNodeStyleGetFlex(long param_1)

{
  float fVar1;
  
  fVar1 = NAN;
  if (!NAN(*(float *)(param_1 + 0x34))) {
    fVar1 = *(float *)(param_1 + 0x34);
  }
  return fVar1;
}


// ===== 0056e4d4  rive_YGNodeStyleSetFlexGrow =====

void rive_YGNodeStyleSetFlexGrow(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x38) == param_1) {
    return;
  }
  if ((!NAN(param_1)) || (!NAN(*(float *)(param_2 + 0x38)))) {
    *(float *)(param_2 + 0x38) = param_1;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056e54c  rive_YGNodeStyleSetFlexShrink =====

void rive_YGNodeStyleSetFlexShrink(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x3c) == param_1) {
    return;
  }
  if ((!NAN(param_1)) || (!NAN(*(float *)(param_2 + 0x3c)))) {
    *(float *)(param_2 + 0x3c) = param_1;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056e5c4  rive_YGNodeStyleGetFlexBasis =====

ulong rive_YGNodeStyleGetFlexBasis(long param_1)

{
  float fVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  
  fVar1 = *(float *)(param_1 + 0x40);
  puVar4 = (uint *)PTR_rive_YGValueAuto_0067d660;
  if (fVar1 != NAN) {
    if (fVar1 == NAN) {
      uVar3 = 0;
      uVar2 = 0x100000000;
      goto LAB_0056e664;
    }
    if (fVar1 == NAN) {
      uVar3 = 0;
      uVar2 = 0x200000000;
      goto LAB_0056e664;
    }
    puVar4 = (uint *)PTR_rive_YGValueUndefined_0067da20;
    if (!NAN(fVar1)) {
      uVar3 = ((uint)fVar1 & 0xbfffffff) + 0x20000000;
      uVar2 = 0x100000000;
      if (((uint)fVar1 & 0x40000000) != 0) {
        uVar2 = 0x200000000;
      }
      goto LAB_0056e664;
    }
  }
  uVar3 = puVar4[1];
  uVar2 = (ulong)uVar3 << 0x20;
  if ((uVar3 == 3) || (uVar3 == 0)) {
    uVar3 = 0x7fc00000;
  }
  else {
    uVar3 = *puVar4;
  }
LAB_0056e664:
  return uVar2 | uVar3;
}


// ===== 0056e67c  rive_YGNodeStyleSetFlexBasis =====

void rive_YGNodeStyleSetFlexBasis(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0x40) != iVar4) {
    *(int *)(param_2 + 0x40) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056e754  rive_YGNodeStyleSetFlexBasisPercent =====

void rive_YGNodeStyleSetFlexBasisPercent(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  uVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (uVar4 = 0x7f80f0f0, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5f7fffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-1.8446743e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.8446743e+19;
        bVar2 = fVar5 == 1.8446743e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    uVar4 = (int)fVar6 + 0xe0000000U | 0x40000000;
  }
  if (*(uint *)(param_2 + 0x40) != uVar4) {
    *(uint *)(param_2 + 0x40) = uVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056e830  rive_YGNodeStyleSetFlexBasisAuto =====

void rive_YGNodeStyleSetFlexBasisAuto(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0x7faaaaaa) {
    *(undefined4 *)(param_1 + 0x40) = 0x7faaaaaa;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056e89c  rive_YGNodeStyleSetPosition =====

void rive_YGNodeStyleSetPosition(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0x68 + (ulong)param_3 * 4) != iVar4) {
    *(int *)(param_2 + 0x68 + (ulong)param_3 * 4) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056e978  rive_YGNodeStyleSetPositionPercent =====

void rive_YGNodeStyleSetPositionPercent(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  uVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (uVar4 = 0x7f80f0f0, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5f7fffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-1.8446743e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.8446743e+19;
        bVar2 = fVar5 == 1.8446743e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    uVar4 = (int)fVar6 + 0xe0000000U | 0x40000000;
  }
  if (*(uint *)(param_2 + 0x68 + (ulong)param_3 * 4) != uVar4) {
    *(uint *)(param_2 + 0x68 + (ulong)param_3 * 4) = uVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056ea58  rive_YGNodeStyleGetPosition =====

ulong rive_YGNodeStyleGetPosition(long param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + (ulong)param_2 * 4 + 0x68);
  if (fVar2 == NAN) {
    return 0x200000000;
  }
  if (fVar2 == NAN) {
    return 0x100000000;
  }
  if (fVar2 == NAN) {
    return 0x37fc00000;
  }
  if (NAN(fVar2)) {
    return 0x7fc00000;
  }
  uVar1 = 0x100000000;
  if (((uint)fVar2 & 0x40000000) != 0) {
    uVar1 = 0x200000000;
  }
  return uVar1 | ((ulong)(uint)fVar2 & 0xffffffffbfffffff) + 0x20000000;
}


// ===== 0056eaf4  rive_YGNodeStyleSetMargin =====

void rive_YGNodeStyleSetMargin(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0x44 + (ulong)param_3 * 4) != iVar4) {
    *(int *)(param_2 + 0x44 + (ulong)param_3 * 4) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056ebd0  rive_YGNodeStyleSetMarginPercent =====

void rive_YGNodeStyleSetMarginPercent(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  uVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (uVar4 = 0x7f80f0f0, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5f7fffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-1.8446743e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.8446743e+19;
        bVar2 = fVar5 == 1.8446743e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    uVar4 = (int)fVar6 + 0xe0000000U | 0x40000000;
  }
  if (*(uint *)(param_2 + 0x44 + (ulong)param_3 * 4) != uVar4) {
    *(uint *)(param_2 + 0x44 + (ulong)param_3 * 4) = uVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056ecb0  rive_YGNodeStyleSetMarginAuto =====

void rive_YGNodeStyleSetMarginAuto(long param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x44 + (ulong)param_2 * 4) != 0x7faaaaaa) {
    *(undefined4 *)(param_1 + 0x44 + (ulong)param_2 * 4) = 0x7faaaaaa;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056ed20  rive_YGNodeStyleGetMargin =====

ulong rive_YGNodeStyleGetMargin(long param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + (ulong)param_2 * 4 + 0x44);
  if (fVar2 == NAN) {
    return 0x200000000;
  }
  if (fVar2 == NAN) {
    return 0x100000000;
  }
  if (fVar2 == NAN) {
    return 0x37fc00000;
  }
  if (NAN(fVar2)) {
    return 0x7fc00000;
  }
  uVar1 = 0x100000000;
  if (((uint)fVar2 & 0x40000000) != 0) {
    uVar1 = 0x200000000;
  }
  return uVar1 | ((ulong)(uint)fVar2 & 0xffffffffbfffffff) + 0x20000000;
}


// ===== 0056edbc  rive_YGNodeStyleSetPadding =====

void rive_YGNodeStyleSetPadding(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0x8c + (ulong)param_3 * 4) != iVar4) {
    *(int *)(param_2 + 0x8c + (ulong)param_3 * 4) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056ee98  rive_YGNodeStyleSetPaddingPercent =====

void rive_YGNodeStyleSetPaddingPercent(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  uVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (uVar4 = 0x7f80f0f0, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5f7fffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-1.8446743e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.8446743e+19;
        bVar2 = fVar5 == 1.8446743e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    uVar4 = (int)fVar6 + 0xe0000000U | 0x40000000;
  }
  if (*(uint *)(param_2 + 0x8c + (ulong)param_3 * 4) != uVar4) {
    *(uint *)(param_2 + 0x8c + (ulong)param_3 * 4) = uVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056ef78  rive_YGNodeStyleGetPadding =====

ulong rive_YGNodeStyleGetPadding(long param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + (ulong)param_2 * 4 + 0x8c);
  if (fVar2 == NAN) {
    return 0x200000000;
  }
  if (fVar2 == NAN) {
    return 0x100000000;
  }
  if (fVar2 == NAN) {
    return 0x37fc00000;
  }
  if (NAN(fVar2)) {
    return 0x7fc00000;
  }
  uVar1 = 0x100000000;
  if (((uint)fVar2 & 0x40000000) != 0) {
    uVar1 = 0x200000000;
  }
  return uVar1 | ((ulong)(uint)fVar2 & 0xffffffffbfffffff) + 0x20000000;
}


// ===== 0056f014  rive_YGNodeStyleSetBorder =====

void rive_YGNodeStyleSetBorder(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0xb0 + (ulong)param_3 * 4) != iVar4) {
    *(int *)(param_2 + 0xb0 + (ulong)param_3 * 4) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056f0f0  rive_YGNodeStyleGetBorder =====

int rive_YGNodeStyleGetBorder(long param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + (ulong)param_2 * 4 + 0xb0);
  if (fVar1 != NAN && fVar1 != NAN) {
    if ((fVar1 == NAN) || (NAN(fVar1))) {
      return 0x7fc00000;
    }
    if (fVar1 != NAN) {
      return ((uint)fVar1 & 0xbfffffff) + 0x20000000;
    }
  }
  return 0;
}


// ===== 0056f16c  rive_YGNodeStyleSetGap =====

void rive_YGNodeStyleSetGap(undefined1 param_1 [16],long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0xd4 + (ulong)param_3 * 4) != iVar4) {
    *(int *)(param_2 + 0xd4 + (ulong)param_3 * 4) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056f248  rive_YGNodeStyleGetGap =====

int rive_YGNodeStyleGetGap(long param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + (ulong)param_2 * 4 + 0xd4);
  if (fVar1 != NAN && fVar1 != NAN) {
    if ((fVar1 == NAN) || (NAN(fVar1))) {
      return 0x7fc00000;
    }
    if (fVar1 != NAN) {
      return ((uint)fVar1 & 0xbfffffff) + 0x20000000;
    }
  }
  return 0;
}


// ===== 0056f2c4  rive_YGNodeStyleGetAspectRatio =====

float rive_YGNodeStyleGetAspectRatio(long param_1)

{
  float fVar1;
  
  fVar1 = NAN;
  if (!NAN(*(float *)(param_1 + 0xf8))) {
    fVar1 = *(float *)(param_1 + 0xf8);
  }
  return fVar1;
}


// ===== 0056f2dc  rive_YGNodeStyleSetAspectRatio =====

void rive_YGNodeStyleSetAspectRatio(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0xf8) == param_1) {
    return;
  }
  if ((!NAN(param_1)) || (!NAN(*(float *)(param_2 + 0xf8)))) {
    *(float *)(param_2 + 0xf8) = param_1;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056f354  rive_YGNodeStyleSetWidth =====

void rive_YGNodeStyleSetWidth(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0xe0) != iVar4) {
    *(int *)(param_2 + 0xe0) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056f42c  rive_YGNodeStyleSetWidthPercent =====

void rive_YGNodeStyleSetWidthPercent(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  uVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (uVar4 = 0x7f80f0f0, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5f7fffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-1.8446743e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.8446743e+19;
        bVar2 = fVar5 == 1.8446743e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    uVar4 = (int)fVar6 + 0xe0000000U | 0x40000000;
  }
  if (*(uint *)(param_2 + 0xe0) != uVar4) {
    *(uint *)(param_2 + 0xe0) = uVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056f508  rive_YGNodeStyleSetWidthAuto =====

void rive_YGNodeStyleSetWidthAuto(long param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0x7faaaaaa) {
    *(undefined4 *)(param_1 + 0xe0) = 0x7faaaaaa;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056f574  rive_YGNodeStyleGetWidth =====

ulong rive_YGNodeStyleGetWidth(long param_1)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xe0);
  if (fVar2 == NAN) {
    return 0x200000000;
  }
  if (fVar2 == NAN) {
    return 0x100000000;
  }
  if (fVar2 == NAN) {
    return 0x37fc00000;
  }
  if (NAN(fVar2)) {
    return 0x7fc00000;
  }
  uVar1 = 0x100000000;
  if (((uint)fVar2 & 0x40000000) != 0) {
    uVar1 = 0x200000000;
  }
  return uVar1 | ((ulong)(uint)fVar2 & 0xffffffffbfffffff) + 0x20000000;
}


// ===== 0056f60c  rive_YGNodeStyleSetHeight =====

void rive_YGNodeStyleSetHeight(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0xe4) != iVar4) {
    *(int *)(param_2 + 0xe4) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056f6e4  rive_YGNodeStyleSetHeightPercent =====

void rive_YGNodeStyleSetHeightPercent(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  uVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (uVar4 = 0x7f80f0f0, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5f7fffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-1.8446743e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.8446743e+19;
        bVar2 = fVar5 == 1.8446743e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    uVar4 = (int)fVar6 + 0xe0000000U | 0x40000000;
  }
  if (*(uint *)(param_2 + 0xe4) != uVar4) {
    *(uint *)(param_2 + 0xe4) = uVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


// ===== 0056f7c0  rive_YGNodeStyleSetHeightAuto =====

void rive_YGNodeStyleSetHeightAuto(long param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0x7faaaaaa) {
    *(undefined4 *)(param_1 + 0xe4) = 0x7faaaaaa;
    do {
      if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      *(undefined4 *)(param_1 + 0x14c) = 0x7fc00000;
      param_1 = *(long *)(param_1 + 0x240);
    } while (param_1 != 0);
  }
  return;
}


// ===== 0056f82c  rive_YGNodeStyleGetHeight =====

ulong rive_YGNodeStyleGetHeight(long param_1)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xe4);
  if (fVar2 == NAN) {
    return 0x200000000;
  }
  if (fVar2 == NAN) {
    return 0x100000000;
  }
  if (fVar2 == NAN) {
    return 0x37fc00000;
  }
  if (NAN(fVar2)) {
    return 0x7fc00000;
  }
  uVar1 = 0x100000000;
  if (((uint)fVar2 & 0x40000000) != 0) {
    uVar1 = 0x200000000;
  }
  return uVar1 | ((ulong)(uint)fVar2 & 0xffffffffbfffffff) + 0x20000000;
}


// ===== 0056f8c4  rive_YGNodeStyleSetMinWidth =====

void rive_YGNodeStyleSetMinWidth(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = param_1._0_4_;
  iVar4 = 0x7fc00000;
  if ((((ABS(fVar5) != INFINITY) && (!NAN(ABS(fVar5)))) && (iVar4 = 0x7f8f0f0f, fVar5 != 0.0)) &&
     ((1.0842022e-19 <= fVar5 || (fVar5 == -1.0842022e-19 || fVar5 < -1.0842022e-19 != NAN(fVar5))))
     ) {
    auVar7._8_4_ = 0x7fffffff;
    auVar7._0_8_ = 0x7fffffff7fffffff;
    auVar7._12_4_ = 0x7fffffff;
    auVar7 = NEON_bsl(auVar7,ZEXT416(0x5fffffff),param_1,1);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.6893486e+19 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 3.6893486e+19;
        bVar2 = fVar5 == 3.6893486e+19;
        bVar3 = false;
      }
    }
    fVar6 = auVar7._0_4_;
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar5;
    }
    iVar4 = (int)fVar6 + -0x20000000;
  }
  if (*(int *)(param_2 + 0xe8) != iVar4) {
    *(int *)(param_2 + 0xe8) = iVar4;
    do {
      if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
        return;
      }
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(param_2);
      }
      *(undefined4 *)(param_2 + 0x14c) = 0x7fc00000;
      param_2 = *(long *)(param_2 + 0x240);
    } while (param_2 != 0);
  }
  return;
}


