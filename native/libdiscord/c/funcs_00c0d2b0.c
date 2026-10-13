// ===== 00c0d2b0  FUN_00c0d2b0 =====

undefined1 FUN_00c0d2b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xeb);
}


// ===== 00c0d2bc  FUN_00c0d2bc =====

void FUN_00c0d2bc(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  param_2 = param_2 & 1;
  if (*(byte *)(param_1 + 0xeb) != param_2) {
    *(byte *)(param_1 + 0xeb) = param_2;
    lVar2 = *(long *)(param_1 + 0x48);
    plVar1 = *(long **)(*(long *)(param_1 + 0x100) + 0x20);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar2;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00c1468c;
    local_50[0][2] = param_1;
    *(byte *)(local_50[0] + 3) = param_2;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00c0d390  FUN_00c0d390 =====

void FUN_00c0d390(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long local_60;
  undefined1 **ppuStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 uStack_11;
  
  plVar1 = *(long **)(param_1 + 0x70);
  for (plVar5 = *(long **)(param_1 + 0x68); plVar5 != plVar1; plVar5 = plVar5 + 1) {
    (**(code **)(**(long **)(*plVar5 + 0x20) + 0x98))();
  }
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c0bff0(&local_50,param_1 + 0x50);
  plVar5 = *(long **)(*(long *)(param_1 + 0x100) + 0x30);
  local_60 = param_1;
  ppuStack_58 = &local_50;
  (**(code **)(*plVar5 + 0x60))(plVar5,&local_60,FUN_00c146a4,&uStack_11);
  puVar4 = local_50;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined4 *)(param_1 + 0x84) = 3;
  puVar3 = puStack_48;
  if (local_50 != (undefined1 *)0x0) {
    while (puVar4 != puVar3) {
      puVar2 = puVar3 + -0x20;
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)(puVar3 + -0x10))(0,puVar2,puVar2);
      puVar3 = puVar2;
    }
    puStack_48 = puVar4;
    operator_delete(local_50);
  }
  return;
}


// ===== 00c0d4a8  FUN_00c0d4a8 =====

void FUN_00c0d4a8(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  
  if ((*(byte *)(param_2 + 7) & 1) == 0) {
    pcVar1 = *(code **)(*param_2 + 0x88);
  }
  else {
    if ((*(byte *)((long)param_2 + 0x81) & 1) != 0) goto LAB_00c0d4f4;
    FUN_00c0d390(param_2);
    pcVar1 = (code *)param_2[0x3d];
    param_2 = param_2 + 0x3a;
  }
  (*pcVar1)(param_2);
LAB_00c0d4f4:
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c0d508  FUN_00c0d508 =====

void FUN_00c0d508(long param_1)

{
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    FUN_00c0d390(param_1);
  }
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 0;
  }
  return;
}


// ===== 00c0d558  FUN_00c0d558 =====

void FUN_00c0d558(long param_1)

{
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    FUN_00c0d390(param_1);
  }
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 0;
  }
  return;
}


// ===== 00c0d5a8  FUN_00c0d5a8 =====

void FUN_00c0d5a8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined1 local_34 [4];
  
  if (param_4 != 0) {
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    param_4 = param_4 * 0xa0;
    if (param_4 != 0) {
      puVar1 = PTR_DAT_00d52108 + 0x10;
      do {
        plVar7 = local_60;
        local_34[0] = 0xaa;
        plVar4 = (long *)FUN_00c12338(local_68,local_60,param_3,local_34);
        plVar3 = local_60;
        if (plVar4 == plVar7) {
          if (local_60 < local_58) {
            if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            FUN_006684dc(local_60,param_3);
            *plVar3 = (long)puVar1;
            lVar5 = *(long *)(param_3 + 0x68);
            plVar3[0xe] = 0;
            plVar3[0xd] = lVar5;
            uVar6 = *(ulong *)(param_3 + 0x70);
            if (1 < uVar6) {
              if ((uVar6 & 1) == 0) {
                plVar3[0xe] = uVar6;
                local_60 = plVar3 + 0x14;
                lVar10 = *(long *)(param_3 + 0x90);
                lVar5 = *(long *)(param_3 + 0x88);
                lVar12 = *(long *)(param_3 + 0x80);
                lVar11 = *(long *)(param_3 + 0x78);
                plVar3[0x13] = *(long *)(param_3 + 0x98);
                plVar3[0x12] = lVar10;
                plVar3[0x11] = lVar5;
                plVar3[0x10] = lVar12;
                plVar3[0xf] = lVar11;
                goto LAB_00c0d60c;
              }
              FUN_007b7fb0();
            }
            local_60 = plVar3 + 0x14;
          }
          else {
            local_60 = (long *)FUN_00bdf8b4(&local_68,param_3);
          }
        }
LAB_00c0d60c:
        param_4 = param_4 + -0xa0;
        param_3 = param_3 + 0xa0;
      } while (param_4 != 0);
    }
    FUN_00c0d860(param_1,param_2,&local_68);
    plVar3 = local_68;
    plVar7 = local_60;
    if (local_68 != (long *)0x0) {
      while (plVar3 != plVar7) {
        plVar7 = plVar7 + -0x14;
        if (plVar7 == (long *)0x0) goto LAB_00c0d838;
        (**(code **)*plVar7)(plVar7);
      }
      local_60 = plVar3;
      operator_delete(local_68);
    }
    return;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x120);
  puVar8 = *(undefined8 **)(param_2 + 0x128);
  while (puVar2 != puVar8) {
    puVar8 = puVar8 + -0x14;
    if (puVar8 == (undefined8 *)0x0) goto LAB_00c0d838;
    (**(code **)*puVar8)(puVar8);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x138);
  puVar9 = *(undefined8 **)(param_2 + 0x140);
  *(undefined8 **)(param_2 + 0x128) = puVar2;
  while (puVar8 != puVar9) {
    puVar9 = puVar9 + -0x14;
    if (puVar9 == (undefined8 *)0x0) goto LAB_00c0d838;
    (**(code **)*puVar9)(puVar9);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x150);
  puVar9 = *(undefined8 **)(param_2 + 0x158);
  *(undefined8 **)(param_2 + 0x140) = puVar8;
  while (puVar2 != puVar9) {
    puVar9 = puVar9 + -0x14;
    if (puVar9 == (undefined8 *)0x0) goto LAB_00c0d838;
    (**(code **)*puVar9)(puVar9);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x168);
  puVar9 = *(undefined8 **)(param_2 + 0x170);
  *(undefined8 **)(param_2 + 0x158) = puVar2;
  while( true ) {
    if (puVar8 == puVar9) {
      *(undefined8 **)(param_2 + 0x170) = puVar8;
      FUN_005ecd48(param_1);
      return;
    }
    puVar9 = puVar9 + -0x14;
    if (puVar9 == (undefined8 *)0x0) break;
    (**(code **)*puVar9)(puVar9);
  }
LAB_00c0d838:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c0d860  FUN_00c0d860 =====

/* WARNING: Removing unreachable block (ram,0x00c0dc94) */
/* WARNING: Removing unreachable block (ram,0x00c0dcb4) */
/* WARNING: Removing unreachable block (ram,0x00c0e390) */
/* WARNING: Removing unreachable block (ram,0x00c0e3a8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c0d860(int *param_1,long param_2,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined5 local_c0;
  undefined2 uStack_bb;
  undefined4 uStack_b9;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined4 local_b0 [2];
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined3 uStack_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  
  local_f0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_108 = (undefined8 *)0x0;
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  if (*(int *)(param_2 + 0x3c) == 1) {
    (**(code **)(**(long **)(param_2 + 0x108) + 0x18))();
    ppuVar4 = (undefined8 **)FUN_00bd76f0();
    if (&local_f0 != ppuVar4) {
      FUN_0088fd38(&local_f0,*ppuVar4,ppuVar4[1],
                   ((long)ppuVar4[1] - (long)*ppuVar4 >> 3) * -0x7b425ed097b425ed);
    }
    (**(code **)(**(long **)(param_2 + 0x108) + 0x18))();
    ppuVar4 = (undefined8 **)FUN_00bd76e4();
  }
  else {
    if (*(int *)(param_2 + 0x3c) != 0) goto LAB_00c0d980;
    (**(code **)(**(long **)(param_2 + 0x108) + 0x18))();
    ppuVar4 = (undefined8 **)FUN_00bd76dc();
    if (&local_f0 != ppuVar4) {
      FUN_0088fd38(&local_f0,*ppuVar4,ppuVar4[1],
                   ((long)ppuVar4[1] - (long)*ppuVar4 >> 3) * -0x7b425ed097b425ed);
    }
    (**(code **)(**(long **)(param_2 + 0x108) + 0x18))();
    ppuVar4 = (undefined8 **)FUN_00bd76d0();
  }
  if (&local_108 != ppuVar4) {
    FUN_0088fd38(&local_108,*ppuVar4,ppuVar4[1],
                 ((long)ppuVar4[1] - (long)*ppuVar4 >> 3) * -0x7b425ed097b425ed);
  }
LAB_00c0d980:
  local_88 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c1242c(&local_88,
               ((long)local_e8 - (long)local_f0 >> 3) * -0x7b425ed097b425ed +
               ((long)local_100 - (long)local_108 >> 3) * -0x7b425ed097b425ed);
  FUN_00c12584(&local_88,local_80,local_f0,local_e8,
               ((long)local_e8 - (long)local_f0 >> 3) * -0x7b425ed097b425ed);
  FUN_00c12584(&local_88,local_80,local_108,local_100,
               ((long)local_100 - (long)local_108 >> 3) * -0x7b425ed097b425ed);
  lVar12 = *param_3;
  lVar13 = param_3[1];
  if (lVar12 != lVar13) {
    do {
      uVar7 = FUN_006688c8(lVar12);
      puVar6 = local_80;
      if ((uVar7 & 1) != 0) {
        puVar9 = local_88;
        if (local_88 != local_80) {
          do {
            uVar7 = FUN_00894fc0(puVar9,lVar12);
            if ((uVar7 & 1) != 0) break;
            puVar9 = puVar9 + 0x1b;
          } while (puVar9 != puVar6);
          if ((uVar7 & 1) != 0) goto LAB_00c0da0c;
        }
        uStack_b2 = 0;
        local_d8 = 7;
        uStack_c8 = 0;
        local_c0 = 0;
        local_d0 = (void *)0x0;
        uStack_bb = 0;
        uStack_b9 = 0;
        uStack_b5 = 0;
        uStack_b4 = 0;
        FUN_00547cac(&local_d0,"Invalid codec preferences: Missing codec from codec capabilities.",
                     0x41);
        local_b0[0] = local_d8;
        if ((char)uStack_b9 < '\0') {
          FUN_005478d8(&local_a8,local_d0,uStack_c8);
        }
        else {
          local_98 = CONCAT17((char)uStack_b9,CONCAT25(uStack_bb,local_c0));
          uStack_a0 = uStack_c8;
          local_a8 = local_d0;
        }
        local_90 = CONCAT13(uStack_b5,uStack_b9._1_3_);
        uStack_8c = (undefined3)
                    (CONCAT13(uStack_b2,CONCAT12(uStack_b3,CONCAT11(uStack_b4,uStack_b5))) >> 8);
        uVar5 = FUN_005ecd5c(local_b0);
        local_70 = FUN_005eceec(local_b0[0]);
        uVar10 = 0x343;
        goto LAB_00c0dc00;
      }
LAB_00c0da0c:
      lVar12 = lVar12 + 0xa0;
    } while (lVar12 != lVar13);
    lVar12 = *param_3;
    lVar13 = param_3[1];
  }
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0xa0) {
    uVar7 = FUN_006688c8(lVar12);
    if ((uVar7 & 1) != 0) {
      FUN_005ecd48(&local_130);
      puVar9 = local_88;
      puVar6 = local_80;
      goto joined_r0x00c0db2c;
    }
  }
  uStack_b2 = 0;
  local_d8 = 7;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d0 = (void *)0x0;
  uStack_bb = 0;
  uStack_b9 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  FUN_00547cac(&local_d0,
               "Invalid codec preferences: codec list must have a non RTX, RED, FEC or Comfort Noise entry."
               ,0x5b);
  local_b0[0] = local_d8;
  if ((char)uStack_b9 < '\0') {
    FUN_005478d8(&local_a8,local_d0,uStack_c8);
  }
  else {
    local_98 = CONCAT17((char)uStack_b9,CONCAT25(uStack_bb,local_c0));
    uStack_a0 = uStack_c8;
    local_a8 = local_d0;
  }
  local_90 = CONCAT13(uStack_b5,uStack_b9._1_3_);
  uStack_8c = (undefined3)
              (CONCAT13(uStack_b2,CONCAT12(uStack_b3,CONCAT11(uStack_b4,uStack_b5))) >> 8);
  uVar5 = FUN_005ecd5c(local_b0);
  local_70 = FUN_005eceec(local_b0[0]);
  uVar10 = 0x37b;
LAB_00c0dc00:
  FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_transceiver.cc",uVar10,uVar5,&DAT_001a2df6,local_70,
               &DAT_001ca519);
  puVar6 = (undefined8 *)((ulong)&local_130 | 8);
  local_130 = (undefined1 *)CONCAT44(local_130._4_4_,local_b0[0]);
  puVar6[1] = uStack_a0;
  *puVar6 = local_a8;
  puVar6[2] = local_98;
  local_110._0_7_ = CONCAT43(CONCAT31(uStack_8c,local_90._3_1_),(int3)local_90);
  puVar9 = local_88;
  puVar6 = local_80;
  if ((char)uStack_b9 < '\0') {
    operator_delete(local_d0);
    puVar9 = local_88;
    puVar6 = local_80;
  }
joined_r0x00c0db2c:
  local_88 = puVar9;
  local_80 = puVar6;
  if (puVar9 == (undefined8 *)0x0) {
  }
  else {
    while (puVar9 != puVar6) {
      puVar6 = puVar6 + -0x1b;
      if (puVar6 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar6)(puVar6);
    }
    local_80 = puVar9;
    operator_delete(local_88);
  }
  if ((int)local_130 == 0) {
    if ((long *)(param_2 + 0x120) != param_3) {
      FUN_00b88674(param_2 + 0x120,*param_3,param_3[1],
                   (param_3[1] - *param_3 >> 5) * -0x3333333333333333);
    }
    puVar6 = *(undefined8 **)(param_2 + 0x138);
    puVar9 = *(undefined8 **)(param_2 + 0x140);
    while (puVar6 != puVar9) {
      puVar9 = puVar9 + -0x14;
      if (puVar9 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar9)(puVar9);
    }
    puVar9 = *(undefined8 **)(param_2 + 0x150);
    puVar11 = *(undefined8 **)(param_2 + 0x158);
    *(undefined8 **)(param_2 + 0x140) = puVar6;
    while (puVar9 != puVar11) {
      puVar11 = puVar11 + -0x14;
      if (puVar11 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar11)(puVar11);
    }
    puVar6 = *(undefined8 **)(param_2 + 0x168);
    puVar11 = *(undefined8 **)(param_2 + 0x170);
    *(undefined8 **)(param_2 + 0x158) = puVar9;
    while (puVar6 != puVar11) {
      puVar11 = puVar11 + -0x14;
      if (puVar11 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar11)(puVar11);
    }
    lVar12 = *(long *)(param_2 + 0x120);
    lVar13 = *(long *)(param_2 + 0x128);
    *(undefined8 **)(param_2 + 0x170) = puVar6;
    if (lVar12 != lVar13) {
LAB_00c0de20:
      uVar7 = FUN_006688c8(lVar12);
      puVar6 = local_e8;
      if ((uVar7 & 1) != 0) {
        puVar9 = local_f0;
        if (local_f0 == local_e8) {
          uVar7 = 0;
          puVar11 = local_108;
          puVar2 = local_100;
        }
        else {
          do {
            uVar8 = FUN_008962e4(puVar9,lVar12);
            uVar7 = uVar8 & 0xffffffff;
            puVar11 = local_108;
            puVar2 = local_100;
            if ((uVar8 & 1) != 0) break;
            puVar9 = puVar9 + 0x1b;
          } while (puVar9 != puVar6);
        }
        do {
          puVar6 = local_100;
          if (puVar11 == local_100) goto LAB_00c0def4;
          local_100 = puVar2;
          uVar8 = FUN_008962e4(puVar11,lVar12);
          if ((uVar8 & 1) != 0) {
            if ((uVar7 & 1) == 0) goto LAB_00c0e084;
            puVar6 = *(undefined8 **)(param_2 + 0x140);
            if (puVar6 < *(undefined8 **)(param_2 + 0x148)) {
              if (puVar6 == (undefined8 *)0x0) goto LAB_00c0e3c0;
              FUN_006684dc(puVar6,lVar12);
              *puVar6 = &PTR_FUN_00d28188;
              uVar5 = *(undefined8 *)(lVar12 + 0x68);
              puVar6[0xe] = 0;
              puVar6[0xd] = uVar5;
              uVar7 = *(ulong *)(lVar12 + 0x70);
              if (1 < uVar7) {
                if ((uVar7 & 1) == 0) {
                  puVar6[0xe] = uVar7;
                  puVar9 = puVar6 + 0x14;
                  uVar10 = *(undefined8 *)(lVar12 + 0x90);
                  uVar5 = *(undefined8 *)(lVar12 + 0x88);
                  uVar15 = *(undefined8 *)(lVar12 + 0x80);
                  uVar14 = *(undefined8 *)(lVar12 + 0x78);
                  puVar6[0x13] = *(undefined8 *)(lVar12 + 0x98);
                  puVar6[0x12] = uVar10;
                  puVar6[0x11] = uVar5;
                  puVar6[0x10] = uVar15;
                  puVar6[0xf] = uVar14;
                  goto LAB_00c0e0f8;
                }
                FUN_007b7fb0();
              }
              puVar9 = puVar6 + 0x14;
            }
            else {
              puVar9 = (undefined8 *)FUN_00bdf8b4(param_2 + 0x138,lVar12);
            }
LAB_00c0e0f8:
            bVar1 = true;
            *(undefined8 **)(param_2 + 0x140) = puVar9;
            goto LAB_00c0defc;
          }
          puVar11 = puVar11 + 0x1b;
          puVar2 = local_100;
          local_100 = puVar6;
        } while( true );
      }
      puVar6 = *(undefined8 **)(param_2 + 0x140);
      if (puVar6 < *(undefined8 **)(param_2 + 0x148)) {
        if (puVar6 == (undefined8 *)0x0) goto LAB_00c0e3c0;
        FUN_006684dc(puVar6,lVar12);
        *puVar6 = &PTR_FUN_00d28188;
        uVar5 = *(undefined8 *)(lVar12 + 0x68);
        puVar6[0xe] = 0;
        puVar6[0xd] = uVar5;
        uVar7 = *(ulong *)(lVar12 + 0x70);
        if (1 < uVar7) {
          if ((uVar7 & 1) == 0) {
            puVar6[0xe] = uVar7;
            puVar9 = puVar6 + 0x14;
            uVar10 = *(undefined8 *)(lVar12 + 0x90);
            uVar5 = *(undefined8 *)(lVar12 + 0x88);
            uVar15 = *(undefined8 *)(lVar12 + 0x80);
            uVar14 = *(undefined8 *)(lVar12 + 0x78);
            puVar6[0x13] = *(undefined8 *)(lVar12 + 0x98);
            puVar6[0x12] = uVar10;
            puVar6[0x11] = uVar5;
            puVar6[0x10] = uVar15;
            puVar6[0xf] = uVar14;
            goto LAB_00c0dfe4;
          }
          FUN_007b7fb0();
        }
        puVar9 = puVar6 + 0x14;
      }
      else {
        puVar9 = (undefined8 *)FUN_00bdf8b4(param_2 + 0x138,lVar12);
      }
LAB_00c0dfe4:
      puVar6 = *(undefined8 **)(param_2 + 0x158);
      *(undefined8 **)(param_2 + 0x140) = puVar9;
      if (puVar6 < *(undefined8 **)(param_2 + 0x160)) {
        if (puVar6 == (undefined8 *)0x0) goto LAB_00c0e3c0;
        FUN_006684dc(puVar6,lVar12);
        *puVar6 = &PTR_FUN_00d28188;
        uVar5 = *(undefined8 *)(lVar12 + 0x68);
        puVar6[0xe] = 0;
        puVar6[0xd] = uVar5;
        uVar7 = *(ulong *)(lVar12 + 0x70);
        if (1 < uVar7) {
          if ((uVar7 & 1) == 0) {
            puVar6[0xe] = uVar7;
            puVar9 = puVar6 + 0x14;
            uVar10 = *(undefined8 *)(lVar12 + 0x90);
            uVar5 = *(undefined8 *)(lVar12 + 0x88);
            uVar15 = *(undefined8 *)(lVar12 + 0x80);
            uVar14 = *(undefined8 *)(lVar12 + 0x78);
            puVar6[0x13] = *(undefined8 *)(lVar12 + 0x98);
            puVar6[0x12] = uVar10;
            puVar6[0x11] = uVar5;
            puVar6[0x10] = uVar15;
            puVar6[0xf] = uVar14;
            goto LAB_00c0e05c;
          }
          FUN_007b7fb0();
        }
        puVar9 = puVar6 + 0x14;
      }
      else {
        puVar9 = (undefined8 *)FUN_00bdf8b4(param_2 + 0x150,lVar12);
      }
LAB_00c0e05c:
      puVar6 = *(undefined8 **)(param_2 + 0x170);
      *(undefined8 **)(param_2 + 0x158) = puVar9;
      if (*(undefined8 **)(param_2 + 0x178) <= puVar6) goto LAB_00c0e104;
      goto joined_r0x00c0e090;
    }
LAB_00c0e15c:
    puVar6 = *(undefined8 **)(param_2 + 0x138);
    puVar9 = *(undefined8 **)(param_2 + 0x140);
    if (puVar6 != puVar9) {
      do {
        uVar7 = FUN_006688c8(puVar6);
        if ((uVar7 & 1) != 0) goto LAB_00c0e1b8;
        puVar6 = puVar6 + 0x14;
      } while (puVar6 != puVar9);
      puVar6 = *(undefined8 **)(param_2 + 0x138);
      puVar9 = *(undefined8 **)(param_2 + 0x140);
    }
    while (puVar6 != puVar9) {
      puVar9 = puVar9 + -0x14;
      if (puVar9 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar9)(puVar9);
    }
    *(undefined8 **)(param_2 + 0x140) = puVar6;
LAB_00c0e1b8:
    puVar6 = *(undefined8 **)(param_2 + 0x150);
    puVar9 = *(undefined8 **)(param_2 + 0x158);
    if (puVar6 != puVar9) {
      do {
        uVar7 = FUN_006688c8(puVar6);
        if ((uVar7 & 1) != 0) goto LAB_00c0e214;
        puVar6 = puVar6 + 0x14;
      } while (puVar6 != puVar9);
      puVar6 = *(undefined8 **)(param_2 + 0x150);
      puVar9 = *(undefined8 **)(param_2 + 0x158);
    }
    while (puVar6 != puVar9) {
      puVar9 = puVar9 + -0x14;
      if (puVar9 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar9)(puVar9);
    }
    *(undefined8 **)(param_2 + 0x158) = puVar6;
LAB_00c0e214:
    puVar6 = *(undefined8 **)(param_2 + 0x168);
    puVar9 = *(undefined8 **)(param_2 + 0x170);
    if (puVar6 != puVar9) {
      do {
        uVar7 = FUN_006688c8(puVar6);
        if ((uVar7 & 1) != 0) goto LAB_00c0e270;
        puVar6 = puVar6 + 0x14;
      } while (puVar6 != puVar9);
      puVar6 = *(undefined8 **)(param_2 + 0x168);
      puVar9 = *(undefined8 **)(param_2 + 0x170);
    }
    while (puVar6 != puVar9) {
      puVar9 = puVar9 + -0x14;
      if (puVar9 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar9)(puVar9);
    }
    *(undefined8 **)(param_2 + 0x170) = puVar6;
LAB_00c0e270:
    FUN_005ecd48(param_1);
  }
  else {
    *param_1 = (int)local_130;
    if ((long)local_118 < 0) {
      FUN_005478d8(param_1 + 2,puStack_128,puStack_120);
    }
    else {
      puVar6 = (undefined8 *)((ulong)&local_130 | 8);
      uVar10 = *puVar6;
      uVar5 = puVar6[2];
      *(undefined8 *)(param_1 + 4) = puVar6[1];
      *(undefined8 *)(param_1 + 2) = uVar10;
      *(undefined8 *)(param_1 + 6) = uVar5;
    }
    iVar3 = (int)local_110;
    param_1[8] = iVar3;
    *(undefined4 *)((long)param_1 + 0x23) = local_110._3_4_;
  }
  puVar6 = local_108;
  puVar9 = local_f0;
  if ((long)local_118 < 0) {
    operator_delete(puStack_128);
    puVar6 = local_108;
    puVar9 = local_f0;
  }
  local_108 = puVar6;
  puVar11 = local_100;
  local_f0 = puVar9;
  if (puVar6 != (undefined8 *)0x0) {
    while (puVar6 != puVar11) {
      puVar11 = puVar11 + -0x1b;
      if (puVar11 == (undefined8 *)0x0) goto LAB_00c0e3ac;
      (**(code **)*puVar11)(puVar11);
    }
    local_100 = puVar6;
    operator_delete(local_108);
    puVar6 = local_108;
    puVar9 = local_f0;
  }
  local_108 = puVar6;
  local_f0 = puVar9;
  puVar6 = local_e8;
  if (puVar9 != (undefined8 *)0x0) {
    while (puVar9 != puVar6) {
      puVar6 = puVar6 + -0x1b;
      if (puVar6 == (undefined8 *)0x0) {
LAB_00c0e3ac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar6)(puVar6);
    }
    local_e8 = puVar9;
    operator_delete(local_f0);
  }
  return;
LAB_00c0def4:
  if ((uVar7 & 1) == 0) {
    local_100 = puVar2;
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/rtp_transceiver.cc",0x434,"is_send_codec || is_recv_codec",&DAT_001f5fa0)
    ;
  }
  bVar1 = false;
  local_100 = puVar2;
LAB_00c0defc:
  puVar6 = *(undefined8 **)(param_2 + 0x158);
  if (puVar6 < *(undefined8 **)(param_2 + 0x160)) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_00c0e3c0;
    FUN_006684dc(puVar6,lVar12);
    *puVar6 = &PTR_FUN_00d28188;
    uVar5 = *(undefined8 *)(lVar12 + 0x68);
    puVar6[0xe] = 0;
    puVar6[0xd] = uVar5;
    uVar7 = *(ulong *)(lVar12 + 0x70);
    if (1 < uVar7) {
      if ((uVar7 & 1) == 0) {
        puVar6[0xe] = uVar7;
        uVar10 = *(undefined8 *)(lVar12 + 0x90);
        uVar5 = *(undefined8 *)(lVar12 + 0x88);
        uVar15 = *(undefined8 *)(lVar12 + 0x80);
        uVar14 = *(undefined8 *)(lVar12 + 0x78);
        puVar6[0x13] = *(undefined8 *)(lVar12 + 0x98);
        puVar6[0x12] = uVar10;
        puVar6[0x11] = uVar5;
        puVar6[0x10] = uVar15;
        puVar6[0xf] = uVar14;
        *(undefined8 **)(param_2 + 0x158) = puVar6 + 0x14;
        goto joined_r0x00c0e144;
      }
      FUN_007b7fb0();
    }
    *(undefined8 **)(param_2 + 0x158) = puVar6 + 0x14;
  }
  else {
    uVar5 = FUN_00bdf8b4(param_2 + 0x150,lVar12);
    *(undefined8 *)(param_2 + 0x158) = uVar5;
  }
joined_r0x00c0e144:
  if (!bVar1) goto LAB_00c0de14;
LAB_00c0e084:
  puVar6 = *(undefined8 **)(param_2 + 0x170);
  if (puVar6 < *(undefined8 **)(param_2 + 0x178)) {
joined_r0x00c0e090:
    if (puVar6 == (undefined8 *)0x0) {
LAB_00c0e3c0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_006684dc(puVar6,lVar12);
    *puVar6 = &PTR_FUN_00d28188;
    uVar5 = *(undefined8 *)(lVar12 + 0x68);
    puVar6[0xe] = 0;
    puVar6[0xd] = uVar5;
    uVar7 = *(ulong *)(lVar12 + 0x70);
    if (1 < uVar7) {
      if ((uVar7 & 1) == 0) {
        puVar6[0xe] = uVar7;
        puVar9 = puVar6 + 0x14;
        uVar10 = *(undefined8 *)(lVar12 + 0x90);
        uVar5 = *(undefined8 *)(lVar12 + 0x88);
        uVar15 = *(undefined8 *)(lVar12 + 0x80);
        uVar14 = *(undefined8 *)(lVar12 + 0x78);
        puVar6[0x13] = *(undefined8 *)(lVar12 + 0x98);
        puVar6[0x12] = uVar10;
        puVar6[0x11] = uVar5;
        puVar6[0x10] = uVar15;
        puVar6[0xf] = uVar14;
        goto LAB_00c0de10;
      }
      FUN_007b7fb0();
    }
    puVar9 = puVar6 + 0x14;
  }
  else {
LAB_00c0e104:
    puVar9 = (undefined8 *)FUN_00bdf8b4(param_2 + 0x168,lVar12);
  }
LAB_00c0de10:
  *(undefined8 **)(param_2 + 0x170) = puVar9;
LAB_00c0de14:
  lVar12 = lVar12 + 0xa0;
  if (lVar12 == lVar13) goto LAB_00c0e15c;
  goto LAB_00c0de20;
}


// ===== 00c0e3f4  FUN_00c0e3f4 =====

void FUN_00c0e3f4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x120);
  lVar2 = *(long *)(param_2 + 0x128);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00b89124(param_1,lVar1,lVar2,(lVar2 - lVar1 >> 5) * -0x3333333333333333);
  return;
}


// ===== 00c0e420  FUN_00c0e420 =====

void FUN_00c0e420(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_00b89124();
  return;
}


// ===== 00c0e484  FUN_00c0e484 =====

void FUN_00c0e484(undefined8 param_1,long param_2)

{
  FUN_00b89040(param_1,param_2 + 0x180);
  return;
}


// ===== 00c0e494  FUN_00c0e494 =====

void FUN_00c0e494(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 **__s2;
  undefined1 *puVar1;
  undefined8 *__s1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined1 *__n;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  lVar2 = *param_2;
  lVar4 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00c0e67c(param_1,(lVar4 - lVar2 >> 3) * -0x3333333333333333);
  puVar3 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[1];
  do {
    if (puVar3 == puVar5) {
      return;
    }
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      FUN_005478d8(&local_90,*puVar3,puVar3[1]);
    }
    else {
      local_80 = (undefined1 *)puVar3[2];
      puStack_88 = (undefined1 *)puVar3[1];
      local_90 = (undefined1 *)*puVar3;
    }
    puVar9 = (undefined8 *)*param_3;
    puVar8 = (undefined8 *)param_3[1];
    uStack_70 = (undefined1 *)puVar3[4];
    local_78 = (undefined1 *)puVar3[3];
    if (puVar9 == puVar8) {
LAB_00c0e5a8:
      if (puVar9 == puVar8) goto LAB_00c0e5d0;
      local_78 = (undefined1 *)CONCAT35(local_78._5_3_,0x100000000);
      local_78 = (undefined1 *)CONCAT44(local_78._4_4_,*(undefined4 *)(puVar9 + 3));
      uStack_70 = (undefined1 *)
                  (CONCAT71((int7)((ulong)uStack_70 >> 8),*(undefined1 *)((long)puVar9 + 0x1c)) &
                  0xffffffff);
    }
    else {
      __n = puStack_88;
      __s2 = (undefined1 **)local_90;
      if (-1 < (long)local_80) {
        __n = (undefined1 *)((ulong)local_80 >> 0x38);
        __s2 = &local_90;
      }
      do {
        bVar6 = *(byte *)((long)puVar9 + 0x17);
        puVar1 = (undefined1 *)puVar9[1];
        if (-1 < (char)bVar6) {
          puVar1 = (undefined1 *)(ulong)bVar6;
        }
        if (puVar1 == __n) {
          __s1 = (undefined8 *)*puVar9;
          if (-1 < (char)bVar6) {
            __s1 = puVar9;
          }
          iVar7 = memcmp(__s1,__s2,(size_t)__n);
          if (iVar7 == 0) goto LAB_00c0e5a8;
        }
        puVar9 = puVar9 + 4;
      } while (puVar9 != puVar8);
LAB_00c0e5d0:
      uStack_70 = (undefined1 *)CONCAT44(4,(undefined4)uStack_70);
    }
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < (undefined8 *)param_1[2]) {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if ((long)local_80 < 0) {
        FUN_005478d8(puVar9,local_90,puStack_88);
      }
      else {
        puVar9[2] = local_80;
        puVar9[1] = puStack_88;
        *puVar9 = local_90;
      }
      puVar8 = puVar9 + 5;
      puVar9[4] = uStack_70;
      puVar9[3] = local_78;
    }
    else {
      puVar8 = (undefined8 *)FUN_00c12a80(param_1,&local_90);
    }
    param_1[1] = puVar8;
    FUN_00668d5c(&local_90);
    puVar3 = puVar3 + 5;
  } while( true );
}


// ===== 00c0e67c  FUN_00c0e67c =====

void FUN_00c0e67c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00b615e4();
    }
    lVar2 = param_1[1];
    local_50 = operator_new(param_2 * 0x28);
    local_48 = (long)local_50 + (lVar2 - lVar1);
    local_38 = (void *)((long)local_50 + param_2 * 0x28);
    local_40 = local_48;
    FUN_00b614d4(param_1,&local_50);
    lVar2 = local_48;
    lVar1 = local_40;
    while (lVar2 != lVar1) {
      lVar1 = lVar1 + -0x28;
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668d5c(lVar1);
    }
    if (local_50 != (void *)0x0) {
      local_40 = lVar1;
      operator_delete(local_50);
    }
  }
  return;
}


// ===== 00c0e76c  FUN_00c0e76c =====

void FUN_00c0e76c(long param_1)

{
  FUN_00c0e494(param_1 + 0x180,param_1 + 0x1b0);
  return;
}


// ===== 00c0e780  FUN_00c0e780 =====

void FUN_00c0e780(undefined4 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  long *__s1;
  undefined8 *__s2;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  size_t sVar13;
  void *local_80;
  undefined8 uStack_78;
  undefined5 local_70;
  undefined2 uStack_6b;
  undefined4 uStack_69;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  
  lVar10 = *(long *)(param_2 + 0x180);
  if (param_4 != (*(long *)(param_2 + 0x188) - lVar10 >> 3) * -0x3333333333333333) {
    uStack_62 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = (void *)0x0;
    uStack_6b = 0;
    uStack_69 = 0;
    uStack_65 = 0;
    uStack_64 = 0;
    FUN_00547cac(&local_80,"Size of extensions to negotiate does not match.",0x2f);
LAB_00c0e980:
    *param_1 = 7;
    if ((char)uStack_69 < '\0') {
      FUN_005478d8(param_1 + 2,local_80,uStack_78);
      param_1[8] = CONCAT13(uStack_65,uStack_69._1_3_);
      *(uint *)((long)param_1 + 0x23) =
           CONCAT13(uStack_62,CONCAT12(uStack_63,CONCAT11(uStack_64,uStack_65)));
      if ((char)uStack_69 < '\0') {
        operator_delete(local_80);
      }
    }
    else {
      *(undefined8 *)(param_1 + 4) = uStack_78;
      *(void **)(param_1 + 2) = local_80;
      *(ulong *)(param_1 + 6) = CONCAT17((char)uStack_69,CONCAT25(uStack_6b,local_70));
      param_1[8] = CONCAT13(uStack_65,uStack_69._1_3_);
      *(uint *)((long)param_1 + 0x23) =
           CONCAT13(uStack_62,CONCAT12(uStack_63,CONCAT11(uStack_64,uStack_65)));
    }
    return;
  }
  if (param_4 != 0) {
    lVar12 = 0;
    uVar9 = param_4;
    do {
      puVar1 = (undefined8 *)(lVar10 + lVar12);
      plVar2 = (long *)(param_3 + lVar12);
      bVar4 = *(byte *)((long)puVar1 + 0x17);
      bVar5 = *(byte *)((long)plVar2 + 0x17);
      sVar13 = plVar2[1];
      __n = sVar13;
      if ((bVar5 & 0x80) == 0) {
        __n = (ulong)bVar5;
      }
      sVar3 = puVar1[1];
      if (-1 < (char)bVar4) {
        sVar3 = (ulong)bVar4;
      }
      if (__n != sVar3) {
LAB_00c0e944:
        pcVar7 = "Reordering extensions is not allowed.";
        uVar8 = 0x25;
LAB_00c0e968:
        uStack_62 = 0;
        local_70 = 0;
        uStack_78 = 0;
        local_80 = (void *)0x0;
        uStack_6b = 0;
        uStack_69 = 0;
        uStack_65 = 0;
        uStack_64 = 0;
        FUN_00547cac(&local_80,pcVar7,uVar8);
        goto LAB_00c0e980;
      }
      plVar11 = (long *)*plVar2;
      __s1 = plVar11;
      if ((bVar5 & 0x80) == 0) {
        __s1 = plVar2;
      }
      __s2 = (undefined8 *)*puVar1;
      if (-1 < (char)bVar4) {
        __s2 = puVar1;
      }
      iVar6 = memcmp(__s1,__s2,__n);
      if (iVar6 != 0) goto LAB_00c0e944;
      if ((bVar5 & 0x80) == 0) {
        sVar13 = (ulong)bVar5;
      }
      if (sVar13 == 0x23) {
        if ((bVar5 & 0x80) == 0) {
          plVar11 = plVar2;
        }
        if (((((*plVar11 != 0x667465693a6e7275 || plVar11[1] != 0x3a736d617261703a) ||
              plVar11[2] != 0x657264682d707472) || plVar11[3] != 0x3a736564733a7478) ||
             *(long *)((long)plVar11 + 0x1b) != 0x64696d3a73656473) ||
           (*(int *)(param_3 + lVar12 + 0x24) == 0)) goto LAB_00c0e7e8;
        pcVar7 = "Attempted to stop a mandatory extension.";
        uVar8 = 0x28;
        goto LAB_00c0e968;
      }
LAB_00c0e7e8:
      uVar9 = uVar9 - 1;
      lVar12 = lVar12 + 0x28;
    } while (uVar9 != 0);
    uVar9 = 0;
    lVar10 = 0x24;
    do {
      if ((ulong)((*(long *)(param_2 + 0x188) - *(long *)(param_2 + 0x180) >> 3) *
                 -0x3333333333333333) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)(*(long *)(param_2 + 0x180) + lVar10) = *(undefined4 *)(param_3 + lVar10);
      lVar10 = lVar10 + 0x28;
    } while (param_4 != uVar9);
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c0ea84  FUN_00c0ea84 =====

void FUN_00c0ea84(long *param_1,int param_2,long param_3)

{
  ulong uVar1;
  int **ppiVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int *local_50;
  ulong uStack_48;
  undefined7 local_40;
  byte bStack_39;
  
  if (param_2 - 1U < 2) {
    if (param_1 + 0x36 != (long *)(param_3 + 0x40)) {
      FUN_005e2544(param_1 + 0x36,*(long *)(param_3 + 0x40),*(long *)(param_3 + 0x48),
                   *(long *)(param_3 + 0x48) - *(long *)(param_3 + 0x40) >> 5);
    }
    (**(code **)(*(long *)param_1[2] + 0x10))
              (&local_50,(long *)param_1[2],"WebRTC-HeaderExtensionNegotiateMemory",0x25);
    uVar1 = uStack_48;
    if (-1 < (char)bStack_39) {
      uVar1 = (ulong)bStack_39;
    }
    if (uVar1 < 7) {
      bVar5 = false;
    }
    else {
      ppiVar2 = (int **)local_50;
      if (-1 < (char)bStack_39) {
        ppiVar2 = &local_50;
      }
      bVar5 = *(int *)ppiVar2 == 0x62616e45 && *(int *)((long)ppiVar2 + 3) == 0x64656c62;
    }
    if ((char)bStack_39 < '\0') {
      operator_delete(local_50);
    }
    if (!bVar5) {
      return;
    }
    (**(code **)(*param_1 + 0xb0))(&local_50,param_1);
    pvVar7 = (void *)param_1[0x30];
    if (pvVar7 == (void *)0x0) goto LAB_00c0ed5c;
    pvVar6 = (void *)param_1[0x31];
    pvVar8 = pvVar7;
    if (pvVar7 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x28);
        if (pvVar6 == (void *)0x0) {
LAB_00c0edc4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00668d5c(pvVar6);
      } while (pvVar6 != pvVar7);
LAB_00c0ed48:
      pvVar7 = (void *)param_1[0x30];
    }
  }
  else {
    if (param_2 == 3) {
      (**(code **)(*(long *)param_1[2] + 0x10))
                (&local_50,(long *)param_1[2],"WebRTC-HeaderExtensionNegotiateMemory",0x25);
      if (-1 < (char)bStack_39) {
        uStack_48 = (ulong)bStack_39;
      }
      if (uStack_48 < 7) {
        bVar5 = false;
      }
      else {
        ppiVar2 = (int **)local_50;
        if (-1 < (char)bStack_39) {
          ppiVar2 = &local_50;
        }
        bVar5 = *(int *)ppiVar2 == 0x62616e45 && *(int *)((long)ppiVar2 + 3) == 0x64656c62;
      }
      if ((char)bStack_39 < '\0') {
        operator_delete(local_50);
      }
      if (!bVar5) {
        return;
      }
      lVar3 = param_1[0x33];
      lVar4 = param_1[0x34];
      if (lVar3 != lVar4) {
        FUN_00b88a58(param_1 + 0x30,lVar3,lVar4,(lVar4 - lVar3 >> 3) * -0x3333333333333333);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../pc/rtp_transceiver.cc",0x4cf,"!header_extensions_for_rollback_.empty()",
                   &DAT_001f5fa0);
    }
    if (param_2 != 0) {
      return;
    }
    (**(code **)(*(long *)param_1[2] + 0x10))
              (&local_50,(long *)param_1[2],"WebRTC-HeaderExtensionNegotiateMemory",0x25);
    uVar1 = uStack_48;
    if (-1 < (char)bStack_39) {
      uVar1 = (ulong)bStack_39;
    }
    if (uVar1 < 7) {
      bVar5 = false;
    }
    else {
      ppiVar2 = (int **)local_50;
      if (-1 < (char)bStack_39) {
        ppiVar2 = &local_50;
      }
      bVar5 = *(int *)ppiVar2 == 0x62616e45 && *(int *)((long)ppiVar2 + 3) == 0x64656c62;
    }
    if ((char)bStack_39 < '\0') {
      operator_delete(local_50);
    }
    if (!bVar5) {
      return;
    }
    FUN_00b88a58(param_1 + 0x33,param_1[0x30],param_1[0x31],
                 (param_1[0x31] - param_1[0x30] >> 3) * -0x3333333333333333);
    FUN_00c0e494(&local_50,param_1 + 0x30,param_3 + 0x40);
    pvVar7 = (void *)param_1[0x30];
    if (pvVar7 == (void *)0x0) goto LAB_00c0ed5c;
    pvVar6 = (void *)param_1[0x31];
    pvVar8 = pvVar7;
    if (pvVar7 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x28);
        if (pvVar6 == (void *)0x0) goto LAB_00c0edc4;
        FUN_00668d5c(pvVar6);
      } while (pvVar6 != pvVar7);
      goto LAB_00c0ed48;
    }
  }
  param_1[0x31] = (long)pvVar8;
  operator_delete(pvVar7);
LAB_00c0ed5c:
  param_1[0x31] = uStack_48;
  param_1[0x30] = (long)local_50;
  param_1[0x32] = CONCAT17(bStack_39,local_40);
  return;
}


// ===== 00c0edf8  FUN_00c0edf8 =====

void FUN_00c0edf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0ee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0xb0))();
  return;
}


// ===== 00c0ee0c  FUN_00c0ee0c =====

uint FUN_00c0ee0c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *local_60;
  undefined8 uStack_58;
  code *local_50;
  code *pcStack_48;
  undefined4 local_34;
  undefined8 local_18;
  
  local_34 = param_3;
  local_18 = param_2;
  local_60 = (undefined8 *)operator_new(0x20);
  uStack_58 = 0x20;
  *local_60 = param_1;
  local_60[1] = &local_18;
  local_60[2] = &local_34;
  local_60[3] = param_4;
  local_50 = FUN_005ea56c;
  pcStack_48 = FUN_00c146f8;
  uVar1 = FUN_00c0eea8(param_1,&local_60);
  (*local_50)(0,&local_60,&local_60);
  return uVar1 & 1;
}


// ===== 00c0eea8  FUN_00c0eea8 =====

/* WARNING: Removing unreachable block (ram,0x00c0efa8) */

