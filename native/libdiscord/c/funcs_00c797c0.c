// ===== 00c797c0  FUN_00c797c0 =====

void FUN_00c797c0(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  long **pplVar10;
  long **pplVar11;
  code *pcVar12;
  undefined8 uVar13;
  void *pvVar14;
  long *plVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 uStack_101;
  long *local_100;
  undefined1 *puStack_f8;
  code *local_f0;
  undefined1 *puStack_e8;
  undefined1 uStack_d1;
  long *local_d0 [2];
  code *local_c0;
  code *pcStack_b8;
  long *local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  code *local_90;
  undefined1 *puStack_88;
  long *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_007ebde8(param_1[0x19]);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x28ea,
                     "GetStats called after shutdown.");
        return;
      }
      goto LAB_00c79c04;
    }
  }
  else {
    lVar7 = (**(code **)(*(long *)param_1[5] + 0x10))();
    if ((param_1[0x14] == 0) || (param_1[0x13] < lVar7 - param_1[0x12])) {
      puVar1 = (undefined4 *)param_1[0xd];
      if (puVar1 < (undefined4 *)param_1[0xe]) {
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar9 = puVar1 + 8;
        *puVar1 = *param_2;
        uVar13 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_2 + 2) = 0;
        *(undefined8 *)(puVar1 + 2) = uVar13;
        uVar13 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_2 + 4) = 0;
        *(undefined8 *)(puVar1 + 4) = uVar13;
        uVar13 = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(param_2 + 6) = 0;
        *(undefined8 *)(puVar1 + 6) = uVar13;
      }
      else {
        puVar9 = (undefined4 *)FUN_00c81c9c(param_1 + 0xc,param_2);
      }
      param_1[0xd] = (long)puVar9;
      if (param_1[0x1c] != 0) goto LAB_00c79bac;
      if ((char)param_1[8] == '\x01') {
        (**(code **)(*(long *)param_1[5] + 0x10))();
      }
      else {
        FUN_00625ae8();
      }
      FUN_00c87b10(local_d0);
      plVar8 = (long *)operator_new(0x10);
      plVar15 = local_d0[0];
      pvVar16 = (void *)param_1[0x1c];
      local_d0[0] = (long *)0x0;
      param_1[0x1c] = (long)plVar8;
      *plVar8 = lVar7;
      plVar8[1] = (long)plVar15;
      if (pvVar16 != (void *)0x0) {
        pvVar14 = *(void **)((long)pvVar16 + 8);
        if ((pvVar14 != (void *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,pvVar14), iVar5 == 1)) {
          local_b0[0] = (long *)((long)pvVar14 + 0x10);
          FUN_00c83b6c(local_b0,*(undefined8 *)((long)pvVar14 + 0x18));
          operator_delete(pvVar14);
        }
        operator_delete(pvVar16);
        plVar15 = local_d0[0];
        if ((local_d0[0] != (long *)0x0) &&
           (iVar5 = FUN_00d0f7a0(0xffffffff,local_d0[0]), iVar5 == 1)) {
          local_b0[0] = plVar15 + 2;
          FUN_00c83b6c(local_b0,plVar15[3]);
          operator_delete(plVar15);
        }
      }
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00c79d10(&local_100,param_1);
      lVar7 = param_1[0x1a];
      plVar15 = (long *)param_1[10];
      if (lVar7 != 0) {
        FUN_00d0f740(1,lVar7);
      }
      local_b0[0] = param_1;
      (*local_f0)(1,&local_100,&local_a0);
      puStack_88 = puStack_e8;
      pcVar12 = local_f0;
      local_f0 = FUN_00433984;
      puStack_e8 = (undefined1 *)0x0;
      local_90 = pcVar12;
      local_80 = param_1;
      plVar8 = (long *)operator_new(0x40);
      *plVar8 = (long)local_b0[0];
      (*pcVar12)(1,&local_a0,plVar8 + 2);
      puVar4 = puStack_88;
      pcVar12 = local_90;
      local_90 = FUN_00433984;
      puStack_88 = (undefined1 *)0x0;
      plVar8[5] = (long)puVar4;
      plVar8[4] = (long)pcVar12;
      plVar8[6] = (long)local_80;
      local_d0[0] = (long *)operator_new(0x30);
      *local_d0[0] = lVar7;
      local_d0[0][4] = (long)FUN_00c84014;
      local_d0[0][5] = (long)FUN_00c83e10;
      local_d0[0][2] = (long)plVar8;
      local_c0 = FUN_005db390;
      pcStack_b8 = FUN_005db348;
      (**(code **)(*plVar15 + 8))(plVar15,local_d0,&uStack_d1,&uStack_101);
      (*local_c0)(0,local_d0,local_d0);
      (*local_90)(0,&local_a0,&local_a0);
      pplVar10 = &local_100;
      pplVar11 = &local_100;
      pcVar12 = local_f0;
    }
    else {
      lVar7 = param_1[0x19];
      plVar15 = (long *)param_1[9];
      if (lVar7 != 0) {
        FUN_00d0f740(1,lVar7);
      }
      lVar20 = *(long *)(param_2 + 4);
      lVar19 = *(long *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      lVar18 = *(long *)(param_2 + 6);
      *(undefined8 *)(param_2 + 6) = 0;
      uVar2 = *param_2;
      lVar17 = param_1[0x14];
      if (lVar17 != 0) {
        FUN_00d0f740(1,lVar17);
      }
      plVar8 = (long *)operator_new(0x30);
      *plVar8 = (long)param_1;
      *(undefined4 *)(plVar8 + 1) = uVar2;
      plVar8[3] = lVar20;
      plVar8[2] = lVar19;
      plVar8[4] = lVar18;
      plVar8[5] = lVar17;
      local_b0[0] = (long *)operator_new(0x30);
      *local_b0[0] = lVar7;
      local_b0[0][4] = (long)FUN_00c83d38;
      local_b0[0][5] = (long)FUN_00c83d20;
      local_b0[0][2] = (long)plVar8;
      local_a0 = FUN_005db390;
      pcStack_98 = FUN_005db348;
      (**(code **)(*plVar15 + 8))(plVar15,local_b0,local_d0,&local_100);
      pplVar10 = local_b0;
      pplVar11 = local_b0;
      pcVar12 = local_a0;
    }
    (*pcVar12)(0,pplVar10,pplVar11);
  }
LAB_00c79bac:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00c79c04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c79c08  FUN_00c79c08 =====

void FUN_00c79c08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 local_30 [2];
  long *local_28;
  long *local_20;
  long *local_18;
  
  local_20 = (long *)*param_2;
  *param_2 = 0;
  local_30[0] = 1;
  local_28 = (long *)*param_3;
  *param_3 = 0;
  local_18 = (long *)0x0;
  FUN_00c797c0(param_1,local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00c79c8c  FUN_00c79c8c =====

void FUN_00c79c8c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 local_30 [2];
  long *local_28;
  long *local_20;
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  local_30[0] = 2;
  local_28 = (long *)*param_3;
  *param_3 = 0;
  local_20 = (long *)0x0;
  FUN_00c797c0(param_1,local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00c79d10  FUN_00c79d10 =====

/* WARNING: Removing unreachable block (ram,0x00c7a300) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c79d10(undefined8 *param_1,long ****param_2)

{
  long lVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *******pppppppuVar7;
  undefined1 ****ppppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long **pplVar14;
  void *pvVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long **pplVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long ***ppplVar28;
  long *plVar29;
  long ****pppplVar30;
  undefined8 *puVar31;
  long ***ppplVar32;
  long *local_268;
  long ****local_260;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *local_248;
  long ***ppplStack_240;
  long **local_238;
  long ***ppplStack_230;
  undefined1 ****local_228;
  long ***ppplStack_220;
  undefined1 *local_218;
  long ***ppplStack_210;
  long **local_208;
  long **pplStack_200;
  long ***local_1f8;
  long **pplStack_1f0;
  long **local_1e8;
  long *plStack_1e0;
  long *local_1d8;
  long *plStack_1d0;
  undefined1 *local_1c8;
  undefined1 *puStack_1c0;
  undefined1 *local_1b8;
  long *local_1b0;
  long *plStack_1a8;
  undefined1 *local_1a0;
  long ***local_190;
  long **local_188;
  long **pplStack_180;
  undefined1 ****local_178;
  long ***local_170;
  ulong uStack_168;
  long ***local_160;
  long **local_158;
  long **pplStack_150;
  long ***local_148;
  long **local_140;
  long ***ppplStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  long *local_118;
  long lStack_110;
  undefined8 local_f8;
  long local_f0;
  long *local_d0;
  long *plStack_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 *******local_b0;
  undefined8 *******local_a8;
  long local_a0;
  undefined8 local_80;
  long ****local_78 [3];
  
  local_148 = &local_140;
  local_160 = &local_158;
  local_178 = (undefined1 ****)&local_170;
  local_190 = &local_188;
  local_120 = (undefined1 *)0x0;
  ppplStack_138 = (long ***)0x0;
  local_140 = (long **)0x0;
  puStack_128 = (undefined1 *)0x0;
  local_130 = (undefined1 *)0x0;
  pplStack_150 = (long **)0x0;
  local_158 = (long **)0x0;
  uStack_168 = 0;
  local_170 = (long ***)0x0;
  pplStack_180 = (long **)0x0;
  local_188 = (long **)0x0;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_1a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  (*(code *)(*param_2[1])[0x44])(&local_1b0);
  plVar24 = plStack_1a8;
  if (local_1b0 == plStack_1a8) {
    local_248 = (undefined1 *)0x0;
    puStack_258 = (undefined1 *)0x0;
    puStack_250 = (undefined1 *)0x0;
  }
  else {
    plVar19 = local_1b0;
    do {
      pppplVar30 = *(long *****)(*plVar19 + 0x10);
      local_1b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
      local_1c8 = &DAT_aaaaaaaaaaaaaaaa;
      plStack_1d0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_1d8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      plStack_1e0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_1e8 = (long **)&DAT_aaaaaaaaaaaaaaaa;
      pplStack_1f0 = (long **)&DAT_aaaaaaaaaaaaaaaa;
      local_1f8 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
      pplStack_200 = (long **)&DAT_aaaaaaaaaaaaaaaa;
      local_208 = (long **)&DAT_aaaaaaaaaaaaaaaa;
      ppplStack_210 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = &DAT_aaaaaaaaaaaaaaaa;
      ppplStack_220 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
      local_228 = (undefined1 ****)&DAT_aaaaaaaaaaaaaaaa;
      ppplStack_230 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
      local_238 = (long **)&DAT_aaaaaaaaaaaaaaaa;
      ppplStack_240 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
      local_248 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_250 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
      local_260 = pppplVar30;
      if (pppplVar30 != (long ****)0x0) {
        (*(code *)**pppplVar30)(pppplVar30);
      }
      uVar9 = (*(code *)(*pppplVar30)[4])(pppplVar30);
      puStack_258 = (undefined1 *)CONCAT44(puStack_258._4_4_,uVar9);
      (*(code *)(*pppplVar30)[5])(&puStack_250,pppplVar30);
      ppplStack_230 = (long ***)((ulong)ppplStack_230 & 0xffffffffffffff00);
      local_218 = (undefined1 *)((ulong)local_218 & 0xffffffffffffff00);
      if (*(char *)(pppplVar30 + 0x1a) == '\x01') {
        if (*(char *)((long)pppplVar30 + 0xcf) < '\0') {
          FUN_005478d8(&ppplStack_230,pppplVar30[0x17],pppplVar30[0x18]);
        }
        else {
          ppplStack_220 = pppplVar30[0x19];
          local_228 = (undefined1 ****)pppplVar30[0x18];
          ppplStack_230 = pppplVar30[0x17];
        }
        local_218 = (undefined1 *)CONCAT71(local_218._1_7_,1);
      }
      local_1f8 = (long ***)0x0;
      pplStack_200 = (long **)0x0;
      local_1e8 = (long **)0x0;
      pplStack_1f0 = (long **)0x0;
      local_1d8 = (long *)0x0;
      plStack_1e0 = (long *)0x0;
      local_1c8 = (undefined1 *)0x0;
      plStack_1d0 = (long *)0x0;
      local_208 = (long **)0x0;
      ppplStack_210 = (long ***)0x0;
      uVar12 = (*(code *)(*pppplVar30)[0xe])(pppplVar30);
      puStack_1c0._0_5_ = (undefined5)uVar12;
      local_1b8 = (undefined1 *)
                  ((ulong)CONCAT61(local_1b8._2_6_,pppplVar30[0x1e] != (long ***)0x0) << 8);
      ppplVar28 = pppplVar30[10];
      ppplVar32 = pppplVar30[0xb];
      uVar20 = (long)ppplVar32 - (long)ppplVar28;
      if (uVar20 != 0) {
        if ((long)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bf4944();
        }
        plVar13 = (long *)operator_new(uVar20);
        lVar26 = 8;
        plVar17 = plVar13;
        lVar1 = 0;
        do {
          lVar27 = lVar1;
          plVar29 = plVar17;
          lVar21 = lVar26;
          if ((undefined8 *)((long)plVar13 + lVar27) == (undefined8 *)0x0) goto LAB_00c7a588;
          pplVar14 = *ppplVar28;
          *(undefined8 *)((long)plVar13 + lVar27) = pplVar14;
          if (pplVar14 != (long **)0x0) {
            (*(code *)**pplVar14)();
          }
          ppplVar28 = ppplVar28 + 1;
          lVar1 = lVar27 + 8;
          lVar26 = lVar21 + 8;
          plVar17 = plVar29 + 1;
          plVar5 = plVar13;
          lVar22 = lVar1;
        } while (ppplVar28 != ppplVar32);
        while (lVar22 != 0) {
          uVar9 = (**(code **)(*(long *)*plVar5 + 0x38))();
          uVar10 = (**(code **)(**(long **)(*plVar5 + 0x18) + 0x120))(*(long **)(*plVar5 + 0x18));
          uVar11 = (**(code **)(*(long *)*plVar5 + 0x40))((long *)*plVar5);
          if (local_208 < pplStack_200) {
            if (local_208 == (long **)0x0) goto LAB_00c7a588;
            *(undefined4 *)local_208 = uVar9;
            *(undefined4 *)((long)local_208 + 4) = uVar10;
            pplVar14 = (long **)((long)local_208 + 0xc);
            *(undefined4 *)(local_208 + 1) = uVar11;
          }
          else {
            lVar26 = (long)local_208 - (long)ppplStack_210;
            uVar20 = (lVar26 >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar20) goto LAB_00c7a8b8;
            lVar22 = (long)pplStack_200 - (long)ppplStack_210 >> 2;
            uVar25 = lVar22 * 0x5555555555555556;
            if (uVar25 < uVar20 || uVar25 - uVar20 == 0) {
              uVar25 = uVar20;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar22 * -0x5555555555555555)) {
              uVar25 = 0x1555555555555555;
            }
            if (uVar25 == 0) {
              pvVar15 = (void *)0x0;
            }
            else {
              if (0x1555555555555555 < uVar25) goto LAB_00c7a8bc;
              pvVar15 = operator_new(uVar25 * 0xc);
            }
            puVar2 = (undefined4 *)((long)pvVar15 + lVar26);
            if (puVar2 == (undefined4 *)0x0) goto LAB_00c7a588;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar2[2] = uVar11;
            pplVar14 = (long **)(puVar2 + 3);
            pplVar23 = (long **)((long)pvVar15 + uVar25 * 0xc);
            ppplVar32 = (long ***)((long)puVar2 - ((long)local_208 - (long)ppplStack_210));
            memcpy(ppplVar32,ppplStack_210,(long)local_208 - (long)ppplStack_210);
            ppplVar28 = ppplStack_210;
            bVar3 = ppplStack_210 != (long ***)0x0;
            ppplStack_210 = ppplVar32;
            pplStack_200 = pplVar23;
            if (bVar3) {
              local_208 = pplVar14;
              operator_delete(ppplVar28);
            }
          }
          lVar21 = lVar21 + -8;
          plVar5 = plVar5 + 1;
          local_208 = pplVar14;
          lVar22 = lVar21;
        }
        if (plVar13 != (long *)0x0) {
          if (lVar1 != 0) {
            lVar27 = -8 - lVar27;
            do {
              if (plVar29 == (long *)0x0) goto LAB_00c7a89c;
              if ((long *)*plVar29 != (long *)0x0) {
                (**(code **)(*(long *)*plVar29 + 8))();
              }
              lVar27 = lVar27 + 8;
              plVar29 = plVar29 + -1;
            } while (lVar27 != 0);
          }
          operator_delete(plVar13);
        }
      }
      ppplVar28 = pppplVar30[0xd];
      ppplVar32 = pppplVar30[0xe];
      uVar20 = (long)ppplVar32 - (long)ppplVar28;
      if (uVar20 != 0) {
        if ((long)uVar20 < 0) {
          FUN_00bf495c();
LAB_00c7a8b8:
          FUN_00c82c60();
LAB_00c7a8bc:
                    /* WARNING: Subroutine does not return */
          FUN_005d55a4();
        }
        plVar13 = (long *)operator_new(uVar20);
        lVar26 = 8;
        plVar17 = plVar13;
        lVar1 = 0;
        do {
          lVar27 = lVar1;
          plVar29 = plVar17;
          lVar21 = lVar26;
          if ((undefined8 *)((long)plVar13 + lVar27) == (undefined8 *)0x0) goto LAB_00c7a588;
          pplVar14 = *ppplVar28;
          *(undefined8 *)((long)plVar13 + lVar27) = pplVar14;
          if (pplVar14 != (long **)0x0) {
            (*(code *)**pplVar14)();
          }
          ppplVar28 = ppplVar28 + 1;
          lVar1 = lVar27 + 8;
          lVar26 = lVar21 + 8;
          plVar17 = plVar29 + 1;
          plVar5 = plVar13;
          lVar22 = lVar1;
        } while (ppplVar28 != ppplVar32);
        while (lVar22 != 0) {
          (**(code **)(*(long *)*plVar5 + 0x20))(&local_118);
          plVar17 = local_118;
          if (local_118 == (long *)0x0) {
            FUN_005d3510(&local_d0,&DAT_001b3348);
          }
          else {
            (**(code **)(*(long *)*plVar5 + 0x20))(&local_268);
            (**(code **)(*local_268 + 0x28))(&local_d0);
          }
          uVar9 = (**(code **)(**(long **)(*plVar5 + 0x20) + 0xe8))();
          local_b8 = (long *)CONCAT44(local_b8._4_4_,uVar9);
          uVar9 = (**(code **)(*(long *)*plVar5 + 0x40))((long *)*plVar5);
          local_b8 = (long *)CONCAT44(uVar9,(undefined4)local_b8);
          if (pplStack_1f0 < local_1e8) {
            if (pplStack_1f0 == (long **)0x0) {
LAB_00c7a588:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            pplStack_1f0[2] = local_c0;
            pplStack_1f0[1] = plStack_c8;
            *pplStack_1f0 = local_d0;
            plStack_c8 = (long *)0x0;
            local_c0 = (long *)0x0;
            local_d0 = (long *)0x0;
            pplStack_1f0[3] = local_b8;
            pplStack_1f0 = pplStack_1f0 + 4;
          }
          else {
            pplStack_1f0 = (long **)FUN_00c82c78(&local_1f8,&local_d0);
          }
          if ((plVar17 != (long *)0x0) && (local_268 != (long *)0x0)) {
            (**(code **)(*local_268 + 8))();
          }
          if (local_118 != (long *)0x0) {
            (**(code **)(*local_118 + 8))();
          }
          local_d0 = *(long **)(*plVar5 + 0x20);
          if (local_d0 != (long *)0x0) {
            (**(code **)*local_d0)();
          }
          plVar17 = local_d0;
          if (local_1d8 < plStack_1d0) {
            if (local_1d8 == (long *)0x0) goto LAB_00c7a588;
            local_d0 = (long *)0x0;
            plVar16 = local_1d8 + 1;
            *local_1d8 = (long)plVar17;
          }
          else {
            plVar16 = (long *)FUN_00c82f14(&plStack_1e0,&local_d0);
          }
          local_1d8 = plVar16;
          if (local_d0 != (long *)0x0) {
            (**(code **)(*local_d0 + 8))(local_d0);
          }
          lVar21 = lVar21 + -8;
          plVar5 = plVar5 + 1;
          lVar22 = lVar21;
        }
        if (plVar13 != (long *)0x0) {
          if (lVar1 != 0) {
            lVar27 = -8 - lVar27;
            do {
              if (plVar29 == (long *)0x0) goto LAB_00c7a89c;
              if ((long *)*plVar29 != (long *)0x0) {
                (**(code **)(*(long *)*plVar29 + 8))();
              }
              lVar27 = lVar27 + 8;
              plVar29 = plVar29 + -1;
            } while (lVar27 != 0);
          }
          operator_delete(plVar13);
        }
      }
      puVar4 = local_1b8;
      local_1b8 = (undefined1 *)CONCAT71(local_1b8._1_7_,plStack_1e0 != local_1d8);
      if (((ulong)puVar4 & 0x100) != 0) {
        if ((int)puStack_258 == 1) {
          plVar17 = (long *)FUN_00c0f220(pppplVar30);
          FUN_0088b3bc(&local_118);
          local_d0 = plVar17;
          FUN_00c85f58(&plStack_c8,&local_118);
          local_78[0] = &local_160;
          FUN_00c85e44(local_78,&local_d0,&local_d0);
          FUN_0088b3e0(&plStack_c8);
          FUN_0088b3e0(&local_118);
          local_80 = FUN_00c0f258(pppplVar30);
          FUN_0088b58c(&local_118);
          FUN_00c862c0(&local_d0,&local_80,&local_118);
          local_78[0] = &local_190;
          FUN_00c8609c(local_78,&local_d0,&local_d0);
          FUN_0088b5a8(&plStack_c8);
          FUN_0088b5a8(&local_118);
        }
        else if ((int)puStack_258 == 0) {
          plVar17 = (long *)FUN_00c0f23c(pppplVar30);
          FUN_0088b4bc(&local_118);
          local_c0 = (long *)0x0;
          local_b8 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          local_d0 = plVar17;
          FUN_00c85a3c(&plStack_c8,local_118,lStack_110,
                       (lStack_110 - (long)local_118 >> 4) * -0x70a3d70a3d70a3d7);
          local_a8 = (undefined8 *******)0x0;
          local_a0 = 0;
          local_b0 = &local_a8;
          if (local_f0 != 0) {
            local_a8 = (undefined8 *******)FUN_00c05714(&local_b0,local_f8,&local_b0);
            local_a8[2] = &local_a8;
            pppppppuVar7 = local_a8;
            do {
              local_b0 = pppppppuVar7;
              pppppppuVar7 = (undefined8 *******)*local_b0;
            } while ((undefined8 *******)*local_b0 != (undefined8 *******)0x0);
            local_a0 = local_f0;
          }
          local_78[0] = &local_148;
          FUN_00c858b8(local_78,&local_d0,&local_d0);
          FUN_0088b4d8(&plStack_c8);
          FUN_0088b4d8(&local_118);
          local_80 = FUN_00c0f274(pppplVar30);
          FUN_0088b640(&local_118);
          FUN_00c85d34(&local_d0,&local_80,&local_118);
          local_78[0] = (long ****)&local_178;
          FUN_00c85b20(local_78,&local_d0,&local_d0);
          FUN_0088b660(&plStack_c8);
          FUN_0088b660(&local_118);
        }
      }
      puVar4 = puStack_128;
      if (puStack_128 < local_120) {
        FUN_00c831c4(&local_130,puStack_128,&local_260);
        puStack_128 = puVar4 + 0xb0;
      }
      else {
        puStack_128 = (undefined1 *)FUN_00c83330(&local_130,&local_260);
      }
      FUN_00c817cc(&local_260);
      plVar19 = plVar19 + 1;
      local_248 = local_120;
      puStack_258 = local_130;
      puStack_250 = puStack_128;
    } while (plVar19 != plVar24);
  }
  puStack_128 = (undefined1 *)0x0;
  local_120 = (undefined1 *)0x0;
  local_130 = (undefined1 *)0x0;
  ppplStack_240 = local_148;
  local_238 = local_140;
  ppplStack_230 = ppplStack_138;
  ppplVar28 = &local_238;
  if (ppplStack_138 != (long ***)0x0) {
    local_140[2] = (long *)&local_238;
    local_140 = (long **)0x0;
    ppplStack_138 = (long ***)0x0;
    ppplVar28 = ppplStack_240;
    local_148 = &local_140;
  }
  ppplStack_240 = ppplVar28;
  local_218 = (undefined1 *)uStack_168;
  local_228 = local_178;
  ppplStack_220 = local_170;
  ppppuVar8 = (undefined1 ****)&ppplStack_220;
  if (uStack_168 != 0) {
    local_170[2] = (long **)&ppplStack_220;
    local_170 = (long ***)0x0;
    uStack_168 = 0;
    ppppuVar8 = local_228;
    local_178 = (undefined1 ****)&local_170;
  }
  local_228 = ppppuVar8;
  pplStack_200 = pplStack_150;
  ppplStack_210 = local_160;
  local_208 = local_158;
  ppplVar28 = &local_208;
  if (pplStack_150 != (long **)0x0) {
    local_158[2] = (long *)&local_208;
    local_158 = (long **)0x0;
    pplStack_150 = (long **)0x0;
    ppplVar28 = ppplStack_210;
    local_160 = &local_158;
  }
  ppplStack_210 = ppplVar28;
  puVar31 = (undefined8 *)((ulong)&local_260 | 8);
  local_1f8 = local_190;
  pplStack_1f0 = local_188;
  local_1e8 = pplStack_180;
  ppplVar28 = &pplStack_1f0;
  if (pplStack_180 != (long **)0x0) {
    local_188[2] = (long *)&pplStack_1f0;
    local_188 = (long **)0x0;
    pplStack_180 = (long **)0x0;
    ppplVar28 = local_1f8;
    local_190 = &local_188;
  }
  local_1f8 = ppplVar28;
  local_260 = param_2;
  puVar18 = (undefined8 *)operator_new(0x80);
  puVar31[1] = 0;
  puVar31[2] = 0;
  *puVar31 = 0;
  puVar18[4] = ppplStack_240;
  puVar18[1] = puStack_258;
  *puVar18 = local_260;
  puVar18[3] = local_248;
  puVar18[2] = puStack_250;
  puVar31 = puVar18 + 5;
  *puVar31 = local_238;
  puVar18[6] = ppplStack_230;
  if (ppplStack_230 == (long ***)0x0) {
    puVar18[4] = puVar31;
  }
  else {
    local_238[2] = puVar31;
    local_238 = (long **)0x0;
    ppplStack_230 = (long ***)0x0;
    ppplStack_240 = &local_238;
  }
  pplVar14 = (long **)(puVar18 + 8);
  *pplVar14 = (long *)ppplStack_220;
  puVar18[7] = local_228;
  puVar18[9] = local_218;
  if (local_218 == (undefined1 *)0x0) {
    puVar18[7] = pplVar14;
  }
  else {
    ppplStack_220[2] = pplVar14;
    ppplStack_220 = (long ***)0x0;
    local_218 = (undefined1 *)0x0;
    local_228 = (undefined1 ****)&ppplStack_220;
  }
  plVar24 = puVar18 + 0xb;
  *plVar24 = (long)local_208;
  puVar18[10] = ppplStack_210;
  puVar18[0xc] = pplStack_200;
  if (pplStack_200 == (long **)0x0) {
    puVar18[10] = plVar24;
  }
  else {
    local_208[2] = plVar24;
    local_208 = (long **)0x0;
    pplStack_200 = (long **)0x0;
    ppplStack_210 = &local_208;
  }
  plVar24 = puVar18 + 0xe;
  *plVar24 = (long)pplStack_1f0;
  puVar18[0xd] = local_1f8;
  puVar18[0xf] = local_1e8;
  if (local_1e8 == (long **)0x0) {
    puVar18[0xd] = plVar24;
  }
  else {
    pplStack_1f0[2] = plVar24;
    pplStack_1f0 = (long **)0x0;
    local_1e8 = (long **)0x0;
    local_1f8 = &pplStack_1f0;
  }
  *param_1 = puVar18;
  param_1[2] = FUN_00c86f00;
  param_1[3] = FUN_00c863e0;
  FUN_00c819e8(&local_260);
  plVar19 = local_1b0;
  plVar24 = plStack_1a8;
  if (local_1b0 != (long *)0x0) {
    while (plVar19 != plVar24) {
      plVar24 = plVar24 + -1;
      if (plVar24 == (long *)0x0) goto LAB_00c7a89c;
      if ((long *)*plVar24 != (long *)0x0) {
        (**(code **)(*(long *)*plVar24 + 8))();
      }
    }
    plStack_1a8 = plVar19;
    operator_delete(local_1b0);
  }
  local_260 = &local_190;
  FUN_00c8583c(&local_260,local_188);
  local_260 = (long ****)&local_178;
  FUN_00c857c0(&local_260,local_170);
  local_260 = &local_160;
  FUN_00c85744(&local_260,local_158);
  local_260 = &local_148;
  FUN_00c856c8(&local_260,local_140);
  puVar6 = local_130;
  puVar4 = puStack_128;
  if (local_130 != (undefined1 *)0x0) {
    while (puVar6 != puVar4) {
      puVar4 = puVar4 + -0xb0;
      if (puVar4 == (undefined1 *)0x0) {
LAB_00c7a89c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00c817cc(puVar4);
    }
    puStack_128 = puVar6;
    operator_delete(local_130);
  }
  return;
}


// ===== 00c7a8c0  FUN_00c7a8c0 =====

void FUN_00c7a8c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  pvVar3 = *(void **)(param_1 + 0xa0);
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    local_50[0] = (long *)((long)pvVar3 + 0x10);
    FUN_00c83b6c(local_50,*(undefined8 *)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar2 = FUN_007ebde8(*(undefined8 *)(param_1 + 200));
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0xd8);
    plVar4 = *(long **)(param_1 + 0x58);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar5;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00c84a20;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar4 + 8))(plVar4,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00c7a9c4  FUN_00c7a9c4 =====

/* WARNING: Removing unreachable block (ram,0x00c7aa48) */
/* WARNING: Removing unreachable block (ram,0x00c7aa5c) */

void FUN_00c7a9c4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_60 [2];
  code *local_50;
  code *local_48;
  
  FUN_007ebdcc(*(undefined8 *)(param_1 + 200));
  local_60[0] = *(long *)(param_1 + 0xd0);
  if (local_60[0] != 0) {
    FUN_00d0f740(1,local_60[0]);
  }
  plVar1 = *(long **)(param_3 + 8);
  local_50 = FUN_00c84a6c;
  local_48 = FUN_00c84a60;
  if (plVar1 < *(long **)(param_3 + 0x10)) {
    if (plVar1 == (long *)0x0) goto LAB_00c7ab1c;
    *plVar1 = local_60[0];
    local_60[0] = 0;
    plVar2 = plVar1 + 4;
    plVar1[2] = (long)FUN_00c84a6c;
    plVar1[3] = (long)FUN_00c84a60;
    local_50 = FUN_00433984;
    local_48 = (code *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00c11b44(param_3,local_60);
  }
  *(long **)(param_3 + 8) = plVar2;
  (*local_50)(0,local_60,local_60);
  lVar3 = *(long *)(param_1 + 0xd8);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  plVar1 = *(long **)(param_2 + 8);
  local_50 = FUN_00c84af4;
  local_48 = FUN_00c84ae8;
  local_60[0] = lVar3;
  if (plVar1 < *(long **)(param_2 + 0x10)) {
    if (plVar1 == (long *)0x0) {
LAB_00c7ab1c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_60[0] = 0;
    plVar2 = plVar1 + 4;
    *plVar1 = lVar3;
    plVar1[2] = (long)FUN_00c84af4;
    plVar1[3] = (long)FUN_00c84ae8;
    local_50 = FUN_00433984;
    local_48 = (code *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00c11b44(param_2,local_60);
  }
  *(long **)(param_2 + 8) = plVar2;
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 00c7ab50  FUN_00c7ab50 =====

void FUN_00c7ab50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_00c7abac();
  uVar1 = FUN_00c7b370(param_1,param_2,param_5);
  FUN_00c7b42c(uVar1,param_2,param_4,param_5);
  return;
}


// ===== 00c7abac  FUN_00c7abac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c7abac(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  size_t __n;
  undefined8 uVar12;
  void *pvVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char *__s;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined1 *local_4d8;
  size_t sStack_4d0;
  long local_4c8;
  long *local_4c0;
  undefined1 local_4b4 [4];
  long *local_4b0;
  undefined1 *puStack_4a8;
  undefined1 *local_4a0;
  undefined8 local_490;
  size_t sStack_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 *local_420;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  local_4b4[0] = 0xaa;
  FUN_007e0b10(local_4b4);
  plVar21 = (long *)*param_3;
  plVar2 = (long *)param_3[1];
  if (plVar21 != plVar2) {
    __s = *(char **)PTR_PTR_s_audio_00d52d40;
    do {
      if ((*(char *)((long)plVar21 + 0xa4) != '\x01') || ((int)plVar21[0x14] != 4)) {
        plVar22 = *(long **)(*plVar21 + 0x50);
        plVar15 = *(long **)(*plVar21 + 0x58);
        uVar16 = (long)plVar15 - (long)plVar22;
        if (uVar16 != 0) {
          if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00bf4944();
          }
          lVar17 = plVar21[0x13];
          plVar10 = (long *)operator_new(uVar16);
          lVar14 = 8;
          plVar7 = plVar10;
          lVar1 = 0;
          do {
            lVar19 = lVar1;
            plVar20 = plVar7;
            lVar18 = lVar14;
            if ((long *)((long)plVar10 + lVar19) == (long *)0x0) goto LAB_00c7b328;
            puVar11 = (undefined8 *)*plVar22;
            *(long *)((long)plVar10 + lVar19) = (long)puVar11;
            if (puVar11 != (undefined8 *)0x0) {
              (**(code **)*puVar11)();
            }
            plVar22 = plVar22 + 1;
            lVar1 = lVar19 + 8;
            lVar14 = lVar18 + 8;
            plVar7 = plVar20 + 1;
            plVar4 = plVar10;
            lVar5 = lVar1;
          } while (plVar22 != plVar15);
          while (lVar5 != 0) {
            plVar22 = *(long **)(*plVar4 + 0x18);
            (**(code **)(*plVar22 + 0x28))(&local_4c0,plVar22);
            if (local_4c0 != (long *)0x0) {
              (**(code **)(*local_4c0 + 0x20))(&local_490);
              if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
                          );
              }
              __n = strlen(__s);
              puVar6 = local_490;
              if ((long)local_480._7_1_ < 0) {
                if (__n == sStack_488) {
                  if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    FUN_005f5590();
                  }
                  iVar8 = memcmp(local_490,__s,__n);
                  operator_delete(puVar6);
                  if (iVar8 == 0) goto LAB_00c7adb4;
                }
                else {
                  operator_delete(local_490);
                }
LAB_00c7afc4:
                uVar9 = (**(code **)(*plVar22 + 0x120))(plVar22);
                memset(&local_490,0xaa,0x400);
                local_4a0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
                local_4b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                FUN_00622830(&local_4b0,&local_490,0x400);
                uVar12 = FUN_00622844(&local_4b0,0x53);
                uVar12 = FUN_00622844(uVar12,0x56);
                FUN_00622910(uVar12,uVar9);
                FUN_005d3510(&local_4d8,local_4b0);
                pvVar13 = operator_new(0x90);
                sStack_488 = sStack_4d0;
                local_490 = local_4d8;
                local_4d8 = (undefined1 *)0x0;
                sStack_4d0 = 0;
                local_480 = local_4c8;
                local_4c8 = 0;
                FUN_00c8fd78(pvVar13,&local_490,param_2);
                if (local_480 < 0) {
                  operator_delete(local_490);
                }
                if (local_4c8 < 0) {
                  operator_delete(local_4d8);
                }
                plVar15 = (long *)(**(code **)(*local_4c0 + 0x58))();
                local_490 = &DAT_aaaaaaaaaaaaaaaa;
                if ((plVar15 != (long *)0x0) &&
                   (uVar16 = (**(code **)(*plVar15 + 0x40))(plVar15,&local_490), (uVar16 & 1) != 0))
                {
                  if (*(char *)((long)pvVar13 + 0x6c) == '\x01') {
                    *(undefined4 *)((long)pvVar13 + 0x68) = (undefined4)local_490;
                  }
                  else {
                    if ((undefined4 *)((long)pvVar13 + 0x68) == (undefined4 *)0x0) {
LAB_00c7b328:
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                                );
                    }
                    *(undefined4 *)((long)pvVar13 + 0x68) = (undefined4)local_490;
                    *(undefined1 *)((long)pvVar13 + 0x6c) = 1;
                  }
                  if (*(char *)((long)pvVar13 + 0x74) == '\x01') {
                    *(undefined4 *)((long)pvVar13 + 0x70) = local_490._4_4_;
                  }
                  else {
                    if ((undefined4 *)((long)pvVar13 + 0x70) == (undefined4 *)0x0)
                    goto LAB_00c7b328;
                    *(undefined4 *)((long)pvVar13 + 0x70) = local_490._4_4_;
                    *(undefined1 *)((long)pvVar13 + 0x74) = 1;
                  }
                }
                iVar8 = (**(code **)(*plVar22 + 0x38))(plVar22);
                if (iVar8 != 0) {
                  uVar9 = (**(code **)(*plVar22 + 0x38))(plVar22);
                  lVar14 = FUN_00c97208(lVar17,uVar9);
                  if (lVar14 != 0) {
                    *(undefined8 *)((long)pvVar13 + 0x80) = *(undefined8 *)(lVar14 + 0x130);
                    *(undefined1 *)((long)pvVar13 + 0x88) = 1;
                    if (*(char *)((long)pvVar13 + 0x7c) == '\x01') {
                      *(undefined4 *)((long)pvVar13 + 0x78) = *(undefined4 *)(lVar14 + 0x128);
                    }
                    else {
                      if ((undefined4 *)((long)pvVar13 + 0x78) == (undefined4 *)0x0)
                      goto LAB_00c7b328;
                      uVar9 = *(undefined4 *)(lVar14 + 0x128);
                      *(undefined1 *)((long)pvVar13 + 0x7c) = 1;
                      *(undefined4 *)((long)pvVar13 + 0x78) = uVar9;
                    }
                  }
                }
              }
              else {
                if ((__n != (long)local_480._7_1_) ||
                   (iVar8 = memcmp(&local_490,__s,__n), iVar8 != 0)) goto LAB_00c7afc4;
LAB_00c7adb4:
                plVar15 = local_4c0;
                uVar9 = (**(code **)(*plVar22 + 0x120))(plVar22);
                memset(&local_490,0xaa,0x400);
                local_4a0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
                local_4b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                FUN_00622830(&local_4b0,&local_490,0x400);
                uVar12 = FUN_00622844(&local_4b0,0x53);
                uVar12 = FUN_00622844(uVar12,0x41);
                FUN_00622910(uVar12,uVar9);
                FUN_005d3510(&local_4d8,local_4b0);
                pvVar13 = operator_new(0xb8);
                sStack_488 = sStack_4d0;
                local_490 = local_4d8;
                local_4d8 = (undefined1 *)0x0;
                sStack_4d0 = 0;
                local_480 = local_4c8;
                local_4c8 = 0;
                FUN_00c8f964(pvVar13,&local_490,param_2);
                if (local_480 < 0) {
                  operator_delete(local_490);
                }
                if (local_4c8 < 0) {
                  operator_delete(local_4d8);
                }
                iVar8 = (**(code **)(*plVar22 + 0x38))(plVar22);
                if (iVar8 != 0) {
                  uVar9 = (**(code **)(*plVar22 + 0x38))(plVar22);
                  lVar14 = FUN_00c971ac(lVar17,uVar9);
                  if (lVar14 != 0) {
                    iVar8 = *(int *)(lVar14 + 0xd4);
                    *(undefined1 *)((long)pvVar13 + 0x70) = 1;
                    *(double *)((long)pvVar13 + 0x68) = (double)iVar8 / 32767.0;
                    uVar12 = *(undefined8 *)(lVar14 + 0xd8);
                    *(undefined1 *)((long)pvVar13 + 0x80) = 1;
                    *(undefined8 *)((long)pvVar13 + 0x78) = uVar12;
                    uVar12 = *(undefined8 *)(lVar14 + 0xe0);
                    *(undefined1 *)((long)pvVar13 + 0x90) = 1;
                    *(undefined8 *)((long)pvVar13 + 0x88) = uVar12;
                    if (*(char *)(lVar14 + 0x130) == '\x01') {
                      uVar12 = *(undefined8 *)(lVar14 + 0x128);
                      *(undefined1 *)((long)pvVar13 + 0xa0) = 1;
                      *(undefined8 *)((long)pvVar13 + 0x98) = uVar12;
                    }
                    if (*(char *)(lVar14 + 0x140) == '\x01') {
                      uVar12 = *(undefined8 *)(lVar14 + 0x138);
                      *(undefined1 *)((long)pvVar13 + 0xb0) = 1;
                      *(undefined8 *)((long)pvVar13 + 0xa8) = uVar12;
                    }
                  }
                }
                local_4b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                (**(code **)(*plVar15 + 0x68))(&local_4b0,plVar15);
                if (local_4b0 != (long *)0x0) {
                  local_420 = &DAT_aaaaaaaaaaaaaaaa;
                  sStack_488 = _UNK_00259c60;
                  local_490 = _DAT_00259c58;
                  local_478 = _UNK_00259c70;
                  local_480 = _DAT_00259c68;
                  uStack_468 = _UNK_00259c80;
                  local_470 = _DAT_00259c78;
                  uStack_458 = _UNK_00259c90;
                  uStack_460 = _DAT_00259c88;
                  uStack_438 = _UNK_00259cb0;
                  local_440 = _DAT_00259ca8;
                  uStack_428 = _UNK_00259cc0;
                  uStack_430 = _DAT_00259cb8;
                  uStack_448 = _UNK_00259ca0;
                  local_450 = _DAT_00259c98;
                  (**(code **)(*local_4b0 + 0x20))(&local_490,local_4b0,0);
                  if ((char)local_478 == '\x01') {
                    *(undefined1 *)((long)pvVar13 + 0xa0) = 1;
                    *(long *)((long)pvVar13 + 0x98) = local_480;
                  }
                  if ((char)uStack_468 == '\x01') {
                    *(undefined1 *)((long)pvVar13 + 0xb0) = 1;
                    *(undefined8 *)((long)pvVar13 + 0xa8) = local_470;
                  }
                  FUN_0065f0c8(&sStack_488);
                  if (local_4b0 != (long *)0x0) {
                    (**(code **)(*local_4b0 + 8))();
                  }
                }
              }
              (**(code **)(*local_4c0 + 0x28))(&local_490);
              puVar11 = (undefined8 *)((long)pvVar13 + 0x28);
              if (*(char *)((long)pvVar13 + 0x40) == '\x01') {
                if (*(char *)((long)pvVar13 + 0x3f) < '\0') {
                  operator_delete(*(void **)((long)pvVar13 + 0x28));
                }
                *(size_t *)((long)pvVar13 + 0x30) = sStack_488;
                *puVar11 = local_490;
                *(long *)((long)pvVar13 + 0x38) = local_480;
              }
              else {
                if (puVar11 == (undefined8 *)0x0) goto LAB_00c7b328;
                *(long *)((long)pvVar13 + 0x38) = local_480;
                *(size_t *)((long)pvVar13 + 0x30) = sStack_488;
                *puVar11 = local_490;
                *(undefined1 *)((long)pvVar13 + 0x40) = 1;
              }
              (**(code **)(*local_4c0 + 0x20))(&local_490);
              puVar11 = (undefined8 *)((long)pvVar13 + 0x48);
              if (*(char *)((long)pvVar13 + 0x60) == '\x01') {
                if (*(char *)((long)pvVar13 + 0x5f) < '\0') {
                  operator_delete(*(void **)((long)pvVar13 + 0x48));
                }
                *(size_t *)((long)pvVar13 + 0x50) = sStack_488;
                *puVar11 = local_490;
                *(long *)((long)pvVar13 + 0x58) = local_480;
              }
              else {
                if (puVar11 == (undefined8 *)0x0) goto LAB_00c7b328;
                *(long *)((long)pvVar13 + 0x58) = local_480;
                *(size_t *)((long)pvVar13 + 0x50) = sStack_488;
                *puVar11 = local_490;
                *(undefined1 *)((long)pvVar13 + 0x60) = 1;
              }
              FUN_00c87c2c(param_4,pvVar13);
              if (local_4c0 != (long *)0x0) {
                (**(code **)(*local_4c0 + 8))();
              }
            }
            lVar18 = lVar18 + -8;
            plVar4 = plVar4 + 1;
            lVar5 = lVar18;
          }
          if (plVar10 != (long *)0x0) {
            if (lVar1 != 0) {
              lVar19 = -8 - lVar19;
              do {
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                            );
                }
                if ((long *)*plVar20 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar20 + 8))();
                }
                lVar19 = lVar19 + 8;
                plVar20 = plVar20 + -1;
              } while (lVar19 != 0);
            }
            operator_delete(plVar10);
          }
        }
      }
      plVar21 = plVar21 + 0x16;
    } while (plVar21 != plVar2);
  }
  FUN_007e0b18(local_4b4);
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c7b370  FUN_00c7b370 =====

void FUN_00c7b370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 local_4c [4];
  void *local_48 [2];
  char cStack_31;
  
  local_4c[0] = 0xaa;
  FUN_007e0b10(local_4c);
  pvVar3 = operator_new(0x38);
  FUN_005d3510(local_48,&DAT_001e9834);
  FUN_00c8ca24(pvVar3,local_48,param_2);
  if (cStack_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  *(undefined1 *)((long)pvVar3 + 0x2c) = 1;
  *(undefined4 *)((long)pvVar3 + 0x28) = uVar1;
  *(undefined4 *)((long)pvVar3 + 0x30) = uVar2;
  *(undefined1 *)((long)pvVar3 + 0x34) = 1;
  FUN_00c87c2c(param_3,pvVar3);
  FUN_007e0b18(local_4c);
  return;
}


// ===== 00c7b42c  FUN_00c7b42c =====

void FUN_00c7b42c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_4c [4];
  void *local_48 [2];
  char cStack_31;
  
  local_4c[0] = 0xaa;
  FUN_007e0b10(local_4c);
  if (*(char *)(param_3 + 5) == '\x01') {
    pvVar1 = operator_new(0x98);
    FUN_005d3510(local_48,&DAT_00259cd0);
    FUN_00c908a0(pvVar1,local_48,param_2);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
    uVar3 = *param_3;
    uVar2 = param_3[1];
    *(undefined1 *)((long)pvVar1 + 0x50) = 1;
    *(undefined8 *)((long)pvVar1 + 0x48) = uVar3;
    uVar4 = param_3[2];
    uVar3 = param_3[3];
    *(undefined8 *)((long)pvVar1 + 0x58) = uVar2;
    uVar2 = param_3[4];
    *(undefined1 *)((long)pvVar1 + 0x60) = 1;
    *(undefined8 *)((long)pvVar1 + 0x68) = uVar4;
    *(undefined8 *)((long)pvVar1 + 0x88) = uVar2;
    *(undefined1 *)((long)pvVar1 + 0x90) = 1;
    *(undefined1 *)((long)pvVar1 + 0x70) = 1;
    *(undefined8 *)((long)pvVar1 + 0x78) = uVar3;
    *(undefined1 *)((long)pvVar1 + 0x80) = 1;
    FUN_00c87c2c(param_4,pvVar1);
  }
  FUN_007e0b18(local_4c);
  return;
}


// ===== 00c7b518  FUN_00c7b518 =====

void FUN_00c7b518(long **param_1,undefined8 *param_2,long param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined1 **ppuVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uStack_211;
  long **local_210;
  long lStack_208;
  undefined1 **local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 **local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined8 uStack_197;
  long local_188;
  long lStack_180;
  long local_178;
  long local_170;
  long lStack_168;
  long local_160;
  long local_158;
  long lStack_150;
  long local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 **local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 **local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 local_b4 [4];
  char **local_b0;
  char *local_a8;
  char *pcStack_a0;
  undefined1 uStack_91;
  undefined8 *local_90 [2];
  code *local_80;
  code *pcStack_78;
  
  if (((DAT_00dbb5a0 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbb5a0), iVar4 != 0)) {
    DAT_00dbb598 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb5a0);
  }
  local_b0 = (char **)0x0;
  pcStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb598 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb598,"RTCStatsCollector::ProducePartialResultsOnNetworkThread",0,0,0,0
                 ,0,0);
    local_a8 = DAT_00dbb598;
    pcStack_a0 = "RTCStatsCollector::ProducePartialResultsOnNetworkThread";
    local_b0 = &local_a8;
  }
  local_b4[0] = 0xaa;
  FUN_007e0b10(local_b4);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1[1] + 0x228))(&local_d0);
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1[1] + 0x240))(&local_f0,param_1[1],param_4);
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c7b940(&local_110,param_1,&local_f0);
  plVar7 = param_1[9];
  uVar8 = *param_2;
  *param_2 = 0;
  local_200 = local_f0;
  local_1f8 = puStack_e8;
  local_1f0 = local_e0;
  ppuVar3 = &local_1f8;
  if (local_e0 != (undefined1 *)0x0) {
    local_f0 = (undefined1 **)((ulong)&local_f0 | 8);
    *(undefined1 ***)(puStack_e8 + 0x10) = &local_1f8;
    *local_f0 = (undefined1 *)0x0;
    local_f0[1] = (undefined1 *)0x0;
    ppuVar3 = local_200;
  }
  local_200 = ppuVar3;
  local_1d8 = local_100;
  local_1e8 = local_110;
  local_1e0 = puStack_108;
  ppuVar3 = &local_1e0;
  if (local_100 != (undefined1 *)0x0) {
    local_110 = (undefined1 **)((ulong)&local_110 | 8);
    *(undefined1 ***)(puStack_108 + 0x10) = &local_1e0;
    *local_110 = (undefined1 *)0x0;
    local_110[1] = (undefined1 *)0x0;
    ppuVar3 = local_1e8;
  }
  local_1e8 = ppuVar3;
  lStack_1c8 = param_5[1];
  local_1d0 = *param_5;
  local_1c0 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  local_210 = param_1;
  lStack_208 = param_3;
  FUN_00c7bd94(&local_1b8,param_5 + 3);
  local_118 = local_c0;
  lStack_150 = param_5[0x10];
  local_158 = param_5[0xf];
  local_148 = param_5[0x11];
  local_c0 = (undefined1 *)0x0;
  uStack_140 = (undefined1)param_5[0x12];
  uStack_137 = (undefined7)*(undefined8 *)((long)param_5 + 0x99);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_5 + 0x99) >> 0x38);
  uStack_13f = (undefined7)*(undefined8 *)((long)param_5 + 0x91);
  local_138 = (undefined1)((ulong)*(undefined8 *)((long)param_5 + 0x91) >> 0x38);
  puStack_120 = puStack_c8;
  local_128 = local_d0;
  local_d0 = (undefined1 *)0x0;
  puStack_c8 = (undefined1 *)0x0;
  plVar5 = (long *)operator_new(0x100);
  lVar2 = local_1c0;
  lVar1 = lStack_1c8;
  plVar5[1] = lStack_208;
  *plVar5 = (long)local_210;
  plVar5[2] = (long)local_200;
  plVar6 = plVar5 + 3;
  *plVar6 = (long)local_1f8;
  plVar5[4] = (long)local_1f0;
  if (local_1f0 == (undefined1 *)0x0) {
    plVar5[2] = (long)plVar6;
  }
  else {
    *(long **)(local_1f8 + 0x10) = plVar6;
    local_1f8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_200 = &local_1f8;
  }
  plVar6 = plVar5 + 6;
  *plVar6 = (long)local_1e0;
  plVar5[5] = (long)local_1e8;
  plVar5[7] = (long)local_1d8;
  if (local_1d8 == (undefined1 *)0x0) {
    plVar5[5] = (long)plVar6;
  }
  else {
    *(long **)(local_1e0 + 0x10) = plVar6;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1e8 = &local_1e0;
  }
  lStack_1c8 = 0;
  local_1c0 = 0;
  plVar5[9] = lVar1;
  plVar5[8] = local_1d0;
  plVar5[10] = lVar2;
  plVar5[0xc] = lStack_1b0;
  plVar5[0xb] = local_1b8;
  plVar5[0xe] = CONCAT71(uStack_19f,uStack_1a0);
  plVar5[0xd] = local_1a8;
  *(undefined8 *)((long)plVar5 + 0x79) = uStack_197;
  *(ulong *)((long)plVar5 + 0x71) = CONCAT17(uStack_198,uStack_19f);
  plVar5[0x13] = local_178;
  plVar5[0x15] = lStack_168;
  plVar5[0x14] = local_170;
  plVar5[0x12] = lStack_180;
  plVar5[0x11] = local_188;
  plVar5[0x16] = local_160;
  plVar5[0x1c] = CONCAT71(uStack_12f,uStack_130);
  plVar5[0x1b] = CONCAT71(uStack_137,local_138);
  local_1d0 = 0;
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  local_170 = 0;
  lStack_168 = 0;
  local_160 = 0;
  plVar5[0x1a] = CONCAT71(uStack_13f,uStack_140);
  plVar5[0x19] = local_148;
  plVar5[0x18] = lStack_150;
  plVar5[0x17] = local_158;
  plVar5[0x1e] = (long)puStack_120;
  plVar5[0x1d] = (long)local_128;
  plVar5[0x1f] = (long)local_118;
  local_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  local_118 = (undefined1 *)0x0;
  local_90[0] = (undefined8 *)operator_new(0x30);
  *local_90[0] = uVar8;
  local_90[0][4] = FUN_00c84ecc;
  local_90[0][5] = FUN_00c84b70;
  local_90[0][2] = plVar5;
  local_80 = FUN_005db390;
  pcStack_78 = FUN_005db348;
  (**(code **)(*plVar7 + 8))(plVar7,local_90,&uStack_91,&uStack_211);
  (*local_80)(0,local_90,local_90);
  FUN_00c7bec8(&local_210);
  local_210 = (long **)&local_110;
  FUN_00c83c18(&local_210,puStack_108);
  local_210 = (long **)&local_f0;
  FUN_00c079c8(&local_210,puStack_e8);
  FUN_00c7c098(&local_d0);
  FUN_007e0b18(local_b4);
  if ((local_b0 != (char **)0x0) && (**local_b0 != '\0')) {
    FUN_0066d348(0x45,*local_b0,local_b0[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c7b940  FUN_00c7b940 =====

void FUN_00c7b940(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  void *local_98;
  void *local_90;
  long lStack_88;
  long local_80;
  void *local_78;
  void *local_70;
  undefined1 local_64 [4];
  undefined8 *local_48;
  
  local_64[0] = 0xaa;
  FUN_007e0b10(local_64);
  param_1[2] = 0;
  plVar11 = *(long **)(param_2 + 0x78);
  puVar10 = param_1 + 1;
  *puVar10 = 0;
  *param_1 = puVar10;
  if (plVar11 != (long *)(param_2 + 0x80)) {
    do {
      if (plVar11[7] == 0) {
        pvVar9 = (void *)0x0;
        if (plVar11[8] != 0) goto LAB_00c7b9c8;
LAB_00c7b9f8:
        pvVar5 = (void *)0x0;
        if (-1 < *(char *)((long)plVar11 + 0x37)) goto LAB_00c7b9d8;
LAB_00c7ba04:
        FUN_005478d8(&local_90,plVar11[4],plVar11[5]);
      }
      else {
        pvVar9 = (void *)FUN_0083270c();
        if (plVar11[8] == 0) goto LAB_00c7b9f8;
LAB_00c7b9c8:
        pvVar5 = (void *)FUN_0083270c();
        if (*(char *)((long)plVar11 + 0x37) < '\0') goto LAB_00c7ba04;
LAB_00c7b9d8:
        local_80 = plVar11[6];
        lStack_88 = plVar11[5];
        local_90 = (void *)plVar11[4];
      }
      local_78 = pvVar9;
      local_70 = pvVar5;
      local_48 = param_1;
      FUN_00c85558(&local_48,&local_90,&local_90);
      pvVar9 = local_70;
      local_70 = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        FUN_0083267c(pvVar9);
        operator_delete(pvVar9);
      }
      pvVar9 = local_78;
      local_78 = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        FUN_0083267c(pvVar9);
        operator_delete(pvVar9);
      }
      if (local_80 < 0) {
        operator_delete(local_90);
        plVar1 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_00c7baa4;
LAB_00c7ba94:
        do {
          plVar12 = plVar1;
          plVar1 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
      }
      else {
        plVar1 = (long *)plVar11[1];
        if ((long *)plVar11[1] != (long *)0x0) goto LAB_00c7ba94;
LAB_00c7baa4:
        do {
          plVar12 = (long *)plVar11[2];
          bVar2 = plVar11 != (long *)*plVar12;
          plVar11 = plVar12;
        } while (bVar2);
      }
      plVar11 = plVar12;
    } while (plVar12 != (long *)(param_2 + 0x80));
    if (param_1[2] != 0) goto LAB_00c7bac4;
  }
  plVar11 = (long *)*param_3;
  while (plVar11 != param_3 + 1) {
    local_98 = (void *)0x0;
    uVar4 = (**(code **)(**(long **)(param_2 + 8) + 600))
                      (*(long **)(param_2 + 8),plVar11 + 4,&local_98);
    pvVar9 = (void *)0x0;
    if ((uVar4 & 1) != 0) {
      FUN_00833e50(local_98);
      pvVar9 = (void *)FUN_00832ca8();
    }
    pvVar5 = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x260))
                               (*(long **)(param_2 + 8),plVar11 + 4);
    if (pvVar5 == (void *)0x0) {
      pvVar6 = (void *)0x0;
      if (-1 < *(char *)((long)plVar11 + 0x37)) goto LAB_00c7bb60;
LAB_00c7bb80:
      FUN_005478d8(&local_90,plVar11[4],plVar11[5]);
    }
    else {
      pvVar6 = (void *)FUN_00832ca8(pvVar5);
      if (*(char *)((long)plVar11 + 0x37) < '\0') goto LAB_00c7bb80;
LAB_00c7bb60:
      local_80 = plVar11[6];
      lStack_88 = plVar11[5];
      local_90 = (void *)plVar11[4];
    }
    local_78 = pvVar9;
    local_70 = pvVar6;
    local_48 = param_1;
    FUN_00c85558(&local_48,&local_90,&local_90);
    pvVar9 = local_70;
    local_70 = (void *)0x0;
    if (pvVar9 != (void *)0x0) {
      FUN_0083267c(pvVar9);
      operator_delete(pvVar9);
    }
    pvVar9 = local_78;
    local_78 = (void *)0x0;
    if (pvVar9 != (void *)0x0) {
      FUN_0083267c(pvVar9);
      operator_delete(pvVar9);
    }
    if (local_80 < 0) {
      operator_delete(local_90);
    }
    if (pvVar5 != (void *)0x0) {
      FUN_00832ab8(pvVar5);
      operator_delete(pvVar5);
    }
    pvVar9 = local_98;
    if ((local_98 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_98), iVar3 == 1)) {
      FUN_00833e18(pvVar9);
      operator_delete(pvVar9);
    }
    plVar1 = (long *)plVar11[1];
    plVar12 = plVar11;
    if ((long *)plVar11[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar12[2];
        bVar2 = plVar12 != (long *)*plVar11;
        plVar12 = plVar11;
      } while (bVar2);
    }
    else {
      do {
        plVar11 = plVar1;
        plVar1 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
  }
  puVar7 = (undefined8 *)*param_1;
  while (puVar7 != puVar10) {
    if (puVar7[7] == 0) {
      pvVar9 = (void *)0x0;
      if (puVar7[8] != 0) goto LAB_00c7bca0;
LAB_00c7bcd0:
      pvVar5 = (void *)0x0;
      if (-1 < *(char *)((long)puVar7 + 0x37)) goto LAB_00c7bcb0;
LAB_00c7bcdc:
      FUN_005478d8(&local_90,puVar7[4],puVar7[5]);
    }
    else {
      pvVar9 = (void *)FUN_0083270c();
      if (puVar7[8] == 0) goto LAB_00c7bcd0;
LAB_00c7bca0:
      pvVar5 = (void *)FUN_0083270c();
      if (*(char *)((long)puVar7 + 0x37) < '\0') goto LAB_00c7bcdc;
LAB_00c7bcb0:
      local_80 = puVar7[6];
      lStack_88 = puVar7[5];
      local_90 = (void *)puVar7[4];
    }
    local_78 = pvVar9;
    local_70 = pvVar5;
    local_48 = (undefined8 *)(param_2 + 0x78);
    FUN_00c85558(&local_48,&local_90,&local_90);
    pvVar9 = local_70;
    local_70 = (void *)0x0;
    if (pvVar9 != (void *)0x0) {
      FUN_0083267c(pvVar9);
      operator_delete(pvVar9);
    }
    pvVar9 = local_78;
    local_78 = (void *)0x0;
    if (pvVar9 != (void *)0x0) {
      FUN_0083267c(pvVar9);
      operator_delete(pvVar9);
    }
    if (local_80 < 0) {
      operator_delete(local_90);
      puVar8 = (undefined8 *)puVar7[1];
      if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) goto LAB_00c7bd7c;
LAB_00c7bd6c:
      do {
        puVar7 = puVar8;
        puVar8 = (undefined8 *)*puVar7;
      } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
    }
    else {
      puVar8 = (undefined8 *)puVar7[1];
      if ((undefined8 *)puVar7[1] != (undefined8 *)0x0) goto LAB_00c7bd6c;
LAB_00c7bd7c:
      do {
        puVar8 = (undefined8 *)puVar7[2];
        bVar2 = puVar7 != (undefined8 *)*puVar8;
        puVar7 = puVar8;
      } while (bVar2);
    }
  }
LAB_00c7bac4:
  FUN_007e0b18(local_64);
  return;
}


// ===== 00c7bd94  FUN_00c7bd94 =====

void FUN_00c7bd94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  uVar15 = param_2[1];
  uVar14 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  uVar13 = *(undefined8 *)((long)param_2 + 0x21);
  uVar12 = *(undefined8 *)((long)param_2 + 0x19);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x21) = uVar13;
  *(undefined8 *)((long)param_1 + 0x19) = uVar12;
  param_1[1] = uVar15;
  *param_1 = uVar14;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  puVar10 = (undefined8 *)param_2[6];
  puVar1 = (undefined8 *)param_2[7];
  uVar8 = (long)puVar1 - (long)puVar10;
  if (uVar8 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar8 >> 3) * -0x5555555555555555)) {
      FUN_00931e78();
      goto LAB_00c7bec4;
    }
    puVar2 = (undefined8 *)operator_new(uVar8);
    param_1[6] = puVar2;
    param_1[7] = puVar2;
    param_1[8] = (long)puVar2 + uVar8;
    do {
      if (puVar2 == (undefined8 *)0x0) goto LAB_00c7beac;
      puVar11 = puVar10 + 3;
      uVar13 = puVar10[1];
      uVar12 = *puVar10;
      puVar2[2] = puVar10[2];
      puVar3 = puVar2 + 3;
      puVar2[1] = uVar13;
      *puVar2 = uVar12;
      puVar2 = puVar3;
      puVar10 = puVar11;
    } while (puVar11 != puVar1);
    param_1[7] = puVar3;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar10 = (undefined8 *)param_2[9];
  puVar1 = (undefined8 *)param_2[10];
  param_2 = (undefined8 *)((long)puVar1 - (long)puVar10);
  if (param_2 != (undefined8 *)0x0) {
    if (0x555555555555555 < (ulong)(((long)param_2 >> 4) * -0x5555555555555555)) {
LAB_00c7bec4:
      lVar4 = FUN_008bfbf8();
      puStack_50 = param_2;
      puStack_48 = param_1;
      FUN_00c7c098(lVar4 + 0xe8);
      pvVar5 = *(void **)(lVar4 + 0xa0);
      if (pvVar5 == (void *)0x0) {
LAB_00c7bf78:
        pvVar5 = *(void **)(lVar4 + 0x88);
        if (pvVar5 == (void *)0x0) {
LAB_00c7c018:
          pvVar5 = *(void **)(lVar4 + 0x40);
          if (pvVar5 != (void *)0x0) {
            pvVar7 = *(void **)(lVar4 + 0x48);
            pvVar6 = pvVar5;
            if (pvVar5 != pvVar7) {
              do {
                pvVar7 = (void *)((long)pvVar7 + -0xb0);
                if (pvVar7 == (void *)0x0) goto LAB_00c7bff4;
                FUN_00c817cc(pvVar7);
              } while (pvVar7 != pvVar5);
              pvVar6 = *(void **)(lVar4 + 0x40);
            }
            *(void **)(lVar4 + 0x48) = pvVar5;
            operator_delete(pvVar6);
          }
          lStack_58 = lVar4 + 0x28;
          FUN_00c83c18(&lStack_58,*(undefined8 *)(lVar4 + 0x30));
          lStack_58 = lVar4 + 0x10;
          FUN_00c079c8(&lStack_58,*(undefined8 *)(lVar4 + 0x18));
          return;
        }
        pvVar7 = *(void **)(lVar4 + 0x90);
        uVar8 = (ulong)(((long)pvVar5 - (long)pvVar7) * 0x1555555555555555) >> 3;
        uVar9 = (long)pvVar7 * -0x1555555555555555 - 8U >> 3;
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        if ((1 < uVar8) && ((((int)pvVar5 - (int)pvVar7 | -(int)pvVar7) & 7U) == 0)) {
          uVar8 = uVar8 & 0x1ffffffffffffffe;
          pvVar7 = (void *)((long)pvVar7 + uVar8 * -0x18);
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        do {
          if (pvVar7 == pvVar5) {
            *(void **)(lVar4 + 0x90) = pvVar5;
            operator_delete(pvVar5);
            goto LAB_00c7c018;
          }
          pvVar7 = (void *)((long)pvVar7 + -0x18);
        } while (pvVar7 != (void *)0x0);
      }
      else {
        pvVar7 = *(void **)(lVar4 + 0xa8);
        uVar8 = (ulong)(((long)pvVar5 - (long)pvVar7) * 0x555555555555555) >> 4;
        uVar9 = (long)pvVar7 * -0x555555555555555 - 0x10U >> 4;
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        if ((1 < uVar8) && ((((int)pvVar5 - (int)pvVar7 | -(int)pvVar7) & 0xfU) == 0)) {
          uVar8 = uVar8 & 0xffffffffffffffe;
          pvVar7 = (void *)((long)pvVar7 + uVar8 * -0x30);
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        do {
          if (pvVar7 == pvVar5) {
            *(void **)(lVar4 + 0xa8) = pvVar5;
            operator_delete(pvVar5);
            goto LAB_00c7bf78;
          }
          pvVar7 = (void *)((long)pvVar7 + -0x30);
        } while (pvVar7 != (void *)0x0);
      }
LAB_00c7bff4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puVar2 = (undefined8 *)operator_new((ulong)param_2);
    param_1[9] = puVar2;
    param_1[10] = puVar2;
    param_1[0xb] = (long)puVar2 + (long)param_2;
    do {
      if (puVar2 == (undefined8 *)0x0) {
LAB_00c7beac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar14 = puVar10[2];
      uVar13 = puVar10[5];
      uVar12 = puVar10[4];
      puVar11 = puVar10 + 6;
      uVar16 = puVar10[1];
      uVar15 = *puVar10;
      puVar2[3] = puVar10[3];
      puVar2[2] = uVar14;
      puVar2[5] = uVar13;
      puVar2[4] = uVar12;
      puVar3 = puVar2 + 6;
      puVar2[1] = uVar16;
      *puVar2 = uVar15;
      puVar2 = puVar3;
      puVar10 = puVar11;
    } while (puVar11 != puVar1);
    param_1[10] = puVar3;
  }
  return;
}


// ===== 00c7bec8  FUN_00c7bec8 =====

void FUN_00c7bec8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long local_18;
  
  FUN_00c7c098(param_1 + 0xe8);
  pvVar1 = *(void **)(param_1 + 0xa0);
  if (pvVar1 == (void *)0x0) {
LAB_00c7bf78:
    pvVar1 = *(void **)(param_1 + 0x88);
    if (pvVar1 == (void *)0x0) {
LAB_00c7c018:
      pvVar1 = *(void **)(param_1 + 0x40);
      if (pvVar1 != (void *)0x0) {
        pvVar3 = *(void **)(param_1 + 0x48);
        pvVar2 = pvVar1;
        if (pvVar1 != pvVar3) {
          do {
            pvVar3 = (void *)((long)pvVar3 + -0xb0);
            if (pvVar3 == (void *)0x0) goto LAB_00c7bff4;
            FUN_00c817cc(pvVar3);
          } while (pvVar3 != pvVar1);
          pvVar2 = *(void **)(param_1 + 0x40);
        }
        *(void **)(param_1 + 0x48) = pvVar1;
        operator_delete(pvVar2);
      }
      local_18 = param_1 + 0x28;
      FUN_00c83c18(&local_18,*(undefined8 *)(param_1 + 0x30));
      local_18 = param_1 + 0x10;
      FUN_00c079c8(&local_18,*(undefined8 *)(param_1 + 0x18));
      return;
    }
    pvVar3 = *(void **)(param_1 + 0x90);
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3) * 0x1555555555555555) >> 3;
    uVar5 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x18);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        *(void **)(param_1 + 0x90) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c7c018;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0xa8);
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3) * 0x555555555555555) >> 4;
    uVar5 = (long)pvVar3 * -0x555555555555555 - 0x10U >> 4;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
      uVar4 = uVar4 & 0xffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x30);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        *(void **)(param_1 + 0xa8) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c7bf78;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x30);
    } while (pvVar3 != (void *)0x0);
  }
LAB_00c7bff4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c7c098  FUN_00c7c098 =====

/* WARNING: Removing unreachable block (ram,0x00c7c0f4) */
/* WARNING: Removing unreachable block (ram,0x00c7c110) */

void FUN_00c7c098(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar2;
  if (pvVar2 != (void *)param_1[1]) {
    lVar3 = (long)param_1[1] + -0x28;
    do {
      pvVar1 = (void *)(lVar3 + -0x30);
      if (lVar3 == 0x30) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)(lVar3 + 7) < '\0') {
        operator_delete(*(void **)(lVar3 + -0x10));
      }
      lVar3 = lVar3 + -0x58;
    } while (pvVar1 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 00c7c170  FUN_00c7c170 =====

void FUN_00c7c170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  local_48[0] = 0xaa;
  uVar3 = FUN_007e0b10(local_48);
  uVar3 = FUN_00c7c2b4(uVar3,param_2,param_4,param_8);
  uVar3 = FUN_00c7c36c(uVar3,param_2,param_3,param_6,param_8);
  FUN_00c7c98c(uVar3,param_2,param_3,param_4,param_6,param_8);
  local_44[0] = 0xaa;
  FUN_007e0b10(local_44);
  lVar1 = *param_5;
  lVar2 = param_5[1];
  do {
    while( true ) {
      if (lVar1 == lVar2) {
        FUN_007e0b18(local_44);
        FUN_007e0b18(local_48);
        return;
      }
      if ((*(char *)(lVar1 + 0x28) == '\x01') && (*(char *)(lVar1 + 0x48) == '\x01')) break;
LAB_00c7c230:
      lVar1 = lVar1 + 0xb0;
    }
    if (*(int *)(lVar1 + 8) != 0) {
      FUN_00c7f3ac(param_1,param_2,lVar1,param_6,param_8);
      goto LAB_00c7c230;
    }
    FUN_00c7e6d0(param_1,param_2,lVar1,param_6,param_7,param_8);
    lVar1 = lVar1 + 0xb0;
  } while( true );
}


// ===== 00c7c2b4  FUN_00c7c2b4 =====

void FUN_00c7c2b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined1 local_34 [4];
  
  local_34[0] = 0xaa;
  FUN_007e0b10(local_34);
  plVar3 = (long *)*param_3;
  while (plVar3 != param_3 + 1) {
    if (plVar3[7] != 0) {
      FUN_00c7db54(param_2,plVar3[7],param_4);
    }
    if (plVar3[8] != 0) {
      FUN_00c7db54(param_2,plVar3[8],param_4);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = plVar4 != (long *)*plVar3;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_007e0b18(local_34);
  return;
}


// ===== 00c7c36c  FUN_00c7c36c =====

void FUN_00c7c36c(undefined8 param_1,undefined8 param_2,long *param_3,uint *param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined4 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  bool bVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long *plVar16;
  char *pcVar17;
  long *plVar18;
  char *pcVar19;
  uint uVar20;
  double dVar21;
  void *local_10d8;
  undefined8 uStack_10d0;
  long local_10c8;
  undefined1 *local_10c0;
  undefined1 *puStack_10b8;
  undefined1 *local_10b0;
  undefined1 local_10a4 [4];
  undefined1 *local_10a0;
  undefined1 *puStack_1098;
  undefined1 *local_1090;
  void *local_1080;
  undefined8 uStack_1078;
  long local_1070;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  local_10a4[0] = 0xaa;
  FUN_007e0b10(local_10a4);
  plVar16 = (long *)*param_3;
  do {
    if (plVar16 == param_3 + 1) {
      FUN_007e0b18(local_10a4);
      if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar15 = (undefined4 *)plVar16[10];
    puVar2 = (undefined4 *)plVar16[0xb];
    if (puVar15 != puVar2) {
      do {
        puStack_10b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_10c0 = &DAT_aaaaaaaaaaaaaaaa;
        local_10b0 = &DAT_aaaaaaaaaaaaaaaa;
        uVar5 = *puVar15;
        memset(&local_1080,0xaa,0x400);
        local_1090 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1098 = &DAT_aaaaaaaaaaaaaaaa;
        local_10a0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00622830(&local_10a0,&local_1080,0x400);
        uVar10 = FUN_00622844(&local_10a0,0x54);
        lVar1 = plVar16[4];
        uVar13 = plVar16[5];
        if (-1 < (char)*(byte *)((long)plVar16 + 0x37)) {
          lVar1 = (long)(plVar16 + 4);
          uVar13 = (ulong)*(byte *)((long)plVar16 + 0x37);
        }
        uVar10 = FUN_006228b0(uVar10,lVar1,uVar13);
        FUN_00622910(uVar10,uVar5);
        FUN_005d3510(&local_10c0,local_10a0);
        pcVar3 = *(char **)(puVar15 + 0x16);
        for (pcVar17 = *(char **)(puVar15 + 0x14); pcVar17 != pcVar3; pcVar17 = pcVar17 + 0x3f8) {
          memset(&local_1080,0xaa,0x1000);
          local_1090 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1098 = &DAT_aaaaaaaaaaaaaaaa;
          local_10a0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00622830(&local_10a0,&local_1080,0x1000);
          uVar10 = FUN_006228b0(&local_10a0,&DAT_001bea81,2);
          pcVar19 = pcVar17 + 0x78;
          uVar13 = *(ulong *)(pcVar17 + 0x80);
          pcVar7 = *(char **)pcVar19;
          if (-1 < pcVar17[0x8f]) {
            uVar13 = (ulong)(byte)pcVar17[0x8f];
            pcVar7 = pcVar19;
          }
          uVar10 = FUN_006228b0(uVar10,pcVar7,uVar13);
          uVar10 = FUN_006228b0(uVar10,&DAT_001e47a3,1);
          uVar13 = *(ulong *)(pcVar17 + 0x218);
          pcVar7 = *(char **)(pcVar17 + 0x210);
          if (-1 < pcVar17[0x227]) {
            uVar13 = (ulong)(byte)pcVar17[0x227];
            pcVar7 = pcVar17 + 0x210;
          }
          FUN_006228b0(uVar10,pcVar7,uVar13);
          FUN_005d3510(&local_10d8,local_10a0);
          pvVar11 = operator_new(0x1d0);
          uStack_1078 = uStack_10d0;
          local_1080 = local_10d8;
          local_10d8 = (void *)0x0;
          uStack_10d0 = 0;
          local_1070 = local_10c8;
          local_10c8 = 0;
          FUN_00c8bf30(pvVar11,&local_1080,param_2);
          if (local_1070 < 0) {
            operator_delete(local_1080);
          }
          if (local_10c8 < 0) {
            operator_delete(local_10d8);
          }
          FUN_00661bd4((long)pvVar11 + 0x28,&local_10c0);
          uVar10 = FUN_00c7ddb4(param_2,pcVar19,1,&local_10c0,param_5);
          FUN_00600e24((long)pvVar11 + 0x48,uVar10);
          uVar10 = FUN_00c7ddb4(param_2,pcVar17 + 0x210,0,&local_10c0,param_5);
          FUN_00600e24((long)pvVar11 + 0x68,uVar10);
          if (*(uint *)(pcVar17 + 0x3b0) < 4) {
            puVar12 = (&PTR_s_waiting_00d4e680)[*(uint *)(pcVar17 + 0x3b0)];
            if ((*(byte *)((long)pvVar11 + 0xa0) & 1) == 0) goto LAB_00c7c678;
            FUN_00547bf8();
          }
          else {
            if (*(char *)((long)pvVar11 + 0xa0) == '\x01') {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                        );
            }
            puVar12 = (undefined *)0x0;
LAB_00c7c678:
            if ((long)pvVar11 + 0x88 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            FUN_005d3510((long)pvVar11 + 0x88,puVar12);
            *(undefined1 *)((long)pvVar11 + 0xa0) = 1;
          }
          uVar10 = *(undefined8 *)(pcVar17 + 0x3b8);
          *(undefined1 *)((long)pvVar11 + 0xb0) = 1;
          *(undefined8 *)((long)pvVar11 + 0xa8) = uVar10;
          *(ushort *)((long)pvVar11 + 0xb8) = (byte)pcVar17[0x3c0] | 0x100;
          *(ushort *)((long)pvVar11 + 0xba) = (byte)pcVar17[1] | 0x100;
          lVar1 = *(long *)(pcVar17 + 0x28);
          lVar4 = *(long *)(pcVar17 + 0x30);
          *(undefined1 *)((long)pvVar11 + 200) = 1;
          *(long *)((long)pvVar11 + 0xc0) = lVar4 - lVar1;
          uVar10 = *(undefined8 *)(pcVar17 + 0x28);
          *(undefined1 *)((long)pvVar11 + 0x198) = 1;
          *(undefined8 *)((long)pvVar11 + 400) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x60);
          *(undefined1 *)((long)pvVar11 + 0xd8) = 1;
          *(undefined8 *)((long)pvVar11 + 0xd0) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x18);
          *(undefined1 *)((long)pvVar11 + 0xe8) = 1;
          *(undefined8 *)((long)pvVar11 + 0xe0) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x10);
          *(undefined1 *)((long)pvVar11 + 0x1a8) = 1;
          *(undefined8 *)((long)pvVar11 + 0x1a0) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x50);
          *(undefined1 *)((long)pvVar11 + 0xf8) = 1;
          *(undefined8 *)((long)pvVar11 + 0xf0) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x3c8);
          *(undefined1 *)((long)pvVar11 + 0x108) = 1;
          dVar21 = (double)NEON_ucvtf(uVar10);
          *(double *)((long)pvVar11 + 0x100) = dVar21 / 1000.0;
          if (pcVar17[0x3d4] == '\x01') {
            uVar20 = *(uint *)(pcVar17 + 0x3d0);
            *(undefined1 *)((long)pvVar11 + 0x118) = 1;
            dVar21 = (double)NEON_ucvtf((ulong)uVar20);
            *(double *)((long)pvVar11 + 0x110) = dVar21 / 1000.0;
          }
          if (*pcVar17 == '\x01') {
            uVar20 = *param_4;
            if (0 < (int)uVar20) {
              *(undefined1 *)((long)pvVar11 + 0x128) = 1;
              *(double *)((long)pvVar11 + 0x120) = (double)uVar20;
            }
            uVar20 = param_4[2];
            if (0 < (int)uVar20) {
              *(undefined1 *)((long)pvVar11 + 0x138) = 1;
              *(double *)((long)pvVar11 + 0x130) = (double)uVar20;
            }
          }
          uVar10 = *(undefined8 *)(pcVar17 + 0x68);
          *(undefined1 *)((long)pvVar11 + 0x148) = 1;
          *(undefined8 *)((long)pvVar11 + 0x140) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x38);
          *(undefined1 *)((long)pvVar11 + 0x158) = 1;
          *(undefined8 *)((long)pvVar11 + 0x150) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x70);
          *(undefined1 *)((long)pvVar11 + 0x168) = 1;
          *(undefined8 *)((long)pvVar11 + 0x160) = uVar10;
          uVar10 = *(undefined8 *)(pcVar17 + 0x48);
          *(undefined1 *)((long)pvVar11 + 0x178) = 1;
          *(undefined8 *)((long)pvVar11 + 0x170) = uVar10;
          lVar1 = *(long *)(pcVar17 + 0x38);
          lVar4 = *(long *)(pcVar17 + 0x40);
          *(undefined1 *)((long)pvVar11 + 0x188) = 1;
          *(long *)((long)pvVar11 + 0x180) = lVar1 - lVar4;
          if (pcVar17[0x3e0] == '\x01') {
            uVar13 = *(ulong *)(pcVar17 + 0x3d8);
            if ((long)uVar13 < 0) {
              uVar14 = -(-uVar13 / 1000) - (ulong)(500 < -uVar13 % 1000);
            }
            else {
              uVar14 = uVar13 / 1000;
              if (499 < uVar13 % 1000) {
                uVar14 = uVar14 + 1;
              }
            }
            *(undefined1 *)((long)pvVar11 + 0x1b8) = 1;
            *(double *)((long)pvVar11 + 0x1b0) = (double)(long)uVar14;
          }
          if (pcVar17[0x3f0] == '\x01') {
            uVar13 = *(ulong *)(pcVar17 + 1000);
            if ((long)uVar13 < 0) {
              uVar14 = -(-uVar13 / 1000) - (ulong)(500 < -uVar13 % 1000);
            }
            else {
              uVar14 = uVar13 / 1000;
              if (499 < uVar13 % 1000) {
                uVar14 = uVar14 + 1;
              }
            }
            *(undefined1 *)((long)pvVar11 + 0x1c8) = 1;
            *(double *)((long)pvVar11 + 0x1c0) = (double)(long)uVar14;
          }
          FUN_00c87c2c(param_5,pvVar11);
        }
        lVar4 = *(long *)(puVar15 + 0x10);
        for (lVar1 = *(long *)(puVar15 + 0xe); lVar1 != lVar4; lVar1 = lVar1 + 0x1b8) {
          FUN_00c7ddb4(param_2,lVar1,1,&local_10c0,param_5);
        }
        if ((long)local_10b0 < 0) {
          operator_delete(local_10c0);
        }
        puVar15 = puVar15 + 0x30;
      } while (puVar15 != puVar2);
    }
    plVar8 = (long *)plVar16[1];
    plVar18 = plVar16;
    if ((long *)plVar16[1] == (long *)0x0) {
      do {
        plVar16 = (long *)plVar18[2];
        bVar9 = plVar18 != (long *)*plVar16;
        plVar18 = plVar16;
      } while (bVar9);
    }
    else {
      do {
        plVar16 = plVar8;
        plVar8 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
  } while( true );
}


// ===== 00c7c98c  FUN_00c7c98c =====

void FUN_00c7c98c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 long param_5,undefined8 param_6)

{
  long *plVar1;
  size_t __n;
  ulong uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  char cVar8;
  long lVar9;
  long *__s1;
  ulong uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined *puVar17;
  char *pcVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined4 *puVar22;
  long *plVar23;
  int *piVar24;
  long *plVar25;
  void *local_1118;
  ulong uStack_1110;
  ulong local_1108;
  void *local_1100;
  ulong uStack_10f8;
  ulong local_10f0;
  void *local_10e0;
  ulong uStack_10d8;
  ulong local_10d0;
  void *local_10c0;
  ulong uStack_10b8;
  ulong local_10b0;
  undefined1 local_10a4 [4];
  undefined1 *local_10a0;
  undefined1 *puStack_1098;
  undefined1 *local_1090;
  void *local_1080;
  ulong uStack_1078;
  undefined8 local_1070;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  local_10a4[0] = 0xaa;
  FUN_007e0b10(local_10a4);
  if ((long *)*param_3 != param_3 + 1) {
    plVar1 = (long *)(param_4 + 8);
    iVar5 = *(int *)PTR_DAT_00d52640;
    plVar25 = (long *)*param_3;
    do {
      local_10c0 = (void *)0x0;
      uStack_10b8 = 0;
      local_10b0 = 0;
      piVar24 = (int *)plVar25[10];
      do {
        if (piVar24 == (int *)plVar25[0xb]) goto LAB_00c7caf4;
        iVar14 = *piVar24;
        piVar24 = piVar24 + 0x30;
      } while (iVar14 != iVar5);
      memset(&local_1080,0xaa,0x400);
      local_1090 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1098 = &DAT_aaaaaaaaaaaaaaaa;
      local_10a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00622830(&local_10a0,&local_1080,0x400);
      uVar15 = FUN_00622844(&local_10a0,0x54);
      uVar2 = plVar25[5];
      plVar23 = (long *)plVar25[4];
      if (-1 < (char)*(byte *)((long)plVar25 + 0x37)) {
        uVar2 = (ulong)*(byte *)((long)plVar25 + 0x37);
        plVar23 = plVar25 + 4;
      }
      uVar15 = FUN_006228b0(uVar15,plVar23,uVar2);
      FUN_00622910(uVar15,iVar5);
      FUN_005d3510(&local_10e0,local_10a0);
      if ((long)local_10b0 < 0) {
        operator_delete(local_10c0);
      }
      uStack_10b8 = uStack_10d8;
      local_10c0 = local_10e0;
      local_10b0 = local_10d0;
LAB_00c7caf4:
      plVar19 = (long *)*plVar1;
      plVar23 = plVar1;
      if (plVar19 != (long *)0x0) {
        __s1 = (long *)plVar25[4];
        uVar2 = plVar25[5];
        if (-1 < (char)*(byte *)((long)plVar25 + 0x37)) {
          __s1 = plVar25 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar25 + 0x37);
        }
        do {
          while( true ) {
            plVar23 = (long *)plVar19[4];
            uVar10 = plVar19[5];
            if (-1 < (char)*(byte *)((long)plVar19 + 0x37)) {
              plVar23 = plVar19 + 4;
              uVar10 = (ulong)*(byte *)((long)plVar19 + 0x37);
            }
            __n = uVar10;
            if (uVar2 <= uVar10) {
              __n = uVar2;
            }
            iVar14 = memcmp(__s1,plVar23,__n);
            if (iVar14 == 0) break;
            if (-1 < iVar14) goto LAB_00c7cb24;
LAB_00c7cb74:
            plVar19 = (long *)*plVar19;
            plVar23 = plVar1;
            if (plVar19 == (long *)0x0) goto LAB_00c7cb8c;
          }
          plVar23 = plVar19;
          if (uVar2 == uVar10) break;
          if (uVar2 < uVar10) goto LAB_00c7cb74;
LAB_00c7cb24:
          plVar19 = (long *)plVar19[1];
          plVar23 = plVar1;
        } while (plVar19 != (long *)0x0);
      }
LAB_00c7cb8c:
      local_10e0 = (void *)0x0;
      uStack_10d8 = 0;
      local_10d0 = 0;
      local_1100 = (void *)0x0;
      uStack_10f8 = 0;
      local_10f0 = 0;
      if (plVar23 != plVar1) {
        puVar20 = (undefined8 *)plVar23[7];
        if (puVar20 != (undefined8 *)0x0) {
          uVar2 = puVar20[1];
          puVar11 = (undefined8 *)*puVar20;
          if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) {
            uVar2 = (ulong)*(byte *)((long)puVar20 + 0x17);
            puVar11 = puVar20;
          }
          FUN_005ff514(&local_1080,&local_10a0,&DAT_001b036b,2,puVar11,uVar2);
          if ((long)local_10d0 < 0) {
            operator_delete(local_10e0);
          }
          uStack_10d8 = uStack_1078;
          local_10e0 = local_1080;
          local_10d0 = local_1070;
        }
        puVar20 = (undefined8 *)plVar23[8];
        if (puVar20 != (undefined8 *)0x0) {
          uVar2 = puVar20[1];
          puVar11 = (undefined8 *)*puVar20;
          if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) {
            uVar2 = (ulong)*(byte *)((long)puVar20 + 0x17);
            puVar11 = puVar20;
          }
          FUN_005ff514(&local_1080,&local_10a0,&DAT_001b036b,2,puVar11,uVar2);
          if ((long)local_10f0 < 0) {
            operator_delete(local_1100);
          }
          uStack_10f8 = uStack_1078;
          local_1100 = local_1080;
          local_10f0 = local_1070;
        }
      }
      piVar3 = (int *)plVar25[0xb];
      for (piVar24 = (int *)plVar25[10]; piVar24 != piVar3; piVar24 = piVar24 + 0x30) {
        iVar14 = *piVar24;
        memset(&local_1080,0xaa,0x400);
        local_1090 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1098 = &DAT_aaaaaaaaaaaaaaaa;
        local_10a0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00622830(&local_10a0,&local_1080,0x400);
        uVar15 = FUN_00622844(&local_10a0,0x54);
        uVar2 = plVar25[5];
        plVar23 = (long *)plVar25[4];
        if (-1 < (char)*(byte *)((long)plVar25 + 0x37)) {
          uVar2 = (ulong)*(byte *)((long)plVar25 + 0x37);
          plVar23 = plVar25 + 4;
        }
        uVar15 = FUN_006228b0(uVar15,plVar23,uVar2);
        FUN_00622910(uVar15,iVar14);
        FUN_005d3510(&local_1118,local_10a0);
        pvVar16 = operator_new(0x1f8);
        uStack_1078 = uStack_1110;
        local_1080 = local_1118;
        local_1070 = local_1108;
        local_1118 = (void *)0x0;
        uStack_1110 = 0;
        local_1108 = 0;
        FUN_00c902c8(pvVar16,&local_1080,param_2);
        if ((long)local_1070 < 0) {
          operator_delete(local_1080);
        }
        if ((long)local_1108 < 0) {
          operator_delete(local_1118);
        }
        uVar15 = *(undefined8 *)(piVar24 + 0x20);
        *(undefined1 *)((long)pvVar16 + 0x40) = 1;
        *(undefined8 *)((long)pvVar16 + 0x38) = uVar15;
        uVar15 = *(undefined8 *)(piVar24 + 0x22);
        *(undefined1 *)((long)pvVar16 + 0x60) = 1;
        *(undefined8 *)((long)pvVar16 + 0x58) = uVar15;
        uVar15 = *(undefined8 *)(piVar24 + 0x1c);
        *(undefined1 *)((long)pvVar16 + 0x30) = 1;
        *(undefined8 *)((long)pvVar16 + 0x28) = uVar15;
        uVar15 = *(undefined8 *)(piVar24 + 0x1e);
        *(undefined1 *)((long)pvVar16 + 0x50) = 1;
        *(undefined8 *)((long)pvVar16 + 0x48) = uVar15;
        if (4 < (uint)piVar24[0xc]) goto LAB_00c7d354;
        if (*(char *)((long)pvVar16 + 0xa0) == '\x01') {
          FUN_00547bf8((long)pvVar16 + 0x88);
        }
        else {
          if (pvVar16 == (void *)0xffffffffffffff78) goto LAB_00c7d340;
          FUN_005d3510((long)pvVar16 + 0x88,(&PTR_DAT_00d4e6a0)[(uint)piVar24[0xc]]);
          *(undefined1 *)((long)pvVar16 + 0xa0) = 1;
        }
        iVar14 = piVar24[0x1a];
        *(undefined1 *)((long)pvVar16 + 0x18c) = 1;
        *(int *)((long)pvVar16 + 0x188) = iVar14;
        if ((uint)piVar24[0x24] < 3) {
          puVar17 = (&PTR_s_controlling_00d4e6c8)[(uint)piVar24[0x24]];
          if ((*(byte *)((long)pvVar16 + 0x1a8) & 1) == 0) goto LAB_00c7ce18;
          FUN_00547bf8((long)pvVar16 + 400);
          cVar8 = *(char *)((long)piVar24 + 0xaf);
        }
        else {
          if (*(char *)((long)pvVar16 + 0x1a8) == '\x01') {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                      );
          }
          puVar17 = (undefined *)0x0;
LAB_00c7ce18:
          if ((long)pvVar16 + 400 == 0) goto LAB_00c7d340;
          FUN_005d3510((long)pvVar16 + 400,puVar17);
          *(undefined1 *)((long)pvVar16 + 0x1a8) = 1;
          cVar8 = *(char *)((long)piVar24 + 0xaf);
        }
        lVar21 = (long)cVar8;
        if (lVar21 < 0) {
          lVar21 = *(long *)(piVar24 + 0x28);
        }
        if (lVar21 != 0) {
          FUN_00600e24((long)pvVar16 + 0x1b0,piVar24 + 0x26);
        }
        if (6 < (uint)piVar24[0x2c]) {
LAB_00c7d354:
                    /* WARNING: Subroutine does not return */
          FUN_0061ff28();
        }
        if (*(char *)((long)pvVar16 + 0x1e8) == '\x01') {
          FUN_00547bf8((long)pvVar16 + 0x1d0);
        }
        else {
          if (pvVar16 == (void *)0xfffffffffffffe30) goto LAB_00c7d340;
          FUN_005d3510((long)pvVar16 + 0x1d0,(&PTR_DAT_00d4e6e0)[(uint)piVar24[0x2c]]);
          *(undefined1 *)((long)pvVar16 + 0x1e8) = 1;
        }
        pcVar18 = *(char **)(piVar24 + 0x14);
        pcVar4 = *(char **)(piVar24 + 0x16);
        if (pcVar18 != pcVar4) {
          do {
            if (*pcVar18 == '\x01') {
              memset(&local_1080,0xaa,0x1000);
              local_1090 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1098 = &DAT_aaaaaaaaaaaaaaaa;
              local_10a0 = &DAT_aaaaaaaaaaaaaaaa;
              FUN_00622830(&local_10a0,&local_1080,0x1000);
              uVar15 = FUN_006228b0(&local_10a0,&DAT_001bea81,2);
              uVar2 = *(ulong *)(pcVar18 + 0x80);
              pcVar12 = *(char **)(pcVar18 + 0x78);
              if (-1 < pcVar18[0x8f]) {
                uVar2 = (ulong)(byte)pcVar18[0x8f];
                pcVar12 = pcVar18 + 0x78;
              }
              uVar15 = FUN_006228b0(uVar15,pcVar12,uVar2);
              uVar15 = FUN_006228b0(uVar15,&DAT_001e47a3,1);
              uVar2 = *(ulong *)(pcVar18 + 0x218);
              pcVar12 = *(char **)(pcVar18 + 0x210);
              if (-1 < pcVar18[0x227]) {
                uVar2 = (ulong)(byte)pcVar18[0x227];
                pcVar12 = pcVar18 + 0x210;
              }
              FUN_006228b0(uVar15,pcVar12,uVar2);
              FUN_005d3510(&local_1118,local_10a0);
              if (*(char *)((long)pvVar16 + 0xc0) == '\x01') {
                if (*(char *)((long)pvVar16 + 0xbf) < '\0') {
                  operator_delete(*(void **)((long)pvVar16 + 0xa8));
                }
              }
              else {
                if ((undefined8 *)((long)pvVar16 + 0xa8) == (undefined8 *)0x0) goto LAB_00c7d340;
                *(undefined1 *)((long)pvVar16 + 0xc0) = 1;
              }
              *(ulong *)((long)pvVar16 + 0xb0) = uStack_1110;
              *(undefined8 *)((long)pvVar16 + 0xa8) = local_1118;
              *(ulong *)((long)pvVar16 + 0xb8) = local_1108;
            }
            pcVar18 = pcVar18 + 0x3f8;
          } while (pcVar18 != pcVar4);
        }
        if (*piVar24 != iVar5) {
          uVar2 = uStack_10b8;
          if ((local_10b0 & 0x8000000000000000) == 0) {
            uVar2 = local_10b0 >> 0x38;
          }
          if (uVar2 != 0) {
            FUN_00661bd4((long)pvVar16 + 0x68,&local_10c0);
          }
        }
        uVar2 = uStack_10d8;
        if ((local_10d0 & 0x8000000000000000) == 0) {
          uVar2 = local_10d0 >> 0x38;
        }
        if (uVar2 != 0) {
          FUN_00661bd4((long)pvVar16 + 200,&local_10e0);
        }
        uVar2 = uStack_10f8;
        if ((local_10f0 & 0x8000000000000000) == 0) {
          uVar2 = local_10f0 >> 0x38;
        }
        if (uVar2 != 0) {
          FUN_00661bd4((long)pvVar16 + 0xe8,&local_1100);
        }
        if (piVar24[1] != 0) {
          local_1080 = (void *)CONCAT35(local_1080._5_3_,0xaa00000000);
          local_1080 = (void *)CONCAT44(local_1080._4_4_,0xaaaaaaaa);
          snprintf((char *)&local_1080,5,"%04X",(ulong)(uint)piVar24[1]);
          if (*(char *)((long)pvVar16 + 0x120) == '\x01') {
            FUN_00547bf8((long)pvVar16 + 0x108,&local_1080);
          }
          else {
            if (pvVar16 == (void *)0xfffffffffffffef8) goto LAB_00c7d340;
            FUN_005d3510((long)pvVar16 + 0x108,&local_1080);
            *(undefined1 *)((long)pvVar16 + 0x120) = 1;
          }
        }
        if ((char)piVar24[0xb] == '\x01') {
          pcVar18 = "client";
          if (piVar24[10] != 0) {
            pcVar18 = "server";
          }
          puVar22 = (undefined4 *)((long)pvVar16 + 0x148);
          if (*(char *)((long)pvVar16 + 0x160) == '\x01') {
            if (*(char *)((long)pvVar16 + 0x15f) < '\0') {
              puVar22 = *(undefined4 **)((long)pvVar16 + 0x148);
              *(undefined8 *)((long)pvVar16 + 0x150) = 6;
            }
            else {
              *(undefined1 *)((long)pvVar16 + 0x15f) = 6;
            }
            uVar6 = *(undefined4 *)pcVar18;
            uVar7 = *(undefined2 *)(pcVar18 + 4);
            *(undefined1 *)((long)puVar22 + 6) = 0;
            *puVar22 = uVar6;
            *(undefined2 *)(puVar22 + 1) = uVar7;
          }
          else {
            if (puVar22 == (undefined4 *)0x0) goto LAB_00c7d340;
LAB_00c7d124:
            FUN_005d3510((long)pvVar16 + 0x148,pcVar18);
            *(undefined1 *)((long)pvVar16 + 0x160) = 1;
          }
        }
        else {
          puVar22 = (undefined4 *)((long)pvVar16 + 0x148);
          if (*(char *)((long)pvVar16 + 0x160) != '\x01') {
            if (puVar22 == (undefined4 *)0x0) goto LAB_00c7d340;
            pcVar18 = "unknown";
            goto LAB_00c7d124;
          }
          if (*(char *)((long)pvVar16 + 0x15f) < '\0') {
            puVar22 = *(undefined4 **)((long)pvVar16 + 0x148);
            *(undefined8 *)((long)pvVar16 + 0x150) = 7;
          }
          else {
            *(undefined1 *)((long)pvVar16 + 0x15f) = 7;
          }
          *(undefined1 *)((long)puVar22 + 7) = 0;
          *(undefined4 *)((long)puVar22 + 3) = 0x6e776f6e;
          *puVar22 = 0x6e6b6e75;
        }
        FUN_00c82ae0((long)pvVar16 + 0x128,piVar24 + 4);
        if (piVar24[2] != 0) {
          FUN_0083e1fc(&local_1080);
          uVar2 = uStack_1078;
          if (-1 < (long)local_1070) {
            uVar2 = (long)local_1070._7_1_;
          }
          if ((long)local_1070._7_1_ < 0) {
            operator_delete(local_1080);
          }
          if (uVar2 != 0) {
            FUN_0083e1fc(&local_1080,piVar24[2]);
            if (*(char *)((long)pvVar16 + 0x180) == '\x01') {
              if (*(char *)((long)pvVar16 + 0x17f) < '\0') {
                operator_delete(*(void **)((long)pvVar16 + 0x168));
              }
            }
            else {
              if ((undefined8 *)((long)pvVar16 + 0x168) == (undefined8 *)0x0) goto LAB_00c7d340;
              *(undefined1 *)((long)pvVar16 + 0x180) = 1;
            }
            *(ulong *)((long)pvVar16 + 0x170) = uStack_1078;
            *(undefined8 *)((long)pvVar16 + 0x168) = local_1080;
            *(ulong *)((long)pvVar16 + 0x178) = local_1070;
          }
        }
        cVar8 = *(char *)((long)pvVar16 + 500);
        if (cVar8 == *(char *)(param_5 + 0x28)) {
          if (cVar8 != '\0') {
            *(undefined4 *)((long)pvVar16 + 0x1f0) = (int)*(undefined8 *)(param_5 + 0x20);
          }
        }
        else if (cVar8 == '\0') {
          if ((undefined4 *)((long)pvVar16 + 0x1f0) == (undefined4 *)0x0) {
LAB_00c7d340:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(undefined1 *)((long)pvVar16 + 500) = 1;
          *(int *)((long)pvVar16 + 0x1f0) = (int)*(undefined8 *)(param_5 + 0x20);
        }
        else {
          *(undefined1 *)((long)pvVar16 + 500) = 0;
        }
        FUN_00c87c2c(param_6,pvVar16);
      }
      if ((long)local_10f0 < 0) {
        operator_delete(local_1100);
      }
      if ((long)local_10d0 < 0) {
        operator_delete(local_10e0);
      }
      if ((long)local_10b0 < 0) {
        operator_delete(local_10c0);
        plVar23 = (long *)plVar25[1];
        if ((long *)plVar25[1] == (long *)0x0) goto LAB_00c7d2e4;
LAB_00c7d2d4:
        do {
          plVar19 = plVar23;
          plVar23 = (long *)*plVar19;
        } while ((long *)*plVar19 != (long *)0x0);
      }
      else {
        plVar23 = (long *)plVar25[1];
        if ((long *)plVar25[1] != (long *)0x0) goto LAB_00c7d2d4;
LAB_00c7d2e4:
        do {
          plVar19 = (long *)plVar25[2];
          bVar13 = plVar25 != (long *)*plVar19;
          plVar25 = plVar19;
        } while (bVar13);
      }
      plVar25 = plVar19;
    } while (plVar19 != param_3 + 1);
  }
  FUN_007e0b18(local_10a4);
  if (*(long *)(lVar9 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c7d370  FUN_00c7d370 =====

void FUN_00c7d370(long param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 ****local_78 [2];
  char cStack_61;
  void *local_60;
  undefined8 ****local_58;
  undefined1 local_4c [4];
  char *local_48;
  
  local_60 = (void *)*param_2;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 8);
  if (local_60 != (void *)0x0) {
    FUN_00d0f740(1);
  }
  FUN_00c87eac(uVar4,&local_60);
  pvVar5 = local_60;
  if ((local_60 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_60), iVar2 == 1)) {
    local_78[0] = (undefined8 ****)((long)pvVar5 + 0x10);
    FUN_00c83b6c(local_78,*(undefined8 *)((long)pvVar5 + 0x18));
    operator_delete(pvVar5);
  }
  FUN_00c7d658();
  puVar3 = *(undefined8 **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x90) = *puVar3;
  uVar4 = puVar3[1];
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(param_1 + 0xa0);
  pvVar5 = (void *)*puVar3;
  *puVar3 = uVar4;
  if ((pvVar5 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar2 == 1)) {
    local_78[0] = (undefined8 ****)((long)pvVar5 + 0x10);
    FUN_00c83b6c(local_78,*(undefined8 *)((long)pvVar5 + 0x18));
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)((long)pvVar5 + 8);
    if ((pvVar6 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar6), iVar2 == 1)) {
      local_78[0] = (undefined8 ****)((long)pvVar6 + 0x10);
      FUN_00c83b6c(local_78,*(undefined8 *)((long)pvVar6 + 0x18));
      operator_delete(pvVar6);
    }
    operator_delete(pvVar5);
  }
  if (((DAT_00dbb5b0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbb5b0), iVar2 != 0)) {
    DAT_00dbb5a8 = (char *)FUN_0066d328("webrtc_stats");
    FUN_0054ff1c(&DAT_00dbb5b0);
  }
  pcVar1 = DAT_00dbb5a8;
  if (*DAT_00dbb5a8 != '\0') {
    FUN_00c880a4(local_78,*puVar3);
    local_48 = "report";
    local_58 = local_78[0];
    if (-1 < cStack_61) {
      local_58 = local_78;
    }
    local_4c[0] = 7;
    FUN_0066d348(0x49,pcVar1,"webrtc_stats",0,1,&local_48,local_4c,&local_58,0);
    if (cStack_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
  pvVar6 = *(void **)(param_1 + 0x60);
  pvVar7 = *(void **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  pvVar5 = pvVar6;
  if (pvVar6 == pvVar7) {
    if (pvVar6 == (void *)0x0) {
      return;
    }
  }
  else {
    do {
      FUN_00c7d870(param_1,pvVar5,puVar3);
      pvVar5 = (void *)((long)pvVar5 + 0x20);
    } while (pvVar5 != pvVar7);
    if (pvVar6 == (void *)0x0) {
      return;
    }
    do {
      pvVar5 = (void *)((long)pvVar7 + -0x20);
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(long **)((long)pvVar7 + -8) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + -8) + 8))();
      }
      if (*(long **)((long)pvVar7 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + -0x10) + 8))();
      }
      if (*(long **)((long)pvVar7 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + -0x18) + 8))();
      }
      pvVar7 = pvVar5;
    } while (pvVar5 != pvVar6);
  }
  operator_delete(pvVar6);
  return;
}


// ===== 00c7d658  FUN_00c7d658 =====

/* WARNING: Removing unreachable block (ram,0x00c7d7f0) */

void FUN_00c7d658(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_44 [4];
  
  local_44[0] = 0xaa;
  FUN_007e0b10(local_44);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  do {
    if (puVar1 == puVar2) {
      FUN_007e0b18(local_44);
      return;
    }
    local_90 = (void *)0x0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_005f55c4(&local_90,0x16,*puVar1);
    puVar4 = (undefined8 *)FUN_00547994(&local_90,0,&DAT_001e0e41,1);
    uVar9 = puVar4[1];
    uVar8 = *puVar4;
    uVar7 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    pvVar5 = operator_new(0xc0);
    local_78 = uVar8;
    uStack_70 = uVar9;
    local_68 = uVar7;
    FUN_00c8b92c(pvVar5,&local_78,param_2);
    if (local_80 < 0) {
      operator_delete(local_90);
    }
    FUN_00c7dcd0((long)pvVar5 + 0x28,puVar1 + 2);
    FUN_00c7dcd0((long)pvVar5 + 0x48,puVar1 + 8);
    if (-1 < (int)puVar1[1]) {
      *(undefined4 *)((long)pvVar5 + 0x68) = puVar1[1];
      *(undefined1 *)((long)pvVar5 + 0x6c) = 1;
    }
    if ((uint)puVar1[0xe] < 4) {
      puVar6 = (&PTR_s_connecting_00d4e718)[(uint)puVar1[0xe]];
      if ((*(byte *)((long)pvVar5 + 0x88) & 1) == 0) goto LAB_00c7d7e0;
      FUN_00547bf8((long)pvVar5 + 0x70,puVar6);
    }
    else {
      if (*(char *)((long)pvVar5 + 0x88) == '\x01') {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                  );
      }
      puVar6 = (undefined *)0x0;
LAB_00c7d7e0:
      if ((long)pvVar5 + 0x70 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_005d3510((long)pvVar5 + 0x70,puVar6);
      *(undefined1 *)((long)pvVar5 + 0x88) = 1;
    }
    uVar3 = puVar1[0xf];
    *(undefined1 *)((long)pvVar5 + 0x94) = 1;
    *(undefined4 *)((long)pvVar5 + 0x90) = uVar3;
    uVar7 = *(undefined8 *)(puVar1 + 0x12);
    *(undefined1 *)((long)pvVar5 + 0xa0) = 1;
    *(undefined8 *)((long)pvVar5 + 0x98) = uVar7;
    uVar3 = puVar1[0x10];
    *(undefined1 *)((long)pvVar5 + 0xac) = 1;
    *(undefined4 *)((long)pvVar5 + 0xa8) = uVar3;
    uVar7 = *(undefined8 *)(puVar1 + 0x14);
    *(undefined1 *)((long)pvVar5 + 0xb8) = 1;
    *(undefined8 *)((long)pvVar5 + 0xb0) = uVar7;
    FUN_00c87c2c(param_4,pvVar5);
    puVar1 = puVar1 + 0x16;
  } while( true );
}


// ===== 00c7d870  FUN_00c7d870 =====

void FUN_00c7d870(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  long *plVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  long *plVar9;
  long *local_80;
  long *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  if (*param_2 == 1) {
    plVar4 = *(long **)(param_2 + 4);
    uVar8 = 1;
    plVar9 = plVar4;
    plVar1 = (long *)0x0;
  }
  else {
    if (*param_2 == 0) {
      plVar4 = *(long **)(param_2 + 2);
      if (plVar4 != (long *)0x0) {
        (**(code **)*plVar4)(plVar4);
        (**(code **)(*plVar4 + 0x20))(plVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00c7d900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))(plVar4);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00c7db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam0000000000000000 + 0x20))(0,param_3);
      return;
    }
    plVar4 = *(long **)(param_2 + 6);
    plVar9 = (long *)0x0;
    uVar8 = 0;
    plVar1 = plVar4;
  }
  plVar5 = (long *)0x0;
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)*plVar4)();
    plVar5 = plVar9;
    plVar6 = plVar1;
  }
  plVar4 = *(long **)(param_2 + 2);
  if (plVar4 != (long *)0x0) {
    (**(code **)*plVar4)(plVar4);
  }
  pvVar7 = (void *)*param_3;
  local_70 = pvVar7;
  if (pvVar7 != (void *)0x0) {
    FUN_00d0f740(1,pvVar7);
  }
  local_78 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)*plVar5)(plVar5);
  }
  local_80 = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)*plVar6)(plVar6);
  }
  FUN_00c78ca0(&local_68,param_1,uVar8,&local_70,&local_78,&local_80);
  local_60 = local_68;
  local_68 = (void *)0x0;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_60);
  pvVar2 = local_60;
  if ((local_60 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_60), iVar3 == 1)) {
    local_58 = (long)pvVar2 + 0x10;
    FUN_00c83b6c(&local_58,*(undefined8 *)((long)pvVar2 + 0x18));
    operator_delete(pvVar2);
  }
  pvVar2 = local_68;
  if ((local_68 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_68), iVar3 == 1)) {
    local_58 = (long)pvVar2 + 0x10;
    FUN_00c83b6c(&local_58,*(undefined8 *)((long)pvVar2 + 0x18));
    operator_delete(pvVar2);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((pvVar7 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar3 == 1)) {
    local_58 = (long)pvVar7 + 0x10;
    FUN_00c83b6c(&local_58,*(undefined8 *)((long)pvVar7 + 0x18));
    operator_delete(pvVar7);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return;
}


// ===== 00c7db54  FUN_00c7db54 =====

void FUN_00c7db54(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_41;
  
  if (param_2 != (undefined8 *)0x0) {
    pvVar5 = (void *)0x0;
    do {
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      uVar1 = param_2[1];
      puVar2 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar2 = param_2;
      }
      FUN_005ff514(&local_60,&uStack_41,&DAT_001b036b,2,puVar2,uVar1);
      lVar3 = FUN_00c87d04(param_3,&local_60);
      if (lVar3 != 0) {
        if (-1 < (long)local_50) {
          return;
        }
        operator_delete(local_60);
        return;
      }
      pvVar4 = operator_new(0xa8);
      if ((long)local_50 < 0) {
        FUN_005478d8(&local_80,local_60,puStack_58);
      }
      else {
        puStack_78 = puStack_58;
        local_80 = local_60;
        local_70 = local_50;
      }
      FUN_00c8af6c(pvVar4,&local_80,param_1);
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      FUN_00600e24((long)pvVar4 + 0x28,param_2);
      FUN_00600e24((long)pvVar4 + 0x48,param_2 + 3);
      FUN_00600e24((long)pvVar4 + 0x68,param_2 + 6);
      if (pvVar5 != (void *)0x0) {
        FUN_00600e24((long)pvVar5 + 0x88,(long)pvVar4 + 8);
      }
      FUN_00c87c2c(param_3,pvVar4);
      if ((long)local_50 < 0) {
        operator_delete(local_60);
      }
      param_2 = (undefined8 *)param_2[9];
      pvVar5 = pvVar4;
    } while (param_2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c7dcd0  FUN_00c7dcd0 =====

undefined8 * FUN_00c7dcd0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    if (param_1 != param_2) {
      bVar2 = *(byte *)((long)param_2 + 0x17);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        uVar1 = param_2[1];
        puVar3 = (undefined8 *)*param_2;
        if (-1 < (char)bVar2) {
          uVar1 = (ulong)bVar2;
          puVar3 = param_2;
        }
        FUN_00547f08(param_1,puVar3,uVar1);
      }
      else if ((char)bVar2 < '\0') {
        FUN_00547fc0(param_1,*param_2,param_2[1]);
      }
      else {
        uVar5 = param_2[1];
        uVar4 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar5;
        *param_1 = uVar4;
      }
    }
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(param_1,*param_2,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}


// ===== 00c7ddb4  FUN_00c7ddb4 =====

/* WARNING: Removing unreachable block (ram,0x00c7e664) */
/* WARNING: Removing unreachable block (ram,0x00c7e618) */

long FUN_00c7ddb4(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  short sVar7;
  uint uVar8;
  void *pvVar9;
  ulong uVar10;
  void *__src;
  void *__dest;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  size_t __n;
  short *psVar16;
  undefined1 auVar17 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uVar10 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005ff514(&local_70,&local_c0,&DAT_0019fcd7,1,puVar6,uVar10);
  pvVar9 = (void *)FUN_00c87d04(param_5,&local_70);
  if (pvVar9 != (void *)0x0) goto LAB_00c7e628;
  if ((param_3 & 1) == 0) {
    pvVar9 = operator_new(0x1f0);
    auStack_b8 = (undefined1  [8])puStack_68;
    local_c0 = local_70;
    local_70 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x0;
    local_b0 = local_60;
    local_60 = (undefined1 *)0x0;
    FUN_00c8c6dc(pvVar9,&local_c0,param_1);
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    FUN_00600e24((long)pvVar9 + 0x28,param_4);
  }
  else {
    pvVar9 = operator_new(0x1f0);
    auStack_b8 = (undefined1  [8])puStack_68;
    local_c0 = local_70;
    local_70 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x0;
    local_b0 = local_60;
    local_60 = (undefined1 *)0x0;
    FUN_00c8c564(pvVar9,&local_c0,param_1);
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    FUN_00600e24((long)pvVar9 + 0x28,param_4);
    iVar3 = *(int *)(param_2 + 0x1e);
    pcVar11 = "cellular";
    if (iVar3 < 0x10) {
      if (iVar3 < 2) {
        if (iVar3 == 0) goto LAB_00c7df80;
        if (iVar3 != 1) goto LAB_00c7dfac;
        pcVar11 = "ethernet";
      }
      else if (iVar3 == 2) {
        pcVar11 = "wifi";
      }
      else if (iVar3 != 4) {
        if (iVar3 != 8) goto LAB_00c7dfac;
        pcVar11 = "vpn";
      }
LAB_00c7df94:
      if ((*(byte *)((long)pvVar9 + 0x68) & 1) == 0) goto LAB_00c7dfc4;
      FUN_00547bf8((long)pvVar9 + 0x50,pcVar11);
    }
    else {
      if (iVar3 < 0x80) {
        if ((iVar3 == 0x10) || (iVar3 == 0x20)) {
LAB_00c7df80:
          pcVar11 = "unknown";
        }
        else {
          pcVar11 = "cellular";
          if (iVar3 != 0x40) goto LAB_00c7dfac;
        }
        goto LAB_00c7df94;
      }
      if (((iVar3 == 0x80) || (iVar3 == 0x100)) || (iVar3 == 0x200)) goto LAB_00c7df94;
LAB_00c7dfac:
      if (*(char *)((long)pvVar9 + 0x68) == '\x01') {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                  );
      }
      pcVar11 = (char *)0x0;
LAB_00c7dfc4:
      if ((long)pvVar9 + 0x50 == 0) goto LAB_00c7e668;
      FUN_005d3510((long)pvVar9 + 0x50,pcVar11);
      *(undefined1 *)((long)pvVar9 + 0x68) = 1;
    }
    uVar10 = FUN_00aff31c(param_2);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_00aff308(param_2);
      if ((uVar10 & 1) != 0) {
        uVar10 = param_2[8];
        if ((*(byte *)((long)param_2 + 0x4f) & 0x80) == 0) {
          uVar10 = (ulong)*(byte *)((long)param_2 + 0x4f);
        }
        if (uVar10 != 0) goto LAB_00c7e000;
      }
      uVar10 = FUN_00aff2f4(param_2);
      if ((uVar10 & 1) != 0) goto LAB_00c7e01c;
    }
    else {
LAB_00c7e000:
      FUN_00600e24((long)pvVar9 + 0xd8,param_2 + 7);
LAB_00c7e01c:
      uVar10 = param_2[0x31];
      if ((*(byte *)((long)param_2 + 0x197) & 0x80) == 0) {
        uVar10 = (ulong)*(byte *)((long)param_2 + 0x197);
      }
      if (uVar10 != 0) {
        FUN_00600e24((long)pvVar9 + 0x120,param_2 + 0x30);
      }
    }
    iVar3 = *(int *)(param_2 + 0x1e);
    ppuVar13 = (undefined1 **)((ulong)&local_c0 | 3);
    ppuVar14 = (undefined1 **)((ulong)&local_c0 | 4);
    ppuVar15 = (undefined1 **)((ulong)&local_c0 | 7);
    if (iVar3 == 8) {
      iVar3 = *(int *)((long)param_2 + 0xf4);
      *(undefined2 *)((long)pvVar9 + 0x1c8) = 0x101;
      if (iVar3 < 0x20) {
        if (iVar3 < 2) {
          if (iVar3 == 0) {
            pcVar11 = "unknown";
            __n = 7;
            ppuVar13 = ppuVar15;
          }
          else {
            if (iVar3 != 1) {
LAB_00c7e1a8:
              __n = 0;
              pcVar11 = (char *)0x0;
              local_b0 = (undefined1 *)((ulong)local_b0 & 0xffffffffffffff);
              goto LAB_00c7e2bc;
            }
            pcVar11 = "ethernet";
            __n = 8;
            ppuVar13 = (undefined1 **)auStack_b8;
          }
        }
        else if (iVar3 == 2) {
          pcVar11 = &UNK_001a5786;
          __n = 4;
          ppuVar13 = ppuVar14;
        }
        else if (iVar3 == 4) {
          pcVar11 = "cellular";
          __n = 8;
          ppuVar13 = (undefined1 **)auStack_b8;
        }
        else {
          if (iVar3 != 0x10) goto LAB_00c7e1a8;
          pcVar11 = "loopback";
          __n = 8;
          ppuVar13 = (undefined1 **)auStack_b8;
        }
      }
      else {
        if (iVar3 < 0x80) {
          if (iVar3 == 0x20) {
            pcVar11 = &DAT_001b18c8;
            __n = 3;
            goto LAB_00c7e278;
          }
          if (iVar3 != 0x40) goto LAB_00c7e1a8;
          pcVar11 = "cellular2g";
        }
        else if (iVar3 == 0x80) {
          pcVar11 = "cellular3g";
        }
        else if (iVar3 == 0x100) {
          pcVar11 = "cellular4g";
        }
        else {
          if (iVar3 != 0x200) goto LAB_00c7e1a8;
          pcVar11 = "cellular5g";
        }
        __n = 10;
        ppuVar13 = (undefined1 **)(auStack_b8 + 2);
      }
LAB_00c7e278:
      local_b0 = (undefined1 *)CONCAT17((char)__n,(undefined7)local_b0);
      if ((&local_c0 <= pcVar11) && (pcVar11 < ppuVar13)) goto LAB_00c7e67c;
    }
    else {
      *(undefined2 *)((long)pvVar9 + 0x1c8) = 0x100;
      if (iVar3 < 0x20) {
        if (iVar3 < 2) {
          if (iVar3 == 0) {
            pcVar11 = "unknown";
            __n = 7;
            ppuVar13 = ppuVar15;
          }
          else {
            if (iVar3 != 1) goto LAB_00c7e1a8;
            pcVar11 = "ethernet";
            __n = 8;
            ppuVar13 = (undefined1 **)auStack_b8;
          }
        }
        else if (iVar3 == 2) {
          pcVar11 = &UNK_001a5786;
          __n = 4;
          ppuVar13 = ppuVar14;
        }
        else if (iVar3 == 4) {
          pcVar11 = "cellular";
          __n = 8;
          ppuVar13 = (undefined1 **)auStack_b8;
        }
        else {
          if (iVar3 != 0x10) goto LAB_00c7e1a8;
          pcVar11 = "loopback";
          __n = 8;
          ppuVar13 = (undefined1 **)auStack_b8;
        }
      }
      else {
        if (iVar3 < 0x80) {
          if (iVar3 == 0x20) {
            pcVar11 = &DAT_001b18c8;
            __n = 3;
            goto LAB_00c7e2a4;
          }
          if (iVar3 != 0x40) goto LAB_00c7e1a8;
          pcVar11 = "cellular2g";
        }
        else if (iVar3 == 0x80) {
          pcVar11 = "cellular3g";
        }
        else if (iVar3 == 0x100) {
          pcVar11 = "cellular4g";
        }
        else {
          if (iVar3 != 0x200) goto LAB_00c7e1a8;
          pcVar11 = "cellular5g";
        }
        __n = 10;
        ppuVar13 = (undefined1 **)(auStack_b8 + 2);
      }
LAB_00c7e2a4:
      local_b0 = (undefined1 *)CONCAT17((char)__n,(undefined7)local_b0);
      if ((&local_c0 <= pcVar11) && (pcVar11 < ppuVar13)) goto LAB_00c7e67c;
    }
LAB_00c7e2bc:
    memmove(&local_c0,pcVar11,__n);
    cVar5 = *(char *)((long)pvVar9 + 0x1e8);
    *(undefined1 *)((long)&local_c0 + __n) = 0;
    if (cVar5 == '\x01') {
      if (*(char *)((long)pvVar9 + 0x1e7) < '\0') {
        operator_delete(*(void **)((long)pvVar9 + 0x1d0));
      }
      puVar12 = local_b0;
      local_b0 = (undefined1 *)((ulong)local_b0 & 0xffffffffffffff);
    }
    else {
      if ((undefined8 *)((long)pvVar9 + 0x1d0) == (undefined8 *)0x0) goto LAB_00c7e668;
      *(undefined1 *)((long)pvVar9 + 0x1e8) = 1;
      puVar12 = local_b0;
    }
    *(undefined1 (*) [8])((long)pvVar9 + 0x1d8) = auStack_b8;
    *(undefined8 *)((long)pvVar9 + 0x1d0) = local_c0;
    *(undefined1 **)((long)pvVar9 + 0x1e0) = puVar12;
  }
  FUN_007e8ea8(param_2 + 10);
  FUN_007e9e64(&local_c0);
  if (*(char *)((long)pvVar9 + 0x88) == '\x01') {
    if (*(char *)((long)pvVar9 + 0x87) < '\0') {
      operator_delete(*(void **)((long)pvVar9 + 0x70));
    }
  }
  else {
    if ((undefined8 *)((long)pvVar9 + 0x70) == (undefined8 *)0x0) goto LAB_00c7e668;
    *(undefined1 *)((long)pvVar9 + 0x88) = 1;
  }
  *(undefined1 (*) [8])((long)pvVar9 + 0x78) = auStack_b8;
  *(undefined8 *)((long)pvVar9 + 0x70) = local_c0;
  *(undefined1 **)((long)pvVar9 + 0x80) = local_b0;
  FUN_007e8ea8(param_2 + 10);
  FUN_007e9e64(&local_c0);
  if (*(char *)((long)pvVar9 + 0xa8) == '\x01') {
    if (*(char *)((long)pvVar9 + 0xa7) < '\0') {
      operator_delete(*(void **)((long)pvVar9 + 0x90));
    }
  }
  else {
    if ((undefined8 *)((long)pvVar9 + 0x90) == (undefined8 *)0x0) goto LAB_00c7e668;
    *(undefined1 *)((long)pvVar9 + 0xa8) = 1;
  }
  *(undefined1 (*) [8])((long)pvVar9 + 0x98) = auStack_b8;
  *(undefined8 *)((long)pvVar9 + 0x90) = local_c0;
  *(undefined1 **)((long)pvVar9 + 0xa0) = local_b0;
  uVar8 = FUN_007e8eb4(param_2 + 10);
  *(uint *)((long)pvVar9 + 0xb0) = uVar8 & 0xffff;
  psVar16 = (short *)(param_2 + 4);
  *(undefined1 *)((long)pvVar9 + 0xb4) = 1;
  FUN_00600e24((long)pvVar9 + 0xb8,param_2 + 4);
  auVar17 = FUN_00aff330(param_2);
  uVar10 = auVar17._8_8_;
  __src = auVar17._0_8_;
  __dest = (void *)((long)pvVar9 + 0xf8);
  if (*(char *)((long)pvVar9 + 0x110) == '\x01') {
    if ((__src == (void *)0x0) && (uVar10 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                );
    }
    FUN_00547b08((long)pvVar9 + 0xf8,__src,uVar10);
  }
  else {
    if (__dest == (void *)0x0) goto LAB_00c7e668;
    if (0x7ffffffffffffff6 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (uVar10 < 0x17) {
      *(char *)((long)pvVar9 + 0x10f) = auVar17[8];
    }
    else {
      uVar1 = (uVar10 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = operator_new(uVar2);
      *(void **)((long)pvVar9 + 0xf8) = __dest;
      *(ulong *)((long)pvVar9 + 0x100) = uVar10;
      *(ulong *)((long)pvVar9 + 0x108) = uVar2 | 0x8000000000000000;
    }
    if ((void *)((long)__dest + uVar10) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= __src) && (__src < (void *)((long)__dest + uVar10))) {
LAB_00c7e67c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,__src,uVar10);
    *(undefined1 *)((long)__dest + uVar10) = 0;
    *(undefined1 *)((long)pvVar9 + 0x110) = 1;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x13);
  *(undefined1 *)((long)pvVar9 + 0x11c) = 1;
  *(undefined4 *)((long)pvVar9 + 0x118) = uVar4;
  FUN_00600e24((long)pvVar9 + 0x140,param_2 + 0x20);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  auStack_b8 = (undefined1  [8])&DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8cec(&local_c0,param_2 + 0x23);
  sVar7 = FUN_007e8eb4(&local_c0);
  if (sVar7 != 0) {
    FUN_007e8ea8(&local_c0);
    FUN_007e9e64(&local_d8);
    if (*(char *)((long)pvVar9 + 0x178) == '\x01') {
      if (*(char *)((long)pvVar9 + 0x177) < '\0') {
        operator_delete(*(void **)((long)pvVar9 + 0x160));
      }
    }
    else {
      if ((undefined8 *)((long)pvVar9 + 0x160) == (undefined8 *)0x0) {
LAB_00c7e668:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)((long)pvVar9 + 0x178) = 1;
    }
    *(undefined8 *)((long)pvVar9 + 0x168) = uStack_d0;
    *(undefined8 *)((long)pvVar9 + 0x160) = local_d8;
    *(undefined8 *)((long)pvVar9 + 0x170) = local_c8;
    uVar8 = FUN_007e8eb4(&local_c0);
    *(uint *)((long)pvVar9 + 0x180) = uVar8 & 0xffff;
    *(undefined1 *)((long)pvVar9 + 0x184) = 1;
  }
  uVar10 = param_2[0x15];
  if ((*(byte *)((long)param_2 + 0xb7) & 0x80) == 0) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0xb7);
  }
  if (uVar10 != 0) {
    FUN_00600e24((long)pvVar9 + 0x188,param_2 + 0x14);
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    if (param_2[5] == 3) {
      psVar16 = *(short **)psVar16;
      goto LAB_00c7e5d4;
    }
  }
  else if (*(char *)((long)param_2 + 0x37) == '\x03') {
LAB_00c7e5d4:
    if (*psVar16 == 0x6374 && (char)psVar16[1] == 'p') {
      FUN_00600e24((long)pvVar9 + 0x1a8,param_2 + 0x2c);
    }
  }
  FUN_00c87c2c(param_5,pvVar9);
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
LAB_00c7e628:
  return (long)pvVar9 + 8;
}


// ===== 00c7e6d0  FUN_00c7e6d0 =====

void FUN_00c7e6d0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  double dVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  long *plVar13;
  double dVar14;
  uint *puVar15;
  uint *puVar16;
  undefined2 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  undefined8 *local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 ***local_520;
  undefined1 *puStack_518;
  undefined1 *local_510;
  undefined1 *local_500;
  undefined1 *puStack_4f8;
  undefined1 *local_4f0;
  undefined1 local_4dc [4];
  undefined8 **local_4d8;
  undefined1 *puStack_4d0;
  undefined1 *local_4c8;
  undefined8 **local_4c0;
  undefined1 *puStack_4b8;
  undefined1 *local_4b0;
  undefined8 **local_4a0;
  undefined1 *puStack_498;
  undefined1 *local_490;
  undefined1 *local_488;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  local_4dc[0] = 0xaa;
  FUN_007e0b10(local_4dc);
  local_4f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_500 = &DAT_aaaaaaaaaaaaaaaa;
  if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
    if (*(char *)(param_3 + 0x27) < '\0') {
      FUN_005478d8(&local_500,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
    }
    else {
      puStack_4f8 = *(undefined1 **)(param_3 + 0x18);
      local_500 = *(undefined1 **)(param_3 + 0x10);
      local_4f0 = *(undefined1 **)(param_3 + 0x20);
    }
    puStack_518 = &DAT_aaaaaaaaaaaaaaaa;
    local_520 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
    local_510 = &DAT_aaaaaaaaaaaaaaaa;
    if ((*(byte *)(param_3 + 0x48) & 1) != 0) {
      uVar12 = *(undefined4 *)PTR_DAT_00d52638;
      memset(&local_4a0,0xaa,0x400);
      local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4c0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00622830(&local_4c0,&local_4a0,0x400);
      uVar8 = FUN_00622844(&local_4c0,0x54);
      uVar19 = *(ulong *)(param_3 + 0x38);
      puVar1 = *(undefined8 **)(param_3 + 0x30);
      if (-1 < (char)*(byte *)(param_3 + 0x47)) {
        uVar19 = (ulong)*(byte *)(param_3 + 0x47);
        puVar1 = (undefined8 *)(param_3 + 0x30);
      }
      uVar8 = FUN_006228b0(uVar8,puVar1,uVar19);
      FUN_00622910(uVar8,uVar12);
      FUN_005d3510(&local_520,local_4c0);
      dVar7 = DAT_001f5860;
      plVar13 = *(long **)(param_3 + 0x98);
      if ((*(byte *)(plVar13 + 0xd) & 1) != 0) {
        lVar21 = plVar13[3];
        lVar2 = plVar13[4];
        if (lVar21 != lVar2) {
          do {
            if ((*(undefined4 **)(lVar21 + 0xb8) != *(undefined4 **)(lVar21 + 0xc0)) &&
               (((*(char *)(param_1 + 0x10) != '\x01' || (*(int *)(lVar21 + 0x10) != 0)) ||
                (*(long *)(lVar21 + 0x1a0) != 0)))) {
              lVar22 = *(long *)(param_3 + 0x98);
              if ((*(byte *)(lVar22 + 0x68) & 1) == 0) goto LAB_00c7f36c;
              uVar12 = **(undefined4 **)(lVar21 + 0xb8);
              memset(&local_4a0,0xaa,0x400);
              local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
              local_4c0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
              FUN_00622830(&local_4c0,&local_4a0,0x400);
              uVar8 = FUN_00622844(&local_4c0,0x49);
              puVar11 = puStack_518;
              ppppuVar6 = (undefined8 ****)local_520;
              if (-1 < (long)local_510) {
                puVar11 = (undefined1 *)((ulong)local_510 >> 0x38);
                ppppuVar6 = &local_520;
              }
              uVar8 = FUN_006228b0(uVar8,ppppuVar6,puVar11);
              uVar8 = FUN_00622844(uVar8,0x41);
              FUN_006229f8(uVar8,uVar12);
              FUN_005d3510(&local_4d8,local_4c0);
              pvVar9 = operator_new(0x4d0);
              puStack_498 = puStack_4d0;
              local_4a0 = local_4d8;
              local_4d8 = (undefined8 **)0x0;
              puStack_4d0 = (undefined1 *)0x0;
              local_490 = local_4c8;
              local_4c8 = (undefined1 *)0x0;
              FUN_00c8dc8c(pvVar9,&local_4a0,param_2);
              if ((long)local_490 < 0) {
                operator_delete(local_4a0);
              }
              if ((long)local_4c8 < 0) {
                operator_delete(local_4d8);
              }
              FUN_00c81ec0(lVar21,pvVar9);
              FUN_00600e24((long)pvVar9 + 0x50,&local_520);
              FUN_00600e24((long)pvVar9 + 0x128,&local_500);
              puVar18 = (undefined4 *)((long)pvVar9 + 0x30);
              if (*(char *)((long)pvVar9 + 0x48) == '\x01') {
                if (*(char *)((long)pvVar9 + 0x47) < '\0') {
                  puVar18 = *(undefined4 **)((long)pvVar9 + 0x30);
                  *(undefined8 *)((long)pvVar9 + 0x38) = 5;
                }
                else {
                  *(undefined1 *)((long)pvVar9 + 0x47) = 5;
                }
                *puVar18 = 0x69647561;
                *(undefined2 *)(puVar18 + 1) = 0x6f;
              }
              else {
                if (puVar18 == (undefined4 *)0x0) goto LAB_00c7f380;
                FUN_005d3510((long)pvVar9 + 0x30,"audio");
                *(undefined1 *)((long)pvVar9 + 0x48) = 1;
              }
              if (*(char *)(lVar21 + 0xb4) == '\x01') {
                plVar23 = (long *)(lVar22 + 0x50);
                plVar13 = (long *)*plVar23;
                if (plVar13 != (long *)0x0) {
                  do {
                    while ((int)plVar13[4] <= *(int *)(lVar21 + 0xb0)) {
                      if (*(int *)(lVar21 + 0xb0) == (int)plVar13[4]) {
                        if (plVar13 != plVar23) {
                          FUN_00c82014(&local_4a0,*(undefined8 *)((long)pvVar9 + 0x20),0x49,
                                       &local_520,plVar13 + 5,param_6);
                          if (*(char *)((long)pvVar9 + 0x88) == '\x01') {
                            if (*(char *)((long)pvVar9 + 0x87) < '\0') {
                              operator_delete(*(void **)((long)pvVar9 + 0x70));
                            }
                          }
                          else {
                            if ((undefined8 *)((long)pvVar9 + 0x70) == (undefined8 *)0x0)
                            goto LAB_00c7f380;
                            *(undefined1 *)((long)pvVar9 + 0x88) = 1;
                          }
                          *(undefined1 **)((long)pvVar9 + 0x78) = puStack_498;
                          *(undefined8 *)((long)pvVar9 + 0x70) = local_4a0;
                          *(undefined1 **)((long)pvVar9 + 0x80) = local_490;
                        }
                        goto LAB_00c7eaa8;
                      }
                      plVar13 = (long *)plVar13[1];
                      if (plVar13 == (long *)0x0) goto LAB_00c7eaa8;
                    }
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
              }
LAB_00c7eaa8:
              iVar3 = *(int *)(lVar21 + 0x184);
              *(undefined1 *)((long)pvVar9 + 0x98) = 1;
              *(double *)((long)pvVar9 + 0x90) = (double)iVar3 / 1000.0;
              uVar8 = *(undefined8 *)(lVar21 + 0x1a0);
              *(undefined1 *)((long)pvVar9 + 600) = 1;
              *(undefined8 *)((long)pvVar9 + 0x250) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x1b0);
              *(undefined1 *)((long)pvVar9 + 0x268) = 1;
              *(undefined8 *)((long)pvVar9 + 0x260) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x1b8);
              *(undefined1 *)((long)pvVar9 + 0x278) = 1;
              *(undefined8 *)((long)pvVar9 + 0x270) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x1c0);
              *(undefined1 *)((long)pvVar9 + 0x288) = 1;
              *(undefined8 *)((long)pvVar9 + 0x280) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x1c8);
              *(undefined1 *)((long)pvVar9 + 0x298) = 1;
              *(undefined8 *)((long)pvVar9 + 0x290) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x1d0);
              *(undefined1 *)((long)pvVar9 + 0x2a8) = 1;
              *(undefined8 *)((long)pvVar9 + 0x2a0) = uVar8;
              uVar4 = *(uint *)(lVar21 + 0x194);
              if (-1 < (int)uVar4) {
                *(undefined1 *)((long)pvVar9 + 0x2b8) = 1;
                *(double *)((long)pvVar9 + 0x2b0) = (double)uVar4 / 32767.0;
              }
              uVar8 = *(undefined8 *)(lVar21 + 0x198);
              *(undefined1 *)((long)pvVar9 + 0x2c8) = 1;
              *(undefined8 *)((long)pvVar9 + 0x2c0) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x1a8);
              *(undefined1 *)((long)pvVar9 + 0x2d8) = 1;
              *(undefined8 *)((long)pvVar9 + 0x2d0) = uVar8;
              if (*(char *)(lVar21 + 0x80) == '\x01') {
                lVar22 = *(long *)(lVar21 + 0x78);
                if (lVar22 == -0x8000000000000000) {
                  dVar14 = -INFINITY;
                }
                else if (lVar22 == 0x7fffffffffffffff) {
                  dVar14 = INFINITY;
                }
                else {
                  dVar14 = (double)lVar22 * dVar7;
                }
                *(double *)((long)pvVar9 + 0x200) = dVar14;
                *(undefined1 *)((long)pvVar9 + 0x208) = 1;
              }
              if (*(char *)(lVar21 + 0x90) == '\x01') {
                lVar22 = *(long *)(lVar21 + 0x88);
                *(undefined1 *)((long)pvVar9 + 0x3d0) = 1;
                *(double *)((long)pvVar9 + 0x3c8) = (double)lVar22;
              }
              uVar8 = *(undefined8 *)(lVar21 + 0x1d8);
              *(undefined1 *)((long)pvVar9 + 0x178) = 1;
              *(undefined8 *)((long)pvVar9 + 0x170) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x220);
              *(undefined1 *)((long)pvVar9 + 0x480) = 1;
              *(undefined8 *)((long)pvVar9 + 0x478) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x228);
              *(undefined1 *)((long)pvVar9 + 0x490) = 1;
              *(undefined8 *)((long)pvVar9 + 0x488) = uVar8;
              uVar8 = *(undefined8 *)(lVar21 + 0x230);
              *(undefined1 *)((long)pvVar9 + 0x4a0) = 1;
              *(undefined8 *)((long)pvVar9 + 0x498) = uVar8;
              uVar4 = *(uint *)(lVar21 + 0x238) &
                      ((int)*(uint *)(lVar21 + 0x238) >> 0x1f ^ 0xffffffffU);
              if (*(char *)((long)pvVar9 + 0x4ac) == '\x01') {
                *(uint *)((long)pvVar9 + 0x4a8) = uVar4;
              }
              else {
                if ((uint *)((long)pvVar9 + 0x4a8) == (uint *)0x0) goto LAB_00c7f380;
                *(uint *)((long)pvVar9 + 0x4a8) = uVar4;
                *(undefined1 *)((long)pvVar9 + 0x4ac) = 1;
              }
              iVar3 = *(int *)(lVar21 + 0x23c);
              *(undefined1 *)((long)pvVar9 + 0x4b8) = 1;
              *(double *)((long)pvVar9 + 0x4b0) = (double)iVar3 / 1000.0;
              if (*(char *)((long)pvVar9 + 0x2c) == '\x01') {
                puVar16 = *(uint **)(param_4 + 0x30);
                lVar22 = (long)*(uint **)(param_4 + 0x38) - (long)puVar16;
                if (lVar22 != 0) {
                  uVar19 = (lVar22 >> 3) * -0x5555555555555555;
                  puVar15 = puVar16;
                  do {
                    uVar20 = uVar19 >> 1;
                    puVar16 = puVar15 + uVar20 * 6 + 6;
                    uVar19 = uVar19 + ~uVar20;
                    if (*(uint *)((long)pvVar9 + 0x28) <= puVar15[uVar20 * 6]) {
                      puVar16 = puVar15;
                      uVar19 = uVar20;
                    }
                    puVar15 = puVar16;
                  } while (uVar19 != 0);
                }
                if ((puVar16 != *(uint **)(param_4 + 0x38)) &&
                   (*puVar16 <= *(uint *)((long)pvVar9 + 0x28))) {
                  uVar8 = *(undefined8 *)(puVar16 + 2);
                  *(undefined1 *)((long)pvVar9 + 0xd0) = 1;
                  *(undefined8 *)((long)pvVar9 + 200) = uVar8;
                  uVar8 = *(undefined8 *)(puVar16 + 4);
                  *(undefined1 *)((long)pvVar9 + 0xe0) = 1;
                  *(undefined8 *)((long)pvVar9 + 0xd8) = uVar8;
                }
              }
              puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
              local_4a0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
              local_488 = &DAT_aaaaaaaaaaaaaaaa;
              local_490 = &DAT_aaaaaaaaaaaaaaaa;
              if (*(undefined4 **)(lVar21 + 0xb8) == *(undefined4 **)(lVar21 + 0xc0)) {
                uVar12 = 0;
              }
              else {
                uVar12 = **(undefined4 **)(lVar21 + 0xb8);
              }
              FUN_00c97390(&local_4a0,*(undefined8 *)(param_3 + 0x98),uVar12,0);
              if ((char)local_488 == '\x01') {
                FUN_00661bd4((long)pvVar9 + 0x108,&local_4a0);
              }
              if (((*(char *)(param_5 + 0x28) == '\x01') && (*(int *)(param_3 + 8) == 0)) &&
                 (((*(byte *)(param_3 + 0xa4) & 1) != 0 &&
                  ((*(uint *)(param_3 + 0xa0) & 0xfffffffd) == 0)))) {
                puVar17 = (undefined2 *)((long)pvVar9 + 0xe8);
                if (*(char *)((long)pvVar9 + 0x100) == '\x01') {
                  if (*(char *)((long)pvVar9 + 0xff) < '\0') {
                    puVar17 = *(undefined2 **)((long)pvVar9 + 0xe8);
                    *(undefined8 *)((long)pvVar9 + 0xf0) = 2;
                  }
                  else {
                    *(undefined1 *)((long)pvVar9 + 0xff) = 2;
                  }
                  *(undefined1 *)(puVar17 + 1) = 0;
                  *puVar17 = 0x5041;
                }
                else {
                  if (puVar17 == (undefined2 *)0x0) goto LAB_00c7f380;
                  FUN_005d3510((long)pvVar9 + 0xe8,&DAT_00259cd0);
                  *(undefined1 *)((long)pvVar9 + 0x100) = 1;
                }
              }
              lVar22 = FUN_00c80b6c(param_6,pvVar9);
              if (lVar22 == 0) {
                uVar19 = FUN_004249b0();
                if ((uVar19 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x3bc3,
                               "Unable to add audio \'inbound-rtp\' to report, ID is not unique.");
                }
              }
              else {
                lVar10 = FUN_00c80c60(lVar21,0,lVar22,&local_520,*(undefined1 *)(param_1 + 0x40));
                if (lVar10 != 0) {
                  lVar10 = FUN_00c8100c(param_6,lVar10);
                  if (lVar10 == 0) {
                    uVar19 = FUN_004249b0();
                    if ((uVar19 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4ed3,"../../pc/rtc_stats_collector.cc",0x3c4b,
                                   "Unable to add audio \'remote-outbound-rtp\' to ",
                                   "report, ID is not unique.");
                    }
                  }
                  else {
                    FUN_00600e24(lVar22 + 0x148,lVar10 + 8);
                  }
                }
              }
              if (((char)local_488 == '\x01') && ((long)local_490 < 0)) {
                operator_delete(local_4a0);
              }
            }
            lVar21 = lVar21 + 0x240;
          } while (lVar21 != lVar2);
          plVar13 = *(long **)(param_3 + 0x98);
        }
        local_530 = 0;
        uStack_528 = 0;
        local_538 = &local_530;
        if ((*(byte *)(plVar13 + 0xd) & 1) != 0) {
          lVar21 = *plVar13;
          lVar2 = plVar13[1];
          if (lVar21 != lVar2) {
            do {
              if ((*(undefined4 **)(lVar21 + 0x78) != *(undefined4 **)(lVar21 + 0x80)) &&
                 ((*(char *)(param_1 + 0x10) != '\x01' || ((*(byte *)(param_3 + 0xa4) & 1) != 0))))
              {
                lVar22 = *(long *)(param_3 + 0x98);
                if ((*(byte *)(lVar22 + 0x68) & 1) == 0) goto LAB_00c7f36c;
                uVar12 = **(undefined4 **)(lVar21 + 0x78);
                memset(&local_4a0,0xaa,0x400);
                local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
                local_4c0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
                FUN_00622830(&local_4c0,&local_4a0,0x400);
                uVar8 = FUN_00622844(&local_4c0,0x4f);
                puVar11 = puStack_518;
                ppppuVar6 = (undefined8 ****)local_520;
                if (-1 < (long)local_510) {
                  puVar11 = (undefined1 *)((ulong)local_510 >> 0x38);
                  ppppuVar6 = &local_520;
                }
                uVar8 = FUN_006228b0(uVar8,ppppuVar6,puVar11);
                uVar8 = FUN_00622844(uVar8,0x41);
                FUN_006229f8(uVar8,uVar12);
                FUN_005d3510(&local_4d8,local_4c0);
                puVar11 = (undefined1 *)operator_new(0x300);
                puStack_498 = puStack_4d0;
                local_4a0 = local_4d8;
                local_4d8 = (undefined8 **)0x0;
                puStack_4d0 = (undefined1 *)0x0;
                local_490 = local_4c8;
                local_4c8 = (undefined1 *)0x0;
                FUN_00c8e6c0(puVar11,&local_4a0,param_2);
                if ((long)local_490 < 0) {
                  operator_delete(local_4a0);
                }
                if ((long)local_4c8 < 0) {
                  operator_delete(local_4d8);
                }
                FUN_00c82468(lVar21,puVar11);
                FUN_00600e24(puVar11 + 0x50,&local_520);
                FUN_00600e24(puVar11 + 0xf0,&local_500);
                puVar18 = (undefined4 *)(puVar11 + 0x30);
                if (puVar11[0x48] == '\x01') {
                  if ((char)puVar11[0x47] < '\0') {
                    puVar18 = *(undefined4 **)(puVar11 + 0x30);
                    *(undefined8 *)(puVar11 + 0x38) = 5;
                  }
                  else {
                    puVar11[0x47] = 5;
                  }
                  *puVar18 = 0x69647561;
                  *(undefined2 *)(puVar18 + 1) = 0x6f;
                }
                else {
                  if (puVar18 == (undefined4 *)0x0) {
LAB_00c7f380:
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                              );
                  }
                  FUN_005d3510(puVar11 + 0x30,"audio");
                  puVar11[0x48] = 1;
                }
                if (*(char *)(lVar21 + 0x40) == '\x01') {
                  lVar10 = *(long *)(lVar21 + 0x38);
                  if (puVar11[0x170] == '\x01') {
                    *(double *)(puVar11 + 0x168) = (double)lVar10;
                  }
                  else {
                    if ((double *)(puVar11 + 0x168) == (double *)0x0) goto LAB_00c7f380;
                    puVar11[0x170] = 1;
                    *(double *)(puVar11 + 0x168) = (double)lVar10;
                  }
                }
                if (*(char *)(lVar21 + 0x74) == '\x01') {
                  plVar23 = (long *)(lVar22 + 0x38);
                  plVar13 = (long *)*plVar23;
                  if (plVar13 != (long *)0x0) {
                    do {
                      while ((int)plVar13[4] <= *(int *)(lVar21 + 0x70)) {
                        if (*(int *)(lVar21 + 0x70) == (int)plVar13[4]) {
                          if (plVar13 != plVar23) {
                            FUN_00c82014(&local_4a0,*(undefined8 *)(puVar11 + 0x20),0x4f,&local_520,
                                         plVar13 + 5,param_6);
                            puVar1 = (undefined8 *)(puVar11 + 0x70);
                            if (puVar11[0x88] == '\x01') {
                              if ((char)puVar11[0x87] < '\0') {
                                operator_delete(*(void **)(puVar11 + 0x70));
                              }
                              *(undefined1 **)(puVar11 + 0x78) = puStack_498;
                              *puVar1 = local_4a0;
                              *(undefined1 **)(puVar11 + 0x80) = local_490;
                            }
                            else {
                              if (puVar1 == (undefined8 *)0x0) goto LAB_00c7f380;
                              *(undefined1 **)(puVar11 + 0x80) = local_490;
                              *(undefined1 **)(puVar11 + 0x78) = puStack_498;
                              *puVar1 = local_4a0;
                              puVar11[0x88] = 1;
                            }
                          }
                          goto LAB_00c7f100;
                        }
                        plVar13 = (long *)plVar13[1];
                        if (plVar13 == (long *)0x0) goto LAB_00c7f100;
                      }
                      plVar13 = (long *)*plVar13;
                    } while (plVar13 != (long *)0x0);
                  }
                }
LAB_00c7f100:
                if ((*(undefined4 **)(lVar21 + 0x78) != *(undefined4 **)(lVar21 + 0x80)) &&
                   (uVar19 = FUN_00c97264(*(undefined8 *)(param_3 + 0x98),
                                          **(undefined4 **)(lVar21 + 0x78),0,1),
                   (uVar19 >> 0x20 & 1) != 0)) {
                  memset(&local_4a0,0xaa,0x400);
                  local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_4c0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
                  FUN_00622830(&local_4c0,&local_4a0,0x400);
                  uVar8 = FUN_00622844(&local_4c0,0x53);
                  uVar8 = FUN_00622844(uVar8,0x41);
                  FUN_00622910(uVar8,uVar19 & 0xffffffff);
                  FUN_005d3510(&local_4d8,local_4c0);
                  puVar1 = (undefined8 *)(puVar11 + 0xb0);
                  if (puVar11[200] == '\x01') {
                    if ((char)puVar11[199] < '\0') {
                      operator_delete(*(void **)(puVar11 + 0xb0));
                    }
                    *(undefined1 **)(puVar11 + 0xb8) = puStack_4d0;
                    *puVar1 = local_4d8;
                    *(undefined1 **)(puVar11 + 0xc0) = local_4c8;
                  }
                  else {
                    if (puVar1 == (undefined8 *)0x0) goto LAB_00c7f380;
                    *(undefined1 **)(puVar11 + 0xc0) = local_4c8;
                    *(undefined1 **)(puVar11 + 0xb8) = puStack_4d0;
                    *puVar1 = local_4d8;
                    puVar11[200] = 1;
                  }
                }
                puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
                local_4a0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
                local_488 = &DAT_aaaaaaaaaaaaaaaa;
                local_490 = &DAT_aaaaaaaaaaaaaaaa;
                if ((char)puVar11[0x1f] < '\0') {
                  FUN_005478d8(&local_4a0,*(undefined8 *)(puVar11 + 8),
                               *(undefined8 *)(puVar11 + 0x10));
                }
                else {
                  puStack_498 = *(undefined1 **)(puVar11 + 0x10);
                  local_4a0 = *(undefined8 ***)(puVar11 + 8);
                  local_490 = *(undefined1 **)(puVar11 + 0x18);
                }
                local_488 = puVar11;
                lVar22 = FUN_00c81100(param_6,puVar11);
                if (lVar22 == 0) {
                  uVar19 = FUN_004249b0();
                  if ((uVar19 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x3d53,
                                 "Unable to add audio \'outbound-rtp\' to report, ID is not unique."
                                );
                  }
                }
                else {
                  local_4c0 = &local_538;
                  FUN_00c853f4(&local_4c0,&local_4a0,&local_4a0);
                }
                if ((long)local_490 < 0) {
                  operator_delete(local_4a0);
                }
              }
              lVar21 = lVar21 + 400;
            } while (lVar21 != lVar2);
            plVar13 = *(long **)(param_3 + 0x98);
            if ((*(byte *)(plVar13 + 0xd) & 1) == 0) goto LAB_00c7f394;
          }
          lVar2 = plVar13[1];
          for (lVar21 = *plVar13; lVar21 != lVar2; lVar21 = lVar21 + 400) {
            lVar10 = *(long *)(lVar21 + 0xb0);
            for (lVar22 = *(long *)(lVar21 + 0xa8); lVar22 != lVar10; lVar22 = lVar22 + 0x40) {
              uVar8 = FUN_00c811f4(&local_520,lVar22,0,&local_538,param_6,param_4,
                                   *(undefined1 *)(param_1 + 0x40));
              FUN_00c87c2c(param_6,uVar8);
            }
          }
          local_4a0 = &local_538;
          FUN_00c851fc(&local_4a0,local_530);
          if ((long)local_510 < 0) {
            operator_delete(local_520);
          }
          if ((long)local_4f0 < 0) {
            operator_delete(local_500);
          }
          FUN_007e0b18(local_4dc);
          if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
LAB_00c7f394:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
  }
LAB_00c7f36c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 00c7f3ac  FUN_00c7f3ac =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c7f3ac(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long ******pppppplVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  char cVar8;
  long lVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  void *pvVar14;
  ulong uVar15;
  size_t sVar16;
  undefined8 *puVar17;
  size_t __n;
  long lVar18;
  undefined1 *puVar19;
  long *******__src;
  long *******__dest;
  undefined4 uVar20;
  long lVar21;
  uint *puVar22;
  uint *puVar23;
  undefined4 *puVar24;
  char *pcVar25;
  long *plVar26;
  undefined8 ******ppppppuVar27;
  ulong uVar28;
  undefined8 *******pppppppuVar29;
  undefined8 *******pppppppuVar30;
  undefined8 *puVar31;
  size_t sVar32;
  long lVar33;
  long *plVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  long *****local_558;
  long ****local_550;
  undefined8 uStack_548;
  undefined8 *******local_540;
  undefined1 *puStack_538;
  undefined1 *local_530;
  undefined1 *local_520;
  undefined1 *puStack_518;
  undefined1 *local_510;
  undefined1 local_504 [4];
  undefined8 *******local_500;
  undefined8 *******local_4f8;
  undefined8 local_4f0;
  long *******local_4e8;
  ulong uStack_4e0;
  ulong local_4d8;
  undefined1 uStack_4c9;
  long *******local_4c8;
  long ******local_4c0;
  long *****ppppplStack_4b8;
  undefined1 *local_4b0;
  long *******local_4a0;
  undefined1 *puStack_498;
  undefined8 local_490;
  undefined1 *local_488;
  void *local_480 [2];
  char cStack_469;
  undefined8 local_468;
  void *local_460 [2];
  char cStack_449;
  undefined8 local_448;
  undefined1 auStack_440 [936];
  long local_98;
  
  lVar9 = tpidr_el0;
  local_98 = *(long *)(lVar9 + 0x28);
  local_504[0] = 0xaa;
  FUN_007e0b10(local_504);
  local_510 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_518 = &DAT_aaaaaaaaaaaaaaaa;
  local_520 = &DAT_aaaaaaaaaaaaaaaa;
  if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
    if (*(char *)(param_3 + 0x27) < '\0') {
      FUN_005478d8(&local_520,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
    }
    else {
      puStack_518 = *(undefined1 **)(param_3 + 0x18);
      local_520 = *(undefined1 **)(param_3 + 0x10);
      local_510 = *(undefined1 **)(param_3 + 0x20);
    }
    puStack_538 = &DAT_aaaaaaaaaaaaaaaa;
    local_540 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    local_530 = &DAT_aaaaaaaaaaaaaaaa;
    if ((*(byte *)(param_3 + 0x48) & 1) != 0) {
      uVar20 = *(undefined4 *)PTR_DAT_00d52638;
      memset(&local_4a0,0xaa,0x400);
      local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
      ppppplStack_4b8 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
      local_4c0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00622830(&local_4c0,&local_4a0,0x400);
      uVar13 = FUN_00622844(&local_4c0,0x54);
      uVar15 = *(ulong *)(param_3 + 0x38);
      puVar31 = *(undefined8 **)(param_3 + 0x30);
      if (-1 < (char)*(byte *)(param_3 + 0x47)) {
        uVar15 = (ulong)*(byte *)(param_3 + 0x47);
        puVar31 = (undefined8 *)(param_3 + 0x30);
      }
      uVar13 = FUN_006228b0(uVar13,puVar31,uVar15);
      FUN_00622910(uVar13,uVar20);
      FUN_005d3510(&local_540,local_4c0);
      dVar10 = DAT_001f5860;
      dVar37 = DAT_001f5658;
      lVar21 = *(long *)(param_3 + 0x98);
      if ((*(byte *)(lVar21 + 0xe8) & 1) != 0) {
        lVar33 = *(long *)(lVar21 + 0xa0);
        lVar5 = *(long *)(lVar21 + 0xa8);
        if (lVar33 != lVar5) {
          do {
            if ((*(undefined4 **)(lVar33 + 0xb8) != *(undefined4 **)(lVar33 + 0xc0)) &&
               (((*(char *)(param_1 + 0x10) != '\x01' || (*(int *)(lVar33 + 0x10) != 0)) ||
                (*(int *)(lVar33 + 0x1ec) != 0)))) {
              lVar21 = *(long *)(param_3 + 0x98);
              if ((*(byte *)(lVar21 + 0xe8) & 1) == 0) goto LAB_00c80ac4;
              uVar20 = **(undefined4 **)(lVar33 + 0xb8);
              memset(&local_4a0,0xaa,0x400);
              local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
              ppppplStack_4b8 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
              local_4c0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
              FUN_00622830(&local_4c0,&local_4a0,0x400);
              uVar13 = FUN_00622844(&local_4c0,0x49);
              puVar19 = puStack_538;
              pppppppuVar29 = local_540;
              if (-1 < (long)local_530) {
                puVar19 = (undefined1 *)((ulong)local_530 >> 0x38);
                pppppppuVar29 = &local_540;
              }
              uVar13 = FUN_006228b0(uVar13,pppppppuVar29,puVar19);
              uVar13 = FUN_00622844(uVar13,0x56);
              FUN_006229f8(uVar13,uVar20);
              FUN_005d3510(&local_4e8,local_4c0);
              pvVar14 = operator_new(0x4d0);
              puStack_498 = (undefined1 *)uStack_4e0;
              local_4a0 = local_4e8;
              local_4e8 = (long *******)0x0;
              uStack_4e0 = 0;
              local_490 = (undefined1 *)local_4d8;
              local_4d8 = 0;
              FUN_00c8dc8c(pvVar14,&local_4a0,param_2);
              if ((long)local_490 < 0) {
                operator_delete(local_4a0);
              }
              if ((long)local_4d8 < 0) {
                operator_delete(local_4e8);
              }
              FUN_00c81ec0(lVar33,pvVar14);
              FUN_00600e24((long)pvVar14 + 0x50,&local_540);
              FUN_00600e24((long)pvVar14 + 0x128,&local_520);
              puVar24 = (undefined4 *)((long)pvVar14 + 0x30);
              if (*(char *)((long)pvVar14 + 0x48) == '\x01') {
                if (*(char *)((long)pvVar14 + 0x47) < '\0') {
                  puVar24 = *(undefined4 **)((long)pvVar14 + 0x30);
                  *(undefined8 *)((long)pvVar14 + 0x38) = 5;
                }
                else {
                  *(undefined1 *)((long)pvVar14 + 0x47) = 5;
                }
                *puVar24 = 0x65646976;
                *(undefined2 *)(puVar24 + 1) = 0x6f;
              }
              else {
                if (puVar24 == (undefined4 *)0x0) goto LAB_00c80ab0;
                FUN_005d3510((long)pvVar14 + 0x30,&DAT_00199d61);
                *(undefined1 *)((long)pvVar14 + 0x48) = 1;
              }
              if (*(char *)(lVar33 + 0xb4) == '\x01') {
                plVar34 = (long *)(lVar21 + 0xd8);
                plVar26 = (long *)*plVar34;
                if (plVar26 != (long *)0x0) {
                  do {
                    while ((int)plVar26[4] <= *(int *)(lVar33 + 0xb0)) {
                      if (*(int *)(lVar33 + 0xb0) == (int)plVar26[4]) {
                        if (plVar26 != plVar34) {
                          FUN_00c82014(&local_4a0,*(undefined8 *)((long)pvVar14 + 0x20),0x49,
                                       &local_540,plVar26 + 5,param_5);
                          if (*(char *)((long)pvVar14 + 0x88) == '\x01') {
                            if (*(char *)((long)pvVar14 + 0x87) < '\0') {
                              operator_delete(*(void **)((long)pvVar14 + 0x70));
                            }
                          }
                          else {
                            if ((long *)((long)pvVar14 + 0x70) == (long *)0x0) goto LAB_00c80ab0;
                            *(undefined1 *)((long)pvVar14 + 0x88) = 1;
                          }
                          *(undefined1 **)((long)pvVar14 + 0x78) = puStack_498;
                          *(long *)((long)pvVar14 + 0x70) = (long)local_4a0;
                          *(undefined1 **)((long)pvVar14 + 0x80) = local_490;
                        }
                        goto LAB_00c7f780;
                      }
                      plVar26 = (long *)plVar26[1];
                      if (plVar26 == (long *)0x0) goto LAB_00c7f780;
                    }
                    plVar26 = (long *)*plVar26;
                  } while (plVar26 != (long *)0x0);
                }
              }
LAB_00c7f780:
              uVar35 = *(uint *)(lVar33 + 0x280);
              *(undefined1 *)((long)pvVar14 + 0x98) = 1;
              dVar36 = (double)NEON_ucvtf((ulong)uVar35);
              *(double *)((long)pvVar14 + 0x90) = dVar36 / 1000.0;
              uVar20 = *(undefined4 *)(lVar33 + 0x1c8);
              *(undefined1 *)((long)pvVar14 + 0x3fc) = 1;
              *(undefined4 *)((long)pvVar14 + 0x3f8) = uVar20;
              uVar20 = *(undefined4 *)(lVar33 + 0x1cc);
              *(undefined1 *)((long)pvVar14 + 0x404) = 1;
              *(undefined4 *)((long)pvVar14 + 0x400) = uVar20;
              uVar20 = *(undefined4 *)(lVar33 + 0x1ec);
              *(undefined1 *)((long)pvVar14 + 0x2e4) = 1;
              *(undefined4 *)((long)pvVar14 + 0x2e0) = uVar20;
              uVar20 = *(undefined4 *)(lVar33 + 500);
              *(undefined1 *)((long)pvVar14 + 0x30c) = 1;
              *(undefined4 *)((long)pvVar14 + 0x308) = uVar20;
              uVar20 = *(undefined4 *)(lVar33 + 0x1f0);
              *(undefined1 *)((long)pvVar14 + 0x31c) = 1;
              *(undefined4 *)((long)pvVar14 + 0x318) = uVar20;
              uVar20 = *(undefined4 *)(lVar33 + 0x1f8);
              *(undefined1 *)((long)pvVar14 + 0x314) = 1;
              *(undefined4 *)((long)pvVar14 + 0x310) = uVar20;
              if (0 < *(int *)(lVar33 + 0x1d0)) {
                *(int *)((long)pvVar14 + 0x2e8) = *(int *)(lVar33 + 0x1d0);
                *(undefined1 *)((long)pvVar14 + 0x2ec) = 1;
              }
              if (0 < *(int *)(lVar33 + 0x1d4)) {
                *(int *)((long)pvVar14 + 0x2f0) = *(int *)(lVar33 + 0x1d4);
                *(undefined1 *)((long)pvVar14 + 0x2f4) = 1;
              }
              uVar35 = *(uint *)(lVar33 + 0x1dc);
              if (0 < (int)uVar35) {
                if (*(char *)((long)pvVar14 + 0x300) == '\x01') {
                  *(double *)((long)pvVar14 + 0x2f8) = (double)uVar35;
                }
                else {
                  if ((double *)((long)pvVar14 + 0x2f8) == (double *)0x0) goto LAB_00c80ab0;
                  *(undefined1 *)((long)pvVar14 + 0x300) = 1;
                  *(double *)((long)pvVar14 + 0x2f8) = (double)uVar35;
                }
              }
              if (*(char *)(lVar33 + 0x208) == '\x01') {
                uVar13 = *(undefined8 *)(lVar33 + 0x200);
                *(undefined1 *)((long)pvVar14 + 0x418) = 1;
                *(undefined8 *)((long)pvVar14 + 0x410) = uVar13;
              }
              if (*(char *)(lVar33 + 0x218) == '\x01') {
                if ((*(byte *)(lVar33 + 0x228) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0061fd88("../../pc/rtc_stats_collector.cc",0x28f,
                               "video_receiver_info.corruption_score_squared_sum.has_value()",
                               &DAT_001f5fa0);
                }
                uVar35 = *(uint *)(lVar33 + 0x230);
                if (uVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0061fd88("../../pc/rtc_stats_collector.cc",0x290,
                               "video_receiver_info.corruption_score_count > 0",&DAT_00259cd3,0,0);
                }
                uVar13 = *(undefined8 *)(lVar33 + 0x210);
                *(undefined1 *)((long)pvVar14 + 0x428) = 1;
                *(undefined8 *)((long)pvVar14 + 0x420) = uVar13;
                uVar13 = *(undefined8 *)(lVar33 + 0x220);
                *(undefined1 *)((long)pvVar14 + 0x438) = 1;
                *(undefined8 *)((long)pvVar14 + 0x430) = uVar13;
                if (*(char *)((long)pvVar14 + 0x448) == '\x01') {
                  *(ulong *)((long)pvVar14 + 0x440) = (ulong)uVar35;
                }
                else {
                  if ((ulong *)((long)pvVar14 + 0x440) == (ulong *)0x0) goto LAB_00c80ab0;
                  *(ulong *)((long)pvVar14 + 0x440) = (ulong)uVar35;
                  *(undefined1 *)((long)pvVar14 + 0x448) = 1;
                }
              }
              if (*(char *)(lVar33 + 0x328) == '\x01') {
                FUN_00659ef4(&local_4a0,lVar33 + 0x2b8);
                if (*(char *)((long)pvVar14 + 0x468) == '\x01') {
                  if (*(char *)((long)pvVar14 + 0x467) < '\0') {
                    operator_delete(*(void **)((long)pvVar14 + 0x450));
                  }
                }
                else {
                  if ((long *)((long)pvVar14 + 0x450) == (long *)0x0) goto LAB_00c80ab0;
                  *(undefined1 *)((long)pvVar14 + 0x468) = 1;
                }
                *(undefined1 **)((long)pvVar14 + 0x458) = puStack_498;
                *(long *)((long)pvVar14 + 0x450) = (long)local_4a0;
                *(undefined1 **)((long)pvVar14 + 0x460) = local_490;
              }
              lVar21 = *(long *)(lVar33 + 0x238);
              if (lVar21 == -0x8000000000000000) {
                dVar36 = -INFINITY;
              }
              else if (lVar21 == 0x7fffffffffffffff) {
                dVar36 = INFINITY;
              }
              else {
                dVar36 = (double)lVar21 * dVar37;
              }
              *(double *)((long)pvVar14 + 800) = dVar36;
              *(undefined1 *)((long)pvVar14 + 0x328) = 1;
              lVar21 = *(long *)(lVar33 + 0x240);
              if (lVar21 == -0x8000000000000000) {
                dVar36 = -INFINITY;
              }
              else if (lVar21 == 0x7fffffffffffffff) {
                dVar36 = INFINITY;
              }
              else {
                dVar36 = (double)lVar21 * dVar37;
              }
              *(double *)((long)pvVar14 + 0x330) = dVar36;
              *(undefined1 *)((long)pvVar14 + 0x338) = 1;
              lVar21 = *(long *)(lVar33 + 0x248);
              if (lVar21 == -0x8000000000000000) {
                dVar36 = -INFINITY;
              }
              else if (lVar21 == 0x7fffffffffffffff) {
                dVar36 = INFINITY;
              }
              else {
                dVar36 = (double)lVar21 * dVar37;
              }
              *(double *)((long)pvVar14 + 0x340) = dVar36;
              *(undefined1 *)((long)pvVar14 + 0x348) = 1;
              uVar20 = *(undefined4 *)(lVar33 + 0x250);
              *(undefined1 *)((long)pvVar14 + 0x354) = 1;
              *(undefined4 *)((long)pvVar14 + 0x350) = uVar20;
              uVar13 = *(undefined8 *)(lVar33 + 600);
              *(undefined1 *)((long)pvVar14 + 0x360) = 1;
              *(undefined8 *)((long)pvVar14 + 0x358) = uVar13;
              uVar13 = *(undefined8 *)(lVar33 + 0x260);
              *(undefined1 *)((long)pvVar14 + 0x370) = 1;
              *(undefined8 *)((long)pvVar14 + 0x368) = uVar13;
              uVar20 = *(undefined4 *)(lVar33 + 0x274);
              *(undefined1 *)((long)pvVar14 + 0x37c) = 1;
              *(undefined4 *)((long)pvVar14 + 0x378) = uVar20;
              uVar35 = *(uint *)(lVar33 + 0x27c);
              *(undefined1 *)((long)pvVar14 + 0x388) = 1;
              dVar36 = (double)NEON_ucvtf((ulong)uVar35);
              *(double *)((long)pvVar14 + 0x380) = dVar36 / 1000.0;
              uVar20 = *(undefined4 *)(lVar33 + 0x270);
              *(undefined1 *)((long)pvVar14 + 0x394) = 1;
              *(undefined4 *)((long)pvVar14 + 0x390) = uVar20;
              uVar35 = *(uint *)(lVar33 + 0x278);
              *(undefined1 *)((long)pvVar14 + 0x3a0) = 1;
              dVar36 = (double)NEON_ucvtf((ulong)uVar35);
              *(double *)((long)pvVar14 + 0x398) = dVar36 / 1000.0;
              iVar12 = *(int *)(lVar33 + 0x294);
              *(undefined1 *)((long)pvVar14 + 0x4c8) = 1;
              *(double *)((long)pvVar14 + 0x4c0) = (double)iVar12 / 1000.0;
              if (*(char *)(lVar33 + 0x80) == '\x01') {
                lVar21 = *(long *)(lVar33 + 0x78);
                if (lVar21 == -0x8000000000000000) {
                  dVar36 = -INFINITY;
                }
                else if (lVar21 == 0x7fffffffffffffff) {
                  dVar36 = INFINITY;
                }
                else {
                  dVar36 = (double)lVar21 * dVar10;
                }
                *(double *)((long)pvVar14 + 0x200) = dVar36;
                *(undefined1 *)((long)pvVar14 + 0x208) = 1;
              }
              if (*(char *)(lVar33 + 0x90) == '\x01') {
                lVar21 = *(long *)(lVar33 + 0x88);
                *(undefined1 *)((long)pvVar14 + 0x3d0) = 1;
                *(double *)((long)pvVar14 + 0x3c8) = (double)lVar21;
              }
              uVar15 = FUN_00659d40(lVar33 + 0x284);
              if ((uVar15 & 1) != 0) {
                pcVar25 = (char *)((long)pvVar14 + 0x3a8);
                if (*(char *)((long)pvVar14 + 0x3c0) == '\x01') {
                  if (*(char *)((long)pvVar14 + 0x3bf) < '\0') {
                    pcVar25 = *(char **)((long)pvVar14 + 0x3a8);
                    *(undefined8 *)((long)pvVar14 + 0x3b0) = 0xb;
                  }
                  else {
                    *(undefined1 *)((long)pvVar14 + 0x3bf) = 0xb;
                  }
                  uVar13 = s_screenshare_001e9eed._0_8_;
                  pcVar25[0xb] = '\0';
                  pcVar25[7] = 'h';
                  pcVar25[8] = 'a';
                  pcVar25[9] = 'r';
                  pcVar25[10] = 'e';
                  *(undefined8 *)pcVar25 = uVar13;
                }
                else {
                  if (pcVar25 == (char *)0x0) goto LAB_00c80ab0;
                  FUN_005d3510((long)pvVar14 + 0x3a8,"screenshare");
                  *(undefined1 *)((long)pvVar14 + 0x3c0) = 1;
                }
              }
              if (*(char *)(lVar33 + 0x1b8) == '\x01') {
                FUN_00600e24((long)pvVar14 + 0x3d8,lVar33 + 0x1a0);
              }
              if (*(char *)(lVar33 + 0x1c1) == '\x01') {
                *(ushort *)((long)pvVar14 + 0x470) = *(byte *)(lVar33 + 0x1c0) | 0x100;
              }
              puVar31 = *(undefined8 **)(lVar33 + 0x188);
              puVar6 = *(undefined8 **)(lVar33 + 400);
              if (puVar31 != puVar6) {
                sVar16 = strlen("FID");
                do {
                  cVar8 = *(char *)((long)puVar31 + 0x17);
                  sVar32 = (size_t)cVar8;
                  if ((long)sVar32 < 0) {
                    if (sVar16 == puVar31[1]) {
                      if (sVar16 != 0xffffffffffffffff) {
                        puVar17 = (undefined8 *)*puVar31;
                        goto LAB_00c7fbac;
                      }
                      goto LAB_00c80b14;
                    }
LAB_00c7fbd0:
                    __n = strlen("FEC-FR");
                    if (cVar8 < '\0') {
                      if (__n == puVar31[1]) {
                        if (__n != 0xffffffffffffffff) {
                          puVar17 = (undefined8 *)*puVar31;
                          goto LAB_00c7fc0c;
                        }
                        goto LAB_00c80b14;
                      }
                    }
                    else {
                      puVar17 = puVar31;
                      if (__n == sVar32) {
LAB_00c7fc0c:
                        iVar12 = memcmp(puVar17,"FEC-FR",__n);
                        if ((iVar12 == 0) && (puVar31[4] - puVar31[3] == 8)) {
                          uVar20 = *(undefined4 *)(puVar31[3] + 4);
                          *(undefined1 *)((long)pvVar14 + 0x1b4) = 1;
                          *(undefined4 *)((long)pvVar14 + 0x1b0) = uVar20;
                        }
                      }
                    }
                  }
                  else {
                    puVar17 = puVar31;
                    if (sVar16 != sVar32) goto LAB_00c7fbd0;
LAB_00c7fbac:
                    iVar12 = memcmp(puVar17,PTR_DAT_00d52d08,sVar16);
                    if ((iVar12 != 0) || (puVar31[4] - puVar31[3] != 8)) goto LAB_00c7fbd0;
                    uVar20 = *(undefined4 *)(puVar31[3] + 4);
                    *(undefined1 *)((long)pvVar14 + 0x1fc) = 1;
                    *(undefined4 *)((long)pvVar14 + 0x1f8) = uVar20;
                  }
                  puVar31 = puVar31 + 6;
                } while (puVar31 != puVar6);
              }
              if (*(char *)((long)pvVar14 + 0x2c) == '\x01') {
                puVar23 = *(uint **)(param_4 + 0x30);
                lVar21 = (long)*(uint **)(param_4 + 0x38) - (long)puVar23;
                if (lVar21 != 0) {
                  uVar15 = (lVar21 >> 3) * -0x5555555555555555;
                  puVar22 = puVar23;
                  do {
                    uVar28 = uVar15 >> 1;
                    puVar23 = puVar22 + uVar28 * 6 + 6;
                    uVar15 = uVar15 + ~uVar28;
                    if (*(uint *)((long)pvVar14 + 0x28) <= puVar22[uVar28 * 6]) {
                      puVar23 = puVar22;
                      uVar15 = uVar28;
                    }
                    puVar22 = puVar23;
                  } while (uVar15 != 0);
                }
                if ((puVar23 != *(uint **)(param_4 + 0x38)) &&
                   (*puVar23 <= *(uint *)((long)pvVar14 + 0x28))) {
                  uVar13 = *(undefined8 *)(puVar23 + 2);
                  *(undefined1 *)((long)pvVar14 + 0xd0) = 1;
                  *(undefined8 *)((long)pvVar14 + 200) = uVar13;
                  uVar13 = *(undefined8 *)(puVar23 + 4);
                  *(undefined1 *)((long)pvVar14 + 0xe0) = 1;
                  *(undefined8 *)((long)pvVar14 + 0xd8) = uVar13;
                }
              }
              puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
              local_4a0 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
              local_488 = &DAT_aaaaaaaaaaaaaaaa;
              local_490 = &DAT_aaaaaaaaaaaaaaaa;
              if (*(undefined4 **)(lVar33 + 0xb8) == *(undefined4 **)(lVar33 + 0xc0)) {
                uVar20 = 0;
              }
              else {
                uVar20 = **(undefined4 **)(lVar33 + 0xb8);
              }
              FUN_00c97390(&local_4a0,*(undefined8 *)(param_3 + 0x98),uVar20,1);
              if ((char)local_488 == '\x01') {
                FUN_00661bd4((long)pvVar14 + 0x108,&local_4a0);
              }
              lVar21 = FUN_00c80b6c(param_5,pvVar14);
              if (lVar21 == 0) {
                uVar15 = FUN_004249b0();
                if ((uVar15 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x3f43,
                               "Unable to add video \'inbound-rtp\' to report, ID is not unique.");
                }
              }
              else {
                lVar18 = FUN_00c80c60(lVar33,1,lVar21,&local_540,*(undefined1 *)(param_1 + 0x40));
                if (lVar18 != 0) {
                  lVar18 = FUN_00c8100c(param_5,lVar18);
                  if (lVar18 == 0) {
                    uVar15 = FUN_004249b0();
                    if ((uVar15 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4ed3,"../../pc/rtc_stats_collector.cc",0x3fcb,
                                   "Unable to add video \'remote-outbound-rtp\' to ",
                                   "report, ID is not unique.");
                    }
                  }
                  else {
                    FUN_00600e24(lVar21 + 0x148,lVar18 + 8);
                  }
                }
              }
              if (((char)local_488 == '\x01') && ((long)local_490 < 0)) {
                operator_delete(local_4a0);
              }
            }
            lVar33 = lVar33 + 0x330;
          } while (lVar33 != lVar5);
          lVar21 = *(long *)(param_3 + 0x98);
        }
        local_550 = (long ****)0x0;
        uStack_548 = 0;
        local_558 = &local_550;
        if ((*(byte *)(lVar21 + 0xe8) & 1) != 0) {
          lVar33 = *(long *)(lVar21 + 0x70);
          lVar5 = *(long *)(lVar21 + 0x78);
          if (lVar33 != lVar5) {
            do {
              if ((*(undefined4 **)(lVar33 + 0x78) != *(undefined4 **)(lVar33 + 0x80)) &&
                 ((*(char *)(param_1 + 0x10) != '\x01' || ((*(byte *)(param_3 + 0xa4) & 1) != 0))))
              {
                lVar21 = *(long *)(param_3 + 0x98);
                if ((*(byte *)(lVar21 + 0xe8) & 1) == 0) goto LAB_00c80ac4;
                uVar20 = **(undefined4 **)(lVar33 + 0x78);
                memset(&local_4a0,0xaa,0x400);
                local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
                ppppplStack_4b8 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
                local_4c0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
                FUN_00622830(&local_4c0,&local_4a0,0x400);
                uVar13 = FUN_00622844(&local_4c0,0x4f);
                puVar19 = puStack_538;
                pppppppuVar29 = local_540;
                if (-1 < (long)local_530) {
                  puVar19 = (undefined1 *)((ulong)local_530 >> 0x38);
                  pppppppuVar29 = &local_540;
                }
                uVar13 = FUN_006228b0(uVar13,pppppppuVar29,puVar19);
                uVar13 = FUN_00622844(uVar13,0x56);
                FUN_006229f8(uVar13,uVar20);
                FUN_005d3510(&local_4e8,local_4c0);
                puVar19 = (undefined1 *)operator_new(0x300);
                puStack_498 = (undefined1 *)uStack_4e0;
                local_4a0 = local_4e8;
                local_4e8 = (long *******)0x0;
                uStack_4e0 = 0;
                local_490 = (undefined1 *)local_4d8;
                local_4d8 = 0;
                FUN_00c8e6c0(puVar19,&local_4a0,param_2);
                if ((long)local_490 < 0) {
                  operator_delete(local_4a0);
                }
                if ((long)local_4d8 < 0) {
                  operator_delete(local_4e8);
                }
                FUN_00c82468(lVar33,puVar19);
                FUN_00600e24(puVar19 + 0x50,&local_540);
                FUN_00600e24(puVar19 + 0xf0,&local_520);
                puVar24 = (undefined4 *)(puVar19 + 0x30);
                if (puVar19[0x48] == '\x01') {
                  if ((char)puVar19[0x47] < '\0') {
                    puVar24 = *(undefined4 **)(puVar19 + 0x30);
                    *(undefined8 *)(puVar19 + 0x38) = 5;
                  }
                  else {
                    puVar19[0x47] = 5;
                  }
                  *puVar24 = 0x65646976;
                  *(undefined2 *)(puVar24 + 1) = 0x6f;
                }
                else {
                  if (puVar24 == (undefined4 *)0x0) goto LAB_00c80ab0;
                  FUN_005d3510(puVar19 + 0x30,&DAT_00199d61);
                  puVar19[0x48] = 1;
                }
                if (*(char *)(lVar33 + 0x74) == '\x01') {
                  plVar34 = (long *)(lVar21 + 0xc0);
                  plVar26 = (long *)*plVar34;
                  if (plVar26 != (long *)0x0) {
                    do {
                      while ((int)plVar26[4] <= *(int *)(lVar33 + 0x70)) {
                        if (*(int *)(lVar33 + 0x70) == (int)plVar26[4]) {
                          if (plVar26 != plVar34) {
                            FUN_00c82014(&local_4a0,*(undefined8 *)(puVar19 + 0x20),0x4f,&local_540,
                                         plVar26 + 5,param_5);
                            plVar26 = (long *)(puVar19 + 0x70);
                            if (puVar19[0x88] == '\x01') {
                              if ((char)puVar19[0x87] < '\0') {
                                operator_delete(*(void **)(puVar19 + 0x70));
                              }
                              *(undefined1 **)(puVar19 + 0x78) = puStack_498;
                              *plVar26 = (long)local_4a0;
                              *(undefined1 **)(puVar19 + 0x80) = local_490;
                            }
                            else {
                              if (plVar26 == (long *)0x0) goto LAB_00c80ab0;
                              *(undefined1 **)(puVar19 + 0x78) = puStack_498;
                              *plVar26 = (long)local_4a0;
                              *(undefined1 **)(puVar19 + 0x80) = local_490;
                              puVar19[0x88] = 1;
                            }
                          }
                          goto LAB_00c8009c;
                        }
                        plVar26 = (long *)plVar26[1];
                        if (plVar26 == (long *)0x0) goto LAB_00c8009c;
                      }
                      plVar26 = (long *)*plVar26;
                    } while (plVar26 != (long *)0x0);
                  }
                }
LAB_00c8009c:
                uVar20 = *(undefined4 *)(lVar33 + 0x118);
                puVar19[0x274] = 1;
                *(undefined4 *)(puVar19 + 0x270) = uVar20;
                uVar20 = *(undefined4 *)(lVar33 + 0x11c);
                puVar19[0x27c] = 1;
                *(undefined4 *)(puVar19 + 0x278) = uVar20;
                if (*(char *)(lVar33 + 0x1a0) == '\x01') {
                  uVar13 = *(undefined8 *)(lVar33 + 0x198);
                  puVar19[0x290] = 1;
                  *(undefined8 *)(puVar19 + 0x288) = uVar13;
                }
                if (*(int *)(lVar33 + 0x1c8) != 0) {
                  *(int *)(puVar19 + 0x2b8) = *(int *)(lVar33 + 0x1c8);
                  puVar19[700] = 1;
                  FUN_005d3510(&local_4a0,&DAT_001d07fa);
                  local_488 = *(undefined1 **)(lVar33 + 0x1b0);
                  FUN_005d3510(local_480,&DAT_001d2924);
                  local_468 = *(undefined8 *)(lVar33 + 0x1b8);
                  FUN_005d3510(local_460,&DAT_001b0369);
                  local_448 = *(undefined8 *)(lVar33 + 0x1c0);
                  ppppplStack_4b8 = (long *****)0x0;
                  local_4b0 = (undefined1 *)0x0;
                  local_4c0 = &ppppplStack_4b8;
                  FUN_00c82588(&local_4c0,&local_4a0,auStack_440);
                  pppppplVar1 = (long ******)(puVar19 + 0x298);
                  if (puVar19[0x2b0] == '\x01') {
                    local_4e8 = (long *******)pppppplVar1;
                    FUN_00c828e4(&local_4e8,*(undefined8 *)(puVar19 + 0x2a0));
                    *(undefined1 **)(puVar19 + 0x2a8) = local_4b0;
                    *(long *******)(puVar19 + 0x298) = local_4c0;
                    *(long ******)(puVar19 + 0x2a0) = ppppplStack_4b8;
                    if (local_4b0 == (undefined1 *)0x0) {
                      *pppppplVar1 = (long *****)(puVar19 + 0x2a0);
                    }
                    else {
                      ppppplStack_4b8[2] = (long ****)(puVar19 + 0x2a0);
                      ppppplStack_4b8 = (long *****)0x0;
                      local_4b0 = (undefined1 *)0x0;
                      local_4c0 = &ppppplStack_4b8;
                    }
                  }
                  else {
                    if (pppppplVar1 == (long ******)0x0) {
LAB_00c80ab0:
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                                );
                    }
                    *(undefined1 **)(puVar19 + 0x2a8) = local_4b0;
                    *(long *******)(puVar19 + 0x298) = local_4c0;
                    *(long ******)(puVar19 + 0x2a0) = ppppplStack_4b8;
                    if (local_4b0 == (undefined1 *)0x0) {
                      *pppppplVar1 = (long *****)(puVar19 + 0x2a0);
                    }
                    else {
                      ppppplStack_4b8[2] = (long ****)(puVar19 + 0x2a0);
                      ppppplStack_4b8 = (long *****)0x0;
                      local_4b0 = (undefined1 *)0x0;
                      local_4c0 = &ppppplStack_4b8;
                    }
                    puVar19[0x2b0] = 1;
                  }
                  local_4e8 = &local_4c0;
                  FUN_00c828e4(&local_4e8,ppppplStack_4b8);
                  if (cStack_449 < '\0') {
                    operator_delete(local_460[0]);
                    if (-1 < cStack_469) goto LAB_00c80208;
LAB_00c80518:
                    operator_delete(local_480[0]);
                    if (-1 < (long)local_490) goto LAB_00c80210;
LAB_00c80530:
                    operator_delete(local_4a0);
                    iVar12 = *(int *)(lVar33 + 0x1c8);
                  }
                  else {
                    if (cStack_469 < '\0') goto LAB_00c80518;
LAB_00c80208:
                    if ((long)local_490 < 0) goto LAB_00c80530;
LAB_00c80210:
                    iVar12 = *(int *)(lVar33 + 0x1c8);
                  }
                  if (iVar12 != 0) {
                    *(int *)(puVar19 + 0x2b8) = iVar12;
                    puVar19[700] = 1;
                  }
                }
                if (*(char *)(lVar33 + 0x40) == '\x01') {
                  lVar21 = *(long *)(lVar33 + 0x38);
                  if (puVar19[0x170] == '\x01') {
                    *(double *)(puVar19 + 0x168) = (double)lVar21;
                  }
                  else {
                    if ((double *)(puVar19 + 0x168) == (double *)0x0) goto LAB_00c80ab0;
                    puVar19[0x170] = 1;
                    *(double *)(puVar19 + 0x168) = (double)lVar21;
                  }
                }
                uVar20 = *(undefined4 *)(lVar33 + 0x174);
                puVar19[0x17c] = 1;
                *(undefined4 *)(puVar19 + 0x178) = uVar20;
                uVar20 = *(undefined4 *)(lVar33 + 0x178);
                puVar19[0x184] = 1;
                *(undefined4 *)(puVar19 + 0x180) = uVar20;
                uVar13 = *(undefined8 *)(lVar33 + 0x180);
                puVar19[400] = 1;
                dVar37 = (double)NEON_ucvtf(uVar13);
                *(double *)(puVar19 + 0x188) = dVar37 / 1000.0;
                uVar13 = *(undefined8 *)(lVar33 + 0x188);
                puVar19[0x1a0] = 1;
                *(undefined8 *)(puVar19 + 0x198) = uVar13;
                if (0 < *(int *)(lVar33 + 0x120)) {
                  *(int *)(puVar19 + 0x1a8) = *(int *)(lVar33 + 0x120);
                  puVar19[0x1ac] = 1;
                }
                if (0 < *(int *)(lVar33 + 0x124)) {
                  *(int *)(puVar19 + 0x1b0) = *(int *)(lVar33 + 0x124);
                  puVar19[0x1b4] = 1;
                }
                uVar35 = *(uint *)(lVar33 + 0x138);
                if (0 < (int)uVar35) {
                  if (puVar19[0x1c0] == '\x01') {
                    *(double *)(puVar19 + 0x1b8) = (double)uVar35;
                  }
                  else {
                    if ((double *)(puVar19 + 0x1b8) == (double *)0x0) goto LAB_00c80ab0;
                    puVar19[0x1c0] = 1;
                    *(double *)(puVar19 + 0x1b8) = (double)uVar35;
                  }
                }
                uVar20 = *(undefined4 *)(lVar33 + 0x1cc);
                puVar19[0x1cc] = 1;
                *(undefined4 *)(puVar19 + 0x1c8) = uVar20;
                uVar20 = *(undefined4 *)(lVar33 + 0x1d0);
                puVar19[0x1d4] = 1;
                *(undefined4 *)(puVar19 + 0x1d0) = uVar20;
                if (3 < *(uint *)(lVar33 + 0x14c)) {
LAB_00c80b18:
                    /* WARNING: Subroutine does not return */
                  FUN_0061ff28();
                }
                if (puVar19[0x200] == '\x01') {
                  FUN_00547bf8(puVar19 + 0x1e8);
                }
                else {
                  if (puVar19 == (undefined1 *)0xfffffffffffffe18) goto LAB_00c80ab0;
                  FUN_005d3510(puVar19 + 0x1e8,(&PTR_DAT_00d4e738)[*(uint *)(lVar33 + 0x14c)]);
                  puVar19[0x200] = 1;
                }
                local_4f8 = (undefined8 *******)0x0;
                local_4f0 = 0;
                local_500 = &local_4f8;
                if (*(long *)(lVar33 + 0x160) == 0) {
                  ppppplStack_4b8 = (long *****)0x0;
                  local_4b0 = (undefined1 *)0x0;
                  local_4c0 = &ppppplStack_4b8;
                }
                else {
                  local_4f8 = (undefined8 *******)
                              FUN_0061b1ec(&local_500,*(undefined8 *)(lVar33 + 0x158),&local_500);
                  local_4f8[2] = &local_4f8;
                  pppppppuVar29 = local_4f8;
                  do {
                    local_500 = pppppppuVar29;
                    pppppppuVar29 = (undefined8 *******)*local_500;
                  } while ((undefined8 *******)*local_500 != (undefined8 *******)0x0);
                  local_4f0 = *(undefined8 *)(lVar33 + 0x160);
                  ppppplStack_4b8 = (long *****)0x0;
                  local_4b0 = (undefined1 *)0x0;
                  local_4c0 = &ppppplStack_4b8;
                  pppppppuVar29 = local_500;
                  while ((undefined8 ********)pppppppuVar29 != &local_4f8) {
                    if (3 < *(uint *)(pppppppuVar29 + 4)) goto LAB_00c80b18;
                    ppppppuVar27 = pppppppuVar29[5];
                    FUN_005d3510(&local_4a0,(&PTR_DAT_00d4e738)[*(uint *)(pppppppuVar29 + 4)]);
                    local_4e8 = &local_4c0;
                    local_4c8 = (long *******)&local_4a0;
                    lVar21 = FUN_00c82978(&local_4e8,&local_4a0,&DAT_001f94c3,&local_4c8,&uStack_4c9
                                         );
                    *(double *)(lVar21 + 0x38) = (double)(long)ppppppuVar27 / 1000.0;
                    if ((long)local_490 < 0) {
                      operator_delete(local_4a0);
                      pppppppuVar30 = (undefined8 *******)pppppppuVar29[1];
                      if ((undefined8 *******)pppppppuVar29[1] == (undefined8 *******)0x0)
                      goto LAB_00c80450;
LAB_00c80440:
                      do {
                        pppppppuVar29 = pppppppuVar30;
                        pppppppuVar30 = (undefined8 *******)*pppppppuVar29;
                      } while ((undefined8 *******)*pppppppuVar29 != (undefined8 *******)0x0);
                    }
                    else {
                      pppppppuVar30 = (undefined8 *******)pppppppuVar29[1];
                      if ((undefined8 *******)pppppppuVar29[1] != (undefined8 *******)0x0)
                      goto LAB_00c80440;
LAB_00c80450:
                      do {
                        pppppppuVar30 = (undefined8 *******)pppppppuVar29[2];
                        bVar11 = pppppppuVar29 != (undefined8 *******)*pppppppuVar30;
                        pppppppuVar29 = pppppppuVar30;
                      } while (bVar11);
                    }
                  }
                }
                pppppplVar1 = (long ******)(puVar19 + 0x208);
                if (puVar19[0x220] == '\x01') {
                  local_4a0 = (long *******)pppppplVar1;
                  FUN_00c828e4(&local_4a0,*(undefined8 *)(puVar19 + 0x210));
                  *(undefined1 **)(puVar19 + 0x218) = local_4b0;
                  *(long *******)(puVar19 + 0x208) = local_4c0;
                  *(long ******)(puVar19 + 0x210) = ppppplStack_4b8;
                  if (local_4b0 == (undefined1 *)0x0) {
                    *pppppplVar1 = (long *****)(puVar19 + 0x210);
                  }
                  else {
                    ppppplStack_4b8[2] = (long ****)(puVar19 + 0x210);
                    ppppplStack_4b8 = (long *****)0x0;
                    local_4b0 = (undefined1 *)0x0;
                    local_4c0 = &ppppplStack_4b8;
                  }
                }
                else {
                  if (pppppplVar1 == (long ******)0x0) goto LAB_00c80ab0;
                  *(undefined1 **)(puVar19 + 0x218) = local_4b0;
                  *(long *******)(puVar19 + 0x208) = local_4c0;
                  *(long ******)(puVar19 + 0x210) = ppppplStack_4b8;
                  if (local_4b0 == (undefined1 *)0x0) {
                    *pppppplVar1 = (long *****)(puVar19 + 0x210);
                  }
                  else {
                    ppppplStack_4b8[2] = (long ****)(puVar19 + 0x210);
                    ppppplStack_4b8 = (long *****)0x0;
                    local_4b0 = (undefined1 *)0x0;
                    local_4c0 = &ppppplStack_4b8;
                  }
                  puVar19[0x220] = 1;
                }
                local_4a0 = &local_4c0;
                FUN_00c828e4(&local_4a0,ppppplStack_4b8);
                local_4a0 = (long *******)&local_500;
                FUN_0061b080(&local_4a0,local_4f8);
                uVar20 = *(undefined4 *)(lVar33 + 0x168);
                puVar19[0x22c] = 1;
                *(undefined4 *)(puVar19 + 0x228) = uVar20;
                uVar15 = FUN_00659d40(lVar33 + 0x1a8);
                if ((uVar15 & 1) != 0) {
                  pcVar25 = puVar19 + 0x230;
                  if (puVar19[0x248] == '\x01') {
                    if ((char)puVar19[0x247] < '\0') {
                      pcVar25 = *(char **)(puVar19 + 0x230);
                      *(undefined8 *)(puVar19 + 0x238) = 0xb;
                    }
                    else {
                      puVar19[0x247] = 0xb;
                    }
                    uVar13 = s_screenshare_001e9eed._0_8_;
                    pcVar25[0xb] = '\0';
                    pcVar25[7] = 'h';
                    pcVar25[8] = 'a';
                    pcVar25[9] = 'r';
                    pcVar25[10] = 'e';
                    *(undefined8 *)pcVar25 = uVar13;
                  }
                  else {
                    if (pcVar25 == (char *)0x0) goto LAB_00c80ab0;
                    FUN_005d3510(puVar19 + 0x230,"screenshare");
                    puVar19[0x248] = 1;
                  }
                }
                if (*(char *)(lVar33 + 0x110) == '\x01') {
                  FUN_00600e24(puVar19 + 0x250,lVar33 + 0xf8);
                }
                if (*(char *)(lVar33 + 0x1f0) == '\x01') {
                  FUN_00600e24(puVar19 + 0x110,lVar33 + 0x1d8);
                }
                if (*(char *)(lVar33 + 0xd8) == '\x01') {
                  if (puVar19[0x134] == '\x01') {
                    *(int *)(puVar19 + 0x130) = (int)*(undefined8 *)(lVar33 + 0xd0);
                  }
                  else {
                    if ((undefined4 *)(puVar19 + 0x130) == (undefined4 *)0x0) goto LAB_00c80ab0;
                    uVar13 = *(undefined8 *)(lVar33 + 0xd0);
                    puVar19[0x134] = 1;
                    *(int *)(puVar19 + 0x130) = (int)uVar13;
                  }
                }
                if (*(char *)(lVar33 + 0x1f9) == '\x01') {
                  *(ushort *)(puVar19 + 0x2c2) = *(byte *)(lVar33 + 0x1f8) | 0x100;
                }
                if (*(char *)(lVar33 + 0x1fb) == '\x01') {
                  auVar38 = FUN_007b8248(*(undefined1 *)(lVar33 + 0x1fa));
                  uVar15 = auVar38._8_8_;
                  __src = auVar38._0_8_;
                  if (0x7ffffffffffffff6 < uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_005d45ec();
                  }
                  if (uVar15 < 0x17) {
                    local_490 = (undefined1 *)CONCAT17(auVar38[8],(undefined7)local_490);
                    __dest = (long *******)&local_4a0;
                  }
                  else {
                    uVar28 = (uVar15 & 0x7ffffffffffffff8) + 8;
                    uVar2 = 0x19;
                    if (uVar28 != 0x18) {
                      uVar2 = uVar28;
                    }
                    __dest = (long *******)operator_new(uVar2);
                    local_490 = (undefined1 *)(uVar2 | 0x8000000000000000);
                    local_4a0 = __dest;
                    puStack_498 = (undefined1 *)uVar15;
                  }
                  if ((long *******)((long)__dest + uVar15) < __dest) {
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                              );
                  }
                  if ((__dest <= __src) && (__src < (long *******)((long)__dest + uVar15))) {
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                              );
                  }
                  memmove(__dest,__src,uVar15);
                  cVar8 = puVar19[0x2e0];
                  *(undefined1 *)((long)__dest + uVar15) = 0;
                  plVar26 = (long *)(puVar19 + 0x2c8);
                  if (cVar8 == '\x01') {
                    if ((char)puVar19[0x2df] < '\0') {
                      operator_delete(*(void **)(puVar19 + 0x2c8));
                    }
                    *(undefined1 **)(puVar19 + 0x2d0) = puStack_498;
                    *plVar26 = (long)local_4a0;
                    *(undefined1 **)(puVar19 + 0x2d8) = local_490;
                  }
                  else {
                    if (plVar26 == (long *)0x0) goto LAB_00c80ab0;
                    *(undefined1 **)(puVar19 + 0x2d8) = local_490;
                    *(undefined1 **)(puVar19 + 0x2d0) = puStack_498;
                    *plVar26 = (long)local_4a0;
                    puVar19[0x2e0] = 1;
                  }
                }
                puVar31 = *(undefined8 **)(lVar33 + 0xe0);
                puVar6 = *(undefined8 **)(lVar33 + 0xe8);
                if (puVar31 != puVar6) {
                  sVar16 = strlen("FID");
                  piVar3 = *(int **)(lVar33 + 0x78);
                  piVar7 = *(int **)(lVar33 + 0x80);
                  do {
                    if ((long)*(char *)((long)puVar31 + 0x17) < 0) {
                      if (sVar16 == puVar31[1]) {
                        if (sVar16 == 0xffffffffffffffff) {
LAB_00c80b14:
                    /* WARNING: Subroutine does not return */
                          FUN_005f5590();
                        }
                        puVar17 = (undefined8 *)*puVar31;
                        goto LAB_00c807e0;
                      }
                    }
                    else {
                      puVar17 = puVar31;
                      if (sVar16 == (long)*(char *)((long)puVar31 + 0x17)) {
LAB_00c807e0:
                        iVar12 = memcmp(puVar17,PTR_DAT_00d52d08,sVar16);
                        if ((iVar12 == 0) &&
                           (piVar4 = (int *)puVar31[3], puVar31[4] - (long)piVar4 == 8)) {
                          if (piVar3 == piVar7) {
                            iVar12 = 0;
                          }
                          else {
                            iVar12 = *piVar3;
                          }
                          if (iVar12 == *piVar4) {
                            iVar12 = piVar4[1];
                            puVar19[0x2ec] = 1;
                            *(int *)(puVar19 + 0x2e8) = iVar12;
                          }
                        }
                      }
                    }
                    puVar31 = puVar31 + 6;
                  } while (puVar31 != puVar6);
                }
                if ((*(undefined4 **)(lVar33 + 0x78) != *(undefined4 **)(lVar33 + 0x80)) &&
                   (uVar15 = FUN_00c97264(*(undefined8 *)(param_3 + 0x98),
                                          **(undefined4 **)(lVar33 + 0x78),1,1),
                   (uVar15 >> 0x20 & 1) != 0)) {
                  memset(&local_4a0,0xaa,0x400);
                  local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
                  ppppplStack_4b8 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
                  local_4c0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
                  FUN_00622830(&local_4c0,&local_4a0,0x400);
                  uVar13 = FUN_00622844(&local_4c0,0x53);
                  uVar13 = FUN_00622844(uVar13,0x56);
                  FUN_00622910(uVar13,uVar15 & 0xffffffff);
                  FUN_005d3510(&local_4e8,local_4c0);
                  puVar31 = (undefined8 *)(puVar19 + 0xb0);
                  if (puVar19[200] == '\x01') {
                    if ((char)puVar19[199] < '\0') {
                      operator_delete(*(void **)(puVar19 + 0xb0));
                    }
                    *(ulong *)(puVar19 + 0xb8) = uStack_4e0;
                    *puVar31 = local_4e8;
                    *(ulong *)(puVar19 + 0xc0) = local_4d8;
                  }
                  else {
                    if (puVar31 == (undefined8 *)0x0) goto LAB_00c80ab0;
                    *(ulong *)(puVar19 + 0xc0) = local_4d8;
                    *(ulong *)(puVar19 + 0xb8) = uStack_4e0;
                    *puVar31 = local_4e8;
                    puVar19[200] = 1;
                  }
                }
                puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
                local_4a0 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
                local_488 = &DAT_aaaaaaaaaaaaaaaa;
                local_490 = &DAT_aaaaaaaaaaaaaaaa;
                if ((char)puVar19[0x1f] < '\0') {
                  FUN_005478d8(&local_4a0,*(undefined8 *)(puVar19 + 8),
                               *(undefined8 *)(puVar19 + 0x10));
                }
                else {
                  puStack_498 = *(undefined1 **)(puVar19 + 0x10);
                  local_4a0 = *(long ********)(puVar19 + 8);
                  local_490 = *(undefined1 **)(puVar19 + 0x18);
                }
                local_488 = puVar19;
                lVar21 = FUN_00c81100(param_5,puVar19);
                if (lVar21 == 0) {
                  uVar15 = FUN_004249b0();
                  if ((uVar15 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x40d3,
                                 "Unable to add video \'outbound-rtp\' to report, ID is not unique."
                                );
                  }
                }
                else {
                  local_4c0 = &local_558;
                  FUN_00c853f4(&local_4c0,&local_4a0,&local_4a0);
                }
                if ((long)local_490 < 0) {
                  operator_delete(local_4a0);
                }
              }
              lVar33 = lVar33 + 0x200;
            } while (lVar33 != lVar5);
            lVar21 = *(long *)(param_3 + 0x98);
            if ((*(byte *)(lVar21 + 0xe8) & 1) == 0) goto LAB_00c80b00;
          }
          lVar33 = *(long *)(lVar21 + 0x78);
          for (lVar21 = *(long *)(lVar21 + 0x70); lVar21 != lVar33; lVar21 = lVar21 + 0x200) {
            lVar18 = *(long *)(lVar21 + 0xb0);
            for (lVar5 = *(long *)(lVar21 + 0xa8); lVar5 != lVar18; lVar5 = lVar5 + 0x40) {
              uVar13 = FUN_00c811f4(&local_540,lVar5,1,&local_558,param_5,param_4,
                                    *(undefined1 *)(param_1 + 0x40));
              FUN_00c87c2c(param_5,uVar13);
            }
          }
          local_4a0 = (long *******)&local_558;
          FUN_00c851fc(&local_4a0,local_550);
          if ((long)local_530 < 0) {
            operator_delete(local_540);
          }
          if ((long)local_510 < 0) {
            operator_delete(local_520);
          }
          FUN_007e0b18(local_504);
          if (*(long *)(lVar9 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
LAB_00c80b00:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
  }
LAB_00c80ac4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 00c80b6c  FUN_00c80b6c =====

void * FUN_00c80b6c(long param_1,void *param_2)

{
  void *pvVar1;
  ulong extraout_x1;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  void *local_38;
  long local_18;
  
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_70,*(undefined8 *)((long)param_2 + 8),*(undefined8 *)((long)param_2 + 0x10))
    ;
  }
  else {
    local_60 = *(long *)((long)param_2 + 0x18);
    uStack_68 = *(undefined8 *)((long)param_2 + 0x10);
    local_70 = *(void **)((long)param_2 + 8);
  }
  local_40 = local_60;
  uStack_48 = uStack_68;
  uStack_68 = 0;
  local_60 = 0;
  local_50 = local_70;
  local_70 = (void *)0x0;
  local_38 = param_2;
  local_18 = param_1 + 0x10;
  FUN_00c84f34(&local_18,&local_50,&local_50);
  pvVar1 = local_38;
  local_38 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_00c8df6c(pvVar1);
    operator_delete(pvVar1);
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if ((extraout_x1 & 1) == 0) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 00c80c60  FUN_00c80c60 =====

void * FUN_00c80c60(long param_1,int param_2,long param_3,undefined8 param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  long lVar7;
  double dVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  void *local_498;
  undefined8 uStack_490;
  long local_488;
  undefined1 *local_480;
  undefined1 *puStack_478;
  undefined1 *local_470;
  void *local_460;
  undefined8 uStack_458;
  long local_450;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = 0x120;
  if ((param_5 & 1) == 0) {
    lVar7 = 0x130;
  }
  if ((*(byte *)((undefined8 *)(param_1 + lVar7) + 1) & 1) == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + lVar7);
    if (*(undefined4 **)(param_1 + 0xb8) == *(undefined4 **)(param_1 + 0xc0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined4 **)(param_1 + 0xb8);
    }
    memset(&local_460,0xaa,0x400);
    local_470 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
    local_480 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_480,&local_460,0x400);
    uVar4 = FUN_006228b0(&local_480,&DAT_001cd1b9,2);
    uVar6 = 0x41;
    if (param_2 != 0) {
      uVar6 = 0x56;
    }
    uVar4 = FUN_00622844(uVar4,uVar6);
    FUN_006229f8(uVar4,uVar9);
    FUN_005d3510(&local_498,local_480);
    pvVar5 = operator_new(0x120);
    uStack_458 = uStack_490;
    local_460 = local_498;
    local_498 = (void *)0x0;
    uStack_490 = 0;
    local_450 = local_488;
    local_488 = 0;
    FUN_00c8f190(pvVar5,&local_460,uVar10);
    if (local_450 < 0) {
      operator_delete(local_460);
    }
    if (local_488 < 0) {
      operator_delete(local_498);
    }
    if (*(undefined4 **)(param_1 + 0xb8) == *(undefined4 **)(param_1 + 0xc0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined4 **)(param_1 + 0xb8);
    }
    *(undefined4 *)((long)pvVar5 + 0x28) = uVar9;
    *(undefined1 *)((long)pvVar5 + 0x2c) = 1;
    FUN_00667e40(&local_460,param_2);
    if (*(char *)((long)pvVar5 + 0x48) == '\x01') {
      if (*(char *)((long)pvVar5 + 0x47) < '\0') {
        operator_delete(*(void **)((long)pvVar5 + 0x30));
      }
    }
    else {
      if ((undefined8 *)((long)pvVar5 + 0x30) == (undefined8 *)0x0) goto LAB_00c80ff4;
      *(undefined1 *)((long)pvVar5 + 0x48) = 1;
    }
    *(undefined8 *)((long)pvVar5 + 0x38) = uStack_458;
    *(undefined8 *)((long)pvVar5 + 0x30) = local_460;
    *(long *)((long)pvVar5 + 0x40) = local_450;
    FUN_00600e24((long)pvVar5 + 0x50,param_4);
    if (*(char *)(param_3 + 0x88) == '\x01') {
      FUN_00600e24((long)pvVar5 + 0x70,param_3 + 0x70);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x150);
    uVar4 = *(undefined8 *)(param_1 + 0x158);
    *(undefined1 *)((long)pvVar5 + 0x98) = 1;
    *(undefined1 *)((long)pvVar5 + 0xa8) = 1;
    *(undefined8 *)((long)pvVar5 + 0x90) = uVar10;
    *(undefined8 *)((long)pvVar5 + 0xa0) = uVar4;
    FUN_00600e24((long)pvVar5 + 0xb0,param_3 + 8);
    if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    lVar7 = *(long *)(param_1 + 0x140);
    if (lVar7 == -0x8000000000000000) {
      dVar8 = -INFINITY;
    }
    else if (lVar7 == 0x7fffffffffffffff) {
      dVar8 = INFINITY;
    }
    else {
      dVar8 = (double)lVar7 * DAT_001f5860;
    }
    cVar1 = *(char *)(param_1 + 0x170);
    uVar10 = *(undefined8 *)(param_1 + 0x160);
    *(double *)((long)pvVar5 + 0xd0) = dVar8;
    *(undefined1 *)((long)pvVar5 + 0xd8) = 1;
    *(undefined8 *)((long)pvVar5 + 0xe0) = uVar10;
    *(undefined1 *)((long)pvVar5 + 0xe8) = 1;
    if (cVar1 == '\x01') {
      lVar7 = *(long *)(param_1 + 0x168);
      if (lVar7 == -0x8000000000000000) {
        dVar8 = -INFINITY;
      }
      else if (lVar7 == 0x7fffffffffffffff) {
        dVar8 = INFINITY;
      }
      else {
        dVar8 = (double)lVar7 * DAT_001f5658;
      }
      *(double *)((long)pvVar5 + 0xf0) = dVar8;
      *(undefined1 *)((long)pvVar5 + 0xf8) = 1;
    }
    if (*(char *)((long)pvVar5 + 0x108) == '\x01') {
      *(long *)((long)pvVar5 + 0x100) = (long)*(int *)(param_1 + 0x180);
    }
    else {
      if ((long *)((long)pvVar5 + 0x100) == (long *)0x0) {
LAB_00c80ff4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      iVar2 = *(int *)(param_1 + 0x180);
      *(undefined1 *)((long)pvVar5 + 0x108) = 1;
      *(long *)((long)pvVar5 + 0x100) = (long)iVar2;
    }
    lVar7 = *(long *)(param_1 + 0x178);
    if (lVar7 == -0x8000000000000000) {
      dVar8 = -INFINITY;
    }
    else if (lVar7 == 0x7fffffffffffffff) {
      dVar8 = INFINITY;
    }
    else {
      dVar8 = (double)lVar7 * DAT_001f5658;
    }
    *(double *)((long)pvVar5 + 0x110) = dVar8;
    *(undefined1 *)((long)pvVar5 + 0x118) = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return pvVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c8100c  FUN_00c8100c =====

void * FUN_00c8100c(long param_1,void *param_2)

{
  void *pvVar1;
  ulong extraout_x1;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  void *local_38;
  long local_18;
  
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_70,*(undefined8 *)((long)param_2 + 8),*(undefined8 *)((long)param_2 + 0x10))
    ;
  }
  else {
    local_60 = *(long *)((long)param_2 + 0x18);
    uStack_68 = *(undefined8 *)((long)param_2 + 0x10);
    local_70 = *(void **)((long)param_2 + 8);
  }
  local_40 = local_60;
  uStack_48 = uStack_68;
  uStack_68 = 0;
  local_60 = 0;
  local_50 = local_70;
  local_70 = (void *)0x0;
  local_38 = param_2;
  local_18 = param_1 + 0x10;
  FUN_00c85098(&local_18,&local_50,&local_50);
  pvVar1 = local_38;
  local_38 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_00c8f284(pvVar1);
    operator_delete(pvVar1);
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if ((extraout_x1 & 1) == 0) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 00c81100  FUN_00c81100 =====

void * FUN_00c81100(long param_1,void *param_2)

{
  void *pvVar1;
  ulong extraout_x1;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  void *local_38;
  long local_18;
  
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_70,*(undefined8 *)((long)param_2 + 8),*(undefined8 *)((long)param_2 + 0x10))
    ;
  }
  else {
    local_60 = *(long *)((long)param_2 + 0x18);
    uStack_68 = *(undefined8 *)((long)param_2 + 0x10);
    local_70 = *(void **)((long)param_2 + 8);
  }
  local_40 = local_60;
  uStack_48 = uStack_68;
  uStack_68 = 0;
  local_60 = 0;
  local_50 = local_70;
  local_70 = (void *)0x0;
  local_38 = param_2;
  local_18 = param_1 + 0x10;
  FUN_00c85290(&local_18,&local_50,&local_50);
  pvVar1 = local_38;
  local_38 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_00c8e890(pvVar1);
    operator_delete(pvVar1);
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if ((extraout_x1 & 1) == 0) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 00c811f4  FUN_00c811f4 =====

void * FUN_00c811f4(undefined8 *param_1,long param_2,int param_3,long param_4,undefined8 param_5,
                   long param_6,uint param_7)

{
  char *pcVar1;
  undefined1 *puVar2;
  long *__s2;
  undefined1 *__n;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 **__s1;
  undefined1 *puVar8;
  int iVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  double dVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  float fVar23;
  undefined1 *local_4b0;
  undefined1 *puStack_4a8;
  undefined1 *local_4a0;
  undefined1 *local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  undefined1 *local_470;
  undefined8 uStack_468;
  long local_460;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar14 = 0x20;
  if ((param_7 & 1) == 0) {
    lVar14 = 0x18;
  }
  uVar22 = *(undefined8 *)(param_2 + lVar14);
  uVar3 = *(undefined4 *)(param_2 + 4);
  memset(&local_470,0xaa,0x400);
  local_480 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
  local_490 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_490,&local_470,0x400);
  uVar10 = FUN_006228b0(&local_490,&DAT_001aadd0,2);
  uVar12 = 0x41;
  if (param_3 != 0) {
    uVar12 = 0x56;
  }
  uVar10 = FUN_00622844(uVar10,uVar12);
  FUN_006229f8(uVar10,uVar3);
  FUN_005d3510(&local_4b0,local_490);
  pvVar11 = operator_new(0x150);
  uStack_468 = puStack_4a8;
  local_470 = local_4b0;
  local_4b0 = (undefined1 *)0x0;
  puStack_4a8 = (undefined1 *)0x0;
  local_460 = (long)local_4a0;
  local_4a0 = (undefined1 *)0x0;
  FUN_00c8ed10(pvVar11,&local_470,uVar22);
  if (local_460 < 0) {
    operator_delete(local_470);
  }
  if ((long)local_4a0 < 0) {
    operator_delete(local_4b0);
  }
  uVar4 = *(uint *)(param_2 + 4);
  *(uint *)((long)pvVar11 + 0x28) = uVar4;
  pcVar1 = "audio";
  if (param_3 != 0) {
    pcVar1 = "video";
  }
  puVar13 = (undefined4 *)((long)pvVar11 + 0x30);
  *(undefined1 *)((long)pvVar11 + 0x2c) = 1;
  if (*(char *)((long)pvVar11 + 0x48) == '\x01') {
    if (*(char *)((long)pvVar11 + 0x47) < '\0') {
      puVar13 = *(undefined4 **)((long)pvVar11 + 0x30);
      *(undefined8 *)((long)pvVar11 + 0x38) = 5;
    }
    else {
      *(undefined1 *)((long)pvVar11 + 0x47) = 5;
    }
    uVar3 = *(undefined4 *)pcVar1;
    cVar5 = pcVar1[4];
    *(undefined1 *)((long)puVar13 + 5) = 0;
    *puVar13 = uVar3;
    *(char *)(puVar13 + 1) = cVar5;
  }
  else {
    if (puVar13 == (undefined4 *)0x0) goto LAB_00c817a0;
    FUN_005d3510((long)pvVar11 + 0x30);
    *(undefined1 *)((long)pvVar11 + 0x48) = 1;
  }
  fVar23 = (float)*(byte *)(param_2 + 8) / 256.0;
  *(undefined4 *)((long)pvVar11 + 0xa0) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((long)pvVar11 + 0xa4) = 1;
  if (*(char *)((long)pvVar11 + 0x120) == '\x01') {
    *(double *)((long)pvVar11 + 0x118) = (double)fVar23;
    lVar14 = *(long *)(param_2 + 0x38);
  }
  else {
    if ((double *)((long)pvVar11 + 0x118) == (double *)0x0) goto LAB_00c817a0;
    *(undefined1 *)((long)pvVar11 + 0x120) = 1;
    *(double *)((long)pvVar11 + 0x118) = (double)fVar23;
    lVar14 = *(long *)(param_2 + 0x38);
  }
  if (lVar14 != 0) {
    lVar17 = *(long *)(param_2 + 0x28);
    if (lVar17 == -0x8000000000000000) {
      dVar18 = -INFINITY;
    }
    else if (lVar17 == 0x7fffffffffffffff) {
      dVar18 = INFINITY;
    }
    else {
      dVar18 = (double)lVar17 * DAT_001f5658;
    }
    *(double *)((long)pvVar11 + 0x108) = dVar18;
    *(undefined1 *)((long)pvVar11 + 0x110) = 1;
  }
  lVar17 = *(long *)(param_2 + 0x30);
  if (lVar17 == -0x8000000000000000) {
    dVar18 = -INFINITY;
  }
  else if (lVar17 == 0x7fffffffffffffff) {
    dVar18 = INFINITY;
  }
  else {
    dVar18 = (double)lVar17 * DAT_001f5658;
  }
  *(double *)((long)pvVar11 + 0x128) = dVar18;
  *(undefined1 *)((long)pvVar11 + 0x130) = 1;
  if (*(char *)((long)pvVar11 + 0x13c) == '\x01') {
    *(undefined4 *)((long)pvVar11 + 0x138) = (int)lVar14;
  }
  else {
    if ((undefined4 *)((long)pvVar11 + 0x138) == (undefined4 *)0x0) {
LAB_00c817a0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(int *)((long)pvVar11 + 0x138) = (int)lVar14;
    *(undefined1 *)((long)pvVar11 + 0x13c) = 1;
  }
  puVar16 = *(uint **)(param_6 + 0x48);
  lVar14 = (long)*(uint **)(param_6 + 0x50) - (long)puVar16;
  if (lVar14 != 0) {
    uVar19 = (lVar14 >> 4) * -0x5555555555555555;
    puVar15 = puVar16;
    do {
      uVar20 = uVar19 >> 1;
      puVar16 = puVar15 + uVar20 * 0xc + 0xc;
      uVar19 = uVar19 + ~uVar20;
      if (uVar4 <= puVar15[uVar20 * 0xc]) {
        puVar16 = puVar15;
        uVar19 = uVar20;
      }
      puVar15 = puVar16;
    } while (uVar19 != 0);
  }
  if ((puVar16 != *(uint **)(param_6 + 0x50)) && (*puVar16 <= uVar4)) {
    uVar10 = *(undefined8 *)(puVar16 + 2);
    *(undefined1 *)((long)pvVar11 + 0xb0) = 1;
    *(undefined8 *)((long)pvVar11 + 0xa8) = uVar10;
    uVar10 = *(undefined8 *)(puVar16 + 4);
    *(undefined1 *)((long)pvVar11 + 0xc0) = 1;
    *(undefined8 *)((long)pvVar11 + 0xb8) = uVar10;
    uVar10 = *(undefined8 *)(puVar16 + 6);
    *(undefined1 *)((long)pvVar11 + 0xd0) = 1;
    *(undefined8 *)((long)pvVar11 + 200) = uVar10;
    uVar10 = *(undefined8 *)(puVar16 + 8);
    *(undefined1 *)((long)pvVar11 + 0xe0) = 1;
    *(undefined8 *)((long)pvVar11 + 0xd8) = uVar10;
    uVar10 = *(undefined8 *)(puVar16 + 10);
    *(undefined1 *)((long)pvVar11 + 0x148) = 1;
    *(undefined8 *)((long)pvVar11 + 0x140) = uVar10;
  }
  uVar3 = *(undefined4 *)(param_2 + 4);
  puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_4a0 = &DAT_aaaaaaaaaaaaaaaa;
  memset(&local_470,0xaa,0x400);
  local_480 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
  local_490 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_490,&local_470,0x400);
  uVar10 = FUN_00622844(&local_490,0x4f);
  uVar19 = param_1[1];
  puVar7 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar19 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar7 = param_1;
  }
  uVar10 = FUN_006228b0(uVar10,puVar7,uVar19);
  uVar10 = FUN_00622844(uVar10,uVar12);
  FUN_006229f8(uVar10,uVar3);
  FUN_005d3510(&local_4b0,local_490);
  plVar21 = *(long **)(param_4 + 8);
  if (plVar21 != (long *)0x0) {
    __s1 = (undefined1 **)local_4b0;
    puVar2 = puStack_4a8;
    if (-1 < (long)local_4a0) {
      __s1 = &local_4b0;
      puVar2 = (undefined1 *)((ulong)local_4a0 >> 0x38);
    }
    do {
      while( true ) {
        __s2 = (long *)plVar21[4];
        puVar8 = (undefined1 *)plVar21[5];
        if (-1 < (char)*(byte *)((long)plVar21 + 0x37)) {
          __s2 = plVar21 + 4;
          puVar8 = (undefined1 *)(ulong)*(byte *)((long)plVar21 + 0x37);
        }
        __n = puVar8;
        if (puVar2 <= puVar8) {
          __n = puVar2;
        }
        iVar9 = memcmp(__s1,__s2,(size_t)__n);
        if (iVar9 != 0) break;
        if (puVar2 == puVar8) {
          if (plVar21 != (long *)(param_4 + 8)) {
            FUN_00661bd4((long)pvVar11 + 0xe8,&local_4b0);
            lVar17 = plVar21[7];
            FUN_00600e24(lVar17 + 0xd0,(long)pvVar11 + 8);
            lVar14 = FUN_00c87d04(param_5,param_1);
            if (lVar14 != 0) {
              if ((*(byte *)(lVar14 + 0x80) & 1) == 0) {
                if ((*(byte *)(lVar17 + 0x68) & 1) == 0) goto LAB_00c817b4;
                lVar14 = lVar17 + 0x50;
              }
              else {
                lVar14 = lVar14 + 0x68;
              }
              FUN_00600e24((long)pvVar11 + 0x50,lVar14);
            }
            if ((*(char *)(lVar17 + 0x88) == '\x01') &&
               (lVar14 = FUN_00c87d04(param_5,lVar17 + 0x70), lVar14 != 0)) {
              if ((*(byte *)(lVar17 + 0x88) & 1) == 0) {
LAB_00c817b4:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                          );
              }
              FUN_00661bd4((long)pvVar11 + 0x70,lVar17 + 0x70);
              if (*(char *)(lVar14 + 0x74) == '\x01') {
                lVar14 = FUN_007cccb8(param_2,*(undefined4 *)(lVar14 + 0x70));
                if (lVar14 == -0x8000000000000000) {
                  dVar18 = -INFINITY;
                }
                else if (lVar14 == 0x7fffffffffffffff) {
                  dVar18 = INFINITY;
                }
                else {
                  dVar18 = (double)lVar14 * DAT_001f5658;
                }
                *(double *)((long)pvVar11 + 0x90) = dVar18;
                *(undefined1 *)((long)pvVar11 + 0x98) = 1;
              }
            }
          }
          goto LAB_00c81750;
        }
        if (puVar2 < puVar8) goto LAB_00c81658;
LAB_00c81608:
        plVar21 = (long *)plVar21[1];
        if (plVar21 == (long *)0x0) goto LAB_00c81750;
      }
      if (-1 < iVar9) goto LAB_00c81608;
LAB_00c81658:
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
LAB_00c81750:
  if ((long)local_4a0 < 0) {
    operator_delete(local_4b0);
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return pvVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c817cc  FUN_00c817cc =====

void FUN_00c817cc(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  pvVar8 = (void *)param_1[0x13];
  param_1[0x13] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_00c834d8(pvVar8);
    operator_delete(pvVar8);
  }
  plVar9 = (long *)param_1[0x10];
  if (plVar9 != (long *)0x0) {
    plVar3 = (long *)param_1[0x11];
    plVar1 = plVar9;
    if (plVar9 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) goto LAB_00c8193c;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 8))();
        }
      } while (plVar3 != plVar9);
      plVar1 = (long *)param_1[0x10];
    }
    param_1[0x11] = (long)plVar9;
    operator_delete(plVar1);
  }
  puVar10 = (undefined8 *)param_1[0xd];
  if (puVar10 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0xe];
    puVar2 = puVar10;
    if (puVar10 != puVar4) {
      do {
        puVar2 = puVar4 + -4;
        if (puVar2 == (undefined8 *)0x0) goto LAB_00c8193c;
        if (*(char *)((long)puVar4 + -9) < '\0') {
          operator_delete((void *)*puVar2);
        }
        puVar4 = puVar2;
      } while (puVar2 != puVar10);
      puVar2 = (undefined8 *)param_1[0xd];
    }
    param_1[0xe] = (long)puVar10;
    operator_delete(puVar2);
  }
  pvVar8 = (void *)param_1[10];
  if (pvVar8 != (void *)0x0) {
    pvVar5 = (void *)param_1[0xb];
    uVar6 = (ulong)(((long)pvVar8 - (long)pvVar5) * 0x1555555555555555) >> 2;
    uVar7 = (long)pvVar5 * -0x1555555555555555 - 4U >> 2;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
      uVar6 = uVar6 & 0x3ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -0xc);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (pvVar5 != pvVar8) {
      pvVar5 = (void *)((long)pvVar5 + -0xc);
      if (pvVar5 == (void *)0x0) {
LAB_00c8193c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0xb] = (long)pvVar8;
    operator_delete(pvVar8);
  }
  if (((char)param_1[9] == '\x01') && (*(char *)((long)param_1 + 0x47) < '\0')) {
    operator_delete((void *)param_1[6]);
  }
  if (((char)param_1[5] == '\x01') && (*(char *)((long)param_1 + 0x27) < '\0')) {
    operator_delete((void *)param_1[2]);
    param_1 = (long *)*param_1;
  }
  else {
    param_1 = (long *)*param_1;
  }
  if (param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c819b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 00c819e8  FUN_00c819e8 =====

void FUN_00c819e8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long local_18;
  
  local_18 = param_1 + 0x68;
  FUN_00c8583c(&local_18,*(undefined8 *)(param_1 + 0x70));
  local_18 = param_1 + 0x50;
  FUN_00c85744(&local_18,*(undefined8 *)(param_1 + 0x58));
  local_18 = param_1 + 0x38;
  FUN_00c857c0(&local_18,*(undefined8 *)(param_1 + 0x40));
  local_18 = param_1 + 0x20;
  FUN_00c856c8(&local_18,*(undefined8 *)(param_1 + 0x28));
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x10);
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0xb0);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00c817cc(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 8);
    }
    *(void **)(param_1 + 0x10) = pvVar3;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00c81abc  FUN_00c81abc =====

void FUN_00c81abc(long param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int local_24;
  
  local_24 = param_2;
  if (param_3 == 3) {
    piVar2 = *(int **)(param_1 + 0xb0);
    piVar1 = *(int **)(param_1 + 0xb8);
    if ((long)piVar1 - (long)piVar2 != 0) {
      uVar5 = (long)piVar1 - (long)piVar2 >> 2;
      piVar7 = piVar2;
      do {
        uVar6 = uVar5 >> 1;
        piVar2 = piVar7 + uVar6 + 1;
        uVar5 = uVar5 + ~uVar6;
        if (param_2 <= piVar7[uVar6]) {
          piVar2 = piVar7;
          uVar5 = uVar6;
        }
        piVar7 = piVar2;
      } while (uVar5 != 0);
    }
    piVar7 = piVar2;
    if (piVar2 == piVar1) {
      lVar8 = 0;
    }
    else {
      if (*piVar2 <= param_2) {
        piVar7 = piVar2 + 1;
      }
      lVar8 = (long)piVar7 - (long)piVar2;
      if (piVar7 < piVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                  );
      }
    }
    if (piVar2 != piVar7) {
      memmove(piVar2,(void *)((long)piVar2 + lVar8),(long)piVar1 - ((long)piVar2 + lVar8));
      lVar3 = *(long *)(param_1 + 0xb8);
      lVar4 = ((long)piVar2 + (long)piVar1) - ((long)piVar7 + lVar3);
      uVar5 = (ulong)((lVar4 << 0x3e) - lVar4) >> 2;
      uVar6 = (lVar3 - (lVar3 << 0x3e)) - 4U >> 2;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)piVar2 - ((int)piVar7 + (int)lVar3) | -(int)lVar3) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        lVar3 = lVar3 + uVar5 * -4;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (lVar3 != (long)piVar1 - lVar8) {
        lVar3 = lVar3 + -4;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(long *)(param_1 + 0xb8) = (long)piVar1 - lVar8;
    }
    if (piVar7 != piVar2) {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    }
  }
  else if (param_3 == 1) {
    piVar2 = *(int **)(param_1 + 0xb0);
    lVar8 = (long)*(int **)(param_1 + 0xb8) - (long)piVar2;
    if (lVar8 != 0) {
      uVar5 = lVar8 >> 2;
      piVar1 = piVar2;
      do {
        uVar6 = uVar5 >> 1;
        piVar2 = piVar1 + uVar6 + 1;
        uVar5 = uVar5 + ~uVar6;
        if (param_2 <= piVar1[uVar6]) {
          piVar2 = piVar1;
          uVar5 = uVar6;
        }
        piVar1 = piVar2;
      } while (uVar5 != 0);
    }
    if ((piVar2 == *(int **)(param_1 + 0xb8)) || (param_2 < *piVar2)) {
      FUN_00c87604((long *)(param_1 + 0xb0),piVar2,&local_24);
    }
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  return;
}


// ===== 00c81c9c  FUN_00c81c9c =====

undefined4 * FUN_00c81c9c(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar8 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_00c81db8();
LAB_00c81db4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar7 = (long)uVar5 >> 4;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar5) {
    uVar7 = 0x7ffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3b != 0) goto LAB_00c81db4;
    pvVar3 = operator_new(uVar7 << 5);
    puVar8 = (undefined4 *)((long)pvVar3 + (long)puVar8);
  }
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = *param_2;
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(puVar8 + 2) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(puVar8 + 4) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(puVar8 + 6) = uVar6;
    lVar2 = (long)puVar8 + (*param_1 - param_1[1]);
    FUN_00c81dd0(param_1,*param_1,param_1[1],lVar2);
    pvVar4 = (void *)*param_1;
    *param_1 = lVar2;
    param_1[1] = (long)(puVar8 + 8);
    param_1[2] = (long)((long)pvVar3 + uVar7 * 0x20);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar8 + 8;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c81db8  FUN_00c81db8 =====

void FUN_00c81db8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c81dd0  FUN_00c81dd0 =====

void FUN_00c81dd0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *param_4 = *puVar1;
      uVar2 = *(undefined8 *)(puVar1 + 2);
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(param_4 + 2) = uVar2;
      uVar2 = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(param_4 + 4) = uVar2;
      uVar2 = *(undefined8 *)(puVar1 + 6);
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 8;
      *(undefined8 *)(param_4 + 6) = uVar2;
      param_4 = param_4 + 8;
    } while (puVar1 != param_3);
    do {
      if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(long **)(param_2 + 6) != (long *)0x0) {
        (**(code **)(**(long **)(param_2 + 6) + 8))();
      }
      if (*(long **)(param_2 + 4) != (long *)0x0) {
        (**(code **)(**(long **)(param_2 + 4) + 8))();
      }
      if (*(long **)(param_2 + 2) != (long *)0x0) {
        (**(code **)(**(long **)(param_2 + 2) + 8))();
      }
      param_2 = param_2 + 8;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 00c81ec0  FUN_00c81ec0 =====

void FUN_00c81ec0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((undefined4 *)param_1[0x17] == (undefined4 *)param_1[0x18]) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)param_1[0x17];
  }
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  *(undefined1 *)(param_2 + 0x2c) = 1;
  uVar1 = *(undefined4 *)(param_1 + 2);
  *(undefined1 *)(param_2 + 0x16c) = 1;
  *(undefined4 *)(param_2 + 0x168) = uVar1;
  uVar2 = param_1[3];
  *(undefined1 *)(param_2 + 0xb0) = 1;
  *(undefined8 *)(param_2 + 0xa8) = uVar2;
  uVar2 = param_1[4];
  *(undefined1 *)(param_2 + 0xc0) = 1;
  *(undefined8 *)(param_2 + 0xb8) = uVar2;
  uVar2 = *param_1;
  *(undefined1 *)(param_2 + 0x1c0) = 1;
  *(undefined8 *)(param_2 + 0x1b8) = uVar2;
  uVar2 = param_1[1];
  *(undefined1 *)(param_2 + 0x1d0) = 1;
  *(undefined8 *)(param_2 + 0x1c8) = uVar2;
  if (*(char *)(param_1 + 7) == '\x01') {
    uVar2 = param_1[6];
    *(undefined1 *)(param_2 + 0x1f0) = 1;
    *(undefined8 *)(param_2 + 0x1e8) = uVar2;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    uVar2 = param_1[8];
    *(undefined1 *)(param_2 + 0x1e0) = 1;
    *(undefined8 *)(param_2 + 0x1d8) = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined1 *)(param_2 + 0xa4) = 1;
  *(undefined4 *)(param_2 + 0xa0) = uVar1;
  uVar2 = param_1[0xb];
  *(undefined1 *)(param_2 + 0x218) = 1;
  *(undefined8 *)(param_2 + 0x210) = uVar2;
  uVar2 = param_1[0xc];
  *(undefined1 *)(param_2 + 0x228) = 1;
  *(undefined8 *)(param_2 + 0x220) = uVar2;
  uVar2 = param_1[0xd];
  *(undefined1 *)(param_2 + 0x238) = 1;
  *(undefined8 *)(param_2 + 0x230) = uVar2;
  uVar2 = param_1[0xe];
  *(undefined1 *)(param_2 + 0x248) = 1;
  *(undefined8 *)(param_2 + 0x240) = uVar2;
  if (*(char *)((long)param_1 + 0x54) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 10);
    *(undefined1 *)(param_2 + 0x40c) = 1;
    *(undefined4 *)(param_2 + 0x408) = uVar1;
  }
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    uVar2 = param_1[0x1d];
    *(undefined1 *)(param_2 + 0x188) = 1;
    *(undefined8 *)(param_2 + 0x180) = uVar2;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar2 = param_1[0x1f];
    *(undefined1 *)(param_2 + 0x1a8) = 1;
    *(undefined8 *)(param_2 + 0x1a0) = uVar2;
  }
  if (*(char *)(param_1 + 0x22) == '\x01') {
    uVar2 = param_1[0x21];
    *(undefined1 *)(param_2 + 0x198) = 1;
    *(undefined8 *)(param_2 + 400) = uVar2;
  }
  uVar2 = param_1[0x23];
  *(undefined1 *)(param_2 + 0x338) = 1;
  *(undefined8 *)(param_2 + 0x330) = uVar2;
  return;
}


// ===== 00c82014  FUN_00c82014 =====

void FUN_00c82014(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 long param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined1 *local_4c0;
  ulong uStack_4b8;
  ulong local_4b0;
  undefined1 *local_4a8;
  ulong uStack_4a0;
  ulong local_498;
  undefined1 *local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  void *local_470;
  undefined8 uStack_468;
  long local_460;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(param_5 + 0x68);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  memset(&local_470,0xaa,0x400);
  local_480 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
  local_490 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_490,&local_470,0x400);
  uVar6 = FUN_00622844(&local_490,0x43);
  uVar6 = FUN_00622844(uVar6,param_3);
  uVar7 = param_4[1];
  puVar3 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar3 = param_4;
  }
  uVar6 = FUN_006228b0(uVar6,puVar3,uVar7);
  uVar6 = FUN_00622844(uVar6,0x5f);
  FUN_00622910(uVar6,*(undefined4 *)(param_5 + 0x68));
  local_4a8 = (undefined1 *)0x0;
  uStack_4a0 = 0;
  local_498 = 0;
  uVar7 = FUN_00667e70(param_5 + 0x50,&local_4a8);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_00622844(&local_490,0x5f);
    local_4b0 = local_498;
    uStack_4b8 = uStack_4a0;
    local_4c0 = local_4a8;
    local_4a8 = (undefined1 *)0x0;
    uStack_4a0 = 0;
    local_498 = 0;
    uVar7 = uStack_4b8;
    ppuVar4 = (undefined1 **)local_4c0;
    if (-1 < (long)local_4b0) {
      uVar7 = local_4b0 >> 0x38;
      ppuVar4 = &local_4c0;
    }
    FUN_006228b0(uVar6,ppuVar4,uVar7);
    if ((long)local_4b0 < 0) {
      operator_delete(local_4c0);
    }
  }
  FUN_005d3510(param_1,local_490);
  if ((long)local_498 < 0) {
    operator_delete(local_4a8);
  }
  lVar8 = FUN_00c87d04(param_6,param_1);
  if (lVar8 == 0) {
    pvVar9 = operator_new(0xa0);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      FUN_005478d8(&local_470,*param_1,param_1[1]);
    }
    else {
      uStack_468 = param_1[1];
      local_470 = (void *)*param_1;
      local_460 = param_1[2];
    }
    FUN_00c8b430(pvVar9,&local_470,param_2);
    if (local_460 < 0) {
      operator_delete(local_470);
    }
    *(undefined4 *)((long)pvVar9 + 0x48) = uVar1;
    *(undefined1 *)((long)pvVar9 + 0x4c) = 1;
    FUN_00c82388(&local_470,param_5);
    if (*(char *)((long)pvVar9 + 0x68) == '\x01') {
      if (*(char *)((long)pvVar9 + 0x67) < '\0') {
        operator_delete(*(void **)((long)pvVar9 + 0x50));
      }
    }
    else {
      if ((undefined8 *)((long)pvVar9 + 0x50) == (undefined8 *)0x0) goto LAB_00c82370;
      *(undefined1 *)((long)pvVar9 + 0x68) = 1;
    }
    *(undefined8 *)((long)pvVar9 + 0x58) = uStack_468;
    *(undefined8 *)((long)pvVar9 + 0x50) = local_470;
    *(long *)((long)pvVar9 + 0x60) = local_460;
    if (*(char *)(param_5 + 0x28) == '\x01') {
      uVar1 = *(undefined4 *)(param_5 + 0x24);
      *(undefined1 *)((long)pvVar9 + 0x74) = 1;
      *(undefined4 *)((long)pvVar9 + 0x70) = uVar1;
    }
    if (*(char *)(param_5 + 0x30) == '\x01') {
      if (*(char *)((long)pvVar9 + 0x7c) == '\x01') {
        *(undefined4 *)((long)pvVar9 + 0x78) = *(undefined4 *)(param_5 + 0x2c);
      }
      else {
        if ((undefined4 *)((long)pvVar9 + 0x78) == (undefined4 *)0x0) goto LAB_00c82370;
        uVar1 = *(undefined4 *)(param_5 + 0x2c);
        *(undefined1 *)((long)pvVar9 + 0x7c) = 1;
        *(undefined4 *)((long)pvVar9 + 0x78) = uVar1;
      }
    }
    local_470 = (void *)0x0;
    uStack_468 = 0;
    local_460 = 0;
    uVar7 = FUN_00667e70(param_5 + 0x50,&local_470);
    lVar8 = local_460;
    uVar6 = uStack_468;
    pvVar5 = local_470;
    if ((uVar7 & 1) != 0) {
      uStack_468 = 0;
      local_460 = 0;
      local_470 = (void *)0x0;
      if (*(char *)((long)pvVar9 + 0x98) == '\x01') {
        if (*(char *)((long)pvVar9 + 0x97) < '\0') {
          operator_delete(*(void **)((long)pvVar9 + 0x80));
        }
        *(void **)((long)pvVar9 + 0x80) = pvVar5;
        *(undefined8 *)((long)pvVar9 + 0x88) = uVar6;
        *(long *)((long)pvVar9 + 0x90) = lVar8;
      }
      else {
        if (pvVar9 == (void *)0xffffffffffffff80) {
LAB_00c82370:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(void **)((long)pvVar9 + 0x80) = pvVar5;
        *(undefined8 *)((long)pvVar9 + 0x88) = uVar6;
        *(long *)((long)pvVar9 + 0x90) = lVar8;
        *(undefined1 *)((long)pvVar9 + 0x98) = 1;
      }
    }
    FUN_00600e24((long)pvVar9 + 0x28,param_4);
    FUN_00c87c2c(param_6,pvVar9);
    if (local_460 < 0) {
      operator_delete(local_470);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c82388  FUN_00c82388 =====

void FUN_00c82388(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_58 [2];
  char cStack_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  
  FUN_00667e40(local_58,*(undefined4 *)(param_2 + 0x20));
  puVar2 = (undefined8 *)FUN_00547cac(local_58,&DAT_001c7bbb,1);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar1 = *(ulong *)(param_2 + 0x10);
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x1f);
    puVar2 = (undefined8 *)(param_2 + 8);
  }
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,puVar2,uVar1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (cStack_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}


// ===== 00c82468  FUN_00c82468 =====

void FUN_00c82468(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  
  if ((undefined4 *)param_1[0xf] == (undefined4 *)param_1[0x10]) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)param_1[0xf];
  }
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  *(undefined1 *)(param_2 + 0x2c) = 1;
  if (*(char *)(param_2 + 0x98) == '\x01') {
    *(ulong *)(param_2 + 0x90) = (ulong)*(uint *)(param_1 + 3);
  }
  else {
    if ((ulong *)(param_2 + 0x90) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(ulong *)(param_2 + 0x90) = (ulong)*(uint *)(param_1 + 3);
    *(undefined1 *)(param_2 + 0x98) = 1;
  }
  lVar2 = param_1[0x19];
  if (lVar2 == -0x8000000000000000) {
    dVar3 = -INFINITY;
  }
  else if (lVar2 == 0x7fffffffffffffff) {
    dVar3 = INFINITY;
  }
  else {
    dVar3 = (double)lVar2 * DAT_001f5658;
  }
  *(double *)(param_2 + 0x1d8) = dVar3;
  *(undefined1 *)(param_2 + 0x1e0) = 1;
  uVar4 = param_1[5];
  *(undefined1 *)(param_2 + 0x140) = 1;
  *(undefined8 *)(param_2 + 0x138) = uVar4;
  uVar4 = *param_1;
  *(undefined1 *)(param_2 + 0xa8) = 1;
  *(undefined8 *)(param_2 + 0xa0) = uVar4;
  uVar4 = param_1[1];
  *(undefined1 *)(param_2 + 0x150) = 1;
  *(undefined8 *)(param_2 + 0x148) = uVar4;
  uVar4 = param_1[2];
  *(undefined1 *)(param_2 + 0x160) = 1;
  *(undefined8 *)(param_2 + 0x158) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 6);
  *(undefined1 *)(param_2 + 0x284) = 1;
  *(undefined4 *)(param_2 + 0x280) = uVar1;
  if (*(char *)((long)param_1 + 0xc1) == '\x01') {
    *(ushort *)(param_2 + 0x2c0) = *(byte *)(param_1 + 0x18) | 0x100;
  }
  uVar4 = param_1[4];
  *(undefined1 *)(param_2 + 0x2f8) = 1;
  *(undefined8 *)(param_2 + 0x2f0) = uVar4;
  return;
}


// ===== 00c82588  FUN_00c82588 =====

void FUN_00c82588(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *local_50;
  long *plStack_48;
  long local_28;
  
  if (param_2 != param_3) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      puVar1 = (undefined8 *)operator_new(0x40);
      if (puVar1 == (undefined8 *)0x0) {
LAB_00c82698:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2 = puVar1 + 4;
      *puVar1 = 0;
      if (puVar2 == (undefined8 *)0x0) goto LAB_00c82698;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_005478d8(puVar2,*param_2,param_2[1]);
      }
      else {
        uVar6 = *param_2;
        uVar4 = param_2[2];
        puVar1[5] = param_2[1];
        *puVar2 = uVar6;
        puVar1[6] = uVar4;
      }
      uVar4 = param_2[3];
      plVar5 = (long *)*param_1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = param_1 + 1;
      puVar1[7] = uVar4;
      param_1[1] = (long)puVar1;
      if (*plVar5 != 0) {
        *param_1 = *plVar5;
      }
      FUN_005d5b94(puVar1,puVar1);
      param_2 = param_2 + 4;
      param_1[2] = param_1[2] + 1;
      lVar3 = param_1[1];
    }
    do {
      local_28 = lVar3;
      lVar3 = *(long *)(local_28 + 8);
    } while (*(long *)(local_28 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_50 = param_1;
        plStack_48 = &local_28;
        FUN_00c826ac(&local_50,param_2,param_2);
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 00c826ac  FUN_00c826ac =====

void FUN_00c826ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  
  plVar10 = (long *)param_1[1];
  plVar9 = (long *)*param_1;
  lVar7 = *plVar10;
  uVar1 = *(ulong *)(lVar7 + 0x28);
  puVar5 = (undefined8 *)*(void **)(lVar7 + 0x20);
  if (-1 < (char)*(byte *)(lVar7 + 0x37)) {
    uVar1 = (ulong)*(byte *)(lVar7 + 0x37);
    puVar5 = (undefined8 *)(lVar7 + 0x20);
  }
  puVar6 = (undefined8 *)*param_2;
  uVar3 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar6 = param_2;
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar2 = uVar3;
  if (uVar1 <= uVar3) {
    sVar2 = uVar1;
  }
  iVar4 = memcmp(puVar5,puVar6,sVar2);
  if (iVar4 == 0) {
    if (uVar3 <= uVar1) goto LAB_00c82764;
  }
  else if (-1 < iVar4) {
LAB_00c82764:
    plVar11 = plVar9 + 1;
    plVar10 = (long *)*plVar11;
    plVar12 = plVar11;
    if ((long *)*plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = plVar10;
          plVar10 = (long *)plVar11[4];
          uVar1 = plVar11[5];
          if (-1 < (char)*(byte *)((long)plVar11 + 0x37)) {
            plVar10 = plVar11 + 4;
            uVar1 = (ulong)*(byte *)((long)plVar11 + 0x37);
          }
          sVar2 = uVar1;
          if (uVar3 <= uVar1) {
            sVar2 = uVar3;
          }
          iVar4 = memcmp(puVar6,plVar10,sVar2);
          if (iVar4 == 0) break;
          if (-1 < iVar4) goto LAB_00c82778;
LAB_00c827c8:
          plVar10 = (long *)*plVar11;
          plVar12 = plVar11;
          if ((long *)*plVar11 == (long *)0x0) goto LAB_00c82838;
        }
        if (uVar3 == uVar1) {
          return;
        }
        if (uVar3 < uVar1) goto LAB_00c827c8;
LAB_00c82778:
        plVar10 = (long *)plVar11[1];
      } while ((long *)plVar11[1] != (long *)0x0);
      plVar12 = plVar11 + 1;
    }
LAB_00c82838:
    puVar5 = (undefined8 *)operator_new(0x40);
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar5 + 4;
      *puVar5 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          FUN_005478d8(puVar6,*param_3,param_3[1]);
        }
        else {
          uVar13 = *param_3;
          uVar8 = param_3[2];
          puVar5[5] = param_3[1];
          *puVar6 = uVar13;
          puVar5[6] = uVar8;
        }
        uVar8 = param_3[3];
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = plVar11;
        puVar5[7] = uVar8;
        *plVar12 = (long)puVar5;
        if (*(long *)*plVar9 != 0) {
          *plVar9 = *(long *)*plVar9;
          puVar5 = (undefined8 *)*plVar12;
        }
        FUN_005d5b94(plVar9[1],puVar5);
        plVar9[2] = plVar9[2] + 1;
        return;
      }
    }
    goto LAB_00c828d0;
  }
  puVar5 = (undefined8 *)operator_new(0x40);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = puVar5 + 4;
    *puVar5 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(puVar6,*param_3,param_3[1]);
        plVar10 = (long *)param_1[1];
      }
      else {
        uVar13 = *param_3;
        uVar8 = param_3[2];
        puVar5[5] = param_3[1];
        *puVar6 = uVar13;
        puVar5[6] = uVar8;
      }
      puVar5[7] = param_3[3];
      lVar7 = *plVar10;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = lVar7;
      *(undefined8 **)(lVar7 + 8) = puVar5;
      puVar6 = puVar5;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        puVar6 = *(undefined8 **)(lVar7 + 8);
      }
      FUN_005d5b94(plVar9[1],puVar6);
      plVar9[2] = plVar9[2] + 1;
      *(undefined8 **)param_1[1] = puVar5;
      return;
    }
  }
LAB_00c828d0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c828e4  FUN_00c828e4 =====

void FUN_00c828e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c828e4(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c82978  FUN_00c82978 =====

undefined1  [16]
FUN_00c82978(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_00c82aa4;
        }
        if (uVar2 <= uVar1) goto LAB_00c829c0;
LAB_00c82a10:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00c82a2c;
      }
      if (iVar3 < 0) goto LAB_00c82a10;
LAB_00c829c0:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00c82a2c:
  plVar4 = (long *)operator_new(0x40);
  if (plVar4 != (long *)0x0) {
    *plVar4 = 0;
    if (plVar4 + 4 != (long *)0x0) {
      plVar6 = (long *)*param_4;
      lVar11 = *plVar6;
      lVar7 = plVar6[2];
      plVar4[5] = plVar6[1];
      plVar4[4] = lVar11;
      plVar4[6] = lVar7;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      plVar4[7] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00c82aa4:
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = plVar4;
      return auVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c82ae0  FUN_00c82ae0 =====

void FUN_00c82ae0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 *__dest;
  ulong __n;
  undefined8 *__src;
  
  cVar3 = *(char *)(param_1 + 3);
  if (cVar3 == (char)param_2[2]) {
    if (cVar3 != '\0') {
      if ((*param_2 == 0) && (param_2[1] != 0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                  );
      }
      FUN_00547b08(param_1,*param_2);
      return;
    }
  }
  else if (cVar3 == '\0') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    __n = param_2[1];
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    __src = (undefined8 *)*param_2;
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
    if ((undefined8 *)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,__src,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


// ===== 00c82c60  FUN_00c82c60 =====

void FUN_00c82c60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c82c78  FUN_00c82c78 =====

long FUN_00c82c78(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar2 = (lVar7 >> 5) + 1;
  if (uVar2 >> 0x3b != 0) {
    FUN_00c82efc();
LAB_00c82dec:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 4;
  if (uVar6 <= uVar2) {
    uVar6 = uVar2;
  }
  if (0x7fffffffffffffdf < uVar5) {
    uVar6 = 0x7ffffffffffffff;
  }
  if (uVar6 != 0) {
    if (uVar6 >> 0x3b != 0) goto LAB_00c82dec;
    local_50 = operator_new(uVar6 << 5);
  }
  local_38 = (void *)((long)local_50 + uVar6 * 0x20);
  local_48 = (undefined8 *)((long)local_50 + lVar7);
  if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar10 = param_2[1];
  uVar9 = *param_2;
  local_40 = local_48 + 4;
  local_48[2] = param_2[2];
  local_48[1] = uVar10;
  *local_48 = uVar9;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  local_48[3] = param_2[3];
  FUN_00c82df0(param_1,&local_50);
  puVar4 = local_48;
  lVar7 = param_1[1];
  puVar3 = local_40;
  while( true ) {
    if (puVar4 == puVar3) {
      if (local_50 != (void *)0x0) {
        local_40 = puVar3;
        operator_delete(local_50);
      }
      return lVar7;
    }
    puVar8 = puVar3 + -4;
    if (puVar8 == (undefined8 *)0x0) break;
    pcVar1 = (char *)((long)puVar3 + -9);
    puVar3 = puVar8;
    if (*pcVar1 < '\0') {
      operator_delete((void *)*puVar8);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c82df0  FUN_00c82df0 =====

void FUN_00c82df0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar9 + (param_2[1] - (long)puVar3));
  puVar4 = puVar9;
  puVar6 = puVar2;
  if (puVar3 != puVar9) {
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar7 = puVar4[1];
      uVar5 = *puVar4;
      puVar6[2] = puVar4[2];
      puVar6[1] = uVar7;
      *puVar6 = uVar5;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar1 = puVar4 + 4;
      puVar6[3] = puVar4[3];
      puVar4 = puVar1;
      puVar6 = puVar6 + 4;
    } while (puVar1 != puVar3);
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        operator_delete((void *)*puVar9);
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar3);
  }
  param_2[1] = puVar2;
  uVar5 = *param_1;
  uVar8 = param_1[2];
  param_1[1] = uVar5;
  uVar10 = param_2[1];
  uVar7 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar10;
  param_1[2] = uVar7;
  param_2[2] = uVar5;
  param_2[3] = uVar8;
  *param_2 = uVar5;
  param_2[1] = uVar5;
  return;
}


// ===== 00c82efc  FUN_00c82efc =====

void FUN_00c82efc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c82f14  FUN_00c82f14 =====

undefined8 * FUN_00c82f14(long *param_1,undefined8 *param_2)

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
      if (uVar8 >> 0x3d != 0) goto LAB_00c831a8;
      pvVar4 = operator_new(uVar8 << 3);
      puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
    }
    if (puVar2 == (undefined8 *)0x0) {
LAB_00c8317c:
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
        if (plVar9 == (long *)0x0) goto LAB_00c8317c;
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
  FUN_00c831ac();
LAB_00c831a8:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c831ac  FUN_00c831ac =====

void FUN_00c831ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c831c4  FUN_00c831c4 =====

void FUN_00c831c4(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_3;
    *param_2 = (long)puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
    lVar3 = param_3[1];
    plVar2 = param_2 + 2;
    *(undefined1 *)plVar2 = 0;
    *(int *)(param_2 + 1) = (int)lVar3;
    *(undefined1 *)(param_2 + 5) = 0;
    if ((char)param_3[5] == '\x01') {
      if (*(char *)((long)param_3 + 0x27) < '\0') {
        FUN_005478d8(plVar2,param_3[2],param_3[3]);
      }
      else {
        lVar4 = param_3[3];
        lVar3 = param_3[2];
        param_2[4] = param_3[4];
        param_2[3] = lVar4;
        *plVar2 = lVar3;
      }
      *(undefined1 *)(param_2 + 5) = 1;
    }
    *(undefined1 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 9) = 0;
    if ((char)param_3[9] == '\x01') {
      lVar4 = param_3[7];
      lVar3 = param_3[6];
      param_2[8] = param_3[8];
      param_2[7] = lVar4;
      param_2[6] = lVar3;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[6] = 0;
      *(undefined1 *)(param_2 + 9) = 1;
    }
    param_2[0xc] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[10] = param_3[10];
    param_2[0xb] = param_3[0xb];
    param_2[0xc] = param_3[0xc];
    param_3[0xc] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[0xd] = 0;
    param_2[0xd] = param_3[0xd];
    param_2[0xe] = param_3[0xe];
    param_2[0xf] = param_3[0xf];
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[0xd] = 0;
    param_2[0x12] = 0;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    param_2[0x10] = param_3[0x10];
    param_2[0x11] = param_3[0x11];
    param_2[0x12] = param_3[0x12];
    lVar3 = param_3[0x13];
    param_3[0x11] = 0;
    param_3[0x10] = 0;
    param_3[0x13] = 0;
    param_3[0x12] = 0;
    param_2[0x13] = lVar3;
    lVar3 = param_3[0x14];
    *(short *)(param_2 + 0x15) = (short)param_3[0x15];
    param_2[0x14] = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c83330  FUN_00c83330 =====

long FUN_00c83330(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  
  lVar7 = param_1[1] - *param_1;
  uVar3 = (lVar7 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x1745d1745d1745d < uVar3) {
    FUN_00c834c0();
LAB_00c834bc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar4 * 0x5d1745d1745d1746;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0xba2e8ba2e8ba2d < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
    uVar5 = 0x1745d1745d1745d;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x1745d1745d1745d < uVar5) goto LAB_00c834bc;
    pvVar2 = operator_new(uVar5 * 0xb0);
  }
  lVar7 = (long)pvVar2 + lVar7;
  FUN_00c831c4(param_1,lVar7,param_2);
  pvVar6 = (void *)*param_1;
  pvVar1 = (void *)param_1[1];
  lVar4 = (long)pvVar6 + (lVar7 - (long)pvVar1);
  pvVar8 = pvVar6;
  lVar9 = lVar4;
  if (pvVar1 != pvVar6) {
    do {
      FUN_00c831c4(param_1,lVar9,pvVar8);
      pvVar8 = (void *)((long)pvVar8 + 0xb0);
      lVar9 = lVar9 + 0xb0;
    } while (pvVar8 != pvVar1);
    do {
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00c817cc(pvVar6);
      pvVar6 = (void *)((long)pvVar6 + 0xb0);
    } while (pvVar6 != pvVar1);
    pvVar6 = (void *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar7 + 0xb0;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0xb0);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  return lVar7 + 0xb0;
}


// ===== 00c834c0  FUN_00c834c0 =====

void FUN_00c834c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c834d8  FUN_00c834d8 =====

/* WARNING: Removing unreachable block (ram,0x00c83628) */
/* WARNING: Removing unreachable block (ram,0x00c83688) */

void FUN_00c834d8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  pvVar1 = *(void **)(param_1 + 0x198);
  if (pvVar1 == (void *)0x0) {
LAB_00c83570:
    pvVar1 = *(void **)(param_1 + 0x180);
    if (pvVar1 == (void *)0x0) {
LAB_00c835f0:
      pvVar1 = *(void **)(param_1 + 0x168);
      if (pvVar1 != (void *)0x0) {
        pvVar3 = *(void **)(param_1 + 0x170);
        pvVar2 = pvVar1;
        if (pvVar1 != pvVar3) {
          do {
            pvVar3 = (void *)((long)pvVar3 + -0x20);
            if (pvVar3 == (void *)0x0) goto LAB_00c8389c;
          } while (pvVar3 != pvVar1);
          pvVar2 = *(void **)(param_1 + 0x168);
        }
        *(void **)(param_1 + 0x170) = pvVar1;
        operator_delete(pvVar2);
      }
      pvVar1 = *(void **)(param_1 + 0x150);
      if (pvVar1 != (void *)0x0) {
        pvVar3 = *(void **)(param_1 + 0x158);
        pvVar2 = pvVar1;
        if (pvVar1 != pvVar3) {
          do {
            pvVar3 = (void *)((long)pvVar3 + -0x20);
            if (pvVar3 == (void *)0x0) goto LAB_00c8389c;
          } while (pvVar3 != pvVar1);
          pvVar2 = *(void **)(param_1 + 0x150);
        }
        *(void **)(param_1 + 0x158) = pvVar1;
        operator_delete(pvVar2);
      }
      pvVar1 = *(void **)(param_1 + 0x138);
      if (pvVar1 == (void *)0x0) {
LAB_00c83730:
        pvVar1 = *(void **)(param_1 + 0x120);
        if (pvVar1 == (void *)0x0) {
LAB_00c837b0:
          pvVar1 = *(void **)(param_1 + 0x108);
          if (pvVar1 == (void *)0x0) {
LAB_00c83830:
            pvVar1 = *(void **)(param_1 + 0xf0);
            if (pvVar1 == (void *)0x0) {
LAB_00c838c0:
              if (*(char *)(param_1 + 0xe8) == '\x01') {
                FUN_0088b288(param_1 + 0x70);
              }
              if (*(char *)(param_1 + 0x68) == '\x01') {
                FUN_0088b14c(param_1);
                return;
              }
              return;
            }
            pvVar3 = *(void **)(param_1 + 0xf8);
            uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
            uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3d) - ((long)pvVar1 - (long)pvVar3))
                    >> 3;
            if (uVar5 <= uVar4) {
              uVar4 = uVar5;
            }
            if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
              uVar4 = uVar4 & 0x1ffffffffffffffe;
              pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
              do {
                uVar4 = uVar4 - 2;
              } while (uVar4 != 0);
            }
            do {
              if (pvVar3 == pvVar1) {
                *(void **)(param_1 + 0xf8) = pvVar1;
                operator_delete(pvVar1);
                goto LAB_00c838c0;
              }
              pvVar3 = (void *)((long)pvVar3 + -8);
            } while (pvVar3 != (void *)0x0);
          }
          else {
            pvVar3 = *(void **)(param_1 + 0x110);
            uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
            uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3d) - ((long)pvVar1 - (long)pvVar3))
                    >> 3;
            if (uVar5 <= uVar4) {
              uVar4 = uVar5;
            }
            if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
              uVar4 = uVar4 & 0x1ffffffffffffffe;
              pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
              do {
                uVar4 = uVar4 - 2;
              } while (uVar4 != 0);
            }
            do {
              if (pvVar3 == pvVar1) {
                *(void **)(param_1 + 0x110) = pvVar1;
                operator_delete(pvVar1);
                goto LAB_00c83830;
              }
              pvVar3 = (void *)((long)pvVar3 + -8);
            } while (pvVar3 != (void *)0x0);
          }
        }
        else {
          pvVar3 = *(void **)(param_1 + 0x128);
          uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
          uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3d) - ((long)pvVar1 - (long)pvVar3)) >>
                  3;
          if (uVar5 <= uVar4) {
            uVar4 = uVar5;
          }
          if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
            uVar4 = uVar4 & 0x1ffffffffffffffe;
            pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
            do {
              uVar4 = uVar4 - 2;
            } while (uVar4 != 0);
          }
          do {
            if (pvVar3 == pvVar1) {
              *(void **)(param_1 + 0x128) = pvVar1;
              operator_delete(pvVar1);
              goto LAB_00c837b0;
            }
            pvVar3 = (void *)((long)pvVar3 + -8);
          } while (pvVar3 != (void *)0x0);
        }
      }
      else {
        pvVar3 = *(void **)(param_1 + 0x140);
        uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
        uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3d) - ((long)pvVar1 - (long)pvVar3)) >> 3;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
          uVar4 = uVar4 & 0x1ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (pvVar3 == pvVar1) {
            *(void **)(param_1 + 0x140) = pvVar1;
            operator_delete(pvVar1);
            goto LAB_00c83730;
          }
          pvVar3 = (void *)((long)pvVar3 + -8);
        } while (pvVar3 != (void *)0x0);
      }
    }
    else {
      pvVar3 = *(void **)(param_1 + 0x188);
      uVar5 = (ulong)((long)pvVar3 + (-0x10 - ((long)pvVar3 << 0x3c))) >> 4;
      uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3c) - ((long)pvVar1 - (long)pvVar3)) >> 4;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x10);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar3 == pvVar1) {
          *(void **)(param_1 + 0x188) = pvVar1;
          operator_delete(pvVar1);
          goto LAB_00c835f0;
        }
        pvVar3 = (void *)((long)pvVar3 + -0x10);
      } while (pvVar3 != (void *)0x0);
    }
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x1a0);
    uVar5 = (ulong)((long)pvVar3 + (-0x10 - ((long)pvVar3 << 0x3c))) >> 4;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3c) - ((long)pvVar1 - (long)pvVar3)) >> 4;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
      uVar4 = uVar4 & 0xffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x10);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        *(void **)(param_1 + 0x1a0) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c83570;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x10);
    } while (pvVar3 != (void *)0x0);
  }
LAB_00c8389c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c8390c  FUN_00c8390c =====

undefined8 * FUN_00c8390c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00c83a00();
LAB_00c839fc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00c839fc;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c83a00  FUN_00c83a00 =====

void FUN_00c83a00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c83a18  FUN_00c83a18 =====

void FUN_00c83a18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (**(code **)(**(long **)param_1[1] + 0xc0))();
  puVar2 = (undefined4 *)*param_1;
  *puVar2 = (int)uVar1;
  *(char *)(puVar2 + 1) = (char)((ulong)uVar1 >> 0x20);
  return;
}


// ===== 00c83a60  FUN_00c83a60 =====

undefined8 * FUN_00c83a60(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00c83b54();
LAB_00c83b50:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00c83b50;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c83b54  FUN_00c83b54 =====

void FUN_00c83b54(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c83b6c  FUN_00c83b6c =====

void FUN_00c83b6c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c83b6c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[7];
      puVar2 = (undefined8 *)param_2[1];
      param_2[7] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c83c18  FUN_00c83c18 =====

void FUN_00c83c18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c83c18(param_1,*param_2);
      puVar1 = (undefined8 *)param_2[1];
      FUN_00c83c80(*param_1,param_2 + 4);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c83c80  FUN_00c83c80 =====

void FUN_00c83c80(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  pvVar1 = (void *)param_2[4];
  param_2[4] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0083267c(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_2[3];
  param_2[3] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0083267c(pvVar1);
    operator_delete(pvVar1);
  }
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_2);
  return;
}


// ===== 00c83d20  FUN_00c83d20 =====

void FUN_00c83d20(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00c7d870(*param_1,param_1 + 1,param_1 + 5);
  return;
}


// ===== 00c83d38  FUN_00c83d38 =====

void FUN_00c83d38(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  long local_28;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc83e10);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 0x28);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        local_28 = (long)pvVar4 + 0x10;
        FUN_00c83b6c(&local_28,*(undefined8 *)((long)pvVar4 + 0x18));
        operator_delete(pvVar4);
      }
      if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar3 + 0x20) + 8))();
      }
      if (*(long **)((long)pvVar3 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar3 + 0x18) + 8))();
      }
      if (*(long **)((long)pvVar3 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar3 + 0x10) + 8))();
      }
      operator_delete(pvVar3);
    }
  }
  return;
}


// ===== 00c83e10  FUN_00c83e10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c83e10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined1 uStack_1e1;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined7 local_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  long lStack_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long local_98;
  undefined1 *puStack_90;
  undefined1 uStack_81;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  
  plVar12 = (long *)*param_1;
  lVar9 = *plVar12;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  lStack_a8 = _UNK_00259d60;
  local_b0 = _DAT_00259d58;
  local_98 = _UNK_00259d70;
  lStack_a0 = _DAT_00259d68;
  lStack_e8 = _UNK_00259d20;
  local_f0 = (undefined1)_DAT_00259d18;
  uStack_ef = (undefined7)((ulong)_DAT_00259d18 >> 8);
  local_d8 = _UNK_00259d30;
  lStack_e0 = _DAT_00259d28;
  lStack_c8 = _UNK_00259d40;
  local_d0 = _DAT_00259d38;
  lStack_b8 = _UNK_00259d50;
  local_c0 = _DAT_00259d48;
  lStack_108 = _UNK_00259d00;
  local_110 = _DAT_00259cf8;
  uStack_f8 = (undefined1)_UNK_00259d10;
  uStack_f7 = (undefined7)((ulong)_UNK_00259d10 >> 8);
  uStack_100 = (undefined1)_DAT_00259d08;
  uStack_ff = (undefined7)((ulong)_DAT_00259d08 >> 8);
  lStack_128 = _UNK_00259ce0;
  local_130 = _DAT_00259cd8;
  lStack_118 = _UNK_00259cf0;
  local_120 = _DAT_00259ce8;
  (*(code *)plVar12[5])(&local_130,plVar12 + 2);
  lVar11 = *(long *)(lVar9 + 200);
  plVar10 = *(long **)(lVar9 + 0x48);
  if (lVar11 != 0) {
    FUN_00d0f740(1,lVar11);
  }
  lVar8 = local_c0;
  lVar7 = lStack_c8;
  lVar6 = local_d0;
  lVar5 = local_d8;
  lVar4 = lStack_e0;
  lVar3 = lStack_e8;
  lVar2 = local_120;
  lVar1 = lStack_128;
  lVar9 = local_130;
  lVar13 = plVar12[6];
  uStack_19f = CONCAT17(local_f0,uStack_f7);
  lStack_1b8 = local_110;
  local_1c0 = lStack_118;
  uStack_1a8 = uStack_100;
  lStack_1b0 = lStack_108;
  local_1a7 = uStack_ff;
  uStack_1a0 = uStack_f8;
  lStack_128 = 0;
  local_120 = 0;
  local_130 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  lStack_c8 = 0;
  local_c0 = 0;
  lStack_148 = lStack_a0;
  local_150 = lStack_a8;
  puStack_138 = puStack_90;
  lStack_140 = local_98;
  lStack_158 = local_b0;
  local_160 = lStack_b8;
  local_1e0 = lVar13;
  plVar12 = (long *)operator_new(0xb0);
  *plVar12 = lVar13;
  plVar12[2] = lVar1;
  plVar12[1] = lVar9;
  plVar12[3] = lVar2;
  plVar12[5] = local_110;
  plVar12[4] = lStack_118;
  plVar12[7] = CONCAT71(uStack_ff,uStack_100);
  plVar12[6] = lStack_108;
  plVar12[0xc] = lVar5;
  *(ulong *)((long)plVar12 + 0x41) = CONCAT17(local_f0,uStack_f7);
  *(ulong *)((long)plVar12 + 0x39) = CONCAT17(uStack_f8,uStack_ff);
  plVar12[0xf] = lVar8;
  local_1d8 = 0;
  uStack_1d0 = 0;
  plVar12[0xb] = lVar4;
  plVar12[10] = lVar3;
  plVar12[0xe] = lVar7;
  plVar12[0xd] = lVar6;
  plVar12[0x11] = local_b0;
  plVar12[0x10] = lStack_b8;
  plVar12[0x13] = lStack_a0;
  plVar12[0x12] = lStack_a8;
  plVar12[0x15] = (long)puStack_90;
  plVar12[0x14] = local_98;
  local_1c8 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_80[0] = (long *)operator_new(0x30);
  *local_80[0] = lVar11;
  local_80[0][4] = (long)FUN_00c84678;
  local_80[0][5] = (long)FUN_00c84238;
  local_80[0][2] = (long)plVar12;
  local_70 = FUN_005db390;
  pcStack_68 = FUN_005db348;
  (**(code **)(*plVar10 + 8))(plVar10,local_80,&uStack_81,&uStack_1e1);
  (*local_70)(0,local_80,local_80);
  FUN_00c84088(&local_1d8);
  FUN_00c84088(&local_130);
  return;
}


// ===== 00c84014  FUN_00c84014 =====

void FUN_00c84014(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc84088);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      (**(code **)((long)pvVar2 + 0x20))(0,(long)pvVar2 + 0x10,(long)pvVar2 + 0x10);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00c84088  FUN_00c84088 =====

void FUN_00c84088(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 == (void *)0x0) {
LAB_00c84130:
    pvVar1 = (void *)param_1[9];
    if (pvVar1 == (void *)0x0) {
LAB_00c841d0:
      pvVar1 = (void *)*param_1;
      if (pvVar1 == (void *)0x0) {
        return;
      }
      pvVar3 = (void *)param_1[1];
      pvVar2 = pvVar1;
      if (pvVar1 != pvVar3) {
        do {
          pvVar3 = (void *)((long)pvVar3 + -0xb0);
          if (pvVar3 == (void *)0x0) goto LAB_00c841ac;
          FUN_00c817cc(pvVar3);
        } while (pvVar3 != pvVar1);
        pvVar2 = (void *)*param_1;
      }
      param_1[1] = pvVar1;
      operator_delete(pvVar2);
      return;
    }
    pvVar3 = (void *)param_1[10];
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3) * 0x1555555555555555) >> 3;
    uVar5 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x18);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        param_1[10] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c841d0;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = (void *)param_1[0xd];
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3) * 0x555555555555555) >> 4;
    uVar5 = (long)pvVar3 * -0x555555555555555 - 0x10U >> 4;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
      uVar4 = uVar4 & 0xffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x30);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        param_1[0xd] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c84130;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x30);
    } while (pvVar3 != (void *)0x0);
  }
LAB_00c841ac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c84238  FUN_00c84238 =====

/* WARNING: Removing unreachable block (ram,0x00c84628) */

void FUN_00c84238(long *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long **pplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long local_260;
  long lStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined7 local_22f;
  undefined1 uStack_228;
  undefined8 uStack_227;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b1;
  long **local_1b0;
  long *plStack_1a8;
  long local_1a0;
  long lStack_198;
  undefined8 local_190;
  long *local_188;
  long local_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined8 uStack_147;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  undefined1 uStack_91;
  long *local_90 [2];
  code *local_80;
  code *pcStack_78;
  
  puVar4 = (undefined8 *)*param_1;
  lStack_258 = puVar4[2];
  local_260 = puVar4[1];
  local_250 = puVar4[3];
  uStack_240 = puVar4[5];
  local_248 = puVar4[4];
  uStack_238 = puVar4[6];
  uStack_227 = *(undefined8 *)((long)puVar4 + 0x41);
  local_208 = puVar4[0xc];
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[1] = 0;
  uStack_228 = (undefined1)((ulong)*(undefined8 *)((long)puVar4 + 0x39) >> 0x38);
  uStack_210 = puVar4[0xb];
  local_218 = puVar4[10];
  uStack_230 = (undefined1)puVar4[7];
  local_22f = (undefined7)((ulong)puVar4[7] >> 8);
  uStack_1f8 = puVar4[0xe];
  local_200 = puVar4[0xd];
  local_1f0 = puVar4[0xf];
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  uStack_1d0 = puVar4[0x13];
  local_1d8 = puVar4[0x12];
  uStack_1c0 = puVar4[0x15];
  local_1c8 = puVar4[0x14];
  uStack_1e0 = puVar4[0x11];
  local_1e8 = puVar4[0x10];
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  pplVar9 = (long **)*puVar4;
  local_1b0 = (long **)CONCAT71(local_1b0._1_7_,0xaa);
  FUN_007e0b10(&local_1b0);
  (*(code *)(*pplVar9)[2])(pplVar9,*(undefined8 *)(pplVar9[0x1c][1] + 8),&local_260,&local_1e8);
  FUN_007e0b18(&local_1b0);
  uVar10 = *(undefined8 *)(pplVar9[0x1c][1] + 8);
  local_a8 = 0;
  local_a0 = 0;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &local_a8;
  (**(code **)(*pplVar9[1] + 0x230))(&local_d0);
  if ((char)local_b8 == '\x01') {
    local_1b0 = &local_b0;
    FUN_00c846e0(&local_1b0,&local_d0,&local_d0);
  }
  lVar13 = lStack_258;
  if (local_260 != lStack_258) {
    lVar7 = local_260 + 0x30;
    do {
      if (*(char *)(lVar7 + 0x18) == '\x01') {
        local_1b0 = &local_b0;
        FUN_00b07310(&local_1b0,lVar7,lVar7);
      }
      lVar1 = lVar7 + 0x80;
      lVar7 = lVar7 + 0xb0;
    } while (lVar1 != lVar13);
  }
  plVar8 = pplVar9[0x1b];
  plVar5 = pplVar9[0xb];
  if (plVar8 != (long *)0x0) {
    FUN_00d0f740(1,plVar8);
  }
  plStack_1a8 = local_b0;
  local_1a0 = local_a8;
  lStack_198 = local_a0;
  plVar2 = &local_1a0;
  if (local_a0 != 0) {
    *(long **)(local_a8 + 0x10) = &local_1a0;
    local_a8 = 0;
    local_a0 = 0;
    plVar2 = plStack_1a8;
    local_b0 = &local_a8;
  }
  plStack_1a8 = plVar2;
  local_188 = pplVar9[0x19];
  local_1b0 = pplVar9;
  local_190 = uVar10;
  if (local_188 != (long *)0x0) {
    FUN_00d0f740(1);
  }
  uVar12 = local_1f0;
  uVar17 = uStack_1f8;
  uVar16 = local_200;
  uVar11 = local_208;
  uVar15 = uStack_210;
  uVar14 = local_218;
  uVar10 = local_250;
  lVar7 = lStack_258;
  lVar13 = local_260;
  lStack_178 = lStack_258;
  local_180 = local_260;
  uStack_150 = uStack_230;
  local_158 = uStack_238;
  uStack_160 = uStack_240;
  local_168 = local_248;
  uStack_130 = uStack_210;
  local_138 = local_218;
  uStack_147 = uStack_227;
  uStack_14f = local_22f;
  uStack_148 = uStack_228;
  lStack_258 = 0;
  local_250 = 0;
  uStack_118 = uStack_1f8;
  local_120 = local_200;
  local_260 = 0;
  local_170 = uVar10;
  local_128 = local_208;
  local_218 = 0;
  uStack_210 = 0;
  local_110 = local_1f0;
  local_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_e0 = uStack_1c0;
  local_e8 = local_1c8;
  uStack_f0 = uStack_1d0;
  local_f8 = local_1d8;
  uStack_100 = uStack_1e0;
  local_108 = local_1e8;
  puVar4 = (undefined8 *)operator_new(0xd8);
  plVar2 = local_188;
  puVar4[1] = plStack_1a8;
  *puVar4 = local_1b0;
  plVar6 = puVar4 + 2;
  *plVar6 = local_1a0;
  puVar4[3] = lStack_198;
  if (lStack_198 == 0) {
    puVar4[1] = plVar6;
  }
  else {
    *(long **)(local_1a0 + 0x10) = plVar6;
    local_1a0 = 0;
    lStack_198 = 0;
    uVar10 = local_170;
    uVar11 = local_128;
    uVar12 = local_110;
    lVar13 = local_180;
    lVar7 = lStack_178;
    uVar14 = local_138;
    uVar15 = uStack_130;
    uVar16 = local_120;
    uVar17 = uStack_118;
    plStack_1a8 = &local_1a0;
  }
  puVar4[7] = lVar7;
  puVar4[6] = lVar13;
  puVar4[0x10] = uVar15;
  puVar4[0xf] = uVar14;
  puVar4[10] = uStack_160;
  puVar4[9] = local_168;
  local_188 = (long *)0x0;
  puVar4[0xc] = CONCAT71(uStack_14f,uStack_150);
  puVar4[0xb] = local_158;
  puVar4[4] = local_190;
  puVar4[5] = plVar2;
  *(undefined8 *)((long)puVar4 + 0x69) = uStack_147;
  *(ulong *)((long)puVar4 + 0x61) = CONCAT17(uStack_148,uStack_14f);
  puVar4[8] = uVar10;
  puVar4[0x1a] = uStack_e0;
  puVar4[0x19] = local_e8;
  lStack_178 = 0;
  local_170 = 0;
  local_180 = 0;
  puVar4[0x11] = uVar11;
  local_138 = 0;
  uStack_130 = 0;
  puVar4[0x13] = uVar17;
  puVar4[0x12] = uVar16;
  puVar4[0x14] = uVar12;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  puVar4[0x18] = uStack_f0;
  puVar4[0x17] = local_f8;
  puVar4[0x16] = uStack_100;
  puVar4[0x15] = local_108;
  local_90[0] = (long *)operator_new(0x30);
  *local_90[0] = (long)plVar8;
  local_90[0][4] = (long)FUN_00c8497c;
  local_90[0][5] = (long)FUN_00c84840;
  local_90[0][2] = (long)puVar4;
  local_80 = FUN_005db390;
  pcStack_78 = FUN_005db348;
  (**(code **)(*plVar5 + 8))(plVar5,local_90,&uStack_91,&uStack_1b1);
  (*local_80)(0,local_90,local_90);
  FUN_00c84088(&local_180);
  plVar5 = local_188;
  if ((local_188 != (long *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_188), iVar3 == 1)) {
    operator_delete(plVar5);
  }
  local_90[0] = (long *)((ulong)&local_1b0 | 8);
  FUN_00b16af4(local_90,local_1a0);
  local_1b0 = &local_b0;
  FUN_00b16af4(&local_1b0,local_a8);
  FUN_00c84088(&local_260);
  return;
}


// ===== 00c84678  FUN_00c84678 =====

void FUN_00c84678(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc846e0);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00c84088((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00c846e0  FUN_00c846e0 =====

undefined1  [16] FUN_00c846e0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_00c84804;
        }
        if (uVar2 <= uVar1) goto LAB_00c84728;
LAB_00c84778:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00c84794;
      }
      if (iVar3 < 0) goto LAB_00c84778;
LAB_00c84728:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00c84794:
  plVar4 = (long *)operator_new(0x38);
  if (plVar4 != (long *)0x0) {
    *plVar4 = 0;
    if (plVar4 + 4 != (long *)0x0) {
      lVar12 = param_3[1];
      lVar11 = *param_3;
      lVar7 = param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      plVar4[5] = lVar12;
      plVar4[4] = lVar11;
      plVar4[6] = lVar7;
      *param_3 = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00c84804:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c84840  FUN_00c84840 =====

void FUN_00c84840(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  long *plVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  long local_40;
  long local_38;
  void *local_30;
  long **local_28;
  
  param_1 = (undefined8 *)*param_1;
  local_48 = &local_40;
  uVar1 = *param_1;
  plVar3 = (long *)param_1[1];
  uVar2 = param_1[4];
  local_30 = (void *)param_1[5];
  param_1[5] = 0;
  plVar6 = param_1 + 2;
  local_40 = *plVar6;
  local_38 = param_1[3];
  if (local_38 != 0) {
    *(long **)(local_40 + 0x10) = local_48;
    param_1[1] = plVar6;
    *plVar6 = 0;
    param_1[3] = 0;
    local_48 = plVar3;
  }
  uStack_e8 = param_1[7];
  local_f0 = param_1[6];
  uStack_b7 = *(undefined8 *)((long)param_1 + 0x69);
  local_e0 = param_1[8];
  param_1[7] = 0;
  param_1[8] = 0;
  uStack_d0 = param_1[10];
  local_d8 = param_1[9];
  param_1[6] = 0;
  uStack_c8 = param_1[0xb];
  uStack_b8 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
  uStack_c0 = (undefined1)param_1[0xc];
  local_bf = (undefined7)((ulong)param_1[0xc] >> 8);
  uStack_a0 = param_1[0x10];
  local_a8 = param_1[0xf];
  local_98 = param_1[0x11];
  uStack_88 = param_1[0x13];
  local_90 = param_1[0x12];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uStack_70 = param_1[0x16];
  local_78 = param_1[0x15];
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uStack_50 = param_1[0x1a];
  local_58 = param_1[0x19];
  local_80 = param_1[0x14];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uStack_60 = param_1[0x18];
  local_68 = param_1[0x17];
  FUN_00c7b518(uVar1,&local_30,uVar2,&local_48,&local_f0);
  FUN_00c84088(&local_f0);
  local_28 = &local_48;
  FUN_00b16af4(&local_28,local_40);
  pvVar4 = local_30;
  if ((local_30 != (void *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_30), iVar5 == 1)) {
    operator_delete(pvVar4);
  }
  return;
}


// ===== 00c8497c  FUN_00c8497c =====

void FUN_00c8497c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  long local_28;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc84a20);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      FUN_00c84088((long)pvVar3 + 0x30);
      pvVar4 = *(void **)((long)pvVar3 + 0x28);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      local_28 = (long)pvVar3 + 8;
      FUN_00b16af4(&local_28,*(undefined8 *)((long)pvVar3 + 0x10));
      operator_delete(pvVar3);
    }
  }
  return;
}


// ===== 00c84a20  FUN_00c84a20 =====

void FUN_00c84a20(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long local_8;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)(lVar1 + 0x80);
  local_8 = lVar1 + 0x78;
  FUN_00c83c18(&local_8,*puVar2);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 **)(lVar1 + 0x78) = puVar2;
  return;
}


// ===== 00c84a60  FUN_00c84a60 =====

void FUN_00c84a60(undefined8 *param_1)

{
  FUN_007ebdcc(*param_1);
  return;
}


// ===== 00c84a6c  FUN_00c84a6c =====

void FUN_00c84a6c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    uVar3 = *param_2;
    *param_2 = 0;
    *param_3 = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc84ae8);
    (*pcVar1)();
  }
  pvVar4 = (void *)*param_2;
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00c84ae8  FUN_00c84ae8 =====

void FUN_00c84ae8(undefined8 *param_1)

{
  FUN_007ebdcc(*param_1);
  return;
}


// ===== 00c84af4  FUN_00c84af4 =====

void FUN_00c84af4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    uVar3 = *param_2;
    *param_2 = 0;
    *param_3 = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc84b70);
    (*pcVar1)();
  }
  pvVar4 = (void *)*param_2;
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00c84b70  FUN_00c84b70 =====

void FUN_00c84b70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 *puVar5;
  int iVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long **local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [48];
  void *local_d0;
  void *local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  long local_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined1 *local_58;
  undefined1 *local_38;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c87b10(&local_58,param_1[1]);
  uVar2 = param_1[1];
  plVar7 = (long *)param_1[2];
  plVar10 = param_1 + 3;
  local_68 = *plVar10;
  local_60 = param_1[4];
  local_70 = &local_68;
  if (local_60 != 0) {
    *(long **)(local_68 + 0x10) = local_70;
    param_1[2] = plVar10;
    *plVar10 = 0;
    param_1[4] = 0;
    local_70 = plVar7;
  }
  plVar7 = param_1 + 6;
  local_80 = *plVar7;
  plVar10 = (long *)param_1[5];
  local_78 = param_1[7];
  local_88 = &local_80;
  if (local_78 != 0) {
    *(long **)(local_80 + 0x10) = local_88;
    param_1[5] = plVar7;
    *plVar7 = 0;
    param_1[7] = 0;
    local_88 = plVar10;
  }
  pvVar3 = (void *)param_1[8];
  pvVar4 = (void *)param_1[9];
  local_90 = param_1[10];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_a0 = pvVar3;
  local_98 = pvVar4;
  FUN_00c7bd94(auStack_100,param_1 + 0xb);
  uStack_128 = param_1[0x18];
  local_130 = param_1[0x17];
  uStack_118 = param_1[0x1a];
  uStack_120 = param_1[0x19];
  uStack_108 = param_1[0x1c];
  local_110 = param_1[0x1b];
  FUN_00c7c170(uVar1,uVar2,&local_70,&local_88,&local_a0,auStack_100,&local_130,local_58);
  if (local_b8 == (void *)0x0) {
LAB_00c84d04:
    if (local_d0 == (void *)0x0) {
LAB_00c84da4:
      if (pvVar3 != (void *)0x0) {
        while (pvVar3 != pvVar4) {
          pvVar4 = (void *)((long)pvVar4 + -0xb0);
          if (pvVar4 == (void *)0x0) goto LAB_00c84d80;
          FUN_00c817cc(pvVar4);
        }
        local_98 = pvVar3;
        operator_delete(pvVar3);
      }
      local_150 = &local_88;
      FUN_00c83c18(&local_150,local_80);
      local_150 = &local_70;
      FUN_00c079c8(&local_150,local_68);
      puVar5 = local_58;
      uStack_148 = param_1[0x1e];
      local_150 = (long **)param_1[0x1d];
      local_140 = param_1[0x1f];
      local_58 = (undefined1 *)0x0;
      puStack_138 = puVar5;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      FUN_00c7d370(uVar1,&puStack_138,&local_150);
      FUN_00c7c098(&local_150);
      if ((puVar5 != (undefined1 *)0x0) && (iVar6 = FUN_00d0f7a0(0xffffffff,puVar5), iVar6 == 1)) {
        local_38 = puVar5 + 0x10;
        FUN_00c83b6c(&local_38,*(undefined8 *)(puVar5 + 0x18));
        operator_delete(puVar5);
      }
      puVar5 = local_58;
      if ((local_58 != (undefined1 *)0x0) && (iVar6 = FUN_00d0f7a0(0xffffffff,local_58), iVar6 == 1)
         ) {
        local_38 = puVar5 + 0x10;
        FUN_00c83b6c(&local_38,*(undefined8 *)(puVar5 + 0x18));
        operator_delete(puVar5);
      }
      return;
    }
    uVar9 = (ulong)(((long)local_d0 - (long)local_c8) * 0x1555555555555555) >> 3;
    uVar11 = (long)local_c8 * -0x1555555555555555 - 8U >> 3;
    if (uVar11 <= uVar9) {
      uVar9 = uVar11;
    }
    pvVar8 = local_c8;
    if ((1 < uVar9) && ((((int)local_d0 - (int)local_c8 | -(int)local_c8) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar8 = (void *)((long)local_c8 + uVar9 * -0x18);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar8 == local_d0) {
        local_c8 = local_d0;
        operator_delete(local_d0);
        goto LAB_00c84da4;
      }
      pvVar8 = (void *)((long)pvVar8 + -0x18);
    } while (pvVar8 != (void *)0x0);
  }
  else {
    uVar9 = (ulong)(((long)local_b8 - (long)local_b0) * 0x555555555555555) >> 4;
    uVar11 = (long)local_b0 * -0x555555555555555 - 0x10U >> 4;
    if (uVar11 <= uVar9) {
      uVar9 = uVar11;
    }
    pvVar8 = local_b0;
    if ((1 < uVar9) && ((((int)local_b8 - (int)local_b0 | -(int)local_b0) & 0xfU) == 0)) {
      uVar9 = uVar9 & 0xffffffffffffffe;
      pvVar8 = (void *)((long)local_b0 + uVar9 * -0x30);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar8 == local_b8) {
        local_b0 = local_b8;
        operator_delete(local_b8);
        goto LAB_00c84d04;
      }
      pvVar8 = (void *)((long)pvVar8 + -0x30);
    } while (pvVar8 != (void *)0x0);
  }
LAB_00c84d80:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c84ecc  FUN_00c84ecc =====

void FUN_00c84ecc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc84f34);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00c7bec8(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00c84f34  FUN_00c84f34 =====

undefined1  [16] FUN_00c84f34(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  undefined8 *__s1;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar9 = (long *)*param_1;
  plVar10 = plVar9 + 1;
  plVar8 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar8 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar6 = plVar8;
        plVar8 = (long *)plVar6[4];
        uVar4 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar8 = plVar6 + 4;
          uVar4 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar4;
        if (uVar1 <= uVar4) {
          __n = uVar1;
        }
        iVar5 = memcmp(__s1,plVar8,__n);
        plVar10 = plVar6;
        if (iVar5 != 0) break;
        if (uVar1 == uVar4) {
          uVar7 = 0;
          goto LAB_00c8505c;
        }
        if (uVar4 <= uVar1) goto LAB_00c84f7c;
LAB_00c84fcc:
        plVar8 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00c84fe8;
      }
      if (iVar5 < 0) goto LAB_00c84fcc;
LAB_00c84f7c:
      plVar8 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar11 = plVar6 + 1;
  }
LAB_00c84fe8:
  plVar6 = (long *)operator_new(0x40);
  if (plVar6 != (long *)0x0) {
    *plVar6 = 0;
    if (plVar6 + 4 != (long *)0x0) {
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      lVar13 = param_3[1];
      lVar12 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      plVar6[6] = lVar2;
      plVar6[5] = lVar13;
      plVar6[4] = lVar12;
      plVar6[7] = lVar3;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)plVar10;
      *plVar11 = (long)plVar6;
      plVar8 = plVar6;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        plVar8 = (long *)*plVar11;
      }
      FUN_005d5b94(plVar9[1],plVar8);
      uVar7 = 1;
      plVar9[2] = plVar9[2] + 1;
LAB_00c8505c:
      auVar14._8_8_ = uVar7;
      auVar14._0_8_ = plVar6;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c85098  FUN_00c85098 =====

undefined1  [16] FUN_00c85098(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  undefined8 *__s1;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar9 = (long *)*param_1;
  plVar10 = plVar9 + 1;
  plVar8 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar8 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar6 = plVar8;
        plVar8 = (long *)plVar6[4];
        uVar4 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar8 = plVar6 + 4;
          uVar4 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar4;
        if (uVar1 <= uVar4) {
          __n = uVar1;
        }
        iVar5 = memcmp(__s1,plVar8,__n);
        plVar10 = plVar6;
        if (iVar5 != 0) break;
        if (uVar1 == uVar4) {
          uVar7 = 0;
          goto LAB_00c851c0;
        }
        if (uVar4 <= uVar1) goto LAB_00c850e0;
LAB_00c85130:
        plVar8 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00c8514c;
      }
      if (iVar5 < 0) goto LAB_00c85130;
LAB_00c850e0:
      plVar8 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar11 = plVar6 + 1;
  }
LAB_00c8514c:
  plVar6 = (long *)operator_new(0x40);
  if (plVar6 != (long *)0x0) {
    *plVar6 = 0;
    if (plVar6 + 4 != (long *)0x0) {
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      lVar13 = param_3[1];
      lVar12 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      plVar6[6] = lVar2;
      plVar6[5] = lVar13;
      plVar6[4] = lVar12;
      plVar6[7] = lVar3;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)plVar10;
      *plVar11 = (long)plVar6;
      plVar8 = plVar6;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        plVar8 = (long *)*plVar11;
      }
      FUN_005d5b94(plVar9[1],plVar8);
      uVar7 = 1;
      plVar9[2] = plVar9[2] + 1;
LAB_00c851c0:
      auVar14._8_8_ = uVar7;
      auVar14._0_8_ = plVar6;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c851fc  FUN_00c851fc =====

void FUN_00c851fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c851fc(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c85290  FUN_00c85290 =====

undefined1  [16] FUN_00c85290(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  undefined8 *__s1;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar9 = (long *)*param_1;
  plVar10 = plVar9 + 1;
  plVar8 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar8 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar6 = plVar8;
        plVar8 = (long *)plVar6[4];
        uVar4 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar8 = plVar6 + 4;
          uVar4 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar4;
        if (uVar1 <= uVar4) {
          __n = uVar1;
        }
        iVar5 = memcmp(__s1,plVar8,__n);
        plVar10 = plVar6;
        if (iVar5 != 0) break;
        if (uVar1 == uVar4) {
          uVar7 = 0;
          goto LAB_00c853b8;
        }
        if (uVar4 <= uVar1) goto LAB_00c852d8;
LAB_00c85328:
        plVar8 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00c85344;
      }
      if (iVar5 < 0) goto LAB_00c85328;
LAB_00c852d8:
      plVar8 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar11 = plVar6 + 1;
  }
LAB_00c85344:
  plVar6 = (long *)operator_new(0x40);
  if (plVar6 != (long *)0x0) {
    *plVar6 = 0;
    if (plVar6 + 4 != (long *)0x0) {
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      lVar13 = param_3[1];
      lVar12 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      plVar6[6] = lVar2;
      plVar6[5] = lVar13;
      plVar6[4] = lVar12;
      plVar6[7] = lVar3;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)plVar10;
      *plVar11 = (long)plVar6;
      plVar8 = plVar6;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        plVar8 = (long *)*plVar11;
      }
      FUN_005d5b94(plVar9[1],plVar8);
      uVar7 = 1;
      plVar9[2] = plVar9[2] + 1;
LAB_00c853b8:
      auVar14._8_8_ = uVar7;
      auVar14._0_8_ = plVar6;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c853f4  FUN_00c853f4 =====

undefined1  [16] FUN_00c853f4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  undefined8 *__s1;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar9 = (long *)*param_1;
  plVar10 = plVar9 + 1;
  plVar8 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar8 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar6 = plVar8;
        plVar8 = (long *)plVar6[4];
        uVar4 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar8 = plVar6 + 4;
          uVar4 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar4;
        if (uVar1 <= uVar4) {
          __n = uVar1;
        }
        iVar5 = memcmp(__s1,plVar8,__n);
        plVar10 = plVar6;
        if (iVar5 != 0) break;
        if (uVar1 == uVar4) {
          uVar7 = 0;
          goto LAB_00c8551c;
        }
        if (uVar4 <= uVar1) goto LAB_00c8543c;
LAB_00c8548c:
        plVar8 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00c854a8;
      }
      if (iVar5 < 0) goto LAB_00c8548c;
LAB_00c8543c:
      plVar8 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar11 = plVar6 + 1;
  }
LAB_00c854a8:
  plVar6 = (long *)operator_new(0x40);
  if (plVar6 != (long *)0x0) {
    *plVar6 = 0;
    if (plVar6 + 4 != (long *)0x0) {
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      lVar13 = param_3[1];
      lVar12 = *param_3;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      plVar6[6] = lVar2;
      plVar6[5] = lVar13;
      plVar6[4] = lVar12;
      plVar6[7] = lVar3;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)plVar10;
      *plVar11 = (long)plVar6;
      plVar8 = plVar6;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        plVar8 = (long *)*plVar11;
      }
      FUN_005d5b94(plVar9[1],plVar8);
      uVar7 = 1;
      plVar9[2] = plVar9[2] + 1;
LAB_00c8551c:
      auVar14._8_8_ = uVar7;
      auVar14._0_8_ = plVar6;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c85558  FUN_00c85558 =====

undefined1  [16] FUN_00c85558(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_00c8568c;
        }
        if (uVar2 <= uVar1) goto LAB_00c855a0;
LAB_00c855f0:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00c8560c;
      }
      if (iVar3 < 0) goto LAB_00c855f0;
LAB_00c855a0:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00c8560c:
  plVar4 = (long *)operator_new(0x48);
  if (plVar4 != (long *)0x0) {
    *plVar4 = 0;
    if (plVar4 + 4 != (long *)0x0) {
      lVar11 = *param_3;
      lVar7 = param_3[2];
      *param_3 = 0;
      plVar4[5] = param_3[1];
      plVar4[4] = lVar11;
      lVar12 = param_3[4];
      lVar11 = param_3[3];
      plVar4[6] = lVar7;
      param_3[2] = 0;
      param_3[1] = 0;
      param_3[4] = 0;
      param_3[3] = 0;
      plVar4[8] = lVar12;
      plVar4[7] = lVar11;
      plVar4[1] = 0;
      *plVar4 = 0;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00c8568c:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c856c8  FUN_00c856c8 =====

void FUN_00c856c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c856c8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_0088b4d8(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c85744  FUN_00c85744 =====

void FUN_00c85744(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c85744(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_0088b3e0(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c857c0  FUN_00c857c0 =====

void FUN_00c857c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c857c0(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_0088b660(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c8583c  FUN_00c8583c =====

void FUN_00c8583c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c8583c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_0088b5a8(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c858b8  FUN_00c858b8 =====

undefined1  [16] FUN_00c858b8(undefined8 *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = (long *)*param_1;
  plVar2 = plVar6 + 1;
  plVar7 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar5 = (long *)*plVar2;
    do {
      while (plVar1 = plVar5, plVar2 = plVar1, *param_2 < (ulong)plVar1[4]) {
        plVar5 = (long *)*plVar1;
        plVar7 = plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_00c85924;
      }
      if (*param_2 <= (ulong)plVar1[4]) {
        uVar3 = 0;
        goto LAB_00c85a0c;
      }
      plVar5 = (long *)plVar1[1];
    } while ((long *)plVar1[1] != (long *)0x0);
    plVar7 = plVar1 + 1;
  }
LAB_00c85924:
  plVar1 = (long *)operator_new(0x58);
  if ((plVar1 == (long *)0x0) || (*plVar1 = 0, plVar1 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar4 = *param_3;
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[4] = lVar4;
  plVar1[5] = 0;
  FUN_00c85a3c();
  lVar4 = param_3[6];
  plVar8 = plVar1 + 9;
  *plVar8 = 0;
  plVar5 = plVar1 + 8;
  *plVar5 = (long)plVar8;
  plVar1[10] = 0;
  if (lVar4 != 0) {
    lVar4 = FUN_00c05714(plVar5,param_3[5],plVar5);
    *plVar8 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar8;
    plVar5 = (long *)*plVar8;
    do {
      plVar8 = plVar5;
      plVar5 = (long *)*plVar8;
    } while (plVar5 != (long *)0x0);
    lVar4 = param_3[6];
    plVar1[8] = (long)plVar8;
    plVar1[10] = lVar4;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = (long)plVar2;
  *plVar7 = (long)plVar1;
  plVar2 = plVar1;
  if (*(long *)*plVar6 != 0) {
    *plVar6 = *(long *)*plVar6;
    plVar2 = (long *)*plVar7;
  }
  FUN_005d5b94(plVar6[1],plVar2);
  uVar3 = 1;
  plVar6[2] = plVar6[2] + 1;
LAB_00c85a0c:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = plVar1;
  return auVar9;
}


// ===== 00c85a3c  FUN_00c85a3c =====

undefined1  [16] FUN_00c85a3c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  if (param_4 != 0) {
    if (0xa3d70a3d70a3d7 < param_4) {
      auVar10 = FUN_00b63558();
      plVar7 = (long *)*auVar10._0_8_;
      plVar5 = plVar7 + 1;
      plVar8 = plVar5;
      if ((long *)*plVar5 != (long *)0x0) {
        plVar1 = (long *)*plVar5;
        do {
          while (plVar3 = plVar1, plVar5 = plVar3, *auVar10._8_8_ < (ulong)plVar3[4]) {
            plVar1 = (long *)*plVar3;
            plVar8 = plVar3;
            if ((long *)*plVar3 == (long *)0x0) goto LAB_00c85b8c;
          }
          if (*auVar10._8_8_ <= (ulong)plVar3[4]) {
            uVar6 = 0;
            goto LAB_00c85bf4;
          }
          plVar1 = (long *)plVar3[1];
        } while ((long *)plVar3[1] != (long *)0x0);
        plVar8 = plVar3 + 1;
      }
LAB_00c85b8c:
      plVar3 = (long *)operator_new(0x60);
      if (plVar3 != (long *)0x0) {
        *plVar3 = 0;
        if (plVar3 + 4 != (long *)0x0) {
          FUN_00c85c24(plVar3 + 4,param_3);
          *plVar3 = 0;
          plVar3[1] = 0;
          plVar3[2] = (long)plVar5;
          *plVar8 = (long)plVar3;
          plVar5 = plVar3;
          if (*(long *)*plVar7 != 0) {
            *plVar7 = *(long *)*plVar7;
            plVar5 = (long *)*plVar8;
          }
          FUN_005d5b94(plVar7[1],plVar5);
          uVar6 = 1;
          plVar7[2] = plVar7[2] + 1;
LAB_00c85bf4:
          auVar11._8_8_ = uVar6;
          auVar11._0_8_ = plVar3;
          return auVar11;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar4 = param_2;
    pvVar2 = operator_new(param_4 * 400);
    auVar10._8_8_ = lVar4;
    auVar10._0_8_ = pvVar2;
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (void *)((long)pvVar2 + param_4 * 400);
    if (param_2 != param_3) {
      do {
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00b63298(pvVar2,param_2);
        uVar9 = *(undefined8 *)(param_2 + 0xd0);
        uVar6 = *(undefined8 *)(param_2 + 0xe0);
        *(undefined8 *)((long)pvVar2 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
        *(undefined8 *)((long)pvVar2 + 0xd0) = uVar9;
        *(undefined8 *)((long)pvVar2 + 0xe0) = uVar6;
        FUN_00666a7c((long)pvVar2 + 0xe8,param_2 + 0xe8);
        auVar10 = FUN_0065f0a0((long)pvVar2 + 0x120,param_2 + 0x120);
        param_2 = param_2 + 400;
        pvVar2 = (void *)((long)pvVar2 + 400);
      } while (param_2 != param_3);
    }
    param_1[1] = pvVar2;
  }
  return auVar10;
}


// ===== 00c85b20  FUN_00c85b20 =====

undefined1  [16] FUN_00c85b20(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar5 = (long *)*param_1;
  plVar3 = plVar5 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_2 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c85b8c;
      }
      if (*param_2 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c85bf4;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00c85b8c:
  plVar2 = (long *)operator_new(0x60);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    if (plVar2 + 4 != (long *)0x0) {
      FUN_00c85c24(plVar2 + 4,param_3);
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar3;
      *plVar6 = (long)plVar2;
      plVar3 = plVar2;
      if (*(long *)*plVar5 != 0) {
        *plVar5 = *(long *)*plVar5;
        plVar3 = (long *)*plVar6;
      }
      FUN_005d5b94(plVar5[1],plVar3);
      uVar4 = 1;
      plVar5[2] = plVar5[2] + 1;
LAB_00c85bf4:
      auVar7._8_8_ = uVar4;
      auVar7._0_8_ = plVar2;
      return auVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c85c24  FUN_00c85c24 =====

void FUN_00c85c24(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar6 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = uVar6;
  lVar5 = param_2[1];
  lVar1 = param_2[2];
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    uVar9 = ((long)uVar2 >> 6) * -0x71c71c71c71c71c7;
    if (0x71c71c71c71c71 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00b63e54();
    }
    pvVar3 = operator_new(uVar2);
    param_1[1] = pvVar3;
    param_1[2] = pvVar3;
    param_1[3] = (long)pvVar3 + uVar2;
    FUN_00c05404(param_1 + 1,lVar5,lVar1,uVar9);
  }
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  puVar4 = param_1 + 4;
  *puVar4 = plVar8;
  param_1[6] = 0;
  if (param_2[6] != 0) {
    lVar5 = FUN_00c05714(puVar4,param_2[5],puVar4);
    *plVar8 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar8;
    plVar8 = (long *)*plVar8;
    do {
      plVar7 = plVar8;
      plVar8 = (long *)*plVar7;
    } while (plVar8 != (long *)0x0);
    param_1[4] = plVar7;
    param_1[6] = param_2[6];
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  return;
}


// ===== 00c85d34  FUN_00c85d34 =====

void FUN_00c85d34(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar6 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = uVar6;
  lVar5 = *param_3;
  lVar1 = param_3[1];
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    uVar9 = ((long)uVar2 >> 6) * -0x71c71c71c71c71c7;
    if (0x71c71c71c71c71 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00b63e54();
    }
    pvVar3 = operator_new(uVar2);
    param_1[1] = pvVar3;
    param_1[2] = pvVar3;
    param_1[3] = (long)pvVar3 + uVar2;
    FUN_00c05404(param_1 + 1,lVar5,lVar1,uVar9);
  }
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  puVar4 = param_1 + 4;
  *puVar4 = plVar8;
  param_1[6] = 0;
  if (param_3[5] != 0) {
    lVar5 = FUN_00c05714(puVar4,param_3[4],puVar4);
    *plVar8 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar8;
    plVar8 = (long *)*plVar8;
    do {
      plVar7 = plVar8;
      plVar8 = (long *)*plVar7;
    } while (plVar8 != (long *)0x0);
    param_1[4] = plVar7;
    param_1[6] = param_3[5];
  }
  *(int *)(param_1 + 7) = (int)param_3[6];
  return;
}


// ===== 00c85e44  FUN_00c85e44 =====

undefined1  [16] FUN_00c85e44(undefined8 *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar5 = (long *)*param_1;
  plVar3 = plVar5 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_2 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c85eb0;
      }
      if (*param_2 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c85f28;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00c85eb0:
  plVar2 = (long *)operator_new(0x70);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar2[4] = *param_3;
  FUN_00c85f58(plVar2 + 5,param_3 + 1);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*plVar5 != 0) {
    *plVar5 = *(long *)*plVar5;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(plVar5[1],plVar3);
  uVar4 = 1;
  plVar5[2] = plVar5[2] + 1;
LAB_00c85f28:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00c85f58  FUN_00c85f58 =====

long * FUN_00c85f58(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = *param_2;
  lVar1 = param_2[1];
  uVar2 = lVar1 - lVar7;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) goto LAB_00c86098;
    pvVar3 = operator_new(uVar2);
    *param_1 = pvVar3;
    param_1[1] = pvVar3;
    param_1[2] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) goto LAB_00c86084;
      FUN_00b7aabc(pvVar3,lVar7);
      lVar7 = lVar7 + 0x200;
      pvVar3 = (void *)((long)pvVar3 + 0x200);
    } while (lVar7 != lVar1);
    param_1[1] = pvVar3;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar7 = param_2[3];
  lVar1 = param_2[4];
  uVar2 = lVar1 - lVar7;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
LAB_00c86098:
      auVar9 = FUN_00b82d24();
      plVar8 = (long *)*auVar9._0_8_;
      plVar6 = plVar8 + 1;
      plVar4 = plVar6;
      if ((long *)*plVar6 != (long *)0x0) {
        plVar5 = (long *)*plVar6;
        do {
          while (plVar6 = plVar5, (ulong)plVar6[4] <= *auVar9._8_8_) {
            if (*auVar9._8_8_ <= (ulong)plVar6[4]) {
              return plVar6;
            }
            plVar5 = (long *)plVar6[1];
            if ((long *)plVar6[1] == (long *)0x0) {
              plVar4 = plVar6 + 1;
              goto LAB_00c86108;
            }
          }
          plVar5 = (long *)*plVar6;
          plVar4 = plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
LAB_00c86108:
      plVar5 = (long *)operator_new(0x58);
      if (plVar5 != (long *)0x0) {
        *plVar5 = 0;
        if (plVar5 + 4 != (long *)0x0) {
          FUN_00c861a0(plVar5 + 4,param_3);
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar5[2] = (long)plVar6;
          *plVar4 = (long)plVar5;
          plVar6 = plVar5;
          if (*(long *)*plVar8 != 0) {
            *plVar8 = *(long *)*plVar8;
            plVar6 = (long *)*plVar4;
          }
          FUN_005d5b94(plVar8[1],plVar6);
          plVar8[2] = plVar8[2] + 1;
          return plVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    pvVar3 = operator_new(uVar2);
    param_1[3] = pvVar3;
    param_1[4] = pvVar3;
    param_1[5] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
LAB_00c86084:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00b7aabc(pvVar3,lVar7);
      lVar7 = lVar7 + 0x200;
      pvVar3 = (void *)((long)pvVar3 + 0x200);
    } while (lVar7 != lVar1);
    param_1[4] = pvVar3;
  }
  plVar6 = param_1 + 7;
  *plVar6 = 0;
  plVar4 = param_1 + 6;
  *plVar4 = (long)plVar6;
  param_1[8] = 0;
  if (param_2[8] != 0) {
    plVar4 = (long *)FUN_00c05714(plVar4,param_2[7],plVar4);
    *plVar6 = (long)plVar4;
    plVar4[2] = (long)plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar8 = plVar6;
      plVar6 = (long *)*plVar8;
    } while (plVar6 != (long *)0x0);
    param_1[6] = plVar8;
    param_1[8] = param_2[8];
  }
  return plVar4;
}


// ===== 00c8609c  FUN_00c8609c =====

undefined1  [16] FUN_00c8609c(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar5 = (long *)*param_1;
  plVar3 = plVar5 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_2 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c86108;
      }
      if (*param_2 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c86170;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00c86108:
  plVar2 = (long *)operator_new(0x58);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    if (plVar2 + 4 != (long *)0x0) {
      FUN_00c861a0(plVar2 + 4,param_3);
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar3;
      *plVar6 = (long)plVar2;
      plVar3 = plVar2;
      if (*(long *)*plVar5 != 0) {
        *plVar5 = *(long *)*plVar5;
        plVar3 = (long *)*plVar6;
      }
      FUN_005d5b94(plVar5[1],plVar3);
      uVar4 = 1;
      plVar5[2] = plVar5[2] + 1;
LAB_00c86170:
      auVar7._8_8_ = uVar4;
      auVar7._0_8_ = plVar2;
      return auVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c861a0  FUN_00c861a0 =====

void FUN_00c861a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar6 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = uVar6;
  param_1[1] = 0;
  lVar5 = param_2[1];
  lVar1 = param_2[2];
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    if (0x50505050505050 < (ulong)(((long)uVar2 >> 4) * -0x505050505050505)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b852e8();
    }
    pvVar3 = operator_new(uVar2);
    param_1[1] = pvVar3;
    param_1[2] = pvVar3;
    param_1[3] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00b84f10(pvVar3,lVar5);
      lVar5 = lVar5 + 0x330;
      pvVar3 = (void *)((long)pvVar3 + 0x330);
    } while (lVar5 != lVar1);
    param_1[2] = pvVar3;
  }
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  puVar4 = param_1 + 4;
  *puVar4 = plVar8;
  param_1[6] = 0;
  if (param_2[6] != 0) {
    lVar5 = FUN_00c05714(puVar4,param_2[5],puVar4);
    *plVar8 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar8;
    plVar8 = (long *)*plVar8;
    do {
      plVar7 = plVar8;
      plVar8 = (long *)*plVar7;
    } while (plVar8 != (long *)0x0);
    param_1[4] = plVar7;
    param_1[6] = param_2[6];
  }
  return;
}


// ===== 00c862c0  FUN_00c862c0 =====

void FUN_00c862c0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar6 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = uVar6;
  param_1[1] = 0;
  lVar5 = *param_3;
  lVar1 = param_3[1];
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    if (0x50505050505050 < (ulong)(((long)uVar2 >> 4) * -0x505050505050505)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b852e8();
    }
    pvVar3 = operator_new(uVar2);
    param_1[1] = pvVar3;
    param_1[2] = pvVar3;
    param_1[3] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00b84f10(pvVar3,lVar5);
      lVar5 = lVar5 + 0x330;
      pvVar3 = (void *)((long)pvVar3 + 0x330);
    } while (lVar5 != lVar1);
    param_1[2] = pvVar3;
  }
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  puVar4 = param_1 + 4;
  *puVar4 = plVar8;
  param_1[6] = 0;
  if (param_3[5] != 0) {
    lVar5 = FUN_00c05714(puVar4,param_3[4],puVar4);
    *plVar8 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar8;
    plVar8 = (long *)*plVar8;
    do {
      plVar7 = plVar8;
      plVar8 = (long *)*plVar7;
    } while (plVar8 != (long *)0x0);
    param_1[4] = plVar7;
    param_1[6] = param_3[5];
  }
  return;
}


// ===== 00c863e0  FUN_00c863e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c863e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  void *pvVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long *local_1f8;
  long local_1f0;
  long local_1e8;
  long *local_1e0;
  long local_1d8;
  long local_1d0;
  long *local_1c8;
  long local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined8 local_148;
  ulong local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  void *local_90;
  void *local_88;
  void *local_80;
  undefined1 local_74 [20];
  
  plVar18 = (long *)*param_2;
  local_74[0] = 0xaa;
  lVar15 = *plVar18;
  FUN_007e0b10(local_74);
  uVar5 = _UNK_00259cf0;
  uVar4 = _DAT_00259ce8;
  uVar3 = _UNK_00259ce0;
  uVar12 = _DAT_00259cd8;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  plVar17 = (long *)plVar18[4];
  puVar19 = (undefined8 *)plVar18[1];
  plVar18[1] = 0;
  param_1[1] = uVar3;
  *param_1 = uVar12;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar5 = _UNK_00259d70;
  uVar4 = _DAT_00259d68;
  uVar3 = _UNK_00259d60;
  uVar12 = _DAT_00259d58;
  *param_1 = puVar19;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar12;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar4;
  uVar4 = _UNK_00259d30;
  uVar3 = _DAT_00259d28;
  uVar12 = _DAT_00259d18;
  param_1[9] = _UNK_00259d20;
  param_1[8] = uVar12;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar5 = _UNK_00259d50;
  uVar4 = _DAT_00259d48;
  uVar3 = _UNK_00259d40;
  uVar12 = _DAT_00259d38;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar12;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  uVar5 = _UNK_00259d10;
  uVar4 = _DAT_00259d08;
  uVar3 = _UNK_00259d00;
  uVar12 = _DAT_00259cf8;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[5] = uVar3;
  param_1[4] = uVar12;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  lVar21 = plVar18[3];
  puVar20 = (undefined8 *)plVar18[2];
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = lVar21;
  param_1[1] = puVar20;
  uVar3 = _UNK_001f3068;
  uVar12 = _DAT_001f3060;
  plVar18[2] = 0;
  plVar18[3] = 0;
  param_1[6] = uVar3;
  param_1[5] = uVar12;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  while (plVar17 != plVar18 + 5) {
    uVar8 = (**(code **)(*(long *)plVar17[4] + 0xd8))((long *)plVar17[4],plVar17 + 5);
    if (((uVar8 & 1) == 0) && (uVar8 = FUN_004022fc(), (uVar8 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x48d2,
                   "Failed to get voice send stats.");
    }
    plVar13 = (long *)plVar17[1];
    plVar14 = plVar17;
    if ((long *)plVar17[1] == (long *)0x0) {
      do {
        plVar17 = (long *)plVar14[2];
        bVar7 = plVar14 != (long *)*plVar17;
        plVar14 = plVar17;
      } while (bVar7);
    }
    else {
      do {
        plVar17 = plVar13;
        plVar13 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
    }
  }
  plVar17 = (long *)plVar18[7];
  while (plVar17 != plVar18 + 8) {
    uVar8 = (**(code **)(*(long *)plVar17[4] + 0xd8))((long *)plVar17[4],plVar17 + 5,0);
    if (((uVar8 & 1) == 0) && (uVar8 = FUN_004022fc(), (uVar8 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x4902,
                   "Failed to get voice receive stats.");
    }
    plVar13 = (long *)plVar17[1];
    plVar14 = plVar17;
    if ((long *)plVar17[1] == (long *)0x0) {
      do {
        plVar17 = (long *)plVar14[2];
        bVar7 = plVar14 != (long *)*plVar17;
        plVar14 = plVar17;
      } while (bVar7);
    }
    else {
      do {
        plVar17 = plVar13;
        plVar13 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
    }
  }
  plVar17 = (long *)plVar18[10];
  while (plVar17 != plVar18 + 0xb) {
    uVar8 = (**(code **)(*(long *)plVar17[4] + 0xd8))((long *)plVar17[4],plVar17 + 5);
    if (((uVar8 & 1) == 0) && (uVar8 = FUN_004022fc(), (uVar8 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x492a,
                   "Failed to get video send stats.");
    }
    plVar13 = (long *)plVar17[1];
    plVar14 = plVar17;
    if ((long *)plVar17[1] == (long *)0x0) {
      do {
        plVar17 = (long *)plVar14[2];
        bVar7 = plVar14 != (long *)*plVar17;
        plVar14 = plVar17;
      } while (bVar7);
    }
    else {
      do {
        plVar17 = plVar13;
        plVar13 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
    }
  }
  plVar17 = (long *)plVar18[0xd];
  while (plVar17 != plVar18 + 0xe) {
    uVar8 = (**(code **)(*(long *)plVar17[4] + 0xe0))((long *)plVar17[4],plVar17 + 5);
    if (((uVar8 & 1) == 0) && (uVar8 = FUN_004022fc(), (uVar8 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtc_stats_collector.cc",0x4952,
                   "Failed to get video receive stats.");
    }
    plVar13 = (long *)plVar17[1];
    plVar14 = plVar17;
    if ((long *)plVar17[1] == (long *)0x0) {
      do {
        plVar17 = (long *)plVar14[2];
        bVar7 = plVar14 != (long *)*plVar17;
        plVar14 = plVar17;
      } while (bVar7);
    }
    else {
      do {
        plVar17 = plVar13;
        plVar13 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
    }
  }
  bVar7 = false;
  if (puVar19 != puVar20) {
    do {
      if ((*(char *)((long)puVar19 + 0xa4) != '\x01') || (*(int *)(puVar19 + 0x14) != 4)) {
        local_90 = (void *)0x0;
        local_88 = (void *)0x0;
        local_80 = (void *)0x0;
        puVar2 = (undefined8 *)puVar19[0x11];
        for (puVar1 = (undefined8 *)puVar19[0x10]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
          (**(code **)(*(long *)*puVar1 + 0x50))(&local_140);
          pvVar16 = local_88;
          if (local_88 < local_80) {
            if (local_88 == (void *)0x0) goto LAB_00c86ed8;
            FUN_0066953c(local_88,&local_140);
            local_88 = (void *)((long)pvVar16 + 0xa8);
          }
          else {
            local_88 = (void *)FUN_00c870a8(&local_90,&local_140);
          }
          FUN_0066981c(&local_140);
        }
        puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
        local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
        local_180 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        local_160 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
        local_1b0 = 0xaaaaaaaaaaaaaa00;
        local_148 = 0xaaaaaaaaaaaaaa00;
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_128 = 0xaa;
        uStack_127 = 0xaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_118 = 0xaa;
        uStack_117 = 0xaaaaaaaaaaaaaa;
        local_120 = 0xaa;
        uStack_11f = 0xaaaaaaaaaaaaaa;
        puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
        local_110 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
        local_100 = &DAT_aaaaaaaaaaaaaaaa;
        local_e8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = 0xaaaaaaaaaaaaaa00;
        local_c8 = 0xaaaaaaaaaaaaaa00;
        if ((*(byte *)((long)puVar19 + 0xa9) & 1) != 0) {
          if (*(int *)(puVar19 + 1) == 1) {
            uVar8 = FUN_00c0f220(*puVar19);
            uVar9 = FUN_00c0f258(*puVar19);
            plVar13 = (long *)plVar18[0xb];
            plVar17 = plVar18 + 0xb;
            while (plVar14 = plVar17, plVar13 != (long *)0x0) {
              while (plVar10 = plVar13, plVar17 = plVar10, (ulong)plVar10[4] <= uVar8) {
                if (uVar8 <= (ulong)plVar10[4]) goto LAB_00c86a90;
                plVar13 = (long *)plVar10[1];
                if ((long *)plVar10[1] == (long *)0x0) {
                  plVar14 = plVar10 + 1;
                  goto LAB_00c86978;
                }
              }
              plVar13 = (long *)*plVar10;
            }
LAB_00c86978:
            plVar10 = (long *)operator_new(0x70);
            if ((plVar10 == (long *)0x0) || (*plVar10 = 0, plVar10 == (long *)0xffffffffffffffe0)) {
LAB_00c86ed8:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            plVar10[4] = uVar8;
            FUN_0088b3bc(plVar10 + 5);
            *plVar10 = 0;
            plVar10[1] = 0;
            plVar10[2] = (long)plVar17;
            *plVar14 = (long)plVar10;
            plVar17 = plVar10;
            if (*(long *)plVar18[10] != 0) {
              plVar18[10] = *(long *)plVar18[10];
              plVar17 = (long *)*plVar14;
            }
            FUN_005d5b94(plVar18[0xb],plVar17);
            plVar18[0xc] = plVar18[0xc] + 1;
LAB_00c86a90:
            plVar13 = (long *)plVar18[0xe];
            plVar17 = plVar18 + 0xe;
            while (plVar14 = plVar17, plVar13 != (long *)0x0) {
              while (plVar11 = plVar13, plVar17 = plVar11, (ulong)plVar11[4] <= uVar9) {
                if (uVar9 <= (ulong)plVar11[4]) goto LAB_00c86c50;
                plVar13 = (long *)plVar11[1];
                if ((long *)plVar11[1] == (long *)0x0) {
                  plVar14 = plVar11 + 1;
                  goto LAB_00c86ad8;
                }
              }
              plVar13 = (long *)*plVar11;
            }
LAB_00c86ad8:
            plVar11 = (long *)operator_new(0x58);
            if ((plVar11 == (long *)0x0) || (*plVar11 = 0, plVar11 == (long *)0xffffffffffffffe0))
            goto LAB_00c86ed8;
            plVar11[4] = uVar9;
            FUN_0088b58c(plVar11 + 5);
            *plVar11 = 0;
            plVar11[1] = 0;
            plVar11[2] = (long)plVar17;
            *plVar14 = (long)plVar11;
            plVar17 = plVar11;
            if (*(long *)plVar18[0xd] != 0) {
              plVar18[0xd] = *(long *)plVar18[0xd];
              plVar17 = (long *)*plVar14;
            }
            FUN_005d5b94(plVar18[0xe],plVar17);
            plVar18[0xf] = plVar18[0xf] + 1;
LAB_00c86c50:
            local_228 = plVar10[5];
            local_220 = plVar10[6];
            local_218 = plVar10[7];
            plVar10[5] = 0;
            plVar10[6] = 0;
            plVar10[7] = 0;
            local_210 = plVar10[8];
            local_208 = plVar10[9];
            local_200 = plVar10[10];
            plVar10[8] = 0;
            plVar10[9] = 0;
            plVar10[10] = 0;
            local_1f8 = (long *)plVar11[5];
            local_1f0 = plVar11[6];
            local_1e8 = plVar11[7];
            plVar11[5] = 0;
            plVar11[6] = 0;
            plVar11[7] = 0;
            plVar17 = (long *)plVar10[0xb];
            plVar13 = plVar10 + 0xc;
            local_1d8 = *plVar13;
            local_1d0 = plVar10[0xd];
            local_1e0 = &local_1d8;
            if (local_1d0 != 0) {
              *(long **)(local_1d8 + 0x10) = &local_1d8;
              plVar10[0xb] = (long)plVar13;
              *plVar13 = 0;
              plVar10[0xd] = 0;
              local_1e0 = plVar17;
            }
            plVar17 = (long *)plVar11[8];
            plVar13 = plVar11 + 9;
            local_1c0 = *plVar13;
            local_1b8 = plVar11[10];
            local_1c8 = &local_1c0;
            if (local_1b8 != 0) {
              *(long **)(local_1c0 + 0x10) = &local_1c0;
              plVar11[8] = (long)plVar13;
              *plVar13 = 0;
              plVar11[10] = 0;
              local_1c8 = plVar17;
            }
            if ((char)local_c8 == '\x01') {
              FUN_00c062f4();
            }
            else {
              FUN_00c873f0(&local_140,&local_228);
              local_c8 = CONCAT71(local_c8._1_7_,1);
            }
            FUN_0088b288(&local_228);
          }
          else if (*(int *)(puVar19 + 1) == 0) {
            uVar8 = FUN_00c0f23c(*puVar19);
            uVar9 = FUN_00c0f274(*puVar19);
            plVar17 = plVar18 + 5;
            plVar13 = (long *)plVar18[5];
            while (plVar14 = plVar17, plVar13 != (long *)0x0) {
              while (plVar17 = plVar13, (ulong)plVar17[4] <= uVar8) {
                if (uVar8 <= (ulong)plVar17[4]) goto LAB_00c869e0;
                plVar13 = (long *)plVar17[1];
                if ((long *)plVar17[1] == (long *)0x0) {
                  plVar14 = plVar17 + 1;
                  goto LAB_00c868ac;
                }
              }
              plVar13 = (long *)*plVar17;
            }
LAB_00c868ac:
            plVar13 = (long *)operator_new(0x58);
            if ((plVar13 == (long *)0x0) || (*plVar13 = 0, plVar13 == (long *)0xffffffffffffffe0))
            goto LAB_00c86ed8;
            plVar13[4] = uVar8;
            FUN_0088b4bc(plVar13 + 5);
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = (long)plVar17;
            *plVar14 = (long)plVar13;
            plVar17 = plVar13;
            if (*(long *)plVar18[4] != 0) {
              plVar18[4] = *(long *)plVar18[4];
              plVar17 = (long *)*plVar14;
            }
            FUN_005d5b94(plVar18[5],plVar17);
            plVar18[6] = plVar18[6] + 1;
            plVar17 = plVar13;
LAB_00c869e0:
            plVar13 = plVar18 + 8;
            plVar14 = (long *)plVar18[8];
            while (plVar10 = plVar13, plVar14 != (long *)0x0) {
              while (plVar13 = plVar14, (ulong)plVar13[4] <= uVar9) {
                if (uVar9 <= (ulong)plVar13[4]) goto LAB_00c86b40;
                plVar14 = (long *)plVar13[1];
                if ((long *)plVar13[1] == (long *)0x0) {
                  plVar10 = plVar13 + 1;
                  goto LAB_00c86a28;
                }
              }
              plVar14 = (long *)*plVar13;
            }
LAB_00c86a28:
            plVar14 = (long *)operator_new(0x60);
            if ((plVar14 == (long *)0x0) || (*plVar14 = 0, plVar14 == (long *)0xffffffffffffffe0))
            goto LAB_00c86ed8;
            plVar14[4] = uVar9;
            FUN_0088b640(plVar14 + 5);
            *plVar14 = 0;
            plVar14[1] = 0;
            plVar14[2] = (long)plVar13;
            *plVar10 = (long)plVar14;
            plVar13 = plVar14;
            if (*(long *)plVar18[7] != 0) {
              plVar18[7] = *(long *)plVar18[7];
              plVar13 = (long *)*plVar10;
            }
            FUN_005d5b94(plVar18[8],plVar13);
            plVar18[9] = plVar18[9] + 1;
            plVar13 = plVar14;
LAB_00c86b40:
            local_228 = plVar17[5];
            local_220 = plVar17[6];
            local_218 = plVar17[7];
            plVar17[5] = 0;
            plVar17[6] = 0;
            plVar17[7] = 0;
            local_210 = plVar13[5];
            local_208 = plVar13[6];
            local_200 = plVar13[7];
            plVar13[5] = 0;
            plVar13[6] = 0;
            plVar13[7] = 0;
            plVar14 = (long *)plVar17[8];
            plVar10 = plVar17 + 9;
            local_1f0 = *plVar10;
            local_1e8 = plVar17[10];
            local_1f8 = &local_1f0;
            if (local_1e8 != 0) {
              *(long **)(local_1f0 + 0x10) = &local_1f0;
              plVar17[8] = (long)plVar10;
              *plVar10 = 0;
              plVar17[10] = 0;
              local_1f8 = plVar14;
            }
            plVar17 = (long *)plVar13[8];
            plVar14 = plVar13 + 9;
            local_1d8 = *plVar14;
            local_1d0 = plVar13[10];
            local_1e0 = &local_1d8;
            if (local_1d0 != 0) {
              *(long **)(local_1d8 + 0x10) = &local_1d8;
              plVar13[8] = (long)plVar14;
              *plVar14 = 0;
              plVar13[10] = 0;
              local_1e0 = plVar17;
            }
            local_1c8 = (long *)CONCAT44(local_1c8._4_4_,(int)plVar13[0xb]);
            if ((char)local_148 == '\x01') {
              FUN_00c0426c();
            }
            else {
              FUN_00c8726c(&local_1b0,&local_228);
              local_148 = CONCAT71(local_148._1_7_,1);
            }
            FUN_0088b14c(&local_228);
          }
        }
        uVar12 = FUN_00c86f68(&local_1b0,&local_140,puVar19 + 10,puVar19 + 0xd,&local_90);
        pvVar16 = (void *)puVar19[0x13];
        puVar19[0x13] = uVar12;
        if (pvVar16 != (void *)0x0) {
          FUN_00c834d8(pvVar16);
          operator_delete(pvVar16);
        }
        if (*(int *)(puVar19 + 1) == 0) {
          bVar7 = *(char *)(puVar19 + 0x15) != '\0' || bVar7;
        }
        if ((char)local_c8 == '\x01') {
          FUN_0088b288(&local_140);
        }
        if ((char)local_148 == '\x01') {
          FUN_0088b14c(&local_1b0);
        }
        pvVar6 = local_90;
        pvVar16 = local_88;
        if (local_90 != (void *)0x0) {
          while (pvVar6 != pvVar16) {
            pvVar16 = (void *)((long)pvVar16 + -0xa8);
            if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_0066981c(pvVar16);
          }
          local_88 = pvVar6;
          operator_delete(local_90);
        }
      }
      puVar19 = puVar19 + 0x16;
    } while (puVar19 != puVar20);
  }
  (**(code **)(**(long **)(lVar15 + 8) + 0x248))(&local_140);
  param_1[4] = puStack_138;
  param_1[3] = local_140;
  param_1[6] = CONCAT71(uStack_127,uStack_128);
  param_1[5] = puStack_130;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_118,uStack_11f);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(local_120,uStack_127);
  param_1[10] = puStack_108;
  param_1[9] = local_110;
  param_1[0xb] = local_100;
  param_1[0xd] = puStack_f0;
  param_1[0xc] = puStack_f8;
  param_1[0xe] = local_e8;
  if (bVar7) {
    (**(code **)(**(long **)(lVar15 + 8) + 0x250))(&local_140);
  }
  else {
    local_140 = local_140 & 0xffffffffffffff00;
    uStack_118 = 0;
  }
  param_1[0x10] = puStack_138;
  param_1[0xf] = local_140;
  param_1[0x12] = CONCAT71(uStack_127,uStack_128);
  param_1[0x11] = puStack_130;
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_118,uStack_11f);
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(local_120,uStack_127);
  FUN_007e0b18(local_74);
  return;
}


// ===== 00c86f00  FUN_00c86f00 =====

void FUN_00c86f00(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc86f68);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00c819e8(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00c86f68  FUN_00c86f68 =====

void * FUN_00c86f68(long param_1,long param_2,long *param_3,long *param_4,long *param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  void *pvVar9;
  undefined1 local_140 [120];
  char local_c8;
  undefined1 local_c0 [104];
  char local_58;
  
  pvVar9 = operator_new(0x1b0);
  local_c0[0] = 0;
  local_58 = 0;
  bVar7 = *(char *)(param_1 + 0x68) == '\x01';
  if (bVar7) {
    FUN_00c8726c(local_c0,param_1);
  }
  local_140[0] = 0;
  local_c8 = 0;
  bVar8 = *(char *)(param_2 + 0x78) == '\x01';
  local_58 = bVar7;
  if (bVar8) {
    FUN_00c873f0(local_140,param_2);
  }
  lVar4 = param_3[1] - *param_3;
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = *param_3;
  }
  lVar5 = param_4[1] - *param_4;
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = *param_4;
  }
  lVar6 = param_5[1] - *param_5;
  lVar3 = 0;
  if (lVar6 != 0) {
    lVar3 = *param_5;
  }
  local_c8 = bVar8;
  FUN_00c96a5c(pvVar9,local_c0,local_140,lVar1,(lVar4 >> 2) * -0x5555555555555555,lVar2,lVar5 >> 5,
               param_8,lVar3,(lVar6 >> 3) * -0x30c30c30c30c30c3);
  if (local_c8 == '\x01') {
    FUN_0088b288(local_140);
  }
  if (local_58 == '\x01') {
    FUN_0088b14c(local_c0);
  }
  return pvVar9;
}


// ===== 00c870a8  FUN_00c870a8 =====

long FUN_00c870a8(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * -0x30c30c30c30c30c3 + 1;
  if (uVar3 < 0x186186186186187) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * -0x6186186186186186;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar4 * -0x30c30c30c30c30c3)) {
      uVar5 = 0x186186186186186;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x186186186186186 < uVar5) goto LAB_00c87250;
      pvVar2 = operator_new(uVar5 * 0xa8);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_00c87224:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_0066953c(lVar6,param_2);
    pvVar7 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
    pvVar8 = pvVar7;
    lVar9 = lVar4;
    if (pvVar1 != pvVar7) {
      do {
        if (lVar9 == 0) goto LAB_00c87224;
        FUN_0066953c(lVar9,pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0xa8);
        lVar9 = lVar9 + 0xa8;
      } while (pvVar8 != pvVar1);
      do {
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0066981c(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 0xa8);
      } while (pvVar7 != pvVar1);
      pvVar7 = (void *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 0xa8;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0xa8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    return lVar6 + 0xa8;
  }
  FUN_00c87254();
LAB_00c87250:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c87254  FUN_00c87254 =====

void FUN_00c87254(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c8726c  FUN_00c8726c =====

void FUN_00c8726c(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00c85a3c();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar5 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    uVar8 = ((long)uVar2 >> 6) * -0x71c71c71c71c71c7;
    if (0x71c71c71c71c71 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00b63e54();
    }
    pvVar3 = operator_new(uVar2);
    param_1[3] = pvVar3;
    param_1[4] = pvVar3;
    param_1[5] = (long)pvVar3 + uVar2;
    FUN_00c05404(param_1 + 3,lVar5,lVar1,uVar8);
  }
  plVar6 = param_1 + 7;
  *plVar6 = 0;
  puVar4 = param_1 + 6;
  *puVar4 = plVar6;
  param_1[8] = 0;
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar5 = FUN_00c05714(puVar4,*(undefined8 *)(param_2 + 0x38),puVar4);
    *plVar6 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    param_1[6] = plVar7;
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
  }
  plVar6 = param_1 + 10;
  *plVar6 = 0;
  puVar4 = param_1 + 9;
  *puVar4 = plVar6;
  param_1[0xb] = 0;
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar5 = FUN_00c05714(puVar4,*(undefined8 *)(param_2 + 0x50),puVar4);
    *plVar6 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    param_1[9] = plVar7;
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  return;
}


// ===== 00c873f0  FUN_00c873f0 =====

void FUN_00c873f0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    if (-1 < (long)uVar2) {
      pvVar3 = operator_new(uVar2);
      *param_1 = pvVar3;
      param_1[1] = pvVar3;
      param_1[2] = (long)pvVar3 + uVar2;
      do {
        if (pvVar3 == (void *)0x0) goto LAB_00c875e8;
        FUN_00b7aabc(pvVar3,lVar5);
        lVar5 = lVar5 + 0x200;
        pvVar3 = (void *)((long)pvVar3 + 0x200);
      } while (lVar5 != lVar1);
      param_1[1] = pvVar3;
      goto LAB_00c87464;
    }
LAB_00c875fc:
    FUN_00b82d24();
LAB_00c87600:
                    /* WARNING: Subroutine does not return */
    FUN_00b852e8();
  }
LAB_00c87464:
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar5 = param_2[3];
  lVar1 = param_2[4];
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) goto LAB_00c875fc;
    pvVar3 = operator_new(uVar2);
    param_1[3] = pvVar3;
    param_1[4] = pvVar3;
    param_1[5] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) goto LAB_00c875e8;
      FUN_00b7aabc(pvVar3,lVar5);
      lVar5 = lVar5 + 0x200;
      pvVar3 = (void *)((long)pvVar3 + 0x200);
    } while (lVar5 != lVar1);
    param_1[4] = pvVar3;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar5 = param_2[6];
  lVar1 = param_2[7];
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    if (0x50505050505050 < (ulong)(((long)uVar2 >> 4) * -0x505050505050505)) goto LAB_00c87600;
    pvVar3 = operator_new(uVar2);
    param_1[6] = pvVar3;
    param_1[7] = pvVar3;
    param_1[8] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
LAB_00c875e8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00b84f10(pvVar3,lVar5);
      lVar5 = lVar5 + 0x330;
      pvVar3 = (void *)((long)pvVar3 + 0x330);
    } while (lVar5 != lVar1);
    param_1[7] = pvVar3;
  }
  plVar6 = param_1 + 10;
  *plVar6 = 0;
  puVar4 = param_1 + 9;
  *puVar4 = plVar6;
  param_1[0xb] = 0;
  if (param_2[0xb] != 0) {
    lVar5 = FUN_00c05714(puVar4,param_2[10],puVar4);
    *plVar6 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    param_1[9] = plVar7;
    param_1[0xb] = param_2[0xb];
  }
  plVar6 = param_1 + 0xd;
  *plVar6 = 0;
  puVar4 = param_1 + 0xc;
  *puVar4 = plVar6;
  param_1[0xe] = 0;
  if (param_2[0xe] != 0) {
    lVar5 = FUN_00c05714(puVar4,param_2[0xd],puVar4);
    *plVar6 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    param_1[0xc] = plVar7;
    param_1[0xe] = param_2[0xe];
  }
  return;
}


// ===== 00c87604  FUN_00c87604 =====

undefined4 * FUN_00c87604(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  size_t sVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  void *__dest;
  undefined4 *puVar9;
  long lVar10;
  void *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar9 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined4 *)0x0) {
LAB_00c877a0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar2 = *param_3;
      param_1[1] = (long)(puVar2 + 1);
    }
    else {
      uVar3 = *param_3;
      puVar4 = puVar2;
      for (puVar7 = puVar2 + -1; puVar7 < puVar2; puVar7 = puVar7 + 1) {
        if (puVar4 == (undefined4 *)0x0) goto LAB_00c877a0;
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
      }
      param_1[1] = (long)puVar4;
      sVar5 = (long)puVar2 + (-4 - (long)param_2);
      memmove((void *)((long)puVar2 - sVar5),param_2,sVar5);
      *param_2 = uVar3;
    }
  }
  else {
    lVar10 = *param_1;
    uVar1 = ((long)puVar2 - lVar10 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    uVar6 = param_1[2] - lVar10;
    local_60 = (void *)0x0;
    uVar8 = (long)uVar6 >> 1;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 != 0) {
      if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_60 = operator_new(uVar8 << 2);
    }
    pvStack_48 = (void *)((long)local_60 + uVar8 * 4);
    local_58 = (undefined4 *)((long)local_60 + ((long)param_2 - lVar10));
    local_50 = local_58;
    FUN_00c877bc(&local_60,param_3);
    puVar9 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar10 = param_1[1];
    param_1[1] = (long)param_2;
    sVar5 = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - sVar5);
    local_50 = (undefined4 *)((long)local_50 + (lVar10 - (long)param_2));
    memcpy(__dest,(void *)*param_1,sVar5);
    local_60 = (void *)*param_1;
    lVar10 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined4 *)local_60;
      local_50 = (undefined4 *)local_60;
      pvStack_48 = (void *)lVar10;
      operator_delete(local_60);
    }
  }
  return puVar9;
}


// ===== 00c877bc  FUN_00c877bc =====

void FUN_00c877bc(undefined8 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *__src;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar17 = (undefined4 *)param_1[2];
  if ((undefined4 *)param_1[3] == puVar17) {
    pvVar1 = (void *)*param_1;
    __src = (undefined4 *)param_1[1];
    if ((long)__src - (long)pvVar1 == 0) {
      uVar4 = (long)param_1[3] - (long)pvVar1 >> 1;
      if (puVar17 == __src) {
        uVar4 = 1;
      }
      if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar4 * 4);
      puVar5 = (undefined4 *)((long)pvVar3 + (uVar4 & 0xfffffffffffffffc));
      lVar12 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar5;
      if (lVar12 != 0) {
        uVar13 = lVar12 - 4U >> 2;
        uVar6 = -(long)pvVar3 - (uVar4 & 0x3ffffffffffffffc) >> 2;
        uVar10 = uVar13;
        if (uVar6 <= uVar13) {
          uVar10 = uVar6;
        }
        puVar7 = (undefined4 *)((long)puVar5 + lVar12);
        puVar8 = puVar5;
        puVar11 = __src;
        if (0x33 < uVar10) {
          uVar6 = -(long)pvVar3 - (uVar4 & 0x3ffffffffffffffc) >> 2;
          if (uVar6 <= uVar13) {
            uVar13 = uVar6;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar3) & 3U) == 0) && (puVar5 <= puVar5 + uVar13))
              && (__src <= __src + uVar13)) &&
             (0x1f < (long)pvVar3 + ((uVar4 & 0x3ffffffffffffffc) - (long)__src))) {
            puVar14 = (undefined8 *)(__src + 4);
            uVar13 = uVar10 + 1 & 7;
            puVar15 = (undefined8 *)(puVar5 + 4);
            uVar6 = 8;
            if (uVar13 != 0) {
              uVar6 = uVar13;
            }
            lVar12 = (uVar10 + 1) - uVar6;
            puVar8 = puVar5 + lVar12;
            puVar11 = __src + lVar12;
            do {
              puVar2 = puVar14 + -1;
              uVar18 = puVar14[-2];
              uVar20 = puVar14[1];
              uVar19 = *puVar14;
              lVar12 = lVar12 + -8;
              puVar14 = puVar14 + 4;
              puVar15[-1] = *puVar2;
              puVar15[-2] = uVar18;
              puVar15[1] = uVar20;
              *puVar15 = uVar19;
              puVar15 = puVar15 + 4;
            } while (lVar12 != 0);
          }
        }
        do {
          if (puVar8 == (undefined4 *)0x0) goto LAB_00c87a38;
          puVar9 = puVar8 + 1;
          *puVar8 = *puVar11;
          puVar8 = puVar9;
          puVar11 = puVar11 + 1;
        } while (puVar9 != puVar7);
      }
      *param_1 = pvVar3;
      param_1[1] = puVar5;
      uVar13 = (ulong)((long)puVar17 + (-4 - ((long)puVar17 << 0x3e))) >> 2;
      uVar10 = (ulong)(((long)__src - (long)puVar17 << 0x3e) - ((long)__src - (long)puVar17)) >> 2;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar3 + uVar4 * 4);
      if (uVar13 <= uVar10) {
        uVar10 = uVar13;
      }
      puVar5 = puVar17;
      if ((1 < uVar10) && ((((int)__src - iVar16 | -iVar16) & 3U) == 0)) {
        uVar10 = uVar10 & 0x3ffffffffffffffe;
        puVar5 = puVar17 + -uVar10;
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
      }
      while (puVar5 != __src) {
        puVar5 = puVar5 + -1;
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined4 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar12 = ((long)__src - (long)pvVar1 >> 2) + 1;
      uVar4 = (ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1;
      memmove(__src + -uVar4,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar4;
      param_1[1] = param_1[1] + uVar4 * -4;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined4 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00c87a38:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c87a50  FUN_00c87a50 =====

void FUN_00c87a50(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long local_8;
  
  pvVar2 = (void *)*param_1;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    local_8 = (long)pvVar2 + 0x10;
    FUN_00c83b6c(&local_8,*(undefined8 *)((long)pvVar2 + 0x18));
    operator_delete(pvVar2);
  }
  return;
}


// ===== 00c87aac  FUN_00c87aac =====

void FUN_00c87aac(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(*(long **)(param_1 + 8))[1];
  plVar2 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    do {
      plVar3 = (long *)plVar2[2];
      bVar1 = plVar2 != (long *)*plVar3;
      plVar2 = plVar3;
    } while (bVar1);
  }
  else {
    do {
      plVar3 = plVar4;
      plVar4 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  *(long **)(param_1 + 8) = plVar3;
  return;
}


// ===== 00c87ae8  FUN_00c87ae8 =====

undefined8 FUN_00c87ae8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x38);
}


// ===== 00c87af8  FUN_00c87af8 =====

bool FUN_00c87af8(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) != *(long *)(param_2 + 8);
}


// ===== 00c87b10  FUN_00c87b10 =====

void FUN_00c87b10(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x28);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined4 **)(puVar1 + 4) = puVar1 + 6;
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar1);
  }
  return;
}


// ===== 00c87b68  FUN_00c87b68 =====

void FUN_00c87b68(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_2 + 8);
  puVar3 = (undefined4 *)operator_new(0x28);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 2) = uVar6;
  *(undefined4 **)(puVar3 + 4) = puVar3 + 6;
  *param_1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar3);
  }
  plVar4 = *(long **)(param_2 + 0x10);
  while (plVar4 != (long *)(param_2 + 0x18)) {
    uVar6 = (**(code **)(*(long *)plVar4[7] + 0x10))();
    FUN_00c87c2c(puVar3,uVar6);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = plVar5 != (long *)*plVar4;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}


// ===== 00c87c2c  FUN_00c87c2c =====

void FUN_00c87c2c(long param_1,long *param_2)

{
  long *plVar1;
  void *local_70;
  long lStack_68;
  long local_60;
  void *local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  long local_28;
  
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_70,param_2[1],param_2[2]);
  }
  else {
    local_60 = param_2[3];
    lStack_68 = param_2[2];
    local_70 = (void *)param_2[1];
  }
  local_40 = local_60;
  lStack_48 = lStack_68;
  lStack_68 = 0;
  local_60 = 0;
  local_50 = local_70;
  local_70 = (void *)0x0;
  local_38 = param_2;
  local_28 = param_1 + 0x10;
  FUN_00c88434(&local_28,&local_50,&local_50);
  plVar1 = local_38;
  local_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  return;
}


// ===== 00c87d04  FUN_00c87d04 =====

long FUN_00c87d04(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *__s2;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        __s2 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          __s2 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,__s2,__n);
        if (iVar3 == 0) break;
        if (-1 < iVar3) goto LAB_00c87d44;
LAB_00c87d94:
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
      }
      if (uVar1 == uVar2) {
        if (plVar4 == (long *)(param_1 + 0x18)) {
          return 0;
        }
        return plVar4[7];
      }
      if (uVar1 < uVar2) goto LAB_00c87d94;
LAB_00c87d44:
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
  }
  return 0;
}


// ===== 00c87dcc  FUN_00c87dcc =====

long FUN_00c87dcc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *__s2;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        __s2 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          __s2 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,__s2,__n);
        if (iVar3 == 0) break;
        if (-1 < iVar3) goto LAB_00c87e10;
LAB_00c87e60:
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
      }
      if (uVar1 == uVar2) {
        if (plVar4 == (long *)(param_1 + 0x18)) {
          return 0;
        }
        lVar5 = plVar4[7];
        plVar4[7] = 0;
        FUN_00c88598(param_1 + 0x10,plVar4);
        return lVar5;
      }
      if (uVar1 < uVar2) goto LAB_00c87e60;
LAB_00c87e10:
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
  }
  return 0;
}


// ===== 00c87eac  FUN_00c87eac =====

void FUN_00c87eac(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long local_28;
  
  lVar4 = *param_2;
  plVar2 = *(long **)(lVar4 + 0x10);
  plVar5 = (long *)(lVar4 + 0x18);
  if (plVar2 != plVar5) {
    do {
      lVar4 = plVar2[7];
      plVar2[7] = 0;
      FUN_00c87c2c(param_1,lVar4);
      plVar5 = (long *)plVar2[1];
      plVar3 = plVar2;
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar2 = (long *)plVar3[2];
          bVar1 = plVar3 != (long *)*plVar2;
          plVar3 = plVar2;
        } while (bVar1);
      }
      else {
        do {
          plVar2 = plVar5;
          plVar5 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      lVar4 = *param_2;
      plVar5 = (long *)(lVar4 + 0x18);
    } while (plVar2 != plVar5);
  }
  local_28 = lVar4 + 0x10;
  FUN_00c83b6c(&local_28,*(undefined8 *)(lVar4 + 0x18));
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(long **)(lVar4 + 0x10) = plVar5;
  return;
}


// ===== 00c87f68  FUN_00c87f68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c87f68(undefined8 *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *local_38;
  
  uVar2 = _DAT_00000010;
  if (param_2 == (void *)0x0) {
    *param_1 = 0;
    param_1[1] = uVar2;
  }
  else {
    FUN_00d0f740(1,param_2);
    uVar2 = *(undefined8 *)((long)param_2 + 0x10);
    *param_1 = param_2;
    FUN_00d0f740(1,param_2);
    param_1[1] = uVar2;
    iVar1 = FUN_00d0f7a0(0xffffffff,param_2);
    if (iVar1 == 1) {
      local_38 = (undefined8 *)((long)param_2 + 0x10);
      FUN_00c83b6c(&local_38,*(undefined8 *)((long)param_2 + 0x18));
      operator_delete(param_2);
    }
  }
  return;
}


// ===== 00c8800c  FUN_00c8800c =====

void FUN_00c8800c(undefined8 *param_1,void *param_2)

{
  int iVar1;
  long local_18;
  
  if (param_2 == (void *)0x0) {
    *param_1 = 0;
    param_1[1] = 0x18;
  }
  else {
    FUN_00d0f740(1,param_2);
    *param_1 = param_2;
    FUN_00d0f740(1,param_2);
    param_1[1] = (long)param_2 + 0x18;
    iVar1 = FUN_00d0f7a0(0xffffffff,param_2);
    if (iVar1 == 1) {
      local_18 = (long)param_2 + 0x10;
      FUN_00c83b6c(&local_18,*(undefined8 *)((long)param_2 + 0x18));
      operator_delete(param_2);
    }
  }
  return;
}


// ===== 00c880a4  FUN_00c880a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c880a4(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  ulong uVar2;
  long **pplVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long *local_80;
  ulong uStack_78;
  byte bStack_69;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (param_2 == (void *)0x0) {
    if (_DAT_00000010 != (long *)0x18) goto LAB_00c881d4;
  }
  else {
    FUN_00d0f740(1,param_2);
    plVar9 = (long *)((long)param_2 + 0x10);
    lVar7 = *plVar9;
    FUN_00d0f740(1,param_2);
    iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
    if (iVar5 == 1) {
      local_68 = plVar9;
      FUN_00c83b6c(&local_68,*(undefined8 *)((long)param_2 + 0x18));
      operator_delete(param_2);
    }
    FUN_00d0f740(1,param_2);
    FUN_00d0f740(1,param_2);
    iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
    if (iVar5 == 1) {
      local_68 = plVar9;
      FUN_00c83b6c(&local_68,*(undefined8 *)((long)param_2 + 0x18));
      operator_delete(param_2);
    }
    iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
    if (iVar5 == 1) {
      local_68 = plVar9;
      FUN_00c83b6c(&local_68,*(undefined8 *)((long)param_2 + 0x18));
      operator_delete(param_2);
    }
    iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
    if (iVar5 == 1) {
      local_68 = plVar9;
      FUN_00c83b6c(&local_68,*(undefined8 *)((long)param_2 + 0x18));
      operator_delete(param_2);
    }
    if (lVar7 != (long)param_2 + 0x18) {
LAB_00c881d4:
      local_68 = (long *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_00547cac(&local_68,&DAT_0019769a,1);
      plVar9 = _DAT_00000010;
      if (param_2 != (void *)0x0) {
        FUN_00d0f740(1,param_2);
        plVar9 = *(long **)((long)param_2 + 0x10);
        FUN_00d0f740(1,param_2);
        iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
        if (iVar5 == 1) {
          local_80 = (long *)((long)param_2 + 0x10);
          FUN_00c83b6c(&local_80,*(undefined8 *)((long)param_2 + 0x18));
          operator_delete(param_2);
        }
      }
      plVar1 = (long *)((long)param_2 + 0x10);
      pcVar8 = "";
      do {
        if (param_2 == (void *)0x0) {
          if (plVar9 == (long *)0x18) goto LAB_00c883f0;
        }
        else {
          FUN_00d0f740(1,param_2);
          FUN_00d0f740(1,param_2);
          iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
          if (iVar5 == 1) {
            local_80 = plVar1;
            FUN_00c83b6c(&local_80,*(undefined8 *)((long)param_2 + 0x18));
            operator_delete(param_2);
          }
          iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
          if (iVar5 == 1) {
            local_80 = plVar1;
            FUN_00c83b6c(&local_80,*(undefined8 *)((long)param_2 + 0x18));
            operator_delete(param_2);
          }
          if (plVar9 == (long *)((long)param_2 + 0x18)) {
            iVar5 = FUN_00d0f7a0(0xffffffff,param_2);
            if (iVar5 == 1) {
              local_80 = plVar1;
              FUN_00c83b6c(&local_80,*(undefined8 *)((long)param_2 + 0x18));
              operator_delete(param_2);
            }
LAB_00c883f0:
            FUN_00547cac(&local_68,&DAT_0019fa9e,1);
            param_1[1] = uStack_60;
            *param_1 = local_68;
            param_1[2] = local_58;
            return;
          }
        }
        sVar6 = strlen(pcVar8);
        FUN_00547cac(&local_68,pcVar8,sVar6);
        FUN_00c8871c(&local_80,plVar9[7]);
        uVar2 = uStack_78;
        pplVar3 = (long **)local_80;
        if (-1 < (char)bStack_69) {
          uVar2 = (ulong)bStack_69;
          pplVar3 = &local_80;
        }
        FUN_00547cac(&local_68,pplVar3,uVar2);
        pcVar8 = ",";
        if ((char)bStack_69 < '\0') {
          operator_delete(local_80);
          plVar10 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) goto LAB_00c883a4;
LAB_00c88390:
          do {
            plVar9 = plVar10;
            plVar10 = (long *)*plVar9;
          } while (plVar10 != (long *)0x0);
        }
        else {
          plVar10 = (long *)plVar9[1];
          if ((long *)plVar9[1] != (long *)0x0) goto LAB_00c88390;
LAB_00c883a4:
          do {
            plVar10 = (long *)plVar9[2];
            bVar4 = plVar9 != (long *)*plVar10;
            plVar9 = plVar10;
          } while (bVar4);
        }
      } while( true );
    }
  }
  FUN_005d3510(param_1,&DAT_001b3348);
  return;
}


// ===== 00c88434  FUN_00c88434 =====

undefined1  [16] FUN_00c88434(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  undefined8 *__s1;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar9 = (long *)*param_1;
  plVar10 = plVar9 + 1;
  plVar8 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar8 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar6 = plVar8;
        plVar8 = (long *)plVar6[4];
        uVar4 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar8 = plVar6 + 4;
          uVar4 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar4;
        if (uVar1 <= uVar4) {
          __n = uVar1;
        }
        iVar5 = memcmp(__s1,plVar8,__n);
        plVar10 = plVar6;
        if (iVar5 != 0) break;
        if (uVar1 == uVar4) {
          uVar7 = 0;
          goto LAB_00c8855c;
        }
        if (uVar4 <= uVar1) goto LAB_00c8847c;
LAB_00c884cc:
        plVar8 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00c884e8;
      }
      if (iVar5 < 0) goto LAB_00c884cc;
LAB_00c8847c:
      plVar8 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar11 = plVar6 + 1;
  }
LAB_00c884e8:
  plVar6 = (long *)operator_new(0x40);
  if (plVar6 != (long *)0x0) {
    *plVar6 = 0;
    if (plVar6 + 4 != (long *)0x0) {
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      lVar13 = param_3[1];
      lVar12 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      plVar6[6] = lVar2;
      plVar6[5] = lVar13;
      plVar6[4] = lVar12;
      plVar6[7] = lVar3;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)plVar10;
      *plVar11 = (long)plVar6;
      plVar8 = plVar6;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        plVar8 = (long *)*plVar11;
      }
      FUN_005d5b94(plVar9[1],plVar8);
      uVar7 = 1;
      plVar9[2] = plVar9[2] + 1;
LAB_00c8855c:
      auVar14._8_8_ = uVar7;
      auVar14._0_8_ = plVar6;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c88598  FUN_00c88598 =====

undefined8 * FUN_00c88598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar4 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar5 = (undefined8 *)puVar4[2];
      bVar2 = puVar4 != (undefined8 *)*puVar5;
      puVar4 = puVar5;
    } while (bVar2);
  }
  else {
    do {
      puVar5 = puVar1;
      puVar1 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar5;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  plVar3 = (long *)param_2[7];
  param_2[7] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete((void *)param_2[4]);
  }
  operator_delete(param_2);
  return puVar5;
}


// ===== 00c88670  FUN_00c88670 =====

void FUN_00c88670(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = &PTR_FUN_00d4e768;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    FUN_005478d8(param_1 + 1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar3;
    param_1[1] = uVar2;
  }
  param_1[4] = uVar1;
  return;
}


// ===== 00c886d0  FUN_00c886d0 =====

void FUN_00c886d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e768;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 00c88700  FUN_00c88700 =====

void FUN_00c88700(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc88708);
  (*pcVar1)();
}


// ===== 00c88708  FUN_00c88708 =====

void FUN_00c88708(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c88718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return;
}


// ===== 00c8871c  FUN_00c8871c =====

/* WARNING: Removing unreachable block (ram,0x00c88814) */

void FUN_00c8871c(undefined8 *param_1,long *param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined8 ***local_98;
  ulong uStack_90;
  byte bStack_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 ***local_68;
  undefined8 ***local_60;
  ulong local_58;
  
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_00547cac(&local_80,"{\"type\":\"",9);
  pcVar3 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
  if (pcVar3 != (char *)0x0) {
    sVar4 = strlen(pcVar3);
    FUN_00547cac(&local_80,pcVar3,sVar4);
    FUN_00547cac(&local_80,"\",\"id\":\"",8);
    lVar7 = (long)*(char *)((long)param_2 + 0x1f);
    if (lVar7 < 0) {
      plVar6 = (long *)param_2[1];
      lVar7 = param_2[2];
    }
    else {
      plVar6 = param_2 + 1;
    }
    FUN_00547cac(&local_80,plVar6,lVar7);
    FUN_00547cac(&local_80,"\",\"timestamp\":",0xe);
    local_68 = (undefined8 ****)0x0;
    local_60 = (undefined8 ****)0x0;
    local_58 = 0;
    FUN_005f5410(&local_68,0x16,param_2[4]);
    ppppuVar8 = (undefined8 ****)local_60;
    ppppuVar1 = (undefined8 ****)local_68;
    if (-1 < (long)local_58) {
      ppppuVar8 = (undefined8 ****)(local_58 >> 0x38);
      ppppuVar1 = &local_68;
    }
    FUN_00547cac(&local_80,ppppuVar1,ppppuVar8);
    (**(code **)(*param_2 + 0x20))(&local_68,param_2,0);
    pppuVar2 = local_60;
    if (local_68 != local_60) {
      ppppuVar8 = (undefined8 ****)local_68;
      do {
        uVar5 = FUN_00c88ac4(ppppuVar8);
        if ((uVar5 & 1) != 0) {
          FUN_00547cac(&local_80,&DAT_001a5796,2);
          pcVar3 = (char *)FUN_00c88ab8(ppppuVar8);
          if (pcVar3 == (char *)0x0) goto LAB_00c88a2c;
          sVar4 = strlen(pcVar3);
          FUN_00547cac(&local_80,pcVar3,sVar4);
          FUN_00547cac(&local_80,&DAT_001c2302,2);
          if (*(char *)(ppppuVar8 + 2) == '\x06') {
            FUN_00547cac(&local_80,&DAT_001d6255,1);
          }
          FUN_00c88b1c(&local_98,ppppuVar8);
          uVar5 = uStack_90;
          ppppuVar1 = (undefined8 ****)local_98;
          if (-1 < (char)bStack_81) {
            uVar5 = (ulong)bStack_81;
            ppppuVar1 = &local_98;
          }
          FUN_00547cac(&local_80,ppppuVar1,uVar5);
          if ((char)bStack_81 < '\0') {
            operator_delete(local_98);
          }
          if (*(char *)(ppppuVar8 + 2) == '\x06') {
            FUN_00547cac(&local_80,&DAT_001d6255,1);
          }
        }
        ppppuVar8 = ppppuVar8 + 3;
      } while (ppppuVar8 != (undefined8 ****)pppuVar2);
    }
    if ((undefined8 ****)local_68 != (undefined8 ****)0x0) {
      uVar5 = (ulong)(((long)local_68 - (long)local_60) * 0x1555555555555555) >> 3;
      uVar9 = (long)local_60 * -0x1555555555555555 - 8U >> 3;
      if (uVar9 <= uVar5) {
        uVar5 = uVar9;
      }
      ppppuVar8 = (undefined8 ****)local_60;
      if ((1 < uVar5) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        ppppuVar8 = (undefined8 ****)(local_60 + uVar5 * -3);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (ppppuVar8 != (undefined8 ****)local_68) {
        ppppuVar8 = ppppuVar8 + -3;
        if (ppppuVar8 == (undefined8 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_60 = local_68;
      operator_delete(local_68);
    }
    FUN_00547cac(&local_80,&DAT_001b0cbb,1);
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[2] = local_70;
    return;
  }
LAB_00c88a2c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 00c88a40  FUN_00c88a40 =====

void FUN_00c88a40(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_3) {
      FUN_00c88aa0();
                    /* WARNING: Subroutine does not return */
      FUN_005d34a4("vector");
    }
    pvVar1 = operator_new(param_3 * 0x18);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_3 * 0x18);
  }
  return;
}


// ===== 00c88aa0  FUN_00c88aa0 =====

void FUN_00c88aa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c88ab8  FUN_00c88ab8 =====

undefined8 FUN_00c88ab8(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00c88ac4  FUN_00c88ac4 =====

uint FUN_00c88ac4(long param_1)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if ((ulong)*(byte *)(param_1 + 0x10) != 0xff) {
    local_18 = &uStack_19;
    uVar1 = (*(code *)(&PTR_FUN_00d4e790)[*(byte *)(param_1 + 0x10)])(&local_18,param_1 + 8);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005ee558();
}


// ===== 00c88b1c  FUN_00c88b1c =====

void FUN_00c88b1c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  if ((ulong)*(byte *)(param_2 + 0x10) != 0xff) {
    local_28 = &uStack_29;
    uVar1 = (*(code *)(&PTR_FUN_00d4e790)[*(byte *)(param_2 + 0x10)])(&local_28,param_2 + 8);
    if ((uVar1 & 1) == 0) {
      FUN_005d3510(param_1,&DAT_001b9a21);
    }
    else {
      if ((ulong)*(byte *)(param_2 + 0x10) == 0xff) goto LAB_00c88bc0;
      local_28 = &uStack_29;
      (*(code *)(&PTR_FUN_00d4e810)[*(byte *)(param_2 + 0x10)])(param_1,&local_28,param_2 + 8);
    }
    return;
  }
LAB_00c88bc0:
                    /* WARNING: Subroutine does not return */
  FUN_005ee558();
}


// ===== 00c88bc4  FUN_00c88bc4 =====

void FUN_00c88bc4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar1;
  return;
}


// ===== 00c88bd8  FUN_00c88bd8 =====

undefined1 FUN_00c88bd8(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 1);
}


// ===== 00c88be8  FUN_00c88be8 =====

undefined1 FUN_00c88be8(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 4);
}


// ===== 00c88bf8  FUN_00c88bf8 =====

undefined1 FUN_00c88bf8(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 4);
}


// ===== 00c88c08  FUN_00c88c08 =====

undefined1 FUN_00c88c08(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 8);
}


// ===== 00c88c18  FUN_00c88c18 =====

undefined1 FUN_00c88c18(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 8);
}


// ===== 00c88c28  FUN_00c88c28 =====

undefined1 FUN_00c88c28(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 8);
}


// ===== 00c88c38  FUN_00c88c38 =====

undefined1 FUN_00c88c38(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88c48  FUN_00c88c48 =====

undefined1 FUN_00c88c48(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88c58  FUN_00c88c58 =====

undefined1 FUN_00c88c58(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88c68  FUN_00c88c68 =====

undefined1 FUN_00c88c68(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88c78  FUN_00c88c78 =====

undefined1 FUN_00c88c78(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88c88  FUN_00c88c88 =====

undefined1 FUN_00c88c88(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88c98  FUN_00c88c98 =====

undefined1 FUN_00c88c98(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88ca8  FUN_00c88ca8 =====

undefined1 FUN_00c88ca8(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88cb8  FUN_00c88cb8 =====

undefined1 FUN_00c88cb8(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88cc8  FUN_00c88cc8 =====

undefined1 FUN_00c88cc8(undefined8 param_1,long *param_2)

{
  return *(undefined1 *)(*param_2 + 0x18);
}


// ===== 00c88cd8  FUN_00c88cd8 =====

void FUN_00c88cd8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  
  if ((((char *)*param_3)[1] & 1U) != 0) {
    pcVar1 = "true";
    if (*(char *)*param_3 == '\0') {
      pcVar1 = "false";
    }
    FUN_005d3510(param_1,pcVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00c88d1c  FUN_00c88d1c =====

void FUN_00c88d1c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)((undefined4 *)*param_3 + 1) & 1) != 0) {
    uVar1 = *(undefined4 *)*param_3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_005f55c4(param_1,0x16,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00c88d54  FUN_00c88d54 =====

void FUN_00c88d54(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)((undefined4 *)*param_3 + 1) & 1) != 0) {
    uVar1 = *(undefined4 *)*param_3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_005fa03c(param_1,0x16,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00c88d8c  FUN_00c88d8c =====

void FUN_00c88d8c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *__dest;
  ulong __n;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)((long *)*param_3 + 1) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = snprintf((char *)&local_60,0x20,"%.16g",(double)*(long *)*param_3);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  __n = (ulong)(int)uVar4;
  if (uVar4 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
    __dest = param_1;
  }
  else {
    uVar1 = (__n & 0x7ffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  if ((undefined8 *)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if (__dest <= &local_60 && &local_60 < (undefined8 *)((long)__dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memcpy(__dest,&local_60,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c88ebc  FUN_00c88ebc =====

void FUN_00c88ebc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *__dest;
  ulong __n;
  undefined8 uVar5;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)((undefined8 *)*param_3 + 1) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  uVar5 = NEON_ucvtf(*(undefined8 *)*param_3);
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = snprintf((char *)&local_60,0x20,"%.16g",uVar5);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  __n = (ulong)(int)uVar4;
  if (uVar4 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
    __dest = param_1;
  }
  else {
    uVar1 = (__n & 0x7ffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  if ((undefined8 *)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if (__dest <= &local_60 && &local_60 < (undefined8 *)((long)__dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memcpy(__dest,&local_60,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c88fec  FUN_00c88fec =====

void FUN_00c88fec(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *__dest;
  ulong __n;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)((undefined8 *)*param_3 + 1) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = snprintf((char *)&local_60,0x20,"%.16g",*(undefined8 *)*param_3);
  if (-1 < (int)uVar4) {
    __n = (ulong)(int)uVar4;
    if (uVar4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffff8) + 8;
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
      if ((__dest <= &local_60) && (&local_60 < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memcpy(__dest,&local_60,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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


// ===== 00c89118  FUN_00c89118 =====

void FUN_00c89118(undefined8 param_1,long *param_2)

{
  if ((*(byte *)(*param_2 + 0x18) & 1) != 0) {
    FUN_00c8a610();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00c8913c  FUN_00c8913c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8913c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 *******local_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  param_3 = (undefined8 *)*param_3;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_00547cac(&local_78,&DAT_0019769a,1);
  if ((*(byte *)(param_3 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  uVar7 = param_3[1];
  uVar2 = (uint)uVar7 & 0x3f;
  uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
  if (uVar8 != 0 || (uVar7 & 0x3f) != 0) {
    puVar9 = (ulong *)*param_3;
    pcVar3 = "false";
    if ((*puVar9 & 1) != 0) {
      pcVar3 = "true";
    }
    FUN_005d3510(&local_90,pcVar3);
    uVar7 = uStack_88;
    pppppppuVar6 = local_90;
    if (-1 < (char)bStack_79) {
      uVar7 = (ulong)bStack_79;
      pppppppuVar6 = &local_90;
    }
    FUN_00547cac(&local_78,pppppppuVar6,uVar7);
    if ((char)bStack_79 < '\0') {
      operator_delete(local_90);
    }
    if ((uVar8 != 0) || (uVar2 != 1)) {
      puVar1 = (ulong *)((long)puVar9 + uVar8);
      uVar7 = 1;
      do {
        uVar8 = *puVar9;
        FUN_00547cac(&local_78,&DAT_001ea264,1);
        pcVar3 = "false";
        if ((uVar8 >> (uVar7 & 0x3f) & 1) != 0) {
          pcVar3 = "true";
        }
        FUN_005d3510(&local_90,pcVar3);
        uVar8 = uStack_88;
        pppppppuVar6 = local_90;
        if (-1 < (char)bStack_79) {
          uVar8 = (ulong)bStack_79;
          pppppppuVar6 = &local_90;
        }
        FUN_00547cac(&local_78,pppppppuVar6,uVar8);
        if ((char)bStack_79 < '\0') {
          operator_delete(local_90);
        }
        iVar10 = (int)uVar7;
        lVar4 = 8;
        if (iVar10 != 0x3f) {
          lVar4 = 0;
        }
        uVar5 = 0;
        if (iVar10 != 0x3f) {
          uVar5 = iVar10 + 1;
        }
        uVar7 = (ulong)uVar5;
        puVar9 = (ulong *)((long)puVar9 + lVar4);
      } while ((puVar9 != puVar1) || (uVar5 != uVar2));
    }
  }
  FUN_00547cac(&local_78,&DAT_0019fa9e,1);
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = local_68;
  return;
}


// ===== 00c89308  FUN_00c89308 =====

void FUN_00c89308(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined1 *local_70;
  ulong local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar5 = (long *)*param_3;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_00547cac(&local_58,&DAT_0019769a,1);
  if ((*(byte *)(plVar5 + 3) & 1) != 0) {
    puVar2 = (undefined4 *)*plVar5;
    puVar3 = (undefined4 *)plVar5[1];
    if (puVar2 != puVar3) {
      local_68 = 0;
      local_60 = 0;
      local_70 = (undefined1 *)0x0;
      FUN_005f55c4(&local_70,0x16,*puVar2);
      uVar1 = local_68;
      ppuVar4 = (undefined1 **)local_70;
      if (-1 < (long)local_60) {
        uVar1 = local_60 >> 0x38;
        ppuVar4 = &local_70;
      }
      FUN_00547cac(&local_58,ppuVar4,uVar1);
      if ((long)local_60 < 0) {
        operator_delete(local_70);
      }
      while (puVar2 = puVar2 + 1, puVar2 != puVar3) {
        FUN_00547cac(&local_58,&DAT_001ea264,1);
        local_68 = 0;
        local_60 = 0;
        local_70 = (undefined1 *)0x0;
        FUN_005f55c4(&local_70,0x16,*puVar2);
        uVar1 = local_68;
        ppuVar4 = (undefined1 **)local_70;
        if (-1 < (long)local_60) {
          uVar1 = local_60 >> 0x38;
          ppuVar4 = &local_70;
        }
        FUN_00547cac(&local_58,ppuVar4,uVar1);
        if ((long)local_60 < 0) {
          operator_delete(local_70);
        }
      }
    }
    FUN_00547cac(&local_58,&DAT_0019fa9e,1);
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[2] = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00c89480  FUN_00c89480 =====

void FUN_00c89480(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined1 *local_70;
  ulong local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar5 = (long *)*param_3;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_00547cac(&local_58,&DAT_0019769a,1);
  if ((*(byte *)(plVar5 + 3) & 1) != 0) {
    puVar2 = (undefined4 *)*plVar5;
    puVar3 = (undefined4 *)plVar5[1];
    if (puVar2 != puVar3) {
      local_68 = 0;
      local_60 = 0;
      local_70 = (undefined1 *)0x0;
      FUN_005fa03c(&local_70,0x16,*puVar2);
      uVar1 = local_68;
      ppuVar4 = (undefined1 **)local_70;
      if (-1 < (long)local_60) {
        uVar1 = local_60 >> 0x38;
        ppuVar4 = &local_70;
      }
      FUN_00547cac(&local_58,ppuVar4,uVar1);
      if ((long)local_60 < 0) {
        operator_delete(local_70);
      }
      while (puVar2 = puVar2 + 1, puVar2 != puVar3) {
        FUN_00547cac(&local_58,&DAT_001ea264,1);
        local_68 = 0;
        local_60 = 0;
        local_70 = (undefined1 *)0x0;
        FUN_005fa03c(&local_70,0x16,*puVar2);
        uVar1 = local_68;
        ppuVar4 = (undefined1 **)local_70;
        if (-1 < (long)local_60) {
          uVar1 = local_60 >> 0x38;
          ppuVar4 = &local_70;
        }
        FUN_00547cac(&local_58,ppuVar4,uVar1);
        if ((long)local_60 < 0) {
          operator_delete(local_70);
        }
      }
    }
    FUN_00547cac(&local_58,&DAT_0019fa9e,1);
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[2] = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00c895f8  FUN_00c895f8 =====

void FUN_00c895f8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *****pppppuVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 ****local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 ***local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)*param_3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_00547cac(&local_a8,&DAT_0019769a,1);
  if ((*(byte *)(plVar6 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  plVar8 = (long *)*plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar8 != plVar6) {
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    uVar4 = snprintf((char *)&local_90,0x20,"%.16g",(double)*plVar8);
    if ((int)uVar4 < 0) {
LAB_00c898e8:
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    uVar7 = (ulong)(int)uVar4;
    if (uVar4 < 0x17) {
      pppppuVar5 = &local_c0;
      local_b0 = CONCAT17((char)uVar4,(undefined7)local_b0);
    }
    else {
      uVar1 = (uVar7 & 0x7ffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppppuVar5 = (undefined8 *****)operator_new(uVar2);
      local_b0 = uVar2 | 0x8000000000000000;
      local_c0 = pppppuVar5;
      uStack_b8 = uVar7;
    }
    if ((undefined8 *****)((long)pppppuVar5 + uVar7) < pppppuVar5) {
LAB_00c898c0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pppppuVar5 <= &local_90) && (&local_90 < (undefined8 *****)((long)pppppuVar5 + uVar7))) {
LAB_00c898d4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memcpy(pppppuVar5,&local_90,uVar7);
    *(undefined1 *)((long)pppppuVar5 + uVar7) = 0;
    uVar7 = uStack_b8;
    pppppuVar5 = (undefined8 *****)local_c0;
    if (-1 < (long)local_b0) {
      uVar7 = local_b0 >> 0x38;
      pppppuVar5 = &local_c0;
    }
    FUN_00547cac(&local_a8,pppppuVar5,uVar7);
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    plVar8 = plVar8 + 1;
    if (plVar8 != plVar6) {
      do {
        FUN_00547cac(&local_a8,&DAT_001ea264,1);
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        uVar4 = snprintf((char *)&local_90,0x20,"%.16g",(double)*plVar8);
        if ((int)uVar4 < 0) goto LAB_00c898e8;
        uVar7 = (ulong)(int)uVar4;
        if (uVar4 < 0x17) {
          local_b0 = CONCAT17((char)uVar4,(undefined7)local_b0);
          pppppuVar5 = &local_c0;
        }
        else {
          uVar1 = (uVar7 & 0x7ffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          pppppuVar5 = (undefined8 *****)operator_new(uVar2);
          local_b0 = uVar2 | 0x8000000000000000;
          local_c0 = pppppuVar5;
          uStack_b8 = uVar7;
        }
        if ((undefined8 *****)((long)pppppuVar5 + uVar7) < pppppuVar5) goto LAB_00c898c0;
        if (pppppuVar5 <= &local_90 && &local_90 < (undefined8 *****)((long)pppppuVar5 + uVar7))
        goto LAB_00c898d4;
        memcpy(pppppuVar5,&local_90,uVar7);
        *(undefined1 *)((long)pppppuVar5 + uVar7) = 0;
        uVar7 = uStack_b8;
        pppppuVar5 = (undefined8 *****)local_c0;
        if (-1 < (long)local_b0) {
          uVar7 = local_b0 >> 0x38;
          pppppuVar5 = &local_c0;
        }
        FUN_00547cac(&local_a8,pppppuVar5,uVar7);
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar6);
    }
  }
  FUN_00547cac(&local_a8,&DAT_0019fa9e,1);
  param_1[2] = local_98;
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c898f4  FUN_00c898f4 =====

void FUN_00c898f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 ****local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 ***local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar7 = (long *)*param_3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_00547cac(&local_a8,&DAT_0019769a,1);
  if ((*(byte *)(plVar7 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  puVar9 = (undefined8 *)*plVar7;
  puVar3 = (undefined8 *)plVar7[1];
  if (puVar9 != puVar3) {
    uVar10 = NEON_ucvtf(*puVar9);
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    uVar5 = snprintf((char *)&local_90,0x20,"%.16g",uVar10);
    if ((int)uVar5 < 0) {
LAB_00c89be4:
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    uVar8 = (ulong)(int)uVar5;
    if (uVar5 < 0x17) {
      pppppuVar6 = &local_c0;
      local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
    }
    else {
      uVar1 = (uVar8 & 0x7ffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppppuVar6 = (undefined8 *****)operator_new(uVar2);
      local_b0 = uVar2 | 0x8000000000000000;
      local_c0 = pppppuVar6;
      uStack_b8 = uVar8;
    }
    if ((undefined8 *****)((long)pppppuVar6 + uVar8) < pppppuVar6) {
LAB_00c89bbc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pppppuVar6 <= &local_90) && (&local_90 < (undefined8 *****)((long)pppppuVar6 + uVar8))) {
LAB_00c89bd0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memcpy(pppppuVar6,&local_90,uVar8);
    *(undefined1 *)((long)pppppuVar6 + uVar8) = 0;
    uVar8 = uStack_b8;
    pppppuVar6 = (undefined8 *****)local_c0;
    if (-1 < (long)local_b0) {
      uVar8 = local_b0 >> 0x38;
      pppppuVar6 = &local_c0;
    }
    FUN_00547cac(&local_a8,pppppuVar6,uVar8);
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    puVar9 = puVar9 + 1;
    if (puVar9 != puVar3) {
      do {
        FUN_00547cac(&local_a8,&DAT_001ea264,1);
        uVar10 = NEON_ucvtf(*puVar9);
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        uVar5 = snprintf((char *)&local_90,0x20,"%.16g",uVar10);
        if ((int)uVar5 < 0) goto LAB_00c89be4;
        uVar8 = (ulong)(int)uVar5;
        if (uVar5 < 0x17) {
          local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
          pppppuVar6 = &local_c0;
        }
        else {
          uVar1 = (uVar8 & 0x7ffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          pppppuVar6 = (undefined8 *****)operator_new(uVar2);
          local_b0 = uVar2 | 0x8000000000000000;
          local_c0 = pppppuVar6;
          uStack_b8 = uVar8;
        }
        if ((undefined8 *****)((long)pppppuVar6 + uVar8) < pppppuVar6) goto LAB_00c89bbc;
        if (pppppuVar6 <= &local_90 && &local_90 < (undefined8 *****)((long)pppppuVar6 + uVar8))
        goto LAB_00c89bd0;
        memcpy(pppppuVar6,&local_90,uVar8);
        *(undefined1 *)((long)pppppuVar6 + uVar8) = 0;
        uVar8 = uStack_b8;
        pppppuVar6 = (undefined8 *****)local_c0;
        if (-1 < (long)local_b0) {
          uVar8 = local_b0 >> 0x38;
          pppppuVar6 = &local_c0;
        }
        FUN_00547cac(&local_a8,pppppuVar6,uVar8);
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar3);
    }
  }
  FUN_00547cac(&local_a8,&DAT_0019fa9e,1);
  param_1[2] = local_98;
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c89bf0  FUN_00c89bf0 =====

void FUN_00c89bf0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 ***pppuVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 **local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar7 = (long *)*param_3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_00547cac(&local_a8,&DAT_0019769a,1);
  if ((*(byte *)(plVar7 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  puVar9 = (undefined8 *)*plVar7;
  puVar3 = (undefined8 *)plVar7[1];
  if (puVar9 != puVar3) {
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    uVar5 = snprintf((char *)&local_90,0x20,"%.16g",*puVar9);
    if ((int)uVar5 < 0) {
LAB_00c89ed8:
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    uVar8 = (ulong)(int)uVar5;
    if (uVar5 < 0x17) {
      pppuVar6 = &local_c0;
      local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
    }
    else {
      uVar1 = (uVar8 & 0x7ffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppuVar6 = (undefined8 ***)operator_new(uVar2);
      local_b0 = uVar2 | 0x8000000000000000;
      local_c0 = pppuVar6;
      uStack_b8 = uVar8;
    }
    if ((undefined8 ***)((long)pppuVar6 + uVar8) < pppuVar6) {
LAB_00c89eb0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pppuVar6 <= &local_90) && (&local_90 < (undefined8 ***)((long)pppuVar6 + uVar8))) {
LAB_00c89ec4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memcpy(pppuVar6,&local_90,uVar8);
    *(undefined1 *)((long)pppuVar6 + uVar8) = 0;
    uVar8 = uStack_b8;
    pppuVar6 = (undefined8 ***)local_c0;
    if (-1 < (long)local_b0) {
      uVar8 = local_b0 >> 0x38;
      pppuVar6 = &local_c0;
    }
    FUN_00547cac(&local_a8,pppuVar6,uVar8);
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    puVar9 = puVar9 + 1;
    if (puVar9 != puVar3) {
      do {
        FUN_00547cac(&local_a8,&DAT_001ea264,1);
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        uVar5 = snprintf((char *)&local_90,0x20,"%.16g",*puVar9);
        if ((int)uVar5 < 0) goto LAB_00c89ed8;
        uVar8 = (ulong)(int)uVar5;
        if (uVar5 < 0x17) {
          local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
          pppuVar6 = &local_c0;
        }
        else {
          uVar1 = (uVar8 & 0x7ffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          pppuVar6 = (undefined8 ***)operator_new(uVar2);
          local_b0 = uVar2 | 0x8000000000000000;
          local_c0 = pppuVar6;
          uStack_b8 = uVar8;
        }
        if ((undefined8 ***)((long)pppuVar6 + uVar8) < pppuVar6) goto LAB_00c89eb0;
        if ((pppuVar6 <= &local_90) && (&local_90 < (undefined8 ***)((long)pppuVar6 + uVar8)))
        goto LAB_00c89ec4;
        memcpy(pppuVar6,&local_90,uVar8);
        *(undefined1 *)((long)pppuVar6 + uVar8) = 0;
        uVar8 = uStack_b8;
        pppuVar6 = (undefined8 ***)local_c0;
        if (-1 < (long)local_b0) {
          uVar8 = local_b0 >> 0x38;
          pppuVar6 = &local_c0;
        }
        FUN_00547cac(&local_a8,pppuVar6,uVar8);
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar3);
    }
  }
  FUN_00547cac(&local_a8,&DAT_0019fa9e,1);
  param_1[2] = local_98;
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c89ee4  FUN_00c89ee4 =====

void FUN_00c89ee4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined1 *local_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar5 = (long *)*param_3;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_00547cac(&local_58,&DAT_0019769a,1);
  if ((*(byte *)(plVar5 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  if (lVar2 != lVar3) {
    FUN_00547cac(&local_58,&DAT_001d6255,1);
    FUN_00c8a610(&local_70,lVar2);
    uVar1 = uStack_68;
    ppuVar4 = (undefined1 **)local_70;
    if (-1 < (char)bStack_59) {
      uVar1 = (ulong)bStack_59;
      ppuVar4 = &local_70;
    }
    FUN_00547cac(&local_58,ppuVar4,uVar1);
    if ((char)bStack_59 < '\0') {
      operator_delete(local_70);
    }
    FUN_00547cac(&local_58,&DAT_001d6255,1);
    while (lVar2 = lVar2 + 0x18, lVar2 != lVar3) {
      FUN_00547cac(&local_58,&DAT_001ea264,1);
      FUN_00547cac(&local_58,&DAT_001d6255,1);
      FUN_00c8a610(&local_70,lVar2);
      uVar1 = uStack_68;
      ppuVar4 = (undefined1 **)local_70;
      if (-1 < (char)bStack_59) {
        uVar1 = (ulong)bStack_59;
        ppuVar4 = &local_70;
      }
      FUN_00547cac(&local_58,ppuVar4,uVar1);
      if ((char)bStack_59 < '\0') {
        operator_delete(local_70);
      }
      FUN_00547cac(&local_58,&DAT_001d6255,1);
    }
  }
  FUN_00547cac(&local_58,&DAT_0019fa9e,1);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[2] = local_48;
  return;
}


// ===== 00c8a094  FUN_00c8a094 =====

void FUN_00c8a094(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long lVar9;
  char *__s;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 ***local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_3 = (undefined8 *)*param_3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_00547cac(&local_a8,&DAT_001d05bd,1);
  if ((*(byte *)(param_3 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  if ((long *)*param_3 != param_3 + 1) {
    __s = "";
    plVar11 = (long *)*param_3;
    do {
      sVar6 = strlen(__s);
      FUN_00547cac(&local_a8,__s,sVar6);
      FUN_00547cac(&local_a8,&DAT_001d6255,1);
      lVar9 = (long)*(char *)((long)plVar11 + 0x37);
      if (lVar9 < 0) {
        plVar8 = (long *)plVar11[4];
        lVar9 = plVar11[5];
      }
      else {
        plVar8 = plVar11 + 4;
      }
      FUN_00547cac(&local_a8,plVar8,lVar9);
      FUN_00547cac(&local_a8,&DAT_001c2302,2);
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      uVar13 = NEON_ucvtf(plVar11[7]);
      uVar5 = snprintf((char *)&local_90,0x20,"%.16g",uVar13);
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      uVar10 = (ulong)(int)uVar5;
      if (uVar5 < 0x17) {
        local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
        ppppuVar7 = &local_c0;
      }
      else {
        uVar1 = (uVar10 & 0x7ffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        ppppuVar7 = (undefined8 ****)operator_new(uVar2);
        local_b0 = uVar2 | 0x8000000000000000;
        local_c0 = ppppuVar7;
        uStack_b8 = uVar10;
      }
      if ((undefined8 ****)((long)ppppuVar7 + uVar10) < ppppuVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((ppppuVar7 <= &local_90) && (&local_90 < (undefined8 ****)((long)ppppuVar7 + uVar10))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memcpy(ppppuVar7,&local_90,uVar10);
      *(undefined1 *)((long)ppppuVar7 + uVar10) = 0;
      uVar10 = uStack_b8;
      ppppuVar7 = (undefined8 ****)local_c0;
      if (-1 < (long)local_b0) {
        uVar10 = local_b0 >> 0x38;
        ppppuVar7 = &local_c0;
      }
      FUN_00547cac(&local_a8,ppppuVar7,uVar10);
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
        plVar8 = (long *)plVar11[1];
        if ((long *)plVar11[1] != (long *)0x0) goto LAB_00c8a298;
LAB_00c8a2a8:
        do {
          plVar12 = (long *)plVar11[2];
          bVar4 = plVar11 != (long *)*plVar12;
          plVar11 = plVar12;
        } while (bVar4);
      }
      else {
        plVar8 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_00c8a2a8;
LAB_00c8a298:
        do {
          plVar12 = plVar8;
          plVar8 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
      }
      __s = ",";
      plVar11 = plVar12;
    } while (plVar12 != param_3 + 1);
  }
  FUN_00547cac(&local_a8,&DAT_001b0cbb,1);
  param_1[2] = local_98;
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c8a354  FUN_00c8a354 =====

void FUN_00c8a354(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long lVar9;
  char *__s;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 ***local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_3 = (undefined8 *)*param_3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_00547cac(&local_a8,&DAT_001d05bd,1);
  if ((*(byte *)(param_3 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  if ((long *)*param_3 != param_3 + 1) {
    __s = "";
    plVar11 = (long *)*param_3;
    do {
      sVar6 = strlen(__s);
      FUN_00547cac(&local_a8,__s,sVar6);
      FUN_00547cac(&local_a8,&DAT_001d6255,1);
      lVar9 = (long)*(char *)((long)plVar11 + 0x37);
      if (lVar9 < 0) {
        plVar8 = (long *)plVar11[4];
        lVar9 = plVar11[5];
      }
      else {
        plVar8 = plVar11 + 4;
      }
      FUN_00547cac(&local_a8,plVar8,lVar9);
      FUN_00547cac(&local_a8,&DAT_001c2302,2);
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      uVar5 = snprintf((char *)&local_90,0x20,"%.16g",plVar11[7]);
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      uVar10 = (ulong)(int)uVar5;
      if (uVar5 < 0x17) {
        local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
        ppppuVar7 = &local_c0;
      }
      else {
        uVar1 = (uVar10 & 0x7ffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        ppppuVar7 = (undefined8 ****)operator_new(uVar2);
        local_b0 = uVar2 | 0x8000000000000000;
        local_c0 = ppppuVar7;
        uStack_b8 = uVar10;
      }
      if ((undefined8 ****)((long)ppppuVar7 + uVar10) < ppppuVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((ppppuVar7 <= &local_90) && (&local_90 < (undefined8 ****)((long)ppppuVar7 + uVar10))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memcpy(ppppuVar7,&local_90,uVar10);
      *(undefined1 *)((long)ppppuVar7 + uVar10) = 0;
      uVar10 = uStack_b8;
      ppppuVar7 = (undefined8 ****)local_c0;
      if (-1 < (long)local_b0) {
        uVar10 = local_b0 >> 0x38;
        ppppuVar7 = &local_c0;
      }
      FUN_00547cac(&local_a8,ppppuVar7,uVar10);
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
        plVar8 = (long *)plVar11[1];
        if ((long *)plVar11[1] != (long *)0x0) goto LAB_00c8a554;
LAB_00c8a564:
        do {
          plVar12 = (long *)plVar11[2];
          bVar4 = plVar11 != (long *)*plVar12;
          plVar11 = plVar12;
        } while (bVar4);
      }
      else {
        plVar8 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_00c8a564;
LAB_00c8a554:
        do {
          plVar12 = plVar8;
          plVar8 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
      }
      __s = ",";
      plVar11 = plVar12;
    } while (plVar12 != param_3 + 1);
  }
  FUN_00547cac(&local_a8,&DAT_001b0cbb,1);
  param_1[2] = local_98;
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c8a610  FUN_00c8a610 =====

void FUN_00c8a610(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  undefined8 *__src;
  undefined8 *__dest;
  
  __n = param_2[1];
  __src = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    __n = (ulong)*(byte *)((long)param_2 + 0x17);
    __src = param_2;
  }
  if (__src == (undefined8 *)0x0 && __n != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
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
  if ((undefined8 *)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
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


// ===== 00c8a71c  FUN_00c8a71c =====

void FUN_00c8a71c(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c87b10(param_1,*(undefined8 *)(lVar2 + 8));
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_00c8a790(*param_2,*param_1,lVar2);
  }
  return;
}


// ===== 00c8a790  FUN_00c8a790 =====

void FUN_00c8a790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined1 *local_40;
  
  lVar2 = FUN_00c87dcc(param_1,param_3);
  if (lVar2 != 0) {
    puStack_48 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_50 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c8a8b0(&local_50);
    FUN_00c87c2c(param_2,lVar2);
    puVar1 = puStack_48;
    for (puVar3 = local_50; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      FUN_00c8a790(param_1,param_2,*puVar3);
    }
    if (local_50 != (undefined8 *)0x0) {
      uVar5 = (ulong)((long)puStack_48 + (-8 - ((long)puStack_48 << 0x3d))) >> 3;
      uVar4 = (ulong)(((long)local_50 - (long)puStack_48 << 0x3d) -
                     ((long)local_50 - (long)puStack_48)) >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      puVar3 = puStack_48;
      if ((1 < uVar4) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar3 = puStack_48 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar3 != local_50) {
        puVar3 = puVar3 + -1;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puStack_48 = local_50;
      operator_delete(local_50);
    }
  }
  return;
}


// ===== 00c8a8b0  FUN_00c8a8b0 =====

void FUN_00c8a8b0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  size_t __n;
  long lVar8;
  ulong uVar9;
  void *__dest;
  long *plVar10;
  long *local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = *param_2;
  param_1[2] = 0;
  puVar3 = (undefined *)(**(code **)(lVar8 + 0x18))();
  if (puVar3 == PTR_s_certificate_00d53058) {
    if ((char)param_2[0x14] != '\x01') {
      return;
    }
    plVar4 = (long *)operator_new(8);
    if (plVar4 == (long *)0x0) goto LAB_00c8abc4;
    param_2 = param_2 + 0x11;
    goto LAB_00c8aa20;
  }
  if (puVar3 != PTR_s_codec_00d53060) {
    if (puVar3 == PTR_s_data_channel_00d53068) {
      return;
    }
    if (puVar3 == PTR_s_candidate_pair_00d53070) {
      if ((char)param_2[8] == '\x01') {
        plVar4 = (long *)operator_new(8);
        if (plVar4 == (long *)0x0) goto LAB_00c8abc4;
        *param_1 = plVar4;
        plVar10 = plVar4 + 1;
        *plVar4 = (long)(param_2 + 5);
        param_1[1] = plVar10;
        param_1[2] = plVar10;
      }
      else {
        plVar4 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      if ((char)param_2[0xc] == '\x01') {
        uVar9 = (long)plVar10 - (long)plVar4;
        uVar1 = ((long)uVar9 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_00c8ad5c();
LAB_00c8abf0:
                    /* WARNING: Subroutine does not return */
          FUN_005d55a4();
        }
        uVar2 = uVar9 >> 2;
        if (uVar9 >> 2 <= uVar1) {
          uVar2 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3d != 0) goto LAB_00c8abf0;
          pvVar5 = operator_new(uVar2 << 3);
        }
        plVar4 = (long *)((long)pvVar5 + uVar9);
        if (plVar4 == (long *)0x0) goto LAB_00c8abc4;
        plVar10 = plVar4 + 1;
        *plVar4 = (long)(param_2 + 9);
        __n = param_1[1] - (long)*param_1;
        __dest = (void *)((long)plVar4 - __n);
        memcpy(__dest,(void *)*param_1,__n);
        pvVar6 = (void *)*param_1;
        *param_1 = __dest;
        param_1[1] = plVar10;
        param_1[2] = (void *)((long)pvVar5 + uVar2 * 8);
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
        param_1[1] = plVar10;
      }
      if ((char)param_2[0x10] != '\x01') {
        return;
      }
      local_28 = param_2 + 0xd;
      if ((long *)param_1[2] <= plVar10) {
        uVar7 = FUN_00c8ac68(param_1,&local_28);
        param_1[1] = uVar7;
        return;
      }
      if (plVar10 != (long *)0x0) {
        *plVar10 = (long)local_28;
        param_1[1] = plVar10 + 1;
        return;
      }
      goto LAB_00c8abc4;
    }
    if ((puVar3 != PTR_s_local_candidate_00d53078) && (puVar3 != PTR_s_remote_candidate_00d53080)) {
      if (puVar3 == PTR_s_peer_connection_00d53088) {
        return;
      }
      if (puVar3 == PTR_s_inbound_rtp_00d53090) {
        FUN_00c8abf4(param_2 + 0x29,param_1);
LAB_00c8aae0:
        FUN_00c8abf4(param_2 + 10,param_1);
        plVar4 = param_2 + 0xe;
      }
      else {
        if (puVar3 == PTR_s_outbound_rtp_00d53098) {
          FUN_00c8abf4(param_2 + 0x1a,param_1);
LAB_00c8ab8c:
          FUN_00c8abf4(param_2 + 10,param_1);
          FUN_00c8abf4(param_2 + 0xe,param_1);
          param_2 = param_2 + 0x16;
          goto LAB_00c8aba8;
        }
        if (puVar3 == PTR_s_remote_inbound_rtp_00d530a0) goto LAB_00c8aae0;
        if (puVar3 == PTR_s_remote_outbound_rtp_00d530a8) goto LAB_00c8ab8c;
        if (PTR_s_media_source_00d530b0 == PTR_s_transport_00d530c0) {
          return;
        }
        if (PTR_s_media_source_00d530b8 == PTR_s_transport_00d530c0) {
          return;
        }
        if (puVar3 != PTR_s_transport_00d530c0) {
          return;
        }
        FUN_00c8abf4(param_2 + 0xd,param_1);
        FUN_00c8abf4(param_2 + 0x15,param_1);
        plVar4 = param_2 + 0x19;
      }
      FUN_00c8abf4(plVar4,param_1);
      param_2 = param_2 + 0x1d;
LAB_00c8aba8:
      FUN_00c8abf4(param_2,param_1);
      return;
    }
  }
  if ((char)param_2[8] != '\x01') {
    return;
  }
  plVar4 = (long *)operator_new(8);
  if (plVar4 == (long *)0x0) {
LAB_00c8abc4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  param_2 = param_2 + 5;
LAB_00c8aa20:
  *param_1 = plVar4;
  *plVar4 = (long)param_2;
  param_1[1] = plVar4 + 1;
  param_1[2] = plVar4 + 1;
  return;
}


// ===== 00c8abf4  FUN_00c8abf4 =====

void FUN_00c8abf4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long local_8;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar1 = *(long **)(param_2 + 8);
    local_8 = param_1;
    if (plVar1 < *(long **)(param_2 + 0x10)) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 1;
      *plVar1 = param_1;
    }
    else {
      plVar2 = (long *)FUN_00c8ac68(param_2,&local_8);
    }
    *(long **)(param_2 + 8) = plVar2;
  }
  return;
}


// ===== 00c8ac68  FUN_00c8ac68 =====

undefined8 * FUN_00c8ac68(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00c8ad5c();
LAB_00c8ad58:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00c8ad58;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c8ad5c  FUN_00c8ad5c =====

void FUN_00c8ad5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c8ad74  FUN_00c8ad74 =====

void * FUN_00c8ad74(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xa8);
  FUN_00c9563c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8adb0  FUN_00c8adb0 =====

char * FUN_00c8adb0(void)

{
  return "certificate";
}


// ===== 00c8adc0  FUN_00c8adc0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8adc0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  long local_d8;
  ulong local_d0;
  undefined1 local_c8;
  undefined1 ***local_c0;
  undefined1 local_b8;
  undefined1 **local_b0;
  ulong *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90 [4];
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  local_e8 = param_2 + 0x28;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e0 = 6;
  FUN_00c88bc4(&local_a0,"fingerprint",&local_e8);
  local_b0 = (undefined1 **)(param_2 + 0x48);
  local_a8 = (ulong *)CONCAT71(local_a8._1_7_,6);
  FUN_00c88bc4(local_90 + 1,"fingerprintAlgorithm",&local_b0);
  local_c0 = (undefined1 ***)(param_2 + 0x68);
  local_b8 = 6;
  FUN_00c88bc4(&puStack_70,"base64Certificate",&local_c0);
  local_d0 = param_2 + 0x88;
  local_c8 = 6;
  FUN_00c88bc4(&puStack_58,"issuerCertificateId",&local_d0);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 4);
  local_d0 = 0;
  do {
    local_b0 = &local_a0;
    local_a8 = &local_d0;
    if ((ulong)*(byte *)(local_90 + local_d0 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_c0 = &local_b0;
    (*(code *)(&PTR_FUN_00d4ecf0)[*(byte *)(local_90 + local_d0 * 3)])
              (&local_e8,&local_c0,&puStack_98 + local_d0 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_d8;
      plVar1[1] = CONCAT71(uStack_df,uStack_e0);
      *plVar1 = local_e8;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_e8);
    }
    param_1[1] = plVar2;
    local_d0 = local_d0 + 1;
  } while (local_d0 < 4);
  return;
}


// ===== 00c8af6c  FUN_00c8af6c =====

void FUN_00c8af6c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_00d53050 + 0x10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4e8a0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


// ===== 00c8affc  FUN_00c8affc =====

void FUN_00c8affc(long param_1)

{
  if ((*(char *)(param_1 + 0xa0) == '\x01') && (*(char *)(param_1 + 0x9f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x7f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(char *)(param_1 + 0x5f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c8b0b4  FUN_00c8b0b4 =====

void FUN_00c8b0b4(void *param_1)

{
  FUN_00c8affc();
  operator_delete(param_1);
  return;
}


// ===== 00c8b0e4  FUN_00c8b0e4 =====

void FUN_00c8b0e4(void)

{
  FUN_00c8b0ec();
  return;
}


// ===== 00c8b0ec  FUN_00c8b0ec =====

undefined8 * FUN_00c8b0ec(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0xa0);
  FUN_00c88670(puVar2,param_1);
  cVar1 = *(char *)(param_1 + 0x40);
  *puVar2 = &PTR_FUN_00d4e8d8;
  puVar3 = puVar2 + 5;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puVar2[6] = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = uVar5;
      puVar2[7] = uVar4;
    }
    *(undefined1 *)(puVar2 + 8) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  puVar3 = puVar2 + 10;
  *(undefined1 *)puVar3 = 0;
  puVar2[9] = uVar4;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x67) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
      *puVar3 = uVar5;
      puVar2[0xc] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0xd) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x75);
  puVar3 = puVar2 + 0x10;
  *(undefined1 *)puVar3 = 0;
  puVar2[0xe] = uVar4;
  *(undefined8 *)((long)puVar2 + 0x75) = uVar5;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x97) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      puVar2[0x11] = *(undefined8 *)(param_1 + 0x88);
      *puVar3 = uVar5;
      puVar2[0x12] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0x13) = 1;
  }
  return puVar2;
}


// ===== 00c8b218  FUN_00c8b218 =====

char * FUN_00c8b218(void)

{
  return "codec";
}


// ===== 00c8b228  FUN_00c8b228 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8b228(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  long local_148;
  long local_140;
  undefined1 local_138;
  long local_130;
  undefined1 local_128;
  ulong local_120;
  undefined1 local_118;
  undefined1 ***local_110;
  undefined1 local_108;
  undefined1 **local_100;
  ulong *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0 [4];
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  local_158 = param_2 + 0x28;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[0] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_150 = 6;
  FUN_00c88bc4(&local_f0,"transportId",&local_158);
  local_100 = (undefined1 **)(param_2 + 0x48);
  local_f8 = (ulong *)CONCAT71(local_f8._1_7_,2);
  FUN_00c88bc4(local_e0 + 1,"payloadType",&local_100);
  local_110 = (undefined1 ***)(param_2 + 0x50);
  local_108 = 6;
  FUN_00c88bc4(&local_c0,"mimeType",&local_110);
  local_120 = param_2 + 0x70;
  local_118 = 2;
  FUN_00c88bc4(&puStack_a8,"clockRate",&local_120);
  local_130 = param_2 + 0x78;
  local_128 = 2;
  FUN_00c88bc4(&puStack_90,"channels",&local_130);
  local_140 = param_2 + 0x80;
  local_138 = 6;
  FUN_00c88bc4(&puStack_78,"sdpFmtpLine",&local_140);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 6);
  local_120 = 0;
  do {
    local_100 = &local_f0;
    local_f8 = &local_120;
    if ((ulong)*(byte *)(local_e0 + local_120 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_110 = &local_100;
    (*(code *)(&PTR_FUN_00d4ed70)[*(byte *)(local_e0 + local_120 * 3)])
              (&local_158,&local_110,&puStack_e8 + local_120 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_148;
      plVar1[1] = CONCAT71(uStack_14f,uStack_150);
      *plVar1 = local_158;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_158);
    }
    param_1[1] = plVar2;
    local_120 = local_120 + 1;
  } while (local_120 < 6);
  return;
}


// ===== 00c8b430  FUN_00c8b430 =====

void FUN_00c8b430(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_00d53050 + 0x10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4e8d8;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}


// ===== 00c8b4d0  FUN_00c8b4d0 =====

void FUN_00c8b4d0(long param_1)

{
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(char *)(param_1 + 0x97) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if ((*(char *)(param_1 + 0x68) == '\x01') && (*(char *)(param_1 + 0x67) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c8b564  FUN_00c8b564 =====

void FUN_00c8b564(void *param_1)

{
  FUN_00c8b4d0();
  operator_delete(param_1);
  return;
}


// ===== 00c8b594  FUN_00c8b594 =====

void FUN_00c8b594(void)

{
  FUN_00c8b59c();
  return;
}


// ===== 00c8b59c  FUN_00c8b59c =====

undefined8 * FUN_00c8b59c(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)operator_new(0xc0);
  FUN_00c88670(puVar2,param_1);
  cVar1 = *(char *)(param_1 + 0x40);
  *puVar2 = &PTR_FUN_00d4e910;
  puVar3 = puVar2 + 5;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puVar2[6] = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = uVar5;
      puVar2[7] = uVar4;
    }
    *(undefined1 *)(puVar2 + 8) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  puVar3 = puVar2 + 9;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x5f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      puVar2[10] = *(undefined8 *)(param_1 + 0x50);
      *puVar3 = uVar5;
      puVar2[0xb] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0xc) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  puVar3 = puVar2 + 0xe;
  *(undefined1 *)puVar3 = 0;
  puVar2[0xd] = uVar4;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x87) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      puVar2[0xf] = *(undefined8 *)(param_1 + 0x78);
      *puVar3 = uVar5;
      puVar2[0x10] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0x11) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  uVar8 = *(undefined8 *)(param_1 + 0xb1);
  uVar7 = *(undefined8 *)(param_1 + 0xa9);
  puVar2[0x13] = *(undefined8 *)(param_1 + 0x98);
  puVar2[0x12] = uVar4;
  puVar2[0x15] = uVar6;
  puVar2[0x14] = uVar5;
  *(undefined8 *)((long)puVar2 + 0xb1) = uVar8;
  *(undefined8 *)((long)puVar2 + 0xa9) = uVar7;
  return puVar2;
}


// ===== 00c8b6c8  FUN_00c8b6c8 =====

char * FUN_00c8b6c8(void)

{
  return "data-channel";
}


// ===== 00c8b6d8  FUN_00c8b6d8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8b6d8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  long local_198;
  long local_190;
  undefined1 local_188;
  long local_180;
  undefined1 local_178;
  long local_170;
  undefined1 local_168;
  long local_160;
  undefined1 local_158;
  ulong local_150;
  undefined1 local_148;
  undefined1 ***local_140;
  undefined1 local_138;
  undefined1 **local_130;
  ulong *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110 [4];
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  local_1a8 = param_2 + 0x28;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_110[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_110[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_110[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_110[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_1a0 = 6;
  FUN_00c88bc4(&local_120,"label",&local_1a8);
  local_130 = (undefined1 **)(param_2 + 0x48);
  local_128 = (ulong *)CONCAT71(local_128._1_7_,6);
  FUN_00c88bc4(local_110 + 1,"protocol",&local_130);
  local_140 = (undefined1 ***)(param_2 + 0x68);
  local_138 = 1;
  FUN_00c88bc4(&puStack_f0,"dataChannelIdentifier",&local_140);
  local_150 = param_2 + 0x70;
  local_148 = 6;
  FUN_00c88bc4(&puStack_d8,"state",&local_150);
  local_160 = param_2 + 0x90;
  local_158 = 2;
  FUN_00c88bc4(&local_c0,"messagesSent",&local_160);
  local_170 = param_2 + 0x98;
  local_168 = 4;
  FUN_00c88bc4(&puStack_a8,"bytesSent",&local_170);
  local_180 = param_2 + 0xa8;
  local_178 = 2;
  FUN_00c88bc4(&puStack_90,"messagesReceived",&local_180);
  local_190 = param_2 + 0xb0;
  local_188 = 4;
  FUN_00c88bc4(&puStack_78,"bytesReceived",&local_190);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 8);
  local_150 = 0;
  do {
    local_130 = &local_120;
    local_128 = &local_150;
    if ((ulong)*(byte *)(local_110 + local_150 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_140 = &local_130;
    (*(code *)(&PTR_FUN_00d4edf0)[*(byte *)(local_110 + local_150 * 3)])
              (&local_1a8,&local_140,&puStack_118 + local_150 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_198;
      plVar1[1] = CONCAT71(uStack_19f,uStack_1a0);
      *plVar1 = local_1a8;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_1a8);
    }
    param_1[1] = plVar2;
    local_150 = local_150 + 1;
  } while (local_150 < 8);
  return;
}


// ===== 00c8b92c  FUN_00c8b92c =====

void FUN_00c8b92c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_00d53050 + 0x10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4e910;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return;
}


// ===== 00c8b9dc  FUN_00c8b9dc =====

void FUN_00c8b9dc(long param_1)

{
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x87) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(char *)(param_1 + 0x5f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c8ba70  FUN_00c8ba70 =====

void FUN_00c8ba70(void *param_1)

{
  FUN_00c8b9dc();
  operator_delete(param_1);
  return;
}


// ===== 00c8baa0  FUN_00c8baa0 =====

void * FUN_00c8baa0(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d0);
  FUN_00c95784(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8badc  FUN_00c8badc =====

char * FUN_00c8badc(void)

{
  return "candidate-pair";
}


// ===== 00c8baec  FUN_00c8baec =====

void FUN_00c8baec(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_428;
  undefined1 uStack_420;
  undefined7 uStack_41f;
  long local_418;
  long local_410;
  undefined1 local_408;
  long local_400;
  undefined1 local_3f8;
  long local_3f0;
  undefined1 local_3e8;
  long local_3e0;
  undefined1 local_3d8;
  long local_3d0;
  undefined1 local_3c8;
  long local_3c0;
  undefined1 local_3b8;
  long local_3b0;
  undefined1 local_3a8;
  long local_3a0;
  undefined1 local_398;
  long local_390;
  undefined1 local_388;
  long local_380;
  undefined1 local_378;
  long local_370;
  undefined1 local_368;
  long local_360;
  undefined1 local_358;
  long local_350;
  undefined1 local_348;
  long local_340;
  undefined1 local_338;
  long local_330;
  undefined1 local_328;
  long local_320;
  undefined1 local_318;
  long local_310;
  undefined1 local_308;
  long local_300;
  undefined1 local_2f8;
  long local_2f0;
  undefined1 local_2e8;
  long local_2e0;
  undefined1 local_2d8;
  ulong local_2d0;
  undefined1 local_2c8;
  undefined1 **local_2c0;
  undefined1 local_2b8;
  undefined1 *local_2b0;
  ulong *local_2a8;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  byte local_290 [560];
  
  memset(auStack_2a0,0xaa,0x240);
  local_428 = param_2 + 0x28;
  uStack_420 = 6;
  FUN_00c88bc4(auStack_2a0,"transportId",&local_428);
  local_2b0 = (undefined1 *)(param_2 + 0x48);
  local_2a8 = (ulong *)CONCAT71(local_2a8._1_7_,6);
  FUN_00c88bc4(local_290 + 8,"localCandidateId",&local_2b0);
  local_2c0 = (undefined1 **)(param_2 + 0x68);
  local_2b8 = 6;
  FUN_00c88bc4(local_290 + 0x20,"remoteCandidateId",&local_2c0);
  local_2d0 = param_2 + 0x88;
  local_2c8 = 6;
  FUN_00c88bc4(local_290 + 0x38,"state",&local_2d0);
  local_2e0 = param_2 + 0xa8;
  local_2d8 = 4;
  FUN_00c88bc4(local_290 + 0x50,"priority",&local_2e0);
  local_2f0 = param_2 + 0xb8;
  local_2e8 = 0;
  FUN_00c88bc4(local_290 + 0x68,"nominated",&local_2f0);
  local_300 = param_2 + 0xba;
  local_2f8 = 0;
  FUN_00c88bc4(local_290 + 0x80,"writable",&local_300);
  local_310 = param_2 + 0xc0;
  local_308 = 4;
  FUN_00c88bc4(local_290 + 0x98,"packetsSent",&local_310);
  local_320 = param_2 + 0xd0;
  local_318 = 4;
  FUN_00c88bc4(local_290 + 0xb0,"packetsReceived",&local_320);
  local_330 = param_2 + 0xe0;
  local_328 = 4;
  FUN_00c88bc4(local_290 + 200,"bytesSent",&local_330);
  local_340 = param_2 + 0xf0;
  local_338 = 4;
  FUN_00c88bc4(local_290 + 0xe0,"bytesReceived",&local_340);
  local_350 = param_2 + 0x100;
  local_348 = 5;
  FUN_00c88bc4(local_290 + 0xf8,"totalRoundTripTime",&local_350);
  local_360 = param_2 + 0x110;
  local_358 = 5;
  FUN_00c88bc4(local_290 + 0x110,"currentRoundTripTime",&local_360);
  local_370 = param_2 + 0x120;
  local_368 = 5;
  FUN_00c88bc4(local_290 + 0x128,"availableOutgoingBitrate",&local_370);
  local_380 = param_2 + 0x130;
  local_378 = 5;
  FUN_00c88bc4(local_290 + 0x140,"availableIncomingBitrate",&local_380);
  local_390 = param_2 + 0x140;
  local_388 = 4;
  FUN_00c88bc4(local_290 + 0x158,"requestsReceived",&local_390);
  local_3a0 = param_2 + 0x150;
  local_398 = 4;
  FUN_00c88bc4(local_290 + 0x170,"requestsSent",&local_3a0);
  local_3b0 = param_2 + 0x160;
  local_3a8 = 4;
  FUN_00c88bc4(local_290 + 0x188,"responsesReceived",&local_3b0);
  local_3c0 = param_2 + 0x170;
  local_3b8 = 4;
  FUN_00c88bc4(local_290 + 0x1a0,"responsesSent",&local_3c0);
  local_3d0 = param_2 + 0x180;
  local_3c8 = 4;
  FUN_00c88bc4(local_290 + 0x1b8,"consentRequestsSent",&local_3d0);
  local_3e0 = param_2 + 400;
  local_3d8 = 4;
  FUN_00c88bc4(local_290 + 0x1d0,"packetsDiscardedOnSend",&local_3e0);
  local_3f0 = param_2 + 0x1a0;
  local_3e8 = 4;
  FUN_00c88bc4(local_290 + 0x1e8,"bytesDiscardedOnSend",&local_3f0);
  local_400 = param_2 + 0x1b0;
  local_3f8 = 5;
  FUN_00c88bc4(local_290 + 0x200,"lastPacketReceivedTimestamp",&local_400);
  local_410 = param_2 + 0x1c0;
  local_408 = 5;
  FUN_00c88bc4(local_290 + 0x218,"lastPacketSentTimestamp",&local_410);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 0x18);
  local_2d0 = 0;
  do {
    local_2b0 = auStack_2a0;
    local_2a8 = &local_2d0;
    if ((ulong)local_290[local_2d0 * 0x18] == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_2c0 = &local_2b0;
    (*(code *)(&PTR_FUN_00d4ee70)[local_290[local_2d0 * 0x18]])
              (&local_428,&local_2c0,auStack_298 + local_2d0 * 0x18);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_418;
      plVar1[1] = CONCAT71(uStack_41f,uStack_420);
      *plVar1 = local_428;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_428);
    }
    param_1[1] = plVar2;
    local_2d0 = local_2d0 + 1;
  } while (local_2d0 < 0x18);
  return;
}


// ===== 00c8bf30  FUN_00c8bf30 =====

void FUN_00c8bf30(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_00d53050 + 0x10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4e948;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return;
}


// ===== 00c8c054  FUN_00c8c054 =====

void FUN_00c8c054(long param_1)

{
  if ((*(char *)(param_1 + 0xa0) == '\x01') && (*(char *)(param_1 + 0x9f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x7f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(char *)(param_1 + 0x5f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c8c10c  FUN_00c8c10c =====

void FUN_00c8c10c(void *param_1)

{
  FUN_00c8c054();
  operator_delete(param_1);
  return;
}


// ===== 00c8c13c  FUN_00c8c13c =====

void * FUN_00c8c13c(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1f0);
  FUN_00c958d8(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8c178  FUN_00c8c178 =====

char * FUN_00c8c178(void)

{
  return "abstract-ice-candidate";
}


// ===== 00c8c188  FUN_00c8c188 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8c188(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_338;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  long local_328;
  long local_320;
  undefined1 local_318;
  long local_310;
  undefined1 local_308;
  long local_300;
  undefined1 local_2f8;
  long local_2f0;
  undefined1 local_2e8;
  long local_2e0;
  undefined1 local_2d8;
  long local_2d0;
  undefined1 local_2c8;
  long local_2c0;
  undefined1 local_2b8;
  long local_2b0;
  undefined1 local_2a8;
  long local_2a0;
  undefined1 local_298;
  long local_290;
  undefined1 local_288;
  long local_280;
  undefined1 local_278;
  long local_270;
  undefined1 local_268;
  long local_260;
  undefined1 local_258;
  long local_250;
  undefined1 local_248;
  ulong local_240;
  undefined1 local_238;
  undefined1 ***local_230;
  undefined1 local_228;
  undefined1 **local_220;
  ulong *local_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *local_200 [4];
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  local_338 = param_2 + 0x28;
  local_200[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_200[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_200[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_200[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_330 = 6;
  FUN_00c88bc4(&local_210,"transportId",&local_338);
  local_220 = (undefined1 **)(param_2 + 0x48);
  local_218 = (ulong *)((ulong)local_218 & 0xffffffffffffff00);
  FUN_00c88bc4(local_200 + 1,"isRemote",&local_220);
  local_230 = (undefined1 ***)(param_2 + 0x50);
  local_228 = 6;
  FUN_00c88bc4(&local_1e0,"networkType",&local_230);
  local_240 = param_2 + 0x70;
  local_238 = 6;
  FUN_00c88bc4(&puStack_1c8,&DAT_001c472a,&local_240);
  local_250 = param_2 + 0x90;
  local_248 = 6;
  FUN_00c88bc4(&puStack_1b0,"address",&local_250);
  local_260 = param_2 + 0xb0;
  local_258 = 1;
  FUN_00c88bc4(&puStack_198,&DAT_001c7ffa,&local_260);
  local_270 = param_2 + 0xb8;
  local_268 = 6;
  FUN_00c88bc4(&local_180,"protocol",&local_270);
  local_280 = param_2 + 0xd8;
  local_278 = 6;
  FUN_00c88bc4(&puStack_168,"relayProtocol",&local_280);
  local_290 = param_2 + 0xf8;
  local_288 = 6;
  FUN_00c88bc4(&puStack_150,"candidateType",&local_290);
  local_2a0 = param_2 + 0x118;
  local_298 = 1;
  FUN_00c88bc4(&puStack_138,"priority",&local_2a0);
  local_2b0 = param_2 + 0x120;
  local_2a8 = 6;
  FUN_00c88bc4(&local_120,&DAT_001e0e43,&local_2b0);
  local_2c0 = param_2 + 0x140;
  local_2b8 = 6;
  FUN_00c88bc4(&puStack_108,"foundation",&local_2c0);
  local_2d0 = param_2 + 0x160;
  local_2c8 = 6;
  FUN_00c88bc4(&puStack_f0,"relatedAddress",&local_2d0);
  local_2e0 = param_2 + 0x180;
  local_2d8 = 1;
  FUN_00c88bc4(&puStack_d8,"relatedPort",&local_2e0);
  local_2f0 = param_2 + 0x188;
  local_2e8 = 6;
  FUN_00c88bc4(&local_c0,"usernameFragment",&local_2f0);
  local_300 = param_2 + 0x1a8;
  local_2f8 = 6;
  FUN_00c88bc4(&puStack_a8,"tcpType",&local_300);
  local_310 = param_2 + 0x1c8;
  local_308 = 0;
  FUN_00c88bc4(&puStack_90,&DAT_001c443a,&local_310);
  local_320 = param_2 + 0x1d0;
  local_318 = 6;
  FUN_00c88bc4(&puStack_78,"networkAdapterType",&local_320);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 0x12);
  local_240 = 0;
  do {
    local_220 = &local_210;
    local_218 = &local_240;
    if ((ulong)*(byte *)(local_200 + local_240 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_230 = &local_220;
    (*(code *)(&PTR_FUN_00d4eef0)[*(byte *)(local_200 + local_240 * 3)])
              (&local_338,&local_230,&puStack_208 + local_240 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_328;
      plVar1[1] = CONCAT71(uStack_32f,uStack_330);
      *plVar1 = local_338;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_338);
    }
    param_1[1] = plVar2;
    local_240 = local_240 + 1;
  } while (local_240 < 0x12);
  return;
}


// ===== 00c8c534  FUN_00c8c534 =====

void FUN_00c8c534(void *param_1)

{
  FUN_00c90b2c();
  operator_delete(param_1);
  return;
}


// ===== 00c8c564  FUN_00c8c564 =====

void FUN_00c8c564(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4e980;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 9) = 0x100;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((long)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  if (lVar2 < 0) {
    operator_delete(pvVar4);
  }
  *param_1 = (long)&PTR_FUN_00d4e9b8;
  return;
}


// ===== 00c8c684  FUN_00c8c684 =====

undefined8 * FUN_00c8c684(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  FUN_00c958d8(puVar1,param_1);
  *puVar1 = &PTR_FUN_00d4e9b8;
  return puVar1;
}


// ===== 00c8c6cc  FUN_00c8c6cc =====

char * FUN_00c8c6cc(void)

{
  return "local-candidate";
}


// ===== 00c8c6dc  FUN_00c8c6dc =====

void FUN_00c8c6dc(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4e980;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((long)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  if (lVar2 < 0) {
    operator_delete(pvVar4);
  }
  *param_1 = (long)&PTR_FUN_00d4e9f0;
  return;
}


// ===== 00c8c7fc  FUN_00c8c7fc =====

undefined8 * FUN_00c8c7fc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  FUN_00c958d8(puVar1,param_1);
  *puVar1 = &PTR_FUN_00d4e9f0;
  return puVar1;
}


// ===== 00c8c844  FUN_00c8c844 =====

char * FUN_00c8c844(void)

{
  return "remote-candidate";
}


// ===== 00c8c854  FUN_00c8c854 =====

undefined8 * FUN_00c8c854(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  FUN_00c88670(puVar1,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_thunk_FUN_00c886d0_00d4ea28;
  uVar2 = *(undefined8 *)(param_1 + 0x2d);
  puVar1[5] = uVar3;
  *(undefined8 *)((long)puVar1 + 0x2d) = uVar2;
  return puVar1;
}


// ===== 00c8c8ac  FUN_00c8c8ac =====

char * FUN_00c8c8ac(void)

{
  return "peer-connection";
}


// ===== 00c8c8bc  FUN_00c8c8bc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8c8bc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long local_a0;
  ulong local_98;
  undefined1 **local_90;
  ulong *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70 [5];
  undefined1 ***local_48;
  
  local_b0 = param_2 + 0x28;
  local_70[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = 2;
  FUN_00c88bc4(&local_80,"dataChannelsOpened",&local_b0);
  local_90 = (undefined1 **)(param_2 + 0x30);
  local_88 = (ulong *)CONCAT71(local_88._1_7_,2);
  FUN_00c88bc4(local_70 + 1,"dataChannelsClosed",&local_90);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 2);
  local_98 = 0;
  do {
    local_90 = &local_80;
    local_88 = &local_98;
    if ((ulong)*(byte *)(local_70 + local_98 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_48 = &local_90;
    (*(code *)(&PTR_FUN_00d4ef70)[*(byte *)(local_70 + local_98 * 3)])
              (&local_b0,&local_48,&puStack_78 + local_98 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_a0;
      plVar1[1] = CONCAT71(uStack_a7,uStack_a8);
      *plVar1 = local_b0;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_b0);
    }
    param_1[1] = plVar2;
    local_98 = local_98 + 1;
  } while (local_98 < 2);
  return;
}


// ===== 00c8ca24  FUN_00c8ca24 =====

void FUN_00c8ca24(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_00d53050 + 0x10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_thunk_FUN_00c886d0_00d4ea28;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  return;
}


// ===== 00c8caa4  thunk_FUN_00c886d0 =====

void thunk_FUN_00c886d0(void)

{
  FUN_00c886d0();
  return;
}


// ===== 00c8caac  FUN_00c8caac =====

void FUN_00c8caac(void *param_1)

{
  FUN_00c886d0();
  operator_delete(param_1);
  return;
}


// ===== 00c8cadc  FUN_00c8cadc =====

void FUN_00c8cadc(void)

{
  FUN_00c8cae4();
  return;
}


// ===== 00c8cae4  FUN_00c8cae4 =====

undefined8 * FUN_00c8cae4(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x90);
  FUN_00c88670(puVar2,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_00d4ea60;
  cVar1 = *(char *)(param_1 + 0x48);
  puVar2[5] = uVar4;
  puVar3 = puVar2 + 6;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x47) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      puVar2[7] = *(undefined8 *)(param_1 + 0x38);
      *puVar3 = uVar5;
      puVar2[8] = uVar4;
    }
    *(undefined1 *)(puVar2 + 9) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x68);
  puVar3 = puVar2 + 10;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x67) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
      *puVar3 = uVar5;
      puVar2[0xc] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0xd) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x88);
  puVar3 = puVar2 + 0xe;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x87) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      puVar2[0xf] = *(undefined8 *)(param_1 + 0x78);
      *puVar3 = uVar5;
      puVar2[0x10] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0x11) = 1;
  }
  return puVar2;
}


// ===== 00c8cc00  FUN_00c8cc00 =====

undefined * FUN_00c8cc00(void)

{
  return &DAT_00259df6;
}


// ===== 00c8cc10  FUN_00c8cc10 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8cc10(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  long local_d8;
  ulong local_d0;
  undefined1 local_c8;
  undefined1 ***local_c0;
  undefined1 local_b8;
  undefined1 **local_b0;
  ulong *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90 [4];
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  local_e8 = param_2 + 0x28;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e0 = 2;
  FUN_00c88bc4(&local_a0,&DAT_001c7baf,&local_e8);
  local_b0 = (undefined1 **)(param_2 + 0x30);
  local_a8 = (ulong *)CONCAT71(local_a8._1_7_,6);
  FUN_00c88bc4(local_90 + 1,&DAT_001c472d,&local_b0);
  local_c0 = (undefined1 ***)(param_2 + 0x50);
  local_b8 = 6;
  FUN_00c88bc4(&puStack_70,"transportId",&local_c0);
  local_d0 = param_2 + 0x70;
  local_c8 = 6;
  FUN_00c88bc4(&puStack_58,"codecId",&local_d0);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 4);
  local_d0 = 0;
  do {
    local_b0 = &local_a0;
    local_a8 = &local_d0;
    if ((ulong)*(byte *)(local_90 + local_d0 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_c0 = &local_b0;
    (*(code *)(&PTR_FUN_00d4eff0)[*(byte *)(local_90 + local_d0 * 3)])
              (&local_e8,&local_c0,&puStack_98 + local_d0 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_d8;
      plVar1[1] = CONCAT71(uStack_df,uStack_e0);
      *plVar1 = local_e8;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_e8);
    }
    param_1[1] = plVar2;
    local_d0 = local_d0 + 1;
  } while (local_d0 < 4);
  return;
}


// ===== 00c8cdc0  FUN_00c8cdc0 =====

void FUN_00c8cdc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4ea60;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)((long)param_1 + 0x87) < '\0')) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(char *)((long)param_1 + 0x67) < '\0')) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)((long)param_1 + 0x47) < '\0')) {
    operator_delete((void *)param_1[6]);
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c8ce60  FUN_00c8ce60 =====

void FUN_00c8ce60(void *param_1)

{
  FUN_00c8cdc0();
  operator_delete(param_1);
  return;
}


// ===== 00c8ce90  FUN_00c8ce90 =====

void * FUN_00c8ce90(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xe8);
  FUN_00c95cbc(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8cecc  FUN_00c8cecc =====

char * FUN_00c8cecc(void)

{
  return "received-rtp";
}


// ===== 00c8cedc  FUN_00c8cedc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8cedc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long local_138;
  long local_130;
  undefined1 local_128;
  long local_120;
  undefined1 local_118;
  ulong local_110;
  undefined1 local_108;
  undefined1 ***local_100;
  undefined1 local_f8;
  undefined1 **local_f0;
  ulong *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0 [4];
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
  
  local_148 = param_2 + 0x90;
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
  local_d0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[0] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_140 = 5;
  FUN_00c88bc4(&local_e0,"jitter",&local_148);
  local_f0 = (undefined1 **)(param_2 + 0xa0);
  local_e8 = (ulong *)CONCAT71(local_e8._1_7_,1);
  FUN_00c88bc4(local_d0 + 1,"packetsLost",&local_f0);
  local_100 = (undefined1 ***)(param_2 + 0xa8);
  local_f8 = 3;
  FUN_00c88bc4(&local_b0,"packetsReceivedWithEct1",&local_100);
  local_110 = param_2 + 0xb8;
  local_108 = 3;
  FUN_00c88bc4(&puStack_98,"packetsReceivedWithCe",&local_110);
  local_120 = param_2 + 200;
  local_118 = 3;
  FUN_00c88bc4(&puStack_80,"packetsReportedAsLost",&local_120);
  local_130 = param_2 + 0xd8;
  local_128 = 3;
  FUN_00c88bc4(&puStack_68,"packetsReportedAsLostButRecovered",&local_130);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8cc10(param_1,param_2,param_3 + 6);
  local_110 = 0;
  do {
    local_f0 = &local_e0;
    local_e8 = &local_110;
    if ((ulong)*(byte *)(local_d0 + local_110 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_100 = &local_f0;
    (*(code *)(&PTR_FUN_00d4f070)[*(byte *)(local_d0 + local_110 * 3)])
              (&local_148,&local_100,&puStack_d8 + local_110 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_138;
      plVar1[1] = CONCAT71(uStack_13f,uStack_140);
      *plVar1 = local_148;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_148);
    }
    param_1[1] = plVar2;
    local_110 = local_110 + 1;
  } while (local_110 < 6);
  return;
}


// ===== 00c8d0e0  FUN_00c8d0e0 =====

void FUN_00c8d0e0(void *param_1)

{
  FUN_00c8cdc0();
  operator_delete(param_1);
  return;
}


// ===== 00c8d110  FUN_00c8d110 =====

void * FUN_00c8d110(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xb0);
  FUN_00c95df4(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8d14c  FUN_00c8d14c =====

char * FUN_00c8d14c(void)

{
  return "sent-rtp";
}


// ===== 00c8d15c  FUN_00c8d15c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8d15c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long local_a0;
  ulong local_98;
  undefined1 **local_90;
  ulong *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70 [5];
  undefined1 ***local_48;
  
  local_b0 = param_2 + 0x90;
  local_70[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = 4;
  FUN_00c88bc4(&local_80,"packetsSent",&local_b0);
  local_90 = (undefined1 **)(param_2 + 0xa0);
  local_88 = (ulong *)CONCAT71(local_88._1_7_,4);
  FUN_00c88bc4(local_70 + 1,"bytesSent",&local_90);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8cc10(param_1,param_2,param_3 + 2);
  local_98 = 0;
  do {
    local_90 = &local_80;
    local_88 = &local_98;
    if ((ulong)*(byte *)(local_70 + local_98 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_48 = &local_90;
    (*(code *)(&PTR_FUN_00d4f0f0)[*(byte *)(local_70 + local_98 * 3)])
              (&local_b0,&local_48,&puStack_78 + local_98 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_a0;
      plVar1[1] = CONCAT71(uStack_a7,uStack_a8);
      *plVar1 = local_b0;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_b0);
    }
    param_1[1] = plVar2;
    local_98 = local_98 + 1;
  } while (local_98 < 2);
  return;
}


// ===== 00c8d2c4  FUN_00c8d2c4 =====

void FUN_00c8d2c4(void *param_1)

{
  FUN_00c8cdc0();
  operator_delete(param_1);
  return;
}


// ===== 00c8d2f4  FUN_00c8d2f4 =====

void * FUN_00c8d2f4(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x4d0);
  FUN_00c95f1c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8d330  FUN_00c8d330 =====

char * FUN_00c8d330(void)

{
  return "inbound-rtp";
}


// ===== 00c8d340  FUN_00c8d340 =====

void FUN_00c8d340(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_a70;
  undefined1 uStack_a68;
  undefined7 uStack_a67;
  long local_a60;
  long local_a58;
  undefined1 local_a50;
  long local_a48;
  undefined1 local_a40;
  long local_a38;
  undefined1 local_a30;
  long local_a28;
  undefined1 local_a20;
  long local_a18;
  undefined1 local_a10;
  long local_a08;
  undefined1 local_a00;
  long local_9f8;
  undefined1 local_9f0;
  long local_9e8;
  undefined1 local_9e0;
  long local_9d8;
  undefined1 local_9d0;
  long local_9c8;
  undefined1 local_9c0;
  long local_9b8;
  undefined1 local_9b0;
  long local_9a8;
  undefined1 local_9a0;
  long local_998;
  undefined1 local_990;
  long local_988;
  undefined1 local_980;
  long local_978;
  undefined1 local_970;
  long local_968;
  undefined1 local_960;
  long local_958;
  undefined1 local_950;
  long local_948;
  undefined1 local_940;
  long local_938;
  undefined1 local_930;
  long local_928;
  undefined1 local_920;
  long local_918;
  undefined1 local_910;
  long local_908;
  undefined1 local_900;
  long local_8f8;
  undefined1 local_8f0;
  long local_8e8;
  undefined1 local_8e0;
  long local_8d8;
  undefined1 local_8d0;
  long local_8c8;
  undefined1 local_8c0;
  long local_8b8;
  undefined1 local_8b0;
  long local_8a8;
  undefined1 local_8a0;
  long local_898;
  undefined1 local_890;
  long local_888;
  undefined1 local_880;
  long local_878;
  undefined1 local_870;
  long local_868;
  undefined1 local_860;
  long local_858;
  undefined1 local_850;
  long local_848;
  undefined1 local_840;
  long local_838;
  undefined1 local_830;
  long local_828;
  undefined1 local_820;
  long local_818;
  undefined1 local_810;
  long local_808;
  undefined1 local_800;
  long local_7f8;
  undefined1 local_7f0;
  long local_7e8;
  undefined1 local_7e0;
  long local_7d8;
  undefined1 local_7d0;
  long local_7c8;
  undefined1 local_7c0;
  long local_7b8;
  undefined1 local_7b0;
  long local_7a8;
  undefined1 local_7a0;
  long local_798;
  undefined1 local_790;
  long local_788;
  undefined1 local_780;
  long local_778;
  undefined1 local_770;
  long local_768;
  undefined1 local_760;
  long local_758;
  undefined1 local_750;
  long local_748;
  undefined1 local_740;
  long local_738;
  undefined1 local_730;
  long local_728;
  undefined1 local_720;
  long local_718;
  undefined1 local_710;
  long local_708;
  undefined1 local_700;
  long local_6f8;
  undefined1 local_6f0;
  long local_6e8;
  undefined1 local_6e0;
  long local_6d8;
  undefined1 local_6d0;
  long local_6c8;
  undefined1 local_6c0;
  long local_6b8;
  undefined1 local_6b0;
  long local_6a8;
  undefined1 local_6a0;
  ulong local_698;
  undefined1 local_690;
  undefined1 **local_688;
  undefined1 local_680;
  undefined1 *local_678;
  ulong *local_670;
  undefined1 auStack_668 [8];
  undefined1 auStack_660 [8];
  byte local_658 [1528];
  
  memset(auStack_668,0xaa,0x600);
  local_a70 = param_2 + 0xe8;
  uStack_a68 = 6;
  FUN_00c88bc4(auStack_668,"playoutId",&local_a70);
  local_678 = (undefined1 *)(param_2 + 0x108);
  local_670 = (ulong *)CONCAT71(local_670._1_7_,6);
  FUN_00c88bc4(local_658 + 8,"trackIdentifier",&local_678);
  local_688 = (undefined1 **)(param_2 + 0x128);
  local_680 = 6;
  FUN_00c88bc4(local_658 + 0x20,&DAT_001c368f,&local_688);
  local_698 = param_2 + 0x148;
  local_690 = 6;
  FUN_00c88bc4(local_658 + 0x38,"remoteId",&local_698);
  local_6a8 = param_2 + 0x168;
  local_6a0 = 2;
  FUN_00c88bc4(local_658 + 0x50,"packetsReceived",&local_6a8);
  local_6b8 = param_2 + 0x170;
  local_6b0 = 4;
  FUN_00c88bc4(local_658 + 0x68,"packetsDiscarded",&local_6b8);
  local_6c8 = param_2 + 0x180;
  local_6c0 = 4;
  FUN_00c88bc4(local_658 + 0x80,"fecPacketsReceived",&local_6c8);
  local_6d8 = param_2 + 400;
  local_6d0 = 4;
  FUN_00c88bc4(local_658 + 0x98,"fecBytesReceived",&local_6d8);
  local_6e8 = param_2 + 0x1a0;
  local_6e0 = 4;
  FUN_00c88bc4(local_658 + 0xb0,"fecPacketsDiscarded",&local_6e8);
  local_6f8 = param_2 + 0x1b0;
  local_6f0 = 2;
  FUN_00c88bc4(local_658 + 200,"fecSsrc",&local_6f8);
  local_708 = param_2 + 0x1b8;
  local_700 = 4;
  FUN_00c88bc4(local_658 + 0xe0,"bytesReceived",&local_708);
  local_718 = param_2 + 0x1c8;
  local_710 = 4;
  FUN_00c88bc4(local_658 + 0xf8,"headerBytesReceived",&local_718);
  local_728 = param_2 + 0x1d8;
  local_720 = 4;
  FUN_00c88bc4(local_658 + 0x110,"retransmittedPacketsReceived",&local_728);
  local_738 = param_2 + 0x1e8;
  local_730 = 4;
  FUN_00c88bc4(local_658 + 0x128,"retransmittedBytesReceived",&local_738);
  local_748 = param_2 + 0x1f8;
  local_740 = 2;
  FUN_00c88bc4(local_658 + 0x140,"rtxSsrc",&local_748);
  local_758 = param_2 + 0x200;
  local_750 = 5;
  FUN_00c88bc4(local_658 + 0x158,"lastPacketReceivedTimestamp",&local_758);
  local_768 = param_2 + 0x210;
  local_760 = 5;
  FUN_00c88bc4(local_658 + 0x170,"jitterBufferDelay",&local_768);
  local_778 = param_2 + 0x220;
  local_770 = 5;
  FUN_00c88bc4(local_658 + 0x188,"jitterBufferTargetDelay",&local_778);
  local_788 = param_2 + 0x230;
  local_780 = 5;
  FUN_00c88bc4(local_658 + 0x1a0,"jitterBufferMinimumDelay",&local_788);
  local_798 = param_2 + 0x240;
  local_790 = 4;
  FUN_00c88bc4(local_658 + 0x1b8,"jitterBufferEmittedCount",&local_798);
  local_7a8 = param_2 + 0x250;
  local_7a0 = 4;
  FUN_00c88bc4(local_658 + 0x1d0,"totalSamplesReceived",&local_7a8);
  local_7b8 = param_2 + 0x260;
  local_7b0 = 4;
  FUN_00c88bc4(local_658 + 0x1e8,"concealedSamples",&local_7b8);
  local_7c8 = param_2 + 0x270;
  local_7c0 = 4;
  FUN_00c88bc4(local_658 + 0x200,"silentConcealedSamples",&local_7c8);
  local_7d8 = param_2 + 0x280;
  local_7d0 = 4;
  FUN_00c88bc4(local_658 + 0x218,"concealmentEvents",&local_7d8);
  local_7e8 = param_2 + 0x290;
  local_7e0 = 4;
  FUN_00c88bc4(local_658 + 0x230,"insertedSamplesForDeceleration",&local_7e8);
  local_7f8 = param_2 + 0x2a0;
  local_7f0 = 4;
  FUN_00c88bc4(local_658 + 0x248,"removedSamplesForAcceleration",&local_7f8);
  local_808 = param_2 + 0x2b0;
  local_800 = 5;
  FUN_00c88bc4(local_658 + 0x260,"audioLevel",&local_808);
  local_818 = param_2 + 0x2c0;
  local_810 = 5;
  FUN_00c88bc4(local_658 + 0x278,"totalAudioEnergy",&local_818);
  local_828 = param_2 + 0x2d0;
  local_820 = 5;
  FUN_00c88bc4(local_658 + 0x290,"totalSamplesDuration",&local_828);
  local_838 = param_2 + 0x2e0;
  local_830 = 2;
  FUN_00c88bc4(local_658 + 0x2a8,"framesReceived",&local_838);
  local_848 = param_2 + 0x2e8;
  local_840 = 2;
  FUN_00c88bc4(local_658 + 0x2c0,"frameWidth",&local_848);
  local_858 = param_2 + 0x2f0;
  local_850 = 2;
  FUN_00c88bc4(local_658 + 0x2d8,"frameHeight",&local_858);
  local_868 = param_2 + 0x2f8;
  local_860 = 5;
  FUN_00c88bc4(local_658 + 0x2f0,"framesPerSecond",&local_868);
  local_878 = param_2 + 0x308;
  local_870 = 2;
  FUN_00c88bc4(local_658 + 0x308,"framesDecoded",&local_878);
  local_888 = param_2 + 0x310;
  local_880 = 2;
  FUN_00c88bc4(local_658 + 800,"keyFramesDecoded",&local_888);
  local_898 = param_2 + 0x318;
  local_890 = 2;
  FUN_00c88bc4(local_658 + 0x338,"framesDropped",&local_898);
  local_8a8 = param_2 + 800;
  local_8a0 = 5;
  FUN_00c88bc4(local_658 + 0x350,"totalDecodeTime",&local_8a8);
  local_8b8 = param_2 + 0x330;
  local_8b0 = 5;
  FUN_00c88bc4(local_658 + 0x368,"totalProcessingDelay",&local_8b8);
  local_8c8 = param_2 + 0x340;
  local_8c0 = 5;
  FUN_00c88bc4(local_658 + 0x380,"totalAssemblyTime",&local_8c8);
  local_8d8 = param_2 + 0x350;
  local_8d0 = 2;
  FUN_00c88bc4(local_658 + 0x398,"framesAssembledFromMultiplePackets",&local_8d8);
  local_8e8 = param_2 + 0x358;
  local_8e0 = 5;
  FUN_00c88bc4(local_658 + 0x3b0,"totalInterFrameDelay",&local_8e8);
  local_8f8 = param_2 + 0x368;
  local_8f0 = 5;
  FUN_00c88bc4(local_658 + 0x3c8,"totalSquaredInterFrameDelay",&local_8f8);
  local_908 = param_2 + 0x378;
  local_900 = 2;
  FUN_00c88bc4(local_658 + 0x3e0,"pauseCount",&local_908);
  local_918 = param_2 + 0x380;
  local_910 = 5;
  FUN_00c88bc4(local_658 + 0x3f8,"totalPausesDuration",&local_918);
  local_928 = param_2 + 0x390;
  local_920 = 2;
  FUN_00c88bc4(local_658 + 0x410,"freezeCount",&local_928);
  local_938 = param_2 + 0x398;
  local_930 = 5;
  FUN_00c88bc4(local_658 + 0x428,"totalFreezesDuration",&local_938);
  local_948 = param_2 + 0x3a8;
  local_940 = 6;
  FUN_00c88bc4(local_658 + 0x440,"contentType",&local_948);
  local_958 = param_2 + 0x3c8;
  local_950 = 5;
  FUN_00c88bc4(local_658 + 0x458,"estimatedPlayoutTimestamp",&local_958);
  local_968 = param_2 + 0x3d8;
  local_960 = 6;
  FUN_00c88bc4(local_658 + 0x470,"decoderImplementation",&local_968);
  local_978 = param_2 + 0x3f8;
  local_970 = 2;
  FUN_00c88bc4(local_658 + 0x488,"firCount",&local_978);
  local_988 = param_2 + 0x400;
  local_980 = 2;
  FUN_00c88bc4(local_658 + 0x4a0,"pliCount",&local_988);
  local_998 = param_2 + 0x408;
  local_990 = 2;
  FUN_00c88bc4(local_658 + 0x4b8,"nackCount",&local_998);
  local_9a8 = param_2 + 0x410;
  local_9a0 = 4;
  FUN_00c88bc4(local_658 + 0x4d0,"qpSum",&local_9a8);
  local_9b8 = param_2 + 0x420;
  local_9b0 = 5;
  FUN_00c88bc4(local_658 + 0x4e8,"totalCorruptionProbability",&local_9b8);
  local_9c8 = param_2 + 0x430;
  local_9c0 = 5;
  FUN_00c88bc4(local_658 + 0x500,"totalSquaredCorruptionProbability",&local_9c8);
  local_9d8 = param_2 + 0x440;
  local_9d0 = 4;
  FUN_00c88bc4(local_658 + 0x518,"corruptionMeasurements",&local_9d8);
  local_9e8 = param_2 + 0x450;
  local_9e0 = 6;
  FUN_00c88bc4(local_658 + 0x530,"googTimingFrameInfo",&local_9e8);
  local_9f8 = param_2 + 0x470;
  local_9f0 = 0;
  FUN_00c88bc4(local_658 + 0x548,"powerEfficientDecoder",&local_9f8);
  local_a08 = param_2 + 0x478;
  local_a00 = 4;
  FUN_00c88bc4(local_658 + 0x560,"jitterBufferFlushes",&local_a08);
  local_a18 = param_2 + 0x488;
  local_a10 = 4;
  FUN_00c88bc4(local_658 + 0x578,"delayedPacketOutageSamples",&local_a18);
  local_a28 = param_2 + 0x498;
  local_a20 = 5;
  FUN_00c88bc4(local_658 + 0x590,"relativePacketArrivalDelay",&local_a28);
  local_a38 = param_2 + 0x4a8;
  local_a30 = 2;
  FUN_00c88bc4(local_658 + 0x5a8,"interruptionCount",&local_a38);
  local_a48 = param_2 + 0x4b0;
  local_a40 = 5;
  FUN_00c88bc4(local_658 + 0x5c0,"totalInterruptionDuration",&local_a48);
  local_a58 = param_2 + 0x4c0;
  local_a50 = 5;
  FUN_00c88bc4(local_658 + 0x5d8,"minPlayoutDelay",&local_a58);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8cedc(param_1,param_2,param_3 + 0x40);
  local_698 = 0;
  do {
    local_678 = auStack_668;
    local_670 = &local_698;
    if ((ulong)local_658[local_698 * 0x18] == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_688 = &local_678;
    (*(code *)(&PTR_FUN_00d4f170)[local_658[local_698 * 0x18]])
              (&local_a70,&local_688,auStack_660 + local_698 * 0x18);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_a60;
      plVar1[1] = CONCAT71(uStack_a67,uStack_a68);
      *plVar1 = local_a70;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_a70);
    }
    param_1[1] = plVar2;
    local_698 = local_698 + 1;
  } while (local_698 < 0x40);
  return;
}


// ===== 00c8dc8c  FUN_00c8dc8c =====

void FUN_00c8dc8c(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4ea60;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (lVar2 < 0) {
    operator_delete(pvVar4);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *param_1 = (long)&PTR_FUN_00d4eb08;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((long)param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)((long)param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((long)param_1 + 0x314) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)((long)param_1 + 0x31c) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)((long)param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)((long)param_1 + 0x404) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)((long)param_1 + 0x40c) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  return;
}


// ===== 00c8df6c  FUN_00c8df6c =====

void FUN_00c8df6c(long param_1)

{
  if ((*(char *)(param_1 + 0x468) == '\x01') && (*(char *)(param_1 + 0x467) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x450));
  }
  if ((*(char *)(param_1 + 0x3f0) == '\x01') && (*(char *)(param_1 + 0x3ef) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x3d8));
  }
  if ((*(char *)(param_1 + 0x3c0) == '\x01') && (*(char *)(param_1 + 0x3bf) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x3a8));
  }
  if ((*(char *)(param_1 + 0x160) == '\x01') && (*(char *)(param_1 + 0x15f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x148));
  }
  if ((*(char *)(param_1 + 0x140) == '\x01') && (*(char *)(param_1 + 0x13f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x128));
  }
  if ((*(char *)(param_1 + 0x120) == '\x01') && (*(char *)(param_1 + 0x11f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x108));
  }
  if ((*(char *)(param_1 + 0x100) == '\x01') && (*(char *)(param_1 + 0xff) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xe8));
  }
  FUN_00c8cdc0(param_1);
  return;
}


// ===== 00c8e090  FUN_00c8e090 =====

void FUN_00c8e090(void *param_1)

{
  FUN_00c8df6c();
  operator_delete(param_1);
  return;
}


// ===== 00c8e0c0  FUN_00c8e0c0 =====

void * FUN_00c8e0c0(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x300);
  FUN_00c961ec(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8e0fc  FUN_00c8e0fc =====

char * FUN_00c8e0fc(void)

{
  return "outbound-rtp";
}


// ===== 00c8e10c  FUN_00c8e10c =====

void FUN_00c8e10c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_5e8;
  undefined1 uStack_5e0;
  undefined7 uStack_5df;
  long local_5d8;
  long local_5d0;
  undefined1 local_5c8;
  long local_5c0;
  undefined1 local_5b8;
  long local_5b0;
  undefined1 local_5a8;
  long local_5a0;
  undefined1 local_598;
  long local_590;
  undefined1 local_588;
  long local_580;
  undefined1 local_578;
  long local_570;
  undefined1 local_568;
  long local_560;
  undefined1 local_558;
  long local_550;
  undefined1 local_548;
  long local_540;
  undefined1 local_538;
  long local_530;
  undefined1 local_528;
  long local_520;
  undefined1 local_518;
  long local_510;
  undefined1 local_508;
  long local_500;
  undefined1 local_4f8;
  long local_4f0;
  undefined1 local_4e8;
  long local_4e0;
  undefined1 local_4d8;
  long local_4d0;
  undefined1 local_4c8;
  long local_4c0;
  undefined1 local_4b8;
  long local_4b0;
  undefined1 local_4a8;
  long local_4a0;
  undefined1 local_498;
  long local_490;
  undefined1 local_488;
  long local_480;
  undefined1 local_478;
  long local_470;
  undefined1 local_468;
  long local_460;
  undefined1 local_458;
  long local_450;
  undefined1 local_448;
  long local_440;
  undefined1 local_438;
  long local_430;
  undefined1 local_428;
  long local_420;
  undefined1 local_418;
  long local_410;
  undefined1 local_408;
  long local_400;
  undefined1 local_3f8;
  long local_3f0;
  undefined1 local_3e8;
  ulong local_3e0;
  undefined1 local_3d8;
  undefined1 **local_3d0;
  undefined1 local_3c8;
  undefined1 *local_3c0;
  ulong *local_3b8;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  byte local_3a0 [832];
  
  memset(auStack_3b0,0xaa,0x348);
  local_5e8 = param_2 + 0xb0;
  uStack_5e0 = 6;
  FUN_00c88bc4(auStack_3b0,"mediaSourceId",&local_5e8);
  local_3c0 = (undefined1 *)(param_2 + 0xd0);
  local_3b8 = (ulong *)CONCAT71(local_3b8._1_7_,6);
  FUN_00c88bc4(local_3a0 + 8,"remoteId",&local_3c0);
  local_3d0 = (undefined1 **)(param_2 + 0xf0);
  local_3c8 = 6;
  FUN_00c88bc4(local_3a0 + 0x20,&DAT_001c368f,&local_3d0);
  local_3e0 = param_2 + 0x110;
  local_3d8 = 6;
  FUN_00c88bc4(local_3a0 + 0x38,&DAT_001b99dd,&local_3e0);
  local_3f0 = param_2 + 0x130;
  local_3e8 = 2;
  FUN_00c88bc4(local_3a0 + 0x50,"encodingIndex",&local_3f0);
  local_400 = param_2 + 0x138;
  local_3f8 = 4;
  FUN_00c88bc4(local_3a0 + 0x68,"retransmittedPacketsSent",&local_400);
  local_410 = param_2 + 0x148;
  local_408 = 4;
  FUN_00c88bc4(local_3a0 + 0x80,"headerBytesSent",&local_410);
  local_420 = param_2 + 0x158;
  local_418 = 4;
  FUN_00c88bc4(local_3a0 + 0x98,"retransmittedBytesSent",&local_420);
  local_430 = param_2 + 0x168;
  local_428 = 5;
  FUN_00c88bc4(local_3a0 + 0xb0,"targetBitrate",&local_430);
  local_440 = param_2 + 0x178;
  local_438 = 2;
  FUN_00c88bc4(local_3a0 + 200,"framesEncoded",&local_440);
  local_450 = param_2 + 0x180;
  local_448 = 2;
  FUN_00c88bc4(local_3a0 + 0xe0,"keyFramesEncoded",&local_450);
  local_460 = param_2 + 0x188;
  local_458 = 5;
  FUN_00c88bc4(local_3a0 + 0xf8,"totalEncodeTime",&local_460);
  local_470 = param_2 + 0x198;
  local_468 = 4;
  FUN_00c88bc4(local_3a0 + 0x110,"totalEncodedBytesTarget",&local_470);
  local_480 = param_2 + 0x1a8;
  local_478 = 2;
  FUN_00c88bc4(local_3a0 + 0x128,"frameWidth",&local_480);
  local_490 = param_2 + 0x1b0;
  local_488 = 2;
  FUN_00c88bc4(local_3a0 + 0x140,"frameHeight",&local_490);
  local_4a0 = param_2 + 0x1b8;
  local_498 = 5;
  FUN_00c88bc4(local_3a0 + 0x158,"framesPerSecond",&local_4a0);
  local_4b0 = param_2 + 0x1c8;
  local_4a8 = 2;
  FUN_00c88bc4(local_3a0 + 0x170,"framesSent",&local_4b0);
  local_4c0 = param_2 + 0x1d0;
  local_4b8 = 2;
  FUN_00c88bc4(local_3a0 + 0x188,"hugeFramesSent",&local_4c0);
  local_4d0 = param_2 + 0x1d8;
  local_4c8 = 5;
  FUN_00c88bc4(local_3a0 + 0x1a0,"totalPacketSendDelay",&local_4d0);
  local_4e0 = param_2 + 0x1e8;
  local_4d8 = 6;
  FUN_00c88bc4(local_3a0 + 0x1b8,"qualityLimitationReason",&local_4e0);
  local_4f0 = param_2 + 0x208;
  local_4e8 = 0xf;
  FUN_00c88bc4(local_3a0 + 0x1d0,"qualityLimitationDurations",&local_4f0);
  local_500 = param_2 + 0x228;
  local_4f8 = 2;
  FUN_00c88bc4(local_3a0 + 0x1e8,"qualityLimitationResolutionChanges",&local_500);
  local_510 = param_2 + 0x230;
  local_508 = 6;
  FUN_00c88bc4(local_3a0 + 0x200,"contentType",&local_510);
  local_520 = param_2 + 0x250;
  local_518 = 6;
  FUN_00c88bc4(local_3a0 + 0x218,"encoderImplementation",&local_520);
  local_530 = param_2 + 0x270;
  local_528 = 2;
  FUN_00c88bc4(local_3a0 + 0x230,"firCount",&local_530);
  local_540 = param_2 + 0x278;
  local_538 = 2;
  FUN_00c88bc4(local_3a0 + 0x248,"pliCount",&local_540);
  local_550 = param_2 + 0x280;
  local_548 = 2;
  FUN_00c88bc4(local_3a0 + 0x260,"nackCount",&local_550);
  local_560 = param_2 + 0x288;
  local_558 = 4;
  FUN_00c88bc4(local_3a0 + 0x278,"qpSum",&local_560);
  local_570 = param_2 + 0x298;
  local_568 = 0xf;
  FUN_00c88bc4(local_3a0 + 0x290,"psnrSum",&local_570);
  local_580 = param_2 + 0x2b8;
  local_578 = 2;
  FUN_00c88bc4(local_3a0 + 0x2a8,"psnrMeasurements",&local_580);
  local_590 = param_2 + 0x2c0;
  local_588 = 0;
  FUN_00c88bc4(local_3a0 + 0x2c0,"active",&local_590);
  local_5a0 = param_2 + 0x2c2;
  local_598 = 0;
  FUN_00c88bc4(local_3a0 + 0x2d8,"powerEfficientEncoder",&local_5a0);
  local_5b0 = param_2 + 0x2c8;
  local_5a8 = 6;
  FUN_00c88bc4(local_3a0 + 0x2f0,"scalabilityMode",&local_5b0);
  local_5c0 = param_2 + 0x2e8;
  local_5b8 = 2;
  FUN_00c88bc4(local_3a0 + 0x308,"rtxSsrc",&local_5c0);
  local_5d0 = param_2 + 0x2f0;
  local_5c8 = 3;
  FUN_00c88bc4(local_3a0 + 800,"packetsSentWithEct1",&local_5d0);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8d15c(param_1,param_2,param_3 + 0x23);
  local_3e0 = 0;
  do {
    local_3c0 = auStack_3b0;
    local_3b8 = &local_3e0;
    if ((ulong)local_3a0[local_3e0 * 0x18] == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_3d0 = &local_3c0;
    (*(code *)(&PTR_FUN_00d4f1f0)[local_3a0[local_3e0 * 0x18]])
              (&local_5e8,&local_3d0,auStack_3a8 + local_3e0 * 0x18);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_5d8;
      plVar1[1] = CONCAT71(uStack_5df,uStack_5e0);
      *plVar1 = local_5e8;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_5e8);
    }
    param_1[1] = plVar2;
    local_3e0 = local_3e0 + 1;
  } while (local_3e0 < 0x23);
  return;
}


// ===== 00c8e6c0  FUN_00c8e6c0 =====

void FUN_00c8e6c0(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4ea60;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (lVar2 < 0) {
    operator_delete(pvVar4);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *param_1 = (long)&PTR_FUN_00d4eb40;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((long)param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((long)param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((long)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((long)param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((long)param_1 + 0x274) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)((long)param_1 + 0x27c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((long)param_1 + 0x284) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((long)param_1 + 700) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


// ===== 00c8e890  FUN_00c8e890 =====

void FUN_00c8e890(long param_1)

{
  long local_8;
  
  if ((*(char *)(param_1 + 0x2e0) == '\x01') && (*(char *)(param_1 + 0x2df) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x2c8));
  }
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    local_8 = param_1 + 0x298;
    FUN_00c828e4(&local_8,*(undefined8 *)(param_1 + 0x2a0));
  }
  if ((*(char *)(param_1 + 0x268) == '\x01') && (*(char *)(param_1 + 0x267) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x250));
  }
  if ((*(char *)(param_1 + 0x248) == '\x01') && (*(char *)(param_1 + 0x247) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x230));
  }
  if (*(char *)(param_1 + 0x220) == '\x01') {
    local_8 = param_1 + 0x208;
    FUN_00c828e4(&local_8,*(undefined8 *)(param_1 + 0x210));
  }
  if ((*(char *)(param_1 + 0x200) == '\x01') && (*(char *)(param_1 + 0x1ff) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x1e8));
  }
  if ((*(char *)(param_1 + 0x128) == '\x01') && (*(char *)(param_1 + 0x127) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x110));
  }
  if ((*(char *)(param_1 + 0x108) == '\x01') && (*(char *)(param_1 + 0x107) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  if ((*(char *)(param_1 + 0xe8) == '\x01') && (*(char *)(param_1 + 0xe7) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xd0));
  }
  if ((*(char *)(param_1 + 200) == '\x01') && (*(char *)(param_1 + 199) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xb0));
  }
  FUN_00c8cdc0(param_1);
  return;
}


// ===== 00c8ea1c  FUN_00c8ea1c =====

void FUN_00c8ea1c(void *param_1)

{
  FUN_00c8e890();
  operator_delete(param_1);
  return;
}


// ===== 00c8ea4c  FUN_00c8ea4c =====

undefined8 * FUN_00c8ea4c(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)operator_new(0x150);
  FUN_00c95cbc(puVar2,param_1);
  cVar1 = *(char *)(param_1 + 0x100);
  *puVar2 = &PTR_FUN_00d4eb78;
  puVar3 = puVar2 + 0x1d;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 0x20) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0xff) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0xe8);
      uVar4 = *(undefined8 *)(param_1 + 0xf8);
      puVar2[0x1e] = *(undefined8 *)(param_1 + 0xf0);
      *puVar3 = uVar5;
      puVar2[0x1f] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0x20) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x110);
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  uVar7 = *(undefined8 *)(param_1 + 0x120);
  uVar6 = *(undefined8 *)(param_1 + 0x118);
  *(undefined1 *)(puVar2 + 0x29) = *(undefined1 *)(param_1 + 0x148);
  puVar2[0x22] = uVar5;
  puVar2[0x21] = uVar4;
  puVar2[0x24] = uVar7;
  puVar2[0x23] = uVar6;
  uVar4 = *(undefined8 *)(param_1 + 0x128);
  uVar6 = *(undefined8 *)(param_1 + 0x140);
  uVar5 = *(undefined8 *)(param_1 + 0x138);
  puVar2[0x26] = *(undefined8 *)(param_1 + 0x130);
  puVar2[0x25] = uVar4;
  puVar2[0x28] = uVar6;
  puVar2[0x27] = uVar5;
  return puVar2;
}


// ===== 00c8eaf8  FUN_00c8eaf8 =====

char * FUN_00c8eaf8(void)

{
  return "remote-inbound-rtp";
}


// ===== 00c8eb08  FUN_00c8eb08 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8eb08(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long local_138;
  long local_130;
  undefined1 local_128;
  long local_120;
  undefined1 local_118;
  ulong local_110;
  undefined1 local_108;
  undefined1 ***local_100;
  undefined1 local_f8;
  undefined1 **local_f0;
  ulong *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0 [4];
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
  
  local_148 = param_2 + 0xe8;
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
  local_d0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[0] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_140 = 6;
  FUN_00c88bc4(&local_e0,"localId",&local_148);
  local_f0 = (undefined1 **)(param_2 + 0x108);
  local_e8 = (ulong *)CONCAT71(local_e8._1_7_,5);
  FUN_00c88bc4(local_d0 + 1,"roundTripTime",&local_f0);
  local_100 = (undefined1 ***)(param_2 + 0x118);
  local_f8 = 5;
  FUN_00c88bc4(&local_b0,"fractionLost",&local_100);
  local_110 = param_2 + 0x128;
  local_108 = 5;
  FUN_00c88bc4(&puStack_98,"totalRoundTripTime",&local_110);
  local_120 = param_2 + 0x138;
  local_118 = 1;
  FUN_00c88bc4(&puStack_80,"roundTripTimeMeasurements",&local_120);
  local_130 = param_2 + 0x140;
  local_128 = 3;
  FUN_00c88bc4(&puStack_68,"packetsWithBleachedEct1Marking",&local_130);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8cedc(param_1,param_2,param_3 + 6);
  local_110 = 0;
  do {
    local_f0 = &local_e0;
    local_e8 = &local_110;
    if ((ulong)*(byte *)(local_d0 + local_110 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_100 = &local_f0;
    (*(code *)(&PTR_FUN_00d4f270)[*(byte *)(local_d0 + local_110 * 3)])
              (&local_148,&local_100,&puStack_d8 + local_110 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_138;
      plVar1[1] = CONCAT71(uStack_13f,uStack_140);
      *plVar1 = local_148;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_148);
    }
    param_1[1] = plVar2;
    local_110 = local_110 + 1;
  } while (local_110 < 6);
  return;
}


// ===== 00c8ed10  FUN_00c8ed10 =====

void FUN_00c8ed10(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4ea60;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (lVar2 < 0) {
    operator_delete(pvVar4);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *param_1 = (long)&PTR_FUN_00d4eb78;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((long)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}


// ===== 00c8ee24  FUN_00c8ee24 =====

void FUN_00c8ee24(long param_1)

{
  if ((*(char *)(param_1 + 0x100) == '\x01') && (*(char *)(param_1 + 0xff) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xe8));
  }
  FUN_00c8cdc0(param_1);
  return;
}


// ===== 00c8ee70  FUN_00c8ee70 =====

void FUN_00c8ee70(void *param_1)

{
  if ((*(char *)((long)param_1 + 0x100) == '\x01') && (*(char *)((long)param_1 + 0xff) < '\0')) {
    operator_delete(*(void **)((long)param_1 + 0xe8));
  }
  FUN_00c8cdc0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c8eec8  FUN_00c8eec8 =====

undefined8 * FUN_00c8eec8(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)operator_new(0x120);
  FUN_00c95df4(puVar2,param_1);
  cVar1 = *(char *)(param_1 + 200);
  *puVar2 = &PTR_FUN_00d4ebb0;
  puVar3 = puVar2 + 0x16;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 199) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
      puVar2[0x17] = *(undefined8 *)(param_1 + 0xb8);
      *puVar3 = uVar5;
      puVar2[0x18] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0x19) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  puVar2[0x1b] = *(undefined8 *)(param_1 + 0xd8);
  puVar2[0x1a] = uVar4;
  puVar2[0x1d] = uVar6;
  puVar2[0x1c] = uVar5;
  uVar8 = *(undefined8 *)(param_1 + 0xf0);
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  uVar7 = *(undefined8 *)(param_1 + 0x111);
  uVar6 = *(undefined8 *)(param_1 + 0x109);
  puVar2[0x1f] = *(undefined8 *)(param_1 + 0xf8);
  puVar2[0x1e] = uVar8;
  puVar2[0x21] = uVar5;
  puVar2[0x20] = uVar4;
  *(undefined8 *)((long)puVar2 + 0x111) = uVar7;
  *(undefined8 *)((long)puVar2 + 0x109) = uVar6;
  return puVar2;
}


// ===== 00c8ef74  FUN_00c8ef74 =====

char * FUN_00c8ef74(void)

{
  return "remote-outbound-rtp";
}


// ===== 00c8ef84  FUN_00c8ef84 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8ef84(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  long local_148;
  long local_140;
  undefined1 local_138;
  long local_130;
  undefined1 local_128;
  ulong local_120;
  undefined1 local_118;
  undefined1 ***local_110;
  undefined1 local_108;
  undefined1 **local_100;
  ulong *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0 [4];
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  local_158 = param_2 + 0xb0;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[0] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_150 = 6;
  FUN_00c88bc4(&local_f0,"localId",&local_158);
  local_100 = (undefined1 **)(param_2 + 0xd0);
  local_f8 = (ulong *)CONCAT71(local_f8._1_7_,5);
  FUN_00c88bc4(local_e0 + 1,"remoteTimestamp",&local_100);
  local_110 = (undefined1 ***)(param_2 + 0xe0);
  local_108 = 4;
  FUN_00c88bc4(&local_c0,"reportsSent",&local_110);
  local_120 = param_2 + 0xf0;
  local_118 = 5;
  FUN_00c88bc4(&puStack_a8,"roundTripTime",&local_120);
  local_130 = param_2 + 0x100;
  local_128 = 4;
  FUN_00c88bc4(&puStack_90,"roundTripTimeMeasurements",&local_130);
  local_140 = param_2 + 0x110;
  local_138 = 5;
  FUN_00c88bc4(&puStack_78,"totalRoundTripTime",&local_140);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8d15c(param_1,param_2,param_3 + 6);
  local_120 = 0;
  do {
    local_100 = &local_f0;
    local_f8 = &local_120;
    if ((ulong)*(byte *)(local_e0 + local_120 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_110 = &local_100;
    (*(code *)(&PTR_FUN_00d4f2f0)[*(byte *)(local_e0 + local_120 * 3)])
              (&local_158,&local_110,&puStack_e8 + local_120 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_148;
      plVar1[1] = CONCAT71(uStack_14f,uStack_150);
      *plVar1 = local_158;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_158);
    }
    param_1[1] = plVar2;
    local_120 = local_120 + 1;
  } while (local_120 < 6);
  return;
}


// ===== 00c8f190  FUN_00c8f190 =====

void FUN_00c8f190(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4ea60;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (lVar2 < 0) {
    operator_delete(pvVar4);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *param_1 = (long)&PTR_FUN_00d4ebb0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}


// ===== 00c8f284  FUN_00c8f284 =====

void FUN_00c8f284(long param_1)

{
  if ((*(char *)(param_1 + 200) == '\x01') && (*(char *)(param_1 + 199) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xb0));
  }
  FUN_00c8cdc0(param_1);
  return;
}


// ===== 00c8f2d0  FUN_00c8f2d0 =====

void FUN_00c8f2d0(void *param_1)

{
  if ((*(char *)((long)param_1 + 200) == '\x01') && (*(char *)((long)param_1 + 199) < '\0')) {
    operator_delete(*(void **)((long)param_1 + 0xb0));
  }
  FUN_00c8cdc0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c8f328  FUN_00c8f328 =====

undefined8 * FUN_00c8f328(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  FUN_00c88670(puVar2,param_1);
  cVar1 = *(char *)(param_1 + 0x40);
  *puVar2 = &PTR_FUN_00d4ebe8;
  puVar3 = puVar2 + 5;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puVar2[6] = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = uVar5;
      puVar2[7] = uVar4;
    }
    *(undefined1 *)(puVar2 + 8) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  puVar3 = puVar2 + 9;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x5f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      puVar2[10] = *(undefined8 *)(param_1 + 0x50);
      *puVar3 = uVar5;
      puVar2[0xb] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0xc) = 1;
  }
  return puVar2;
}


// ===== 00c8f3f8  FUN_00c8f3f8 =====

char * FUN_00c8f3f8(void)

{
  return "parent-media-source";
}


// ===== 00c8f408  FUN_00c8f408 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8f408(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long local_a0;
  ulong local_98;
  undefined1 **local_90;
  ulong *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70 [5];
  undefined1 ***local_48;
  
  local_b0 = param_2 + 0x28;
  local_70[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_70[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = 6;
  FUN_00c88bc4(&local_80,"trackIdentifier",&local_b0);
  local_90 = (undefined1 **)(param_2 + 0x48);
  local_88 = (ulong *)CONCAT71(local_88._1_7_,6);
  FUN_00c88bc4(local_70 + 1,&DAT_001c472d,&local_90);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 2);
  local_98 = 0;
  do {
    local_90 = &local_80;
    local_88 = &local_98;
    if ((ulong)*(byte *)(local_70 + local_98 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_48 = &local_90;
    (*(code *)(&PTR_FUN_00d4f370)[*(byte *)(local_70 + local_98 * 3)])
              (&local_b0,&local_48,&puStack_78 + local_98 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_a0;
      plVar1[1] = CONCAT71(uStack_a7,uStack_a8);
      *plVar1 = local_b0;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_b0);
    }
    param_1[1] = plVar2;
    local_98 = local_98 + 1;
  } while (local_98 < 2);
  return;
}


// ===== 00c8f570  FUN_00c8f570 =====

void FUN_00c8f570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4ebe8;
  if ((*(char *)(param_1 + 0xc) == '\x01') && (*(char *)((long)param_1 + 0x5f) < '\0')) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c8f5ec  FUN_00c8f5ec =====

void FUN_00c8f5ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4ebe8;
  if ((*(char *)(param_1 + 0xc) == '\x01') && (*(char *)((long)param_1 + 0x5f) < '\0')) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00c886d0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c8f674  FUN_00c8f674 =====

undefined8 * FUN_00c8f674(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)operator_new(0xb8);
  FUN_00c88670(puVar2,param_1);
  cVar1 = *(char *)(param_1 + 0x40);
  *puVar2 = &PTR_FUN_00d4ebe8;
  puVar3 = puVar2 + 5;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puVar2[6] = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = uVar5;
      puVar2[7] = uVar4;
    }
    *(undefined1 *)(puVar2 + 8) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  puVar3 = puVar2 + 9;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x5f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      puVar2[10] = *(undefined8 *)(param_1 + 0x50);
      *puVar3 = uVar5;
      puVar2[0xb] = uVar4;
    }
    *(undefined1 *)(puVar2 + 0xc) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa1);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)((long)puVar2 + 0xa9) = *(undefined8 *)(param_1 + 0xa9);
  *(undefined8 *)((long)puVar2 + 0xa1) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  puVar2[0xe] = uVar7;
  puVar2[0xd] = uVar6;
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  *puVar2 = &PTR_FUN_00d4ec20;
  puVar2[0x10] = uVar9;
  puVar2[0xf] = uVar8;
  puVar2[0x12] = uVar5;
  puVar2[0x11] = uVar4;
  puVar2[0x14] = uVar7;
  puVar2[0x13] = uVar6;
  return puVar2;
}


// ===== 00c8f778  FUN_00c8f778 =====

char * FUN_00c8f778(void)

{
  return "media-source";
}


// ===== 00c8f788  FUN_00c8f788 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8f788(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  long local_118;
  long local_110;
  undefined1 local_108;
  ulong local_100;
  undefined1 local_f8;
  undefined1 ***local_f0;
  undefined1 local_e8;
  undefined1 **local_e0;
  ulong *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0 [4];
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  local_128 = param_2 + 0x68;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_c0[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_c0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_c0[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_120 = 5;
  FUN_00c88bc4(&local_d0,"audioLevel",&local_128);
  local_e0 = (undefined1 **)(param_2 + 0x78);
  local_d8 = (ulong *)CONCAT71(local_d8._1_7_,5);
  FUN_00c88bc4(local_c0 + 1,"totalAudioEnergy",&local_e0);
  local_f0 = (undefined1 ***)(param_2 + 0x88);
  local_e8 = 5;
  FUN_00c88bc4(&local_a0,"totalSamplesDuration",&local_f0);
  local_100 = param_2 + 0x98;
  local_f8 = 5;
  FUN_00c88bc4(&puStack_88,"echoReturnLoss",&local_100);
  local_110 = param_2 + 0xa8;
  local_108 = 5;
  FUN_00c88bc4(&puStack_70,"echoReturnLossEnhancement",&local_110);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8f408(param_1,param_2,param_3 + 5);
  local_100 = 0;
  do {
    local_e0 = &local_d0;
    local_d8 = &local_100;
    if ((ulong)*(byte *)(local_c0 + local_100 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_f0 = &local_e0;
    (*(code *)(&PTR_FUN_00d4f3f0)[*(byte *)(local_c0 + local_100 * 3)])
              (&local_128,&local_f0,&puStack_c8 + local_100 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_118;
      plVar1[1] = CONCAT71(uStack_11f,uStack_120);
      *plVar1 = local_128;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_128);
    }
    param_1[1] = plVar2;
    local_100 = local_100 + 1;
  } while (local_100 < 5);
  return;
}


// ===== 00c8f964  FUN_00c8f964 =====

void FUN_00c8f964(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
    param_1[4] = param_3;
    *param_1 = (long)&PTR_FUN_00d4ebe8;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    operator_delete(pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
    param_1[4] = param_3;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = (long)&PTR_FUN_00d4ec20;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}


// ===== 00c8fa3c  FUN_00c8fa3c =====

void FUN_00c8fa3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4ebe8;
  if ((*(char *)(param_1 + 0xc) == '\x01') && (*(char *)((long)param_1 + 0x5f) < '\0')) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00c886d0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c8fac4  FUN_00c8fac4 =====

undefined8 * FUN_00c8fac4(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)operator_new(0x90);
  FUN_00c88670(puVar3,param_1);
  cVar1 = *(char *)(param_1 + 0x40);
  *puVar3 = &PTR_FUN_00d4ebe8;
  puVar4 = puVar3 + 5;
  *(undefined1 *)puVar4 = 0;
  *(undefined1 *)(puVar3 + 8) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      FUN_005478d8(puVar4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      puVar3[6] = *(undefined8 *)(param_1 + 0x30);
      *puVar4 = uVar6;
      puVar3[7] = uVar5;
    }
    *(undefined1 *)(puVar3 + 8) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  puVar4 = puVar3 + 9;
  *(undefined1 *)puVar4 = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x5f) < '\0') {
      FUN_005478d8(puVar4,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      puVar3[10] = *(undefined8 *)(param_1 + 0x50);
      *puVar4 = uVar6;
      puVar3[0xb] = uVar5;
    }
    *(undefined1 *)(puVar3 + 0xc) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *puVar3 = &PTR_FUN_00d4ec58;
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined1 *)(param_1 + 0x88);
  puVar3[0xe] = uVar6;
  puVar3[0xd] = uVar5;
  puVar3[0x10] = uVar8;
  puVar3[0xf] = uVar7;
  *(undefined1 *)(puVar3 + 0x11) = uVar2;
  return puVar3;
}


// ===== 00c8fbb8  FUN_00c8fbb8 =====

char * FUN_00c8fbb8(void)

{
  return "media-source";
}


// ===== 00c8fbc8  FUN_00c8fbc8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8fbc8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  long local_d8;
  ulong local_d0;
  undefined1 local_c8;
  undefined1 ***local_c0;
  undefined1 local_b8;
  undefined1 **local_b0;
  ulong *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90 [4];
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  local_e8 = param_2 + 0x68;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_90[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e0 = 2;
  FUN_00c88bc4(&local_a0,"width",&local_e8);
  local_b0 = (undefined1 **)(param_2 + 0x70);
  local_a8 = (ulong *)CONCAT71(local_a8._1_7_,2);
  FUN_00c88bc4(local_90 + 1,"height",&local_b0);
  local_c0 = (undefined1 ***)(param_2 + 0x78);
  local_b8 = 2;
  FUN_00c88bc4(&puStack_70,"frames",&local_c0);
  local_d0 = param_2 + 0x80;
  local_c8 = 5;
  FUN_00c88bc4(&puStack_58,"framesPerSecond",&local_d0);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8f408(param_1,param_2,param_3 + 4);
  local_d0 = 0;
  do {
    local_b0 = &local_a0;
    local_a8 = &local_d0;
    if ((ulong)*(byte *)(local_90 + local_d0 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_c0 = &local_b0;
    (*(code *)(&PTR_FUN_00d4f470)[*(byte *)(local_90 + local_d0 * 3)])
              (&local_e8,&local_c0,&puStack_98 + local_d0 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_d8;
      plVar1[1] = CONCAT71(uStack_df,uStack_e0);
      *plVar1 = local_e8;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_e8);
    }
    param_1[1] = plVar2;
    local_d0 = local_d0 + 1;
  } while (local_d0 < 4);
  return;
}


// ===== 00c8fd78  FUN_00c8fd78 =====

void FUN_00c8fd78(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[2] = 0;
  puVar3 = PTR_DAT_00d53050;
  pvVar4 = (void *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar2 < 0) {
    FUN_005478d8(param_1 + 1,pvVar4);
    param_1[4] = param_3;
    *param_1 = (long)&PTR_FUN_00d4ebe8;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    operator_delete(pvVar4);
  }
  else {
    param_1[1] = (long)pvVar4;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
    param_1[4] = param_3;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = (long)&PTR_FUN_00d4ec58;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}


// ===== 00c8fe48  FUN_00c8fe48 =====

void FUN_00c8fe48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4ebe8;
  if ((*(char *)(param_1 + 0xc) == '\x01') && (*(char *)((long)param_1 + 0x5f) < '\0')) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00c886d0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c8fed0  FUN_00c8fed0 =====

void * FUN_00c8fed0(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1f8);
  FUN_00c966a8(pvVar1,param_1);
  return pvVar1;
}


// ===== 00c8ff0c  FUN_00c8ff0c =====

char * FUN_00c8ff0c(void)

{
  return "transport";
}


// ===== 00c8ff1c  FUN_00c8ff1c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c8ff1c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_328;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  long local_318;
  long local_310;
  undefined1 local_308;
  long local_300;
  undefined1 local_2f8;
  long local_2f0;
  undefined1 local_2e8;
  long local_2e0;
  undefined1 local_2d8;
  long local_2d0;
  undefined1 local_2c8;
  long local_2c0;
  undefined1 local_2b8;
  long local_2b0;
  undefined1 local_2a8;
  long local_2a0;
  undefined1 local_298;
  long local_290;
  undefined1 local_288;
  long local_280;
  undefined1 local_278;
  long local_270;
  undefined1 local_268;
  long local_260;
  undefined1 local_258;
  long local_250;
  undefined1 local_248;
  long local_240;
  undefined1 local_238;
  ulong local_230;
  undefined1 local_228;
  undefined1 ***local_220;
  undefined1 local_218;
  undefined1 **local_210;
  ulong *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0 [4];
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
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
  
  local_328 = param_2 + 0x28;
  local_1f0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_320 = 4;
  FUN_00c88bc4(&local_200,"bytesSent",&local_328);
  local_210 = (undefined1 **)(param_2 + 0x38);
  local_208 = (ulong *)CONCAT71(local_208._1_7_,4);
  FUN_00c88bc4(local_1f0 + 1,"packetsSent",&local_210);
  local_220 = (undefined1 ***)(param_2 + 0x48);
  local_218 = 4;
  FUN_00c88bc4(&local_1d0,"bytesReceived",&local_220);
  local_230 = param_2 + 0x58;
  local_228 = 4;
  FUN_00c88bc4(&puStack_1b8,"packetsReceived",&local_230);
  local_240 = param_2 + 0x68;
  local_238 = 6;
  FUN_00c88bc4(&puStack_1a0,"rtcpTransportStatsId",&local_240);
  local_250 = param_2 + 0x88;
  local_248 = 6;
  FUN_00c88bc4(&puStack_188,"dtlsState",&local_250);
  local_260 = param_2 + 0xa8;
  local_258 = 6;
  FUN_00c88bc4(&local_170,"selectedCandidatePairId",&local_260);
  local_270 = param_2 + 200;
  local_268 = 6;
  FUN_00c88bc4(&puStack_158,"localCertificateId",&local_270);
  local_280 = param_2 + 0xe8;
  local_278 = 6;
  FUN_00c88bc4(&puStack_140,"remoteCertificateId",&local_280);
  local_290 = param_2 + 0x108;
  local_288 = 6;
  FUN_00c88bc4(&puStack_128,"tlsVersion",&local_290);
  local_2a0 = param_2 + 0x128;
  local_298 = 6;
  FUN_00c88bc4(&local_110,"dtlsCipher",&local_2a0);
  local_2b0 = param_2 + 0x148;
  local_2a8 = 6;
  FUN_00c88bc4(&puStack_f8,"dtlsRole",&local_2b0);
  local_2c0 = param_2 + 0x168;
  local_2b8 = 6;
  FUN_00c88bc4(&puStack_e0,"srtpCipher",&local_2c0);
  local_2d0 = param_2 + 0x188;
  local_2c8 = 2;
  FUN_00c88bc4(&puStack_c8,"selectedCandidatePairChanges",&local_2d0);
  local_2e0 = param_2 + 400;
  local_2d8 = 6;
  FUN_00c88bc4(&local_b0,"iceRole",&local_2e0);
  local_2f0 = param_2 + 0x1b0;
  local_2e8 = 6;
  FUN_00c88bc4(&puStack_98,"iceLocalUsernameFragment",&local_2f0);
  local_300 = param_2 + 0x1d0;
  local_2f8 = 6;
  FUN_00c88bc4(&puStack_80,"iceState",&local_300);
  local_310 = param_2 + 0x1f0;
  local_308 = 1;
  FUN_00c88bc4(&puStack_68,"ccfbMessagesReceived",&local_310);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 0x12);
  local_230 = 0;
  do {
    local_210 = &local_200;
    local_208 = &local_230;
    if ((ulong)*(byte *)(local_1f0 + local_230 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_220 = &local_210;
    (*(code *)(&PTR_FUN_00d4f4f0)[*(byte *)(local_1f0 + local_230 * 3)])
              (&local_328,&local_220,&puStack_1f8 + local_230 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_318;
      plVar1[1] = CONCAT71(uStack_31f,uStack_320);
      *plVar1 = local_328;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_328);
    }
    param_1[1] = plVar2;
    local_230 = local_230 + 1;
  } while (local_230 < 0x12);
  return;
}


// ===== 00c902c8  FUN_00c902c8 =====

void FUN_00c902c8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_00d53050 + 0x10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4ec90;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((long)param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((long)param_1 + 500) = 0;
  return;
}


// ===== 00c903c8  FUN_00c903c8 =====

void FUN_00c903c8(long param_1)

{
  if ((*(char *)(param_1 + 0x1e8) == '\x01') && (*(char *)(param_1 + 0x1e7) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x1d0));
  }
  if ((*(char *)(param_1 + 0x1c8) == '\x01') && (*(char *)(param_1 + 0x1c7) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x1b0));
  }
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && (*(char *)(param_1 + 0x1a7) < '\0')) {
    operator_delete(*(void **)(param_1 + 400));
  }
  if ((*(char *)(param_1 + 0x180) == '\x01') && (*(char *)(param_1 + 0x17f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x168));
  }
  if ((*(char *)(param_1 + 0x160) == '\x01') && (*(char *)(param_1 + 0x15f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x148));
  }
  if ((*(char *)(param_1 + 0x140) == '\x01') && (*(char *)(param_1 + 0x13f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x128));
  }
  if ((*(char *)(param_1 + 0x120) == '\x01') && (*(char *)(param_1 + 0x11f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x108));
  }
  if ((*(char *)(param_1 + 0x100) == '\x01') && (*(char *)(param_1 + 0xff) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xe8));
  }
  if ((*(char *)(param_1 + 0xe0) == '\x01') && (*(char *)(param_1 + 0xdf) < '\0')) {
    operator_delete(*(void **)(param_1 + 200));
  }
  if ((*(char *)(param_1 + 0xc0) == '\x01') && (*(char *)(param_1 + 0xbf) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  if ((*(char *)(param_1 + 0xa0) == '\x01') && (*(char *)(param_1 + 0x9f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x7f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c905a0  FUN_00c905a0 =====

void FUN_00c905a0(void *param_1)

{
  FUN_00c903c8();
  operator_delete(param_1);
  return;
}


// ===== 00c905d0  FUN_00c905d0 =====

undefined8 * FUN_00c905d0(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)operator_new(0x98);
  FUN_00c88670(puVar2,param_1);
  cVar1 = *(char *)(param_1 + 0x40);
  *puVar2 = &PTR_FUN_00d4ecc8;
  puVar3 = puVar2 + 5;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puVar2[6] = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = uVar5;
      puVar2[7] = uVar4;
    }
    *(undefined1 *)(puVar2 + 8) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x81);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)((long)puVar2 + 0x89) = *(undefined8 *)(param_1 + 0x89);
  *(undefined8 *)((long)puVar2 + 0x81) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  puVar2[10] = uVar7;
  puVar2[9] = uVar6;
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  puVar2[0xc] = uVar9;
  puVar2[0xb] = uVar8;
  puVar2[0xe] = uVar5;
  puVar2[0xd] = uVar4;
  puVar2[0x10] = uVar7;
  puVar2[0xf] = uVar6;
  return puVar2;
}


// ===== 00c90684  FUN_00c90684 =====

char * FUN_00c90684(void)

{
  return "media-playout";
}


// ===== 00c90694  FUN_00c90694 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c90694(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long local_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  long local_148;
  long local_140;
  undefined1 local_138;
  long local_130;
  undefined1 local_128;
  ulong local_120;
  undefined1 local_118;
  undefined1 ***local_110;
  undefined1 local_108;
  undefined1 **local_100;
  ulong *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0 [4];
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  local_158 = param_2 + 0x28;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_e0[0] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_150 = 6;
  FUN_00c88bc4(&local_f0,&DAT_001c472d,&local_158);
  local_100 = (undefined1 **)(param_2 + 0x48);
  local_f8 = (ulong *)CONCAT71(local_f8._1_7_,5);
  FUN_00c88bc4(local_e0 + 1,"synthesizedSamplesDuration",&local_100);
  local_110 = (undefined1 ***)(param_2 + 0x58);
  local_108 = 4;
  FUN_00c88bc4(&local_c0,"synthesizedSamplesEvents",&local_110);
  local_120 = param_2 + 0x68;
  local_118 = 5;
  FUN_00c88bc4(&puStack_a8,"totalSamplesDuration",&local_120);
  local_130 = param_2 + 0x78;
  local_128 = 5;
  FUN_00c88bc4(&puStack_90,"totalPlayoutDelay",&local_130);
  local_140 = param_2 + 0x88;
  local_138 = 4;
  FUN_00c88bc4(&puStack_78,"totalSamplesCount",&local_140);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c88a40(param_1,param_2,param_3 + 6);
  local_120 = 0;
  do {
    local_100 = &local_f0;
    local_f8 = &local_120;
    if ((ulong)*(byte *)(local_e0 + local_120 * 3) == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_110 = &local_100;
    (*(code *)(&PTR_FUN_00d4f570)[*(byte *)(local_e0 + local_120 * 3)])
              (&local_158,&local_110,&puStack_e8 + local_120 * 3);
    plVar1 = (long *)param_1[1];
    if (plVar1 < (long *)param_1[2]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 3;
      plVar1[2] = local_148;
      plVar1[1] = CONCAT71(uStack_14f,uStack_150);
      *plVar1 = local_158;
    }
    else {
      plVar2 = (long *)FUN_00c90d64(param_1,&local_158);
    }
    param_1[1] = plVar2;
    local_120 = local_120 + 1;
  } while (local_120 < 6);
  return;
}


// ===== 00c908a0  FUN_00c908a0 =====

void FUN_00c908a0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_00d53050 + 0x10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  param_1[4] = param_3;
  *param_1 = (long)&PTR_FUN_00d4ecc8;
  FUN_00c90948(param_1 + 5,"audio");
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}


// ===== 00c90948  FUN_00c90948 =====

void FUN_00c90948(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(param_2);
  if (__n < 0x7ffffffffffffff7) {
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (char *)operator_new(uVar2);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
    }
    if (__dest <= __dest + __n) {
      if ((__dest <= param_2) && (param_2 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,param_2,__n);
      __dest[__n] = '\0';
      param_1[0x18] = '\x01';
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


// ===== 00c90a58  FUN_00c90a58 =====

void FUN_00c90a58(long param_1)

{
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c90aa4  FUN_00c90aa4 =====

void FUN_00c90aa4(void *param_1)

{
  if ((*(char *)((long)param_1 + 0x40) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    operator_delete(*(void **)((long)param_1 + 0x28));
  }
  FUN_00c886d0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c90afc  FUN_00c90afc =====

void FUN_00c90afc(void *param_1)

{
  FUN_00c90b2c();
  operator_delete(param_1);
  return;
}


// ===== 00c90b2c  FUN_00c90b2c =====

void FUN_00c90b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e980;
  if ((*(char *)(param_1 + 0x3d) == '\x01') && (*(char *)((long)param_1 + 0x1e7) < '\0')) {
    operator_delete((void *)param_1[0x3a]);
  }
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)((long)param_1 + 0x1bf) < '\0')) {
    operator_delete((void *)param_1[0x35]);
  }
  if ((*(char *)(param_1 + 0x34) == '\x01') && (*(char *)((long)param_1 + 0x19f) < '\0')) {
    operator_delete((void *)param_1[0x31]);
  }
  if ((*(char *)(param_1 + 0x2f) == '\x01') && (*(char *)((long)param_1 + 0x177) < '\0')) {
    operator_delete((void *)param_1[0x2c]);
  }
  if ((*(char *)(param_1 + 0x2b) == '\x01') && (*(char *)((long)param_1 + 0x157) < '\0')) {
    operator_delete((void *)param_1[0x28]);
  }
  if ((*(char *)(param_1 + 0x27) == '\x01') && (*(char *)((long)param_1 + 0x137) < '\0')) {
    operator_delete((void *)param_1[0x24]);
  }
  if ((*(char *)(param_1 + 0x22) == '\x01') && (*(char *)((long)param_1 + 0x10f) < '\0')) {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((*(char *)(param_1 + 0x1e) == '\x01') && (*(char *)((long)param_1 + 0xef) < '\0')) {
    operator_delete((void *)param_1[0x1b]);
  }
  if ((*(char *)(param_1 + 0x1a) == '\x01') && (*(char *)((long)param_1 + 0xcf) < '\0')) {
    operator_delete((void *)param_1[0x17]);
  }
  if ((*(char *)(param_1 + 0x15) == '\x01') && (*(char *)((long)param_1 + 0xa7) < '\0')) {
    operator_delete((void *)param_1[0x12]);
  }
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)((long)param_1 + 0x87) < '\0')) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(char *)((long)param_1 + 0x67) < '\0')) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00c886d0(param_1);
  return;
}


// ===== 00c90d34  FUN_00c90d34 =====

void FUN_00c90d34(void *param_1)

{
  FUN_00c90b2c();
  operator_delete(param_1);
  return;
}


// ===== 00c90d64  FUN_00c90d64 =====

undefined8 * FUN_00c90d64(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_00c88aa0();
LAB_00c90e80:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_00c90e80;
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 3);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar6 + 3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c90e84  FUN_00c90e84 =====

void FUN_00c90e84(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)((long *)*param_2)[1];
  if (uVar3 < 4) {
    lVar2 = *(long *)*param_2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar2 + uVar3 * 0x18);
    param_1[1] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc90ec0);
  (*pcVar1)();
}


// ===== 00c90ec0  FUN_00c90ec0 =====

void FUN_00c90ec0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc90f00);
  (*pcVar1)();
}


// ===== 00c90f00  FUN_00c90f00 =====

void FUN_00c90f00(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc90f40);
  (*pcVar1)();
}


// ===== 00c90f40  FUN_00c90f40 =====

void FUN_00c90f40(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc90f80);
  (*pcVar1)();
}


// ===== 00c90f80  FUN_00c90f80 =====

void FUN_00c90f80(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc90fc0);
  (*pcVar1)();
}


// ===== 00c90fc0  FUN_00c90fc0 =====

void FUN_00c90fc0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91000);
  (*pcVar1)();
}


// ===== 00c91000  FUN_00c91000 =====

void FUN_00c91000(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91040);
  (*pcVar1)();
}


// ===== 00c91040  FUN_00c91040 =====

void FUN_00c91040(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91080);
  (*pcVar1)();
}


// ===== 00c91080  FUN_00c91080 =====

void FUN_00c91080(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc910c0);
  (*pcVar1)();
}


// ===== 00c910c0  FUN_00c910c0 =====

void FUN_00c910c0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91100);
  (*pcVar1)();
}


// ===== 00c91100  FUN_00c91100 =====

void FUN_00c91100(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91140);
  (*pcVar1)();
}


// ===== 00c91140  FUN_00c91140 =====

void FUN_00c91140(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91180);
  (*pcVar1)();
}


// ===== 00c91180  FUN_00c91180 =====

void FUN_00c91180(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc911c0);
  (*pcVar1)();
}


// ===== 00c911c0  FUN_00c911c0 =====

void FUN_00c911c0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xd;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91200);
  (*pcVar1)();
}


// ===== 00c91200  FUN_00c91200 =====

void FUN_00c91200(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xe;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91240);
  (*pcVar1)();
}


// ===== 00c91240  FUN_00c91240 =====

void FUN_00c91240(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xf;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91280);
  (*pcVar1)();
}


// ===== 00c91280  FUN_00c91280 =====

void FUN_00c91280(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)((long *)*param_2)[1];
  if (uVar3 < 6) {
    lVar2 = *(long *)*param_2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar2 + uVar3 * 0x18);
    param_1[1] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc912bc);
  (*pcVar1)();
}


// ===== 00c912bc  FUN_00c912bc =====

void FUN_00c912bc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc912fc);
  (*pcVar1)();
}


// ===== 00c912fc  FUN_00c912fc =====

void FUN_00c912fc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9133c);
  (*pcVar1)();
}


// ===== 00c9133c  FUN_00c9133c =====

void FUN_00c9133c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9137c);
  (*pcVar1)();
}


// ===== 00c9137c  FUN_00c9137c =====

void FUN_00c9137c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc913bc);
  (*pcVar1)();
}


// ===== 00c913bc  FUN_00c913bc =====

void FUN_00c913bc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc913fc);
  (*pcVar1)();
}


// ===== 00c913fc  FUN_00c913fc =====

void FUN_00c913fc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9143c);
  (*pcVar1)();
}


// ===== 00c9143c  FUN_00c9143c =====

void FUN_00c9143c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9147c);
  (*pcVar1)();
}


// ===== 00c9147c  FUN_00c9147c =====

void FUN_00c9147c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc914bc);
  (*pcVar1)();
}


// ===== 00c914bc  FUN_00c914bc =====

void FUN_00c914bc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc914fc);
  (*pcVar1)();
}


// ===== 00c914fc  FUN_00c914fc =====

void FUN_00c914fc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9153c);
  (*pcVar1)();
}


// ===== 00c9153c  FUN_00c9153c =====

void FUN_00c9153c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9157c);
  (*pcVar1)();
}


// ===== 00c9157c  FUN_00c9157c =====

void FUN_00c9157c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc915bc);
  (*pcVar1)();
}


// ===== 00c915bc  FUN_00c915bc =====

void FUN_00c915bc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xd;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc915fc);
  (*pcVar1)();
}


// ===== 00c915fc  FUN_00c915fc =====

void FUN_00c915fc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xe;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9163c);
  (*pcVar1)();
}


// ===== 00c9163c  FUN_00c9163c =====

void FUN_00c9163c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 6) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xf;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9167c);
  (*pcVar1)();
}


// ===== 00c9167c  FUN_00c9167c =====

void FUN_00c9167c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)((long *)*param_2)[1];
  if (uVar3 < 8) {
    lVar2 = *(long *)*param_2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar2 + uVar3 * 0x18);
    param_1[1] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc916b8);
  (*pcVar1)();
}


// ===== 00c916b8  FUN_00c916b8 =====

void FUN_00c916b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc916f8);
  (*pcVar1)();
}


// ===== 00c916f8  FUN_00c916f8 =====

void FUN_00c916f8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91738);
  (*pcVar1)();
}


// ===== 00c91738  FUN_00c91738 =====

void FUN_00c91738(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91778);
  (*pcVar1)();
}


// ===== 00c91778  FUN_00c91778 =====

void FUN_00c91778(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc917b8);
  (*pcVar1)();
}


// ===== 00c917b8  FUN_00c917b8 =====

void FUN_00c917b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc917f8);
  (*pcVar1)();
}


// ===== 00c917f8  FUN_00c917f8 =====

void FUN_00c917f8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91838);
  (*pcVar1)();
}


// ===== 00c91838  FUN_00c91838 =====

void FUN_00c91838(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91878);
  (*pcVar1)();
}


// ===== 00c91878  FUN_00c91878 =====

void FUN_00c91878(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc918b8);
  (*pcVar1)();
}


// ===== 00c918b8  FUN_00c918b8 =====

void FUN_00c918b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc918f8);
  (*pcVar1)();
}


// ===== 00c918f8  FUN_00c918f8 =====

void FUN_00c918f8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91938);
  (*pcVar1)();
}


// ===== 00c91938  FUN_00c91938 =====

void FUN_00c91938(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91978);
  (*pcVar1)();
}


// ===== 00c91978  FUN_00c91978 =====

void FUN_00c91978(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc919b8);
  (*pcVar1)();
}


// ===== 00c919b8  FUN_00c919b8 =====

void FUN_00c919b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xd;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc919f8);
  (*pcVar1)();
}


// ===== 00c919f8  FUN_00c919f8 =====

void FUN_00c919f8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xe;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91a38);
  (*pcVar1)();
}


// ===== 00c91a38  FUN_00c91a38 =====

void FUN_00c91a38(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 8) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xf;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91a78);
  (*pcVar1)();
}


// ===== 00c91a78  FUN_00c91a78 =====

void FUN_00c91a78(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)((long *)*param_2)[1];
  if (uVar3 < 0x18) {
    lVar2 = *(long *)*param_2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar2 + uVar3 * 0x18);
    param_1[1] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91ab4);
  (*pcVar1)();
}


// ===== 00c91ab4  FUN_00c91ab4 =====

void FUN_00c91ab4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91af4);
  (*pcVar1)();
}


// ===== 00c91af4  FUN_00c91af4 =====

void FUN_00c91af4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91b34);
  (*pcVar1)();
}


// ===== 00c91b34  FUN_00c91b34 =====

void FUN_00c91b34(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91b74);
  (*pcVar1)();
}


// ===== 00c91b74  FUN_00c91b74 =====

void FUN_00c91b74(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91bb4);
  (*pcVar1)();
}


// ===== 00c91bb4  FUN_00c91bb4 =====

void FUN_00c91bb4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91bf4);
  (*pcVar1)();
}


// ===== 00c91bf4  FUN_00c91bf4 =====

void FUN_00c91bf4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91c34);
  (*pcVar1)();
}


// ===== 00c91c34  FUN_00c91c34 =====

void FUN_00c91c34(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91c74);
  (*pcVar1)();
}


// ===== 00c91c74  FUN_00c91c74 =====

void FUN_00c91c74(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91cb4);
  (*pcVar1)();
}


// ===== 00c91cb4  FUN_00c91cb4 =====

void FUN_00c91cb4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91cf4);
  (*pcVar1)();
}


// ===== 00c91cf4  FUN_00c91cf4 =====

void FUN_00c91cf4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91d34);
  (*pcVar1)();
}


// ===== 00c91d34  FUN_00c91d34 =====

void FUN_00c91d34(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91d74);
  (*pcVar1)();
}


// ===== 00c91d74  FUN_00c91d74 =====

void FUN_00c91d74(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91db4);
  (*pcVar1)();
}


// ===== 00c91db4  FUN_00c91db4 =====

void FUN_00c91db4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xd;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91df4);
  (*pcVar1)();
}


// ===== 00c91df4  FUN_00c91df4 =====

void FUN_00c91df4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xe;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91e34);
  (*pcVar1)();
}


// ===== 00c91e34  FUN_00c91e34 =====

void FUN_00c91e34(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x18) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xf;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91e74);
  (*pcVar1)();
}


// ===== 00c91e74  FUN_00c91e74 =====

void FUN_00c91e74(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)((long *)*param_2)[1];
  if (uVar3 < 0x12) {
    lVar2 = *(long *)*param_2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar2 + uVar3 * 0x18);
    param_1[1] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91eb0);
  (*pcVar1)();
}


// ===== 00c91eb0  FUN_00c91eb0 =====

void FUN_00c91eb0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91ef0);
  (*pcVar1)();
}


// ===== 00c91ef0  FUN_00c91ef0 =====

void FUN_00c91ef0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91f30);
  (*pcVar1)();
}


// ===== 00c91f30  FUN_00c91f30 =====

void FUN_00c91f30(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91f70);
  (*pcVar1)();
}


// ===== 00c91f70  FUN_00c91f70 =====

void FUN_00c91f70(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91fb0);
  (*pcVar1)();
}


// ===== 00c91fb0  FUN_00c91fb0 =====

void FUN_00c91fb0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc91ff0);
  (*pcVar1)();
}


// ===== 00c91ff0  FUN_00c91ff0 =====

void FUN_00c91ff0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92030);
  (*pcVar1)();
}


// ===== 00c92030  FUN_00c92030 =====

void FUN_00c92030(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92070);
  (*pcVar1)();
}


// ===== 00c92070  FUN_00c92070 =====

void FUN_00c92070(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc920b0);
  (*pcVar1)();
}


// ===== 00c920b0  FUN_00c920b0 =====

void FUN_00c920b0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc920f0);
  (*pcVar1)();
}


// ===== 00c920f0  FUN_00c920f0 =====

void FUN_00c920f0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92130);
  (*pcVar1)();
}


// ===== 00c92130  FUN_00c92130 =====

void FUN_00c92130(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92170);
  (*pcVar1)();
}


// ===== 00c92170  FUN_00c92170 =====

void FUN_00c92170(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc921b0);
  (*pcVar1)();
}


// ===== 00c921b0  FUN_00c921b0 =====

void FUN_00c921b0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xd;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc921f0);
  (*pcVar1)();
}


// ===== 00c921f0  FUN_00c921f0 =====

void FUN_00c921f0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xe;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92230);
  (*pcVar1)();
}


// ===== 00c92230  FUN_00c92230 =====

void FUN_00c92230(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 0x12) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xf;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92270);
  (*pcVar1)();
}


// ===== 00c92270  FUN_00c92270 =====

void FUN_00c92270(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)((long *)*param_2)[1];
  if (uVar3 < 2) {
    lVar2 = *(long *)*param_2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar2 + uVar3 * 0x18);
    param_1[1] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc922ac);
  (*pcVar1)();
}


// ===== 00c922ac  FUN_00c922ac =====

void FUN_00c922ac(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc922ec);
  (*pcVar1)();
}


// ===== 00c922ec  FUN_00c922ec =====

void FUN_00c922ec(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9232c);
  (*pcVar1)();
}


// ===== 00c9232c  FUN_00c9232c =====

void FUN_00c9232c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9236c);
  (*pcVar1)();
}


// ===== 00c9236c  FUN_00c9236c =====

void FUN_00c9236c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc923ac);
  (*pcVar1)();
}


// ===== 00c923ac  FUN_00c923ac =====

void FUN_00c923ac(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc923ec);
  (*pcVar1)();
}


// ===== 00c923ec  FUN_00c923ec =====

void FUN_00c923ec(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9242c);
  (*pcVar1)();
}


// ===== 00c9242c  FUN_00c9242c =====

void FUN_00c9242c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9246c);
  (*pcVar1)();
}


// ===== 00c9246c  FUN_00c9246c =====

void FUN_00c9246c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc924ac);
  (*pcVar1)();
}


// ===== 00c924ac  FUN_00c924ac =====

void FUN_00c924ac(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc924ec);
  (*pcVar1)();
}


// ===== 00c924ec  FUN_00c924ec =====

void FUN_00c924ec(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9252c);
  (*pcVar1)();
}


// ===== 00c9252c  FUN_00c9252c =====

void FUN_00c9252c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9256c);
  (*pcVar1)();
}


// ===== 00c9256c  FUN_00c9256c =====

void FUN_00c9256c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc925ac);
  (*pcVar1)();
}


// ===== 00c925ac  FUN_00c925ac =====

void FUN_00c925ac(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xd;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc925ec);
  (*pcVar1)();
}


// ===== 00c925ec  FUN_00c925ec =====

void FUN_00c925ec(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xe;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9262c);
  (*pcVar1)();
}


// ===== 00c9262c  FUN_00c9262c =====

void FUN_00c9262c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 2) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xf;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc9266c);
  (*pcVar1)();
}


// ===== 00c9266c  FUN_00c9266c =====

void FUN_00c9266c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)((long *)*param_2)[1];
  if (uVar3 < 4) {
    lVar2 = *(long *)*param_2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar2 + uVar3 * 0x18);
    param_1[1] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc926a8);
  (*pcVar1)();
}


// ===== 00c926a8  FUN_00c926a8 =====

void FUN_00c926a8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc926e8);
  (*pcVar1)();
}


// ===== 00c926e8  FUN_00c926e8 =====

void FUN_00c926e8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92728);
  (*pcVar1)();
}


// ===== 00c92728  FUN_00c92728 =====

void FUN_00c92728(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92768);
  (*pcVar1)();
}


// ===== 00c92768  FUN_00c92768 =====

void FUN_00c92768(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc927a8);
  (*pcVar1)();
}


// ===== 00c927a8  FUN_00c927a8 =====

void FUN_00c927a8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc927e8);
  (*pcVar1)();
}


// ===== 00c927e8  FUN_00c927e8 =====

void FUN_00c927e8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92828);
  (*pcVar1)();
}


// ===== 00c92828  FUN_00c92828 =====

void FUN_00c92828(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92868);
  (*pcVar1)();
}


// ===== 00c92868  FUN_00c92868 =====

void FUN_00c92868(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc928a8);
  (*pcVar1)();
}


// ===== 00c928a8  FUN_00c928a8 =====

void FUN_00c928a8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc928e8);
  (*pcVar1)();
}


// ===== 00c928e8  FUN_00c928e8 =====

void FUN_00c928e8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92928);
  (*pcVar1)();
}


// ===== 00c92928  FUN_00c92928 =====

void FUN_00c92928(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92968);
  (*pcVar1)();
}


// ===== 00c92968  FUN_00c92968 =====

void FUN_00c92968(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc929a8);
  (*pcVar1)();
}


// ===== 00c929a8  FUN_00c929a8 =====

void FUN_00c929a8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xd;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc929e8);
  (*pcVar1)();
}


// ===== 00c929e8  FUN_00c929e8 =====

void FUN_00c929e8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xe;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92a28);
  (*pcVar1)();
}


// ===== 00c92a28  FUN_00c92a28 =====

void FUN_00c92a28(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long *)*param_2)[1];
  if (uVar2 < 4) {
    uVar3 = *param_3;
    *param_1 = *(undefined8 *)(*(long *)*param_2 + uVar2 * 0x18);
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0xf;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0xc92a68);
  (*pcVar1)();
}


