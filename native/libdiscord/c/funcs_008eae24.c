// ===== 008eae24  FUN_008eae24 =====

long FUN_008eae24(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = FUN_008ea334();
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x148);
    lVar2 = lVar4;
    if (lVar4 != -0x8000000000000000) {
      lVar2 = lVar4 + 500000;
    }
    if (lVar4 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    return lVar2;
  }
  if (((*(int *)(param_1 + 0x60) == 2) && ((*(byte *)(param_1 + 0x138) & 1) == 0)) &&
     (lVar4 = FUN_008ed3c8((int *)(param_1 + 0x60),lVar2), lVar4 != 0x7fffffffffffffff)) {
    if (lVar4 == -0x8000000000000000) {
      return lVar2;
    }
    return lVar4;
  }
  if (((*(byte *)(param_1 + 0x12) & 1) == 0) &&
     (lVar2 = FUN_008ef568(param_1 + 0x168,0), lVar2 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
    return lVar2;
  }
  if ((*(char *)(param_1 + 0x14) == '\x01') &&
     (lVar2 = FUN_008ef61c(param_1 + 0x168), lVar2 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
    return lVar2;
  }
  if (((*(byte *)(param_1 + 800) & 1) != 0) || ((*(byte *)(param_1 + 0x160) & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 0x148);
    if (lVar2 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    if (lVar2 == -0x8000000000000000) {
      return -0x8000000000000000;
    }
    return lVar2 + 500000;
  }
  if ((*(long *)(param_1 + 0x50) < 1) || (uVar3 = FUN_008ef554(param_1 + 0x168), (uVar3 & 1) != 0))
  {
    if ((*(long *)(param_1 + 0x58) < 1) || (uVar3 = FUN_008ef554(param_1 + 0x168), (uVar3 & 1) == 0)
       ) {
      lVar2 = *(long *)(param_1 + 0x140);
      lVar4 = 0x7fffffffffffffff;
      if ((lVar2 != 0x7fffffffffffffff) && (lVar4 = lVar2, lVar2 != -0x8000000000000000)) {
        lVar4 = lVar2 + 500000;
      }
      goto LAB_008eb044;
    }
    uVar3 = 0;
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar3 = (*(long *)(param_1 + 0x38) * 8000000) / *(long *)(param_1 + 0x50);
    }
    uVar6 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar6 = (*(long *)(param_1 + 0x40) * 8000000) / *(long *)(param_1 + 0x58);
    }
    if ((long)uVar3 <= (long)uVar6) {
      uVar3 = uVar6;
    }
    lVar2 = *(long *)(param_1 + 0x140);
    uVar6 = (ulong)(*(long *)(param_1 + 0x40) != 0 || *(long *)(param_1 + 0x38) != 0);
    if (uVar3 != 0) {
      uVar6 = uVar3;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x50);
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = 504000000000 / lVar2;
    }
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = (*(long *)(param_1 + 0x38) * 8000000) / lVar2;
    }
    if (*(long *)(param_1 + 0x20) <= lVar4) {
      lVar4 = *(long *)(param_1 + 0x20);
    }
    lVar2 = *(long *)(param_1 + 0x140);
    uVar6 = 0;
    if (lVar4 <= (long)uVar3) {
      uVar6 = uVar3;
    }
  }
  lVar4 = 0x7fffffffffffffff;
  if ((lVar2 != 0x7fffffffffffffff) && (uVar6 != 0x7fffffffffffffff)) {
    lVar4 = -0x8000000000000000;
    if (uVar6 != 0x8000000000000000 && lVar2 != -0x8000000000000000) {
      lVar4 = uVar6 + lVar2;
    }
  }
LAB_008eb044:
  if (*(char *)(param_1 + 0x11) == '\x01') {
    lVar5 = *(long *)(param_1 + 0x148);
    lVar2 = lVar5 + 500000;
    if (lVar4 <= lVar5 + 500000) {
      lVar2 = lVar4;
    }
    lVar1 = lVar5;
    if (lVar5 != -0x8000000000000000) {
      lVar1 = lVar2;
    }
    if (lVar5 != 0x7fffffffffffffff) {
      lVar4 = lVar1;
    }
  }
  return lVar4;
}


// ===== 008eb080  FUN_008eb080 =====

void FUN_008eb080(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x330) = param_2;
  return;
}


// ===== 008eb08c  FUN_008eb08c =====

void FUN_008eb08c(long param_1)

{
  *(undefined1 *)(param_1 + 0x331) = 1;
  return;
}


// ===== 008eb09c  FUN_008eb09c =====

void FUN_008eb09c(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  return;
}


// ===== 008eb0b0  FUN_008eb0b0 =====

void FUN_008eb0b0(long param_1)

{
  FUN_008ece00(param_1 + 0x60);
  return;
}


// ===== 008eb0bc  FUN_008eb0bc =====

long FUN_008eb0bc(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_008ef548(param_1 + 0x168);
  lVar3 = lVar2;
  if (*(char *)(param_1 + 0x331) == '\x01') {
    iVar1 = FUN_008ef53c(param_1 + 0x168);
    lVar3 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) &&
       (lVar4 = *(long *)(param_1 + 0x18) * (long)iVar1, lVar4 != 0x7fffffffffffffff)) {
      lVar3 = 0;
      if (lVar4 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar3 = lVar4 + lVar2;
      }
    }
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar2 = (lVar3 * 8000000) / *(long *)(param_1 + 0x50);
  }
  return lVar2;
}


// ===== 008eb14c  FUN_008eb14c =====

long FUN_008eb14c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_008ef548(param_1 + 0x168);
  lVar3 = lVar2;
  if (*(char *)(param_1 + 0x331) == '\x01') {
    iVar1 = FUN_008ef53c(param_1 + 0x168);
    lVar3 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) &&
       (lVar4 = *(long *)(param_1 + 0x18) * (long)iVar1, lVar4 != 0x7fffffffffffffff)) {
      lVar3 = -0x8000000000000000;
      if (lVar4 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar3 = lVar4 + lVar2;
      }
    }
  }
  return lVar3;
}


// ===== 008eb1cc  FUN_008eb1cc =====

int FUN_008eb1cc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_008ef53c(param_1 + 0x168);
  if (-1 < iVar1) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 008eb214  FUN_008eb214 =====

undefined1  [16] FUN_008eb214(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x150);
}


// ===== 008eb224  FUN_008eb224 =====

void FUN_008eb224(long param_1)

{
  FUN_008ef780(param_1 + 0x168);
  return;
}


// ===== 008eb230  FUN_008eb230 =====

/* WARNING: Removing unreachable block (ram,0x008ec0c8) */
/* WARNING: Removing unreachable block (ram,0x008ec0ac) */
/* WARNING: Removing unreachable block (ram,0x008ec228) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008eb230(long param_1)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long *plVar37;
  bool bVar38;
  long lVar39;
  long lVar40;
  undefined8 uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  long *plVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  int iVar49;
  long lVar50;
  void *pvVar51;
  uint uVar52;
  long *plVar53;
  long *plVar54;
  long *plVar55;
  long *plVar56;
  int *piVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  ulong local_378;
  undefined8 local_308;
  undefined1 uStack_2f9;
  char *local_2f8;
  undefined8 local_2f0;
  undefined1 *local_2e8;
  char *local_2e0;
  char **ppcStack_2d8;
  char *local_2d0;
  char **ppcStack_2c8;
  ulong local_2c0;
  char **local_2b8;
  char *local_2b0;
  ulong *puStack_2a8;
  ulong local_2a0;
  char **local_298;
  char *local_290;
  ulong *puStack_288;
  long local_280;
  char **local_278;
  char *local_270;
  long *local_268;
  char *local_260;
  char **local_258;
  char *local_250;
  char **local_248;
  long local_240;
  char **local_238;
  char *local_230;
  long *local_228;
  long local_220;
  char **local_218;
  char *local_210;
  long *local_208;
  long local_200;
  char **local_1f8;
  char *local_1f0;
  long *local_1e8;
  undefined8 local_1e0;
  char **local_1d8;
  char *local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  char **local_1b8;
  char *local_1b0;
  undefined8 *local_1a8;
  char *local_1a0;
  char **local_198;
  char *local_190;
  char **local_188;
  undefined8 local_180;
  char **local_178;
  char *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  char **ppcStack_158;
  char *local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  char **ppcStack_138;
  char *local_130;
  undefined8 *puStack_128;
  undefined8 local_120;
  char **ppcStack_118;
  char *local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  char **ppcStack_f8;
  char *local_f0;
  undefined8 *puStack_e8;
  ulong local_e0;
  char **local_d8;
  char *local_d0;
  ulong *puStack_c8;
  long *local_c0;
  long *plStack_b8;
  undefined1 *local_b0;
  char **local_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long *plStack_80;
  undefined7 local_78;
  undefined1 uStack_71;
  
  plVar45 = *(long **)(param_1 + 8);
  lVar39 = FUN_008ea334();
  if ((((((*(byte *)(param_1 + 0x11) & 1) != 0) || ((*(byte *)(param_1 + 0x30) & 1) != 0)) ||
       ((*(byte *)(param_1 + 800) & 1) != 0)) || ((*(byte *)(param_1 + 0x160) & 1) == 0)) &&
     (((lVar39 == 0x7fffffffffffffff ||
       (lVar46 = *(long *)(param_1 + 0x148), lVar46 == -0x8000000000000000)) ||
      ((lVar39 != -0x8000000000000000 &&
       ((lVar46 != 0x7fffffffffffffff && (499999 < lVar39 - lVar46)))))))) {
    if (*(char *)(param_1 + 0x160) == '\x01') {
      auVar62[8] = 0xaa;
      auVar62._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
      auVar62[9] = 0xaa;
      auVar62[10] = 0xaa;
      auVar62[0xb] = 0xaa;
      auVar62[0xc] = 0xaa;
      auVar62[0xd] = 0xaa;
      auVar62[0xe] = 0xaa;
      auVar62[0xf] = 0xaa;
      plStack_b8 = auVar62._8_8_;
      local_c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(**(long **)(param_1 + 8) + 0x20))(&local_c0,*(long **)(param_1 + 8),1);
      plVar54 = plStack_b8;
      if (local_c0 == plStack_b8) {
        lVar46 = 0;
        plVar53 = local_c0;
      }
      else {
        lVar46 = 0;
        plVar55 = local_c0;
        do {
          lVar50 = *plVar55;
          if (lVar46 == 0x7fffffffffffffff) {
            lVar58 = 0x7fffffffffffffff;
          }
          else {
            lVar1 = *(long *)(lVar50 + 0x18) + (ulong)*(byte *)(lVar50 + 2);
            lVar58 = 0x7fffffffffffffff;
            if (lVar1 != 0x7fffffffffffffff) {
              lVar58 = -0x8000000000000000;
              if (lVar1 != -0x8000000000000000 && lVar46 != -0x8000000000000000) {
                lVar58 = lVar1 + lVar46;
              }
            }
          }
          lVar46 = lVar58;
          plVar53 = *(long **)(param_1 + 8);
          *plVar55 = 0;
          FUN_0086e350(&local_88);
          (**(code **)(*plVar53 + 0x10))(plVar53,lVar50,&local_88);
          (**(code **)(**(long **)(param_1 + 8) + 0x18))(&local_88);
          plVar37 = plStack_80;
          plVar56 = local_88;
          for (plVar53 = local_88; local_88 = plVar56, plVar53 != plVar37; plVar53 = plVar53 + 1) {
            lVar50 = *plVar53;
            *plVar53 = 0;
            FUN_008eac40(param_1,lVar50);
            plVar56 = local_88;
          }
          plVar53 = plStack_80;
          if (plVar56 != (long *)0x0) {
            while (plVar56 != plVar53) {
              plVar53 = plVar53 + -1;
              if (plVar53 == (long *)0x0) goto LAB_008ec098;
              pvVar51 = (void *)*plVar53;
              *plVar53 = 0;
              if (pvVar51 != (void *)0x0) {
                FUN_007dc854(pvVar51);
                operator_delete(pvVar51);
              }
            }
            plStack_80 = plVar56;
            operator_delete(local_88);
          }
          plVar55 = plVar55 + 1;
          plVar53 = local_c0;
        } while (plVar55 != plVar54);
      }
      local_c0 = plVar53;
      plVar54 = plStack_b8;
      if (plVar53 != (long *)0x0) {
        while (plVar53 != plVar54) {
          plVar54 = plVar54 + -1;
          if (plVar54 == (long *)0x0) {
LAB_008ec098:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar51 = (void *)*plVar54;
          *plVar54 = 0;
          if (pvVar51 != (void *)0x0) {
            FUN_007dc854(pvVar51);
            operator_delete(pvVar51);
          }
        }
        plStack_b8 = plVar53;
        operator_delete(local_c0);
      }
      if (0 < lVar46) {
        lVar58 = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x50) * 500000) / 8000000;
        lVar1 = *(long *)(param_1 + 0x38);
        lVar40 = *(long *)(param_1 + 0x40);
        lVar50 = lVar58;
        if (lVar1 + lVar46 <= lVar58) {
          lVar50 = lVar1 + lVar46;
        }
        lVar59 = lVar1;
        if (lVar1 != -0x8000000000000000) {
          lVar59 = lVar50;
        }
        lVar50 = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * 500000) / 8000000;
        if (lVar46 != 0x7fffffffffffffff && lVar1 != 0x7fffffffffffffff) {
          lVar58 = lVar59;
        }
        lVar1 = lVar50;
        if (lVar40 + lVar46 <= lVar50) {
          lVar1 = lVar40 + lVar46;
        }
        lVar59 = lVar40;
        if (lVar40 != -0x8000000000000000) {
          lVar59 = lVar1;
        }
        if (lVar46 != 0x7fffffffffffffff && lVar40 != 0x7fffffffffffffff) {
          lVar50 = lVar59;
        }
        *(long *)(param_1 + 0x38) = lVar58;
        *(long *)(param_1 + 0x40) = lVar50;
      }
    }
    *(long *)(param_1 + 0x148) = lVar39;
  }
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) goto LAB_008ec264;
  piVar57 = (int *)(param_1 + 0x60);
  iVar49 = *piVar57;
  lVar46 = FUN_008eae24(param_1);
  if (lVar39 != 0x7fffffffffffffff) {
    lVar50 = 1000;
    if (iVar49 != 2) {
      lVar50 = 0;
    }
    lVar58 = lVar39;
    if (lVar39 != -0x8000000000000000) {
      lVar58 = lVar50 + lVar39;
    }
    if (lVar58 < lVar46) {
      lVar39 = FUN_008ea5bc(param_1,lVar39);
      auVar72._8_8_ = 0x8000000000000000;
      auVar72._0_8_ = 0x8000000000000000;
      auVar62 = *(undefined1 (*) [16])(param_1 + 0x38);
      auVar78 = NEON_cmeq(auVar62,auVar72,8);
      auVar61._8_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * lVar39) / 8000000;
      auVar61._0_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x50) * lVar39) / 8000000;
      auVar75 = NEON_cmgt(auVar62,auVar61,8);
      auVar61 = NEON_bif(auVar61,auVar62,auVar75,1);
      auVar75._0_8_ = auVar62._0_8_ - auVar61._0_8_;
      auVar75._8_8_ = auVar62._8_8_ - auVar61._8_8_;
      auVar69._0_8_ = auVar62._0_8_ + -0x7fffffffffffffff;
      auVar69._8_8_ = auVar62._8_8_ + -0x7fffffffffffffff;
      auVar76._8_8_ = 2;
      auVar76._0_8_ = 2;
      auVar62 = NEON_bit(auVar75,auVar72,auVar78,1);
      auVar78._8_8_ = 0x7ff8000000000000;
      auVar78._0_8_ = 0x7ff8000000000000;
      auVar61 = NEON_cmhi(auVar76,auVar69,8);
      auVar62 = NEON_bit(auVar62,auVar78,auVar61,1);
      *(long *)(param_1 + 0x40) = auVar62._8_8_;
      *(long *)(param_1 + 0x38) = auVar62._0_8_;
      goto LAB_008ec264;
    }
  }
  lVar50 = FUN_008ea5bc(param_1,lVar46);
  if (0 < lVar50) {
    auVar73._8_8_ = 0x8000000000000000;
    auVar73._0_8_ = 0x8000000000000000;
    auVar62 = *(undefined1 (*) [16])(param_1 + 0x38);
    auVar75 = NEON_cmeq(auVar62,auVar73,8);
    auVar63._8_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * lVar50) / 8000000;
    auVar63._0_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x50) * lVar50) / 8000000;
    auVar61 = NEON_cmgt(auVar62,auVar63,8);
    auVar61 = NEON_bif(auVar63,auVar62,auVar61,1);
    auVar64._0_8_ = auVar62._0_8_ - auVar61._0_8_;
    auVar64._8_8_ = auVar62._8_8_ - auVar61._8_8_;
    auVar70._0_8_ = auVar62._0_8_ + -0x7fffffffffffffff;
    auVar70._8_8_ = auVar62._8_8_ + -0x7fffffffffffffff;
    auVar77._8_8_ = 2;
    auVar77._0_8_ = 2;
    auVar62 = NEON_bit(auVar64,auVar73,auVar75,1);
    auVar74._8_8_ = 0x7ff8000000000000;
    auVar74._0_8_ = 0x7ff8000000000000;
    auVar61 = NEON_cmhi(auVar77,auVar70,8);
    auVar62 = NEON_bit(auVar62,auVar74,auVar61,1);
    *(long *)(param_1 + 0x40) = auVar62._8_8_;
    *(long *)(param_1 + 0x38) = auVar62._0_8_;
  }
  auVar65[8] = 0xaa;
  auVar65._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  auVar65[9] = 0xaa;
  auVar65[10] = 0xaa;
  auVar65[0xb] = 0xaa;
  auVar65[0xc] = 0xaa;
  auVar65[0xd] = 0xaa;
  auVar65[0xe] = 0xaa;
  auVar65[0xf] = 0xaa;
  uStack_98 = auVar65._8_8_;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086e350(&local_a0);
  if (*piVar57 == 2) {
    FUN_008ed3f0(&local_c0,piVar57,lVar39);
    FUN_0086e350(&local_88);
    pauVar2 = (undefined1 (*) [16])&local_c0;
    if ((char)local_a8 == '\0') {
      pauVar2 = (undefined1 (*) [16])&local_88;
    }
    auVar62 = *pauVar2;
    local_90 = *(undefined1 **)pauVar2[1];
    local_a0 = auVar62._0_8_;
    uStack_98._0_4_ = auVar62._8_4_;
    bVar38 = (int)uStack_98 == -1;
    uStack_98 = auVar62._8_8_;
    if (bVar38) goto LAB_008eb794;
    lVar50 = FUN_008eceb4(piVar57);
    bVar38 = true;
  }
  else {
LAB_008eb794:
    lVar50 = 0;
    bVar38 = false;
  }
  if (*(int *)(param_1 + 0x334) < 1) {
    lVar58 = 0;
    uVar52 = 0;
    local_378 = 0;
  }
  else {
    iVar49 = 0;
    lVar58 = 0;
    lVar1 = lVar39;
    if (lVar39 != -0x8000000000000000) {
      lVar1 = lVar39 + -50000;
    }
    uVar52 = 0;
    local_378 = 0;
    do {
      lVar40 = FUN_008ec2d4(param_1,&local_a0,lVar46,lVar39);
      if (lVar40 == 0) {
        if ((lVar39 == 0x7fffffffffffffff) || (lVar46 == -0x8000000000000000)) {
          lVar46 = 0x7fffffffffffffff;
          if (lVar39 != 0x7fffffffffffffff) goto LAB_008ebbcc;
LAB_008ebbd0:
          lVar40 = *(long *)(param_1 + 0x140);
          if (*(long *)(param_1 + 0x140) <= lVar46) {
            lVar40 = lVar46;
          }
          *(long *)(param_1 + 0x140) = lVar40;
        }
        else if (((lVar39 != -0x8000000000000000) && (lVar46 != 0x7fffffffffffffff)) &&
                (50000 < lVar39 - lVar46)) {
LAB_008ebbcc:
          lVar46 = lVar1;
          goto LAB_008ebbd0;
        }
        uVar42 = FUN_008ef554(param_1 + 0x168);
        if (((uVar42 & 1) == 0) || ((*(byte *)(param_1 + 800) & 1) != 0)) break;
        if (lVar50 == 0) {
          if ((*(long *)(param_1 + 0x58) < 1) || (*(long *)(param_1 + 0x40) != 0)) break;
          lVar40 = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * 5000) / 8000000;
LAB_008ebc64:
          lVar59 = lVar40;
          if (lVar40 < 1) break;
        }
        else {
          lVar40 = lVar50 - lVar58;
          if (lVar40 == 0 || lVar50 < lVar58) break;
          lVar59 = 0x7fffffffffffffff;
          if ((lVar50 != 0x7fffffffffffffff) && (lVar58 != -0x8000000000000000)) goto LAB_008ebc64;
        }
        auVar68[8] = 0xaa;
        auVar68._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
        auVar68[9] = 0xaa;
        auVar68[10] = 0xaa;
        auVar68[0xb] = 0xaa;
        auVar68[0xc] = 0xaa;
        auVar68[0xd] = 0xaa;
        auVar68[0xe] = 0xaa;
        auVar68[0xf] = 0xaa;
        plStack_b8 = auVar68._8_8_;
        local_c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        (**(code **)(**(long **)(param_1 + 8) + 0x20))(&local_c0,*(long **)(param_1 + 8),lVar59);
        plVar53 = plStack_b8;
        plVar54 = local_c0;
        plVar55 = local_c0;
        if (local_c0 == plStack_b8) {
          lVar47 = *(long *)(param_1 + 0x40);
          lVar60 = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * 500000) / 8000000;
          lVar40 = lVar60;
          if (lVar47 + lVar59 <= lVar60) {
            lVar40 = lVar47 + lVar59;
          }
          lVar48 = lVar47;
          if (lVar47 != -0x8000000000000000) {
            lVar48 = lVar40;
          }
          if (lVar47 != 0x7fffffffffffffff && lVar59 != 0x7fffffffffffffff) {
            lVar60 = lVar48;
          }
          *(long *)(param_1 + 0x40) = lVar60;
        }
        else {
          do {
            lVar40 = *plVar55;
            plVar56 = plVar55 + 1;
            *plVar55 = 0;
            FUN_008eac40(param_1,lVar40);
            plVar55 = plVar56;
          } while (plVar56 != plVar53);
          local_378 = local_378 + ((ulong)((long)plVar53 - (long)plVar54) >> 3);
          plVar55 = local_c0;
        }
        local_c0 = plVar55;
        plVar56 = plStack_b8;
        if (plVar55 != (long *)0x0) {
          while (plVar55 != plVar56) {
            plVar56 = plVar56 + -1;
            if (plVar56 == (long *)0x0) goto LAB_008ec098;
            pvVar51 = (void *)*plVar56;
            *plVar56 = 0;
            if (pvVar51 != (void *)0x0) {
              FUN_007dc854(pvVar51);
              operator_delete(pvVar51);
            }
          }
          plStack_b8 = plVar55;
          operator_delete(local_c0);
        }
        if (plVar54 == plVar53) break;
      }
      else {
        if ((*(uint *)(lVar40 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        lVar59 = *(long *)(lVar40 + 0x18) + (ulong)*(byte *)(lVar40 + 2);
        lVar60 = lVar59;
        if (*(char *)(param_1 + 0x331) == '\x01') {
          lVar47 = *(long *)(lVar40 + 0x10);
          lVar60 = 0x7fffffffffffffff;
          if ((lVar47 != 0x7fffffffffffffff) &&
             (lVar48 = *(long *)(param_1 + 0x18), lVar48 != 0x7fffffffffffffff)) {
            lVar3 = -0x8000000000000000;
            if (lVar48 != -0x8000000000000000 && lVar47 != -0x8000000000000000) {
              lVar3 = lVar48 + lVar47;
            }
            if ((lVar59 != 0x7fffffffffffffff) && (lVar3 != 0x7fffffffffffffff)) {
              lVar60 = -0x8000000000000000;
              if (lVar3 != -0x8000000000000000 && lVar59 != -0x8000000000000000) {
                lVar60 = lVar3 + lVar59;
              }
            }
          }
        }
        lVar59 = *(long *)(lVar40 + 0x78);
        (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),lVar40,&local_a0);
        (**(code **)(**(long **)(param_1 + 8) + 0x18))(&local_c0);
        plVar55 = plStack_b8;
        plVar53 = local_c0;
        for (plVar54 = local_c0; local_c0 = plVar53, plVar54 != plVar55; plVar54 = plVar54 + 1) {
          lVar40 = *plVar54;
          *plVar54 = 0;
          FUN_008eac40(param_1,lVar40);
          plVar53 = local_c0;
        }
        plVar54 = plStack_b8;
        if (plVar53 != (long *)0x0) {
          while (plVar53 != plVar54) {
            plVar54 = plVar54 + -1;
            if (plVar54 == (long *)0x0) goto LAB_008ec098;
            pvVar51 = (void *)*plVar54;
            *plVar54 = 0;
            if (pvVar51 != (void *)0x0) {
              FUN_007dc854(pvVar51);
              operator_delete(pvVar51);
            }
          }
          plStack_b8 = plVar53;
          operator_delete(local_c0);
        }
        lVar40 = 0x7fffffffffffffff;
        if ((lVar58 != 0x7fffffffffffffff) && (lVar60 != 0x7fffffffffffffff)) {
          lVar40 = -0x8000000000000000;
          if (lVar60 != -0x8000000000000000 && lVar58 != -0x8000000000000000) {
            lVar40 = lVar60 + lVar58;
          }
        }
        lVar58 = lVar40;
        if ((lVar59 != 4) && ((*(byte *)(param_1 + 0x158) & 1) == 0)) {
          if (param_1 == -0x150) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(long *)(param_1 + 0x150) = lVar39;
          *(undefined1 *)(param_1 + 0x158) = 1;
        }
        if (((lVar59 != 0) || (*(char *)(param_1 + 0x330) == '\x01')) && (0 < lVar60)) {
          lVar59 = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x50) * 500000) / 8000000;
          lVar47 = *(long *)(param_1 + 0x38);
          lVar48 = *(long *)(param_1 + 0x40);
          lVar40 = lVar59;
          if (lVar47 + lVar60 <= lVar59) {
            lVar40 = lVar47 + lVar60;
          }
          lVar3 = lVar47;
          if (lVar47 != -0x8000000000000000) {
            lVar3 = lVar40;
          }
          lVar40 = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * 500000) / 8000000;
          if (lVar60 != 0x7fffffffffffffff && lVar47 != 0x7fffffffffffffff) {
            lVar59 = lVar3;
          }
          lVar47 = lVar40;
          if (lVar48 + lVar60 <= lVar40) {
            lVar47 = lVar48 + lVar60;
          }
          lVar3 = lVar48;
          if (lVar48 != -0x8000000000000000) {
            lVar3 = lVar47;
          }
          if (lVar60 != 0x7fffffffffffffff && lVar48 != 0x7fffffffffffffff) {
            lVar40 = lVar3;
          }
          *(long *)(param_1 + 0x38) = lVar59;
          *(long *)(param_1 + 0x40) = lVar40;
        }
        uVar52 = uVar52 + 1;
        *(long *)(param_1 + 0x148) = lVar39;
        if (bVar38) {
          local_90 = (undefined1 *)CONCAT44(local_90._4_4_ + (int)lVar60,(undefined4)local_90);
          if (lVar50 <= lVar58) {
            if (*(int *)(param_1 + 0x334) <= iVar49) goto LAB_008ebe08;
            goto LAB_008ebdc4;
          }
          lVar46 = FUN_008eae24(param_1);
          if (lVar39 <= lVar46) {
            lVar46 = lVar39;
          }
        }
        else {
          lVar46 = FUN_008eae24(param_1);
          if (lVar39 < lVar46) {
            if (*(int *)(param_1 + 0x334) <= iVar49) goto LAB_008ebe08;
            goto LAB_008ec250;
          }
        }
        lVar40 = FUN_008ea5bc(param_1,lVar46);
        auVar36._8_8_ = 0x8000000000000000;
        auVar36._0_8_ = 0x8000000000000000;
        auVar62 = *(undefined1 (*) [16])(param_1 + 0x38);
        auVar66._8_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * lVar40) / 8000000;
        auVar66._0_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x50) * lVar40) / 8000000;
        auVar61 = NEON_cmgt(auVar62,auVar66,8);
        auVar61 = NEON_bif(auVar66,auVar62,auVar61,1);
        auVar75 = NEON_cmeq(auVar62,auVar36,8);
        auVar67._0_8_ = auVar62._0_8_ - auVar61._0_8_;
        auVar67._8_8_ = auVar62._8_8_ - auVar61._8_8_;
        auVar71._0_8_ = auVar62._0_8_ + -0x7fffffffffffffff;
        auVar71._8_8_ = auVar62._8_8_ + -0x7fffffffffffffff;
        auVar62 = NEON_bit(auVar67,auVar36,auVar75,1);
        auVar34._8_8_ = 2;
        auVar34._0_8_ = 2;
        auVar61 = NEON_cmhi(auVar34,auVar71,8);
        auVar35._8_8_ = 0x7ff8000000000000;
        auVar35._0_8_ = 0x7ff8000000000000;
        auVar62 = NEON_bit(auVar62,auVar35,auVar61,1);
        *(long *)(param_1 + 0x40) = auVar62._8_8_;
        *(long *)(param_1 + 0x38) = auVar62._0_8_;
      }
      iVar49 = iVar49 + 1;
    } while (iVar49 < *(int *)(param_1 + 0x334));
    if (iVar49 < *(int *)(param_1 + 0x334)) {
      if (bVar38) {
LAB_008ebdc4:
        *(bool *)(param_1 + 0x138) = lVar58 == 0;
        if (lVar58 != 0) {
          uVar41 = FUN_008ea334(param_1);
          FUN_008ed564(piVar57,uVar41,lVar58);
        }
      }
LAB_008ec250:
      uVar41 = FUN_008ea334(param_1);
      FUN_008eaa88(param_1,uVar41);
      goto LAB_008ec264;
    }
  }
LAB_008ebe08:
  uVar42 = FUN_004249b0();
  if ((uVar42 & 1) == 0) {
    local_2f8 = "../../modules/pacing/pacing_controller.cc";
    local_2f0 = 0x10cb;
    local_2e8 = &uStack_2f9;
    ppcStack_2d8 = &local_2f8;
    local_2e0 = "PacingController exceeded max iterations in send-loop. Debug info: ";
    ppcStack_2c8 = &local_2e0;
    local_258 = &local_270;
    local_2d0 = " packets sent = ";
    local_2c0 = (ulong)uVar52;
    local_2b8 = &local_2d0;
    puStack_2a8 = &local_2c0;
    local_248 = &local_260;
    local_2b0 = ", padding packets generated = ";
    local_2a0 = local_378 & 0xffffffff;
    local_298 = &local_2b0;
    puStack_288 = &local_2a0;
    local_290 = ", bytes sent = ";
    local_268 = &local_280;
    local_278 = &local_290;
    local_270 = ", probing = ";
    local_260 = "true";
    if (!bVar38) {
      local_260 = "false";
    }
    local_228 = &local_240;
    local_208 = &local_220;
    local_250 = ", recommended_probe_size = ";
    local_238 = &local_250;
    local_1e8 = &local_200;
    local_1e0 = *(undefined8 *)(param_1 + 0x140);
    local_1c0 = *(undefined8 *)(param_1 + 0x148);
    local_230 = ", now = ";
    local_218 = &local_230;
    local_210 = ", target_send_time = ";
    local_1f8 = &local_210;
    local_1c8 = &local_1e0;
    local_1f0 = ", last_process_time = ";
    local_1d8 = &local_1f0;
    local_1d0 = ", last_send_time = ";
    local_1b8 = &local_1d0;
    local_1a0 = "true";
    if (*(char *)(param_1 + 0x30) == '\0') {
      local_1a0 = "false";
    }
    local_198 = &local_1b0;
    local_188 = &local_1a0;
    local_1b0 = ", paused = ";
    local_190 = ", media_debt = ";
    local_178 = &local_190;
    local_180 = *(undefined8 *)(param_1 + 0x38);
    local_160 = *(undefined8 *)(param_1 + 0x40);
    local_170 = ", padding_debt = ";
    ppcStack_158 = &local_170;
    local_168 = &local_180;
    puStack_148 = &local_160;
    local_150 = ", pacing_rate = ";
    local_140 = *(undefined8 *)(param_1 + 0x48);
    local_120 = *(undefined8 *)(param_1 + 0x50);
    ppcStack_138 = &local_150;
    local_1a8 = &local_1c0;
    puStack_128 = &local_140;
    local_130 = ", adjusted_media_rate = ";
    ppcStack_118 = &local_130;
    local_100 = *(undefined8 *)(param_1 + 0x58);
    puStack_108 = &local_120;
    local_110 = ", padding_rate = ";
    ppcStack_f8 = &local_110;
    puStack_e8 = &local_100;
    local_f0 = ", queue size (packets) = ";
    local_280 = lVar58;
    local_240 = lVar50;
    local_220 = lVar39;
    local_200 = lVar46;
    local_e0 = FUN_008ef53c(param_1 + 0x168);
    local_e0 = local_e0 & 0xffffffff;
    local_d8 = &local_f0;
    puStack_c8 = &local_e0;
    local_d0 = ", queue size (payload bytes) = ";
    local_308 = FUN_008ef548(param_1 + 0x168);
    FUN_008ecb04(&local_88,&local_308);
    local_b0 = (undefined1 *)CONCAT17(uStack_71,local_78);
    local_a8 = &local_d0;
    plStack_b8 = plStack_80;
    local_c0 = local_88;
    puVar4 = (undefined8 *)((undefined8 *)puStack_c8[1])[1];
    puVar5 = (undefined8 *)puVar4[1];
    puVar6 = (undefined8 *)puVar5[1];
    puVar7 = (undefined8 *)puVar6[1];
    puVar8 = (undefined8 *)puVar7[1];
    puVar9 = (undefined8 *)puVar8[1];
    puVar10 = (undefined8 *)puVar9[1];
    puVar11 = (undefined8 *)puVar10[1];
    puVar12 = (undefined8 *)puVar11[1];
    puVar13 = (undefined8 *)puVar12[1];
    puVar14 = (undefined8 *)puVar13[1];
    puVar15 = (undefined8 *)puVar14[1];
    puVar16 = (undefined8 *)puVar15[1];
    puVar17 = (undefined8 *)puVar16[1];
    puVar18 = (undefined8 *)puVar17[1];
    puVar19 = (undefined8 *)puVar18[1];
    puVar20 = (undefined8 *)puVar19[1];
    puVar21 = (undefined8 *)puVar20[1];
    puVar22 = (undefined8 *)puVar21[1];
    puVar23 = (undefined8 *)puVar22[1];
    puVar24 = (undefined8 *)puVar23[1];
    puVar25 = (undefined8 *)puVar24[1];
    puVar26 = (undefined8 *)puVar25[1];
    puVar27 = (undefined8 *)puVar26[1];
    puVar28 = (undefined8 *)puVar27[1];
    puVar29 = (undefined8 *)puVar28[1];
    puVar30 = (undefined4 *)puVar29[1];
    puVar43 = *(undefined8 **)(puVar30 + 2);
    puVar31 = (undefined4 *)puVar43[1];
    puVar44 = *(undefined8 **)(puVar31 + 2);
    puVar32 = (undefined8 *)puVar44[1];
    puVar33 = (undefined8 *)puVar32[1];
    FUN_00623bb0(&DAT_002256e0,*puVar33,*(undefined4 *)(puVar33 + 1),*puVar32,*puVar44,*puVar31,
                 *puVar43,*puVar30,*puVar29,*puVar28,*puVar27,*puVar26,*puVar25,*puVar24,*puVar23,
                 *puVar22,*puVar21,*puVar20,*puVar19,*puVar18,*puVar17,*puVar16,*puVar15,*puVar14,
                 *puVar13,*puVar12,*puVar11,*puVar10,*puVar9,*puVar8,*puVar7,*puVar6,*puVar5,*puVar4
                 ,*(undefined8 *)puStack_c8[1],(int)*puStack_c8,local_d0,&local_c0);
  }
  *(long *)(param_1 + 0x140) = lVar39;
  *(long *)(param_1 + 0x148) = lVar39;
LAB_008ec264:
  (**(code **)(*plVar45 + 0x28))();
  return;
}


// ===== 008ec2d4  FUN_008ec2d4 =====

undefined8 FUN_008ec2d4(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined1 *local_40;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((iVar1 != -1) && (*(int *)(param_2 + 0x14) == 0)) {
    puStack_48 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_50 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(param_1 + 8) + 0x20))(&local_50,*(long **)(param_1 + 8),1);
    puVar3 = local_50;
    if (local_50 != puStack_48) {
      uVar6 = *local_50;
      *local_50 = 0;
      puVar8 = puStack_48;
      if (local_50 == (undefined8 *)0x0) {
        return uVar6;
      }
      while( true ) {
        if (puVar3 == puVar8) {
          puStack_48 = puVar3;
          operator_delete(local_50);
          return uVar6;
        }
        puVar8 = puVar8 + -1;
        if (puVar8 == (undefined8 *)0x0) break;
        pvVar7 = (void *)*puVar8;
        *puVar8 = 0;
        if (pvVar7 != (void *)0x0) {
          FUN_007dc854(pvVar7);
          operator_delete(pvVar7);
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (local_50 != (undefined8 *)0x0) {
      puStack_48 = local_50;
      operator_delete(local_50);
    }
  }
  uVar4 = FUN_008ef554(param_1 + 0x168);
  if ((uVar4 & 1) == 0) {
    if ((((*(byte *)(param_1 + 0x12) & 1) != 0) ||
        (lVar5 = FUN_008ef568(param_1 + 0x168,0), 0xfffffffffffffffd < lVar5 + 0x7fffffffffffffffU))
       && ((*(char *)(param_1 + 0x14) != '\x01' ||
           (lVar5 = FUN_008ef61c(param_1 + 0x168), 0xfffffffffffffffd < lVar5 + 0x7fffffffffffffffU)
           ))) {
      lVar5 = -0x8000000000000000;
    }
    if ((iVar1 == -1) && (lVar5 + 0x8000000000000001U < 2)) {
      if ((*(byte *)(param_1 + 800) & 1) != 0) goto LAB_008ec3b8;
      if ((param_4 <= param_3) && (*(long *)(param_1 + 0x20) == 0)) {
        lVar5 = 0x7fffffffffffffff;
        if (param_4 != 0x7fffffffffffffff) {
          lVar2 = 0;
          if (*(long *)(param_1 + 0x50) != 0) {
            lVar2 = (*(long *)(param_1 + 0x38) * 8000000) / *(long *)(param_1 + 0x50);
          }
          if (lVar2 != 0x7fffffffffffffff) {
            lVar5 = -0x8000000000000000;
            if (lVar2 != -0x8000000000000000 && param_4 != -0x8000000000000000) {
              lVar5 = lVar2 + param_4;
            }
          }
        }
        if (param_3 < lVar5) goto LAB_008ec3b8;
      }
    }
    uVar6 = FUN_008ef008(param_1 + 0x168);
  }
  else {
LAB_008ec3b8:
    uVar6 = 0;
  }
  return uVar6;
}


// ===== 008ec4d8  FUN_008ec4d8 =====

void FUN_008ec4d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x328) = param_2;
  return;
}


// ===== 008ec4e4  FUN_008ec4e4 =====

void FUN_008ec4e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar7 = param_1[4];
    plVar3 = puVar9 + (uVar7 >> 9);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0x1ff) * 8;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 9] + (param_1[5] + uVar7 & 0x1ff) * 8) {
      if (lVar4 == 0) goto LAB_008ec64c;
      lVar4 = lVar4 + 8;
      if (lVar4 - lVar5 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar4 = lVar5;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar1 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_008ec5c4;
    uVar1 = 0x200;
  }
  param_1[4] = uVar1;
LAB_008ec5c4:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar6 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if ((1 < uVar7) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_008ec64c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008ec69c  FUN_008ec69c =====

void FUN_008ec69c(undefined8 param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)((long)param_2 + 0xf0);
  do {
    pvVar4 = (void *)((long)pvVar3 + -0x30);
    FUN_008ec7c4((long)pvVar3 + -0x30);
    puVar6 = *(undefined8 **)((long)pvVar3 + -0x28);
    puVar7 = *(undefined8 **)((long)pvVar3 + -0x20);
    if (puVar6 != puVar7) {
      do {
        puVar5 = puVar6 + 1;
        operator_delete((void *)*puVar6);
        puVar6 = puVar5;
      } while (puVar5 != puVar7);
      puVar6 = *(undefined8 **)((long)pvVar3 + -0x28);
      puVar7 = *(undefined8 **)((long)pvVar3 + -0x20);
    }
    uVar2 = (ulong)((long)puVar7 + (-8 - ((long)puVar7 << 0x3d))) >> 3;
    uVar1 = (ulong)(((long)puVar6 - (long)puVar7 << 0x3d) - ((long)puVar6 - (long)puVar7)) >> 3;
    if (uVar2 <= uVar1) {
      uVar1 = uVar2;
    }
    if ((1 < uVar1) && ((((int)puVar6 - (int)puVar7 | -(int)puVar7) & 7U) == 0)) {
      uVar1 = uVar1 & 0x1ffffffffffffffe;
      puVar7 = puVar7 + -uVar1;
      do {
        uVar1 = uVar1 - 2;
      } while (uVar1 != 0);
    }
    while (puVar7 != puVar6) {
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(undefined8 **)((long)pvVar3 + -0x20) = puVar7;
    if (*(void **)((long)pvVar3 + -0x30) != (void *)0x0) {
      operator_delete(*(void **)((long)pvVar3 + -0x30));
    }
    pvVar3 = pvVar4;
  } while (pvVar4 != param_2);
  operator_delete(param_2);
  return;
}


// ===== 008ec7c4  FUN_008ec7c4 =====

void FUN_008ec7c4(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != puVar5) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar6;
    plVar8 = puVar2 + uVar6 / 0xaa;
    puVar10 = (undefined8 *)(*plVar8 + (uVar6 % 0xaa) * 0x18);
    puVar9 = (undefined8 *)(puVar2[uVar1 / 0xaa] + (uVar1 % 0xaa) * 0x18);
    if (puVar10 != puVar9) {
      do {
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar7 = (void *)*puVar10;
        *puVar10 = 0;
        if (pvVar7 != (void *)0x0) {
          FUN_007dc854(pvVar7);
          operator_delete(pvVar7);
        }
        puVar10 = puVar10 + 3;
        if ((long)puVar10 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          puVar10 = (undefined8 *)*plVar8;
        }
      } while (puVar10 != puVar9);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar4 = (long)puVar5 - (long)puVar2;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x55;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar3 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


// ===== 008ec928  FUN_008ec928 =====

void FUN_008ec928(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar5 = param_1[4];
    plVar3 = puVar9 + uVar5 / 0x49;
    lVar6 = *plVar3;
    lVar4 = lVar6 + (uVar5 % 0x49) * 0x38;
    while (lVar4 != puVar9[(param_1[5] + uVar5) / 0x49] + ((param_1[5] + uVar5) % 0x49) * 0x38) {
      if (lVar4 == 0) goto LAB_008ecab4;
      lVar4 = lVar4 + 0x38;
      if (lVar4 - lVar6 == 0xff8) {
        plVar3 = plVar3 + 1;
        lVar6 = *plVar3;
        lVar4 = lVar6;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar5 = lVar4 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar5 == 1) {
    uVar1 = 0x24;
  }
  else {
    if (uVar5 != 2) goto LAB_008eca2c;
    uVar1 = 0x49;
  }
  param_1[4] = uVar1;
LAB_008eca2c:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar7 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar5 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar7 <= uVar5) {
    uVar5 = uVar7;
  }
  if ((1 < uVar5) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar5;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_008ecab4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008ecb04  FUN_008ecb04 =====

void FUN_008ecb04(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 **__src;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00665f28(&local_58,*param_2);
  pppuVar3 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar3 = &local_58;
  }
  thunk_FUN_00547cac(&local_70,pppuVar3,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  uVar5 = local_60;
  puVar4 = local_70;
  __n = uStack_68;
  __src = (undefined8 **)local_70;
  if (-1 < (long)local_60) {
    __n = local_60 >> 0x38;
    __src = &local_70;
  }
  if ((__src == (undefined8 **)0x0) && (__n != 0)) {
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
  if ((long)uVar5 < 0) {
    operator_delete(puVar4);
  }
  return;
}


// ===== 008ecc84  FUN_008ecc84 =====

void FUN_008ecc84(undefined8 *param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  undefined8 *local_40;
  undefined8 *puStack_38;
  
  FUN_00661054(param_1,"max_probe_delay",0xf);
  *param_1 = &PTR_FUN_00d267f8;
  param_1[8] = 10000;
  FUN_00661054(param_1 + 9,"min_packet_size",0xf);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[9] = &PTR_FUN_00d280c0;
  param_1[0x11] = 200;
  local_40 = param_1;
  puStack_38 = param_1 + 9;
  (**(code **)(*param_2 + 0x10))(&local_58,param_2,"WebRTC-Bwe-ProbingBehavior",0x1a);
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &local_58;
  }
  FUN_00661cc0(&local_40,2,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


// ===== 008ecd74  FUN_008ecd74 =====

void FUN_008ecd74(int *param_1)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[0xe] = -1;
  param_1[0xf] = 0x7fffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_008ecc84(param_1 + 0x10);
  if (*param_1 == 0) {
    *param_1 = 1;
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/pacing/bitrate_prober.cc",0x1b1,
                   "Bandwidth probing enabled, set to inactive");
      return;
    }
  }
  return;
}


// ===== 008ece00  FUN_008ece00 =====

void FUN_008ece00(int *param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  
  *(byte *)(param_1 + 0x34) = param_2;
  if ((*(long *)(param_1 + 0xc) == 0) || (*param_1 != 1)) {
    return;
  }
  if ((param_2 & 1) == 0) {
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 4) + (*(ulong *)(param_1 + 10) / 0x49) * 8) +
                     (*(ulong *)(param_1 + 10) % 0x49) * 0x38);
    lVar1 = *(long *)(param_1 + 0x32);
    if ((long)(&uleb128_003d0900 + *plVar2 * plVar2[4]) / 8000000 <= *(long *)(param_1 + 0x32)) {
      lVar1 = (long)(&uleb128_003d0900 + *plVar2 * plVar2[4]) / 8000000;
    }
    if (0 < lVar1) {
      return;
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = -0x80000000;
  *param_1 = 2;
  return;
}


// ===== 008eceb4  FUN_008eceb4 =====

long FUN_008eceb4(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + (*(ulong *)(param_1 + 0x28) / 0x49) * 8)
                     + (*(ulong *)(param_1 + 0x28) % 0x49) * 0x38);
    return (long)(&uleb128_003d0900 + plVar1[4] * *plVar1) / 8000000;
  }
  return 0;
}


// ===== 008ecf34  FUN_008ecf34 =====

void FUN_008ecf34(int *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((*(long *)(param_1 + 0xc) != 0) && (*param_1 == 1)) {
    if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
      plVar2 = (long *)(*(long *)(*(long *)(param_1 + 4) + (*(ulong *)(param_1 + 10) / 0x49) * 8) +
                       (*(ulong *)(param_1 + 10) % 0x49) * 0x38);
      lVar1 = *(long *)(param_1 + 0x32);
      if ((long)(&uleb128_003d0900 + *plVar2 * plVar2[4]) / 8000000 <= *(long *)(param_1 + 0x32)) {
        lVar1 = (long)(&uleb128_003d0900 + *plVar2 * plVar2[4]) / 8000000;
      }
      if (param_2 < lVar1) {
        return;
      }
    }
    param_1[0xe] = 0;
    param_1[0xf] = -0x80000000;
    *param_1 = 2;
  }
  return;
}


// ===== 008ecfe4  FUN_008ecfe4 =====

/* WARNING: Removing unreachable block (ram,0x008ed2c0) */
/* WARNING: Removing unreachable block (ram,0x008ed2dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008ecfe4(int *param_1,long *param_2)

{
  char *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_109;
  char *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  char *local_f0;
  char **ppcStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char **local_c8;
  undefined *local_c0;
  void **ppvStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *local_80;
  void *local_78;
  undefined **ppuStack_70;
  undefined7 local_68;
  undefined1 uStack_61;
  
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (uVar2 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 4);
    uVar5 = *(ulong *)(param_1 + 10);
    do {
      lVar6 = puVar4[uVar5 / 0x49] + (uVar5 % 0x49) * 0x38;
      lVar7 = *param_2;
      if ((lVar7 != 0x7fffffffffffffff) &&
         (lVar8 = *(long *)(lVar6 + 0x28), lVar8 != -0x8000000000000000)) {
        if ((uVar2 < 6) &&
           ((lVar8 == 0x7fffffffffffffff || lVar7 == -0x8000000000000000) ||
            lVar7 - lVar8 < 0x4c4b41)) break;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar5 = uVar5 + 1;
      uVar2 = uVar2 - 1;
      *(ulong *)(param_1 + 10) = uVar5;
      *(ulong *)(param_1 + 0xc) = uVar2;
      if (0x91 < uVar5) {
        operator_delete((void *)*puVar4);
        puVar4 = (undefined8 *)(*(long *)(param_1 + 4) + 8);
        uVar2 = *(ulong *)(param_1 + 0xc);
        *(undefined8 **)(param_1 + 4) = puVar4;
        uVar5 = *(long *)(param_1 + 10) - 0x49;
        *(ulong *)(param_1 + 10) = uVar5;
      }
    } while (uVar2 != 0);
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086e350(&local_b0);
  local_b0 = (undefined1 *)param_2[1];
  local_88 = (undefined1 *)*param_2;
  lVar7 = *(long *)(param_1 + 4);
  lVar8 = *(long *)(param_1 + 6);
  puStack_90 = (undefined1 *)param_2[3];
  uStack_a8 = (undefined1 *)NEON_rev64(param_2[4],4);
  puStack_98 = (undefined1 *)0x0;
  local_80 = (undefined1 *)0x8000000000000000;
  lVar6 = 0;
  if (lVar8 != lVar7) {
    lVar6 = (lVar8 - lVar7 >> 3) * 0x49 + -1;
  }
  local_a0 = (undefined1 *)
             CONCAT44(local_a0._4_4_,
                      (int)(SUB168(SEXT816((long)(&uleb128_003d0900 + param_2[2] * (long)local_b0))
                                   * SEXT816(0x431bde82d7b634db),8) >> 0x15) -
                      (SUB164(SEXT816((long)(&uleb128_003d0900 + param_2[2] * (long)local_b0)) *
                              SEXT816(0x431bde82d7b634db),0xc) >> 0x1f));
  if (lVar6 == *(long *)(param_1 + 0xc) + *(long *)(param_1 + 10)) {
    FUN_008ed724(param_1 + 2);
    lVar7 = *(long *)(param_1 + 4);
    lVar8 = *(long *)(param_1 + 6);
  }
  if ((lVar7 == lVar8) ||
     (plVar3 = (long *)(*(long *)(lVar7 + ((ulong)(*(long *)(param_1 + 0xc) +
                                                  *(long *)(param_1 + 10)) / 0x49) * 8) +
                       ((ulong)(*(long *)(param_1 + 0xc) + *(long *)(param_1 + 10)) % 0x49) * 0x38),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar3[6] = (long)local_80;
  plVar3[3] = (long)puStack_98;
  plVar3[2] = (long)local_a0;
  plVar3[5] = (long)local_88;
  plVar3[4] = (long)puStack_90;
  plVar3[1] = (long)uStack_a8;
  *plVar3 = (long)local_b0;
  lVar6 = *(long *)(param_1 + 0xc);
  *(long *)(param_1 + 0xc) = lVar6 + 1;
  if ((lVar6 != -1) && (*param_1 == 1)) {
    if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
      plVar3 = (long *)(*(long *)(*(long *)(param_1 + 4) + (*(ulong *)(param_1 + 10) / 0x49) * 8) +
                       (*(ulong *)(param_1 + 10) % 0x49) * 0x38);
      lVar6 = *(long *)(param_1 + 0x32);
      if ((long)(&uleb128_003d0900 + *plVar3 * plVar3[4]) / 8000000 <= *(long *)(param_1 + 0x32)) {
        lVar6 = (long)(&uleb128_003d0900 + *plVar3 * plVar3[4]) / 8000000;
      }
      if (0 < lVar6) goto LAB_008ed264;
    }
    param_1[0xe] = 0;
    param_1[0xf] = -0x80000000;
    *param_1 = 2;
  }
LAB_008ed264:
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    local_108 = "../../modules/pacing/bitrate_prober.cc";
    local_100 = 0x411;
    local_f8 = &uStack_109;
    ppcStack_e8 = &local_108;
    local_f0 = "Probe cluster (bitrate_bps:min bytes:min packets): (";
    FUN_008ee354(&local_78,&local_b0);
    local_d0 = CONCAT17(uStack_61,local_68);
    local_c8 = &local_f0;
    uStack_d8 = ppuStack_70;
    local_e0 = local_78;
    local_78 = (void *)((ulong)local_a0 & 0xffffffff);
    ppvStack_b8 = &local_e0;
    local_c0 = &DAT_001ca603;
    ppuStack_70 = &local_c0;
    pcVar1 = "Inactive";
    if (*param_1 != 1) {
      pcVar1 = "Active";
    }
    FUN_00623bb0(&DAT_00225705,*ppcStack_e8,*(undefined4 *)(ppcStack_e8 + 1),local_f0,&local_e0,
                 &DAT_001ca603,local_78,&DAT_001ca603,uStack_a8._4_4_,&DAT_001e1644,pcVar1,
                 &DAT_001ca519);
    if (local_d0 < 0) {
      operator_delete(local_e0);
    }
  }
  return;
}


// ===== 008ed3c8  FUN_008ed3c8 =====

undefined8 FUN_008ed3c8(int *param_1)

{
  if ((*param_1 == 2) && (*(long *)(param_1 + 0xc) != 0)) {
    return *(undefined8 *)(param_1 + 0xe);
  }
  return 0x7fffffffffffffff;
}


// ===== 008ed3f0  FUN_008ed3f0 =====

void FUN_008ed3f0(undefined8 *param_1,int *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((*(long *)(param_2 + 0xc) == 0) || (*param_2 != 2)) {
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    if (*(long *)(param_2 + 0xe) + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      lVar5 = param_3;
      if (param_3 != -0x8000000000000000) {
        lVar5 = param_3 - *(long *)(param_2 + 0xe);
      }
      if (param_3 != 0x7fffffffffffffff) {
        param_3 = lVar5;
      }
      if (*(long *)(param_2 + 0x20) < param_3) {
        uVar6 = *(ulong *)(param_2 + 10);
        if ((*(undefined8 **)(param_2 + 4))[uVar6 / 0x49] + (uVar6 % 0x49) * 0x38 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        lVar5 = *(long *)(param_2 + 0xc) + -1;
        *(ulong *)(param_2 + 10) = uVar6 + 1;
        *(long *)(param_2 + 0xc) = lVar5;
        if (0x91 < uVar6 + 1) {
          operator_delete((void *)**(undefined8 **)(param_2 + 4));
          lVar5 = *(long *)(param_2 + 0xc);
          *(long *)(param_2 + 4) = *(long *)(param_2 + 4) + 8;
          *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + -0x49;
        }
        if (lVar5 == 0) {
          uVar3 = 0;
          *(undefined1 *)param_1 = 0;
          *param_2 = 1;
          goto LAB_008ed524;
        }
      }
    }
    puVar4 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 4) + (*(ulong *)(param_2 + 10) / 0x49) * 8) +
             (*(ulong *)(param_2 + 10) % 0x49) * 0x38);
    uVar7 = puVar4[1];
    uVar1 = *(undefined4 *)(puVar4 + 2);
    uVar2 = *(undefined4 *)((long)puVar4 + 0x1c);
    *param_1 = *puVar4;
    *(undefined4 *)(param_1 + 2) = uVar1;
    *(undefined4 *)((long)param_1 + 0x14) = uVar2;
    uVar3 = 1;
    param_1[1] = uVar7;
  }
LAB_008ed524:
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}


// ===== 008ed564  FUN_008ed564 =====

void FUN_008ed564(undefined4 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0xc) == 0) {
    return;
  }
  plVar3 = (long *)(*(long *)(*(long *)(param_1 + 4) + (*(ulong *)(param_1 + 10) / 0x49) * 8) +
                   (*(ulong *)(param_1 + 10) % 0x49) * 0x38);
  if ((int)plVar3[3] == 0) {
    plVar3[6] = param_2;
  }
  lVar2 = *plVar3;
  param_3 = *(int *)((long)plVar3 + 0x1c) + param_3;
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  *(int *)((long)plVar3 + 0x1c) = param_3;
  if (lVar2 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/pacing/bitrate_prober.cc",0xcc,
                 "cluster.pace_info.send_bitrate.bps() > 0",&DAT_0021f928,lVar2,0);
  }
  if (0xfffffffffffffffd < plVar3[6] + 0x7fffffffffffffffU) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/pacing/bitrate_prober.cc",0xcd,"cluster.started_at.IsFinite()",
                 &DAT_001f5fa0);
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = ((long)param_3 * 8000000) / lVar2;
  }
  *(long *)(param_1 + 0xe) = lVar1 + plVar3[6];
  if (((int)plVar3[2] <= *(int *)((long)plVar3 + 0x1c)) &&
     (*(int *)((long)plVar3 + 0xc) <= (int)plVar3[3])) {
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                );
    }
    uVar4 = *(ulong *)(param_1 + 10);
    if ((*(undefined8 **)(param_1 + 4))[uVar4 / 0x49] + (uVar4 % 0x49) * 0x38 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    lVar2 = *(long *)(param_1 + 0xc) + -1;
    *(ulong *)(param_1 + 10) = uVar4 + 1;
    *(long *)(param_1 + 0xc) = lVar2;
    if (uVar4 + 1 < 0x92) goto LAB_008ed69c;
    operator_delete((void *)**(undefined8 **)(param_1 + 4));
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 8;
    *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + -0x49;
  }
  lVar2 = *(long *)(param_1 + 0xc);
LAB_008ed69c:
  if (lVar2 == 0) {
    *param_1 = 1;
  }
  return;
}


// ===== 008ed724  FUN_008ed724 =====

void FUN_008ed724(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x49) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0xff8);
      FUN_008edb94(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008ee0b8(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0xff8);
      FUN_008edb94(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff8);
    FUN_008ede1c(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x49;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008ed90c(param_1,&local_50);
  return;
}


// ===== 008ed90c  FUN_008ed90c =====

void FUN_008ed90c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008edb7c;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008edb7c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008edb94  FUN_008edb94 =====

void FUN_008edb94(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008ede04;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008ede04:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ede1c  FUN_008ede1c =====

void FUN_008ede1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008ee0a0;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008ee0a0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ee0b8  FUN_008ee0b8 =====

void FUN_008ee0b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008ee33c;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008ee33c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ee354  FUN_008ee354 =====

void FUN_008ee354(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 **__src;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00665ccc(&local_58,*param_2);
  pppuVar3 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar3 = &local_58;
  }
  thunk_FUN_00547cac(&local_70,pppuVar3,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  uVar5 = local_60;
  puVar4 = local_70;
  __n = uStack_68;
  __src = (undefined8 **)local_70;
  if (-1 < (long)local_60) {
    __n = local_60 >> 0x38;
    __src = &local_70;
  }
  if ((__src == (undefined8 **)0x0) && (__n != 0)) {
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
  if ((long)uVar5 < 0) {
    operator_delete(puVar4);
  }
  return;
}


// ===== 008ee4d4  FUN_008ee4d4 =====

bool FUN_008ee4d4(long param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  if (*(char *)(*param_2 + 0xb9) == '\x01') {
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  }
  if (5 < param_3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x8ee604);
    (*pcVar3)();
  }
  param_1 = param_1 + (ulong)param_3 * 0x30;
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar7 = 0;
  if (lVar6 != lVar4) {
    lVar7 = (lVar6 - lVar4 >> 3) * 0xaa + -1;
  }
  if (lVar7 == *(long *)(param_1 + 0x20) + lVar2) {
    FUN_008f0158(param_1);
    lVar4 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if ((lVar4 != lVar6) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     plVar5 = (long *)(*(long *)(lVar4 + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18),
     plVar5 != (long *)0x0)) {
    lVar7 = *param_2;
    *param_2 = 0;
    *plVar5 = lVar7;
    lVar7 = param_2[1];
    plVar5[2] = param_2[2];
    plVar5[1] = lVar7;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    pvVar8 = (void *)*param_2;
    *param_2 = 0;
    if (pvVar8 != (void *)0x0) {
      FUN_007dc854(pvVar8);
      operator_delete(pvVar8);
    }
    return lVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ee604  FUN_008ee604 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee604(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0xaa) * 8) +
           (*(ulong *)(param_1 + 0x20) % 0xaa) * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    *puVar1 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_007dc854(pvVar2);
      operator_delete(pvVar2);
    }
    uVar3 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar3;
    if (0x153 < uVar3) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008ee6f4  FUN_008ee6f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee6f4(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_3;
  uVar2 = _UNK_001f2c58;
  uVar1 = _DAT_001f2c50;
  uVar3 = param_4[2];
  uVar5 = param_4[1];
  uVar4 = *param_4;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = 0x7fffffffffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  param_1[0x70] = 0;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined1 **)(param_1 + 0x1a0) = param_1 + 0x1a0;
  *(undefined1 **)(param_1 + 0x1a8) = param_1 + 0x1a0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return;
}


// ===== 008ee778  FUN_008ee778 =====

void FUN_008ee778(char *param_1,long param_2,long param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  long local_78;
  long lStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_54;
  char *local_38;
  
  local_54 = *(undefined4 *)(param_3 + 0xc);
  local_38 = param_1 + 0x80;
  local_60 = 0;
  auVar11 = FUN_008f0d88(&local_38,&local_54,&local_54,&local_60);
  lVar6 = auVar11._0_8_;
  if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    if (lVar6 == 0) goto LAB_008eeb4c;
  }
  else {
    pcVar1 = (char *)operator_new(0x100);
    *(long *)(pcVar1 + 0xf0) = param_2;
    pcVar1[0xf8] = '\0';
    pcVar1[0xf9] = '\0';
    pcVar1[0xfa] = '\0';
    pcVar1[0xfb] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[0x18] = '\0';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\0';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    pcVar1[0x28] = '\0';
    pcVar1[0x29] = '\0';
    pcVar1[0x2a] = '\0';
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\0';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = '\0';
    pcVar1[0x20] = '\0';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = '\0';
    pcVar1[0x38] = '\0';
    pcVar1[0x39] = '\0';
    pcVar1[0x3a] = '\0';
    pcVar1[0x3b] = '\0';
    pcVar1[0x3c] = '\0';
    pcVar1[0x3d] = '\0';
    pcVar1[0x3e] = '\0';
    pcVar1[0x3f] = '\0';
    pcVar1[0x30] = '\0';
    pcVar1[0x31] = '\0';
    pcVar1[0x32] = '\0';
    pcVar1[0x33] = '\0';
    pcVar1[0x34] = '\0';
    pcVar1[0x35] = '\0';
    pcVar1[0x36] = '\0';
    pcVar1[0x37] = '\0';
    pcVar1[0x48] = '\0';
    pcVar1[0x49] = '\0';
    pcVar1[0x4a] = '\0';
    pcVar1[0x4b] = '\0';
    pcVar1[0x4c] = '\0';
    pcVar1[0x4d] = '\0';
    pcVar1[0x4e] = '\0';
    pcVar1[0x4f] = '\0';
    pcVar1[0x40] = '\0';
    pcVar1[0x41] = '\0';
    pcVar1[0x42] = '\0';
    pcVar1[0x43] = '\0';
    pcVar1[0x44] = '\0';
    pcVar1[0x45] = '\0';
    pcVar1[0x46] = '\0';
    pcVar1[0x47] = '\0';
    pcVar1[0x58] = '\0';
    pcVar1[0x59] = '\0';
    pcVar1[0x5a] = '\0';
    pcVar1[0x5b] = '\0';
    pcVar1[0x5c] = '\0';
    pcVar1[0x5d] = '\0';
    pcVar1[0x5e] = '\0';
    pcVar1[0x5f] = '\0';
    pcVar1[0x50] = '\0';
    pcVar1[0x51] = '\0';
    pcVar1[0x52] = '\0';
    pcVar1[0x53] = '\0';
    pcVar1[0x54] = '\0';
    pcVar1[0x55] = '\0';
    pcVar1[0x56] = '\0';
    pcVar1[0x57] = '\0';
    pcVar1[0x68] = '\0';
    pcVar1[0x69] = '\0';
    pcVar1[0x6a] = '\0';
    pcVar1[0x6b] = '\0';
    pcVar1[0x6c] = '\0';
    pcVar1[0x6d] = '\0';
    pcVar1[0x6e] = '\0';
    pcVar1[0x6f] = '\0';
    pcVar1[0x60] = '\0';
    pcVar1[0x61] = '\0';
    pcVar1[0x62] = '\0';
    pcVar1[99] = '\0';
    pcVar1[100] = '\0';
    pcVar1[0x65] = '\0';
    pcVar1[0x66] = '\0';
    pcVar1[0x67] = '\0';
    pcVar1[0x78] = '\0';
    pcVar1[0x79] = '\0';
    pcVar1[0x7a] = '\0';
    pcVar1[0x7b] = '\0';
    pcVar1[0x7c] = '\0';
    pcVar1[0x7d] = '\0';
    pcVar1[0x7e] = '\0';
    pcVar1[0x7f] = '\0';
    pcVar1[0x70] = '\0';
    pcVar1[0x71] = '\0';
    pcVar1[0x72] = '\0';
    pcVar1[0x73] = '\0';
    pcVar1[0x74] = '\0';
    pcVar1[0x75] = '\0';
    pcVar1[0x76] = '\0';
    pcVar1[0x77] = '\0';
    pcVar1[0x88] = '\0';
    pcVar1[0x89] = '\0';
    pcVar1[0x8a] = '\0';
    pcVar1[0x8b] = '\0';
    pcVar1[0x8c] = '\0';
    pcVar1[0x8d] = '\0';
    pcVar1[0x8e] = '\0';
    pcVar1[0x8f] = '\0';
    pcVar1[0x80] = '\0';
    pcVar1[0x81] = '\0';
    pcVar1[0x82] = '\0';
    pcVar1[0x83] = '\0';
    pcVar1[0x84] = '\0';
    pcVar1[0x85] = '\0';
    pcVar1[0x86] = '\0';
    pcVar1[0x87] = '\0';
    pcVar1[0x98] = '\0';
    pcVar1[0x99] = '\0';
    pcVar1[0x9a] = '\0';
    pcVar1[0x9b] = '\0';
    pcVar1[0x9c] = '\0';
    pcVar1[0x9d] = '\0';
    pcVar1[0x9e] = '\0';
    pcVar1[0x9f] = '\0';
    pcVar1[0x90] = '\0';
    pcVar1[0x91] = '\0';
    pcVar1[0x92] = '\0';
    pcVar1[0x93] = '\0';
    pcVar1[0x94] = '\0';
    pcVar1[0x95] = '\0';
    pcVar1[0x96] = '\0';
    pcVar1[0x97] = '\0';
    pcVar1[0xa8] = '\0';
    pcVar1[0xa9] = '\0';
    pcVar1[0xaa] = '\0';
    pcVar1[0xab] = '\0';
    pcVar1[0xac] = '\0';
    pcVar1[0xad] = '\0';
    pcVar1[0xae] = '\0';
    pcVar1[0xaf] = '\0';
    pcVar1[0xa0] = '\0';
    pcVar1[0xa1] = '\0';
    pcVar1[0xa2] = '\0';
    pcVar1[0xa3] = '\0';
    pcVar1[0xa4] = '\0';
    pcVar1[0xa5] = '\0';
    pcVar1[0xa6] = '\0';
    pcVar1[0xa7] = '\0';
    pcVar1[0xb8] = '\0';
    pcVar1[0xb9] = '\0';
    pcVar1[0xba] = '\0';
    pcVar1[0xbb] = '\0';
    pcVar1[0xbc] = '\0';
    pcVar1[0xbd] = '\0';
    pcVar1[0xbe] = '\0';
    pcVar1[0xbf] = '\0';
    pcVar1[0xb0] = '\0';
    pcVar1[0xb1] = '\0';
    pcVar1[0xb2] = '\0';
    pcVar1[0xb3] = '\0';
    pcVar1[0xb4] = '\0';
    pcVar1[0xb5] = '\0';
    pcVar1[0xb6] = '\0';
    pcVar1[0xb7] = '\0';
    pcVar1[200] = '\0';
    pcVar1[0xc9] = '\0';
    pcVar1[0xca] = '\0';
    pcVar1[0xcb] = '\0';
    pcVar1[0xcc] = '\0';
    pcVar1[0xcd] = '\0';
    pcVar1[0xce] = '\0';
    pcVar1[0xcf] = '\0';
    pcVar1[0xc0] = '\0';
    pcVar1[0xc1] = '\0';
    pcVar1[0xc2] = '\0';
    pcVar1[0xc3] = '\0';
    pcVar1[0xc4] = '\0';
    pcVar1[0xc5] = '\0';
    pcVar1[0xc6] = '\0';
    pcVar1[199] = '\0';
    pcVar1[0xd8] = '\0';
    pcVar1[0xd9] = '\0';
    pcVar1[0xda] = '\0';
    pcVar1[0xdb] = '\0';
    pcVar1[0xdc] = '\0';
    pcVar1[0xdd] = '\0';
    pcVar1[0xde] = '\0';
    pcVar1[0xdf] = '\0';
    pcVar1[0xd0] = '\0';
    pcVar1[0xd1] = '\0';
    pcVar1[0xd2] = '\0';
    pcVar1[0xd3] = '\0';
    pcVar1[0xd4] = '\0';
    pcVar1[0xd5] = '\0';
    pcVar1[0xd6] = '\0';
    pcVar1[0xd7] = '\0';
    pcVar1[0xe8] = '\0';
    pcVar1[0xe9] = '\0';
    pcVar1[0xea] = '\0';
    pcVar1[0xeb] = '\0';
    pcVar1[0xec] = '\0';
    pcVar1[0xed] = '\0';
    pcVar1[0xee] = '\0';
    pcVar1[0xef] = '\0';
    pcVar1[0xe0] = '\0';
    pcVar1[0xe1] = '\0';
    pcVar1[0xe2] = '\0';
    pcVar1[0xe3] = '\0';
    pcVar1[0xe4] = '\0';
    pcVar1[0xe5] = '\0';
    pcVar1[0xe6] = '\0';
    pcVar1[0xe7] = '\0';
    local_38 = pcVar1;
    if (lVar6 == 0) {
LAB_008eeb4c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__hash_table:242: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
                );
    }
    local_38 = (char *)0x0;
    plVar5 = (long *)(lVar6 + 0x18);
    lVar4 = *plVar5;
    *plVar5 = (long)pcVar1;
    if (lVar4 != 0) {
      FUN_008ec69c(plVar5);
      pcVar1 = local_38;
      local_38 = (char *)0x0;
      if (pcVar1 != (char *)0x0) {
        FUN_008ec69c(&local_38);
      }
    }
  }
  uVar9 = *(undefined8 *)(lVar6 + 0x18);
  puVar2 = (undefined8 *)operator_new(0x18);
  if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xfffffffffffffff0))
  goto LAB_008eeb38;
  lVar6 = *(long *)(param_1 + 0x1a0);
  puVar2[2] = param_2;
  *(undefined8 **)(lVar6 + 8) = puVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x1a0);
  lVar6 = *(long *)(param_1 + 0x1b0);
  *(undefined8 **)(param_1 + 0x1a0) = puVar2;
  *puVar2 = uVar7;
  puVar2[1] = param_1 + 0x1a0;
  *(long *)(param_1 + 0x1b0) = lVar6 + 1;
  if ((*(uint *)(param_3 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  lVar6 = *(long *)(param_3 + 0x78);
  uVar10 = 1;
  if ((*param_1 == '\x01') &&
     (uVar10 = 1, (*(ulong *)(param_3 + 0x88) & 0x1ffffffff) == 0x100000001)) {
    uVar10 = 2;
  }
  if (lVar6 < 2) {
    if (lVar6 == 0) {
      uVar10 = 0;
    }
    else {
      if (lVar6 != 1) {
LAB_008eeb64:
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
LAB_008ee8ec:
      uVar10 = 3;
    }
  }
  else if (lVar6 == 4) {
    uVar10 = 4;
  }
  else {
    if (lVar6 == 3) goto LAB_008ee8ec;
    if (lVar6 != 2) goto LAB_008eeb64;
  }
  FUN_008eeb68(param_1,uVar10,param_2);
  FUN_008eeeb0(param_1,param_2);
  if (param_2 == 0x7fffffffffffffff) {
    lStack_70 = 0x7fffffffffffffff;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    lStack_70 = 0x7fffffffffffffff;
    if (lVar4 != -0x8000000000000000) {
      lStack_70 = -0x8000000000000000;
      if (lVar4 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
        lStack_70 = param_2 - lVar4;
      }
    }
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + lVar6 * 4 + 0x4c) = *(int *)(param_1 + lVar6 * 4 + 0x4c) + 1;
  lVar4 = *(long *)(param_1 + 0x60);
  lVar6 = 0x7fffffffffffffff;
  if ((lVar4 != 0x7fffffffffffffff) &&
     (lVar8 = *(long *)(param_3 + 0x18) + (ulong)*(byte *)(param_3 + 2), lVar8 != 0x7fffffffffffffff
     )) {
    lVar6 = -0x8000000000000000;
    if (lVar8 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
      lVar6 = lVar8 + lVar4;
    }
  }
  *(long *)(param_1 + 0x60) = lVar6;
  local_78 = param_3;
  local_68 = puVar2;
  uVar3 = FUN_008ee4d4(uVar9,&local_78,uVar10);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xb0);
    lVar8 = *(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xb8);
    lVar6 = 0;
    if (lVar8 != lVar4) {
      lVar6 = (lVar8 - lVar4) * 0x40 + -1;
    }
    if (lVar6 == *(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xd0) +
                 *(long *)(param_1 + (ulong)uVar10 * 0x30 + 200)) {
      FUN_008f11a4(param_1 + (ulong)uVar10 * 0x30 + 0xa8);
      lVar4 = *(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xb0);
      lVar8 = *(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xb8);
    }
    if ((lVar4 == lVar8) ||
       (puVar2 = (undefined8 *)
                 (*(long *)(lVar4 + ((ulong)(*(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xd0) +
                                            *(long *)(param_1 + (ulong)uVar10 * 0x30 + 200)) >> 9) *
                                    8) +
                 (*(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xd0) +
                  *(long *)(param_1 + (ulong)uVar10 * 0x30 + 200) & 0x1ffU) * 8),
       puVar2 == (undefined8 *)0x0)) {
LAB_008eeb38:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar2 = uVar9;
    *(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xd0) =
         *(long *)(param_1 + (ulong)uVar10 * 0x30 + 0xd0) + 1;
  }
  if ((*(int *)(param_1 + 0x198) < 0) || ((int)uVar10 < *(int *)(param_1 + 0x198))) {
    *(uint *)(param_1 + 0x198) = uVar10;
  }
  if (((param_2 == 0x7fffffffffffffff) ||
      (lVar6 = *(long *)(param_1 + 0x78), lVar6 == -0x8000000000000000)) ||
     ((param_2 != -0x8000000000000000 &&
      ((lVar6 != 0x7fffffffffffffff && (500000 < param_2 - lVar6)))))) {
    for (plVar5 = *(long **)(param_1 + 0x90); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      while (((((lVar6 = plVar5[3], *(long *)(lVar6 + 0x28) == 0 && (*(long *)(lVar6 + 0x58) == 0))
               && (*(long *)(lVar6 + 0x88) == 0)) &&
              ((*(long *)(lVar6 + 0xb8) == 0 && (*(long *)(lVar6 + 0xe8) == 0)))) &&
             (lVar6 = *(long *)(lVar6 + 0xf0), lVar6 != 0x7fffffffffffffff))) {
        if (lVar6 != -0x8000000000000000) {
          lVar6 = lVar6 + 500000;
        }
        if (param_2 <= lVar6) break;
        plVar5 = (long *)*plVar5;
        FUN_008f1dd4(param_1 + 0x80);
        if (plVar5 == (long *)0x0) goto LAB_008eeb14;
      }
    }
LAB_008eeb14:
    *(long *)(param_1 + 0x78) = param_2;
  }
  return;
}


// ===== 008eeb68  FUN_008eeb68 =====

void FUN_008eeb68(long param_1,uint param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  void *local_78;
  long local_70;
  undefined8 uStack_68;
  
  if (*(ulong *)(param_1 + 8) >> 1 <= (ulong)(long)(int)param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x8eeeac);
    (*pcVar2)();
  }
  puVar4 = (undefined8 *)(param_1 + 0x10);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar4 = (undefined8 *)*puVar4;
  }
  lVar14 = puVar4[(int)param_2];
  if (lVar14 + 0x8000000000000001U < 2) {
    return;
  }
  if (5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8eeeb0);
    (*pcVar2)();
  }
  lVar11 = param_1 + (long)(int)param_2 * 0x30;
  lVar12 = *(long *)(lVar11 + 0xb0);
  lVar15 = *(long *)(lVar11 + 0xb8);
  plVar9 = (long *)(lVar12 + (*(ulong *)(lVar11 + 200) >> 9) * 8);
  if (lVar12 == lVar15) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar9 + (*(ulong *)(lVar11 + 200) & 0x1ff) * 8;
  }
  auVar16._8_8_ = lVar8;
  auVar16._0_8_ = plVar9;
  do {
    plVar9 = auVar16._8_8_;
    plVar10 = auVar16._0_8_;
    if (lVar12 == lVar15) {
      if (plVar9 == (long *)0x0) {
        return;
      }
    }
    else {
      uVar3 = *(long *)(lVar11 + 0xd0) + *(long *)(lVar11 + 200);
      if (plVar9 == (long *)(*(long *)(lVar12 + (uVar3 >> 9) * 8) + (uVar3 & 0x1ff) * 8)) {
        return;
      }
    }
    lVar12 = *plVar9;
    lVar15 = lVar12 + (ulong)param_2 * 0x30;
    while (*(long *)(lVar15 + 0x28) != 0) {
      lVar8 = *(long *)(lVar15 + 8);
      if (lVar8 == *(long *)(lVar15 + 0x10)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(lVar8 + (*(ulong *)(lVar15 + 0x20) / 0xaa) * 8) +
                (*(ulong *)(lVar15 + 0x20) % 0xaa) * 0x18;
      }
      lVar6 = *(long *)(lVar5 + 8);
      lVar5 = -0x8000000000000000;
      if (lVar6 != 0x7fffffffffffffff && param_3 != -0x8000000000000000) {
        lVar5 = param_3 - lVar6;
      }
      lVar1 = 0x7fffffffffffffff;
      if (lVar6 != -0x8000000000000000 && param_3 != 0x7fffffffffffffff) {
        lVar1 = lVar5;
      }
      if (lVar1 <= lVar14) {
        auVar16._8_8_ = plVar9 + 1;
        auVar16._0_8_ = plVar10;
        if ((long)(plVar9 + 1) - *plVar10 == 0x1000) {
          auVar16._8_8_ = plVar10[1];
          auVar16._0_8_ = plVar10 + 1;
        }
        goto LAB_008eec58;
      }
      puVar4 = (undefined8 *)
               (*(long *)(lVar8 + (*(ulong *)(lVar15 + 0x20) / 0xaa) * 8) +
               (*(ulong *)(lVar15 + 0x20) % 0xaa) * 0x18);
      pvVar13 = (void *)*puVar4;
      uStack_68 = puVar4[2];
      local_70 = puVar4[1];
      *puVar4 = 0;
      local_78 = pvVar13;
      FUN_008ee604(lVar15);
      if (*(char *)((long)pvVar13 + 0xb9) == '\x01') {
        *(int *)(lVar12 + 0xf8) = *(int *)(lVar12 + 0xf8) + -1;
      }
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        uVar3 = 0x7fffffffffffffff;
        if (((param_3 == 0x7fffffffffffffff) || (local_70 == -0x8000000000000000)) ||
           ((uVar3 = 0x8000000000000000, param_3 != -0x8000000000000000 &&
            ((local_70 != 0x7fffffffffffffff && (uVar3 = param_3 - local_70, -1 < (long)uVar3))))))
        {
          uVar7 = uVar3 / 1000;
          if (499 < uVar3 % 1000) {
            uVar7 = uVar7 + 1;
          }
        }
        else {
          uVar7 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
        }
        FUN_00623bb0(&DAT_00225710,"../../modules/pacing/prioritized_packet_queue.cc",0xe31,
                     "Dropping old packet on SSRC: ",*(undefined4 *)((long)pvVar13 + 0xc)," seq:",
                     *(undefined2 *)((long)pvVar13 + 4)," time in queue:",uVar7,&DAT_001e4c4d);
      }
      FUN_008ef26c(param_1,&local_78);
      if (pvVar13 != (void *)0x0) {
        FUN_007dc854(pvVar13);
        operator_delete(pvVar13);
      }
    }
    auVar16 = FUN_008efdec(lVar11 + 0xa8,plVar10,plVar9);
LAB_008eec58:
    lVar12 = *(long *)(lVar11 + 0xb0);
    lVar15 = *(long *)(lVar11 + 0xb8);
  } while( true );
}


// ===== 008eeeb0  FUN_008eeeb0 =====

void FUN_008eeeb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 uStack_81;
  undefined1 auStack_80 [24];
  undefined1 *local_68;
  undefined1 auStack_60 [24];
  undefined1 *local_48;
  long local_40;
  undefined1 auStack_38 [24];
  
  plVar4 = (long *)(param_1 + 0x68);
  lVar2 = *plVar4;
  if (lVar2 <= param_2) {
    if (param_2 - lVar2 != 0) {
      lVar1 = 0x7fffffffffffffff;
      if (((param_2 != 0x7fffffffffffffff) && (lVar2 != -0x8000000000000000)) &&
         (lVar1 = -0x8000000000000000, lVar2 != 0x7fffffffffffffff && param_2 != -0x8000000000000000
         )) {
        lVar1 = param_2 - lVar2;
      }
      if (*(char *)(param_1 + 0x70) == '\x01') {
        lVar2 = 0x7fffffffffffffff;
        if ((lVar1 != 0x7fffffffffffffff) &&
           (lVar3 = *(long *)(param_1 + 0x40), lVar3 != 0x7fffffffffffffff)) {
          lVar2 = -0x8000000000000000;
          if (lVar3 != -0x8000000000000000 && lVar1 != -0x8000000000000000) {
            lVar2 = lVar3 + lVar1;
          }
        }
        *(long *)(param_1 + 0x40) = lVar2;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x38);
        lVar2 = 0x7fffffffffffffff;
        if ((lVar3 != 0x7fffffffffffffff) &&
           (lVar1 = lVar1 * *(int *)(param_1 + 0x48), lVar1 != 0x7fffffffffffffff)) {
          lVar2 = -0x8000000000000000;
          if (lVar1 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
            lVar2 = lVar1 + lVar3;
          }
        }
        *(long *)(param_1 + 0x38) = lVar2;
      }
      *plVar4 = param_2;
    }
    return;
  }
  local_40 = param_2;
  FUN_008f1fac(auStack_60,&local_40);
  FUN_008577dc(auStack_80,auStack_60);
  local_68 = &uStack_81;
  FUN_00857104(auStack_60);
  FUN_008f1fac(auStack_38,plVar4);
  FUN_008577dc(auStack_60,auStack_38);
  local_48 = auStack_80;
  FUN_00857104(auStack_38);
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/pacing/prioritized_packet_queue.cc",0x13b,"now >= last_update_time_",
               &DAT_0021f924,local_48,auStack_60);
}


// ===== 008ef008  FUN_008ef008 =====

long FUN_008ef008(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_58;
  long local_50;
  long lStack_48;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x198);
  if (5 < uVar1) {
LAB_008ef254:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8ef258);
    (*pcVar2)();
  }
  lVar8 = param_1 + 0xa8;
  lVar5 = lVar8 + (ulong)uVar1 * 0x30;
  if (*(long *)(lVar5 + 0x28) != 0) {
    lVar9 = *(long *)(*(long *)(*(long *)(lVar5 + 8) + (*(ulong *)(lVar5 + 0x20) >> 9) * 8) +
                     (*(ulong *)(lVar5 + 0x20) & 0x1ff) * 8);
    lVar5 = lVar9 + (ulong)uVar1 * 0x30;
    if (*(long *)(lVar5 + 0x28) != 0) {
      plVar3 = (long *)(*(long *)(*(long *)(lVar5 + 8) + (*(ulong *)(lVar5 + 0x20) / 0xaa) * 8) +
                       (*(ulong *)(lVar5 + 0x20) % 0xaa) * 0x18);
      lVar5 = *plVar3;
      lStack_48 = plVar3[2];
      local_50 = plVar3[1];
      *plVar3 = 0;
      local_58 = lVar5;
      FUN_008ee604();
      if (*(char *)(lVar5 + 0xb9) == '\x01') {
        *(int *)(lVar9 + 0xf8) = *(int *)(lVar9 + 0xf8) + -1;
      }
      FUN_008ef26c(param_1,&local_58);
      if (*(uint *)(param_1 + 0x198) < 6) {
        lVar10 = lVar8 + (ulong)*(uint *)(param_1 + 0x198) * 0x30;
        if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                    );
        }
        uVar7 = *(ulong *)(lVar10 + 0x20);
        if ((*(undefined8 **)(lVar10 + 8))[uVar7 >> 9] + (uVar7 & 0x1ff) * 8 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        *(ulong *)(lVar10 + 0x20) = uVar7 + 1;
        *(long *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + -1;
        if (0x3ff < uVar7 + 1) {
          operator_delete((void *)**(undefined8 **)(lVar10 + 8));
          *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 8;
          *(long *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) + -0x200;
        }
        uVar1 = *(uint *)(param_1 + 0x198);
        if (uVar1 < 6) {
          if (*(long *)(lVar9 + (ulong)uVar1 * 0x30 + 0x28) == 0) {
            FUN_008ef450(param_1);
            return lVar5;
          }
          lVar8 = lVar8 + (ulong)uVar1 * 0x30;
          lVar4 = *(long *)(lVar8 + 8);
          lVar6 = *(long *)(lVar8 + 0x10);
          lVar10 = 0;
          if (lVar6 != lVar4) {
            lVar10 = (lVar6 - lVar4) * 0x40 + -1;
          }
          if (lVar10 == *(long *)(lVar8 + 0x28) + *(long *)(lVar8 + 0x20)) {
            FUN_008f11a4(lVar8);
            lVar4 = *(long *)(lVar8 + 8);
            lVar6 = *(long *)(lVar8 + 0x10);
          }
          if ((lVar4 != lVar6) &&
             (uVar7 = *(long *)(lVar8 + 0x28) + *(long *)(lVar8 + 0x20),
             plVar3 = (long *)(*(long *)(lVar4 + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8),
             plVar3 != (long *)0x0)) {
            *plVar3 = lVar9;
            *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + 1;
            return lVar5;
          }
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
      }
      goto LAB_008ef254;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
            );
}


// ===== 008ef26c  FUN_008ef26c =====

void FUN_008ef26c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  if ((*(uint *)(*param_2 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  uVar3 = *(ulong *)(*param_2 + 0x78);
  if (4 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
              );
  }
  lVar4 = param_1 + uVar3 * 4;
  *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + -1;
  lVar4 = 0x7fffffffffffffff;
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 == 0x7fffffffffffffff) {
    lVar7 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = *(long *)(*param_2 + 0x18) + (ulong)*(byte *)(*param_2 + 2);
    lVar7 = 0x7fffffffffffffff;
    if (lVar1 != -0x8000000000000000) {
      lVar7 = -0x8000000000000000;
      if (lVar1 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
        lVar7 = lVar6 - lVar1;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x60) = lVar7;
  if ((lVar6 != 0x7fffffffffffffff) && (lVar7 = param_2[1], lVar7 != -0x8000000000000000)) {
    lVar1 = -0x8000000000000000;
    if (lVar7 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
      lVar1 = lVar6 - lVar7;
    }
    if ((lVar1 != 0x7fffffffffffffff) &&
       (lVar6 = *(long *)(param_1 + 0x40), lVar6 != -0x8000000000000000)) {
      lVar4 = -0x8000000000000000;
      if (lVar6 != 0x7fffffffffffffff && lVar1 != -0x8000000000000000) {
        lVar4 = lVar1 - lVar6;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x38);
  lVar6 = 0x7fffffffffffffff;
  if ((lVar7 != 0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) {
    lVar6 = -0x8000000000000000;
    if (lVar4 != 0x7fffffffffffffff && lVar7 != -0x8000000000000000) {
      lVar6 = lVar7 - lVar4;
    }
  }
  *(long *)(param_1 + 0x38) = lVar6;
  lVar6 = *param_2;
  if (*(char *)(lVar6 + 200) == '\x01') {
    *(long *)(lVar6 + 0xc0) = lVar4;
  }
  else {
    if ((long *)(lVar6 + 0xc0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(long *)(lVar6 + 0xc0) = lVar4;
    *(undefined1 *)(lVar6 + 200) = 1;
  }
  plVar5 = (long *)param_2[2];
  if (plVar5 != (long *)(param_1 + 0x1a0)) {
    plVar2 = (long *)plVar5[1];
    *(long **)(*plVar5 + 8) = plVar2;
    *plVar2 = *plVar5;
    *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + -1;
    if ((plVar5 != (long *)0xfffffffffffffff0) && (plVar5 != (long *)0x0)) {
      operator_delete(plVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/pacing/prioritized_packet_queue.cc",0x19d,
               "packet.enqueue_time_iterator != enqueue_times_.end()",&DAT_001f5fa0);
}


// ===== 008ef450  FUN_008ef450 =====

void FUN_008ef450(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x198);
  if (uVar1 != 0xffffffff) {
    if (5 < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8ef53c);
      (*pcVar2)();
    }
    if (*(long *)(param_1 + (ulong)uVar1 * 0x30 + 0xd0) != 0) {
      return;
    }
  }
  FUN_008eeb68(param_1,0,*(undefined8 *)(param_1 + 0x68));
  uVar3 = 0;
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar3 = 1;
    FUN_008eeb68(param_1,1,*(undefined8 *)(param_1 + 0x68));
    if (*(long *)(param_1 + 0x100) == 0) {
      uVar3 = 2;
      FUN_008eeb68(param_1,2,*(undefined8 *)(param_1 + 0x68));
      if (*(long *)(param_1 + 0x130) == 0) {
        uVar3 = 3;
        FUN_008eeb68(param_1,3,*(undefined8 *)(param_1 + 0x68));
        if (*(long *)(param_1 + 0x160) == 0) {
          uVar3 = 4;
          FUN_008eeb68(param_1,4,*(undefined8 *)(param_1 + 0x68));
          if (*(long *)(param_1 + 400) == 0) goto LAB_008ef518;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x198) = uVar3;
LAB_008ef518:
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  }
  return;
}


// ===== 008ef53c  FUN_008ef53c =====

undefined4 FUN_008ef53c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ===== 008ef548  FUN_008ef548 =====

undefined8 FUN_008ef548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


// ===== 008ef554  FUN_008ef554 =====

bool FUN_008ef554(long param_1)

{
  return *(int *)(param_1 + 0x48) == 0;
}


// ===== 008ef568  FUN_008ef568 =====

undefined8 FUN_008ef568(long param_1,ulong param_2)

{
  long lVar1;
  
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061ff28();
  }
  param_1 = param_1 + *(long *)(&DAT_00225720 + param_2 * 8) * 0x30;
  if (*(long *)(param_1 + 0xd0) != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0xb0) + (*(ulong *)(param_1 + 200) >> 9) * 8) +
                     (*(ulong *)(param_1 + 200) & 0x1ff) * 8) +
            *(long *)(&DAT_00225720 + param_2 * 8) * 0x30;
    if (*(long *)(lVar1 + 8) != *(long *)(lVar1 + 0x10)) {
      return *(undefined8 *)
              (*(long *)(*(long *)(lVar1 + 8) + (*(ulong *)(lVar1 + 0x20) / 0xaa) * 8) +
               (*(ulong *)(lVar1 + 0x20) % 0xaa) * 0x18 + 8);
    }
    return uRam0000000000000008;
  }
  return 0x8000000000000000;
}


// ===== 008ef61c  FUN_008ef61c =====

long FUN_008ef61c(byte *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*param_1 & 1) == 0) {
    if (*(long *)(param_1 + 0x100) == 0) {
      return 0x7fffffffffffffff;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0xe0) + (*(ulong *)(param_1 + 0xf8) >> 9) * 8) +
                     (*(ulong *)(param_1 + 0xf8) & 0x1ff) * 8);
    if (*(long *)(lVar2 + 0x38) == *(long *)(lVar2 + 0x40)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + (*(ulong *)(lVar2 + 0x50) / 0xaa) * 8) +
              (*(ulong *)(lVar2 + 0x50) % 0xaa) * 0x18;
    }
    return *(long *)(lVar2 + 8);
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    lVar2 = 0x7fffffffffffffff;
    lVar3 = *(long *)(param_1 + 0x130);
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0xe0) + (*(ulong *)(param_1 + 0xf8) >> 9) * 8) +
                     (*(ulong *)(param_1 + 0xf8) & 0x1ff) * 8);
    if (*(long *)(lVar2 + 0x38) == *(long *)(lVar2 + 0x40)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + (*(ulong *)(lVar2 + 0x50) / 0xaa) * 8) +
              (*(ulong *)(lVar2 + 0x50) % 0xaa) * 0x18;
    }
    lVar2 = *(long *)(lVar2 + 8);
    lVar3 = *(long *)(param_1 + 0x130);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x110) + (*(ulong *)(param_1 + 0x128) >> 9) * 8)
                     + (*(ulong *)(param_1 + 0x128) & 0x1ff) * 8);
    if (*(long *)(lVar3 + 0x68) == *(long *)(lVar3 + 0x70)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar3 + 0x68) + (*(ulong *)(lVar3 + 0x80) / 0xaa) * 8) +
              (*(ulong *)(lVar3 + 0x80) % 0xaa) * 0x18;
    }
    lVar1 = *(long *)(lVar3 + 8);
    if (lVar2 <= *(long *)(lVar3 + 8)) {
      lVar1 = lVar2;
    }
    return lVar1;
  }
  return lVar2;
}


// ===== 008ef780  FUN_008ef780 =====

undefined8 FUN_008ef780(long param_1)

{
  if (*(long *)(param_1 + 0x1b0) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x10);
  }
  return 0x8000000000000000;
}


// ===== 008ef7a0  FUN_008ef7a0 =====

long FUN_008ef7a0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    lVar2 = 0;
    if ((long)iVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x38) / (long)iVar1;
    }
    return lVar2;
  }
  return 0;
}


// ===== 008ef7c0  FUN_008ef7c0 =====

void FUN_008ef7c0(long param_1,undefined1 param_2,undefined8 param_3)

{
  FUN_008eeeb0(param_1,param_3);
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return;
}


// ===== 008ef7f4  FUN_008ef7f4 =====

void FUN_008ef7f4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *pvVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar24;
  undefined1 auVar23 [16];
  void *local_190;
  long lStack_188;
  long lStack_180;
  undefined8 local_178;
  ulong local_170;
  long local_168;
  ulong local_160 [4];
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong auStack_70 [2];
  
  uVar5 = *(ulong *)(param_1 + 0x88);
  if ((uVar5 != 0) && (*(long *)(param_1 + 0x98) != 0)) {
    uVar9 = uVar5 - 1;
    uVar11 = (ulong)param_2;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar9) == 0) {
      uVar12 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar12 = uVar11;
      if (uVar5 <= uVar11) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = param_2 / uVar4;
        }
        uVar12 = (ulong)(param_2 - uVar2 * uVar4);
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x80) + uVar12 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_008ef868;
          uVar14 = plVar13[1];
          if (uVar14 == uVar11) break;
          if ((uVar5 & uVar9) == 0) {
            uVar14 = uVar14 & uVar9;
          }
          else if (uVar5 <= uVar14) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar14 / uVar5;
            }
            uVar14 = uVar14 - uVar3 * uVar5;
          }
          if (uVar14 != uVar12) goto LAB_008ef868;
        }
      } while (*(uint *)(plVar13 + 2) != param_2);
      puVar6 = (ulong *)plVar13[3];
      lVar17 = 0;
      local_160[0] = *puVar6;
      local_160[1] = puVar6[1];
      puVar6[1] = 0;
      *puVar6 = 0;
      local_160[3] = puVar6[3];
      local_160[2] = puVar6[2];
      puVar6[3] = 0;
      puVar6[2] = 0;
      uStack_138 = puVar6[5];
      local_140 = puVar6[4];
      puVar6[5] = 0;
      puVar6[4] = 0;
      uStack_128 = puVar6[7];
      local_130 = puVar6[6];
      puVar6[7] = 0;
      puVar6[6] = 0;
      uStack_118 = puVar6[9];
      local_120 = puVar6[8];
      puVar6[9] = 0;
      puVar6[8] = 0;
      uStack_108 = puVar6[0xb];
      local_110 = puVar6[10];
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      uStack_f8 = puVar6[0xd];
      local_100 = puVar6[0xc];
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      uStack_e8 = puVar6[0xf];
      local_f0 = puVar6[0xe];
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      uStack_d8 = puVar6[0x11];
      local_e0 = puVar6[0x10];
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      uStack_c8 = puVar6[0x13];
      local_d0 = puVar6[0x12];
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      uStack_b8 = puVar6[0x15];
      local_c0 = puVar6[0x14];
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      uStack_a8 = puVar6[0x17];
      local_b0 = puVar6[0x16];
      puVar6[0x17] = 0;
      puVar6[0x16] = 0;
      uStack_98 = puVar6[0x19];
      local_a0 = puVar6[0x18];
      puVar6[0x19] = 0;
      puVar6[0x18] = 0;
      uStack_88 = puVar6[0x1b];
      local_90 = puVar6[0x1a];
      puVar6[0x1b] = 0;
      puVar6[0x1a] = 0;
      uStack_78 = puVar6[0x1d];
      local_80 = puVar6[0x1c];
      puVar6[0x1d] = 0;
      puVar6[0x1c] = 0;
      *(undefined4 *)(puVar6 + 0x1f) = 0;
      do {
        if (local_160[lVar17 * 6 + 5] != 0) {
          do {
            puVar7 = (undefined8 *)
                     (*(long *)(local_160[lVar17 * 6 + 1] + (local_160[lVar17 * 6 + 4] / 0xaa) * 8)
                     + (local_160[lVar17 * 6 + 4] % 0xaa) * 0x18);
            pvVar16 = (void *)*puVar7;
            *puVar7 = 0;
            lStack_180 = puVar7[2];
            lStack_188 = puVar7[1];
            local_190 = pvVar16;
            FUN_008ee604(local_160 + lVar17 * 6);
            FUN_008ef26c(param_1,&local_190);
            if (pvVar16 != (void *)0x0) {
              FUN_007dc854(pvVar16);
              operator_delete(pvVar16);
            }
          } while (local_160[lVar17 * 6 + 5] != 0);
          puVar7 = (undefined8 *)(param_1 + 0xa8 + lVar17 * 0x30);
          lVar10 = puVar7[5];
          if (lVar10 == 1) {
            uVar5 = puVar7[4];
            if (((undefined8 *)puVar7[1])[uVar5 >> 9] + (uVar5 & 0x1ff) * 8 == 0) {
LAB_008efd0c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            puVar7[4] = uVar5 + 1;
            puVar7[5] = 0;
            if (0x3ff < uVar5 + 1) {
              operator_delete(*(void **)puVar7[1]);
              puVar7[1] = puVar7[1] + 8;
              puVar7[4] = puVar7[4] + -0x200;
            }
          }
          else {
            uVar22 = puVar7[2];
            lVar21 = *(long *)*(undefined1 (*) [16])(puVar7 + 1);
            uVar5 = puVar7[4];
            auVar23._8_8_ = uVar22;
            auVar23._0_8_ = uVar22;
            local_178 = 0;
            lStack_180 = 0;
            local_168 = 0;
            local_170 = 0;
            auVar23 = NEON_cmeq(*(undefined1 (*) [16])(puVar7 + 1),auVar23,8);
            lStack_188 = 0;
            local_190 = (void *)0x0;
            pvVar16 = (void *)0x0;
            lVar24 = 0;
            if ((auVar23 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              plVar13 = (long *)(lVar21 + (uVar5 >> 9) * 8);
              puVar19 = (undefined8 *)(*plVar13 + (uVar5 & 0x1ff) * 8);
              puVar20 = (undefined8 *)
                        (*(long *)(lVar21 + (uVar5 + lVar10 >> 9) * 8) +
                        (uVar5 + lVar10 & 0x1ff) * 8);
              if (puVar19 == puVar20) {
                lVar8 = 0;
                lStack_180 = 0;
                local_178 = 0;
                local_170 = 0;
              }
              else {
                lVar8 = 0;
                do {
                  puVar18 = (ulong *)*puVar19;
                  if (puVar18 != puVar6) {
                    lVar10 = 0;
                    if (lStack_180 != lStack_188) {
                      lVar10 = (lStack_180 - lStack_188) * 0x40 + -1;
                    }
                    if (lVar10 == lVar8 + local_170) {
                      FUN_008f11a4(&local_190);
                    }
                    if ((lStack_188 == lStack_180) ||
                       (puVar1 = (undefined8 *)
                                 (*(long *)(lStack_188 + (local_168 + local_170 >> 9) * 8) +
                                 (local_168 + local_170 & 0x1ff) * 8), puVar1 == (undefined8 *)0x0))
                    {
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                                );
                    }
                    *puVar1 = puVar18;
                    lVar8 = local_168 + 1;
                    local_168 = lVar8;
                  }
                  puVar19 = puVar19 + 1;
                  if ((long)puVar19 - *plVar13 == 0x1000) {
                    plVar13 = plVar13 + 1;
                    puVar19 = (undefined8 *)*plVar13;
                  }
                } while (puVar19 != puVar20);
                uVar22 = puVar7[2];
                lVar21 = puVar7[1];
                uVar5 = puVar7[4];
                lVar10 = puVar7[5];
                pvVar16 = local_190;
                lVar24 = lStack_188;
              }
            }
            else {
              lVar8 = 0;
              lStack_180 = 0;
              local_178 = 0;
              local_170 = 0;
            }
            local_190 = (void *)*puVar7;
            uVar15 = puVar7[3];
            puVar7[1] = lVar24;
            *puVar7 = pvVar16;
            puVar7[3] = local_178;
            puVar7[2] = lStack_180;
            puVar7[4] = local_170;
            puVar7[5] = lVar8;
            lStack_188 = lVar21;
            lStack_180 = uVar22;
            local_178 = uVar15;
            local_170 = uVar5;
            local_168 = lVar10;
            FUN_008ec4e4(&local_190);
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 5);
      puVar6 = auStack_70;
      do {
        puVar18 = puVar6 + -6;
        FUN_008ec7c4(puVar6 + -6);
        puVar7 = (undefined8 *)puVar6[-5];
        puVar19 = (undefined8 *)puVar6[-4];
        if (puVar7 != puVar19) {
          do {
            puVar20 = puVar7 + 1;
            operator_delete((void *)*puVar7);
            puVar7 = puVar20;
          } while (puVar20 != puVar19);
          puVar7 = (undefined8 *)puVar6[-5];
          puVar19 = (undefined8 *)puVar6[-4];
        }
        uVar9 = (ulong)((long)puVar19 + (-8 - ((long)puVar19 << 0x3d))) >> 3;
        uVar5 = (ulong)(((long)puVar7 - (long)puVar19 << 0x3d) - ((long)puVar7 - (long)puVar19)) >>
                3;
        if (uVar9 <= uVar5) {
          uVar5 = uVar9;
        }
        if ((1 < uVar5) && ((((int)puVar7 - (int)puVar19 | -(int)puVar19) & 7U) == 0)) {
          uVar5 = uVar5 & 0x1ffffffffffffffe;
          puVar19 = puVar19 + -uVar5;
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (puVar19 != puVar7) {
          puVar19 = puVar19 + -1;
          if (puVar19 == (undefined8 *)0x0) goto LAB_008efd0c;
        }
        puVar6[-4] = (ulong)puVar19;
        if ((void *)puVar6[-6] != (void *)0x0) {
          operator_delete((void *)puVar6[-6]);
        }
        puVar6 = puVar18;
      } while (puVar18 != local_160);
    }
  }
LAB_008ef868:
  FUN_008ef450(param_1);
  return;
}


// ===== 008efd34  FUN_008efd34 =====

bool FUN_008efd34(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x88);
  if ((uVar4 != 0) && (*(long *)(param_1 + 0x98) != 0)) {
    uVar5 = uVar4 - 1;
    uVar6 = (ulong)param_2;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar5) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_2);
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_2 / uVar3;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x80) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return false;
          }
          uVar9 = plVar8[1];
          if (uVar9 != uVar6) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            return 0 < *(int *)(plVar8[3] + 0xf8);
          }
        }
        if ((uVar4 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar4 <= uVar9) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar2 * uVar4;
        }
      } while (uVar9 == uVar7);
    }
  }
  return false;
}


// ===== 008efdec  FUN_008efdec =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efdec(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *local_40;
  long local_38;
  
  uVar9 = *(ulong *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 8);
  uVar13 = uVar9 + *(long *)(param_1 + 0x28);
  plVar1 = (long *)(lVar7 + (uVar13 >> 9) * 8);
  if (lVar7 == *(long *)(param_1 + 0x10)) {
    if (param_3 == 0) goto LAB_008f0144;
    lVar12 = 0;
    plVar5 = (long *)(lVar7 + (uVar9 >> 9) * 8);
    lVar8 = lVar12;
    if (param_3 != 0) goto LAB_008efe58;
LAB_008efeac:
    lVar10 = *plVar5;
    plVar6 = plVar5;
    lVar8 = lVar12;
  }
  else {
    if (param_3 == *plVar1 + (uVar13 & 0x1ff) * 8) {
LAB_008f0144:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:2327: libc++ Hardening assertion __f != end() failed: deque::erase(iterator) called with a non-dereferenceable iterator\n"
                );
    }
    plVar5 = (long *)(lVar7 + (uVar9 >> 9) * 8);
    lVar12 = *plVar5 + (uVar9 & 0x1ff) * 8;
    lVar8 = lVar12;
    if (param_3 == lVar12) goto LAB_008efeac;
LAB_008efe58:
    lVar10 = *plVar5;
    uVar2 = (param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar5) * 0x40;
    uVar9 = lVar8 - lVar10 >> 3;
    lVar12 = lVar8;
    plVar6 = plVar5;
    if (uVar2 != uVar9) {
      if ((long)uVar2 < 1) {
        uVar4 = 0x1ff - uVar2;
        uVar3 = 0x3fe - uVar2;
        if (-1 < (long)uVar4) {
          uVar3 = uVar4;
        }
        uVar11 = uVar4 & 0x1ff;
        if ((long)uVar4 < 1) {
          uVar11 = -(-uVar4 & 0x1ff);
        }
        lVar12 = ((long)uVar3 >> 9) * -8;
        uVar11 = 0x1ff - uVar11;
      }
      else {
        uVar11 = uVar2 & 0x1ff;
        lVar12 = (uVar2 >> 9) * 8;
      }
      plVar6 = (long *)((long)plVar5 + lVar12);
      lVar10 = *plVar6;
      lVar12 = lVar10 + uVar11 * 8;
      if (*(long *)(param_1 + 0x28) - 1U >> 1 < uVar2 - uVar9) {
        lVar8 = lVar12 - lVar10 >> 3;
        if (lVar8 < 0) {
          uVar9 = (ulong)~(uint)(0x1feU - lVar8);
          lVar8 = (0x1feU - lVar8 >> 9) * -8;
        }
        else {
          uVar9 = lVar8 + 1;
          lVar8 = (uVar9 >> 9) * 8;
        }
        if (lVar7 == *(long *)(param_1 + 0x10)) {
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar1 + (uVar13 & 0x1ff) * 8;
        }
        local_40 = plVar6;
        local_38 = lVar12;
        FUN_008f2404((long *)((long)plVar6 + lVar8),
                     *(long *)((long)plVar6 + lVar8) + (uVar9 & 0x1ff) * 8,plVar1,lVar7,&local_40);
        if (local_38 != 0) {
          lVar12 = *(long *)(param_1 + 0x10);
          lVar8 = *(long *)(param_1 + 0x28);
          lVar7 = 0;
          if (lVar12 != *(long *)(param_1 + 8)) {
            lVar7 = (lVar12 - *(long *)(param_1 + 8)) * 0x40 + -1;
          }
          *(long *)(param_1 + 0x28) = lVar8 + -1;
          if ((lVar7 - (lVar8 + *(long *)(param_1 + 0x20))) + 1U < 0x400) {
            return;
          }
          operator_delete(*(void **)(lVar12 + -8));
          lVar7 = *(long *)(param_1 + 0x10) + -8;
          if (lVar7 != 0) {
            *(long *)(param_1 + 0x10) = lVar7;
            return;
          }
        }
        goto LAB_008f0130;
      }
    }
  }
  lVar7 = lVar12 - lVar10 >> 3;
  if (lVar7 < 0) {
    uVar13 = (ulong)~(uint)(0x1feU - lVar7);
    lVar7 = (0x1feU - lVar7 >> 9) * -8;
  }
  else {
    uVar13 = lVar7 + 1;
    lVar7 = (uVar13 >> 9) * 8;
  }
  local_40 = (long *)((long)plVar6 + lVar7);
  local_38 = *local_40 + (uVar13 & 0x1ff) * 8;
  FUN_008f212c(plVar5,lVar8,plVar6,lVar12,&local_40);
  if (lVar8 != 0) {
    uVar13 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar13;
    if (0x3ff < uVar13) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
LAB_008f0130:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008f0158  FUN_008f0158 =====

void FUN_008f0158(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0xaa) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0xff0);
      FUN_008f05c8(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008f0aec(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0xff0);
      FUN_008f05c8(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_008f0850(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008f0340(param_1,&local_50);
  return;
}


// ===== 008f0340  FUN_008f0340 =====

void FUN_008f0340(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008f05b0;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008f05b0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f05c8  FUN_008f05c8 =====

void FUN_008f05c8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008f0838;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008f0838:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f0850  FUN_008f0850 =====

void FUN_008f0850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008f0ad4;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008f0ad4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f0aec  FUN_008f0aec =====

void FUN_008f0aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008f0d70;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008f0d70:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f0d88  FUN_008f0d88 =====

undefined1  [16] FUN_008f0d88(undefined8 *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auVar17 [16];
  
  plVar11 = (long *)*param_1;
  uVar1 = *param_2;
  puVar15 = (undefined1 *)(ulong)uVar1;
  puVar14 = (undefined1 *)plVar11[1];
  if (puVar14 == (undefined1 *)0x0) {
    puVar16 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar5 = puVar14 + -1;
    uVar13 = (uint)puVar14;
    if (((ulong)puVar14 & (ulong)puVar5) == 0) {
      puVar16 = (undefined1 *)(ulong)(uVar13 - 1 & uVar1);
    }
    else {
      puVar16 = puVar15;
      if (puVar14 <= puVar15) {
        uVar3 = 0;
        if (uVar13 != 0) {
          uVar3 = uVar1 / uVar13;
        }
        puVar16 = (undefined1 *)(ulong)(uVar1 - uVar3 * uVar13);
      }
    }
    puVar7 = *(undefined8 **)(*plVar11 + (long)puVar16 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        puVar9 = (undefined1 *)plVar12[1];
        if (puVar9 == puVar15) {
          if (*(uint *)(plVar12 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_008f1020;
          }
        }
        else {
          if (((ulong)puVar14 & (ulong)puVar5) == 0) {
            puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar5);
          }
          else if (puVar14 <= puVar9) {
            uVar8 = 0;
            if (puVar14 != (undefined1 *)0x0) {
              uVar8 = (ulong)puVar9 / (ulong)puVar14;
            }
            puVar9 = puVar9 + -(uVar8 * (long)puVar14);
          }
          if (puVar9 != puVar16) break;
        }
      }
    }
  }
  plVar12 = (long *)operator_new(0x20);
  if (plVar12 == (long *)0x0) {
LAB_008f103c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar12 = 0;
  plVar12[1] = (long)puVar15;
  if (plVar12 == (long *)0xfffffffffffffff0) goto LAB_008f103c;
  uVar2 = *param_3;
  plVar12[3] = 0;
  *(undefined4 *)(plVar12 + 2) = uVar2;
  if ((float)(plVar11[3] + 1) <= *(float *)(plVar11 + 4) * (float)puVar14) goto LAB_008f0fa8;
  if (puVar14 < (undefined1 *)0x3) {
    uVar8 = 1;
  }
  else {
    uVar8 = (ulong)(((ulong)puVar14 & (ulong)(puVar14 + -1)) != 0);
  }
  puVar16 = (undefined1 *)(uVar8 | (long)puVar14 << 1);
  puVar5 = (undefined1 *)(long)((float)(plVar11[3] + 1) / *(float *)(plVar11 + 4));
  if (puVar16 <= puVar5) {
    puVar16 = puVar5;
  }
  if (puVar16 + -1 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar16 & (ulong)(puVar16 + -1)) != 0) {
    puVar16 = (undefined1 *)FUN_005204f8(puVar16);
    puVar14 = (undefined1 *)plVar11[1];
  }
  if (puVar14 < puVar16) {
LAB_008f0efc:
    FUN_008f1050(plVar11,puVar16);
  }
  else if (puVar16 < puVar14) {
    puVar5 = (undefined1 *)(long)((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
    if ((puVar14 < (undefined1 *)0x3) || (((ulong)puVar14 & (ulong)(puVar14 + -1)) != 0)) {
      puVar5 = (undefined1 *)FUN_005204f8();
    }
    else if ((undefined1 *)0x1 < puVar5) {
      puVar5 = (undefined1 *)(1L << (-LZCOUNT(puVar5 + -1) & 0x3fU));
    }
    if (puVar16 <= puVar5) {
      puVar16 = puVar5;
    }
    if (puVar16 < puVar14) goto LAB_008f0efc;
  }
  puVar14 = (undefined1 *)plVar11[1];
  if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
    puVar16 = (undefined1 *)(ulong)((int)puVar14 - 1U & uVar1);
  }
  else {
    puVar16 = puVar15;
    if (puVar14 <= puVar15) {
      uVar8 = 0;
      if (puVar14 != (undefined1 *)0x0) {
        uVar8 = (ulong)puVar15 / (ulong)puVar14;
      }
      puVar16 = puVar15 + -(uVar8 * (long)puVar14);
    }
  }
LAB_008f0fa8:
  lVar6 = *plVar11;
  plVar10 = *(long **)(lVar6 + (long)puVar16 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar11 + 2;
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
    *(long **)(lVar6 + (long)puVar16 * 8) = plVar10;
    if (*plVar12 != 0) {
      puVar15 = *(undefined1 **)(*plVar12 + 8);
      if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
        puVar15 = (undefined1 *)((ulong)puVar15 & (ulong)(puVar14 + -1));
      }
      else if (puVar14 <= puVar15) {
        uVar8 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar8 = (ulong)puVar15 / (ulong)puVar14;
        }
        puVar15 = puVar15 + -(uVar8 * (long)puVar14);
      }
      *(long **)(*plVar11 + (long)puVar15 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
  }
  uVar4 = 1;
  plVar11[3] = plVar11[3] + 1;
LAB_008f1020:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = plVar12;
  return auVar17;
}


// ===== 008f1050  FUN_008f1050 =====

void FUN_008f1050(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(param_2 << 3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - 1;
      uVar4 = plVar6[1];
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
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
            *(long **)(*param_1 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(*param_1 + uVar8 * 8);
            **(long **)(*param_1 + uVar8 * 8) = (long)plVar7;
            plVar7 = plVar6;
          }
        }
        plVar6 = plVar7;
      }
    }
  }
  return;
}


// ===== 008f11a4  FUN_008f11a4 =====

void FUN_008f11a4(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x200) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0x1000);
      FUN_008f1614(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008f1b38(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0x1000);
      FUN_008f1614(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_008f189c(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008f138c(param_1,&local_50);
  return;
}


// ===== 008f138c  FUN_008f138c =====

void FUN_008f138c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008f15fc;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008f15fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f1614  FUN_008f1614 =====

void FUN_008f1614(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008f1884;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008f1884:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f189c  FUN_008f189c =====

void FUN_008f189c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008f1b20;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008f1b20:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f1b38  FUN_008f1b38 =====

void FUN_008f1b38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008f1dbc;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008f1dbc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f1dd4  FUN_008f1dd4 =====

undefined8 FUN_008f1dd4(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  void *local_38 [2];
  char local_28;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__hash_table:1855: libc++ Hardening assertion __p != end() failed: unordered container::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  uVar3 = *param_2;
  FUN_008f1e78(local_38);
  pvVar1 = local_38[0];
  local_38[0] = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if (local_28 == '\x01') {
      if (pvVar1 == (void *)0xfffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar2 = *(long *)((long)pvVar1 + 0x18);
      *(long *)((long)pvVar1 + 0x18) = 0;
      if (lVar2 != 0) {
        FUN_008ec69c();
      }
    }
    operator_delete(pvVar1);
  }
  return uVar3;
}


// ===== 008f1e78  FUN_008f1e78 =====

void FUN_008f1e78(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_008f1f30;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_008f1f30;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_008f1f30:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  lVar6 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar6 + -1;
  return;
}


// ===== 008f1fac  FUN_008f1fac =====

void FUN_008f1fac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 **__src;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00622c24(&local_58,*param_2);
  pppuVar3 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar3 = &local_58;
  }
  thunk_FUN_00547cac(&local_70,pppuVar3,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  uVar5 = local_60;
  puVar4 = local_70;
  __n = uStack_68;
  __src = (undefined8 **)local_70;
  if (-1 < (long)local_60) {
    __n = local_60 >> 0x38;
    __src = &local_70;
  }
  if ((__src == (undefined8 **)0x0) && (__n != 0)) {
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
  if ((long)uVar5 < 0) {
    operator_delete(puVar4);
  }
  return;
}


// ===== 008f212c  FUN_008f212c =====

void FUN_008f212c(long *param_1,void *param_2,long *param_3,void *param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  void *__dest;
  void *__src;
  long *plVar3;
  void *pvVar4;
  
  plVar3 = (long *)*param_5;
  __dest = (void *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_008f23e0;
    lVar2 = (long)param_4 - (long)param_2 >> 3;
    lVar1 = (long)__dest - *plVar3 >> 3;
    if (lVar1 <= lVar2) {
      lVar2 = lVar1;
    }
    param_4 = (void *)((long)param_4 + lVar2 * -8);
    __dest = (void *)((long)__dest + lVar2 * -8);
    memmove(__dest,param_4,lVar2 * 8);
    while (param_2 != param_4) {
      plVar3 = plVar3 + -1;
      lVar2 = (long)param_4 - (long)param_2 >> 3;
      if (0x1ff < lVar2) {
        lVar2 = 0x200;
      }
      param_4 = (void *)((long)param_4 + lVar2 * -8);
      __dest = (void *)(*plVar3 + lVar2 * -8 + 0x1000);
      memmove(__dest,param_4,lVar2 * 8);
    }
  }
  else {
    pvVar4 = (void *)*param_3;
    if (pvVar4 != param_4) {
      lVar2 = (long)param_4 - (long)pvVar4 >> 3;
      lVar1 = (long)__dest - *plVar3 >> 3;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      param_4 = (void *)((long)param_4 + lVar2 * -8);
      __dest = (void *)((long)__dest + lVar2 * -8);
      memmove(__dest,param_4,lVar2 * 8);
      while (pvVar4 != param_4) {
        plVar3 = plVar3 + -1;
        lVar2 = (long)param_4 - (long)pvVar4 >> 3;
        if (0x1ff < lVar2) {
          lVar2 = 0x200;
        }
        param_4 = (void *)((long)param_4 + lVar2 * -8);
        __dest = (void *)(*plVar3 + lVar2 * -8 + 0x1000);
        memmove(__dest,param_4,lVar2 * 8);
      }
      if ((plVar3 != (long *)0x0) && (__dest == (void *)(*plVar3 + 0x1000))) {
        plVar3 = plVar3 + 1;
        __dest = (void *)*plVar3;
      }
    }
    *param_5 = plVar3;
    param_5[1] = __dest;
    for (param_3 = param_3 + -1; param_1 != param_3; param_3 = param_3 + -1) {
      pvVar4 = (void *)*param_3;
      lVar2 = (long)__dest - *plVar3 >> 3;
      if (0x1ff < lVar2) {
        lVar2 = 0x200;
      }
      lVar1 = lVar2 * -8 + 0x1000;
      __dest = (void *)((long)__dest + lVar2 * -8);
      __src = (void *)((long)pvVar4 + lVar1);
      memmove(__dest,(void *)((long)pvVar4 + lVar1),lVar2 * 8);
      if (lVar1 != 0) {
        do {
          plVar3 = plVar3 + -1;
          lVar2 = (long)__src - (long)pvVar4 >> 3;
          if (0x1ff < lVar2) {
            lVar2 = 0x200;
          }
          __src = (void *)((long)__src + lVar2 * -8);
          __dest = (void *)(*plVar3 + lVar2 * -8 + 0x1000);
          memmove(__dest,__src,lVar2 * 8);
        } while (pvVar4 != __src);
      }
      if ((plVar3 != (long *)0x0) && (__dest == (void *)(*plVar3 + 0x1000))) {
        plVar3 = plVar3 + 1;
        __dest = (void *)*plVar3;
      }
      *param_5 = plVar3;
      param_5[1] = __dest;
    }
    pvVar4 = (void *)(*param_3 + 0x1000);
    if (param_2 == pvVar4) goto LAB_008f23e0;
    lVar2 = (long)pvVar4 - (long)param_2 >> 3;
    lVar1 = (long)__dest - *plVar3 >> 3;
    if (lVar1 <= lVar2) {
      lVar2 = lVar1;
    }
    pvVar4 = (void *)((long)pvVar4 + lVar2 * -8);
    __dest = (void *)((long)__dest + lVar2 * -8);
    memmove(__dest,pvVar4,lVar2 * 8);
    while (param_2 != pvVar4) {
      plVar3 = plVar3 + -1;
      lVar2 = (long)pvVar4 - (long)param_2 >> 3;
      if (0x1ff < lVar2) {
        lVar2 = 0x200;
      }
      pvVar4 = (void *)((long)pvVar4 + lVar2 * -8);
      __dest = (void *)(*plVar3 + lVar2 * -8 + 0x1000);
      memmove(__dest,pvVar4,lVar2 * 8);
    }
  }
  if ((plVar3 != (long *)0x0) && (__dest == (void *)(*plVar3 + 0x1000))) {
    plVar3 = plVar3 + 1;
    __dest = (void *)*plVar3;
  }
LAB_008f23e0:
  *param_5 = plVar3;
  param_5[1] = __dest;
  return;
}


// ===== 008f2404  FUN_008f2404 =====

void FUN_008f2404(long *param_1,void *param_2,long *param_3,void *param_4,undefined8 *param_5)

{
  void *pvVar1;
  void *__src;
  long lVar2;
  long lVar3;
  void *__dest;
  void *pvVar4;
  size_t sVar5;
  long *plVar6;
  
  if (param_1 == param_3) {
    plVar6 = (long *)*param_5;
    __dest = (void *)param_5[1];
    if (param_2 != param_4) {
      lVar3 = (long)param_4 - (long)param_2 >> 3;
      lVar2 = (*plVar6 - (long)__dest) + 0x1000 >> 3;
      if (lVar2 <= lVar3) {
        lVar3 = lVar2;
      }
      sVar5 = lVar3 * 8;
      memmove(__dest,param_2,sVar5);
      for (param_2 = (void *)((long)param_2 + sVar5); param_4 != param_2;
          param_2 = (void *)((long)param_2 + sVar5)) {
        plVar6 = plVar6 + 1;
        __dest = (void *)*plVar6;
        lVar3 = (long)param_4 - (long)param_2 >> 3;
        if (0x1ff < lVar3) {
          lVar3 = 0x200;
        }
        sVar5 = lVar3 * 8;
        memmove(__dest,param_2,sVar5);
      }
      __dest = (void *)((long)__dest + sVar5);
      if ((plVar6 != (long *)0x0) && (__dest == (void *)(*plVar6 + 0x1000))) {
        plVar6 = plVar6 + 1;
        __dest = (void *)*plVar6;
      }
    }
    *param_5 = plVar6;
  }
  else {
    plVar6 = (long *)*param_5;
    __dest = (void *)param_5[1];
    pvVar4 = (void *)(*param_1 + 0x1000);
    if (param_2 != pvVar4) {
      lVar3 = (long)pvVar4 - (long)param_2 >> 3;
      lVar2 = (*plVar6 - (long)__dest) + 0x1000 >> 3;
      if (lVar2 <= lVar3) {
        lVar3 = lVar2;
      }
      sVar5 = lVar3 * 8;
      memmove(__dest,param_2,sVar5);
      for (param_2 = (void *)((long)param_2 + sVar5); pvVar4 != param_2;
          param_2 = (void *)((long)param_2 + sVar5)) {
        plVar6 = plVar6 + 1;
        __dest = (void *)*plVar6;
        lVar3 = (long)pvVar4 - (long)param_2 >> 3;
        if (0x1ff < lVar3) {
          lVar3 = 0x200;
        }
        sVar5 = lVar3 * 8;
        memmove(__dest,param_2,sVar5);
      }
      __dest = (void *)((long)__dest + sVar5);
      if ((plVar6 != (long *)0x0) && (__dest == (void *)(*plVar6 + 0x1000))) {
        plVar6 = plVar6 + 1;
        __dest = (void *)*plVar6;
      }
    }
    *param_5 = plVar6;
    param_5[1] = __dest;
    for (param_1 = param_1 + 1; param_1 != param_3; param_1 = param_1 + 1) {
      pvVar4 = (void *)*param_1;
      lVar2 = (*plVar6 - (long)__dest) + 0x1000 >> 3;
      lVar3 = lVar2;
      if (0x1ff < lVar2) {
        lVar3 = 0x200;
      }
      memmove(__dest,pvVar4,lVar3 * 8);
      if (lVar2 < 0x200) {
        __src = (void *)((long)pvVar4 + lVar3 * 8);
        do {
          plVar6 = plVar6 + 1;
          __dest = (void *)*plVar6;
          lVar3 = ((long)pvVar4 + 0x1000) - (long)__src >> 3;
          if (0x1ff < lVar3) {
            lVar3 = 0x200;
          }
          sVar5 = lVar3 * 8;
          pvVar1 = (void *)((long)__src + sVar5);
          memmove(__dest,__src,sVar5);
          __src = pvVar1;
        } while ((void *)((long)pvVar4 + 0x1000) != pvVar1);
      }
      else {
        sVar5 = 0x1000;
      }
      __dest = (void *)((long)__dest + sVar5);
      if ((plVar6 != (long *)0x0) && (__dest == (void *)(*plVar6 + 0x1000))) {
        plVar6 = plVar6 + 1;
        __dest = (void *)*plVar6;
      }
      *param_5 = plVar6;
      param_5[1] = __dest;
    }
    pvVar4 = (void *)*param_1;
    if (pvVar4 != param_4) {
      lVar3 = (long)param_4 - (long)pvVar4 >> 3;
      lVar2 = (*plVar6 - (long)__dest) + 0x1000 >> 3;
      if (lVar2 <= lVar3) {
        lVar3 = lVar2;
      }
      sVar5 = lVar3 * 8;
      memmove(__dest,pvVar4,sVar5);
      for (pvVar4 = (void *)((long)pvVar4 + sVar5); param_4 != pvVar4;
          pvVar4 = (void *)((long)pvVar4 + sVar5)) {
        plVar6 = plVar6 + 1;
        __dest = (void *)*plVar6;
        lVar3 = (long)param_4 - (long)pvVar4 >> 3;
        if (0x1ff < lVar3) {
          lVar3 = 0x200;
        }
        sVar5 = lVar3 * 8;
        memmove(__dest,pvVar4,sVar5);
      }
      __dest = (void *)((long)__dest + sVar5);
      if ((plVar6 != (long *)0x0) && (__dest == (void *)(*plVar6 + 0x1000))) {
        plVar6 = plVar6 + 1;
        __dest = (void *)*plVar6;
      }
    }
    *param_5 = plVar6;
  }
  param_5[1] = __dest;
  return;
}


// ===== 008f2728  FUN_008f2728 =====

void FUN_008f2728(undefined8 param_1,undefined8 param_2)

{
  FUN_008f2734(param_1,param_2,0);
  return;
}


// ===== 008f2734  FUN_008f2734 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2734(undefined8 *param_1,long *param_2,byte param_3)

{
  int *******pppppppiVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *local_80;
  undefined8 *puStack_78;
  int *******local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  uVar8 = _DAT_001f1fc0;
  param_1[1] = _UNK_001f1fc8;
  *param_1 = uVar8;
  param_1[3] = 30000000;
  param_1[2] = 30000000;
  FUN_008f3674(param_1 + 4);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0x8000000000000000;
  param_1[0x1a] = 0x8000000000000000;
  (**(code **)(*param_2 + 0x10))(&local_70,param_2,"WebRTC-BweBackOffFactor",0x17);
  uVar4 = false;
  puVar2 = puStack_68;
  if (-1 < (long)local_60) {
    puVar2 = (undefined1 *)((ulong)local_60 >> 0x38);
  }
  if ((undefined1 *)0x6 < puVar2) {
    pppppppiVar1 = local_70;
    if (-1 < (long)local_60) {
      pppppppiVar1 = (int *******)&local_70;
    }
    uVar4 = *(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62;
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (!(bool)uVar4) {
    puVar10 = (undefined8 *)0x3feb333333333333;
    goto LAB_008f2964;
  }
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_70,param_2,"WebRTC-BweBackOffFactor",0x17);
  local_80 = (undefined8 *)0xffffffffffffffff;
  pppppppiVar1 = local_70;
  if (-1 < (long)local_60) {
    pppppppiVar1 = (int *******)&local_70;
  }
  iVar6 = sscanf((char *)pppppppiVar1,"Enabled-%lf",&local_80);
  if (iVar6 == 1) {
    if ((double)local_80 < 1.0 == NAN((double)local_80)) {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        pcVar9 = "Back-off factor must be less than 1.";
        uVar8 = 0x17a;
LAB_008f2914:
        FUN_00623bb0(&DAT_001f4e98,"../../modules/remote_bitrate_estimator/aimd_rate_control.cc",
                     uVar8,pcVar9);
      }
      goto LAB_008f2918;
    }
    puVar10 = local_80;
    if ((double)local_80 <= 0.0) {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        pcVar9 = "Back-off factor must be greater than 0.";
        uVar8 = 0x18a;
        goto LAB_008f2914;
      }
      goto LAB_008f2918;
    }
  }
  else {
LAB_008f2918:
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/remote_bitrate_estimator/aimd_rate_control.cc",0x1b2
                   ,
                   "Failed to parse parameters for AimdRateControl experiment from field trial string. Using default."
                  );
    }
    puVar10 = (undefined8 *)0x3feb333333333333;
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
LAB_008f2964:
  param_1[0x1e] = puVar10;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 200000;
  *(byte *)(param_1 + 0x21) = param_3 & 1;
  (**(code **)(*param_2 + 0x10))(&local_70,param_2,"WebRTC-DontIncreaseDelayBasedBweInAlr",0x25);
  bVar5 = false;
  puVar2 = puStack_68;
  if (-1 < (long)local_60) {
    puVar2 = (undefined1 *)((ulong)local_60 >> 0x38);
  }
  if ((undefined1 *)0x6 < puVar2) {
    pppppppiVar1 = local_70;
    if (-1 < (long)local_60) {
      pppppppiVar1 = (int *******)&local_70;
    }
    bVar5 = *(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62;
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  *(bool *)((long)param_1 + 0x109) = bVar5;
  FUN_00662484(param_1 + 0x22,"Disabled",8);
  FUN_00661054(param_1 + 0x2a,"c_upper",7);
  puVar3 = PTR_DAT_00d52090;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((long)param_1 + 0x189) = 1;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x2a] = puVar3 + 0x10;
  local_80 = param_1 + 0x22;
  puStack_78 = param_1 + 0x2a;
  (**(code **)(*param_2 + 0x10))(&local_70,param_2,"WebRTC-Bwe-EstimateBoundedIncrease",0x22);
  puVar2 = puStack_68;
  pppppppiVar1 = local_70;
  if (-1 < (long)local_60) {
    puVar2 = (undefined1 *)((ulong)local_60 >> 0x38);
    pppppppiVar1 = (int *******)&local_70;
  }
  FUN_00661cc0(&local_80,2,pppppppiVar1,puVar2);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
    uVar7 = FUN_00417e08();
  }
  else {
    uVar7 = FUN_00417e08();
  }
  if ((uVar7 & 1) == 0) {
    FUN_00623bb0(param_1[0x1e],&DAT_001f667e,
                 "../../modules/remote_bitrate_estimator/aimd_rate_control.cc",0x2c1,
                 "Using aimd rate control with back off factor ");
  }
  return;
}


// ===== 008f2b08  FUN_008f2b08 =====

void FUN_008f2b08(long param_1)

{
  FUN_006634ac(param_1 + 0x150);
  FUN_006634ac(param_1 + 0x110);
  return;
}


// ===== 008f2b38  FUN_008f2b38 =====

void FUN_008f2b38(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}


// ===== 008f2b4c  FUN_008f2b4c =====

void FUN_008f2b4c(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (param_2 <= param_1[2]) {
    param_2 = param_1[2];
  }
  param_1[2] = param_2;
  return;
}


// ===== 008f2b68  FUN_008f2b68 =====

undefined1 FUN_008f2b68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe8);
}


// ===== 008f2b74  FUN_008f2b74 =====

long FUN_008f2b74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)((double)*(long *)(param_1 + 0x10) * DAT_001f5940);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = 640000000 / lVar2;
  }
  if (lVar1 < 0x30d41) {
    lVar1 = 200000;
  }
  if (999999 < lVar1) {
    lVar1 = 1000000;
  }
  return lVar1;
}


// ===== 008f2bc0  FUN_008f2bc0 =====

bool FUN_008f2bc0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = true;
  if ((param_2 != 0x7fffffffffffffff) &&
     (lVar3 = *(long *)(param_1 + 0xd0), lVar3 != -0x8000000000000000)) {
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 < 0x2711) {
      lVar2 = 10000;
    }
    if (199999 < lVar2) {
      lVar2 = 200000;
    }
    if (((param_2 != -0x8000000000000000) && (lVar3 != 0x7fffffffffffffff)) &&
       (lVar2 <= param_2 - lVar3)) {
      return true;
    }
    if (*(char *)(param_1 + 0xe8) != '\x01') {
      return false;
    }
    bVar1 = param_3 < (long)((double)*(long *)(param_1 + 0x10) * 0.5);
  }
  return bVar1;
}


// ===== 008f2c64  FUN_008f2c64 =====

undefined8 FUN_008f2c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 008f2c70  FUN_008f2c70 =====

bool FUN_008f2c70(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0xe8) != '\x01') {
    return false;
  }
  bVar1 = true;
  if ((param_2 != 0x7fffffffffffffff) &&
     (lVar3 = *(long *)(param_1 + 0xd0), lVar3 != -0x8000000000000000)) {
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 < 0x2711) {
      lVar2 = 10000;
    }
    if (199999 < lVar2) {
      lVar2 = 200000;
    }
    if (((param_2 != -0x8000000000000000) && (lVar3 != 0x7fffffffffffffff)) &&
       (lVar2 <= param_2 - lVar3)) {
      return true;
    }
    bVar1 = *(long *)(param_1 + 0x10) / 2 <= (long)((double)*(long *)(param_1 + 0x10) / 2.0);
  }
  return bVar1;
}


// ===== 008f2d14  FUN_008f2d14 =====

void FUN_008f2d14(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  return;
}


// ===== 008f2d20  FUN_008f2d20 =====

undefined8 FUN_008f2d20(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    if (*(long *)(param_1 + 0xe0) + 0x8000000000000001U < 2) {
      if (*(char *)(param_2 + 0x10) == '\x01') {
        *(long *)(param_1 + 0xe0) = param_3;
      }
    }
    else {
      if (param_3 == 0x7fffffffffffffff) {
        if (*(char *)(param_2 + 0x10) != '\x01') goto LAB_008f2d3c;
      }
      else if (((param_3 == -0x8000000000000000) || (param_3 - *(long *)(param_1 + 0xe0) < 0x4c4b41)
               ) || ((*(byte *)(param_2 + 0x10) & 1) == 0)) goto LAB_008f2d3c;
      uVar1 = *(undefined8 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 0xe8) = 1;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
  }
LAB_008f2d3c:
  FUN_008f2dd8(param_1);
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 008f2dd8  FUN_008f2dd8 =====

void FUN_008f2dd8(long *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  long lVar9;
  double dVar10;
  long local_48;
  
  plVar7 = (long *)(param_2 + 2);
  if ((char)param_2[4] == '\0') {
    plVar7 = param_1 + 3;
  }
  local_48 = -0x5555555555555600;
  lVar9 = *plVar7;
  if ((char)param_2[4] != '\0') {
    param_1[3] = *(long *)(param_2 + 2);
  }
  iVar2 = *param_2;
  if (((*(byte *)(param_1 + 0x1d) & 1) == 0) && (iVar2 != 2)) {
    return;
  }
  if (iVar2 == 0) {
    iVar2 = (int)param_1[0x19];
    if (iVar2 == 0) {
      param_1[0x1a] = param_3;
      *(undefined4 *)(param_1 + 0x19) = 1;
    }
    else {
LAB_008f2e94:
      if (iVar2 == 2) goto LAB_008f2f88;
      if (iVar2 != 1) goto LAB_008f3078;
    }
    lVar4 = FUN_008f3694(param_1 + 4);
    if (lVar4 < lVar9) {
      FUN_008f378c(param_1 + 4);
    }
    lVar4 = (long)((double)lVar9 * 1.5);
    lVar9 = lVar4;
    if (lVar4 != -0x8000000000000000) {
      lVar9 = lVar4 + 10000;
    }
    if (lVar4 != 0x7fffffffffffffff) {
      lVar4 = lVar9;
    }
    if ((((char)param_1[0x21] == '\x01') && ((char)param_1[0x1f] == '\x01')) &&
       (*(char *)((long)param_1 + 0x109) == '\x01')) {
      lVar4 = param_1[2];
    }
    if (param_1[2] < lVar4) {
      uVar3 = FUN_008f38a0(param_1 + 4);
      lVar9 = param_1[0x1a];
      if ((uVar3 & 1) == 0) {
        lVar6 = param_1[2];
        dVar10 = DAT_001f53f0;
        if (lVar9 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
          if (param_3 == 0x7fffffffffffffff) {
LAB_008f30a0:
            dVar10 = INFINITY;
          }
          else if ((param_3 == -0x8000000000000000) ||
                  (lVar9 = param_3 - lVar9, lVar9 == -0x8000000000000000)) {
            dVar10 = -INFINITY;
          }
          else {
            if (lVar9 == 0x7fffffffffffffff) goto LAB_008f30a0;
            dVar10 = (double)lVar9 * DAT_001f5658;
          }
          dVar8 = 1.0;
          if (dVar10 == 1.0 || dVar10 < 1.0 != NAN(dVar10)) {
            dVar8 = dVar10;
          }
          dVar10 = pow(DAT_001f53f8,dVar8);
          dVar10 = dVar10 + -1.0;
        }
        lVar9 = 0x7fffffffffffffff;
        if ((lVar6 != 0x7fffffffffffffff) &&
           (lVar5 = (long)(dVar10 * (double)lVar6), lVar5 != 0x7fffffffffffffff)) {
          if (lVar5 < 0x3e9) {
            lVar5 = 1000;
          }
          lVar9 = lVar6;
          if (lVar6 != -0x8000000000000000) {
            lVar9 = lVar5 + lVar6;
          }
        }
      }
      else {
        dVar10 = INFINITY;
        if ((param_3 != 0x7fffffffffffffff) && (lVar9 != -0x8000000000000000)) {
          if ((param_3 == -0x8000000000000000) ||
             ((lVar9 == 0x7fffffffffffffff ||
              (lVar9 = param_3 - lVar9, lVar9 == -0x8000000000000000)))) {
            dVar10 = -INFINITY;
          }
          else if (lVar9 == 0x7fffffffffffffff) {
            dVar10 = INFINITY;
          }
          else {
            dVar10 = (double)lVar9 * DAT_001f5658;
          }
        }
        lVar6 = param_1[2];
        lVar5 = param_1[0x20];
        lVar9 = 0;
        if (lVar5 != -0x8000000000000000) {
          lVar9 = lVar5 * 2 + 200000;
        }
        lVar1 = -2;
        if (lVar5 != 0x7fffffffffffffff) {
          lVar1 = lVar9;
        }
        lVar9 = 0;
        if (lVar1 != 0) {
          lVar9 = ((long)((double)((long)(&uleb128_003d0900 + lVar6 * 0x8235) / 8000000) /
                         (double)(long)((double)((long)(&uleb128_003d0900 + lVar6 * 0x8235) /
                                                8000000) / 1200.0)) * 8000000) / lVar1;
        }
        if (lVar9 == -0x8000000000000000) {
          dVar8 = -INFINITY;
        }
        else if (lVar9 == 0x7fffffffffffffff) {
          dVar8 = INFINITY;
        }
        else {
          dVar8 = (double)lVar9;
        }
        lVar9 = 0x7fffffffffffffff;
        if (dVar8 <= 4000.0) {
          dVar8 = 4000.0;
        }
        dVar10 = dVar10 * dVar8;
        if (dVar10 != INFINITY) {
          lVar5 = -0x8000000000000000;
          if (dVar10 != -INFINITY) {
            lVar5 = (long)dVar10;
          }
          if ((lVar6 != 0x7fffffffffffffff) && (lVar5 != 0x7fffffffffffffff)) {
            lVar9 = -0x8000000000000000;
            if (lVar5 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
              lVar9 = lVar5 + lVar6;
            }
          }
        }
      }
      param_1[0x1a] = param_3;
      if (lVar9 <= lVar4) {
        lVar4 = lVar9;
      }
      local_48 = lVar4;
      plVar7 = &local_48;
    }
    else {
      param_1[0x1a] = param_3;
LAB_008f3078:
      plVar7 = param_1 + 2;
    }
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x19) = 0;
      goto LAB_008f3078;
    }
    if (iVar2 != 2) {
      iVar2 = (int)param_1[0x19];
      goto LAB_008f2e94;
    }
    if ((int)param_1[0x19] != 2) {
      *(undefined4 *)(param_1 + 0x19) = 2;
    }
LAB_008f2f88:
    lVar6 = (long)((double)param_1[0x1e] * (double)lVar9);
    lVar4 = lVar6;
    if (lVar6 != 0x7fffffffffffffff) {
      lVar4 = lVar6 + -5000;
    }
    if (lVar6 < 0x1389) {
      lVar4 = lVar6;
    }
    if ((param_1[2] < lVar4) && (uVar3 = FUN_008f38a0(param_1 + 4), (uVar3 & 1) != 0)) {
      dVar10 = (double)param_1[0x1e];
      lVar4 = FUN_008f38ac(param_1 + 4);
      lVar4 = (long)(dVar10 * (double)lVar4);
    }
    lVar6 = param_1[2];
    if (lVar4 < lVar6) {
      local_48 = lVar4;
      if (((char)param_1[0x1d] == '\x01') && (lVar9 < lVar6)) {
        lVar5 = -0x8000000000000000;
        if (lVar4 != 0x7fffffffffffffff) {
          lVar5 = lVar6 - lVar4;
        }
        lVar1 = 0x7fffffffffffffff;
        if (lVar4 != -0x8000000000000000 && lVar6 != 0x7fffffffffffffff) {
          lVar1 = lVar5;
        }
        if ((char)param_1[0x33] == '\x01') {
          param_1[0x32] = lVar1;
        }
        else {
          if (param_1 + 0x32 == (long *)0x0) {
LAB_008f33cc:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          param_1[0x32] = lVar1;
LAB_008f30bc:
          *(undefined1 *)(param_1 + 0x33) = 1;
        }
      }
    }
    else if (((char)param_1[0x1d] == '\x01') && (lVar9 < lVar6)) {
      if ((char)param_1[0x33] != '\x01') {
        if (param_1 + 0x32 == (long *)0x0) goto LAB_008f33cc;
        param_1[0x32] = 0;
        goto LAB_008f30bc;
      }
      param_1[0x32] = 0;
    }
    lVar5 = FUN_008f3708(param_1 + 4);
    if (lVar9 < lVar5) {
      FUN_008f378c(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x1d) = 1;
    FUN_008f37a4(param_1 + 4,lVar9);
    *(undefined4 *)(param_1 + 0x19) = 0;
    plVar7 = &local_48;
    if (lVar6 <= lVar4) {
      plVar7 = param_1 + 2;
    }
    param_1[0x1a] = param_3;
    param_1[0x1b] = param_3;
  }
  lVar9 = *plVar7;
  uVar3 = FUN_006624c8(param_1 + 0x22);
  if ((uVar3 & 1) == 0) {
    if ((char)param_1[0x18] == '\0') goto LAB_008f3388;
    lVar4 = param_1[0xd];
    if (lVar4 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      if ((*(char *)((long)param_1 + 0x189) == '\x01') && (lVar6 = param_1[2], lVar4 <= lVar6)) {
        lVar4 = lVar6;
      }
      if (lVar4 <= lVar9) {
        lVar9 = lVar4;
      }
    }
  }
  else if ((char)param_1[0x18] == '\0') goto LAB_008f3388;
  if ((param_1[0xc] + 0x7fffffffffffffffU < 0xfffffffffffffffe) &&
     (lVar4 = param_1[2], lVar9 < lVar4)) {
    lVar6 = (long)((double)param_1[0x1e] * (double)param_1[0xc]);
    if (lVar9 <= lVar6) {
      lVar9 = lVar6;
    }
    if (lVar4 <= lVar9) {
      lVar9 = lVar4;
    }
  }
LAB_008f3388:
  if (lVar9 <= *param_1) {
    lVar9 = *param_1;
  }
  param_1[2] = lVar9;
  return;
}


// ===== 008f33e0  FUN_008f33e0 =====

void FUN_008f33e0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf8) = param_2;
  return;
}


// ===== 008f33ec  FUN_008f33ec =====

void FUN_008f33ec(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  *(undefined1 *)(param_1 + 0x1d) = 1;
  uVar1 = FUN_006624c8(param_1 + 0x22);
  if ((uVar1 & 1) == 0) {
    if ((char)param_1[0x18] == '\0') goto LAB_008f34a8;
    lVar2 = param_1[0xd];
    if (lVar2 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      if ((*(char *)((long)param_1 + 0x189) == '\x01') && (lVar2 <= param_1[2])) {
        lVar2 = param_1[2];
      }
      if (lVar2 <= param_2) {
        param_2 = lVar2;
      }
    }
  }
  else if ((char)param_1[0x18] == '\0') goto LAB_008f34a8;
  if ((param_1[0xc] + 0x7fffffffffffffffU < 0xfffffffffffffffe) &&
     (lVar2 = param_1[2], param_2 < lVar2)) {
    lVar3 = (long)((double)param_1[0x1e] * (double)param_1[0xc]);
    if (param_2 <= lVar3) {
      param_2 = lVar3;
    }
    if (lVar2 <= param_2) {
      param_2 = lVar2;
    }
  }
LAB_008f34a8:
  param_1[0x1a] = param_3;
  if (param_2 <= *param_1) {
    param_2 = *param_1;
  }
  param_1[2] = param_2;
  if (param_2 < lVar4) {
    param_1[0x1b] = param_3;
  }
  return;
}


// ===== 008f34dc  FUN_008f34dc =====

void FUN_008f34dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = param_2[7];
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xe];
  uVar5 = param_2[9];
  uVar4 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  *(undefined8 *)(param_1 + 0xb0) = param_2[0xf];
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  uVar1 = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)(param_1 + 0xb9) = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)(param_1 + 0xb1) = uVar1;
  return;
}


// ===== 008f351c  FUN_008f351c =====

char * FUN_008f351c(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  double dVar4;
  char *pcVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x100);
  lVar2 = 0;
  if (lVar6 != -0x8000000000000000) {
    lVar2 = lVar6 * 2 + 200000;
  }
  lVar1 = -2;
  if (lVar6 != 0x7fffffffffffffff) {
    lVar1 = lVar2;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = ((long)((double)((long)(&uleb128_003d0900 + *(long *)(param_1 + 0x10) * 0x8235) /
                            8000000) /
                   (double)(long)((double)((long)(&uleb128_003d0900 +
                                                 *(long *)(param_1 + 0x10) * 0x8235) / 8000000) /
                                 1200.0)) * 8000000) / lVar1;
  }
  if (lVar2 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar2 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar2;
  }
  if (*(char *)(param_1 + 0x198) != '\x01') {
    return (char *)0x2dc6c0;
  }
  if (dVar4 <= 4000.0) {
    dVar4 = 4000.0;
  }
  dVar4 = ((double)*(long *)(param_1 + 400) / dVar4) * 1000000.0;
  pcVar3 = (char *)0x2faf080;
  if ((dVar4 != INFINITY) &&
     ((dVar4 == -INFINITY ||
      ((pcVar5 = (char *)(long)dVar4, (long)pcVar5 < 0x2faf081 &&
       (pcVar3 = pcVar5, (long)pcVar5 < 2000000)))))) {
    return "nt read_session_ticket";
  }
  return pcVar3;
}


// ===== 008f3674  FUN_008f3674 =====

void FUN_008f3674(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x3fd999999999999a;
  return;
}


// ===== 008f3694  FUN_008f3694 =====

long FUN_008f3694(double *param_1)

{
  double dVar1;
  
  if ((*(char *)(param_1 + 1) == '\x01') &&
     (dVar1 = (*param_1 + SQRT(*param_1 * param_1[2]) * 3.0) * 1000.0, dVar1 != INFINITY)) {
    if (dVar1 == -INFINITY) {
      return -0x8000000000000000;
    }
    return (long)dVar1;
  }
  return 0x7fffffffffffffff;
}


// ===== 008f3708  FUN_008f3708 =====

long FUN_008f3708(double *param_1)

{
  double dVar1;
  
  if (*(char *)(param_1 + 1) != '\x01') {
    return 0;
  }
  dVar1 = *param_1 + SQRT(*param_1 * param_1[2]) * -3.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar1 = dVar1 * 1000.0;
  if (dVar1 == INFINITY) {
    return 0x7fffffffffffffff;
  }
  if (dVar1 == -INFINITY) {
    return -0x8000000000000000;
  }
  return (long)dVar1;
}


// ===== 008f378c  FUN_008f378c =====

void FUN_008f378c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}


// ===== 008f37a4  FUN_008f37a4 =====

void FUN_008f37a4(double *param_1,ulong param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = DAT_001f5940;
  uVar1 = param_2 / 1000;
  if (499 < param_2 % 1000) {
    uVar1 = uVar1 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  dVar3 = (double)(long)uVar1;
  dVar2 = dVar3;
  if (*(char *)(param_1 + 1) == '\x01') {
    dVar2 = dVar3 * DAT_001f5940 + *param_1 * 0.95;
  }
  *param_1 = dVar2;
  dVar4 = DAT_001f5050;
  dVar5 = 1.0;
  if (1.0 <= dVar2) {
    dVar5 = dVar2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  dVar2 = param_1[2] * 0.95 + ((dVar2 - dVar3) * (dVar2 - dVar3) * dVar6) / dVar5;
  dVar6 = 2.5;
  if (dVar2 < 2.5 != NAN(dVar2)) {
    dVar6 = dVar2;
  }
  if (dVar4 < dVar2) {
    dVar4 = dVar6;
  }
  param_1[2] = dVar4;
  return;
}


// ===== 008f38a0  FUN_008f38a0 =====

undefined1 FUN_008f38a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ===== 008f38ac  FUN_008f38ac =====

long FUN_008f38ac(double *param_1)

{
  double dVar1;
  
  if (((ulong)param_1[1] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  dVar1 = *param_1 * 1000.0;
  if (dVar1 == INFINITY) {
    return 0x7fffffffffffffff;
  }
  if (dVar1 == -INFINITY) {
    return -0x8000000000000000;
  }
  return (long)dVar1;
}


// ===== 008f3924  FUN_008f3924 =====

void FUN_008f3924(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 4) = param_3[1];
  *(undefined8 *)(param_1 + 2) = uVar1;
  return;
}


// ===== 008f3938  FUN_008f3938 =====

void FUN_008f3938(void)

{
  return;
}


// ===== 008f3940  FUN_008f3940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3940(long ***param_1,long *param_2)

{
  long **pplVar1;
  long **pplVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined *puVar7;
  long **local_150;
  long **pplStack_148;
  byte bStack_139;
  long **local_138;
  long **pplStack_130;
  long **local_128;
  long **pplStack_120;
  long **local_118;
  long **pplStack_110;
  long **local_108;
  long **pplStack_100;
  long **local_f8;
  long **pplStack_f0;
  long **local_e8;
  long **pplStack_e0;
  long **local_d8;
  long **pplStack_d0;
  long **local_c8;
  long **local_c0;
  long **pplStack_b8;
  long **local_b0;
  long **pplStack_a8;
  long **local_a0;
  long **pplStack_98;
  long **local_90;
  long **pplStack_88;
  long **local_80;
  long **pplStack_78;
  long **local_70;
  
  FUN_00661054(param_1,&DAT_001c93f1,2);
  pplVar1 = (long **)(PTR_DAT_00d52020 + 0x10);
  *param_1 = pplVar1;
  param_1[8] = (long **)0x4008000000000000;
  FUN_00661054(param_1 + 9,&DAT_001c0678,2);
  pplVar5 = _DAT_001f4050;
  pplVar2 = (long **)(PTR_DAT_00d520b0 + 0x10);
  param_1[0x12] = _UNK_001f4058;
  param_1[0x11] = pplVar5;
  param_1[9] = pplVar2;
  FUN_00661054(param_1 + 0x13,"step_size",9);
  param_1[0x13] = pplVar1;
  param_1[0x1b] = (long **)0x4000000000000000;
  FUN_00661054(param_1 + 0x1c,"further_probe_threshold",0x17);
  param_1[0x1c] = pplVar1;
  param_1[0x24] = (long **)0x3fe6666666666666;
  FUN_00661054(param_1 + 0x25,"abort_further",0xd);
  puVar7 = PTR_DAT_00d52090;
  *(undefined1 *)((long)param_1 + 0x161) = 0;
  param_1[0x25] = (long **)(puVar7 + 0x10);
  FUN_00661054(param_1 + 0x2d,"initial_probing",0xf);
  param_1[0x2d] = (long **)&PTR_FUN_00d267f8;
  param_1[0x35] = (long **)0x4c4b40;
  FUN_00661054(param_1 + 0x36,"initial_probe_duration",0x16);
  param_1[0x36] = (long **)&PTR_FUN_00d267f8;
  param_1[0x3e] = (long **)0x186a0;
  FUN_00661054(param_1 + 0x3f,"initial_min_probe_delta",0x17);
  param_1[0x3f] = (long **)&PTR_FUN_00d267f8;
  param_1[0x47] = (long **)0x4e20;
  FUN_00661054(param_1 + 0x48,"alr_interval",0xc);
  param_1[0x48] = (long **)&PTR_FUN_00d267f8;
  param_1[0x50] = (long **)0x4c4b40;
  FUN_00661054(param_1 + 0x51,"alr_scale",9);
  param_1[0x51] = pplVar1;
  param_1[0x59] = (long **)0x4000000000000000;
  FUN_00661054(param_1 + 0x5a,"network_state_interval",0x16);
  param_1[0x5a] = (long **)&PTR_FUN_00d267f8;
  param_1[0x62] = (long **)0x7fffffffffffffff;
  FUN_00661054(param_1 + 99,"est_lower_than_network_ratio",0x1c);
  param_1[99] = pplVar1;
  param_1[0x6b] = (long **)0x0;
  FUN_00661054(param_1 + 0x6c,"est_lower_than_network_interval",0x1f);
  param_1[0x6c] = (long **)&PTR_FUN_00d267f8;
  param_1[0x74] = (long **)0x2dc6c0;
  FUN_00661054(param_1 + 0x75,"network_state_scale",0x13);
  param_1[0x75] = pplVar1;
  param_1[0x7d] = (long **)0x3ff0000000000000;
  FUN_00661054(param_1 + 0x7e,"network_state_probe_duration",0x1c);
  param_1[0x7e] = (long **)&PTR_FUN_00d267f8;
  param_1[0x86] = (long **)0x3a98;
  FUN_00661054(param_1 + 0x87,"network_state_min_probe_delta",0x1d);
  param_1[0x87] = (long **)&PTR_FUN_00d267f8;
  param_1[0x8f] = (long **)0x4e20;
  FUN_00661054(param_1 + 0x90,"probe_max_allocation",0x14);
  param_1[0x90] = (long **)(puVar7 + 0x10);
  *(undefined1 *)((long)param_1 + 0x4b9) = 1;
  FUN_00661054(param_1 + 0x98,"alloc_p1",8);
  pplVar6 = _UNK_001f24b8;
  pplVar5 = _DAT_001f24b0;
  param_1[0x98] = pplVar2;
  param_1[0xa1] = pplVar6;
  param_1[0xa0] = pplVar5;
  FUN_00661054(param_1 + 0xa2,"alloc_p2",8);
  pplVar6 = _UNK_001f3eb8;
  pplVar5 = _DAT_001f3eb0;
  param_1[0xa2] = pplVar2;
  param_1[0xab] = pplVar6;
  param_1[0xaa] = pplVar5;
  FUN_00661054(param_1 + 0xac,"alloc_current_bwe_limit",0x17);
  param_1[0xac] = pplVar1;
  param_1[0xb4] = (long **)0x4000000000000000;
  FUN_00661054(param_1 + 0xb5,"min_probe_packets_sent",0x16);
  puVar7 = PTR_DAT_00d52028;
  *(undefined4 *)((long)param_1 + 0x5e4) = 5;
  param_1[0xb5] = (long **)(puVar7 + 0x10);
  FUN_00661054(param_1 + 0xbd,"min_probe_duration",0x12);
  param_1[0xbd] = (long **)&PTR_FUN_00d267f8;
  param_1[0xc5] = (long **)0x3a98;
  FUN_00661054(param_1 + 0xc6,"min_probe_delta",0xf);
  param_1[0xc6] = (long **)&PTR_FUN_00d267f8;
  param_1[0xce] = (long **)0x7d0;
  FUN_00661054(param_1 + 0xcf,"loss_limited_scale",0x12);
  param_1[0xcf] = pplVar1;
  param_1[0xd7] = (long **)0x3ff8000000000000;
  FUN_00661054(param_1 + 0xd8,"skip_if_est_larger_than_fraction_of_max",0x27);
  param_1[0xd8] = pplVar1;
  param_1[0xe0] = (long **)0x0;
  FUN_00661054(param_1 + 0xe1,"skip_max_allocated_scale",0x18);
  param_1[0xe9] = (long **)0x3ff0000000000000;
  pplStack_120 = (long **)(param_1 + 0x1c);
  local_118 = (long **)(param_1 + 0x25);
  pplStack_110 = (long **)(param_1 + 0x2d);
  local_108 = (long **)(param_1 + 0x36);
  pplStack_100 = (long **)(param_1 + 0x48);
  local_f8 = (long **)(param_1 + 0x51);
  pplStack_f0 = (long **)(param_1 + 0x90);
  local_e8 = (long **)(param_1 + 0x98);
  pplStack_e0 = (long **)(param_1 + 0xa2);
  local_d8 = (long **)(param_1 + 0xac);
  local_c0 = (long **)(param_1 + 0x3f);
  pplStack_b8 = (long **)(param_1 + 0x5a);
  local_b0 = (long **)(param_1 + 0x87);
  pplStack_a8 = (long **)(param_1 + 99);
  local_a0 = (long **)(param_1 + 0x6c);
  pplStack_98 = (long **)(param_1 + 0x75);
  local_90 = (long **)(param_1 + 0x7e);
  param_1[0xe1] = pplVar1;
  pplStack_88 = (long **)(param_1 + 0xb5);
  local_138 = (long **)param_1;
  pplStack_130 = (long **)(param_1 + 9);
  local_128 = (long **)(param_1 + 0x13);
  pplStack_d0 = (long **)(param_1 + 0xbd);
  local_c8 = (long **)(param_1 + 0xc6);
  local_80 = (long **)(param_1 + 0xcf);
  pplStack_78 = (long **)(param_1 + 0xd8);
  local_70 = (long **)(param_1 + 0xe1);
  (**(code **)(*param_2 + 0x10))(&local_150,param_2,"WebRTC-Bwe-ProbingConfiguration",0x1f);
  ppplVar3 = (long ***)local_150;
  if (-1 < (char)bStack_139) {
    pplStack_148 = (long **)(ulong)bStack_139;
    ppplVar3 = &local_150;
  }
  FUN_00661cc0(&local_138,0x1a,ppplVar3,pplStack_148);
  if ((char)bStack_139 < '\0') {
    operator_delete(local_150);
  }
  local_150 = (long **)param_1;
  pplStack_148 = (long **)(param_1 + 9);
  (**(code **)(*param_2 + 0x10))(&local_138,param_2,"WebRTC-Bwe-InitialProbing",0x19);
  ppplVar3 = (long ***)pplStack_130;
  ppplVar4 = (long ***)local_138;
  if (-1 < (long)local_128) {
    ppplVar3 = (long ***)((ulong)local_128 >> 0x38);
    ppplVar4 = &local_138;
  }
  FUN_00661cc0(&local_150,2,ppplVar4,ppplVar3);
  if ((long)local_128 < 0) {
    operator_delete(local_138);
  }
  local_150 = (long **)(param_1 + 0x13);
  pplStack_148 = (long **)(param_1 + 0x1c);
  (**(code **)(*param_2 + 0x10))(&local_138,param_2,"WebRTC-Bwe-ExponentialProbing",0x1d);
  ppplVar3 = (long ***)pplStack_130;
  ppplVar4 = (long ***)local_138;
  if (-1 < (long)local_128) {
    ppplVar3 = (long ***)((ulong)local_128 >> 0x38);
    ppplVar4 = &local_138;
  }
  FUN_00661cc0(&local_150,2,ppplVar4,ppplVar3);
  if ((long)local_128 < 0) {
    operator_delete(local_138);
  }
  local_138 = (long **)(param_1 + 0x48);
  pplStack_130 = (long **)(param_1 + 0x51);
  local_128 = (long **)(param_1 + 0xcf);
  (**(code **)(*param_2 + 0x10))(&local_150,param_2,"WebRTC-Bwe-AlrProbing",0x15);
  ppplVar3 = (long ***)pplStack_148;
  ppplVar4 = (long ***)local_150;
  if (-1 < (char)bStack_139) {
    ppplVar3 = (long ***)(ulong)bStack_139;
    ppplVar4 = &local_150;
  }
  FUN_00661cc0(&local_138,3,ppplVar4,ppplVar3);
  if ((char)bStack_139 < '\0') {
    operator_delete(local_150);
  }
  local_138 = (long **)(param_1 + 0x98);
  pplStack_130 = (long **)(param_1 + 0xa2);
  local_128 = (long **)(param_1 + 0xac);
  (**(code **)(*param_2 + 0x10))(&local_150,param_2,"WebRTC-Bwe-AllocationProbing",0x1c);
  ppplVar3 = (long ***)pplStack_148;
  ppplVar4 = (long ***)local_150;
  if (-1 < (char)bStack_139) {
    ppplVar3 = (long ***)(ulong)bStack_139;
    ppplVar4 = &local_150;
  }
  FUN_00661cc0(&local_138,3,ppplVar4,ppplVar3);
  if ((char)bStack_139 < '\0') {
    operator_delete(local_150);
  }
  local_150 = (long **)(param_1 + 0xb5);
  pplStack_148 = (long **)(param_1 + 0xbd);
  (**(code **)(*param_2 + 0x10))(&local_138,param_2,"WebRTC-Bwe-ProbingBehavior",0x1a);
  ppplVar3 = (long ***)pplStack_130;
  ppplVar4 = (long ***)local_138;
  if (-1 < (long)local_128) {
    ppplVar3 = (long ***)((ulong)local_128 >> 0x38);
    ppplVar4 = &local_138;
  }
  FUN_00661cc0(&local_150,2,ppplVar4,ppplVar3);
  if ((long)local_128 < 0) {
    operator_delete(local_138);
  }
  return;
}


// ===== 008f4044  FUN_008f4044 =====

void FUN_008f4044(long param_1)

{
  FUN_006634ac(param_1 + 0x708);
  FUN_006634ac(param_1 + 0x6c0);
  FUN_006634ac(param_1 + 0x678);
  FUN_006634ac(param_1 + 0x630);
  FUN_006634ac(param_1 + 0x5e8);
  FUN_006634ac(param_1 + 0x5a8);
  FUN_006634ac(param_1 + 0x560);
  FUN_006634ac(param_1 + 0x510);
  FUN_006634ac(param_1 + 0x4c0);
  FUN_006634ac(param_1 + 0x480);
  FUN_006634ac(param_1 + 0x438);
  FUN_006634ac(param_1 + 0x3f0);
  FUN_006634ac(param_1 + 0x3a8);
  FUN_006634ac(param_1 + 0x360);
  FUN_006634ac(param_1 + 0x318);
  FUN_006634ac(param_1 + 0x2d0);
  FUN_006634ac(param_1 + 0x288);
  FUN_006634ac(param_1 + 0x240);
  FUN_006634ac(param_1 + 0x1f8);
  FUN_006634ac(param_1 + 0x1b0);
  FUN_006634ac(param_1 + 0x168);
  FUN_006634ac(param_1 + 0x128);
  FUN_006634ac(param_1 + 0xe0);
  FUN_006634ac(param_1 + 0x98);
  FUN_006634ac(param_1 + 0x48);
  FUN_006634ac(param_1);
  return;
}


// ===== 008f4134  FUN_008f4134 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4134(undefined2 *param_1,long *param_2,undefined8 param_3)

{
  int ****ppppiVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int ***local_58;
  ulong local_50;
  byte bStack_41;
  
  *param_1 = 0;
  uVar3 = _UNK_001f47e8;
  uVar2 = _DAT_001f47e0;
  *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  uVar3 = _UNK_001f1c18;
  uVar2 = _DAT_001f1c10;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0x8000000000000000;
  (**(code **)(*param_2 + 0x10))(&local_58,param_2,"WebRTC-BweRapidRecoveryExperiment",0x21);
  bVar4 = false;
  if (-1 < (char)bStack_41) {
    local_50 = (ulong)bStack_41;
  }
  if (6 < local_50) {
    ppppiVar1 = (int ****)local_58;
    if (-1 < (char)bStack_41) {
      ppppiVar1 = &local_58;
    }
    bVar4 = *(int *)ppppiVar1 == 0x62616e45 && *(int *)((long)ppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  *(bool *)(param_1 + 0x8c) = bVar4;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  *(undefined4 *)(param_1 + 0x94) = 1;
  FUN_008f3940(param_1 + 0x98,param_2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  uVar2 = DAT_001f5360;
  *(undefined8 *)(param_1 + 0xc) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar2 = _DAT_001f47f0;
  *(undefined8 *)(param_1 + 100) = _UNK_001f47f8;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  return;
}


// ===== 008f42c0  FUN_008f42c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f42c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = DAT_001f5360;
  *(undefined8 *)(param_1 + 0x18) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  uVar1 = _DAT_001f47f0;
  *(undefined8 *)(param_1 + 200) = _UNK_001f47f8;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}


// ===== 008f4314  FUN_008f4314 =====

void FUN_008f4314(long param_1)

{
  FUN_008f4044(param_1 + 0x130);
  return;
}


// ===== 008f4320  FUN_008f4320 =====

void FUN_008f4320(undefined8 *param_1,char *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long *local_58;
  long *local_50;
  long *local_48;
  
  if (param_4 < 1) {
    if (*(long *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(param_2 + 0xc0) = param_3;
    }
  }
  else {
    *(long *)(param_2 + 0xc0) = param_4;
    *(long *)(param_2 + 0x28) = param_4;
  }
  lVar2 = *(long *)(param_2 + 200);
  if (0xfffffffffffffffd < param_5 + 0x7fffffffffffffffU) {
    param_5 = 5000000;
  }
  *(long *)(param_2 + 200) = param_5;
  if (*(int *)(param_2 + 0x14) == 2) {
    if (((*(long *)(param_2 + 0x28) != 0) && (lVar2 < param_5)) &&
       (*(long *)(param_2 + 0x28) < param_5)) {
      plVar1 = (long *)operator_new(8);
      local_50 = plVar1 + 1;
      local_58 = plVar1;
      local_48 = local_50;
      if (plVar1 != (long *)0x0) {
        *plVar1 = param_5;
        FUN_008f489c(param_1,param_2,param_6,&local_58,0);
        operator_delete(plVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
  }
  else if ((*(int *)(param_2 + 0x14) == 0) && (*param_2 == '\x01')) {
    FUN_008f447c(param_1,param_2,param_6);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 008f447c  FUN_008f447c =====

/* WARNING: Removing unreachable block (ram,0x008f4660) */
/* WARNING: Removing unreachable block (ram,0x008f45f8) */
/* WARNING: Removing unreachable block (ram,0x008f45dc) */
/* WARNING: Removing unreachable block (ram,0x008f4644) */
/* WARNING: Removing unreachable block (ram,0x008f46a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008f447c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  long *__src;
  ulong uVar4;
  void *__dest;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  long lVar11;
  double dVar12;
  void *local_128;
  void *local_120;
  void *local_118;
  undefined1 uStack_109;
  char *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  char *local_f0;
  char **ppcStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char **local_c8;
  char *local_c0;
  void **ppvStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  char **local_98;
  void *local_88;
  undefined8 uStack_80;
  long local_48;
  
  dVar12 = *(double *)(param_2 + 0x170);
  lVar11 = *(long *)(param_2 + 0xc0);
  local_48 = param_3;
  plVar3 = (long *)operator_new(8);
  if (plVar3 == (long *)0x0) {
LAB_008f4880:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  cVar2 = *(char *)(param_2 + 0x1c0);
  plVar5 = plVar3 + 1;
  *plVar3 = (long)(dVar12 * (double)lVar11);
  __src = plVar3;
  if (cVar2 == '\x01') {
    if ((*(uint *)(param_2 + 0x1c0) & 1) == 0) goto LAB_008f4898;
    dVar12 = *(double *)(param_2 + 0x1b8);
    if (dVar12 != 0.0 && dVar12 < 0.0 == NAN(dVar12)) {
      __src = (long *)operator_new(0x10);
      if (__src == (long *)0xfffffffffffffff8) goto LAB_008f4880;
      plVar5 = __src + 2;
      *__src = *plVar3;
      __src[1] = (long)(dVar12 * (double)lVar11);
      operator_delete(plVar3);
    }
  }
  if ((*(char *)(param_2 + 1) == '\x01') && (*(long *)(param_2 + 0x110) == 0)) {
    lVar11 = 0x7fffffffffffffff;
    if ((param_3 != 0x7fffffffffffffff) &&
       (lVar6 = *(long *)(param_2 + 0x2d8), lVar6 != 0x7fffffffffffffff)) {
      lVar11 = -0x8000000000000000;
      if (lVar6 != -0x8000000000000000 && param_3 != -0x8000000000000000) {
        lVar11 = param_3 + lVar6;
      }
    }
    *(long *)(param_2 + 8) = lVar11;
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      local_108 = "../../modules/congestion_controller/goog_cc/probe_controller.cc";
      local_100 = 0xa01;
      local_f8 = &uStack_109;
      ppcStack_e8 = &local_108;
      local_f0 = "Repeated initial probing enabled, last allowed probe: ";
      FUN_005f3500(&local_b0,(long *)(param_2 + 8));
      local_c8 = &local_f0;
      uStack_d8 = uStack_a8;
      local_e0 = local_b0;
      local_d0 = local_a0;
      ppvStack_b8 = &local_e0;
      local_c0 = " now: ";
      FUN_005f3500(&local_88,&local_48);
      local_98 = &local_c0;
      uStack_a8 = uStack_80;
      local_b0 = local_88;
                    /* WARNING: Load size is inaccurate */
      puVar1 = *(undefined8 **)((long)ppvStack_b8[3] + 8);
      FUN_00623bb0("\r\t\n\t\n",*puVar1,*(undefined4 *)(puVar1 + 1),*ppvStack_b8[3],ppvStack_b8,
                   local_c0,&local_b0);
      param_3 = local_48;
      if (local_d0 < 0) {
        operator_delete(local_e0);
        param_3 = local_48;
      }
    }
  }
  uVar4 = (long)plVar5 - (long)__src;
  local_128 = (void *)0x0;
  local_120 = (void *)0x0;
  local_118 = (void *)0x0;
  iVar8 = (int)__src;
  iVar9 = (int)plVar5;
  if (uVar4 == 0) {
    FUN_008f489c(param_1,param_2,param_3,&local_128,1);
  }
  else {
    if ((long)uVar4 < 0) {
      FUN_008a7328();
LAB_008f4898:
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    __dest = operator_new(uVar4);
    pvVar10 = (void *)((long)__dest + uVar4);
    local_128 = __dest;
    local_118 = pvVar10;
    memcpy(__dest,__src,uVar4);
    local_120 = pvVar10;
    FUN_008f489c(param_1,param_2,param_3,&local_128,1);
    if (__dest != (void *)0x0) {
      lVar11 = (long)__src + (-(long)__dest - (long)plVar5);
      uVar7 = (ulong)((long)plVar5 + ((long)__src << 0x3d) + (-(long)__src - ((long)plVar5 << 0x3d))
                     ) >> 3;
      uVar4 = ((lVar11 << 0x3d) - lVar11) - 8U >> 3;
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      if ((1 < uVar4) && (((iVar8 - iVar9 | (iVar8 - iVar9) - (int)__dest) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        pvVar10 = (void *)((long)pvVar10 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar10 == __dest) {
          operator_delete(__dest);
          goto joined_r0x008f4834;
        }
        pvVar10 = (void *)((long)pvVar10 + -8);
      } while (pvVar10 != (void *)0x0);
      goto LAB_008f4814;
    }
  }
joined_r0x008f4834:
  if (__src == (long *)0x0) {
    return;
  }
  uVar7 = (ulong)((long)plVar5 + (-8 - ((long)plVar5 << 0x3d))) >> 3;
  uVar4 = (ulong)(((long)__src - (long)plVar5 << 0x3d) - ((long)__src - (long)plVar5)) >> 3;
  if (uVar7 <= uVar4) {
    uVar4 = uVar7;
  }
  if ((1 < uVar4) && (((iVar8 - iVar9 | -iVar9) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    plVar5 = plVar5 + -uVar4;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (plVar5 == __src) {
      operator_delete(__src);
      return;
    }
    plVar5 = plVar5 + -1;
  } while (plVar5 != (long *)0x0);
LAB_008f4814:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008f489c  FUN_008f489c =====

void FUN_008f489c(ulong *param_1,long param_2,long param_3,undefined8 *param_4,byte param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  double dVar14;
  ulong local_98;
  long local_88;
  ulong uStack_80;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  int iStack_64;
  
  dVar14 = *(double *)(param_2 + 0x830);
  if (dVar14 == 0.0 || dVar14 < 0.0 != NAN(dVar14)) {
    lVar9 = *(long *)(param_2 + 0x110);
  }
  else {
    if (*(char *)(param_2 + 0xb8) == '\x01') {
      lVar11 = *(long *)(param_2 + 0x60);
      lVar9 = *(long *)(param_2 + 0x110);
      if (lVar9 == 0) goto LAB_008f4934;
LAB_008f48f4:
      local_88 = (long)(*(double *)(param_2 + 0x878) * (double)lVar9);
      plVar7 = (long *)(param_2 + 200);
      if (local_88 <= *(long *)(param_2 + 200)) {
        plVar7 = &local_88;
      }
    }
    else {
      lVar11 = 0x7fffffffffffffff;
      lVar9 = *(long *)(param_2 + 0x110);
      if (lVar9 != 0) goto LAB_008f48f4;
LAB_008f4934:
      plVar7 = (long *)(param_2 + 200);
    }
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar11 <= *(long *)(param_2 + 0x28)) {
      lVar1 = lVar11;
    }
    if ((long)(dVar14 * (double)*plVar7) < lVar1) {
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_2 + 0x14) = 2;
      *(undefined8 *)(param_2 + 0x18) = 0x7fffffffffffffff;
      *param_1 = 0;
      return;
    }
  }
  uVar12 = *(ulong *)(param_2 + 200);
  iVar4 = *(int *)(param_2 + 0x10);
  uVar6 = lVar9 * 2;
  if ((long)uVar12 <= lVar9 * 2) {
    uVar6 = uVar12;
  }
  if (lVar9 < 1) {
    uVar6 = uVar12;
  }
  if (iVar4 - 3U < 2) {
LAB_008f49b0:
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/congestion_controller/goog_cc/probe_controller.cc",
                   0x1221,"Not sending probe in bandwidth limited state. ",
                   *(undefined4 *)(param_2 + 0x10));
    }
LAB_008f49dc:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (iVar4 == 0) {
      local_98 = (ulong)(*(double *)(param_2 + 0x7e8) * (double)*(long *)(param_2 + 0x28));
      if ((long)uVar6 <= (long)local_98) {
        local_98 = uVar6;
      }
    }
    else {
      local_98 = uVar6;
      if (iVar4 == 1) goto LAB_008f49b0;
    }
    uVar6 = local_98;
    if (((*(long *)(param_2 + 0x440) + 0x7fffffffffffffffU < 0xfffffffffffffffe) &&
        (*(char *)(param_2 + 0xb8) == '\x01')) &&
       (lVar9 = *(long *)(param_2 + 0x60), lVar9 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
      if (lVar9 == 0) {
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,
                       "../../modules/congestion_controller/goog_cc/probe_controller.cc",0x12a9,
                       "Not sending probe, Network state estimate is zero");
        }
        goto LAB_008f49dc;
      }
      uVar12 = (ulong)(*(double *)(param_2 + 0x518) * (double)lVar9);
      uVar6 = *(ulong *)(param_2 + 0x28);
      if ((long)*(ulong *)(param_2 + 0x28) <= (long)uVar12) {
        uVar6 = uVar12;
      }
      if ((long)local_98 <= (long)uVar6) {
        uVar6 = local_98;
      }
    }
    local_98 = uVar6;
    puVar2 = (ulong *)*param_4;
    puVar3 = (ulong *)param_4[1];
    plVar7 = (long *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      uVar12 = *puVar2;
      uVar6 = uVar12;
      if ((long)local_98 <= (long)uVar12) {
        uVar6 = local_98;
      }
      if (((*(char *)(param_2 + 0xb8) == '\x01') &&
          (*(long *)(param_2 + 0x440) + 0x7fffffffffffffffU < 0xfffffffffffffffe)) &&
         ((*(long *)(param_2 + 0x60) + 0x7fffffffffffffffU < 0xfffffffffffffffe &&
          ((long)uVar6 <= *(long *)(param_2 + 0x60))))) {
        lVar9 = 0x560;
        lVar11 = 0x5a8;
      }
      else {
        lVar9 = 800;
        if (*(long *)(param_2 + 8) <= param_3) {
          lVar9 = 0x758;
        }
        lVar11 = 0x368;
        if (*(long *)(param_2 + 8) <= param_3) {
          lVar11 = 0x7a0;
        }
      }
      local_78 = *(long *)(param_2 + lVar9);
      lStack_70 = *(long *)(param_2 + lVar11);
      iVar4 = *(int *)(param_2 + 0x128);
      uVar5 = *(undefined4 *)(param_2 + 0x714);
      plVar13 = *(long **)(param_2 + 0x120);
      *(int *)(param_2 + 0x128) = iVar4 + 1;
      local_88 = param_3;
      uStack_80 = uVar6;
      local_68 = uVar5;
      iStack_64 = iVar4;
      if (plVar13 != (long *)0x0) {
        uVar10 = SUB168(SEXT816((long)(&uleb128_003d0900 + local_78 * uVar6)) *
                        SEXT816(0x431bde82d7b634db),8);
        pvVar8 = operator_new(0x20);
        FUN_008f5d18(pvVar8,iVar4,uVar6 & 0xffffffff,uVar5,
                     (uVar10 >> 0x15) - ((long)uVar10 >> 0x3f) & 0xffffffff);
        (**(code **)(*plVar13 + 0x28))(plVar13,pvVar8);
        plVar7 = (long *)param_1[1];
      }
      if (plVar7 < (long *)param_1[2]) {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar7[4] = CONCAT44(iStack_64,local_68);
        plVar7[1] = uStack_80;
        *plVar7 = local_88;
        plVar7[3] = lStack_70;
        plVar7[2] = local_78;
        plVar7 = plVar7 + 5;
      }
      else {
        plVar7 = (long *)FUN_008f5bf4(param_1,&local_88);
      }
      param_5 = (long)uVar12 < (long)local_98 & param_5;
      param_1[1] = (ulong)plVar7;
    }
    *(long *)(param_2 + 0x20) = param_3;
    if ((param_5 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x14) = 2;
      *(undefined8 *)(param_2 + 0x18) = 0x7fffffffffffffff;
    }
    else {
      plVar13 = (long *)*param_1;
      *(undefined4 *)(param_2 + 0x14) = 1;
      if (plVar13 == plVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                  );
      }
      *(long *)(param_2 + 0x18) = (long)(*(double *)(param_2 + 0x250) * (double)plVar7[-4]);
    }
  }
  return;
}


// ===== 008f4cbc  FUN_008f4cbc =====

void FUN_008f4cbc(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (param_3 >> 0x3d != 0) {
      puVar2 = (undefined8 *)FUN_008a7328();
      pvVar4 = (void *)*puVar2;
      if (pvVar4 == (void *)0x0) {
        return;
      }
      pvVar8 = (void *)puVar2[1];
      uVar5 = (ulong)((long)pvVar8 + (-8 - ((long)pvVar8 << 0x3d))) >> 3;
      uVar9 = (ulong)(((long)pvVar4 - (long)pvVar8 << 0x3d) - ((long)pvVar4 - (long)pvVar8)) >> 3;
      if (uVar5 <= uVar9) {
        uVar9 = uVar5;
      }
      if ((1 < uVar9) && ((((int)pvVar4 - (int)pvVar8 | -(int)pvVar8) & 7U) == 0)) {
        uVar9 = uVar9 & 0x1ffffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar9 * -8);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (pvVar8 == pvVar4) {
          puVar2[1] = pvVar4;
          operator_delete(pvVar4);
          return;
        }
        pvVar8 = (void *)((long)pvVar8 + -8);
      } while (pvVar8 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puVar2 = (undefined8 *)operator_new(param_3 * 8);
    uVar5 = param_3 * 8 - 8 >> 3;
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + param_3;
    uVar9 = (ulong)-(long)puVar2 >> 3;
    if (uVar5 <= (ulong)-(long)puVar2 >> 3) {
      uVar9 = uVar5;
    }
    puVar6 = param_2;
    if (0x25 < uVar9) {
      uVar10 = (ulong)-(long)puVar2 >> 3;
      if (uVar5 <= uVar10) {
        uVar10 = uVar5;
      }
      if (((((-(long)puVar2 & 7U) == 0) && (puVar2 <= puVar2 + uVar10)) &&
          (param_2 <= param_2 + uVar10)) && (0x1f < (ulong)((long)puVar2 - (long)param_2))) {
        puVar3 = puVar2 + 2;
        uVar5 = uVar9 + 1 & 3;
        puVar11 = param_2 + 2;
        uVar10 = 4;
        if (uVar5 != 0) {
          uVar10 = uVar5;
        }
        lVar7 = (uVar9 + 1) - uVar10;
        puVar6 = param_2 + lVar7;
        puVar2 = puVar2 + lVar7;
        do {
          puVar1 = puVar11 + -1;
          uVar12 = puVar11[-2];
          uVar14 = puVar11[1];
          uVar13 = *puVar11;
          lVar7 = lVar7 + -4;
          puVar11 = puVar11 + 4;
          puVar3[-1] = *puVar1;
          puVar3[-2] = uVar12;
          puVar3[1] = uVar14;
          *puVar3 = uVar13;
          puVar3 = puVar3 + 4;
        } while (lVar7 != 0);
      }
    }
    puVar3 = puVar2;
    do {
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar11 = puVar6 + 1;
      puVar2 = puVar2 + 1;
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
      puVar6 = puVar11;
    } while (puVar11 != param_2 + param_3);
    param_1[1] = puVar2;
  }
  return;
}


// ===== 008f4e08  FUN_008f4e08 =====

void FUN_008f4e08(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[1] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -8);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008f4eb0  FUN_008f4eb0 =====

void FUN_008f4eb0(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  long local_48;
  
  if ((((*(char *)(param_2 + 0x5e9) == '\x01') && (*(int *)(param_2 + 0x14) == 2)) &&
      (param_3 != *(long *)(param_2 + 0x110))) &&
     (((lVar1 = *(long *)(param_2 + 0x28), lVar1 < *(long *)(param_2 + 200) && (lVar1 < param_3)) &&
      (*(char *)(param_2 + 0xe0) != '\0')))) {
    *(long *)(param_2 + 0x110) = param_3;
    if ((*(byte *)(param_2 + 0x638) & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      bVar3 = true;
      lVar4 = (long)(*(double *)(param_2 + 0x630) * (double)param_3);
      lVar1 = (long)(*(double *)(param_2 + 0x6d0) * (double)lVar1);
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_48 = lVar1;
      if (lVar4 <= lVar1) {
        local_48 = lVar4;
      }
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_008f4cbc(&local_70,&local_48,1);
      if (lVar4 <= lVar1) {
        if (*(char *)(param_2 + 0x688) == '\x01') {
          lVar2 = (long)(*(double *)(param_2 + 0x680) * (double)param_3);
          local_48 = lVar1;
          if (lVar2 <= lVar1) {
            local_48 = lVar2;
          }
          bVar3 = lVar1 < lVar2;
          if (lVar4 < local_48) {
            FUN_008f5b0c(&local_70,&local_48);
          }
        }
        else {
          bVar3 = false;
        }
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      FUN_008f5b74(&local_88,local_70,puStack_68,(long)puStack_68 - (long)local_70 >> 3);
      FUN_008f489c(param_1,param_2,param_4,&local_88,bVar3);
      FUN_008f4e08(&local_88);
      FUN_008f4e08(&local_70);
    }
  }
  else {
    if (param_3 != 0) {
      *(undefined8 *)(param_2 + 8) = param_4;
    }
    *(long *)(param_2 + 0x110) = param_3;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}


// ===== 008f504c  FUN_008f504c =====

void FUN_008f504c(undefined8 *param_1,byte *param_2,undefined8 param_3,byte param_4)

{
  *param_2 = param_4 & 1;
  if ((param_4 & 1) == 0) {
    if (*(int *)(param_2 + 0x14) == 1) {
      param_2[0x14] = 2;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[0x18] = 0xff;
      param_2[0x19] = 0xff;
      param_2[0x1a] = 0xff;
      param_2[0x1b] = 0xff;
      param_2[0x1c] = 0xff;
      param_2[0x1d] = 0xff;
      param_2[0x1e] = 0xff;
      param_2[0x1f] = 0x7f;
    }
  }
  else if ((*(int *)(param_2 + 0x14) == 0) && (*(long *)(param_2 + 0xc0) != 0)) {
    FUN_008f447c();
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 008f5094  FUN_008f5094 =====

/* WARNING: Removing unreachable block (ram,0x008f52c4) */
/* WARNING: Removing unreachable block (ram,0x008f525c) */
/* WARNING: Removing unreachable block (ram,0x008f51f4) */
/* WARNING: Removing unreachable block (ram,0x008f51d8) */
/* WARNING: Removing unreachable block (ram,0x008f5240) */
/* WARNING: Removing unreachable block (ram,0x008f52a8) */
/* WARNING: Removing unreachable block (ram,0x008f53bc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008f5094(undefined8 *param_1,long param_2,long param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  double dVar6;
  long *local_148;
  long *local_140;
  long *local_138;
  undefined1 uStack_129;
  char *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  char *local_110;
  char **ppcStack_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  char **local_e8;
  char *local_e0;
  void **ppvStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  char **local_b8;
  char *local_b0;
  void **ppvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char **local_88;
  long local_78;
  long local_70;
  void *local_68;
  undefined8 uStack_60;
  
  dVar6 = DAT_001f57a0;
  *(undefined4 *)(param_2 + 0x10) = param_4;
  if (param_3 < (long)((double)*(long *)(param_2 + 0x28) * dVar6)) {
    *(undefined8 *)(param_2 + 0x100) = param_5;
    *(long *)(param_2 + 0x108) = *(long *)(param_2 + 0x28);
  }
  *(long *)(param_2 + 0x28) = param_3;
  if (*(int *)(param_2 + 0x14) == 1) {
    if ((*(char *)(param_2 + 0x291) == '\x01') &&
       ((*(long *)(param_2 + 200) < param_3 ||
        ((lVar4 = *(long *)(param_2 + 0x110), lVar4 != 0 &&
         (param_3 != lVar4 * 2 && param_3 + lVar4 * -2 < 0 == SBORROW8(param_3,lVar4 * 2))))))) {
      *(undefined8 *)(param_2 + 0x18) = 0x7fffffffffffffff;
    }
    lVar4 = 0x7fffffffffffffff;
    if (((*(long *)(param_2 + 0x440) + 0x7fffffffffffffffU < 0xfffffffffffffffe) &&
        (*(char *)(param_2 + 0xb8) == '\x01')) &&
       (*(long *)(param_2 + 0x60) + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
      lVar4 = (long)(*(double *)(param_2 + 0x250) * (double)*(long *)(param_2 + 0x60));
    }
    local_78 = lVar4;
    local_70 = param_3;
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      local_128 = "../../modules/congestion_controller/goog_cc/probe_controller.cc";
      local_120 = 0xb21;
      local_118 = &uStack_129;
      ppcStack_108 = &local_128;
      local_110 = "Measured bitrate: ";
      FUN_008ee354(&local_a0,&local_70);
      local_e8 = &local_110;
      uStack_f8 = uStack_98;
      local_100 = local_a0;
      local_f0 = local_90;
      ppvStack_d8 = &local_100;
      local_e0 = " Minimum to probe further: ";
      FUN_008ee354(&local_a0,param_2 + 0x18);
      local_b8 = &local_e0;
      uStack_c8 = uStack_98;
      local_d0 = local_a0;
      local_c0 = local_90;
      ppvStack_a8 = &local_d0;
      local_b0 = " upper limit: ";
      FUN_008ee354(&local_68,&local_78);
      local_88 = &local_b0;
      uStack_98 = uStack_60;
      local_a0 = local_68;
                    /* WARNING: Load size is inaccurate */
      lVar4 = *(long *)((long)ppvStack_a8[3] + 8);
      puVar5 = *(undefined8 **)(lVar4 + 0x18);
      puVar1 = (undefined8 *)puVar5[1];
      FUN_00623bb0("\r\t\n\t\n\t\n",*puVar1,*(undefined4 *)(puVar1 + 1),*puVar5,lVar4,
                   *ppvStack_a8[3],ppvStack_a8,local_b0,&local_a0);
      param_3 = local_70;
      if (local_c0 < 0) {
        operator_delete(local_d0);
        param_3 = local_70;
      }
      lVar4 = local_78;
      local_70 = param_3;
      if (local_f0 < 0) {
        operator_delete(local_100);
        param_3 = local_70;
        lVar4 = local_78;
      }
    }
    if ((*(long *)(param_2 + 0x18) < param_3) && (param_3 <= lVar4)) {
      dVar6 = *(double *)(param_2 + 0x208);
      plVar3 = (long *)operator_new(8);
      local_140 = plVar3 + 1;
      local_148 = plVar3;
      local_138 = local_140;
      if (plVar3 != (long *)0x0) {
        *plVar3 = (long)(dVar6 * (double)param_3);
        FUN_008f489c(param_1,param_2,param_5,&local_148,1);
        operator_delete(plVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 008f5414  FUN_008f5414 =====

void FUN_008f5414(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf8) = param_2;
  return;
}


// ===== 008f5420  FUN_008f5420 =====

void FUN_008f5420(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}


// ===== 008f542c  FUN_008f542c =====

void FUN_008f542c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  *(undefined1 *)(param_1 + 0xe0) = param_3;
  return;
}


// ===== 008f543c  FUN_008f543c =====

void FUN_008f543c(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined8 *)(param_1 + 0xe8) = param_2;
    return;
  }
  if ((undefined8 *)(param_1 + 0xe8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = param_2;
    *(undefined1 *)(param_1 + 0xf0) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f548c  FUN_008f548c =====

void FUN_008f548c(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *local_58;
  long *local_50;
  long *local_48;
  
  if ((((((*(char *)(param_2 + 0xf0) != '\x01') || (param_3 == 0x7fffffffffffffff)) ||
        (lVar5 = *(long *)(param_2 + 0xe8), lVar5 == -0x8000000000000000)) ||
       (((param_3 != -0x8000000000000000 && (lVar5 != 0x7fffffffffffffff)) &&
        (2999999 < param_3 - lVar5)))) &&
      (((*(byte *)(param_2 + 0xe0) & 1) == 0 && (*(char *)(param_2 + 0x118) != '\x01')))) ||
     (*(int *)(param_2 + 0x14) != 2)) {
LAB_008f55e8:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  bVar1 = false;
  lVar5 = (long)((double)*(long *)(param_2 + 0x108) * 0.85);
  if ((param_3 != 0x7fffffffffffffff) &&
     (lVar6 = *(long *)(param_2 + 0x100), lVar6 != -0x8000000000000000)) {
    bVar1 = (param_3 == -0x8000000000000000 || lVar6 == 0x7fffffffffffffff) ||
            param_3 - lVar6 < 5000000;
  }
  bVar2 = true;
  if ((param_3 != 0x7fffffffffffffff) &&
     (lVar6 = *(long *)(param_2 + 0xd0), lVar6 != -0x8000000000000000)) {
    bVar2 = ((param_3 != -0x8000000000000000 && lVar6 != 0x7fffffffffffffff) &&
            param_3 - lVar6 != 5000000) &&
            ((param_3 == -0x8000000000000000 || lVar6 == 0x7fffffffffffffff) ||
            4999999 < param_3 - lVar6);
  }
  if (!(bool)(*(long *)(param_2 + 0x28) < (long)((double)lVar5 * 0.95) & bVar1) || !bVar2)
  goto LAB_008f55e8;
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/probe_controller.cc",
                 0xcc1,"Detected big bandwidth drop, start probing.");
  }
  lVar6 = DAT_00d80468;
  if (DAT_00d80468 == 0) {
    lVar6 = FUN_006660d0("WebRTC.BWE.BweDropProbingIntervalInS",0x24,1,10000,0x32);
    FUN_00d0f5e0(0,lVar6,&DAT_00d80468);
    if (lVar6 == 0) goto LAB_008f5724;
  }
  uVar3 = 0x7fffffffffffffff;
  if (param_3 == 0x7fffffffffffffff) {
LAB_008f56c4:
    uVar7 = uVar3 / 1000000;
    if (499999 < uVar3 % 1000000) {
      uVar7 = uVar7 + 1;
    }
  }
  else {
    lVar8 = *(long *)(param_2 + 0xd0);
    uVar7 = 0x8000000000000000;
    if ((lVar8 == -0x8000000000000000) ||
       (((param_3 != -0x8000000000000000 && (lVar8 != 0x7fffffffffffffff)) &&
        (uVar7 = param_3 - lVar8, uVar3 = uVar7, -1 < (long)uVar7)))) goto LAB_008f56c4;
    uVar7 = -(-uVar7 / 1000000) - (ulong)(500000 < -uVar7 % 1000000);
  }
  FUN_00666568(lVar6,uVar7);
LAB_008f5724:
  *(long *)(param_2 + 0xd0) = param_3;
  plVar4 = (long *)operator_new(8);
  local_50 = plVar4 + 1;
  local_58 = plVar4;
  local_48 = local_50;
  if (plVar4 != (long *)0x0) {
    *plVar4 = lVar5;
    FUN_008f489c(param_1,param_2,param_3,&local_58,0);
    operator_delete(plVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f579c  FUN_008f579c =====

void FUN_008f579c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    *(undefined8 *)(param_1 + 0x58) = param_2[5];
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    *puVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    uVar4 = param_2[0xc];
    uVar3 = param_2[0xf];
    uVar2 = param_2[0xe];
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    *(undefined8 *)(param_1 + 0x98) = param_2[0xd];
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    *(undefined8 *)(param_1 + 0xb0) = param_2[0x10];
    return;
  }
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    *(undefined8 *)(param_1 + 0x58) = param_2[5];
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    *puVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    uVar4 = param_2[0xc];
    uVar3 = param_2[0xf];
    uVar2 = param_2[0xe];
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    *(undefined8 *)(param_1 + 0x98) = param_2[0xd];
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    *(undefined8 *)(param_1 + 0xb0) = param_2[0x10];
    *(undefined1 *)(param_1 + 0xb8) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f5834  FUN_008f5834 =====

void FUN_008f5834(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  pplVar3 = &local_70;
  if ((((param_3 == 0x7fffffffffffffff) ||
       (lVar4 = *(long *)(param_2 + 0x20), lVar4 == -0x8000000000000000)) ||
      ((param_3 != -0x8000000000000000 &&
       ((lVar4 != 0x7fffffffffffffff && (1000000 < param_3 - lVar4)))))) &&
     (*(int *)(param_2 + 0x14) == 1)) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/probe_controller.cc",
                   0xf99,"kWaitingForProbingResult: timeout");
    }
    *(undefined4 *)(param_2 + 0x14) = 2;
    *(undefined8 *)(param_2 + 0x18) = 0x7fffffffffffffff;
  }
  lVar4 = *(long *)(param_2 + 0x28);
  if ((lVar4 == 0) || (*(int *)(param_2 + 0x14) != 2)) goto LAB_008f5a2c;
  if (((param_3 < *(long *)(param_2 + 8)) &&
      (lVar5 = *(long *)(param_2 + 0x20), lVar5 != 0x7fffffffffffffff)) &&
     ((lVar5 == -0x8000000000000000 || (lVar5 + 1000000 <= param_3)))) {
    dVar8 = *(double *)(param_2 + 0x170);
    plVar2 = (long *)operator_new(8);
    local_50 = plVar2 + 1;
    local_58 = plVar2;
    local_48 = local_50;
    if (plVar2 == (long *)0x0) goto LAB_008f5af8;
    pplVar3 = &local_58;
    goto LAB_008f5ab0;
  }
  if ((*(char *)(param_2 + 0xf8) == '\x01') && (*(char *)(param_2 + 0xe0) == '\x01')) {
    lVar5 = *(long *)(param_2 + 0xd8);
    if (*(long *)(param_2 + 0xd8) <= *(long *)(param_2 + 0x20)) {
      lVar5 = *(long *)(param_2 + 0x20);
    }
    lVar6 = 0x7fffffffffffffff;
    if ((lVar5 != 0x7fffffffffffffff) &&
       (lVar7 = *(long *)(param_2 + 0x3b0), lVar7 != 0x7fffffffffffffff)) {
      lVar6 = -0x8000000000000000;
      if (lVar7 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
        lVar6 = lVar5 + lVar7;
      }
    }
    if (param_3 < lVar6) goto LAB_008f5990;
  }
  else {
LAB_008f5990:
    if (((*(char *)(param_2 + 0xb8) != '\x01') ||
        (lVar5 = *(long *)(param_2 + 0x60), lVar5 + 0x8000000000000001U < 2)) ||
       (((*(int *)(param_2 + 0x10) != 2 ||
         (((long)(*(double *)(param_2 + 0x488) * (double)lVar5) <= lVar4 ||
          (lVar6 = *(long *)(param_2 + 0x4d0), 0xfffffffffffffffd < lVar6 + 0x7fffffffffffffffU))))
        && ((lVar5 <= lVar4 ||
            (lVar6 = *(long *)(param_2 + 0x440), 0xfffffffffffffffd < lVar6 + 0x7fffffffffffffffU)))
        ))) {
LAB_008f5a2c:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    lVar7 = *(long *)(param_2 + 0x20);
    lVar5 = lVar7;
    if (lVar7 != -0x8000000000000000) {
      lVar5 = lVar7 + lVar6;
    }
    if (lVar7 != 0x7fffffffffffffff) {
      lVar7 = lVar5;
    }
    if (param_3 < lVar7) goto LAB_008f5a2c;
  }
  dVar8 = *(double *)(param_2 + 0x3f8);
  plVar2 = (long *)operator_new(8);
  local_68 = plVar2 + 1;
  local_70 = plVar2;
  local_60 = local_68;
  if (plVar2 == (long *)0x0) {
LAB_008f5af8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
LAB_008f5ab0:
  *plVar2 = (long)(dVar8 * (double)lVar4);
  FUN_008f489c(param_1,param_2,param_3,pplVar3,1);
  operator_delete(plVar2);
  return;
}


// ===== 008f5b0c  FUN_008f5b0c =====

undefined8 * FUN_008f5b0c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = (undefined8 *)FUN_008a7340(param_1);
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  return puVar2 + -1;
}


// ===== 008f5b74  FUN_008f5b74 =====

undefined8 * FUN_008f5b74(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t __n;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void *__dest;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = param_1;
  if (param_4 != 0) {
    if (param_4 >> 0x3d != 0) {
      auVar13 = FUN_008a7328();
      puVar5 = auVar13._8_8_;
      plVar3 = auVar13._0_8_;
      puVar2 = (undefined8 *)(plVar3[1] - *plVar3);
      uVar6 = ((long)puVar2 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar6) {
        FUN_00870980();
LAB_008f5d14:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      lVar7 = plVar3[2] - *plVar3 >> 3;
      uVar8 = lVar7 * -0x6666666666666666;
      if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
        uVar8 = uVar6;
      }
      if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
        uVar8 = 0x666666666666666;
      }
      if (uVar8 == 0) {
        pvVar1 = (void *)0x0;
      }
      else {
        if (0x666666666666666 < uVar8) goto LAB_008f5d14;
        pvVar1 = operator_new(uVar8 * 0x28);
        puVar2 = (undefined8 *)((long)pvVar1 + (long)puVar2);
      }
      if (puVar2 != (undefined8 *)0x0) {
        uVar12 = puVar5[1];
        uVar11 = *puVar5;
        uVar10 = puVar5[3];
        uVar9 = puVar5[2];
        puVar2[4] = puVar5[4];
        puVar2[1] = uVar12;
        *puVar2 = uVar11;
        puVar2[3] = uVar10;
        puVar2[2] = uVar9;
        __n = plVar3[1] - *plVar3;
        __dest = (void *)((long)puVar2 - __n);
        memcpy(__dest,(void *)*plVar3,__n);
        pvVar4 = (void *)*plVar3;
        *plVar3 = (long)__dest;
        plVar3[1] = (long)(puVar2 + 5);
        plVar3[2] = (long)((long)pvVar1 + uVar8 * 0x28);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
        }
        return puVar2 + 5;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    pvVar1 = operator_new(param_4 * 8);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_4 * 8);
    puVar2 = (undefined8 *)memcpy(pvVar1,param_2,param_3 - (long)param_2);
    param_1[1] = (long)pvVar1 + (param_3 - (long)param_2);
  }
  return puVar2;
}


// ===== 008f5bf4  FUN_008f5bf4 =====

undefined8 * FUN_008f5bf4(long *param_1,undefined8 *param_2)

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
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar3) {
    FUN_00870980();
LAB_008f5d14:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * -0x6666666666666666;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar5 = 0x666666666666666;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar5) goto LAB_008f5d14;
    pvVar1 = operator_new(uVar5 * 0x28);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    puVar6[4] = param_2[4];
    puVar6[1] = uVar10;
    *puVar6 = uVar9;
    puVar6[3] = uVar8;
    puVar6[2] = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 5);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x28);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar6 + 5;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f5d18  FUN_008f5d18 =====

void FUN_008f5d18(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *param_1 = &PTR_FUN_00d3d108;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((long)param_1 + 0x1c) = param_5;
  return;
}


// ===== 008f5d34  FUN_008f5d34 =====

void FUN_008f5d34(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008f5d40  FUN_008f5d40 =====

undefined8 FUN_008f5d40(void)

{
  return 0xe;
}


// ===== 008f5d4c  FUN_008f5d4c =====

undefined8 FUN_008f5d4c(void)

{
  return 0;
}


// ===== 008f5d58  FUN_008f5d58 =====

void FUN_008f5d58(undefined1 *param_1,long *param_2)

{
  int *****pppppiVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 extraout_w1;
  int ****local_88;
  ulong local_80;
  byte bStack_71;
  
  (**(code **)(*param_2 + 0x10))
            (&local_88,param_2,"WebRTC-AddPacingToCongestionWindowPushback",0x2a);
  if (-1 < (char)bStack_71) {
    local_80 = (ulong)bStack_71;
  }
  if (local_80 < 7) {
    bVar2 = false;
  }
  else {
    pppppiVar1 = (int *****)local_88;
    if (-1 < (char)bStack_71) {
      pppppiVar1 = &local_88;
    }
    bVar2 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_71 < '\0') {
    operator_delete(local_88);
  }
  *param_1 = bVar2;
  FUN_008a5364(&local_88,param_2);
  uVar3 = FUN_008a5750(&local_88);
  FUN_008a56ec(&local_88);
  *(undefined4 *)(param_1 + 4) = uVar3;
  FUN_008a5364(&local_88,param_2);
  uVar4 = FUN_008a5774(&local_88);
  *(undefined8 *)(param_1 + 8) = uVar4;
  param_1[0x10] = extraout_w1;
  FUN_008a56ec(&local_88);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  return;
}


// ===== 008f5e78  FUN_008f5e78 =====

void FUN_008f5e78(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 008f5e84  FUN_008f5e84 =====

void FUN_008f5e84(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 008f5e90  FUN_008f5e90 =====

void FUN_008f5e90(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined8 *)(param_1 + 8) = param_2;
    return;
  }
  if ((undefined8 *)(param_1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f5ee0  FUN_008f5ee0 =====

uint FUN_008f5ee0(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  if (param_1[0x10] != '\x01') {
    return param_2;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return param_2;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (*param_1 == '\x01') {
    lVar3 = *(long *)(param_1 + 0x20) + lVar3;
  }
  dVar4 = (double)lVar3 / (double)*(long *)(param_1 + 8);
  if (dVar4 == 1.5 || dVar4 < 1.5 != NAN(dVar4)) {
    if (dVar4 == 1.0 || dVar4 < 1.0 != NAN(dVar4)) {
      if (dVar4 < DAT_001f5930) {
        dVar4 = 1.0;
        param_1[0x28] = '\0';
        param_1[0x29] = '\0';
        param_1[0x2a] = '\0';
        param_1[0x2b] = '\0';
        param_1[0x2c] = '\0';
        param_1[0x2d] = '\0';
        param_1[0x2e] = -0x10;
        param_1[0x2f] = '?';
        goto LAB_008f5fa8;
      }
      dVar5 = *(double *)(param_1 + 0x28) * DAT_001f5058;
      dVar4 = 1.0;
      if (dVar5 == 1.0 || dVar5 < 1.0 != NAN(dVar5)) {
        dVar4 = dVar5;
      }
    }
    else {
      dVar4 = *(double *)(param_1 + 0x28) * 0.95;
    }
  }
  else {
    dVar4 = *(double *)(param_1 + 0x28) * DAT_001f5000;
  }
  *(double *)(param_1 + 0x28) = dVar4;
LAB_008f5fa8:
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = uVar1;
  if (param_2 <= uVar1) {
    uVar2 = param_2;
  }
  if (uVar1 <= (uint)(int)(dVar4 * (double)param_2)) {
    uVar2 = (int)(dVar4 * (double)param_2);
  }
  return uVar2;
}


// ===== 008f5fcc  FUN_008f5fcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5fcc(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *local_80;
  ulong uStack_78;
  byte bStack_69;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  FUN_00662484(param_1,"Disabled",8);
  FUN_00661054(param_1 + 0x40,"limit",5);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_00d267f8;
  *(undefined8 *)(param_1 + 0x80) = 3000000;
  FUN_00661054(param_1 + 0x88,"fraction",8);
  puVar1 = PTR_DAT_00d52020 + 0x10;
  *(undefined8 *)(param_1 + 200) = 0x3fe999999999999a;
  *(undefined **)(param_1 + 0x88) = puVar1;
  FUN_00661054(param_1 + 0xd0,"interval",8);
  *(undefined ***)(param_1 + 0xd0) = &PTR_FUN_00d267f8;
  *(undefined8 *)(param_1 + 0x110) = 1000000;
  FUN_00661054(param_1 + 0x118,"floor",5);
  uVar4 = _UNK_001f22c8;
  uVar3 = _DAT_001f22c0;
  *(undefined ***)(param_1 + 0x118) = &PTR_FUN_00d28090;
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  uVar4 = _UNK_001f3868;
  uVar3 = _DAT_001f3860;
  *(undefined8 *)(param_1 + 0x168) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x178) = uVar4;
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  local_68 = param_1;
  lStack_60 = param_1 + 0x40;
  local_58 = param_1 + 0x88;
  lStack_50 = param_1 + 0xd0;
  local_48 = param_1 + 0x118;
  (**(code **)(*param_2 + 0x10))(&local_80,param_2,"WebRTC-Bwe-MaxRttLimit",0x16);
  ppuVar2 = (undefined1 **)local_80;
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    ppuVar2 = &local_80;
  }
  FUN_00661cc0(&local_68,5,ppuVar2,uStack_78);
  if ((char)bStack_69 < '\0') {
    operator_delete(local_80);
  }
  uVar5 = FUN_006624c8(param_1);
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x80);
  }
  return;
}


// ===== 008f6174  FUN_008f6174 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6174(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  float *pfVar1;
  int *******pppppppiVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  char *local_80;
  int *******pppppppiStack_78;
  int *******local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 uStack_45;
  uint local_44;
  
  *param_1 = param_2;
  FUN_008f5fcc(param_1 + 1);
  uVar5 = _UNK_001f20b8;
  uVar4 = _DAT_001f20b0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3e] = 0x8000000000000000;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = uVar5;
  param_1[0x3c] = uVar4;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((long)param_1 + 0x1b9) = 0;
  *(undefined8 *)((long)param_1 + 0x1b1) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = 0x8000000000000000;
  param_1[0x40] = 0x8000000000000000;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0x7ff8000000000000;
  param_1[0x44] = 0x7ff8000000000000;
  param_1[0x47] = 0x8000000000000000;
  param_1[0x46] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  puVar9 = (undefined8 *)operator_new(8);
  param_1[0x4b] = puVar9;
  uVar5 = _UNK_001f4228;
  uVar4 = _DAT_001f4220;
  *puVar9 = 0;
  uVar6 = DAT_001f5190;
  param_1[0x4e] = param_3;
  param_1[0x4d] = uVar5;
  param_1[0x4c] = uVar4;
  param_1[0x4f] = 0x8000000000000000;
  param_1[0x50] = uVar6;
  param_1[0x51] = 0;
  pvVar10 = operator_new(0x268);
  FUN_008f8d90(pvVar10,param_2);
  param_1[0x52] = pvVar10;
  *(undefined4 *)(param_1 + 0x53) = 3;
  FUN_00662484(param_1 + 0x54,"Disabled",8);
  (**(code **)(*(long *)*param_1 + 0x10))
            (&local_70,(long *)*param_1,"WebRTC-BweLossExperiment",0x18);
  bVar7 = false;
  puVar3 = puStack_68;
  if (-1 < (long)local_60) {
    puVar3 = (undefined1 *)((ulong)local_60 >> 0x38);
  }
  if ((undefined1 *)0x6 < puVar3) {
    pppppppiVar2 = local_70;
    if (-1 < (long)local_60) {
      pppppppiVar2 = (int *******)&local_70;
    }
    bVar7 = *(int *)pppppppiVar2 == 0x62616e45 && *(int *)((long)pppppppiVar2 + 3) == 0x64656c62;
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (bVar7) {
    pfVar1 = (float *)(param_1 + 0x50);
    local_44 = 0xaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*(long *)*param_1 + 0x10))
              (&local_70,(long *)*param_1,"WebRTC-BweLossExperiment",0x18);
    pppppppiVar2 = local_70;
    if (-1 < (long)local_60) {
      pppppppiVar2 = (int *******)&local_70;
    }
    iVar8 = sscanf((char *)pppppppiVar2,"Enabled-%f,%f,%u",param_1 + 0x50,(long)param_1 + 0x284,
                   &local_44);
    if (iVar8 == 3) {
      fVar12 = *pfVar1;
      if (fVar12 == 0.0 || fVar12 < 0.0 != NAN(fVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88((double)fVar12,0,
                     "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,0x56,"*low_loss_threshold > 0.0f",&DAT_002257b4,
                     "Loss threshold must be greater than 0.");
      }
      if (1.0 < fVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88((double)fVar12,0x3ff0000000000000,
                     "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,0x58,"*low_loss_threshold <= 1.0f",&DAT_002257b4,
                     "Loss threshold must be less than or equal to 1.");
      }
      fVar13 = *(float *)((long)param_1 + 0x284);
      if (fVar13 == 0.0 || fVar13 < 0.0 != NAN(fVar13)) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88((double)fVar13,0,
                     "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,0x5a,"*high_loss_threshold > 0.0f",&DAT_002257b4,
                     "Loss threshold must be greater than 0.");
      }
      if (1.0 < fVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88((double)fVar13,0x3ff0000000000000,
                     "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,0x5c,"*high_loss_threshold <= 1.0f",&DAT_002257b4,
                     "Loss threshold must be less than or equal to 1.");
      }
      if (fVar13 < fVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88((double)fVar12,(double)fVar13,
                     "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,0x5e,"*low_loss_threshold <= *high_loss_threshold",&DAT_002257b4,
                     "The low loss threshold must be less than or equal to the high loss threshold."
                    );
      }
      if (0x20c49a < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,100,"*bitrate_threshold_kbps < std::numeric_limits<int>::max() / 1000",
                     &DAT_002257b9,local_44,&DAT_0020c49b,
                     "Bitrate must be smaller enough to avoid overflows.");
      }
    }
    else {
      uVar11 = FUN_004022fc();
      if ((uVar11 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,0x342,
                     "Failed to parse parameters for BweLossExperiment experiment from field trial string. Using default."
                    );
      }
      *(undefined8 *)pfVar1 = uVar6;
      local_44 = 0;
    }
    if ((long)local_60 < 0) {
      operator_delete(local_70);
    }
    if (iVar8 == 3) {
      uVar11 = FUN_00417e08();
      if ((uVar11 & 1) == 0) {
        local_70 = (int *******)0x198abe;
        puStack_68 = (undefined1 *)0x609;
        local_60 = &uStack_45;
        pppppppiStack_78 = (int *******)&local_70;
        local_80 = "Enabled BweLossExperiment with parameters ";
        FUN_00623bb0((double)*pfVar1,(double)*(float *)((long)param_1 + 0x284),&DAT_002257be,
                     "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc"
                     ,0x609,"Enabled BweLossExperiment with parameters ",&DAT_001e1644,&DAT_001e1644
                     ,local_44);
      }
      param_1[0x51] = (ulong)local_44 * 1000;
    }
  }
  local_80 = (char *)(param_1 + 0x54);
  (**(code **)(*param_2 + 0x10))(&local_70,param_2,"WebRTC-Bwe-ReceiverLimitCapsOnly",0x20);
  puVar3 = puStack_68;
  pppppppiVar2 = local_70;
  if (-1 < (long)local_60) {
    puVar3 = (undefined1 *)((ulong)local_60 >> 0x38);
    pppppppiVar2 = (int *******)&local_70;
  }
  FUN_00661cc0(&local_80,1,pppppppiVar2,puVar3);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  uVar11 = FUN_008faff8(param_1[0x52]);
  if ((uVar11 & 1) != 0) {
    FUN_008fb334(param_1[0x52],param_1[0x3c],param_1[0x3d]);
  }
  return;
}


// ===== 008f6654  FUN_008f6654 =====

void FUN_008f6654(long param_1)

{
  void *pvVar1;
  
  FUN_006634ac(param_1 + 0x2a0);
  pvVar1 = *(void **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_008f7ec8(pvVar1);
    operator_delete(pvVar1);
  }
  if (*(void **)(param_1 + 600) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 600));
  }
  FUN_008f66e0(param_1 + 0x188);
  FUN_006634ac(param_1 + 0x120);
  FUN_006634ac(param_1 + 0xd8);
  FUN_006634ac(param_1 + 0x90);
  FUN_006634ac(param_1 + 0x48);
  FUN_006634ac(param_1 + 8);
  return;
}


// ===== 008f66e0  FUN_008f66e0 =====

void FUN_008f66e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar7 = param_1[4];
    plVar3 = puVar9 + (uVar7 >> 8);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0xff) * 0x10;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 8] + (param_1[5] + uVar7 & 0xff) * 0x10) {
      if (lVar4 == 0) goto LAB_008f6840;
      lVar4 = lVar4 + 0x10;
      if (lVar4 - lVar5 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar4 = lVar5;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar1 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_008f67b8;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_008f67b8:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar6 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if ((1 < uVar7) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_008f6840:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008f6890  FUN_008f6890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  
  uVar2 = _UNK_001f20b8;
  uVar1 = _DAT_001f20b0;
  param_1[0x37] = 0;
  param_1[0x3d] = uVar2;
  param_1[0x3c] = uVar1;
  param_1[0x3a] = 0;
  param_1[0x3e] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x41] = 0x8000000000000000;
  param_1[0x40] = 0x8000000000000000;
  param_1[0x45] = 0x7ff8000000000000;
  param_1[0x44] = 0x7ff8000000000000;
  param_1[0x47] = 0x8000000000000000;
  param_1[0x46] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4f] = 0x8000000000000000;
  uVar3 = FUN_008faff8(param_1[0x52]);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_008fb08c(param_1[0x52]), (uVar3 & 1) != 0)) {
    pvVar4 = operator_new(0x268);
    FUN_008f8d90(pvVar4,*param_1);
    pvVar5 = (void *)param_1[0x52];
    param_1[0x52] = pvVar4;
    if (pvVar5 != (void *)0x0) {
      FUN_008f7ec8(pvVar5);
      operator_delete(pvVar5);
      return;
    }
  }
  return;
}


// ===== 008f6968  FUN_008f6968 =====

void FUN_008f6968(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  
  if ((long)param_4 < 0x1389) {
    param_4 = 5000;
  }
  uVar1 = param_4;
  if (param_4 <= param_5) {
    uVar1 = param_5;
  }
  if (0x7ffffffffffffffd < param_5 - 1) {
    uVar1 = 1000000000;
  }
  *(ulong *)(param_1 + 0x1e0) = param_4;
  *(ulong *)(param_1 + 0x1e8) = uVar1;
  FUN_008fb334(*(undefined8 *)(param_1 + 0x290));
  if ((param_3 & 1) != 0) {
    FUN_008f6a3c(param_1,param_2,param_6);
    return;
  }
  return;
}


// ===== 008f69fc  FUN_008f69fc =====

void FUN_008f69fc(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((long)param_2 < 0x1389) {
    param_2 = 5000;
  }
  uVar1 = param_2;
  if (param_2 <= param_3) {
    uVar1 = param_3;
  }
  if (0x7ffffffffffffffd < param_3 - 1) {
    uVar1 = 1000000000;
  }
  *(ulong *)(param_1 + 0x1e0) = param_2;
  *(ulong *)(param_1 + 0x1e8) = uVar1;
  FUN_008fb334(*(undefined8 *)(param_1 + 0x290));
  return;
}


// ===== 008f6a3c  FUN_008f6a3c =====

void FUN_008f6a3c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0x228) = 0x7fffffffffffffff;
  FUN_008f6b48();
  puVar2 = *(undefined8 **)(param_1 + 400);
  if (puVar2 != *(undefined8 **)(param_1 + 0x198)) {
    uVar3 = *(ulong *)(param_1 + 0x1a8);
    uVar1 = *(long *)(param_1 + 0x1b0) + uVar3;
    plVar6 = puVar2 + (uVar3 >> 8);
    lVar7 = *plVar6;
    lVar5 = lVar7 + (uVar3 & 0xff) * 0x10;
    while (lVar5 != puVar2[uVar1 >> 8] + (uVar1 & 0xff) * 0x10) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar5 = lVar5 + 0x10;
      if (lVar5 - lVar7 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar7 = *plVar6;
        lVar5 = lVar7;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  lVar5 = (long)*(undefined8 **)(param_1 + 0x198) - (long)puVar2;
  while (uVar1 = lVar5 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 400) + 8);
    *(undefined8 **)(param_1 + 400) = puVar2;
    lVar5 = *(long *)(param_1 + 0x198) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar4 = 0x80;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar4 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  return;
}


// ===== 008f6b48  FUN_008f6b48 =====

void FUN_008f6b48(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x228);
  uVar1 = FUN_006624c8(param_1 + 0x2a0);
  uVar5 = uVar4;
  if (((uVar1 & 1) != 0) &&
     (uVar5 = *(ulong *)(param_1 + 0x220), (long)uVar4 <= (long)*(ulong *)(param_1 + 0x220))) {
    uVar5 = uVar4;
  }
  uVar1 = *(ulong *)(param_1 + 0x1e8);
  if ((long)uVar5 <= (long)*(ulong *)(param_1 + 0x1e8)) {
    uVar1 = uVar5;
  }
  if ((long)param_2 <= (long)uVar1) {
    uVar1 = param_2;
  }
  if ((long)uVar1 < *(long *)(param_1 + 0x1e0)) {
    FUN_008f7d9c(param_1,uVar1,param_3);
    uVar1 = *(ulong *)(param_1 + 0x1e0);
  }
  *(ulong *)(param_1 + 0x1d0) = uVar1;
  if ((((uVar1 != *(ulong *)(param_1 + 0x1d8)) ||
       (*(char *)(param_1 + 0x210) != *(char *)(param_1 + 0x211))) ||
      (param_3 == 0x7fffffffffffffff)) ||
     ((lVar3 = *(long *)(param_1 + 0x278), lVar3 == -0x8000000000000000 ||
      (((param_3 != -0x8000000000000000 && (lVar3 != 0x7fffffffffffffff)) &&
       (5000000 < param_3 - lVar3)))))) {
    plVar6 = *(long **)(param_1 + 0x270);
    pvVar2 = operator_new(0x20);
    FUN_008ff814(pvVar2,uVar1 & 0xffffffff,*(undefined1 *)(param_1 + 0x210),
                 *(undefined4 *)(param_1 + 0x1bc));
    (**(code **)(*plVar6 + 0x28))(plVar6,pvVar2);
    *(long *)(param_1 + 0x278) = param_3;
    *(undefined1 *)(param_1 + 0x211) = *(undefined1 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x1d0);
  }
  return;
}


// ===== 008f6c7c  FUN_008f6c7c =====

undefined4 FUN_008f6c7c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1e0);
}


// ===== 008f6c88  FUN_008f6c88 =====

long FUN_008f6c88(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x1d0);
  uVar1 = FUN_006624c8(param_1 + 0x2a0);
  lVar3 = lVar2;
  if (((uVar1 & 1) == 0) &&
     (lVar3 = *(long *)(param_1 + 0x220), lVar2 <= *(long *)(param_1 + 0x220))) {
    lVar3 = lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x1e0);
  if (*(long *)(param_1 + 0x1e0) <= lVar3) {
    lVar2 = lVar3;
  }
  return lVar2;
}


// ===== 008f6cd4  FUN_008f6cd4 =====

undefined4 FUN_008f6cd4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x298);
}


// ===== 008f6ce0  FUN_008f6ce0 =====

bool FUN_008f6ce0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x170);
  lVar2 = 0x7fffffffffffffff;
  if ((lVar3 != -0x8000000000000000) &&
     (lVar4 = *(long *)(param_1 + 0x180), lVar4 != 0x7fffffffffffffff)) {
    uVar1 = 0;
    if (lVar4 != -0x8000000000000000 && lVar3 != 0x7fffffffffffffff) {
      uVar1 = lVar4 - lVar3 & (lVar4 - lVar3 >> 0x3f ^ 0xffffffffffffffffU);
    }
    lVar2 = 0x7fffffffffffffff;
    if (((uVar1 != 0x7fffffffffffffff) &&
        (lVar3 = *(long *)(param_1 + 0x178), lVar3 != 0x7fffffffffffffff)) &&
       (lVar2 = lVar3, lVar3 != -0x8000000000000000)) {
      lVar2 = lVar3 + uVar1;
    }
  }
  return *(long *)(param_1 + 0x168) < lVar2;
}


// ===== 008f6d54  FUN_008f6d54 =====

void FUN_008f6d54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  *(long *)(param_1 + 0x220) = lVar1;
  FUN_008f6b48(param_1,*(undefined8 *)(param_1 + 0x1d0),param_2);
  return;
}


// ===== 008f6d78  FUN_008f6d78 =====

void FUN_008f6d78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  *(long *)(param_1 + 0x228) = lVar1;
  FUN_008f6b48(param_1,*(undefined8 *)(param_1 + 0x1d0),param_2);
  return;
}


// ===== 008f6d9c  FUN_008f6d9c =====

void FUN_008f6d9c(long param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  *(undefined8 *)(param_1 + 0x1c0) = param_2;
  *(byte *)(param_1 + 0x1c8) = param_3;
  if (((param_3 & 1) != 0) &&
     (uVar1 = FUN_008faff8(*(undefined8 *)(param_1 + 0x290)), (uVar1 & 1) != 0)) {
    FUN_008fb1dc(*(undefined8 *)(param_1 + 0x290),param_2);
    return;
  }
  return;
}


// ===== 008f6df4  FUN_008f6df4 =====

void FUN_008f6df4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint in_w5;
  
  uVar3 = FUN_008faff8(*(undefined8 *)(param_1 + 0x290));
  if ((uVar3 & 1) != 0) {
    lVar2 = param_2[4] - param_2[3];
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_2[3];
    }
    FUN_008fb4dc(*(undefined8 *)(param_1 + 0x290),lVar1,(lVar2 >> 4) * 0x6db6db6db6db6db7,
                 *(undefined8 *)(param_1 + 0x228),in_w5 & 1);
    FUN_008f6e84(param_1,*param_2);
    return;
  }
  return;
}


// ===== 008f6e84  FUN_008f6e84 =====

void FUN_008f6e84(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [12];
  
  lVar5 = *(long *)(param_1 + 0x170);
  lVar6 = 0x7fffffffffffffff;
  if ((lVar5 != -0x8000000000000000) &&
     (lVar8 = *(long *)(param_1 + 0x180), lVar8 != 0x7fffffffffffffff)) {
    uVar3 = 0;
    if (lVar8 != -0x8000000000000000 && lVar5 != 0x7fffffffffffffff) {
      uVar3 = lVar8 - lVar5 & (lVar8 - lVar5 >> 0x3f ^ 0xffffffffffffffffU);
    }
    lVar6 = 0x7fffffffffffffff;
    if (((uVar3 != 0x7fffffffffffffff) &&
        (lVar5 = *(long *)(param_1 + 0x178), lVar5 != 0x7fffffffffffffff)) &&
       (lVar6 = lVar5, lVar5 != -0x8000000000000000)) {
      lVar6 = lVar5 + uVar3;
    }
  }
  if (*(long *)(param_1 + 0x168) < lVar6) {
    if ((param_2 != 0x7fffffffffffffff) &&
       (lVar6 = *(long *)(param_1 + 0x230), lVar6 != -0x8000000000000000)) {
      lVar5 = -0x8000000000000000;
      if (lVar6 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
        lVar5 = param_2 - lVar6;
      }
      if (lVar5 < *(long *)(param_1 + 0x118)) goto LAB_008f707c;
    }
    lVar5 = *(long *)(param_1 + 0x160);
    lVar6 = *(long *)(param_1 + 0x1d0);
    if (lVar5 < lVar6) {
      *(long *)(param_1 + 0x230) = param_2;
      lVar6 = (long)(*(double *)(param_1 + 0xd0) * (double)lVar6);
      if (lVar6 <= lVar5) {
        lVar6 = lVar5;
      }
    }
    goto LAB_008f7080;
  }
  if (*(char *)(param_1 + 0x210) == '\0') {
    if (1 < *(long *)(param_1 + 0x238) + 0x8000000000000001U) {
      if ((param_2 == 0x7fffffffffffffff) ||
         (param_2 != -0x8000000000000000 && 1999999 < param_2 - *(long *)(param_1 + 0x238)))
      goto LAB_008f6f80;
    }
    uVar3 = FUN_008fb044(*(undefined8 *)(param_1 + 0x290));
    if ((uVar3 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x1d0);
      lVar6 = *(long *)(param_1 + 0x220);
      lVar5 = lVar6;
      if (lVar6 <= lVar8) {
        lVar5 = lVar8;
      }
      lVar10 = *(long *)(param_1 + 0x228);
      if (0xfffffffffffffffd < lVar6 + 0x7fffffffffffffffU) {
        lVar5 = lVar8;
      }
      lVar6 = lVar10;
      if (lVar10 <= lVar5) {
        lVar6 = lVar5;
      }
      if (0xfffffffffffffffd < lVar10 + 0x7fffffffffffffffU) {
        lVar6 = lVar5;
      }
      if (lVar6 != lVar8) {
        puVar4 = *(undefined8 **)(param_1 + 400);
        puVar7 = *(undefined8 **)(param_1 + 0x198);
        if (puVar4 != puVar7) {
          uVar2 = *(ulong *)(param_1 + 0x1a8);
          uVar3 = *(long *)(param_1 + 0x1b0) + uVar2;
          plVar9 = puVar4 + (uVar2 >> 8);
          lVar8 = *plVar9;
          lVar5 = lVar8 + (uVar2 & 0xff) * 0x10;
          while (lVar5 != puVar4[uVar3 >> 8] + (uVar3 & 0xff) * 0x10) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            lVar5 = lVar5 + 0x10;
            if (lVar5 - lVar8 == 0x1000) {
              plVar9 = plVar9 + 1;
              lVar8 = *plVar9;
              lVar5 = lVar8;
            }
          }
        }
        *(undefined8 *)(param_1 + 0x1b0) = 0;
        lVar5 = (long)puVar7 - (long)puVar4;
        while (uVar3 = lVar5 >> 3, 2 < uVar3) {
          operator_delete((void *)*puVar4);
          puVar7 = *(undefined8 **)(param_1 + 0x198);
          puVar4 = (undefined8 *)(*(long *)(param_1 + 400) + 8);
          *(undefined8 **)(param_1 + 400) = puVar4;
          lVar5 = (long)puVar7 - (long)puVar4;
        }
        if (uVar3 == 1) {
          lVar5 = 0x80;
LAB_008f7240:
          *(long *)(param_1 + 0x1a8) = lVar5;
        }
        else {
          if (uVar3 == 2) {
            lVar5 = 0x100;
            goto LAB_008f7240;
          }
          lVar5 = *(long *)(param_1 + 0x1a8);
        }
        lVar10 = *(long *)(param_1 + 0x1d0);
        lVar8 = 0;
        if (puVar7 != puVar4) {
          lVar8 = ((long)puVar7 - (long)puVar4) * 0x20 + -1;
        }
        if (lVar8 == *(long *)(param_1 + 0x1b0) + lVar5) {
          FUN_008f8160(param_1 + 0x188);
          puVar4 = *(undefined8 **)(param_1 + 400);
          puVar7 = *(undefined8 **)(param_1 + 0x198);
        }
        if ((puVar4 == puVar7) ||
           (uVar3 = *(long *)(param_1 + 0x1b0) + *(long *)(param_1 + 0x1a8),
           plVar9 = (long *)(puVar4[uVar3 >> 8] + (uVar3 & 0xff) * 0x10), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *plVar9 = param_2;
        plVar9[1] = lVar10;
        *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + 1;
        goto LAB_008f7080;
      }
    }
  }
LAB_008f6f80:
  FUN_008f7afc(param_1,param_2);
  uVar3 = FUN_008fb004(*(undefined8 *)(param_1 + 0x290));
  if ((uVar3 & 1) != 0) {
    auVar13 = FUN_008fb0c0(*(undefined8 *)(param_1 + 0x290));
    *(int *)(param_1 + 0x298) = auVar13._8_4_;
    lVar6 = auVar13._0_8_;
    goto LAB_008f7080;
  }
  if ((1 < *(long *)(param_1 + 0x208) + 0x8000000000000001U) && (param_2 != 0x7fffffffffffffff)) {
    lVar6 = param_2;
    if (param_2 != -0x8000000000000000) {
      lVar6 = param_2 - *(long *)(param_1 + 0x208);
    }
    if (lVar6 < 6000000) {
      lVar6 = *(long *)(param_1 + 0x1d0);
      if (*(long *)(param_1 + 0x288) <= lVar6) {
        fVar11 = (float)*(byte *)(param_1 + 0x210) / 256.0;
        if (*(float *)(param_1 + 0x280) < fVar11) {
          if (((*(long *)(param_1 + 0x288) < lVar6) && (*(float *)(param_1 + 0x284) < fVar11)) &&
             ((*(byte *)(param_1 + 0x1f8) & 1) == 0)) {
            lVar10 = *(long *)(param_1 + 0x230);
            lVar8 = *(long *)(param_1 + 0x218);
            lVar5 = -0x8000000000000000;
            if (lVar10 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
              lVar5 = param_2 - lVar10;
            }
            lVar1 = lVar8;
            if (lVar8 != -0x8000000000000000) {
              lVar1 = lVar8 + 300000;
            }
            if (lVar8 != 0x7fffffffffffffff) {
              lVar8 = lVar1;
            }
            if ((lVar10 == -0x8000000000000000) || (lVar8 <= lVar5)) {
              *(long *)(param_1 + 0x230) = param_2;
              dVar12 = (double)lVar6 * (double)(0x200 - *(byte *)(param_1 + 0x210)) * 0.001953125;
              if (dVar12 == INFINITY) {
                lVar6 = 0x7fffffffffffffff;
              }
              else if (dVar12 == -INFINITY) {
                lVar6 = -0x8000000000000000;
              }
              else {
                lVar6 = (long)dVar12;
              }
              *(undefined1 *)(param_1 + 0x1f8) = 1;
              goto LAB_008f7080;
            }
          }
          goto LAB_008f707c;
        }
      }
      if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
                  );
      }
      dVar12 = (double)*(long *)(*(long *)(*(long *)(param_1 + 400) +
                                          (*(ulong *)(param_1 + 0x1a8) >> 8) * 8) +
                                 (*(ulong *)(param_1 + 0x1a8) & 0xff) * 0x10 + 8) * DAT_001f53f8 +
               0.5;
      if (dVar12 == INFINITY) {
        lVar6 = 0x7fffffffffffffff;
        goto LAB_008f7080;
      }
      if (dVar12 != -INFINITY) {
        lVar5 = (long)dVar12;
        lVar6 = 0x7fffffffffffffff;
        if (lVar5 == 0x7fffffffffffffff) goto LAB_008f7080;
        if (lVar5 != -0x8000000000000000) {
          lVar6 = lVar5 + 1000;
          goto LAB_008f7080;
        }
      }
      lVar6 = -0x8000000000000000;
      goto LAB_008f7080;
    }
  }
LAB_008f707c:
  lVar6 = *(long *)(param_1 + 0x1d0);
LAB_008f7080:
  FUN_008f6b48(param_1,lVar6,param_2);
  return;
}


// ===== 008f7390  FUN_008f7390 =====

void FUN_008f7390(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x200) = param_4;
  if (*(long *)(param_1 + 0x238) + 0x8000000000000001U < 2) {
    *(undefined8 *)(param_1 + 0x238) = param_4;
  }
  if (0 < param_3) {
    param_3 = param_3 + *(int *)(param_1 + 0x1bc);
    if (param_3 < 0x14) {
      *(int *)(param_1 + 0x1bc) = (int)param_3;
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + (int)param_2;
      return;
    }
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    uVar1 = param_2 + (long)*(int *)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x208) = param_4;
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = (int)((long)((uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) << 8) / param_3);
    }
    if (0xfe < iVar2) {
      iVar2 = 0xff;
    }
    *(char *)(param_1 + 0x210) = (char)iVar2;
    FUN_008f6e84(param_1,param_4);
  }
  FUN_008f7464(param_1,param_4,param_2 & 0xffffffff);
  return;
}


// ===== 008f7464  FUN_008f7464 =====

void FUN_008f7464(long param_1,long param_2,int param_3)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar16 = 0;
  ppuVar12 = &PTR_s_WebRTC_BWE_RampUpTimeTo500kbpsIn_00d3d130;
  lVar2 = (*(long *)(param_1 + 0x1d0) + 500) / 1000;
  uVar15 = lVar2 * 1000;
  uVar5 = lVar2 * -1000;
  uVar9 = uVar15 / 1000;
  if (499 < uVar15 % 1000) {
    uVar9 = uVar9 + 1;
  }
  uVar6 = -(uVar5 / 1000) - (ulong)(500 < uVar5 % 1000);
  uVar5 = uVar6;
  if (-1 < (long)uVar15) {
    uVar5 = uVar9;
  }
  do {
    if (*(ulong *)(param_1 + 0x260) <= uVar16) goto LAB_008f79b4;
    uVar14 = 1L << (uVar16 & 0x3f);
    if (((**(ulong **)(param_1 + 600) & uVar14) == 0) &&
       ((long)*(int *)(ppuVar12 + 1) <= (long)uVar5)) {
      if (uVar16 == 2) {
        lVar2 = DAT_00d80480;
        if (DAT_00d80480 == 0) {
          pcVar13 = *ppuVar12;
          sVar1 = strlen(pcVar13);
          lVar2 = FUN_006660d0(pcVar13,sVar1,1,100000,0x32);
          puVar3 = &DAT_00d80480;
          goto LAB_008f7644;
        }
LAB_008f7650:
        uVar7 = 0x7fffffffffffffff;
        if (((param_2 == 0x7fffffffffffffff) ||
            (lVar10 = *(long *)(param_1 + 0x238), lVar10 == -0x8000000000000000)) ||
           ((uVar7 = 0x8000000000000000, param_2 != -0x8000000000000000 &&
            ((lVar10 != 0x7fffffffffffffff && (uVar7 = param_2 - lVar10, -1 < (long)uVar7)))))) {
          uVar11 = uVar7 / 1000;
          if (499 < uVar7 % 1000) {
            uVar11 = uVar11 + 1;
          }
        }
        else {
          uVar11 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
        }
        FUN_00666568(lVar2,uVar11);
      }
      else {
        if (uVar16 != 1) {
          lVar2 = DAT_00d80470;
          if (DAT_00d80470 == 0) {
            pcVar13 = *ppuVar12;
            sVar1 = strlen(pcVar13);
            lVar2 = FUN_006660d0(pcVar13,sVar1,1,100000,0x32);
            puVar3 = &DAT_00d80470;
            goto LAB_008f7644;
          }
          goto LAB_008f7650;
        }
        lVar2 = DAT_00d80478;
        if (DAT_00d80478 != 0) goto LAB_008f7650;
        pcVar13 = *ppuVar12;
        sVar1 = strlen(pcVar13);
        lVar2 = FUN_006660d0(pcVar13,sVar1,1,100000,0x32);
        puVar3 = &DAT_00d80478;
LAB_008f7644:
        FUN_00d0f5e0(0,lVar2,puVar3);
        if (lVar2 != 0) goto LAB_008f7650;
      }
      if (*(ulong *)(param_1 + 0x260) <= uVar16) {
LAB_008f79b4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                  );
      }
      **(ulong **)(param_1 + 600) = **(ulong **)(param_1 + 600) | uVar14;
    }
    uVar16 = uVar16 + 1;
    ppuVar12 = ppuVar12 + 2;
  } while (uVar16 != 3);
  if (*(long *)(param_1 + 0x238) + 0x8000000000000001U < 2) {
LAB_008f7750:
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + param_3;
    return;
  }
  lVar2 = param_2 - *(long *)(param_1 + 0x238);
  if ((param_2 != 0x7fffffffffffffff) && (param_2 == -0x8000000000000000 || lVar2 < 2000000))
  goto LAB_008f7750;
  if (*(int *)(param_1 + 0x250) == 1) {
    if ((param_2 != 0x7fffffffffffffff) && (lVar2 < 20000000)) {
      return;
    }
    uVar16 = *(ulong *)(param_1 + 0x248);
    iVar8 = (int)(uVar16 / 1000);
    if (499 < uVar16 % 1000) {
      iVar8 = iVar8 + 1;
    }
    *(undefined4 *)(param_1 + 0x250) = 2;
    if ((uVar16 & 0x8000000000000000) != 0) {
      iVar8 = -(int)(-uVar16 / 1000) - (uint)(500 < -uVar16 % 1000);
    }
    iVar4 = (int)uVar6;
    if (-1 < (long)uVar15) {
      iVar4 = (int)uVar9;
    }
    lVar2 = DAT_00d80498;
    if (DAT_00d80498 == 0) {
      lVar2 = FUN_006660d0("WebRTC.BWE.InitialVsConvergedDiff",0x21,0,2000,0x32);
      FUN_00d0f5e0(0,lVar2,&DAT_00d80498);
      if (lVar2 == 0) {
        return;
      }
    }
    uVar16 = (ulong)(iVar8 - iVar4 & (iVar8 - iVar4 >> 0x1f ^ 0xffffffffU));
    goto LAB_008f7990;
  }
  if (*(int *)(param_1 + 0x250) != 0) {
    return;
  }
  *(ulong *)(param_1 + 0x248) = uVar15;
  *(undefined4 *)(param_1 + 0x250) = 1;
  lVar2 = DAT_00d80488;
  if (DAT_00d80488 == 0) {
    lVar2 = FUN_006660d0("WebRTC.BWE.InitiallyLostPackets",0x1f,0,100,0x32);
    FUN_00d0f5e0(0,lVar2,&DAT_00d80488);
    if (lVar2 != 0) goto LAB_008f77e8;
  }
  else {
LAB_008f77e8:
    FUN_00666568(lVar2,*(undefined4 *)(param_1 + 0x240));
  }
  lVar2 = DAT_00d80490;
  if (DAT_00d80490 == 0) {
    lVar2 = FUN_006660d0("WebRTC.BWE.InitialBandwidthEstimate",0x23,0,2000,0x32);
    FUN_00d0f5e0(0,lVar2,&DAT_00d80490);
    if (lVar2 == 0) {
      return;
    }
  }
  uVar9 = *(ulong *)(param_1 + 0x248);
  if ((long)uVar9 < 0) {
    uVar16 = -(-uVar9 / 1000) - (ulong)(500 < -uVar9 % 1000);
  }
  else {
    uVar16 = uVar9 / 1000;
    if (499 < uVar9 % 1000) {
      uVar16 = uVar16 + 1;
    }
  }
LAB_008f7990:
  FUN_00666568(lVar2,uVar16);
  return;
}


// ===== 008f79c8  FUN_008f79c8 =====

void FUN_008f79c8(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (long)param_2) {
    *(ulong *)(param_1 + 0x218) = param_2;
  }
  if (1 < *(long *)(param_1 + 0x238) + 0x8000000000000001U) {
    if (((param_3 == 0x7fffffffffffffff) ||
        (param_3 != -0x8000000000000000 && 1999999 < param_3 - *(long *)(param_1 + 0x238))) &&
       (*(int *)(param_1 + 0x254) == 0)) {
      *(undefined4 *)(param_1 + 0x254) = 2;
      lVar1 = DAT_00d804a0;
      if (DAT_00d804a0 == 0) {
        lVar1 = FUN_006660d0("WebRTC.BWE.InitialRtt",0x15,0,2000,0x32);
        FUN_00d0f5e0(0,lVar1,&DAT_00d804a0);
        if (lVar1 == 0) {
          return;
        }
      }
      uVar2 = param_2 / 1000;
      if (499 < param_2 % 1000) {
        uVar2 = uVar2 + 1;
      }
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
      }
      FUN_00666568(lVar1,uVar2);
      return;
    }
  }
  return;
}


// ===== 008f7afc  FUN_008f7afc =====

void FUN_008f7afc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 400);
    uVar5 = *(ulong *)(param_1 + 0x1a8);
    do {
      plVar1 = (long *)(puVar3[uVar5 >> 8] + (uVar5 & 0xff) * 0x10);
      if (((param_2 != 0x7fffffffffffffff) && (lVar7 = *plVar1, lVar7 != -0x8000000000000000)) &&
         (((param_2 == -0x8000000000000000 || (lVar7 == 0x7fffffffffffffff)) ||
          ((param_2 - lVar7 != 0x7fffffffffffffff && ((param_2 - lVar7) + 1000 < 0xf4241))))))
      goto LAB_008f7c58;
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar5 = uVar5 + 1;
      lVar2 = lVar2 + -1;
      *(ulong *)(param_1 + 0x1a8) = uVar5;
      *(long *)(param_1 + 0x1b0) = lVar2;
      if (0x1ff < uVar5) {
        operator_delete((void *)*puVar3);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 400) + 8);
        lVar2 = *(long *)(param_1 + 0x1b0);
        *(undefined8 **)(param_1 + 400) = puVar3;
        uVar5 = *(long *)(param_1 + 0x1a8) - 0x100;
        *(ulong *)(param_1 + 0x1a8) = uVar5;
      }
    } while (lVar2 != 0);
  }
  lVar2 = 0;
  goto LAB_008f7bd4;
  while( true ) {
    FUN_008f7cdc(param_1 + 0x188);
    lVar2 = *(long *)(param_1 + 0x1b0);
    if (lVar2 == 0) break;
LAB_008f7c58:
    uVar5 = (lVar2 + *(long *)(param_1 + 0x1a8)) - 1;
    if (*(long *)(*(long *)(*(long *)(param_1 + 400) + (uVar5 >> 8) * 8) + (uVar5 & 0xff) * 0x10 + 8
                 ) < *(long *)(param_1 + 0x1d0)) break;
  }
LAB_008f7bd4:
  lVar4 = *(long *)(param_1 + 400);
  lVar6 = *(long *)(param_1 + 0x198);
  lVar8 = *(long *)(param_1 + 0x1d0);
  lVar7 = 0;
  if (lVar6 != lVar4) {
    lVar7 = (lVar6 - lVar4) * 0x20 + -1;
  }
  if (lVar7 == *(long *)(param_1 + 0x1a8) + lVar2) {
    FUN_008f8160(param_1 + 0x188);
    lVar4 = *(long *)(param_1 + 400);
    lVar6 = *(long *)(param_1 + 0x198);
  }
  if ((lVar4 != lVar6) &&
     (uVar5 = *(long *)(param_1 + 0x1b0) + *(long *)(param_1 + 0x1a8),
     plVar1 = (long *)(*(long *)(lVar4 + (uVar5 >> 8) * 8) + (uVar5 & 0xff) * 0x10),
     plVar1 != (long *)0x0)) {
    *plVar1 = param_2;
    plVar1[1] = lVar8;
    *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f7cc0  FUN_008f7cc0 =====

void FUN_008f7cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x170) = param_2;
  *(undefined8 *)(param_1 + 0x178) = param_3;
  return;
}


// ===== 008f7ccc  FUN_008f7ccc =====

void FUN_008f7ccc(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  return;
}


// ===== 008f7cdc  FUN_008f7cdc =====

void FUN_008f7cdc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2199: libc++ Hardening assertion !empty() failed: deque::pop_back called on an empty deque\n"
              );
  }
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = lVar3 + -1 + *(long *)(param_1 + 0x20);
  if (*(long *)(lVar5 + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    lVar2 = 0;
    if (lVar4 != lVar5) {
      lVar2 = (lVar4 - lVar5) * 0x20 + -1;
    }
    if (0x1ff < (lVar2 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar4 + -8));
      lVar3 = *(long *)(param_1 + 0x10) + -8;
      if (lVar3 == 0) goto LAB_008f7d74;
      *(long *)(param_1 + 0x10) = lVar3;
    }
    return;
  }
LAB_008f7d74:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008f7d9c  FUN_008f7d9c =====

void FUN_008f7d9c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  void *local_78 [2];
  char cStack_61;
  void *local_60 [2];
  char cStack_49;
  char *local_48;
  ulong local_40;
  undefined1 *local_38;
  undefined1 uStack_11;
  
  if (((param_3 == 0x7fffffffffffffff) ||
      (lVar2 = *(long *)(param_1 + 0x1f0), lVar2 == -0x8000000000000000)) ||
     ((param_3 != -0x8000000000000000 &&
      ((lVar2 != 0x7fffffffffffffff && (10000000 < param_3 - lVar2)))))) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      local_48 = "../../modules/congestion_controller/goog_cc/send_side_bandwidth_estimation.cc";
      local_40 = 0x11ba;
      local_38 = &uStack_11;
      FUN_00665ccc(local_60,param_2);
      FUN_00665ccc(local_78,*(undefined8 *)(param_1 + 0x1e0));
      FUN_00623bb0("\r\t\n\t\n\t",local_48,local_40 & 0xffffffff,"Estimated available bandwidth ",
                   local_60," is below configured min bitrate ",local_78,&DAT_001ea377);
      if (cStack_61 < '\0') {
        operator_delete(local_78[0]);
      }
      if (cStack_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
    *(long *)(param_1 + 0x1f0) = param_3;
  }
  return;
}


// ===== 008f7ec8  FUN_008f7ec8 =====

void FUN_008f7ec8(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  pvVar2 = *(void **)(param_1 + 0x1e8);
  if (pvVar2 == (void *)0x0) {
LAB_008f7f5c:
    pvVar2 = *(void **)(param_1 + 0x1d0);
    if (pvVar2 == (void *)0x0) {
LAB_008f7fdc:
      puVar1 = (undefined8 *)*(void **)(param_1 + 0x180);
      while (puVar1 != (undefined8 *)0x0) {
        if (puVar1 == (undefined8 *)0xfffffffffffffff0) goto LAB_008f8094;
        pvVar2 = (void *)*puVar1;
        operator_delete(puVar1);
        puVar1 = (undefined8 *)pvVar2;
      }
      pvVar2 = *(void **)(param_1 + 0x170);
      *(undefined8 *)(param_1 + 0x170) = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      pvVar2 = *(void **)(param_1 + 0x150);
      if (pvVar2 == (void *)0x0) {
LAB_008f80b8:
        if ((*(char *)(param_1 + 0x130) != '\x01') ||
           (pvVar2 = *(void **)(param_1 + 0x38), pvVar2 == (void *)0x0)) {
          return;
        }
        pvVar3 = *(void **)(param_1 + 0x40);
        uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
        uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
          uVar4 = uVar4 & 0x1ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (pvVar3 == pvVar2) {
            *(void **)(param_1 + 0x40) = pvVar2;
            operator_delete(pvVar2);
            return;
          }
          pvVar3 = (void *)((long)pvVar3 + -8);
        } while (pvVar3 != (void *)0x0);
      }
      else {
        pvVar3 = *(void **)(param_1 + 0x158);
        uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x555555555555555) >> 4;
        uVar5 = (long)pvVar3 * -0x555555555555555 - 0x10U >> 4;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
          uVar4 = uVar4 & 0xffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x30);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (pvVar3 == pvVar2) {
            *(void **)(param_1 + 0x158) = pvVar2;
            operator_delete(pvVar2);
            goto LAB_008f80b8;
          }
          pvVar3 = (void *)((long)pvVar3 + -0x30);
        } while (pvVar3 != (void *)0x0);
      }
    }
    else {
      pvVar3 = *(void **)(param_1 + 0x1d8);
      uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
      uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar3 == pvVar2) {
          *(void **)(param_1 + 0x1d8) = pvVar2;
          operator_delete(pvVar2);
          goto LAB_008f7fdc;
        }
        pvVar3 = (void *)((long)pvVar3 + -8);
      } while (pvVar3 != (void *)0x0);
    }
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x1f0);
    uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar2) {
        *(void **)(param_1 + 0x1f0) = pvVar2;
        operator_delete(pvVar2);
        goto LAB_008f7f5c;
      }
      pvVar3 = (void *)((long)pvVar3 + -8);
    } while (pvVar3 != (void *)0x0);
  }
LAB_008f8094:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008f8160  FUN_008f8160 =====

void FUN_008f8160(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x100) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0x1000);
      FUN_008f85d0(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008f8af4(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0x1000);
      FUN_008f85d0(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_008f8858(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008f8348(param_1,&local_50);
  return;
}


// ===== 008f8348  FUN_008f8348 =====

void FUN_008f8348(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008f85b8;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008f85b8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f85d0  FUN_008f85d0 =====

void FUN_008f85d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008f8840;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_008f8840:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f8858  FUN_008f8858 =====

void FUN_008f8858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008f8adc;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008f8adc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f8af4  FUN_008f8af4 =====

void FUN_008f8af4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008f8d78;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008f8d78:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f8d90  FUN_008f8d90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8d90(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  
  *param_1 = 0;
  param_1[8] = 0;
  FUN_008f8fe8(param_1 + 0x10,param_2);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0x8000000000000000;
  uVar2 = _UNK_001f47e8;
  uVar1 = _DAT_001f47e0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  uVar2 = _UNK_001f3458;
  uVar1 = _DAT_001f3450;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  uVar2 = _UNK_001f4da8;
  uVar1 = _DAT_001f4da0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  *(undefined8 *)(param_1 + 0x210) = uVar1;
  uVar2 = _UNK_001f4178;
  uVar1 = _DAT_001f4170;
  *(undefined8 *)(param_1 + 0x220) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x248) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c8] = 0;
  *(undefined4 *)(param_1 + 0x230) = 3;
  *(undefined8 *)(param_1 + 0x240) = uVar2;
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  *(undefined8 *)(param_1 + 600) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x250) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x260) = 0;
  if ((param_1[0x130] & 1) == 0) {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                   0x2c0,
                   "The configuration does not specify that the estimator should be enabled, disabling it."
                  );
      return;
    }
  }
  else {
    uVar3 = FUN_008f9ef0(param_1);
    if ((uVar3 & 1) != 0) {
      if ((param_1[0x130] & 1) != 0) {
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x88);
        FUN_008faa1c(param_1 + 0x150,(long)*(int *)(param_1 + 0xb0));
        if (((param_1[0x130] & 1) != 0) &&
           (FUN_008fac68(param_1 + 0x1e8,(long)*(int *)(param_1 + 0xb0)), (param_1[0x130] & 1) != 0)
           ) {
          FUN_008fac68(param_1 + 0x1d0,(long)*(int *)(param_1 + 0xb0));
          FUN_008faf28(param_1);
          *(undefined8 *)(param_1 + 0x240) = 300000;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                   0x2ea,"The configuration is not valid, disabling the estimator.");
    }
    if (param_1[0x130] == '\x01') {
      pvVar4 = *(void **)(param_1 + 0x38);
      if (pvVar4 != (void *)0x0) {
        pvVar5 = *(void **)(param_1 + 0x40);
        uVar6 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
        uVar3 = (ulong)(((long)pvVar4 - (long)pvVar5 << 0x3d) - ((long)pvVar4 - (long)pvVar5)) >> 3;
        if (uVar6 <= uVar3) {
          uVar3 = uVar6;
        }
        if ((1 < uVar3) && ((((int)pvVar4 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          pvVar5 = (void *)((long)pvVar5 + uVar3 * -8);
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (pvVar5 != pvVar4) {
          pvVar5 = (void *)((long)pvVar5 + -8);
          if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(void **)(param_1 + 0x40) = pvVar4;
        operator_delete(pvVar4);
      }
      param_1[0x130] = 0;
    }
  }
  return;
}


// ===== 008f8fe8  FUN_008f8fe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8fe8(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *__dest;
  undefined1 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 ***local_db8;
  ulong uStack_db0;
  byte bStack_da1;
  undefined1 **local_da0;
  undefined **ppuStack_d98;
  undefined **local_d90;
  undefined **ppuStack_d88;
  undefined **local_d80;
  undefined ***pppuStack_d78;
  undefined ***local_d70;
  undefined **local_d68;
  undefined **local_d60;
  undefined **local_d58;
  undefined **local_d50;
  undefined **local_d48;
  undefined ***local_d40;
  undefined **local_d38;
  undefined **local_d30;
  undefined1 **local_d28;
  undefined **local_d20;
  undefined1 **local_d18;
  undefined1 **local_d10;
  undefined1 **local_d08;
  undefined ***local_d00;
  undefined1 **local_cf8;
  undefined **local_cf0;
  undefined **local_ce8;
  undefined ***local_ce0;
  undefined **local_cd8;
  undefined **local_cd0;
  undefined **local_cc8;
  undefined **local_cc0;
  undefined ***local_cb8;
  undefined1 **local_cb0;
  undefined1 **local_ca8;
  undefined1 **local_ca0;
  undefined1 **local_c98;
  undefined **local_c90;
  undefined **local_c88;
  undefined1 **local_c80;
  undefined ***pppuStack_c78;
  undefined1 **local_c70;
  undefined **ppuStack_c68;
  undefined *local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined1 *local_c10;
  undefined1 *puStack_c08;
  undefined1 *puStack_c00;
  undefined1 *puStack_bf8;
  undefined1 *local_bf0;
  undefined1 *puStack_be8;
  undefined1 *puStack_be0;
  undefined8 uStack_bd8;
  undefined **local_bd0;
  undefined1 *puStack_bc8;
  undefined1 *puStack_bc0;
  undefined1 *puStack_bb8;
  undefined1 *local_bb0;
  undefined1 *puStack_ba8;
  undefined1 *puStack_ba0;
  undefined1 *puStack_b98;
  char *local_b90;
  undefined1 *local_b80;
  undefined1 *puStack_b78;
  undefined1 *puStack_b70;
  undefined1 *puStack_b68;
  undefined1 *local_b60;
  undefined1 *puStack_b58;
  undefined1 *puStack_b50;
  undefined8 uStack_b48;
  undefined *local_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined *local_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined1 *local_aa0;
  undefined1 *puStack_a98;
  undefined1 *puStack_a90;
  undefined1 *puStack_a88;
  undefined1 *local_a80;
  undefined1 *puStack_a78;
  undefined1 *puStack_a70;
  undefined8 uStack_a68;
  undefined1 *local_a60;
  undefined1 *puStack_a58;
  undefined1 *puStack_a50;
  undefined1 *puStack_a48;
  undefined1 *local_a40;
  undefined1 *puStack_a38;
  undefined1 *puStack_a30;
  undefined8 uStack_a28;
  undefined1 *local_a20;
  undefined1 *puStack_a18;
  undefined1 *puStack_a10;
  undefined1 *puStack_a08;
  undefined1 *local_a00;
  undefined1 *puStack_9f8;
  undefined1 *puStack_9f0;
  undefined8 uStack_9e8;
  undefined1 *local_9e0;
  undefined1 *puStack_9d8;
  undefined1 *puStack_9d0;
  undefined1 *puStack_9c8;
  undefined1 *local_9c0;
  undefined1 *puStack_9b8;
  undefined1 *puStack_9b0;
  undefined8 uStack_9a8;
  undefined **local_9a0;
  undefined1 *puStack_998;
  undefined1 *puStack_990;
  undefined1 *puStack_988;
  undefined1 *local_980;
  undefined1 *puStack_978;
  undefined1 *puStack_970;
  undefined1 *puStack_968;
  undefined1 *local_960;
  undefined *local_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined *local_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined *local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined *local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined **local_810;
  undefined1 *puStack_808;
  undefined1 *local_800;
  undefined1 *puStack_7f8;
  undefined1 *local_7f0;
  undefined1 *puStack_7e8;
  undefined1 *local_7e0;
  undefined1 *puStack_7d8;
  undefined1 *local_7d0;
  undefined *local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined *local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined1 *local_720;
  undefined1 *puStack_718;
  undefined1 *local_710;
  undefined1 *puStack_708;
  undefined1 *local_700;
  undefined1 *puStack_6f8;
  undefined1 *local_6f0;
  undefined8 uStack_6e8;
  undefined **local_6e0;
  undefined1 *puStack_6d8;
  undefined1 *local_6d0;
  undefined1 *puStack_6c8;
  undefined1 *local_6c0;
  undefined1 *puStack_6b8;
  undefined1 *local_6b0;
  undefined1 *puStack_6a8;
  undefined1 *local_6a0;
  undefined1 *local_690;
  undefined1 *puStack_688;
  undefined1 *local_680;
  undefined1 *puStack_678;
  undefined1 *local_670;
  undefined1 *puStack_668;
  undefined1 *local_660;
  undefined8 uStack_658;
  undefined1 *local_650;
  undefined1 *puStack_648;
  undefined1 *local_640;
  undefined1 *puStack_638;
  undefined1 *local_630;
  undefined1 *puStack_628;
  undefined1 *local_620;
  undefined8 uStack_618;
  undefined1 *local_610;
  undefined1 *puStack_608;
  undefined1 *local_600;
  undefined1 *puStack_5f8;
  undefined1 *local_5f0;
  undefined1 *puStack_5e8;
  undefined1 *local_5e0;
  undefined8 uStack_5d8;
  undefined *local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined1 *local_580;
  undefined1 *puStack_578;
  undefined1 *local_570;
  undefined1 *puStack_568;
  undefined1 *local_560;
  undefined1 *puStack_558;
  undefined1 *local_550;
  undefined8 uStack_548;
  undefined *local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined *local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined **local_4a0;
  undefined1 *puStack_498;
  undefined1 *local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  undefined1 *puStack_478;
  undefined1 *local_470;
  undefined1 *puStack_468;
  undefined1 *local_460;
  undefined *local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined *local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined *local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined **local_2c0;
  undefined1 *puStack_2b8;
  undefined1 *local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  undefined1 *local_290;
  undefined1 *puStack_288;
  undefined8 *local_280;
  undefined8 *puStack_278;
  undefined8 *local_270;
  undefined **local_260;
  undefined1 *puStack_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  
  uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_d0,"Enabled",7);
  puVar3 = PTR_DAT_00d52090;
  uVar14 = DAT_00225808;
  uVar13 = _UNK_00225800;
  uVar12 = _DAT_002257f8;
  uVar11 = _UNK_002257f0;
  uVar9 = _DAT_002257e8;
  uVar8 = _UNK_002257e0;
  uVar7 = _DAT_002257d8;
  uVar6 = _UNK_002257d0;
  puVar10 = _DAT_002257c8;
  uStack_98._0_2_ = CONCAT11(1,(undefined1)uStack_98);
  local_d0 = PTR_DAT_00d52090 + 0x10;
  uStack_118 = _UNK_002257d0;
  local_120 = _DAT_002257c8;
  uStack_108 = _UNK_002257e0;
  local_110 = _DAT_002257d8;
  local_e0 = DAT_00225808;
  uStack_f8 = _UNK_002257f0;
  local_100 = _DAT_002257e8;
  uStack_e8 = _UNK_00225800;
  local_f0 = _DAT_002257f8;
  FUN_00661054(&local_120,"BwRampupUpperBoundFactor",0x18);
  puVar2 = PTR_DAT_00d52020;
  puVar1 = PTR_DAT_00d52020 + 0x10;
  local_130 = uVar14;
  uStack_168 = uVar6;
  local_170 = puVar10;
  uStack_158 = uVar8;
  local_160 = uVar7;
  local_e0 = 0x3ff8000000000000;
  uStack_148 = uVar11;
  local_150 = uVar9;
  uStack_138 = uVar13;
  local_140 = uVar12;
  local_120 = puVar1;
  FUN_00661054(&local_170,"BwRampupUpperBoundInHoldFactor",0x1e);
  uStack_1b8 = uVar6;
  local_1c0 = puVar10;
  uStack_1a8 = uVar8;
  local_1b0 = uVar7;
  local_130 = 0x3ff3333333333333;
  local_180 = uVar14;
  uStack_198 = uVar11;
  local_1a0 = uVar9;
  uStack_188 = uVar13;
  local_190 = uVar12;
  local_170 = puVar1;
  FUN_00661054(&local_1c0,"BwRampupUpperBoundHoldThreshold",0x1f);
  uStack_208 = uVar6;
  local_210 = puVar10;
  uStack_1f8 = uVar8;
  local_200 = uVar7;
  local_180 = 0x3ff4cccccccccccd;
  local_1d0 = uVar14;
  uStack_1e8 = uVar11;
  local_1f0 = uVar9;
  uStack_1d8 = uVar13;
  local_1e0 = uVar12;
  local_1c0 = puVar1;
  FUN_00661054(&local_210,"BwRampupAccelMaxFactor",0x16);
  local_1d0 = 0;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
  local_240 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
  local_250 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
  local_260 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_210 = puVar1;
  FUN_00661054(&local_260,"BwRampupAccelMaxoutTime",0x17);
  local_260 = &PTR_FUN_00d267f8;
  local_220 = (undefined1 *)0x3938700;
  local_270 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_278 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_280 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
  local_290 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_298 = &DAT_aaaaaaaaaaaaaaaa;
  local_2a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_008ff588(&local_2c0,"CandidateFactors",0x10);
  local_2c0 = &PTR_FUN_00d3d170;
  local_280 = (undefined8 *)operator_new(0x18);
  local_270 = local_280 + 3;
  if ((local_280 != (undefined8 *)0x0) &&
     (*local_280 = 0x3ff051eb851eb852, local_280 != (undefined8 *)0xfffffffffffffff8)) {
    local_280[1] = 0x3ff0000000000000;
    if (local_280 + 2 != (undefined8 *)0x0) {
      uStack_308 = uVar6;
      local_310 = puVar10;
      uStack_2f8 = uVar8;
      local_300 = uVar7;
      local_280[2] = 0x3fee666666666666;
      local_2d0 = uVar14;
      uStack_2e8 = uVar11;
      local_2f0 = uVar9;
      uStack_2d8 = uVar13;
      local_2e0 = uVar12;
      puStack_278 = local_270;
      FUN_00661054(&local_310,"HigherBwBiasFactor",0x12);
      puVar2 = puVar2 + 0x10;
      uStack_358 = uVar6;
      local_360 = puVar10;
      uStack_348 = uVar8;
      local_350 = uVar7;
      local_2d0 = 0x3f2a36e2eb1c432d;
      local_320 = uVar14;
      uStack_338 = uVar11;
      local_340 = uVar9;
      uStack_328 = uVar13;
      local_330 = uVar12;
      local_310 = puVar2;
      FUN_00661054(&local_360,"HigherLogBwBiasFactor",0x15);
      uStack_3a8 = uVar6;
      local_3b0 = puVar10;
      uStack_398 = uVar8;
      local_3a0 = uVar7;
      local_320 = 0x3f947ae147ae147b;
      local_370 = uVar14;
      uStack_388 = uVar11;
      local_390 = uVar9;
      uStack_378 = uVar13;
      local_380 = uVar12;
      local_360 = puVar2;
      FUN_00661054(&local_3b0,"InherentLossLowerBound",0x16);
      uStack_3f8 = uVar6;
      local_400 = puVar10;
      uStack_3e8 = uVar8;
      local_3f0 = uVar7;
      local_370 = 0x3f50624dd2f1a9fc;
      local_3c0 = uVar14;
      uStack_3d8 = uVar11;
      local_3e0 = uVar9;
      uStack_3c8 = uVar13;
      local_3d0 = uVar12;
      local_3b0 = puVar2;
      FUN_00661054(&local_400,"LossThresholdOfHighBandwidthPreference",0x26);
      uStack_448 = uVar6;
      local_450 = puVar10;
      uStack_438 = uVar8;
      local_440 = uVar7;
      local_3c0 = 0x3fc999999999999a;
      local_410 = uVar14;
      uStack_428 = uVar11;
      local_430 = uVar9;
      uStack_418 = uVar13;
      local_420 = uVar12;
      local_400 = puVar2;
      FUN_00661054(&local_450,"BandwidthPreferenceSmoothingFactor",0x22);
      local_410 = 0x3f60624dd2f1a9fc;
      local_460 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
      local_470 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
      local_480 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
      local_490 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
      local_4a0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
      local_450 = puVar2;
      FUN_00661054(&local_4a0,"InherentLossUpperBoundBwBalance",0x1f);
      uStack_4e8 = uVar6;
      local_4f0 = puVar10;
      uStack_4d8 = uVar8;
      local_4e0 = uVar7;
      local_4a0 = &PTR_FUN_00d28090;
      local_460 = (undefined1 *)0x186a0;
      local_4b0 = uVar14;
      uStack_4c8 = uVar11;
      local_4d0 = uVar9;
      uStack_4b8 = uVar13;
      local_4c0 = uVar12;
      FUN_00661054(&local_4f0,"InherentLossUpperBoundOffset",0x1c);
      uStack_538 = uVar6;
      local_540 = puVar10;
      uStack_528 = uVar8;
      local_530 = uVar7;
      local_4b0 = 0x3fa999999999999a;
      local_500 = uVar14;
      uStack_518 = uVar11;
      local_520 = uVar9;
      uStack_508 = uVar13;
      local_510 = uVar12;
      local_4f0 = puVar2;
      FUN_00661054(&local_540,"InitialInherentLossEstimate",0x1b);
      local_500 = 0x3f847ae147ae147b;
      uStack_548 = &DAT_aaaaaaaaaaaaaaaa;
      local_550 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_558 = &DAT_aaaaaaaaaaaaaaaa;
      local_560 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_568 = &DAT_aaaaaaaaaaaaaaaa;
      local_570 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_578 = &DAT_aaaaaaaaaaaaaaaa;
      local_580 = &DAT_aaaaaaaaaaaaaaaa;
      local_540 = puVar2;
      FUN_00661054(&local_580,"NewtonIterations",0x10);
      puVar1 = PTR_DAT_00d52028 + 0x10;
      local_590 = uVar14;
      uStack_5c8 = uVar6;
      local_5d0 = puVar10;
      uStack_5b8 = uVar8;
      local_5c0 = uVar7;
      uStack_548 = (undefined1 *)CONCAT44(1,(undefined4)uStack_548);
      uStack_5a8 = uVar11;
      local_5b0 = uVar9;
      uStack_598 = uVar13;
      local_5a0 = uVar12;
      local_580 = puVar1;
      FUN_00661054(&local_5d0,"NewtonStepSize",0xe);
      local_590 = 0x3fe8000000000000;
      uStack_5d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_5e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_5e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_5f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_5f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_600 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_608 = &DAT_aaaaaaaaaaaaaaaa;
      local_610 = &DAT_aaaaaaaaaaaaaaaa;
      local_5d0 = puVar2;
      FUN_00661054(&local_610,"AckedRateCandidate",0x12);
      puVar3 = puVar3 + 0x10;
      uStack_5d8._0_2_ = CONCAT11(1,(undefined1)uStack_5d8);
      uStack_618 = &DAT_aaaaaaaaaaaaaaaa;
      local_620 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_628 = &DAT_aaaaaaaaaaaaaaaa;
      local_630 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_638 = &DAT_aaaaaaaaaaaaaaaa;
      local_640 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_648 = &DAT_aaaaaaaaaaaaaaaa;
      local_650 = &DAT_aaaaaaaaaaaaaaaa;
      local_610 = puVar3;
      FUN_00661054(&local_650,"DelayBasedCandidate",0x13);
      uStack_618._0_2_ = CONCAT11(1,(undefined1)uStack_618);
      uStack_658 = &DAT_aaaaaaaaaaaaaaaa;
      local_660 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_668 = &DAT_aaaaaaaaaaaaaaaa;
      local_670 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_678 = &DAT_aaaaaaaaaaaaaaaa;
      local_680 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_688 = &DAT_aaaaaaaaaaaaaaaa;
      local_690 = &DAT_aaaaaaaaaaaaaaaa;
      local_650 = puVar3;
      FUN_00661054(&local_690,"UpperBoundCandidateInAlr",0x18);
      uStack_658._0_2_ = (ushort)(byte)uStack_658;
      local_6a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_6a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_6b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_6b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_6c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_6c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_6d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_6d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_6e0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
      local_690 = puVar3;
      FUN_00661054(&local_6e0,"ObservationDurationLowerBound",0x1d);
      local_6e0 = &PTR_FUN_00d267f8;
      local_6a0 = (undefined1 *)0x3d090;
      uStack_6e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_6f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_6f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_700 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_708 = &DAT_aaaaaaaaaaaaaaaa;
      local_710 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_718 = &DAT_aaaaaaaaaaaaaaaa;
      local_720 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00661054(&local_720,"ObservationWindowSize",0x15);
      uStack_768 = uVar6;
      local_770 = puVar10;
      uStack_758 = uVar8;
      local_760 = uVar7;
      uStack_6e8 = (undefined1 *)CONCAT44(0xf,(undefined4)uStack_6e8);
      local_730 = uVar14;
      uStack_748 = uVar11;
      local_750 = uVar9;
      uStack_738 = uVar13;
      local_740 = uVar12;
      local_720 = puVar1;
      FUN_00661054(&local_770,"SendingRateSmoothingFactor",0x1a);
      uStack_7b8 = uVar6;
      local_7c0 = puVar10;
      uStack_7a8 = uVar8;
      local_7b0 = uVar7;
      local_730 = 0;
      local_780 = uVar14;
      uStack_798 = uVar11;
      local_7a0 = uVar9;
      uStack_788 = uVar13;
      local_790 = uVar12;
      local_770 = puVar2;
      FUN_00661054(&local_7c0,"InstantUpperBoundTemporalWeightFactor",0x25);
      local_780 = 0x3feccccccccccccd;
      local_7d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_7d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_7e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_7e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_7f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_7f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_800 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_808 = &DAT_aaaaaaaaaaaaaaaa;
      local_810 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
      local_7c0 = puVar2;
      FUN_00661054(&local_810,"InstantUpperBoundBwBalance",0x1a);
      local_810 = &PTR_FUN_00d28090;
      uStack_858 = uVar6;
      local_860 = puVar10;
      uStack_848 = uVar8;
      local_850 = uVar7;
      local_7d0 = (undefined1 *)0x186a0;
      local_820 = uVar14;
      uStack_838 = uVar11;
      local_840 = uVar9;
      uStack_828 = uVar13;
      local_830 = uVar12;
      FUN_00661054(&local_860,"InstantUpperBoundLossOffset",0x1b);
      uStack_8a8 = uVar6;
      local_8b0 = puVar10;
      uStack_898 = uVar8;
      uStack_8a0 = uVar7;
      local_820 = 0x3fa999999999999a;
      local_870 = uVar14;
      uStack_888 = uVar11;
      local_890 = uVar9;
      uStack_878 = uVar13;
      uStack_880 = uVar12;
      local_860 = puVar2;
      FUN_00661054(&local_8b0,"TemporalWeightFactor",0x14);
      uStack_8f8 = uVar6;
      local_900 = puVar10;
      uStack_8e8 = uVar8;
      uStack_8f0 = uVar7;
      local_870 = 0x3feccccccccccccd;
      local_8c0 = uVar14;
      uStack_8d8 = uVar11;
      local_8e0 = uVar9;
      uStack_8c8 = uVar13;
      uStack_8d0 = uVar12;
      local_8b0 = puVar2;
      FUN_00661054(&local_900,"BwBackoffLowerBoundFactor",0x19);
      uStack_948 = uVar6;
      local_950 = puVar10;
      uStack_938 = uVar8;
      uStack_940 = uVar7;
      local_8c0 = 0x3ff0000000000000;
      local_910 = uVar14;
      uStack_928 = uVar11;
      local_930 = uVar9;
      uStack_918 = uVar13;
      uStack_920 = uVar12;
      local_900 = puVar2;
      FUN_00661054(&local_950,"MaxIncreaseFactor",0x11);
      local_910 = 0x3ff4cccccccccccd;
      local_960 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_998 = &DAT_aaaaaaaaaaaaaaaa;
      local_9a0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
      puStack_988 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_990 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_978 = &DAT_aaaaaaaaaaaaaaaa;
      local_980 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_968 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_970 = &DAT_aaaaaaaaaaaaaaaa;
      local_950 = puVar2;
      FUN_00661054(&local_9a0,"DelayedIncreaseWindow",0x15);
      local_9a0 = &PTR_FUN_00d267f8;
      local_960 = (undefined1 *)0x493e0;
      puStack_9d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_9e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_9c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_9d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_9b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_9c0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_9a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_9b0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00661054(&local_9e0,"NotIncreaseIfInherentLossLessThanAverageLoss",0x2c);
      uStack_9a8._0_2_ = CONCAT11(1,(undefined1)uStack_9a8);
      puStack_a18 = &DAT_aaaaaaaaaaaaaaaa;
      local_a20 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a08 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a10 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_9f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_a00 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_9e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_9f0 = &DAT_aaaaaaaaaaaaaaaa;
      local_9e0 = puVar3;
      FUN_00661054(&local_a20,"NotUseAckedRateInAlr",0x14);
      uStack_9e8._0_2_ = CONCAT11(1,(undefined1)uStack_9e8);
      puStack_a58 = &DAT_aaaaaaaaaaaaaaaa;
      local_a60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a48 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a38 = &DAT_aaaaaaaaaaaaaaaa;
      local_a40 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_a28 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a30 = &DAT_aaaaaaaaaaaaaaaa;
      local_a20 = puVar3;
      FUN_00661054(&local_a60,"UseInStartPhase",0xf);
      uStack_a28._0_2_ = CONCAT11(1,(undefined1)uStack_a28);
      puStack_a98 = &DAT_aaaaaaaaaaaaaaaa;
      local_aa0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a78 = &DAT_aaaaaaaaaaaaaaaa;
      local_a80 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_a68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a70 = &DAT_aaaaaaaaaaaaaaaa;
      local_a60 = puVar3;
      FUN_00661054(&local_aa0,"MinNumObservations",0x12);
      uStack_ae8 = uVar6;
      local_af0 = puVar10;
      uStack_ad8 = uVar8;
      uStack_ae0 = uVar7;
      uStack_a68 = (undefined1 *)CONCAT44(3,(undefined4)uStack_a68);
      local_ab0 = uVar14;
      uStack_ac8 = uVar11;
      local_ad0 = uVar9;
      uStack_ab8 = uVar13;
      uStack_ac0 = uVar12;
      local_aa0 = puVar1;
      FUN_00661054(&local_af0,"LowerBoundByAckedRateFactor",0x1b);
      uStack_b38 = uVar6;
      local_b40 = puVar10;
      uStack_b28 = uVar8;
      uStack_b30 = uVar7;
      local_ab0 = 0x3ff0000000000000;
      local_b00 = uVar14;
      uStack_b18 = uVar11;
      local_b20 = uVar9;
      uStack_b08 = uVar13;
      uStack_b10 = uVar12;
      local_af0 = puVar2;
      FUN_00661054(&local_b40,"HoldDurationFactor",0x12);
      local_b00 = 0x4000000000000000;
      puStack_b78 = &DAT_aaaaaaaaaaaaaaaa;
      local_b80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b58 = &DAT_aaaaaaaaaaaaaaaa;
      local_b60 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_b48 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b50 = &DAT_aaaaaaaaaaaaaaaa;
      local_b40 = puVar2;
      FUN_00661054(&local_b80,"UseByteLossRate",0xf);
      uStack_b48._0_2_ = CONCAT11(1,(undefined1)uStack_b48);
      local_b90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_bc8 = &DAT_aaaaaaaaaaaaaaaa;
      local_bd0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
      puStack_bb8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_bc0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_ba8 = &DAT_aaaaaaaaaaaaaaaa;
      local_bb0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_ba0 = &DAT_aaaaaaaaaaaaaaaa;
      local_b80 = puVar3;
      FUN_00661054(&local_bd0,"PaddingDuration",0xf);
      local_bd0 = &PTR_FUN_00d267f8;
      local_b90 = "nt read_session_ticket";
      puStack_c08 = &DAT_aaaaaaaaaaaaaaaa;
      local_c10 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_bf8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c00 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_be8 = &DAT_aaaaaaaaaaaaaaaa;
      local_bf0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_bd8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_be0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00661054(&local_c10,"BoundBestCandidate",0x12);
      uStack_bd8._0_2_ = CONCAT11(1,(undefined1)uStack_bd8);
      uStack_c58 = uVar6;
      local_c60 = puVar10;
      uStack_c48 = uVar8;
      uStack_c50 = uVar7;
      local_c20 = uVar14;
      uStack_c38 = uVar11;
      local_c40 = uVar9;
      uStack_c28 = uVar13;
      uStack_c30 = uVar12;
      local_c10 = puVar3;
      FUN_00661054(&local_c60,"MedianSendingRateFactor",0x17);
      local_c20 = 0x4000000000000000;
      local_c60 = puVar2;
      puVar16 = local_280;
      puVar5 = local_220;
      uVar6 = local_1d0;
      uVar7 = local_180;
      uVar8 = local_130;
      uVar9 = local_e0;
      if (param_2 != (long *)0x0) {
        local_d60 = &local_360;
        ppuStack_d88 = &local_1c0;
        local_d90 = &local_170;
        ppuStack_d98 = &local_120;
        local_d80 = &local_210;
        pppuStack_d78 = &local_260;
        local_d70 = &local_2c0;
        local_da0 = &local_d0;
        local_d68 = &local_310;
        local_d58 = &local_3b0;
        local_d50 = &local_400;
        local_d48 = &local_450;
        local_d40 = &local_4a0;
        local_d38 = &local_4f0;
        local_d30 = &local_540;
        local_d28 = &local_580;
        local_d20 = &local_5d0;
        local_d18 = &local_610;
        local_d10 = &local_650;
        local_d08 = &local_690;
        local_d00 = &local_6e0;
        local_cf8 = &local_720;
        local_cf0 = &local_770;
        local_ce8 = &local_7c0;
        local_ce0 = &local_810;
        local_cd8 = &local_860;
        local_cd0 = &local_8b0;
        local_cc8 = &local_900;
        local_cc0 = &local_950;
        local_cb8 = &local_9a0;
        local_cb0 = &local_9e0;
        local_ca8 = &local_a20;
        local_ca0 = &local_a60;
        local_c98 = &local_aa0;
        local_c90 = &local_af0;
        local_c88 = &local_b40;
        local_c80 = &local_b80;
        pppuStack_c78 = &local_bd0;
        local_c70 = &local_c10;
        ppuStack_c68 = &local_c60;
        (**(code **)(*param_2 + 0x10))(&local_db8,param_2,"WebRTC-Bwe-LossBasedBweV2",0x19);
        ppppuVar4 = (undefined8 ****)local_db8;
        if (-1 < (char)bStack_da1) {
          uStack_db0 = (ulong)bStack_da1;
          ppppuVar4 = &local_db8;
        }
        FUN_00661cc0(&local_da0,0x28,ppppuVar4,uStack_db0);
        puVar16 = local_280;
        puVar5 = local_220;
        uVar6 = local_1d0;
        uVar7 = local_180;
        uVar8 = local_130;
        uVar9 = local_e0;
        if ((char)bStack_da1 < '\0') {
          operator_delete(local_db8);
          puVar16 = local_280;
          puVar5 = local_220;
          uVar6 = local_1d0;
          uVar7 = local_180;
          uVar8 = local_130;
          uVar9 = local_e0;
        }
      }
      local_280 = puVar16;
      local_220 = puVar5;
      local_1d0 = uVar6;
      local_180 = uVar7;
      local_130 = uVar8;
      local_e0 = uVar9;
      if (((ulong)uStack_98 & 0x100) == 0) {
        uVar15 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        uVar17 = (long)puStack_278 - (long)puVar16;
        if (uVar17 == 0) {
          __dest = (void *)0x0;
          lVar19 = 0;
        }
        else {
          if ((long)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_007dd938();
          }
          __dest = operator_new(uVar17);
          lVar19 = (long)__dest + uVar17;
          memcpy(__dest,puVar16,uVar17);
        }
        param_1[8] = local_2d0;
        param_1[9] = local_320;
        param_1[0xd] = local_460;
        param_1[10] = local_370;
        param_1[0xb] = local_3c0;
        param_1[0xc] = local_410;
        *(undefined1 *)((long)param_1 + 0x91) = uStack_618._1_1_;
        param_1[0xe] = local_4b0;
        param_1[0xf] = local_500;
        *(undefined4 *)(param_1 + 0x10) = uStack_548._4_4_;
        *(undefined4 *)((long)param_1 + 0x84) = 0xaaaaaaaa;
        param_1[0x11] = local_590;
        param_1[0x13] = local_6a0;
        *(undefined1 *)(param_1 + 0x12) = uStack_5d8._1_1_;
        *(undefined1 *)((long)param_1 + 0x92) = uStack_658._1_1_;
        param_1[0x15] = local_730;
        param_1[0x16] = local_780;
        *(undefined1 *)((long)param_1 + 0x97) = 0xaa;
        param_1[0x17] = local_7d0;
        *(undefined1 *)((long)param_1 + 0xeb) = 0xaa;
        *(undefined4 *)(param_1 + 0x14) = uStack_6e8._4_4_;
        *(undefined4 *)((long)param_1 + 0xa4) = 0xaaaaaaaa;
        param_1[0x18] = local_820;
        param_1[0x19] = local_870;
        param_1[0x1c] = local_960;
        *(undefined1 *)(param_1 + 0x20) = uStack_b48._1_1_;
        param_1[0x1a] = local_8c0;
        param_1[0x1b] = local_910;
        *(undefined1 *)(param_1 + 0x1d) = uStack_9a8._1_1_;
        *(undefined1 *)((long)param_1 + 0xea) = uStack_a28._1_1_;
        param_1[0x21] = local_b90;
        *(undefined4 *)((long)param_1 + 0x93) = 0xaaaaaaaa;
        *(undefined4 *)((long)param_1 + 0xec) = uStack_a68._4_4_;
        param_1[0x1e] = local_ab0;
        param_1[0x1f] = local_b00;
        *(undefined4 *)((long)param_1 + 0x104) = 0xaaaaaaaa;
        *(undefined4 *)((long)param_1 + 0x101) = 0xaaaaaaaa;
        *(undefined4 *)((long)param_1 + 0x112) = 0xaaaaaaaa;
        *(undefined2 *)((long)param_1 + 0x116) = 0xaaaa;
        uVar15 = 1;
        *param_1 = uVar9;
        param_1[1] = uVar8;
        param_1[2] = uVar7;
        param_1[3] = uVar6;
        param_1[4] = puVar5;
        param_1[5] = __dest;
        param_1[6] = lVar19;
        param_1[7] = lVar19;
        *(undefined1 *)((long)param_1 + 0xe9) = uStack_9e8._1_1_;
        *(undefined1 *)(param_1 + 0x22) = uStack_bd8._1_1_;
        *(undefined1 *)((long)param_1 + 0x111) = 0;
        param_1[0x23] = local_c20;
      }
      *(undefined1 *)(param_1 + 0x24) = uVar15;
      FUN_006634ac(&local_c60);
      FUN_006634ac(&local_c10);
      FUN_006634ac(&local_bd0);
      FUN_006634ac(&local_b80);
      FUN_006634ac(&local_b40);
      FUN_006634ac(&local_af0);
      FUN_006634ac(&local_aa0);
      FUN_006634ac(&local_a60);
      FUN_006634ac(&local_a20);
      FUN_006634ac(&local_9e0);
      FUN_006634ac(&local_9a0);
      FUN_006634ac(&local_950);
      FUN_006634ac(&local_900);
      FUN_006634ac(&local_8b0);
      FUN_006634ac(&local_860);
      FUN_006634ac(&local_810);
      FUN_006634ac(&local_7c0);
      FUN_006634ac(&local_770);
      FUN_006634ac(&local_720);
      FUN_006634ac(&local_6e0);
      FUN_006634ac(&local_690);
      FUN_006634ac(&local_650);
      FUN_006634ac(&local_610);
      FUN_006634ac(&local_5d0);
      FUN_006634ac(&local_580);
      FUN_006634ac(&local_540);
      FUN_006634ac(&local_4f0);
      FUN_006634ac(&local_4a0);
      FUN_006634ac(&local_450);
      FUN_006634ac(&local_400);
      FUN_006634ac(&local_3b0);
      FUN_006634ac(&local_360);
      FUN_006634ac(&local_310);
      local_2c0 = &PTR_FUN_00d3d170;
      if (local_280 != (undefined8 *)0x0) {
        uVar18 = (ulong)((long)puStack_278 + (-8 - ((long)puStack_278 << 0x3d))) >> 3;
        uVar17 = (ulong)(((long)local_280 - (long)puStack_278 << 0x3d) -
                        ((long)local_280 - (long)puStack_278)) >> 3;
        if (uVar18 <= uVar17) {
          uVar17 = uVar18;
        }
        puVar16 = puStack_278;
        if ((1 < uVar17) && ((((int)local_280 - (int)puStack_278 | -(int)puStack_278) & 7U) == 0)) {
          uVar17 = uVar17 & 0x1ffffffffffffffe;
          puVar16 = puStack_278 + -uVar17;
          do {
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        while (puVar16 != local_280) {
          puVar16 = puVar16 + -1;
          if (puVar16 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puStack_278 = local_280;
        operator_delete(local_280);
      }
      FUN_006634ac(&local_2c0);
      FUN_006634ac(&local_260);
      FUN_006634ac(&local_210);
      FUN_006634ac(&local_1c0);
      FUN_006634ac(&local_170);
      FUN_006634ac(&local_120);
      FUN_006634ac(&local_d0);
      return;
    }
  }
  puStack_278 = local_280;
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008f9ef0  FUN_008f9ef0 =====

bool FUN_008f9ef0(long param_1)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined1 uStack_69;
  char *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  
  if (*(char *)(param_1 + 0x130) == '\x01') {
    bVar7 = 1.0 < *(double *)(param_1 + 0x10);
    if (*(double *)(param_1 + 0x10) <= 1.0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x10),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x12a2,
                     "The bandwidth rampup upper bound factor must be greater than 1: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
    }
    if (*(double *)(param_1 + 0x18) <= 1.0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x18),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x12d2,
                     "The bandwidth rampup upper bound factor in hold must be greater than 1: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(double *)(param_1 + 0x20) < 0.0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x20),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1302,
                     "The bandwidth rampup hold threshold mustmust be non-negative.: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(double *)(param_1 + 0x28) < 0.0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x28),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1332,
                     "The rampup acceleration max factor must be non-negative.: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(long *)(param_1 + 0x30) < 1) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        uVar3 = *(ulong *)(param_1 + 0x30);
        uVar2 = uVar3 / 1000000;
        if (499999 < uVar3 % 1000000) {
          uVar2 = uVar2 + 1;
        }
        if ((uVar3 & 0x8000000000000000) != 0) {
          uVar2 = -(-uVar3 / 1000000) - (ulong)(500000 < -uVar3 % 1000000);
        }
        FUN_00623bb0(&DAT_001f6276,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1362,
                     "The rampup acceleration maxout time must be above zero: ",uVar2);
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    pdVar5 = *(double **)(param_1 + 0x38);
    pdVar1 = *(double **)(param_1 + 0x40);
    if (pdVar5 != pdVar1) {
      do {
        dVar8 = *pdVar5;
        if (dVar8 <= 0.0) {
          uVar2 = FUN_004022fc();
          if ((uVar2 & 1) == 0) {
            FUN_00623bb0(dVar8,&DAT_001f667e,
                         "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x139a,
                         "All candidate factors must be greater than zero: ");
          }
          bVar7 = false;
        }
        pdVar5 = pdVar5 + 1;
      } while (pdVar5 != pdVar1);
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
    }
    if (((*(byte *)(param_1 + 0xa0) & 1) == 0) && ((*(byte *)(param_1 + 0xa1) & 1) == 0)) {
      pdVar5 = *(double **)(param_1 + 0x38);
      pdVar1 = *(double **)(param_1 + 0x40);
      if (pdVar5 != pdVar1) {
        uVar2 = (long)pdVar1 + (-8 - (long)pdVar5);
        uVar6 = (uint)uVar2;
        if ((~uVar6 & 0x18) != 0) {
          uVar3 = (ulong)((uVar6 >> 3) + 1) & 3;
          pdVar4 = pdVar5;
          do {
            pdVar5 = pdVar4 + 1;
            if (*pdVar4 != 1.0) goto LAB_008fa1f8;
            uVar3 = uVar3 - 1;
            pdVar4 = pdVar5;
          } while (uVar3 != 0);
        }
        if (0x17 < uVar2) {
          do {
            if ((((*pdVar5 != 1.0) || (pdVar5[1] != 1.0)) || (pdVar5[2] != 1.0)) ||
               (pdVar5[3] != 1.0)) goto LAB_008fa1f8;
            pdVar5 = pdVar5 + 4;
          } while (pdVar5 != pdVar1);
        }
      }
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x13fa,
                     "The configuration does not allow generating candidates. Specify a candidate factor other than 1.0, allow the acknowledged rate to be a candidate, and/or allow the delay based estimate to be a candidate."
                    );
      }
      bVar7 = false;
    }
LAB_008fa1f8:
    if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
LAB_008faa08:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    if (*(double *)(param_1 + 0x50) < 0.0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x50),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1442,
                     "The higher bandwidth bias factor must be non-negative: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0x60);
    if ((dVar8 < 0.0) || (dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x60),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x147a,
                     "The inherent loss lower bound must be in [0, 1): ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0x68);
    if ((dVar8 < 0.0) || (dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x68),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x14aa,
                     "The loss threshold of high bandwidth preference must be in [0, 1): ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0x70);
    if ((dVar8 <= 0.0) || (dVar8 != 1.0 && dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x70),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x14e2,
                     "The bandwidth preference smoothing factor must be in (0, 1]: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(long *)(param_1 + 0x78) < 1) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00665ccc(&local_68,*(undefined8 *)(param_1 + 0x78));
        FUN_00623bb0(&DAT_001f4e90,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x151a,
                     "The inherent loss upper bound bandwidth balance must be positive: ",&local_68)
        ;
        if ((long)local_58 < 0) {
          operator_delete(local_68);
        }
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0x80);
    if ((dVar8 < 1.0 == NAN(dVar8)) || (dVar8 < *(double *)(param_1 + 0x60))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        local_68 = "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc";
        local_60 = 0x1562;
        local_58 = &uStack_69;
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x80),&DAT_002256b7,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1562,
                     "The inherent loss upper bound must be greater than or equal to the inherent loss lower bound, which is "
                     ,", and less than 1: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0x88);
    if ((dVar8 < 0.0) || (dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x88),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x15b2,
                     "The initial inherent loss estimate must be in [0, 1): ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(int *)(param_1 + 0x90) < 1) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(&DAT_001f4e94,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x15e2,
                     "The number of Newton iterations must be positive: ",
                     *(undefined4 *)(param_1 + 0x90));
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(double *)(param_1 + 0x98) <= 0.0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0x98),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x160a,
                     "The Newton step size must be positive: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(long *)(param_1 + 0xa8) < 1) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_006224f8(&local_68,*(undefined8 *)(param_1 + 0xa8));
        FUN_00623bb0(&DAT_001f4e90,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1632,
                     "The observation duration lower bound must be positive: ",&local_68);
        if ((long)local_58 < 0) {
          operator_delete(local_68);
        }
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(int *)(param_1 + 0xb0) < 2) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(&DAT_001f4e94,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1662,
                     "The observation window size must be at least 2: ",
                     *(undefined4 *)(param_1 + 0xb0));
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0xb8);
    if ((dVar8 < 0.0) || (dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0xb8),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1692,
                     "The sending rate smoothing factor must be in [0, 1): ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0xc0);
    if ((dVar8 <= 0.0) || (dVar8 != 1.0 && dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0xc0),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x16ca,
                     "The instant upper bound temporal weight factor must be in (0, 1]");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(long *)(param_1 + 200) < 1) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00665ccc(&local_68,*(undefined8 *)(param_1 + 200));
        FUN_00623bb0(&DAT_001f4e90,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x16fa,
                     "The instant upper bound bandwidth balance must be positive: ",&local_68);
        if ((long)local_58 < 0) {
          operator_delete(local_68);
        }
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0xd0);
    if ((dVar8 < 0.0) || (dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0xd0),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1732,
                     "The instant upper bound loss offset must be in [0, 1): ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0xd8);
    if ((dVar8 <= 0.0) || (dVar8 != 1.0 && dVar8 < 1.0 == NAN(dVar8))) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0xd8),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x176a,
                     "The temporal weight factor must be in (0, 1]: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    dVar8 = *(double *)(param_1 + 0xe0);
    if (dVar8 != 1.0 && dVar8 < 1.0 == NAN(dVar8)) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0xe0),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1792,
                     "The bandwidth backoff lower bound factor must not be greater than 1: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(double *)(param_1 + 0xe8) <= 0.0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(*(undefined8 *)(param_1 + 0xe8),&DAT_001f667e,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x17ca,
                     "The maximum increase factor must be positive: ");
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(long *)(param_1 + 0xf0) < 1) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        uVar2 = *(ulong *)(param_1 + 0xf0);
        if ((long)uVar2 < 0) {
          uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
        }
        else {
          uVar3 = uVar2 / 1000;
          if (499 < uVar2 % 1000) {
            uVar3 = uVar3 + 1;
          }
        }
        FUN_00623bb0(&DAT_001f6276,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x17f2,
                     "The delayed increase window must be positive: ",uVar3);
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (*(int *)(param_1 + 0xfc) < 1) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
        FUN_00623bb0(&DAT_001f4e94,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x181a,
                     "The min number of observations must be positive: ",
                     *(undefined4 *)(param_1 + 0xfc));
      }
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      bVar7 = false;
    }
    if (0.0 <= *(double *)(param_1 + 0x100)) {
      return bVar7;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008faa08;
      FUN_00623bb0(*(undefined8 *)(param_1 + 0x100),&DAT_001f667e,
                   "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1842,
                   "The estimate lower bound by acknowledged rate factor must be non-negative: ");
    }
  }
  return false;
}


// ===== 008faa1c  FUN_008faa1c =====

void FUN_008faa1c(undefined8 *param_1,ulong param_2)

{
  void *__src;
  long lVar1;
  bool bVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  
  __src = (void *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  __n = (long)puVar3 - (long)__src;
  bVar2 = param_2 < (ulong)(((long)__n >> 4) * -0x5555555555555555);
  lVar1 = param_2 + ((long)__n >> 4) * 0x5555555555555555;
  if (bVar2 || lVar1 == 0) {
    if (bVar2) {
      puVar5 = (undefined8 *)((long)__src + param_2 * 0x30);
      uVar4 = (ulong)(((long)puVar5 - (long)puVar3) * 0x555555555555555) >> 4;
      uVar7 = (long)puVar3 * -0x555555555555555 - 0x10U >> 4;
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      if ((1 < uVar4) && ((((int)__src - (int)puVar3 | -(int)puVar3) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        puVar3 = puVar3 + uVar4 * -6;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar3 != puVar5) {
        puVar3 = puVar3 + -6;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar5;
    }
  }
  else {
    lVar6 = param_1[2] - (long)__src >> 4;
    uVar4 = lVar6 * -0x5555555555555555;
    if (uVar4 < param_2) {
      if (param_2 < 0x555555555555556) {
        uVar7 = lVar6 * 0x5555555555555556;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar4) {
          uVar7 = 0x555555555555555;
        }
        if (uVar7 < 0x555555555555556) {
          __dest = operator_new(uVar7 * 0x30);
          if (lVar1 * 0x30 == 0) {
            puVar3 = (undefined8 *)((long)__dest + __n);
          }
          else {
            puVar3 = (undefined8 *)((long)__dest + lVar1 * 0x30 + __n);
            puVar5 = (undefined8 *)((long)__dest + __n);
            do {
              if (puVar5 == (undefined8 *)0x0) goto LAB_008fac4c;
              puVar5[3] = 0;
              puVar5[2] = 0;
              puVar5[5] = 0;
              puVar5[4] = 0;
              puVar5[1] = 0;
              *puVar5 = 0;
              puVar5[2] = 0x8000000000000000;
              puVar5[3] = 0;
              puVar5[4] = 0;
              *(undefined4 *)(puVar5 + 5) = 0xffffffff;
              puVar5 = puVar5 + 6;
            } while (puVar5 != puVar3);
          }
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar3;
          param_1[2] = (void *)((long)__dest + uVar7 * 0x30);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_008fd9a0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar5 = puVar3;
    if (lVar1 * 0x30 != 0) {
      puVar5 = puVar3 + lVar1 * 6;
      do {
        if (puVar3 == (undefined8 *)0x0) {
LAB_008fac4c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[2] = 0x8000000000000000;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(undefined4 *)(puVar3 + 5) = 0xffffffff;
        puVar3 = puVar3 + 6;
      } while (puVar3 != puVar5);
    }
    param_1[1] = puVar5;
  }
  return;
}


// ===== 008fac68  FUN_008fac68 =====

void FUN_008fac68(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  __src = (void *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar11 = (long)__n >> 3;
  uVar6 = param_2 - uVar11;
  iVar9 = (int)puVar4;
  if (param_2 < uVar11 || uVar6 == 0) {
    if (param_2 < uVar11) {
      puVar10 = (undefined8 *)((long)__src + param_2 * 8);
      uVar6 = (ulong)(((long)puVar10 - (long)puVar4 << 0x3d) - ((long)puVar10 - (long)puVar4)) >> 3;
      uVar11 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
      if (uVar11 <= uVar6) {
        uVar6 = uVar11;
      }
      if ((1 < uVar6) && ((((int)__src - iVar9 | -iVar9) & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar4 != puVar10) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar10;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 3) < param_2) {
      if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007dd938();
      }
      uVar1 = (long)uVar8 >> 2;
      if ((ulong)((long)uVar8 >> 2) <= param_2) {
        uVar1 = param_2;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar1 * 8);
      if (uVar6 * 8 == 0) {
        puVar10 = (undefined8 *)((long)pvVar3 + __n);
      }
      else {
        puVar10 = (undefined8 *)((long)pvVar3 + uVar6 * 8 + __n);
        uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 3;
        uVar8 = (param_2 * 8 - __n) - 8 >> 3;
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        if (uVar6 < 8) {
          puVar4 = (undefined8 *)((long)pvVar3 + __n);
        }
        else {
          puVar4 = (undefined8 *)((long)pvVar3 + __n);
          if ((((int)__src - iVar9) - (int)pvVar3 & 7U) == 0) {
            uVar8 = uVar6 + 1 & 3;
            uVar2 = 4;
            if (uVar8 != 0) {
              uVar2 = uVar8;
            }
            lVar5 = (uVar6 + 1) - uVar2;
            puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
            puVar4 = (undefined8 *)((long)pvVar3 + lVar5 * 8 + __n);
            do {
              lVar5 = lVar5 + -4;
              puVar7[-1] = 0;
              puVar7[-2] = 0;
              puVar7[1] = 0;
              *puVar7 = 0;
              puVar7 = puVar7 + 4;
            } while (lVar5 != 0);
          }
        }
        do {
          if (puVar4 == (undefined8 *)0x0) {
LAB_008faf0c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar7 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar7;
        } while (puVar7 != puVar10);
      }
      __dest = (void *)((long)pvVar3 + uVar11 * -8 + __n);
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar10;
      param_1[2] = (void *)((long)pvVar3 + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar10 = puVar4;
      if ((uVar6 & 0x1fffffffffffffff) != 0) {
        puVar10 = puVar4 + uVar6;
        uVar11 = (param_2 * 8 - __n) - 8 >> 3;
        uVar6 = (ulong)-(long)puVar4 >> 3;
        if (uVar11 <= (ulong)-(long)puVar4 >> 3) {
          uVar6 = uVar11;
        }
        if ((5 < uVar6) && ((-iVar9 & 7U) == 0)) {
          uVar11 = uVar6 + 1 & 3;
          uVar8 = 4;
          if (uVar11 != 0) {
            uVar8 = uVar11;
          }
          puVar7 = puVar4 + 2;
          lVar5 = (uVar6 + 1) - uVar8;
          puVar4 = puVar4 + lVar5;
          do {
            lVar5 = lVar5 + -4;
            puVar7[-1] = 0;
            puVar7[-2] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7 = puVar7 + 4;
          } while (lVar5 != 0);
        }
        do {
          if (puVar4 == (undefined8 *)0x0) goto LAB_008faf0c;
          puVar7 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar7;
        } while (puVar7 != puVar10);
      }
      param_1[1] = puVar10;
    }
  }
  return;
}


// ===== 008faf28  FUN_008faf28 =====

void FUN_008faf28(long param_1)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 0x130) == '\x01') {
    uVar2 = 0;
    do {
      if ((long)*(int *)(param_1 + 0xb0) <= (long)uVar2) {
        return;
      }
      lVar1 = *(long *)(param_1 + 0x1e8);
      if ((ulong)(*(long *)(param_1 + 0x1f0) - lVar1 >> 3) <= uVar2) {
LAB_008fafe4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      dVar3 = pow(*(double *)(param_1 + 0xd8),(double)(uVar2 & 0xffffffff));
      *(double *)(lVar1 + uVar2 * 8) = dVar3;
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) break;
      lVar1 = *(long *)(param_1 + 0x1d0);
      if ((ulong)(*(long *)(param_1 + 0x1d8) - lVar1 >> 3) <= uVar2) goto LAB_008fafe4;
      dVar3 = pow(*(double *)(param_1 + 0xc0),(double)(uVar2 & 0xffffffff));
      *(double *)(lVar1 + uVar2 * 8) = dVar3;
      uVar2 = uVar2 + 1;
    } while ((*(byte *)(param_1 + 0x130) & 1) != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 008faff8  FUN_008faff8 =====

undefined1 FUN_008faff8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x130);
}


// ===== 008fb004  FUN_008fb004 =====

bool FUN_008fb004(long param_1)

{
  if ((*(char *)(param_1 + 0x130) == '\x01') &&
     (*(long *)(param_1 + 0x140) + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
    return *(int *)(param_1 + 0xfc) <= *(int *)(param_1 + 0x148);
  }
  return false;
}


// ===== 008fb044  FUN_008fb044 =====

byte FUN_008fb044(long param_1)

{
  if (((*(char *)(param_1 + 0x130) == '\x01') &&
      (*(long *)(param_1 + 0x140) + 0x7fffffffffffffffU < 0xfffffffffffffffe)) &&
     (*(int *)(param_1 + 0xfc) <= *(int *)(param_1 + 0x148))) {
    return *(byte *)(param_1 + 0xfa) & 1;
  }
  return 0;
}


// ===== 008fb08c  FUN_008fb08c =====

undefined1 FUN_008fb08c(long param_1)

{
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    return *(undefined1 *)(param_1 + 0xfa);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 008fb0c0  FUN_008fb0c0 =====

undefined1  [16] FUN_008fb0c0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x130) == '\x01') {
    if (*(long *)(param_1 + 0x140) + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      if (*(int *)(param_1 + 0xfc) <= *(int *)(param_1 + 0x148)) {
        lVar1 = *(long *)(param_1 + 0x228);
        uVar3 = *(undefined8 *)(param_1 + 0x230);
        goto LAB_008fb1b8;
      }
    }
    else {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x432,
                     "The estimator must be initialized before it can be used.");
      }
    }
    if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    if ((*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0xfc)) &&
       (uVar2 = FUN_004022fc(), (uVar2 & 1) == 0)) {
      pcVar4 = "The estimator must receive enough loss statistics before it can be used.";
      uVar3 = 0x452;
LAB_008fb19c:
      FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                   uVar3,pcVar4);
    }
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      pcVar4 = "The estimator must be enabled before it can be used.";
      uVar3 = 0x412;
      goto LAB_008fb19c;
    }
  }
  lVar1 = *(long *)(param_1 + 0x220);
  uVar3 = 3;
  if (0xfffffffffffffffd < lVar1 + 0x7fffffffffffffffU) {
    lVar1 = 0x7fffffffffffffff;
  }
LAB_008fb1b8:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = lVar1;
  return auVar5;
}


// ===== 008fb1dc  FUN_008fb1dc =====

void FUN_008fb1dc(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  void *local_38 [2];
  char cStack_21;
  
  if (0xfffffffffffffffd < param_2 + 0x7fffffffffffffffU) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return;
    }
    FUN_00665ccc(local_38,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                 0x4da,"The acknowledged bitrate must be finite: ",local_38);
    if (-1 < cStack_21) {
      return;
    }
    operator_delete(local_38[0]);
    return;
  }
  if ((char)param_1[1] == '\x01') {
    *param_1 = param_2;
    if ((*(uint *)(param_1 + 1) & 1) == 0) goto LAB_008fb2b0;
LAB_008fb28c:
    if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    dVar5 = (double)param_1[0x20];
    if (dVar5 == 0.0 || dVar5 < 0.0 != NAN(dVar5)) goto LAB_008fb2b0;
    lVar3 = (long)(dVar5 * (double)param_2);
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_008fb30c;
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if ((*(uint *)(param_1 + 1) & 1) != 0) goto LAB_008fb28c;
LAB_008fb2b0:
    lVar3 = 0;
  }
  lVar4 = param_1[0x42];
  lVar1 = lVar3;
  if (lVar3 <= lVar4) {
    lVar1 = lVar4;
  }
  if (0xfffffffffffffffd < lVar4 + 0x7fffffffffffffffU) {
    lVar1 = lVar3;
  }
  if ((char)param_1[0x39] == '\x01') {
    param_1[0x38] = lVar1;
  }
  else {
    if (param_1 + 0x38 == (long *)0x0) {
LAB_008fb30c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    param_1[0x38] = lVar1;
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  return;
}


// ===== 008fb334  FUN_008fb334 =====

void FUN_008fb334(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  void *local_48 [2];
  char cStack_31;
  
  if (param_2 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    lVar2 = 0;
    param_1[0x42] = param_2;
    if (((*(uint *)(param_1 + 1) & 1) != 0) && (*param_1 + 0x7fffffffffffffffU < 0xfffffffffffffffe)
       ) {
      if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      dVar3 = (double)param_1[0x20];
      if (dVar3 == 0.0 || dVar3 < 0.0 != NAN(dVar3)) {
        lVar2 = 0;
      }
      else {
        lVar2 = (long)(dVar3 * (double)*param_1);
      }
    }
    if (lVar2 <= param_2) {
      lVar2 = param_2;
    }
    if ((char)param_1[0x39] == '\x01') {
      param_1[0x38] = lVar2;
    }
    else {
      if (param_1 + 0x38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      param_1[0x38] = lVar2;
      *(undefined1 *)(param_1 + 0x39) = 1;
    }
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00665ccc(local_48,param_2);
      FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                   0x58a,"The min bitrate must be finite: ",local_48);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
  }
  if (param_3 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    param_1[0x43] = param_3;
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00665ccc(local_48,param_3);
      FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                   0x5c2,"The max bitrate must be finite: ",local_48);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
  }
  return;
}


// ===== 008fb4dc  FUN_008fb4dc =====

/* WARNING: Removing unreachable block (ram,0x008fb718) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff70 : 0x008fbc24 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008fb4dc(long *param_1,undefined8 param_2,long param_3,char **param_4,uint param_5)

{
  char ***pppcVar1;
  char ***pppcVar2;
  char **ppcVar3;
  long lVar4;
  long *plVar5;
  long **pplVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  char **ppcVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  char **ppcVar15;
  long lVar16;
  long lVar17;
  char **ppcVar18;
  char **ppcVar19;
  double dVar20;
  double dVar21;
  char *pcVar22;
  char *pcVar23;
  double dVar24;
  undefined1 uStack_a1;
  long *local_a0;
  char ***pppcStack_98;
  undefined1 *local_90;
  long **pplStack_88;
  char *local_80;
  undefined1 **ppuStack_78;
  char *local_70;
  char **ppcStack_68;
  char **local_60;
  char **local_58;
  char **local_50;
  undefined1 *local_48;
  
  param_1[0x44] = (long)param_4;
  if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) != 0) {
      return;
    }
    pcVar22 = "The estimator must be enabled before it can be used.";
    uVar9 = 0x61a;
LAB_008fb638:
    FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                 uVar9,pcVar22);
    return;
  }
  if (param_3 == 0) {
    uVar8 = FUN_0044075c();
    if ((uVar8 & 1) != 0) {
      return;
    }
    pcVar22 = "The estimate cannot be updated without any loss statistics.";
    uVar9 = 0x648;
    goto LAB_008fb638;
  }
  uVar8 = FUN_008fbd48();
  if ((uVar8 & 1) == 0) {
    return;
  }
  ppcVar10 = (char **)param_1[0x28];
  if (0xfffffffffffffffd < param_1[0x28] + 0x7fffffffffffffffU) {
    if (0xfffffffffffffffd < (long)param_4 + 0x7fffffffffffffffU) {
      uVar8 = FUN_004022fc();
      if ((uVar8 & 1) != 0) {
        return;
      }
      FUN_00665ccc(&local_58,param_4);
      FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                   0x6a2,"The delay based estimate must be finite: ",&local_58);
      return;
    }
    param_1[0x28] = (long)param_4;
    param_1[0x45] = (long)param_4;
    *(undefined4 *)(param_1 + 0x46) = 3;
    ppcVar10 = param_4;
  }
  pcVar22 = (char *)param_1[0x27];
  FUN_008fc154(&local_58,param_1,param_5 & 1);
  ppcVar15 = local_50;
  if (local_58 != local_50) {
    ppcVar18 = local_58;
    ppcVar19 = ppcVar10;
    pcVar23 = pcVar22;
    dVar21 = -1.79769313486232e+308;
    do {
      ppcStack_68 = (char **)ppcVar18[1];
      local_70 = *ppcVar18;
      FUN_008fc564(param_1,&local_70);
      dVar20 = (double)FUN_008fc6cc(param_1,&local_70);
      ppcVar10 = ppcStack_68;
      pcVar22 = local_70;
      dVar24 = dVar20;
      if (((dVar20 == dVar21 || dVar20 < dVar21 != (NAN(dVar20) || NAN(dVar21))) &&
          (ppcVar10 = ppcVar19, pcVar22 = pcVar23, dVar24 = dVar21, dVar20 == dVar21)) &&
         (ppcVar10 = ppcStack_68, pcVar22 = local_70, dVar24 = dVar20,
         (long)ppcStack_68 <= (long)ppcVar19)) {
        ppcVar10 = ppcVar19;
        pcVar22 = pcVar23;
        dVar24 = dVar21;
      }
      ppcVar18 = ppcVar18 + 2;
      ppcVar19 = ppcVar10;
      pcVar23 = pcVar22;
      dVar21 = dVar24;
    } while (ppcVar18 != ppcVar15);
  }
  local_60 = ppcVar10;
  if (local_58 != (char **)0x0) {
    uVar14 = (ulong)((long)local_50 + (-0x10 - ((long)local_50 << 0x3c))) >> 4;
    uVar8 = (ulong)(((long)local_58 - (long)local_50 << 0x3c) - ((long)local_58 - (long)local_50))
            >> 4;
    if (uVar14 <= uVar8) {
      uVar8 = uVar14;
    }
    if ((1 < uVar8) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 0xfU) == 0)) {
      uVar8 = uVar8 & 0xffffffffffffffe;
      local_50 = local_50 + uVar8 * -2;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (local_50 != local_58) {
      local_50 = local_50 + -2;
      if (local_50 == (char **)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_50 = local_58;
    operator_delete(local_58);
  }
  pppcVar1 = (char ***)(param_1 + 0x28);
  ppcVar15 = *pppcVar1;
  if ((long)ppcVar10 < (long)ppcVar15) {
    param_1[0x35] = param_1[0x34];
  }
  dVar21 = (double)param_1[0x4c];
  if (dVar21 != (double)pcVar22 && dVar21 < (double)pcVar22 == (NAN(dVar21) || NAN((double)pcVar22))
     ) {
    if ((*(byte *)(param_1 + 0x26) & 1) == 0) goto LAB_008fbd34;
    if (((long)ppcVar15 < (long)ppcVar10) && ((*(byte *)(param_1 + 0x1f) & 1) != 0)) {
      local_60 = ppcVar15;
      ppcVar10 = ppcVar15;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x46);
  if (uVar12 != 3) {
    if (param_1[0x40] + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      if ((*(byte *)(param_1 + 0x26) & 1) == 0) goto LAB_008fbd34;
      lVar13 = param_1[0x1e];
      lVar11 = lVar13;
      if (lVar13 != -0x8000000000000000) {
        lVar11 = lVar13 + param_1[0x40];
      }
      if (lVar13 != 0x7fffffffffffffff) {
        lVar13 = lVar11;
      }
      if (param_1[0x34] < lVar13) {
        if (param_1[0x41] <= (long)ppcVar10) {
          ppcVar10 = (char **)param_1[0x41];
        }
        local_60 = ppcVar10;
      }
    }
    if (((((long)ppcVar15 < (long)ppcVar10) || ((uVar12 < 2 && (ppcVar15 == ppcVar10)))) &&
        ((*(uint *)(param_1 + 1) & 1) != 0)) &&
       (lVar11 = *param_1, lVar11 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
      if ((*(byte *)(param_1 + 0x26) & 1) == 0) goto LAB_008fbd34;
      dVar21 = (double)param_1[2];
      if ((param_1[0x49] + 0x7fffffffffffffffU < 0xfffffffffffffffe) &&
         (lVar11 < (long)((double)param_1[4] * (double)param_1[0x49]))) {
        dVar21 = (double)param_1[3];
      }
      local_58 = (char **)(long)(dVar21 * (double)lVar11);
      pppcVar2 = &local_58;
      if ((long)ppcVar10 <= (long)(dVar21 * (double)lVar11)) {
        pppcVar2 = &local_60;
      }
      if ((long)*pppcVar2 <= (long)ppcVar15) {
        pppcVar2 = pppcVar1;
      }
      ppcVar10 = *pppcVar2;
      if ((uVar12 == 2) && (ppcVar10 == ppcVar15)) {
        ppcVar18 = ppcVar15;
        if (ppcVar15 != (char **)0x8000000000000000) {
          ppcVar18 = (char **)((long)ppcVar15 + 1);
        }
        ppcVar10 = ppcVar15;
        if (ppcVar15 != (char **)0x7fffffffffffffff) {
          ppcVar10 = ppcVar18;
        }
      }
    }
  }
  ppcVar15 = (char **)param_1[0x44];
  cVar7 = (char)param_1[0x39];
  if ((long)ppcVar15 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    if (cVar7 == '\0') {
      ppcVar18 = (char **)0x0;
    }
    else {
      ppcVar18 = (char **)param_1[0x38];
    }
    lVar11 = 0x1b0;
    if ((char)param_1[0x37] == '\0') {
      lVar11 = 0x218;
    }
    ppcVar3 = *(char ***)((long)param_1 + lVar11);
    if ((long)ppcVar10 <= (long)*(char ***)((long)param_1 + lVar11)) {
      ppcVar3 = ppcVar10;
    }
    ppcVar19 = ppcVar15;
    if ((long)ppcVar3 <= (long)ppcVar15) {
      ppcVar19 = ppcVar3;
    }
  }
  else {
    if (cVar7 == '\0') {
      ppcVar18 = (char **)0x0;
    }
    else {
      ppcVar18 = (char **)param_1[0x38];
    }
    lVar11 = 0x1b0;
    if ((char)param_1[0x37] == '\0') {
      lVar11 = 0x218;
    }
    ppcVar19 = *(char ***)((long)param_1 + lVar11);
    if ((long)ppcVar10 <= (long)*(char ***)((long)param_1 + lVar11)) {
      ppcVar19 = ppcVar10;
    }
  }
  if ((long)ppcVar18 <= (long)ppcVar19) {
    ppcVar18 = ppcVar19;
  }
  if ((*(byte *)(param_1 + 0x26) & 1) == 0) goto LAB_008fbd34;
  if (((char)param_1[0x24] == '\x01') && ((long)ppcVar18 < (long)ppcVar10)) {
    param_1[0x27] = 0;
    param_1[0x28] = (long)ppcVar18;
  }
  else {
    dVar21 = (double)param_1[0x20];
    param_1[0x27] = (long)pcVar22;
    param_1[0x28] = (long)ppcVar10;
    if (dVar21 != 0.0 && dVar21 < 0.0 == NAN(dVar21)) {
      if (cVar7 == '\0') {
        ppcVar19 = (char **)0x0;
      }
      else {
        ppcVar19 = (char **)param_1[0x38];
      }
      if ((long)ppcVar10 <= (long)ppcVar19) {
        ppcVar10 = ppcVar19;
      }
      *pppcVar1 = ppcVar10;
    }
  }
  lVar13 = _UNK_001f2a78;
  lVar11 = _DAT_001f2a70;
  if (((uVar12 == 2) && (param_1[0x34] < param_1[0x47])) && ((long)ppcVar18 < (long)ppcVar15)) {
    dVar21 = (double)param_1[0x20];
    if (dVar21 == 0.0 || dVar21 < 0.0 != NAN(dVar21)) {
      ppcVar10 = (char **)param_1[0x49];
    }
    else {
      if (cVar7 == '\0') {
        ppcVar10 = (char **)0x0;
      }
      else {
        ppcVar10 = (char **)param_1[0x38];
      }
      if ((long)ppcVar10 <= param_1[0x49]) {
        ppcVar10 = (char **)param_1[0x49];
      }
      param_1[0x49] = (long)ppcVar10;
    }
    if ((long)ppcVar10 <= (long)ppcVar18) {
      ppcVar18 = ppcVar10;
    }
    param_1[0x45] = (long)ppcVar18;
    return;
  }
  if (param_1[0x45] < (long)ppcVar18) {
    if (uVar12 != 3) {
LAB_008fb9f4:
      lVar16 = param_1[0x23];
      if (((uVar12 == 1) && (lVar16 != 0)) &&
         ((lVar16 != 0x7fffffffffffffff && (lVar17 = param_1[0x4b], lVar17 != 0x7fffffffffffffff))))
      {
        lVar4 = -0x8000000000000000;
        if (lVar17 != -0x8000000000000000 && lVar16 != -0x8000000000000000) {
          lVar4 = lVar17 + lVar16;
        }
        if (param_1[0x34] <= lVar4) goto LAB_008fba54;
        if (((long)ppcVar15 <= (long)ppcVar18) || ((long)ppcVar18 <= param_1[0x4a]))
        goto LAB_008fba94;
      }
      else {
LAB_008fba54:
        if ((long)ppcVar15 <= (long)ppcVar18) goto LAB_008fba94;
      }
      if ((long)ppcVar18 < param_1[0x43]) {
        if ((0 < lVar16) && (param_1[0x4a] < (long)ppcVar18)) {
          param_1[0x4a] = (long)ppcVar18;
          param_1[0x4b] = param_1[0x34];
        }
        uVar12 = (uint)(0 < lVar16);
        goto LAB_008fbcb8;
      }
    }
  }
  else if ((uVar12 < 2) && ((char **)param_1[0x45] == ppcVar18)) goto LAB_008fb9f4;
LAB_008fba94:
  if (((long)ppcVar15 <= (long)ppcVar18) || (param_1[0x43] <= (long)ppcVar18)) {
    param_1[0x47] = -0x8000000000000000;
    *(undefined4 *)(param_1 + 0x46) = 3;
    param_1[0x45] = (long)ppcVar18;
    param_1[0x49] = lVar13;
    param_1[0x48] = lVar11;
    param_1[0x4b] = -0x8000000000000000;
    param_1[0x4a] = -0x8000000000000000;
    return;
  }
  if ((uVar12 != 2) &&
     (dVar21 = (double)param_1[0x21], dVar21 != 0.0 && dVar21 < 0.0 == NAN(dVar21))) {
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) == 0) {
      local_58 = (char **)0x1a70e8;
      local_50 = (char **)0xb21;
      local_48 = &uStack_a1;
      pppcStack_98 = &local_58;
      local_90 = &DAT_001d5e07;
      ppuStack_78 = &local_90;
      local_80 = "Switch to HOLD. Bounded BWE: ";
      if ((long)ppcVar18 < 0) {
        local_70 = (char *)(-((ulong)-(long)ppcVar18 / 1000) -
                           (ulong)(500 < (ulong)-(long)ppcVar18 % 1000));
      }
      else {
        local_70 = (char *)((ulong)ppcVar18 / 1000);
        if (499 < (ulong)ppcVar18 % 1000) {
          local_70 = local_70 + 1;
        }
      }
      uVar8 = param_1[0x48];
      ppcStack_68 = &local_80;
      if ((long)uVar8 < 0) {
        uVar14 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
      }
      else {
        uVar14 = uVar8 / 1000;
        if (499 < uVar8 % 1000) {
          uVar14 = uVar14 + 1;
        }
      }
      plVar5 = *pplStack_88;
      pplVar6 = pplStack_88 + 1;
      local_a0 = param_1;
      pplStack_88 = &local_a0;
      FUN_00623bb0(param_1[0x4c],&DAT_00225810,**pplVar6,(int)(*pplVar6)[1],plVar5,&DAT_001d5e07,
                   "Switch to HOLD. Bounded BWE: ",local_70,", duration: ",uVar14,
                   ", avg loss rate: ");
    }
    lVar16 = param_1[0x34];
    lVar13 = param_1[0x48];
    lVar11 = 0x7fffffffffffffff;
    if ((lVar16 != 0x7fffffffffffffff) && (lVar13 != 0x7fffffffffffffff)) {
      lVar11 = -0x8000000000000000;
      if (lVar13 != -0x8000000000000000 && lVar16 != -0x8000000000000000) {
        lVar11 = lVar16 + lVar13;
      }
    }
    if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
LAB_008fbd34:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    param_1[0x47] = lVar11;
    param_1[0x49] = (long)ppcVar18;
    lVar11 = (long)((double)param_1[0x21] * (double)lVar13);
    if (59999999 < (long)((double)param_1[0x21] * (double)lVar13)) {
      lVar11 = 60000000;
    }
    param_1[0x48] = lVar11;
  }
  uVar12 = 2;
  param_1[0x4b] = -0x8000000000000000;
  param_1[0x4a] = -0x8000000000000000;
LAB_008fbcb8:
  *(uint *)(param_1 + 0x46) = uVar12;
  param_1[0x45] = (long)ppcVar18;
  if (1 < param_1[0x40] + 0x8000000000000001U) {
    lVar11 = param_1[0x1e];
    if (lVar11 == 0x7fffffffffffffff) {
      return;
    }
    if (lVar11 != -0x8000000000000000) {
      lVar11 = lVar11 + param_1[0x40];
    }
    if (param_1[0x34] <= lVar11) {
      return;
    }
  }
  param_1[0x40] = param_1[0x34];
  lVar11 = (long)((double)param_1[0x1d] * (double)param_1[0x28]);
  if (lVar11 < 0x1389) {
    lVar11 = 5000;
  }
  param_1[0x41] = lVar11;
  return;
}


// ===== 008fbd48  FUN_008fbd48 =====

undefined8 FUN_008fbd48(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  int *piVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  long local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar11 = param_3 * 0x70;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + (int)param_3;
  if (lVar11 == 0) {
    lVar9 = 0x7fffffffffffffff;
    lVar19 = -0x8000000000000000;
  }
  else {
    param_2 = param_2 + 0x38;
    lVar19 = -0x8000000000000000;
    lVar10 = 0x7fffffffffffffff;
    do {
      if (*(long *)(param_2 + 0x10) == 0x7fffffffffffffff) {
        local_90 = param_1 + 0x170;
        FUN_008ff168(&local_90,param_2,param_2,param_2 + -0x30);
      }
      else {
        FUN_008fef24(param_1 + 0x170,param_2);
      }
      lVar12 = *(long *)(param_1 + 0x198);
      lVar9 = 0x7fffffffffffffff;
      if ((lVar12 != 0x7fffffffffffffff) &&
         (lVar13 = *(long *)(param_2 + -0x30), lVar13 != 0x7fffffffffffffff)) {
        lVar9 = -0x8000000000000000;
        if (lVar13 != -0x8000000000000000 && lVar12 != -0x8000000000000000) {
          lVar9 = lVar12 + lVar13;
        }
      }
      *(long *)(param_1 + 0x198) = lVar9;
      lVar9 = *(long *)(param_2 + -0x38);
      param_2 = param_2 + 0x70;
      if (lVar19 <= lVar9) {
        lVar19 = lVar9;
      }
      if (lVar10 <= lVar9) {
        lVar9 = lVar10;
      }
      lVar11 = lVar11 + -0x70;
      lVar10 = lVar9;
    } while (lVar11 != 0);
  }
  lVar11 = *(long *)(param_1 + 0x1a0);
  if (0xfffffffffffffffd < *(long *)(param_1 + 0x1a0) + 0x7fffffffffffffffU) {
    *(long *)(param_1 + 0x1a0) = lVar9;
    lVar11 = lVar9;
  }
  lVar9 = 0x7fffffffffffffff;
  if ((lVar19 != 0x7fffffffffffffff) && (lVar11 != -0x8000000000000000)) {
    if (lVar19 == -0x8000000000000000) {
      return 0;
    }
    if (lVar11 == 0x7fffffffffffffff) {
      return 0;
    }
    lVar9 = lVar19 - lVar11;
    if (lVar9 < 1) {
      return 0;
    }
  }
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    if (lVar9 < *(long *)(param_1 + 0xa8)) {
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0x198);
    iVar1 = *(int *)(param_1 + 0x168);
    iVar2 = *(int *)(param_1 + 0x188);
    *(long *)(param_1 + 0x1a0) = lVar19;
    lVar11 = 0;
    if (lVar9 != 0) {
      lVar11 = (lVar10 * 8000000) / lVar9;
    }
    iVar3 = *(int *)(param_1 + 0x148);
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 0xb0);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = (iVar3 + -1) / iVar4;
      }
      uVar17 = (*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 4) * -0x5555555555555555;
      uVar14 = (ulong)(uint)((iVar3 + -1) - iVar5 * iVar4);
      if (uVar17 < uVar14 || uVar17 - uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      lVar9 = (long)((1.0 - *(double *)(param_1 + 0xb8)) * (double)lVar11);
      lVar19 = (long)(*(double *)(param_1 + 0xb8) *
                     (double)*(long *)(*(long *)(param_1 + 0x150) + uVar14 * 0x30 + 0x10));
      lVar11 = 0x7fffffffffffffff;
      if (lVar19 != 0x7fffffffffffffff && lVar9 != 0x7fffffffffffffff) {
        lVar11 = -0x8000000000000000;
        if (lVar9 != -0x8000000000000000 && lVar19 != -0x8000000000000000) {
          lVar11 = lVar9 + lVar19;
        }
      }
    }
    plVar15 = *(long **)(param_1 + 0x180);
    if (plVar15 == (long *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      do {
        lVar12 = plVar15[3];
        plVar15 = (long *)*plVar15;
        lVar9 = -0x8000000000000000;
        if (lVar12 != -0x8000000000000000 && lVar19 != -0x8000000000000000) {
          lVar9 = lVar12 + lVar19;
        }
        lVar13 = 0x7fffffffffffffff;
        if (lVar12 != 0x7fffffffffffffff) {
          lVar13 = lVar9;
        }
        bVar8 = lVar19 != 0x7fffffffffffffff;
        lVar19 = 0x7fffffffffffffff;
        if (bVar8) {
          lVar19 = lVar13;
        }
      } while (plVar15 != (long *)0x0);
    }
    iVar4 = *(int *)(param_1 + 0xb0);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = iVar3 / iVar4;
    }
    iVar4 = iVar3 - iVar5 * iVar4;
    uVar14 = (*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 4) * -0x5555555555555555;
    *(int *)(param_1 + 0x148) = iVar3 + 1;
    if (uVar14 < (ulong)(long)iVar4 || uVar14 - (long)iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    piVar16 = (int *)(*(long *)(param_1 + 0x150) + (long)iVar4 * 0x30);
    *piVar16 = iVar1;
    piVar16[1] = iVar2;
    *(long *)(piVar16 + 4) = lVar11;
    *(long *)(piVar16 + 6) = lVar10;
    piVar16[2] = iVar1 - iVar2;
    piVar16[3] = -0x55555556;
    *(long *)(piVar16 + 8) = lVar19;
    piVar16[10] = iVar3;
    pvStack_78 = (void *)0x0;
    local_80 = 0;
    uStack_70 = 0;
    local_68 = 0x3f800000;
    pvStack_88 = (void *)0x0;
    local_90 = 0;
    local_60 = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_008fdee4(param_1 + 0x170,(ulong)&local_90 | 8,0);
    *(undefined8 *)(param_1 + 0x198) = local_60;
    pvVar6 = pvStack_88;
    puVar7 = (undefined8 *)pvStack_78;
    while (puVar7 != (undefined8 *)0x0) {
      pvStack_88 = pvVar6;
      if (puVar7 == (undefined8 *)0xfffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar18 = (void *)*puVar7;
      operator_delete(puVar7);
      pvVar6 = pvStack_88;
      puVar7 = (undefined8 *)pvVar18;
    }
    pvStack_88 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    FUN_008fca44(param_1);
    if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
      dVar20 = *(double *)(param_1 + 0x260);
      dVar21 = *(double *)(param_1 + 0xd0);
      if (dVar20 == dVar21 || dVar20 < dVar21 != (NAN(dVar20) || NAN(dVar21))) {
        lVar11 = *(long *)(param_1 + 0x218);
      }
      else {
        lVar11 = (long)((double)*(long *)(param_1 + 200) / (dVar20 - dVar21));
      }
      if (*(char *)(param_1 + 0x1b8) != '\x01') {
        if ((long *)(param_1 + 0x1b0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(long *)(param_1 + 0x1b0) = lVar11;
        *(undefined1 *)(param_1 + 0x1b8) = 1;
        return 1;
      }
      *(long *)(param_1 + 0x1b0) = lVar11;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 008fc154  FUN_008fc154 =====

void FUN_008fc154(long *param_1,long *param_2,ulong param_3)

{
  double *pdVar1;
  long *plVar2;
  double dVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  double dVar12;
  long local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  dVar12 = (double)param_2[0x27];
  dVar10 = (double)param_2[0x28];
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  if ((*(byte *)(param_2 + 0x26) & 1) == 0) goto LAB_008fc4f8;
  pdVar11 = (double *)param_2[7];
  pdVar1 = (double *)param_2[8];
  if (pdVar11 != pdVar1) {
    do {
      local_70 = (long)(*pdVar11 * (double)(long)dVar10);
      if (local_60 < local_58) {
        if (local_60 == (long *)0x0) goto LAB_008fc50c;
        plVar2 = local_60 + 1;
        *local_60 = local_70;
      }
      else {
        plVar2 = (long *)FUN_008a7434(&local_68,&local_70);
      }
      pdVar11 = pdVar11 + 1;
      local_60 = plVar2;
    } while (pdVar11 != pdVar1);
  }
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    if ((*(byte *)(param_2 + 0x26) & 1) == 0) goto LAB_008fc4f8;
    if ((char)param_2[0x14] == '\x01') {
      if (((param_3 & 1) != 0) && ((*(byte *)((long)param_2 + 0xf9) & 1) != 0)) {
        lVar4 = param_2[0x23];
        if (lVar4 < 1) goto LAB_008fc290;
        if ((lVar4 != 0x7fffffffffffffff) && (lVar5 = param_2[0x4b], lVar5 != 0x7fffffffffffffff)) {
          if (lVar5 != -0x8000000000000000) {
            lVar5 = lVar5 + lVar4;
          }
          if (lVar5 < param_2[0x34]) goto LAB_008fc290;
        }
      }
      local_70 = (long)((double)param_2[0x1c] * (double)*param_2);
      if (local_60 < local_58) {
        if (local_60 == (long *)0x0) goto LAB_008fc50c;
        *local_60 = local_70;
        local_60 = local_60 + 1;
      }
      else {
        local_60 = (long *)FUN_008a7434(&local_68,&local_70);
      }
    }
  }
LAB_008fc290:
  lVar4 = param_2[0x44];
  if (lVar4 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    if ((*(byte *)(param_2 + 0x26) & 1) == 0) goto LAB_008fc4f8;
    if ((*(char *)((long)param_2 + 0xa1) == '\x01') && ((long)dVar10 < lVar4)) {
      if (local_60 < local_58) {
        if (local_60 == (long *)0x0) goto LAB_008fc50c;
        *local_60 = lVar4;
        local_60 = local_60 + 1;
      }
      else {
        local_60 = (long *)FUN_008a7340(&local_68,param_2 + 0x44);
      }
    }
  }
  if ((param_3 & 1) != 0) {
    if ((*(byte *)(param_2 + 0x26) & 1) == 0) {
LAB_008fc4f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    if (*(char *)((long)param_2 + 0xa2) == '\x01') {
      lVar4 = 0x1b0;
      if ((char)param_2[0x37] == '\0') {
        lVar4 = 0x218;
      }
      lVar4 = *(long *)((long)param_2 + lVar4);
      if (lVar4 < (long)dVar10) {
        local_70 = lVar4;
        if (local_60 < local_58) {
          if (local_60 == (long *)0x0) {
LAB_008fc50c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *local_60 = lVar4;
          local_60 = local_60 + 1;
        }
        else {
          local_60 = (long *)FUN_008a7434(&local_68,&local_70);
        }
      }
    }
  }
  dVar3 = (double)FUN_008fd11c(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_008fd27c(param_1,(long)local_60 - (long)local_68 >> 3);
  if (local_60 != local_68) {
    lVar4 = 0;
    uVar6 = 0;
    if ((long)dVar10 <= (long)dVar3) {
      dVar10 = dVar3;
    }
    do {
      dVar3 = dVar10;
      if (local_68[uVar6] <= (long)dVar10) {
        dVar3 = (double)local_68[uVar6];
      }
      if ((*(byte *)(param_2 + 0x26) & 1) == 0) goto LAB_008fc4f8;
      if (dVar3 == 0.0) {
        dVar8 = 1.0;
      }
      else {
        lVar5 = param_2[0xf];
        if (lVar5 == -0x8000000000000000) {
          dVar8 = -INFINITY;
LAB_008fc3bc:
          if (dVar3 != -0.0) goto LAB_008fc3c8;
LAB_008fc3e4:
          dVar9 = -INFINITY;
        }
        else {
          if (lVar5 == 0x7fffffffffffffff) {
            dVar8 = INFINITY;
            goto LAB_008fc3bc;
          }
          dVar8 = (double)lVar5;
          if (dVar3 == -0.0) goto LAB_008fc3e4;
LAB_008fc3c8:
          if (dVar3 == NAN) {
            dVar9 = INFINITY;
          }
          else {
            dVar9 = (double)(long)dVar3;
          }
        }
        dVar9 = (double)param_2[0x10] + dVar8 / dVar9;
        dVar8 = 1.0;
        if (dVar9 == 1.0 || dVar9 < 1.0 != NAN(dVar9)) {
          dVar8 = dVar9;
        }
      }
      if ((ulong)(param_1[1] - *param_1 >> 4) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      dVar9 = (double)param_2[0xc];
      pdVar11 = (double *)(*param_1 + lVar4);
      uVar6 = uVar6 + 1;
      pdVar11[1] = dVar3;
      lVar4 = lVar4 + 0x10;
      if (dVar9 <= dVar12) {
        dVar9 = dVar12;
      }
      if (dVar9 <= dVar8) {
        dVar8 = dVar9;
      }
      *pdVar11 = dVar8;
    } while (uVar6 < (ulong)((long)local_60 - (long)local_68 >> 3));
  }
  if (local_68 != (long *)0x0) {
    uVar7 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
    uVar6 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) - ((long)local_68 - (long)local_60))
            >> 3;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    plVar2 = local_60;
    if ((1 < uVar6) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
      uVar6 = uVar6 & 0x1ffffffffffffffe;
      plVar2 = local_60 + -uVar6;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (plVar2 != local_68) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
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
  return;
}


// ===== 008fc564  FUN_008fc564 =====

void FUN_008fc564(undefined1 param_1 [16],double param_2,long param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  long lVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  if (*(int *)(param_3 + 0x148) < 1) {
    return;
  }
  if (*(char *)(param_3 + 0x130) == '\x01') {
    iVar5 = -1;
    do {
      iVar5 = iVar5 + 1;
      if (*(int *)(param_3 + 0x90) <= iVar5) {
        return;
      }
      dVar6 = (double)FUN_008fd574(param_3,param_4);
      if ((*(byte *)(param_3 + 0x130) & 1) == 0) break;
      dVar6 = *param_4 - (dVar6 * *(double *)(param_3 + 0x98)) / param_2;
      *param_4 = dVar6;
      if ((*(byte *)(param_3 + 0x130) & 1) == 0) break;
      dVar2 = param_4[1];
      if (dVar2 == 0.0) {
        param_2 = 1.0;
      }
      else {
        lVar3 = *(long *)(param_3 + 0x78);
        if (lVar3 == -0x8000000000000000) {
          dVar4 = -INFINITY;
LAB_008fc654:
          if (dVar2 != -0.0) goto LAB_008fc660;
LAB_008fc67c:
          dVar7 = -INFINITY;
        }
        else {
          if (lVar3 == 0x7fffffffffffffff) {
            dVar4 = INFINITY;
            goto LAB_008fc654;
          }
          dVar4 = (double)lVar3;
          if (dVar2 == -0.0) goto LAB_008fc67c;
LAB_008fc660:
          dVar7 = INFINITY;
          if (dVar2 != NAN) {
            dVar7 = (double)(long)dVar2;
          }
        }
        dVar2 = *(double *)(param_3 + 0x80) + dVar4 / dVar7;
        param_2 = 1.0;
        if (dVar2 == 1.0 || dVar2 < 1.0 != NAN(dVar2)) {
          param_2 = dVar2;
        }
      }
      pdVar1 = (double *)(param_3 + 0x60);
      if (*(double *)(param_3 + 0x60) <= dVar6) {
        pdVar1 = param_4;
      }
      dVar6 = param_2;
      if (*pdVar1 <= param_2) {
        dVar6 = *pdVar1;
      }
      *param_4 = dVar6;
    } while ((*(byte *)(param_3 + 0x130) & 1) != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 008fc6cc  FUN_008fc6cc =====

undefined1  [16] FUN_008fc6cc(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_98;
  
  uVar4 = param_2[1];
  dVar15 = 0.0;
  dVar16 = 0.0;
  if (uVar4 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
    if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
LAB_008fc958:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    dVar13 = *(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x260);
    dVar12 = *(double *)(param_1 + 0x50);
    dVar14 = *(double *)(param_1 + 0x58);
    dVar16 = *(double *)(param_1 + 0x70) +
             ABS(*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x260));
    uVar5 = uVar4 / 1000;
    if (499 < uVar4 % 1000) {
      uVar5 = uVar5 + 1;
    }
    dVar10 = (double)uVar5;
    if ((uVar4 & 0x8000000000000000) != 0) {
      dVar10 = (double)(long)(-(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000));
    }
    dVar9 = log(dVar10 + 1.0);
    dVar16 = ((dVar12 * dVar13) / dVar16) * dVar10 + dVar9 * ((dVar13 * dVar14) / dVar16);
  }
  piVar6 = *(int **)(param_1 + 0x150);
  piVar1 = *(int **)(param_1 + 0x158);
  if (piVar6 != piVar1) {
    local_98 = -9.223372036854776e+18;
    do {
      if (piVar6[10] != -1) {
        dVar12 = (double)FUN_008fd7c4(*param_2,param_2[1],*(undefined8 *)(piVar6 + 4));
        uVar4 = (ulong)(*(int *)(param_1 + 0x148) + ~piVar6[10]);
        if ((ulong)(*(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8) >> 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) goto LAB_008fc958;
        dVar13 = *(double *)(*(long *)(param_1 + 0x1e8) + uVar4 * 8);
        if (*(char *)(param_1 + 0x110) == '\x01') {
          lVar8 = *(long *)(piVar6 + 8);
          dVar10 = log(dVar12);
          lVar7 = *(long *)(piVar6 + 6);
          dVar14 = 9.223372036854776e+18;
          if (((lVar7 != 0x7fffffffffffffff) && (lVar8 != -0x8000000000000000)) &&
             (dVar14 = local_98, lVar8 != 0x7fffffffffffffff && lVar7 != -0x8000000000000000)) {
            dVar14 = (double)(lVar7 - lVar8);
          }
          dVar12 = log(1.0 - dVar12);
          dVar12 = dVar10 * ((double)lVar8 / 1000.0) + dVar12 * (dVar14 / 1000.0);
          dVar14 = dVar16 * dVar13 * ((double)lVar7 / 1000.0);
        }
        else {
          iVar2 = piVar6[1];
          dVar14 = log(dVar12);
          iVar3 = piVar6[2];
          dVar12 = log(1.0 - dVar12);
          dVar12 = dVar14 * (double)iVar2 + dVar12 * (double)iVar3;
          dVar14 = dVar16 * dVar13 * (double)*piVar6;
        }
        dVar15 = dVar14 + dVar15 + dVar13 * dVar12;
      }
      piVar6 = piVar6 + 0xc;
    } while (piVar6 != piVar1);
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar15;
  return auVar11;
}


// ===== 008fc980  FUN_008fc980 =====

void FUN_008fc980(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[8];
  *param_1 = &PTR_FUN_00d3d170;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[9];
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[9] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1);
  return;
}


// ===== 008fca44  FUN_008fca44 =====

void FUN_008fca44(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if (*(char *)(param_1 + 0x110) == '\x01') {
    dVar3 = (double)FUN_008fcb40(param_1);
  }
  else if (*(int *)(param_1 + 0x148) < 1) {
    dVar3 = 0.0;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    if (puVar1 == *(undefined8 **)(param_1 + 0x158)) {
      dVar3 = NAN;
    }
    else {
      dVar4 = 0.0;
      dVar3 = 0.0;
      do {
        if (*(uint *)(puVar1 + 5) != 0xffffffff) {
          uVar2 = (ulong)(int)(*(int *)(param_1 + 0x148) + ~*(uint *)(puVar1 + 5));
          if ((ulong)(*(long *)(param_1 + 0x1d8) - *(long *)(param_1 + 0x1d0) >> 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          dVar6 = *(double *)(*(long *)(param_1 + 0x1d0) + uVar2 * 8);
          auVar5._0_8_ = (long)(int)*puVar1;
          auVar5._8_8_ = (long)(int)((ulong)*puVar1 >> 0x20);
          auVar5 = NEON_scvtf(auVar5,8);
          dVar4 = dVar4 + auVar5._0_8_ * dVar6;
          dVar3 = dVar3 + auVar5._8_8_ * dVar6;
        }
        puVar1 = puVar1 + 6;
      } while (puVar1 != *(undefined8 **)(param_1 + 0x158));
      dVar3 = dVar3 / dVar4;
    }
  }
  *(double *)(param_1 + 0x260) = dVar3;
  return;
}


// ===== 008fcb40  FUN_008fcb40 =====

undefined1  [16] FUN_008fcb40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar4 = *(uint *)(param_1 + 0x148);
  if ((int)uVar4 < 1) {
    dVar18 = 0.0;
    goto LAB_008fceac;
  }
  lVar7 = *(long *)(param_1 + 0x150);
  if (lVar7 == *(long *)(param_1 + 0x158)) {
    lVar15 = 0;
    lVar12 = 0;
    lVar9 = 0;
    lVar11 = 0;
    lVar8 = 0;
    lVar13 = 0;
    lVar6 = 0;
  }
  else {
    dVar18 = 0.0;
    dVar20 = 1.0;
    lVar6 = 0;
    lVar13 = 0;
    lVar8 = 0;
    lVar11 = 0;
    lVar9 = 0;
    lVar12 = 0;
    lVar15 = 0;
    do {
      if (*(uint *)(lVar7 + 0x28) != 0xffffffff) {
        uVar10 = (ulong)(int)(uVar4 + ~*(uint *)(lVar7 + 0x28));
        if ((ulong)(*(long *)(param_1 + 0x1d8) - *(long *)(param_1 + 0x1d0) >> 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        lVar2 = *(long *)(lVar7 + 0x18);
        lVar3 = *(long *)(lVar7 + 0x20);
        dVar23 = *(double *)(*(long *)(param_1 + 0x1d0) + uVar10 * 8);
        dVar21 = (double)lVar2;
        dVar22 = (double)lVar3;
        lVar14 = (long)(dVar23 * dVar21);
        lVar17 = (long)(dVar23 * dVar22);
        lVar16 = -0x8000000000000000;
        if (lVar14 != -0x8000000000000000 && lVar11 != -0x8000000000000000) {
          lVar16 = lVar14 + lVar11;
        }
        lVar1 = 0x7fffffffffffffff;
        if (lVar14 != 0x7fffffffffffffff) {
          lVar1 = lVar16;
        }
        bVar5 = lVar11 != 0x7fffffffffffffff;
        lVar11 = 0x7fffffffffffffff;
        if (bVar5) {
          lVar11 = lVar1;
        }
        lVar16 = 0x7fffffffffffffff;
        if ((lVar9 != 0x7fffffffffffffff) && (lVar17 != 0x7fffffffffffffff)) {
          lVar16 = -0x8000000000000000;
          if (lVar17 != -0x8000000000000000 && lVar9 != -0x8000000000000000) {
            lVar16 = lVar17 + lVar9;
          }
        }
        if (lVar2 == 0) {
          dVar22 = 0.0;
        }
        else {
          if (lVar3 == -0x8000000000000000) {
            dVar22 = -INFINITY;
          }
          else if (lVar3 == 0x7fffffffffffffff) {
            dVar22 = INFINITY;
          }
          if (lVar2 == -0x8000000000000000) {
            dVar21 = -INFINITY;
          }
          else if (lVar2 == 0x7fffffffffffffff) {
            dVar21 = INFINITY;
          }
          dVar22 = dVar22 / dVar21;
        }
        lVar9 = lVar16;
        if (3 < uVar4) {
          if (dVar22 != dVar18 && dVar22 < dVar18 == (NAN(dVar22) || NAN(dVar18))) {
            lVar15 = *(long *)(lVar7 + 0x10);
            lVar12 = lVar14;
            lVar13 = lVar17;
            dVar18 = dVar22;
          }
          if (dVar22 < dVar20) {
            lVar8 = lVar14;
            lVar6 = lVar17;
            dVar20 = dVar22;
          }
        }
      }
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != *(long *)(param_1 + 0x158));
  }
  lVar7 = FUN_008fcef8(param_1);
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if (lVar15 < (long)(*(double *)(param_1 + 0x128) * (double)lVar7)) {
    lVar7 = 0x7fffffffffffffff;
    if ((lVar12 != 0x7fffffffffffffff) && (lVar8 != 0x7fffffffffffffff)) {
      lVar7 = -0x8000000000000000;
      if (lVar8 != -0x8000000000000000 && lVar12 != -0x8000000000000000) {
        lVar7 = lVar8 + lVar12;
      }
    }
    if (lVar11 == lVar7) goto LAB_008fcd60;
    lVar7 = 0x7fffffffffffffff;
    if (lVar9 == 0x7fffffffffffffff) {
      lVar15 = 0x7fffffffffffffff;
    }
    else {
      lVar15 = 0x7fffffffffffffff;
      if (lVar6 != -0x8000000000000000) {
        lVar16 = -0x8000000000000000;
        if (lVar6 != 0x7fffffffffffffff && lVar9 != -0x8000000000000000) {
          lVar16 = lVar9 - lVar6;
        }
        if ((lVar16 != 0x7fffffffffffffff) && (lVar13 != -0x8000000000000000)) {
          lVar15 = -0x8000000000000000;
          if (lVar13 != 0x7fffffffffffffff && lVar16 != -0x8000000000000000) {
            lVar15 = lVar16 - lVar13;
          }
        }
      }
    }
    if ((lVar11 != 0x7fffffffffffffff) && (lVar12 != -0x8000000000000000)) {
      lVar13 = -0x8000000000000000;
      if (lVar11 != -0x8000000000000000 && lVar12 != 0x7fffffffffffffff) {
        lVar13 = lVar11 - lVar12;
      }
      if ((lVar13 != 0x7fffffffffffffff) && (lVar8 != -0x8000000000000000)) {
        lVar7 = -0x8000000000000000;
        if (lVar8 != 0x7fffffffffffffff && lVar13 != -0x8000000000000000) {
          lVar7 = lVar13 - lVar8;
        }
      }
    }
    if (lVar15 == -0x8000000000000000) {
      dVar18 = -INFINITY;
    }
    else if (lVar15 == 0x7fffffffffffffff) {
      dVar18 = INFINITY;
    }
    else {
      dVar18 = (double)lVar15;
    }
    if (lVar7 == -0x8000000000000000) goto LAB_008fcea0;
    if (lVar7 == 0x7fffffffffffffff) goto LAB_008fce98;
    dVar20 = (double)lVar7;
  }
  else {
LAB_008fcd60:
    if (lVar9 == -0x8000000000000000) {
      dVar18 = -INFINITY;
    }
    else if (lVar9 == 0x7fffffffffffffff) {
      dVar18 = INFINITY;
    }
    else {
      dVar18 = (double)lVar9;
    }
    if (lVar11 == -0x8000000000000000) {
LAB_008fcea0:
      dVar20 = -INFINITY;
    }
    else if (lVar11 == 0x7fffffffffffffff) {
LAB_008fce98:
      dVar20 = INFINITY;
    }
    else {
      dVar20 = (double)lVar11;
    }
  }
  dVar18 = dVar18 / dVar20;
LAB_008fceac:
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar18;
  return auVar19;
}


// ===== 008fcef8  FUN_008fcef8 =====

long FUN_008fcef8(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_34 [4];
  
  lVar7 = *(long *)(param_1 + 0x150);
  lVar4 = *(long *)(param_1 + 0x158);
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  local_40 = (long *)0x0;
  if (lVar7 == lVar4) {
    lVar7 = 0;
  }
  else {
    plVar2 = (long *)0x0;
    do {
      plVar1 = plVar2;
      if (*(int *)(lVar7 + 0x28) != -1) {
        lVar5 = *(long *)(lVar7 + 0x10);
        if (((lVar5 != -0x8000000000000000) && (lVar5 != 0)) && (lVar5 != 0x7fffffffffffffff)) {
          if (plVar2 < local_40) {
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            plVar1 = plVar2 + 1;
            *plVar2 = lVar5;
            local_48 = plVar1;
          }
          else {
            plVar1 = (long *)FUN_008a7340(&local_50,(long *)(lVar7 + 0x10));
            local_48 = plVar1;
          }
        }
      }
      lVar7 = lVar7 + 0x30;
      plVar2 = plVar1;
    } while (lVar7 != lVar4);
    if (local_50 == plVar1) {
      lVar7 = 0;
    }
    else {
      local_34[0] = 0;
      FUN_008fe004(local_50,plVar1,local_34,LZCOUNT((long)plVar1 - (long)local_50 >> 3) << 1 ^ 0x7e,
                   1);
      uVar3 = (long)local_48 - (long)local_50 >> 3;
      plVar1 = local_48;
      if (((uint)((long)local_48 - (long)local_50) >> 3 & 1) == 0) {
        uVar6 = (uVar3 >> 1) - 1;
        if (uVar3 <= uVar6) {
LAB_008fd108:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        lVar4 = local_50[uVar6];
        lVar7 = 0x3fffffffffffffff;
        if ((lVar4 != 0x7fffffffffffffff) &&
           (lVar5 = local_50[uVar3 >> 1], lVar5 != 0x7fffffffffffffff)) {
          lVar7 = -0x4000000000000000;
          if (lVar5 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
            lVar7 = (lVar4 + lVar5) / 2;
          }
        }
      }
      else {
        if (local_48 == local_50) goto LAB_008fd108;
        lVar7 = local_50[uVar3 >> 1];
      }
    }
    if (local_50 != (long *)0x0) {
      uVar6 = (ulong)((long)plVar1 + (-8 - ((long)plVar1 << 0x3d))) >> 3;
      uVar3 = (ulong)(((long)local_50 - (long)plVar1 << 0x3d) - ((long)local_50 - (long)plVar1)) >>
              3;
      if (uVar6 <= uVar3) {
        uVar3 = uVar6;
      }
      if ((1 < uVar3) && ((((int)local_50 - (int)plVar1 | -(int)plVar1) & 7U) == 0)) {
        uVar3 = uVar3 & 0x1ffffffffffffffe;
        plVar1 = plVar1 + -uVar3;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      while (plVar1 != local_50) {
        plVar1 = plVar1 + -1;
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  return lVar7;
}


// ===== 008fd11c  FUN_008fd11c =====

long FUN_008fd11c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  
  lVar4 = param_1[0x43];
  if (((int)param_1[0x46] != 3) &&
     (lVar4 = param_1[0x41], 0xfffffffffffffffd < param_1[0x41] + 0x7fffffffffffffffU)) {
    lVar4 = param_1[0x43];
  }
  if ((char)param_1[1] == '\x01') {
    if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    dVar7 = (double)param_1[5];
    if (dVar7 != 0.0 && dVar7 < 0.0 == NAN(dVar7)) {
      lVar1 = param_1[0x34];
      uVar5 = 0x7fffffffffffffff;
      if (lVar1 != 0x7fffffffffffffff) {
        lVar6 = param_1[0x35];
        uVar2 = lVar1 - lVar6 & (lVar1 - lVar6 >> 0x3f ^ 0xffffffffffffffffU);
        if (lVar1 == -0x8000000000000000 || lVar6 == 0x7fffffffffffffff) {
          uVar2 = 0;
        }
        uVar5 = 0x7fffffffffffffff;
        if (lVar6 != -0x8000000000000000) {
          uVar5 = uVar2;
        }
      }
      uVar2 = param_1[6];
      if ((long)uVar2 <= (long)uVar5) {
        uVar5 = uVar2;
      }
      lVar1 = (long)(dVar7 * (double)(long)uVar5);
      if (lVar1 == -0x8000000000000000) {
        dVar7 = -INFINITY;
      }
      else if (lVar1 == 0x7fffffffffffffff) {
        dVar7 = INFINITY;
      }
      else {
        dVar7 = (double)lVar1;
      }
      if (uVar2 == 0x8000000000000000) {
        dVar3 = -INFINITY;
      }
      else if (uVar2 == 0x7fffffffffffffff) {
        dVar3 = INFINITY;
      }
      else {
        dVar3 = (double)(long)uVar2;
      }
      lVar1 = 0x7fffffffffffffff;
      if ((lVar4 != 0x7fffffffffffffff) &&
         (lVar6 = (long)((dVar7 / dVar3) * (double)*param_1), lVar6 != 0x7fffffffffffffff)) {
        lVar1 = -0x8000000000000000;
        if (lVar6 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
          lVar1 = lVar6 + lVar4;
        }
      }
      return lVar1;
    }
  }
  return lVar4;
}


// ===== 008fd27c  FUN_008fd27c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd27c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  size_t __n;
  ulong uVar14;
  void *__dest;
  undefined8 *puVar15;
  ulong uVar16;
  
  uVar5 = _UNK_001f3868;
  uVar4 = _DAT_001f3860;
  __src = (void *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  __n = (long)puVar8 - (long)__src;
  uVar16 = (long)__n >> 4;
  uVar7 = param_2 - uVar16;
  if (param_2 < uVar16 || uVar7 == 0) {
    if (param_2 >= uVar16) {
      return;
    }
    puVar15 = (undefined8 *)((long)__src + param_2 * 0x10);
    uVar7 = (ulong)(((long)puVar15 - (long)puVar8 << 0x3c) - ((long)puVar15 - (long)puVar8)) >> 4;
    uVar16 = (ulong)((long)puVar8 + (-0x10 - ((long)puVar8 << 0x3c))) >> 4;
    if (uVar16 <= uVar7) {
      uVar7 = uVar16;
    }
    if ((1 < uVar7) && ((((int)__src - (int)puVar8 | -(int)puVar8) & 0xfU) == 0)) {
      uVar7 = uVar7 & 0xffffffffffffffe;
      puVar8 = puVar8 + uVar7 * -2;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (puVar8 == puVar15) {
        param_1[1] = puVar15;
        return;
      }
      puVar8 = puVar8 + -2;
    } while (puVar8 != (undefined8 *)0x0);
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  uVar14 = param_1[2] - (long)__src;
  if (param_2 <= (ulong)((long)uVar14 >> 4)) {
    puVar15 = puVar8;
    if ((uVar7 & 0xfffffffffffffff) != 0) {
      puVar15 = puVar8 + uVar7 * 2;
      uVar16 = (param_2 * 0x10 - __n) - 0x10 >> 4;
      uVar7 = (ulong)-(long)puVar8 >> 4;
      if (uVar16 <= (ulong)-(long)puVar8 >> 4) {
        uVar7 = uVar16;
      }
      uVar2 = _UNK_001f3868;
      uVar3 = _DAT_001f3860;
      if (0x1d < uVar7) {
        uVar14 = (ulong)-(long)puVar8 >> 4;
        if (uVar16 <= uVar14) {
          uVar14 = uVar16;
        }
        if (((-(long)puVar8 & 0xfU) == 0) && (puVar8 <= puVar8 + uVar14 * 2)) {
          uVar16 = uVar7 + 1 & 3;
          uVar14 = 4;
          if (uVar16 != 0) {
            uVar14 = uVar16;
          }
          puVar11 = puVar8 + 4;
          lVar9 = (uVar7 + 1) - uVar14;
          puVar8 = puVar8 + lVar9 * 2;
          do {
            lVar9 = lVar9 + -4;
            puVar11[-3] = uVar5;
            puVar11[-4] = uVar4;
            puVar11[-1] = uVar5;
            puVar11[-2] = uVar4;
            puVar11[1] = uVar5;
            *puVar11 = uVar4;
            puVar11[3] = uVar5;
            puVar11[2] = uVar4;
            puVar11 = puVar11 + 8;
            uVar2 = _UNK_001f3868;
            uVar3 = _DAT_001f3860;
          } while (lVar9 != 0);
        }
      }
      do {
        if (puVar8 == (undefined8 *)0x0) goto LAB_008fd558;
        puVar11 = puVar8 + 2;
        puVar8[1] = uVar2;
        *puVar8 = uVar3;
        puVar8 = puVar11;
      } while (puVar11 != puVar15);
    }
    param_1[1] = puVar15;
    return;
  }
  if (param_2 >> 0x3c != 0) {
    FUN_008fdecc();
LAB_008fd570:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar1 = (long)uVar14 >> 3;
  if ((ulong)((long)uVar14 >> 3) <= param_2) {
    uVar1 = param_2;
  }
  if (0x7fffffffffffffef < uVar14) {
    uVar1 = 0xfffffffffffffff;
  }
  if (uVar1 >> 0x3c != 0) goto LAB_008fd570;
  pvVar6 = operator_new(uVar1 * 0x10);
  uVar5 = _UNK_001f3868;
  uVar4 = _DAT_001f3860;
  uVar14 = (long)pvVar6 + __n;
  if (uVar7 * 0x10 == 0) {
    puVar15 = (undefined8 *)((long)pvVar6 + __n);
    goto LAB_008fd4e8;
  }
  puVar15 = (undefined8 *)(uVar14 + uVar7 * 0x10);
  uVar10 = (long)__src + (-(long)pvVar6 - (long)puVar8);
  uVar12 = uVar10 >> 4;
  uVar13 = (param_2 * 0x10 - __n) - 0x10 >> 4;
  uVar7 = uVar12;
  if (uVar13 <= uVar12) {
    uVar7 = uVar13;
  }
  uVar2 = _UNK_001f3868;
  uVar3 = _DAT_001f3860;
  if (uVar7 < 0x20) {
LAB_008fd33c:
    puVar8 = (undefined8 *)((long)pvVar6 + __n);
  }
  else {
    if (uVar13 <= uVar12) {
      uVar12 = uVar13;
    }
    if ((uVar10 & 0xf) != 0) goto LAB_008fd33c;
    puVar8 = (undefined8 *)((long)pvVar6 + __n);
    if (uVar14 <= uVar14 + uVar12 * 0x10) {
      uVar12 = uVar7 + 1 & 3;
      uVar10 = 4;
      if (uVar12 != 0) {
        uVar10 = uVar12;
      }
      lVar9 = (uVar7 + 1) - uVar10;
      puVar8 = (undefined8 *)(uVar14 + lVar9 * 0x10);
      puVar11 = (undefined8 *)((long)pvVar6 + __n + 0x20);
      do {
        lVar9 = lVar9 + -4;
        puVar11[-3] = uVar5;
        puVar11[-4] = uVar4;
        puVar11[-1] = uVar5;
        puVar11[-2] = uVar4;
        puVar11[1] = uVar5;
        *puVar11 = uVar4;
        puVar11[3] = uVar5;
        puVar11[2] = uVar4;
        puVar11 = puVar11 + 8;
        uVar2 = _UNK_001f3868;
        uVar3 = _DAT_001f3860;
      } while (lVar9 != 0);
    }
  }
  do {
    if (puVar8 == (undefined8 *)0x0) {
LAB_008fd558:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar11 = puVar8 + 2;
    puVar8[1] = uVar2;
    *puVar8 = uVar3;
    puVar8 = puVar11;
  } while (puVar11 != puVar15);
LAB_008fd4e8:
  __dest = (void *)(uVar14 + uVar16 * -0x10);
  memcpy(__dest,__src,__n);
  *param_1 = __dest;
  param_1[1] = puVar15;
  param_1[2] = (void *)((long)pvVar6 + uVar1 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


// ===== 008fd574  FUN_008fd574 =====

undefined1  [16] FUN_008fd574(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar7 = *(long *)(param_1 + 0x150);
  lVar2 = *(long *)(param_1 + 0x158);
  if (lVar7 == lVar2) {
    dVar14 = 0.0;
    dVar15 = 0.0;
  }
  else {
    dVar14 = 0.0;
    dVar15 = 0.0;
    do {
      if (*(int *)(lVar7 + 0x28) != -1) {
        dVar8 = (double)FUN_008fd7c4(*param_2,param_2[1],*(undefined8 *)(lVar7 + 0x10));
        uVar6 = (ulong)(int)(*(int *)(param_1 + 0x148) + ~*(uint *)(lVar7 + 0x28));
        if ((ulong)(*(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8) >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        dVar10 = *(double *)(*(long *)(param_1 + 0x1e8) + uVar6 * 8);
        if (*(char *)(param_1 + 0x110) == '\x01') {
          lVar1 = *(long *)(lVar7 + 0x18);
          lVar3 = *(long *)(lVar7 + 0x20);
          bVar4 = lVar1 != 0x7fffffffffffffff;
          bVar5 = lVar3 != -0x8000000000000000;
          if (bVar4 && bVar5) {
            dVar11 = -9.223372036854776e+18;
            if (lVar3 != 0x7fffffffffffffff && lVar1 != -0x8000000000000000) {
              dVar11 = (double)(lVar1 - lVar3);
            }
            if (!bVar4 || !bVar5) goto LAB_008fd6d8;
LAB_008fd6a8:
            dVar12 = -9.223372036854776e+18;
            if (lVar3 != 0x7fffffffffffffff && lVar1 != -0x8000000000000000) {
              dVar12 = (double)(lVar1 - lVar3);
            }
          }
          else {
            dVar11 = 9.223372036854776e+18;
            if (bVar4 && bVar5) goto LAB_008fd6a8;
LAB_008fd6d8:
            dVar12 = 9.223372036854776e+18;
          }
          dVar13 = 1.0 - dVar8;
          dVar11 = ((double)lVar3 / 1000.0) / dVar8 + (dVar11 / -1000.0) / dVar13;
          dVar8 = ((double)lVar3 / 1000.0) / (dVar8 * dVar8) + (dVar12 / 1000.0) / (dVar13 * dVar13)
          ;
        }
        else {
          dVar12 = 1.0 - dVar8;
          dVar11 = (double)*(int *)(lVar7 + 4) / dVar8 - (double)*(int *)(lVar7 + 8) / dVar12;
          dVar8 = (double)*(int *)(lVar7 + 4) / (dVar8 * dVar8) +
                  (double)*(int *)(lVar7 + 8) / (dVar12 * dVar12);
        }
        dVar14 = dVar14 + dVar10 * dVar11;
        dVar15 = dVar15 - dVar10 * dVar8;
      }
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != lVar2);
    if (dVar15 < 0.0 != NAN(dVar15)) goto LAB_008fd770;
  }
  uVar6 = FUN_004249b0();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(dVar15,&DAT_001f6471,
                 "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1ecb,
                 "The second derivative is mathematically guaranteed to be negative but is ",
                 &DAT_001ea377);
  }
LAB_008fd770:
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar14;
  return auVar9;
}


// ===== 008fd7c4  FUN_008fd7c4 =====

undefined1  [16] FUN_008fd7c4(double param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  void *local_48 [2];
  char cStack_31;
  
  if ((param_1 < 0.0) || (param_1 != 1.0 && param_1 < 1.0 == NAN(param_1))) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(param_1,&DAT_001f667e,
                   "../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",0x1ea,
                   "The inherent loss must be in [0,1]: ");
    }
    dVar3 = 0.0;
    if (0.0 <= param_1) {
      dVar3 = param_1;
    }
    param_1 = 1.0;
    if (dVar3 == 1.0 || dVar3 < 1.0 != NAN(dVar3)) {
      param_1 = dVar3;
    }
  }
  if (param_3 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    if (param_2 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      if (param_3 - param_2 != 0 && param_2 <= param_3) {
        lVar2 = (long)((1.0 - param_1) * (double)(param_3 - param_2));
        if (lVar2 == -0x8000000000000000) {
          dVar3 = -INFINITY;
        }
        else if (lVar2 == 0x7fffffffffffffff) {
          dVar3 = INFINITY;
        }
        else {
          dVar3 = (double)lVar2;
        }
        param_1 = param_1 + dVar3 / (double)param_3;
      }
      goto LAB_008fd968;
    }
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00665ccc(local_48,param_3);
      FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                   0x212,"The sending rate must be finite: ",local_48);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    if (param_2 + 0x7fffffffffffffffU < 0xfffffffffffffffe) goto LAB_008fd968;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00665ccc(local_48,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/loss_based_bwe_v2.cc",
                 0x232,"The loss limited bandwidth must be finite: ",local_48);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
LAB_008fd968:
  dVar3 = DAT_001f5658;
  if (DAT_001f5658 <= param_1) {
    dVar3 = param_1;
  }
  dVar4 = DAT_001f5b00;
  if (dVar3 == DAT_001f5b00 || dVar3 < DAT_001f5b00 != (NAN(dVar3) || NAN(DAT_001f5b00))) {
    dVar4 = dVar3;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar4;
  return auVar5;
}


// ===== 008fd9a0  FUN_008fd9a0 =====

void FUN_008fd9a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008fd9b8  FUN_008fd9b8 =====

void FUN_008fd9b8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[8];
  *param_1 = &PTR_FUN_00d3d170;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[9];
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[9] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008fda88  FUN_008fda88 =====

undefined4 FUN_008fda88(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [12];
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  
  *(undefined1 *)(param_1 + 0x3a) = 1;
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar6 = (lVar2 - (lVar2 << 0x3d)) - 8U >> 3;
    uVar4 = (ulong)((lVar3 - lVar2 << 0x3d) - (lVar3 - lVar2)) >> 3;
    if (uVar6 <= uVar4) {
      uVar4 = uVar6;
    }
    if ((1 < uVar4) && ((((int)lVar3 - (int)lVar2 | -(int)lVar2) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      lVar2 = lVar2 + uVar4 * -8;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (lVar2 == lVar3) {
        *(long *)(param_1 + 0x48) = lVar3;
        return 1;
      }
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  else {
    lVar3 = (long)*(char *)((long)param_2 + 0x17);
    local_60 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    local_50 = (undefined8 *)0x0;
    puVar5 = param_2;
    if (lVar3 < 0) {
      puVar5 = (undefined8 *)*param_2;
      lVar3 = param_2[1];
    }
    FUN_006252b4(&local_78,puVar5,lVar3,0x7c);
    puVar8 = local_70;
    for (puVar5 = local_78; puVar5 != puVar8; puVar5 = puVar5 + 2) {
      local_88 = 0xffffffffffffffff;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      auVar9 = FUN_006612e4(*puVar5,puVar5[1]);
      local_88 = auVar9._0_8_;
      local_80 = (undefined1 *)CONCAT71(local_80._1_7_,auVar9[8]);
      if ((auVar9 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
        *(undefined1 *)(param_1 + 0x39) = 1;
        if (local_78 == (undefined8 *)0x0) goto LAB_008fdcfc;
        uVar6 = (ulong)((long)local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4;
        uVar4 = (ulong)(((long)local_78 - (long)local_70 << 0x3c) -
                       ((long)local_78 - (long)local_70)) >> 4;
        if (uVar6 <= uVar4) {
          uVar4 = uVar6;
        }
        puVar5 = local_70;
        if ((1 < uVar4) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0xfU) == 0)) {
          uVar4 = uVar4 & 0xffffffffffffffe;
          puVar5 = local_70 + uVar4 * -2;
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        goto LAB_008fdc18;
      }
      if (puStack_58 < local_50) {
        if (puStack_58 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar1 = puStack_58 + 1;
        *puStack_58 = local_88;
      }
      else {
        puVar1 = (undefined8 *)FUN_008fddd8(&local_60,&local_88);
      }
      puStack_58 = puVar1;
    }
    if (local_78 == (undefined8 *)0x0) {
LAB_008fdcbc:
      puVar1 = *(undefined8 **)(param_1 + 0x48);
      puVar8 = *(undefined8 **)(param_1 + 0x40);
      puVar5 = *(undefined8 **)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x48) = puStack_58;
      *(undefined8 **)(param_1 + 0x40) = local_60;
      *(undefined8 **)(param_1 + 0x50) = local_50;
      uVar7 = 1;
      local_60 = puVar8;
      puStack_58 = puVar1;
      local_50 = puVar5;
joined_r0x008fdd04:
      if (local_60 == (undefined8 *)0x0) {
        return uVar7;
      }
      uVar6 = (ulong)((long)puStack_58 + (-8 - ((long)puStack_58 << 0x3d))) >> 3;
      uVar4 = (ulong)(((long)local_60 - (long)puStack_58 << 0x3d) -
                     ((long)local_60 - (long)puStack_58)) >> 3;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      puVar5 = puStack_58;
      if ((1 < uVar4) && ((((int)local_60 - (int)puStack_58 | -(int)puStack_58) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar5 = puStack_58 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar5 == local_60) {
          puStack_58 = local_60;
          operator_delete(local_60);
          return uVar7;
        }
        puVar5 = puVar5 + -1;
      } while (puVar5 != (undefined8 *)0x0);
    }
    else {
      uVar6 = (ulong)((long)local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4;
      uVar4 = (ulong)(((long)local_78 - (long)local_70 << 0x3c) - ((long)local_78 - (long)local_70))
              >> 4;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      puVar5 = local_70;
      if ((1 < uVar4) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        puVar5 = local_70 + uVar4 * -2;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar5 == local_78) {
          local_70 = local_78;
          operator_delete(local_78);
          goto LAB_008fdcbc;
        }
        puVar5 = puVar5 + -2;
      } while (puVar5 != (undefined8 *)0x0);
    }
  }
LAB_008fdd6c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
LAB_008fdc18:
  if (puVar5 != local_78) goto code_r0x008fdc20;
  local_70 = local_78;
  operator_delete(local_78);
LAB_008fdcfc:
  uVar7 = 0;
  goto joined_r0x008fdd04;
code_r0x008fdc20:
  puVar5 = puVar5 + -2;
  if (puVar5 == (undefined8 *)0x0) goto LAB_008fdd6c;
  goto LAB_008fdc18;
}


// ===== 008fddc4  FUN_008fddc4 =====

ulong FUN_008fddc4(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) >> 3;
}


// ===== 008fddd8  FUN_008fddd8 =====

undefined8 * FUN_008fddd8(long *param_1,undefined8 *param_2)

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
                    /* WARNING: Subroutine does not return */
    FUN_007dd938();
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
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
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


// ===== 008fdecc  FUN_008fdecc =====

void FUN_008fdecc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008fdee4  FUN_008fdee4 =====

void FUN_008fdee4(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  
  if (param_1[3] != 0) {
    puVar2 = (undefined8 *)param_1[2];
    while (puVar2 != (undefined8 *)0x0) {
      if (puVar2 == (undefined8 *)0xfffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar7 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar7;
    }
    lVar3 = param_1[1];
    param_1[2] = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    param_1[3] = 0;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  pvVar7 = (void *)*param_1;
  *param_1 = lVar3;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  param_1[1] = param_2[1];
  lVar4 = param_2[3];
  param_2[1] = 0;
  param_1[3] = lVar4;
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar4 != 0) {
    uVar6 = param_1[1];
    uVar5 = *(ulong *)(lVar3 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}


// ===== 008fe004  FUN_008fe004 =====

void FUN_008fe004(long *param_1,long *param_2,undefined8 param_3,long param_4,uint param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
LAB_008fe03c:
  do {
    param_4 = -param_4;
    plVar4 = param_1;
    do {
      param_1 = plVar4;
      param_4 = param_4 + 1;
      uVar5 = (long)param_2 - (long)param_1 >> 3;
      if ((long)uVar5 < 3) {
        if (uVar5 < 2) {
          return;
        }
        if (uVar5 == 2) {
          lVar3 = *param_1;
          if (lVar3 <= param_2[-1]) {
            return;
          }
          *param_1 = param_2[-1];
          param_2[-1] = lVar3;
          return;
        }
      }
      else {
        if (uVar5 == 3) {
          lVar3 = *param_1;
          lVar6 = param_1[1];
          lVar8 = param_2[-1];
          if (lVar3 <= lVar6) {
            if (lVar6 <= lVar8) {
              return;
            }
            param_1[1] = lVar8;
            param_2[-1] = lVar6;
            lVar3 = *param_1;
            if (lVar3 <= param_1[1]) {
              return;
            }
            *param_1 = param_1[1];
            param_1[1] = lVar3;
            return;
          }
          if (lVar8 < lVar6) {
            *param_1 = lVar8;
            param_2[-1] = lVar3;
            return;
          }
          *param_1 = lVar6;
          param_1[1] = lVar3;
          if (lVar3 <= param_2[-1]) {
            return;
          }
          param_1[1] = param_2[-1];
          param_2[-1] = lVar3;
          return;
        }
        if (uVar5 == 4) {
          lVar3 = *param_1;
          lVar6 = param_1[1];
          lVar9 = param_1[2];
          lVar8 = lVar9;
          if (lVar6 < lVar3) {
            if (lVar9 < lVar6) {
              *param_1 = lVar9;
            }
            else {
              *param_1 = lVar6;
              param_1[1] = lVar3;
              if (lVar3 <= lVar9) goto LAB_008fe5dc;
              param_1[1] = lVar9;
            }
            param_1[2] = lVar3;
            lVar8 = lVar3;
          }
          else if (lVar9 < lVar6) {
            param_1[1] = lVar9;
            param_1[2] = lVar6;
            lVar8 = lVar6;
            if (lVar9 < lVar3) {
              *param_1 = lVar9;
              param_1[1] = lVar3;
            }
          }
LAB_008fe5dc:
          if (lVar8 <= param_2[-1]) {
            return;
          }
          param_1[2] = param_2[-1];
          param_2[-1] = lVar8;
          lVar3 = param_1[1];
          lVar6 = param_1[2];
          if (lVar3 <= lVar6) {
            return;
          }
LAB_008fe678:
          lVar8 = *param_1;
          param_1[1] = lVar6;
          param_1[2] = lVar3;
          if (lVar8 <= lVar6) {
            return;
          }
          *param_1 = lVar6;
          param_1[1] = lVar8;
          return;
        }
        if (uVar5 == 5) {
          lVar3 = *param_1;
          lVar6 = param_1[1];
          lVar9 = param_1[2];
          lVar8 = lVar9;
          if (lVar6 < lVar3) {
            if (lVar9 < lVar6) {
              *param_1 = lVar9;
              lVar7 = lVar9;
              lVar9 = lVar6;
            }
            else {
              *param_1 = lVar6;
              param_1[1] = lVar3;
              lVar7 = lVar6;
              lVar6 = lVar3;
              if (lVar3 <= lVar9) goto LAB_008fe618;
              param_1[1] = lVar9;
            }
            param_1[2] = lVar3;
            lVar8 = lVar3;
            lVar6 = lVar9;
          }
          else {
            lVar7 = lVar3;
            if (lVar9 < lVar6) {
              param_1[1] = lVar9;
              param_1[2] = lVar6;
              lVar8 = lVar6;
              lVar6 = lVar9;
              if (lVar9 < lVar3) {
                *param_1 = lVar9;
                param_1[1] = lVar3;
                lVar7 = lVar9;
                lVar6 = lVar3;
              }
            }
          }
LAB_008fe618:
          lVar9 = param_1[3];
          lVar3 = lVar9;
          if (lVar9 < lVar8) {
            param_1[2] = lVar9;
            param_1[3] = lVar8;
            lVar3 = lVar8;
            if (lVar9 < lVar6) {
              param_1[1] = lVar9;
              param_1[2] = lVar6;
              if (lVar9 < lVar7) {
                *param_1 = lVar9;
                param_1[1] = lVar7;
              }
            }
          }
          if (lVar3 <= param_2[-1]) {
            return;
          }
          param_1[3] = param_2[-1];
          param_2[-1] = lVar3;
          lVar8 = param_1[2];
          lVar6 = param_1[3];
          if (lVar8 <= lVar6) {
            return;
          }
          lVar3 = param_1[1];
          param_1[2] = lVar6;
          param_1[3] = lVar8;
          if (lVar3 <= lVar6) {
            return;
          }
          goto LAB_008fe678;
        }
      }
      if ((long)uVar5 < 0x18) {
        if ((param_5 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          if (param_1 + 1 == param_2) {
            return;
          }
          lVar3 = -8;
          plVar4 = param_1 + 1;
          do {
            plVar10 = plVar4;
            lVar6 = *param_1;
            lVar8 = param_1[1];
            plVar4 = plVar10;
            lVar9 = lVar3;
            if (lVar8 < lVar6) {
              do {
                *plVar4 = lVar6;
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                            );
                }
                lVar6 = plVar4[-2];
                plVar4 = plVar4 + -1;
                lVar9 = lVar9 + 8;
              } while (lVar8 < lVar6);
              *plVar4 = lVar8;
            }
            lVar3 = lVar3 + -8;
            plVar4 = plVar10 + 1;
            param_1 = plVar10;
          } while (plVar10 + 1 != param_2);
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 1 == param_2) {
          return;
        }
        lVar3 = 8;
        plVar4 = param_1;
        plVar10 = param_1 + 1;
        goto LAB_008fe434;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_008fec8c(param_1,param_2,param_2,param_3);
        return;
      }
      lVar3 = param_2[-1];
      plVar4 = param_1 + (uVar5 >> 1);
      if (uVar5 < 0x81) {
        lVar8 = *param_1;
        lVar6 = *plVar4;
        if (lVar8 < lVar6) {
          if (lVar3 < lVar8) {
            *plVar4 = lVar3;
          }
          else {
            *plVar4 = lVar8;
            *param_1 = lVar6;
            if (lVar6 <= param_2[-1]) goto joined_r0x008fe1c8;
            *param_1 = param_2[-1];
          }
          param_2[-1] = lVar6;
        }
        else if (lVar3 < lVar8) {
          *param_1 = lVar3;
          param_2[-1] = lVar8;
          lVar3 = *plVar4;
          if (*param_1 < lVar3) {
            *plVar4 = *param_1;
            *param_1 = lVar3;
          }
        }
      }
      else {
        lVar8 = *plVar4;
        lVar6 = *param_1;
        if (lVar8 < lVar6) {
          if (lVar3 < lVar8) {
            *param_1 = lVar3;
          }
          else {
            *param_1 = lVar8;
            *plVar4 = lVar6;
            if (lVar6 <= param_2[-1]) goto LAB_008fe15c;
            *plVar4 = param_2[-1];
          }
          param_2[-1] = lVar6;
        }
        else if (lVar3 < lVar8) {
          *plVar4 = lVar3;
          param_2[-1] = lVar8;
          lVar3 = *param_1;
          if (*plVar4 < lVar3) {
            *param_1 = *plVar4;
            *plVar4 = lVar3;
          }
        }
LAB_008fe15c:
        lVar6 = plVar4[-1];
        lVar3 = param_1[1];
        lVar8 = param_2[-2];
        if (lVar6 < lVar3) {
          if (lVar8 < lVar6) {
            param_1[1] = lVar8;
          }
          else {
            param_1[1] = lVar6;
            plVar4[-1] = lVar3;
            if (lVar3 <= param_2[-2]) goto LAB_008fe1ec;
            plVar4[-1] = param_2[-2];
          }
          param_2[-2] = lVar3;
        }
        else if (lVar8 < lVar6) {
          plVar4[-1] = lVar8;
          param_2[-2] = lVar6;
          lVar3 = param_1[1];
          if (plVar4[-1] < lVar3) {
            param_1[1] = plVar4[-1];
            plVar4[-1] = lVar3;
          }
        }
LAB_008fe1ec:
        lVar6 = plVar4[1];
        lVar3 = param_1[2];
        lVar8 = param_2[-3];
        if (lVar6 < lVar3) {
          if (lVar8 < lVar6) {
            param_1[2] = lVar8;
          }
          else {
            param_1[2] = lVar6;
            plVar4[1] = lVar3;
            if (lVar3 <= param_2[-3]) goto LAB_008fe258;
            plVar4[1] = param_2[-3];
          }
          param_2[-3] = lVar3;
        }
        else if (lVar8 < lVar6) {
          plVar4[1] = lVar8;
          param_2[-3] = lVar6;
          lVar3 = param_1[2];
          if (plVar4[1] < lVar3) {
            param_1[2] = plVar4[1];
            plVar4[1] = lVar3;
          }
        }
LAB_008fe258:
        lVar3 = plVar4[-1];
        lVar6 = *plVar4;
        lVar8 = plVar4[1];
        if (lVar6 < lVar3) {
          if (lVar8 < lVar6) {
            plVar4[1] = lVar3;
            plVar4[-1] = lVar8;
          }
          else {
            plVar4[-1] = lVar6;
            *plVar4 = lVar3;
            lVar6 = lVar3;
            if (lVar8 < lVar3) {
              *plVar4 = lVar8;
              plVar4[1] = lVar3;
              lVar6 = lVar8;
            }
          }
        }
        else if (lVar8 < lVar6) {
          *plVar4 = lVar8;
          plVar4[1] = lVar6;
          lVar6 = lVar8;
          if (lVar8 < lVar3) {
            plVar4[-1] = lVar8;
            *plVar4 = lVar3;
            lVar6 = lVar3;
          }
        }
        lVar3 = *param_1;
        *param_1 = lVar6;
        *plVar4 = lVar3;
      }
joined_r0x008fe1c8:
      if (((param_5 & 1) == 0) && (*param_1 <= param_1[-1])) {
        param_1 = (long *)FUN_008fe6c0(param_1,param_2,param_3);
        goto LAB_008fe354;
      }
      auVar11 = FUN_008fe804(param_1,param_2,param_3);
      plVar10 = auVar11._0_8_;
      if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
      uVar5 = FUN_008fe958(param_1,plVar10,param_3);
      uVar2 = FUN_008fe958(plVar10 + 1,param_2,param_3);
      if ((uVar2 & 1) != 0) {
        param_4 = -param_4;
        param_2 = plVar10;
        if ((uVar5 & 1) != 0) {
          return;
        }
        goto LAB_008fe03c;
      }
      plVar4 = plVar10 + 1;
    } while ((uVar5 & 1) != 0);
    FUN_008fe004(param_1,plVar10,param_3,-param_4,param_5 & 1);
    param_1 = plVar10 + 1;
LAB_008fe354:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_008fe434:
  lVar6 = *plVar4;
  lVar8 = plVar4[1];
  lVar9 = lVar3;
  if (lVar8 < lVar6) {
    do {
      lVar7 = lVar9 + -8;
      *(long *)((long)param_1 + lVar9) = lVar6;
      plVar4 = param_1;
      if (lVar7 == 0) goto LAB_008fe420;
      lVar6 = *(long *)((long)param_1 + lVar9 + -0x10);
      lVar9 = lVar7;
    } while (lVar8 < lVar6);
    plVar4 = (long *)((long)param_1 + lVar7);
LAB_008fe420:
    *plVar4 = lVar8;
  }
  plVar1 = plVar10 + 1;
  lVar3 = lVar3 + 8;
  plVar4 = plVar10;
  plVar10 = plVar1;
  if (plVar1 == param_2) {
    return;
  }
  goto LAB_008fe434;
}


// ===== 008fe6c0  FUN_008fe6c0 =====

long * FUN_008fe6c0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  if (lVar2 < param_2[-1]) {
    plVar3 = param_1 + 1;
    do {
      plVar1 = plVar3;
      if (plVar1 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      plVar3 = plVar1 + 1;
    } while (*plVar1 <= lVar2);
  }
  else {
    plVar3 = param_1 + 1;
    do {
      plVar1 = plVar3;
      if (param_2 <= plVar1) break;
      plVar3 = plVar1 + 1;
    } while (*plVar1 <= lVar2);
  }
  plVar3 = param_2;
  if (plVar1 < param_2) {
    do {
      if (plVar3 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      plVar3 = plVar3 + -1;
    } while (lVar2 < *plVar3);
  }
  if (plVar1 < plVar3) {
    lVar4 = *plVar1;
    lVar5 = *plVar3;
    do {
      *plVar1 = lVar5;
      *plVar3 = lVar4;
      do {
        plVar1 = plVar1 + 1;
        if (plVar1 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        lVar4 = *plVar1;
      } while (lVar4 <= lVar2);
      do {
        if (plVar3 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        plVar3 = plVar3 + -1;
        lVar5 = *plVar3;
      } while (lVar2 < lVar5);
    } while (plVar1 < plVar3);
  }
  if (param_1 != plVar1 + -1) {
    *param_1 = plVar1[-1];
  }
  plVar1[-1] = lVar2;
  return plVar1;
}


// ===== 008fe804  FUN_008fe804 =====

undefined1  [16] FUN_008fe804(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  lVar4 = *param_1;
  lVar5 = 0;
  do {
    plVar1 = (long *)((long)param_1 + lVar5 + 8);
    if (plVar1 == param_2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    lVar2 = *plVar1;
    lVar5 = lVar5 + 8;
  } while (lVar2 < lVar4);
  plVar1 = (long *)((long)param_1 + lVar5);
  plVar6 = param_2;
  if (lVar5 == 8) {
    do {
      if (plVar6 <= plVar1) break;
      plVar6 = plVar6 + -1;
    } while (lVar4 <= *plVar6);
  }
  else {
    do {
      if (plVar6 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      plVar6 = plVar6 + -1;
    } while (lVar4 <= *plVar6);
  }
  if (plVar1 < plVar6) {
    lVar5 = *plVar6;
    plVar7 = plVar6;
    plVar8 = plVar1;
    do {
      *plVar8 = lVar5;
      *plVar7 = lVar2;
      do {
        plVar3 = plVar8;
        plVar8 = plVar3 + 1;
        if (plVar8 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        lVar2 = *plVar8;
      } while (lVar2 < lVar4);
      do {
        if (plVar7 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        plVar7 = plVar7 + -1;
        lVar5 = *plVar7;
      } while (lVar4 <= lVar5);
    } while (plVar8 < plVar7);
  }
  else {
    plVar3 = plVar1 + -1;
  }
  if (param_1 != plVar3) {
    *param_1 = *plVar3;
  }
  *plVar3 = lVar4;
  auVar9[8] = plVar6 <= plVar1;
  auVar9._0_8_ = plVar3;
  auVar9._9_7_ = 0;
  return auVar9;
}


// ===== 008fe958  FUN_008fe958 =====

bool FUN_008fe958(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  uVar1 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar1 < 3) {
    if (uVar1 < 2) {
      return true;
    }
    if (uVar1 == 2) {
      lVar5 = *param_1;
      if (lVar5 <= param_2[-1]) {
        return true;
      }
      *param_1 = param_2[-1];
LAB_008fead0:
      param_2[-1] = lVar5;
      return true;
    }
LAB_008fe9f8:
    lVar5 = *param_1;
    lVar3 = param_1[1];
    lVar6 = param_1[2];
    if (lVar3 < lVar5) {
      if (lVar6 < lVar3) {
        *param_1 = lVar6;
      }
      else {
        *param_1 = lVar3;
        param_1[1] = lVar5;
        if (lVar5 <= lVar6) goto LAB_008feaf0;
        param_1[1] = lVar6;
      }
      param_1[2] = lVar5;
    }
    else if (lVar6 < lVar3) {
      param_1[1] = lVar6;
      param_1[2] = lVar3;
      if (lVar6 < lVar5) {
        *param_1 = lVar6;
        param_1[1] = lVar5;
      }
    }
LAB_008feaf0:
    if (param_1 + 3 != param_2) {
      iVar4 = 0;
      lVar5 = 0x18;
      plVar8 = param_1 + 3;
      plVar9 = param_1 + 2;
      do {
        plVar2 = plVar8;
        lVar10 = *plVar2;
        lVar6 = *plVar9;
        lVar3 = lVar5;
        if (lVar10 < lVar6) {
          do {
            lVar7 = lVar3 + -8;
            *(long *)((long)param_1 + lVar3) = lVar6;
            plVar8 = param_1;
            if (lVar7 == 0) goto LAB_008feb0c;
            lVar6 = *(long *)((long)param_1 + lVar3 + -0x10);
            lVar3 = lVar7;
          } while (lVar10 < lVar6);
          plVar8 = (long *)((long)param_1 + lVar7);
LAB_008feb0c:
          iVar4 = iVar4 + 1;
          *plVar8 = lVar10;
          if (iVar4 == 8) {
            return plVar2 + 1 == param_2;
          }
        }
        lVar5 = lVar5 + 8;
        plVar8 = plVar2 + 1;
        plVar9 = plVar2;
      } while (plVar2 + 1 != param_2);
    }
    return true;
  }
  if (uVar1 == 3) {
    lVar5 = *param_1;
    lVar3 = param_1[1];
    lVar6 = param_2[-1];
    if (lVar5 <= lVar3) {
      if (lVar3 <= lVar6) {
        return true;
      }
      param_1[1] = lVar6;
      param_2[-1] = lVar3;
      lVar5 = *param_1;
      if (param_1[1] < lVar5) {
        *param_1 = param_1[1];
        param_1[1] = lVar5;
        return true;
      }
      return true;
    }
    if (lVar6 < lVar3) {
      *param_1 = lVar6;
    }
    else {
      *param_1 = lVar3;
      param_1[1] = lVar5;
      if (lVar5 <= param_2[-1]) {
        return true;
      }
      param_1[1] = param_2[-1];
    }
    goto LAB_008fead0;
  }
  if (uVar1 != 4) {
    if (uVar1 != 5) goto LAB_008fe9f8;
    lVar5 = *param_1;
    lVar3 = param_1[1];
    lVar10 = param_1[2];
    lVar6 = lVar10;
    if (lVar3 < lVar5) {
      if (lVar10 < lVar3) {
        *param_1 = lVar10;
        lVar7 = lVar10;
        lVar10 = lVar3;
      }
      else {
        *param_1 = lVar3;
        param_1[1] = lVar5;
        lVar7 = lVar3;
        lVar3 = lVar5;
        if (lVar5 <= lVar10) goto LAB_008fec0c;
        param_1[1] = lVar10;
      }
      param_1[2] = lVar5;
      lVar6 = lVar5;
      lVar3 = lVar10;
    }
    else {
      lVar7 = lVar5;
      if (lVar10 < lVar3) {
        param_1[1] = lVar10;
        param_1[2] = lVar3;
        lVar6 = lVar3;
        lVar3 = lVar10;
        if (lVar10 < lVar5) {
          *param_1 = lVar10;
          param_1[1] = lVar5;
          lVar7 = lVar10;
          lVar3 = lVar5;
        }
      }
    }
LAB_008fec0c:
    lVar10 = param_1[3];
    lVar5 = lVar10;
    if (lVar10 < lVar6) {
      param_1[2] = lVar10;
      param_1[3] = lVar6;
      lVar5 = lVar6;
      if (lVar10 < lVar3) {
        param_1[1] = lVar10;
        param_1[2] = lVar3;
        if (lVar10 < lVar7) {
          *param_1 = lVar10;
          param_1[1] = lVar7;
        }
      }
    }
    if (lVar5 <= param_2[-1]) {
      return true;
    }
    param_1[3] = param_2[-1];
    param_2[-1] = lVar5;
    lVar6 = param_1[2];
    lVar3 = param_1[3];
    if (lVar6 <= lVar3) {
      return true;
    }
    lVar5 = param_1[1];
    param_1[2] = lVar3;
    param_1[3] = lVar6;
    if (lVar5 <= lVar3) {
      return true;
    }
    goto LAB_008fec6c;
  }
  lVar5 = *param_1;
  lVar3 = param_1[1];
  lVar10 = param_1[2];
  lVar6 = lVar10;
  if (lVar3 < lVar5) {
    if (lVar10 < lVar3) {
      *param_1 = lVar10;
    }
    else {
      *param_1 = lVar3;
      param_1[1] = lVar5;
      if (lVar5 <= lVar10) goto LAB_008febc0;
      param_1[1] = lVar10;
    }
    param_1[2] = lVar5;
    lVar6 = lVar5;
  }
  else if (lVar10 < lVar3) {
    param_1[1] = lVar10;
    param_1[2] = lVar3;
    lVar6 = lVar3;
    if (lVar10 < lVar5) {
      *param_1 = lVar10;
      param_1[1] = lVar5;
    }
  }
LAB_008febc0:
  if (lVar6 <= param_2[-1]) {
    return true;
  }
  param_1[2] = param_2[-1];
  param_2[-1] = lVar6;
  lVar5 = param_1[1];
  lVar3 = param_1[2];
  if (lVar5 <= lVar3) {
    return true;
  }
LAB_008fec6c:
  lVar6 = *param_1;
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  if (lVar6 <= lVar3) {
    return true;
  }
  *param_1 = lVar3;
  param_1[1] = lVar6;
  return true;
}


// ===== 008fec8c  FUN_008fec8c =====

long * FUN_008fec8c(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_1 != param_2) {
    lVar3 = (long)param_2 - (long)param_1 >> 3;
    if (1 < lVar3) {
      uVar4 = lVar3 - 2U >> 1;
      uVar10 = uVar4;
      do {
        if (uVar10 <= uVar4) {
          uVar8 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
          uVar15 = uVar10 * 2 + 2;
          uVar7 = uVar8;
          if (((long)uVar15 < lVar3) && (uVar7 = uVar15, param_1[uVar15] <= param_1[uVar8])) {
            uVar7 = uVar8;
          }
          lVar13 = param_1[uVar7];
          lVar9 = param_1[uVar10];
          uVar15 = uVar10;
          if (lVar9 <= lVar13) {
            do {
              uVar8 = uVar7;
              param_1[uVar15] = lVar13;
              if ((long)uVar4 < (long)uVar8) break;
              uVar2 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
              uVar15 = uVar8 * 2 + 2;
              uVar7 = uVar2;
              if (((long)uVar15 < lVar3) && (uVar7 = uVar15, param_1[uVar15] <= param_1[uVar2])) {
                uVar7 = uVar2;
              }
              lVar13 = param_1[uVar7];
              uVar15 = uVar8;
            } while (lVar9 <= lVar13);
            param_1[uVar8] = lVar9;
          }
        }
        bVar1 = 0 < (long)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    plVar5 = param_2;
    if (param_2 != param_3) {
      do {
        lVar9 = *plVar5;
        if (lVar9 < *param_1) {
          *plVar5 = *param_1;
          *param_1 = lVar9;
          if (1 < lVar3) {
            if ((long)param_2 - (long)param_1 == 0x10) {
              uVar10 = 1;
            }
            else {
              uVar10 = 1;
              if (param_1[1] < param_1[2]) {
                uVar10 = 2;
              }
            }
            lVar13 = param_1[uVar10];
            if (lVar9 <= lVar13) {
              uVar4 = 0;
              do {
                uVar15 = uVar10;
                param_1[uVar4] = lVar13;
                if ((long)(lVar3 - 2U >> 1) < (long)uVar15) break;
                uVar8 = uVar15 << 1 | 1;
                uVar4 = uVar15 * 2 + 2;
                uVar10 = uVar8;
                if (((long)uVar4 < lVar3) && (uVar10 = uVar4, param_1[uVar4] <= param_1[uVar8])) {
                  uVar10 = uVar8;
                }
                lVar13 = param_1[uVar10];
                uVar4 = uVar15;
              } while (lVar9 <= lVar13);
              param_1[uVar15] = lVar9;
            }
          }
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != param_3);
    }
    param_3 = plVar5;
    if (1 < lVar3) {
      do {
        lVar9 = *param_1;
        uVar10 = 0;
        plVar5 = param_1;
        do {
          uVar15 = uVar10 << 1 | 1;
          uVar4 = uVar10 * 2 + 2;
          plVar12 = plVar5 + uVar10 + 1;
          if ((long)uVar4 < lVar3) {
            lVar11 = plVar5[uVar10 + 2];
            lVar14 = plVar5[uVar10 + 1];
            lVar13 = lVar14;
            if (lVar14 <= lVar11) {
              lVar13 = lVar11;
            }
            plVar6 = plVar5 + uVar10 + 2;
            uVar10 = uVar4;
            if (lVar11 <= lVar14) {
              plVar6 = plVar12;
              uVar10 = uVar15;
            }
          }
          else {
            lVar13 = *plVar12;
            plVar6 = plVar12;
            uVar10 = uVar15;
          }
          *plVar5 = lVar13;
          plVar5 = plVar6;
        } while ((long)uVar10 <= (long)(lVar3 - 2U >> 1));
        param_2 = param_2 + -1;
        if (plVar6 == param_2) {
          *plVar6 = lVar9;
        }
        else {
          lVar13 = (long)plVar6 + (8 - (long)param_1) >> 3;
          *plVar6 = *param_2;
          *param_2 = lVar9;
          if (1 < lVar13) {
            uVar10 = lVar13 - 2U >> 1;
            lVar9 = *plVar6;
            lVar13 = param_1[uVar10];
            plVar5 = param_1 + uVar10;
            if (lVar13 < lVar9) {
              do {
                plVar12 = plVar5;
                *plVar6 = lVar13;
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1 >> 1;
                lVar13 = param_1[uVar10];
                plVar6 = plVar12;
                plVar5 = param_1 + uVar10;
              } while (lVar13 < lVar9);
              *plVar12 = lVar9;
            }
          }
        }
        bVar1 = 2 < lVar3;
        lVar3 = lVar3 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// ===== 008fef24  FUN_008fef24 =====

undefined8 FUN_008fef24(long *param_1,ulong *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  void *local_28 [2];
  byte local_18;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    uVar5 = *param_2;
    if ((uVar3 & uVar4) == 0) {
      uVar6 = uVar5 & uVar4;
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
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if (plVar7[2] == uVar5) {
            FUN_008ff034(local_28);
            pvVar2 = local_28[0];
            local_28[0] = (void *)0x0;
            if (pvVar2 != (void *)0x0) {
              if ((pvVar2 == (void *)0xfffffffffffffff0) && ((local_18 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(pvVar2);
            }
            return 1;
          }
        }
        else {
          if ((uVar3 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 008ff034  FUN_008ff034 =====

void FUN_008ff034(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_008ff0ec;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_008ff0ec;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_008ff0ec:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  lVar6 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar6 + -1;
  return;
}


// ===== 008ff168  FUN_008ff168 =====

undefined1  [16] FUN_008ff168(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  puVar11 = (undefined1 *)*param_2;
  puVar10 = (undefined1 *)plVar8[1];
  if (puVar10 == (undefined1 *)0x0) {
    puVar12 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar2 = puVar10 + -1;
    if (((ulong)puVar10 & (ulong)puVar2) == 0) {
      puVar12 = (undefined1 *)((ulong)puVar2 & (ulong)puVar11);
    }
    else {
      puVar12 = puVar11;
      if (puVar10 <= puVar11) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar12 = puVar11 + -(uVar5 * (long)puVar10);
      }
    }
    puVar3 = *(undefined8 **)(*plVar8 + (long)puVar12 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar3; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        puVar6 = (undefined1 *)plVar9[1];
        if (puVar6 == puVar11) {
          if ((undefined1 *)plVar9[2] == puVar11) {
            uVar1 = 0;
            goto LAB_008ff400;
          }
        }
        else {
          if (((ulong)puVar10 & (ulong)puVar2) == 0) {
            puVar6 = (undefined1 *)((ulong)puVar6 & (ulong)puVar2);
          }
          else if (puVar10 <= puVar6) {
            uVar5 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar5 = (ulong)puVar6 / (ulong)puVar10;
            }
            puVar6 = puVar6 + -(uVar5 * (long)puVar10);
          }
          if (puVar6 != puVar12) break;
        }
      }
    }
  }
  plVar9 = (long *)operator_new(0x20);
  if (plVar9 == (long *)0x0) {
LAB_008ff420:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar9 = 0;
  plVar9[1] = (long)puVar11;
  if (plVar9 == (long *)0xfffffffffffffff0) goto LAB_008ff420;
  lVar4 = *param_4;
  plVar9[2] = *param_3;
  plVar9[3] = lVar4;
  if ((float)(plVar8[3] + 1) <= *(float *)(plVar8 + 4) * (float)puVar10) goto LAB_008ff388;
  if (puVar10 < (undefined1 *)0x3) {
    uVar5 = 1;
  }
  else {
    uVar5 = (ulong)(((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0);
  }
  puVar12 = (undefined1 *)(uVar5 | (long)puVar10 << 1);
  puVar2 = (undefined1 *)(long)((float)(plVar8[3] + 1) / *(float *)(plVar8 + 4));
  if (puVar12 <= puVar2) {
    puVar12 = puVar2;
  }
  if (puVar12 + -1 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar12 & (ulong)(puVar12 + -1)) != 0) {
    puVar12 = (undefined1 *)FUN_005204f8(puVar12);
    puVar10 = (undefined1 *)plVar8[1];
  }
  if (puVar10 < puVar12) {
LAB_008ff2e0:
    FUN_008ff434(plVar8,puVar12);
  }
  else if (puVar12 < puVar10) {
    puVar2 = (undefined1 *)(long)((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
    if ((puVar10 < (undefined1 *)0x3) || (((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0)) {
      puVar2 = (undefined1 *)FUN_005204f8();
    }
    else if ((undefined1 *)0x1 < puVar2) {
      puVar2 = (undefined1 *)(1L << (-LZCOUNT(puVar2 + -1) & 0x3fU));
    }
    if (puVar12 <= puVar2) {
      puVar12 = puVar2;
    }
    if (puVar12 < puVar10) goto LAB_008ff2e0;
  }
  puVar10 = (undefined1 *)plVar8[1];
  if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
    puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar11);
  }
  else {
    puVar12 = puVar11;
    if (puVar10 <= puVar11) {
      uVar5 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar5 = (ulong)puVar11 / (ulong)puVar10;
      }
      puVar12 = puVar11 + -(uVar5 * (long)puVar10);
    }
  }
LAB_008ff388:
  lVar4 = *plVar8;
  plVar7 = *(long **)(lVar4 + (long)puVar12 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar8 + 2;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(lVar4 + (long)puVar12 * 8) = plVar7;
    if (*plVar9 != 0) {
      puVar11 = *(undefined1 **)(*plVar9 + 8);
      if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
        puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)(puVar10 + -1));
      }
      else if (puVar10 <= puVar11) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar11 = puVar11 + -(uVar5 * (long)puVar10);
      }
      *(long **)(*plVar8 + (long)puVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
  }
  uVar1 = 1;
  plVar8[3] = plVar8[3] + 1;
LAB_008ff400:
  auVar13._8_8_ = uVar1;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 008ff434  FUN_008ff434 =====

void FUN_008ff434(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(param_2 << 3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - 1;
      uVar4 = plVar6[1];
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
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
            *(long **)(*param_1 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(*param_1 + uVar8 * 8);
            **(long **)(*param_1 + uVar8 * 8) = (long)plVar7;
            plVar7 = plVar6;
          }
        }
        plVar6 = plVar7;
      }
    }
  }
  return;
}


// ===== 008ff588  FUN_008ff588 =====

void FUN_008ff588(undefined8 *param_1)

{
  FUN_00661054();
  *param_1 = &PTR_FUN_00d3d1a8;
  *(undefined2 *)((long)param_1 + 0x39) = 0;
  return;
}


// ===== 008ff5c0  FUN_008ff5c0 =====

undefined1 FUN_008ff5c0(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  return *(undefined1 *)(lVar1 + 0x3a);
}


// ===== 008ff5e8  FUN_008ff5e8 =====

undefined8 FUN_008ff5e8(void)

{
  return 1;
}


// ===== 008ff5f4  FUN_008ff5f4 =====

int FUN_008ff5f4(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  iVar6 = -1;
  while( true ) {
    if (puVar7 == puVar1) {
      return iVar6;
    }
    lVar4 = (**(code **)(*(long *)*puVar7 + 0x18))();
    if ((*(byte *)(lVar4 + 0x39) & 1) != 0) break;
    lVar4 = (**(code **)(*(long *)*puVar7 + 0x18))();
    iVar3 = iVar6;
    if (*(char *)(lVar4 + 0x3a) == '\x01') {
      plVar5 = (long *)(**(code **)(*(long *)*puVar7 + 0x18))();
      iVar3 = (**(code **)(*plVar5 + 0x20))();
      if ((iVar6 != -1) && (bVar2 = iVar6 != iVar3, iVar3 = iVar6, bVar2)) {
        return -1;
      }
    }
    puVar7 = puVar7 + 1;
    iVar6 = iVar3;
  }
  return -1;
}


// ===== 008ff6a0  FUN_008ff6a0 =====

void FUN_008ff6a0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[8];
  *param_1 = &PTR_FUN_00d3d1e0;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[9];
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
        plVar1 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[8];
    }
    param_1[9] = plVar3;
    operator_delete(plVar1);
  }
  FUN_006634ac(param_1);
  return;
}


// ===== 008ff750  FUN_008ff750 =====

void FUN_008ff750(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[8];
  *param_1 = &PTR_FUN_00d3d1e0;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[9];
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
        plVar1 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[8];
    }
    param_1[9] = plVar3;
    operator_delete(plVar1);
  }
  FUN_006634ac(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ff80c  FUN_008ff80c =====

void FUN_008ff80c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8ff814);
  (*pcVar1)();
}


// ===== 008ff814  FUN_008ff814 =====

void FUN_008ff814(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_00d3d210;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  return;
}


// ===== 008ff834  FUN_008ff834 =====

void FUN_008ff834(void)

{
  return;
}


// ===== 008ff83c  FUN_008ff83c =====

void FUN_008ff83c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ff848  FUN_008ff848 =====

undefined8 FUN_008ff848(void)

{
  return 8;
}


// ===== 008ff854  FUN_008ff854 =====

undefined8 FUN_008ff854(void)

{
  return 0;
}


// ===== 008ff860  FUN_008ff860 =====

void FUN_008ff860(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [80];
  long local_58;
  
  *param_1 = &PTR_FUN_00d3d248;
  lVar4 = *param_2;
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar6 = param_2[4];
  lVar4 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[1];
  plVar5 = param_1 + 7;
  *plVar5 = 0;
  param_1[5] = lVar6;
  param_1[4] = lVar4;
  param_1[3] = lVar8;
  param_1[2] = lVar7;
  *(int *)(param_1 + 6) = param_5;
  *(undefined2 *)((long)param_1 + 0x34) = 0;
  param_1[8] = 0;
  if (param_5 != 1) {
    pvVar2 = operator_new(0x1a28);
    local_108 = (long *)*param_2;
    if (local_108 != (long *)0x0) {
      FUN_00d0f740(1,local_108 + 1);
    }
    lStack_f8 = param_2[2];
    local_100 = param_2[1];
    lStack_e8 = param_2[4];
    lStack_f0 = param_2[3];
    FUN_0086db50(auStack_e0,param_2 + 5);
    FUN_0086db00(auStack_a8,param_2 + 0xc);
    local_58 = param_2[0x16];
    FUN_00900b14(pvVar2,&local_108);
    FUN_0086db20(auStack_a8);
    FUN_0086db70(auStack_e0);
    plVar3 = local_108;
    if ((local_108 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,local_108 + 1), iVar1 == 1))
    {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    plVar3 = (long *)param_1[8];
    param_1[8] = pvVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    *(undefined1 *)((long)param_1 + 0x34) = 0;
  }
  pvVar2 = operator_new(0x6c0);
  local_108 = (long *)*param_2;
  if (local_108 != (long *)0x0) {
    FUN_00d0f740(1,local_108 + 1);
  }
  lStack_f8 = param_2[2];
  local_100 = param_2[1];
  lStack_e8 = param_2[4];
  lStack_f0 = param_2[3];
  FUN_0086db50(auStack_e0,param_2 + 5);
  FUN_0086db00(auStack_a8,param_2 + 0xc);
  local_58 = param_2[0x16];
  FUN_008da404(pvVar2,&local_108,param_3,param_4);
  FUN_0086db20(auStack_a8);
  FUN_0086db70(auStack_e0);
  plVar3 = local_108;
  if ((local_108 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,local_108 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)*plVar5;
  *plVar5 = (long)pvVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return;
}


// ===== 008ffa78  FUN_008ffa78 =====

void FUN_008ffa78(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[8];
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00d3d248;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008ffafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 008ffb10  FUN_008ffb10 =====

void FUN_008ffb10(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[8];
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00d3d248;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 008ffba4  FUN_008ffba4 =====

void FUN_008ffba4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *local_f0 [2];
  code *local_e0;
  code *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [152];
  
  local_f0[0] = &local_c8;
  local_e0 = FUN_004473ec;
  local_d8 = FUN_00900778;
  local_c8 = param_3;
  uStack_c0 = param_4;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(param_1);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(auStack_b8);
      FUN_0086e298(auStack_b8);
    }
    (*local_d8)(param_1,local_f0,*(undefined8 *)(param_2 + 0x38));
  }
  (*local_e0)(0,local_f0,local_f0);
  return;
}


// ===== 008ffc70  FUN_008ffc70 =====

void FUN_008ffc70(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 local_130 [2];
  code *local_120;
  code *local_118;
  undefined1 auStack_108 [152];
  undefined1 auStack_70 [64];
  
  local_120 = FUN_004473ec;
  local_118 = FUN_00900798;
  local_130[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    plVar1 = *(long **)(param_2 + 0x40);
    FUN_0086dba4(auStack_108);
    (**(code **)(*plVar1 + 0x18))(param_1,plVar1,auStack_108);
    FUN_0086dbd4(auStack_108);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      plVar1 = *(long **)(param_2 + 0x40);
      FUN_0086dba4(auStack_70);
      (**(code **)(*plVar1 + 0x18))(auStack_108,plVar1,auStack_70);
      FUN_0086dbd4(auStack_70);
      FUN_0086e298(auStack_108);
    }
    (*local_118)(param_1,local_130,*(undefined8 *)(param_2 + 0x38));
  }
  (*local_120)(0,local_130,local_130);
  return;
}


// ===== 008ffd6c  FUN_008ffd6c =====

void FUN_008ffd6c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *local_100 [2];
  code *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  ppuVar1 = local_100;
  local_f0 = FUN_004473ec;
  local_e8 = FUN_009007f4;
  local_100[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    uStack_d8 = param_3[1];
    local_e0 = *param_3;
    local_d0 = param_3[2];
    puVar2 = &local_e0;
    ppuVar1 = *(undefined8 ***)(param_2 + 0x40);
    pcVar3 = *(code **)((long)*ppuVar1 + 0x20);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      uStack_38 = param_3[1];
      local_40 = *param_3;
      local_30 = param_3[2];
      (**(code **)(**(long **)(param_2 + 0x40) + 0x20))
                (&local_e0,*(long **)(param_2 + 0x40),&local_40);
      FUN_0086e298(&local_e0);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    pcVar3 = local_e8;
  }
  (*pcVar3)(param_1,ppuVar1,puVar2);
  (*local_f0)(0,local_100,local_100);
  return;
}


// ===== 008ffe50  FUN_008ffe50 =====

void FUN_008ffe50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *local_f0 [2];
  code *local_e0;
  code *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [152];
  
  local_f0[0] = &local_c8;
  local_e0 = FUN_004473ec;
  local_d8 = FUN_00900840;
  local_c8 = param_3;
  uStack_c0 = param_4;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    (**(code **)(**(long **)(param_2 + 0x40) + 0x28))(param_1);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      (**(code **)(**(long **)(param_2 + 0x40) + 0x28))(auStack_b8);
      FUN_0086e298(auStack_b8);
    }
    (*local_d8)(param_1,local_f0,*(undefined8 *)(param_2 + 0x38));
  }
  (*local_e0)(0,local_f0,local_f0);
  return;
}


// ===== 008fff1c  FUN_008fff1c =====

void FUN_008fff1c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *local_100 [2];
  code *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  ppuVar1 = local_100;
  local_f0 = FUN_004473ec;
  local_e8 = FUN_00900860;
  local_100[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    uStack_d8 = param_3[1];
    local_e0 = *param_3;
    local_d0 = param_3[2];
    puVar2 = &local_e0;
    ppuVar1 = *(undefined8 ***)(param_2 + 0x40);
    pcVar3 = *(code **)((long)*ppuVar1 + 0x30);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      uStack_38 = param_3[1];
      local_40 = *param_3;
      local_30 = param_3[2];
      (**(code **)(**(long **)(param_2 + 0x40) + 0x30))
                (&local_e0,*(long **)(param_2 + 0x40),&local_40);
      FUN_0086e298(&local_e0);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    pcVar3 = local_e8;
  }
  (*pcVar3)(param_1,ppuVar1,puVar2);
  (*local_f0)(0,local_100,local_100);
  return;
}


// ===== 00900000  FUN_00900000 =====

void FUN_00900000(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *local_140 [2];
  code *local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  ppuVar1 = local_140;
  local_130 = FUN_004473ec;
  local_128 = FUN_009008ac;
  local_140[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    uStack_118 = param_3[1];
    local_120 = *param_3;
    uStack_108 = param_3[3];
    uStack_110 = param_3[2];
    local_e0 = param_3[8];
    ppuVar1 = *(undefined8 ***)(param_2 + 0x40);
    uStack_f8 = param_3[5];
    local_100 = param_3[4];
    uStack_e8 = param_3[7];
    uStack_f0 = param_3[6];
    puVar2 = &local_120;
    pcVar3 = *(code **)((long)*ppuVar1 + 0x38);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      uStack_78 = param_3[1];
      local_80 = *param_3;
      uStack_68 = param_3[3];
      uStack_70 = param_3[2];
      local_40 = param_3[8];
      uStack_58 = param_3[5];
      local_60 = param_3[4];
      uStack_48 = param_3[7];
      uStack_50 = param_3[6];
      (**(code **)(**(long **)(param_2 + 0x40) + 0x38))
                (&local_120,*(long **)(param_2 + 0x40),&local_80);
      FUN_0086e298(&local_120);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    pcVar3 = local_128;
  }
  (*pcVar3)(param_1,ppuVar1,puVar2);
  (*local_130)(0,local_140,local_140);
  return;
}


// ===== 009000fc  FUN_009000fc =====

void FUN_009000fc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *local_100 [2];
  code *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  ppuVar1 = local_100;
  local_f0 = FUN_004473ec;
  local_e8 = FUN_00900904;
  local_100[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    uStack_d8 = param_3[1];
    local_e0 = *param_3;
    local_d0 = param_3[2];
    puVar2 = &local_e0;
    ppuVar1 = *(undefined8 ***)(param_2 + 0x40);
    pcVar3 = *(code **)((long)*ppuVar1 + 0x40);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      uStack_38 = param_3[1];
      local_40 = *param_3;
      local_30 = param_3[2];
      (**(code **)(**(long **)(param_2 + 0x40) + 0x40))
                (&local_e0,*(long **)(param_2 + 0x40),&local_40);
      FUN_0086e298(&local_e0);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    pcVar3 = local_e8;
  }
  (*pcVar3)(param_1,ppuVar1,puVar2);
  (*local_f0)(0,local_100,local_100);
  return;
}


// ===== 009001e0  FUN_009001e0 =====

void FUN_009001e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 local_140 [2];
  code *local_130;
  code *local_128;
  undefined1 auStack_118 [152];
  undefined1 auStack_80 [80];
  
  local_130 = FUN_004473ec;
  local_128 = FUN_00900950;
  local_140[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    plVar1 = *(long **)(param_2 + 0x40);
    FUN_0086db00(auStack_118);
    (**(code **)(*plVar1 + 0x48))(param_1,plVar1,auStack_118);
    FUN_0086db20(auStack_118);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      plVar1 = *(long **)(param_2 + 0x40);
      FUN_0086db00(auStack_80);
      (**(code **)(*plVar1 + 0x48))(auStack_118,plVar1,auStack_80);
      FUN_0086db20(auStack_80);
      FUN_0086e298(auStack_118);
    }
    (*local_128)(param_1,local_140,*(undefined8 *)(param_2 + 0x38));
  }
  (*local_130)(0,local_140,local_140);
  return;
}


// ===== 009002dc  FUN_009002dc =====

void FUN_009002dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 local_120 [2];
  code *local_110;
  code *local_108;
  undefined1 auStack_100 [152];
  undefined1 auStack_68 [56];
  
  local_110 = FUN_004473ec;
  local_108 = FUN_009009ac;
  local_120[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    plVar1 = *(long **)(param_2 + 0x40);
    FUN_0086db50(auStack_100);
    (**(code **)(*plVar1 + 0x50))(param_1,plVar1,auStack_100);
    FUN_0086db70(auStack_100);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      plVar1 = *(long **)(param_2 + 0x40);
      FUN_0086db50(auStack_68);
      (**(code **)(*plVar1 + 0x50))(auStack_100,plVar1,auStack_68);
      FUN_0086db70(auStack_68);
      FUN_0086e298(auStack_100);
    }
    (*local_108)(param_1,local_120,*(undefined8 *)(param_2 + 0x38));
  }
  (*local_110)(0,local_120,local_120);
  return;
}


// ===== 009003d8  FUN_009003d8 =====

void FUN_009003d8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *local_120 [2];
  code *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  ppuVar1 = local_120;
  local_110 = FUN_004473ec;
  local_108 = FUN_00900a08;
  local_120[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    uStack_f8 = param_3[1];
    local_100 = *param_3;
    uStack_e8 = param_3[3];
    uStack_f0 = param_3[2];
    local_e0 = param_3[4];
    ppuVar1 = *(undefined8 ***)(param_2 + 0x40);
    puVar2 = &local_100;
    pcVar3 = *(code **)((long)*ppuVar1 + 0x58);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      uStack_58 = param_3[1];
      local_60 = *param_3;
      uStack_48 = param_3[3];
      uStack_50 = param_3[2];
      local_40 = param_3[4];
      (**(code **)(**(long **)(param_2 + 0x40) + 0x58))
                (&local_100,*(long **)(param_2 + 0x40),&local_60);
      FUN_0086e298(&local_100);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    pcVar3 = local_108;
  }
  (*pcVar3)(param_1,ppuVar1,puVar2);
  (*local_110)(0,local_120,local_120);
  return;
}


// ===== 009004c4  FUN_009004c4 =====

void FUN_009004c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 local_140 [2];
  code *local_130;
  code *local_128;
  undefined1 auStack_120 [152];
  undefined1 auStack_88 [72];
  
  uVar1 = FUN_0086e3c0(param_3);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x35) = 1;
  }
  if (((*(int *)(param_2 + 0x30) == 0) && ((*(byte *)(param_2 + 0x34) & 1) == 0)) &&
     (*(char *)(param_2 + 0x35) == '\x01')) {
    *(undefined1 *)(param_2 + 0x34) = 1;
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc_scream_network_controller/goog_cc_scream_network_controller.cc"
                   ,0x461,"Switching to ScreamV2 due to ECN CE");
    }
  }
  local_130 = FUN_004473ec;
  local_128 = FUN_00900a54;
  local_140[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    plVar2 = *(long **)(param_2 + 0x40);
    FUN_0086dc78(auStack_120,param_3);
    (**(code **)(*plVar2 + 0x60))(param_1,plVar2,auStack_120);
    FUN_0086dda8(auStack_120);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      plVar2 = *(long **)(param_2 + 0x40);
      FUN_0086dc78(auStack_88,param_3);
      (**(code **)(*plVar2 + 0x60))(auStack_120,plVar2,auStack_88);
      FUN_0086dda8(auStack_88);
      FUN_0086e298(auStack_120);
    }
    (*local_128)(param_1,local_140,*(undefined8 *)(param_2 + 0x38));
  }
  (*local_130)(0,local_140,local_140);
  return;
}


// ===== 00900630  FUN_00900630 =====

void FUN_00900630(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *local_180 [2];
  code *local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  ppuVar1 = local_180;
  local_170 = FUN_004473ec;
  local_168 = FUN_00900ab0;
  local_180[0] = param_3;
  if (*(char *)(param_2 + 0x34) == '\x01') {
    uStack_118 = param_3[9];
    local_120 = param_3[8];
    uStack_108 = param_3[0xb];
    uStack_110 = param_3[10];
    local_e0 = param_3[0x10];
    ppuVar1 = *(undefined8 ***)(param_2 + 0x40);
    uStack_158 = param_3[1];
    local_160 = *param_3;
    uStack_148 = param_3[3];
    uStack_150 = param_3[2];
    uStack_138 = param_3[5];
    local_140 = param_3[4];
    uStack_128 = param_3[7];
    uStack_130 = param_3[6];
    uStack_f8 = param_3[0xd];
    local_100 = param_3[0xc];
    uStack_e8 = param_3[0xf];
    uStack_f0 = param_3[0xe];
    puVar2 = &local_160;
    pcVar3 = *(code **)((long)*ppuVar1 + 0x68);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      uStack_78 = param_3[9];
      local_80 = param_3[8];
      uStack_68 = param_3[0xb];
      uStack_70 = param_3[10];
      local_40 = param_3[0x10];
      uStack_b8 = param_3[1];
      local_c0 = *param_3;
      uStack_a8 = param_3[3];
      uStack_b0 = param_3[2];
      uStack_98 = param_3[5];
      local_a0 = param_3[4];
      uStack_88 = param_3[7];
      uStack_90 = param_3[6];
      uStack_58 = param_3[0xd];
      local_60 = param_3[0xc];
      uStack_48 = param_3[0xf];
      uStack_50 = param_3[0xe];
      (**(code **)(**(long **)(param_2 + 0x40) + 0x68))
                (&local_160,*(long **)(param_2 + 0x40),&local_c0);
      FUN_0086e298(&local_160);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    pcVar3 = local_168;
  }
  (*pcVar3)(param_1,ppuVar1,puVar2);
  (*local_170)(0,local_180,local_180);
  return;
}


// ===== 0090074c  FUN_0090074c =====

byte FUN_0090074c(long param_1)

{
  if (*(int *)(param_1 + 0x30) == 1) {
    return (*(byte *)(param_1 + 0x35) ^ 1) & 1;
  }
  return 1;
}


// ===== 00900778  FUN_00900778 =====

void FUN_00900778(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00900794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
  return;
}


// ===== 00900798  FUN_00900798 =====

void FUN_00900798(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 auStack_60 [64];
  
  FUN_0086dba4(auStack_60,*param_2);
  (**(code **)(*param_3 + 0x18))(param_1,param_3,auStack_60);
  FUN_0086dbd4(auStack_60);
  return;
}


// ===== 009007f4  FUN_009007f4 =====

void FUN_009007f4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_28 = puVar1[1];
  local_30 = *puVar1;
  local_20 = puVar1[2];
  (**(code **)(*param_2 + 0x20))(param_2,&local_30);
  return;
}


// ===== 00900840  FUN_00900840 =====

void FUN_00900840(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0090085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
  return;
}


// ===== 00900860  FUN_00900860 =====

void FUN_00900860(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_28 = puVar1[1];
  local_30 = *puVar1;
  local_20 = puVar1[2];
  (**(code **)(*param_2 + 0x30))(param_2,&local_30);
  return;
}


// ===== 009008ac  FUN_009008ac =====

void FUN_009008ac(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_38 = puVar1[5];
  uStack_40 = puVar1[4];
  uStack_28 = puVar1[7];
  local_30 = puVar1[6];
  uStack_58 = puVar1[1];
  local_60 = *puVar1;
  uStack_48 = puVar1[3];
  local_50 = puVar1[2];
  local_20 = puVar1[8];
  (**(code **)(*param_2 + 0x38))(param_2,&local_60);
  return;
}


// ===== 00900904  FUN_00900904 =====

void FUN_00900904(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_28 = puVar1[1];
  local_30 = *puVar1;
  local_20 = puVar1[2];
  (**(code **)(*param_2 + 0x40))(param_2,&local_30);
  return;
}


// ===== 00900950  FUN_00900950 =====

void FUN_00900950(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 auStack_70 [80];
  
  FUN_0086db00(auStack_70,*param_2);
  (**(code **)(*param_3 + 0x48))(param_1,param_3,auStack_70);
  FUN_0086db20(auStack_70);
  return;
}


// ===== 009009ac  FUN_009009ac =====

void FUN_009009ac(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 auStack_58 [56];
  
  FUN_0086db50(auStack_58,*param_2);
  (**(code **)(*param_3 + 0x50))(param_1,param_3,auStack_58);
  FUN_0086db70(auStack_58);
  return;
}


// ===== 00900a08  FUN_00900a08 =====

void FUN_00900a08(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  local_20 = puVar1[4];
  (**(code **)(*param_2 + 0x58))(param_2,&local_40);
  return;
}


// ===== 00900a54  FUN_00900a54 =====

void FUN_00900a54(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  FUN_0086dc78(auStack_68,*param_2);
  (**(code **)(*param_3 + 0x60))(param_1,param_3,auStack_68);
  FUN_0086dda8(auStack_68);
  return;
}


// ===== 00900ab0  FUN_00900ab0 =====

void FUN_00900ab0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_38 = puVar1[0xd];
  local_40 = puVar1[0xc];
  uStack_28 = puVar1[0xf];
  uStack_30 = puVar1[0xe];
  uStack_58 = puVar1[9];
  local_60 = puVar1[8];
  uStack_48 = puVar1[0xb];
  uStack_50 = puVar1[10];
  local_20 = puVar1[0x10];
  uStack_78 = puVar1[5];
  local_80 = puVar1[4];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uStack_98 = puVar1[1];
  local_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  (**(code **)(*param_2 + 0x68))(param_2,&local_a0);
  return;
}


// ===== 00900b14  FUN_00900b14 =====

void FUN_00900b14(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d3d2d0;
  lVar3 = *param_2;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3 + 8);
  }
  lVar3 = param_2[1];
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  param_1[3] = param_2[2];
  param_1[2] = lVar3;
  param_1[5] = lVar5;
  param_1[4] = lVar4;
  FUN_009063a8(param_1 + 6,param_1[2]);
  param_1[0x107] = param_2[0x16];
  uVar2 = *(undefined1 *)((long)param_2 + 0x6b);
  *(undefined2 *)((long)param_1 + 0x841) = 0;
  *(undefined1 *)(param_1 + 0x108) = uVar2;
  param_1[0x109] = param_2[0x16];
  FUN_00901ef8(param_1 + 0x10a,param_1 + 1);
  *(undefined1 *)(param_1 + 0x330) = 1;
  if ((char)param_2[7] == '\x01') {
    lVar3 = param_2[6];
  }
  else {
    lVar3 = 0;
  }
  param_1[0x331] = lVar3;
  if ((char)param_2[9] == '\x01') {
    lVar3 = param_2[8];
  }
  else {
    lVar3 = 0x7fffffffffffffff;
  }
  param_1[0x332] = lVar3;
  plVar1 = param_2 + 10;
  if ((char)param_2[0xb] == '\0') {
    plVar1 = (long *)&UNK_001f52a8;
  }
  lVar3 = *plVar1;
  *(undefined1 *)(param_1 + 0x334) = 0;
  *(undefined1 *)(param_1 + 0x335) = 0;
  param_1[0x333] = lVar3;
  FUN_0086db00(param_1 + 0x336,param_2 + 0xc);
  param_1[0x344] = 0;
  param_1[0x343] = 0;
  param_1[0x342] = 0;
  param_1[0x341] = 0;
  param_1[0x340] = 0;
  if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
    if (*(char *)(param_1 + 0x335) == '\x01') {
      lVar3 = param_1[0x334];
    }
    else {
      lVar3 = 0x7fffffffffffffff;
    }
    if ((long)param_1[0x332] <= lVar3) {
      lVar3 = param_1[0x332];
    }
    FUN_00903110(param_1 + 0x10a,param_1[0x331],lVar3,param_1[0x333]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 00900c88  FUN_00900c88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900c88(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  uVar9 = _UNK_002258a8;
  uVar8 = _DAT_002258a0;
  uVar5 = _UNK_00225878;
  uVar4 = _DAT_00225870;
  uVar3 = _UNK_00225868;
  uVar10 = _DAT_00225860;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = uVar3;
  param_1[8] = uVar10;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  uVar10 = _DAT_00225890;
  uVar7 = _UNK_00225888;
  uVar6 = _DAT_00225880;
  param_1[0xf] = _UNK_00225898;
  param_1[0xe] = uVar10;
  param_1[0x11] = uVar9;
  param_1[0x10] = uVar8;
  uVar5 = _UNK_00225838;
  uVar4 = _DAT_00225830;
  uVar3 = _UNK_00225828;
  uVar10 = _DAT_00225820;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[1] = uVar3;
  *param_1 = uVar10;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar4 = _UNK_00225858;
  uVar3 = _DAT_00225850;
  uVar10 = _DAT_00225840;
  param_1[5] = _UNK_00225848;
  param_1[4] = uVar10;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  FUN_0086e1ac(param_1);
  if ((*(byte *)(param_2 + 0x1980) & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x1090);
    if (*(long *)(param_2 + 0x1080) <= *(long *)(param_2 + 0x1090)) {
      lVar1 = *(long *)(param_2 + 0x1080);
    }
    if (lVar1 != *(long *)(param_2 + 0x1a10)) {
      uVar10 = *(undefined8 *)(param_2 + 0x1958);
      *(long *)(param_2 + 0x1a10) = lVar1;
      param_1[10] = param_3;
      param_1[0xb] = param_3;
      param_1[0xc] = 0x7fffffffffffffff;
      param_1[0xd] = uVar10;
      param_1[0x10] = lVar1;
      param_1[0x11] = 0;
      param_1[0xe] = 25000;
      param_1[0xf] = 0xaaaaaaaa00000000;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x12) = 1;
      }
    }
    FUN_009017e0(&local_58,param_2);
    bVar2 = *(byte *)(param_2 + 0x1980);
    param_1[3] = uStack_50;
    param_1[2] = local_58;
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    *(undefined1 *)(param_1 + 6) = local_38;
    if ((bVar2 & 1) != 0) {
      uVar10 = FUN_00904afc(param_2 + 0x850);
      if (*(char *)(param_1 + 1) == '\x01') {
        *param_1 = uVar10;
      }
      else {
        if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *param_1 = uVar10;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 00900de0  FUN_00900de0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900de0(undefined8 *param_1,long param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(byte *)(param_2 + 0x842) = param_4 & 1;
  if (((((*(byte *)(param_2 + 0x841) & 1) == 0) && ((param_4 & 1) != 0)) &&
      (*(char *)(param_2 + 0x19f8) == '\x01')) && (0 < *(long *)(param_2 + 0x19f0))) {
    *(undefined1 *)(param_2 + 0x841) = 1;
    uVar8 = _UNK_002258a8;
    uVar7 = _DAT_002258a0;
    uVar4 = _UNK_00225878;
    uVar3 = _DAT_00225870;
    uVar2 = _UNK_00225868;
    uVar9 = _DAT_00225860;
    param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[9] = uVar2;
    param_1[8] = uVar9;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    uVar9 = _DAT_00225890;
    uVar6 = _UNK_00225888;
    uVar5 = _DAT_00225880;
    param_1[0xf] = _UNK_00225898;
    param_1[0xe] = uVar9;
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar7;
    uVar4 = _UNK_00225838;
    uVar3 = _DAT_00225830;
    uVar2 = _UNK_00225828;
    uVar9 = _DAT_00225820;
    param_1[0xd] = uVar6;
    param_1[0xc] = uVar5;
    param_1[1] = uVar2;
    *param_1 = uVar9;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar3 = _UNK_00225858;
    uVar2 = _DAT_00225850;
    uVar9 = _DAT_00225840;
    param_1[5] = _UNK_00225848;
    param_1[4] = uVar9;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    FUN_00900c88(param_1,param_2);
    uVar2 = _UNK_001f4808;
    uVar9 = _DAT_001f4800;
    if (*(char *)(param_2 + 0x840) == '\x01') {
      puVar1 = (undefined8 *)param_1[8];
      local_40 = 10000;
      uStack_48 = _UNK_001f4808;
      uStack_50 = _DAT_001f4800;
      local_38 = DAT_001f5360;
      local_58 = param_3;
      if (puVar1 < (undefined8 *)param_1[9]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar1[4] = DAT_001f5360;
        puVar1[1] = uVar9;
        *puVar1 = param_3;
        puVar1[3] = 10000;
        puVar1[2] = uVar2;
        param_1[8] = puVar1 + 5;
      }
      else {
        uVar9 = FUN_008f5bf4(param_1 + 7,&local_58);
        param_1[8] = uVar9;
      }
    }
    return;
  }
  FUN_0086e1ac(param_1);
  return;
}


// ===== 00900f38  FUN_00900f38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900f38(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar9 = FUN_00417e08();
  if ((uVar9 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,
                 "../../modules/congestion_controller/scream/scream_network_controller.cc",0x301,
                 " OnNetworkRouteChange, resetting ScreamV2.");
  }
  puVar1 = param_3 + 2;
  if (*(char *)(param_3 + 3) == '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x1988);
  }
  *(undefined8 *)(param_2 + 0x1988) = *puVar1;
  puVar1 = param_3 + 4;
  if (*(char *)(param_3 + 5) == '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x1990);
  }
  *(undefined8 *)(param_2 + 0x1990) = *puVar1;
  puVar1 = param_3 + 6;
  if (*(char *)(param_3 + 7) == '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x1998);
  }
  *(undefined8 *)(param_2 + 0x1998) = *puVar1;
  FUN_00901178(param_2 + 0x850,param_2 + 8);
  *(undefined1 *)(param_2 + 0x841) = 0;
  if ((*(byte *)(param_2 + 0x1980) & 1) != 0) {
    if (*(char *)(param_2 + 0x19a8) == '\x01') {
      lVar11 = *(long *)(param_2 + 0x19a0);
    }
    else {
      lVar11 = 0x7fffffffffffffff;
    }
    if (*(long *)(param_2 + 0x1990) <= lVar11) {
      lVar11 = *(long *)(param_2 + 0x1990);
    }
    FUN_00903110(param_2 + 0x850,*(undefined8 *)(param_2 + 0x1988),lVar11,
                 *(undefined8 *)(param_2 + 0x1998));
    if (((*(char *)(param_2 + 0x842) == '\x01') && (*(char *)(param_2 + 0x19f8) == '\x01')) &&
       (0 < *(long *)(param_2 + 0x19f0))) {
      uVar12 = *param_3;
      *(undefined1 *)(param_2 + 0x841) = 1;
      uVar8 = _UNK_002258a8;
      uVar7 = _DAT_002258a0;
      uVar4 = _UNK_00225878;
      uVar3 = _DAT_00225870;
      uVar2 = _UNK_00225868;
      uVar10 = _DAT_00225860;
      param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
      param_1[9] = uVar2;
      param_1[8] = uVar10;
      param_1[0xb] = uVar4;
      param_1[10] = uVar3;
      uVar10 = _DAT_00225890;
      uVar6 = _UNK_00225888;
      uVar5 = _DAT_00225880;
      param_1[0xf] = _UNK_00225898;
      param_1[0xe] = uVar10;
      param_1[0x11] = uVar8;
      param_1[0x10] = uVar7;
      uVar4 = _UNK_00225838;
      uVar3 = _DAT_00225830;
      uVar2 = _UNK_00225828;
      uVar10 = _DAT_00225820;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar5;
      param_1[1] = uVar2;
      *param_1 = uVar10;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      uVar3 = _UNK_00225858;
      uVar2 = _DAT_00225850;
      uVar10 = _DAT_00225840;
      param_1[5] = _UNK_00225848;
      param_1[4] = uVar10;
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      FUN_00900c88(param_1,param_2,uVar12);
      uVar2 = _UNK_001f4808;
      uVar10 = _DAT_001f4800;
      if (*(char *)(param_2 + 0x840) == '\x01') {
        puVar1 = (undefined8 *)param_1[8];
        local_40 = 10000;
        uStack_48 = _UNK_001f4808;
        uStack_50 = _DAT_001f4800;
        local_38 = DAT_001f5360;
        local_58 = uVar12;
        if (puVar1 < (undefined8 *)param_1[9]) {
          if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar1[4] = DAT_001f5360;
          puVar1[1] = uVar10;
          *puVar1 = uVar12;
          puVar1[3] = 10000;
          puVar1[2] = uVar2;
          param_1[8] = puVar1 + 5;
        }
        else {
          uVar10 = FUN_008f5bf4(param_1 + 7,&local_58);
          param_1[8] = uVar10;
        }
      }
      return;
    }
    FUN_0086e1ac(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 00901178  FUN_00901178 =====

undefined8 * FUN_00901178(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x226) == '\x01') {
    FUN_00901d48(param_1 + 0x21a);
    FUN_00901c40(param_1 + 0x115);
    FUN_00901c40(param_1 + 5);
    plVar2 = (long *)*param_1;
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    *(undefined1 *)(param_1 + 0x226) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_00901ef8(param_1,param_2);
    *(undefined1 *)(param_1 + 0x226) = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00901234  FUN_00901234 =====

void FUN_00901234(undefined8 param_1)

{
  FUN_0086e1ac(param_1);
  return;
}


// ===== 00901240  FUN_00901240 =====

void FUN_00901240(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(param_2 + 0x19a0);
  if (*(char *)(param_2 + 0x19a8) == '\x01') {
    *plVar1 = param_4;
  }
  else {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *plVar1 = param_4;
    *(undefined1 *)(param_2 + 0x19a8) = 1;
  }
  if ((*(byte *)(param_2 + 0x1980) & 1) != 0) {
    if (*(long *)(param_2 + 0x1990) <= param_4) {
      param_4 = *(long *)(param_2 + 0x1990);
    }
    FUN_00903110(param_2 + 0x850,*(undefined8 *)(param_2 + 0x1988),param_4,
                 *(undefined8 *)(param_2 + 0x1998));
    FUN_00900c88(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 009012fc  FUN_009012fc =====

void FUN_009012fc(undefined8 param_1)

{
  FUN_0086e1ac(param_1);
  return;
}


// ===== 00901308  FUN_00901308 =====

void FUN_00901308(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  if ((*(byte *)(param_2 + 0x1980) & 1) != 0) {
    FUN_00903370(param_2 + 0x850,param_3[8]);
    if ((*(byte *)(param_2 + 0x1980) & 1) != 0) {
      lVar1 = FUN_00904afc(param_2 + 0x850);
      if ((long)param_3[8] <= lVar1) {
        if ((*(byte *)(param_2 + 0x1980) & 1) == 0) goto LAB_009013c0;
        if ((0xfffffffffffffffd < *(long *)(param_2 + 0x1968) + 0x7fffffffffffffffU) ||
           (*(long *)(param_2 + 0x1968) <= *(long *)(param_2 + 0x16c0) / 2)) {
          FUN_0086e1ac(param_1);
          return;
        }
      }
      FUN_00900c88(param_1,param_2,*param_3);
      return;
    }
  }
LAB_009013c0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 009013d4  FUN_009013d4 =====

void FUN_009013d4(undefined8 param_1)

{
  FUN_0086e1ac(param_1);
  return;
}


// ===== 009013e0  FUN_009013e0 =====

/* WARNING: Removing unreachable block (ram,0x009014c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009013e0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  char *local_88;
  undefined1 *puStack_80;
  void *local_78;
  undefined8 uStack_70;
  char cStack_61;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char **local_48;
  undefined8 local_40;
  undefined1 uStack_11;
  
  uVar4 = FUN_0044075c();
  if (((uVar4 & 1) == 0) && (*(char *)(param_3 + 9) == '\x01')) {
    local_a0 = "../../modules/congestion_controller/scream/scream_network_controller.cc";
    local_98 = 0x490;
    local_90 = &uStack_11;
    local_88 = "OnStreamsConfig: max_total_allocated_bitrate=";
    puStack_80 = (undefined1 *)&local_a0;
    FUN_008ee354(&local_78,param_3 + 8);
    if (cStack_61 < '\0') {
      FUN_005478d8(&local_60,local_78,uStack_70);
      local_48 = &local_88;
      if (cStack_61 < '\0') {
        operator_delete(local_78);
      }
    }
    else {
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_48 = &local_88;
    }
    FUN_00623bb0(&DAT_001f6510,*(undefined8 *)local_48[1],*(undefined4 *)(local_48[1] + 8),*local_48
                 ,&local_60);
  }
  uVar5 = param_3[8];
  *(undefined8 *)(param_2 + 0x19f8) = param_3[9];
  *(undefined8 *)(param_2 + 0x19f0) = uVar5;
  uVar9 = param_3[5];
  uVar8 = param_3[4];
  uVar5 = param_3[6];
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(param_2 + 0x19e8) = param_3[7];
  *(undefined8 *)(param_2 + 0x19e0) = uVar5;
  *(undefined8 *)(param_2 + 0x19d8) = uVar9;
  *(undefined8 *)(param_2 + 0x19d0) = uVar8;
  *(undefined8 *)(param_2 + 0x19c8) = uVar13;
  *(undefined8 *)(param_2 + 0x19c0) = uVar12;
  *(undefined8 *)(param_2 + 0x19b8) = uVar11;
  *(undefined8 *)(param_2 + 0x19b0) = uVar10;
  if (*(char *)(param_2 + 0x19f8) == '\x01') {
    lVar6 = *(long *)(param_2 + 0x19f0);
  }
  else {
    lVar6 = 0;
  }
  lVar1 = *(long *)(param_2 + 0x1a00);
  if (*(long *)(param_2 + 0x1a00) <= lVar6) {
    lVar1 = lVar6;
  }
  *(long *)(param_2 + 0x1a00) = lVar1;
  if (((((*(byte *)(param_2 + 0x841) & 1) == 0) && (*(char *)(param_2 + 0x842) == '\x01')) &&
      (*(char *)(param_2 + 0x19f8) != '\0')) && (0 < *(long *)(param_2 + 0x19f0))) {
    pvVar7 = (void *)*param_3;
    *(undefined1 *)(param_2 + 0x841) = 1;
    uVar3 = _UNK_002258a8;
    uVar13 = _DAT_002258a0;
    uVar10 = _UNK_00225878;
    uVar9 = _DAT_00225870;
    uVar8 = _UNK_00225868;
    uVar5 = _DAT_00225860;
    param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[9] = uVar8;
    param_1[8] = uVar5;
    param_1[0xb] = uVar10;
    param_1[10] = uVar9;
    uVar5 = _DAT_00225890;
    uVar12 = _UNK_00225888;
    uVar11 = _DAT_00225880;
    param_1[0xf] = _UNK_00225898;
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar3;
    param_1[0x10] = uVar13;
    uVar10 = _UNK_00225838;
    uVar9 = _DAT_00225830;
    uVar8 = _UNK_00225828;
    uVar5 = _DAT_00225820;
    param_1[0xd] = uVar12;
    param_1[0xc] = uVar11;
    param_1[1] = uVar8;
    *param_1 = uVar5;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    uVar9 = _UNK_00225858;
    uVar8 = _DAT_00225850;
    uVar5 = _DAT_00225840;
    param_1[5] = _UNK_00225848;
    param_1[4] = uVar5;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    FUN_00900c88(param_1,param_2,pvVar7);
    uVar8 = _UNK_001f4808;
    uVar5 = _DAT_001f4800;
    if (*(char *)(param_2 + 0x840) == '\x01') {
      puVar2 = (undefined8 *)param_1[8];
      local_48 = (char **)0x2710;
      local_50 = _UNK_001f4808;
      uStack_58 = _DAT_001f4800;
      local_40 = DAT_001f5360;
      local_60 = pvVar7;
      if (puVar2 < (undefined8 *)param_1[9]) {
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar2[4] = DAT_001f5360;
        puVar2[1] = uVar5;
        *puVar2 = pvVar7;
        puVar2[3] = 10000;
        puVar2[2] = uVar8;
        param_1[8] = puVar2 + 5;
      }
      else {
        uVar5 = FUN_008f5bf4(param_1 + 7,&local_60);
        param_1[8] = uVar5;
      }
    }
  }
  else {
    FUN_0086e1ac(param_1);
  }
  return;
}


// ===== 00901638  FUN_00901638 =====

void FUN_00901638(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)(param_3 + 8);
  if (*(char *)(param_3 + 0x10) == '\0') {
    puVar2 = (undefined8 *)(param_2 + 0x1988);
  }
  uVar3 = *puVar2;
  *(undefined8 *)(param_2 + 0x1988) = uVar3;
  plVar1 = (long *)(param_3 + 0x18);
  if (*(char *)(param_3 + 0x20) == '\0') {
    plVar1 = (long *)(param_2 + 0x1990);
  }
  lVar4 = *plVar1;
  *(long *)(param_2 + 0x1990) = lVar4;
  puVar2 = (undefined8 *)(param_3 + 0x28);
  if (*(char *)(param_3 + 0x30) == '\0') {
    puVar2 = (undefined8 *)(param_2 + 0x1998);
  }
  *(undefined8 *)(param_2 + 0x1998) = *puVar2;
  if ((*(byte *)(param_2 + 0x1980) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  lVar5 = lVar4;
  if ((*(char *)(param_2 + 0x19a8) == '\x01') &&
     (lVar5 = *(long *)(param_2 + 0x19a0), lVar4 <= *(long *)(param_2 + 0x19a0))) {
    lVar5 = lVar4;
  }
  FUN_00903110(param_2 + 0x850,uVar3,lVar5);
  FUN_0086e1ac(param_1);
  return;
}


// ===== 00901704  FUN_00901704 =====

void FUN_00901704(undefined8 param_1)

{
  FUN_0086e1ac(param_1);
  return;
}


// ===== 00901710  FUN_00901710 =====

void FUN_00901710(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_2 + 0x28);
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  *puVar1 = &PTR_FUN_00d3cd88;
  puVar1[1] = 0;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  (**(code **)(*plVar2 + 0x28))(plVar2,puVar1);
  FUN_0086e1ac(param_1);
  return;
}


// ===== 00901778  FUN_00901778 =====

void FUN_00901778(undefined8 param_1,long param_2,undefined8 *param_3)

{
  if ((*(byte *)(param_2 + 0x1980) & 1) != 0) {
    FUN_00903388(param_2 + 0x850);
    FUN_00900c88(param_1,param_2,*param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 009017e0  FUN_009017e0 =====

/* WARNING: Removing unreachable block (ram,0x00901a58) */
/* WARNING: Removing unreachable block (ram,0x00901a74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009017e0(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 uStack_a9;
  char *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  char **local_68;
  long local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined7 local_48;
  undefined1 uStack_41;
  
  if ((*(byte *)(param_2 + 0x1980) & 1) == 0) {
LAB_00901b18:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if (((*(long *)(param_2 + 0x1968) + 0x7fffffffffffffffU < 0xfffffffffffffffe) &&
      (*(long *)(param_2 + 0x16c0) / 2 < *(long *)(param_2 + 0x1968))) ||
     (dVar9 = *(double *)(param_2 + 0x10b0),
     dVar9 != DAT_001f5860 && dVar9 < DAT_001f5860 == (NAN(dVar9) || NAN(DAT_001f5860)))) {
    lVar7 = 10000;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x838);
  }
  lVar8 = *(long *)(param_2 + 0x1090);
  if (*(long *)(param_2 + 0x1080) <= *(long *)(param_2 + 0x1090)) {
    lVar8 = *(long *)(param_2 + 0x1080);
  }
  local_60 = lVar7;
  lVar2 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
  if (*(char *)(param_2 + 0x19f8) == '\x01') {
    lVar5 = *(long *)(param_2 + 0x19f0) << 1;
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(param_2 + 0x19a8) == '\x01') {
    lVar6 = *(long *)(param_2 + 0x19a0);
  }
  else {
    lVar6 = 0x7fffffffffffffff;
  }
  lVar1 = *(long *)(param_2 + 0x1a00);
  if (*(long *)(param_2 + 0x1990) <= *(long *)(param_2 + 0x1a00)) {
    lVar1 = *(long *)(param_2 + 0x1990);
  }
  if (lVar1 <= lVar5) {
    lVar5 = lVar1;
  }
  if (lVar5 <= lVar6) {
    lVar6 = lVar5;
  }
  if (lVar8 < lVar6) {
    if ((*(byte *)(param_2 + 0x1980) & 1) == 0) goto LAB_00901b18;
    lVar5 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) &&
       (lVar6 = *(long *)(param_2 + 0x10e8), lVar6 != -0x8000000000000000)) {
      lVar5 = -0x8000000000000000;
      if (lVar6 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
        lVar5 = lVar2 - lVar6;
      }
    }
    if (*(long *)(param_2 + 0x7a0) < lVar5) {
      lVar5 = *(long *)(param_2 + 0x1a08);
      if ((*(long *)(param_2 + 0x710) + 0x7fffffffffffffffU < 0xfffffffffffffffe) &&
         (lVar2 != 0x7fffffffffffffff)) {
        lVar6 = 0x7fffffffffffffff;
        if (lVar5 != -0x8000000000000000) {
          lVar6 = -0x8000000000000000;
          if (lVar5 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
            lVar6 = lVar2 - lVar5;
          }
        }
        if (*(long *)(param_2 + 0x710) < lVar6) {
          *(long *)(param_2 + 0x1a08) = lVar2;
          lVar5 = lVar2;
        }
      }
      lVar6 = 0;
      if ((lVar2 != 0x7fffffffffffffff) && (lVar5 != -0x8000000000000000)) {
        lVar1 = -0x8000000000000000;
        if (lVar5 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
          lVar1 = lVar2 - lVar5;
        }
        lVar6 = lVar8;
        if (*(long *)(param_2 + 0x758) <= lVar1) {
          lVar6 = 0;
        }
      }
      goto LAB_009019ac;
    }
  }
  else if ((*(byte *)(param_2 + 0x1980) & 1) == 0) goto LAB_00901b18;
  lVar6 = 0;
LAB_009019ac:
  lVar8 = (long)(*(double *)(param_2 + 0x1030) * (double)*(long *)(param_2 + 0x1090));
  if (((lVar6 == *(long *)(param_2 + 0x1a18)) && (lVar8 == *(long *)(param_2 + 0x1a20))) &&
     (*(long *)(param_2 + 0x848) == lVar7)) {
    uVar4 = 0;
    *param_1 = 0;
  }
  else {
    uVar3 = FUN_0044075c();
    if (((uVar3 & 1) == 0) && (*(long *)(param_2 + 0x848) != lVar7)) {
      local_a8 = "../../modules/congestion_controller/scream/scream_network_controller.cc";
      local_a0 = 0x7b0;
      local_98 = &uStack_a9;
      ppcStack_88 = &local_a8;
      local_90 = "Pacing window changed: ";
      FUN_005f3380(&local_58,&local_60);
      local_70 = CONCAT17(uStack_41,local_48);
      local_68 = &local_90;
      uStack_78 = uStack_50;
      local_80 = local_58;
      FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80);
      lVar7 = local_60;
      if (local_70 < 0) {
        operator_delete(local_80);
        lVar7 = local_60;
      }
    }
    *(long *)(param_2 + 0x1a18) = lVar6;
    *(long *)(param_2 + 0x1a20) = lVar8;
    *(long *)(param_2 + 0x848) = lVar7;
    FUN_0086e368(param_1,lVar2,lVar8,lVar6,lVar7);
    uVar4 = 1;
  }
  param_1[0x20] = uVar4;
  return;
}


// ===== 00901b2c  FUN_00901b2c =====

void FUN_00901b2c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d3d2d0;
  FUN_0086db20(param_1 + 0x336);
  if (*(char *)(param_1 + 0x330) == '\x01') {
    FUN_00901d48(param_1 + 0x324);
    FUN_00901c40(param_1 + 0x21f);
    FUN_00901c40(param_1 + 0x10f);
    plVar2 = (long *)param_1[0x10a];
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  FUN_00901c40(param_1 + 6);
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00901bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00901c04  FUN_00901c04 =====

void FUN_00901c04(void *param_1)

{
  FUN_00901b2c();
  operator_delete(param_1);
  return;
}


// ===== 00901c34  FUN_00901c34 =====

undefined8 FUN_00901c34(void)

{
  return 1;
}


// ===== 00901c40  FUN_00901c40 =====

void FUN_00901c40(long param_1)

{
  FUN_006634ac(param_1 + 0x7c0);
  FUN_006634ac(param_1 + 0x778);
  FUN_006634ac(param_1 + 0x730);
  FUN_006634ac(param_1 + 0x6e8);
  FUN_006634ac(param_1 + 0x6a0);
  FUN_006634ac(param_1 + 0x660);
  FUN_006634ac(param_1 + 0x618);
  FUN_006634ac(param_1 + 0x5d0);
  FUN_006634ac(param_1 + 0x588);
  FUN_006634ac(param_1 + 0x540);
  FUN_006634ac(param_1 + 0x500);
  FUN_006634ac(param_1 + 0x4b8);
  FUN_006634ac(param_1 + 0x470);
  FUN_006634ac(param_1 + 0x428);
  FUN_006634ac(param_1 + 0x3e0);
  FUN_006634ac(param_1 + 0x398);
  FUN_006634ac(param_1 + 0x358);
  FUN_006634ac(param_1 + 0x310);
  FUN_006634ac(param_1 + 0x2c8);
  FUN_006634ac(param_1 + 0x280);
  FUN_006634ac(param_1 + 0x240);
  FUN_006634ac(param_1 + 0x1f8);
  FUN_006634ac(param_1 + 0x1b0);
  FUN_006634ac(param_1 + 0x168);
  FUN_006634ac(param_1 + 0x120);
  FUN_006634ac(param_1 + 0xd8);
  FUN_006634ac(param_1 + 0x90);
  FUN_006634ac(param_1 + 0x48);
  FUN_006634ac(param_1);
  return;
}


// ===== 00901d48  FUN_00901d48 =====

void FUN_00901d48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar7 = param_1[4];
    plVar3 = puVar9 + (uVar7 >> 8);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0xff) * 0x10;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 8] + (param_1[5] + uVar7 & 0xff) * 0x10) {
      if (lVar4 == 0) goto LAB_00901ea8;
      lVar4 = lVar4 + 0x10;
      if (lVar4 - lVar5 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar4 = lVar5;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar1 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_00901e20;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_00901e20:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar6 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if ((1 < uVar7) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_00901ea8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00901ef8  FUN_00901ef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901ef8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_838 [2056];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar1 = param_2[1];
  lVar3 = param_2[4];
  lVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[1] = lVar1;
  param_1[4] = lVar3;
  param_1[3] = lVar2;
  FUN_009063a8(param_1 + 5,param_1[1]);
  param_1[0x10a] = 1;
  *(undefined1 *)(param_1 + 0x10b) = 1;
  lVar2 = _UNK_001f3868;
  lVar1 = _DAT_001f3860;
  param_1[0x106] = 0x7fffffffffffffff;
  param_1[0x10c] = 0;
  param_1[0x10f] = lVar2;
  param_1[0x10e] = lVar1;
  param_1[0x109] = param_1[0xd];
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x10d] = -0x8000000000000000;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x113] = -0x8000000000000000;
  param_1[0x112] = -0x8000000000000000;
  param_1[0x114] = -0x8000000000000000;
  FUN_00901fdc(auStack_838,param_1 + 5);
  FUN_00904bd8(param_1 + 0x115,auStack_838);
  FUN_00901c40(auStack_838);
  *(undefined1 *)(param_1 + 0x225) = 0;
  return;
}


// ===== 00901fdc  FUN_00901fdc =====

void FUN_00901fdc(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_00d51fe0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0;
  pvVar9 = *(void **)(param_2 + 8);
  uVar3 = *(long *)(param_2 + 0x10) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[1] = (long)pvVar7;
    param_1[2] = (long)pvVar7;
    param_1[3] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[2] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x37) < '\0') {
    FUN_005478d8(param_1 + 4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x28);
    lVar8 = *(long *)(param_2 + 0x20);
    param_1[6] = *(long *)(param_2 + 0x30);
    param_1[5] = lVar10;
    param_1[4] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x38);
  *param_1 = (long)&PTR_FUN_00d280c0;
  *(undefined1 *)(param_1 + 7) = uVar2;
  lVar8 = *(long *)(param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[8] = lVar8;
  param_1[9] = (long)(puVar4 + 0x10);
  pvVar9 = *(void **)(param_2 + 0x50);
  uVar3 = *(long *)(param_2 + 0x58) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[10] = (long)pvVar7;
    param_1[0xb] = (long)pvVar7;
    param_1[0xc] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xb] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x7f) < '\0') {
    FUN_005478d8(param_1 + 0xd,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x70);
    lVar8 = *(long *)(param_2 + 0x68);
    param_1[0xf] = *(long *)(param_2 + 0x78);
    param_1[0xe] = lVar10;
    param_1[0xd] = lVar8;
  }
  puVar5 = PTR_DAT_00d52020;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  param_1[9] = (long)(puVar5 + 0x10);
  lVar8 = *(long *)(param_2 + 0x88);
  param_1[0x12] = (long)(puVar4 + 0x10);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = lVar8;
  pvVar9 = *(void **)(param_2 + 0x98);
  uVar3 = *(long *)(param_2 + 0xa0) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x13] = (long)pvVar7;
    param_1[0x14] = (long)pvVar7;
    param_1[0x15] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x14] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 199) < '\0') {
    FUN_005478d8(param_1 + 0x16,*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xb8));
  }
  else {
    lVar10 = *(long *)(param_2 + 0xb8);
    lVar8 = *(long *)(param_2 + 0xb0);
    param_1[0x18] = *(long *)(param_2 + 0xc0);
    param_1[0x17] = lVar10;
    param_1[0x16] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 200);
  param_1[0x12] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x19) = uVar2;
  lVar8 = *(long *)(param_2 + 0xd0);
  param_1[0x1b] = (long)(puVar4 + 0x10);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = lVar8;
  pvVar9 = *(void **)(param_2 + 0xe0);
  uVar3 = *(long *)(param_2 + 0xe8) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x1c] = (long)pvVar7;
    param_1[0x1d] = (long)pvVar7;
    param_1[0x1e] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x1d] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x10f) < '\0') {
    FUN_005478d8(param_1 + 0x1f,*(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(param_2 + 0x100));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x100);
    lVar8 = *(long *)(param_2 + 0xf8);
    param_1[0x21] = *(long *)(param_2 + 0x108);
    param_1[0x20] = lVar10;
    param_1[0x1f] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x110);
  param_1[0x1b] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x22) = uVar2;
  lVar8 = *(long *)(param_2 + 0x118);
  param_1[0x24] = (long)(puVar4 + 0x10);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x23] = lVar8;
  pvVar9 = *(void **)(param_2 + 0x128);
  uVar3 = *(long *)(param_2 + 0x130) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x25] = (long)pvVar7;
    param_1[0x26] = (long)pvVar7;
    param_1[0x27] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x26] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x157) < '\0') {
    FUN_005478d8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x140),*(undefined8 *)(param_2 + 0x148));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x148);
    lVar8 = *(long *)(param_2 + 0x140);
    param_1[0x2a] = *(long *)(param_2 + 0x150);
    param_1[0x29] = lVar10;
    param_1[0x28] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x158);
  param_1[0x24] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x2b) = uVar2;
  lVar8 = *(long *)(param_2 + 0x160);
  param_1[0x2d] = (long)(puVar4 + 0x10);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2c] = lVar8;
  pvVar9 = *(void **)(param_2 + 0x170);
  uVar3 = *(long *)(param_2 + 0x178) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x2e] = (long)pvVar7;
    param_1[0x2f] = (long)pvVar7;
    param_1[0x30] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x2f] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x19f) < '\0') {
    FUN_005478d8(param_1 + 0x31,*(undefined8 *)(param_2 + 0x188),*(undefined8 *)(param_2 + 400));
  }
  else {
    lVar10 = *(long *)(param_2 + 400);
    lVar8 = *(long *)(param_2 + 0x188);
    param_1[0x33] = *(long *)(param_2 + 0x198);
    param_1[0x32] = lVar10;
    param_1[0x31] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x1a0);
  param_1[0x2d] = (long)&PTR_FUN_00d280c0;
  *(undefined1 *)(param_1 + 0x34) = uVar2;
  lVar8 = *(long *)(param_2 + 0x1a8);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = lVar8;
  param_1[0x36] = (long)(puVar4 + 0x10);
  pvVar9 = *(void **)(param_2 + 0x1b8);
  uVar3 = *(long *)(param_2 + 0x1c0) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x37] = (long)pvVar7;
    param_1[0x38] = (long)pvVar7;
    param_1[0x39] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x38] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x1e7) < '\0') {
    FUN_005478d8(param_1 + 0x3a,*(undefined8 *)(param_2 + 0x1d0),*(undefined8 *)(param_2 + 0x1d8));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x1d8);
    lVar8 = *(long *)(param_2 + 0x1d0);
    param_1[0x3c] = *(long *)(param_2 + 0x1e0);
    param_1[0x3b] = lVar10;
    param_1[0x3a] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x1e8);
  param_1[0x36] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x3d) = uVar2;
  lVar8 = *(long *)(param_2 + 0x1f0);
  param_1[0x3f] = (long)(puVar4 + 0x10);
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x3e] = lVar8;
  param_1[0x41] = 0;
  pvVar9 = *(void **)(param_2 + 0x200);
  uVar3 = *(long *)(param_2 + 0x208) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x40] = (long)pvVar7;
    param_1[0x41] = (long)pvVar7;
    param_1[0x42] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x41] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x22f) < '\0') {
    FUN_005478d8(param_1 + 0x43,*(undefined8 *)(param_2 + 0x218),*(undefined8 *)(param_2 + 0x220));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x220);
    lVar8 = *(long *)(param_2 + 0x218);
    param_1[0x45] = *(long *)(param_2 + 0x228);
    param_1[0x44] = lVar10;
    param_1[0x43] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x230);
  param_1[0x3f] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x46) = uVar2;
  lVar8 = *(long *)(param_2 + 0x238);
  param_1[0x48] = (long)(puVar4 + 0x10);
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x47] = lVar8;
  param_1[0x4a] = 0;
  pvVar9 = *(void **)(param_2 + 0x248);
  uVar3 = *(long *)(param_2 + 0x250) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x49] = (long)pvVar7;
    param_1[0x4a] = (long)pvVar7;
    param_1[0x4b] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x4a] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x277) < '\0') {
    FUN_005478d8(param_1 + 0x4c,*(undefined8 *)(param_2 + 0x260),*(undefined8 *)(param_2 + 0x268));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x268);
    lVar8 = *(long *)(param_2 + 0x260);
    param_1[0x4e] = *(long *)(param_2 + 0x270);
    param_1[0x4d] = lVar10;
    param_1[0x4c] = lVar8;
  }
  puVar6 = PTR_DAT_00d52028;
  *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x278);
  param_1[0x48] = (long)(puVar6 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x27c);
  param_1[0x50] = (long)(puVar4 + 0x10);
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)((long)param_1 + 0x27c) = uVar1;
  param_1[0x52] = 0;
  pvVar9 = *(void **)(param_2 + 0x288);
  uVar3 = *(long *)(param_2 + 0x290) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x51] = (long)pvVar7;
    param_1[0x52] = (long)pvVar7;
    param_1[0x53] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x52] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x2b7) < '\0') {
    FUN_005478d8(param_1 + 0x54,*(undefined8 *)(param_2 + 0x2a0),*(undefined8 *)(param_2 + 0x2a8));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x2a8);
    lVar8 = *(long *)(param_2 + 0x2a0);
    param_1[0x56] = *(long *)(param_2 + 0x2b0);
    param_1[0x55] = lVar10;
    param_1[0x54] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x2b8);
  param_1[0x50] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x57) = uVar2;
  lVar8 = *(long *)(param_2 + 0x2c0);
  param_1[0x59] = (long)(puVar4 + 0x10);
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x58] = lVar8;
  param_1[0x5b] = 0;
  pvVar9 = *(void **)(param_2 + 0x2d0);
  uVar3 = *(long *)(param_2 + 0x2d8) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x5a] = (long)pvVar7;
    param_1[0x5b] = (long)pvVar7;
    param_1[0x5c] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x5b] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x2ff) < '\0') {
    FUN_005478d8(param_1 + 0x5d,*(undefined8 *)(param_2 + 0x2e8),*(undefined8 *)(param_2 + 0x2f0));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x2f0);
    lVar8 = *(long *)(param_2 + 0x2e8);
    param_1[0x5f] = *(long *)(param_2 + 0x2f8);
    param_1[0x5e] = lVar10;
    param_1[0x5d] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x300);
  param_1[0x59] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0x60) = uVar2;
  lVar8 = *(long *)(param_2 + 0x308);
  param_1[0x62] = (long)(puVar4 + 0x10);
  param_1[99] = 0;
  param_1[0x65] = 0;
  param_1[0x61] = lVar8;
  param_1[100] = 0;
  pvVar9 = *(void **)(param_2 + 0x318);
  uVar3 = *(long *)(param_2 + 800) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[99] = (long)pvVar7;
    param_1[100] = (long)pvVar7;
    param_1[0x65] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[100] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x347) < '\0') {
    FUN_005478d8(param_1 + 0x66,*(undefined8 *)(param_2 + 0x330),*(undefined8 *)(param_2 + 0x338));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x338);
    lVar8 = *(long *)(param_2 + 0x330);
    param_1[0x68] = *(long *)(param_2 + 0x340);
    param_1[0x67] = lVar10;
    param_1[0x66] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x348);
  param_1[0x62] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x69) = uVar2;
  lVar8 = *(long *)(param_2 + 0x350);
  param_1[0x6b] = (long)(puVar4 + 0x10);
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6a] = lVar8;
  param_1[0x6d] = 0;
  pvVar9 = *(void **)(param_2 + 0x360);
  uVar3 = *(long *)(param_2 + 0x368) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x6c] = (long)pvVar7;
    param_1[0x6d] = (long)pvVar7;
    param_1[0x6e] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x6d] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x38f) < '\0') {
    FUN_005478d8(param_1 + 0x6f,*(undefined8 *)(param_2 + 0x378),*(undefined8 *)(param_2 + 0x380));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x380);
    lVar8 = *(long *)(param_2 + 0x378);
    param_1[0x71] = *(long *)(param_2 + 0x388);
    param_1[0x70] = lVar10;
    param_1[0x6f] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x390);
  param_1[0x6b] = (long)(puVar6 + 0x10);
  *(undefined1 *)(param_1 + 0x72) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x394);
  param_1[0x73] = (long)(puVar4 + 0x10);
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)((long)param_1 + 0x394) = uVar1;
  param_1[0x75] = 0;
  pvVar9 = *(void **)(param_2 + 0x3a0);
  uVar3 = *(long *)(param_2 + 0x3a8) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x74] = (long)pvVar7;
    param_1[0x75] = (long)pvVar7;
    param_1[0x76] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x75] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x3cf) < '\0') {
    FUN_005478d8(param_1 + 0x77,*(undefined8 *)(param_2 + 0x3b8),*(undefined8 *)(param_2 + 0x3c0));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x3c0);
    lVar8 = *(long *)(param_2 + 0x3b8);
    param_1[0x79] = *(long *)(param_2 + 0x3c8);
    param_1[0x78] = lVar10;
    param_1[0x77] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x3d0);
  param_1[0x73] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x7a) = uVar2;
  lVar8 = *(long *)(param_2 + 0x3d8);
  param_1[0x7c] = (long)(puVar4 + 0x10);
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x7b] = lVar8;
  param_1[0x7e] = 0;
  pvVar9 = *(void **)(param_2 + 1000);
  uVar3 = *(long *)(param_2 + 0x3f0) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x7d] = (long)pvVar7;
    param_1[0x7e] = (long)pvVar7;
    param_1[0x7f] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x7e] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x417) < '\0') {
    FUN_005478d8(param_1 + 0x80,*(undefined8 *)(param_2 + 0x400),*(undefined8 *)(param_2 + 0x408));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x408);
    lVar8 = *(long *)(param_2 + 0x400);
    param_1[0x82] = *(long *)(param_2 + 0x410);
    param_1[0x81] = lVar10;
    param_1[0x80] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x418);
  param_1[0x7c] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x83) = uVar2;
  lVar8 = *(long *)(param_2 + 0x420);
  param_1[0x85] = (long)(puVar4 + 0x10);
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x84] = lVar8;
  param_1[0x87] = 0;
  pvVar9 = *(void **)(param_2 + 0x430);
  uVar3 = *(long *)(param_2 + 0x438) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x86] = (long)pvVar7;
    param_1[0x87] = (long)pvVar7;
    param_1[0x88] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x87] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x45f) < '\0') {
    FUN_005478d8(param_1 + 0x89,*(undefined8 *)(param_2 + 0x448),*(undefined8 *)(param_2 + 0x450));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x450);
    lVar8 = *(long *)(param_2 + 0x448);
    param_1[0x8b] = *(long *)(param_2 + 0x458);
    param_1[0x8a] = lVar10;
    param_1[0x89] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x460);
  param_1[0x85] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x8c) = uVar2;
  lVar8 = *(long *)(param_2 + 0x468);
  param_1[0x8e] = (long)(puVar4 + 0x10);
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x8d] = lVar8;
  param_1[0x90] = 0;
  pvVar9 = *(void **)(param_2 + 0x478);
  uVar3 = *(long *)(param_2 + 0x480) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x8f] = (long)pvVar7;
    param_1[0x90] = (long)pvVar7;
    param_1[0x91] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x90] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x4a7) < '\0') {
    FUN_005478d8(param_1 + 0x92,*(undefined8 *)(param_2 + 0x490),*(undefined8 *)(param_2 + 0x498));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x498);
    lVar8 = *(long *)(param_2 + 0x490);
    param_1[0x94] = *(long *)(param_2 + 0x4a0);
    param_1[0x93] = lVar10;
    param_1[0x92] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x4a8);
  param_1[0x8e] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x95) = uVar2;
  lVar8 = *(long *)(param_2 + 0x4b0);
  param_1[0x97] = (long)(puVar4 + 0x10);
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x96] = lVar8;
  param_1[0x99] = 0;
  pvVar9 = *(void **)(param_2 + 0x4c0);
  uVar3 = *(long *)(param_2 + 0x4c8) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0x98] = (long)pvVar7;
    param_1[0x99] = (long)pvVar7;
    param_1[0x9a] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0x99] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x4ef) < '\0') {
    FUN_005478d8(param_1 + 0x9b,*(undefined8 *)(param_2 + 0x4d8),*(undefined8 *)(param_2 + 0x4e0));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x4e0);
    lVar8 = *(long *)(param_2 + 0x4d8);
    param_1[0x9d] = *(long *)(param_2 + 0x4e8);
    param_1[0x9c] = lVar10;
    param_1[0x9b] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x4f0);
  param_1[0x97] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0x9e) = uVar2;
  lVar8 = *(long *)(param_2 + 0x4f8);
  param_1[0xa0] = (long)(puVar4 + 0x10);
  param_1[0xa1] = 0;
  param_1[0xa3] = 0;
  param_1[0x9f] = lVar8;
  param_1[0xa2] = 0;
  pvVar9 = *(void **)(param_2 + 0x508);
  uVar3 = *(long *)(param_2 + 0x510) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xa1] = (long)pvVar7;
    param_1[0xa2] = (long)pvVar7;
    param_1[0xa3] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xa2] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x537) < '\0') {
    FUN_005478d8(param_1 + 0xa4,*(undefined8 *)(param_2 + 0x520),*(undefined8 *)(param_2 + 0x528));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x528);
    lVar8 = *(long *)(param_2 + 0x520);
    param_1[0xa6] = *(long *)(param_2 + 0x530);
    param_1[0xa5] = lVar10;
    param_1[0xa4] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x538);
  param_1[0xa0] = (long)(puVar6 + 0x10);
  *(undefined1 *)(param_1 + 0xa7) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x53c);
  param_1[0xa8] = (long)(puVar4 + 0x10);
  param_1[0xa9] = 0;
  param_1[0xab] = 0;
  *(undefined4 *)((long)param_1 + 0x53c) = uVar1;
  param_1[0xaa] = 0;
  pvVar9 = *(void **)(param_2 + 0x548);
  uVar3 = *(long *)(param_2 + 0x550) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xa9] = (long)pvVar7;
    param_1[0xaa] = (long)pvVar7;
    param_1[0xab] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xaa] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x577) < '\0') {
    FUN_005478d8(param_1 + 0xac,*(undefined8 *)(param_2 + 0x560),*(undefined8 *)(param_2 + 0x568));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x568);
    lVar8 = *(long *)(param_2 + 0x560);
    param_1[0xae] = *(long *)(param_2 + 0x570);
    param_1[0xad] = lVar10;
    param_1[0xac] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x578);
  param_1[0xa8] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0xaf) = uVar2;
  lVar8 = *(long *)(param_2 + 0x580);
  param_1[0xb1] = (long)(puVar4 + 0x10);
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb0] = lVar8;
  param_1[0xb3] = 0;
  pvVar9 = *(void **)(param_2 + 0x590);
  uVar3 = *(long *)(param_2 + 0x598) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xb2] = (long)pvVar7;
    param_1[0xb3] = (long)pvVar7;
    param_1[0xb4] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xb3] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x5bf) < '\0') {
    FUN_005478d8(param_1 + 0xb5,*(undefined8 *)(param_2 + 0x5a8),*(undefined8 *)(param_2 + 0x5b0));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x5b0);
    lVar8 = *(long *)(param_2 + 0x5a8);
    param_1[0xb7] = *(long *)(param_2 + 0x5b8);
    param_1[0xb6] = lVar10;
    param_1[0xb5] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x5c0);
  param_1[0xb1] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0xb8) = uVar2;
  lVar8 = *(long *)(param_2 + 0x5c8);
  param_1[0xba] = (long)(puVar4 + 0x10);
  param_1[0xbb] = 0;
  param_1[0xbd] = 0;
  param_1[0xb9] = lVar8;
  param_1[0xbc] = 0;
  pvVar9 = *(void **)(param_2 + 0x5d8);
  uVar3 = *(long *)(param_2 + 0x5e0) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xbb] = (long)pvVar7;
    param_1[0xbc] = (long)pvVar7;
    param_1[0xbd] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xbc] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x607) < '\0') {
    FUN_005478d8(param_1 + 0xbe,*(undefined8 *)(param_2 + 0x5f0),*(undefined8 *)(param_2 + 0x5f8));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x5f8);
    lVar8 = *(long *)(param_2 + 0x5f0);
    param_1[0xc0] = *(long *)(param_2 + 0x600);
    param_1[0xbf] = lVar10;
    param_1[0xbe] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x608);
  param_1[0xba] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0xc1) = uVar2;
  lVar8 = *(long *)(param_2 + 0x610);
  param_1[0xc3] = (long)(puVar4 + 0x10);
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[0xc2] = lVar8;
  param_1[0xc5] = 0;
  pvVar9 = *(void **)(param_2 + 0x620);
  uVar3 = *(long *)(param_2 + 0x628) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xc4] = (long)pvVar7;
    param_1[0xc5] = (long)pvVar7;
    param_1[0xc6] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xc5] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x64f) < '\0') {
    FUN_005478d8(param_1 + 199,*(undefined8 *)(param_2 + 0x638),*(undefined8 *)(param_2 + 0x640));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x640);
    lVar8 = *(long *)(param_2 + 0x638);
    param_1[0xc9] = *(long *)(param_2 + 0x648);
    param_1[200] = lVar10;
    param_1[199] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x650);
  param_1[0xc3] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0xca) = uVar2;
  lVar8 = *(long *)(param_2 + 0x658);
  param_1[0xcc] = (long)(puVar4 + 0x10);
  param_1[0xcd] = 0;
  param_1[0xcf] = 0;
  param_1[0xcb] = lVar8;
  param_1[0xce] = 0;
  pvVar9 = *(void **)(param_2 + 0x668);
  uVar3 = *(long *)(param_2 + 0x670) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xcd] = (long)pvVar7;
    param_1[0xce] = (long)pvVar7;
    param_1[0xcf] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xce] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x697) < '\0') {
    FUN_005478d8(param_1 + 0xd0,*(undefined8 *)(param_2 + 0x680),*(undefined8 *)(param_2 + 0x688));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x688);
    lVar8 = *(long *)(param_2 + 0x680);
    param_1[0xd2] = *(long *)(param_2 + 0x690);
    param_1[0xd1] = lVar10;
    param_1[0xd0] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x698);
  param_1[0xcc] = (long)(puVar6 + 0x10);
  *(undefined1 *)(param_1 + 0xd3) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x69c);
  param_1[0xd4] = (long)(puVar4 + 0x10);
  param_1[0xd5] = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)((long)param_1 + 0x69c) = uVar1;
  param_1[0xd6] = 0;
  pvVar9 = *(void **)(param_2 + 0x6a8);
  uVar3 = *(long *)(param_2 + 0x6b0) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xd5] = (long)pvVar7;
    param_1[0xd6] = (long)pvVar7;
    param_1[0xd7] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xd6] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x6d7) < '\0') {
    FUN_005478d8(param_1 + 0xd8,*(undefined8 *)(param_2 + 0x6c0),*(undefined8 *)(param_2 + 0x6c8));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x6c8);
    lVar8 = *(long *)(param_2 + 0x6c0);
    param_1[0xda] = *(long *)(param_2 + 0x6d0);
    param_1[0xd9] = lVar10;
    param_1[0xd8] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x6d8);
  param_1[0xd4] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0xdb) = uVar2;
  lVar8 = *(long *)(param_2 + 0x6e0);
  param_1[0xdd] = (long)(puVar4 + 0x10);
  param_1[0xde] = 0;
  param_1[0xe0] = 0;
  param_1[0xdc] = lVar8;
  param_1[0xdf] = 0;
  pvVar9 = *(void **)(param_2 + 0x6f0);
  uVar3 = *(long *)(param_2 + 0x6f8) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xde] = (long)pvVar7;
    param_1[0xdf] = (long)pvVar7;
    param_1[0xe0] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xdf] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x71f) < '\0') {
    FUN_005478d8(param_1 + 0xe1,*(undefined8 *)(param_2 + 0x708),*(undefined8 *)(param_2 + 0x710));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x710);
    lVar8 = *(long *)(param_2 + 0x708);
    param_1[0xe3] = *(long *)(param_2 + 0x718);
    param_1[0xe2] = lVar10;
    param_1[0xe1] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x720);
  param_1[0xdd] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0xe4) = uVar2;
  lVar8 = *(long *)(param_2 + 0x728);
  param_1[0xe6] = (long)(puVar4 + 0x10);
  param_1[0xe7] = 0;
  param_1[0xe9] = 0;
  param_1[0xe5] = lVar8;
  param_1[0xe8] = 0;
  pvVar9 = *(void **)(param_2 + 0x738);
  uVar3 = *(long *)(param_2 + 0x740) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xe7] = (long)pvVar7;
    param_1[0xe8] = (long)pvVar7;
    param_1[0xe9] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xe8] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x767) < '\0') {
    FUN_005478d8(param_1 + 0xea,*(undefined8 *)(param_2 + 0x750),*(undefined8 *)(param_2 + 0x758));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x758);
    lVar8 = *(long *)(param_2 + 0x750);
    param_1[0xec] = *(long *)(param_2 + 0x760);
    param_1[0xeb] = lVar10;
    param_1[0xea] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x768);
  param_1[0xe6] = (long)&PTR_FUN_00d267f8;
  *(undefined1 *)(param_1 + 0xed) = uVar2;
  lVar8 = *(long *)(param_2 + 0x770);
  param_1[0xef] = (long)(puVar4 + 0x10);
  param_1[0xf0] = 0;
  param_1[0xf2] = 0;
  param_1[0xee] = lVar8;
  param_1[0xf1] = 0;
  pvVar9 = *(void **)(param_2 + 0x780);
  uVar3 = *(long *)(param_2 + 0x788) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) goto LAB_0090310c;
    pvVar7 = operator_new(uVar3);
    param_1[0xf0] = (long)pvVar7;
    param_1[0xf1] = (long)pvVar7;
    param_1[0xf2] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xf1] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x7af) < '\0') {
    FUN_005478d8(param_1 + 0xf3,*(undefined8 *)(param_2 + 0x798),*(undefined8 *)(param_2 + 0x7a0));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x7a0);
    lVar8 = *(long *)(param_2 + 0x798);
    param_1[0xf5] = *(long *)(param_2 + 0x7a8);
    param_1[0xf4] = lVar10;
    param_1[0xf3] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x7b0);
  param_1[0xef] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0xf6) = uVar2;
  lVar8 = *(long *)(param_2 + 0x7b8);
  param_1[0xf8] = (long)(puVar4 + 0x10);
  param_1[0xf9] = 0;
  param_1[0xfb] = 0;
  param_1[0xf7] = lVar8;
  param_1[0xfa] = 0;
  pvVar9 = *(void **)(param_2 + 0x7c8);
  uVar3 = *(long *)(param_2 + 2000) - (long)pvVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
LAB_0090310c:
                    /* WARNING: Subroutine does not return */
      FUN_005edb98();
    }
    pvVar7 = operator_new(uVar3);
    param_1[0xf9] = (long)pvVar7;
    param_1[0xfa] = (long)pvVar7;
    param_1[0xfb] = (long)pvVar7 + uVar3;
    memcpy(pvVar7,pvVar9,uVar3);
    param_1[0xfa] = (long)pvVar7 + uVar3;
  }
  if (*(char *)(param_2 + 0x7f7) < '\0') {
    FUN_005478d8(param_1 + 0xfc,*(undefined8 *)(param_2 + 0x7e0),*(undefined8 *)(param_2 + 0x7e8));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x7e8);
    lVar8 = *(long *)(param_2 + 0x7e0);
    param_1[0xfe] = *(long *)(param_2 + 0x7f0);
    param_1[0xfd] = lVar10;
    param_1[0xfc] = lVar8;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x7f8);
  param_1[0xf8] = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0xff) = uVar2;
  param_1[0x100] = *(long *)(param_2 + 0x800);
  return;
}


// ===== 00903110  FUN_00903110 =====

/* WARNING: Removing unreachable block (ram,0x0090332c) */
/* WARNING: Removing unreachable block (ram,0x009032ac) */
/* WARNING: Removing unreachable block (ram,0x00903248) */
/* WARNING: Removing unreachable block (ram,0x009031e0) */
/* WARNING: Removing unreachable block (ram,0x009031c4) */
/* WARNING: Removing unreachable block (ram,0x0090322c) */
/* WARNING: Removing unreachable block (ram,0x00903290) */
/* WARNING: Removing unreachable block (ram,0x00903344) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00903110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 uStack_119;
  char *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *local_100;
  char **ppcStack_f8;
  undefined *local_f0;
  char **ppcStack_e8;
  char *local_e0;
  undefined **ppuStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  char **local_b8;
  char *local_b0;
  void **ppvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char **local_88;
  char *local_80;
  void **ppvStack_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  char **local_58;
  void *local_48;
  undefined8 uStack_40;
  
  *(undefined8 *)(param_1 + 0x838) = param_2;
  *(undefined8 *)(param_1 + 0x830) = param_3;
  if ((*(byte *)(param_1 + 0x1128) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x840) = param_4;
  }
  uVar5 = FUN_0044075c();
  if ((uVar5 & 1) == 0) {
    local_118 = "../../modules/congestion_controller/scream/scream_v2.cc";
    local_110 = 0x278;
    local_108 = &uStack_119;
    ppcStack_f8 = &local_118;
    local_100 = "SetTargetBitrateConstraints";
    ppcStack_e8 = &local_100;
    local_f0 = &DAT_001c4dc3;
    ppuStack_d8 = &local_f0;
    local_e0 = "min_target_bitrate_=";
    FUN_008ee354(&local_70,param_1 + 0x838);
    local_b8 = &local_e0;
    uStack_c8 = uStack_68;
    local_d0 = local_70;
    local_c0 = local_60;
    ppvStack_a8 = &local_d0;
    local_b0 = " max_target_bitrate_=";
    FUN_008ee354(&local_70,param_1 + 0x830);
    local_88 = &local_b0;
    uStack_98 = uStack_68;
    local_a0 = local_70;
    local_90 = local_60;
    local_80 = " start_bitrate_=";
    ppvStack_78 = &local_a0;
    FUN_008ee354(&local_48,param_1 + 0x840);
    local_58 = &local_80;
    uStack_68 = uStack_40;
    local_70 = local_48;
                    /* WARNING: Load size is inaccurate */
    lVar1 = *(long *)((long)ppvStack_78[3] + 8);
    puVar6 = *(undefined8 **)(lVar1 + 0x18);
    puVar2 = (undefined8 *)puVar6[1];
    puVar3 = (undefined8 *)puVar2[1];
    puVar4 = (undefined8 *)puVar3[1];
    FUN_00623bb0("\r\t\t\t\n\t\n\t\n",*puVar4,*(undefined4 *)(puVar4 + 1),*puVar3,*puVar2,*puVar6,
                 lVar1,*ppvStack_78[3],ppvStack_78,local_80,&local_70);
    if (local_c0 < 0) {
      operator_delete(local_d0);
    }
  }
  return;
}


// ===== 00903370  FUN_00903370 =====

void FUN_00903370(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x880);
  if (*(long *)(param_1 + 0x880) <= param_2) {
    lVar1 = param_2;
  }
  *(long *)(param_1 + 0x880) = lVar1;
  return;
}


// ===== 00903388  FUN_00903388 =====

void FUN_00903388(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  
  lVar5 = *(long *)(param_1 + 0x880);
  if (*(long *)(param_1 + 0x880) <= param_2[1]) {
    lVar5 = param_2[1];
  }
  *(long *)(param_1 + 0x880) = lVar5;
  FUN_00904ce4(param_1 + 0x8a8);
  if ((*(byte *)(param_1 + 0x1128) & 1) == 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x1108);
      uVar7 = *(ulong *)(param_1 + 0x840);
      uVar2 = uVar4 / 1000;
      uVar8 = uVar7 / 1000;
      if (499 < uVar4 % 1000) {
        uVar2 = uVar2 + 1;
      }
      if ((uVar4 & 0x8000000000000000) != 0) {
        uVar2 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
      }
      if (499 < uVar7 % 1000) {
        uVar8 = uVar8 + 1;
      }
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar8 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
      }
      FUN_00623bb0(&DAT_00215708,"../../modules/congestion_controller/scream/scream_v2.cc",0x301,
                   "Initial RTT: ",uVar2,"ms, Start Bitrate: ",uVar8,&DAT_001c0717);
    }
    lVar5 = *(long *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x68) <=
        (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x1108) * *(long *)(param_1 + 0x840)) /
        8000000) {
      lVar5 = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x1108) * *(long *)(param_1 + 0x840)) /
              8000000;
    }
    *(long *)(param_1 + 0x848) = lVar5;
    *(undefined1 *)(param_1 + 0x1128) = 1;
  }
  FUN_00903600(param_1,param_2);
  FUN_00903780(param_1,param_2);
  FUN_009038c0(param_1,param_2);
  FUN_00904724(param_1,param_2);
  dVar12 = *(double *)(param_1 + 0x860);
  plVar9 = *(long **)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x1108);
  uVar11 = *(undefined8 *)(param_1 + 0x1118);
  pvVar3 = operator_new(0x28);
  FUN_009068f8(pvVar3,*(undefined8 *)(param_1 + 0x848),param_2[1],*(undefined8 *)(param_1 + 0x840),
               uVar10,uVar11,(int)(dVar12 * 1000.0));
  (**(code **)(*plVar9 + 0x28))(plVar9,pvVar3);
  lVar5 = *param_2;
  if ((lVar5 != 0x7fffffffffffffff) &&
     (lVar6 = *(long *)(param_1 + 0x878), lVar6 != -0x8000000000000000)) {
    lVar1 = -0x8000000000000000;
    if (lVar6 != 0x7fffffffffffffff && lVar5 != -0x8000000000000000) {
      lVar1 = lVar5 - lVar6;
    }
    lVar6 = *(long *)(param_1 + 0x330);
    if (*(long *)(param_1 + 0x330) <= *(long *)(param_1 + 0x1108)) {
      lVar6 = *(long *)(param_1 + 0x1108);
    }
    if (lVar1 < lVar6) {
      return;
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x880);
  *(long *)(param_1 + 0x878) = lVar5;
  *(undefined8 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x888) = uVar10;
  return;
}


// ===== 00903600  FUN_00903600 =====

void FUN_00903600(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086e09c(&local_50,param_2);
  puVar2 = local_50;
  if (local_50 == puStack_48) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  if (puStack_48[-0x18] == '\x01') {
    lVar3 = *(long *)(puStack_48 + -0x20);
  }
  else {
    lVar3 = 0;
  }
  lVar4 = *(long *)(puStack_48 + -0x28);
  lVar6 = 0x7fffffffffffffff;
  if ((lVar4 != 0x7fffffffffffffff) && (lVar3 != 0x7fffffffffffffff)) {
    lVar1 = -0x8000000000000000;
    if (lVar3 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
      lVar1 = lVar4 + lVar3;
    }
    if ((lVar1 != 0x7fffffffffffffff) &&
       (lVar3 = *(long *)(local_50 + 0x48), lVar3 != -0x8000000000000000)) {
      lVar6 = -0x8000000000000000;
      if (lVar3 != 0x7fffffffffffffff && lVar1 != -0x8000000000000000) {
        lVar6 = lVar1 - lVar3;
      }
    }
  }
  puVar5 = puStack_48;
  if (local_50 != (undefined1 *)0x0) {
    do {
      puVar5 = puVar5 + -0x70;
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0086dc48(puVar5);
    } while (puVar5 != puVar2);
    puStack_48 = puVar2;
    operator_delete(local_50);
  }
  dVar7 = *(double *)(param_1 + 0x828);
  lVar3 = 0;
  if (dVar7 != 0.0 && dVar7 < 0.0 == NAN(dVar7)) {
    lVar3 = lVar6;
  }
  lVar4 = *(long *)(param_1 + 0x870);
  if (*(long *)(param_1 + 0x870) == 0) {
    lVar4 = lVar3;
  }
  lVar6 = (long)(dVar7 * (double)lVar6);
  lVar4 = (long)((1.0 - dVar7) * (double)lVar4);
  lVar3 = 0x7fffffffffffffff;
  if (lVar6 != 0x7fffffffffffffff && lVar4 != 0x7fffffffffffffff) {
    lVar3 = -0x8000000000000000;
    if (lVar4 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
      lVar3 = lVar4 + lVar6;
    }
  }
  *(long *)(param_1 + 0x870) = lVar3;
  return;
}


// ===== 00903780  FUN_00903780 =====

void FUN_00903780(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086df08(&local_50,param_2);
  puVar2 = local_50;
  if (local_50 == puStack_48) {
    if (local_50 == (undefined1 *)0x0) {
      return;
    }
  }
  else {
    puVar3 = local_50;
    dVar4 = 0.0;
    do {
      pcVar1 = puVar3 + 0x60;
      puVar3 = puVar3 + 0x70;
      dVar5 = dVar4 + 1.0;
      if (*pcVar1 != '\x03') {
        dVar5 = dVar4;
      }
      dVar4 = dVar5;
    } while (puVar3 != puStack_48);
    dVar5 = dVar5 / (double)(ulong)(((long)puStack_48 - (long)local_50 >> 4) * 0x6db6db6db6db6db7);
    dVar4 = *(double *)(param_1 + 0x860);
    if (dVar5 == dVar4 || dVar5 < dVar4 != (NAN(dVar5) || NAN(dVar4))) {
      *(double *)(param_1 + 0x860) = dVar4 * (1.0 - *(double *)(param_1 + 0xf8));
    }
    else {
      dVar5 = dVar5 * *(double *)(param_1 + 0xb0) + dVar4 * (1.0 - *(double *)(param_1 + 0xb0));
      dVar4 = 1.0;
      if (dVar5 == 1.0 || dVar5 < 1.0 != NAN(dVar5)) {
        dVar4 = dVar5;
      }
      *(double *)(param_1 + 0x860) = dVar4;
    }
    puVar3 = puStack_48;
    if (local_50 == (undefined1 *)0x0) {
      return;
    }
    do {
      puVar3 = puVar3 + -0x70;
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0086dc48(puVar3);
    } while (puVar3 != puVar2);
  }
  puStack_48 = puVar2;
  operator_delete(local_50);
  return;
}


// ===== 009038c0  FUN_009038c0 =====

/* WARNING: Removing unreachable block (ram,0x009046c8) */
/* WARNING: Removing unreachable block (ram,0x00904468) */
/* WARNING: Removing unreachable block (ram,0x009043f8) */
/* WARNING: Removing unreachable block (ram,0x009043dc) */
/* WARNING: Removing unreachable block (ram,0x0090444c) */
/* WARNING: Removing unreachable block (ram,0x009046e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009038c0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  long lVar11;
  double dVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  double dVar16;
  ulong uVar17;
  int iVar18;
  double dVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  void *pvVar24;
  long *plVar25;
  undefined4 uVar26;
  long lVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined1 uStack_149;
  char *local_148;
  undefined8 local_140;
  undefined1 *local_138;
  char *local_130;
  char **ppcStack_128;
  char *local_120;
  char **ppcStack_118;
  void *local_110;
  void *pvStack_108;
  undefined8 local_100;
  char **local_f8;
  char *local_f0;
  void **ppvStack_e8;
  void *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  char **local_c8;
  void *local_b8;
  undefined8 uStack_b0;
  
  uVar5 = FUN_0086e3c0(param_2);
  FUN_0086dfc8(&local_e0,param_2);
  pvVar15 = local_e0;
  pvVar24 = local_e0;
  if (local_e0 == pvStack_d8) {
    bVar3 = false;
    if (local_e0 != (void *)0x0) goto LAB_00903970;
  }
  else {
    do {
      pvVar7 = (void *)((long)pvVar24 + 0x70);
      bVar3 = *(long *)((long)pvVar24 + 0x48) == 0x7fffffffffffffff;
      if (bVar3) break;
      pvVar24 = pvVar7;
    } while (pvVar7 != pvStack_d8);
    pvVar24 = pvStack_d8;
    if (local_e0 != (void *)0x0) {
      do {
        pvVar24 = (void *)((long)pvVar24 + -0x70);
        if (pvVar24 == (void *)0x0) goto LAB_009046fc;
        FUN_0086dc48(pvVar24);
      } while (pvVar24 != pvVar15);
LAB_00903970:
      pvStack_d8 = pvVar15;
      operator_delete(local_e0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x1118);
  if ((lVar8 + 0x7fffffffffffffffU < 0xfffffffffffffffe) && (*(long *)(param_1 + 0xe70) / 2 < lVar8)
     ) {
    lVar27 = *(long *)(param_1 + 0x848);
    bVar4 = true;
    uVar26 = 1;
LAB_009039d4:
    lVar14 = *param_2;
    lVar9 = lVar27;
    if ((lVar14 != 0x7fffffffffffffff) &&
       (lVar21 = *(long *)(param_1 + 0x890), lVar21 != -0x8000000000000000)) {
      lVar11 = -0x8000000000000000;
      if (lVar21 != 0x7fffffffffffffff && lVar14 != -0x8000000000000000) {
        lVar11 = lVar14 - lVar21;
      }
      lVar21 = *(long *)(param_1 + 0x330);
      if (*(long *)(param_1 + 0x1108) <= *(long *)(param_1 + 0x330)) {
        lVar21 = *(long *)(param_1 + 0x1108);
      }
      if (lVar11 < lVar21) goto LAB_00903d6c;
    }
    *(long *)(param_1 + 0x890) = lVar14;
    if (bVar3 != false) {
      lVar9 = (long)(*(double *)(param_1 + 0x260) * (double)lVar27);
      *(long *)(param_1 + 0x848) = lVar9;
    }
    if ((uVar5 & 1) == 0) {
      if (bVar4) {
        lVar8 = *(long *)(param_1 + 0x1d0);
        if (lVar8 == -0x8000000000000000) {
          dVar12 = -INFINITY;
        }
        else if (lVar8 == 0x7fffffffffffffff) {
          dVar12 = INFINITY;
        }
        else {
          dVar12 = (double)lVar8;
        }
        if (lVar9 == -0x8000000000000000) {
          dVar10 = -INFINITY;
        }
        else if (lVar9 == 0x7fffffffffffffff) {
          dVar10 = INFINITY;
        }
        else {
          dVar10 = (double)lVar9;
        }
        uVar28 = NEON_fminnm(dVar12 / dVar10,0x3ff0000000000000);
        lVar9 = FUN_0090556c(uVar28,param_1 + 0x8a8);
        goto LAB_00903d54;
      }
    }
    else {
      lVar11 = *(long *)(param_1 + 0x1108);
      lVar21 = *(long *)(param_1 + 0x330);
      if (lVar11 == -0x8000000000000000) {
        dVar12 = -INFINITY;
      }
      else if (lVar11 == 0x7fffffffffffffff) {
        dVar12 = INFINITY;
      }
      else {
        dVar12 = (double)lVar11;
      }
      if (lVar21 == -0x8000000000000000) {
        dVar10 = -INFINITY;
      }
      else if (lVar21 == 0x7fffffffffffffff) {
        dVar10 = INFINITY;
      }
      else {
        dVar10 = (double)lVar21;
      }
      dVar12 = dVar12 / dVar10;
      lVar21 = *(long *)(param_1 + 0x1d0);
      if (dVar12 <= 1.0) {
        dVar12 = 1.0;
      }
      if (lVar21 == -0x8000000000000000) {
        dVar10 = -INFINITY;
      }
      else if (lVar21 == 0x7fffffffffffffff) {
        dVar10 = INFINITY;
      }
      else {
        dVar10 = (double)lVar21;
      }
      if (lVar9 == -0x8000000000000000) {
        dVar16 = -INFINITY;
      }
      else if (lVar9 == 0x7fffffffffffffff) {
        dVar16 = INFINITY;
      }
      else {
        dVar16 = (double)lVar9;
      }
      dVar10 = (double)NEON_fminnm(dVar10 / dVar16,0x3ff0000000000000);
      dVar10 = 1.0 - dVar10;
      if (dVar10 <= 0.5) {
        dVar10 = 0.5;
      }
      dVar10 = ((*(double *)(param_1 + 0x860) * 0.5) / dVar12) * dVar10;
      if ((0xfffffffffffffffd < lVar8 + 0x7fffffffffffffffU) ||
         (lVar8 <= *(long *)(param_1 + 0xe70) / 2)) {
        dVar12 = (double)FUN_009049ac(param_1);
        lVar8 = *(long *)(param_1 + 0x1d0);
        lVar9 = *(long *)(param_1 + 0x848);
        if (dVar12 <= 0.25) {
          dVar12 = 0.25;
        }
        if (lVar8 == -0x8000000000000000) {
          dVar16 = -INFINITY;
        }
        else if (lVar8 == 0x7fffffffffffffff) {
          dVar16 = INFINITY;
        }
        else {
          dVar16 = (double)lVar8;
        }
        if (lVar9 == -0x8000000000000000) {
          dVar19 = -INFINITY;
        }
        else if (lVar9 == 0x7fffffffffffffff) {
          dVar19 = INFINITY;
        }
        else {
          dVar19 = (double)lVar9;
        }
        lVar14 = *(long *)(param_1 + 0x890);
        dVar16 = (double)NEON_fminnm(dVar16 / dVar19,0x3ff0000000000000);
        dVar16 = (1.0 - dVar16 / DAT_001f5930) * DAT_001f5930;
        if (dVar16 <= DAT_001f5940) {
          dVar16 = DAT_001f5940;
        }
        dVar16 = (dVar16 - *(double *)(param_1 + 0x1120)) / dVar16;
        dVar19 = 1.0;
        if (dVar16 == 1.0 || dVar16 < 1.0 != NAN(dVar16)) {
          dVar19 = dVar16;
        }
        dVar30 = 0.0;
        if (0.0 <= dVar16) {
          dVar30 = dVar19;
        }
        if (dVar30 <= DAT_001f5930) {
          dVar30 = DAT_001f5930;
        }
        dVar10 = dVar10 * dVar12 * dVar30;
      }
      lVar21 = *param_2;
      lVar8 = 0x7fffffffffffffff;
      if ((lVar21 != 0x7fffffffffffffff) && (lVar14 != -0x8000000000000000)) {
        lVar8 = -0x8000000000000000;
        if (lVar14 != 0x7fffffffffffffff && lVar21 != -0x8000000000000000) {
          lVar8 = lVar21 - lVar14;
        }
      }
      lVar14 = *(long *)(param_1 + 0x330);
      if (*(long *)(param_1 + 0x330) <= *(long *)(param_1 + 0x1108)) {
        lVar14 = *(long *)(param_1 + 0x1108);
      }
      if (lVar14 * *(int *)(param_1 + 0x3bc) < lVar8) {
        lVar8 = *(long *)(param_1 + 0x68);
        if (lVar9 < lVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                    );
        }
        if (lVar8 <= *(long *)(param_1 + 0x888)) {
          plVar25 = (long *)(param_1 + 0x848);
          if (*(long *)(param_1 + 0x888) <= lVar9) {
            plVar25 = (long *)(param_1 + 0x888);
          }
          lVar8 = *plVar25;
        }
        lVar9 = lVar8;
        *(undefined8 *)(param_1 + 0x860) = 0x3fd0000000000000;
      }
      lVar9 = (long)((1.0 - dVar10) * (double)lVar9);
LAB_00903d54:
      *(long *)(param_1 + 0x848) = lVar9;
    }
    if (*(char *)(param_1 + 0x858) == '\x01') {
      *(long *)(param_1 + 0x850) = lVar9;
      *(undefined1 *)(param_1 + 0x858) = 0;
    }
  }
  else {
    lVar27 = *(long *)(param_1 + 0x848);
    bVar4 = false;
    uVar26 = 0;
    lVar9 = lVar27;
    if ((uVar5 & 1) != 0 || bVar3 != false) goto LAB_009039d4;
  }
LAB_00903d6c:
  plVar25 = (long *)(param_1 + 0x848);
  if ((((uVar5 & 1) != 0 || bVar4) || bVar3 != false) && (*(long *)(param_1 + 0x890) != *param_2))
  goto LAB_00904330;
  FUN_0086dfc8(&local_e0,param_2);
  pvVar24 = local_e0;
  if (local_e0 == pvStack_d8) {
    lVar8 = 0;
    if (local_e0 != (void *)0x0) goto LAB_00903e24;
  }
  else {
    lVar8 = 0;
    pvVar15 = local_e0;
    do {
      if (*(char *)((long)pvVar15 + 0x60) != '\x03') {
        lVar14 = *(long *)((long)pvVar15 + 8);
        lVar9 = -0x8000000000000000;
        if (lVar14 != -0x8000000000000000 && lVar8 != -0x8000000000000000) {
          lVar9 = lVar14 + lVar8;
        }
        lVar21 = 0x7fffffffffffffff;
        if (lVar14 != 0x7fffffffffffffff) {
          lVar21 = lVar9;
        }
        bVar4 = lVar8 != 0x7fffffffffffffff;
        lVar8 = 0x7fffffffffffffff;
        if (bVar4) {
          lVar8 = lVar21;
        }
      }
      pvVar15 = (void *)((long)pvVar15 + 0x70);
    } while (pvVar15 != pvStack_d8);
    pvVar15 = pvStack_d8;
    if (local_e0 != (void *)0x0) {
      do {
        pvVar15 = (void *)((long)pvVar15 + -0x70);
        if (pvVar15 == (void *)0x0) {
LAB_009046fc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0086dc48(pvVar15);
      } while (pvVar15 != pvVar24);
LAB_00903e24:
      pvStack_d8 = pvVar24;
      operator_delete(local_e0);
    }
  }
  lVar14 = *(long *)(param_1 + 0x1d0);
  lVar9 = *(long *)(param_1 + 0x848);
  if (lVar14 == -0x8000000000000000) {
    dVar12 = -INFINITY;
  }
  else if (lVar14 == 0x7fffffffffffffff) {
    dVar12 = INFINITY;
  }
  else {
    dVar12 = (double)lVar14;
  }
  if (lVar9 == -0x8000000000000000) {
    dVar10 = -INFINITY;
  }
  else if (lVar9 == 0x7fffffffffffffff) {
    dVar10 = INFINITY;
  }
  else {
    dVar10 = (double)lVar9;
  }
  lVar9 = *(long *)(param_1 + 0x1108);
  dVar12 = (double)NEON_fminnm(dVar12 / dVar10,0x3ff0000000000000);
  lVar8 = (long)(dVar12 * (double)lVar8);
  if ((lVar9 != 0x7fffffffffffffff) &&
     (lVar14 = *(long *)(param_1 + 0x870), lVar14 != 0x7fffffffffffffff)) {
    lVar11 = *(long *)(param_1 + 0x330);
    lVar21 = -0x8000000000000000;
    if (lVar14 != -0x8000000000000000 && lVar9 != -0x8000000000000000) {
      lVar21 = lVar14 + lVar9;
    }
    if (lVar21 < lVar11) {
      dVar12 = -INFINITY;
      if (lVar21 != -0x8000000000000000) {
        dVar12 = (double)lVar21;
      }
      dVar10 = INFINITY;
      if (lVar11 != 0x7fffffffffffffff) {
        dVar10 = (double)lVar11;
      }
      lVar8 = (long)((dVar12 / dVar10) * (dVar12 / dVar10) * (double)lVar8);
    }
  }
  dVar10 = (double)FUN_009049ac(param_1);
  dVar12 = DAT_001f5930;
  lVar9 = *(long *)(param_1 + 0x1d0);
  lVar14 = *(long *)(param_1 + 0x848);
  if (dVar10 <= 0.25) {
    dVar10 = 0.25;
  }
  if (lVar9 == -0x8000000000000000) {
    dVar16 = -INFINITY;
  }
  else if (lVar9 == 0x7fffffffffffffff) {
    dVar16 = INFINITY;
  }
  else {
    dVar16 = (double)lVar9;
  }
  if (lVar14 == -0x8000000000000000) {
    dVar19 = -INFINITY;
  }
  else if (lVar14 == 0x7fffffffffffffff) {
    dVar19 = INFINITY;
  }
  else {
    dVar19 = (double)lVar14;
  }
  dVar16 = (double)NEON_fminnm(dVar16 / dVar19,0x3ff0000000000000);
  dVar16 = 1.0 - dVar16;
  if (dVar16 <= 0.5) {
    dVar16 = 0.5;
  }
  lVar8 = (long)(dVar16 * (double)(long)(dVar10 * (double)lVar8));
  if (*(double *)(param_1 + 0x860) < DAT_001f4f18) {
    lVar11 = *(long *)(param_1 + 0x1118);
    lVar21 = *(long *)(param_1 + 0xe70);
    if (lVar11 == -0x8000000000000000) {
      dVar10 = -INFINITY;
    }
    else if (lVar11 == 0x7fffffffffffffff) {
      dVar10 = INFINITY;
    }
    else {
      dVar10 = (double)lVar11;
    }
    lVar11 = lVar21 + 3;
    if (-1 < lVar21) {
      lVar11 = lVar21;
    }
    dVar16 = 1.0 - dVar10 / (double)(lVar11 >> 2);
    dVar10 = 1.0;
    if (dVar16 == 1.0 || dVar16 < 1.0 != NAN(dVar16)) {
      dVar10 = dVar16;
    }
    dVar19 = DAT_001f5930;
    if (DAT_001f5930 <= dVar16) {
      dVar19 = dVar10;
    }
    lVar8 = (long)(dVar19 * (double)lVar8);
  }
  if (lVar9 == -0x8000000000000000) {
    dVar10 = -INFINITY;
  }
  else if (lVar9 == 0x7fffffffffffffff) {
    dVar10 = INFINITY;
  }
  else {
    dVar10 = (double)lVar9;
  }
  if (lVar14 == -0x8000000000000000) {
    dVar16 = -INFINITY;
  }
  else if (lVar14 == 0x7fffffffffffffff) {
    dVar16 = INFINITY;
  }
  else {
    dVar16 = (double)lVar14;
  }
  lVar21 = *param_2;
  dVar10 = (double)NEON_fminnm(dVar10 / dVar16,0x3ff0000000000000);
  dVar10 = (1.0 - dVar10 / DAT_001f5930) * DAT_001f5930;
  if (dVar10 <= DAT_001f5940) {
    dVar10 = DAT_001f5940;
  }
  dVar10 = (dVar10 - *(double *)(param_1 + 0x1120)) / dVar10;
  dVar16 = 1.0;
  if (dVar10 == 1.0 || dVar10 < 1.0 != NAN(dVar10)) {
    dVar16 = dVar10;
  }
  dVar19 = 0.0;
  if (0.0 <= dVar10) {
    dVar19 = dVar16;
  }
  lVar11 = *(long *)(param_1 + 0x330);
  if (*(long *)(param_1 + 0x330) <= *(long *)(param_1 + 0x1108)) {
    lVar11 = *(long *)(param_1 + 0x1108);
  }
  if ((lVar21 == 0x7fffffffffffffff) ||
     (lVar22 = *(long *)(param_1 + 0x890), lVar22 == -0x8000000000000000)) {
    iVar18 = *(int *)(param_1 + 0x2a4);
LAB_00904188:
    dVar10 = INFINITY;
  }
  else {
    iVar18 = *(int *)(param_1 + 0x2a4);
    dVar10 = -INFINITY;
    if ((lVar21 != -0x8000000000000000) && (lVar22 != 0x7fffffffffffffff)) {
      lVar21 = lVar21 - lVar22;
      if (lVar21 == -0x8000000000000000) {
        dVar10 = -INFINITY;
      }
      else {
        if (lVar21 == 0x7fffffffffffffff) goto LAB_00904188;
        dVar10 = (double)lVar21;
      }
    }
  }
  lVar11 = lVar11 * iVar18;
  if (lVar11 == -0x8000000000000000) {
    dVar16 = -INFINITY;
  }
  else if (lVar11 == 0x7fffffffffffffff) {
    dVar16 = INFINITY;
  }
  else {
    dVar16 = (double)lVar11;
  }
  dVar10 = dVar10 / dVar16;
  lVar14 = (long)(*(double *)(param_1 + 0x2e8) * (double)lVar14);
  dVar16 = 1.0;
  if (dVar10 == 1.0 || dVar10 < 1.0 != NAN(dVar10)) {
    dVar16 = dVar10;
  }
  dVar30 = 0.0;
  if (0.0 <= dVar10) {
    dVar30 = dVar16;
  }
  if (lVar14 == -0x8000000000000000) {
    dVar10 = -INFINITY;
  }
  else if (lVar14 == 0x7fffffffffffffff) {
    dVar10 = INFINITY;
  }
  else {
    dVar10 = (double)lVar14;
  }
  if (lVar9 == -0x8000000000000000) {
    dVar16 = -INFINITY;
  }
  else if (lVar9 == 0x7fffffffffffffff) {
    dVar16 = INFINITY;
  }
  else {
    dVar16 = (double)lVar9;
  }
  dVar29 = (double)FUN_009049ac(param_1);
  lVar14 = *(long *)(param_1 + 0x1d0);
  lVar9 = *(long *)(param_1 + 0x880);
  if (*(long *)(param_1 + 0x880) <= *(long *)(param_1 + 0x888)) {
    lVar9 = *(long *)(param_1 + 0x888);
  }
  lVar21 = 0x7fffffffffffffff;
  if ((lVar14 != 0x7fffffffffffffff) &&
     (lVar9 = (long)(*(double *)(param_1 + 0x218) * (double)lVar9), lVar9 != 0x7fffffffffffffff)) {
    lVar21 = -0x8000000000000000;
    if (lVar9 != -0x8000000000000000 && lVar14 != -0x8000000000000000) {
      lVar21 = lVar9 + lVar14;
    }
  }
  lVar14 = *(long *)(param_1 + 0x68);
  lVar9 = *(long *)(param_1 + 0x848);
  if (lVar21 <= lVar14) {
    lVar21 = lVar14;
  }
  if (lVar9 < lVar21) {
    if (dVar19 <= dVar12) {
      dVar19 = dVar12;
    }
    lVar11 = (long)((dVar29 * dVar30 * (dVar10 / dVar16 + 1.0 + -1.0) + 1.0) *
                   (double)(long)(dVar19 * (double)lVar8));
    lVar8 = 0x7fffffffffffffff;
    if (lVar11 != 0x7fffffffffffffff) {
      lVar8 = -0x8000000000000000;
      if (lVar11 != -0x8000000000000000 && lVar9 != -0x8000000000000000) {
        lVar8 = lVar9 + lVar11;
      }
    }
    if (lVar8 <= lVar21) {
      lVar21 = lVar8;
    }
    lVar9 = lVar14;
    if (lVar14 <= lVar8) {
      lVar9 = lVar21;
    }
    *plVar25 = lVar9;
  }
LAB_00904330:
  if (lVar27 < lVar9) {
    *(undefined1 *)(param_1 + 0x858) = 1;
  }
  if (lVar9 < lVar27) {
    *(long *)(param_1 + 0x898) = *param_2;
    uVar6 = FUN_0044075c();
  }
  else {
    uVar6 = FUN_0044075c();
  }
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (lVar27 != *plVar25) {
    local_148 = "../../modules/congestion_controller/scream/scream_v2.cc";
    local_140 = 0x990;
    local_138 = &uStack_149;
    ppcStack_128 = &local_148;
    local_130 = "ScreamV2: ";
    ppcStack_118 = &local_130;
    local_120 = ", ref_window = ";
    FUN_008ecb04(&local_e0,plVar25);
    local_f8 = &local_120;
    pvStack_108 = pvStack_d8;
    local_110 = local_e0;
    local_100 = local_d0;
    ppvStack_e8 = &local_110;
    local_f0 = " ref_window_i_=";
    FUN_008ecb04(&local_b8,param_1 + 0x850);
    local_c8 = &local_f0;
    pvStack_d8 = (void *)uStack_b0;
    local_e0 = local_b8;
    uVar6 = *(ulong *)(param_1 + 0x1108);
    if ((long)uVar6 < 0) {
      uVar13 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
      uVar6 = *(ulong *)(param_1 + 0x1118);
    }
    else {
      uVar13 = uVar6 / 1000;
      if (499 < uVar6 % 1000) {
        uVar13 = uVar13 + 1;
      }
      uVar6 = *(ulong *)(param_1 + 0x1118);
    }
    if ((long)uVar6 < 0) {
      uVar20 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
    }
    else {
      uVar20 = uVar6 / 1000;
      if (499 < uVar6 % 1000) {
        uVar20 = uVar20 + 1;
      }
    }
    uVar6 = *(ulong *)(param_1 + 0x870);
    if ((long)uVar6 < 0) {
      uVar23 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
    }
    else {
      uVar23 = uVar6 / 1000;
      if (499 < uVar6 % 1000) {
        uVar23 = uVar23 + 1;
      }
    }
    uVar6 = *(ulong *)(param_1 + 0x840);
    if ((long)uVar6 < 0) {
      uVar17 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
    }
    else {
      uVar17 = uVar6 / 1000;
      if (499 < uVar6 % 1000) {
        uVar17 = uVar17 + 1;
      }
    }
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined8 **)((long)ppvStack_e8[3] + 8);
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0(*(undefined8 *)(param_1 + 0x860),*(undefined8 *)(param_1 + 0x1120),&DAT_002258c2,
                 *puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*ppvStack_e8[3],ppvStack_e8,local_f0,
                 &local_e0,", change=",*(long *)(param_1 + 0x848) - lVar27," bytes ",", l4s_alpha=",
                 ", is_ce=",uVar5 & 1," is_virtual_ce=",uVar26," is_loss=",bVar3," smoothed_rtt=",
                 uVar13,", queue_delay=",uVar20,", queue_delay_dev_norm="," feedback_hold",uVar23,
                 ", target_rate =",uVar17);
    return;
  }
  return;
}


// ===== 00904724  FUN_00904724 =====

void FUN_00904724(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  double dVar12;
  long local_38;
  
  lVar6 = *(long *)(param_1 + 0x1108);
  lVar8 = *(long *)(param_1 + 0x1d0);
  lVar11 = lVar6;
  if (lVar6 < 0x3e9) {
    lVar11 = 1000;
  }
  lVar7 = *(long *)(param_1 + 0x848);
  if (lVar8 == -0x8000000000000000) {
    dVar9 = -INFINITY;
  }
  else if (lVar8 == 0x7fffffffffffffff) {
    dVar9 = INFINITY;
  }
  else {
    dVar9 = (double)lVar8;
  }
  if (lVar7 == -0x8000000000000000) {
    dVar10 = -INFINITY;
  }
  else if (lVar7 == 0x7fffffffffffffff) {
    dVar10 = INFINITY;
  }
  else {
    dVar10 = (double)lVar7;
  }
  lVar8 = *(long *)(param_1 + 0x870);
  dVar10 = (double)NEON_fminnm(dVar9 / dVar10,0x3ff0000000000000);
  dVar10 = dVar10 + DAT_001f57a8;
  dVar9 = DAT_001f5108;
  if (dVar10 == DAT_001f5108 || dVar10 < DAT_001f5108 != (NAN(dVar10) || NAN(DAT_001f5108))) {
    dVar9 = dVar10;
  }
  dVar12 = 1.0;
  if (0.0 <= dVar10) {
    dVar12 = 1.0 - dVar9;
  }
  lVar1 = lVar8;
  if (lVar8 != -0x8000000000000000) {
    lVar1 = lVar8 + lVar11;
  }
  lVar2 = 0x7fffffffffffffff;
  if (lVar8 != 0x7fffffffffffffff && lVar6 != 0x7fffffffffffffff) {
    lVar2 = lVar1;
  }
  lVar6 = 0;
  if (lVar2 != 0) {
    lVar6 = (lVar7 * 8000000) / lVar2;
  }
  lVar6 = (long)(dVar12 * (double)lVar6);
  local_38 = lVar6;
  if (1 < *(long *)(param_1 + 0x1100) + 0x8000000000000001U) {
    lVar7 = *param_2;
    lVar8 = lVar7;
    if (lVar7 != -0x8000000000000000) {
      lVar8 = lVar7 - *(long *)(param_1 + 0x1100);
    }
    if ((lVar7 == 0x7fffffffffffffff) || (*(long *)(param_1 + 0xf00) <= lVar8)) {
      if (*(long *)(param_1 + 0x8a0) + 0x8000000000000001U < 2) {
        *(long *)(param_1 + 0x8a0) = lVar7;
        uVar5 = FUN_00417e08();
        if ((uVar5 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/scream/scream_v2.cc",0xb89
                       ,"Reduce target rate to attempt to drain queue.");
        }
      }
      lVar8 = *param_2;
      if ((lVar8 != 0x7fffffffffffffff) &&
         (lVar7 = *(long *)(param_1 + 0x8a0), lVar7 != -0x8000000000000000)) {
        lVar11 = lVar11 * *(int *)(param_1 + 0x6c4);
        if (lVar11 < 0x186a1) {
          lVar11 = 100000;
        }
        if (((lVar8 == -0x8000000000000000) || (lVar7 == 0x7fffffffffffffff)) ||
           (lVar8 - lVar7 < lVar11)) {
          lVar6 = (long)((double)lVar6 / 2.0);
          local_38 = lVar6;
          goto LAB_00904870;
        }
      }
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/scream/scream_v2.cc",0xbc1,
                     "Reset queue delay estimate due to high queue delay.");
      }
      FUN_00904c88(param_1 + 0x8a8);
      goto LAB_00904870;
    }
  }
  *(undefined8 *)(param_1 + 0x8a0) = 0x8000000000000000;
LAB_00904870:
  if (*(long *)(param_1 + 0x838) <= *(long *)(param_1 + 0x830)) {
    plVar3 = (long *)(param_1 + 0x830);
    if (lVar6 <= *(long *)(param_1 + 0x830)) {
      plVar3 = &local_38;
    }
    plVar4 = (long *)(param_1 + 0x838);
    if (*(long *)(param_1 + 0x838) <= lVar6) {
      plVar4 = plVar3;
    }
    *(long *)(param_1 + 0x840) = *plVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
            );
}


// ===== 009049ac  FUN_009049ac =====

undefined1  [16] FUN_009049ac(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar2 = *(long *)(param_1 + 0x848);
  lVar1 = *(long *)(param_1 + 0x850);
  if (lVar2 - lVar1 == 0 || lVar2 < lVar1) {
    dVar3 = 9.223372036854776e+18;
    if ((lVar2 != -0x8000000000000000) && (lVar1 != 0x7fffffffffffffff)) {
      dVar3 = -9.223372036854776e+18;
      if (lVar1 != -0x8000000000000000 && lVar2 != 0x7fffffffffffffff) {
        dVar3 = (double)(lVar1 - lVar2);
      }
    }
    lVar2 = (long)(*(double *)(param_1 + 0x378) * dVar3);
    if (lVar2 == -0x8000000000000000) {
      dVar3 = -INFINITY;
    }
    else if (lVar2 == 0x7fffffffffffffff) {
      dVar3 = INFINITY;
    }
    else {
      dVar3 = (double)lVar2;
    }
    if (lVar1 == -0x8000000000000000) {
      dVar4 = -INFINITY;
    }
    else if (lVar1 == 0x7fffffffffffffff) {
      dVar4 = INFINITY;
    }
    else {
      dVar4 = (double)lVar1;
    }
  }
  else {
    dVar3 = 9.223372036854776e+18;
    if (lVar1 != -0x8000000000000000 && lVar2 != 0x7fffffffffffffff) {
      dVar3 = (double)(lVar2 - lVar1);
    }
    lVar2 = (long)(*(double *)(param_1 + 0x378) * dVar3);
    if (lVar2 == -0x8000000000000000) {
      dVar3 = -INFINITY;
    }
    else if (lVar2 == 0x7fffffffffffffff) {
      dVar3 = INFINITY;
    }
    else {
      dVar3 = (double)lVar2;
    }
    dVar4 = -INFINITY;
    if (lVar1 != -0x8000000000000000) {
      dVar4 = (double)lVar1;
    }
  }
  dVar4 = (dVar3 / dVar4) * (dVar3 / dVar4);
  dVar3 = 1.0;
  if (dVar4 == 1.0 || dVar4 < 1.0 != NAN(dVar4)) {
    dVar3 = dVar4;
  }
  dVar5 = DAT_001f5930;
  if (DAT_001f5930 <= dVar4) {
    dVar5 = dVar3;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar5;
  return auVar6;
}


// ===== 00904afc  FUN_00904afc =====

long FUN_00904afc(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = *(long *)(param_1 + 0x1d0);
  lVar1 = *(long *)(param_1 + 0x848);
  if (lVar2 == -0x8000000000000000) {
    dVar3 = -INFINITY;
  }
  else if (lVar2 == 0x7fffffffffffffff) {
    dVar3 = INFINITY;
  }
  else {
    dVar3 = (double)lVar2;
  }
  if (lVar1 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar1 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar1;
  }
  dVar3 = (double)NEON_fminnm(dVar3 / dVar4,0x3ff0000000000000);
  dVar3 = (1.0 - dVar3 / DAT_001f5930) * DAT_001f5930;
  if (dVar3 <= DAT_001f5940) {
    dVar3 = DAT_001f5940;
  }
  dVar3 = (dVar3 - *(double *)(param_1 + 0x1120)) / dVar3;
  dVar4 = 1.0;
  if (dVar3 == 1.0 || dVar3 < 1.0 != NAN(dVar3)) {
    dVar4 = dVar3;
  }
  dVar5 = 0.0;
  if (0.0 <= dVar3) {
    dVar5 = dVar4;
  }
  return (long)((*(double *)(param_1 + 0x400) +
                (*(double *)(param_1 + 0x448) - *(double *)(param_1 + 0x400)) * dVar5) *
               (double)lVar1);
}


// ===== 00904bd8  FUN_00904bd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904bd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00901fdc();
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x53c);
  *(undefined4 *)(param_1 + 0x854) = 0;
  *(undefined8 *)(param_1 + 0x82c) = 0;
  *(undefined8 *)(param_1 + 0x824) = 0;
  *(undefined8 *)(param_1 + 0x83c) = 0;
  *(undefined8 *)(param_1 + 0x834) = 0;
  *(undefined8 *)(param_1 + 0x84c) = 0;
  *(undefined8 *)(param_1 + 0x844) = 0;
  uVar2 = _UNK_001f3868;
  uVar1 = _DAT_001f3860;
  *(undefined8 *)(param_1 + 0x858) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x868) = uVar2;
  *(undefined8 *)(param_1 + 0x860) = uVar1;
  uVar2 = _UNK_001f3458;
  uVar1 = _DAT_001f3450;
  *(undefined8 *)(param_1 + 0x870) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined8 *)(param_1 + 0x818) = uVar2;
  *(undefined8 *)(param_1 + 0x810) = uVar1;
  FUN_00905470(param_1 + 0x820);
  FUN_0090520c(param_1 + 0x820,0x7fffffffffffffff);
  *(undefined8 *)(param_1 + 0x858) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x870) = uVar2;
  *(undefined8 *)(param_1 + 0x868) = uVar1;
  *(undefined8 *)(param_1 + 0x878) = 0;
  return;
}


// ===== 00904c88  FUN_00904c88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904c88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_001f3450;
  *(undefined8 *)(param_1 + 0x818) = _UNK_001f3458;
  *(undefined8 *)(param_1 + 0x810) = uVar1;
  FUN_00905470(param_1 + 0x820);
  FUN_0090520c(param_1 + 0x820,0x7fffffffffffffff);
  *(undefined8 *)(param_1 + 0x870) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x858) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x868) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x878) = 0;
  return;
}


// ===== 00904ce4  FUN_00904ce4 =====

void FUN_00904ce4(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *local_60;
  long *plStack_58;
  undefined1 *local_50;
  
  FUN_0086dfc8(&local_60,param_2);
  plVar1 = plStack_58;
  plVar7 = local_60;
  plVar11 = plStack_58;
  if (local_60 != (long *)0x0) {
    while (plVar7 != plVar11) {
      plVar11 = plVar11 + -0xe;
      if (plVar11 == (long *)0x0) goto LAB_0090505c;
      FUN_0086dc48(plVar11);
    }
    plStack_58 = plVar7;
    operator_delete(local_60);
  }
  if (plVar7 == plVar1) {
    return;
  }
  plStack_58 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086e09c(&local_60,param_2);
  plVar11 = local_60;
  if (local_60 == plStack_58) goto LAB_00905000;
  lVar3 = 0;
  lVar6 = 0x7fffffffffffffff;
  lVar4 = *(long *)(param_1 + 0x818);
  plVar7 = local_60;
  do {
    lVar9 = plVar7[9];
    if ((lVar9 == 0x7fffffffffffffff) || (lVar10 = *plVar7, lVar10 == -0x8000000000000000)) {
      *(long *)(param_1 + 0x818) = lVar4;
      lVar8 = 0x7fffffffffffffff;
LAB_00904dac:
      lVar3 = 0x7fffffffffffffff;
      lVar9 = lVar4;
    }
    else {
      lVar8 = -0x8000000000000000;
      if (lVar10 != 0x7fffffffffffffff && lVar9 != -0x8000000000000000) {
        lVar8 = lVar9 - lVar10;
      }
      lVar9 = lVar8;
      if (lVar4 <= lVar8) {
        lVar9 = lVar4;
      }
      *(long *)(param_1 + 0x818) = lVar9;
      lVar4 = lVar9;
      if ((lVar3 == 0x7fffffffffffffff) || (lVar8 == 0x7fffffffffffffff)) goto LAB_00904dac;
      bVar2 = lVar3 != -0x8000000000000000;
      lVar4 = lVar8 + lVar3;
      lVar3 = -0x8000000000000000;
      if (lVar8 != -0x8000000000000000 && bVar2) {
        lVar3 = lVar4;
      }
    }
    plVar7 = plVar7 + 0xe;
    if (lVar6 <= lVar8) {
      lVar8 = lVar6;
    }
    lVar6 = lVar8;
    lVar4 = lVar9;
  } while (plVar7 != plStack_58);
  lVar4 = *param_2;
  lVar6 = 0x7fffffffffffffff;
  if ((lVar4 != 0x7fffffffffffffff) && (lVar10 = plStack_58[-0xe], lVar10 != -0x8000000000000000)) {
    lVar6 = -0x8000000000000000;
    if (lVar4 != -0x8000000000000000 && lVar10 != 0x7fffffffffffffff) {
      lVar6 = lVar4 - lVar10;
    }
  }
  if ((char)plStack_58[-3] == '\x01') {
    lVar4 = plStack_58[-4];
  }
  else {
    lVar4 = 0;
  }
  uVar5 = 0x7fffffffffffffff;
  if ((lVar6 != 0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) {
    uVar5 = 0;
    if (lVar4 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
      uVar5 = lVar6 - lVar4 & (lVar6 - lVar4 >> 0x3f ^ 0xffffffffffffffffU);
    }
  }
  lVar6 = *(long *)(param_1 + 0x860);
  if (lVar6 != 0) {
    lVar4 = 0x160;
    if (lVar6 <= (long)uVar5) {
      lVar4 = 0x118;
    }
    lVar10 = (long)(*(double *)(param_1 + lVar4) * (double)uVar5);
    uVar5 = 0x7fffffffffffffff;
    if ((lVar10 != 0x7fffffffffffffff) &&
       (lVar6 = (long)((1.0 - *(double *)(param_1 + lVar4)) * (double)lVar6),
       lVar6 != 0x7fffffffffffffff)) {
      uVar5 = 0x8000000000000000;
      if (lVar6 != -0x8000000000000000 && lVar10 != -0x8000000000000000) {
        uVar5 = lVar6 + lVar10;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x850);
  *(ulong *)(param_1 + 0x860) = uVar5;
  if (lVar6 != 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x830) + (*(ulong *)(param_1 + 0x848) >> 8) * 8)
                     + (*(ulong *)(param_1 + 0x848) & 0xff) * 0x10);
  }
  if (lVar9 <= lVar6) {
    lVar6 = lVar9;
  }
  lVar4 = 0x7fffffffffffffff;
  if ((lVar8 != 0x7fffffffffffffff) && (lVar6 != -0x8000000000000000)) {
    lVar4 = -0x8000000000000000;
    if (lVar6 != 0x7fffffffffffffff && lVar8 != -0x8000000000000000) {
      lVar4 = lVar8 - lVar6;
    }
  }
  if (*(long *)(param_1 + 0x610) < lVar4) {
    if (*(long *)(param_1 + 0x858) + 0x8000000000000001U < 2) {
      lVar6 = *param_2;
      goto LAB_00904f7c;
    }
  }
  else {
    lVar6 = -0x8000000000000000;
LAB_00904f7c:
    *(long *)(param_1 + 0x858) = lVar6;
  }
  lVar4 = (long)((int)((ulong)((long)plStack_58 - (long)local_60) >> 4) * -0x49249249);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar3 / lVar4;
  }
  FUN_00905070(param_1,lVar6);
  lVar3 = *param_2;
  if ((lVar3 != 0x7fffffffffffffff) &&
     (lVar6 = *(long *)(param_1 + 0x810), lVar6 != -0x8000000000000000)) {
    lVar4 = -0x8000000000000000;
    if (lVar6 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
      lVar4 = lVar3 - lVar6;
    }
    if (lVar4 < *(long *)(param_1 + 0x580)) goto LAB_00905000;
  }
  FUN_0090520c(param_1 + 0x820,*(undefined8 *)(param_1 + 0x818));
  lVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x818) = 0x7fffffffffffffff;
  *(long *)(param_1 + 0x810) = lVar3;
  plVar11 = local_60;
LAB_00905000:
  plVar1 = plVar11;
  plVar7 = plStack_58;
  if (plVar11 != (long *)0x0) {
    while (plVar11 != plVar7) {
      plVar7 = plVar7 + -0xe;
      if (plVar7 == (long *)0x0) {
LAB_0090505c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0086dc48(plVar7);
      plVar1 = local_60;
    }
    plStack_58 = plVar11;
    operator_delete(plVar1);
  }
  return;
}


// ===== 00905070  FUN_00905070 =====

void FUN_00905070(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar2 = *(long *)(param_1 + 0x850);
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x830) + (*(ulong *)(param_1 + 0x848) >> 8) * 8)
                     + (*(ulong *)(param_1 + 0x848) & 0xff) * 0x10);
  }
  lVar7 = 0x7fffffffffffffff;
  if (*(long *)(param_1 + 0x818) <= lVar2) {
    lVar2 = *(long *)(param_1 + 0x818);
  }
  if ((param_2 == 0x7fffffffffffffff) || (lVar2 == -0x8000000000000000)) {
    lVar3 = *(long *)(param_1 + 0x870);
LAB_009050f4:
    lVar5 = (long)(*(double *)(param_1 + 0x468) * (double)lVar7);
    dVar10 = *(double *)(param_1 + 0x878);
    lVar3 = (long)((1.0 - *(double *)(param_1 + 0x468)) * (double)lVar3);
    dVar9 = *(double *)(param_1 + 0x4b0);
    lVar2 = -0x8000000000000000;
    if (lVar3 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
      lVar2 = lVar3 + lVar5;
    }
    lVar4 = *(long *)(param_1 + 0x4f8);
    lVar1 = 0x7fffffffffffffff;
    if (lVar5 != 0x7fffffffffffffff && lVar3 != 0x7fffffffffffffff) {
      lVar1 = lVar2;
    }
    *(long *)(param_1 + 0x870) = lVar1;
    if (lVar7 != 0x7fffffffffffffff) goto LAB_00905158;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x870);
    lVar7 = -0x8000000000000000;
    if (lVar2 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
      lVar7 = param_2 - lVar2;
    }
    if (lVar3 <= lVar7) goto LAB_009050f4;
    dVar9 = *(double *)(param_1 + 0x4b0);
    dVar10 = *(double *)(param_1 + 0x878);
    lVar4 = *(long *)(param_1 + 0x4f8);
    *(long *)(param_1 + 0x870) = lVar7;
LAB_00905158:
    lVar2 = lVar4 + 3;
    if (-1 < lVar4) {
      lVar2 = lVar4;
    }
    if ((lVar7 == -0x8000000000000000) ||
       (lVar7 = lVar7 - (lVar2 >> 2), lVar7 == -0x8000000000000000)) {
      dVar8 = -INFINITY;
      goto LAB_00905198;
    }
    if (lVar7 != 0x7fffffffffffffff) {
      dVar8 = (double)lVar7;
      goto LAB_00905198;
    }
  }
  dVar8 = INFINITY;
LAB_00905198:
  if (lVar4 == -0x8000000000000000) {
    dVar6 = -INFINITY;
  }
  else if (lVar4 == 0x7fffffffffffffff) {
    dVar6 = INFINITY;
  }
  else {
    dVar6 = (double)lVar4;
  }
  dVar8 = dVar8 / dVar6;
  dVar6 = DAT_001f5108;
  if (dVar8 == DAT_001f5108 || dVar8 < DAT_001f5108 != (NAN(dVar8) || NAN(DAT_001f5108))) {
    dVar6 = dVar8;
  }
  dVar11 = 0.0;
  if (0.0 <= dVar8) {
    dVar11 = dVar6;
  }
  *(double *)(param_1 + 0x878) = (1.0 - dVar9) * dVar10 + dVar9 * dVar11;
  return;
}


// ===== 0090520c  FUN_0090520c =====

void FUN_0090520c(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  lVar5 = *(long *)(param_1 + 0xc);
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (lVar5 != 0) {
    uVar8 = *(ulong *)(param_1 + 10);
    lVar1 = puVar4[uVar8 >> 8] + (uVar8 & 0xff) * 0x10;
    if (*(int *)(lVar1 + 8) == param_1[1]) {
      if (lVar1 == 0) {
LAB_00905434:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + -1;
      *(ulong *)(param_1 + 10) = uVar8;
      *(long *)(param_1 + 0xc) = lVar5;
      if (0x1ff < uVar8) {
        operator_delete((void *)*puVar4);
        lVar5 = *(long *)(param_1 + 0xc);
        puVar4 = (undefined8 *)(*(long *)(param_1 + 4) + 8);
        uVar8 = *(long *)(param_1 + 10) - 0x100;
        *(undefined8 **)(param_1 + 4) = puVar4;
        *(ulong *)(param_1 + 10) = uVar8;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
                  );
      }
    }
    plVar9 = puVar4 + (uVar8 >> 8);
    plVar10 = (long *)*plVar9;
    if (plVar10[(uVar8 & 0xff) * 2] < param_2) {
      while (uVar8 = (lVar5 + *(long *)(param_1 + 10)) - 1, puVar4 = *(undefined8 **)(param_1 + 4),
            param_2 <= *(long *)(puVar4[uVar8 >> 8] + (uVar8 & 0xff) * 0x10)) {
        FUN_009056b8(param_1 + 2);
        lVar5 = *(long *)(param_1 + 0xc);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
                    );
        }
      }
    }
    else {
      if (puVar4 != *(undefined8 **)(param_1 + 6)) {
        plVar11 = plVar10 + (uVar8 & 0xff) * 2;
        while (plVar11 != (long *)(puVar4[uVar8 + lVar5 >> 8] + (uVar8 + lVar5 & 0xff) * 0x10)) {
          if (plVar11 == (long *)0x0) goto LAB_00905434;
          plVar11 = plVar11 + 2;
          if ((long)plVar11 - (long)plVar10 == 0x1000) {
            plVar9 = plVar9 + 1;
            plVar10 = (long *)*plVar9;
            plVar11 = plVar10;
          }
        }
      }
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      lVar5 = (long)*(undefined8 **)(param_1 + 6) - (long)puVar4;
      while (uVar8 = lVar5 >> 3, 2 < uVar8) {
        operator_delete((void *)*puVar4);
        puVar4 = (undefined8 *)(*(long *)(param_1 + 4) + 8);
        *(undefined8 **)(param_1 + 4) = puVar4;
        lVar5 = *(long *)(param_1 + 6) - (long)puVar4;
      }
      if (uVar8 == 1) {
        uVar6 = 0x80;
      }
      else {
        if (uVar8 != 2) goto LAB_009053a0;
        uVar6 = 0x100;
      }
      *(undefined8 *)(param_1 + 10) = uVar6;
    }
  }
LAB_009053a0:
  puVar7 = *(undefined8 **)(param_1 + 6);
  iVar2 = param_1[1];
  lVar5 = 0;
  if (puVar7 != puVar4) {
    lVar5 = ((long)puVar7 - (long)puVar4) * 0x20 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0xc) + *(long *)(param_1 + 10)) {
    FUN_00905778(param_1 + 2);
    puVar4 = *(undefined8 **)(param_1 + 4);
    puVar7 = *(undefined8 **)(param_1 + 6);
  }
  if ((puVar4 != puVar7) &&
     (plVar9 = (long *)(puVar4[(ulong)(*(long *)(param_1 + 0xc) + *(long *)(param_1 + 10)) >> 8] +
                       (*(long *)(param_1 + 0xc) + *(long *)(param_1 + 10) & 0xffU) * 0x10),
     plVar9 != (long *)0x0)) {
    *plVar9 = param_2;
    *(int *)(plVar9 + 1) = iVar2;
    iVar2 = *param_1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (param_1[1] + 1) / iVar2;
    }
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 1;
    param_1[1] = (param_1[1] + 1) - iVar3 * iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00905470  FUN_00905470 =====

void FUN_00905470(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != *(undefined8 **)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    uVar1 = *(long *)(param_1 + 0x30) + uVar7;
    plVar5 = puVar2 + (uVar7 >> 8);
    lVar6 = *plVar5;
    lVar4 = lVar6 + (uVar7 & 0xff) * 0x10;
    while (lVar4 != puVar2[uVar1 >> 8] + (uVar1 & 0xff) * 0x10) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar4 = lVar4 + 0x10;
      if (lVar4 - lVar6 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar6 = *plVar5;
        lVar4 = lVar6;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar4 = (long)*(undefined8 **)(param_1 + 0x18) - (long)puVar2;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    lVar4 = *(long *)(param_1 + 0x18) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x80;
  }
  else {
    if (uVar1 != 2) goto LAB_00905544;
    uVar3 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
LAB_00905544:
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 0090556c  FUN_0090556c =====

long FUN_0090556c(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = *(long *)(param_2 + 0x860);
  lVar1 = (long)(&uleb128_003d0900 + lVar2 * *(long *)(param_2 + 0x808)) / 8000000;
  if (lVar1 <= param_3) {
    lVar4 = *(long *)(param_2 + 0x870);
    lVar3 = *(long *)(param_2 + 0x5c8) / 2;
    if (lVar4 == 0x7fffffffffffffff) {
      dVar5 = INFINITY;
    }
    else if ((lVar4 == -0x8000000000000000) || (lVar4 = lVar4 - lVar3, lVar4 == -0x8000000000000000)
            ) {
      dVar5 = -INFINITY;
    }
    else {
      dVar5 = INFINITY;
      if (lVar4 != 0x7fffffffffffffff) {
        dVar5 = (double)lVar4;
      }
    }
    lVar4 = *(long *)(param_2 + 0x308);
    dVar5 = dVar5 / (double)lVar3;
    param_1 = 1.0 - param_1;
    if (param_1 <= 0.5) {
      param_1 = 0.5;
    }
    dVar6 = 1.0;
    if (dVar5 == 1.0 || dVar5 < 1.0 != NAN(dVar5)) {
      dVar6 = dVar5;
    }
    dVar7 = 0.0;
    if (0.0 <= dVar5) {
      dVar7 = dVar6 * 0.5;
    }
    dVar5 = INFINITY;
    if (lVar2 != 0x7fffffffffffffff) {
      dVar5 = (double)lVar2;
    }
    dVar6 = -INFINITY;
    if (lVar2 != -0x8000000000000000) {
      dVar6 = dVar5;
    }
    dVar5 = INFINITY;
    if (lVar4 != 0x7fffffffffffffff) {
      dVar5 = (double)lVar4;
    }
    dVar8 = -INFINITY;
    if (lVar4 != -0x8000000000000000) {
      dVar8 = dVar5;
    }
    dVar6 = dVar6 / dVar8;
    if (dVar6 <= 1.0) {
      dVar6 = 1.0;
    }
    lVar2 = (long)((1.0 - param_1 * (dVar7 / dVar6)) * (double)param_3);
    if (lVar1 <= lVar2) {
      lVar1 = lVar2;
    }
  }
  return lVar1;
}


// ===== 009056b8  FUN_009056b8 =====

void FUN_009056b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2199: libc++ Hardening assertion !empty() failed: deque::pop_back called on an empty deque\n"
              );
  }
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = lVar3 + -1 + *(long *)(param_1 + 0x20);
  if (*(long *)(lVar5 + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    lVar2 = 0;
    if (lVar4 != lVar5) {
      lVar2 = (lVar4 - lVar5) * 0x20 + -1;
    }
    if (0x1ff < (lVar2 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar4 + -8));
      lVar3 = *(long *)(param_1 + 0x10) + -8;
      if (lVar3 == 0) goto LAB_00905750;
      *(long *)(param_1 + 0x10) = lVar3;
    }
    return;
  }
LAB_00905750:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00905778  FUN_00905778 =====

void FUN_00905778(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x100) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0x1000);
      FUN_00905be8(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0090610c(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0x1000);
      FUN_00905be8(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00905e70(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00905960(param_1,&local_50);
  return;
}


// ===== 00905960  FUN_00905960 =====

void FUN_00905960(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00905bd0;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00905bd0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00905be8  FUN_00905be8 =====

void FUN_00905be8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00905e58;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00905e58:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00905e70  FUN_00905e70 =====

void FUN_00905e70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_009060f4;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_009060f4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0090610c  FUN_0090610c =====

void FUN_0090610c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00906390;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00906390:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009063a8  FUN_009063a8 =====

void FUN_009063a8(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 *local_150;
  undefined8 *puStack_148;
  undefined8 *local_140;
  undefined8 *puStack_138;
  undefined8 *local_130;
  undefined8 *puStack_128;
  undefined8 *local_120;
  undefined8 *puStack_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  
  FUN_00661054(param_1,"MinRefWindow",0xc);
  param_1[8] = 3000;
  *param_1 = &PTR_FUN_00d280c0;
  FUN_00661054(param_1 + 9,"L4sAvgGUp",9);
  puVar1 = PTR_DAT_00d52020 + 0x10;
  param_1[9] = puVar1;
  param_1[0x11] = 0x3fc0000000000000;
  FUN_00661054(param_1 + 0x12,"L4sAvgGDown",0xb);
  param_1[0x12] = puVar1;
  param_1[0x1a] = 0x3f80000000000000;
  FUN_00661054(param_1 + 0x1b,"SmoothedRttAvgGUp",0x11);
  param_1[0x1b] = puVar1;
  param_1[0x23] = 0x3fc0000000000000;
  FUN_00661054(param_1 + 0x24,"SmoothedRttAvgGDown",0x13);
  param_1[0x24] = puVar1;
  param_1[0x2c] = 0x3fc0000000000000;
  FUN_00661054(param_1 + 0x2d,"MaxSegmentSize",0xe);
  param_1[0x2d] = &PTR_FUN_00d280c0;
  param_1[0x35] = 1000;
  FUN_00661054(param_1 + 0x36,"BytesInFlightHeadRoom",0x15);
  param_1[0x36] = puVar1;
  param_1[0x3e] = 0x3ff199999999999a;
  FUN_00661054(param_1 + 0x3f,"BetaLoss",8);
  param_1[0x3f] = puVar1;
  param_1[0x47] = 0x3fe6666666666666;
  FUN_00661054(param_1 + 0x48,"PostCongestionDelayRtts",0x17);
  puVar2 = PTR_DAT_00d52028;
  *(undefined4 *)((long)param_1 + 0x27c) = 100;
  puVar2 = puVar2 + 0x10;
  param_1[0x48] = puVar2;
  FUN_00661054(param_1 + 0x50,"MultiplicativeIncreaseFactor",0x1c);
  param_1[0x50] = puVar1;
  param_1[0x58] = 0x3f947ae147ae147b;
  FUN_00661054(param_1 + 0x59,"VirtualRtt",10);
  param_1[0x59] = &PTR_FUN_00d267f8;
  param_1[0x61] = 25000;
  FUN_00661054(param_1 + 0x62,"BackoffScaleFactorCloseToRefWindowI",0x23);
  param_1[0x62] = puVar1;
  param_1[0x6a] = 0x4000000000000000;
  FUN_00661054(param_1 + 0x6b,"NumberOfRttsBetweenResetRefWindowIOnCongestion",0x2e);
  param_1[0x6b] = puVar2;
  *(undefined4 *)((long)param_1 + 0x394) = 100;
  FUN_00661054(param_1 + 0x73,"RefWinMin",9);
  param_1[0x73] = puVar1;
  param_1[0x7b] = 0x3ff8000000000000;
  FUN_00661054(param_1 + 0x7c,"RefWinMax",9);
  param_1[0x7c] = puVar1;
  param_1[0x84] = 0x4008000000000000;
  FUN_00661054(param_1 + 0x85,"QDelayAvgG",10);
  param_1[0x85] = puVar1;
  param_1[0x8d] = 0x3fd0000000000000;
  FUN_00661054(param_1 + 0x8e,"QDelayDevAvgG",0xd);
  param_1[0x8e] = puVar1;
  param_1[0x96] = 0x3f90000000000000;
  FUN_00661054(param_1 + 0x97,"QDelayDevNorm",0xd);
  param_1[0x97] = &PTR_FUN_00d267f8;
  param_1[0x9f] = 25000;
  FUN_00661054(param_1 + 0xa0,"BaseDelayWindowLength",0x15);
  param_1[0xa0] = puVar2;
  *(undefined4 *)((long)param_1 + 0x53c) = 10;
  FUN_00661054(param_1 + 0xa8,"BaseDelayHistoryUpdateInterval",0x1e);
  param_1[0xa8] = &PTR_FUN_00d267f8;
  param_1[0xb0] = 60000000;
  FUN_00661054(param_1 + 0xb1,"QDelayTarget",0xc);
  param_1[0xb1] = &PTR_FUN_00d267f8;
  param_1[0xb9] = 60000;
  FUN_00661054(param_1 + 0xba,"QDelayDrainThreshold",0x14);
  param_1[0xba] = &PTR_FUN_00d267f8;
  param_1[0xc2] = 5000;
  FUN_00661054(param_1 + 0xc3,"QDelayDrainPeriod",0x11);
  param_1[0xc3] = &PTR_FUN_00d267f8;
  param_1[0xcb] = 20000000;
  FUN_00661054(param_1 + 0xcc,"QDelayDrainRtts",0xf);
  param_1[0xcc] = puVar2;
  *(undefined4 *)((long)param_1 + 0x69c) = 5;
  FUN_00661054(param_1 + 0xd4,"PeriodicPadding",0xf);
  param_1[0xd4] = &PTR_FUN_00d267f8;
  param_1[0xdc] = 6000000;
  FUN_00661054(param_1 + 0xdd,"PaddingDuration",0xf);
  param_1[0xdd] = &PTR_FUN_00d267f8;
  param_1[0xe5] = 3000000;
  FUN_00661054(param_1 + 0xe6,"AllowPaddingAfterLastCongestionTimeout",0x26);
  param_1[0xe6] = &PTR_FUN_00d267f8;
  param_1[0xee] = 1000000;
  FUN_00661054(param_1 + 0xef,"PacingFactor",0xc);
  param_1[0xef] = puVar1;
  param_1[0xf7] = 0x3ff199999999999a;
  FUN_00661054(param_1 + 0xf8,"FeedbackHoldTimeAvgG",0x14);
  local_140 = param_1 + 0x12;
  param_1[0x100] = 0x3fc0000000000000;
  puStack_138 = param_1 + 0x1b;
  local_130 = param_1 + 0x24;
  puStack_128 = param_1 + 0x2d;
  param_1[0xf8] = puVar1;
  local_120 = param_1 + 0x36;
  puStack_118 = param_1 + 0x3f;
  local_110 = param_1 + 0x48;
  puStack_108 = param_1 + 0x50;
  local_100 = param_1 + 0x59;
  puStack_f8 = param_1 + 0x62;
  local_f0 = param_1 + 0x6b;
  puStack_e8 = param_1 + 0x73;
  local_e0 = param_1 + 0x7c;
  puStack_d8 = param_1 + 0x85;
  local_d0 = param_1 + 0x8e;
  puStack_c8 = param_1 + 0x97;
  local_c0 = param_1 + 0xa0;
  puStack_b8 = param_1 + 0xa8;
  local_b0 = param_1 + 0xb1;
  local_150 = param_1;
  puStack_148 = param_1 + 9;
  puStack_a8 = param_1 + 0xba;
  local_a0 = param_1 + 0xc3;
  puStack_98 = param_1 + 0xcc;
  local_90 = param_1 + 0xd4;
  puStack_88 = param_1 + 0xdd;
  local_80 = param_1 + 0xe6;
  puStack_78 = param_1 + 0xef;
  local_70 = param_1 + 0xf8;
  (**(code **)(*param_2 + 0x10))(&local_168,param_2,"WebRTC-Bwe-ScreamV2",0x13);
  pppuVar3 = (undefined8 ***)local_168;
  if (-1 < (char)bStack_151) {
    uStack_160 = (ulong)bStack_151;
    pppuVar3 = &local_168;
  }
  FUN_00661cc0(&local_150,0x1d,pppuVar3,uStack_160);
  if ((char)bStack_151 < '\0') {
    operator_delete(local_168);
  }
  return;
}


// ===== 009068f8  FUN_009068f8 =====

void FUN_009068f8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                 ulong param_5,ulong param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  iVar1 = (int)(param_4 / 1000);
  iVar2 = (int)(param_5 / 1000);
  if (499 < param_4 % 1000) {
    iVar1 = iVar1 + 1;
  }
  if ((param_4 & 0x8000000000000000) != 0) {
    iVar1 = -(int)(-param_4 / 1000) - (uint)(500 < -param_4 % 1000);
  }
  *param_1 = &PTR_FUN_00d3d358;
  param_1[1] = 0;
  if (499 < param_5 % 1000) {
    iVar2 = iVar2 + 1;
  }
  if ((param_5 & 0x8000000000000000) != 0) {
    iVar2 = -(int)(-param_5 / 1000) - (uint)(500 < -param_5 % 1000);
  }
  *(int *)(param_1 + 3) = iVar1;
  *(int *)((long)param_1 + 0x1c) = iVar2;
  if (param_6 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
    if (-1 < (long)param_6) {
      iVar1 = (int)(param_6 / 1000);
      if (499 < param_6 % 1000) {
        iVar1 = iVar1 + 1;
      }
      *(int *)(param_1 + 4) = iVar1;
      *(undefined4 *)((long)param_1 + 0x24) = param_7;
      return;
    }
    *(uint *)(param_1 + 4) = -(int)(-param_6 / 1000) - (uint)(500 < -param_6 % 1000);
    *(undefined4 *)((long)param_1 + 0x24) = param_7;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_7;
  return;
}


// ===== 00906a20  FUN_00906a20 =====

void FUN_00906a20(void)

{
  return;
}


// ===== 00906a28  FUN_00906a28 =====

void FUN_00906a28(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00906a34  FUN_00906a34 =====

undefined8 FUN_00906a34(void)

{
  return 9;
}


// ===== 00906a40  FUN_00906a40 =====

undefined8 FUN_00906a40(void)

{
  return 0;
}


// ===== 00906a4c  FUN_00906a4c =====

void FUN_00906a4c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (0xfffffffffffffffd < *param_2 + 0x7fffffffffffffffU) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/congestion_controller/rtp/control_handler.cc",0x1c,
                 "new_target_rate.at_time.IsFinite()",&DAT_001f5fa0);
  }
  if ((char)param_1[8] == '\x01') {
    lVar3 = param_2[4];
    lVar2 = param_2[7];
    lVar1 = param_2[6];
    lVar5 = param_2[1];
    lVar4 = *param_2;
    lVar7 = param_2[3];
    lVar6 = param_2[2];
    param_1[5] = param_2[5];
    param_1[4] = lVar3;
    param_1[7] = lVar2;
    param_1[6] = lVar1;
    param_1[1] = lVar5;
    *param_1 = lVar4;
    param_1[3] = lVar7;
    param_1[2] = lVar6;
  }
  else {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar3 = param_2[4];
    lVar2 = param_2[7];
    lVar1 = param_2[6];
    lVar5 = param_2[1];
    lVar4 = *param_2;
    lVar7 = param_2[3];
    lVar6 = param_2[2];
    param_1[5] = param_2[5];
    param_1[4] = lVar3;
    param_1[7] = lVar2;
    param_1[6] = lVar1;
    param_1[1] = lVar5;
    *param_1 = lVar4;
    param_1[3] = lVar7;
    param_1[2] = lVar6;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}


// ===== 00906ae8  FUN_00906ae8 =====

void FUN_00906ae8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x90) = param_2;
  return;
}


// ===== 00906af4  FUN_00906af4 =====

void FUN_00906af4(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 / 1000;
  if (499 < param_2 % 1000) {
    uVar1 = uVar1 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  *(ulong *)(param_1 + 0x98) = uVar1;
  return;
}


// ===== 00906b58  FUN_00906b58 =====

void FUN_00906b58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  void *local_88 [2];
  char cStack_71;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    lVar14 = param_2[6];
    if (*(char *)(param_2 + 0x12) == '\x01') {
      bVar12 = 2000 < (long)param_2[0x13];
      lVar13 = 0;
      if ((long)param_2[0x13] < 0x7d1) {
        lVar13 = lVar14;
      }
    }
    else {
      bVar12 = true;
      lVar13 = 0;
    }
    uVar1 = *param_2;
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    lVar4 = param_2[3];
    uVar11 = param_2[4];
    fVar15 = *(float *)(param_2 + 5);
    uVar5 = *(undefined1 *)((long)param_2 + 0x2c);
    uVar6 = *(undefined1 *)((long)param_2 + 0x2d);
    uVar7 = *(undefined1 *)((long)param_2 + 0x2e);
    uVar8 = *(undefined1 *)((long)param_2 + 0x2f);
    uVar16 = param_2[7];
    if (((*(char *)(param_2 + 0x11) != '\x01') || (param_2[0xf] != lVar13)) ||
       ((lVar13 != 0 && ((*(float *)(param_2 + 0xe) != fVar15 || (param_2[0xc] != lVar4)))))) {
      if ((bool)*(char *)((long)param_2 + 0x91) == bVar12) {
        if (*(char *)(param_2 + 0x11) == '\0') goto LAB_00906c30;
LAB_00906ce8:
        param_2[9] = uVar1;
        param_2[10] = uVar3;
        param_2[0xb] = uVar2;
        param_2[0xc] = lVar4;
        param_2[0xd] = uVar11;
        *(float *)(param_2 + 0xe) = fVar15;
        *(undefined1 *)((long)param_2 + 0x74) = uVar5;
        *(undefined1 *)((long)param_2 + 0x75) = uVar6;
        *(undefined1 *)((long)param_2 + 0x76) = uVar7;
        *(undefined1 *)((long)param_2 + 0x77) = uVar8;
        param_2[0xf] = lVar13;
        param_2[0x10] = uVar16;
      }
      else {
        uVar9 = FUN_00417e08();
        if ((uVar9 & 1) == 0) {
          FUN_00665ccc(local_88,lVar14);
          FUN_00623bb0(&DAT_001f4eff,"../../modules/congestion_controller/rtp/control_handler.cc",
                       0x209,"Bitrate estimate state changed, BWE: ",local_88,&DAT_001ea377);
          if (cStack_71 < '\0') {
            operator_delete(local_88[0]);
          }
        }
        *(bool *)((long)param_2 + 0x91) = bVar12;
        if ((*(byte *)(param_2 + 0x11) & 1) != 0) goto LAB_00906ce8;
LAB_00906c30:
        if (param_2 == (undefined8 *)0xffffffffffffffb8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        param_2[9] = uVar1;
        param_2[10] = uVar3;
        param_2[0xb] = uVar2;
        param_2[0xc] = lVar4;
        param_2[0xd] = uVar11;
        *(float *)(param_2 + 0xe) = fVar15;
        *(undefined1 *)((long)param_2 + 0x74) = uVar5;
        *(undefined1 *)((long)param_2 + 0x75) = uVar6;
        *(undefined1 *)((long)param_2 + 0x76) = uVar7;
        *(undefined1 *)((long)param_2 + 0x77) = uVar8;
        param_2[0xf] = lVar13;
        param_2[0x10] = uVar16;
        *(undefined1 *)(param_2 + 0x11) = 1;
      }
      *param_1 = uVar1;
      param_1[1] = uVar3;
      uVar10 = 1;
      param_1[2] = uVar2;
      param_1[3] = lVar4;
      param_1[4] = uVar11;
      *(float *)(param_1 + 5) = fVar15;
      *(undefined1 *)((long)param_1 + 0x2c) = uVar5;
      *(undefined1 *)((long)param_1 + 0x2d) = uVar6;
      *(undefined1 *)((long)param_1 + 0x2e) = uVar7;
      *(undefined1 *)((long)param_1 + 0x2f) = uVar8;
      param_1[6] = lVar13;
      param_1[7] = uVar16;
      goto LAB_00906d3c;
    }
  }
  uVar10 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00906d3c:
  *(undefined1 *)(param_1 + 8) = uVar10;
  return;
}


// ===== 00906d7c  FUN_00906d7c =====

void FUN_00906d7c(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *extraout_x1;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (1 < *(long *)(param_2 + 8) + 0x8000000000000001U) {
    FUN_00909fc0(param_1,param_2 + 0x50);
    plVar8 = (long *)*extraout_x1;
    if ((plVar8 != (long *)0x0) && (plVar8 != param_1 + 1)) {
      lVar3 = plVar8[9];
      lVar6 = 0x7fffffffffffffff;
      if ((lVar3 != 0x7fffffffffffffff) &&
         (lVar7 = *(long *)(param_2 + 0x10), lVar7 != -0x8000000000000000)) {
        if (lVar3 == -0x8000000000000000) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = -0x8000000000000000;
          if (lVar7 != 0x7fffffffffffffff) {
            plVar8[9] = lVar3 - lVar7;
            if (lVar3 - lVar7 != 0) {
              return;
            }
            plVar4 = plVar8;
            plVar1 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              do {
                plVar5 = (long *)plVar4[2];
                bVar2 = plVar4 != (long *)*plVar5;
                plVar4 = plVar5;
              } while (bVar2);
            }
            else {
              do {
                plVar5 = plVar1;
                plVar1 = (long *)*plVar5;
              } while ((long *)*plVar5 != (long *)0x0);
            }
            if ((long *)*param_1 == plVar8) {
              *param_1 = (long)plVar5;
            }
            param_1[2] = param_1[2] + -1;
            FUN_005d5d48(param_1[1],plVar8);
            if (plVar8 != (long *)0xffffffffffffffe0) {
              operator_delete(plVar8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
      }
      plVar8[9] = lVar6;
    }
  }
  return;
}


// ===== 00906eb0  FUN_00906eb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 0;
  uVar4 = _UNK_001f4178;
  uVar3 = _DAT_001f4170;
  uVar2 = _UNK_001f3868;
  uVar1 = _DAT_001f3860;
  param_1[7] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = param_1 + 7;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0xe] = 0x8000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x16] = 0;
  param_1[0x14] = param_1 + 0x15;
  return;
}


// ===== 00906f34  FUN_00906f34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906f34(long param_1,long param_2,undefined8 *param_3,long param_4,long param_5)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 local_c8;
  undefined2 local_c4;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uStack_b8 = _UNK_001f3458;
  local_c0 = _DAT_001f3450;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_0086e350(&local_a0);
  uVar6 = (ulong)local_48 >> 0x20;
  uVar13 = (uint)*(ushort *)(param_2 + 0x98);
  if ((*(uint *)(param_2 + 0xa0) & 1) == 0) {
    uVar13 = 0;
  }
  local_80 = (undefined1 *)(ulong)uVar13;
  puStack_78 = (undefined1 *)0x0;
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    uVar14 = (uint)*(ushort *)(param_1 + 0x20);
    uVar3 = uVar13 - uVar14;
    iVar4 = (int)(short)uVar3;
    bVar8 = uVar14 < uVar13;
    if (uVar13 - uVar14 != 0x8000) {
      bVar8 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
    }
    uVar1 = (ulong)uVar3 & 0xffff;
    if (!bVar8) {
      uVar1 = (ulong)uVar3 & 0xffff | 0xffffffffffff0000;
    }
    local_80 = (undefined1 *)(uVar1 + *(long *)(param_1 + 0x18));
  }
  *(undefined1 **)(param_1 + 0x18) = local_80;
  puStack_68 = *(undefined1 **)(param_1 + 0x50);
  local_70 = *(undefined1 **)(param_1 + 0x48);
  *(short *)(param_1 + 0x20) = (short)uVar13;
  puStack_58 = *(undefined1 **)(param_1 + 0x60);
  local_60 = *(undefined1 **)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x22) = 1;
  puStack_98 = (undefined1 *)param_3[1];
  local_a0 = (undefined1 *)*param_3;
  local_b0 = *(long *)(param_2 + 0x10) + param_4 +
             *(long *)(param_2 + 0x18) + (ulong)*(byte *)(param_2 + 2);
  bVar5 = (byte)*(undefined4 *)(param_2 + 0x80);
  local_88 = (undefined1 *)CONCAT71(local_88._1_7_,bVar5 & *(long *)(param_2 + 0x78) == 0);
  local_90 = (undefined1 *)param_3[2];
  local_50 = (undefined1 *)CONCAT44(*(uint *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x68));
  local_48._0_4_ =
       CONCAT13(*(undefined1 *)(param_2 + 0xbc),
                CONCAT12(bVar5 & *(long *)(param_2 + 0x78) == 2,*(ushort *)(param_2 + 4)));
  local_48 = (undefined1 *)(CONCAT44((int)uVar6,(undefined4)local_48) & 0xffffff00ffffffff);
  uVar13 = *(uint *)(param_2 + 0xc);
  uVar2 = *(ushort *)(param_2 + 4);
  local_c0 = param_5;
  if (*(long *)(param_1 + 0xb0) != 0) {
    do {
      lVar9 = *(long *)(param_1 + 0xa0);
      lVar15 = *(long *)(lVar9 + 0x28);
      if (((param_5 != 0x7fffffffffffffff) && (lVar15 != -0x8000000000000000)) &&
         ((param_5 == -0x8000000000000000 ||
          ((lVar15 == 0x7fffffffffffffff || (param_5 - lVar15 < 0x3938701)))))) break;
      if (*(long *)(param_1 + 0x28) < *(long *)(lVar9 + 0x68)) {
        FUN_00906d7c(param_1 + 0x30);
        lVar9 = *(long *)(param_1 + 0xa0);
      }
      local_c8 = *(undefined4 *)(lVar9 + 0x9c);
      local_c4 = *(undefined2 *)(lVar9 + 0xa0);
      FUN_009072bc(param_1 + 0x88,&local_c8);
      plVar16 = *(long **)(param_1 + 0xa0);
      plVar10 = plVar16;
      plVar7 = (long *)plVar16[1];
      if ((long *)plVar16[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar10[2];
          bVar8 = plVar10 != (long *)*plVar11;
          plVar10 = plVar11;
        } while (bVar8);
      }
      else {
        do {
          plVar11 = plVar7;
          plVar7 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      *(long **)(param_1 + 0xa0) = plVar11;
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0xa8),plVar16);
      if (plVar16 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar16);
    } while (*(long *)(param_1 + 0xb0) != 0);
    uVar13 = local_50._4_4_;
    uVar2 = (ushort)local_48;
  }
  puVar17 = (undefined8 *)(param_1 + 0x90);
  puVar12 = (undefined8 *)*puVar17;
  do {
    puVar18 = puVar17;
    if (puVar12 == (undefined8 *)0x0) {
LAB_00907200:
      puVar12 = (undefined8 *)operator_new(0x30);
      if ((puVar12 == (undefined8 *)0x0) || (puVar12 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = puVar17;
      puVar12[4] = (ulong)CONCAT24(uVar2,uVar13);
      puVar12[5] = local_80;
      *puVar18 = puVar12;
      if (**(long **)(param_1 + 0x88) != 0) {
        *(long *)(param_1 + 0x88) = **(long **)(param_1 + 0x88);
        puVar12 = (undefined8 *)*puVar18;
      }
      FUN_005d5b94(*(undefined8 *)(param_1 + 0x90),puVar12);
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
LAB_0090725c:
      FUN_0090a1f0(0,param_1 + 0xa0,param_1 + 0xa0,&local_80,&local_c0);
      return;
    }
    while( true ) {
      puVar17 = puVar12;
      uVar3 = *(uint *)(puVar17 + 4);
      bVar8 = uVar2 < *(ushort *)((long)puVar17 + 0x24);
      if (uVar13 != uVar3) {
        bVar8 = uVar13 < uVar3;
      }
      if (bVar8) break;
      bVar8 = *(ushort *)((long)puVar17 + 0x24) < uVar2;
      if (uVar13 != uVar3) {
        bVar8 = uVar3 < uVar13;
      }
      if (!bVar8) goto LAB_0090725c;
      puVar12 = (undefined8 *)puVar17[1];
      if ((undefined8 *)puVar17[1] == (undefined8 *)0x0) {
        puVar18 = puVar17 + 1;
        goto LAB_00907200;
      }
    }
    puVar12 = (undefined8 *)*puVar17;
  } while( true );
}


// ===== 009072bc  FUN_009072bc =====

long * FUN_009072bc(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar1 = *param_2;
    plVar8 = plVar5;
    do {
      while( true ) {
        uVar2 = *(uint *)(plVar8 + 4);
        bVar4 = (ushort)param_2[1] < *(ushort *)((long)plVar8 + 0x24);
        if (uVar1 != uVar2) {
          bVar4 = uVar1 < uVar2;
        }
        if (bVar4) break;
        bVar4 = *(ushort *)((long)plVar8 + 0x24) < (ushort)param_2[1];
        if (uVar1 != uVar2) {
          bVar4 = uVar2 < uVar1;
        }
        if (!bVar4) {
          if (plVar8 != param_1 + 1) {
            plVar6 = plVar8;
            plVar3 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              do {
                plVar7 = (long *)plVar6[2];
                bVar4 = plVar6 != (long *)*plVar7;
                plVar6 = plVar7;
              } while (bVar4);
            }
            else {
              do {
                plVar7 = plVar3;
                plVar3 = (long *)*plVar7;
              } while ((long *)*plVar7 != (long *)0x0);
            }
            if ((long *)*param_1 == plVar8) {
              *param_1 = plVar7;
            }
            param_1[2] = param_1[2] + -1;
            FUN_005d5d48(plVar5,plVar8);
            if (plVar8 != (long *)0xffffffffffffffe0) {
              operator_delete(plVar8);
              return (long *)1;
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          goto LAB_00907368;
        }
        plVar8 = (long *)plVar8[1];
        if (plVar8 == (long *)0x0) goto LAB_00907368;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
LAB_00907368:
    plVar5 = (long *)0x0;
  }
  return plVar5;
}


// ===== 009073e4  FUN_009073e4 =====

void FUN_009073e4(long *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined1 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  void *local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  undefined4 local_50;
  long local_48;
  
  uVar6 = *param_3;
  uVar1 = param_3[1];
  lVar15 = uVar1 * 1000;
  if (((param_3[2] & 1) == 0) && (uVar6 == 0xffffffffffffffff)) {
    if (*(char *)((long)param_3 + 0x11) == '\x01') {
      if ((lVar15 < param_2[1]) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0x61a,
                     "ignoring untracked data for out of order packet.");
      }
      lVar10 = *param_2;
      lVar12 = 0x7fffffffffffffff;
      if ((lVar10 != 0x7fffffffffffffff) && (uVar6 = param_3[4], uVar6 != 0x7fffffffffffffff)) {
        lVar12 = -0x8000000000000000;
        if (uVar6 != 0x8000000000000000 && lVar10 != -0x8000000000000000) {
          lVar12 = lVar10 + uVar6;
        }
      }
      lVar10 = param_2[2];
      *param_2 = lVar12;
      if (lVar10 == lVar15 || (long)(lVar10 + uVar1 * -1000) < 0 != SBORROW8(lVar10,lVar15)) {
        lVar10 = lVar15;
      }
      param_2[2] = lVar10;
    }
  }
  else {
    if ((*(byte *)((long)param_2 + 0x22) & 1) == 0) {
      uVar8 = uVar6 & 0xffff;
    }
    else {
      uVar2 = *(ushort *)(param_2 + 4);
      uVar3 = (uint)uVar6 - (uint)uVar2;
      iVar4 = (int)(short)uVar3;
      bVar5 = (uint)uVar2 < (uint)(ushort)uVar6;
      if (((uint)uVar6 & 0xffff) - (uint)uVar2 != 0x8000) {
        bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
      }
      uVar8 = (ulong)uVar3 & 0xffff;
      if (!bVar5) {
        uVar8 = (ulong)uVar3 & 0xffff | 0xffffffffffff0000;
      }
      uVar8 = uVar8 + param_2[3];
    }
    plVar13 = (long *)param_2[0x15];
    *(ushort *)(param_2 + 4) = (ushort)uVar6;
    param_2[3] = uVar8;
    *(undefined1 *)((long)param_2 + 0x22) = 1;
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      while (plVar13[4] <= (long)uVar8) {
        if (uVar8 == plVar13[4]) {
          if (plVar13 == param_2 + 0x15) goto LAB_00907640;
          plVar14 = plVar13 + 6;
          lVar11 = *plVar14;
          *plVar14 = lVar15;
          lVar10 = *param_2;
          lVar12 = param_2[1];
          if (lVar12 == lVar15 || (long)(lVar12 + uVar1 * -1000) < 0 != SBORROW8(lVar12,lVar15)) {
            lVar12 = lVar15;
          }
          param_2[1] = lVar12;
          if (lVar10 != 0) {
            if (lVar15 < param_2[2]) {
              uVar6 = FUN_004022fc();
              if ((uVar6 & 1) == 0) {
                lVar10 = param_2[2];
                lVar12 = lVar10;
                if (lVar10 != -0x8000000000000000) {
                  lVar12 = lVar10 + uVar1 * -1000;
                }
                lVar16 = 0x7fffffffffffffff;
                if (lVar15 != -0x8000000000000000 && lVar10 != 0x7fffffffffffffff) {
                  lVar16 = lVar12;
                }
                FUN_006224f8(&local_70,lVar16);
                FUN_00623bb0(&DAT_001f4eff,
                             "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc"
                             ,0x5a2,"appending acknowledged data for out of order packet. (Diff: ",
                             &local_70," ms.)");
                if (local_60 < 0) {
                  operator_delete(local_70);
                }
              }
              lVar10 = *param_2;
            }
            lVar12 = plVar13[8];
            lVar15 = 0x7fffffffffffffff;
            if ((lVar12 != 0x7fffffffffffffff) && (lVar10 != 0x7fffffffffffffff)) {
              lVar15 = -0x8000000000000000;
              if (lVar10 != -0x8000000000000000 && lVar12 != -0x8000000000000000) {
                lVar15 = lVar12 + lVar10;
              }
            }
            plVar13[8] = lVar15;
            *param_2 = 0;
          }
          if (lVar11 + 0x7fffffffffffffffU < 0xfffffffffffffffe) goto LAB_00907640;
          if (param_2[5] < plVar13[0xd]) {
            FUN_00909fc0(param_2 + 6,plVar13 + 0xf);
            plVar9 = (long *)*extraout_x1;
            if ((plVar9 == (long *)0x0) || (plVar9 == param_2 + 7)) {
              local_50 = (undefined4)plVar13[0x13];
              lStack_58 = plVar13[0x12];
              local_60 = plVar13[0x11];
              lStack_68 = plVar13[0x10];
              local_70 = (void *)plVar13[0xf];
              local_48 = plVar13[7];
              FUN_0090a114(0,param_2 + 6,param_2 + 6,&local_70);
            }
            else {
              lVar12 = plVar9[9];
              lVar15 = 0x7fffffffffffffff;
              if ((lVar12 != 0x7fffffffffffffff) &&
                 (lVar10 = plVar13[7], lVar10 != 0x7fffffffffffffff)) {
                lVar15 = -0x8000000000000000;
                if (lVar10 != -0x8000000000000000 && lVar12 != -0x8000000000000000) {
                  lVar15 = lVar12 + lVar10;
                }
              }
              plVar9[9] = lVar15;
            }
          }
          FUN_00909fc0(param_2 + 6,param_2 + 9);
          plVar9 = (long *)*extraout_x1_00;
          lVar15 = 0;
          if ((plVar9 != (long *)0x0) && (plVar9 != param_2 + 7)) {
            lVar15 = plVar9[9];
          }
          lVar12 = *plVar14;
          lVar11 = plVar13[9];
          lVar10 = plVar13[8];
          plVar13[0xe] = lVar15;
          lVar15 = plVar13[0xe];
          uVar7 = 1;
          param_1[1] = plVar13[7];
          *param_1 = lVar12;
          param_1[3] = lVar11;
          param_1[2] = lVar10;
          lVar16 = plVar13[0xb];
          lVar11 = plVar13[10];
          lVar10 = plVar13[0xd];
          lVar12 = plVar13[0xc];
          param_1[8] = lVar15;
          param_1[5] = lVar16;
          param_1[4] = lVar11;
          param_1[7] = lVar10;
          param_1[6] = lVar12;
          goto LAB_00907648;
        }
        plVar13 = (long *)plVar13[1];
        if (plVar13 == (long *)0x0) goto LAB_00907640;
      }
    }
  }
LAB_00907640:
  uVar7 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00907648:
  *(undefined1 *)(param_1 + 9) = uVar7;
  return;
}


// ===== 0090774c  FUN_0090774c =====

undefined8 FUN_0090774c(long param_1)

{
  undefined8 uVar1;
  long *extraout_x1;
  long lVar2;
  
  FUN_00909fc0(param_1 + 0x30,param_1 + 0x48);
  lVar2 = *extraout_x1;
  uVar1 = 0;
  if ((lVar2 != 0) && (lVar2 != param_1 + 0x38)) {
    uVar1 = *(undefined8 *)(lVar2 + 0x48);
  }
  return uVar1;
}


// ===== 00907798  FUN_00907798 =====

void FUN_00907798(undefined1 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *local_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  undefined1 uStack_89;
  char *local_88;
  ulong *puStack_80;
  void **local_78;
  long *plStack_70;
  long local_68;
  void *local_60;
  void *pvStack_58;
  undefined8 local_50;
  ulong local_28;
  
  if (*(short *)(param_3 + 0x12) == 0) {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0x689,
                   "Empty transport feedback packet received.");
    }
    *param_1 = 0;
    param_1[0x48] = 0;
    return;
  }
  if (1 < *(long *)(param_2 + 0x78) + 0x8000000000000001U) {
    lVar5 = FUN_007d2b20(param_3);
    lVar8 = (lVar5 / 1000) * 1000;
    lVar9 = *(long *)(param_2 + 0x70);
    lVar5 = -0x8000000000000000;
    if (lVar9 != 0x7fffffffffffffff) {
      lVar5 = -lVar9;
    }
    lVar1 = 0x7fffffffffffffff;
    if (lVar9 != -0x8000000000000000) {
      lVar1 = lVar5;
    }
    if (lVar1 <= lVar8) {
      lVar5 = -0x8000000000000000;
      if (lVar8 != -0x8000000000000000 && lVar9 != -0x8000000000000000) {
        lVar5 = lVar8 + lVar9;
      }
      lVar1 = 0x7fffffffffffffff;
      if (lVar8 != 0x7fffffffffffffff && lVar9 != 0x7fffffffffffffff) {
        lVar1 = lVar5;
      }
      *(long *)(param_2 + 0x70) = lVar1;
      goto LAB_009078b8;
    }
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0x70a,
                   "Unexpected feedback timestamp received.");
    }
  }
  *(undefined8 *)(param_2 + 0x70) = param_4;
LAB_009078b8:
  uVar6 = FUN_007d23e0(param_3);
  *(undefined8 *)(param_2 + 0x78) = uVar6;
  local_60 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_50 = 0;
  FUN_00907a94(&local_60,*(undefined2 *)(param_3 + 0x12));
  puStack_80 = &local_28;
  plStack_70 = &local_68;
  local_28 = 0;
  local_68 = 0;
  local_88 = param_2;
  local_78 = &local_60;
  FUN_007d2a34(param_3,&local_88,FUN_0090a328);
  if ((local_28 != 0) && (uVar7 = FUN_004022fc(), (uVar7 & 1) == 0)) {
    local_78 = (void **)&uStack_89;
    local_88 = "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc";
    puStack_80 = (ulong *)0x85a;
    puVar2 = &DAT_0019cf4c;
    if (local_28 < 2) {
      puVar2 = &DAT_001b3348;
    }
    FUN_00623bb0(&DAT_00214e18,
                 "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0x85a,
                 "Failed to lookup send time for ",local_28," packet",puVar2,
                 ". Packets reordered or send time history too small?");
  }
  if ((local_68 != 0) && (uVar7 = FUN_00417e08(), (uVar7 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f6d4b,
                 "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0x889,
                 "Ignoring ",local_68," packets because they were sent on a different route.");
  }
  pvStack_a8 = pvStack_58;
  local_a0 = local_50;
  pvStack_58 = (void *)0x0;
  local_50 = 0;
  local_b0 = local_60;
  local_60 = (void *)0x0;
  FUN_00907be0(param_1,param_2,&local_b0,param_4,0);
  pvVar4 = local_b0;
  pvVar3 = pvStack_a8;
  if (local_b0 != (void *)0x0) {
    while (pvVar4 != pvVar3) {
      pvVar3 = (void *)((long)pvVar3 + -0x70);
      if (pvVar3 == (void *)0x0) goto LAB_00907a80;
      FUN_0086dc48(pvVar3);
    }
    operator_delete(local_b0);
  }
  pvVar4 = local_60;
  pvVar3 = pvStack_58;
  if (local_60 != (void *)0x0) {
    while (pvVar4 != pvVar3) {
      pvVar3 = (void *)((long)pvVar3 + -0x70);
      if (pvVar3 == (void *)0x0) {
LAB_00907a80:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0086dc48(pvVar3);
    }
    pvStack_58 = pvVar4;
    operator_delete(local_60);
  }
  return;
}


// ===== 00907a94  FUN_00907a94 =====

void FUN_00907a94(long *param_1,ulong param_2,undefined1 *param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  long *extraout_x1;
  undefined1 *extraout_x8;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lVar6;
  unkbyte9 *pVar7;
  
  pvVar9 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar9 >> 4) * 0x6db6db6db6db6db7) < param_2) {
    if (0x249249249249249 < param_2) {
      auVar30 = FUN_0086e3fc();
      pVar7 = auVar30._8_8_;
      lVar6 = auVar30._0_8_;
      pcStack_88 = FUN_00907be0;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &stack0xffffffffffffffb0;
      FUN_0086dc50(&puStack_e0);
      puVar4 = puStack_c8;
      uVar3 = *(undefined8 *)((long)pVar7 + 8);
      uVar21 = (undefined1)uVar3;
      uVar22 = (undefined1)((ulong)uVar3 >> 8);
      uVar23 = (undefined1)((ulong)uVar3 >> 0x10);
      uVar24 = (undefined1)((ulong)uVar3 >> 0x18);
      uVar25 = (undefined1)((ulong)uVar3 >> 0x20);
      uVar26 = (undefined1)((ulong)uVar3 >> 0x28);
      uVar27 = (undefined1)((ulong)uVar3 >> 0x30);
      uVar28 = (undefined1)((ulong)uVar3 >> 0x38);
      uVar2 = *(undefined8 *)pVar7;
      uVar13 = (undefined1)uVar2;
      uVar14 = (undefined1)((ulong)uVar2 >> 8);
      uVar15 = (undefined1)((ulong)uVar2 >> 0x10);
      uVar16 = (undefined1)((ulong)uVar2 >> 0x18);
      uVar17 = (undefined1)((ulong)uVar2 >> 0x20);
      uVar18 = (undefined1)((ulong)uVar2 >> 0x28);
      uVar19 = (undefined1)((ulong)uVar2 >> 0x30);
      uVar20 = (undefined1)((ulong)uVar2 >> 0x38);
      auVar29._8_8_ = uVar3;
      auVar29._0_8_ = uVar3;
      auVar30[9] = uVar22;
      auVar30._0_9_ = *pVar7;
      auVar30[10] = uVar23;
      auVar30[0xb] = uVar24;
      auVar30[0xc] = uVar25;
      auVar30[0xd] = uVar26;
      auVar30[0xe] = uVar27;
      auVar30[0xf] = uVar28;
      auVar30 = NEON_cmeq(auVar30,auVar29,8);
      puStack_e0 = param_3;
      if ((auVar30 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        puVar1 = puStack_c0;
        if (puStack_c8 != (undefined1 *)0x0) {
          while (puVar4 != puVar1) {
            puVar1 = puVar1 + -0x70;
            if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_0086dc48(puVar1);
          }
          puStack_c0 = puVar4;
          operator_delete(puStack_c8);
          uVar2 = *(undefined8 *)((long)pVar7 + 8);
          uVar21 = (undefined1)uVar2;
          uVar22 = (undefined1)((ulong)uVar2 >> 8);
          uVar23 = (undefined1)((ulong)uVar2 >> 0x10);
          uVar24 = (undefined1)((ulong)uVar2 >> 0x18);
          uVar25 = (undefined1)((ulong)uVar2 >> 0x20);
          uVar26 = (undefined1)((ulong)uVar2 >> 0x28);
          uVar27 = (undefined1)((ulong)uVar2 >> 0x30);
          uVar28 = (undefined1)((ulong)uVar2 >> 0x38);
          uVar2 = *(undefined8 *)pVar7;
          uVar13 = (undefined1)uVar2;
          uVar14 = (undefined1)((ulong)uVar2 >> 8);
          uVar15 = (undefined1)((ulong)uVar2 >> 0x10);
          uVar16 = (undefined1)((ulong)uVar2 >> 0x18);
          uVar17 = (undefined1)((ulong)uVar2 >> 0x20);
          uVar18 = (undefined1)((ulong)uVar2 >> 0x28);
          uVar19 = (undefined1)((ulong)uVar2 >> 0x30);
          uVar20 = (undefined1)((ulong)uVar2 >> 0x38);
        }
        puStack_b8 = *(undefined1 **)(pVar7 + 1);
        puStack_c0 = (undefined1 *)
                     CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,CONCAT13(uVar24
                                                  ,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)))))));
        puStack_c8 = (undefined1 *)
                     CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16
                                                  ,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))));
        *(undefined8 *)pVar7 = 0;
        *(undefined8 *)((long)pVar7 + 8) = 0;
        *(undefined8 *)(pVar7 + 1) = 0;
        FUN_00909fc0(lVar6 + 0x30,lVar6 + 0x48);
        lVar8 = *extraout_x1;
        puStack_d8 = (undefined1 *)0x0;
        if ((lVar8 != 0) && (lVar8 != lVar6 + 0x38)) {
          puStack_d8 = *(undefined1 **)(lVar8 + 0x48);
        }
        puStack_d0 = (undefined1 *)(CONCAT71(puStack_d0._1_7_,param_4) & 0xffffffffffffff01);
        FUN_0086dc78(extraout_x8,&puStack_e0);
        uVar13 = 1;
      }
      else {
        uVar13 = 0;
        *extraout_x8 = 0;
      }
      extraout_x8[0x48] = uVar13;
      FUN_0086dda8(&puStack_e0);
      return;
    }
    pvVar12 = (void *)param_1[1];
    pvVar5 = operator_new(param_2 * 0x70);
    lVar6 = (long)pvVar12 - (long)pvVar9;
    pvVar10 = pvVar9;
    pvVar11 = pvVar5;
    if (lVar6 != 0) {
      do {
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_0086dc20(pvVar11,pvVar10);
        pvVar10 = (void *)((long)pvVar10 + 0x70);
        pvVar11 = (void *)((long)pvVar11 + 0x70);
      } while (pvVar10 != pvVar12);
      do {
        if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0086dc48(pvVar9);
        pvVar9 = (void *)((long)pvVar9 + 0x70);
      } while (pvVar9 != pvVar12);
      pvVar9 = (void *)*param_1;
    }
    *param_1 = (long)pvVar5;
    param_1[1] = (long)pvVar5 + lVar6;
    param_1[2] = (long)((long)pvVar5 + param_2 * 0x70);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      return;
    }
  }
  return;
}


// ===== 00907be0  FUN_00907be0 =====

void FUN_00907be0(undefined1 *param_1,long param_2,unkbyte9 *param_3,undefined1 *param_4,
                 undefined1 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *extraout_x1;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086dc50(&local_90);
  puVar4 = local_78;
  uVar3 = *(undefined8 *)((long)param_3 + 8);
  uVar14 = (undefined1)uVar3;
  uVar15 = (undefined1)((ulong)uVar3 >> 8);
  uVar16 = (undefined1)((ulong)uVar3 >> 0x10);
  uVar17 = (undefined1)((ulong)uVar3 >> 0x18);
  uVar18 = (undefined1)((ulong)uVar3 >> 0x20);
  uVar19 = (undefined1)((ulong)uVar3 >> 0x28);
  uVar20 = (undefined1)((ulong)uVar3 >> 0x30);
  uVar21 = (undefined1)((ulong)uVar3 >> 0x38);
  uVar2 = *(undefined8 *)param_3;
  uVar6 = (undefined1)uVar2;
  uVar7 = (undefined1)((ulong)uVar2 >> 8);
  uVar8 = (undefined1)((ulong)uVar2 >> 0x10);
  uVar9 = (undefined1)((ulong)uVar2 >> 0x18);
  uVar10 = (undefined1)((ulong)uVar2 >> 0x20);
  uVar11 = (undefined1)((ulong)uVar2 >> 0x28);
  uVar12 = (undefined1)((ulong)uVar2 >> 0x30);
  uVar13 = (undefined1)((ulong)uVar2 >> 0x38);
  auVar22._8_8_ = uVar3;
  auVar22._0_8_ = uVar3;
  auVar23[9] = uVar15;
  auVar23._0_9_ = *param_3;
  auVar23[10] = uVar16;
  auVar23[0xb] = uVar17;
  auVar23[0xc] = uVar18;
  auVar23[0xd] = uVar19;
  auVar23[0xe] = uVar20;
  auVar23[0xf] = uVar21;
  auVar23 = NEON_cmeq(auVar23,auVar22,8);
  local_90 = param_4;
  if ((auVar23 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar1 = puStack_70;
    if (local_78 != (undefined1 *)0x0) {
      while (puVar4 != puVar1) {
        puVar1 = puVar1 + -0x70;
        if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0086dc48(puVar1);
      }
      puStack_70 = puVar4;
      operator_delete(local_78);
      uVar2 = *(undefined8 *)((long)param_3 + 8);
      uVar14 = (undefined1)uVar2;
      uVar15 = (undefined1)((ulong)uVar2 >> 8);
      uVar16 = (undefined1)((ulong)uVar2 >> 0x10);
      uVar17 = (undefined1)((ulong)uVar2 >> 0x18);
      uVar18 = (undefined1)((ulong)uVar2 >> 0x20);
      uVar19 = (undefined1)((ulong)uVar2 >> 0x28);
      uVar20 = (undefined1)((ulong)uVar2 >> 0x30);
      uVar21 = (undefined1)((ulong)uVar2 >> 0x38);
      uVar2 = *(undefined8 *)param_3;
      uVar6 = (undefined1)uVar2;
      uVar7 = (undefined1)((ulong)uVar2 >> 8);
      uVar8 = (undefined1)((ulong)uVar2 >> 0x10);
      uVar9 = (undefined1)((ulong)uVar2 >> 0x18);
      uVar10 = (undefined1)((ulong)uVar2 >> 0x20);
      uVar11 = (undefined1)((ulong)uVar2 >> 0x28);
      uVar12 = (undefined1)((ulong)uVar2 >> 0x30);
      uVar13 = (undefined1)((ulong)uVar2 >> 0x38);
    }
    puStack_68 = *(undefined1 **)(param_3 + 1);
    puStack_70 = (undefined1 *)
                 CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(uVar17,
                                                  CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))));
    local_78 = (undefined1 *)
               CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14(uVar10,CONCAT13(uVar9,
                                                  CONCAT12(uVar8,CONCAT11(uVar7,uVar6)))))));
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 1) = 0;
    FUN_00909fc0(param_2 + 0x30,param_2 + 0x48);
    lVar5 = *extraout_x1;
    puStack_88 = (undefined1 *)0x0;
    if ((lVar5 != 0) && (lVar5 != param_2 + 0x38)) {
      puStack_88 = *(undefined1 **)(lVar5 + 0x48);
    }
    local_80 = (undefined1 *)(CONCAT71(local_80._1_7_,param_5) & 0xffffffffffffff01);
    FUN_0086dc78(param_1,&local_90);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    *param_1 = 0;
  }
  param_1[0x48] = uVar6;
  FUN_0086dda8(&local_90);
  return;
}


// ===== 00907d2c  FUN_00907d2c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00907d2c(undefined1 *param_1,long param_2,long param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined7 uVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  byte bVar21;
  int iVar22;
  uint *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  int local_1bc;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *******local_1a0;
  char *******pppppppcStack_198;
  char *******local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 local_140;
  undefined1 local_13f;
  byte local_13e;
  byte local_13d;
  undefined4 local_13c;
  undefined2 uStack_138;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined4 local_134;
  char *******local_130;
  char *******pppppppcStack_128;
  char *******local_120;
  char *******pppppppcStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 local_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined1 uStack_a1;
  char *local_a0;
  char *local_98;
  char *local_90;
  char ******local_88;
  char **ppcStack_80;
  long local_78 [3];
  
  if (*(long *)(param_3 + 0x18) == *(long *)(param_3 + 0x10)) {
    uVar12 = FUN_00417e08();
    if ((uVar12 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0x8e9,
                   "Empty congestion control feedback packet received.");
    }
    *param_1 = 0;
    param_1[0x48] = 0;
    return;
  }
  lVar13 = *(long *)(param_2 + 0x70);
  if (*(long *)(param_2 + 0x70) + 0x8000000000000001U < 2) {
    *(long *)(param_2 + 0x70) = param_4;
    lVar13 = param_4;
  }
  if ((*(byte *)(param_2 + 0x84) & 1) == 0) {
    local_78[0] = 0;
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x28);
    *(undefined1 *)(param_2 + 0x84) = 1;
LAB_00907e10:
    lVar2 = lVar13;
    if (lVar13 != -0x8000000000000000) {
      lVar2 = lVar13 + local_78[0];
    }
    lVar14 = 0x7fffffffffffffff;
    if (lVar13 != 0x7fffffffffffffff && local_78[0] != 0x7fffffffffffffff) {
      lVar14 = lVar2;
    }
  }
  else {
    local_78[0] = FUN_008898f0(*(int *)(param_3 + 0x28) - *(int *)(param_2 + 0x80));
    uVar4 = *(undefined4 *)(param_3 + 0x28);
    *(undefined1 *)(param_2 + 0x84) = 1;
    *(undefined4 *)(param_2 + 0x80) = uVar4;
    if (-1 < local_78[0]) {
      lVar13 = *(long *)(param_2 + 0x70);
      goto LAB_00907e10;
    }
    uVar12 = FUN_004022fc();
    lVar14 = param_4;
    if ((uVar12 & 1) == 0) {
      local_a0 = "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc";
      local_98 = (char *)0x952;
      local_90 = &uStack_a1;
      ppcStack_80 = &local_a0;
      local_88 = (char ******)0x1b7f45;
      FUN_005f3380(&local_1a0,local_78);
      if ((long)local_190 < 0) {
        FUN_005478d8(&local_130,local_1a0,pppppppcStack_198);
        pppppppcStack_118 = &local_88;
        if ((long)local_190 < 0) {
          operator_delete(local_1a0);
        }
      }
      else {
        pppppppcStack_118 = &local_88;
        pppppppcStack_128 = pppppppcStack_198;
        local_130 = local_1a0;
        local_120 = local_190;
      }
      FUN_00623bb0(&DAT_002258de,*pppppppcStack_118[1],*(undefined4 *)(pppppppcStack_118[1] + 1),
                   *pppppppcStack_118,&local_130,&DAT_001ea377);
      if ((long)local_120 < 0) {
        operator_delete(local_130);
      }
    }
  }
  *(long *)(param_2 + 0x70) = lVar14;
  puVar23 = *(uint **)(param_3 + 0x10);
  local_a0 = (char *)0x0;
  local_98 = (char *)0x0;
  local_90 = (char *)0x0;
  lVar13 = *(long *)(param_3 + 0x18) - (long)puVar23;
  if (lVar13 == 0) {
    bVar21 = 1;
    goto LAB_009083a8;
  }
  iVar22 = 0;
  bVar11 = false;
  puVar1 = (uint *)((long)puVar23 + lVar13);
  puVar25 = (undefined1 *)0xaaaaaaaaaaaaaa00;
  puVar24 = &DAT_aaaaaaaaaaaaaaaa;
  bVar21 = 1;
  local_1bc = 0;
  do {
    plVar15 = *(long **)(param_2 + 0x90);
    pppppppcStack_128 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
    local_130 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
    pppppppcStack_118 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
    local_120 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_c8 = 0xaaaa;
    uStack_c6 = 0xaa;
    uStack_c5 = 0xaa;
    uStack_c4 = 0xaaaaaaaa;
    local_d0 = 0xaa;
    uStack_cf = 0xaa;
    uStack_ce = 0xaa;
    uStack_cd = 0xaa;
    uStack_cc = 0xaaaaaaaa;
    local_b8 = 0xaaaa;
    local_b6 = 0xaa;
    local_b5 = 0xaa;
    local_b4 = 0xaaaaaaaa;
    uStack_c0 = 0xaaaaaaaa;
    local_bc = 0xaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    if (plVar15 != (long *)0x0) {
      uVar5 = *puVar23;
      do {
        while( true ) {
          uVar6 = *(uint *)(plVar15 + 4);
          bVar10 = (ushort)puVar23[1] < *(ushort *)((long)plVar15 + 0x24);
          if (uVar5 != uVar6) {
            bVar10 = uVar5 < uVar6;
          }
          if (bVar10) break;
          bVar10 = *(ushort *)((long)plVar15 + 0x24) < (ushort)puVar23[1];
          if (uVar5 != uVar6) {
            bVar10 = uVar6 < uVar5;
          }
          if (!bVar10) {
            if ((plVar15 != (long *)(param_2 + 0x90)) &&
               (FUN_00908588(&local_130,param_2,plVar15[5],
                             *(long *)(puVar23 + 2) + 0x7fffffffffffffffU < 0xfffffffffffffffe),
               ((ulong)local_b0 & 1) != 0)) {
              uVar12 = FUN_008c06d4(&local_e0,param_2 + 0x48);
              if ((uVar12 & 1) == 0) {
                local_1bc = local_1bc + 1;
                goto LAB_00907f70;
              }
              puVar26 = local_f0;
              if (bVar11) {
                if (((ulong)local_b0 & 1) == 0) goto LAB_00908558;
                if ((long)puVar25 <= (long)local_f0) {
                  puVar26 = puVar25;
                }
                if ((long)puVar24 <= (long)local_f0) {
                  puVar24 = local_f0;
                }
              }
              else {
                puVar24 = local_f0;
                if (((ulong)local_b0 & 1) == 0) goto LAB_00908558;
              }
              puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
              local_190 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
              puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
              local_180 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
              local_170 = &DAT_aaaaaaaaaaaaaaaa;
              local_158 = &DAT_aaaaaaaaaaaaaaaa;
              local_160 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
              local_150 = &DAT_aaaaaaaaaaaaaaaa;
              uStack_138 = 0xaaaa;
              uStack_136 = 0xaa;
              uStack_135 = 0xaa;
              local_134 = 0xaaaaaaaa;
              local_140 = 0xaa;
              local_13f = 0xaa;
              local_13e = 0xaa;
              local_13d = 0xaa;
              local_13c = 0xaaaaaaaa;
              pppppppcStack_198 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
              local_1a0 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
              FUN_0086dbdc(&local_1a0);
              pcVar7 = local_98;
              if (((ulong)local_b0 & 1) == 0) {
LAB_00908558:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                          );
              }
              pppppppcStack_198 = local_120;
              local_1a0 = pppppppcStack_128;
              puStack_188 = local_110;
              local_190 = pppppppcStack_118;
              puStack_178 = local_100;
              local_180 = puStack_108;
              puStack_168 = local_f0;
              local_170 = puStack_f8;
              local_160 = puStack_e8;
              if (*(long *)(puVar23 + 2) + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
                local_158 = *(undefined1 **)(param_2 + 0x70);
                puVar25 = local_158;
                if (local_158 != (undefined1 *)0x8000000000000000) {
                  puVar25 = local_158 + -*(long *)(puVar23 + 2);
                }
                if (local_158 != (undefined1 *)0x7fffffffffffffff) {
                  local_158 = puVar25;
                }
                local_150 = *(undefined1 **)(puVar23 + 2);
                bVar21 = bVar21 & (char)puVar23[4] != '\0';
                if (((ulong)puStack_148 & 1) == 0) {
                  puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,1);
                }
              }
              local_140 = (undefined1)puVar23[4];
              local_13f = local_b5;
              local_13d = *(long *)(puVar23 + 2) != -0x8000000000000000 & (byte)local_b4;
              local_13e = *(long *)(puVar23 + 2) == -0x8000000000000000 & ((byte)local_b4 ^ 1);
              if ((char)local_134 != '\x01') {
                uStack_135 = 0;
                local_134 = CONCAT31(local_134._1_3_,1);
              }
              uStack_138 = local_b8;
              local_13c = local_bc;
              uStack_136 = local_b6;
              if (local_98 < local_90) {
                if (local_98 == (char *)0x0) goto LAB_00908544;
                FUN_0086dc20(local_98,&local_1a0);
                local_98 = pcVar7 + 0x70;
              }
              else {
                local_98 = (char *)FUN_0086e414(&local_a0,&local_1a0);
              }
              FUN_0086dc48(&local_1a0);
              bVar11 = true;
              puVar25 = puVar26;
              goto LAB_00907f70;
            }
            goto LAB_00907f6c;
          }
          plVar15 = (long *)plVar15[1];
          if (plVar15 == (long *)0x0) goto LAB_00907f6c;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
LAB_00907f6c:
    iVar22 = iVar22 + 1;
LAB_00907f70:
    puVar23 = puVar23 + 6;
  } while (puVar23 != puVar1);
  if (bVar11) {
    plVar17 = (long *)(param_2 + 0xa8);
    plVar15 = (long *)*plVar17;
    plVar19 = plVar15;
    plVar18 = plVar17;
    if (plVar15 != (long *)0x0) {
      do {
        while (plVar16 = plVar19, plVar20 = plVar16, plVar16[4] <= (long)puVar25) {
          if ((puVar25 == (undefined1 *)plVar16[4]) ||
             (plVar19 = (long *)plVar16[1], plVar20 = plVar18, (long *)plVar16[1] == (long *)0x0))
          goto LAB_009081c8;
        }
        plVar19 = (long *)*plVar16;
        plVar18 = plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
LAB_009081c8:
      do {
        plVar19 = plVar15 + 4;
        plVar18 = plVar15;
        if ((*plVar19 <= (long)puVar24) &&
           (plVar15 = plVar15 + 1, plVar18 = plVar17, puVar24 == (undefined1 *)*plVar19))
        goto LAB_009081e4;
        plVar15 = (long *)*plVar15;
        plVar17 = plVar18;
      } while (plVar15 != (long *)0x0);
      goto joined_r0x009081f0;
    }
  }
LAB_009082f4:
  if ((0 < iVar22) && (uVar12 = FUN_00417e08(), (uVar12 & 1) == 0)) {
    local_120 = (char *******)&local_1a0;
    local_130 = (char *******)0x1d1bed;
    pppppppcStack_128 = (char *******)0xbc1;
    puVar3 = &DAT_001b3348;
    if (iVar22 != 1) {
      puVar3 = &DAT_0019cf4c;
    }
    FUN_00623bb0(&DAT_002258e3,
                 "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0xbc1,
                 "Failed to lookup send time for ",iVar22," packet",puVar3,
                 ". Packets reordered or send time history too small, or packet reported received more than once."
                );
  }
  if ((0 < local_1bc) && (uVar12 = FUN_00417e08(), (uVar12 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f1906,
                 "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0xbf1,
                 "Ignoring ",local_1bc," packets because they were sent on a different route.");
  }
LAB_009083a8:
  local_1b8 = local_a0;
  local_1b0 = local_98;
  if (local_a0 != local_98) {
    FUN_009088a8(local_a0,local_98,
                 LZCOUNT(((long)local_98 - (long)local_a0 >> 4) * 0x6db6db6db6db6db7) << 1 ^ 0x7e,1)
    ;
    local_1b8 = local_a0;
    local_1b0 = local_98;
  }
  local_1a8 = local_90;
  local_98 = (char *)0x0;
  local_90 = (char *)0x0;
  local_a0 = (char *)0x0;
  FUN_00907be0(param_1,param_2,&local_1b8,param_4,bVar21);
  pcVar9 = local_1b8;
  pcVar7 = local_1b0;
  if (local_1b8 != (char *)0x0) {
    while (pcVar9 != pcVar7) {
      pcVar7 = pcVar7 + -0x70;
      if (pcVar7 == (char *)0x0) goto LAB_00908530;
      FUN_0086dc48(pcVar7);
    }
    operator_delete(local_1b8);
  }
  pcVar9 = local_a0;
  pcVar7 = local_98;
  if (local_a0 != (char *)0x0) {
    while (pcVar9 != pcVar7) {
      pcVar7 = pcVar7 + -0x70;
      if (pcVar7 == (char *)0x0) {
LAB_00908530:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0086dc48(pcVar7);
    }
    local_98 = pcVar9;
    operator_delete(local_a0);
  }
  return;
LAB_009081e4:
  do {
    plVar18 = plVar17;
    plVar15 = (long *)*plVar15;
    plVar17 = plVar15;
  } while (plVar15 != (long *)0x0);
joined_r0x009081f0:
  while (plVar20 != plVar18) {
    if ((*(byte *)((long)plVar20 + 0xa4) & 1) == 0) {
      *(undefined1 *)((long)plVar20 + 0xa4) = 1;
      pppppppcStack_118 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      local_120 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_c8 = 0xaaaa;
      uStack_c6 = 0xaa;
      uStack_c5 = 0xaa;
      uStack_c4 = 0xaaaaaaaa;
      local_d0 = 0xaa;
      uStack_cf = 0xaa;
      uStack_ce = 0xaa;
      uStack_cd = 0xaa;
      uStack_cc = 0xaaaaaaaa;
      pppppppcStack_128 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      local_130 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dbdc(&local_130);
      pcVar7 = local_98;
      puStack_108 = (undefined1 *)plVar20[0xb];
      local_110 = (undefined1 *)plVar20[10];
      puStack_f8 = (undefined1 *)plVar20[0xd];
      local_100 = (undefined1 *)plVar20[0xc];
      pppppppcStack_128 = (char *******)plVar20[7];
      local_130 = (char *******)plVar20[6];
      pppppppcStack_118 = (char *******)plVar20[9];
      local_120 = (char *******)plVar20[8];
      local_f0 = (undefined1 *)plVar20[0xe];
      uStack_cf = *(undefined1 *)((long)plVar20 + 0xa3);
      uStack_ce = 1;
      uStack_cc = *(undefined4 *)((long)plVar20 + 0x9c);
      uStack_c8 = (undefined2)plVar20[0x14];
      uStack_c6 = *(undefined1 *)((long)plVar20 + 0xa2);
      uVar8 = *(undefined7 *)((long)plVar20 + 0x9c);
      if ((char)uStack_c4 != '\x01') {
        uStack_c4 = CONCAT31(uStack_c4._1_3_,1);
        uStack_cc = (undefined4)uVar8;
        uStack_c8 = (undefined2)((uint7)uVar8 >> 0x20);
        uStack_c6 = (undefined1)((uint7)uVar8 >> 0x30);
        uStack_c5 = 0;
      }
      if (local_98 < local_90) {
        if (local_98 == (char *)0x0) {
LAB_00908544:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_0086dc20(local_98,&local_130);
        local_98 = pcVar7 + 0x70;
      }
      else {
        local_98 = (char *)FUN_0086e414(&local_a0,&local_130);
      }
      FUN_0086dc48(&local_130);
    }
    plVar15 = (long *)plVar20[1];
    plVar19 = plVar20;
    if ((long *)plVar20[1] == (long *)0x0) {
      do {
        plVar20 = (long *)plVar19[2];
        bVar11 = plVar19 != (long *)*plVar20;
        plVar19 = plVar20;
      } while (bVar11);
    }
    else {
      do {
        plVar20 = plVar15;
        plVar15 = (long *)*plVar20;
      } while ((long *)*plVar20 != (long *)0x0);
    }
  }
  goto LAB_009082f4;
}


// ===== 0090856c  FUN_0090856c =====

void FUN_0090856c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  return;
}


// ===== 00908588  FUN_00908588 =====

void FUN_00908588(long *param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 local_d8;
  undefined2 local_d4;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  
  plVar11 = (long *)(param_2 + 0xa8);
  plVar10 = (long *)*plVar11;
  lVar8 = *(long *)(param_2 + 0x28);
  plVar13 = plVar11;
  plVar6 = plVar10;
  if (lVar8 < param_3) {
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      plVar7 = plVar6 + 4;
      plVar12 = plVar6;
      if ((*plVar7 <= lVar8) && (plVar6 = plVar6 + 1, plVar12 = plVar13, lVar8 == *plVar7))
      goto LAB_00908608;
      plVar13 = plVar12;
    }
    goto LAB_00908618;
  }
  goto LAB_009086a8;
LAB_00908608:
  do {
    plVar13 = plVar12;
    plVar6 = (long *)*plVar6;
    plVar12 = plVar6;
  } while (plVar6 != (long *)0x0);
LAB_00908618:
  do {
    plVar6 = plVar11;
    plVar7 = plVar11;
    plVar12 = plVar10;
    if (plVar10 != (long *)0x0) {
LAB_00908638:
      plVar6 = plVar12;
      plVar12 = plVar6 + 4;
      plVar9 = plVar6;
      if ((param_3 < *plVar12) || (plVar9 = plVar6 + 1, plVar6 = plVar7, param_3 != *plVar12))
      break;
      plVar7 = (long *)*plVar9;
      while (plVar12 = plVar7, plVar12 != (long *)0x0) {
        plVar6 = plVar12;
        plVar7 = (long *)*plVar12;
      }
    }
LAB_00908660:
    if (plVar13 == plVar6) goto LAB_009086a4;
    FUN_00906d7c(param_2 + 0x30,plVar13 + 5);
    plVar6 = (long *)plVar13[1];
    plVar10 = plVar13;
    if ((long *)plVar13[1] == (long *)0x0) {
      do {
        plVar13 = (long *)plVar10[2];
        bVar4 = plVar10 != (long *)*plVar13;
        plVar10 = plVar13;
      } while (bVar4);
    }
    else {
      do {
        plVar13 = plVar6;
        plVar6 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
    plVar10 = (long *)*plVar11;
  } while( true );
  plVar7 = plVar6;
  plVar12 = (long *)*plVar9;
  if ((long *)*plVar9 == (long *)0x0) goto LAB_00908660;
  goto LAB_00908638;
LAB_009086a4:
  *(long *)(param_2 + 0x28) = param_3;
LAB_009086a8:
  if (plVar10 != (long *)0x0) {
    do {
      while (param_3 < plVar10[4]) {
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_00908798;
      }
      if (param_3 == plVar10[4]) {
        if (plVar10 != (long *)(param_2 + 0xa8)) {
          if (1 < plVar10[6] + 0x8000000000000001U) {
            lStack_98 = plVar10[0xc];
            lStack_a0 = plVar10[0xb];
            lStack_a8 = plVar10[10];
            local_b0 = plVar10[9];
            lStack_b8 = plVar10[8];
            lStack_c0 = plVar10[7];
            lStack_c8 = plVar10[6];
            local_d0 = plVar10[5];
            local_60 = (undefined4)plVar10[0x13];
            lStack_68 = plVar10[0x12];
            local_70 = plVar10[0x11];
            lStack_78 = plVar10[0x10];
            local_80 = plVar10[0xf];
            lStack_88 = plVar10[0xe];
            local_90 = plVar10[0xd];
            uVar3 = *(undefined2 *)((long)plVar10 + 0xa6);
            uVar2 = *(undefined4 *)((long)plVar10 + 0xa2);
            uVar1 = *(undefined4 *)((long)plVar10 + 0x9c);
            lVar8 = plVar10[0x14];
            if ((param_4 & 1) == 0) {
              *(undefined1 *)((long)plVar10 + 0xa4) = 1;
            }
            else {
              local_d8 = uVar1;
              local_d4 = (short)lVar8;
              FUN_009072bc(param_2 + 0x88,&local_d8);
              plVar6 = plVar10;
              plVar13 = (long *)plVar10[1];
              if ((long *)plVar10[1] == (long *)0x0) {
                do {
                  plVar11 = (long *)plVar6[2];
                  bVar4 = plVar6 != (long *)*plVar11;
                  plVar6 = plVar11;
                } while (bVar4);
              }
              else {
                do {
                  plVar11 = plVar13;
                  plVar13 = (long *)*plVar11;
                } while ((long *)*plVar11 != (long *)0x0);
              }
              if (*(long **)(param_2 + 0xa0) == plVar10) {
                *(long **)(param_2 + 0xa0) = plVar11;
              }
              *(long *)(param_2 + 0xb0) = *(long *)(param_2 + 0xb0) + -1;
              FUN_005d5d48(*(undefined8 *)(param_2 + 0xa8),plVar10);
              if (plVar10 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(plVar10);
            }
            *(short *)(param_1 + 0xf) = (short)lVar8;
            param_1[0xd] = lStack_68;
            param_1[0xc] = local_70;
            param_1[9] = lStack_88;
            param_1[8] = local_90;
            param_1[0xb] = lStack_78;
            param_1[10] = local_80;
            *(undefined4 *)(param_1 + 0xe) = local_60;
            *(undefined4 *)((long)param_1 + 0x74) = uVar1;
            *(undefined2 *)((long)param_1 + 0x7e) = uVar3;
            param_1[1] = lStack_c8;
            *param_1 = local_d0;
            param_1[3] = lStack_b8;
            param_1[2] = lStack_c0;
            *(undefined4 *)((long)param_1 + 0x7a) = uVar2;
            *(undefined1 *)(param_1 + 0x10) = 1;
            param_1[5] = lStack_a8;
            param_1[4] = local_b0;
            param_1[7] = lStack_98;
            param_1[6] = lStack_a0;
            return;
          }
          goto LAB_009087cc;
        }
        break;
      }
      plVar10 = (long *)plVar10[1];
    } while (plVar10 != (long *)0x0);
  }
LAB_00908798:
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_00224cd0,
                 "../../modules/congestion_controller/rtp/transport_feedback_adapter.cc",0xdf1,
                 "Failed to lookup send time for packet with ",param_3,
                 ". Send time history too small or packet was reported as received twice.");
  }
LAB_009087cc:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 009088a8  FUN_009088a8 =====

void FUN_009088a8(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  
  do {
    puVar8 = param_1;
LAB_009088f0:
    param_1 = puVar8;
    uVar16 = (long)param_2 - (long)param_1;
    uVar14 = ((long)uVar16 >> 4) * 0x6db6db6db6db6db7;
    if (uVar14 - 2 == 0 || (long)uVar14 < 2) {
      if (uVar14 < 2) {
        return;
      }
      if (uVar14 == 2) {
        if ((long)param_1[7] <= (long)param_2[-7]) {
          return;
        }
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_e0,param_1);
        uVar21 = param_2[-10];
        uVar20 = param_2[-7];
        uVar19 = param_2[-8];
        uVar23 = param_2[-0xd];
        uVar22 = param_2[-0xe];
        uVar25 = param_2[-0xb];
        uVar24 = param_2[-0xc];
        param_1[5] = param_2[-9];
        param_1[4] = uVar21;
        param_1[7] = uVar20;
        param_1[6] = uVar19;
        param_1[1] = uVar23;
        *param_1 = uVar22;
        param_1[3] = uVar25;
        param_1[2] = uVar24;
        uVar22 = param_2[-3];
        uVar21 = param_2[-4];
        uVar20 = param_2[-1];
        uVar19 = param_2[-2];
        uVar23 = param_2[-6];
        param_1[9] = param_2[-5];
        param_1[8] = uVar23;
        param_1[0xb] = uVar22;
        param_1[10] = uVar21;
        param_1[0xd] = uVar20;
        param_1[0xc] = uVar19;
        param_2[-1] = puStack_78;
        param_2[-2] = local_80;
        param_2[-5] = puStack_98;
        param_2[-6] = local_a0;
        param_2[-3] = puStack_88;
        param_2[-4] = local_90;
        param_2[-9] = puStack_b8;
        param_2[-10] = local_c0;
        param_2[-7] = puStack_a8;
        param_2[-8] = local_b0;
        param_2[-0xd] = puStack_d8;
        param_2[-0xe] = local_e0;
        param_2[-0xb] = puStack_c8;
        param_2[-0xc] = local_d0;
LAB_00908ed8:
        FUN_0086dc48(&local_e0);
        return;
      }
    }
    else {
      if (uVar14 == 3) {
        FUN_0090960c(param_1,param_1 + 0xe,param_2 + -0xe);
        return;
      }
      if (uVar14 == 4) {
        FUN_0090960c(param_1,param_1 + 0xe,param_1 + 0x1c);
        if ((long)param_1[0x23] <= (long)param_2[-7]) {
          return;
        }
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_e0,param_1 + 0x1c);
        uVar21 = param_2[-10];
        uVar20 = param_2[-7];
        uVar19 = param_2[-8];
        uVar23 = param_2[-0xd];
        uVar22 = param_2[-0xe];
        uVar25 = param_2[-0xb];
        uVar24 = param_2[-0xc];
        param_1[0x21] = param_2[-9];
        param_1[0x20] = uVar21;
        param_1[0x23] = uVar20;
        param_1[0x22] = uVar19;
        param_1[0x1d] = uVar23;
        param_1[0x1c] = uVar22;
        param_1[0x1f] = uVar25;
        param_1[0x1e] = uVar24;
        uVar22 = param_2[-3];
        uVar21 = param_2[-4];
        uVar20 = param_2[-1];
        uVar19 = param_2[-2];
        uVar23 = param_2[-6];
        param_1[0x25] = param_2[-5];
        param_1[0x24] = uVar23;
        param_1[0x27] = uVar22;
        param_1[0x26] = uVar21;
        param_1[0x29] = uVar20;
        param_1[0x28] = uVar19;
        param_2[-1] = puStack_78;
        param_2[-2] = local_80;
        param_2[-5] = puStack_98;
        param_2[-6] = local_a0;
        param_2[-3] = puStack_88;
        param_2[-4] = local_90;
        param_2[-9] = puStack_b8;
        param_2[-10] = local_c0;
        param_2[-7] = puStack_a8;
        param_2[-8] = local_b0;
        param_2[-0xd] = puStack_d8;
        param_2[-0xe] = local_e0;
        param_2[-0xb] = puStack_c8;
        param_2[-0xc] = local_d0;
        FUN_0086dc48(&local_e0);
        if ((long)param_1[0x15] <= (long)param_1[0x23]) {
          return;
        }
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_e0,param_1 + 0xe);
        param_1[0x17] = param_1[0x25];
        param_1[0x16] = param_1[0x24];
        param_1[0x19] = param_1[0x27];
        param_1[0x18] = param_1[0x26];
        param_1[0x1b] = param_1[0x29];
        param_1[0x1a] = param_1[0x28];
        param_1[0xf] = param_1[0x1d];
        param_1[0xe] = param_1[0x1c];
        param_1[0x11] = param_1[0x1f];
        param_1[0x10] = param_1[0x1e];
        param_1[0x13] = param_1[0x21];
        param_1[0x12] = param_1[0x20];
        param_1[0x15] = param_1[0x23];
        param_1[0x14] = param_1[0x22];
        param_1[0x25] = puStack_98;
        param_1[0x24] = local_a0;
        param_1[0x27] = puStack_88;
        param_1[0x26] = local_90;
        param_1[0x29] = puStack_78;
        param_1[0x28] = local_80;
        param_1[0x1d] = puStack_d8;
        param_1[0x1c] = local_e0;
        param_1[0x1f] = puStack_c8;
        param_1[0x1e] = local_d0;
        param_1[0x21] = puStack_b8;
        param_1[0x20] = local_c0;
        param_1[0x23] = puStack_a8;
        param_1[0x22] = local_b0;
        FUN_0086dc48(&local_e0);
        if ((long)param_1[7] <= (long)param_1[0x15]) {
          return;
        }
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_e0,param_1);
        param_1[0xd] = param_1[0x1b];
        param_1[0xc] = param_1[0x1a];
        param_1[9] = param_1[0x17];
        param_1[8] = param_1[0x16];
        param_1[0xb] = param_1[0x19];
        param_1[10] = param_1[0x18];
        param_1[1] = param_1[0xf];
        *param_1 = param_1[0xe];
        param_1[3] = param_1[0x11];
        param_1[2] = param_1[0x10];
        param_1[5] = param_1[0x13];
        param_1[4] = param_1[0x12];
        param_1[7] = param_1[0x15];
        param_1[6] = param_1[0x14];
        param_1[0x17] = puStack_98;
        param_1[0x16] = local_a0;
        param_1[0x19] = puStack_88;
        param_1[0x18] = local_90;
        param_1[0x1b] = puStack_78;
        param_1[0x1a] = local_80;
        param_1[0xf] = puStack_d8;
        param_1[0xe] = local_e0;
        param_1[0x11] = puStack_c8;
        param_1[0x10] = local_d0;
        param_1[0x13] = puStack_b8;
        param_1[0x12] = local_c0;
        param_1[0x15] = puStack_a8;
        param_1[0x14] = local_b0;
        goto LAB_00908ed8;
      }
      if (uVar14 == 5) {
        FUN_00909868(param_1,param_1 + 0xe,param_1 + 0x1c,param_1 + 0x2a,param_2 + -0xe);
        return;
      }
    }
    if ((long)uVar16 < 0xa80) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 0xe == param_2) {
          return;
        }
        lVar7 = -0x70;
        puVar8 = param_1 + 0xe;
        do {
          puVar4 = puVar8;
          if ((long)param_1[0x15] < (long)param_1[7]) {
            puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
            local_d0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
            local_c0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
            local_b0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
            local_a0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
            local_90 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
            local_80 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
            local_e0 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_0086dc20(&local_e0,puVar4);
            puVar8 = puVar4;
            lVar9 = lVar7;
            do {
              puVar15 = puVar8;
              puVar15[0xd] = puVar15[-1];
              puVar15[0xc] = puVar15[-2];
              puVar15[9] = puVar15[-5];
              puVar15[8] = puVar15[-6];
              puVar15[0xb] = puVar15[-3];
              puVar15[10] = puVar15[-4];
              puVar15[1] = puVar15[-0xd];
              *puVar15 = puVar15[-0xe];
              puVar15[3] = puVar15[-0xb];
              puVar15[2] = puVar15[-0xc];
              puVar15[5] = puVar15[-9];
              puVar15[4] = puVar15[-10];
              puVar15[7] = puVar15[-7];
              puVar15[6] = puVar15[-8];
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              lVar9 = lVar9 + 0x70;
              puVar8 = puVar15 + -0xe;
            } while ((long)puStack_a8 < (long)puVar15[-0x15]);
            puVar15[-9] = puStack_b8;
            puVar15[-10] = local_c0;
            puVar15[-7] = puStack_a8;
            puVar15[-8] = local_b0;
            puVar15[-0xd] = puStack_d8;
            puVar15[-0xe] = local_e0;
            puVar15[-0xb] = puStack_c8;
            puVar15[-0xc] = local_d0;
            puVar15[-5] = puStack_98;
            puVar15[-6] = local_a0;
            puVar15[-3] = puStack_88;
            puVar15[-4] = local_90;
            puVar15[-1] = puStack_78;
            puVar15[-2] = local_80;
            FUN_0086dc48(&local_e0);
          }
          lVar7 = lVar7 + -0x70;
          puVar8 = puVar4 + 0xe;
          param_1 = puVar4;
        } while (puVar4 + 0xe != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 0xe == param_2) {
        return;
      }
      lVar7 = 0;
      puVar8 = param_1 + 0xe;
      puVar4 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar13 = uVar14 - 2 >> 1;
      uVar6 = uVar13;
      goto LAB_00909180;
    }
    puVar8 = param_1 + (uVar14 >> 1) * 0xe;
    if (uVar16 < 0x3801) {
      FUN_0090960c(puVar8,param_1,param_2 + -0xe);
    }
    else {
      FUN_0090960c(param_1,puVar8,param_2 + -0xe);
      FUN_0090960c(param_1 + 0xe,puVar8 + -0xe,param_2 + -0x1c);
      FUN_0090960c(param_1 + 0x1c,puVar8 + 0xe,param_2 + -0x2a);
      FUN_0090960c(puVar8 + -0xe,puVar8,puVar8 + 0xe);
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dc20(&local_e0,param_1);
      uVar21 = puVar8[4];
      uVar20 = puVar8[7];
      uVar19 = puVar8[6];
      uVar23 = puVar8[1];
      uVar22 = *puVar8;
      uVar25 = puVar8[3];
      uVar24 = puVar8[2];
      param_1[5] = puVar8[5];
      param_1[4] = uVar21;
      param_1[7] = uVar20;
      param_1[6] = uVar19;
      param_1[1] = uVar23;
      *param_1 = uVar22;
      param_1[3] = uVar25;
      param_1[2] = uVar24;
      uVar22 = puVar8[0xb];
      uVar21 = puVar8[10];
      uVar20 = puVar8[0xd];
      uVar19 = puVar8[0xc];
      uVar23 = puVar8[8];
      param_1[9] = puVar8[9];
      param_1[8] = uVar23;
      param_1[0xb] = uVar22;
      param_1[10] = uVar21;
      param_1[0xd] = uVar20;
      param_1[0xc] = uVar19;
      puVar8[0xd] = puStack_78;
      puVar8[0xc] = local_80;
      puVar8[9] = puStack_98;
      puVar8[8] = local_a0;
      puVar8[0xb] = puStack_88;
      puVar8[10] = local_90;
      puVar8[5] = puStack_b8;
      puVar8[4] = local_c0;
      puVar8[7] = puStack_a8;
      puVar8[6] = local_b0;
      puVar8[1] = puStack_d8;
      *puVar8 = local_e0;
      puVar8[3] = puStack_c8;
      puVar8[2] = local_d0;
      FUN_0086dc48(&local_e0);
    }
    if (((param_4 & 1) == 0) && ((long)param_1[7] <= (long)param_1[-7])) {
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dc20(&local_150,param_1);
      puVar4 = param_1;
      if ((long)puStack_118 < (long)param_2[-7]) {
        do {
          puVar8 = puVar4 + 0xe;
          if (puVar8 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar4 + 0x15;
          puVar4 = puVar8;
        } while (*plVar1 <= (long)puStack_118);
      }
      else {
        do {
          puVar8 = puVar4 + 0xe;
          if (param_2 <= puVar8) break;
          plVar1 = puVar4 + 0x15;
          puVar4 = puVar8;
        } while (*plVar1 <= (long)puStack_118);
      }
      puVar4 = param_2;
      if (puVar8 < param_2) {
        do {
          if (puVar4 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar4 + -7;
          puVar4 = puVar4 + -0xe;
        } while ((long)puStack_118 < *plVar1);
      }
      while (puVar8 < puVar4) {
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_e0,puVar8);
        uVar21 = puVar4[4];
        uVar20 = puVar4[7];
        uVar19 = puVar4[6];
        uVar23 = puVar4[1];
        uVar22 = *puVar4;
        uVar25 = puVar4[3];
        uVar24 = puVar4[2];
        puVar8[5] = puVar4[5];
        puVar8[4] = uVar21;
        puVar8[7] = uVar20;
        puVar8[6] = uVar19;
        puVar8[1] = uVar23;
        *puVar8 = uVar22;
        puVar8[3] = uVar25;
        puVar8[2] = uVar24;
        uVar22 = puVar4[0xb];
        uVar21 = puVar4[10];
        uVar20 = puVar4[0xd];
        uVar19 = puVar4[0xc];
        uVar23 = puVar4[8];
        puVar8[9] = puVar4[9];
        puVar8[8] = uVar23;
        puVar8[0xb] = uVar22;
        puVar8[10] = uVar21;
        puVar8[0xd] = uVar20;
        puVar8[0xc] = uVar19;
        puVar4[0xd] = puStack_78;
        puVar4[0xc] = local_80;
        puVar4[9] = puStack_98;
        puVar4[8] = local_a0;
        puVar4[0xb] = puStack_88;
        puVar4[10] = local_90;
        puVar4[5] = puStack_b8;
        puVar4[4] = local_c0;
        puVar4[7] = puStack_a8;
        puVar4[6] = local_b0;
        puVar4[1] = puStack_d8;
        *puVar4 = local_e0;
        puVar4[3] = puStack_c8;
        puVar4[2] = local_d0;
        FUN_0086dc48(&local_e0);
        puVar15 = puVar8;
        do {
          puVar8 = puVar15 + 0xe;
          if (puVar8 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar15 + 0x15;
          puVar15 = puVar8;
        } while (*plVar1 <= (long)puStack_118);
        do {
          if (puVar4 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar4 + -7;
          puVar4 = puVar4 + -0xe;
        } while ((long)puStack_118 < *plVar1);
      }
      puVar4 = puVar8 + -0xe;
      if (param_1 != puVar4) {
        uVar21 = puVar8[-10];
        uVar20 = puVar8[-7];
        uVar19 = puVar8[-8];
        uVar23 = puVar8[-0xd];
        uVar22 = *puVar4;
        uVar25 = puVar8[-0xb];
        uVar24 = puVar8[-0xc];
        param_1[5] = puVar8[-9];
        param_1[4] = uVar21;
        param_1[7] = uVar20;
        param_1[6] = uVar19;
        param_1[1] = uVar23;
        *param_1 = uVar22;
        param_1[3] = uVar25;
        param_1[2] = uVar24;
        uVar22 = puVar8[-3];
        uVar21 = puVar8[-4];
        uVar20 = puVar8[-1];
        uVar19 = puVar8[-2];
        uVar23 = puVar8[-6];
        param_1[9] = puVar8[-5];
        param_1[8] = uVar23;
        param_1[0xb] = uVar22;
        param_1[10] = uVar21;
        param_1[0xd] = uVar20;
        param_1[0xc] = uVar19;
      }
      puVar8[-9] = puStack_128;
      puVar8[-10] = local_130;
      puVar8[-7] = puStack_118;
      puVar8[-8] = local_120;
      puVar8[-0xd] = puStack_148;
      *puVar4 = local_150;
      puVar8[-0xb] = puStack_138;
      puVar8[-0xc] = local_140;
      puVar8[-5] = puStack_108;
      puVar8[-6] = local_110;
      puVar8[-3] = puStack_f8;
      puVar8[-4] = local_100;
      puVar8[-1] = puStack_e8;
      puVar8[-2] = local_f0;
      FUN_0086dc48(&local_150);
      param_4 = 0;
      param_3 = param_3 + -1;
      goto LAB_009088f0;
    }
    param_3 = param_3 + -1;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_150,param_1);
    lVar7 = 0;
    do {
      if ((undefined8 *)((long)param_1 + lVar7 + 0x70) == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      lVar9 = lVar7 + 0xa8;
      lVar7 = lVar7 + 0x70;
    } while (*(long *)((long)param_1 + lVar9) < (long)puStack_118);
    puVar8 = (undefined8 *)((long)param_1 + lVar7);
    puVar4 = param_2;
    if (lVar7 == 0x70) {
      do {
        if (puVar4 <= puVar8) break;
        plVar1 = puVar4 + -7;
        puVar4 = puVar4 + -0xe;
      } while ((long)puStack_118 <= *plVar1);
    }
    else {
      do {
        if (puVar4 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        plVar1 = puVar4 + -7;
        puVar4 = puVar4 + -0xe;
      } while ((long)puStack_118 <= *plVar1);
    }
    puVar15 = puVar8;
    puVar10 = puVar4;
    if (puVar8 < puVar4) {
      do {
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_e0,puVar15);
        uVar21 = puVar10[4];
        uVar20 = puVar10[7];
        uVar19 = puVar10[6];
        uVar23 = puVar10[1];
        uVar22 = *puVar10;
        uVar25 = puVar10[3];
        uVar24 = puVar10[2];
        puVar15[5] = puVar10[5];
        puVar15[4] = uVar21;
        puVar15[7] = uVar20;
        puVar15[6] = uVar19;
        puVar15[1] = uVar23;
        *puVar15 = uVar22;
        puVar15[3] = uVar25;
        puVar15[2] = uVar24;
        uVar22 = puVar10[0xb];
        uVar21 = puVar10[10];
        uVar20 = puVar10[0xd];
        uVar19 = puVar10[0xc];
        uVar23 = puVar10[8];
        puVar15[9] = puVar10[9];
        puVar15[8] = uVar23;
        puVar15[0xb] = uVar22;
        puVar15[10] = uVar21;
        puVar15[0xd] = uVar20;
        puVar15[0xc] = uVar19;
        puVar10[0xd] = puStack_78;
        puVar10[0xc] = local_80;
        puVar10[9] = puStack_98;
        puVar10[8] = local_a0;
        puVar10[0xb] = puStack_88;
        puVar10[10] = local_90;
        puVar10[5] = puStack_b8;
        puVar10[4] = local_c0;
        puVar10[7] = puStack_a8;
        puVar10[6] = local_b0;
        puVar10[1] = puStack_d8;
        *puVar10 = local_e0;
        puVar10[3] = puStack_c8;
        puVar10[2] = local_d0;
        FUN_0086dc48(&local_e0);
        do {
          puVar17 = puVar15;
          puVar15 = puVar17 + 0xe;
          if (puVar15 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
        } while ((long)puVar17[0x15] < (long)puStack_118);
        do {
          if (puVar10 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar10 + -7;
          puVar10 = puVar10 + -0xe;
        } while ((long)puStack_118 <= *plVar1);
      } while (puVar15 < puVar10);
    }
    else {
      puVar17 = puVar8 + -0xe;
    }
    if (param_1 != puVar17) {
      uVar21 = puVar17[4];
      uVar20 = puVar17[7];
      uVar19 = puVar17[6];
      uVar23 = puVar17[1];
      uVar22 = *puVar17;
      uVar25 = puVar17[3];
      uVar24 = puVar17[2];
      param_1[5] = puVar17[5];
      param_1[4] = uVar21;
      param_1[7] = uVar20;
      param_1[6] = uVar19;
      param_1[1] = uVar23;
      *param_1 = uVar22;
      param_1[3] = uVar25;
      param_1[2] = uVar24;
      uVar22 = puVar17[0xb];
      uVar21 = puVar17[10];
      uVar20 = puVar17[0xd];
      uVar19 = puVar17[0xc];
      uVar23 = puVar17[8];
      param_1[9] = puVar17[9];
      param_1[8] = uVar23;
      param_1[0xb] = uVar22;
      param_1[10] = uVar21;
      param_1[0xd] = uVar20;
      param_1[0xc] = uVar19;
    }
    puVar17[5] = puStack_128;
    puVar17[4] = local_130;
    puVar17[7] = puStack_118;
    puVar17[6] = local_120;
    puVar17[1] = puStack_148;
    *puVar17 = local_150;
    puVar17[3] = puStack_138;
    puVar17[2] = local_140;
    puVar17[9] = puStack_108;
    puVar17[8] = local_110;
    puVar17[0xb] = puStack_f8;
    puVar17[10] = local_100;
    puVar17[0xd] = puStack_e8;
    puVar17[0xc] = local_f0;
    FUN_0086dc48(&local_150);
    if (puVar8 < puVar4) goto LAB_00908c30;
    uVar14 = FUN_00909c00(param_1,puVar17);
    uVar16 = FUN_00909c00(puVar17 + 0xe,param_2);
    if ((uVar16 & 1) == 0) goto code_r0x00908c2c;
    param_2 = puVar17;
    if ((uVar14 & 1) != 0) {
      return;
    }
  } while( true );
LAB_009090b8:
  puVar15 = puVar8;
  if ((long)puVar4[0x15] < (long)puVar4[7]) {
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_e0,puVar15);
    lVar9 = lVar7;
    do {
      lVar5 = lVar9;
      puVar8 = (undefined8 *)((long)param_1 + lVar5);
      puVar8[0x1b] = puVar8[0xd];
      puVar8[0x1a] = puVar8[0xc];
      puVar8[0x17] = puVar8[9];
      puVar8[0x16] = puVar8[8];
      puVar8[0x19] = puVar8[0xb];
      puVar8[0x18] = puVar8[10];
      puVar8[0xf] = puVar8[1];
      puVar8[0xe] = *puVar8;
      puVar8[0x11] = puVar8[3];
      puVar8[0x10] = puVar8[2];
      puVar8[0x13] = puVar8[5];
      puVar8[0x12] = puVar8[4];
      puVar8[0x15] = puVar8[7];
      puVar8[0x14] = puVar8[6];
      puVar4 = param_1;
      if (lVar5 == 0) goto LAB_00909080;
      lVar9 = lVar5 + -0x70;
    } while ((long)puStack_a8 < (long)puVar8[-7]);
    puVar4 = (undefined8 *)((long)param_1 + lVar5);
LAB_00909080:
    puVar4[5] = puStack_b8;
    puVar4[4] = local_c0;
    puVar4[7] = puStack_a8;
    puVar4[6] = local_b0;
    puVar4[1] = puStack_d8;
    *puVar4 = local_e0;
    puVar4[3] = puStack_c8;
    puVar4[2] = local_d0;
    puVar4[9] = puStack_98;
    puVar4[8] = local_a0;
    puVar4[0xb] = puStack_88;
    puVar4[10] = local_90;
    puVar4[0xd] = puStack_78;
    puVar4[0xc] = local_80;
    FUN_0086dc48(&local_e0);
  }
  lVar7 = lVar7 + 0x70;
  puVar8 = puVar15 + 0xe;
  puVar4 = puVar15;
  if (puVar15 + 0xe == param_2) {
    return;
  }
  goto LAB_009090b8;
LAB_00909180:
  do {
    if (uVar6 <= uVar13) {
      uVar2 = (uVar6 & 0x3fffffffffffffff) << 1 | 1;
      uVar12 = uVar6 * 2 + 2;
      uVar18 = uVar2;
      if ((uVar12 < uVar14) &&
         (uVar18 = uVar12, (long)param_1[uVar12 * 0xe + 7] <= (long)param_1[uVar2 * 0xe + 7])) {
        uVar18 = uVar2;
      }
      if ((long)param_1[uVar6 * 0xe + 7] <= (long)param_1[uVar18 * 0xe + 7]) {
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_e0);
        uVar12 = uVar6;
        do {
          puVar8 = param_1 + uVar18 * 0xe;
          puVar4 = param_1 + uVar12 * 0xe;
          uVar21 = puVar8[4];
          uVar20 = puVar8[7];
          uVar19 = puVar8[6];
          uVar23 = puVar8[1];
          uVar22 = *puVar8;
          uVar25 = puVar8[3];
          uVar24 = puVar8[2];
          puVar4[5] = puVar8[5];
          puVar4[4] = uVar21;
          puVar4[7] = uVar20;
          puVar4[6] = uVar19;
          puVar4[1] = uVar23;
          *puVar4 = uVar22;
          puVar4[3] = uVar25;
          puVar4[2] = uVar24;
          uVar22 = puVar8[0xb];
          uVar21 = puVar8[10];
          uVar20 = puVar8[0xd];
          uVar19 = puVar8[0xc];
          uVar23 = puVar8[8];
          puVar4[9] = puVar8[9];
          puVar4[8] = uVar23;
          puVar4[0xb] = uVar22;
          puVar4[10] = uVar21;
          puVar4[0xd] = uVar20;
          puVar4[0xc] = uVar19;
          if ((long)uVar13 < (long)uVar18) break;
          uVar2 = (uVar18 & 0x3fffffffffffffff) << 1 | 1;
          uVar12 = uVar18 * 2 + 2;
          uVar11 = uVar2;
          if (((long)uVar12 < (long)uVar14) &&
             (uVar11 = uVar12, (long)param_1[uVar12 * 0xe + 7] <= (long)param_1[uVar2 * 0xe + 7])) {
            uVar11 = uVar2;
          }
          uVar12 = uVar18;
          uVar18 = uVar11;
        } while ((long)puStack_a8 <= (long)param_1[uVar11 * 0xe + 7]);
        puVar8[5] = puStack_b8;
        puVar8[4] = local_c0;
        puVar8[7] = puStack_a8;
        puVar8[6] = local_b0;
        puVar8[1] = puStack_d8;
        *puVar8 = local_e0;
        puVar8[3] = puStack_c8;
        puVar8[2] = local_d0;
        puVar8[9] = puStack_98;
        puVar8[8] = local_a0;
        puVar8[0xb] = puStack_88;
        puVar8[10] = local_90;
        puVar8[0xd] = puStack_78;
        puVar8[0xc] = local_80;
        FUN_0086dc48(&local_e0);
      }
    }
    bVar3 = uVar6 != 0;
    uVar6 = uVar6 - 1;
  } while (bVar3);
  lVar7 = (uVar16 >> 4) * 0x6db6db6db6db6db7;
  do {
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_150,param_1);
    puVar8 = param_1;
    uVar14 = 0;
    do {
      uVar6 = uVar14 << 1 | 1;
      uVar16 = uVar14 * 2 + 2;
      uVar13 = uVar6;
      puVar4 = puVar8 + uVar14 * 0xe + 0xe;
      if (((long)uVar16 < lVar7) &&
         (uVar13 = uVar16, puVar4 = puVar8 + uVar14 * 0xe + 0x1c,
         (long)puVar8[uVar14 * 0xe + 0x23] <= (long)puVar8[uVar14 * 0xe + 0x15])) {
        uVar13 = uVar6;
        puVar4 = puVar8 + uVar14 * 0xe + 0xe;
      }
      uVar21 = puVar4[4];
      uVar20 = puVar4[7];
      uVar19 = puVar4[6];
      uVar23 = puVar4[1];
      uVar22 = *puVar4;
      uVar25 = puVar4[3];
      uVar24 = puVar4[2];
      puVar8[5] = puVar4[5];
      puVar8[4] = uVar21;
      puVar8[7] = uVar20;
      puVar8[6] = uVar19;
      puVar8[1] = uVar23;
      *puVar8 = uVar22;
      puVar8[3] = uVar25;
      puVar8[2] = uVar24;
      uVar22 = puVar4[0xb];
      uVar21 = puVar4[10];
      uVar20 = puVar4[0xd];
      uVar19 = puVar4[0xc];
      uVar23 = puVar4[8];
      puVar8[9] = puVar4[9];
      puVar8[8] = uVar23;
      puVar8[0xb] = uVar22;
      puVar8[10] = uVar21;
      puVar8[0xd] = uVar20;
      puVar8[0xc] = uVar19;
      puVar8 = puVar4;
      uVar14 = uVar13;
    } while ((long)uVar13 <= (long)(lVar7 - 2U >> 1));
    puVar8 = param_2 + -0xe;
    if (puVar4 == puVar8) {
      puVar4[5] = puStack_128;
      puVar4[4] = local_130;
      puVar4[7] = puStack_118;
      puVar4[6] = local_120;
      puVar4[1] = puStack_148;
      *puVar4 = local_150;
      puVar4[3] = puStack_138;
      puVar4[2] = local_140;
      puVar4[9] = puStack_108;
      puVar4[8] = local_110;
      puVar4[0xb] = puStack_f8;
      puVar4[10] = local_100;
      puVar4[0xd] = puStack_e8;
      puVar4[0xc] = local_f0;
    }
    else {
      uVar21 = param_2[-10];
      uVar20 = param_2[-7];
      uVar19 = param_2[-8];
      uVar23 = param_2[-0xd];
      uVar22 = *puVar8;
      uVar25 = param_2[-0xb];
      uVar24 = param_2[-0xc];
      uVar14 = (long)puVar4 + (0x70 - (long)param_1);
      puVar4[5] = param_2[-9];
      puVar4[4] = uVar21;
      puVar4[7] = uVar20;
      puVar4[6] = uVar19;
      puVar4[1] = uVar23;
      *puVar4 = uVar22;
      puVar4[3] = uVar25;
      puVar4[2] = uVar24;
      uVar22 = param_2[-3];
      uVar21 = param_2[-4];
      uVar20 = param_2[-1];
      uVar19 = param_2[-2];
      uVar23 = param_2[-6];
      puVar4[9] = param_2[-5];
      puVar4[8] = uVar23;
      puVar4[0xb] = uVar22;
      puVar4[10] = uVar21;
      puVar4[0xd] = uVar20;
      puVar4[0xc] = uVar19;
      param_2[-1] = puStack_e8;
      param_2[-2] = local_f0;
      param_2[-5] = puStack_108;
      param_2[-6] = local_110;
      param_2[-3] = puStack_f8;
      param_2[-4] = local_100;
      param_2[-9] = puStack_128;
      param_2[-10] = local_130;
      param_2[-7] = puStack_118;
      param_2[-8] = local_120;
      param_2[-0xd] = puStack_148;
      *puVar8 = local_150;
      param_2[-0xb] = puStack_138;
      param_2[-0xc] = local_140;
      if (0x70 < (long)uVar14) {
        uVar14 = (uVar14 >> 4) * 0x6db6db6db6db6db7 - 2 >> 1;
        if ((long)(param_1 + uVar14 * 0xe)[7] < (long)puVar4[7]) {
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          local_e0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0086dc20(&local_e0,puVar4);
          puVar15 = param_1 + uVar14 * 0xe;
          do {
            puVar10 = puVar15;
            uVar21 = puVar10[4];
            uVar20 = puVar10[7];
            uVar19 = puVar10[6];
            uVar23 = puVar10[1];
            uVar22 = *puVar10;
            uVar25 = puVar10[3];
            uVar24 = puVar10[2];
            puVar4[5] = puVar10[5];
            puVar4[4] = uVar21;
            puVar4[7] = uVar20;
            puVar4[6] = uVar19;
            puVar4[1] = uVar23;
            *puVar4 = uVar22;
            puVar4[3] = uVar25;
            puVar4[2] = uVar24;
            uVar22 = puVar10[0xb];
            uVar21 = puVar10[10];
            uVar20 = puVar10[0xd];
            uVar19 = puVar10[0xc];
            uVar23 = puVar10[8];
            puVar4[9] = puVar10[9];
            puVar4[8] = uVar23;
            puVar4[0xb] = uVar22;
            puVar4[10] = uVar21;
            puVar4[0xd] = uVar20;
            puVar4[0xc] = uVar19;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar4 = puVar10;
            puVar15 = param_1 + uVar14 * 0xe;
          } while ((long)(param_1 + uVar14 * 0xe)[7] < (long)puStack_a8);
          puVar10[5] = puStack_b8;
          puVar10[4] = local_c0;
          puVar10[7] = puStack_a8;
          puVar10[6] = local_b0;
          puVar10[1] = puStack_d8;
          *puVar10 = local_e0;
          puVar10[3] = puStack_c8;
          puVar10[2] = local_d0;
          puVar10[9] = puStack_98;
          puVar10[8] = local_a0;
          puVar10[0xb] = puStack_88;
          puVar10[10] = local_90;
          puVar10[0xd] = puStack_78;
          puVar10[0xc] = local_80;
          FUN_0086dc48(&local_e0);
        }
      }
    }
    FUN_0086dc48(&local_150);
    bVar3 = lVar7 < 3;
    param_2 = puVar8;
    lVar7 = lVar7 + -1;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x00908c2c:
  puVar8 = puVar17 + 0xe;
  if ((uVar14 & 1) == 0) {
LAB_00908c30:
    FUN_009088a8(param_1,puVar17,param_3,param_4 & 1);
    param_4 = 0;
    puVar8 = puVar17 + 0xe;
  }
  goto LAB_009088f0;
}


// ===== 0090960c  FUN_0090960c =====

void FUN_0090960c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  lVar1 = param_2[7];
  if (lVar1 < (long)param_1[7]) {
    if ((long)param_3[7] < lVar1) {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dc20(&local_a0,param_1);
      uVar4 = param_3[4];
      uVar3 = param_3[7];
      uVar2 = param_3[6];
      uVar6 = param_3[1];
      uVar5 = *param_3;
      uVar8 = param_3[3];
      uVar7 = param_3[2];
      param_1[5] = param_3[5];
      param_1[4] = uVar4;
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
      uVar5 = param_3[0xb];
      uVar4 = param_3[10];
      uVar3 = param_3[0xd];
      uVar2 = param_3[0xc];
      uVar6 = param_3[8];
      param_1[9] = param_3[9];
      param_1[8] = uVar6;
      param_1[0xb] = uVar5;
      param_1[10] = uVar4;
      param_1[0xd] = uVar3;
      param_1[0xc] = uVar2;
    }
    else {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dc20(&local_a0,param_1);
      uVar4 = param_2[4];
      uVar3 = param_2[7];
      uVar2 = param_2[6];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar8 = param_2[3];
      uVar7 = param_2[2];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
      uVar5 = param_2[0xb];
      uVar4 = param_2[10];
      uVar3 = param_2[0xd];
      uVar2 = param_2[0xc];
      uVar6 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar6;
      param_1[0xb] = uVar5;
      param_1[10] = uVar4;
      param_1[0xd] = uVar3;
      param_1[0xc] = uVar2;
      param_2[0xd] = puStack_38;
      param_2[0xc] = local_40;
      param_2[9] = puStack_58;
      param_2[8] = local_60;
      param_2[0xb] = puStack_48;
      param_2[10] = local_50;
      param_2[1] = puStack_98;
      *param_2 = local_a0;
      param_2[3] = puStack_88;
      param_2[2] = local_90;
      param_2[5] = puStack_78;
      param_2[4] = local_80;
      param_2[7] = puStack_68;
      param_2[6] = local_70;
      FUN_0086dc48(&local_a0);
      if ((long)param_2[7] <= (long)param_3[7]) {
        return;
      }
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dc20(&local_a0,param_2);
      uVar4 = param_3[4];
      uVar3 = param_3[7];
      uVar2 = param_3[6];
      uVar6 = param_3[1];
      uVar5 = *param_3;
      uVar8 = param_3[3];
      uVar7 = param_3[2];
      param_2[5] = param_3[5];
      param_2[4] = uVar4;
      param_2[7] = uVar3;
      param_2[6] = uVar2;
      param_2[1] = uVar6;
      *param_2 = uVar5;
      param_2[3] = uVar8;
      param_2[2] = uVar7;
      uVar5 = param_3[0xb];
      uVar4 = param_3[10];
      uVar3 = param_3[0xd];
      uVar2 = param_3[0xc];
      uVar6 = param_3[8];
      param_2[9] = param_3[9];
      param_2[8] = uVar6;
      param_2[0xb] = uVar5;
      param_2[10] = uVar4;
      param_2[0xd] = uVar3;
      param_2[0xc] = uVar2;
    }
    param_3[9] = puStack_58;
    param_3[8] = local_60;
    param_3[0xb] = puStack_48;
    param_3[10] = local_50;
    param_3[0xd] = puStack_38;
    param_3[0xc] = local_40;
    param_3[1] = puStack_98;
    *param_3 = local_a0;
    param_3[3] = puStack_88;
    param_3[2] = local_90;
    param_3[5] = puStack_78;
    param_3[4] = local_80;
    param_3[7] = puStack_68;
    param_3[6] = local_70;
  }
  else {
    if (lVar1 <= (long)param_3[7]) {
      return;
    }
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_a0,param_2);
    uVar4 = param_3[4];
    uVar3 = param_3[7];
    uVar2 = param_3[6];
    uVar6 = param_3[1];
    uVar5 = *param_3;
    uVar8 = param_3[3];
    uVar7 = param_3[2];
    param_2[5] = param_3[5];
    param_2[4] = uVar4;
    param_2[7] = uVar3;
    param_2[6] = uVar2;
    param_2[1] = uVar6;
    *param_2 = uVar5;
    param_2[3] = uVar8;
    param_2[2] = uVar7;
    uVar5 = param_3[0xb];
    uVar4 = param_3[10];
    uVar3 = param_3[0xd];
    uVar2 = param_3[0xc];
    uVar6 = param_3[8];
    param_2[9] = param_3[9];
    param_2[8] = uVar6;
    param_2[0xb] = uVar5;
    param_2[10] = uVar4;
    param_2[0xd] = uVar3;
    param_2[0xc] = uVar2;
    param_3[0xd] = puStack_38;
    param_3[0xc] = local_40;
    param_3[9] = puStack_58;
    param_3[8] = local_60;
    param_3[0xb] = puStack_48;
    param_3[10] = local_50;
    param_3[1] = puStack_98;
    *param_3 = local_a0;
    param_3[3] = puStack_88;
    param_3[2] = local_90;
    param_3[5] = puStack_78;
    param_3[4] = local_80;
    param_3[7] = puStack_68;
    param_3[6] = local_70;
    FUN_0086dc48(&local_a0);
    if ((long)param_1[7] <= (long)param_2[7]) {
      return;
    }
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_a0,param_1);
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    param_1[1] = uVar6;
    *param_1 = uVar5;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    uVar6 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
    param_2[0xd] = puStack_38;
    param_2[0xc] = local_40;
    param_2[9] = puStack_58;
    param_2[8] = local_60;
    param_2[0xb] = puStack_48;
    param_2[10] = local_50;
    param_2[1] = puStack_98;
    *param_2 = local_a0;
    param_2[3] = puStack_88;
    param_2[2] = local_90;
    param_2[5] = puStack_78;
    param_2[4] = local_80;
    param_2[7] = puStack_68;
    param_2[6] = local_70;
  }
  FUN_0086dc48(&local_a0);
  return;
}


// ===== 00909868  FUN_00909868 =====

void FUN_00909868(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  FUN_0090960c();
  if ((long)param_4[7] < (long)param_3[7]) {
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_b0,param_3);
    uVar3 = param_4[4];
    uVar2 = param_4[7];
    uVar1 = param_4[6];
    uVar5 = param_4[1];
    uVar4 = *param_4;
    uVar7 = param_4[3];
    uVar6 = param_4[2];
    param_3[5] = param_4[5];
    param_3[4] = uVar3;
    param_3[7] = uVar2;
    param_3[6] = uVar1;
    param_3[1] = uVar5;
    *param_3 = uVar4;
    param_3[3] = uVar7;
    param_3[2] = uVar6;
    uVar4 = param_4[0xb];
    uVar3 = param_4[10];
    uVar2 = param_4[0xd];
    uVar1 = param_4[0xc];
    uVar5 = param_4[8];
    param_3[9] = param_4[9];
    param_3[8] = uVar5;
    param_3[0xb] = uVar4;
    param_3[10] = uVar3;
    param_3[0xd] = uVar2;
    param_3[0xc] = uVar1;
    param_4[0xd] = puStack_48;
    param_4[0xc] = local_50;
    param_4[9] = puStack_68;
    param_4[8] = local_70;
    param_4[0xb] = puStack_58;
    param_4[10] = local_60;
    param_4[1] = puStack_a8;
    *param_4 = local_b0;
    param_4[3] = puStack_98;
    param_4[2] = local_a0;
    param_4[5] = puStack_88;
    param_4[4] = local_90;
    param_4[7] = puStack_78;
    param_4[6] = local_80;
    FUN_0086dc48(&local_b0);
    if ((long)param_3[7] < (long)param_2[7]) {
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dc20(&local_b0,param_2);
      uVar3 = param_3[4];
      uVar2 = param_3[7];
      uVar1 = param_3[6];
      uVar5 = param_3[1];
      uVar4 = *param_3;
      uVar7 = param_3[3];
      uVar6 = param_3[2];
      param_2[5] = param_3[5];
      param_2[4] = uVar3;
      param_2[7] = uVar2;
      param_2[6] = uVar1;
      param_2[1] = uVar5;
      *param_2 = uVar4;
      param_2[3] = uVar7;
      param_2[2] = uVar6;
      uVar4 = param_3[0xb];
      uVar3 = param_3[10];
      uVar2 = param_3[0xd];
      uVar1 = param_3[0xc];
      uVar5 = param_3[8];
      param_2[9] = param_3[9];
      param_2[8] = uVar5;
      param_2[0xb] = uVar4;
      param_2[10] = uVar3;
      param_2[0xd] = uVar2;
      param_2[0xc] = uVar1;
      param_3[0xd] = puStack_48;
      param_3[0xc] = local_50;
      param_3[9] = puStack_68;
      param_3[8] = local_70;
      param_3[0xb] = puStack_58;
      param_3[10] = local_60;
      param_3[1] = puStack_a8;
      *param_3 = local_b0;
      param_3[3] = puStack_98;
      param_3[2] = local_a0;
      param_3[5] = puStack_88;
      param_3[4] = local_90;
      param_3[7] = puStack_78;
      param_3[6] = local_80;
      FUN_0086dc48(&local_b0);
      if ((long)param_2[7] < (long)param_1[7]) {
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
        local_50 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_b0,param_1);
        uVar3 = param_2[4];
        uVar2 = param_2[7];
        uVar1 = param_2[6];
        uVar5 = param_2[1];
        uVar4 = *param_2;
        uVar7 = param_2[3];
        uVar6 = param_2[2];
        param_1[5] = param_2[5];
        param_1[4] = uVar3;
        param_1[7] = uVar2;
        param_1[6] = uVar1;
        param_1[1] = uVar5;
        *param_1 = uVar4;
        param_1[3] = uVar7;
        param_1[2] = uVar6;
        uVar4 = param_2[0xb];
        uVar3 = param_2[10];
        uVar2 = param_2[0xd];
        uVar1 = param_2[0xc];
        uVar5 = param_2[8];
        param_1[9] = param_2[9];
        param_1[8] = uVar5;
        param_1[0xb] = uVar4;
        param_1[10] = uVar3;
        param_1[0xd] = uVar2;
        param_1[0xc] = uVar1;
        param_2[0xd] = puStack_48;
        param_2[0xc] = local_50;
        param_2[9] = puStack_68;
        param_2[8] = local_70;
        param_2[0xb] = puStack_58;
        param_2[10] = local_60;
        param_2[1] = puStack_a8;
        *param_2 = local_b0;
        param_2[3] = puStack_98;
        param_2[2] = local_a0;
        param_2[5] = puStack_88;
        param_2[4] = local_90;
        param_2[7] = puStack_78;
        param_2[6] = local_80;
        FUN_0086dc48(&local_b0);
      }
    }
  }
  if ((long)param_5[7] < (long)param_4[7]) {
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_b0,param_4);
    uVar3 = param_5[4];
    uVar2 = param_5[7];
    uVar1 = param_5[6];
    uVar5 = param_5[1];
    uVar4 = *param_5;
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    param_4[5] = param_5[5];
    param_4[4] = uVar3;
    param_4[7] = uVar2;
    param_4[6] = uVar1;
    param_4[1] = uVar5;
    *param_4 = uVar4;
    param_4[3] = uVar7;
    param_4[2] = uVar6;
    uVar4 = param_5[0xb];
    uVar3 = param_5[10];
    uVar2 = param_5[0xd];
    uVar1 = param_5[0xc];
    uVar5 = param_5[8];
    param_4[9] = param_5[9];
    param_4[8] = uVar5;
    param_4[0xb] = uVar4;
    param_4[10] = uVar3;
    param_4[0xd] = uVar2;
    param_4[0xc] = uVar1;
    param_5[0xd] = puStack_48;
    param_5[0xc] = local_50;
    param_5[9] = puStack_68;
    param_5[8] = local_70;
    param_5[0xb] = puStack_58;
    param_5[10] = local_60;
    param_5[1] = puStack_a8;
    *param_5 = local_b0;
    param_5[3] = puStack_98;
    param_5[2] = local_a0;
    param_5[5] = puStack_88;
    param_5[4] = local_90;
    param_5[7] = puStack_78;
    param_5[6] = local_80;
    FUN_0086dc48(&local_b0);
    if ((long)param_4[7] < (long)param_3[7]) {
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dc20(&local_b0,param_3);
      uVar3 = param_4[4];
      uVar2 = param_4[7];
      uVar1 = param_4[6];
      uVar5 = param_4[1];
      uVar4 = *param_4;
      uVar7 = param_4[3];
      uVar6 = param_4[2];
      param_3[5] = param_4[5];
      param_3[4] = uVar3;
      param_3[7] = uVar2;
      param_3[6] = uVar1;
      param_3[1] = uVar5;
      *param_3 = uVar4;
      param_3[3] = uVar7;
      param_3[2] = uVar6;
      uVar4 = param_4[0xb];
      uVar3 = param_4[10];
      uVar2 = param_4[0xd];
      uVar1 = param_4[0xc];
      uVar5 = param_4[8];
      param_3[9] = param_4[9];
      param_3[8] = uVar5;
      param_3[0xb] = uVar4;
      param_3[10] = uVar3;
      param_3[0xd] = uVar2;
      param_3[0xc] = uVar1;
      param_4[0xd] = puStack_48;
      param_4[0xc] = local_50;
      param_4[9] = puStack_68;
      param_4[8] = local_70;
      param_4[0xb] = puStack_58;
      param_4[10] = local_60;
      param_4[1] = puStack_a8;
      *param_4 = local_b0;
      param_4[3] = puStack_98;
      param_4[2] = local_a0;
      param_4[5] = puStack_88;
      param_4[4] = local_90;
      param_4[7] = puStack_78;
      param_4[6] = local_80;
      FUN_0086dc48(&local_b0);
      if ((long)param_3[7] < (long)param_2[7]) {
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
        local_50 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0086dc20(&local_b0,param_2);
        uVar3 = param_3[4];
        uVar2 = param_3[7];
        uVar1 = param_3[6];
        uVar5 = param_3[1];
        uVar4 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[5] = param_3[5];
        param_2[4] = uVar3;
        param_2[7] = uVar2;
        param_2[6] = uVar1;
        param_2[1] = uVar5;
        *param_2 = uVar4;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        uVar4 = param_3[0xb];
        uVar3 = param_3[10];
        uVar2 = param_3[0xd];
        uVar1 = param_3[0xc];
        uVar5 = param_3[8];
        param_2[9] = param_3[9];
        param_2[8] = uVar5;
        param_2[0xb] = uVar4;
        param_2[10] = uVar3;
        param_2[0xd] = uVar2;
        param_2[0xc] = uVar1;
        param_3[0xd] = puStack_48;
        param_3[0xc] = local_50;
        param_3[9] = puStack_68;
        param_3[8] = local_70;
        param_3[0xb] = puStack_58;
        param_3[10] = local_60;
        param_3[1] = puStack_a8;
        *param_3 = local_b0;
        param_3[3] = puStack_98;
        param_3[2] = local_a0;
        param_3[5] = puStack_88;
        param_3[4] = local_90;
        param_3[7] = puStack_78;
        param_3[6] = local_80;
        FUN_0086dc48(&local_b0);
        if ((long)param_2[7] < (long)param_1[7]) {
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
          local_70 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
          local_60 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
          local_50 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0086dc20(&local_b0,param_1);
          uVar3 = param_2[4];
          uVar2 = param_2[7];
          uVar1 = param_2[6];
          uVar5 = param_2[1];
          uVar4 = *param_2;
          uVar7 = param_2[3];
          uVar6 = param_2[2];
          param_1[5] = param_2[5];
          param_1[4] = uVar3;
          param_1[7] = uVar2;
          param_1[6] = uVar1;
          param_1[1] = uVar5;
          *param_1 = uVar4;
          param_1[3] = uVar7;
          param_1[2] = uVar6;
          uVar4 = param_2[0xb];
          uVar3 = param_2[10];
          uVar2 = param_2[0xd];
          uVar1 = param_2[0xc];
          uVar5 = param_2[8];
          param_1[9] = param_2[9];
          param_1[8] = uVar5;
          param_1[0xb] = uVar4;
          param_1[10] = uVar3;
          param_1[0xd] = uVar2;
          param_1[0xc] = uVar1;
          param_2[0xd] = puStack_48;
          param_2[0xc] = local_50;
          param_2[9] = puStack_68;
          param_2[8] = local_70;
          param_2[0xb] = puStack_58;
          param_2[10] = local_60;
          param_2[1] = puStack_a8;
          *param_2 = local_b0;
          param_2[3] = puStack_98;
          param_2[2] = local_a0;
          param_2[5] = puStack_88;
          param_2[4] = local_90;
          param_2[7] = puStack_78;
          param_2[6] = local_80;
          FUN_0086dc48(&local_b0);
        }
      }
    }
  }
  return;
}


// ===== 00909c00  FUN_00909c00 =====

bool FUN_00909c00(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  uVar2 = ((long)param_2 - (long)param_1 >> 4) * 0x6db6db6db6db6db7;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 != 2) {
LAB_00909d18:
      FUN_0090960c(param_1,param_1 + 0xe,param_1 + 0x1c);
      if (param_1 + 0x2a == param_2) {
        return true;
      }
      lVar6 = 0;
      iVar7 = 0;
      puVar4 = param_1 + 0x2a;
      puVar8 = param_1 + 0x1c;
      do {
        puVar5 = puVar4;
        if ((long)puVar5[7] < (long)puVar8[7]) {
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
          local_70 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
          local_60 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
          local_50 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0086dc20(&local_b0,puVar5);
          lVar1 = lVar6;
          do {
            lVar3 = lVar1;
            *(undefined8 *)((long)param_1 + lVar3 + 0x1b8) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x148);
            *(undefined8 *)((long)param_1 + lVar3 + 0x1b0) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x140);
            *(undefined8 *)((long)param_1 + lVar3 + 0x198) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x128);
            *(undefined8 *)((long)param_1 + lVar3 + 400) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x120);
            *(undefined8 *)((long)param_1 + lVar3 + 0x1a8) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x138);
            *(undefined8 *)((long)param_1 + lVar3 + 0x1a0) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x130);
            *(undefined8 *)((long)param_1 + lVar3 + 0x158) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0xe8);
            *(undefined8 *)((long)param_1 + lVar3 + 0x150) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0xe0);
            *(undefined8 *)((long)param_1 + lVar3 + 0x168) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0xf8);
            *(undefined8 *)((long)param_1 + lVar3 + 0x160) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0xf0);
            *(undefined8 *)((long)param_1 + lVar3 + 0x178) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x108);
            *(undefined8 *)((long)param_1 + lVar3 + 0x170) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x100);
            *(undefined8 *)((long)param_1 + lVar3 + 0x188) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x118);
            *(undefined8 *)((long)param_1 + lVar3 + 0x180) =
                 *(undefined8 *)((long)param_1 + lVar3 + 0x110);
            puVar4 = param_1;
            if (lVar3 == -0xe0) goto LAB_00909de0;
            lVar1 = lVar3 + -0x70;
          } while ((long)puStack_78 < *(long *)((long)param_1 + lVar3 + 0xa8));
          puVar4 = (undefined8 *)((long)param_1 + lVar3 + 0xe0);
LAB_00909de0:
          iVar7 = iVar7 + 1;
          puVar4[9] = puStack_68;
          puVar4[8] = local_70;
          puVar4[0xb] = puStack_58;
          puVar4[10] = local_60;
          puVar4[0xd] = puStack_48;
          puVar4[0xc] = local_50;
          puVar4[1] = puStack_a8;
          *puVar4 = local_b0;
          puVar4[3] = puStack_98;
          puVar4[2] = local_a0;
          puVar4[5] = puStack_88;
          puVar4[4] = local_90;
          puVar4[7] = puStack_78;
          puVar4[6] = local_80;
          if (iVar7 == 8) {
            FUN_0086dc48(&local_b0);
            return puVar5 + 0xe == param_2;
          }
          FUN_0086dc48(&local_b0);
        }
        lVar6 = lVar6 + 0x70;
        puVar4 = puVar5 + 0xe;
        puVar8 = puVar5;
        if (puVar5 + 0xe == param_2) {
          return true;
        }
      } while( true );
    }
    if ((long)param_1[7] <= (long)param_2[-7]) {
      return true;
    }
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_b0,param_1);
    uVar11 = param_2[-10];
    uVar10 = param_2[-7];
    uVar9 = param_2[-8];
    uVar13 = param_2[-0xd];
    uVar12 = param_2[-0xe];
    uVar15 = param_2[-0xb];
    uVar14 = param_2[-0xc];
    param_1[5] = param_2[-9];
    param_1[4] = uVar11;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[3] = uVar15;
    param_1[2] = uVar14;
    uVar12 = param_2[-3];
    uVar11 = param_2[-4];
    uVar10 = param_2[-1];
    uVar9 = param_2[-2];
    uVar13 = param_2[-6];
    param_1[9] = param_2[-5];
    param_1[8] = uVar13;
    param_1[0xb] = uVar12;
    param_1[10] = uVar11;
    param_1[0xd] = uVar10;
    param_1[0xc] = uVar9;
    param_2[-1] = puStack_48;
    param_2[-2] = local_50;
    param_2[-5] = puStack_68;
    param_2[-6] = local_70;
    param_2[-3] = puStack_58;
    param_2[-4] = local_60;
    param_2[-0xd] = puStack_a8;
    param_2[-0xe] = local_b0;
    param_2[-0xb] = puStack_98;
    param_2[-0xc] = local_a0;
    param_2[-9] = puStack_88;
    param_2[-10] = local_90;
    param_2[-7] = puStack_78;
    param_2[-8] = local_80;
  }
  else {
    if (uVar2 == 3) {
      FUN_0090960c(param_1,param_1 + 0xe,param_2 + -0xe);
      return true;
    }
    if (uVar2 != 4) {
      if (uVar2 == 5) {
        FUN_00909868(param_1,param_1 + 0xe,param_1 + 0x1c,param_1 + 0x2a,param_2 + -0xe);
        return true;
      }
      goto LAB_00909d18;
    }
    FUN_0090960c(param_1,param_1 + 0xe,param_1 + 0x1c);
    if ((long)param_1[0x23] <= (long)param_2[-7]) {
      return true;
    }
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_b0,param_1 + 0x1c);
    uVar11 = param_2[-10];
    uVar10 = param_2[-7];
    uVar9 = param_2[-8];
    uVar13 = param_2[-0xd];
    uVar12 = param_2[-0xe];
    uVar15 = param_2[-0xb];
    uVar14 = param_2[-0xc];
    param_1[0x21] = param_2[-9];
    param_1[0x20] = uVar11;
    param_1[0x23] = uVar10;
    param_1[0x22] = uVar9;
    param_1[0x1d] = uVar13;
    param_1[0x1c] = uVar12;
    param_1[0x1f] = uVar15;
    param_1[0x1e] = uVar14;
    uVar12 = param_2[-3];
    uVar11 = param_2[-4];
    uVar10 = param_2[-1];
    uVar9 = param_2[-2];
    uVar13 = param_2[-6];
    param_1[0x25] = param_2[-5];
    param_1[0x24] = uVar13;
    param_1[0x27] = uVar12;
    param_1[0x26] = uVar11;
    param_1[0x29] = uVar10;
    param_1[0x28] = uVar9;
    param_2[-1] = puStack_48;
    param_2[-2] = local_50;
    param_2[-5] = puStack_68;
    param_2[-6] = local_70;
    param_2[-3] = puStack_58;
    param_2[-4] = local_60;
    param_2[-0xd] = puStack_a8;
    param_2[-0xe] = local_b0;
    param_2[-0xb] = puStack_98;
    param_2[-0xc] = local_a0;
    param_2[-9] = puStack_88;
    param_2[-10] = local_90;
    param_2[-7] = puStack_78;
    param_2[-8] = local_80;
    FUN_0086dc48(&local_b0);
    if ((long)param_1[0x15] <= (long)param_1[0x23]) {
      return true;
    }
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_b0,param_1 + 0xe);
    param_1[0x17] = param_1[0x25];
    param_1[0x16] = param_1[0x24];
    param_1[0x19] = param_1[0x27];
    param_1[0x18] = param_1[0x26];
    param_1[0xf] = param_1[0x1d];
    param_1[0xe] = param_1[0x1c];
    param_1[0x11] = param_1[0x1f];
    param_1[0x10] = param_1[0x1e];
    param_1[0x13] = param_1[0x21];
    param_1[0x12] = param_1[0x20];
    param_1[0x15] = param_1[0x23];
    param_1[0x14] = param_1[0x22];
    param_1[0x1b] = param_1[0x29];
    param_1[0x1a] = param_1[0x28];
    param_1[0x1d] = puStack_a8;
    param_1[0x1c] = local_b0;
    param_1[0x1f] = puStack_98;
    param_1[0x1e] = local_a0;
    param_1[0x21] = puStack_88;
    param_1[0x20] = local_90;
    param_1[0x23] = puStack_78;
    param_1[0x22] = local_80;
    param_1[0x25] = puStack_68;
    param_1[0x24] = local_70;
    param_1[0x27] = puStack_58;
    param_1[0x26] = local_60;
    param_1[0x29] = puStack_48;
    param_1[0x28] = local_50;
    FUN_0086dc48(&local_b0);
    if ((long)param_1[7] <= (long)param_1[0x15]) {
      return true;
    }
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086dc20(&local_b0,param_1);
    param_1[9] = param_1[0x17];
    param_1[8] = param_1[0x16];
    param_1[0xb] = param_1[0x19];
    param_1[10] = param_1[0x18];
    param_1[1] = param_1[0xf];
    *param_1 = param_1[0xe];
    param_1[3] = param_1[0x11];
    param_1[2] = param_1[0x10];
    param_1[5] = param_1[0x13];
    param_1[4] = param_1[0x12];
    param_1[7] = param_1[0x15];
    param_1[6] = param_1[0x14];
    param_1[0xd] = param_1[0x1b];
    param_1[0xc] = param_1[0x1a];
    param_1[0xf] = puStack_a8;
    param_1[0xe] = local_b0;
    param_1[0x11] = puStack_98;
    param_1[0x10] = local_a0;
    param_1[0x13] = puStack_88;
    param_1[0x12] = local_90;
    param_1[0x15] = puStack_78;
    param_1[0x14] = local_80;
    param_1[0x17] = puStack_68;
    param_1[0x16] = local_70;
    param_1[0x19] = puStack_58;
    param_1[0x18] = local_60;
    param_1[0x1b] = puStack_48;
    param_1[0x1a] = local_50;
  }
  FUN_0086dc48(&local_b0);
  return true;
}


// ===== 00909fc0  FUN_00909fc0 =====

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_00909fc0(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  plVar12 = (long *)(param_1 + 8);
  plVar13 = plVar12;
  if ((long *)*plVar12 == (long *)0x0) {
LAB_0090a10c:
    auVar14._8_8_ = plVar13;
    auVar14._0_8_ = plVar12;
    return auVar14;
  }
  bVar1 = param_2[0xc];
  bVar2 = param_2[0x18];
  uVar4 = *(ushort *)(param_2 + 10);
  uVar5 = *(ushort *)(param_2 + 0x16);
  uVar6 = *(ushort *)(param_2 + 8);
  uVar7 = *(ushort *)(param_2 + 0x14);
  plVar11 = (long *)*plVar12;
LAB_0090a004:
  plVar12 = plVar11;
  uVar8 = *(ushort *)((long)plVar12 + 0x2a);
  if (uVar4 == uVar8) {
    uVar8 = *(ushort *)((long)plVar12 + 0x36);
    if (uVar5 != uVar8) {
      if (uVar5 < uVar8) goto LAB_00909ff8;
      if (uVar8 < uVar5) goto LAB_0090a0a8;
      goto LAB_0090a10c;
    }
    bVar10 = *(ushort *)(plVar12 + 5) <= uVar6;
    if ((uVar6 == *(ushort *)(plVar12 + 5)) &&
       (bVar10 = *(ushort *)((long)plVar12 + 0x34) <= uVar7,
       uVar7 == *(ushort *)((long)plVar12 + 0x34))) {
      if (bVar1 != *(byte *)((long)plVar12 + 0x2c)) {
        if (((bVar1 ^ 1) & *(byte *)((long)plVar12 + 0x2c) & 1) != 0) goto LAB_00909ff8;
        goto LAB_0090a074;
      }
      if (bVar2 == *(byte *)(plVar12 + 7)) {
        if (*param_2 < *(byte *)(plVar12 + 4)) goto LAB_00909ff8;
        goto LAB_0090a074;
      }
      if (((bVar2 ^ 1) & *(byte *)(plVar12 + 7) & 1) == 0) goto LAB_0090a074;
LAB_00909ff8:
      plVar11 = (long *)*plVar12;
      plVar13 = plVar12;
      goto joined_r0x0090a000;
    }
    if (!bVar10) goto LAB_00909ff8;
LAB_0090a074:
    bVar10 = uVar6 <= *(ushort *)(plVar12 + 5);
    if ((*(ushort *)(plVar12 + 5) == uVar6) &&
       (bVar10 = uVar7 <= *(ushort *)((long)plVar12 + 0x34),
       *(ushort *)((long)plVar12 + 0x34) == uVar7)) {
      bVar3 = *(byte *)((long)plVar12 + 0x2c);
      bVar9 = bVar1;
      if ((bVar3 == bVar1) && (bVar3 = *(byte *)(plVar12 + 7), bVar9 = bVar2, bVar3 == bVar2)) {
        if (*(byte *)(plVar12 + 4) < *param_2) goto LAB_0090a0a8;
        goto LAB_0090a10c;
      }
      if ((bVar3 != 0) || ((bVar9 & 1) == 0)) goto LAB_0090a10c;
    }
    else if (bVar10) goto LAB_0090a10c;
  }
  else {
    if (uVar4 < uVar8) goto LAB_00909ff8;
    if (uVar4 <= uVar8) goto LAB_0090a10c;
  }
LAB_0090a0a8:
  plVar13 = plVar12 + 1;
  plVar11 = (long *)*plVar13;
joined_r0x0090a000:
  if (plVar11 == (long *)0x0) goto LAB_0090a10c;
  goto LAB_0090a004;
}


// ===== 0090a114  FUN_0090a114 =====

undefined1  [16]
FUN_0090a114(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 *puVar1;
  
  auVar10 = FUN_00909fc0(param_2,param_4);
  puVar1 = auVar10._8_8_;
  puVar4 = (undefined8 *)*puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = 0;
LAB_0090a1c0:
    auVar10._8_8_ = uVar2;
    auVar10._0_8_ = puVar4;
    return auVar10;
  }
  puVar4 = (undefined8 *)operator_new(0x50);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    if (puVar4 + 4 != (undefined8 *)0x0) {
      uVar5 = param_4[1];
      uVar2 = *param_4;
      uVar7 = param_4[3];
      uVar6 = param_4[2];
      uVar9 = param_4[5];
      uVar8 = param_4[4];
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = auVar10._0_8_;
      puVar4[5] = uVar5;
      puVar4[4] = uVar2;
      puVar4[7] = uVar7;
      puVar4[6] = uVar6;
      puVar4[9] = uVar9;
      puVar4[8] = uVar8;
      *puVar1 = puVar4;
      puVar3 = puVar4;
      if (*(long *)*param_2 != 0) {
        *param_2 = *(long *)*param_2;
        puVar3 = (undefined8 *)*puVar1;
      }
      FUN_005d5b94(param_2[1],puVar3);
      uVar2 = 1;
      param_2[2] = param_2[2] + 1;
      goto LAB_0090a1c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0090a1f0  FUN_0090a1f0 =====

undefined1  [16]
FUN_0090a1f0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0090a25c;
      }
      if (*param_4 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_0090a2f8;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_0090a25c:
  plVar2 = (long *)operator_new(0xa8);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar8 = param_5[9];
  lVar7 = param_5[8];
  lVar10 = param_5[0xb];
  lVar9 = param_5[10];
  lVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[0xe] = lVar8;
  plVar2[0xd] = lVar7;
  plVar2[0x10] = lVar10;
  plVar2[0xf] = lVar9;
  lVar8 = param_5[0xd];
  lVar7 = param_5[0xc];
  lVar10 = param_5[0xf];
  lVar9 = param_5[0xe];
  plVar2[4] = lVar5;
  plVar2[0x12] = lVar8;
  plVar2[0x11] = lVar7;
  plVar2[0x14] = lVar10;
  plVar2[0x13] = lVar9;
  lVar5 = *param_5;
  lVar8 = param_5[3];
  lVar7 = param_5[2];
  plVar2[6] = param_5[1];
  plVar2[5] = lVar5;
  plVar2[8] = lVar8;
  plVar2[7] = lVar7;
  lVar5 = param_5[4];
  lVar8 = param_5[7];
  lVar7 = param_5[6];
  plVar2[10] = param_5[5];
  plVar2[9] = lVar5;
  plVar2[0xc] = lVar8;
  plVar2[0xb] = lVar7;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0090a2f8:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar2;
  return auVar11;
}


// ===== 0090a328  FUN_0090a328 =====

void FUN_0090a328(long *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined4 local_d4;
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
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined5 uStack_55;
  undefined1 *local_50;
  
  lVar9 = *param_1;
  if ((*(byte *)(lVar9 + 0x22) & 1) == 0) {
    uVar5 = param_2 & 0xffff;
  }
  else {
    uVar1 = (uint)param_2 & 0xffff;
    uVar6 = (uint)*(ushort *)(lVar9 + 0x20);
    uVar2 = (uint)param_2 - uVar6;
    iVar3 = (int)(short)uVar2;
    bVar4 = uVar6 < uVar1;
    if (uVar1 - uVar6 != 0x8000) {
      bVar4 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
    }
    uVar5 = (ulong)uVar2 & 0xffff;
    if (!bVar4) {
      uVar5 = (ulong)uVar2 & 0xffff | 0xffffffffffff0000;
    }
    uVar5 = uVar5 + *(long *)(lVar9 + 0x18);
  }
  *(short *)(lVar9 + 0x20) = (short)param_2;
  *(undefined1 *)(lVar9 + 0x22) = 1;
  *(ulong *)(lVar9 + 0x18) = uVar5;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  local_58 = 0xaaaa;
  local_56 = 0xaa;
  uStack_55 = 0xaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaa;
  local_5c = 0xaaaaaaaa;
  FUN_00908588(&local_d0,lVar9,uVar5,param_3 + 0x7fffffffffffffffU < 0xfffffffffffffffe);
  if (((ulong)local_50 & 1) == 0) {
    plVar7 = (long *)param_1[1];
  }
  else {
    uVar5 = FUN_008c06d4(&puStack_80,lVar9 + 0x48);
    if ((uVar5 & 1) != 0) {
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      local_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_d8 = 0xaaaa;
      uStack_d6 = 0xaa;
      uStack_d5 = 0xaa;
      local_d4 = 0xaaaaaaaa;
      uStack_e0 = 0xaaaaaaaa;
      local_dc = 0xaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0086dbdc(&local_140);
      if (((ulong)local_50 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      local_100 = puStack_88;
      puStack_138 = puStack_c0;
      local_140 = puStack_c8;
      puStack_128 = local_b0;
      local_130 = puStack_b8;
      puStack_118 = puStack_a0;
      local_120 = puStack_a8;
      puStack_108 = local_90;
      local_110 = puStack_98;
      if (param_3 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
        lVar9 = *(long *)(lVar9 + 0x70);
        local_f8 = (undefined1 *)0x7fffffffffffffff;
        if ((lVar9 != 0x7fffffffffffffff) &&
           (lVar8 = (param_3 / 1000) * 1000, lVar8 != 0x7fffffffffffffff)) {
          local_f8 = (undefined1 *)0x8000000000000000;
          if (lVar8 != -0x8000000000000000 && lVar9 != -0x8000000000000000) {
            local_f8 = (undefined1 *)(lVar9 + lVar8);
          }
        }
      }
      if ((char)local_d4 != '\x01') {
        local_d4 = CONCAT31(local_d4._1_3_,1);
        uStack_d5 = 0;
      }
      uStack_d8 = local_58;
      local_dc = local_5c;
      uStack_d6 = local_56;
      lVar9 = param_1[2];
      uVar5 = *(ulong *)(lVar9 + 8);
      if (uVar5 < *(ulong *)(lVar9 + 0x10)) {
        if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_0086dc20(uVar5,&local_140);
        lVar8 = uVar5 + 0x70;
      }
      else {
        lVar8 = FUN_0086e414(lVar9,&local_140);
      }
      *(long *)(lVar9 + 8) = lVar8;
      FUN_0086dc48(&local_140);
      return;
    }
    plVar7 = (long *)param_1[3];
  }
  *plVar7 = *plVar7 + 1;
  return;
}


// ===== 0090a588  FUN_0090a588 =====

void FUN_0090a588(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3d390;
  param_1[1] = 0;
  return;
}


// ===== 0090a5a0  FUN_0090a5a0 =====

void FUN_0090a5a0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *__dest;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *local_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  
  pvVar3 = (void *)*param_2;
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = (void *)0x0;
  uVar4 = param_2[1] - (long)pvVar3;
  if (uVar4 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(uVar4);
    local_60 = __dest;
    local_50 = (void *)((long)__dest + uVar4);
    memcpy(__dest,pvVar3,uVar4);
    local_58 = (void *)((long)__dest + uVar4);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_48 = param_3;
  if (puVar1 < *(undefined8 **)(param_1 + 0x18)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = __dest;
    puVar1[1] = local_58;
    puVar1[2] = local_58;
    puVar1[3] = param_3;
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 4;
  }
  else {
    uVar2 = FUN_0090afe8(param_1 + 8,&local_60);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    if (local_60 != (void *)0x0) {
      uVar5 = (ulong)((long)local_58 + (-4 - ((long)local_58 << 0x3e))) >> 2;
      uVar4 = (ulong)(((long)local_60 - (long)local_58 << 0x3e) - ((long)local_60 - (long)local_58))
              >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      pvVar3 = local_58;
      if ((1 < uVar4) && ((((int)local_60 - (int)local_58 | -(int)local_58) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar3 = (void *)((long)local_58 + uVar4 * -4);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar3 != local_60) {
        pvVar3 = (void *)((long)pvVar3 + -4);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  return;
}


// ===== 0090a710  FUN_0090a710 =====

void FUN_0090a710(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = lVar1;
  for (; (lVar1 != *(long *)(param_1 + 0x10) && (lVar2 = lVar1, *(long *)(lVar1 + 0x18) != param_2))
      ; lVar1 = lVar1 + 0x20) {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  FUN_0090a744((long *)(param_1 + 8),lVar2);
  return;
}


// ===== 0090a744  FUN_0090a744 =====

undefined8 * FUN_0090a744(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (param_2 == puVar6) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  puVar8 = param_2 + 4;
  puVar7 = param_2;
  if (puVar8 != puVar6) {
    do {
      pvVar2 = (void *)*puVar7;
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)puVar7[1];
        uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
        uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3e) - ((long)pvVar2 - (long)pvVar3)) >> 2;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
          uVar4 = uVar4 & 0x3ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        while (pvVar3 != pvVar2) {
          pvVar3 = (void *)((long)pvVar3 + -4);
          if (pvVar3 == (void *)0x0) goto LAB_0090a8fc;
        }
        puVar7[1] = pvVar2;
        operator_delete(pvVar2);
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      *puVar7 = *puVar8;
      puVar7[1] = puVar8[1];
      puVar7[2] = puVar8[2];
      puVar1 = puVar8 + 3;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8 = puVar8 + 4;
      puVar7[3] = *puVar1;
      puVar7 = puVar7 + 4;
    } while (puVar8 != puVar6);
    puVar6 = *(undefined8 **)(param_1 + 8);
  }
  while( true ) {
    puVar8 = puVar6;
    if (puVar7 == puVar8) {
      *(undefined8 **)(param_1 + 8) = puVar7;
      return param_2;
    }
    puVar6 = puVar8 + -4;
    if (puVar6 == (undefined8 *)0x0) break;
    pvVar2 = (void *)*puVar6;
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)puVar8[-3];
      uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
      uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3e) - ((long)pvVar2 - (long)pvVar3)) >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar3 != pvVar2) {
        pvVar3 = (void *)((long)pvVar3 + -4);
        if (pvVar3 == (void *)0x0) goto LAB_0090a8fc;
      }
      puVar8[-3] = pvVar2;
      operator_delete(pvVar2);
    }
  }
LAB_0090a8fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0090a924  FUN_0090a924 =====

/* WARNING: Removing unreachable block (ram,0x0090acc8) */
/* WARNING: Removing unreachable block (ram,0x0090acdc) */
/* WARNING: Removing unreachable block (ram,0x0090ace4) */

void FUN_0090a924(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar15;
  undefined1 (*pauVar16) [16];
  short sVar17;
  undefined8 *__dest;
  undefined8 *__src;
  size_t __n;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  int *piVar14;
  
  lVar15 = *(long *)(param_2 + 0x18);
  lVar22 = *(long *)(param_2 + 0x20);
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  if (lVar15 != lVar22) {
    puVar9 = (undefined8 *)0x0;
    do {
      puVar8 = puVar9;
      if (*(char *)(lVar15 + 0x6c) == '\x01') {
        local_88 = CONCAT31(local_88._1_3_,
                            *(long *)(lVar15 + 0x48) + 0x7fffffffffffffffU < 0xfffffffffffffffe);
        uStack_84 = *(undefined4 *)(lVar15 + 100);
        uStack_80 = CONCAT31(uStack_80._1_3_,1);
        uStack_7c = *(undefined2 *)(lVar15 + 0x68);
        uStack_7a = *(undefined1 *)(lVar15 + 0x6a);
        if (puVar9 < local_68) {
          if (puVar9 == (undefined8 *)0x0) {
LAB_0090ad80:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar8 = puVar9 + 2;
          puVar9[1] = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
          *puVar9 = CONCAT44(uStack_84,local_88);
          local_70 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_0090b248(&local_78,&local_88);
          local_70 = puVar8;
        }
      }
      lVar15 = lVar15 + 0x70;
      puVar9 = puVar8;
    } while (lVar15 != lVar22);
  }
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
  puVar9 = local_78;
  puVar8 = local_70;
  do {
    local_78 = puVar9;
    local_70 = puVar8;
    if (plVar3 == plVar4) {
      if (puVar9 != (undefined8 *)0x0) {
        uVar11 = (ulong)((long)puVar8 + (-0x10 - ((long)puVar8 << 0x3c))) >> 4;
        uVar12 = (ulong)(((long)puVar9 - (long)puVar8 << 0x3c) - ((long)puVar9 - (long)puVar8)) >> 4
        ;
        if (uVar11 <= uVar12) {
          uVar12 = uVar11;
        }
        if ((1 < uVar12) && ((((int)puVar9 - (int)puVar8 | -(int)puVar8) & 0xfU) == 0)) {
          uVar12 = uVar12 & 0xffffffffffffffe;
          puVar8 = puVar8 + uVar12 * -2;
          do {
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        while (puVar8 != puVar9) {
          puVar8 = puVar8 + -2;
          if (puVar8 == (undefined8 *)0x0) {
LAB_0090ad6c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_70 = puVar9;
        operator_delete(puVar9);
      }
      return;
    }
    if (puVar9 != puVar8) {
      puVar18 = (undefined8 *)0x0;
      __src = (undefined8 *)0x0;
      puVar20 = (undefined8 *)0x0;
      do {
        piVar14 = (int *)*plVar3;
        piVar5 = (int *)plVar3[1];
        __dest = __src;
        puVar19 = puVar20;
        if (piVar14 != piVar5) {
          iVar6 = *(int *)((long)puVar9 + 4);
          uVar12 = (long)piVar5 + (-4 - (long)piVar14);
          if (uVar12 < 0x1c) {
            lVar15 = 0;
            piVar13 = piVar14;
LAB_0090ab40:
            do {
              piVar14 = piVar13 + 1;
              uVar2 = 0;
              if (*piVar13 == iVar6) {
                uVar2 = (uint)*(byte *)(puVar9 + 1);
              }
              lVar15 = lVar15 + (ulong)uVar2;
              piVar13 = piVar14;
            } while (piVar14 != piVar5);
          }
          else {
            lVar15 = 0;
            lVar22 = 0;
            lVar23 = 0;
            lVar24 = 0;
            lVar25 = 0;
            lVar26 = 0;
            lVar27 = 0;
            lVar28 = 0;
            uVar12 = (uVar12 >> 2) + 1;
            uVar11 = uVar12 & 0x7ffffffffffffff8;
            piVar13 = piVar14 + (uVar12 & 0x7ffffffffffffff8);
            pauVar16 = (undefined1 (*) [16])(piVar14 + 4);
            do {
              pauVar1 = pauVar16 + -1;
              auVar7 = *pauVar16;
              sVar17 = -(ushort)(*(byte *)(puVar9 + 1) != 0);
              uVar11 = uVar11 - 8;
              pauVar16 = pauVar16 + 2;
              uVar31 = CONCAT26(sVar17,CONCAT24(sVar17,CONCAT22(sVar17,sVar17)));
              auVar30._4_4_ = iVar6;
              auVar30._0_4_ = iVar6;
              auVar30._8_4_ = iVar6;
              auVar30._12_4_ = iVar6;
              auVar30 = NEON_cmeq(*pauVar1,auVar30,4);
              auVar32._4_4_ = iVar6;
              auVar32._0_4_ = iVar6;
              auVar32._8_4_ = iVar6;
              auVar32._12_4_ = iVar6;
              auVar32 = NEON_cmeq(auVar7,auVar32,4);
              uVar29 = CONCAT26(auVar30._12_2_,
                                CONCAT24(auVar30._8_2_,CONCAT22(auVar30._4_2_,auVar30._0_2_))) &
                       uVar31;
              uVar31 = CONCAT26(auVar32._12_2_,
                                CONCAT24(auVar32._8_2_,CONCAT22(auVar32._4_2_,auVar32._0_2_))) &
                       uVar31;
              lVar25 = lVar25 + (ulong)((byte)(uVar29 >> 0x20) & 1);
              lVar26 = lVar26 + (ulong)((byte)(uVar29 >> 0x30) & 1);
              lVar23 = lVar23 + (ulong)((byte)uVar29 & 1);
              lVar24 = lVar24 + (ulong)((byte)(uVar29 >> 0x10) & 1);
              lVar27 = lVar27 + (ulong)((byte)uVar31 & 1);
              lVar28 = lVar28 + (ulong)((byte)(uVar31 >> 0x10) & 1);
              lVar15 = lVar15 + (ulong)((byte)(uVar31 >> 0x20) & 1);
              lVar22 = lVar22 + (ulong)((byte)(uVar31 >> 0x30) & 1);
            } while (uVar11 != 0);
            lVar15 = lVar27 + lVar23 + lVar15 + lVar25 + lVar28 + lVar24 + lVar22 + lVar26;
            if (uVar12 != (uVar12 & 0x7ffffffffffffff8)) goto LAB_0090ab40;
          }
          if (0 < lVar15) {
            if (puVar20 < puVar18) {
              if (puVar20 == (undefined8 *)0x0) goto LAB_0090ad80;
              uVar21 = *puVar9;
              puVar19 = puVar20 + 2;
              puVar20[1] = puVar9[1];
              *puVar20 = uVar21;
            }
            else {
              __n = (long)puVar20 - (long)__src;
              uVar12 = ((long)__n >> 4) + 1;
              if (uVar12 >> 0x3c != 0) {
                FUN_0090b33c();
LAB_0090adcc:
                    /* WARNING: Subroutine does not return */
                FUN_005d55a4();
              }
              uVar11 = (long)puVar18 - (long)__src >> 3;
              if (uVar11 <= uVar12) {
                uVar11 = uVar12;
              }
              if (0x7fffffffffffffef < (ulong)((long)puVar18 - (long)__src)) {
                uVar11 = 0xfffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar10 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3c != 0) goto LAB_0090adcc;
                pvVar10 = operator_new(uVar11 << 4);
              }
              puVar20 = (undefined8 *)((long)pvVar10 + __n);
              if (puVar20 == (undefined8 *)0x0) goto LAB_0090ad80;
              uVar21 = *puVar9;
              puVar18 = (undefined8 *)((long)pvVar10 + uVar11 * 0x10);
              __dest = puVar20 + ((long)__n >> 4) * -2;
              puVar19 = puVar20 + 2;
              puVar20[1] = puVar9[1];
              *puVar20 = uVar21;
              memcpy(__dest,__src,__n);
              if (__src != (undefined8 *)0x0) {
                operator_delete(__src);
              }
            }
          }
        }
        puVar9 = puVar9 + 2;
        __src = __dest;
        puVar20 = puVar19;
      } while (puVar9 != puVar8);
      if (__dest == puVar19) {
        if (__dest != (undefined8 *)0x0) {
          while (puVar19 != __dest) {
            puVar19 = puVar19 + -2;
            if (puVar19 == (undefined8 *)0x0) goto LAB_0090ad6c;
          }
          goto LAB_0090aa10;
        }
      }
      else {
        local_a0 = __dest;
        local_98 = puVar19;
        local_90 = puVar18;
        (**(code **)(*(long *)plVar3[3] + 0x10))((long *)plVar3[3],&local_a0);
        if (local_a0 != (undefined8 *)0x0) {
          uVar11 = (ulong)((long)local_98 + (-0x10 - ((long)local_98 << 0x3c))) >> 4;
          uVar12 = (ulong)(((long)local_a0 - (long)local_98 << 0x3c) -
                          ((long)local_a0 - (long)local_98)) >> 4;
          if (uVar11 <= uVar12) {
            uVar12 = uVar11;
          }
          puVar9 = local_98;
          if ((1 < uVar12) && ((((int)local_a0 - (int)local_98 | -(int)local_98) & 0xfU) == 0)) {
            uVar12 = uVar12 & 0xffffffffffffffe;
            puVar9 = local_98 + uVar12 * -2;
            do {
              uVar12 = uVar12 - 2;
            } while (uVar12 != 0);
          }
          while (puVar9 != local_a0) {
            puVar9 = puVar9 + -2;
            if (puVar9 == (undefined8 *)0x0) goto LAB_0090ad6c;
          }
          local_98 = local_a0;
          __dest = local_a0;
LAB_0090aa10:
          operator_delete(__dest);
        }
      }
    }
    plVar3 = plVar3 + 4;
    puVar9 = local_78;
    puVar8 = local_70;
  } while( true );
}


// ===== 0090add0  FUN_0090add0 =====

void FUN_0090add0(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = puVar7;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar7 != *(undefined8 **)(param_1 + 0x10)) {
    do {
      puVar2 = puVar3 + -4;
      if (puVar2 == (undefined8 *)0x0) {
LAB_0090aeb8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        pvVar4 = (void *)puVar3[-3];
        uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
        uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3e) - ((long)pvVar1 - (long)pvVar4)) >> 2;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
          uVar5 = uVar5 & 0x3ffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (pvVar4 != pvVar1) {
          pvVar4 = (void *)((long)pvVar4 + -4);
          if (pvVar4 == (void *)0x0) goto LAB_0090aeb8;
        }
        puVar3[-3] = pvVar1;
        operator_delete(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar7 != puVar2);
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar7;
  operator_delete(puVar2);
  return;
}


// ===== 0090aee0  FUN_0090aee0 =====

void FUN_0090aee0(void *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)((long)param_1 + 8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar2 = puVar7;
    puVar3 = *(undefined8 **)((long)param_1 + 0x10);
    if (puVar7 != *(undefined8 **)((long)param_1 + 0x10)) {
      do {
        puVar2 = puVar3 + -4;
        if (puVar2 == (undefined8 *)0x0) {
LAB_0090afd4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          pvVar4 = (void *)puVar3[-3];
          uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
          uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3e) - ((long)pvVar1 - (long)pvVar4)) >>
                  2;
          if (uVar6 <= uVar5) {
            uVar5 = uVar6;
          }
          if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
            uVar5 = uVar5 & 0x3ffffffffffffffe;
            pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          while (pvVar4 != pvVar1) {
            pvVar4 = (void *)((long)pvVar4 + -4);
            if (pvVar4 == (void *)0x0) goto LAB_0090afd4;
          }
          puVar3[-3] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar7 != puVar2);
      puVar2 = *(undefined8 **)((long)param_1 + 8);
    }
    *(undefined8 **)((long)param_1 + 0x10) = puVar7;
    operator_delete(puVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0090afe8  FUN_0090afe8 =====

undefined8 * FUN_0090afe8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long local_50;
  undefined8 *local_48;
  long local_40;
  void *local_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    local_50 = 0;
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 4;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar5 = 0x7ffffffffffffff;
    }
    if (uVar5 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3b != 0) goto LAB_0090b11c;
      pvVar3 = operator_new(uVar5 << 5);
    }
    local_38 = (void *)((long)pvVar3 + uVar5 * 0x20);
    local_48 = (undefined8 *)((long)pvVar3 + lVar6);
    if (local_48 != (undefined8 *)0x0) {
      *local_48 = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      *local_48 = *param_2;
      local_48[1] = param_2[1];
      local_48[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar2 = local_48 + 4;
      local_48[3] = param_2[3];
      __n = param_1[1] - *param_1;
      pvVar3 = (void *)((long)local_48 - __n);
      memcpy(pvVar3,(void *)*param_1,__n);
      local_50 = *param_1;
      lVar6 = param_1[2];
      *param_1 = (long)pvVar3;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)local_38;
      local_48 = (undefined8 *)local_50;
      local_40 = local_50;
      local_38 = (void *)lVar6;
      FUN_0090b120(&local_50);
      return puVar2;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_0090b230();
LAB_0090b11c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 0090b120  FUN_0090b120 =====

void FUN_0090b120(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  while( true ) {
    puVar3 = puVar2;
    if (puVar1 == puVar3) {
      param_1[2] = puVar3;
      if ((void *)*param_1 == (void *)0x0) {
        return;
      }
      operator_delete((void *)*param_1);
      return;
    }
    puVar2 = puVar3 + -4;
    if (puVar2 == (undefined8 *)0x0) break;
    pvVar4 = (void *)*puVar2;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)puVar3[-3];
      uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
      uVar6 = (ulong)(((long)pvVar4 - (long)pvVar5 << 0x3e) - ((long)pvVar4 - (long)pvVar5)) >> 2;
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
      if ((1 < uVar6) && ((((int)pvVar4 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (pvVar5 != pvVar4) {
        pvVar5 = (void *)((long)pvVar5 + -4);
        if (pvVar5 == (void *)0x0) goto LAB_0090b1dc;
      }
      puVar3[-3] = pvVar4;
      operator_delete(pvVar4);
    }
  }
LAB_0090b1dc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0090b230  FUN_0090b230 =====

void FUN_0090b230(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0090b248  FUN_0090b248 =====

undefined8 * FUN_0090b248(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_0090b33c();
LAB_0090b338:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 3;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffef < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3c != 0) goto LAB_0090b338;
    pvVar2 = operator_new(uVar5 << 4);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 2);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0090b33c  FUN_0090b33c =====

void FUN_0090b33c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0090b354  FUN_0090b354 =====

void FUN_0090b354(ulong *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  
  if ((ulong)param_2[1] >> 0x3c == 0) {
    FUN_0090b67c(param_1,0);
    uVar2 = param_2[1];
    if (uVar2 != 0) {
      uVar3 = 0;
      lVar4 = 8;
      do {
        if ((*(ulong *)(*param_2 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
          if (*param_1 >> 1 <= uVar3) goto LAB_0090b3fc;
          puVar5 = param_1 + 1;
          if ((*param_1 & 1) != 0) {
            puVar5 = (ulong *)param_1[1];
          }
          if (*(char *)((long)puVar5 + lVar4) == '\x01') {
            *(undefined1 *)((long)puVar5 + lVar4) = 0;
            uVar2 = param_2[1];
          }
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar3 < uVar2);
    }
    return;
  }
LAB_0090b3fc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x90b400);
  (*pcVar1)();
}


// ===== 0090b400  FUN_0090b400 =====

void FUN_0090b400(ulong *param_1,ulong *param_2,int param_3)

{
  int *piVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  int local_44;
  
  uVar3 = *param_2;
  *param_1 = 0;
  puVar6 = param_1 + 1;
  param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  *puVar6 = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  FUN_0090b8b8(param_1,uVar3 >> 1);
  puVar5 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  uVar3 = *param_2 & 0x1ffffffffffffffe;
  lVar7 = uVar3 << 3;
  if (uVar3 != 0) {
    puVar5 = puVar5 + 1;
    do {
      if ((char)*puVar5 == '\x01') {
        local_44 = param_3 - (int)puVar5[-1];
      }
      else {
        local_44 = 0;
      }
      uVar4 = *param_1;
      uVar3 = 4;
      if ((uVar4 & 1) != 0) {
        uVar3 = param_1[2];
      }
      if (uVar4 >> 1 == uVar3) {
        FUN_007d577c(param_1,&local_44);
      }
      else {
        puVar2 = puVar6;
        if ((uVar4 & 1) != 0) {
          puVar2 = (ulong *)*puVar6;
        }
        piVar1 = (int *)((long)puVar2 + (uVar4 >> 1) * 4);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *piVar1 = local_44;
        *param_1 = *param_1 + 2;
      }
      lVar7 = lVar7 + -0x10;
      puVar5 = puVar5 + 2;
    } while (lVar7 != 0);
  }
  return;
}


// ===== 0090b51c  FUN_0090b51c =====

void FUN_0090b51c(undefined8 *param_1,ulong *param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  char *local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  char *local_40;
  char **ppcStack_38;
  undefined1 uStack_11;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0090b400();
  uVar2 = param_4[1];
  uVar3 = *param_2 >> 1;
  if (uVar2 != uVar3) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      local_58 = "../../modules/video_coding/chain_diff_calculator.cc";
      uStack_50 = 0x17b;
      local_48 = &uStack_11;
      ppcStack_38 = &local_58;
      local_40 = "Insconsistent chain configuration for frame#";
      FUN_00623bb0(&DAT_002258ea,"../../modules/video_coding/chain_diff_calculator.cc",0x17b,
                   "Insconsistent chain configuration for frame#",param_3,": expected ",
                   *param_2 >> 1," chains, found ",param_4[1]);
    }
    uVar2 = param_4[1];
    uVar3 = *param_2 >> 1;
  }
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      if ((ulong)param_4[1] <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector_bool.h:302: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                  );
      }
      if ((*(ulong *)(*param_4 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
        if (*param_2 >> 1 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x90b67c);
          (*pcVar1)();
        }
        puVar5 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          puVar5 = (ulong *)param_2[1];
        }
        *(undefined8 *)((long)puVar5 + lVar4) = param_3;
        *(undefined1 *)((undefined8 *)((long)puVar5 + lVar4) + 1) = 1;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar2 != uVar3);
  }
  return;
}


// ===== 0090b67c  FUN_0090b67c =====

void FUN_0090b67c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar11 = param_1 + 1;
  uVar13 = *param_1;
  if ((uVar13 & 1) == 0) {
    uVar6 = 4;
  }
  else {
    puVar11 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar12 = uVar13 >> 1;
  if (uVar12 < param_3) {
    if (uVar6 < param_3) {
      uVar6 = uVar6 * 2;
      if (uVar6 < param_3 || uVar6 - param_3 == 0) {
        uVar6 = param_3;
      }
      if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      puVar5 = (ulong *)operator_new(uVar6 << 4);
      puVar10 = puVar5 + uVar12 * 2;
      uVar9 = param_3 + ~uVar12;
      uVar7 = 0;
      uVar2 = (ulong)-(long)puVar10 >> 4;
      if (uVar9 <= (ulong)-(long)puVar10 >> 4) {
        uVar2 = uVar9;
      }
      if (1 < uVar2) {
        uVar7 = 0;
        uVar1 = (ulong)-(long)puVar10 >> 4;
        if (uVar9 <= (ulong)-(long)puVar10 >> 4) {
          uVar1 = uVar9;
        }
        if (((-(int)puVar5 & 0xfU) == 0) && (puVar10 <= puVar10 + uVar1 * 2)) {
          uVar7 = uVar2 & 0xffffffffffffffe;
          puVar10 = puVar10 + 2;
          uVar9 = uVar7;
          do {
            *(undefined1 *)(puVar10 + -2) = 0;
            uVar9 = uVar9 - 2;
            *(undefined1 *)puVar10 = 0;
            *(undefined1 *)(puVar10 + -1) = 0;
            *(undefined1 *)(puVar10 + 1) = 0;
            puVar10 = puVar10 + 4;
          } while (uVar9 != 0);
        }
      }
      lVar8 = (uVar7 + uVar12) - param_3;
      puVar10 = puVar5 + uVar12 * 2 + uVar7 * 2;
      do {
        if (puVar10 == (ulong *)0x0) goto LAB_0090b8a0;
        *(undefined1 *)puVar10 = 0;
        bVar4 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        *(undefined1 *)(puVar10 + 1) = 0;
        puVar10 = puVar10 + 2;
        puVar3 = puVar5;
      } while (bVar4);
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        if (puVar3 == (ulong *)0x0) {
LAB_0090b8a0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar9 = *puVar11;
        puVar3[1] = puVar11[1];
        *puVar3 = uVar9;
        puVar3 = puVar3 + 2;
        puVar11 = puVar11 + 2;
      }
      if ((uVar13 & 1) != 0) {
        operator_delete((void *)param_1[1]);
        uVar13 = *param_1;
      }
      uVar13 = uVar13 | 1;
      param_1[1] = (ulong)puVar5;
      param_1[2] = uVar6;
    }
    else {
      puVar10 = puVar11 + uVar12 * 2;
      uVar13 = param_3 + ~uVar12;
      uVar6 = (ulong)-(long)puVar10 >> 4;
      if (uVar13 <= (ulong)-(long)puVar10 >> 4) {
        uVar6 = uVar13;
      }
      uVar9 = 0;
      if (1 < uVar6) {
        uVar9 = 0;
        uVar2 = (ulong)-(long)puVar10 >> 4;
        if (uVar13 <= (ulong)-(long)puVar10 >> 4) {
          uVar2 = uVar13;
        }
        if (((-(int)puVar11 & 0xfU) == 0) && (puVar10 <= puVar10 + uVar2 * 2)) {
          uVar9 = uVar6 & 0xffffffffffffffe;
          puVar10 = puVar10 + 2;
          uVar13 = uVar9;
          do {
            *(undefined1 *)(puVar10 + -2) = 0;
            uVar13 = uVar13 - 2;
            *(undefined1 *)puVar10 = 0;
            *(undefined1 *)(puVar10 + -1) = 0;
            *(undefined1 *)(puVar10 + 1) = 0;
            puVar10 = puVar10 + 4;
          } while (uVar13 != 0);
        }
      }
      lVar8 = (uVar9 + uVar12) - param_3;
      puVar11 = puVar11 + uVar12 * 2 + uVar9 * 2;
      do {
        if (puVar11 == (ulong *)0x0) goto LAB_0090b8a0;
        *(undefined1 *)puVar11 = 0;
        bVar4 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        *(undefined1 *)(puVar11 + 1) = 0;
        puVar11 = puVar11 + 2;
      } while (bVar4);
      uVar13 = *param_1;
    }
  }
  *param_1 = uVar13 & 1 | param_3 << 1;
  return;
}


// ===== 0090b8b8  FUN_0090b8b8 =====

void FUN_0090b8b8(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar12 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  if (uVar3 < param_2) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar13 = uVar11 >> 1;
    pvVar2 = operator_new(uVar3 << 2);
    if (uVar13 != 0) {
      uVar7 = uVar13 - 1;
      uVar14 = (ulong)-(long)pvVar2 >> 2;
      if (uVar7 <= (ulong)-(long)pvVar2 >> 2) {
        uVar14 = uVar7;
      }
      if (uVar14 < 0x20) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        uVar10 = (ulong)-(long)pvVar2 >> 2;
        if (uVar7 <= uVar10) {
          uVar10 = uVar7;
        }
        if ((((-(long)pvVar2 & 3U) == 0) &&
            (pvVar2 <= (void *)((long)pvVar2 + uVar10 * 4) &&
             puVar12 <= (ulong *)((long)puVar12 + uVar10 * 4))) &&
           (0x1f < (ulong)((long)pvVar2 - (long)puVar12))) {
          puVar9 = (ulong *)((long)pvVar2 + 0x10);
          uVar7 = uVar14 + 1 & 7;
          uVar10 = 8;
          if (uVar7 != 0) {
            uVar10 = uVar7;
          }
          puVar8 = puVar12 + 2;
          lVar4 = (uVar14 + 1) - uVar10;
          puVar12 = (ulong *)((long)puVar12 + lVar4 * 4);
          lVar5 = lVar4;
          do {
            puVar1 = puVar8 + -1;
            uVar14 = puVar8[-2];
            uVar10 = puVar8[1];
            uVar7 = *puVar8;
            lVar5 = lVar5 + -8;
            puVar8 = puVar8 + 4;
            puVar9[-1] = *puVar1;
            puVar9[-2] = uVar14;
            puVar9[1] = uVar10;
            *puVar9 = uVar7;
            puVar9 = puVar9 + 4;
          } while (lVar5 != 0);
        }
      }
      lVar5 = uVar13 - lVar4;
      puVar6 = (undefined4 *)((long)pvVar2 + lVar4 * 4);
      do {
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        lVar5 = lVar5 + -1;
        *puVar6 = (int)*puVar12;
        puVar6 = puVar6 + 1;
        puVar12 = (ulong *)((long)puVar12 + 4);
      } while (lVar5 != 0);
    }
    if ((uVar11 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar11 = *param_1;
    }
    param_1[1] = (ulong)pvVar2;
    param_1[2] = uVar3;
    *param_1 = uVar11 | 1;
  }
  return;
}


// ===== 0090ba2c  FUN_0090ba2c =====

void FUN_0090ba2c(undefined8 *param_1,ulong *param_2,ulong param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  long lVar12;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 uStack_89;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined8 **ppuStack_78;
  undefined8 **local_70;
  undefined8 ***local_68;
  
  *param_1 = 0;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  lVar12 = param_5 * 8;
  puVar1 = param_4;
  for (lVar8 = lVar12; lVar8 != 0; lVar8 = lVar8 + -8) {
    uVar2 = *puVar1;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/video_coding/frame_dependencies_calculator.cc",0x21,
                   "buffer_usage.id >= 0",&DAT_001fbedc,(ulong)uVar2,0);
    }
    if (*param_2 >> 1 <= (ulong)uVar2) {
      if ((int)(uVar2 + 1) < 0) goto LAB_0090babc;
      FUN_0090bfa4(param_2,0);
    }
    puVar1 = puVar1 + 2;
  }
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = (undefined8 *)0x0;
  local_a8 = &local_a0;
  local_c0 = &local_b8;
  puVar1 = param_4;
  for (lVar8 = lVar12; lVar8 != 0; lVar8 = lVar8 + -8) {
    if ((char)puVar1[1] == '\x01') {
      if (*param_2 >> 1 <= (ulong)(long)(int)*puVar1) goto LAB_0090babc;
      puVar9 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        puVar9 = (ulong *)param_2[1];
      }
      puVar9 = puVar9 + (long)(int)*puVar1 * 7;
      if ((puVar9[1] & 1) == 0) {
        uVar6 = FUN_004249b0();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001fdc6c,"../../modules/video_coding/frame_dependencies_calculator.cc",
                       0x17b,"Odd configuration: frame ",param_3," references buffer #",*puVar1,
                       " that was never updated.");
        }
      }
      else {
        FUN_0090c1c0(0,&local_a8,&local_a8,puVar9);
        puVar7 = puVar9 + 3;
        if ((puVar9[2] & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        FUN_0090c2c4(&local_c0,puVar7,puVar7 + (puVar9[2] >> 1));
      }
    }
    puVar1 = puVar1 + 2;
  }
  local_88 = param_1;
  local_80 = &local_b8;
  ppuStack_78 = local_c0;
  local_70 = &local_a0;
  local_68 = (undefined8 ***)local_a8;
  FUN_0090bd20(&local_68,&local_70,&ppuStack_78,&local_80,&local_88,&uStack_89);
  if (lVar12 != 0) {
    puVar1 = param_4 + param_5 * 2;
    do {
      if (*(char *)((long)param_4 + 5) == '\x01') {
        if (*param_2 >> 1 <= (ulong)(long)(int)*param_4) {
LAB_0090babc:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x90bac0);
          (*pcVar4)();
        }
        puVar9 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          puVar9 = (ulong *)param_2[1];
        }
        puVar9 = puVar9 + (long)(int)*param_4 * 7;
        *puVar9 = param_3;
        *(undefined1 *)(puVar9 + 1) = 1;
        if (local_a8 == &local_a0) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          pppuVar11 = (undefined8 ***)local_a8;
          do {
            pppuVar10 = pppuVar11;
            pppuVar3 = (undefined8 ***)pppuVar11[1];
            if ((undefined8 ***)pppuVar11[1] == (undefined8 ***)0x0) {
              do {
                pppuVar11 = (undefined8 ***)pppuVar10[2];
                bVar5 = pppuVar10 != (undefined8 ***)*pppuVar11;
                pppuVar10 = pppuVar11;
              } while (bVar5);
            }
            else {
              do {
                pppuVar11 = pppuVar3;
                pppuVar3 = (undefined8 ***)*pppuVar11;
              } while ((undefined8 ***)*pppuVar11 != (undefined8 ***)0x0);
            }
            lVar8 = lVar8 + 1;
          } while (pppuVar11 != (undefined8 ***)&local_a0);
        }
        FUN_0090c510(puVar9 + 2,local_a8,lVar8);
      }
      param_4 = param_4 + 2;
    } while (param_4 != puVar1);
  }
  local_68 = &local_c0;
  FUN_005dabf4(&local_68,local_b8);
  local_c0 = &local_a8;
  FUN_005dabf4(&local_c0,local_a0);
  return;
}


// ===== 0090bd20  FUN_0090bd20 =====

undefined1  [16]
FUN_0090bd20(long *param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  bool bVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar10 = (long *)*param_2;
  plVar9 = (long *)*param_1;
  if (plVar9 == plVar10) {
LAB_0090bec4:
    puVar8 = (ulong *)*param_5;
  }
  else {
    plVar3 = (long *)*param_3;
    if (plVar3 != (long *)*param_4) {
      do {
        uVar5 = plVar9[4];
        if ((long)uVar5 < plVar3[4]) {
          puVar2 = (ulong *)*param_5;
          puVar8 = puVar2 + 1;
          if ((*puVar2 & 1) == 0) {
            uVar7 = 5;
          }
          else {
            puVar8 = (ulong *)puVar2[1];
            uVar7 = puVar2[2];
          }
          uVar6 = *puVar2 >> 1;
          if (uVar6 == uVar7) {
            FUN_008d9300();
          }
          else {
            if (puVar8 + uVar6 == (ulong *)0x0) goto LAB_0090bf90;
            puVar8[uVar6] = uVar5;
            *puVar2 = *puVar2 + 2;
          }
          plVar10 = (long *)((long *)*param_1)[1];
          plVar9 = (long *)*param_1;
          if (plVar10 == (long *)0x0) {
            do {
              plVar3 = (long *)plVar9[2];
              bVar1 = plVar9 != (long *)*plVar3;
              plVar9 = plVar3;
            } while (bVar1);
          }
          else {
            do {
              plVar3 = plVar10;
              plVar10 = (long *)*plVar3;
            } while ((long *)*plVar3 != (long *)0x0);
          }
          *param_1 = (long)plVar3;
        }
        else {
          if (plVar3[4] < (long)uVar5) {
            plVar9 = (long *)plVar3[1];
            if ((long *)plVar3[1] == (long *)0x0) {
              do {
                plVar4 = (long *)plVar3[2];
                bVar1 = plVar3 != (long *)*plVar4;
                plVar3 = plVar4;
              } while (bVar1);
            }
            else {
              do {
                plVar4 = plVar9;
                plVar9 = (long *)*plVar4;
              } while ((long *)*plVar4 != (long *)0x0);
            }
          }
          else {
            plVar10 = (long *)plVar9[1];
            if ((long *)plVar9[1] == (long *)0x0) {
              do {
                plVar3 = (long *)plVar9[2];
                bVar1 = plVar9 != (long *)*plVar3;
                plVar9 = plVar3;
              } while (bVar1);
            }
            else {
              do {
                plVar3 = plVar10;
                plVar10 = (long *)*plVar3;
              } while ((long *)*plVar3 != (long *)0x0);
            }
            *param_1 = (long)plVar3;
            plVar10 = (long *)((long *)*param_3)[1];
            plVar9 = (long *)*param_3;
            if (plVar10 == (long *)0x0) {
              do {
                plVar4 = (long *)plVar9[2];
                bVar1 = plVar9 != (long *)*plVar4;
                plVar9 = plVar4;
              } while (bVar1);
            }
            else {
              do {
                plVar4 = plVar10;
                plVar10 = (long *)*plVar4;
              } while ((long *)*plVar4 != (long *)0x0);
            }
          }
          *param_3 = (long)plVar4;
        }
        plVar9 = (long *)*param_1;
        plVar10 = (long *)*param_2;
        if (plVar9 == plVar10) goto LAB_0090bec4;
        plVar3 = (long *)*param_3;
      } while (plVar3 != (long *)*param_4);
    }
    puVar8 = (ulong *)*param_5;
    plVar3 = plVar9;
    while (plVar3 != plVar10) {
      if ((*puVar8 & 1) == 0) {
        puVar2 = puVar8 + 1;
        uVar5 = 5;
      }
      else {
        puVar2 = (ulong *)puVar8[1];
        uVar5 = puVar8[2];
      }
      uVar7 = *puVar8 >> 1;
      plVar9 = plVar10;
      if (uVar7 == uVar5) {
        FUN_008d9300(puVar8,plVar3 + 4);
        plVar4 = (long *)plVar3[1];
        if ((long *)plVar3[1] != (long *)0x0) goto LAB_0090bf2c;
LAB_0090bf50:
        do {
          plVar4 = (long *)plVar3[2];
          bVar1 = plVar3 != (long *)*plVar4;
          plVar3 = plVar4;
        } while (bVar1);
      }
      else {
        if (puVar2 + uVar7 == (ulong *)0x0) {
LAB_0090bf90:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar2[uVar7] = plVar3[4];
        *puVar8 = *puVar8 + 2;
        plVar4 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) goto LAB_0090bf50;
LAB_0090bf2c:
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = plVar9;
  return auVar11;
}


// ===== 0090bfa4  FUN_0090bfa4 =====

void FUN_0090bfa4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar5 = param_1 + 1;
  uVar10 = *param_1;
  if ((uVar10 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar5 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  uVar8 = uVar10 >> 1;
  lVar9 = param_3 - uVar8;
  if (param_3 < uVar8 || lVar9 == 0) {
    if (uVar8 != param_3) {
      puVar5 = puVar5 + uVar8 * 7;
      do {
        if (puVar5 + -7 == (ulong *)0x0) goto LAB_0090c1a8;
        if ((puVar5[-5] & 1) != 0) {
          operator_delete((void *)puVar5[-4]);
        }
        bVar1 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar5 = puVar5 + -7;
      } while (bVar1);
    }
  }
  else if (uVar3 < param_3) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_3 || uVar3 - param_3 == 0) {
      uVar3 = param_3;
    }
    if (0x492492492492492 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar2 = (ulong *)operator_new(uVar3 * 0x38);
    puVar4 = puVar2 + uVar8 * 7;
    do {
      if (puVar4 == (ulong *)0x0) goto LAB_0090c194;
      lVar9 = lVar9 + -1;
      puVar4[6] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 7;
    } while (lVar9 != 0);
    puVar4 = puVar2;
    uVar6 = uVar8;
    puVar7 = puVar5;
    if (uVar8 != 0) {
      do {
        if (puVar4 == (ulong *)0x0) {
LAB_0090c194:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar10 = *puVar7;
        uVar6 = uVar6 - 1;
        puVar4[1] = puVar7[1];
        *puVar4 = uVar10;
        puVar4[2] = puVar7[2];
        uVar10 = puVar7[5];
        uVar12 = puVar7[4];
        uVar11 = puVar7[3];
        puVar4[6] = puVar7[6];
        puVar4[5] = uVar10;
        puVar4[4] = uVar12;
        puVar4[3] = uVar11;
        puVar7[2] = 0;
        puVar4 = puVar4 + 7;
        puVar7 = puVar7 + 7;
      } while (uVar6 != 0);
      puVar5 = puVar5 + uVar8 * 7;
      do {
        if (puVar5 + -7 == (ulong *)0x0) {
LAB_0090c1a8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((puVar5[-5] & 1) != 0) {
          operator_delete((void *)puVar5[-4]);
        }
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + -7;
      } while (uVar8 != 0);
      uVar10 = *param_1;
    }
    if ((uVar10 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar10 = *param_1;
    }
    param_1[1] = (ulong)puVar2;
    param_1[2] = uVar3;
    *param_1 = uVar10 | 1;
  }
  else {
    puVar5 = puVar5 + uVar8 * 7;
    do {
      if (puVar5 == (ulong *)0x0) goto LAB_0090c194;
      lVar9 = lVar9 + -1;
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 7;
    } while (lVar9 != 0);
  }
  *param_1 = *param_1 & 1 | param_3 << 1;
  return;
}


// ===== 0090c1c0  FUN_0090c1c0 =====

undefined1  [16] FUN_0090c1c0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0090c228;
      }
      if (*param_4 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_0090c294;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_0090c228:
  plVar2 = (long *)operator_new(0x28);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = lVar5;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0090c294:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 0090c2c4  FUN_0090c2c4 =====

void FUN_0090c2c4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long local_48;
  long *local_40;
  long *plStack_38;
  
  if (param_2 != param_3) {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      puVar1 = (undefined8 *)operator_new(0x28);
      if ((puVar1 == (undefined8 *)0x0) || (puVar1 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar3 = *param_2;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = param_1 + 1;
      puVar1[4] = uVar3;
      param_1[1] = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      FUN_005d5b94(puVar1,puVar1);
      param_2 = param_2 + 1;
      param_1[2] = param_1[2] + 1;
      lVar2 = param_1[1];
    }
    do {
      local_48 = lVar2;
      lVar2 = *(long *)(local_48 + 8);
    } while (*(long *)(local_48 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_40 = param_1;
        plStack_38 = &local_48;
        FUN_0090c3b4(&local_40,param_2,param_2);
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 0090c3b4  FUN_0090c3b4 =====

void FUN_0090c3b4(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar1 = (long *)*param_1;
  lVar9 = *(long *)param_1[1];
  lVar4 = *param_2;
  if (*(long *)(lVar9 + 0x20) < lVar4) {
    puVar2 = (undefined8 *)operator_new(0x28);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0)) {
LAB_0090c4fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = lVar9;
    puVar2[4] = uVar5;
    *(undefined8 **)(lVar9 + 8) = puVar2;
    puVar3 = puVar2;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar3 = *(undefined8 **)(lVar9 + 8);
    }
    FUN_005d5b94(plVar1[1],puVar3);
    plVar1[2] = plVar1[2] + 1;
    *(undefined8 **)param_1[1] = puVar2;
  }
  else {
    plVar7 = plVar1 + 1;
    plVar6 = (long *)*plVar7;
    while (plVar8 = plVar7, plVar6 != (long *)0x0) {
      while (plVar7 = plVar6, plVar7[4] <= lVar4) {
        if (lVar4 == plVar7[4]) {
          return;
        }
        plVar6 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 1;
          goto LAB_0090c490;
        }
      }
      plVar6 = (long *)*plVar7;
    }
LAB_0090c490:
    puVar2 = (undefined8 *)operator_new(0x28);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0))
    goto LAB_0090c4fc;
    uVar5 = *param_3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = plVar7;
    puVar2[4] = uVar5;
    *plVar8 = (long)puVar2;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar2 = (undefined8 *)*plVar8;
    }
    FUN_005d5b94(plVar1[1],puVar2);
    plVar1[2] = plVar1[2] + 1;
  }
  return;
}


// ===== 0090c510  FUN_0090c510 =====

void FUN_0090c510(ulong *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  puVar5 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 4;
    if (4 < param_3) goto LAB_0090c5c0;
LAB_0090c54c:
    uVar7 = *param_1 >> 1;
    puVar3 = puVar5 + uVar7;
    bVar2 = uVar7 <= param_3;
    uVar6 = param_3;
    if (bVar2) {
      uVar6 = uVar7;
    }
    uVar4 = 0;
    if (bVar2) {
      uVar4 = param_3 - uVar7;
    }
    if (!bVar2 || param_3 - uVar7 == 0) {
      puVar3 = (ulong *)0x0;
    }
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        puVar5[uVar8] = param_2[4];
        plVar1 = (long *)param_2[1];
        plVar9 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar9[2];
            bVar2 = plVar9 != (long *)*param_2;
            plVar9 = param_2;
          } while (bVar2);
        }
        else {
          do {
            param_2 = plVar1;
            plVar1 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
    if (param_3 <= uVar7) {
      uVar7 = *param_1;
      goto LAB_0090c678;
    }
    uVar6 = 0;
    puVar5 = (ulong *)0x0;
  }
  else {
    puVar5 = (ulong *)param_1[1];
    uVar6 = param_1[2];
    if (param_3 <= uVar6) goto LAB_0090c54c;
LAB_0090c5c0:
    uVar6 = uVar6 * 2;
    if (uVar6 < param_3 || uVar6 - param_3 == 0) {
      uVar6 = param_3;
    }
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar3 = (ulong *)operator_new(uVar6 << 3);
    uVar4 = param_3;
    puVar5 = puVar3;
  }
  uVar7 = 0;
  do {
    if (puVar3 + uVar7 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3[uVar7] = param_2[4];
    plVar1 = (long *)param_2[1];
    plVar9 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar9[2];
        bVar2 = plVar9 != (long *)*param_2;
        plVar9 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != uVar4);
  uVar7 = *param_1;
  if (puVar5 != (ulong *)0x0) {
    if ((uVar7 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar7 = *param_1;
    }
    uVar7 = uVar7 | 1;
    param_1[1] = (ulong)puVar5;
    param_1[2] = uVar6;
  }
LAB_0090c678:
  *param_1 = uVar7 & 1 | param_3 << 1;
  return;
}


// ===== 0090c6b0  FUN_0090c6b0 =====

void FUN_0090c6b0(void)

{
  return;
}


// ===== 0090c6d0  FUN_0090c6d0 =====

void FUN_0090c6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3d3c0;
  FUN_0090c7bc(param_1 + 1);
  return;
}


// ===== 0090c6e4  FUN_0090c6e4 =====

void FUN_0090c6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3d3c0;
  FUN_0090c7d0(param_1 + 1);
  return;
}


// ===== 0090c6f8  FUN_0090c6f8 =====

void FUN_0090c6f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3d3c0;
  FUN_0090c7d0(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0090c734  FUN_0090c734 =====

void * FUN_0090c734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  void *pvVar1;
  long *local_b0;
  undefined1 auStack_a8 [136];
  
  local_b0 = (long *)*param_4;
  *param_4 = 0;
  FUN_0090e4d0(auStack_a8,param_2,param_3,&local_b0,param_1 + 8);
  pvVar1 = operator_new(0x180);
  FUN_0090e868(pvVar1,param_3,auStack_a8,1);
  FUN_0090e6f0(auStack_a8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  return pvVar1;
}


// ===== 0090c7bc  FUN_0090c7bc =====

void FUN_0090c7bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3d3e8;
  return;
}


// ===== 0090c7d0  FUN_0090c7d0 =====

void FUN_0090c7d0(void)

{
  return;
}


// ===== 0090c7d8  FUN_0090c7d8 =====

void FUN_0090c7d8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0090c7e4  FUN_0090c7e4 =====

void * FUN_0090c7e4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_0090d8b4(&local_70,*(undefined8 *)(param_2 + 8));
  pvVar1 = operator_new(0x88);
  FUN_0090dcb4(pvVar1,&local_70,param_3[2]);
  pvVar2 = operator_new(0x80);
  uStack_68 = param_3[1];
  local_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  FUN_0090c868(pvVar2,param_2,&local_70,pvVar1);
  return pvVar2;
}


// ===== 0090c868  FUN_0090c868 =====

void FUN_0090c868(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_3[1];
  local_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  pvVar1 = operator_new(0x10);
  FUN_0090d48c();
  FUN_0090c8d0(param_1,&local_50,param_4,pvVar1,0);
  return;
}


// ===== 0090c8d0  FUN_0090c8d0 =====

void FUN_0090c8d0(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 void *param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d3d410;
  param_1[1] = param_3;
  FUN_0090d64c(param_1 + 2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  param_1[5] = param_4;
  if (param_5 == (void *)0x0) {
    param_5 = operator_new(0xa0);
    FUN_0091d788(param_5,*(undefined8 *)(param_2 + 0x10),2000);
  }
  param_1[6] = param_5;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  param_1[7] = uVar2;
  *(byte *)((long)param_1 + 0x65) = *param_2 ^ 1;
  pvVar1 = operator_new(0x10);
  FUN_0090d5e4(pvVar1,uVar2,6);
  param_1[0xd] = pvVar1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x18);
  return;
}


// ===== 0090c98c  FUN_0090c98c =====

void FUN_0090c98c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_00d3d410;
  if (pvVar2 != (void *)0x0) {
    FUN_0090d62c(pvVar2);
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0090ca1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0090ca30  FUN_0090ca30 =====

void FUN_0090ca30(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_00d3d410;
  if (pvVar2 != (void *)0x0) {
    FUN_0090d62c(pvVar2);
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 0090cad0  FUN_0090cad0 =====

void FUN_0090cad0(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  pvVar1 = operator_new(0x10);
  FUN_0090d5e4(pvVar1,uVar2,6);
  pvVar3 = *(void **)(param_1 + 0x68);
  *(void **)(param_1 + 0x68) = pvVar1;
  if (pvVar3 != (void *)0x0) {
    FUN_0090d62c(pvVar3);
    operator_delete(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  FUN_0091df18(*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 0090cb6c  FUN_0090cb6c =====

void FUN_0090cb6c(long param_1,int param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(int *)(param_1 + 0x40) = param_2 / 1000;
  *(int *)(*(long *)(param_1 + 0x30) + 0x14) = param_2 / 1000;
  return;
}


// ===== 0090cb98  FUN_0090cb98 =====

ulong FUN_0090cb98(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  long *plVar13;
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
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar6 = &local_280;
  if (((*(char *)((long)param_1 + 100) == '\x01') && (param_2[7] < 8)) &&
     ((0xd8U >> (ulong)(param_2[7] & 0x1f) & 1) != 0)) {
    lVar10 = param_1[7];
    *(undefined1 *)((long)param_1 + 100) = 1;
    pvVar5 = operator_new(0x10);
    FUN_0090d5e4(pvVar5,lVar10,5);
    pvVar11 = (void *)param_1[0xd];
    param_1[0xd] = (long)pvVar5;
    if (pvVar11 != (void *)0x0) {
      FUN_0090d62c(pvVar11);
      operator_delete(pvVar11);
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 100) = 0;
  }
  uVar7 = param_2[7];
  if (((1 < uVar7 - 9) && (uVar7 != 1)) && (uVar7 != 0xb)) {
    uVar12 = *(ulong *)(param_2 + 0x10);
    plVar13 = (long *)param_1[5];
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    (**(code **)(*plVar13 + 0x28))(plVar13,uVar3);
    iVar8 = (int)param_1[0xe];
    if (*(char *)((long)param_1 + 100) == '\x01') {
      iVar8 = (int)param_1[0xc] + iVar8;
    }
    plVar13 = (long *)param_1[5];
    if (*(char *)((long)param_1 + 0x74) == '\x01') {
      (**(code **)(*plVar13 + 0x20))(plVar13,uVar12 & 0xffffffff);
      *(undefined1 *)((long)param_1 + 0x74) = 0;
    }
    else {
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,iVar8);
    }
    *(undefined1 *)((long)param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    uVar7 = param_2[7];
    if (uVar7 == 0xd) {
      uVar7 = 10;
      if ((char)param_2[6] == '\0') {
        uVar7 = 2;
      }
      return (ulong)uVar7;
    }
  }
  if ((char)param_2[6] != '\x01') {
    uStack_e8 = *(undefined8 *)(param_2 + 0x12);
    local_f0 = *(undefined8 *)(param_2 + 0x10);
    uStack_d8 = *(undefined8 *)(param_2 + 0x16);
    uStack_e0 = *(undefined8 *)(param_2 + 0x14);
    puVar6 = &local_130;
    local_d0 = *(undefined8 *)(param_2 + 0x18);
    uStack_128 = *(undefined8 *)(param_2 + 2);
    local_130 = *(undefined8 *)param_2;
    uStack_118 = *(undefined8 *)(param_2 + 6);
    uStack_120 = *(undefined8 *)(param_2 + 4);
    uStack_108 = *(undefined8 *)(param_2 + 10);
    local_110 = *(undefined8 *)(param_2 + 8);
    uStack_f8 = *(undefined8 *)(param_2 + 0xe);
    uStack_100 = *(undefined8 *)(param_2 + 0xc);
    pcVar9 = *(code **)(*param_1 + 200);
    goto LAB_0090cd6c;
  }
  if (*(char *)((long)param_2 + 0x15) == '\x01') {
    uStack_78 = *(undefined8 *)(param_2 + 0x12);
    local_80 = *(undefined8 *)(param_2 + 0x10);
    uStack_68 = *(undefined8 *)(param_2 + 0x16);
    uStack_70 = *(undefined8 *)(param_2 + 0x14);
    puVar6 = &local_c0;
    local_60 = *(undefined8 *)(param_2 + 0x18);
    uStack_b8 = *(undefined8 *)(param_2 + 2);
    local_c0 = *(undefined8 *)param_2;
    uStack_a8 = *(undefined8 *)(param_2 + 6);
    uStack_b0 = *(undefined8 *)(param_2 + 4);
    uStack_98 = *(undefined8 *)(param_2 + 10);
    local_a0 = *(undefined8 *)(param_2 + 8);
    uStack_88 = *(undefined8 *)(param_2 + 0xe);
    uStack_90 = *(undefined8 *)(param_2 + 0xc);
    pcVar9 = *(code **)(*param_1 + 0xc0);
    goto LAB_0090cd6c;
  }
  if ((param_2[0x18] & 1) == 0) {
    iVar8 = (int)param_1[8];
  }
  else {
    uVar1 = param_2[1];
    uVar12 = *(ulong *)(param_2 + 0x12);
    uVar2 = param_2[0xc];
    iVar4 = (**(code **)(*param_1 + 0x68))(param_1);
    iVar8 = (int)param_1[8];
    if (((uVar12 < (ulong)(long)((iVar8 * iVar4 * (int)param_1[0xf]) / 100)) && ((uVar2 & 1) == 0))
       && ((uVar7 - 9 < 2 || (((uVar7 == 0xb || (uVar7 == 1)) && ((short)uVar1 < 0x2000)))))) {
      uStack_158 = *(undefined8 *)(param_2 + 0x12);
      local_160 = *(undefined8 *)(param_2 + 0x10);
      uStack_148 = *(undefined8 *)(param_2 + 0x16);
      uStack_150 = *(undefined8 *)(param_2 + 0x14);
      puVar6 = &local_1a0;
      local_140 = *(undefined8 *)(param_2 + 0x18);
      uStack_198 = *(undefined8 *)(param_2 + 2);
      local_1a0 = *(undefined8 *)param_2;
      uStack_188 = *(undefined8 *)(param_2 + 6);
      uStack_190 = *(undefined8 *)(param_2 + 4);
      uStack_178 = *(undefined8 *)(param_2 + 10);
      local_180 = *(undefined8 *)(param_2 + 8);
      uStack_168 = *(undefined8 *)(param_2 + 0xe);
      uStack_170 = *(undefined8 *)(param_2 + 0xc);
      pcVar9 = *(code **)(*param_1 + 200);
      goto LAB_0090cd6c;
    }
  }
  if ((param_2[6] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  uVar7 = *param_2;
  uVar1 = param_2[4];
  if (uVar7 == uVar1) {
    uStack_1c8 = *(undefined8 *)(param_2 + 0x12);
    local_1d0 = *(undefined8 *)(param_2 + 0x10);
    uStack_1b8 = *(undefined8 *)(param_2 + 0x16);
    uStack_1c0 = *(undefined8 *)(param_2 + 0x14);
    puVar6 = &local_210;
    local_1b0 = *(undefined8 *)(param_2 + 0x18);
    uStack_208 = *(undefined8 *)(param_2 + 2);
    local_210 = *(undefined8 *)param_2;
    uStack_1f8 = *(undefined8 *)(param_2 + 6);
    uStack_200 = *(undefined8 *)(param_2 + 4);
    uStack_1e8 = *(undefined8 *)(param_2 + 10);
    local_1f0 = *(undefined8 *)(param_2 + 8);
    uStack_1d8 = *(undefined8 *)(param_2 + 0xe);
    uStack_1e0 = *(undefined8 *)(param_2 + 0xc);
    pcVar9 = *(code **)(*param_1 + 0xd0);
    goto LAB_0090cd6c;
  }
  if (uVar7 - uVar1 == -0x80000000) {
    if (uVar1 < uVar7) {
LAB_0090cea4:
      if (iVar8 * 5000 == 0) {
        return 10;
      }
      uVar7 = uVar7 + iVar8 * -5000;
      if (uVar1 - uVar7 == -0x80000000) {
        if (uVar7 < uVar1) {
          return 10;
        }
      }
      else if ((uVar1 != uVar7) && (-1 < (int)(uVar1 - uVar7))) {
        return 10;
      }
    }
  }
  else if (-1 < (int)(uVar7 - uVar1)) goto LAB_0090cea4;
  uStack_238 = *(undefined8 *)(param_2 + 0x12);
  local_240 = *(undefined8 *)(param_2 + 0x10);
  uStack_228 = *(undefined8 *)(param_2 + 0x16);
  uStack_230 = *(undefined8 *)(param_2 + 0x14);
  local_220 = *(undefined8 *)(param_2 + 0x18);
  uStack_278 = *(undefined8 *)(param_2 + 2);
  local_280 = *(undefined8 *)param_2;
  uStack_268 = *(undefined8 *)(param_2 + 6);
  uStack_270 = *(undefined8 *)(param_2 + 4);
  uStack_258 = *(undefined8 *)(param_2 + 10);
  local_260 = *(undefined8 *)(param_2 + 8);
  uStack_248 = *(undefined8 *)(param_2 + 0xe);
  uStack_250 = *(undefined8 *)(param_2 + 0xc);
  pcVar9 = *(code **)(*param_1 + 0xd8);
LAB_0090cd6c:
  uVar12 = (*pcVar9)(param_1,puVar6);
  return uVar12;
}


// ===== 0090cf28  FUN_0090cf28 =====

void FUN_0090cf28(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))();
  FUN_0090d660(param_1 + 2,uVar1);
  return;
}


// ===== 0090cf60  FUN_0090cf60 =====

void FUN_0090cf60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


// ===== 0090cf74  FUN_0090cf74 =====

void FUN_0090cf74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090cf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  return;
}


// ===== 0090cf88  FUN_0090cf88 =====

ulong FUN_0090cf88(long param_1,uint param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long local_50;
  long lStack_48;
  long local_40;
  
  uVar2 = 0;
  *(byte *)(param_1 + 0x74) = (*(byte *)(param_1 + 0x74) | *(byte *)(param_4 + 2)) & 1;
  if (((param_3 & 1) != 0) && ((*(byte *)((long)param_4 + 0xe) & 1) == 0)) {
    lVar4 = *param_4;
    if ((0 < (int)param_2) && ((lVar4 != 0 && (lVar4 != *(long *)(param_1 + 0x58))))) {
      *(long *)(param_1 + 0x58) = lVar4;
      uVar2 = 0;
      if ((ulong)param_2 != 0) {
        uVar2 = (ulong)(lVar4 * 1000) / (ulong)param_2;
      }
      FUN_0090d6bc(param_1 + 0x10,uVar2);
      lVar4 = *param_4;
    }
    uVar2 = FUN_0091d7cc(*(undefined8 *)(param_1 + 0x30),(int)param_4[1],lVar4);
    if (((uVar2 & 1) == 0) || (plVar3 = *(long **)(param_1 + 0x30), (ulong)plVar3[7] < 2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,(int)param_4[1]);
      uVar1 = FUN_0091e2b8(*(undefined8 *)(param_1 + 0x30),(int)param_4[1]);
      lStack_48 = param_4[1];
      local_50 = *param_4;
      local_40 = param_4[2];
      (**(code **)(**(long **)(param_1 + 8) + 0x10))
                (*(long **)(param_1 + 8),uVar2 & 0xffffffff,(uVar1 ^ 0xffffffff) & 1,&local_50);
      uVar2 = uVar2 & 0xffffffff | 0x100000000;
    }
  }
  return uVar2;
}


// ===== 0090d0a8  FUN_0090d0a8 =====

undefined8 FUN_0090d0a8(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_2 + 6) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  iVar3 = (*param_2 + param_2[10]) - param_2[4];
  iVar2 = (**(code **)(*param_1 + 0x68))();
  iVar2 = (int)param_1[8] * iVar2;
  lVar1 = (long)iVar2 + (long)iVar3;
  if (lVar1 + iVar2 / 2 < 0 != SCARRY8(lVar1,(long)(iVar2 / 2))) {
    param_1[10] = param_1[10] - lVar1;
    if (iVar2 == -0x80000000) goto LAB_0090d140;
    iVar3 = -iVar2;
  }
  if ((iVar3 < 0) && (param_2[7] == 9)) {
    return 7;
  }
LAB_0090d140:
  param_1[10] = 0;
  return 6;
}


// ===== 0090d170  FUN_0090d170 =====

undefined4 FUN_0090d170(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x1c) == 9) {
    return 7;
  }
  if (*(int *)(param_2 + 0x1c) == 10) {
    uVar1 = 2;
    if (*(ulong *)(param_2 + 0x28) <= (ulong)((long)*(int *)(param_1 + 0x40) * 1000)) {
      uVar1 = 8;
    }
    return uVar1;
  }
  uVar1 = 9;
  if (*(char *)(param_2 + 0x20) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 0090d1cc  FUN_0090d1cc =====

undefined4 FUN_0090d1cc(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((((*(byte *)((long)param_1 + 0x65) & 1) == 0) && (param_2[7] != 1)) &&
     ((*(byte *)(param_2 + 8) & 1) == 0)) {
    iVar2 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],*param_2 - param_2[0x16]);
    iVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    iVar4 = (**(code **)(*(long *)param_1[6] + 0x18))();
    lVar6 = (long)iVar2;
    lVar1 = (long)iVar3 + (long)iVar4 + 0x14;
    if (lVar6 + lVar1 * -4 < 0 == SBORROW8(lVar6,lVar1 * 4)) {
      uVar5 = 4;
    }
    else {
      plVar7 = (long *)param_1[0xd];
      if ((plVar7 == (long *)0x0) ||
         ((ulong)plVar7[1] <= (ulong)(**(long **)*plVar7 - ((undefined8 *)*plVar7)[1]))) {
        if (lVar6 < lVar1) {
          uVar5 = 5;
          if (iVar3 <= iVar2) {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  return 0;
}


// ===== 0090d2c8  FUN_0090d2c8 =====

ulong FUN_0090d2c8(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar1 = param_2[0x12];
  lVar3 = param_1[8];
  iVar4 = (**(code **)(*param_1 + 0x68))();
  if ((*(byte *)(param_2 + 6) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if (*(ulong *)(param_2 + 10) < (ulong)(uint)(param_2[4] - *param_2)) {
    iVar2 = 0;
    if ((int)lVar3 != 0) {
      iVar2 = iVar1 / (int)lVar3;
    }
    if (iVar2 <= iVar4 + 0x32) {
      uStack_58 = *(undefined8 *)(param_2 + 0x12);
      local_60 = *(undefined8 *)(param_2 + 0x10);
      uStack_48 = *(undefined8 *)(param_2 + 0x16);
      uStack_50 = *(undefined8 *)(param_2 + 0x14);
      local_40 = *(undefined8 *)(param_2 + 0x18);
      uStack_98 = *(undefined8 *)(param_2 + 2);
      local_a0 = *(undefined8 *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 6);
      uStack_90 = *(undefined8 *)(param_2 + 4);
      uStack_78 = *(undefined8 *)(param_2 + 10);
      local_80 = *(undefined8 *)(param_2 + 8);
      uStack_68 = *(undefined8 *)(param_2 + 0xe);
      uStack_70 = *(undefined8 *)(param_2 + 0xc);
      uVar5 = (**(code **)(*param_1 + 200))(param_1,&local_a0);
      return uVar5;
    }
  }
  if (*(ulong *)(param_2 + 10) != (ulong)(uint)(param_2[4] - *param_2)) {
    (**(code **)(*(long *)param_1[5] + 0x20))((long *)param_1[5],iVar1);
  }
  uVar6 = param_2[7];
  uVar5 = (ulong)uVar6;
  if (uVar6 - 9 < 3) {
    uVar5 = 0;
  }
  else if (uVar6 != 1) {
    uVar6 = 9;
    if ((char)param_2[8] == '\0') {
      uVar6 = 2;
    }
    uVar5 = (ulong)uVar6;
  }
  return uVar5;
}


// ===== 0090d3e0  FUN_0090d3e0 =====

void FUN_0090d3e0(void)

{
  return;
}


// ===== 0090d3e8  FUN_0090d3e8 =====

void FUN_0090d3e8(void)

{
  return;
}


// ===== 0090d3f0  FUN_0090d3f0 =====

void FUN_0090d3f0(long param_1)

{
  FUN_0090d7b0(param_1 + 0x10);
  return;
}


// ===== 0090d3fc  FUN_0090d3fc =====

void FUN_0090d3fc(long param_1)

{
  FUN_0090d734(param_1 + 0x10);
  return;
}


// ===== 0090d408  FUN_0090d408 =====

void FUN_0090d408(long param_1)

{
  FUN_0090d830(param_1 + 0x10);
  return;
}


// ===== 0090d414  FUN_0090d414 =====

void FUN_0090d414(long param_1)

{
  FUN_0090d8a8(param_1 + 0x10);
  return;
}


// ===== 0090d420  FUN_0090d420 =====

void FUN_0090d420(void)

{
  return;
}


// ===== 0090d428  FUN_0090d428 =====

void FUN_0090d428(long param_1,int param_2)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_2;
  return;
}


// ===== 0090d43c  FUN_0090d43c =====

void FUN_0090d43c(void)

{
  return;
}


// ===== 0090d444  FUN_0090d444 =====

undefined8 FUN_0090d444(void)

{
  return 0;
}


// ===== 0090d450  FUN_0090d450 =====

void FUN_0090d450(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}


// ===== 0090d45c  FUN_0090d45c =====

undefined8 FUN_0090d45c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 0090d468  FUN_0090d468 =====

undefined8 FUN_0090d468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 0090d474  FUN_0090d474 =====

void FUN_0090d474(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}


// ===== 0090d480  FUN_0090d480 =====

void FUN_0090d480(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 100) = param_2;
  return;
}


// ===== 0090d48c  FUN_0090d48c =====

void FUN_0090d48c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001f5730;
  *param_1 = &PTR_FUN_00d3d500;
  param_1[1] = uVar1;
  return;
}


// ===== 0090d4ac  FUN_0090d4ac =====

void FUN_0090d4ac(long param_1)

{
  *(undefined8 *)(param_1 + 8) = DAT_001f5730;
  return;
}


// ===== 0090d4c0  FUN_0090d4c0 =====

void FUN_0090d4c0(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 * (0x100 - *(int *)(param_1 + 8)) + (long)param_3 * -0x100 +
          ((long)*(int *)(param_1 + 0x10) * (long)*(int *)(param_1 + 8) >> 8);
  uVar1 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar1;
  return;
}


// ===== 0090d500  FUN_0090d500 =====

void FUN_0090d500(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (param_2 < 0x800000) {
    uVar1 = 0;
  }
  if (param_2 + 0x800000 < 0 != SCARRY4(param_2,0x800000)) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 < 2) {
    param_2 = param_2 << 8;
    if (uVar1 != 0) {
      param_2 = -0x80000000;
    }
    *(int *)(param_1 + 0xc) = param_2;
    return;
  }
  if (uVar1 == 2) {
    *(undefined4 *)(param_1 + 0xc) = 0x7fffffff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 0090d55c  FUN_0090d55c =====

void FUN_0090d55c(long param_1,uint param_2)

{
  if ((int)param_2 < 0x15) {
    *(undefined4 *)(param_1 + 8) = 0xfb;
    return;
  }
  if (param_2 < 0x3d) {
    *(undefined4 *)(param_1 + 8) = 0xfc;
    return;
  }
  if (param_2 < 0x8d) {
    *(undefined4 *)(param_1 + 8) = 0xfd;
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0xfe;
  return;
}


// ===== 0090d5a8  FUN_0090d5a8 =====

void FUN_0090d5a8(void)

{
  return;
}


// ===== 0090d5b0  FUN_0090d5b0 =====

void FUN_0090d5b0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0090d5bc  FUN_0090d5bc =====

ulong FUN_0090d5bc(long param_1)

{
  return (long)*(int *)(param_1 + 0xc) + 0x80U >> 8;
}


// ===== 0090d5d0  FUN_0090d5d0 =====

void FUN_0090d5d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = param_2;
  param_1[1] = *param_2;
  return;
}


// ===== 0090d5e4  FUN_0090d5e4 =====

void FUN_0090d5e4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = param_3;
  *puVar1 = param_2;
  puVar1[1] = uVar2;
  return;
}


// ===== 0090d62c  FUN_0090d62c =====

void FUN_0090d62c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0090d64c  FUN_0090d64c =====

void FUN_0090d64c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_3;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}


// ===== 0090d660  FUN_0090d660 =====

int FUN_0090d660(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[4];
  if (param_2 <= param_1[2]) {
    param_2 = param_1[2];
  }
  iVar1 = iVar3;
  if (param_2 <= iVar3) {
    iVar1 = param_2;
  }
  if (iVar3 < 1) {
    iVar1 = param_2;
  }
  if (0 < param_1[5]) {
    iVar2 = param_1[5] * *param_1 * 3;
    iVar3 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar2 = iVar3 >> 2;
    if (iVar1 <= iVar3 >> 2) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  return iVar1;
}


// ===== 0090d6bc  FUN_0090d6bc =====

bool FUN_0090d6bc(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 < 1) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_0021573b,"../../modules/audio_coding/neteq/delay_constraints.cc",0x173,
                   "SetPacketAudioLength",&DAT_001c4dc3,"length_ms = ",param_2);
    }
  }
  else {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return 0 < param_2;
}


// ===== 0090d734  FUN_0090d734 =====

undefined8 FUN_0090d734(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < param_2) {
    iVar2 = param_1[4];
    iVar3 = *param_1 * param_1[5] * 3;
    iVar1 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar1 = iVar1 >> 2;
    if (iVar3 < 4) {
      iVar1 = 10000;
    }
    if (iVar2 < 1) {
      iVar2 = 10000;
    }
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    if (param_2 <= iVar1) {
      iVar3 = param_1[1];
      iVar2 = iVar3;
      if (iVar1 <= iVar3) {
        iVar2 = iVar1;
      }
      if (iVar3 < 1) {
        iVar2 = 0;
      }
      iVar1 = param_2;
      if (param_2 <= iVar2) {
        iVar1 = iVar2;
      }
      param_1[2] = iVar1;
      param_1[3] = param_2;
      return 1;
    }
  }
  return 0;
}


// ===== 0090d7b0  FUN_0090d7b0 =====

bool FUN_0090d7b0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[3];
  bVar1 = param_2 == 0 || iVar5 <= param_2;
  if (bVar1) {
    iVar4 = param_1[1];
    param_1[4] = param_2;
    iVar3 = *param_1 * param_1[5] * 3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    iVar2 = iVar2 >> 2;
    if (iVar3 < 4) {
      iVar2 = 10000;
    }
    if (param_2 < 1) {
      param_2 = 10000;
    }
    if (param_2 <= iVar2) {
      iVar2 = param_2;
    }
    iVar3 = iVar4;
    if (iVar2 <= iVar4) {
      iVar3 = iVar2;
    }
    if (iVar4 < 1) {
      iVar3 = 0;
    }
    if (iVar5 <= iVar3) {
      iVar5 = iVar3;
    }
    param_1[2] = iVar5;
  }
  return bVar1;
}


// ===== 0090d830  FUN_0090d830 =====

bool FUN_0090d830(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 0x2711) {
    uVar3 = param_1[4];
    iVar4 = *param_1 * param_1[5] * 3;
    iVar2 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    uVar1 = iVar2 >> 2;
    if (iVar4 < 4) {
      uVar1 = 10000;
    }
    if ((int)uVar3 < 1) {
      uVar3 = 10000;
    }
    if ((int)uVar3 <= (int)uVar1) {
      uVar1 = uVar3;
    }
    uVar3 = param_2;
    if ((int)uVar1 <= (int)param_2) {
      uVar3 = uVar1;
    }
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = uVar3;
    }
    uVar3 = param_1[3];
    if (param_1[3] <= (int)uVar1) {
      uVar3 = uVar1;
    }
    param_1[1] = param_2;
    param_1[2] = uVar3;
  }
  return param_2 < 0x2711;
}


// ===== 0090d8a8  FUN_0090d8a8 =====

undefined4 FUN_0090d8a8(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 0090d8b4  FUN_0090d8b4 =====

/* WARNING: Removing unreachable block (ram,0x0090d9d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d8b4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ***local_38;
  ulong uStack_30;
  byte bStack_21;
  
  param_1[2] = 0x4000000000000000;
  uVar2 = _UNK_001f2fc8;
  uVar1 = _DAT_001f2fc0;
  *(undefined4 *)(param_1 + 4) = 500;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[6] = 0x3feffa43fe5c91d1;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 7) = 0x14;
  puVar3 = (undefined8 *)
           FUN_0090da94("quantile",param_1,"forget_factor",param_1 + 1,"start_forget_weight",
                        param_1 + 2,"resample_interval_ms",param_1 + 4,"use_reorder_optimizer",
                        param_1 + 5,"reorder_forget_factor",param_1 + 6,"ms_per_loss_percent",
                        param_1 + 7);
  (**(code **)(*param_2 + 0x10))(&local_38,param_2,"WebRTC-Audio-NetEqDelayManagerConfig",0x24);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    local_38 = &local_38;
  }
  FUN_006659ac(puVar3,local_38,uStack_30);
  if (puVar3 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar3;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)puVar3[1];
      uVar7 = (ulong)((long)pvVar5 + (-0x20 - ((long)pvVar5 << 0x3b))) >> 5;
      uVar6 = (ulong)(((long)pvVar4 - (long)pvVar5 << 0x3b) - ((long)pvVar4 - (long)pvVar5)) >> 5;
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
      if ((1 < uVar6) && ((((int)pvVar4 - (int)pvVar5 | -(int)pvVar5) & 0x1fU) == 0)) {
        uVar6 = uVar6 & 0x7fffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar6 * -0x20);
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (pvVar5 != pvVar4) {
        pvVar5 = (void *)((long)pvVar5 + -0x20);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar3[1] = pvVar4;
      operator_delete(pvVar4);
    }
    operator_delete(puVar3);
  }
  return;
}


// ===== 0090da94  FUN_0090da94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_0090da94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  puVar5 = (undefined8 *)operator_new(0xe0);
  puVar1 = PTR_FUN_00d51f40;
  if (puVar5 != (undefined8 *)0x0) {
    auVar12._0_8_ = (long)puVar5 + _DAT_001f42f0;
    auVar12._8_8_ = (long)puVar5 + _UNK_001f42f8;
    auVar10._0_8_ = (long)puVar5 + _DAT_001f1930;
    auVar10._8_8_ = (long)puVar5 + _UNK_001f1938;
    auVar10 = NEON_cmeq(auVar10,0,8);
    auVar12 = NEON_cmeq(auVar12,0,8);
    auVar11._4_4_ = auVar12._8_4_;
    auVar11._0_4_ = auVar12._0_4_;
    auVar11._8_4_ = auVar10._0_4_;
    auVar11._12_4_ = auVar10._8_4_;
    uVar9 = NEON_umaxv(auVar11,4);
    if ((((uVar9 & 1) == 0) && (puVar5 != (undefined8 *)0xffffffffffffff60)) &&
       (puVar5 != (undefined8 *)0xffffffffffffff40)) {
      *puVar5 = param_1;
      puVar5[1] = param_2;
      puVar2 = PTR_FUN_00d51f48;
      puVar5[4] = param_3;
      puVar5[5] = param_4;
      puVar5[2] = puVar1;
      puVar5[3] = puVar2;
      puVar5[6] = puVar1;
      puVar5[7] = puVar2;
      puVar3 = PTR_FUN_00d51fc8;
      puVar5[8] = param_5;
      puVar5[9] = param_6;
      puVar4 = PTR_FUN_00d51fd0;
      puVar5[10] = puVar3;
      puVar5[0xb] = puVar4;
      puVar3 = PTR_FUN_00d520d8;
      puVar5[0xc] = param_7;
      puVar5[0xd] = param_8;
      puVar4 = PTR_FUN_00d520e0;
      puVar5[0xe] = puVar3;
      puVar5[0xf] = puVar4;
      puVar3 = PTR_FUN_00d51f60;
      puVar5[0x10] = param_9;
      puVar5[0x11] = param_10;
      puVar4 = PTR_FUN_00d51f68;
      puVar5[0x12] = puVar3;
      puVar5[0x17] = puVar2;
      puVar5[0x13] = puVar4;
      puVar5[0x14] = param_11;
      puVar5[0x15] = param_12;
      puVar5[0x16] = puVar1;
      puVar1 = PTR_FUN_00d51f50;
      puVar5[0x18] = param_13;
      puVar5[0x19] = param_14;
      puVar2 = PTR_FUN_00d51f58;
      puVar5[0x1a] = puVar1;
      puVar5[0x1b] = puVar2;
      pvVar6 = operator_new(0x18);
      local_78 = puVar5;
      local_70 = puVar5 + 0x1c;
      local_68 = puVar5 + 0x1c;
      FUN_0066597c(pvVar6,&local_78);
      if (local_78 != (undefined8 *)0x0) {
        uVar8 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b))) >> 5;
        uVar7 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) -
                       ((long)local_78 - (long)local_70)) >> 5;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        puVar5 = local_70;
        if ((1 < uVar7) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)) {
          uVar7 = uVar7 & 0x7fffffffffffffe;
          puVar5 = local_70 + uVar7 * -4;
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        while (puVar5 != local_78) {
          puVar5 = puVar5 + -4;
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_70 = local_78;
        operator_delete(local_78);
      }
      return pvVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