byte FUN_00c0eea8(ulong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined8 *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  code *pcStack_258;
  undefined4 uStack_244;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined1 auStack_208 [175];
  undefined1 uStack_159;
  undefined8 local_158;
  undefined8 **ppuStack_150;
  ulong local_148 [21];
  char local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined8 *puStack_78;
  undefined8 **local_70;
  undefined8 *local_68;
  
  if (*(long *)(param_1 + 0xf0) == 0) {
    bVar5 = 0;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x50);
    plVar2 = *(long **)(param_1 + 0x58);
    local_98 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    if ((long)plVar2 - (long)plVar7 != 0) {
      uVar8 = (long)plVar2 - (long)plVar7 >> 3;
      if (0x155555555555555 < uVar8) {
        uStack_244 = param_3;
        auVar9 = FUN_00c12c08();
        uStack_228 = auVar9._8_8_;
        pcStack_238 = FUN_00c0f148;
        puStack_240 = &stack0xffffffffffffffa0;
        uStack_220 = param_2;
        uStack_218 = param_1;
        puStack_270 = (undefined8 *)operator_new(0x20);
        uStack_268 = 0x20;
        *puStack_270 = auVar9._0_8_;
        puStack_270[1] = &uStack_228;
        puStack_270[2] = &uStack_244;
        puStack_270[3] = param_4;
        pcStack_260 = FUN_005ea56c;
        pcStack_258 = FUN_00c14720;
        bVar5 = FUN_00c0eea8(auVar9._0_8_,&puStack_270);
        (*pcStack_260)(0,&puStack_270,&puStack_270);
        return bVar5 & 1;
      }
      local_90 = (undefined8 *)operator_new(uVar8 * 0xc0);
      local_88 = local_90 + uVar8 * 0x18;
    }
    local_98 = local_90;
    if (plVar7 != plVar2) {
      do {
        uVar6 = (**(code **)(*(long *)*plVar7 + 0x38))();
        local_158 = CONCAT44(local_158._4_4_,uVar6);
        ppuStack_150 = *(undefined8 ***)(*plVar7 + 0x18);
        local_148[0] = local_148[0] & 0xffffffffffffff00;
        local_a0 = '\0';
        local_68 = local_90;
        local_80 = &local_68;
        puStack_78 = &local_158;
        local_70 = &local_98;
        if (local_90 < local_88) {
          if (local_90 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(undefined1 *)(local_90 + 0x17) = 0;
          *(undefined1 *)(local_90 + 2) = 0;
          local_90[1] = ppuStack_150;
          *local_90 = local_158;
          local_a0 = '\0';
          local_68 = local_90 + 0x18;
        }
        else {
          FUN_00c12d54(&local_80);
        }
        local_90 = local_68;
        if (local_a0 == '\x01') {
          FUN_0066981c(local_148);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar2);
    }
    ppuStack_150 = &local_98;
    plVar7 = *(long **)(*(long *)(param_1 + 0x100) + 0x30);
    local_80 = &local_68;
    local_68 = (undefined8 *)CONCAT71(local_68._1_7_,0xaa);
    puStack_78 = &local_158;
    local_158 = param_2;
    local_148[0] = param_1;
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_80,FUN_00c14748,&uStack_159);
    puVar4 = local_90;
    bVar5 = (byte)local_68;
    puVar3 = local_98;
    for (puVar1 = local_98; local_98 = puVar3, puVar1 != puVar4; puVar1 = puVar1 + 0x18) {
      if (*(char *)(puVar1 + 0x17) == '\x01') {
        plVar7 = (long *)puVar1[1];
        FUN_0066953c(auStack_208,puVar1 + 2);
        (**(code **)(*plVar7 + 0x108))(plVar7,auStack_208);
        FUN_0066981c(auStack_208);
      }
      puVar3 = local_98;
    }
    puVar1 = local_90;
    if (puVar3 != (undefined8 *)0x0) {
      while (puVar4 = puVar1, puVar3 != puVar4) {
        puVar1 = puVar4 + -0x18;
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)(puVar4 + -1) == '\x01') {
          FUN_0066981c(puVar4 + -0x16);
        }
      }
      local_90 = puVar3;
      operator_delete(local_98);
    }
  }
  return bVar5;
}


// ===== 00c0f148  FUN_00c0f148 =====

uint FUN_00c0f148(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *local_60;
  undefined8 uStack_58;
  code *local_50;
  code *pcStack_48;
  undefined4 local_34;
  undefined8 local_18;
  
  local_34 = param_3;
  local_18 = param_2;
  local_60 = (undefined8 *)operator_new(0x20);
  uStack_58 = 0x20;
  *local_60 = param_1;
  local_60[1] = &local_18;
  local_60[2] = &local_34;
  local_60[3] = param_4;
  local_50 = FUN_005ea56c;
  pcStack_48 = FUN_00c14720;
  uVar1 = FUN_00c0eea8(param_1,&local_60);
  (*local_50)(0,&local_60,&local_60);
  return uVar1 & 1;
}


// ===== 00c0f1e4  FUN_00c0f1e4 =====

void FUN_00c0f1e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0f1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x98))();
  return;
}


// ===== 00c0f1f8  FUN_00c0f1f8 =====

void FUN_00c0f1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0f208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x68))();
  return;
}


// ===== 00c0f20c  FUN_00c0f20c =====

void FUN_00c0f20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0f21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0xa0))();
  return;
}


// ===== 00c0f220  FUN_00c0f220 =====

void FUN_00c0f220(long param_1)

{
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0f234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x30))();
    return;
  }
  return;
}


// ===== 00c0f23c  FUN_00c0f23c =====

void FUN_00c0f23c(long param_1)

{
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0f250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x38))();
    return;
  }
  return;
}


// ===== 00c0f258  FUN_00c0f258 =====

void FUN_00c0f258(long param_1)

{
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0f26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x48))();
    return;
  }
  return;
}


// ===== 00c0f274  FUN_00c0f274 =====

void FUN_00c0f274(long param_1)

{
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0f288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x50))();
    return;
  }
  return;
}


// ===== 00c0f290  FUN_00c0f290 =====

void FUN_00c0f290(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *local_48;
  long *local_28;
  
  cVar2 = *(char *)(param_1 + 0xd0);
  if (cVar2 == *(char *)(param_3 + 3)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0xcf) < '\0') {
        operator_delete(*(void **)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
      }
      uVar6 = param_3[1];
      uVar5 = *param_3;
      *(undefined8 *)(param_1 + 200) = param_3[2];
      *(undefined8 *)(param_1 + 0xc0) = uVar6;
      *(undefined8 *)(param_1 + 0xb8) = uVar5;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
      *(undefined1 *)param_3 = 0;
    }
  }
  else if (cVar2 == '\0') {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    *(undefined8 *)(param_1 + 200) = param_3[2];
    *(undefined8 *)(param_1 + 0xc0) = uVar6;
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  else {
    if (*(char *)(param_1 + 0xcf) < '\0') {
      operator_delete(*(void **)(param_1 + 0xb8));
    }
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x58);
  for (plVar4 = *(long **)(param_1 + 0x50); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    local_28 = (long *)*param_2;
    plVar3 = *(long **)(*plVar4 + 0x18);
    if (local_28 != (long *)0x0) {
      (**(code **)*local_28)();
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  plVar1 = *(long **)(param_1 + 0x70);
  for (plVar4 = *(long **)(param_1 + 0x68); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    local_48 = (long *)*param_2;
    plVar3 = *(long **)(*plVar4 + 0x20);
    if (local_48 != (long *)0x0) {
      (**(code **)*local_48)();
    }
    (**(code **)(*plVar3 + 0xb8))(plVar3,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
  }
  return;
}


// ===== 00c0f428  FUN_00c0f428 =====

undefined8 * FUN_00c0f428(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar6 = *param_1;
  lVar17 = param_1[1];
  puVar16 = (undefined8 *)(lVar17 - lVar6);
  uVar1 = ((long)puVar16 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bf4944();
  }
  uVar8 = param_1[2] - lVar6 >> 2;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
    puVar2 = puVar16;
  }
  else {
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar8 << 3);
    puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
  }
  if (puVar2 == (undefined8 *)0x0) {
LAB_00c0f690:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_2;
  *param_2 = 0;
  *puVar2 = uVar5;
  plVar14 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  lVar18 = (long)plVar3 - (long)plVar14;
  plVar15 = (long *)((long)puVar2 - ((long)plVar3 - (long)plVar14));
  if (lVar18 != 0) {
    uVar11 = lVar18 - 8U >> 3;
    uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
    uVar1 = uVar13;
    if (uVar11 <= uVar13) {
      uVar1 = uVar11;
    }
    plVar7 = plVar14;
    plVar9 = plVar15;
    if (0x3b < uVar1) {
      if (uVar11 <= uVar13) {
        uVar13 = uVar11;
      }
      if ((((((int)lVar6 - (int)((long)pvVar4 + lVar17) | (int)plVar3 - (int)plVar14) & 7U) == 0) &&
          (plVar14 <= plVar14 + uVar13)) && (plVar15 <= plVar15 + uVar13)) {
        uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if (((long *)((long)pvVar4 + ((uVar13 * 8 + lVar17) - (lVar18 + lVar6)) + 8) <= plVar14) ||
           (plVar14 + uVar13 + 1 <= plVar15)) {
          uVar13 = uVar1 + 1 & 3;
          uVar11 = 4;
          if (uVar13 != 0) {
            uVar11 = uVar13;
          }
          lVar6 = (uVar1 + 1) - uVar11;
          plVar7 = plVar14 + lVar6;
          plVar9 = plVar15 + lVar6;
          plVar10 = (long *)((long)(puVar16 + -(lVar18 >> 3)) + (long)pvVar4 + 0x10);
          plVar12 = plVar14 + 2;
          do {
            lVar18 = plVar12[-1];
            lVar17 = plVar12[-2];
            lVar20 = plVar12[1];
            lVar19 = *plVar12;
            lVar6 = lVar6 + -4;
            plVar12[-1] = 0;
            plVar12[-2] = 0;
            plVar12[1] = 0;
            *plVar12 = 0;
            plVar10[-1] = lVar18;
            plVar10[-2] = lVar17;
            plVar10[1] = lVar20;
            *plVar10 = lVar19;
            plVar10 = plVar10 + 4;
            plVar12 = plVar12 + 4;
          } while (lVar6 != 0);
        }
      }
    }
    do {
      if (plVar9 == (long *)0x0) goto LAB_00c0f690;
      lVar6 = *plVar7;
      plVar10 = plVar7 + 1;
      *plVar7 = 0;
      *plVar9 = lVar6;
      plVar7 = plVar10;
      plVar9 = plVar9 + 1;
    } while (plVar10 != plVar3);
    do {
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar14 != (long *)0x0) {
        (**(code **)(*(long *)*plVar14 + 8))();
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar3);
    plVar14 = (long *)*param_1;
  }
  *param_1 = (long)plVar15;
  param_1[1] = (long)(puVar2 + 1);
  param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
  if (plVar14 != (long *)0x0) {
    operator_delete(plVar14);
  }
  return puVar2 + 1;
}


// ===== 00c0f6c0  FUN_00c0f6c0 =====

undefined8 * FUN_00c0f6c0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar6 = *param_1;
  lVar17 = param_1[1];
  puVar16 = (undefined8 *)(lVar17 - lVar6);
  uVar1 = ((long)puVar16 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      puVar2 = puVar16;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00c0f954;
      pvVar4 = operator_new(uVar8 << 3);
      puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
    }
    if (puVar2 == (undefined8 *)0x0) {
LAB_00c0f928:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    plVar14 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar18 = (long)plVar3 - (long)plVar14;
    plVar15 = (long *)((long)puVar2 - ((long)plVar3 - (long)plVar14));
    if (lVar18 != 0) {
      uVar11 = lVar18 - 8U >> 3;
      uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
      uVar1 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = uVar11;
      }
      plVar7 = plVar14;
      plVar9 = plVar15;
      if (0x3b < uVar1) {
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar17) | (int)plVar3 - (int)plVar14) & 7U) == 0)
            && (plVar14 <= plVar14 + uVar13)) && (plVar15 <= plVar15 + uVar13)) {
          uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          if (((long *)((long)pvVar4 + ((uVar13 * 8 + lVar17) - (lVar18 + lVar6)) + 8) <= plVar14)
             || (plVar14 + uVar13 + 1 <= plVar15)) {
            uVar13 = uVar1 + 1 & 3;
            uVar11 = 4;
            if (uVar13 != 0) {
              uVar11 = uVar13;
            }
            lVar6 = (uVar1 + 1) - uVar11;
            plVar7 = plVar14 + lVar6;
            plVar9 = plVar15 + lVar6;
            plVar10 = (long *)((long)(puVar16 + -(lVar18 >> 3)) + (long)pvVar4 + 0x10);
            plVar12 = plVar14 + 2;
            do {
              lVar18 = plVar12[-1];
              lVar17 = plVar12[-2];
              lVar20 = plVar12[1];
              lVar19 = *plVar12;
              lVar6 = lVar6 + -4;
              plVar12[-1] = 0;
              plVar12[-2] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
              plVar10[-1] = lVar18;
              plVar10[-2] = lVar17;
              plVar10[1] = lVar20;
              *plVar10 = lVar19;
              plVar10 = plVar10 + 4;
              plVar12 = plVar12 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00c0f928;
        lVar6 = *plVar7;
        plVar10 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar10;
        plVar9 = plVar9 + 1;
      } while (plVar10 != plVar3);
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 8))();
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
      plVar14 = (long *)*param_1;
    }
    *param_1 = (long)plVar15;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
    return puVar2 + 1;
  }
  FUN_00bf495c();
LAB_00c0f954:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c0f958  FUN_00c0f958 =====

void FUN_00c0f958(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x28);
  return;
}


// ===== 00c0f97c  FUN_00c0f97c =====

bool FUN_00c0f97c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 5);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c0f9d4  FUN_00c0f9d4 =====

void FUN_00c0f9d4(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d4a1a0;
  param_1[1] = &PTR_FUN_00d4a248;
  local_c0 = FUN_00c106d0;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = 0;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[2];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c1070c;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  return;
}


// ===== 00c0faec  FUN_00c0faec =====

void FUN_00c0faec(void *param_1)

{
  FUN_00c0f9d4();
  operator_delete(param_1);
  return;
}


// ===== 00c0fb1c  FUN_00c0fb1c =====

void FUN_00c0fb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0fb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  return;
}


// ===== 00c0fb30  FUN_00c0fb30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0fb30(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x20);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f46e8;
  local_a8 = _DAT_001f46e0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00c10750(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00c0fbc8  FUN_00c0fbc8 =====

/* WARNING: Removing unreachable block (ram,0x00c0fc94) */
/* WARNING: Removing unreachable block (ram,0x00c0fd7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0fbc8(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_e8;
  code *local_e0;
  ulong uStack_d8;
  long *local_d0;
  long *plStack_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50;
  long *plStack_48;
  code *local_40;
  code *pcStack_38;
  
  local_e8 = *(long *)(param_2 + 0x20);
  local_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (code *)0x0;
  uStack_d8 = _UNK_001f4c48;
  local_e0 = _DAT_001f4c40;
  FUN_0066f1ac((long)&local_b8 + 4);
  plVar4 = *(long **)(param_2 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c109b0;
    local_50 = &local_e8;
    (**(code **)(*plVar4 + 8))(plVar4,&local_50,&uStack_51,&uStack_52);
    (*local_40)(0,&local_50,&local_50);
    FUN_0066f318((long)&local_b8 + 4,0x7fffffffffffffff,3000000);
    pcVar3 = local_c0;
    plVar4 = local_d0;
    plStack_48 = plStack_c8;
  }
  else {
    pcVar3 = local_e0;
    if ((uStack_d8 & 1) != 0) {
      pcVar3 = *(code **)(local_e0 + *(long *)(local_e8 + ((long)uStack_d8 >> 1)));
    }
    (*pcVar3)(&local_50);
    pcVar3 = local_40;
    plVar4 = local_50;
    plVar1 = plStack_c8;
    if (local_d0 != (long *)0x0) {
      do {
        if (local_d0 == plVar1) {
          plStack_c8 = local_d0;
          operator_delete(local_d0);
          pcVar3 = local_40;
          plVar4 = local_50;
          goto LAB_00c0fd2c;
        }
        plVar1 = plVar1 + -3;
      } while (plVar1 != (long *)0x0);
      goto LAB_00c0fdbc;
    }
  }
LAB_00c0fd2c:
  param_1[1] = (long)plStack_48;
  *param_1 = (long)plVar4;
  param_1[2] = (long)pcVar3;
  plStack_c8 = (long *)0x0;
  local_c0 = (code *)0x0;
  local_d0 = (long *)0x0;
  FUN_0066f2b0((long)&local_b8 + 4);
  plVar4 = plStack_c8;
  if (local_d0 == (long *)0x0) {
    return;
  }
  do {
    if (local_d0 == plVar4) {
      plStack_c8 = local_d0;
      operator_delete(local_d0);
      return;
    }
    plVar4 = plVar4 + -3;
  } while (plVar4 != (long *)0x0);
LAB_00c0fdbc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c0fdd0  FUN_00c0fdd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0fdd0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0;
  uStack_b0 = _UNK_001f46f8;
  local_b8 = _DAT_001f46f0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00c109e4(param_1,&local_c0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  plVar1 = local_a8;
  plVar2 = local_a0;
  if (local_a8 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_a0 = plVar1;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00c0fec8  FUN_00c0fec8 =====

void FUN_00c0fec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x40))();
  return;
}


// ===== 00c0fedc  FUN_00c0fedc =====

void FUN_00c0fedc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0feec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  return;
}


// ===== 00c0fef0  FUN_00c0fef0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0fef0(undefined8 param_1,long param_2)

{
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  
  local_160 = *(undefined8 *)(param_2 + 0x20);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_150 = _UNK_001f3ab8;
  local_158 = _DAT_001f3ab0;
  FUN_00669500(&local_148);
  FUN_0066f1ac((long)&uStack_a0 + 4);
  FUN_00c10c7c(param_1,&local_160,*(undefined8 *)(param_2 + 0x18));
  FUN_0066f2b0((long)&uStack_a0 + 4);
  FUN_0066981c(&local_148);
  return;
}


// ===== 00c0ffc4  FUN_00c0ffc4 =====

undefined8 FUN_00c0ffc4(void)

{
  return 0;
}


// ===== 00c0ffd0  FUN_00c0ffd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0ffd0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x20);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f1cc8;
  local_b8 = _DAT_001f1cc0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c10dcc;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c1010c  FUN_00c1010c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1010c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x20);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &local_f8;
  uStack_b0 = _UNK_001f2918;
  local_b8 = _DAT_001f2910;
  local_f8 = param_2;
  uStack_f0 = param_3;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c10e18;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0,puStack_a0[1]);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c10248  FUN_00c10248 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c10248(undefined8 param_1,long param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0;
  uStack_b0 = _UNK_001f1ac8;
  local_b8 = _DAT_001f1ac0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00c10e64(param_1,&local_c0,*(undefined8 *)(param_2 + 0x18));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_a8 != (void *)0x0) {
    uVar2 = (ulong)(((long)local_a8 - (long)local_a0) * 0x333333333333333) >> 4;
    uVar3 = (long)local_a0 * -0x333333333333333 - 0x10U >> 4;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    pvVar1 = local_a0;
    if ((1 < uVar2) && ((((int)local_a8 - (int)local_a0 | -(int)local_a0) & 0xfU) == 0)) {
      uVar2 = uVar2 & 0xffffffffffffffe;
      pvVar1 = (void *)((long)local_a0 + uVar2 * -0x50);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar1 != local_a8) {
      pvVar1 = (void *)((long)pvVar1 + -0x50);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00c10370  FUN_00c10370 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c10370(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x20);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4898;
  local_b8 = _DAT_001f4890;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00c11100(&local_c0,*(undefined8 *)(param_1 + 0x18));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c1041c  FUN_00c1041c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1041c(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x20);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f42b8;
  local_a8 = _DAT_001f42b0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00c11250(param_1,&local_b0,*(undefined8 *)(param_2 + 0x18));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00c104b4  FUN_00c104b4 =====

void FUN_00c104b4(long *param_1,undefined8 *param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  (**(code **)(*param_1 + 0x90))(param_1,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 00c10504  FUN_00c10504 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c10504(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x20);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3008;
  local_b8 = _DAT_001f3000;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00c113d8(&local_c0,*(undefined8 *)(param_1 + 0x18));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c105b0  FUN_00c105b0 =====

bool FUN_00c105b0(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x28) == 1;
}


// ===== 00c105c8  FUN_00c105c8 =====

void FUN_00c105c8(long param_1)

{
  FUN_00c0f9d4(param_1 + -8);
  return;
}


// ===== 00c105d4  FUN_00c105d4 =====

void FUN_00c105d4(long param_1)

{
  FUN_00c0f9d4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c10608  FUN_00c10608 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c10608(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3008;
  local_b8 = _DAT_001f3000;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00c113d8(&local_c0,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c106b4  FUN_00c106b4 =====

void FUN_00c106b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc106bc);
  (*pcVar1)();
}


// ===== 00c106bc  FUN_00c106bc =====

void FUN_00c106bc(long param_1)

{
  FUN_00c0f9d4(param_1 + -8);
  return;
}


// ===== 00c106c8  FUN_00c106c8 =====

void FUN_00c106c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc106d0);
  (*pcVar1)();
}


// ===== 00c106d0  FUN_00c106d0 =====

void FUN_00c106d0(long param_1)

{
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 00c1070c  FUN_00c1070c =====

void FUN_00c1070c(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00c10750  FUN_00c10750 =====

void FUN_00c10750(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c10858;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00c10858  FUN_00c10858 =====

void FUN_00c10858(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00c108d8  FUN_00c108d8 =====

/* WARNING: Removing unreachable block (ram,0x00c1094c) */

void FUN_00c108d8(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  long local_50;
  long lStack_48;
  long local_40;
  
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*param_1 + (param_1[2] >> 1)));
  }
  (*pcVar3)(&local_50);
  pvVar4 = (void *)param_1[3];
  if (pvVar4 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    pvVar1 = pvVar4;
    if (pvVar4 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x18);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar2 != pvVar4);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = (long)pvVar4;
    operator_delete(pvVar1);
  }
  param_1[4] = lStack_48;
  param_1[3] = local_50;
  param_1[5] = local_40;
  return;
}


// ===== 00c109b0  FUN_00c109b0 =====

void FUN_00c109b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00c108d8(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x34);
  return;
}


// ===== 00c109e4  FUN_00c109e4 =====

void FUN_00c109e4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c10c44;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00c10ab4(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00c10ab4  FUN_00c10ab4 =====

void FUN_00c10ab4(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *local_38;
  long *local_30;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(&local_38,plVar2);
  FUN_00c10b78(param_1,&local_38);
  plVar1 = local_38;
  plVar2 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_30 = plVar1;
    operator_delete(local_38);
  }
  return;
}


// ===== 00c10b78  FUN_00c10b78 =====

undefined8 * FUN_00c10b78(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    operator_delete(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00c10c44  FUN_00c10c44 =====

void FUN_00c10c44(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00c10ab4(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00c10c7c  FUN_00c10c7c =====

void FUN_00c10c7c(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c10d64;
    local_e0[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_e0,&uStack_11,&uStack_12);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318((long)param_2 + 0xc4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar2)(local_e0);
    FUN_00b618b4(param_2 + 3,local_e0);
    FUN_0066981c(local_e0);
  }
  FUN_0066953c(param_1,param_2 + 3);
  return;
}


// ===== 00c10d64  FUN_00c10d64 =====

void FUN_00c10d64(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_c8 [168];
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)(auStack_c8);
  FUN_00b618b4(plVar2 + 3,auStack_c8);
  FUN_0066981c(auStack_c8);
  FUN_0066f2dc((long)plVar2 + 0xc4);
  return;
}


// ===== 00c10dcc  FUN_00c10dcc =====

void FUN_00c10dcc(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00c10e18  FUN_00c10e18 =====

void FUN_00c10e18(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4],((undefined8 *)plVar3[4])[1]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00c10e64  FUN_00c10e64 =====

void FUN_00c10e64(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  ulong uVar5;
  long *local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c10fec;
    local_50 = param_2;
    (**(code **)(*param_3 + 8))(param_3,&local_50,&uStack_11,&uStack_12);
    (*local_40)(0,&local_50,&local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
    lStack_48 = param_2[4];
    local_50 = (long *)param_2[3];
    local_40 = (code *)param_2[5];
  }
  else {
    pcVar4 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar4)(&local_50);
    pvVar2 = (void *)param_2[3];
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)param_2[4];
      uVar1 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x333333333333333) >> 4;
      uVar5 = (long)pvVar3 * -0x333333333333333 - 0x10U >> 4;
      if (uVar5 <= uVar1) {
        uVar1 = uVar5;
      }
      if ((1 < uVar1) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
        uVar1 = uVar1 & 0xffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar1 * -0x50);
        do {
          uVar1 = uVar1 - 2;
        } while (uVar1 != 0);
      }
      while (pvVar3 != pvVar2) {
        pvVar3 = (void *)((long)pvVar3 + -0x50);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_2[4] = (long)pvVar2;
      operator_delete(pvVar2);
    }
  }
  param_1[1] = lStack_48;
  *param_1 = (long)local_50;
  param_1[2] = (long)local_40;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  return;
}


// ===== 00c10fec  FUN_00c10fec =====

void FUN_00c10fec(void)

{
  FUN_00c10ff4();
  return;
}


// ===== 00c10ff4  FUN_00c10ff4 =====

void FUN_00c10ff4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_38;
  long local_30;
  long local_28;
  
  plVar6 = (long *)*param_1;
  pcVar3 = (code *)plVar6[1];
  if ((plVar6[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar6 + (plVar6[2] >> 1)));
  }
  (*pcVar3)(&local_38);
  pvVar1 = (void *)plVar6[3];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)plVar6[4];
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x333333333333333) >> 4;
    uVar5 = (long)pvVar2 * -0x333333333333333 - 0x10U >> 4;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
      uVar4 = uVar4 & 0xffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar4 * -0x50);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x50);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    plVar6[4] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  plVar6[3] = local_38;
  plVar6[4] = local_30;
  plVar6[5] = local_28;
  FUN_0066f2dc((long)plVar6 + 0x34);
  return;
}


// ===== 00c11100  FUN_00c11100 =====

void FUN_00c11100(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar2 = FUN_007e18fc(param_2);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c111e0;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    (*pcVar3)(plVar1,local_40);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00c111e0  FUN_00c111e0 =====

void FUN_00c111e0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *local_8;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  local_8 = *(long **)plVar3[4];
  *(undefined8 *)plVar3[4] = 0;
  (*pcVar2)(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00c11250  FUN_00c11250 =====

void FUN_00c11250(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c11358;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00c11358  FUN_00c11358 =====

void FUN_00c11358(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00c113d8  FUN_00c113d8 =====

void FUN_00c113d8(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar2 = FUN_007e18fc(param_2);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c114b8;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    (*pcVar3)(plVar1,local_40);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00c114b8  FUN_00c114b8 =====

void FUN_00c114b8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *local_8;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  local_8 = *(long **)plVar3[4];
  *(undefined8 *)plVar3[4] = 0;
  (*pcVar2)(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00c11528  FUN_00c11528 =====

/* WARNING: Removing unreachable block (ram,0x00c115b0) */

void FUN_00c11528(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *param_2;
  local_40 = param_4[2];
  pvStack_48 = (void *)param_4[1];
  local_50 = (void *)*param_4;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_00c14828(param_1,uVar4,uVar1,uVar2,&local_50,*param_5);
  pvVar3 = pvStack_48;
  if (local_50 != (void *)0x0) {
    while (local_50 != pvVar3) {
      pvVar3 = (void *)((long)pvVar3 + -0x18);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_48 = local_50;
    operator_delete(local_50);
  }
  *param_1 = &PTR_FUN_00d4a270;
  param_1[1] = &PTR_FUN_00d4a378;
  param_1[2] = &PTR_FUN_00d4a3a0;
  param_1[3] = &PTR_FUN_00d4a4a0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}


// ===== 00c11624  FUN_00c11624 =====

void FUN_00c11624(void *param_1)

{
  FUN_00c14c3c();
  operator_delete(param_1);
  return;
}


// ===== 00c11654  FUN_00c11654 =====

void FUN_00c11654(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c11674  FUN_00c11674 =====

undefined8 FUN_00c11674(void)

{
  return 0;
}


// ===== 00c11680  FUN_00c11680 =====

void FUN_00c11680(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x3f)) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  return;
}


// ===== 00c116ac  FUN_00c116ac =====

undefined4 FUN_00c116ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}


// ===== 00c116b8  FUN_00c116b8 =====

void FUN_00c116b8(long param_1)

{
  FUN_00d0f740(1,param_1 + 200);
  return;
}


// ===== 00c116dc  FUN_00c116dc =====

bool FUN_00c116dc(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x19);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c11734  FUN_00c11734 =====

bool FUN_00c11734(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 200) == 1;
}


// ===== 00c1174c  FUN_00c1174c =====

void FUN_00c1174c(long param_1)

{
  FUN_00c14c3c(param_1 + -8);
  return;
}


// ===== 00c11758  FUN_00c11758 =====

void FUN_00c11758(long param_1)

{
  FUN_00c14c3c((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c1178c  FUN_00c1178c =====

void FUN_00c1178c(long param_1)

{
  FUN_00d0f740(1,param_1 + 0xb8);
  return;
}


// ===== 00c117b0  FUN_00c117b0 =====

bool FUN_00c117b0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xb8);
  if ((plVar2 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return iVar1 != 1;
}


// ===== 00c11808  FUN_00c11808 =====

void FUN_00c11808(long param_1)

{
  FUN_00c14c3c(param_1 + -0x10);
  return;
}


// ===== 00c11814  FUN_00c11814 =====

void FUN_00c11814(long param_1)

{
  FUN_00c14c3c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00c11848  FUN_00c11848 =====

void FUN_00c11848(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c11860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c11868  FUN_00c11868 =====

undefined8 FUN_00c11868(void)

{
  return 0;
}


// ===== 00c11874  FUN_00c11874 =====

void FUN_00c11874(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x2f)) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  return;
}


// ===== 00c118a0  FUN_00c118a0 =====

undefined4 FUN_00c118a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}


// ===== 00c118ac  FUN_00c118ac =====

void FUN_00c118ac(long param_1)

{
  FUN_00c14c3c(param_1 + -0x18);
  return;
}


// ===== 00c118b8  FUN_00c118b8 =====

void FUN_00c118b8(long param_1)

{
  FUN_00c14c3c((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 00c118ec  FUN_00c118ec =====

/* WARNING: Removing unreachable block (ram,0x00c11974) */

void FUN_00c118ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *param_2;
  local_40 = param_4[2];
  pvStack_48 = (void *)param_4[1];
  local_50 = (void *)*param_4;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_00c1b10c(param_1,uVar4,uVar1,uVar2,&local_50,*param_5);
  pvVar3 = pvStack_48;
  if (local_50 != (void *)0x0) {
    while (local_50 != pvVar3) {
      pvVar3 = (void *)((long)pvVar3 + -0x18);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_48 = local_50;
    operator_delete(local_50);
  }
  *param_1 = &PTR_FUN_00d4a4c8;
  param_1[1] = &PTR_FUN_00d4a5d0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  return;
}


// ===== 00c119dc  FUN_00c119dc =====

void FUN_00c119dc(long param_1)

{
  FUN_00d0f740(1,param_1 + 0xb4);
  return;
}


// ===== 00c11a00  FUN_00c11a00 =====

bool FUN_00c11a00(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0xb4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c11a58  FUN_00c11a58 =====

void FUN_00c11a58(void *param_1)

{
  FUN_00c1b4b4();
  operator_delete(param_1);
  return;
}


// ===== 00c11a88  FUN_00c11a88 =====

void FUN_00c11a88(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x58);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c11aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c11aa8  FUN_00c11aa8 =====

undefined8 FUN_00c11aa8(void)

{
  return 1;
}


// ===== 00c11ab4  FUN_00c11ab4 =====

void FUN_00c11ab4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x3f)) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  return;
}


// ===== 00c11ae0  FUN_00c11ae0 =====

undefined4 FUN_00c11ae0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}


// ===== 00c11aec  FUN_00c11aec =====

bool FUN_00c11aec(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0xb4) == 1;
}


// ===== 00c11b04  FUN_00c11b04 =====

void FUN_00c11b04(long param_1)

{
  FUN_00c1b4b4(param_1 + -8);
  return;
}


// ===== 00c11b10  FUN_00c11b10 =====

void FUN_00c11b10(long param_1)

{
  FUN_00c1b4b4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c11b44  FUN_00c11b44 =====

long FUN_00c11b44(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    local_50 = (void *)0x0;
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 4;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar5 = 0x7ffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3b != 0) goto LAB_00c11cbc;
      local_50 = operator_new(uVar5 << 5);
    }
    local_38 = (void *)((long)local_50 + uVar5 * 0x20);
    lVar7 = (long)local_50 + lVar7;
    local_48 = lVar7;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    (**(code **)(param_2 + 0x10))(1,param_2,lVar7);
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
    local_40 = lVar7 + 0x20;
    FUN_00c11cc0(param_1,&local_50);
    lVar3 = local_48;
    lVar6 = param_1[1];
    lVar7 = local_40;
    while( true ) {
      if (lVar3 == lVar7) {
        if (local_50 != (void *)0x0) {
          local_40 = lVar7;
          operator_delete(local_50);
        }
        return lVar6;
      }
      lVar2 = lVar7 + -0x20;
      if (lVar2 == 0) break;
      (**(code **)(lVar7 + -0x10))(0,lVar2,lVar2);
      lVar7 = lVar2;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00c11dd8();
LAB_00c11cbc:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c11cc0  FUN_00c11cc0 =====

void FUN_00c11cc0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  lVar5 = param_1[1];
  lVar3 = param_2[1] + (lVar2 - lVar5);
  lVar1 = lVar2;
  lVar4 = lVar3;
  if (lVar5 != lVar2) {
    do {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      (**(code **)(lVar1 + 0x10))(1,lVar1,lVar4);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(code **)(lVar1 + 0x10) = FUN_00433984;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + 0x20;
    } while (lVar1 != lVar5);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)(lVar2 + 0x10))(0,lVar2,lVar2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar5);
  }
  param_2[1] = lVar3;
  lVar1 = *param_1;
  lVar3 = param_1[2];
  param_1[1] = lVar1;
  lVar5 = param_2[1];
  lVar2 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar5;
  param_1[2] = lVar2;
  param_2[2] = lVar1;
  param_2[3] = lVar3;
  *param_2 = lVar1;
  param_2[1] = lVar1;
  return;
}


// ===== 00c11dd8  FUN_00c11dd8 =====

void FUN_00c11dd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c11df0  FUN_00c11df0 =====

long * FUN_00c11df0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar6 = *param_1;
  lVar16 = param_1[1];
  plVar15 = (long *)(lVar16 - lVar6);
  uVar1 = ((long)plVar15 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bf4944();
  }
  uVar8 = param_1[2] - lVar6 >> 2;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
    plVar2 = plVar15;
  }
  else {
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar8 << 3);
    plVar2 = (long *)((long)pvVar4 + (long)plVar15);
  }
  if (plVar2 == (long *)0x0) {
LAB_00c12064:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar5 = (undefined8 *)*param_2;
  *plVar2 = (long)puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  plVar13 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  lVar17 = (long)plVar3 - (long)plVar13;
  plVar14 = (long *)((long)plVar2 - ((long)plVar3 - (long)plVar13));
  if (lVar17 != 0) {
    uVar10 = lVar17 - 8U >> 3;
    uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
    uVar1 = uVar12;
    if (uVar10 <= uVar12) {
      uVar1 = uVar10;
    }
    plVar7 = plVar13;
    plVar9 = plVar14;
    if (0x3b < uVar1) {
      if (uVar10 <= uVar12) {
        uVar12 = uVar10;
      }
      if ((((((int)lVar6 - (int)((long)pvVar4 + lVar16) | (int)plVar3 - (int)plVar13) & 7U) == 0) &&
          (plVar13 <= plVar13 + uVar12)) && (plVar14 <= plVar14 + uVar12)) {
        uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
        if (uVar10 <= uVar12) {
          uVar12 = uVar10;
        }
        if (((long *)((long)pvVar4 + ((uVar12 * 8 + lVar16) - (lVar17 + lVar6)) + 8) <= plVar13) ||
           (plVar13 + uVar12 + 1 <= plVar14)) {
          uVar12 = uVar1 + 1 & 3;
          uVar10 = 4;
          if (uVar12 != 0) {
            uVar10 = uVar12;
          }
          lVar6 = (uVar1 + 1) - uVar10;
          plVar7 = plVar13 + lVar6;
          plVar9 = plVar14 + lVar6;
          plVar15 = (long *)((long)(plVar15 + -(lVar17 >> 3)) + (long)pvVar4 + 0x10);
          plVar11 = plVar13 + 2;
          do {
            lVar17 = plVar11[-1];
            lVar16 = plVar11[-2];
            lVar19 = plVar11[1];
            lVar18 = *plVar11;
            lVar6 = lVar6 + -4;
            plVar11[-1] = 0;
            plVar11[-2] = 0;
            plVar11[1] = 0;
            *plVar11 = 0;
            plVar15[-1] = lVar17;
            plVar15[-2] = lVar16;
            plVar15[1] = lVar19;
            *plVar15 = lVar18;
            plVar15 = plVar15 + 4;
            plVar11 = plVar11 + 4;
          } while (lVar6 != 0);
        }
      }
    }
    do {
      if (plVar9 == (long *)0x0) goto LAB_00c12064;
      lVar6 = *plVar7;
      plVar15 = plVar7 + 1;
      *plVar7 = 0;
      *plVar9 = lVar6;
      plVar7 = plVar15;
      plVar9 = plVar9 + 1;
    } while (plVar15 != plVar3);
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar13 != (long *)0x0) {
        (**(code **)(*(long *)*plVar13 + 8))();
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
    plVar13 = (long *)*param_1;
  }
  *param_1 = (long)plVar14;
  param_1[1] = (long)(plVar2 + 1);
  param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar2 + 1;
}


// ===== 00c12094  FUN_00c12094 =====

long * FUN_00c12094(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar6 = *param_1;
  lVar16 = param_1[1];
  plVar15 = (long *)(lVar16 - lVar6);
  uVar1 = ((long)plVar15 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      plVar2 = plVar15;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00c12334;
      pvVar4 = operator_new(uVar8 << 3);
      plVar2 = (long *)((long)pvVar4 + (long)plVar15);
    }
    if (plVar2 == (long *)0x0) {
LAB_00c12308:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar5 = (undefined8 *)*param_2;
    *plVar2 = (long)puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    plVar13 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar17 = (long)plVar3 - (long)plVar13;
    plVar14 = (long *)((long)plVar2 - ((long)plVar3 - (long)plVar13));
    if (lVar17 != 0) {
      uVar10 = lVar17 - 8U >> 3;
      uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
      uVar1 = uVar12;
      if (uVar10 <= uVar12) {
        uVar1 = uVar10;
      }
      plVar7 = plVar13;
      plVar9 = plVar14;
      if (0x3b < uVar1) {
        if (uVar10 <= uVar12) {
          uVar12 = uVar10;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar16) | (int)plVar3 - (int)plVar13) & 7U) == 0)
            && (plVar13 <= plVar13 + uVar12)) && (plVar14 <= plVar14 + uVar12)) {
          uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
          if (uVar10 <= uVar12) {
            uVar12 = uVar10;
          }
          if (((long *)((long)pvVar4 + ((uVar12 * 8 + lVar16) - (lVar17 + lVar6)) + 8) <= plVar13)
             || (plVar13 + uVar12 + 1 <= plVar14)) {
            uVar12 = uVar1 + 1 & 3;
            uVar10 = 4;
            if (uVar12 != 0) {
              uVar10 = uVar12;
            }
            lVar6 = (uVar1 + 1) - uVar10;
            plVar7 = plVar13 + lVar6;
            plVar9 = plVar14 + lVar6;
            plVar15 = (long *)((long)(plVar15 + -(lVar17 >> 3)) + (long)pvVar4 + 0x10);
            plVar11 = plVar13 + 2;
            do {
              lVar17 = plVar11[-1];
              lVar16 = plVar11[-2];
              lVar19 = plVar11[1];
              lVar18 = *plVar11;
              lVar6 = lVar6 + -4;
              plVar11[-1] = 0;
              plVar11[-2] = 0;
              plVar11[1] = 0;
              *plVar11 = 0;
              plVar15[-1] = lVar17;
              plVar15[-2] = lVar16;
              plVar15[1] = lVar19;
              *plVar15 = lVar18;
              plVar15 = plVar15 + 4;
              plVar11 = plVar11 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00c12308;
        lVar6 = *plVar7;
        plVar15 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar15;
        plVar9 = plVar9 + 1;
      } while (plVar15 != plVar3);
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar13 != (long *)0x0) {
          (**(code **)(*(long *)*plVar13 + 8))();
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar3);
      plVar13 = (long *)*param_1;
    }
    *param_1 = (long)plVar14;
    param_1[1] = (long)(plVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar13 != (long *)0x0) {
      operator_delete(plVar13);
    }
    return plVar2 + 1;
  }
  FUN_00bf495c();
LAB_00c12334:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c12338  FUN_00c12338 =====

long FUN_00c12338(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 != param_2) {
    do {
      uVar2 = FUN_0066cffc(param_1,param_3);
      if ((uVar2 & 1) != 0) {
        bVar1 = *(byte *)(param_3 + 0x6c);
        if ((bVar1 & *(byte *)(param_1 + 0x6c)) == 0) {
          if (*(byte *)(param_1 + 0x6c) == bVar1) goto LAB_00c123b4;
        }
        else {
          if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(int *)(param_1 + 0x68) == *(int *)(param_3 + 0x68)) {
LAB_00c123b4:
            uVar2 = *(ulong *)(param_1 + 0x70) >> 1;
            pcVar3 = (char *)(param_1 + 0x78);
            if ((*(ulong *)(param_1 + 0x70) & 1) != 0) {
              pcVar3 = *(char **)(param_1 + 0x78);
            }
            if (uVar2 == *(ulong *)(param_3 + 0x70) >> 1) {
              if (uVar2 == 0) {
                return param_1;
              }
              pcVar4 = (char *)(param_3 + 0x78);
              if ((*(ulong *)(param_3 + 0x70) & 1) != 0) {
                pcVar4 = *(char **)(param_3 + 0x78);
              }
              while( true ) {
                if (*pcVar3 != *pcVar4) break;
                uVar2 = uVar2 - 1;
                pcVar3 = pcVar3 + 1;
                pcVar4 = pcVar4 + 1;
                if (uVar2 == 0) {
                  return param_1;
                }
              }
            }
          }
        }
      }
      param_1 = param_1 + 0xa0;
    } while (param_1 != param_2);
  }
  return param_1;
}


// ===== 00c1242c  FUN_00c1242c =====

void FUN_00c1242c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)*param_1;
  if ((ulong)((param_1[2] - (long)puVar3 >> 3) * -0x7b425ed097b425ed) < param_2) {
    if (0x12f684bda12f684 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    puVar6 = (undefined8 *)param_1[1];
    pvVar2 = operator_new(param_2 * 0xd8);
    lVar1 = (long)puVar6 - (long)puVar3;
    puVar4 = puVar3;
    pvVar5 = pvVar2;
    if (lVar1 != 0) {
      do {
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00890aa0(pvVar5,puVar4);
        puVar4 = puVar4 + 0x1b;
        pvVar5 = (void *)((long)pvVar5 + 0xd8);
      } while (puVar4 != puVar6);
      do {
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar4 = puVar3 + 0x1b;
        (**(code **)*puVar3)(puVar3);
        puVar3 = puVar4;
      } while (puVar4 != puVar6);
      puVar3 = (undefined8 *)*param_1;
    }
    *param_1 = pvVar2;
    param_1[1] = (long)pvVar2 + lVar1;
    param_1[2] = (void *)((long)pvVar2 + param_2 * 0xd8);
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete(puVar3);
      return;
    }
  }
  return;
}


// ===== 00c12584  FUN_00c12584 =====

ulong FUN_00c12584(long *param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *local_68;
  
  if (0 < param_5) {
    uVar3 = param_1[1];
    if (((long)(param_1[2] - uVar3) >> 3) * -0x7b425ed097b425ed < param_5) {
      lVar8 = *param_1;
      uVar3 = param_5 + ((long)(uVar3 - lVar8) >> 3) * -0x7b425ed097b425ed;
      if (0x12f684bda12f684 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0088fd20();
      }
      local_80 = (void *)0x0;
      lVar1 = param_1[2] - lVar8 >> 3;
      uVar2 = lVar1 * 0x97b425ed097b426;
      if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
        uVar2 = uVar3;
      }
      if (0x97b425ed097b41 < (ulong)(lVar1 * -0x7b425ed097b425ed)) {
        uVar2 = 0x12f684bda12f684;
      }
      if (uVar2 != 0) {
        if (0x12f684bda12f684 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_005d55a4();
        }
        local_80 = operator_new(uVar2 * 0xd8);
      }
      local_68 = (void *)((long)local_80 + uVar2 * 0xd8);
      lVar1 = param_5 * 0xd8;
      puVar6 = (undefined8 *)((long)local_80 + (param_2 - lVar8));
      puVar7 = puVar6;
      local_78 = puVar6;
      if (lVar1 != 0) {
        puVar7 = puVar6 + param_5 * 0x1b;
        do {
          if (puVar6 == (undefined8 *)0x0) {
LAB_00c128dc:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830(puVar6,param_3);
          lVar1 = lVar1 + -0xd8;
          puVar6 = puVar6 + 0x1b;
          param_3 = param_3 + 0xd8;
        } while (lVar1 != 0);
      }
      local_70 = puVar7;
      param_2 = FUN_00c1290c(param_1,&local_80,param_2);
      puVar7 = local_78;
      puVar6 = local_70;
      while (puVar7 != puVar6) {
        puVar6 = puVar6 + -0x1b;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar6)(puVar6);
      }
      if (local_80 != (void *)0x0) {
        local_70 = puVar6;
        operator_delete(local_80);
      }
    }
    else {
      lVar8 = uVar3 - param_2;
      if ((lVar8 >> 3) * -0x7b425ed097b425ed < param_5) {
        uVar2 = uVar3;
        uVar4 = uVar3;
        for (lVar1 = param_3 + lVar8; lVar1 != param_4; lVar1 = lVar1 + 0xd8) {
          if (uVar2 == 0) goto LAB_00c128dc;
          FUN_00890830(uVar2,lVar1);
          uVar2 = uVar2 + 0xd8;
          uVar4 = uVar4 + 0xd8;
        }
        param_1[1] = uVar4;
        if (0 < lVar8) {
          uVar5 = uVar4 + param_5 * -0xd8;
          uVar10 = uVar4;
          if (uVar5 < uVar3) {
            uVar9 = uVar4 + param_5 * -0xd8;
            do {
              if (uVar10 == 0) goto LAB_00c128dc;
              FUN_00890aa0(uVar10,uVar9);
              uVar9 = uVar9 + 0xd8;
              uVar10 = uVar10 + 0xd8;
            } while (uVar9 < uVar3);
          }
          param_1[1] = uVar10;
          uVar3 = param_2;
          if (uVar2 != param_2 + param_5 * 0xd8) {
            do {
              uVar4 = uVar4 - 0xd8;
              uVar5 = uVar5 - 0xd8;
              FUN_00890f48(uVar4,uVar5);
            } while (uVar5 != param_2);
          }
          do {
            FUN_00890db8(uVar3,param_3);
            lVar8 = lVar8 + -0xd8;
            param_3 = param_3 + 0xd8;
            uVar3 = uVar3 + 0xd8;
          } while (lVar8 != 0);
        }
      }
      else {
        uVar4 = uVar3 + param_5 * -0xd8;
        uVar2 = uVar3;
        if (uVar4 < uVar3) {
          uVar10 = uVar3 + param_5 * -0xd8;
          do {
            if (uVar2 == 0) goto LAB_00c128dc;
            FUN_00890aa0(uVar2,uVar10);
            uVar10 = uVar10 + 0xd8;
            uVar2 = uVar2 + 0xd8;
          } while (uVar10 < uVar3);
        }
        param_1[1] = uVar2;
        if (uVar3 != param_2 + param_5 * 0xd8) {
          do {
            uVar3 = uVar3 - 0xd8;
            uVar4 = uVar4 - 0xd8;
            FUN_00890f48(uVar3,uVar4);
          } while (uVar4 != param_2);
        }
        param_5 = param_5 * 0xd8;
        uVar3 = param_2;
        do {
          FUN_00890db8(uVar3,param_3);
          param_5 = param_5 + -0xd8;
          param_3 = param_3 + 0xd8;
          uVar3 = uVar3 + 0xd8;
        } while (param_5 != 0);
      }
    }
  }
  return param_2;
}


// ===== 00c1290c  FUN_00c1290c =====

undefined8 FUN_00c1290c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar8 = (undefined8 *)param_1[1];
  uVar1 = param_2[1];
  lVar7 = param_2[2];
  puVar3 = param_3;
  if (param_3 != puVar8) {
    do {
      if (lVar7 == 0) goto LAB_00c12a58;
      FUN_00890aa0(lVar7,puVar3);
      puVar3 = puVar3 + 0x1b;
      lVar7 = lVar7 + 0xd8;
      puVar2 = param_3;
    } while (puVar3 != puVar8);
    do {
      if (puVar2 == (undefined8 *)0x0) goto LAB_00c12a6c;
      puVar3 = puVar2 + 0x1b;
      (**(code **)*puVar2)();
      puVar2 = puVar3;
    } while (puVar3 != puVar8);
    lVar7 = param_2[2];
    puVar3 = (undefined8 *)param_1[1];
  }
  param_2[2] = (long)puVar3 + (lVar7 - (long)param_3);
  param_1[1] = param_3;
  puVar8 = (undefined8 *)*param_1;
  lVar7 = param_2[1] + ((long)puVar8 - (long)param_3);
  puVar3 = puVar8;
  lVar9 = lVar7;
  if ((long)puVar8 - (long)param_3 != 0) {
    do {
      if (lVar9 == 0) {
LAB_00c12a58:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00890aa0(lVar9,puVar3);
      puVar3 = puVar3 + 0x1b;
      lVar9 = lVar9 + 0xd8;
    } while (puVar3 != param_3);
    do {
      if (puVar8 == (undefined8 *)0x0) {
LAB_00c12a6c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar3 = puVar8 + 0x1b;
      (**(code **)*puVar8)(puVar8);
      puVar8 = puVar3;
    } while (puVar3 != param_3);
  }
  param_2[1] = lVar7;
  uVar4 = *param_1;
  uVar6 = param_1[2];
  param_1[1] = uVar4;
  uVar10 = param_2[1];
  uVar5 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar10;
  param_1[2] = uVar5;
  param_2[1] = uVar4;
  param_2[2] = uVar4;
  param_2[3] = uVar6;
  *param_2 = uVar4;
  return uVar1;
}


// ===== 00c12a80  FUN_00c12a80 =====

long FUN_00c12a80(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  local_50 = (void *)0x0;
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * -0x6666666666666666;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar5 = 0x666666666666666;
  }
  if (uVar5 != 0) {
    if (0x666666666666666 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_50 = operator_new(uVar5 * 0x28);
  }
  puVar1 = (undefined8 *)((long)local_50 + lVar6);
  local_38 = (void *)((long)local_50 + uVar5 * 0x28);
  local_48 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar1,*param_2,param_2[1]);
    }
    else {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar8;
      *puVar1 = uVar7;
    }
    uVar7 = param_2[3];
    local_40 = puVar1 + 5;
    puVar1[4] = param_2[4];
    puVar1[3] = uVar7;
    FUN_00b614d4(param_1,&local_50);
    puVar2 = local_48;
    lVar6 = param_1[1];
    puVar1 = local_40;
    while( true ) {
      if (puVar2 == puVar1) {
        if (local_50 != (void *)0x0) {
          local_40 = puVar1;
          operator_delete(local_50);
        }
        return lVar6;
      }
      puVar1 = puVar1 + -5;
      if (puVar1 == (undefined8 *)0x0) break;
      FUN_00668d5c(puVar1);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c12c08  FUN_00c12c08 =====

void FUN_00c12c08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c12c20  FUN_00c12c20 =====

void FUN_00c12c20(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  puVar1 = (undefined8 *)(param_2[1] + (lVar2 - lVar3));
  if (lVar3 != lVar2) {
    lVar4 = lVar2 + 0x10;
    puVar5 = puVar1;
    do {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar8 = *(undefined8 *)(lVar4 + -8);
      uVar6 = *(undefined8 *)(lVar4 + -0x10);
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)(puVar5 + 0x17) = 0;
      puVar5[1] = uVar8;
      *puVar5 = uVar6;
      if (*(char *)(lVar4 + 0xa8) == '\x01') {
        FUN_0066953c(puVar5 + 2,lVar4);
        *(undefined1 *)(puVar5 + 0x17) = 1;
      }
      lVar7 = lVar4 + 0xb0;
      puVar5 = puVar5 + 0x18;
      lVar4 = lVar4 + 0xc0;
    } while (lVar7 != lVar3);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)(lVar2 + 0xb8) == '\x01') {
        FUN_0066981c(lVar2 + 0x10);
      }
      lVar2 = lVar2 + 0xc0;
    } while (lVar2 != lVar3);
  }
  param_2[1] = (long)puVar1;
  lVar2 = *param_1;
  lVar4 = param_1[2];
  param_1[1] = lVar2;
  lVar7 = param_2[1];
  lVar3 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar7;
  param_1[2] = lVar3;
  param_2[2] = lVar2;
  param_2[3] = lVar4;
  *param_2 = lVar2;
  param_2[1] = lVar2;
  return;
}


// ===== 00c12d54  FUN_00c12d54 =====

void FUN_00c12d54(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *local_48;
  
  plVar6 = (long *)param_1[2];
  lVar8 = plVar6[1] - *plVar6;
  uVar3 = (lVar8 >> 6) * -0x5555555555555555 + 1;
  if (uVar3 < 0x155555555555556) {
    puVar7 = (undefined8 *)param_1[1];
    local_60 = (void *)0x0;
    lVar4 = plVar6[2] - *plVar6 >> 6;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0xaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = 0x155555555555555;
    }
    if (uVar5 != 0) {
      if (0x155555555555555 < uVar5) goto LAB_00c12ef8;
      local_60 = operator_new(uVar5 * 0xc0);
    }
    puVar1 = (undefined8 *)((long)local_60 + lVar8);
    local_48 = (void *)((long)local_60 + uVar5 * 0xc0);
    local_58 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar10 = puVar7[1];
    uVar9 = *puVar7;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[1] = uVar10;
    *puVar1 = uVar9;
    if (*(char *)(puVar7 + 0x17) == '\x01') {
      FUN_0066953c(puVar1 + 2,puVar7 + 2);
      *(undefined1 *)(puVar1 + 0x17) = 1;
    }
    local_50 = puVar1 + 0x18;
    FUN_00c12c20(plVar6,&local_60);
    puVar1 = local_58;
    lVar8 = plVar6[1];
    puVar7 = local_50;
    while( true ) {
      puVar2 = puVar7;
      if (puVar1 == puVar2) {
        if (local_60 != (void *)0x0) {
          operator_delete(local_60);
        }
        *(long *)*param_1 = lVar8;
        return;
      }
      puVar7 = puVar2 + -0x18;
      if (puVar7 == (undefined8 *)0x0) break;
      if (*(char *)(puVar2 + -1) == '\x01') {
        FUN_0066981c(puVar2 + -0x16);
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00c12c08();
LAB_00c12ef8:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c12efc  FUN_00c12efc =====

void FUN_00c12efc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *local_48;
  
  lVar8 = *param_1;
  iVar3 = *(int *)(lVar8 + 0x3c);
  plVar4 = (long *)FUN_00c0cbb4(lVar8);
  lVar2 = param_1[2];
  lVar9 = param_1[5];
  uVar10 = *(undefined8 *)param_1[1];
  if (iVar3 == 0) {
    lVar11 = param_1[3];
    plVar5 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4);
    uVar12 = (**(code **)(*plVar5 + 0x30))(plVar5,lVar8 + 8,uVar10,lVar2,lVar11,lVar9);
    lVar13 = 0x38;
    lVar7 = 0x20;
  }
  else {
    lVar11 = param_1[4];
    uVar12 = *(undefined8 *)param_1[6];
    plVar5 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4);
    uVar12 = (**(code **)(*plVar5 + 0x18))(plVar5,lVar8 + 8,uVar10,lVar2,lVar11,lVar9,uVar12);
    lVar13 = 0x20;
    lVar7 = 0x28;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + lVar7))(plVar4);
  uVar10 = (**(code **)(*plVar4 + lVar13))(plVar4,lVar8 + 8,uVar10,lVar2,lVar11,lVar9);
  plVar4 = *(long **)(lVar8 + 0x1f0);
  *(undefined8 *)(lVar8 + 0x1f0) = uVar12;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(lVar8 + 0x1f8);
  *(undefined8 *)(lVar8 + 0x1f8) = uVar10;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_00c130d0(&local_48,*(undefined4 *)(lVar8 + 0x3c),lVar8 + 8,*(undefined8 *)(lVar8 + 0x100),
               *(undefined8 *)(lVar8 + 0x110),*(undefined8 *)(lVar8 + 0x118),
               *(undefined8 *)param_1[7],((undefined8 *)param_1[7])[1],
               *(undefined8 *)(lVar8 + 0x1f0));
  plVar4 = local_48;
  puVar1 = *(undefined8 **)(lVar8 + 0x58);
  if (puVar1 < *(undefined8 **)(lVar8 + 0x60)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_48 = (long *)0x0;
    puVar6 = puVar1 + 1;
    *puVar1 = plVar4;
  }
  else {
    puVar6 = (undefined8 *)FUN_00c0f428(lVar8 + 0x50,&local_48);
  }
  *(undefined8 **)(lVar8 + 0x58) = puVar6;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  return;
}


// ===== 00c130d0  FUN_00c130d0 =====

void FUN_00c130d0(undefined8 *param_1,int param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long local_18;
  
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  if (param_2 == 0) {
    FUN_00c24a94(&local_18,param_3,uVar2,*(undefined8 *)(param_4 + 0x30),param_7,param_8,param_5,
                 param_6);
    lVar3 = 0;
    if (local_18 != 0) {
      lVar3 = local_18 + 8;
    }
  }
  else {
    FUN_00c25b68(&local_18,param_3,uVar2,*(undefined8 *)(param_4 + 0x30),param_7,param_8,param_6,
                 param_9);
    lVar3 = local_18;
  }
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[2] = uVar2;
  puVar1[3] = lVar3;
  *(undefined4 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_00d499e0;
  puVar1[1] = &PTR_FUN_00d49ab8;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 4);
  }
  return;
}


// ===== 00c131a0  FUN_00c131a0 =====

void FUN_00c131a0(undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  void *__dest;
  void *pvVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  undefined4 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long *local_a0 [2];
  code *local_90;
  code *pcStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  void *local_78;
  void *local_70;
  void *local_68;
  
  plVar16 = (long *)*param_1;
  plVar13 = (long *)plVar16[0x3e];
  if (plVar13 == (long *)0x0) {
    plVar15 = plVar16 + 1;
    iVar2 = (**(code **)(*plVar16 + 0x20))(plVar16);
    plVar3 = (long *)FUN_00c0cbb4(plVar16);
    uVar5 = param_1[4];
    uVar17 = param_1[5];
    uVar18 = *(undefined8 *)param_1[3];
    if (iVar2 == 0) {
      uVar21 = param_1[1];
      plVar13 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,plVar15,uVar18,uVar5,uVar21,uVar17);
      lVar11 = 0x38;
      lVar20 = 0x20;
    }
    else {
      uVar21 = param_1[2];
      uVar7 = *(undefined8 *)param_1[6];
      plVar13 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x18))
                                  (plVar13,plVar15,uVar18,uVar5,uVar21,uVar17,uVar7);
      lVar11 = 0x20;
      lVar20 = 0x28;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + lVar20))(plVar3);
    plVar14 = (long *)(**(code **)(*plVar3 + lVar11))(plVar3,plVar15,uVar18,uVar5,uVar21,uVar17);
    plVar15 = (long *)plVar16[0xb];
    for (plVar3 = (long *)plVar16[10]; plVar3 != plVar15; plVar3 = plVar3 + 1) {
      (**(code **)(**(long **)(*plVar3 + 0x18) + 0xc0))(*(long **)(*plVar3 + 0x18),plVar13);
    }
    plVar15 = (long *)plVar16[0xe];
    for (plVar3 = (long *)plVar16[0xd]; plVar3 != plVar15; plVar3 = plVar3 + 1) {
      (**(code **)(**(long **)(*plVar3 + 0x20) + 0xa0))(*(long **)(*plVar3 + 0x20),plVar14);
    }
  }
  else {
    plVar14 = (long *)plVar16[0x3f];
    plVar16[0x3e] = 0;
    plVar16[0x3f] = 0;
    iVar2 = (**(code **)(*plVar16 + 0x20))(plVar16);
    if (iVar2 == 0) {
      plVar3 = (long *)(**(code **)(*plVar13 + 0x18))(plVar13);
      (**(code **)(*plVar3 + 0xf0))(plVar3,param_1[1]);
      plVar3 = (long *)(**(code **)(*plVar14 + 0x18))(plVar14);
      uVar5 = param_1[1];
      pcVar6 = *(code **)(*plVar3 + 0x100);
    }
    else {
      iVar2 = (**(code **)(*plVar16 + 0x20))(plVar16);
      if (iVar2 != 1) goto LAB_00c133b8;
      plVar3 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13);
      uVar5 = param_1[2];
      pcVar6 = *(code **)(*plVar3 + 200);
    }
    (*pcVar6)(plVar3,uVar5);
  }
LAB_00c133b8:
  local_90 = FUN_004473ec;
  pcStack_88 = FUN_00c13814;
  local_a0[0] = plVar14;
  (**(code **)(*plVar13 + 0xa8))(plVar13,local_a0);
  (*local_90)(0,local_a0,local_a0);
  iVar2 = (**(code **)(*plVar16 + 0x20))(plVar16);
  puVar12 = (undefined4 *)param_1[5];
  lVar20 = plVar16[0x20];
  pvVar4 = *(void **)(puVar12 + 2);
  pvVar10 = *(void **)(puVar12 + 4);
  uVar5 = *(undefined8 *)param_1[8];
  uVar17 = ((undefined8 *)param_1[8])[1];
  uVar1 = *(undefined1 *)param_1[9];
  uVar19 = (long)pvVar10 - (long)pvVar4;
  if (iVar2 == 0) {
    if (pvVar10 == pvVar4) {
      __dest = (void *)0x0;
      pvVar10 = (void *)0x0;
    }
    else {
      if ((long)uVar19 < 0) goto LAB_00c13810;
      __dest = operator_new(uVar19);
      pvVar10 = (void *)((long)__dest + uVar19);
      memcpy(__dest,pvVar4,uVar19);
    }
    uVar7 = *(undefined8 *)(lVar20 + 0x20);
    uVar18 = *(undefined8 *)(lVar20 + 0x30);
    uVar21 = *(undefined8 *)(lVar20 + 0x38);
    pvVar4 = operator_new(0x2f0);
    local_80 = *puVar12;
    local_7c = *(undefined1 *)(puVar12 + 1);
    uVar19 = (long)pvVar10 - (long)__dest;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_78 = (void *)0x0;
    if (uVar19 != 0) {
      if ((long)uVar19 < 0) goto LAB_00c13810;
      local_78 = operator_new(uVar19);
      pvVar8 = (void *)((long)local_78 + uVar19);
      local_68 = pvVar8;
      memcpy(local_78,__dest,uVar19);
      local_70 = pvVar8;
    }
    FUN_00c2e430(pvVar4,uVar18,uVar7,uVar21,plVar13,plVar14,uVar5,uVar17,uVar1,&local_80,
                 lVar20 + 0x50,uVar19);
    if (local_78 == (void *)0x0) {
LAB_00c13750:
      plVar13 = *(long **)param_1[7];
      *(void **)param_1[7] = pvVar4;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
      if (__dest == (void *)0x0) {
        return;
      }
      uVar9 = (ulong)((long)pvVar10 + ((long)pvVar10 << 0x3f) + -2) >> 1;
      uVar19 = (ulong)(((long)__dest - (long)pvVar10 << 0x3f) - ((long)__dest - (long)pvVar10)) >> 1
      ;
      if (uVar9 <= uVar19) {
        uVar19 = uVar9;
      }
      if ((1 < uVar19) && ((((int)__dest - (uint)pvVar10 | (uint)pvVar10) & 1) == 0)) {
        uVar19 = uVar19 & 0x7ffffffffffffffe;
        pvVar10 = (void *)((long)pvVar10 + uVar19 * -2);
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      do {
        if (pvVar10 == __dest) goto LAB_00c137e0;
        pvVar10 = (void *)((long)pvVar10 + -2);
      } while (pvVar10 != (void *)0x0);
    }
    else {
      uVar9 = (ulong)((long)local_70 + ((long)local_70 << 0x3f) + -2) >> 1;
      uVar19 = (ulong)(((long)local_78 - (long)local_70 << 0x3f) - ((long)local_78 - (long)local_70)
                      ) >> 1;
      if (uVar9 <= uVar19) {
        uVar19 = uVar9;
      }
      pvVar8 = local_70;
      if ((1 < uVar19) && ((((int)local_78 - (uint)local_70 | (uint)local_70) & 1) == 0)) {
        uVar19 = uVar19 & 0x7ffffffffffffffe;
        pvVar8 = (void *)((long)local_70 + uVar19 * -2);
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      do {
        if (pvVar8 == local_78) {
          local_70 = local_78;
          operator_delete(local_78);
          goto LAB_00c13750;
        }
        pvVar8 = (void *)((long)pvVar8 + -2);
      } while (pvVar8 != (void *)0x0);
    }
  }
  else {
    if (pvVar10 == pvVar4) {
      __dest = (void *)0x0;
      pvVar10 = (void *)0x0;
    }
    else {
      if ((long)uVar19 < 0) goto LAB_00c13810;
      __dest = operator_new(uVar19);
      pvVar10 = (void *)((long)__dest + uVar19);
      memcpy(__dest,pvVar4,uVar19);
    }
    uVar7 = *(undefined8 *)(lVar20 + 0x20);
    uVar18 = *(undefined8 *)(lVar20 + 0x30);
    uVar21 = *(undefined8 *)(lVar20 + 0x38);
    pvVar4 = operator_new(0x2a0);
    local_80 = *puVar12;
    local_7c = *(undefined1 *)(puVar12 + 1);
    uVar19 = (long)pvVar10 - (long)__dest;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_78 = (void *)0x0;
    if (uVar19 != 0) {
      if ((long)uVar19 < 0) {
LAB_00c13810:
                    /* WARNING: Subroutine does not return */
        FUN_005d4754();
      }
      local_78 = operator_new(uVar19);
      pvVar8 = (void *)((long)local_78 + uVar19);
      local_68 = pvVar8;
      memcpy(local_78,__dest,uVar19);
      local_70 = pvVar8;
    }
    FUN_00c2faa0(pvVar4,uVar18,uVar7,uVar21,plVar13,plVar14,uVar5,uVar17,uVar1,&local_80,
                 lVar20 + 0x50,uVar19);
    if (local_78 == (void *)0x0) {
LAB_00c136c0:
      plVar13 = *(long **)param_1[7];
      *(void **)param_1[7] = pvVar4;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
      if (__dest == (void *)0x0) {
        return;
      }
      uVar9 = (ulong)((long)pvVar10 + ((long)pvVar10 << 0x3f) + -2) >> 1;
      uVar19 = (ulong)(((long)__dest - (long)pvVar10 << 0x3f) - ((long)__dest - (long)pvVar10)) >> 1
      ;
      if (uVar9 <= uVar19) {
        uVar19 = uVar9;
      }
      if ((1 < uVar19) && ((((int)__dest - (uint)pvVar10 | (uint)pvVar10) & 1) == 0)) {
        uVar19 = uVar19 & 0x7ffffffffffffffe;
        pvVar10 = (void *)((long)pvVar10 + uVar19 * -2);
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      do {
        if (pvVar10 == __dest) {
LAB_00c137e0:
          operator_delete(__dest);
          return;
        }
        pvVar10 = (void *)((long)pvVar10 + -2);
      } while (pvVar10 != (void *)0x0);
    }
    else {
      uVar9 = (ulong)((long)local_70 + ((long)local_70 << 0x3f) + -2) >> 1;
      uVar19 = (ulong)(((long)local_78 - (long)local_70 << 0x3f) - ((long)local_78 - (long)local_70)
                      ) >> 1;
      if (uVar9 <= uVar19) {
        uVar19 = uVar9;
      }
      pvVar8 = local_70;
      if ((1 < uVar19) && ((((int)local_78 - (uint)local_70 | (uint)local_70) & 1) == 0)) {
        uVar19 = uVar19 & 0x7ffffffffffffffe;
        pvVar8 = (void *)((long)local_70 + uVar19 * -2);
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      do {
        if (pvVar8 == local_78) {
          local_70 = local_78;
          operator_delete(local_78);
          goto LAB_00c136c0;
        }
        pvVar8 = (void *)((long)pvVar8 + -2);
      } while (pvVar8 != (void *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c13814  FUN_00c13814 =====

void FUN_00c13814(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c13824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x58))();
  return;
}


// ===== 00c13828  FUN_00c13828 =====

void FUN_00c13828(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *local_20;
  ulong uStack_18;
  
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_20 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_20 = param_2;
  }
  uStack_18 = param_2[1];
  if (-1 < (char)bVar1) {
    uStack_18 = (ulong)bVar1;
  }
  (**(code **)(*param_1 + 0x18))(*param_1,&local_20);
  return;
}


// ===== 00c13874  FUN_00c13874 =====

void FUN_00c13874(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc138e8);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      (**(code **)((long)pvVar2 + 0x10))(0,pvVar2,pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00c138e8  FUN_00c138e8 =====

/* WARNING: Removing unreachable block (ram,0x00c13b3c) */
/* WARNING: Removing unreachable block (ram,0x00c13b60) */

void FUN_00c138e8(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  undefined4 local_d8 [2];
  undefined8 **local_d0;
  code *pcStack_c8;
  ulong local_c0;
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  long local_b0;
  long lStack_a8;
  code *local_a0;
  code *pcStack_98;
  undefined8 *local_90 [2];
  code *local_80;
  code *pcStack_78;
  undefined8 *local_70;
  undefined8 **local_68;
  code *pcStack_60;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined4 local_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 local_4a;
  
  plVar10 = (long *)param_1[1];
  lVar2 = plVar10[2];
  lVar11 = plVar10[4];
  uVar5 = (**(code **)(*(long *)plVar10[1] + 0x60))();
  plVar6 = (long *)(**(code **)(lVar2 + 0x18))(lVar2,uVar5);
  uVar7 = (**(code **)(*(long *)plVar10[1] + 0xb0))((long *)plVar10[1],plVar6);
  if ((uVar7 & 1) == 0) {
    local_4a = 0;
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,3);
    local_68 = (undefined8 ***)0x0;
    pcStack_60 = (code *)0x0;
    local_58 = 0;
    uStack_53 = 0;
    local_50 = 0;
    uStack_4c = 0;
    FUN_00547cac(&local_68,"Invalid transport for mid=",0x1a);
    puVar8 = (undefined8 *)(**(code **)(*(long *)plVar10[1] + 0x60))();
    uVar7 = puVar8[1];
    puVar3 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar7 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar3 = puVar8;
    }
    FUN_00547cac(&local_68,puVar3,uVar7);
    local_d8[0] = local_70._0_4_;
    local_c0 = CONCAT35(uStack_53,local_58);
    uStack_b4 = CONCAT12(local_4a,CONCAT11(uStack_4b,uStack_4c));
    pcStack_c8 = pcStack_60;
    local_d0 = local_68;
    uStack_b8 = local_50;
  }
  else {
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
      FUN_00600e24(plVar10[3],uVar5);
    }
    lVar2 = *plVar10;
    plVar6 = (long *)plVar10[1];
    uVar5 = *(undefined8 *)(lVar11 + 0x30);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    local_70 = (undefined8 *)operator_new(0x18);
    *local_70 = uVar5;
    local_70[1] = lVar2;
    local_70[2] = lVar11;
    pcStack_60 = FUN_00c13cc8;
    local_58 = 0xc13c1c;
    uStack_53 = 0;
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_70);
    (*pcStack_60)(0,&local_70,&local_70);
    lVar2 = *plVar10;
    plVar6 = (long *)plVar10[1];
    uVar5 = *(undefined8 *)(lVar11 + 0x30);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    local_90[0] = (undefined8 *)operator_new(0x18);
    *local_90[0] = uVar5;
    local_90[0][1] = lVar2;
    local_90[0][2] = lVar11;
    local_80 = FUN_00c13e48;
    pcStack_78 = FUN_00c13d9c;
    (**(code **)(*plVar6 + 0x78))(plVar6,local_90);
    (*local_80)(0,local_90,local_90);
    lStack_a8 = *plVar10;
    plVar6 = (long *)plVar10[1];
    if (lStack_a8 != 0) {
      FUN_00d0f740(1,lStack_a8);
    }
    local_a0 = FUN_00c14020;
    pcStack_98 = FUN_00c13f1c;
    local_b0 = lVar11;
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_b0);
    (*local_a0)(0,&local_b0,&local_b0);
    FUN_005ecd48(local_d8);
  }
  puVar9 = (undefined4 *)*param_1;
  plVar6 = (long *)(puVar9 + 2);
  *puVar9 = local_d8[0];
  if (puVar9 != local_d8) {
    if (*(char *)((long)puVar9 + 0x1f) < '\0') {
      pcVar1 = pcStack_c8;
      pppuVar4 = (undefined8 ***)local_d0;
      if (-1 < (long)local_c0) {
        pcVar1 = (code *)(local_c0 >> 0x38);
        pppuVar4 = &local_d0;
      }
      FUN_00547f08(plVar6,pppuVar4,pcVar1);
    }
    else if ((long)local_c0 < 0) {
      FUN_00547fc0(plVar6,local_d0,pcStack_c8);
    }
    else {
      *(ulong *)(puVar9 + 6) = local_c0;
      *(code **)(puVar9 + 4) = pcStack_c8;
      *plVar6 = (long)local_d0;
    }
  }
  *(uint *)((long)puVar9 + 0x23) = CONCAT31(uStack_b4,uStack_b8._3_1_);
  puVar9[8] = uStack_b8;
  if ((long)local_c0 < 0) {
    operator_delete(local_d0);
  }
  return;
}


// ===== 00c13c1c  FUN_00c13c1c =====

void FUN_00c13c1c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  puVar3 = (undefined8 *)*param_1;
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  plVar4 = (long *)*puVar3;
  puVar3[1] = 0;
  local_50[0] = (undefined8 *)operator_new(0x30);
  *local_50[0] = uVar1;
  local_50[0][4] = FUN_004473ec;
  local_50[0][5] = FUN_00c13d50;
  local_50[0][2] = uVar2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar4 + 8))(plVar4,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00c13cc8  FUN_00c13cc8 =====

void FUN_00c13cc8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc13d50);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 8);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00c13d50  FUN_00c13d50 =====

void FUN_00c13d50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(*param_1 + 0x70);
  for (plVar2 = *(long **)(*param_1 + 0x68); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    (**(code **)(**(long **)(*plVar2 + 0x20) + 200))();
  }
  return;
}


// ===== 00c13d9c  FUN_00c13d9c =====

void FUN_00c13d9c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  puVar3 = (undefined8 *)*param_1;
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  plVar4 = (long *)*puVar3;
  puVar3[1] = 0;
  local_50[0] = (undefined8 *)operator_new(0x30);
  *local_50[0] = uVar1;
  local_50[0][4] = FUN_004473ec;
  local_50[0][5] = FUN_00c13ed0;
  local_50[0][2] = uVar2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar4 + 8))(plVar4,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00c13e48  FUN_00c13e48 =====

void FUN_00c13e48(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc13ed0);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 8);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00c13ed0  FUN_00c13ed0 =====

void FUN_00c13ed0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(*param_1 + 0x58);
  for (plVar2 = *(long **)(*param_1 + 0x50); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    (**(code **)(**(long **)(*plVar2 + 0x18) + 0x140))();
  }
  return;
}


// ===== 00c13f1c  FUN_00c13f1c =====

void FUN_00c13f1c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar1 = *param_1;
  pvVar2 = (void *)param_1[1];
  if (pvVar2 != (void *)0x0) {
    FUN_00d0f740(1,pvVar2);
  }
  if ((*(char *)(lVar1 + 0xec) == '\x01') && ((*(byte *)(lVar1 + 0xed) & 1) == 0)) {
    plVar4 = *(long **)(lVar1 + 0x30);
    *(undefined1 *)(lVar1 + 0xed) = 1;
    if (pvVar2 != (void *)0x0) {
      FUN_00d0f740(1,pvVar2);
    }
    local_50[0] = (undefined8 *)operator_new(0x30);
    *local_50[0] = pvVar2;
    local_50[0][4] = FUN_004473ec;
    local_50[0][5] = FUN_00c1460c;
    local_50[0][2] = lVar1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar4 + 8))(plVar4,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  if ((pvVar2 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar3 == 1)) {
    operator_delete(pvVar2);
  }
  return;
}


// ===== 00c14020  FUN_00c14020 =====

void FUN_00c14020(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc140a4);
    (*pcVar1)();
  }
  pvVar4 = (void *)param_2[1];
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00c140a4  FUN_00c140a4 =====

void FUN_00c140a4(undefined8 *param_1)

{
  undefined1 auStack_80 [16];
  code *local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  code *local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  code *local_30;
  undefined8 uStack_28;
  
  FUN_007ebdcc(param_1[1]);
  local_30 = FUN_00433984;
  uStack_28 = 0;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,auStack_40);
  (*local_30)(0,auStack_40,auStack_40);
  local_50 = FUN_00433984;
  uStack_48 = 0;
  (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,auStack_60);
  (*local_50)(0,auStack_60,auStack_60);
  local_70 = FUN_00433984;
  uStack_68 = 0;
  (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,auStack_80);
  (*local_70)(0,auStack_80,auStack_80);
  (**(code **)(*(long *)*param_1 + 0xb0))((long *)*param_1,0);
  return;
}


// ===== 00c14178  FUN_00c14178 =====

void FUN_00c14178(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc141fc);
    (*pcVar1)();
  }
  pvVar4 = (void *)param_2[1];
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00c141fc  FUN_00c141fc =====

void FUN_00c141fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  param_1 = (undefined8 *)*param_1;
  lVar2 = param_1[9];
  uVar4 = *param_1;
  for (lVar1 = param_1[8]; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    (**(code **)(lVar1 + 0x18))(lVar1);
  }
  FUN_00c0c244(uVar4);
  plVar3 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c14268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}


// ===== 00c14280  FUN_00c14280 =====

void FUN_00c14280(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  void *pvVar8;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc14424);
      (*pcVar1)();
    }
    pvVar6 = (void *)*param_2;
    if (pvVar6 != (void *)0x0) {
      pvVar8 = *(void **)((long)pvVar6 + 0x40);
      if (pvVar8 != (void *)0x0) {
        pvVar2 = pvVar8;
        pvVar4 = *(void **)((long)pvVar6 + 0x48);
        if (pvVar8 != *(void **)((long)pvVar6 + 0x48)) {
          do {
            pvVar2 = (void *)((long)pvVar4 + -0x20);
            if (pvVar2 == (void *)0x0) goto LAB_00c1440c;
            (**(code **)((long)pvVar4 + -0x10))(0,pvVar2,pvVar2);
            pvVar4 = pvVar2;
          } while (pvVar2 != pvVar8);
          pvVar2 = *(void **)((long)pvVar6 + 0x40);
        }
        *(void **)((long)pvVar6 + 0x48) = pvVar8;
        operator_delete(pvVar2);
      }
      plVar7 = *(long **)((long)pvVar6 + 0x28);
      if (plVar7 != (long *)0x0) {
        plVar5 = *(long **)((long)pvVar6 + 0x30);
        plVar3 = plVar7;
        if (plVar7 != plVar5) {
          do {
            plVar5 = plVar5 + -1;
            if (plVar5 == (long *)0x0) goto LAB_00c1440c;
            if ((long *)*plVar5 != (long *)0x0) {
              (**(code **)(*(long *)*plVar5 + 8))();
            }
          } while (plVar5 != plVar7);
          plVar3 = *(long **)((long)pvVar6 + 0x28);
        }
        *(long **)((long)pvVar6 + 0x30) = plVar7;
        operator_delete(plVar3);
      }
      plVar7 = *(long **)((long)pvVar6 + 0x10);
      if (plVar7 != (long *)0x0) {
        plVar5 = *(long **)((long)pvVar6 + 0x18);
        plVar3 = plVar7;
        if (plVar7 != plVar5) {
          do {
            plVar5 = plVar5 + -1;
            if (plVar5 == (long *)0x0) {
LAB_00c1440c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if ((long *)*plVar5 != (long *)0x0) {
              (**(code **)(*(long *)*plVar5 + 8))();
            }
          } while (plVar5 != plVar7);
          plVar3 = *(long **)((long)pvVar6 + 0x10);
        }
        *(long **)((long)pvVar6 + 0x18) = plVar7;
        operator_delete(plVar3);
      }
      plVar7 = *(long **)((long)pvVar6 + 8);
      *(undefined8 *)((long)pvVar6 + 8) = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 00c14424  FUN_00c14424 =====

void FUN_00c14424(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c14430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c14434  FUN_00c14434 =====

void FUN_00c14434(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c14440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c14444  FUN_00c14444 =====

void FUN_00c14444(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[1];
  uVar2 = (**(code **)(*(long *)*param_1 + 0x28))();
  uVar3 = (**(code **)(*(long *)*param_1 + 0x40))((long *)*param_1);
  plVar1 = *(long **)(lVar4 + 0x58);
  for (plVar5 = *(long **)(lVar4 + 0x50); plVar5 != plVar1; plVar5 = plVar5 + 1) {
    (**(code **)(**(long **)(*plVar5 + 0x18) + 0xc0))(*(long **)(*plVar5 + 0x18),uVar2);
  }
  plVar1 = *(long **)(lVar4 + 0x70);
  for (plVar5 = *(long **)(lVar4 + 0x68); plVar5 != plVar1; plVar5 = plVar5 + 1) {
    (**(code **)(**(long **)(*plVar5 + 0x20) + 0xa0))(*(long **)(*plVar5 + 0x20),uVar3);
  }
  return;
}


// ===== 00c14500  FUN_00c14500 =====

void FUN_00c14500(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *local_38;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x110);
  uVar5 = *(undefined8 *)(lVar1 + 0x118);
  uVar7 = *(undefined4 *)(lVar1 + 0x3c);
  uVar3 = *(undefined8 *)param_1[1];
  uVar6 = ((undefined8 *)param_1[1])[1];
  uVar11 = *(undefined8 *)(lVar1 + 0x100);
  if (*(long **)(lVar1 + 0xf0) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(**(long **)(lVar1 + 0xf0) + 0x28))();
  }
  FUN_00c130d0(&local_38,uVar7,lVar1 + 8,uVar11,uVar2,uVar5,uVar3,uVar6,uVar9);
  plVar8 = local_38;
  puVar4 = *(undefined8 **)(lVar1 + 0x58);
  if (puVar4 < *(undefined8 **)(lVar1 + 0x60)) {
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_38 = (long *)0x0;
    puVar10 = puVar4 + 1;
    *puVar4 = plVar8;
  }
  else {
    puVar10 = (undefined8 *)FUN_00c0f428(lVar1 + 0x50,&local_38);
  }
  *(undefined8 **)(lVar1 + 0x58) = puVar10;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return;
}


// ===== 00c145e8  FUN_00c145e8 =====

void FUN_00c145e8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c14608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(**(long **)*param_1 + 0x20) + 0xa0))
            (*(long **)(**(long **)*param_1 + 0x20),0);
  return;
}


// ===== 00c1460c  FUN_00c1460c =====

void FUN_00c1460c(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  if ((((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3), (uVar2 & 1) == 0)) &&
     (*(char *)((long)plVar3 + 0xeb) == '\x01')) {
    plVar1 = (long *)plVar3[0xe];
    for (plVar3 = (long *)plVar3[0xd]; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      (**(code **)(**(long **)(*plVar3 + 0x20) + 0xd0))();
    }
  }
  return;
}


// ===== 00c1468c  FUN_00c1468c =====

void FUN_00c1468c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(char *)(lVar1 + 0xec) = (char)param_1[1];
  *(undefined1 *)(lVar1 + 0xed) = 0;
  return;
}


// ===== 00c146a4  FUN_00c146a4 =====

void FUN_00c146a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  lVar3 = ((long *)param_1[1])[1];
  for (lVar2 = *(long *)param_1[1]; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    (**(code **)(lVar2 + 0x18))(lVar2);
  }
  FUN_00c0c244(uVar1);
  return;
}


// ===== 00c146f8  FUN_00c146f8 =====

void FUN_00c146f8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00c1471c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*plVar1 + 0xf0) + 0x88))
            (*(long **)(*plVar1 + 0xf0),*(undefined8 *)plVar1[1],*(undefined4 *)plVar1[2],plVar1[3])
  ;
  return;
}


// ===== 00c14720  FUN_00c14720 =====

void FUN_00c14720(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00c14744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*plVar1 + 0xf0) + 0x90))
            (*(long **)(*plVar1 + 0xf0),*(undefined8 *)plVar1[1],*(undefined4 *)plVar1[2],plVar1[3])
  ;
  return;
}


// ===== 00c14748  FUN_00c14748 =====

void FUN_00c14748(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_e8 [168];
  
  plVar5 = (long *)param_1[1];
  lVar4 = plVar5[2];
  bVar3 = (**(code **)(*plVar5 + 0x18))();
  if ((bVar3 & 1) != 0) {
    piVar2 = (int *)((undefined8 *)plVar5[1])[1];
    for (piVar1 = *(int **)plVar5[1]; piVar1 != piVar2; piVar1 = piVar1 + 0x30) {
      if (*piVar1 != 0) {
        plVar5 = (long *)(**(code **)(**(long **)(lVar4 + 0xf0) + 0x28))();
        (**(code **)(*plVar5 + 0x98))(auStack_e8,plVar5,*piVar1);
        if ((char)piVar1[0x2e] == '\x01') {
          FUN_00b618b4();
        }
        else {
          FUN_0066953c(piVar1 + 4,auStack_e8);
          *(undefined1 *)(piVar1 + 0x2e) = 1;
        }
        FUN_0066981c(auStack_e8);
      }
    }
  }
  *(byte *)*param_1 = bVar3 & 1;
  return;
}


// ===== 00c14828  FUN_00c14828 =====

/* WARNING: Removing unreachable block (ram,0x00c14930) */

void FUN_00c14828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  void *local_70;
  void *pvStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  
  local_60 = param_5[2];
  pvStack_68 = (void *)param_5[1];
  local_70 = (void *)*param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_00c17b08(&local_58,&local_70);
  FUN_00c14988(param_1,param_2,param_3,param_4,&local_58,param_6,0);
  plVar2 = local_58;
  plVar3 = local_50;
  if (local_58 != (long *)0x0) {
    while (plVar2 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) goto LAB_00c14974;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
    }
    local_50 = plVar2;
    operator_delete(local_58);
  }
  pvVar1 = pvStack_68;
  if (local_70 != (void *)0x0) {
    while (local_70 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x18);
      if (pvVar1 == (void *)0x0) {
LAB_00c14974:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_68 = local_70;
    operator_delete(local_70);
  }
  return;
}


// ===== 00c14988  FUN_00c14988 =====

void FUN_00c14988(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 long param_6,undefined4 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *local_70;
  undefined8 local_68;
  
  param_1[1] = (long)&PTR_FUN_00d4a6e8;
  *param_1 = (long)&PTR_FUN_00d4a5f8;
  param_1[2] = (long)&PTR_FUN_00d4a710;
  param_1[3] = (long)&PTR_FUN_00d4a810;
  param_1[4] = param_2;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_4 < 0x17) {
    plVar8 = param_1 + 5;
    *(char *)((long)param_1 + 0x3f) = (char)param_4;
  }
  else {
    uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    plVar8 = (long *)operator_new(uVar2);
    param_1[5] = (long)plVar8;
    param_1[6] = param_4;
    param_1[7] = uVar2 | 0x8000000000000000;
  }
  if (plVar8 <= (long *)((long)plVar8 + param_4)) {
    if ((plVar8 <= param_3) && (param_3 < (long *)((long)plVar8 + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(plVar8,param_3,param_4);
    *(undefined1 *)((long)plVar8 + param_4) = 0;
    puVar6 = (undefined8 *)operator_new(0xa0);
    FUN_00c1969c(puVar6,param_2,param_7);
    *(undefined4 *)((long)puVar6 + 0x9c) = 0;
    param_1[8] = (long)puVar6;
    *puVar6 = &PTR_FUN_00d4a838;
    puVar6[1] = &PTR_FUN_00d4a8c0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d0f740(1,(long)puVar6 + 0x9c);
    }
    uVar7 = FUN_007e06bc();
    local_70 = (long *)param_1[8];
    if (local_70 != (long *)0x0) {
      (**(code **)*local_70)();
    }
    FUN_00c1a484(&local_68,param_3,param_4,&local_70);
    puVar6 = (undefined8 *)operator_new(0x28);
    uVar3 = local_68;
    local_68 = 0;
    puVar6[2] = uVar7;
    puVar6[3] = uVar3;
    *puVar6 = &PTR_FUN_00d4a8f0;
    puVar6[1] = &PTR_FUN_00d4a988;
    *(undefined4 *)(puVar6 + 4) = 0;
    param_1[9] = (long)puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar6 + 4);
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 8))();
      puVar6 = (undefined8 *)param_1[9];
    }
    param_1[10] = param_6;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)((long)param_1 + 0x5c) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    bVar4 = (**(code **)(*(long *)puVar6[3] + 0x30))();
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_1[0x10] = 0x3ff0000000000000;
    param_1[0x11] = 0;
    *(byte *)(param_1 + 0xf) = bVar4 & 1;
    uVar5 = FUN_00c17adc();
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined4 *)((long)param_1 + 0x94) = uVar5;
    param_1[0x17] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    FUN_007ebd84(param_1 + 0x18);
    (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],param_1);
    plVar8 = (long *)(**(code **)(*(long *)param_1[9] + 0x48))();
    (**(code **)(*plVar8 + 0x38))(plVar8,param_1 + 1);
    (**(code **)(*param_1 + 0xa8))(param_1,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00c14c2c  FUN_00c14c2c =====

void FUN_00c14c2c(void)

{
  FUN_00c14988();
  return;
}


// ===== 00c14c3c  FUN_00c14c3c =====

void FUN_00c14c3c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  
  *param_1 = &PTR_FUN_00d4a5f8;
  param_1[1] = &PTR_FUN_00d4a6e8;
  param_1[2] = &PTR_FUN_00d4a710;
  param_1[3] = &PTR_FUN_00d4a810;
  plVar2 = (long *)(**(code **)(*(long *)param_1[9] + 0x48))();
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 1);
  (**(code **)(*(long *)param_1[9] + 0x78))((long *)param_1[9],param_1);
  pvVar5 = (void *)param_1[0x18];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 8))();
  }
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  plVar2 = (long *)param_1[0xc];
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)param_1[0xd];
    plVar3 = plVar2;
    if (plVar2 != plVar4) {
      do {
        plVar4 = plVar4 + -1;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar4 != (long *)0x0) {
          (**(code **)(*(long *)*plVar4 + 8))();
        }
      } while (plVar4 != plVar2);
      plVar3 = (long *)param_1[0xc];
    }
    param_1[0xd] = plVar2;
    operator_delete(plVar3);
  }
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 8))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    return;
  }
  return;
}


// ===== 00c14de4  FUN_00c14de4 =====

void FUN_00c14de4(long param_1)

{
  FUN_00c14c3c(param_1 + -8);
  return;
}


// ===== 00c14df0  FUN_00c14df0 =====

void FUN_00c14df0(long param_1)

{
  FUN_00c14c3c(param_1 + -0x10);
  return;
}


// ===== 00c14dfc  FUN_00c14dfc =====

void FUN_00c14dfc(long param_1)

{
  FUN_00c14c3c(param_1 + -0x18);
  return;
}


// ===== 00c14e08  FUN_00c14e08 =====

void FUN_00c14e08(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc14e10);
  (*pcVar1)();
}


// ===== 00c14e10  FUN_00c14e10 =====

void FUN_00c14e10(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc14e18);
  (*pcVar1)();
}


// ===== 00c14e18  FUN_00c14e18 =====

void FUN_00c14e18(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc14e20);
  (*pcVar1)();
}


// ===== 00c14e20  FUN_00c14e20 =====

void FUN_00c14e20(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc14e28);
  (*pcVar1)();
}


// ===== 00c14e28  FUN_00c14e28 =====

void FUN_00c14e28(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  bVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + 0x18) + 0x30))();
  bVar1 = bVar1 & 1;
  if (*(byte *)(param_1 + 0x78) != bVar1) {
    lVar3 = *(long *)(param_1 + 0xc0);
    plVar2 = *(long **)(param_1 + 0x20);
    *(byte *)(param_1 + 0x78) = bVar1;
    if (lVar3 != 0) {
      FUN_00d0f740(1,lVar3);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar3;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00c17910;
    local_50[0][2] = param_1;
    *(byte *)(local_50[0] + 3) = bVar1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00c14f0c  FUN_00c14f0c =====

void FUN_00c14f0c(undefined8 param_1,long param_2)

{
  undefined1 uStack_41;
  long local_40;
  undefined8 *puStack_38;
  byte *local_30;
  byte local_24 [4];
  undefined8 local_8;
  
  local_8 = param_1;
  local_24[0] = (**(code **)(**(long **)(*(long *)(param_2 + 0x48) + 0x18) + 0x30))();
  puStack_38 = &local_8;
  local_30 = local_24;
  local_24[0] = local_24[0] & 1;
  local_40 = param_2;
  (**(code **)(**(long **)(param_2 + 0x20) + 0x60))
            (*(long **)(param_2 + 0x20),&local_40,FUN_00c17924,&uStack_41);
  return;
}


// ===== 00c14f8c  FUN_00c14f8c =====

void FUN_00c14f8c(undefined8 param_1,long param_2)

{
  undefined1 uStack_49;
  long local_48;
  undefined8 *puStack_40;
  byte *local_38;
  byte local_2c [4];
  undefined8 local_28;
  
  local_28 = param_1;
  local_2c[0] = (**(code **)(**(long **)(*(long *)(param_2 + 0x40) + 0x18) + 0x30))();
  puStack_40 = &local_28;
  local_38 = local_2c;
  local_2c[0] = local_2c[0] & 1;
  local_48 = param_2 + -8;
  (**(code **)(**(long **)(param_2 + 0x18) + 0x60))
            (*(long **)(param_2 + 0x18),&local_48,FUN_00c17924,&uStack_49);
  return;
}


// ===== 00c15010  FUN_00c15010 =====

void FUN_00c15010(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xa0);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c15028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c15030  FUN_00c15030 =====

void FUN_00c15030(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x90);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c15048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c15050  FUN_00c15050 =====

void FUN_00c15050(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar9 = *(long *)(param_2 + 0x60);
  lVar3 = *(long *)(param_2 + 0x68);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = lVar3 - lVar9;
  if (lVar3 != 0) {
    uVar8 = lVar3 >> 3;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00625650();
    }
    puVar4 = (undefined8 *)operator_new(uVar8 * 0x18);
    puVar2 = puVar4 + uVar8 * 3;
    uVar6 = (uint)(lVar3 - 8U);
    *param_1 = puVar4;
    param_1[2] = puVar2;
    puVar5 = puVar4;
    if ((~uVar6 & 0x18) != 0) {
      uVar7 = (ulong)((uVar6 >> 3) + 1) & 3;
      do {
        if (puVar5 == (undefined8 *)0x0) goto LAB_00c151d8;
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar7 = uVar7 - 1;
        puVar5[2] = 0;
        puVar5 = puVar5 + 3;
      } while (uVar7 != 0);
    }
    if (0x17 < lVar3 - 8U) {
      do {
        if (puVar5 == (undefined8 *)0x0) {
LAB_00c151d8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        if (puVar5 + 3 == (undefined8 *)0x0) goto LAB_00c151d8;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        if (puVar5 + 6 == (undefined8 *)0x0) goto LAB_00c151d8;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        if (puVar5 + 9 == (undefined8 *)0x0) goto LAB_00c151d8;
        puVar1 = puVar5 + 0xc;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = puVar1;
      } while (puVar1 != puVar2);
    }
    uVar7 = 0;
    param_1[1] = puVar2;
    do {
      (**(code **)(**(long **)(lVar9 + uVar7 * 8) + 0x20))(&local_68);
      if (uVar8 == uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        operator_delete((void *)*puVar4);
      }
      lVar9 = *(long *)(param_2 + 0x60);
      lVar3 = *(long *)(param_2 + 0x68);
      uVar7 = uVar7 + 1;
      puVar4[1] = uStack_60;
      *puVar4 = local_68;
      puVar4[2] = local_58;
      puVar4 = puVar4 + 3;
    } while (uVar7 < (ulong)(lVar3 - lVar9 >> 3));
  }
  return;
}


// ===== 00c15204  FUN_00c15204 =====

void FUN_00c15204(long param_1)

{
  FUN_00c15050(param_1 + -0x10);
  return;
}


// ===== 00c15210  FUN_00c15210 =====

void FUN_00c15210(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x60);
  plVar1 = *(long **)(param_2 + 0x68);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (long)plVar1 - (long)plVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c16834();
    }
    plVar3 = (long *)operator_new(uVar2);
    *param_1 = plVar3;
    param_1[2] = (long)plVar3 + uVar2;
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = (undefined8 *)*plVar5;
      *plVar3 = (long)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      plVar5 = plVar5 + 1;
      plVar3 = plVar3 + 1;
    } while (plVar5 != plVar1);
    param_1[1] = plVar3;
  }
  return;
}


// ===== 00c152c4  FUN_00c152c4 =====

void FUN_00c152c4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x50);
  plVar1 = *(long **)(param_2 + 0x58);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (long)plVar1 - (long)plVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c16834();
    }
    plVar3 = (long *)operator_new(uVar2);
    *param_1 = plVar3;
    param_1[2] = (long)plVar3 + uVar2;
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = (undefined8 *)*plVar5;
      *plVar3 = (long)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      plVar5 = plVar5 + 1;
      plVar3 = plVar3 + 1;
    } while (plVar5 != plVar1);
    param_1[1] = plVar3;
  }
  return;
}


// ===== 00c15378  FUN_00c15378 =====

void FUN_00c15378(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  if (param_2[10] == 0) {
    FUN_00669500(param_1);
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x80))();
  if ((uVar1 >> 0x20 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c153c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2[10] + 0xa8))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c153f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[10] + 0x98))(param_1);
  return;
}


// ===== 00c153fc  FUN_00c153fc =====

void FUN_00c153fc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    FUN_00669500(param_1);
    return;
  }
  uVar1 = (**(code **)(*(long *)(param_2 + -0x10) + 0x80))((long *)(param_2 + -0x10));
  if ((uVar1 >> 0x20 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c15450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x40) + 0xa8))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c15480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x40) + 0x98))(param_1);
  return;
}


// ===== 00c15484  FUN_00c15484 =====

void FUN_00c15484(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *local_28;
  
  uVar3 = *param_2;
  *param_2 = 0;
  plVar2 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x50);
  if ((plVar2 != (long *)0x0) && (*(char *)(param_1 + 0x5c) == '\x01')) {
    local_28 = *(long **)(param_1 + 0x98);
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    if (local_28 != (long *)0x0) {
      (**(code **)*local_28)();
    }
    (**(code **)(*plVar2 + 0x70))(plVar2,uVar1,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  return;
}


// ===== 00c1552c  FUN_00c1552c =====

void FUN_00c1552c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *local_28;
  
  uVar3 = *param_2;
  *param_2 = 0;
  plVar2 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if ((plVar2 != (long *)0x0) && (*(char *)(param_1 + 0x4c) == '\x01')) {
    local_28 = *(long **)(param_1 + 0x88);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    if (local_28 != (long *)0x0) {
      (**(code **)*local_28)();
    }
    (**(code **)(*plVar2 + 0x70))(plVar2,uVar1,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  return;
}


// ===== 00c155d4  FUN_00c155d4 =====

void FUN_00c155d4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x98);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c155ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c155f4  FUN_00c155f4 =====

void FUN_00c155f4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x88);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c15614  FUN_00c15614 =====

void FUN_00c15614(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00c199c8(*(undefined8 *)(param_1 + 0x40),2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x18);
  iVar1 = *(int *)(lVar2 + 0x48);
  *(undefined4 *)(lVar2 + 0x48) = 1;
  if (iVar1 == 1) {
    return;
  }
  FUN_00c17984();
  return;
}


// ===== 00c15670  FUN_00c15670 =====

void FUN_00c15670(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00c199c8(*(undefined8 *)(param_1 + 0x30),2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
  iVar1 = *(int *)(lVar2 + 0x48);
  *(undefined4 *)(lVar2 + 0x48) = 1;
  if (iVar1 == 1) {
    return;
  }
  FUN_00c17984();
  return;
}


// ===== 00c156cc  FUN_00c156cc =====

void FUN_00c156cc(long param_1,ulong param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  uVar2 = (uint)(param_2 >> 0x20) & 0xff;
  FUN_007ebdd8(*(undefined8 *)(param_1 + 0xc0));
  if (param_4 != 0) {
    if ((uVar2 & *(byte *)(param_1 + 0x5c)) == 0) {
      if (*(byte *)(param_1 + 0x5c) == uVar2) {
        return;
      }
    }
    else {
      if ((param_2 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (*(int *)(param_1 + 0x58) == (int)param_2) {
        return;
      }
    }
    FUN_00c19998(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58));
  }
  *(int *)(param_1 + 0x58) = (int)param_2;
  *(char *)(param_1 + 0x5c) = (char)(param_2 >> 0x20);
  FUN_00c198e8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x50);
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = FUN_00c1b074(param_1 + 0xa8);
    (**(code **)(*plVar4 + 0x80))(plVar4,uVar1,uVar3);
  }
  FUN_00c157d0(param_1,param_3 & 1);
  return;
}


// ===== 00c157d0  FUN_00c157d0 =====

void FUN_00c157d0(long param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_38;
  long *local_18;
  
  uVar4 = 0;
  if ((param_2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
  }
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 != (long *)0x0) {
    if (*(char *)(param_1 + 0x5c) == '\x01') {
      (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      (**(code **)(*plVar1 + 0xc0))(uVar4);
    }
  }
  if ((*(char *)(param_1 + 0x5c) == '\x01') &&
     (plVar1 = *(long **)(param_1 + 0x98), plVar1 != (long *)0x0)) {
    plVar3 = *(long **)(param_1 + 0x50);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    local_18 = plVar1;
    (**(code **)*plVar1)();
    (**(code **)(*plVar3 + 0x70))(plVar3,uVar2,&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  local_38 = *(long **)(param_1 + 0xb8);
  if (local_38 != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x50);
    if (*(char *)(param_1 + 0x5c) == '\x01') {
      uVar2 = *(undefined4 *)(param_1 + 0x58);
    }
    else {
      uVar2 = 0;
    }
    (**(code **)*local_38)();
    (**(code **)(*plVar1 + 0x78))(plVar1,uVar2,&local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  return;
}


// ===== 00c158fc  FUN_00c158fc =====

void FUN_00c158fc(long param_1,ulong param_2)

{
  undefined1 uStack_49;
  long local_48;
  ulong *puStack_40;
  byte *local_38;
  undefined4 *puStack_30;
  undefined4 local_28;
  byte local_24 [4];
  ulong local_8;
  
  local_8 = param_2 & 0xffffffff | 0x100000000;
  local_24[0] = (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + 0x18) + 0x30))();
  local_24[0] = local_24[0] & 1;
  local_28 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))(*(long **)(param_1 + 0x40));
  puStack_40 = &local_8;
  local_38 = local_24;
  puStack_30 = &local_28;
  local_48 = param_1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))
            (*(long **)(param_1 + 0x20),&local_48,FUN_00c17ac0,&uStack_49);
  FUN_00c199c8(*(undefined8 *)(param_1 + 0x40),1);
  return;
}


// ===== 00c159ac  FUN_00c159ac =====

void FUN_00c159ac(long param_1,ulong param_2)

{
  undefined1 uStack_51;
  long local_50;
  ulong *puStack_48;
  byte *local_40;
  undefined4 *puStack_38;
  undefined4 local_30;
  byte local_2c [4];
  ulong local_28;
  
  local_28 = param_2 & 0xffffffff | 0x100000000;
  local_2c[0] = (**(code **)(**(long **)(*(long *)(param_1 + 0x38) + 0x18) + 0x30))();
  local_2c[0] = local_2c[0] & 1;
  local_30 = (**(code **)(**(long **)(param_1 + 0x30) + 0x20))(*(long **)(param_1 + 0x30));
  puStack_48 = &local_28;
  local_40 = local_2c;
  puStack_38 = &local_30;
  local_50 = param_1 + -0x10;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))
            (*(long **)(param_1 + 0x10),&local_50,FUN_00c17ac0,&uStack_51);
  FUN_00c199c8(*(undefined8 *)(param_1 + 0x30),1);
  return;
}


// ===== 00c15a60  FUN_00c15a60 =====

void FUN_00c15a60(long param_1)

{
  undefined1 uStack_49;
  long local_48;
  undefined8 *puStack_40;
  byte *local_38;
  undefined4 *puStack_30;
  undefined4 local_28;
  byte local_24 [4];
  undefined8 local_8;
  
  local_8 = 0;
  local_24[0] = (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + 0x18) + 0x30))();
  local_24[0] = local_24[0] & 1;
  local_28 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))(*(long **)(param_1 + 0x40));
  puStack_40 = &local_8;
  local_38 = local_24;
  puStack_30 = &local_28;
  local_48 = param_1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))
            (*(long **)(param_1 + 0x20),&local_48,FUN_00c17ac0,&uStack_49);
  FUN_00c199c8(*(undefined8 *)(param_1 + 0x40),1);
  return;
}


// ===== 00c15b08  FUN_00c15b08 =====

void FUN_00c15b08(long param_1)

{
  undefined1 uStack_51;
  long local_50;
  undefined8 *puStack_48;
  byte *local_40;
  undefined4 *puStack_38;
  undefined4 local_30;
  byte local_2c [4];
  undefined8 local_28;
  
  local_28 = 0;
  local_2c[0] = (**(code **)(**(long **)(*(long *)(param_1 + 0x38) + 0x18) + 0x30))();
  local_2c[0] = local_2c[0] & 1;
  local_30 = (**(code **)(**(long **)(param_1 + 0x30) + 0x20))(*(long **)(param_1 + 0x30));
  puStack_48 = &local_28;
  local_40 = local_2c;
  puStack_38 = &local_30;
  local_50 = param_1 + -0x10;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))
            (*(long **)(param_1 + 0x10),&local_50,FUN_00c17ac0,&uStack_51);
  FUN_00c199c8(*(undefined8 *)(param_1 + 0x30),1);
  return;
}


// ===== 00c15bb4  FUN_00c15bb4 =====

ulong FUN_00c15bb4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (((*(byte *)(param_1 + 0x5c) & 1) == 0) &&
     (plVar2 = *(long **)(param_1 + 0x50), plVar2 != (long *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
    uVar3 = 0;
  }
  else {
    uVar1 = (ulong)*(uint5 *)(param_1 + 0x58);
    uVar3 = (ulong)*(ushort *)(param_1 + 0x5d) << 0x28 | (ulong)*(byte *)(param_1 + 0x5f) << 0x38;
  }
  return uVar3 | uVar1 & 0xffffffffff;
}


// ===== 00c15c1c  FUN_00c15c1c =====

ulong FUN_00c15c1c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  if (((*(byte *)(param_1 + 0x4c) & 1) == 0) &&
     (plVar2 = *(long **)(param_1 + 0x40), plVar2 != (long *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
    return uVar1 & 0xffffffffff;
  }
  return (ulong)*(uint5 *)(param_1 + 0x48);
}


// ===== 00c15c70  FUN_00c15c70 =====

/* WARNING: Removing unreachable block (ram,0x00c15d54) */

void FUN_00c15c70(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  
  local_40 = param_2[2];
  pvStack_48 = (void *)param_2[1];
  local_50 = (void *)*param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_00c17b08(&local_38,&local_50);
  (**(code **)(*param_1 + 0xa8))(param_1,&local_38);
  plVar2 = local_38;
  plVar3 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar2 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) goto LAB_00c15d90;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
    }
    local_30 = plVar2;
    operator_delete(local_38);
  }
  pvVar1 = pvStack_48;
  if (local_50 != (void *)0x0) {
    while (local_50 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x18);
      if (pvVar1 == (void *)0x0) {
LAB_00c15d90:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00c15da4  FUN_00c15da4 =====

void FUN_00c15da4(long param_1)

{
  FUN_00c15c70(param_1 + -0x10);
  return;
}


// ===== 00c15db0  FUN_00c15db0 =====

void FUN_00c15db0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c15dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00c15ddc  FUN_00c15ddc =====

void FUN_00c15ddc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c15e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00c15e08  FUN_00c15e08 =====

void FUN_00c15e08(long param_1,long *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *local_a0;
  long *local_98;
  undefined8 ***local_90;
  size_t local_88;
  byte bStack_79;
  undefined8 ***local_78;
  size_t local_70;
  byte bStack_61;
  
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  if (puVar12 != puVar10) {
    do {
      puVar6 = (undefined8 *)param_2[1];
      for (puVar5 = (undefined8 *)*param_2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        (**(code **)(*(long *)*puVar12 + 0x20))(&local_78);
        (**(code **)(*(long *)*puVar5 + 0x20))(&local_90);
        bVar7 = bStack_79;
        uVar13 = (uint)(char)bStack_61;
        sVar1 = local_70;
        if (-1 < (int)uVar13) {
          sVar1 = (ulong)bStack_61;
        }
        sVar2 = local_88;
        if (-1 < (char)bStack_79) {
          sVar2 = (ulong)bStack_79;
        }
        if (sVar1 == sVar2) {
          ppppuVar3 = (undefined8 ****)local_78;
          if (-1 < (int)uVar13) {
            ppppuVar3 = &local_78;
          }
          ppppuVar4 = (undefined8 ****)local_90;
          if (-1 < (char)bStack_79) {
            ppppuVar4 = &local_90;
          }
          iVar9 = memcmp(ppppuVar3,ppppuVar4,sVar1);
          bVar8 = iVar9 == 0;
        }
        else {
          bVar8 = false;
        }
        if ((char)bVar7 < '\0') {
          operator_delete(local_90);
          uVar13 = (uint)bStack_61;
        }
        if ((uVar13 >> 7 & 1) != 0) {
          operator_delete(local_78);
        }
        if (bVar8) goto LAB_00c15e5c;
      }
      local_98 = *(long **)(param_1 + 0x48);
      plVar11 = (long *)*puVar12;
      if (local_98 != (long *)0x0) {
        (**(code **)*local_98)();
      }
      (**(code **)(*plVar11 + 0x58))(plVar11,&local_98);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 8))();
      }
LAB_00c15e5c:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  puVar12 = (undefined8 *)*param_2;
  puVar10 = (undefined8 *)param_2[1];
  if (puVar12 != puVar10) {
    do {
      puVar6 = *(undefined8 **)(param_1 + 0x68);
      for (puVar5 = *(undefined8 **)(param_1 + 0x60); puVar5 != puVar6; puVar5 = puVar5 + 1) {
        (**(code **)(*(long *)*puVar12 + 0x20))(&local_78);
        (**(code **)(*(long *)*puVar5 + 0x20))(&local_90);
        bVar7 = bStack_79;
        uVar13 = (uint)(char)bStack_61;
        sVar1 = local_70;
        if (-1 < (int)uVar13) {
          sVar1 = (ulong)bStack_61;
        }
        sVar2 = local_88;
        if (-1 < (char)bStack_79) {
          sVar2 = (ulong)bStack_79;
        }
        if (sVar1 == sVar2) {
          ppppuVar3 = (undefined8 ****)local_78;
          if (-1 < (int)uVar13) {
            ppppuVar3 = &local_78;
          }
          ppppuVar4 = (undefined8 ****)local_90;
          if (-1 < (char)bStack_79) {
            ppppuVar4 = &local_90;
          }
          iVar9 = memcmp(ppppuVar3,ppppuVar4,sVar1);
          bVar8 = iVar9 == 0;
        }
        else {
          bVar8 = false;
        }
        if ((char)bVar7 < '\0') {
          operator_delete(local_90);
          uVar13 = (uint)bStack_61;
        }
        if ((uVar13 >> 7 & 1) != 0) {
          operator_delete(local_78);
        }
        if (bVar8) goto LAB_00c15fa8;
      }
      local_a0 = *(long **)(param_1 + 0x48);
      plVar11 = (long *)*puVar12;
      if (local_a0 != (long *)0x0) {
        (**(code **)*local_a0)();
      }
      (**(code **)(*plVar11 + 0x48))(plVar11,&local_a0);
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 8))();
      }
LAB_00c15fa8:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  if ((long *)(param_1 + 0x60) != param_2) {
    FUN_00c1684c();
  }
  return;
}


// ===== 00c16118  FUN_00c16118 =====

void FUN_00c16118(long param_1)

{
  FUN_00c15e08(param_1 + -0x10);
  return;
}


// ===== 00c16124  FUN_00c16124 =====

void FUN_00c16124(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x80))();
  plVar2 = (long *)param_2[10];
  if ((plVar2 != (long *)0x0) && ((uVar1 >> 0x20 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c16174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xa0))(param_1,plVar2,uVar1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00c16190  FUN_00c16190 =====

void FUN_00c16190(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*(long *)(param_2 + -0x10) + 0x80))((long *)(param_2 + -0x10));
  plVar2 = *(long **)(param_2 + 0x40);
  if ((plVar2 != (long *)0x0) && ((uVar1 >> 0x20 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c161e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xa0))(param_1,plVar2,uVar1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00c16200  FUN_00c16200 =====

void FUN_00c16200(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *local_38;
  
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 != (long *)0x0) {
    if (*(char *)(param_1 + 0x5c) == '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 0x58);
    }
    else {
      uVar3 = 0;
    }
    local_38 = (long *)*param_2;
    if (local_38 != (long *)0x0) {
      (**(code **)*local_38)();
    }
    (**(code **)(*plVar2 + 0x78))(plVar2,uVar3,&local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  lVar1 = *param_2;
  *param_2 = 0;
  plVar2 = *(long **)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}


// ===== 00c162bc  FUN_00c162bc =====

void FUN_00c162bc(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *local_38;
  
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      uVar3 = 0;
    }
    local_38 = (long *)*param_2;
    if (local_38 != (long *)0x0) {
      (**(code **)*local_38)();
    }
    (**(code **)(*plVar2 + 0x78))(plVar2,uVar3,&local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  lVar1 = *param_2;
  *param_2 = 0;
  plVar2 = *(long **)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}


// ===== 00c16378  FUN_00c16378 =====

void FUN_00c16378(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *local_38;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if (*(char *)(param_1 + 0x44) == '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      uVar3 = 0;
    }
    local_38 = (long *)*param_2;
    if (local_38 != (long *)0x0) {
      (**(code **)*local_38)();
    }
    (**(code **)(*plVar2 + 0x78))(plVar2,uVar3,&local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  lVar1 = *param_2;
  *param_2 = 0;
  plVar2 = *(long **)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}


// ===== 00c16434  FUN_00c16434 =====

void FUN_00c16434(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_1[0x11] = (long)param_2;
  if ((param_2 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00c16484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,uVar1);
    return;
  }
  return;
}


// ===== 00c1648c  FUN_00c1648c =====

void FUN_00c1648c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined8 **)(param_1 + 0x78) = param_2;
  if ((param_2 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0x80) & 1) != 0)) {
    uVar1 = (**(code **)(*(long *)(param_1 + -0x10) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00c164dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,uVar1);
    return;
  }
  return;
}


// ===== 00c164e4  FUN_00c164e4 =====

void FUN_00c164e4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  FUN_00c1b064(param_1 + 0xa8);
  plVar3 = *(long **)(param_1 + 0x50);
  if ((plVar3 != (long *)0x0) && (*(char *)(param_1 + 0x5c) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = FUN_00c1b074(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00c16548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x80))(plVar3,uVar1,uVar2);
    return;
  }
  return;
}


// ===== 00c16560  FUN_00c16560 =====

void FUN_00c16560(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  FUN_00c1b064(param_1 + 0x98);
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && (*(char *)(param_1 + 0x4c) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = FUN_00c1b074(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00c165c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x80))(plVar3,uVar1,uVar2);
    return;
  }
  return;
}


// ===== 00c165dc  FUN_00c165dc =====

void FUN_00c165dc(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    plVar1 = *(long **)(param_1 + 0x50);
    if (plVar1 != (long *)0x0) {
      if (*(char *)(param_1 + 0x5c) == '\x01') {
        (**(code **)(*plVar1 + 0xb8))(0,plVar1,*(undefined4 *)(param_1 + 0x58));
      }
      else {
        (**(code **)(*plVar1 + 0xc0))(0);
      }
    }
    FUN_007ebdcc(*(undefined8 *)(param_1 + 0xc0));
  }
  else {
    FUN_007ebdd8(*(undefined8 *)(param_1 + 0xc0));
  }
  *(long *)(param_1 + 0x50) = param_2;
  return;
}


// ===== 00c1665c  FUN_00c1665c =====

void FUN_00c1665c(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
      if (*(char *)(param_1 + 0x4c) == '\x01') {
        (**(code **)(*plVar1 + 0xb8))(0,plVar1,*(undefined4 *)(param_1 + 0x48));
      }
      else {
        (**(code **)(*plVar1 + 0xc0))(0);
      }
    }
    FUN_007ebdcc(*(undefined8 *)(param_1 + 0xb0));
  }
  else {
    FUN_007ebdd8(*(undefined8 *)(param_1 + 0xb0));
  }
  *(long *)(param_1 + 0x40) = param_2;
  return;
}


// ===== 00c166dc  FUN_00c166dc =====

void FUN_00c166dc(long *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)*puVar2)(puVar2,uVar1);
  }
  *(undefined1 *)(param_1 + 0x12) = 1;
  return;
}


// ===== 00c16734  FUN_00c16734 =====

void FUN_00c16734(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(*(long *)(param_1 + -0x10) + 0x40))();
    (**(code **)*puVar2)(puVar2,uVar1);
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}


// ===== 00c1678c  FUN_00c1678c =====

void FUN_00c1678c(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00c167cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,uVar1);
    return;
  }
  return;
}


// ===== 00c167e0  FUN_00c167e0 =====

void FUN_00c167e0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*(long *)(param_1 + -0x10) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00c16820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,uVar1);
    return;
  }
  return;
}


// ===== 00c16834  FUN_00c16834 =====

void FUN_00c16834(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c1684c  FUN_00c1684c =====

void FUN_00c1684c(undefined8 *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = param_1[2];
  plVar7 = (long *)*param_1;
  if ((ulong)((long)(uVar5 - (long)plVar7) >> 3) < param_4) {
    if (plVar7 != (long *)0x0) {
      plVar6 = (long *)param_1[1];
      plVar3 = plVar7;
      if (plVar7 != plVar6) {
        do {
          plVar6 = plVar6 + -1;
          if (plVar6 == (long *)0x0) goto LAB_00c16b08;
          if ((long *)*plVar6 != (long *)0x0) {
            (**(code **)(*(long *)*plVar6 + 8))();
          }
        } while (plVar6 != plVar7);
        plVar3 = (long *)*param_1;
      }
      param_1[1] = plVar7;
      operator_delete(plVar3);
      uVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3d == 0) {
      uVar1 = (long)uVar5 >> 2;
      if ((ulong)((long)uVar5 >> 2) <= param_4) {
        uVar1 = param_4;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 >> 0x3d == 0) {
        plVar7 = (long *)operator_new(uVar1 * 8);
        *param_1 = plVar7;
        param_1[1] = plVar7;
        param_1[2] = plVar7 + uVar1;
        if (param_2 != param_3) {
          do {
            if (plVar7 == (long *)0x0) goto LAB_00c16af4;
            puVar4 = (undefined8 *)*param_2;
            *plVar7 = (long)puVar4;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)();
            }
            param_2 = param_2 + 1;
            plVar7 = plVar7 + 1;
          } while (param_2 != param_3);
        }
        param_1[1] = plVar7;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00c16834();
  }
  plVar6 = (long *)param_1[1];
  lVar8 = (long)plVar6 - (long)plVar7;
  if ((ulong)(lVar8 >> 3) < param_4) {
    plVar3 = param_2;
    plVar2 = plVar6;
    if (plVar6 != plVar7) {
      plVar3 = (long *)((long)param_2 + lVar8);
      do {
        puVar4 = (undefined8 *)*param_2;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4);
        }
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 8))();
        }
        lVar8 = lVar8 + -8;
        param_2 = param_2 + 1;
        *plVar7 = (long)puVar4;
        plVar7 = plVar7 + 1;
      } while (lVar8 != 0);
      plVar6 = (long *)param_1[1];
      plVar2 = plVar6;
    }
    while( true ) {
      if (plVar3 == param_3) {
        param_1[1] = plVar2;
        return;
      }
      if (plVar6 == (long *)0x0) break;
      puVar4 = (undefined8 *)*plVar3;
      *plVar6 = (long)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      plVar6 = plVar6 + 1;
      plVar3 = plVar3 + 1;
      plVar2 = plVar2 + 1;
    }
LAB_00c16af4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar3 = plVar7;
  if (param_2 == param_3) {
    if (plVar7 == plVar6) goto LAB_00c16a30;
  }
  else {
    do {
      puVar4 = (undefined8 *)*param_2;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
      }
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      param_2 = param_2 + 1;
      plVar7 = plVar3 + 1;
      *plVar3 = (long)puVar4;
      plVar3 = plVar7;
    } while (param_2 != param_3);
    plVar6 = (long *)param_1[1];
    if (plVar7 == plVar6) goto LAB_00c16a30;
  }
  do {
    plVar6 = plVar6 + -1;
    if (plVar6 == (long *)0x0) {
LAB_00c16b08:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  } while (plVar6 != plVar7);
LAB_00c16a30:
  param_1[1] = plVar7;
  return;
}


// ===== 00c16b20  FUN_00c16b20 =====

void FUN_00c16b20(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x9c);
  return;
}


// ===== 00c16b44  FUN_00c16b44 =====

bool FUN_00c16b44(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x9c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c16b9c  FUN_00c16b9c =====

void FUN_00c16b9c(void *param_1)

{
  FUN_00c19738();
  operator_delete(param_1);
  return;
}


// ===== 00c16bcc  FUN_00c16bcc =====

bool FUN_00c16bcc(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x9c) == 1;
}


// ===== 00c16be4  FUN_00c16be4 =====

void FUN_00c16be4(long param_1)

{
  FUN_00c19738(param_1 + -8);
  return;
}


// ===== 00c16bf0  FUN_00c16bf0 =====

void FUN_00c16bf0(long param_1)

{
  FUN_00c19738((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c16c24  FUN_00c16c24 =====

void FUN_00c16c24(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 00c16c48  FUN_00c16c48 =====

bool FUN_00c16c48(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c16ca0  FUN_00c16ca0 =====

void FUN_00c16ca0(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d4a9b8;
  param_1[1] = &PTR_FUN_00d4aa48;
  local_c0 = FUN_00c17890;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = 0;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[2];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c178cc;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  return;
}


// ===== 00c16db8  FUN_00c16db8 =====

void FUN_00c16db8(void *param_1)

{
  FUN_00c16ca0();
  operator_delete(param_1);
  return;
}


// ===== 00c16de8  FUN_00c16de8 =====

void FUN_00c16de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c16df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


// ===== 00c16dfc  FUN_00c16dfc =====

void FUN_00c16dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c16e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  return;
}


// ===== 00c16e10  FUN_00c16e10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c16e10(long param_1)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4c48;
  local_b8 = _DAT_001f4c40;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b96744;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_a8;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    bVar1 = (*pcVar3)();
    local_a8 = (undefined1 *)(CONCAT71(local_a8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return bVar1 & 1;
}


// ===== 00c16f20  FUN_00c16f20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c16f20(long param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d0;
  code *local_c8;
  ulong uStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 local_44 [2];
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d0 = *(long *)(param_1 + 0x18);
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = local_44;
  uStack_c0 = _UNK_001f46f8;
  local_c8 = _DAT_001f46f0;
  local_44[0] = param_2;
  FUN_0066f1ac(&local_a8);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b96794;
    local_40[0] = (undefined1 *)&local_d0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&local_a8,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_b8;
  }
  else {
    plVar4 = (long *)(local_d0 + ((long)uStack_c0 >> 1));
    pcVar3 = local_c8;
    if ((uStack_c0 & 1) != 0) {
      pcVar3 = *(code **)(local_c8 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b0);
    local_b8 = (undefined1 *)(CONCAT71(local_b8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&local_a8);
  return bVar1 & 1;
}


// ===== 00c17048  FUN_00c17048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c17048(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f2798;
  local_c0 = _DAT_001f2790;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b967ec;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00c1714c  FUN_00c1714c =====

void FUN_00c1714c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x48))();
  return;
}


// ===== 00c17160  FUN_00c17160 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c17160(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3ab8;
  local_b8 = _DAT_001f3ab0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96838;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c1729c  FUN_00c1729c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1729c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3d98;
  local_b8 = _DAT_001f3d90;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96838;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c173d8  FUN_00c173d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c173d8(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d8;
  code *local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d8 = *(long *)(param_1 + 0x18);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &local_50;
  uStack_c8 = _UNK_001f1cc8;
  local_d0 = _DAT_001f1cc0;
  local_50 = param_2;
  FUN_0066f1ac(&puStack_b0);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b96884;
    local_40[0] = &local_d8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_b0,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_c0;
  }
  else {
    plVar4 = (long *)(local_d8 + ((long)uStack_c8 >> 1));
    pcVar3 = local_d0;
    if ((uStack_c8 & 1) != 0) {
      pcVar3 = *(code **)(local_d0 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b8);
    local_c0 = (undefined1 *)(CONCAT71(local_c0._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&puStack_b0);
  return bVar1 & 1;
}


// ===== 00c174f4  FUN_00c174f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c174f4(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f2918;
  local_a8 = _DAT_001f2910;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b968dc(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00c1758c  FUN_00c1758c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1758c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4708;
  local_b8 = _DAT_001f4700;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96a64;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c176c8  FUN_00c176c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c176c8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3208;
  local_b8 = _DAT_001f3200;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96a64;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c17804  FUN_00c17804 =====

bool FUN_00c17804(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 00c1781c  FUN_00c1781c =====

void FUN_00c1781c(long param_1)

{
  FUN_00c1758c(param_1 + -8);
  return;
}


// ===== 00c17828  FUN_00c17828 =====

void FUN_00c17828(long param_1)

{
  FUN_00c176c8(param_1 + -8);
  return;
}


// ===== 00c17834  FUN_00c17834 =====

void FUN_00c17834(long param_1)

{
  FUN_00c16ca0(param_1 + -8);
  return;
}


// ===== 00c17840  FUN_00c17840 =====

void FUN_00c17840(long param_1)

{
  FUN_00c16ca0((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c17874  FUN_00c17874 =====

void FUN_00c17874(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1787c);
  (*pcVar1)();
}


// ===== 00c1787c  FUN_00c1787c =====

void FUN_00c1787c(long param_1)

{
  FUN_00c16ca0(param_1 + -8);
  return;
}


// ===== 00c17888  FUN_00c17888 =====

void FUN_00c17888(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc17890);
  (*pcVar1)();
}


// ===== 00c17890  FUN_00c17890 =====

void FUN_00c17890(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00c178cc  FUN_00c178cc =====

void FUN_00c178cc(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00c17910  FUN_00c17910 =====

void FUN_00c17910(undefined8 *param_1)

{
  FUN_00c157d0(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}


// ===== 00c17924  FUN_00c17924 =====

void FUN_00c17924(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)param_1[1];
  if ((*(char *)param_1[2] == '\x01') && (plVar2 = *(long **)(lVar1 + 0x50), plVar2 != (long *)0x0))
  {
    if (*(char *)(lVar1 + 0x5c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00c17970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined4 *)(lVar1 + 0x58));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c17980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xc0))(*(undefined8 *)param_1[1]);
    return;
  }
  return;
}


// ===== 00c17984  FUN_00c17984 =====

void FUN_00c17984(long param_1)

{
  long ****pppplVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long lVar4;
  long ****pppplVar5;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x18);
  local_38 = 0;
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  if (lVar4 != param_1 + 0x10) {
    do {
      ppplVar3 = local_48;
      pppplVar1 = (long ****)operator_new(0x18);
      if ((pppplVar1 == (long ****)0x0) || (pppplVar1 == (long ****)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      ppplVar2 = *(long ****)(lVar4 + 0x10);
      *pppplVar1 = ppplVar3;
      pppplVar1[1] = (long ***)&local_48;
      pppplVar1[2] = ppplVar2;
      ppplVar3[1] = (long **)pppplVar1;
      local_38 = local_38 + 1;
      lVar4 = *(long *)(lVar4 + 8);
      local_48 = (long ***)pppplVar1;
    } while (lVar4 != param_1 + 0x10);
    for (pppplVar1 = (long ****)local_40; pppplVar1 != &local_48;
        pppplVar1 = (long ****)pppplVar1[1]) {
      (*(code *)**pppplVar1[2])();
    }
    if (local_38 != 0) {
      ppplVar3 = ((long ****)local_48)[1];
      (*local_40)[1] = (long *)ppplVar3;
      *ppplVar3 = *local_40;
      local_38 = 0;
      pppplVar1 = (long ****)local_40;
      while (pppplVar1 != &local_48) {
        if ((pppplVar1 == (long ****)0xfffffffffffffff0) || (pppplVar1 == (long ****)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pppplVar5 = (long ****)pppplVar1[1];
        operator_delete(pppplVar1);
        pppplVar1 = pppplVar5;
      }
    }
  }
  return;
}


// ===== 00c17ac0  FUN_00c17ac0 =====

void FUN_00c17ac0(undefined8 *param_1)

{
  FUN_00c156cc(*param_1,*(undefined8 *)param_1[1],*(undefined1 *)param_1[2],
               *(undefined4 *)param_1[3]);
  return;
}


// ===== 00c17adc  FUN_00c17adc =====

int FUN_00c17adc(void)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(1,&DAT_00dbae20);
  return iVar1 + 1;
}


// ===== 00c17b08  FUN_00c17b08 =====

void FUN_00c17b08(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *local_68;
  
  lVar7 = *param_2;
  lVar10 = param_2[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar10 - lVar7 != 0) {
    lVar7 = lVar10 - lVar7 >> 3;
    if ((ulong)(lVar7 * -0x5555555555555555) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c16834();
    }
    puVar3 = (undefined8 *)operator_new(lVar7 * 0x5555555555555558);
    uVar8 = lVar7 * 0x5555555555555558 - 8U >> 3;
    *param_1 = puVar3;
    if ((ulong)-(long)puVar3 >> 3 <= uVar8) {
      uVar8 = (ulong)-(long)puVar3 >> 3;
    }
    puVar5 = puVar3 + lVar7 * 0xaaaaaaaaaaaaaab;
    param_1[2] = puVar5;
    puVar9 = puVar3;
    if ((5 < uVar8) && ((-(int)puVar3 & 7U) == 0)) {
      uVar1 = uVar8 + 1 & 3;
      uVar2 = 4;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      puVar11 = puVar3 + 2;
      lVar10 = (uVar8 + 1) - uVar2;
      puVar9 = puVar3 + lVar10;
      do {
        lVar10 = lVar10 + -4;
        puVar11[-1] = 0;
        puVar11[-2] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11 = puVar11 + 4;
      } while (lVar10 != 0);
    }
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar11 = puVar9 + 1;
      *puVar9 = 0;
      puVar9 = puVar11;
    } while (puVar11 != puVar5);
    lVar10 = 0;
    uVar8 = 0;
    param_1[1] = puVar5;
    do {
      uVar4 = FUN_007e06bc();
      if ((ulong)((param_2[1] - *param_2 >> 3) * -0x5555555555555555) <= uVar8) {
LAB_00c17cec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_00c17d18(&local_68,*param_2 + lVar10);
      plVar6 = local_68;
      local_68 = (long *)0x0;
      puVar5 = (undefined8 *)operator_new(0x28);
      puVar5[2] = uVar4;
      puVar5[3] = plVar6;
      *puVar5 = &PTR_FUN_00d46cd0;
      puVar5[1] = &PTR_FUN_00d46d60;
      *(undefined4 *)(puVar5 + 4) = 0;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d0f740(1,puVar5 + 4);
      }
      if (lVar7 * -0x5555555555555555 - uVar8 == 0) goto LAB_00c17cec;
      plVar6 = (long *)puVar3[uVar8];
      puVar3[uVar8] = puVar5;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar8 < (ulong)((param_2[1] - *param_2 >> 3) * -0x5555555555555555));
  }
  return;
}


// ===== 00c17d18  FUN_00c17d18 =====

void FUN_00c17d18(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x78);
  cVar1 = *(char *)((long)param_2 + 0x17);
  puVar2[3] = puVar2 + 2;
  puVar2[4] = 0;
  puVar2[2] = puVar2 + 2;
  *puVar2 = &PTR_FUN_00d4aa78;
  puVar2[1] = &PTR_FUN_00d4ab00;
  if (cVar1 < '\0') {
    FUN_005478d8(puVar2 + 5,*param_2,param_2[1]);
  }
  else {
    uVar4 = *param_2;
    uVar3 = param_2[2];
    puVar2[6] = param_2[1];
    puVar2[5] = uVar4;
    puVar2[7] = uVar3;
  }
  *(undefined4 *)(puVar2 + 0xe) = 0;
  *puVar2 = &PTR_FUN_00d4abe8;
  puVar2[1] = &PTR_FUN_00d4ac78;
  *param_1 = puVar2;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 0xe);
  }
  return;
}


// ===== 00c17dcc  FUN_00c17dcc =====

uint FUN_00c17dcc(long param_1,long *param_2)

{
  uint uVar1;
  long *local_8;
  
  local_8 = (long *)*param_2;
  if (local_8 != (long *)0x0) {
    (**(code **)*local_8)();
  }
  uVar1 = FUN_00c17e38(param_1,param_1 + 0x40,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00c17e38  FUN_00c17e38 =====

bool FUN_00c17e38(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 ****__s1;
  void **__s2;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *local_80;
  size_t local_78;
  byte bStack_69;
  undefined8 ***local_68;
  size_t local_60;
  byte bStack_51;
  
  (**(code **)(*(long *)*param_3 + 0x28))(&local_80,(long *)*param_3);
  puVar7 = (undefined8 *)*param_2;
  if (puVar7 != (undefined8 *)param_2[1]) {
    do {
      (**(code **)(*(long *)*puVar7 + 0x28))(&local_68);
      bVar2 = bStack_51;
      __n = local_60;
      if (-1 < (char)bStack_51) {
        __n = (ulong)bStack_51;
      }
      sVar1 = local_78;
      if (-1 < (char)bStack_69) {
        sVar1 = (ulong)bStack_69;
      }
      if (__n == sVar1) {
        __s1 = (undefined8 ****)local_68;
        if (-1 < (char)bStack_51) {
          __s1 = &local_68;
        }
        __s2 = (void **)local_80;
        if (-1 < (char)bStack_69) {
          __s2 = &local_80;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        bVar3 = iVar4 == 0;
      }
      else {
        bVar3 = false;
      }
      if ((char)bVar2 < '\0') {
        operator_delete(local_68);
      }
    } while ((!bVar3) && (puVar7 = puVar7 + 1, puVar7 != (undefined8 *)param_2[1]));
  }
  if ((char)bStack_69 < '\0') {
    operator_delete(local_80);
  }
  puVar8 = (undefined8 *)param_2[1];
  if (puVar7 == puVar8) {
    if (puVar7 < (undefined8 *)param_2[2]) {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar6 = *param_3;
      *param_3 = 0;
      puVar5 = puVar8 + 1;
      *puVar8 = uVar6;
    }
    else {
      puVar5 = (undefined8 *)FUN_00c1916c(param_2,param_3);
    }
    param_2[1] = (long)puVar5;
    FUN_00c19030(param_1);
  }
  return puVar7 == puVar8;
}


// ===== 00c17fc8  FUN_00c17fc8 =====

uint FUN_00c17fc8(long param_1,long *param_2)

{
  uint uVar1;
  long *local_8;
  
  local_8 = (long *)*param_2;
  if (local_8 != (long *)0x0) {
    (**(code **)*local_8)();
  }
  uVar1 = FUN_00c18034(param_1,param_1 + 0x58,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00c18034  FUN_00c18034 =====

bool FUN_00c18034(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 ****__s1;
  void **__s2;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *local_80;
  size_t local_78;
  byte bStack_69;
  undefined8 ***local_68;
  size_t local_60;
  byte bStack_51;
  
  (**(code **)(*(long *)*param_3 + 0x28))(&local_80,(long *)*param_3);
  puVar7 = (undefined8 *)*param_2;
  if (puVar7 != (undefined8 *)param_2[1]) {
    do {
      (**(code **)(*(long *)*puVar7 + 0x28))(&local_68);
      bVar2 = bStack_51;
      __n = local_60;
      if (-1 < (char)bStack_51) {
        __n = (ulong)bStack_51;
      }
      sVar1 = local_78;
      if (-1 < (char)bStack_69) {
        sVar1 = (ulong)bStack_69;
      }
      if (__n == sVar1) {
        __s1 = (undefined8 ****)local_68;
        if (-1 < (char)bStack_51) {
          __s1 = &local_68;
        }
        __s2 = (void **)local_80;
        if (-1 < (char)bStack_69) {
          __s2 = &local_80;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        bVar3 = iVar4 == 0;
      }
      else {
        bVar3 = false;
      }
      if ((char)bVar2 < '\0') {
        operator_delete(local_68);
      }
    } while ((!bVar3) && (puVar7 = puVar7 + 1, puVar7 != (undefined8 *)param_2[1]));
  }
  if ((char)bStack_69 < '\0') {
    operator_delete(local_80);
  }
  puVar8 = (undefined8 *)param_2[1];
  if (puVar7 == puVar8) {
    if (puVar7 < (undefined8 *)param_2[2]) {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar6 = *param_3;
      *param_3 = 0;
      puVar5 = puVar8 + 1;
      *puVar8 = uVar6;
    }
    else {
      puVar5 = (undefined8 *)FUN_00c19404(param_2,param_3);
    }
    param_2[1] = (long)puVar5;
    FUN_00c19030(param_1);
  }
  return puVar7 == puVar8;
}


// ===== 00c181c4  FUN_00c181c4 =====

uint FUN_00c181c4(long param_1,long *param_2)

{
  uint uVar1;
  long *local_8;
  
  local_8 = (long *)*param_2;
  if (local_8 != (long *)0x0) {
    (**(code **)*local_8)();
  }
  uVar1 = FUN_00c18230(param_1,param_1 + 0x40,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00c18230  FUN_00c18230 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c18230(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 *******__s1;
  void **__s2;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  void *local_80;
  size_t local_78;
  byte bStack_69;
  undefined8 *******local_68;
  size_t local_60;
  byte bStack_51;
  
  plVar6 = (long *)*param_3;
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar6 + 0x28))(&local_80,plVar6);
  plVar6 = (long *)*param_2;
  if (plVar6 != (long *)param_2[1]) {
    do {
      (**(code **)(*(long *)*plVar6 + 0x28))(&local_68);
      bVar3 = bStack_51;
      __n = local_60;
      if (-1 < (char)bStack_51) {
        __n = (ulong)bStack_51;
      }
      sVar1 = local_78;
      if (-1 < (char)bStack_69) {
        sVar1 = (ulong)bStack_69;
      }
      if (__n == sVar1) {
        __s1 = local_68;
        if (-1 < (char)bStack_51) {
          __s1 = &local_68;
        }
        __s2 = (void **)local_80;
        if (-1 < (char)bStack_69) {
          __s2 = &local_80;
        }
        iVar5 = memcmp(__s1,__s2,__n);
        bVar4 = iVar5 == 0;
      }
      else {
        bVar4 = false;
      }
      if ((char)bVar3 < '\0') {
        operator_delete(local_68);
      }
    } while ((!bVar4) && (plVar6 = plVar6 + 1, plVar6 != (long *)param_2[1]));
  }
  if ((char)bStack_69 < '\0') {
    operator_delete(local_80);
  }
  plVar7 = (long *)param_2[1];
  if (plVar6 == plVar7) {
    return 0;
  }
  plVar2 = plVar6 + 1;
  if (plVar6 + 1 == plVar7) {
    if (plVar6 == plVar7) goto LAB_00c183d0;
  }
  else {
    do {
      plVar6 = plVar2;
      plVar2 = (long *)plVar6[-1];
      plVar6[-1] = *plVar6;
      *plVar6 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plVar6 + 1;
    } while (plVar6 + 1 != plVar7);
    plVar7 = (long *)param_2[1];
    if (plVar6 == plVar7) goto LAB_00c183d0;
  }
  do {
    plVar7 = plVar7 + -1;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 8))();
    }
  } while (plVar7 != plVar6);
LAB_00c183d0:
  param_2[1] = plVar6;
  FUN_00c19030(param_1);
  return 1;
}


// ===== 00c18414  FUN_00c18414 =====

uint FUN_00c18414(long param_1,long *param_2)

{
  uint uVar1;
  long *local_8;
  
  local_8 = (long *)*param_2;
  if (local_8 != (long *)0x0) {
    (**(code **)*local_8)();
  }
  uVar1 = FUN_00c18480(param_1,param_1 + 0x58,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00c18480  FUN_00c18480 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c18480(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 *******__s1;
  void **__s2;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  void *local_80;
  size_t local_78;
  byte bStack_69;
  undefined8 *******local_68;
  size_t local_60;
  byte bStack_51;
  
  plVar6 = (long *)*param_3;
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar6 + 0x28))(&local_80,plVar6);
  plVar6 = (long *)*param_2;
  if (plVar6 != (long *)param_2[1]) {
    do {
      (**(code **)(*(long *)*plVar6 + 0x28))(&local_68);
      bVar3 = bStack_51;
      __n = local_60;
      if (-1 < (char)bStack_51) {
        __n = (ulong)bStack_51;
      }
      sVar1 = local_78;
      if (-1 < (char)bStack_69) {
        sVar1 = (ulong)bStack_69;
      }
      if (__n == sVar1) {
        __s1 = local_68;
        if (-1 < (char)bStack_51) {
          __s1 = &local_68;
        }
        __s2 = (void **)local_80;
        if (-1 < (char)bStack_69) {
          __s2 = &local_80;
        }
        iVar5 = memcmp(__s1,__s2,__n);
        bVar4 = iVar5 == 0;
      }
      else {
        bVar4 = false;
      }
      if ((char)bVar3 < '\0') {
        operator_delete(local_68);
      }
    } while ((!bVar4) && (plVar6 = plVar6 + 1, plVar6 != (long *)param_2[1]));
  }
  if ((char)bStack_69 < '\0') {
    operator_delete(local_80);
  }
  plVar7 = (long *)param_2[1];
  if (plVar6 == plVar7) {
    return 0;
  }
  plVar2 = plVar6 + 1;
  if (plVar6 + 1 == plVar7) {
    if (plVar6 == plVar7) goto LAB_00c18620;
  }
  else {
    do {
      plVar6 = plVar2;
      plVar2 = (long *)plVar6[-1];
      plVar6[-1] = *plVar6;
      *plVar6 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plVar6 + 1;
    } while (plVar6 + 1 != plVar7);
    plVar7 = (long *)param_2[1];
    if (plVar6 == plVar7) goto LAB_00c18620;
  }
  do {
    plVar7 = plVar7 + -1;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 8))();
    }
  } while (plVar7 != plVar6);
LAB_00c18620:
  param_2[1] = plVar6;
  FUN_00c19030(param_1);
  return 1;
}


// ===== 00c18664  FUN_00c18664 =====

void FUN_00c18664(long *param_1,long param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 ****__s1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 ***local_68;
  size_t local_60;
  byte bStack_51;
  
  plVar8 = *(long **)(param_2 + 0x40);
  plVar7 = *(long **)(param_2 + 0x48);
  if (plVar8 != plVar7) {
    do {
      (**(code **)(*(long *)*plVar8 + 0x28))(&local_68);
      bVar3 = bStack_51;
      bVar2 = *(byte *)((long)param_3 + 0x17);
      __n = local_60;
      if (-1 < (char)bStack_51) {
        __n = (ulong)bStack_51;
      }
      sVar1 = param_3[1];
      if (-1 < (char)bVar2) {
        sVar1 = (ulong)bVar2;
      }
      if (__n == sVar1) {
        __s1 = (undefined8 ****)local_68;
        if (-1 < (char)bStack_51) {
          __s1 = &local_68;
        }
        puVar6 = (undefined8 *)*param_3;
        if (-1 < (char)bVar2) {
          puVar6 = param_3;
        }
        iVar5 = memcmp(__s1,puVar6,__n);
        bVar4 = iVar5 == 0;
      }
      else {
        bVar4 = false;
      }
      if ((char)bVar3 < '\0') {
        operator_delete(local_68);
      }
      plVar7 = *(long **)(param_2 + 0x48);
    } while ((!bVar4) && (plVar8 = plVar8 + 1, plVar8 != plVar7));
  }
  if (plVar8 == plVar7) {
    *param_1 = 0;
  }
  else {
    puVar6 = (undefined8 *)*plVar8;
    *param_1 = (long)puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
  }
  return;
}


// ===== 00c18784  FUN_00c18784 =====

void FUN_00c18784(long *param_1,long param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 ****__s1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 ***local_68;
  size_t local_60;
  byte bStack_51;
  
  plVar8 = *(long **)(param_2 + 0x58);
  plVar7 = *(long **)(param_2 + 0x60);
  if (plVar8 != plVar7) {
    do {
      (**(code **)(*(long *)*plVar8 + 0x28))(&local_68);
      bVar3 = bStack_51;
      bVar2 = *(byte *)((long)param_3 + 0x17);
      __n = local_60;
      if (-1 < (char)bStack_51) {
        __n = (ulong)bStack_51;
      }
      sVar1 = param_3[1];
      if (-1 < (char)bVar2) {
        sVar1 = (ulong)bVar2;
      }
      if (__n == sVar1) {
        __s1 = (undefined8 ****)local_68;
        if (-1 < (char)bStack_51) {
          __s1 = &local_68;
        }
        puVar6 = (undefined8 *)*param_3;
        if (-1 < (char)bVar2) {
          puVar6 = param_3;
        }
        iVar5 = memcmp(__s1,puVar6,__n);
        bVar4 = iVar5 == 0;
      }
      else {
        bVar4 = false;
      }
      if ((char)bVar3 < '\0') {
        operator_delete(local_68);
      }
      plVar7 = *(long **)(param_2 + 0x60);
    } while ((!bVar4) && (plVar8 = plVar8 + 1, plVar8 != plVar7));
  }
  if (plVar8 == plVar7) {
    *param_1 = 0;
  }
  else {
    puVar6 = (undefined8 *)*plVar8;
    *param_1 = (long)puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
  }
  return;
}


// ===== 00c188a4  FUN_00c188a4 =====

void FUN_00c188a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc188ac);
  (*pcVar1)();
}


// ===== 00c188ac  FUN_00c188ac =====

void FUN_00c188ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x3f)) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  return;
}


// ===== 00c188d8  FUN_00c188d8 =====

void FUN_00c188d8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = *(long **)(param_2 + 0x40);
  plVar7 = *(long **)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)plVar7 - (long)plVar5;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
      lVar4 = FUN_00af30b8();
      plVar5 = *(long **)(lVar4 + 0x58);
      plVar7 = *(long **)(lVar4 + 0x60);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      uVar1 = (long)plVar7 - (long)plVar5;
      if (uVar1 != 0) {
        if ((long)uVar1 < 0) {
          auVar8 = FUN_00af33a4();
          lVar4 = auVar8._0_8_;
          plVar5 = (long *)operator_new(0x18);
          if ((plVar5 != (long *)0x0) && (plVar5 != (long *)0xfffffffffffffff0)) {
            plVar7 = (long *)(lVar4 + 0x10);
            lVar6 = *plVar7;
            plVar5[1] = (long)plVar7;
            plVar5[2] = auVar8._8_8_;
            *plVar5 = lVar6;
            *(long **)(lVar6 + 8) = plVar5;
            *plVar7 = (long)plVar5;
            *(long *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + 1;
            return;
          }
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar2 = (long *)operator_new(uVar1);
        *extraout_x8 = plVar2;
        extraout_x8[2] = (long)plVar2 + uVar1;
        do {
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar3 = (undefined8 *)*plVar5;
          *plVar2 = (long)puVar3;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)();
          }
          plVar5 = plVar5 + 1;
          plVar2 = plVar2 + 1;
        } while (plVar5 != plVar7);
        extraout_x8[1] = plVar2;
      }
      return;
    }
    plVar2 = (long *)operator_new(uVar1);
    *param_1 = plVar2;
    param_1[2] = (long)plVar2 + uVar1;
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3 = (undefined8 *)*plVar5;
      *plVar2 = (long)puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
      plVar5 = plVar5 + 1;
      plVar2 = plVar2 + 1;
    } while (plVar5 != plVar7);
    param_1[1] = plVar2;
  }
  return;
}


// ===== 00c1898c  FUN_00c1898c =====

void FUN_00c1898c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = *(long **)(param_2 + 0x58);
  plVar7 = *(long **)(param_2 + 0x60);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)plVar7 - (long)plVar5;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
      auVar8 = FUN_00af33a4();
      lVar4 = auVar8._0_8_;
      plVar5 = (long *)operator_new(0x18);
      if ((plVar5 != (long *)0x0) && (plVar5 != (long *)0xfffffffffffffff0)) {
        plVar7 = (long *)(lVar4 + 0x10);
        lVar6 = *plVar7;
        plVar5[1] = (long)plVar7;
        plVar5[2] = auVar8._8_8_;
        *plVar5 = lVar6;
        *(long **)(lVar6 + 8) = plVar5;
        *plVar7 = (long)plVar5;
        *(long *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar2 = (long *)operator_new(uVar1);
    *param_1 = plVar2;
    param_1[2] = (long)plVar2 + uVar1;
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3 = (undefined8 *)*plVar5;
      *plVar2 = (long)puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
      plVar5 = plVar5 + 1;
      plVar2 = plVar2 + 1;
    } while (plVar5 != plVar7);
    param_1[1] = plVar2;
  }
  return;
}


// ===== 00c18a40  FUN_00c18a40 =====

void FUN_00c18a40(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 0x10);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c18ab0  FUN_00c18ab0 =====

void FUN_00c18ab0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == param_1 + 0x10) {
      return;
    }
    if (*(long *)(lVar1 + 0x10) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  FUN_00adf5f4(param_1 + 0x10,lVar1);
  return;
}


// ===== 00c18ae8  FUN_00c18ae8 =====

void FUN_00c18ae8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 8);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c18b58  FUN_00c18b58 =====

void FUN_00c18b58(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar2 == (long *)(param_1 + 8)) {
      return;
    }
    if (plVar2[2] == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  if (plVar2 != (long *)(param_1 + 8)) {
    plVar1 = (long *)plVar2[1];
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    if ((plVar2 != (long *)0xfffffffffffffff0) && (plVar2 != (long *)0x0)) {
      operator_delete(plVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 00c18c04  FUN_00c18c04 =====

void FUN_00c18c04(long param_1)

{
  FUN_00c18e24(param_1 + -8);
  return;
}


// ===== 00c18c10  FUN_00c18c10 =====

void FUN_00c18c10(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc18c18);
  (*pcVar1)();
}


// ===== 00c18c18  FUN_00c18c18 =====

void FUN_00c18c18(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4ab30;
  param_1[1] = &PTR_FUN_00d4abb8;
  if (param_1[4] != 0) {
    plVar1 = (long *)param_1[3];
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[4] = 0;
    while (plVar1 != param_1 + 2) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00c18cb8  FUN_00c18cb8 =====

void FUN_00c18cb8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc18cc0);
  (*pcVar1)();
}


// ===== 00c18cc0  FUN_00c18cc0 =====

void FUN_00c18cc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00c18cd0  FUN_00c18cd0 =====

void FUN_00c18cd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00c18ce0  FUN_00c18ce0 =====

void FUN_00c18ce0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00c18cf0  FUN_00c18cf0 =====

void FUN_00c18cf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00c18d00  FUN_00c18d00 =====

void FUN_00c18d00(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_FUN_00d4ab30;
  *param_1 = &PTR_FUN_00d4abb8;
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    plVar2 = *(long **)(param_1[1] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[3] = 0;
    while (plVar1 != param_1 + 1) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00c18da0  FUN_00c18da0 =====

void FUN_00c18da0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc18da8);
  (*pcVar1)();
}


// ===== 00c18da8  FUN_00c18da8 =====

void FUN_00c18da8(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x70);
  return;
}


// ===== 00c18dcc  FUN_00c18dcc =====

bool FUN_00c18dcc(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xe);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c18e24  FUN_00c18e24 =====

void FUN_00c18e24(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0xb];
  *param_1 = &PTR_FUN_00d4aa78;
  param_1[1] = &PTR_FUN_00d4ab00;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[0xc];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) goto LAB_00c18f94;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[0xb];
    }
    param_1[0xc] = plVar3;
    operator_delete(plVar1);
  }
  plVar3 = (long *)param_1[8];
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[9];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) goto LAB_00c18f94;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[8];
    }
    param_1[9] = plVar3;
    operator_delete(plVar1);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  *param_1 = &PTR_FUN_00d4ab30;
  param_1[1] = &PTR_FUN_00d4abb8;
  if (param_1[4] != 0) {
    plVar3 = (long *)param_1[3];
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    param_1[4] = 0;
    while (plVar3 != param_1 + 2) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) {
LAB_00c18f94:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar2;
    }
  }
  return;
}


// ===== 00c18fa8  FUN_00c18fa8 =====

void FUN_00c18fa8(void *param_1)

{
  FUN_00c18e24();
  operator_delete(param_1);
  return;
}


// ===== 00c18fd8  FUN_00c18fd8 =====

bool FUN_00c18fd8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x70) == 1;
}


// ===== 00c18ff0  FUN_00c18ff0 =====

void FUN_00c18ff0(long param_1)

{
  FUN_00c18e24(param_1 + -8);
  return;
}


// ===== 00c18ffc  FUN_00c18ffc =====

void FUN_00c18ffc(long param_1)

{
  FUN_00c18e24((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c19030  FUN_00c19030 =====

void FUN_00c19030(long param_1)

{
  long ****pppplVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long lVar4;
  long ****pppplVar5;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x18);
  local_38 = 0;
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  if (lVar4 != param_1 + 0x10) {
    do {
      ppplVar3 = local_48;
      pppplVar1 = (long ****)operator_new(0x18);
      if ((pppplVar1 == (long ****)0x0) || (pppplVar1 == (long ****)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      ppplVar2 = *(long ****)(lVar4 + 0x10);
      *pppplVar1 = ppplVar3;
      pppplVar1[1] = (long ***)&local_48;
      pppplVar1[2] = ppplVar2;
      ppplVar3[1] = (long **)pppplVar1;
      local_38 = local_38 + 1;
      lVar4 = *(long *)(lVar4 + 8);
      local_48 = (long ***)pppplVar1;
    } while (lVar4 != param_1 + 0x10);
    for (pppplVar1 = (long ****)local_40; pppplVar1 != &local_48;
        pppplVar1 = (long ****)pppplVar1[1]) {
      (*(code *)**pppplVar1[2])();
    }
    if (local_38 != 0) {
      ppplVar3 = ((long ****)local_48)[1];
      (*local_40)[1] = (long *)ppplVar3;
      *ppplVar3 = *local_40;
      local_38 = 0;
      pppplVar1 = (long ****)local_40;
      while (pppplVar1 != &local_48) {
        if ((pppplVar1 == (long ****)0xfffffffffffffff0) || (pppplVar1 == (long ****)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pppplVar5 = (long ****)pppplVar1[1];
        operator_delete(pppplVar1);
        pppplVar1 = pppplVar5;
      }
    }
  }
  return;
}


// ===== 00c1916c  FUN_00c1916c =====

undefined8 * FUN_00c1916c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar6 = *param_1;
  lVar17 = param_1[1];
  puVar16 = (undefined8 *)(lVar17 - lVar6);
  uVar1 = ((long)puVar16 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      puVar2 = puVar16;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00c19400;
      pvVar4 = operator_new(uVar8 << 3);
      puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
    }
    if (puVar2 == (undefined8 *)0x0) {
LAB_00c193d4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    plVar14 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar18 = (long)plVar3 - (long)plVar14;
    plVar15 = (long *)((long)puVar2 - ((long)plVar3 - (long)plVar14));
    if (lVar18 != 0) {
      uVar11 = lVar18 - 8U >> 3;
      uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
      uVar1 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = uVar11;
      }
      plVar7 = plVar14;
      plVar9 = plVar15;
      if (0x3b < uVar1) {
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar17) | (int)plVar3 - (int)plVar14) & 7U) == 0)
            && (plVar14 <= plVar14 + uVar13)) && (plVar15 <= plVar15 + uVar13)) {
          uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          if (((long *)((long)pvVar4 + ((uVar13 * 8 + lVar17) - (lVar18 + lVar6)) + 8) <= plVar14)
             || (plVar14 + uVar13 + 1 <= plVar15)) {
            uVar13 = uVar1 + 1 & 3;
            uVar11 = 4;
            if (uVar13 != 0) {
              uVar11 = uVar13;
            }
            lVar6 = (uVar1 + 1) - uVar11;
            plVar7 = plVar14 + lVar6;
            plVar9 = plVar15 + lVar6;
            plVar10 = (long *)((long)(puVar16 + -(lVar18 >> 3)) + (long)pvVar4 + 0x10);
            plVar12 = plVar14 + 2;
            do {
              lVar18 = plVar12[-1];
              lVar17 = plVar12[-2];
              lVar20 = plVar12[1];
              lVar19 = *plVar12;
              lVar6 = lVar6 + -4;
              plVar12[-1] = 0;
              plVar12[-2] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
              plVar10[-1] = lVar18;
              plVar10[-2] = lVar17;
              plVar10[1] = lVar20;
              *plVar10 = lVar19;
              plVar10 = plVar10 + 4;
              plVar12 = plVar12 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00c193d4;
        lVar6 = *plVar7;
        plVar10 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar10;
        plVar9 = plVar9 + 1;
      } while (plVar10 != plVar3);
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 8))();
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
      plVar14 = (long *)*param_1;
    }
    *param_1 = (long)plVar15;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
    return puVar2 + 1;
  }
  FUN_00af30b8();
LAB_00c19400:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c19404  FUN_00c19404 =====

undefined8 * FUN_00c19404(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar6 = *param_1;
  lVar17 = param_1[1];
  puVar16 = (undefined8 *)(lVar17 - lVar6);
  uVar1 = ((long)puVar16 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      puVar2 = puVar16;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00c19698;
      pvVar4 = operator_new(uVar8 << 3);
      puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
    }
    if (puVar2 == (undefined8 *)0x0) {
LAB_00c1966c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    plVar14 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar18 = (long)plVar3 - (long)plVar14;
    plVar15 = (long *)((long)puVar2 - ((long)plVar3 - (long)plVar14));
    if (lVar18 != 0) {
      uVar11 = lVar18 - 8U >> 3;
      uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
      uVar1 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = uVar11;
      }
      plVar7 = plVar14;
      plVar9 = plVar15;
      if (0x3b < uVar1) {
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar17) | (int)plVar3 - (int)plVar14) & 7U) == 0)
            && (plVar14 <= plVar14 + uVar13)) && (plVar15 <= plVar15 + uVar13)) {
          uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          if (((long *)((long)pvVar4 + ((uVar13 * 8 + lVar17) - (lVar18 + lVar6)) + 8) <= plVar14)
             || (plVar14 + uVar13 + 1 <= plVar15)) {
            uVar13 = uVar1 + 1 & 3;
            uVar11 = 4;
            if (uVar13 != 0) {
              uVar11 = uVar13;
            }
            lVar6 = (uVar1 + 1) - uVar11;
            plVar7 = plVar14 + lVar6;
            plVar9 = plVar15 + lVar6;
            plVar10 = (long *)((long)(puVar16 + -(lVar18 >> 3)) + (long)pvVar4 + 0x10);
            plVar12 = plVar14 + 2;
            do {
              lVar18 = plVar12[-1];
              lVar17 = plVar12[-2];
              lVar20 = plVar12[1];
              lVar19 = *plVar12;
              lVar6 = lVar6 + -4;
              plVar12[-1] = 0;
              plVar12[-2] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
              plVar10[-1] = lVar18;
              plVar10[-2] = lVar17;
              plVar10[1] = lVar20;
              *plVar10 = lVar19;
              plVar10 = plVar10 + 4;
              plVar12 = plVar12 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00c1966c;
        lVar6 = *plVar7;
        plVar10 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar10;
        plVar9 = plVar9 + 1;
      } while (plVar10 != plVar3);
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 8))();
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
      plVar14 = (long *)*param_1;
    }
    *param_1 = (long)plVar15;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
    return puVar2 + 1;
  }
  FUN_00af33a4();
LAB_00c19698:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c1969c  FUN_00c1969c =====

int FUN_00c1969c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_18;
  
  param_1[3] = param_1 + 2;
  param_1[4] = 0;
  param_1[2] = param_1 + 2;
  *param_1 = &PTR_FUN_00d4aca8;
  param_1[1] = &PTR_FUN_00d4ad28;
  uVar2 = FUN_005d6490();
  param_1[5] = uVar2;
  param_1[6] = param_2;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  *(undefined4 *)(param_1 + 7) = param_3;
  param_1[10] = 0;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xb),(pthread_mutexattr_t *)&local_18);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  param_1[0x12] = 0;
  param_1[0x10] = param_1 + 0x10;
  param_1[0x11] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return iVar1;
}


// ===== 00c19738  FUN_00c19738 =====

long * FUN_00c19738(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar3;
  
  *param_1 = &PTR_FUN_00d4aca8;
  param_1[1] = &PTR_FUN_00d4ad28;
  if (param_1[0x12] != 0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/remote_audio_source.cc",0x242,
                   "RemoteAudioSource destroyed while sinks_ is non-empty.");
    }
    if (param_1[0x12] != 0) {
      plVar3 = (long *)param_1[0x11];
      plVar4 = *(long **)(param_1[0x10] + 8);
      *(long **)(*plVar3 + 8) = plVar4;
      *plVar4 = *plVar3;
      param_1[0x12] = 0;
      while (plVar3 != param_1 + 0x10) {
        if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) goto LAB_00c198b8;
        plVar4 = (long *)plVar3[1];
        operator_delete(plVar3);
        plVar3 = plVar4;
      }
    }
  }
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xb));
  plVar3 = (long *)(ulong)uVar1;
  if (param_1[10] != 0) {
    plVar3 = (long *)param_1[9];
    plVar4 = *(long **)(param_1[8] + 8);
    *(long **)(*plVar3 + 8) = plVar4;
    *plVar4 = *plVar3;
    param_1[10] = 0;
    while (plVar3 != param_1 + 8) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) goto LAB_00c198b8;
      plVar4 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar4;
    }
  }
  *param_1 = &PTR_FUN_00d489d0;
  param_1[1] = &PTR_FUN_00d48a50;
  if (param_1[4] != 0) {
    plVar3 = (long *)param_1[3];
    plVar4 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar3 + 8) = plVar4;
    *plVar4 = *plVar3;
    param_1[4] = 0;
    while (plVar3 != param_1 + 2) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) {
LAB_00c198b8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar4 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar4;
    }
  }
  return plVar3;
}


// ===== 00c198cc  FUN_00c198cc =====

void FUN_00c198cc(long param_1)

{
  FUN_00c19738(param_1 + -8);
  return;
}


// ===== 00c198d8  FUN_00c198d8 =====

void FUN_00c198d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc198e0);
  (*pcVar1)();
}


// ===== 00c198e0  FUN_00c198e0 =====

void FUN_00c198e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc198e8);
  (*pcVar1)();
}


// ===== 00c198e8  FUN_00c198e8 =====

void FUN_00c198e8(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00d4ad58;
  puVar1[1] = param_1;
  if ((param_3 >> 0x20 & 1) == 0) {
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00c19958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
    return;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c19994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 200))(param_2,param_3 & 0xffffffff,puVar1);
  return;
}


// ===== 00c19998  FUN_00c19998 =====

void FUN_00c19998(undefined8 param_1,long *param_2,ulong param_3)

{
  if ((param_3 >> 0x20 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c199b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xd0))(param_2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c199c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 200))(param_2,param_3 & 0xffffffff,0);
  return;
}


// ===== 00c199c8  FUN_00c199c8 =====

void FUN_00c199c8(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x98) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x98) = param_2;
  FUN_00c199e4();
  return;
}


// ===== 00c199e4  FUN_00c199e4 =====

void FUN_00c199e4(long param_1)

{
  long ****pppplVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long lVar4;
  long ****pppplVar5;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x18);
  local_38 = 0;
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  if (lVar4 != param_1 + 0x10) {
    do {
      ppplVar3 = local_48;
      pppplVar1 = (long ****)operator_new(0x18);
      if ((pppplVar1 == (long ****)0x0) || (pppplVar1 == (long ****)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      ppplVar2 = *(long ****)(lVar4 + 0x10);
      *pppplVar1 = ppplVar3;
      pppplVar1[1] = (long ***)&local_48;
      pppplVar1[2] = ppplVar2;
      ppplVar3[1] = (long **)pppplVar1;
      local_38 = local_38 + 1;
      lVar4 = *(long *)(lVar4 + 8);
      local_48 = (long ***)pppplVar1;
    } while (lVar4 != param_1 + 0x10);
    for (pppplVar1 = (long ****)local_40; pppplVar1 != &local_48;
        pppplVar1 = (long ****)pppplVar1[1]) {
      (*(code *)**pppplVar1[2])();
    }
    if (local_38 != 0) {
      ppplVar3 = ((long ****)local_48)[1];
      (*local_40)[1] = (long *)ppplVar3;
      *ppplVar3 = *local_40;
      local_38 = 0;
      pppplVar1 = (long ****)local_40;
      while (pppplVar1 != &local_48) {
        if ((pppplVar1 == (long ****)0xfffffffffffffff0) || (pppplVar1 == (long ****)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pppplVar5 = (long ****)pppplVar1[1];
        operator_delete(pppplVar1);
        pppplVar1 = pppplVar5;
      }
    }
  }
  return;
}


// ===== 00c19b20  FUN_00c19b20 =====

undefined4 FUN_00c19b20(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}


// ===== 00c19b2c  FUN_00c19b2c =====

undefined8 FUN_00c19b2c(void)

{
  return 1;
}


// ===== 00c19b38  FUN_00c19b38 =====

void FUN_00c19b38(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  void *local_48 [2];
  char cStack_31;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_008490e4(local_48,param_1,"RAS::%s({volume=%.2f})","SetVolume");
    FUN_00623bb0(&DAT_001f627a,"../../pc/remote_audio_source.cc",0x3c1,local_48);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  for (lVar2 = *(long *)(param_2 + 0x48); lVar2 != param_2 + 0x40; lVar2 = *(long *)(lVar2 + 8)) {
    (**(code **)**(undefined8 **)(lVar2 + 0x10))(param_1);
  }
  return;
}


// ===== 00c19bf8  FUN_00c19bf8 =====

void FUN_00c19bf8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 0x40);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c19c68  FUN_00c19c68 =====

void FUN_00c19c68(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_00c19c98(param_1 + 0x40,&local_18);
  return;
}


// ===== 00c19c98  FUN_00c19c98 =====

long FUN_00c19c98(long *****param_1,undefined8 *param_2)

{
  bool bVar1;
  long ****pppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long lVar7;
  long ****local_48;
  long ****local_40;
  long local_38;
  
  ppppplVar3 = (long *****)param_1[1];
  local_38 = 0;
  local_48 = (long ****)&local_48;
  local_40 = (long ****)&local_48;
  if (ppppplVar3 == param_1) {
    lVar7 = 0;
  }
  else {
    do {
      ppppplVar4 = (long *****)ppppplVar3[1];
      if (ppppplVar3[2] == (long ****)*param_2) {
        if (ppppplVar4 == param_1) {
          bVar1 = true;
          if (ppppplVar3 == ppppplVar4) goto LAB_00c19d18;
LAB_00c19d2c:
          ppppplVar5 = (long *****)*ppppplVar4;
          if (&local_48 != param_1) {
            lVar7 = 1;
            for (ppppplVar6 = ppppplVar3; ppppplVar6 != ppppplVar5;
                ppppplVar6 = (long *****)ppppplVar6[1]) {
              lVar7 = lVar7 + 1;
            }
            local_38 = local_38 + lVar7;
            param_1[2] = (long ****)((long)param_1[2] - lVar7);
          }
          pppplVar2 = ppppplVar5[1];
          (*ppppplVar3)[1] = (long ***)pppplVar2;
          *pppplVar2 = (long ***)*ppppplVar3;
          local_48[1] = (long ***)ppppplVar3;
          *ppppplVar3 = local_48;
          ppppplVar5[1] = (long ****)&local_48;
          local_48 = (long ****)ppppplVar5;
          if (bVar1) goto LAB_00c19cd0;
        }
        else {
          do {
            bVar1 = ppppplVar4[2] == ppppplVar3[2];
            if (!bVar1) break;
            ppppplVar4 = (long *****)ppppplVar4[1];
          } while (ppppplVar4 != param_1);
          if (ppppplVar3 != ppppplVar4) goto LAB_00c19d2c;
LAB_00c19d18:
          if (bVar1) goto LAB_00c19cd0;
        }
        ppppplVar4 = (long *****)ppppplVar4[1];
      }
LAB_00c19cd0:
      ppppplVar3 = ppppplVar4;
      lVar7 = local_38;
    } while (ppppplVar3 != param_1);
    if (local_38 != 0) {
      pppplVar2 = (long ****)local_48[1];
      (*local_40)[1] = (long **)pppplVar2;
      *pppplVar2 = *local_40;
      local_38 = 0;
      ppppplVar3 = (long *****)local_40;
      while (ppppplVar3 != &local_48) {
        if ((ppppplVar3 == (long *****)0xfffffffffffffff0) || (ppppplVar3 == (long *****)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        ppppplVar4 = (long *****)ppppplVar3[1];
        operator_delete(ppppplVar3);
        ppppplVar3 = ppppplVar4;
      }
    }
  }
  return lVar7;
}


// ===== 00c19e2c  FUN_00c19e2c =====

int FUN_00c19e2c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  plVar2 = (long *)operator_new(0x18);
  if ((plVar2 != (long *)0x0) && (plVar2 != (long *)0xfffffffffffffff0)) {
    plVar4 = (long *)(param_1 + 0x80);
    lVar3 = *plVar4;
    plVar2[1] = (long)plVar4;
    plVar2[2] = param_2;
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar4 = (long)plVar2;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c19eac  FUN_00c19eac =====

int FUN_00c19eac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  FUN_00c19ef0(param_1 + 0x80,&local_8);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar1;
}


// ===== 00c19ef0  FUN_00c19ef0 =====

long FUN_00c19ef0(long *****param_1,undefined8 *param_2)

{
  bool bVar1;
  long ****pppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long lVar7;
  long ****local_48;
  long ****local_40;
  long local_38;
  
  ppppplVar3 = (long *****)param_1[1];
  local_38 = 0;
  local_48 = (long ****)&local_48;
  local_40 = (long ****)&local_48;
  if (ppppplVar3 == param_1) {
    lVar7 = 0;
  }
  else {
    do {
      ppppplVar4 = (long *****)ppppplVar3[1];
      if (ppppplVar3[2] == (long ****)*param_2) {
        if (ppppplVar4 == param_1) {
          bVar1 = true;
          if (ppppplVar3 == ppppplVar4) goto LAB_00c19f70;
LAB_00c19f84:
          ppppplVar5 = (long *****)*ppppplVar4;
          if (&local_48 != param_1) {
            lVar7 = 1;
            for (ppppplVar6 = ppppplVar3; ppppplVar6 != ppppplVar5;
                ppppplVar6 = (long *****)ppppplVar6[1]) {
              lVar7 = lVar7 + 1;
            }
            local_38 = local_38 + lVar7;
            param_1[2] = (long ****)((long)param_1[2] - lVar7);
          }
          pppplVar2 = ppppplVar5[1];
          (*ppppplVar3)[1] = (long ***)pppplVar2;
          *pppplVar2 = (long ***)*ppppplVar3;
          local_48[1] = (long ***)ppppplVar3;
          *ppppplVar3 = local_48;
          ppppplVar5[1] = (long ****)&local_48;
          local_48 = (long ****)ppppplVar5;
          if (bVar1) goto LAB_00c19f28;
        }
        else {
          do {
            bVar1 = ppppplVar4[2] == ppppplVar3[2];
            if (!bVar1) break;
            ppppplVar4 = (long *****)ppppplVar4[1];
          } while (ppppplVar4 != param_1);
          if (ppppplVar3 != ppppplVar4) goto LAB_00c19f84;
LAB_00c19f70:
          if (bVar1) goto LAB_00c19f28;
        }
        ppppplVar4 = (long *****)ppppplVar4[1];
      }
LAB_00c19f28:
      ppppplVar3 = ppppplVar4;
      lVar7 = local_38;
    } while (ppppplVar3 != param_1);
    if (local_38 != 0) {
      pppplVar2 = (long ****)local_48[1];
      (*local_40)[1] = (long **)pppplVar2;
      *pppplVar2 = *local_40;
      local_38 = 0;
      ppppplVar3 = (long *****)local_40;
      while (ppppplVar3 != &local_48) {
        if ((ppppplVar3 == (long *****)0xfffffffffffffff0) || (ppppplVar3 == (long *****)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        ppppplVar4 = (long *****)ppppplVar3[1];
        operator_delete(ppppplVar3);
        ppppplVar3 = ppppplVar4;
      }
    }
  }
  return lVar7;
}


// ===== 00c1a084  FUN_00c1a084 =====

ulong FUN_00c1a084(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbae30 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbae30), iVar2 != 0)) {
    DAT_00dbae28 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae30);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae28 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbae28,"RemoteAudioSource::OnData",0,0,0,0,0,0);
    local_50 = DAT_00dbae28;
    pcStack_48 = "RemoteAudioSource::OnData";
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  for (lVar4 = *(long *)(param_1 + 0x88); lVar4 != param_1 + 0x80; lVar4 = *(long *)(lVar4 + 8)) {
    (**(code **)(**(long **)(lVar4 + 0x10) + 8))
              (*(long **)(lVar4 + 0x10),*param_2,0x10,*(undefined4 *)(param_2 + 2),param_2[3],
               param_2[1],0,0);
  }
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  uVar3 = (ulong)uVar1;
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    uVar3 = FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar3;
}


// ===== 00c1a1ec  FUN_00c1a1ec =====

void FUN_00c1a1ec(undefined8 *param_1)

{
  long *plVar1;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d4ad58;
  if ((int)plVar1[7] == 1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)*plVar1)(plVar1);
    }
    local_30 = FUN_00c1a440;
    pcStack_28 = FUN_00c1a37c;
    local_40[0] = plVar1;
    (**(code **)(*(long *)plVar1[5] + 8))((long *)plVar1[5],local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    plVar1 = (long *)param_1[1];
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


// ===== 00c1a2a8  FUN_00c1a2a8 =====

void FUN_00c1a2a8(undefined8 *param_1)

{
  long *plVar1;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d4ad58;
  if ((int)plVar1[7] == 1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)*plVar1)(plVar1);
    }
    local_30 = FUN_00c1a440;
    pcStack_28 = FUN_00c1a37c;
    local_40[0] = plVar1;
    (**(code **)(*(long *)plVar1[5] + 8))((long *)plVar1[5],local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    plVar1 = (long *)param_1[1];
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c1a370  FUN_00c1a370 =====

void FUN_00c1a370(long param_1)

{
  FUN_00c1a084(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00c1a37c  FUN_00c1a37c =====

void FUN_00c1a37c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x90) != 0) {
    plVar1 = *(long **)(lVar2 + 0x88);
    plVar3 = *(long **)(*(long *)(lVar2 + 0x80) + 8);
    *(long **)(*plVar1 + 8) = plVar3;
    *plVar3 = *plVar1;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    while (plVar1 != (long *)(lVar2 + 0x80)) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar3 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar3;
    }
  }
  if (*(int *)(*param_1 + 0x98) != 2) {
    *(undefined4 *)(*param_1 + 0x98) = 2;
    FUN_00c199e4();
    return;
  }
  return;
}


// ===== 00c1a440  FUN_00c1a440 =====

void FUN_00c1a440(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar2 = *param_2;
    *param_2 = 0;
    *param_3 = lVar2;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc1a484);
    (*pcVar1)();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1a478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 00c1a484  FUN_00c1a484 =====

void FUN_00c1a484(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)operator_new(0x68);
  FUN_00c1a568(plVar1,param_2,param_3);
  puVar2 = (undefined8 *)*param_4;
  plVar1[10] = (long)&PTR_FUN_00d4ae48;
  *plVar1 = (long)&PTR_FUN_00d4ad80;
  plVar1[1] = (long)&PTR_FUN_00d4ae18;
  plVar1[0xb] = (long)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
    if (plVar1[0xb] != 0) {
      puVar2 = (undefined8 *)(plVar1[0xb] + 8);
      (**(code **)*puVar2)(puVar2,plVar1 + 10);
      (**(code **)(*plVar1 + 0x80))(plVar1);
    }
  }
  *(undefined4 *)((long)plVar1 + 100) = 0;
  *param_1 = plVar1;
  *plVar1 = (long)&PTR_FUN_00d4aff0;
  plVar1[1] = (long)&PTR_FUN_00d4b090;
  plVar1[10] = (long)&PTR_FUN_00d4b0c0;
  if (plVar1 != (long *)0x0) {
    FUN_00d0f740(1,(long)plVar1 + 100);
  }
  return;
}


// ===== 00c1a568  FUN_00c1a568 =====

void FUN_00c1a568(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  *param_1 = &PTR_FUN_00d4ae70;
  param_1[1] = &PTR_FUN_00d4af00;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    __dest = param_1 + 6;
    *(char *)((long)param_1 + 0x47) = (char)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[6] = __dest;
    param_1[7] = param_3;
    param_1[8] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00c1a678  FUN_00c1a678 =====

void FUN_00c1a678(long param_1)

{
  FUN_00c1ae74(param_1 + -8);
  return;
}


// ===== 00c1a684  FUN_00c1a684 =====

void FUN_00c1a684(long param_1)

{
  FUN_00c1ae74(param_1 + -0x50);
  return;
}


// ===== 00c1a690  FUN_00c1a690 =====

void FUN_00c1a690(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1a698);
  (*pcVar1)();
}


// ===== 00c1a698  FUN_00c1a698 =====

void FUN_00c1a698(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1a6a0);
  (*pcVar1)();
}


// ===== 00c1a6a0  FUN_00c1a6a0 =====

void FUN_00c1a6a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1a6a8);
  (*pcVar1)();
}


// ===== 00c1a6a8  FUN_00c1a6a8 =====

void FUN_00c1a6a8(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *__src;
  size_t __n;
  undefined8 *__dest;
  
  __src = PTR_s_audio_00d48a78;
  if (PTR_s_audio_00d48a78 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(PTR_s_audio_00d48a78);
  if (__n < 0x7ffffffffffffff7) {
    if (__n < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (undefined8 *)operator_new(uVar2);
      *param_1 = __dest;
      param_1[1] = __n;
      param_1[2] = uVar2 | 0x8000000000000000;
    }
    if (__dest <= (undefined8 *)((long)__dest + __n)) {
      if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,__src,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00c1a7ac  FUN_00c1a7ac =====

undefined8 FUN_00c1a7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 00c1a7b8  FUN_00c1a7b8 =====

void FUN_00c1a7b8(long param_1)

{
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1a7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x48))();
    return;
  }
  return;
}


// ===== 00c1a7d4  FUN_00c1a7d4 =====

void FUN_00c1a7d4(long param_1)

{
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1a7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x50))();
    return;
  }
  return;
}


// ===== 00c1a7f0  FUN_00c1a7f0 =====

void FUN_00c1a7f0(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (iVar1 != 1) {
LAB_00c1a848:
      FUN_00c17984(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (iVar1 != 0) goto LAB_00c1a848;
  }
  return;
}


// ===== 00c1a85c  FUN_00c1a85c =====

void FUN_00c1a85c(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  iVar1 = *(int *)(param_1 + -8);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + -8) = 1;
    if (iVar1 != 1) {
LAB_00c1a8b4:
      FUN_00c17984(param_1 + -0x50);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + -8) = 0;
    if (iVar1 != 0) goto LAB_00c1a8b4;
  }
  return;
}


// ===== 00c1a8c8  FUN_00c1a8c8 =====

void FUN_00c1a8c8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x47)) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    param_1[1] = *(undefined8 *)(param_2 + 0x38);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
  return;
}


// ===== 00c1a8f4  FUN_00c1a8f4 =====

undefined1 FUN_00c1a8f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}


// ===== 00c1a900  FUN_00c1a900 =====

bool FUN_00c1a900(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  *(byte *)(param_1 + 0x28) = param_2;
  if (bVar1 != (param_2 & 1)) {
    FUN_00c17984();
  }
  return bVar1 != (param_2 & 1);
}


// ===== 00c1a940  FUN_00c1a940 =====

undefined4 FUN_00c1a940(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ===== 00c1a94c  FUN_00c1a94c =====

void FUN_00c1a94c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 0x10);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c1a9bc  FUN_00c1a9bc =====

void FUN_00c1a9bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == param_1 + 0x10) {
      return;
    }
    if (*(long *)(lVar1 + 0x10) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  FUN_00adf5f4(param_1 + 0x10,lVar1);
  return;
}


// ===== 00c1a9f4  FUN_00c1a9f4 =====

void FUN_00c1a9f4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 8);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c1aa64  FUN_00c1aa64 =====

void FUN_00c1aa64(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar2 == (long *)(param_1 + 8)) {
      return;
    }
    if (plVar2[2] == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  if (plVar2 != (long *)(param_1 + 8)) {
    plVar1 = (long *)plVar2[1];
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    if ((plVar2 != (long *)0xfffffffffffffff0) && (plVar2 != (long *)0x0)) {
      operator_delete(plVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 00c1ab10  FUN_00c1ab10 =====

void FUN_00c1ab10(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4ae70;
  param_1[1] = &PTR_FUN_00d4af00;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  *param_1 = &PTR_FUN_00d4af30;
  param_1[1] = &PTR_FUN_00d4afc0;
  if (param_1[4] != 0) {
    plVar1 = (long *)param_1[3];
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[4] = 0;
    while (plVar1 != param_1 + 2) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00c1abd4  FUN_00c1abd4 =====

void FUN_00c1abd4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1abdc);
  (*pcVar1)();
}


// ===== 00c1abdc  FUN_00c1abdc =====

void FUN_00c1abdc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_FUN_00d4ae70;
  *param_1 = &PTR_FUN_00d4af00;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  param_1[-1] = &PTR_FUN_00d4af30;
  *param_1 = &PTR_FUN_00d4afc0;
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    plVar2 = *(long **)(param_1[1] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[3] = 0;
    while (plVar1 != param_1 + 1) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00c1aca0  FUN_00c1aca0 =====

void FUN_00c1aca0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1aca8);
  (*pcVar1)();
}


// ===== 00c1aca8  FUN_00c1aca8 =====

void FUN_00c1aca8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4af30;
  param_1[1] = &PTR_FUN_00d4afc0;
  if (param_1[4] != 0) {
    plVar1 = (long *)param_1[3];
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[4] = 0;
    while (plVar1 != param_1 + 2) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00c1ad48  FUN_00c1ad48 =====

void FUN_00c1ad48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1ad50);
  (*pcVar1)();
}


// ===== 00c1ad50  FUN_00c1ad50 =====

void FUN_00c1ad50(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_FUN_00d4af30;
  *param_1 = &PTR_FUN_00d4afc0;
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    plVar2 = *(long **)(param_1[1] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[3] = 0;
    while (plVar1 != param_1 + 1) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00c1adf0  FUN_00c1adf0 =====

void FUN_00c1adf0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1adf8);
  (*pcVar1)();
}


// ===== 00c1adf8  FUN_00c1adf8 =====

void FUN_00c1adf8(long param_1)

{
  FUN_00d0f740(1,param_1 + 100);
  return;
}


// ===== 00c1ae1c  FUN_00c1ae1c =====

bool FUN_00c1ae1c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 100);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c1ae74  FUN_00c1ae74 =====

void FUN_00c1ae74(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_1 + 9);
  param_1[10] = &PTR_FUN_00d4ae48;
  *param_1 = &PTR_FUN_00d4ad80;
  param_1[1] = &PTR_FUN_00d4ae18;
  *(undefined4 *)(param_1 + 9) = 1;
  if (iVar1 != 1) {
    FUN_00c17984(param_1);
  }
  if (param_1[0xb] != 0) {
    plVar2 = (long *)(param_1[0xb] + 8);
    (**(code **)(*plVar2 + 8))(plVar2,param_1 + 10);
    if ((long *)param_1[0xb] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xb] + 8))();
    }
  }
  *param_1 = &PTR_FUN_00d4ae70;
  param_1[1] = &PTR_FUN_00d4af00;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  *param_1 = &PTR_FUN_00d4af30;
  param_1[1] = &PTR_FUN_00d4afc0;
  if (param_1[4] != 0) {
    plVar2 = (long *)param_1[3];
    plVar3 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar3 = *plVar2;
    param_1[4] = 0;
    while (plVar2 != param_1 + 2) {
      if ((plVar2 == (long *)0xfffffffffffffff0) || (plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar3 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar3;
    }
  }
  return;
}


// ===== 00c1af9c  FUN_00c1af9c =====

void FUN_00c1af9c(void *param_1)

{
  FUN_00c1ae74();
  operator_delete(param_1);
  return;
}


// ===== 00c1afcc  FUN_00c1afcc =====

bool FUN_00c1afcc(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 100) == 1;
}


// ===== 00c1afe4  FUN_00c1afe4 =====

void FUN_00c1afe4(long param_1)

{
  FUN_00c1ae74(param_1 + -8);
  return;
}


// ===== 00c1aff0  FUN_00c1aff0 =====

void FUN_00c1aff0(long param_1)

{
  FUN_00c1ae74((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c1b024  FUN_00c1b024 =====

void FUN_00c1b024(long param_1)

{
  FUN_00c1ae74(param_1 + -0x50);
  return;
}


// ===== 00c1b030  FUN_00c1b030 =====

void FUN_00c1b030(long param_1)

{
  FUN_00c1ae74((void *)(param_1 + -0x50));
  operator_delete((void *)(param_1 + -0x50));
  return;
}


// ===== 00c1b064  FUN_00c1b064 =====

void FUN_00c1b064(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}


// ===== 00c1b074  FUN_00c1b074 =====

uint FUN_00c1b074(double *param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  dVar3 = 0.0;
  if (*(char *)(param_1 + 1) == '\x01') {
    dVar3 = *param_1 * 1000.0;
  }
  uVar2 = 0;
  if (2147483647.0 < dVar3) {
    uVar2 = 2;
  }
  if (dVar3 < -2147483648.0 != NAN(dVar3)) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 2) {
    uVar1 = 0;
    if (uVar2 == 0) {
      uVar2 = (int)dVar3 & ((int)dVar3 >> 0x1f ^ 0xffffffffU);
      if (9999 < (int)uVar2) {
        uVar2 = 10000;
      }
      return uVar2;
    }
  }
  else {
    if (uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    uVar1 = 10000;
  }
  return uVar1;
}


// ===== 00c1b10c  FUN_00c1b10c =====

/* WARNING: Removing unreachable block (ram,0x00c1b210) */

void FUN_00c1b10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  void *local_70;
  void *pvStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  
  local_60 = param_5[2];
  pvStack_68 = (void *)param_5[1];
  local_70 = (void *)*param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_00c17b08(&local_58,&local_70);
  FUN_00c1b268(param_1,param_2,param_3,param_4,&local_58,param_6);
  plVar2 = local_58;
  plVar3 = local_50;
  if (local_58 != (long *)0x0) {
    while (plVar2 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) goto LAB_00c1b254;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
    }
    local_50 = plVar2;
    operator_delete(local_58);
  }
  pvVar1 = pvStack_68;
  if (local_70 != (void *)0x0) {
    while (local_70 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x18);
      if (pvVar1 == (void *)0x0) {
LAB_00c1b254:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_68 = local_70;
    operator_delete(local_70);
  }
  return;
}


// ===== 00c1b268  FUN_00c1b268 =====

void FUN_00c1b268(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *__dest;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *local_68;
  undefined8 local_48;
  
  param_1[3] = (long)param_1;
  param_1[4] = param_2;
  *param_1 = (long)&PTR_FUN_00d4b0e8;
  param_1[1] = (long)&PTR_FUN_00d4b1e8;
  param_1[2] = (long)&PTR_FUN_00d4b210;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_4 < 0x17) {
    __dest = param_1 + 5;
    *(char *)((long)param_1 + 0x3f) = (char)param_4;
  }
  else {
    uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (long *)operator_new(uVar2);
    param_1[5] = (long)__dest;
    param_1[6] = param_4;
    param_1[7] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (long *)((long)__dest + param_4)) {
    if ((__dest <= param_3) && (param_3 < (long *)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_3,param_4);
    *(undefined1 *)((long)__dest + param_4) = 0;
    param_1[8] = param_6;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
    puVar5 = (undefined8 *)operator_new(0x150);
    FUN_00c1def8(puVar5,param_1 + 2);
    *(undefined4 *)(puVar5 + 0x29) = 0;
    param_1[10] = (long)puVar5;
    *puVar5 = &PTR_FUN_00d4b240;
    puVar5[1] = &PTR_FUN_00d4b2f0;
    puVar5[2] = &PTR_FUN_00d4b320;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar5 + 0x29);
    }
    uVar6 = FUN_007e06bc();
    local_68 = (long *)param_1[10];
    if (local_68 != (long *)0x0) {
      (**(code **)*local_68)();
    }
    FUN_00c1ee10(&local_48,param_3,param_4,&local_68,param_2);
    puVar5 = (undefined8 *)operator_new(0x38);
    uVar3 = local_48;
    local_48 = 0;
    puVar5[4] = param_2;
    puVar5[5] = uVar3;
    *puVar5 = &PTR_FUN_00d4b358;
    puVar5[1] = &PTR_FUN_00d4b3f8;
    puVar5[2] = &PTR_FUN_00d4b428;
    puVar5[3] = uVar6;
    *(undefined4 *)(puVar5 + 6) = 0;
    param_1[0xb] = (long)puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar5 + 6);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 8))();
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    uVar4 = FUN_00c17adc();
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined4 *)((long)param_1 + 0x84) = uVar4;
    *(undefined2 *)(param_1 + 0x16) = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    (**(code **)(*param_1 + 0xe0))(param_1,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00c1b4b4  FUN_00c1b4b4 =====

void FUN_00c1b4b4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_00d4b0e8;
  param_1[1] = &PTR_FUN_00d4b1e8;
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
  }
  plVar3 = (long *)param_1[0xc];
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[0xd];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[0xc];
    }
    param_1[0xd] = plVar3;
    operator_delete(plVar1);
  }
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    return;
  }
  return;
}


// ===== 00c1b5ec  FUN_00c1b5ec =====

void FUN_00c1b5ec(void)

{
  return;
}


// ===== 00c1b5f4  FUN_00c1b5f4 =====

void FUN_00c1b5f4(long param_1)

{
  FUN_00c1b4b4(param_1 + -8);
  return;
}


// ===== 00c1b600  FUN_00c1b600 =====

void FUN_00c1b600(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1b608);
  (*pcVar1)();
}


// ===== 00c1b608  FUN_00c1b608 =====

void FUN_00c1b608(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1b610);
  (*pcVar1)();
}


// ===== 00c1b610  FUN_00c1b610 =====

void FUN_00c1b610(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar9 = *(long *)(param_2 + 0x60);
  lVar3 = *(long *)(param_2 + 0x68);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = lVar3 - lVar9;
  if (lVar3 != 0) {
    uVar8 = lVar3 >> 3;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00625650();
    }
    puVar4 = (undefined8 *)operator_new(uVar8 * 0x18);
    puVar2 = puVar4 + uVar8 * 3;
    uVar6 = (uint)(lVar3 - 8U);
    *param_1 = puVar4;
    param_1[2] = puVar2;
    puVar5 = puVar4;
    if ((~uVar6 & 0x18) != 0) {
      uVar7 = (ulong)((uVar6 >> 3) + 1) & 3;
      do {
        if (puVar5 == (undefined8 *)0x0) goto LAB_00c1b798;
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar7 = uVar7 - 1;
        puVar5[2] = 0;
        puVar5 = puVar5 + 3;
      } while (uVar7 != 0);
    }
    if (0x17 < lVar3 - 8U) {
      do {
        if (puVar5 == (undefined8 *)0x0) {
LAB_00c1b798:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        if (puVar5 + 3 == (undefined8 *)0x0) goto LAB_00c1b798;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        if (puVar5 + 6 == (undefined8 *)0x0) goto LAB_00c1b798;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        if (puVar5 + 9 == (undefined8 *)0x0) goto LAB_00c1b798;
        puVar1 = puVar5 + 0xc;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = puVar1;
      } while (puVar1 != puVar2);
    }
    uVar7 = 0;
    param_1[1] = puVar2;
    do {
      (**(code **)(**(long **)(lVar9 + uVar7 * 8) + 0x20))(&local_68);
      if (uVar8 == uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        operator_delete((void *)*puVar4);
      }
      lVar9 = *(long *)(param_2 + 0x60);
      lVar3 = *(long *)(param_2 + 0x68);
      uVar7 = uVar7 + 1;
      puVar4[1] = uStack_60;
      *puVar4 = local_68;
      puVar4[2] = local_58;
      puVar4 = puVar4 + 3;
    } while (uVar7 < (ulong)(lVar3 - lVar9 >> 3));
  }
  return;
}


// ===== 00c1b7c4  FUN_00c1b7c4 =====

void FUN_00c1b7c4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x90);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1b7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c1b7e4  FUN_00c1b7e4 =====

void FUN_00c1b7e4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x60);
  plVar1 = *(long **)(param_2 + 0x68);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (long)plVar1 - (long)plVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c16834();
    }
    plVar3 = (long *)operator_new(uVar2);
    *param_1 = plVar3;
    param_1[2] = (long)plVar3 + uVar2;
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = (undefined8 *)*plVar5;
      *plVar3 = (long)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      plVar5 = plVar5 + 1;
      plVar3 = plVar3 + 1;
    } while (plVar5 != plVar1);
    param_1[1] = plVar3;
  }
  return;
}


// ===== 00c1b898  FUN_00c1b898 =====

void FUN_00c1b898(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  if (param_2[8] == 0) {
    FUN_00669500(param_1);
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0xc0))();
  if ((uVar1 >> 0x20 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c1b8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2[8] + 0xa8))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c1b918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[8] + 0x98))(param_1);
  return;
}


// ===== 00c1b91c  FUN_00c1b91c =====

void FUN_00c1b91c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *local_28;
  
  uVar3 = *param_2;
  *param_2 = 0;
  plVar2 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if ((plVar2 != (long *)0x0) && (*(char *)(param_1 + 0x4c) == '\x01')) {
    local_28 = *(long **)(param_1 + 0x88);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    if (local_28 != (long *)0x0) {
      (**(code **)*local_28)();
    }
    (**(code **)(*plVar2 + 0x70))(plVar2,uVar1,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  return;
}


// ===== 00c1b9c4  FUN_00c1b9c4 =====

void FUN_00c1b9c4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x88);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1b9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c1b9e4  FUN_00c1b9e4 =====

void FUN_00c1b9e4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *local_18;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      uVar3 = 0;
    }
    local_18 = *(long **)(param_1 + 0x98);
    if (local_18 != (long *)0x0) {
      (**(code **)*local_18)();
    }
    (**(code **)(*plVar1 + 0x78))(plVar1,uVar3,&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  return;
}


// ===== 00c1ba94  FUN_00c1ba94 =====

void FUN_00c1ba94(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *local_18;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    if (*(char *)(param_1 + 0x44) == '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      uVar3 = 0;
    }
    local_18 = *(long **)(param_1 + 0x90);
    if (local_18 != (long *)0x0) {
      (**(code **)*local_18)();
    }
    (**(code **)(*plVar1 + 0x78))(plVar1,uVar3,&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  return;
}


// ===== 00c1bb44  FUN_00c1bb44 =====

void FUN_00c1bb44(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00c1e410(*(undefined8 *)(param_1 + 0x50),2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
  iVar1 = *(int *)(lVar2 + 0x50);
  *(undefined4 *)(lVar2 + 0x50) = 1;
  if (iVar1 == 1) {
    return;
  }
  FUN_00c1dcb4();
  return;
}


// ===== 00c1bba0  FUN_00c1bba0 =====

void FUN_00c1bba0(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *local_78;
  long *local_70;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 == (long *)0x0) goto LAB_00c1be44;
  cVar2 = *(char *)(param_1 + 0xb1);
  bVar1 = (byte)((ulong)param_2 >> 0x20);
  if (param_3 != 0) {
    bVar3 = *(byte *)(param_1 + 0x4c);
    if (((uint)bVar3 & (uint)((ulong)param_2 >> 0x20)) == 0) {
      if ((uint)bVar3 == (uint)bVar1) goto LAB_00c1be44;
      if (bVar3 != 0) goto LAB_00c1bc10;
      (**(code **)(*plVar6 + 0xb8))(plVar6,0);
    }
    else {
      if ((bVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (*(int *)(param_1 + 0x48) == (int)param_2) goto LAB_00c1be44;
LAB_00c1bc10:
      (**(code **)(*plVar6 + 0xb0))(plVar6,*(undefined4 *)(param_1 + 0x48),0);
    }
    if ((cVar2 != '\0') && (plVar6 = *(long **)(param_1 + 0x40), plVar6 != (long *)0x0)) {
      if (*(char *)(param_1 + 0x4c) == '\x01') {
        uVar9 = *(undefined4 *)(param_1 + 0x48);
      }
      else {
        uVar9 = 0;
      }
      (**(code **)(*plVar6 + 0xd8))(plVar6,uVar9);
    }
  }
  *(int *)(param_1 + 0x48) = (int)param_2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  uVar7 = FUN_00c1df94(*(undefined8 *)(param_1 + 0x50));
  plVar6 = *(long **)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    (**(code **)(*plVar6 + 0xb0))(plVar6,*(undefined4 *)(param_1 + 0x48));
  }
  else {
    (**(code **)(*plVar6 + 0xb8))(plVar6,uVar7);
  }
  if ((cVar2 != '\0') && (plVar6 = *(long **)(param_1 + 0x40), plVar6 != (long *)0x0)) {
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      uVar9 = *(undefined4 *)(param_1 + 0x48);
      puVar10 = *(undefined8 **)(param_1 + 0x50);
    }
    else {
      uVar9 = 0;
      puVar10 = *(undefined8 **)(param_1 + 0x50);
    }
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
    }
    local_58 = FUN_00c1de4c;
    local_50 = &PTR_FUN_00d4b550;
    local_68[0] = (long *)operator_new(8);
    *local_68[0] = (long)puVar10;
    (**(code **)(*plVar6 + 0xd0))(plVar6,uVar9,local_68);
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68[0]);
    }
  }
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 != (long *)0x0) {
    plVar8 = *(long **)(param_1 + 0x40);
    if (plVar8 == (long *)0x0) goto LAB_00c1be44;
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      uVar9 = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      uVar9 = 0;
    }
    local_70 = plVar6;
    (**(code **)*plVar6)();
    (**(code **)(*plVar8 + 0x78))(plVar8,uVar9,&local_70);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
  }
  plVar6 = *(long **)(param_1 + 0x40);
  if ((plVar6 != (long *)0x0) && (*(char *)(param_1 + 0x4c) == '\x01')) {
    plVar8 = *(long **)(param_1 + 0x88);
    if (plVar8 != (long *)0x0) {
      uVar9 = *(undefined4 *)(param_1 + 0x48);
      local_78 = plVar8;
      (**(code **)*plVar8)();
      (**(code **)(*plVar6 + 0x70))(plVar6,uVar9,&local_78);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 8))();
      }
    }
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    plVar6 = *(long **)(param_1 + 0x40);
    uVar9 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = FUN_00c1b074(param_1 + 0xa0);
    (**(code **)(*plVar6 + 0x80))(plVar6,uVar9,uVar5);
  }
LAB_00c1be44:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c1be9c  FUN_00c1be9c =====

void FUN_00c1be9c(long param_1,ulong param_2)

{
  undefined1 uStack_41;
  long local_40;
  ulong *puStack_38;
  undefined4 *local_30;
  undefined4 local_24;
  ulong local_8;
  
  local_8 = param_2 & 0xffffffff | 0x100000000;
  local_24 = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  puStack_38 = &local_8;
  local_30 = &local_24;
  local_40 = param_1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))
            (*(long **)(param_1 + 0x20),&local_40,FUN_00c1ddf0,&uStack_41);
  FUN_00c1e410(*(undefined8 *)(param_1 + 0x50),1);
  return;
}


// ===== 00c1bf28  FUN_00c1bf28 =====

void FUN_00c1bf28(long param_1)

{
  undefined1 uStack_41;
  long local_40;
  undefined8 *puStack_38;
  undefined4 *local_30;
  undefined4 local_24;
  undefined8 local_8;
  
  local_8 = 0;
  local_24 = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  puStack_38 = &local_8;
  local_30 = &local_24;
  local_40 = param_1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))
            (*(long **)(param_1 + 0x20),&local_40,FUN_00c1ddf0,&uStack_41);
  FUN_00c1e410(*(undefined8 *)(param_1 + 0x50),1);
  return;
}


// ===== 00c1bfac  FUN_00c1bfac =====

ulong FUN_00c1bfac(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (((*(byte *)(param_1 + 0x4c) & 1) == 0) &&
     (plVar2 = *(long **)(param_1 + 0x40), plVar2 != (long *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
    uVar3 = 0;
  }
  else {
    uVar1 = (ulong)*(uint5 *)(param_1 + 0x48);
    uVar3 = (ulong)*(ushort *)(param_1 + 0x4d) << 0x28 | (ulong)*(byte *)(param_1 + 0x4f) << 0x38;
  }
  return uVar3 | uVar1 & 0xffffffffff;
}


// ===== 00c1c014  FUN_00c1c014 =====

/* WARNING: Removing unreachable block (ram,0x00c1c0f8) */

void FUN_00c1c014(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  
  local_40 = param_2[2];
  pvStack_48 = (void *)param_2[1];
  local_50 = (void *)*param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_00c17b08(&local_38,&local_50);
  (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
  plVar2 = local_38;
  plVar3 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar2 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) goto LAB_00c1c134;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
    }
    local_30 = plVar2;
    operator_delete(local_38);
  }
  pvVar1 = pvStack_48;
  if (local_50 != (void *)0x0) {
    while (local_50 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x18);
      if (pvVar1 == (void *)0x0) {
LAB_00c1c134:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00c1c148  FUN_00c1c148 =====

void FUN_00c1c148(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1c16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00c1c174  FUN_00c1c174 =====

void FUN_00c1c174(long param_1,long *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *local_a0;
  long *local_98;
  undefined8 ***local_90;
  size_t local_88;
  byte bStack_79;
  undefined8 ***local_78;
  size_t local_70;
  byte bStack_61;
  
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  if (puVar12 != puVar10) {
    do {
      puVar6 = (undefined8 *)param_2[1];
      for (puVar5 = (undefined8 *)*param_2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        (**(code **)(*(long *)*puVar12 + 0x20))(&local_78);
        (**(code **)(*(long *)*puVar5 + 0x20))(&local_90);
        bVar7 = bStack_79;
        uVar13 = (uint)(char)bStack_61;
        sVar1 = local_70;
        if (-1 < (int)uVar13) {
          sVar1 = (ulong)bStack_61;
        }
        sVar2 = local_88;
        if (-1 < (char)bStack_79) {
          sVar2 = (ulong)bStack_79;
        }
        if (sVar1 == sVar2) {
          ppppuVar3 = (undefined8 ****)local_78;
          if (-1 < (int)uVar13) {
            ppppuVar3 = &local_78;
          }
          ppppuVar4 = (undefined8 ****)local_90;
          if (-1 < (char)bStack_79) {
            ppppuVar4 = &local_90;
          }
          iVar9 = memcmp(ppppuVar3,ppppuVar4,sVar1);
          bVar8 = iVar9 == 0;
        }
        else {
          bVar8 = false;
        }
        if ((char)bVar7 < '\0') {
          operator_delete(local_90);
          uVar13 = (uint)bStack_61;
        }
        if ((uVar13 >> 7 & 1) != 0) {
          operator_delete(local_78);
        }
        if (bVar8) goto LAB_00c1c1c8;
      }
      local_98 = *(long **)(param_1 + 0x58);
      plVar11 = (long *)*puVar12;
      if (local_98 != (long *)0x0) {
        (**(code **)*local_98)();
      }
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_98);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 8))();
      }
LAB_00c1c1c8:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  puVar12 = (undefined8 *)*param_2;
  puVar10 = (undefined8 *)param_2[1];
  if (puVar12 != puVar10) {
    do {
      puVar6 = *(undefined8 **)(param_1 + 0x68);
      for (puVar5 = *(undefined8 **)(param_1 + 0x60); puVar5 != puVar6; puVar5 = puVar5 + 1) {
        (**(code **)(*(long *)*puVar12 + 0x20))(&local_78);
        (**(code **)(*(long *)*puVar5 + 0x20))(&local_90);
        bVar7 = bStack_79;
        uVar13 = (uint)(char)bStack_61;
        sVar1 = local_70;
        if (-1 < (int)uVar13) {
          sVar1 = (ulong)bStack_61;
        }
        sVar2 = local_88;
        if (-1 < (char)bStack_79) {
          sVar2 = (ulong)bStack_79;
        }
        if (sVar1 == sVar2) {
          ppppuVar3 = (undefined8 ****)local_78;
          if (-1 < (int)uVar13) {
            ppppuVar3 = &local_78;
          }
          ppppuVar4 = (undefined8 ****)local_90;
          if (-1 < (char)bStack_79) {
            ppppuVar4 = &local_90;
          }
          iVar9 = memcmp(ppppuVar3,ppppuVar4,sVar1);
          bVar8 = iVar9 == 0;
        }
        else {
          bVar8 = false;
        }
        if ((char)bVar7 < '\0') {
          operator_delete(local_90);
          uVar13 = (uint)bStack_61;
        }
        if ((uVar13 >> 7 & 1) != 0) {
          operator_delete(local_78);
        }
        if (bVar8) goto LAB_00c1c314;
      }
      local_a0 = *(long **)(param_1 + 0x58);
      plVar11 = (long *)*puVar12;
      if (local_a0 != (long *)0x0) {
        (**(code **)*local_a0)();
      }
      (**(code **)(*plVar11 + 0x50))(plVar11,&local_a0);
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 8))();
      }
LAB_00c1c314:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  if ((long *)(param_1 + 0x60) != param_2) {
    FUN_00c1684c();
  }
  return;
}


// ===== 00c1c484  FUN_00c1c484 =====

void FUN_00c1c484(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_1[0xf] = (long)param_2;
  if ((param_2 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00c1c4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,uVar1);
    return;
  }
  return;
}


// ===== 00c1c4dc  FUN_00c1c4dc =====

void FUN_00c1c4dc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  FUN_00c1b064(param_1 + 0xa0);
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && (*(char *)(param_1 + 0x4c) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = FUN_00c1b074(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00c1c540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x80))(plVar3,uVar1,uVar2);
    return;
  }
  return;
}


// ===== 00c1c558  FUN_00c1c558 =====

void FUN_00c1c558(void)

{
  FUN_00c1c560();
  return;
}


// ===== 00c1c560  FUN_00c1c560 =====

void FUN_00c1c560(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *local_70;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x40);
  if (param_2 != plVar3) {
    if (param_2 == (long *)0x0) {
      if (*(char *)(param_1 + 0x4c) == '\x01') {
        (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined4 *)(param_1 + 0x48),0);
      }
      else {
        (**(code **)(*plVar3 + 0xb8))(plVar3,0);
      }
    }
    cVar1 = *(char *)(param_1 + 0xb1);
    if ((cVar1 == '\x01') && (plVar3 = *(long **)(param_1 + 0x40), plVar3 != (long *)0x0)) {
      if (*(char *)(param_1 + 0x4c) == '\x01') {
        uVar5 = *(undefined4 *)(param_1 + 0x48);
      }
      else {
        uVar5 = 0;
      }
      (**(code **)(*plVar3 + 0xd8))(plVar3,uVar5);
    }
    if (param_2 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        FUN_00c1df7c(*(undefined8 *)(param_1 + 0x50));
        return;
      }
      goto LAB_00c1c7a8;
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
    *(long **)(param_1 + 0x40) = plVar3;
    if (plVar3 != (long *)0x0) {
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        if (*(char *)(param_1 + 0x4c) == '\x01') {
          uVar5 = *(undefined4 *)(param_1 + 0x48);
        }
        else {
          uVar5 = 0;
        }
        (**(code **)(*plVar3 + 0xc0))(plVar3,uVar5);
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      if ((cVar1 != '\0') && (plVar3 = *(long **)(param_1 + 0x40), plVar3 != (long *)0x0)) {
        if (*(char *)(param_1 + 0x4c) == '\x01') {
          uVar5 = *(undefined4 *)(param_1 + 0x48);
        }
        else {
          uVar5 = 0;
        }
        puVar6 = *(undefined8 **)(param_1 + 0x50);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
        }
        local_58 = FUN_00c1de4c;
        local_50 = &PTR_FUN_00d4b550;
        local_68[0] = (undefined8 *)operator_new(8);
        *local_68[0] = puVar6;
        (**(code **)(*plVar3 + 0xd0))(plVar3,uVar5,local_68);
        if ((code *)local_50[1] != (code *)0x0) {
          (*(code *)local_50[1])(local_68[0]);
        }
      }
      plVar3 = *(long **)(param_1 + 0x98);
      if (plVar3 != (long *)0x0) {
        plVar4 = *(long **)(param_1 + 0x40);
        if (*(char *)(param_1 + 0x4c) == '\x01') {
          uVar5 = *(undefined4 *)(param_1 + 0x48);
        }
        else {
          uVar5 = 0;
        }
        local_70 = plVar3;
        (**(code **)*plVar3)();
        (**(code **)(*plVar4 + 0x78))(plVar4,uVar5,&local_70);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 8))();
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00c1c7a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c1c7ac  FUN_00c1c7ac =====

void FUN_00c1c7ac(long *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0xf];
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)*puVar2)(puVar2,uVar1);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


// ===== 00c1c804  FUN_00c1c804 =====

void FUN_00c1c804(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0xf];
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00c1c844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,uVar1);
    return;
  }
  return;
}


// ===== 00c1c858  FUN_00c1c858 =====

void FUN_00c1c858(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*param_2 + 0xc0))();
  plVar2 = (long *)param_2[8];
  if ((plVar2 != (long *)0x0) && ((uVar1 >> 0x20 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c1c8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 200))(param_1,plVar2,uVar1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00c1c8c4  FUN_00c1c8c4 =====

void FUN_00c1c8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_51;
  long local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  undefined4 *puStack_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_8;
  
  local_28 = param_3;
  local_8 = param_2;
  local_2c = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  puStack_48 = &local_28;
  local_40 = &local_8;
  puStack_38 = &local_2c;
  local_50 = param_1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))
            (*(long **)(param_1 + 0x20),&local_50,FUN_00c1de08,&uStack_51);
  FUN_00c1e410(*(undefined8 *)(param_1 + 0x50),1);
  return;
}


// ===== 00c1c950  FUN_00c1c950 =====

void FUN_00c1c950(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c1c95c  FUN_00c1c95c =====

void FUN_00c1c95c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(lVar4 + 0x40);
  if (plVar1 == (long *)0x0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/video_rtp_receiver.cc",0xbb3,
                   "VideoRtpReceiver::OnGenerateKeyFrame: No video channel exists.");
      return;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x4c) == '\x01') {
      uVar3 = *(undefined4 *)(lVar4 + 0x48);
    }
    else {
      uVar3 = 0;
    }
    (**(code **)(*plVar1 + 0xc0))(plVar1,uVar3);
    *(undefined1 *)(lVar4 + 0xb0) = 1;
  }
  return;
}


// ===== 00c1c9e8  FUN_00c1c9e8 =====

void FUN_00c1c9e8(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(lVar5 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(char *)(lVar5 + 0x4c) == '\x01') {
      uVar3 = *(undefined4 *)(lVar5 + 0x48);
    }
    else {
      uVar3 = 0;
    }
    if ((param_2 & 1) == 0) {
      (**(code **)(*plVar2 + 0xd8))(plVar2,uVar3);
    }
    else {
      puVar4 = *(undefined8 **)(lVar5 + 0x50);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
      }
      local_58 = FUN_00c1de4c;
      local_50 = &PTR_FUN_00d4b550;
      local_68[0] = (undefined8 *)operator_new(8);
      *local_68[0] = puVar4;
      (**(code **)(*plVar2 + 0xd0))(plVar2,uVar3,local_68);
      if ((code *)local_50[1] != (code *)0x0) {
        (*(code *)local_50[1])(local_68[0]);
      }
    }
  }
  *(byte *)(lVar5 + 0xb1) = param_2 & 1;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c1caf4  FUN_00c1caf4 =====

void FUN_00c1caf4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x148);
  return;
}


// ===== 00c1cb18  FUN_00c1cb18 =====

bool FUN_00c1cb18(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x29);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c1cb70  FUN_00c1cb70 =====

void FUN_00c1cb70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  pvVar4 = (void *)param_1[0x25];
  puVar1 = PTR_DAT_00d52f60 + 0xb8;
  puVar2 = PTR_DAT_00d52f60 + 0xe8;
  *param_1 = (long)(PTR_DAT_00d52f60 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)puVar2;
  if (pvVar4 == (void *)0x0) {
LAB_00c1cc30:
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x20));
    FUN_00adff34(param_1 + 7);
    *param_1 = (long)&PTR_FUN_00d41fe0;
    param_1[1] = (long)&PTR_FUN_00d42070;
    param_1[2] = (long)&PTR_FUN_00d420a0;
    if (param_1[5] != 0) {
      plVar3 = (long *)param_1[4];
      plVar6 = *(long **)(param_1[3] + 8);
      *(long **)(*plVar3 + 8) = plVar6;
      *plVar6 = *plVar3;
      param_1[5] = 0;
      while (plVar3 != param_1 + 3) {
        if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) goto LAB_00c1cc0c;
        plVar6 = (long *)plVar3[1];
        operator_delete(plVar3);
        plVar3 = plVar6;
      }
    }
    return;
  }
  pvVar5 = (void *)param_1[0x26];
  uVar8 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)pvVar4 - (long)pvVar5 << 0x3d) - ((long)pvVar4 - (long)pvVar5)) >> 3;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)pvVar4 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    pvVar5 = (void *)((long)pvVar5 + uVar7 * -8);
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (pvVar5 == pvVar4) {
      param_1[0x26] = (long)pvVar4;
      operator_delete(pvVar4);
      goto LAB_00c1cc30;
    }
    pvVar5 = (void *)((long)pvVar5 + -8);
  } while (pvVar5 != (void *)0x0);
LAB_00c1cc0c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c1ccbc  FUN_00c1ccbc =====

void FUN_00c1ccbc(void *param_1)

{
  FUN_00c1cb70();
  operator_delete(param_1);
  return;
}


// ===== 00c1ccec  FUN_00c1ccec =====

undefined4 FUN_00c1ccec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ===== 00c1ccf8  FUN_00c1ccf8 =====

undefined1 FUN_00c1ccf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x34);
}


// ===== 00c1cd04  FUN_00c1cd04 =====

undefined8 FUN_00c1cd04(void)

{
  return 0;
}


// ===== 00c1cd10  FUN_00c1cd10 =====

undefined8 FUN_00c1cd10(void)

{
  return 0;
}


// ===== 00c1cd1c  FUN_00c1cd1c =====

undefined8 FUN_00c1cd1c(void)

{
  return 0;
}


// ===== 00c1cd28  FUN_00c1cd28 =====

bool FUN_00c1cd28(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x148) == 1;
}


// ===== 00c1cd40  FUN_00c1cd40 =====

void FUN_00c1cd40(long param_1)

{
  FUN_00c1cb70(param_1 + -8);
  return;
}


// ===== 00c1cd4c  FUN_00c1cd4c =====

void FUN_00c1cd4c(long param_1)

{
  FUN_00c1cb70((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


