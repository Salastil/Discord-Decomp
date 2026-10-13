// ===== 00aa1c6c  core::slice::sort::shared::smallsort::panic_on_ord_violation =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::shared::smallsort::panic_on_ord_violation */

void __rustcall core::slice::sort::shared::smallsort::panic_on_ord_violation(void)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt
            ("user-provided comparison function does not correctly implement a total order",0x99,
             &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affc58);
}


// ===== 00aa1c8c  core::slice::sort::stable::drift::sqrt_approx =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::stable::drift::sqrt_approx */

ulong __rustcall core::slice::sort::stable::drift::sqrt_approx(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)LZCOUNT(param_1 | 1) ^ 0x3f;
  uVar2 = (ulong)((uVar1 & 1) + (uVar1 >> 1));
  return (1L << (uVar2 & 0x3f)) + (param_1 >> (uVar2 & 0x3f)) >> 1;
}


// ===== 00aa1cb8  core::num::imp::flt2dec::strategy::grisu::format_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_exact */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_exact
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          )

{
  long local_58;
  long lStack_50;
  long local_48;
  
  format_exact_opt(&local_58);
  if (local_58 != 0) {
    param_1[1] = lStack_50;
    *param_1 = local_58;
    param_1[2] = local_48;
    return;
  }
  dragon::format_exact(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 00aa1d48  core::num::imp::flt2dec::strategy::grisu::format_shortest =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_shortest */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_shortest
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_48;
  long lStack_40;
  long local_38;
  
  format_shortest_opt(&local_48);
  if (local_48 != 0) {
    param_1[1] = lStack_40;
    *param_1 = local_48;
    param_1[2] = local_38;
    return;
  }
  dragon::format_shortest(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00aa1dc4  core::num::imp::flt2dec::strategy::grisu::format_exact_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_exact_opt */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_exact_opt
          (undefined8 *param_1,ulong *param_2,long param_3,ulong param_4,undefined4 param_5)

{
  short sVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  
  uVar15 = *param_2;
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant > 0",0x1c,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affc70);
  }
  if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant < (1 << 61)",0x24,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affc88);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic(&DAT_00391126,0x21,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affca0);
  }
  iVar12 = (uint)(ushort)param_2[3] - (int)LZCOUNT(uVar15);
  uVar5 = ((short)(-0x60 - (short)iVar12) * 0x50 + 0x153b0) / 0x84e;
  if (0x50 < uVar5) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check
              ((long)(int)uVar5,0x51,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affcb8);
  }
  uVar15 = uVar15 << (LZCOUNT(uVar15) & 0x3fU);
  puVar2 = (ulong *)(PTR_CACHED_POW10_00b01420 + (long)(int)uVar5 * 0x10);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *puVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  uVar5 = (-0x40 - iVar12) - (uint)(ushort)puVar2[1];
  uVar20 = (ulong)uVar5;
  uVar15 = SUB168(auVar6 * auVar7,8) - ((long)(*puVar2 * uVar15) >> 0x3f);
  lVar16 = 1L << (uVar20 & 0x3f);
  uVar17 = lVar16 - 1;
  uVar19 = uVar15 >> (uVar20 & 0x3f);
  uVar13 = uVar17 & uVar15;
  uVar18 = (uint)uVar19;
  if ((uVar13 != 0) || ((param_4 < 0xb && (*(uint *)("e()" + param_4 * 4) <= uVar18)))) {
    sVar1 = (short)param_5;
    if (((uint)(uVar19 >> 4) & 0xfffffff) < 0x271) {
      uVar14 = 10;
      if (uVar18 < 10) {
        uVar14 = 1;
      }
      uVar9 = 100;
      if (999 < uVar18) {
        uVar9 = 1000;
      }
      uVar11 = 2;
      if (999 < uVar18) {
        uVar11 = 3;
      }
      if (99 < uVar18) {
        uVar14 = uVar9;
      }
      uVar9 = (uint)(9 < uVar18);
      if (99 < uVar18) {
        uVar9 = uVar11;
      }
      iVar12 = (int)(short)(((short)uVar9 - *(short *)((long)puVar2 + 10)) + 1);
      if (iVar12 <= sVar1) {
LAB_00aa1ed8:
        FUN_00aa43e4(param_1,param_3,param_4,0,iVar12,param_5,uVar15 / 10,
                     (ulong)uVar14 << (uVar20 & 0x3f),lVar16);
        return;
      }
    }
    else {
      bVar8 = 0xc34 < uVar18 >> 5;
      uVar14 = 10000;
      if (bVar8) {
        uVar14 = 100000;
      }
      uVar9 = 4;
      if (bVar8) {
        uVar9 = 5;
      }
      uVar11 = 1000000;
      if (9999999 < uVar18) {
        uVar11 = 10000000;
      }
      uVar10 = 6;
      if (9999999 < uVar18) {
        uVar10 = 7;
      }
      uVar3 = 100000000;
      if (999999999 < uVar18) {
        uVar3 = 1000000000;
      }
      uVar22 = 8;
      if (999999999 < uVar18) {
        uVar22 = 9;
      }
      if (99999999 < uVar18) {
        uVar10 = uVar22;
        uVar11 = uVar3;
      }
      if (999999 < uVar18) {
        uVar9 = uVar10;
        uVar14 = uVar11;
      }
      iVar12 = (int)(short)(((short)uVar9 - *(short *)((long)puVar2 + 10)) + 1);
      if (iVar12 <= sVar1) goto LAB_00aa1ed8;
    }
    uVar15 = 0;
    uVar4 = (long)(short)((short)iVar12 - sVar1);
    if (param_4 <= (ulong)((long)iVar12 - (long)sVar1)) {
      uVar4 = param_4;
    }
    while( true ) {
      if (param_4 == uVar15) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check
                  (param_4,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affce8);
      }
      uVar18 = 0;
      if (uVar14 != 0) {
        uVar18 = (uint)uVar19 / uVar14;
      }
      uVar19 = (ulong)((uint)uVar19 - uVar18 * uVar14);
      *(char *)(param_3 + uVar15) = (char)uVar18 + '0';
      if (uVar4 - 1 == uVar15) {
        FUN_00aa43e4(param_1);
        return;
      }
      if (uVar9 == uVar15) break;
      bVar8 = uVar14 < 10;
      uVar15 = uVar15 + 1;
      uVar14 = uVar14 / 10;
      if (bVar8) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_const::panic_const_div_by_zero
                  (&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affcd0);
      }
    }
    uVar15 = uVar15 + 1;
    uVar19 = 1;
    while (uVar19 >> ((uVar5 & 0xffff) - 1 & 0x3f) == 0) {
      if (param_4 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check
                  (uVar15,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affd00);
      }
      uVar21 = uVar13 * 10;
      uVar19 = uVar19 * 10;
      uVar13 = uVar21 & uVar17;
      *(char *)(param_3 + uVar15) = (char)(uVar21 >> (uVar20 & 0x3f)) + '0';
      uVar15 = uVar15 + 1;
      if (uVar4 == uVar15) {
        FUN_00aa43e4(param_1);
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00aa216c  core::num::imp::flt2dec::strategy::grisu::format_shortest_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_shortest_opt */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
          (long *param_1,ulong *param_2,long param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  short sVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  long lVar39;
  ulong local_70;
  ushort local_68;
  ulong local_48;
  
  uVar28 = *param_2;
  if (uVar28 != 0) {
    uVar23 = param_2[1];
    if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.minus > 0",0x1d,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affd30);
    }
    uVar21 = param_2[2];
    if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.plus > 0",0x1c,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affd48);
    }
    uVar22 = uVar21 + uVar28;
    if (CARRY8(uVar21,uVar28)) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.mant.checked_add(d.plus).is_som",0x36,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affdf0);
    }
    local_70 = uVar28 - uVar23;
    if (uVar28 < uVar23) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affdd8);
    }
    if (param_4 < 0x11) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: buf.len() >= MAX_SIG_DIGITS-+",0x2d,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affd60);
    }
    if (uVar22 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.mant + d.plus < (1 << 61)",0x2d,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affd78);
    }
    uVar21 = LZCOUNT(uVar22);
    local_68 = (ushort)param_2[3];
    uVar23 = local_70 << (uVar21 & 0x3f);
    local_48 = uVar23 >> (uVar21 & 0x3f);
    if (local_48 == local_70) {
      uVar25 = uVar28 << (uVar21 & 0x3f);
      local_48 = uVar25 >> (uVar21 & 0x3f);
      local_70 = uVar28;
      if (local_48 == uVar28) {
        iVar37 = (uint)local_68 - (int)uVar21;
        uVar35 = ((short)(-0x60 - (short)iVar37) * 0x50 + 0x153b0) / 0x84e;
        if (0x50 < uVar35) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    ((long)(int)uVar35,0x51,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affcb8);
        }
        uVar22 = uVar22 << (uVar21 & 0x3f);
        puVar1 = (ulong *)(PTR_CACHED_POW10_00b01420 + (long)(int)uVar35 * 0x10);
        uVar21 = *puVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar21;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar22;
        lVar30 = SUB168(auVar7 * auVar10,8);
        lVar19 = (long)(uVar21 * uVar22) >> 0x3f;
        lVar31 = -lVar19;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar21;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar23;
        lVar32 = SUB168(auVar8 * auVar11,8);
        uVar28 = lVar30 + lVar31 + 1;
        uVar35 = -(uint)(ushort)puVar1[1] - iVar37;
        uVar36 = uVar28 >> ((ulong)uVar35 & 0x3f);
        lVar18 = (long)(uVar21 * uVar23) >> 0x3f;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar25;
        lVar16 = SUB168(auVar9 * auVar12,8);
        uVar26 = 1L << ((ulong)uVar35 & 0x3f);
        sVar5 = *(short *)((long)puVar1 + 10);
        uVar22 = (ulong)(uVar35 & 0x3f);
        lVar20 = -((long)(uVar21 * uVar25) >> 0x3f);
        uVar21 = uVar26 - 1;
        uVar23 = uVar28 & uVar21;
        uVar35 = (uint)uVar36;
        if (((uint)(uVar36 >> 4) & 0xfffffff) < 0x271) {
          uVar27 = 10;
          if (uVar35 < 10) {
            uVar27 = 1;
          }
          uVar15 = 100;
          if (999 < uVar35) {
            uVar15 = 1000;
          }
          uVar34 = 2;
          if (999 < uVar35) {
            uVar34 = 3;
          }
          if (99 < uVar35) {
            uVar27 = uVar15;
          }
          uVar15 = (uint)(9 < uVar35);
          if (99 < uVar35) {
            uVar15 = uVar34;
          }
        }
        else {
          bVar13 = 0xc34 < uVar35 >> 5;
          uVar27 = 10000;
          if (bVar13) {
            uVar27 = 100000;
          }
          uVar15 = 4;
          if (bVar13) {
            uVar15 = 5;
          }
          uVar34 = 1000000;
          if (9999999 < uVar35) {
            uVar34 = 10000000;
          }
          uVar33 = 6;
          if (9999999 < uVar35) {
            uVar33 = 7;
          }
          uVar4 = 100000000;
          if (999999999 < uVar35) {
            uVar4 = 1000000000;
          }
          uVar38 = 8;
          if (999999999 < uVar35) {
            uVar38 = 9;
          }
          if (99999999 < uVar35) {
            uVar33 = uVar38;
            uVar34 = uVar4;
          }
          if (999999 < uVar35) {
            uVar15 = uVar33;
            uVar27 = uVar34;
          }
        }
        lVar2 = (lVar18 - lVar32) + uVar28;
        uVar29 = 0;
        lVar3 = lVar20 + lVar16;
        uVar25 = lVar2 + 1;
        while( true ) {
          if (param_4 == uVar29) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (param_4,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affda8);
          }
          uVar35 = 0;
          if (uVar27 != 0) {
            uVar35 = (uint)uVar36 / uVar27;
          }
          uVar36 = (ulong)((uint)uVar36 - uVar35 * uVar27);
          iVar37 = uVar35 + 0x30;
          *(char *)(param_3 + uVar29) = (char)iVar37;
          lVar39 = uVar36 << uVar22;
          uVar17 = lVar39 + uVar23;
          if (uVar17 < uVar25) break;
          if (uVar15 == uVar29) {
            lVar31 = 1;
            uVar25 = uVar25 & uVar21;
            do {
              uVar17 = uVar25;
              uVar36 = uVar29;
              lVar19 = lVar31;
              uVar29 = uVar36 + 1;
              if (param_4 <= uVar29) {
                    /* WARNING: Subroutine does not return */
                panicking::panic_bounds_check
                          (uVar29,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affdc0);
              }
              uVar24 = uVar23 * 10;
              uVar25 = uVar17 * 10;
              lVar31 = lVar19 * 10;
              uVar23 = uVar24 & uVar21;
              uVar6 = uVar25 - uVar23;
              iVar37 = (int)(uVar24 >> uVar22) + 0x30;
              *(char *)(param_3 + uVar36 + 1) = (char)iVar37;
            } while (uVar25 < uVar23 || uVar6 == 0);
            bVar13 = uVar6 < uVar26;
            lVar16 = lVar31 * (uVar28 - lVar3);
            uVar22 = lVar16 + lVar19 * -10;
            uVar28 = lVar16 + lVar31;
            uVar21 = uVar22 - uVar23;
            if ((uVar22 < uVar23 || uVar21 == 0) || uVar6 < uVar26) {
LAB_00aa2588:
              uVar21 = uVar28 - uVar23;
              if (uVar23 <= uVar28 && uVar21 != 0) {
LAB_00aa2590:
                if ((!bVar13) &&
                   ((uVar23 + uVar26 < uVar28 || ((uVar23 + uVar26) - uVar28 <= uVar21))))
                goto LAB_00aa2604;
              }
            }
            else {
              uVar17 = uVar17 * 10 - (uVar26 + uVar23);
              while ((uVar6 = uVar23 + uVar26, uVar6 < uVar22 ||
                     ((uVar26 - uVar22) + uVar23 <= uVar21))) {
                bVar13 = uVar17 < uVar26;
                iVar37 = iVar37 + -1;
                *(char *)(param_3 + uVar29) = (char)iVar37;
                uVar23 = uVar6;
                if ((uVar22 <= uVar6) ||
                   (bVar14 = uVar17 < uVar26, uVar21 = uVar21 - uVar26, uVar17 = uVar17 - uVar26,
                   bVar14)) goto LAB_00aa2588;
              }
              bVar13 = false;
              uVar21 = uVar28 - uVar23;
              if (uVar23 <= uVar28 && uVar21 != 0) goto LAB_00aa2590;
            }
            if (((ulong)(lVar19 * 0x14) < uVar23 || lVar19 * 0x14 - uVar23 == 0) &&
               (uVar23 <= uVar25 + lVar19 * -0x28)) {
              lVar31 = uVar36 + 2;
              goto LAB_00aa2610;
            }
            goto LAB_00aa2604;
          }
          bVar13 = uVar27 < 10;
          uVar29 = uVar29 + 1;
          uVar27 = uVar27 / 10;
          if (bVar13) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_const::panic_const_div_by_zero
                      (&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affd90);
          }
        }
        uVar22 = (ulong)uVar27 << uVar22;
        uVar21 = (uVar28 - lVar3) - 1;
        uVar28 = (uVar28 - lVar3) + 1;
        bVar13 = uVar25 - uVar17 < uVar22;
        if (uVar17 < uVar21 && uVar22 <= uVar25 - uVar17) {
          lVar31 = lVar31 + lVar30;
          uVar26 = ((lVar31 - lVar3) - uVar23) - lVar39;
          uVar25 = ((uVar23 + uVar22 + lVar20 + lVar16 + lVar19) - lVar30) + lVar39;
          uVar23 = ((((lVar31 + lVar18) - lVar32) - (uVar23 + uVar22)) - lVar39) + 2;
          do {
            uVar36 = uVar17 + uVar22;
            if ((uVar21 <= uVar36) && (uVar26 < uVar25)) {
              bVar13 = false;
              uVar23 = uVar28 - uVar17;
              if (uVar28 < uVar17 || uVar23 == 0) goto LAB_00aa25bc;
              goto LAB_00aa249c;
            }
            bVar13 = uVar23 < uVar22;
            iVar37 = iVar37 + -1;
            *(char *)(param_3 + uVar29) = (char)iVar37;
            uVar17 = uVar36;
            if (uVar21 <= uVar36) break;
            uVar26 = uVar26 - uVar22;
            bVar14 = uVar22 <= uVar23;
            uVar25 = uVar25 + uVar22;
            uVar23 = uVar23 - uVar22;
          } while (bVar14);
        }
        uVar23 = uVar28 - uVar17;
        if (uVar17 <= uVar28 && uVar23 != 0) {
LAB_00aa249c:
          if ((!bVar13) && ((uVar17 + uVar22 < uVar28 || ((uVar17 + uVar22) - uVar28 <= uVar23))))
          goto LAB_00aa2604;
        }
LAB_00aa25bc:
        if ((1 < uVar17) && (uVar17 <= lVar2 - 3U)) {
          lVar31 = uVar29 + 1;
LAB_00aa2610:
          *param_1 = param_3;
          param_1[1] = lVar31;
          *(short *)(param_1 + 2) = ((short)uVar15 - sVar5) + 1;
          return;
        }
LAB_00aa2604:
        *param_1 = 0;
        return;
      }
    }
    panicking::assert_failed<u64,u64>
              (0,&local_48,&local_70,0,param_6,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff700);
  }
                    /* WARNING: Subroutine does not return */
  panicking::panic("assertion failed: d.mant > 0",0x1c,
                   &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affd18);
}


// ===== 00aa2738  core::num::imp::flt2dec::strategy::dragon::format_exact =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::dragon::format_exact */

void __rustcall
core::num::imp::flt2dec::strategy::dragon::format_exact
          (undefined8 *param_1,ulong *param_2,undefined1 *param_3,ulong param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  uint *puVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  size_t __n;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  short sVar25;
  short sVar26;
  undefined1 uVar27;
  ulong uVar28;
  uint local_3d4 [41];
  undefined8 local_330;
  uint local_328 [38];
  undefined8 uStack_290;
  undefined8 local_288;
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
  ulong local_1e0;
  uint uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  uint local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  
  uVar17 = *param_2;
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant > 0",0x1c,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affe08);
  }
  if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.minus > 0",0x1d,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affe20);
  }
  if (param_2[2] == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.plus > 0",0x1c,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affe38);
  }
  if (CARRY8(uVar17,param_2[2])) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_add(d.plus).is_som",0x36,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affee0);
  }
  if (uVar17 < param_2[1]) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affec8);
  }
  sVar25 = (short)param_2[3];
  local_3d4[1] = (uint)uVar17;
  local_3d4[2] = (uint)(uVar17 >> 0x20);
  local_330 = 1;
  if (uVar17 >> 0x20 != 0) {
    local_330 = 2;
  }
  local_3d4[0x27] = 0;
  local_3d4[0x28] = 0;
  local_3d4[5] = 0;
  local_3d4[6] = 0;
  local_3d4[3] = 0;
  local_3d4[4] = 0;
  uVar17 = (long)((int)sVar25 - (int)LZCOUNT(uVar17 - 1)) * 0x4d104d42 + 0x1344135080;
  local_3d4[9] = 0;
  local_3d4[10] = 0;
  local_3d4[7] = 0;
  local_3d4[8] = 0;
  local_3d4[0xd] = 0;
  local_3d4[0xe] = 0;
  local_3d4[0xb] = 0;
  local_3d4[0xc] = 0;
  local_3d4[0x11] = 0;
  local_3d4[0x12] = 0;
  local_3d4[0xf] = 0;
  local_3d4[0x10] = 0;
  local_3d4[0x15] = 0;
  local_3d4[0x16] = 0;
  local_3d4[0x13] = 0;
  local_3d4[0x14] = 0;
  local_3d4[0x19] = 0;
  local_3d4[0x1a] = 0;
  local_3d4[0x17] = 0;
  local_3d4[0x18] = 0;
  local_3d4[0x1d] = 0;
  local_3d4[0x1e] = 0;
  local_3d4[0x1b] = 0;
  local_3d4[0x1c] = 0;
  local_3d4[0x21] = 0;
  local_3d4[0x22] = 0;
  local_3d4[0x1f] = 0;
  local_3d4[0x20] = 0;
  local_3d4[0x25] = 0;
  local_3d4[0x26] = 0;
  local_3d4[0x23] = 0;
  local_3d4[0x24] = 0;
  uStack_290 = 0;
  local_328[0x25] = 0;
  local_328[0x23] = 0;
  local_328[0x24] = 0;
  local_328[0x21] = 0;
  local_328[0x22] = 0;
  local_328[0x1f] = 0;
  local_328[0x20] = 0;
  local_328[0x1d] = 0;
  local_328[0x1e] = 0;
  local_328[0x1b] = 0;
  local_328[0x1c] = 0;
  local_328[0x19] = 0;
  local_328[0x1a] = 0;
  local_328[0x17] = 0;
  local_328[0x18] = 0;
  local_328[0x15] = 0;
  local_328[0x16] = 0;
  local_328[0x13] = 0;
  local_328[0x14] = 0;
  local_328[0x11] = 0;
  local_328[0x12] = 0;
  local_328[0xf] = 0;
  local_328[0x10] = 0;
  local_328[0xd] = 0;
  local_328[0xe] = 0;
  local_328[0xb] = 0;
  local_328[0xc] = 0;
  local_328[9] = 0;
  local_328[10] = 0;
  local_328[7] = 0;
  local_328[8] = 0;
  local_328[5] = 0;
  local_328[6] = 0;
  local_328[3] = 0;
  local_328[4] = 0;
  local_328[1] = 0;
  local_328[2] = 0;
  local_288 = 1;
  local_328[0] = 1;
  sVar26 = (short)(uVar17 >> 0x20);
  if (sVar25 < 0) {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2
              (local_328,(long)-sVar25);
    if ((uVar17 >> 0x2f & 1) == 0) goto LAB_00aa2840;
LAB_00aa2864:
    puVar12 = local_3d4 + 1;
    uVar17 = (ulong)(uint)-(int)(uVar17 >> 0x20) & 0xffff;
  }
  else {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_3d4 + 1);
    if ((uVar17 >> 0x2f & 1) != 0) goto LAB_00aa2864;
LAB_00aa2840:
    uVar17 = uVar17 >> 0x20 & 0x7fff;
    puVar12 = local_328;
  }
  mul_pow10(puVar12,uVar17);
  uVar28 = local_288;
  uVar17 = local_330;
  uStack_98 = CONCAT44(local_328[0x23],local_328[0x22]);
  local_a0 = CONCAT44(local_328[0x21],local_328[0x20]);
  uStack_88 = uStack_290;
  uStack_90 = CONCAT44(local_328[0x25],local_328[0x24]);
  local_80 = local_288;
  uStack_a8 = CONCAT44(local_328[0x1f],local_328[0x1e]);
  local_b0 = CONCAT44(local_328[0x1d],local_328[0x1c]);
  uStack_e8 = CONCAT44(local_328[0xf],local_328[0xe]);
  local_f0 = CONCAT44(local_328[0xd],local_328[0xc]);
  uStack_d8 = CONCAT44(local_328[0x13],local_328[0x12]);
  local_e0 = CONCAT44(local_328[0x11],local_328[0x10]);
  uStack_c8 = CONCAT44(local_328[0x17],local_328[0x16]);
  local_d0 = CONCAT44(local_328[0x15],local_328[0x14]);
  uStack_b8 = CONCAT44(local_328[0x1b],local_328[0x1a]);
  local_c0 = CONCAT44(local_328[0x19],local_328[0x18]);
  uStack_118 = CONCAT44(local_328[3],local_328[2]);
  local_120 = CONCAT44(local_328[1],local_328[0]);
  uStack_108 = CONCAT44(local_328[7],local_328[6]);
  uStack_110 = CONCAT44(local_328[5],local_328[4]);
  uStack_f8 = CONCAT44(local_328[0xb],local_328[10]);
  local_100 = CONCAT44(local_328[9],local_328[8]);
  uVar14 = param_4;
  if (9 < param_4) {
    do {
      uVar23 = local_80;
      if (0x28 < local_80) goto code_r0x00aa3008;
      if (local_80 != 0) {
        lVar22 = local_80 << 2;
        uVar23 = 0;
        do {
          uVar23 = (ulong)*(uint *)((long)&local_124 + lVar22) | uVar23 << 0x20;
          *(int *)((long)&local_124 + lVar22) = (int)(uVar23 / 1000000000);
          lVar22 = lVar22 + -4;
          uVar23 = uVar23 % 1000000000;
        } while (lVar22 != 0);
      }
      uVar14 = uVar14 - 9;
    } while (9 < uVar14);
  }
  uVar15 = (ulong)(uint)(*(int *)(&DAT_00395dc4 + uVar14 * 4) << 1);
  if (*(int *)(&DAT_00395dc4 + uVar14 * 4) << 1 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic(&DAT_003906b4,0x1b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  uVar23 = local_80;
  if (0x28 < local_80) goto code_r0x00aa3008;
  uVar14 = local_330;
  if (local_80 == 0) {
    if (local_330 == 0) {
      uVar14 = 0;
    }
  }
  else {
    lVar22 = local_80 << 2;
    lVar18 = 0;
    do {
      uVar19 = (ulong)*(uint *)((long)&local_124 + lVar22) | lVar18 << 0x20;
      uVar23 = 0;
      if (uVar15 != 0) {
        uVar23 = uVar19 / uVar15;
      }
      *(int *)((long)&local_124 + lVar22) = (int)uVar23;
      lVar22 = lVar22 + -4;
      lVar18 = uVar19 - uVar23 * uVar15;
    } while (lVar22 != 0);
    if (local_330 <= local_80) {
      uVar14 = local_80;
    }
  }
  if (0x28 < uVar14) {
code_r0x00aa301c:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar14,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  if (uVar14 != 0) {
    puVar12 = local_3d4;
    puVar16 = (uint *)&local_120;
    uVar23 = uVar14;
    bVar1 = false;
    do {
      puVar12 = (uint *)((long)puVar12 + 4);
      uVar6 = *puVar16;
      uVar7 = *puVar12;
      bVar4 = CARRY4(uVar7 + uVar6,(uint)bVar1);
      uVar23 = uVar23 - 1;
      *puVar16 = uVar6 + uVar7 + (uint)bVar1;
      puVar16 = puVar16 + 1;
      bVar1 = CARRY4(uVar7,uVar6) || bVar4;
    } while (uVar23 != 0);
    if (CARRY4(uVar7,uVar6) || bVar4) {
      if (uVar14 == 0x28) goto code_r0x00aa3138;
      *(undefined4 *)((long)&local_120 + uVar14 * 4) = 1;
      uVar14 = uVar14 + 1;
    }
  }
  local_80 = uVar14;
  uVar23 = local_288;
  if (local_288 <= uVar14) {
    uVar23 = uVar14;
  }
  if (0x28 < uVar23) {
code_r0x00aa3034:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar23,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  lVar22 = uVar23 << 2;
  do {
    sVar25 = (short)param_5;
    if (lVar22 == 0) goto LAB_00aa2e50;
    puVar12 = (uint *)((long)&local_124 + lVar22);
    uVar6 = *(uint *)((long)local_328 + lVar22 + -4);
    lVar22 = lVar22 + -4;
  } while (*puVar12 == uVar6);
  if (*puVar12 < uVar6) {
    if (local_330 != 0) {
      lVar22 = local_330 << 2;
      uVar14 = 0;
      puVar12 = local_3d4;
      do {
        puVar12 = (uint *)((long)puVar12 + 4);
        lVar22 = lVar22 + -4;
        uVar23 = uVar14 + (ulong)*puVar12 * 10;
        uVar14 = uVar23 >> 0x20;
        *puVar12 = (uint)uVar23;
      } while (lVar22 != 0);
      if (uVar14 != 0) {
        if (uVar17 == 0x28) {
code_r0x00aa3170:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (0x28,uVar17,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
        }
        local_3d4[uVar17 + 1] = (int)(uVar23 >> 0x20);
        uVar17 = uVar17 + 1;
      }
    }
    local_330 = uVar17;
    if (sVar26 < sVar25) goto LAB_00aa2e60;
LAB_00aa2a9c:
    uVar15 = (long)(short)(sVar26 - sVar25);
    if (param_4 <= (ulong)((long)sVar26 - (long)sVar25)) {
      uVar15 = param_4;
    }
    if (uVar15 == 0) goto LAB_00aa2e64;
    uStack_1f8 = CONCAT44(local_328[0x23],local_328[0x22]);
    local_200 = CONCAT44(local_328[0x21],local_328[0x20]);
    uStack_1f0 = CONCAT44(local_328[0x25],local_328[0x24]);
    uStack_1e8 = uStack_290;
    uStack_238 = CONCAT44(local_328[0x13],local_328[0x12]);
    local_240 = CONCAT44(local_328[0x11],local_328[0x10]);
    uStack_228 = CONCAT44(local_328[0x17],local_328[0x16]);
    uStack_230 = CONCAT44(local_328[0x15],local_328[0x14]);
    local_1e0 = local_288;
    uStack_218 = CONCAT44(local_328[0x1b],local_328[0x1a]);
    local_220 = CONCAT44(local_328[0x19],local_328[0x18]);
    uStack_208 = CONCAT44(local_328[0x1f],local_328[0x1e]);
    uStack_210 = CONCAT44(local_328[0x1d],local_328[0x1c]);
    uStack_278 = CONCAT44(local_328[3],local_328[2]);
    local_280 = CONCAT44(local_328[1],local_328[0]);
    uStack_268 = CONCAT44(local_328[7],local_328[6]);
    uStack_270 = CONCAT44(local_328[5],local_328[4]);
    uStack_258 = CONCAT44(local_328[0xb],local_328[10]);
    local_260 = CONCAT44(local_328[9],local_328[8]);
    uStack_248 = CONCAT44(local_328[0xf],local_328[0xe]);
    uStack_250 = CONCAT44(local_328[0xd],local_328[0xc]);
    local_3d4[0] = param_5;
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_280,1);
    uStack_148 = CONCAT44(local_328[0x23],local_328[0x22]);
    local_150 = CONCAT44(local_328[0x21],local_328[0x20]);
    uStack_140 = CONCAT44(local_328[0x25],local_328[0x24]);
    uStack_138 = uStack_290;
    uStack_188 = CONCAT44(local_328[0x13],local_328[0x12]);
    local_190 = CONCAT44(local_328[0x11],local_328[0x10]);
    uStack_178 = CONCAT44(local_328[0x17],local_328[0x16]);
    uStack_180 = CONCAT44(local_328[0x15],local_328[0x14]);
    local_130 = local_288;
    uStack_168 = CONCAT44(local_328[0x1b],local_328[0x1a]);
    local_170 = CONCAT44(local_328[0x19],local_328[0x18]);
    uStack_158 = CONCAT44(local_328[0x1f],local_328[0x1e]);
    uStack_160 = CONCAT44(local_328[0x1d],local_328[0x1c]);
    uStack_1c8 = CONCAT44(local_328[3],local_328[2]);
    local_1d0 = CONCAT44(local_328[1],local_328[0]);
    uStack_1b8 = CONCAT44(local_328[7],local_328[6]);
    uStack_1c0 = CONCAT44(local_328[5],local_328[4]);
    uStack_1a8 = CONCAT44(local_328[0xb],local_328[10]);
    local_1b0 = CONCAT44(local_328[9],local_328[8]);
    uStack_198 = CONCAT44(local_328[0xf],local_328[0xe]);
    uStack_1a0 = CONCAT44(local_328[0xd],local_328[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_1d0,2);
    uStack_98 = CONCAT44(local_328[0x23],local_328[0x22]);
    local_a0 = CONCAT44(local_328[0x21],local_328[0x20]);
    uStack_90 = CONCAT44(local_328[0x25],local_328[0x24]);
    uStack_88 = uStack_290;
    uStack_d8 = CONCAT44(local_328[0x13],local_328[0x12]);
    local_e0 = CONCAT44(local_328[0x11],local_328[0x10]);
    uStack_c8 = CONCAT44(local_328[0x17],local_328[0x16]);
    local_d0 = CONCAT44(local_328[0x15],local_328[0x14]);
    local_80 = local_288;
    uStack_b8 = CONCAT44(local_328[0x1b],local_328[0x1a]);
    local_c0 = CONCAT44(local_328[0x19],local_328[0x18]);
    uStack_a8 = CONCAT44(local_328[0x1f],local_328[0x1e]);
    local_b0 = CONCAT44(local_328[0x1d],local_328[0x1c]);
    uStack_118 = CONCAT44(local_328[3],local_328[2]);
    local_120 = CONCAT44(local_328[1],local_328[0]);
    uStack_108 = CONCAT44(local_328[7],local_328[6]);
    uStack_110 = CONCAT44(local_328[5],local_328[4]);
    uStack_f8 = CONCAT44(local_328[0xb],local_328[10]);
    local_100 = CONCAT44(local_328[9],local_328[8]);
    uStack_e8 = CONCAT44(local_328[0xf],local_328[0xe]);
    local_f0 = CONCAT44(local_328[0xd],local_328[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_120,3);
    uVar10 = local_80;
    uVar9 = local_130;
    uVar19 = local_1e0;
    uVar24 = 0;
    do {
      uVar23 = local_330;
      if (0x28 < local_330) goto code_r0x00aa3008;
      lVar22 = 0;
      uVar5 = uVar24 + 1;
      do {
        if (local_330 * 4 - lVar22 == 0) {
          if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
            slice::index::slice_index_fail
                      (uVar24,uVar15,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affeb0);
          }
          if (uVar15 - uVar24 != 0) {
            memset(param_3 + uVar24,0x30,uVar15 - uVar24);
          }
          goto LAB_00aa2fdc;
        }
        uVar8 = lVar22 + 4;
        lVar22 = lVar22 + 4;
      } while (*(int *)((long)local_3d4 + uVar8) == 0);
      uVar14 = uVar10;
      if (uVar10 <= local_330) {
        uVar14 = local_330;
      }
      if (0x28 < uVar14) goto code_r0x00aa301c;
      lVar22 = uVar14 << 2;
      do {
        if (lVar22 == 0) goto LAB_00aa2c1c;
        puVar16 = (uint *)((long)&local_124 + lVar22);
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == *puVar16);
      if (*puVar12 < *puVar16) {
        bVar13 = 0;
      }
      else {
LAB_00aa2c1c:
        puVar12 = local_3d4;
        uVar17 = uVar14;
        puVar16 = (uint *)&local_120;
        bVar1 = true;
        do {
          puVar12 = (uint *)((long)puVar12 + 4);
          uVar6 = *puVar12;
          uVar7 = ~*puVar16;
          bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
          uVar17 = uVar17 - 1;
          *puVar12 = uVar7 + uVar6 + (uint)bVar1;
          puVar16 = puVar16 + 1;
          bVar1 = CARRY4(uVar6,uVar7) || bVar4;
        } while (uVar17 != 0);
        if (!CARRY4(uVar6,uVar7) && !bVar4) goto LAB_00aa30f0;
        bVar13 = 8;
        local_330 = uVar14;
      }
      uVar14 = uVar9;
      if (uVar9 <= local_330) {
        uVar14 = local_330;
      }
      if (0x28 < uVar14) goto code_r0x00aa301c;
      lVar22 = uVar14 << 2;
      do {
        if (lVar22 == 0) goto LAB_00aa2ca0;
        puVar16 = (uint *)((long)&uStack_1d4 + lVar22);
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == *puVar16);
      if (*puVar16 <= *puVar12) {
LAB_00aa2ca0:
        if (uVar14 != 0) {
          puVar12 = local_3d4;
          uVar17 = uVar14;
          puVar16 = (uint *)&local_1d0;
          bVar1 = true;
          do {
            puVar12 = (uint *)((long)puVar12 + 4);
            uVar6 = *puVar12;
            uVar7 = ~*puVar16;
            bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
            uVar17 = uVar17 - 1;
            *puVar12 = uVar7 + uVar6 + (uint)bVar1;
            puVar16 = puVar16 + 1;
            bVar1 = CARRY4(uVar6,uVar7) || bVar4;
          } while (uVar17 != 0);
          if (!CARRY4(uVar6,uVar7) && !bVar4) goto LAB_00aa30f0;
        }
        bVar13 = bVar13 | 4;
        local_330 = uVar14;
      }
      uVar23 = uVar19;
      if (uVar19 <= local_330) {
        uVar23 = local_330;
      }
      if (0x28 < uVar23) goto code_r0x00aa3034;
      lVar22 = uVar23 << 2;
      do {
        if (lVar22 == 0) goto LAB_00aa2d24;
        uVar6 = *(uint *)((long)&local_288 + lVar22 + 4);
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == uVar6);
      if (uVar6 <= *puVar12) {
LAB_00aa2d24:
        if (uVar23 != 0) {
          puVar12 = local_3d4;
          uVar17 = uVar23;
          puVar16 = (uint *)&local_280;
          bVar1 = true;
          do {
            puVar12 = (uint *)((long)puVar12 + 4);
            uVar6 = *puVar12;
            uVar7 = ~*puVar16;
            bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
            uVar17 = uVar17 - 1;
            *puVar12 = uVar7 + uVar6 + (uint)bVar1;
            puVar16 = puVar16 + 1;
            bVar1 = CARRY4(uVar6,uVar7) || bVar4;
          } while (uVar17 != 0);
          if (!CARRY4(uVar6,uVar7) && !bVar4) goto LAB_00aa30f0;
        }
        bVar13 = bVar13 + 2;
        local_330 = uVar23;
      }
      uVar23 = uVar28;
      if (uVar28 <= local_330) {
        uVar23 = local_330;
      }
      if (0x28 < uVar23) goto code_r0x00aa3008;
      lVar22 = uVar23 << 2;
      do {
        if (lVar22 == 0) goto LAB_00aa2da4;
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        uVar6 = *(uint *)((long)local_328 + lVar22 + -4);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == uVar6);
      if (uVar6 <= *puVar12) {
LAB_00aa2da4:
        if (uVar23 != 0) {
          puVar12 = local_3d4;
          uVar17 = uVar23;
          puVar16 = local_328;
          bVar1 = true;
          do {
            puVar12 = (uint *)((long)puVar12 + 4);
            uVar6 = *puVar12;
            uVar7 = ~*puVar16;
            bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
            uVar17 = uVar17 - 1;
            *puVar12 = uVar7 + uVar6 + (uint)bVar1;
            puVar16 = puVar16 + 1;
            bVar1 = CARRY4(uVar6,uVar7) || bVar4;
          } while (uVar17 != 0);
          if (!CARRY4(uVar6,uVar7) && !bVar4) {
LAB_00aa30f0:
                    /* WARNING: Subroutine does not return */
            panicking::panic(&DAT_003906cf,0x1a,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
        }
        bVar13 = bVar13 + 1;
        local_330 = uVar23;
      }
      uVar17 = local_330;
      if (uVar24 == param_4) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check
                  (param_4,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affe98);
      }
      param_3[uVar24] = bVar13 + 0x30;
      if (local_330 != 0) {
        lVar22 = local_330 << 2;
        uVar14 = 0;
        puVar12 = local_3d4;
        do {
          puVar12 = (uint *)((long)puVar12 + 4);
          lVar22 = lVar22 + -4;
          uVar23 = uVar14 + (ulong)*puVar12 * 10;
          uVar14 = uVar23 >> 0x20;
          *puVar12 = (uint)uVar23;
        } while (lVar22 != 0);
        if (uVar14 != 0) {
          if (uVar17 == 0x28) goto code_r0x00aa3170;
          local_3d4[uVar17 + 1] = (int)(uVar23 >> 0x20);
          uVar17 = uVar17 + 1;
        }
      }
      local_330 = uVar17;
      uVar24 = uVar5;
    } while (uVar5 != uVar15);
    bVar1 = false;
    param_5 = local_3d4[0];
  }
  else {
LAB_00aa2e50:
    sVar26 = sVar26 + 1;
    if (sVar25 <= sVar26) goto LAB_00aa2a9c;
LAB_00aa2e60:
    uVar15 = 0;
LAB_00aa2e64:
    bVar1 = true;
  }
  if (uVar28 != 0) {
    lVar22 = uVar28 << 2;
    uVar17 = 0;
    puVar12 = local_328;
    do {
      lVar22 = lVar22 + -4;
      uVar14 = (ulong)*puVar12 * 5 + uVar17;
      uVar17 = uVar14 >> 0x20;
      *puVar12 = (uint)uVar14;
      puVar12 = puVar12 + 1;
    } while (lVar22 != 0);
    if (uVar17 != 0) {
      if (uVar28 == 0x28) {
code_r0x00aa3138:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(0x28,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
      }
      local_328[uVar28] = (uint)(uVar14 >> 0x20);
      uVar28 = uVar28 + 1;
    }
  }
  local_288 = uVar28;
  uVar23 = uVar28;
  if (uVar28 <= local_330) {
    uVar23 = local_330;
  }
  if (0x28 < uVar23) {
code_r0x00aa3008:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar23,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  lVar22 = uVar23 << 2;
  do {
    if (lVar22 == 0) goto LAB_00aa2f08;
    uVar6 = *(uint *)((long)local_3d4 + lVar22);
    uVar7 = *(uint *)((long)local_328 + lVar22 + -4);
    lVar22 = lVar22 + -4;
  } while (uVar6 == uVar7);
  cVar2 = uVar7 <= uVar6 && uVar6 != uVar7;
  if (uVar7 > uVar6) {
    cVar2 = -1;
  }
  if (cVar2 == '\0') {
LAB_00aa2f08:
    if (bVar1) {
      uVar15 = 0;
      goto LAB_00aa2fdc;
    }
    uVar17 = uVar15 - 1;
    if (param_4 <= uVar17) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(uVar17,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affe50)
      ;
    }
    if ((param_3[uVar17] & 1) != 0) goto LAB_00aa2f48;
  }
  else if (cVar2 == '\x01') {
LAB_00aa2f48:
    if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
      slice::index::slice_index_fail
                (0,uVar15,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affe68);
    }
    sVar11 = 0;
    puVar20 = param_3;
    do {
      __n = sVar11;
      if (uVar15 == __n) {
        uVar27 = 0x31;
        if (!bVar1) {
          *param_3 = 0x31;
          uVar27 = 0x30;
          memset(param_3 + 1,0x30,uVar15 - 1);
        }
        sVar25 = sVar26 + 1;
        bVar1 = (short)param_5 <= sVar26;
        sVar26 = sVar25;
        if ((bVar1) && (uVar15 < param_4)) {
          param_3[uVar15] = uVar27;
          uVar15 = uVar15 + 1;
        }
        goto LAB_00aa2fd4;
      }
      puVar21 = puVar20 + -1;
      pcVar3 = puVar20 + (uVar15 - 1);
      sVar11 = __n + 1;
      puVar20 = puVar21;
    } while (*pcVar3 == '9');
    pcVar3 = puVar21 + uVar15;
    *pcVar3 = *pcVar3 + '\x01';
    memset(pcVar3 + 1,0x30,__n);
  }
LAB_00aa2fd4:
  if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail
              (0,uVar15,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affe80);
  }
LAB_00aa2fdc:
  *param_1 = param_3;
  param_1[1] = uVar15;
  *(short *)(param_1 + 2) = sVar26;
  return;
}


// ===== 00aa317c  core::num::imp::flt2dec::strategy::dragon::format_shortest =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::dragon::format_shortest */

void __rustcall
core::num::imp::flt2dec::strategy::dragon::format_shortest
          (undefined8 *param_1,ulong *param_2,undefined1 *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  bool bVar11;
  uint uVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  long lVar22;
  size_t __n;
  ulong uVar23;
  short local_5e0;
  undefined8 local_5d8;
  uint local_5d0 [2];
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  uint local_528 [2];
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  ulong local_488;
  uint local_480 [2];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  uint local_3d8 [38];
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong local_290;
  uint uStack_284;
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
  ulong local_1e0;
  uint uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  uint uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  
  uVar16 = *param_2;
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant > 0",0x1c,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affef8);
  }
  uVar15 = param_2[1];
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.minus > 0",0x1d,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afff10);
  }
  uVar14 = param_2[2];
  if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.plus > 0",0x1c,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afff28);
  }
  if (CARRY8(uVar14,uVar16)) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_add(d.plus).is_som",0x36,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afffb8);
  }
  if (uVar16 < uVar15) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afffa0);
  }
  if (param_4 < 0x11) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: buf.len() >= MAX_SIG_DIGITS-+",0x2d,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afff40);
  }
  local_480[0] = (uint)uVar14;
  sVar6 = (short)param_2[3];
  lVar22 = (long)sVar6;
  local_5d0[0] = (uint)uVar16;
  local_5d0[1] = (uint)(uVar16 >> 0x20);
  local_530 = 1;
  if (uVar16 >> 0x20 != 0) {
    local_530 = 2;
  }
  cVar5 = *(char *)((long)param_2 + 0x1a);
  local_538 = 0;
  uStack_540 = 0;
  local_548 = 0;
  local_528[0] = (uint)uVar15;
  local_528[1] = (uint)(uVar15 >> 0x20);
  uStack_4c8 = 0;
  local_4d0 = 0;
  uStack_4b8 = 0;
  local_4c0 = 0;
  uStack_4a8 = 0;
  local_4b0 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  uStack_470 = 0;
  local_478 = 0;
  uStack_460 = 0;
  uStack_468 = 0;
  uStack_450 = 0;
  local_458 = 0;
  uStack_440 = 0;
  uStack_448 = 0;
  uStack_430 = 0;
  local_438 = 0;
  uStack_420 = 0;
  local_428 = 0;
  uStack_410 = 0;
  local_418 = 0;
  uStack_400 = 0;
  local_408 = 0;
  uStack_3f0 = 0;
  local_3f8 = 0;
  uStack_518 = 0;
  local_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uVar16 = (long)((int)sVar6 - (int)LZCOUNT(uVar14 + uVar16 + -1)) * 0x4d104d42 + 0x1344135080;
  uStack_4f8 = 0;
  local_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  local_4e0 = 0;
  local_488 = 1;
  if (uVar15 >> 0x20 != 0) {
    local_488 = 2;
  }
  local_490 = 0;
  local_3e0 = 1;
  if (uVar14 >> 0x20 != 0) {
    local_3e0 = 2;
  }
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5b0 = 0;
  local_5b8 = 0;
  uStack_5a0 = 0;
  local_5a8 = 0;
  uStack_590 = 0;
  local_598 = 0;
  uStack_580 = 0;
  local_588 = 0;
  uStack_570 = 0;
  local_578 = 0;
  uStack_560 = 0;
  local_568 = 0;
  uStack_550 = 0;
  local_558 = 0;
  local_3e8 = 0;
  local_480[1] = (uint)(uVar14 >> 0x20);
  uStack_340 = 0;
  local_3d8[0x25] = 0;
  local_3d8[0x23] = 0;
  local_3d8[0x24] = 0;
  local_3d8[0x21] = 0;
  local_3d8[0x22] = 0;
  local_3d8[0x1f] = 0;
  local_3d8[0x20] = 0;
  local_3d8[0x1d] = 0;
  local_3d8[0x1e] = 0;
  local_3d8[0x1b] = 0;
  local_3d8[0x1c] = 0;
  local_3d8[0x19] = 0;
  local_3d8[0x1a] = 0;
  local_3d8[0x17] = 0;
  local_3d8[0x18] = 0;
  local_3d8[0x15] = 0;
  local_3d8[0x16] = 0;
  local_3d8[0x13] = 0;
  local_3d8[0x14] = 0;
  local_3d8[0x11] = 0;
  local_3d8[0x12] = 0;
  local_3d8[0xf] = 0;
  local_3d8[0x10] = 0;
  local_3d8[0xd] = 0;
  local_3d8[0xe] = 0;
  local_3d8[0xb] = 0;
  local_3d8[0xc] = 0;
  local_3d8[9] = 0;
  local_3d8[10] = 0;
  local_3d8[7] = 0;
  local_3d8[8] = 0;
  local_3d8[5] = 0;
  local_3d8[6] = 0;
  local_3d8[3] = 0;
  local_3d8[4] = 0;
  local_3d8[1] = 0;
  local_3d8[2] = 0;
  local_338 = 1;
  local_3d8[0] = 1;
  local_5e0 = (short)(uVar16 >> 0x20);
  if (lVar22 < 0) {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2
              (local_3d8,(long)-sVar6);
    if ((uVar16 >> 0x2f & 1) != 0) goto LAB_00aa3340;
LAB_00aa331c:
    uVar16 = uVar16 >> 0x20 & 0x7fff;
    puVar9 = local_3d8;
  }
  else {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_5d0,lVar22);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_528,lVar22);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_480,lVar22);
    if ((uVar16 >> 0x2f & 1) == 0) goto LAB_00aa331c;
LAB_00aa3340:
    uVar16 = (ulong)(uint)-(int)(uVar16 >> 0x20);
    mul_pow10(local_5d0,uVar16 & 0xffff);
    mul_pow10(local_528,uVar16 & 0xffff);
    puVar9 = local_480;
    uVar16 = uVar16 & 0xffff;
  }
  mul_pow10(puVar9,uVar16);
  uVar14 = local_338;
  uVar8 = local_3e0;
  uVar15 = local_530;
  local_80 = local_530;
  uStack_98 = local_548;
  local_a0 = uStack_550;
  uStack_88 = local_538;
  uStack_90 = uStack_540;
  uVar16 = local_3e0;
  if (local_3e0 <= local_530) {
    uVar16 = local_530;
  }
  uStack_d8 = local_588;
  local_e0 = uStack_590;
  uStack_c8 = local_578;
  uStack_d0 = uStack_580;
  uStack_b8 = local_568;
  local_c0 = uStack_570;
  uStack_a8 = local_558;
  uStack_b0 = uStack_560;
  uStack_118 = uStack_5c8;
  local_120 = CONCAT44(local_5d0[1],local_5d0[0]);
  uStack_108 = local_5b8;
  uStack_110 = uStack_5c0;
  uStack_f8 = local_5a8;
  local_100 = uStack_5b0;
  uStack_e8 = local_598;
  uStack_f0 = uStack_5a0;
  if (0x28 < uVar16) {
code_r0x00aa3bf8:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar16,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  local_5d8 = param_1;
  if (uVar16 != 0) {
    puVar9 = local_480;
    puVar17 = (uint *)&local_120;
    uVar18 = uVar16;
    bVar11 = false;
    do {
      uVar3 = *puVar17;
      uVar4 = *puVar9;
      bVar1 = CARRY4(uVar4 + uVar3,(uint)bVar11);
      uVar18 = uVar18 - 1;
      *puVar17 = uVar3 + uVar4 + (uint)bVar11;
      puVar9 = puVar9 + 1;
      puVar17 = puVar17 + 1;
      bVar11 = CARRY4(uVar4,uVar3) || bVar1;
    } while (uVar18 != 0);
    if (CARRY4(uVar4,uVar3) || bVar1) {
      if (uVar16 == 0x28) goto code_r0x00aa3d0c;
      *(undefined4 *)((long)&local_120 + uVar16 * 4) = 1;
      uVar16 = uVar16 + 1;
    }
  }
  local_80 = uVar16;
  if (uVar16 <= local_338) {
    uVar16 = local_338;
  }
  if (uVar16 < 0x29) {
    uVar16 = uVar16 << 2;
    do {
      if (uVar16 == 0) goto LAB_00aa3450;
      uVar4 = *(uint *)((long)&uStack_124 + uVar16);
      uVar3 = *(uint *)((long)local_3d8 + (uVar16 - 4));
      uVar16 = uVar16 - 4;
    } while (uVar3 == uVar4);
    uVar12 = (uint)(uVar4 <= uVar3 && uVar3 != uVar4);
    if (uVar4 > uVar3) {
      uVar12 = 0xffffffff;
    }
    uVar16 = (ulong)uVar12;
LAB_00aa3450:
    if ((char)uVar16 < cVar5) {
      local_5e0 = local_5e0 + 1;
    }
    else {
      uVar16 = local_530;
      if (0x28 < local_530) goto code_r0x00aa3bf8;
      if (local_530 != 0) {
        lVar22 = local_530 << 2;
        uVar16 = 0;
        puVar9 = local_5d0;
        do {
          lVar22 = lVar22 + -4;
          uVar18 = uVar16 + (ulong)*puVar9 * 10;
          uVar16 = uVar18 >> 0x20;
          *puVar9 = (uint)uVar18;
          puVar9 = puVar9 + 1;
        } while (lVar22 != 0);
        if (uVar16 != 0) {
          uVar16 = uVar15;
          if (uVar15 == 0x28) {
code_r0x00aa3d0c:
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (0x28,uVar16,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          local_5d0[uVar15] = (uint)(uVar18 >> 0x20);
          uVar15 = uVar15 + 1;
        }
      }
      uVar16 = local_488;
      local_530 = uVar15;
      if (0x28 < local_488) goto code_r0x00aa3be0;
      if (local_488 != 0) {
        lVar22 = local_488 << 2;
        uVar15 = 0;
        puVar9 = local_528;
        do {
          lVar22 = lVar22 + -4;
          uVar18 = uVar15 + (ulong)*puVar9 * 10;
          uVar15 = uVar18 >> 0x20;
          *puVar9 = (uint)uVar18;
          puVar9 = puVar9 + 1;
        } while (lVar22 != 0);
        if (uVar15 != 0) {
          if (uVar16 == 0x28) goto code_r0x00aa3ce4;
          local_528[uVar16] = (uint)(uVar18 >> 0x20);
          uVar16 = uVar16 + 1;
        }
      }
      local_488 = uVar16;
      if (uVar8 != 0) {
        lVar22 = uVar8 << 2;
        uVar16 = 0;
        puVar9 = local_480;
        do {
          lVar22 = lVar22 + -4;
          uVar15 = uVar16 + (ulong)*puVar9 * 10;
          uVar16 = uVar15 >> 0x20;
          *puVar9 = (uint)uVar15;
          puVar9 = puVar9 + 1;
        } while (lVar22 != 0);
        if (uVar16 != 0) {
          if (uVar8 == 0x28) {
code_r0x00aa3ce4:
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (0x28,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          local_480[uVar8] = (uint)(uVar15 >> 0x20);
          uVar8 = uVar8 + 1;
        }
      }
    }
    local_3e0 = uVar8;
    uStack_2a8 = CONCAT44(local_3d8[0x23],local_3d8[0x22]);
    local_2b0 = CONCAT44(local_3d8[0x21],local_3d8[0x20]);
    uStack_2a0 = CONCAT44(local_3d8[0x25],local_3d8[0x24]);
    uStack_298 = uStack_340;
    uStack_2e8 = CONCAT44(local_3d8[0x13],local_3d8[0x12]);
    local_2f0 = CONCAT44(local_3d8[0x11],local_3d8[0x10]);
    uStack_2d8 = CONCAT44(local_3d8[0x17],local_3d8[0x16]);
    uStack_2e0 = CONCAT44(local_3d8[0x15],local_3d8[0x14]);
    local_290 = local_338;
    uStack_2c8 = CONCAT44(local_3d8[0x1b],local_3d8[0x1a]);
    local_2d0 = CONCAT44(local_3d8[0x19],local_3d8[0x18]);
    uStack_2b8 = CONCAT44(local_3d8[0x1f],local_3d8[0x1e]);
    uStack_2c0 = CONCAT44(local_3d8[0x1d],local_3d8[0x1c]);
    uStack_328 = CONCAT44(local_3d8[3],local_3d8[2]);
    local_330 = CONCAT44(local_3d8[1],local_3d8[0]);
    uStack_318 = CONCAT44(local_3d8[7],local_3d8[6]);
    uStack_320 = CONCAT44(local_3d8[5],local_3d8[4]);
    uStack_308 = CONCAT44(local_3d8[0xb],local_3d8[10]);
    local_310 = CONCAT44(local_3d8[9],local_3d8[8]);
    uStack_2f8 = CONCAT44(local_3d8[0xf],local_3d8[0xe]);
    uStack_300 = CONCAT44(local_3d8[0xd],local_3d8[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_330,1);
    uStack_1f8 = CONCAT44(local_3d8[0x23],local_3d8[0x22]);
    local_200 = CONCAT44(local_3d8[0x21],local_3d8[0x20]);
    uStack_1f0 = CONCAT44(local_3d8[0x25],local_3d8[0x24]);
    uStack_1e8 = uStack_340;
    uStack_238 = CONCAT44(local_3d8[0x13],local_3d8[0x12]);
    local_240 = CONCAT44(local_3d8[0x11],local_3d8[0x10]);
    uStack_228 = CONCAT44(local_3d8[0x17],local_3d8[0x16]);
    uStack_230 = CONCAT44(local_3d8[0x15],local_3d8[0x14]);
    local_1e0 = local_338;
    uStack_218 = CONCAT44(local_3d8[0x1b],local_3d8[0x1a]);
    local_220 = CONCAT44(local_3d8[0x19],local_3d8[0x18]);
    uStack_208 = CONCAT44(local_3d8[0x1f],local_3d8[0x1e]);
    uStack_210 = CONCAT44(local_3d8[0x1d],local_3d8[0x1c]);
    uStack_278 = CONCAT44(local_3d8[3],local_3d8[2]);
    local_280 = CONCAT44(local_3d8[1],local_3d8[0]);
    uStack_268 = CONCAT44(local_3d8[7],local_3d8[6]);
    uStack_270 = CONCAT44(local_3d8[5],local_3d8[4]);
    uStack_258 = CONCAT44(local_3d8[0xb],local_3d8[10]);
    local_260 = CONCAT44(local_3d8[9],local_3d8[8]);
    uStack_248 = CONCAT44(local_3d8[0xf],local_3d8[0xe]);
    uStack_250 = CONCAT44(local_3d8[0xd],local_3d8[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_280,2);
    uStack_148 = CONCAT44(local_3d8[0x23],local_3d8[0x22]);
    local_150 = CONCAT44(local_3d8[0x21],local_3d8[0x20]);
    local_140 = CONCAT44(local_3d8[0x25],local_3d8[0x24]);
    uStack_138 = uStack_340;
    uStack_188 = CONCAT44(local_3d8[0x13],local_3d8[0x12]);
    local_190 = CONCAT44(local_3d8[0x11],local_3d8[0x10]);
    uStack_178 = CONCAT44(local_3d8[0x17],local_3d8[0x16]);
    local_180 = CONCAT44(local_3d8[0x15],local_3d8[0x14]);
    local_130 = local_338;
    uStack_168 = CONCAT44(local_3d8[0x1b],local_3d8[0x1a]);
    local_170 = CONCAT44(local_3d8[0x19],local_3d8[0x18]);
    uStack_158 = CONCAT44(local_3d8[0x1f],local_3d8[0x1e]);
    local_160 = CONCAT44(local_3d8[0x1d],local_3d8[0x1c]);
    uStack_1c8 = CONCAT44(local_3d8[3],local_3d8[2]);
    local_1d0 = CONCAT44(local_3d8[1],local_3d8[0]);
    uStack_1b8 = CONCAT44(local_3d8[7],local_3d8[6]);
    local_1c0 = CONCAT44(local_3d8[5],local_3d8[4]);
    uStack_1a8 = CONCAT44(local_3d8[0xb],local_3d8[10]);
    local_1b0 = CONCAT44(local_3d8[9],local_3d8[8]);
    uStack_198 = CONCAT44(local_3d8[0xf],local_3d8[0xe]);
    local_1a0 = CONCAT44(local_3d8[0xd],local_3d8[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_1d0,3);
    uVar18 = local_130;
    uVar8 = local_1e0;
    uVar15 = local_290;
    uVar16 = local_130;
    if (local_130 <= local_530) {
      uVar16 = local_530;
    }
    if (uVar16 < 0x29) {
      __n = 0;
      do {
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_00aa36c8;
          puVar9 = (uint *)((long)&uStack_1d4 + lVar22);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == *puVar9);
        if (uVar3 < *puVar9) {
          bVar13 = 0;
        }
        else {
LAB_00aa36c8:
          if (uVar16 != 0) {
            puVar9 = (uint *)&local_1d0;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) goto LAB_00aa3c38;
          }
          bVar13 = 8;
          local_530 = uVar16;
        }
        uVar16 = uVar8;
        if (uVar8 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) goto code_r0x00aa3bf8;
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_00aa374c;
          puVar9 = (uint *)((long)&uStack_284 + lVar22);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == *puVar9);
        if (*puVar9 <= uVar3) {
LAB_00aa374c:
          if (uVar16 != 0) {
            puVar9 = (uint *)&local_280;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) goto LAB_00aa3c38;
          }
          bVar13 = bVar13 | 4;
          local_530 = uVar16;
        }
        uVar16 = uVar15;
        if (uVar15 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) break;
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_00aa37d0;
          uVar4 = *(uint *)((long)&local_338 + lVar22 + 4);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == uVar4);
        if (uVar4 <= uVar3) {
LAB_00aa37d0:
          if (uVar16 != 0) {
            puVar9 = (uint *)&local_330;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) goto LAB_00aa3c38;
          }
          bVar13 = bVar13 + 2;
          local_530 = uVar16;
        }
        uVar16 = uVar14;
        if (uVar14 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) {
                    /* WARNING: Subroutine does not return */
          slice::index::slice_index_fail
                    (0,uVar16,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
        }
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_00aa3858;
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          uVar4 = *(uint *)((long)local_3d8 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == uVar4);
        if (uVar4 <= uVar3) {
LAB_00aa3858:
          if (uVar16 != 0) {
            puVar9 = local_3d8;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) {
LAB_00aa3c38:
                    /* WARNING: Subroutine does not return */
              panicking::panic(&DAT_003906cf,0x1a,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
            }
          }
          bVar13 = bVar13 + 1;
          local_530 = uVar16;
        }
        uVar23 = local_3e0;
        uVar20 = local_488;
        uVar10 = local_530;
        if (__n == param_4) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (param_4,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afff58);
        }
        param_3[__n] = bVar13 + 0x30;
        uVar16 = local_488;
        if (local_488 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) break;
        uVar2 = __n + 1;
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) {
            cVar21 = '\0';
            goto LAB_00aa38f8;
          }
          uVar4 = *(uint *)((long)local_528 + lVar22 + -4);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == uVar4);
        cVar21 = uVar4 <= uVar3 && uVar3 != uVar4;
        if (uVar4 > uVar3) {
          cVar21 = -1;
        }
LAB_00aa38f8:
        local_80 = local_530;
        uStack_98 = local_548;
        local_a0 = uStack_550;
        uStack_88 = local_538;
        uStack_90 = uStack_540;
        uVar16 = local_3e0;
        if (local_3e0 <= local_530) {
          uVar16 = local_530;
        }
        uStack_d8 = local_588;
        local_e0 = uStack_590;
        uStack_c8 = local_578;
        uStack_d0 = uStack_580;
        uStack_b8 = local_568;
        local_c0 = uStack_570;
        uStack_a8 = local_558;
        uStack_b0 = uStack_560;
        uStack_118 = uStack_5c8;
        local_120 = CONCAT44(local_5d0[1],local_5d0[0]);
        uStack_108 = local_5b8;
        uStack_110 = uStack_5c0;
        uStack_f8 = local_5a8;
        local_100 = uStack_5b0;
        uStack_e8 = local_598;
        uStack_f0 = uStack_5a0;
        if (0x28 < uVar16) goto code_r0x00aa3bf8;
        if (uVar16 != 0) {
          uVar19 = uVar16;
          puVar9 = local_480;
          puVar17 = (uint *)&local_120;
          bVar11 = false;
          do {
            uVar3 = *puVar17;
            uVar4 = *puVar9;
            bVar1 = CARRY4(uVar4 + uVar3,(uint)bVar11);
            uVar19 = uVar19 - 1;
            *puVar17 = uVar3 + uVar4 + (uint)bVar11;
            puVar9 = puVar9 + 1;
            puVar17 = puVar17 + 1;
            bVar11 = CARRY4(uVar4,uVar3) || bVar1;
          } while (uVar19 != 0);
          if (CARRY4(uVar4,uVar3) || bVar1) {
            if (uVar16 == 0x28) goto code_r0x00aa3d0c;
            *(undefined4 *)((long)&local_120 + uVar16 * 4) = 1;
            uVar16 = uVar16 + 1;
          }
        }
        local_80 = uVar16;
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        if (0x28 < uVar16) {
                    /* WARNING: Subroutine does not return */
          slice::index::slice_index_fail
                    (0,uVar16,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
        }
        uVar16 = uVar16 << 2;
        do {
          if (uVar16 == 0) goto LAB_00aa39c8;
          uVar3 = *(uint *)((long)local_3d8 + (uVar16 - 4));
          uVar4 = *(uint *)((long)&uStack_124 + uVar16);
          uVar16 = uVar16 - 4;
        } while (uVar3 == uVar4);
        uVar12 = (uint)(uVar4 <= uVar3 && uVar3 != uVar4);
        if (uVar4 > uVar3) {
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulong)uVar12;
LAB_00aa39c8:
        if (cVar21 < cVar5) {
          puVar7 = local_5d8;
          if (cVar5 <= (char)uVar16) goto joined_r0x00aa3b00;
          <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_5d0,1);
          if (uVar14 <= local_530) {
            uVar14 = local_530;
          }
          uVar16 = uVar14;
          if (0x28 < uVar14) goto code_r0x00aa3bf8;
          lVar22 = uVar14 << 2;
          goto LAB_00aa3adc;
        }
        if ((char)uVar16 < cVar5) goto LAB_00aa3b08;
        if (local_530 != 0) {
          lVar22 = local_530 << 2;
          uVar16 = 0;
          puVar9 = local_5d0;
          do {
            lVar22 = lVar22 + -4;
            uVar19 = uVar16 + (ulong)*puVar9 * 10;
            uVar16 = uVar19 >> 0x20;
            *puVar9 = (uint)uVar19;
            puVar9 = puVar9 + 1;
          } while (lVar22 != 0);
          if (uVar16 != 0) {
            if (uVar10 == 0x28) goto code_r0x00aa3ce4;
            local_5d0[uVar10] = (uint)(uVar19 >> 0x20);
            uVar10 = uVar10 + 1;
          }
        }
        local_530 = uVar10;
        if (uVar20 != 0) {
          lVar22 = uVar20 << 2;
          uVar16 = 0;
          puVar9 = local_528;
          do {
            lVar22 = lVar22 + -4;
            uVar19 = uVar16 + (ulong)*puVar9 * 10;
            uVar16 = uVar19 >> 0x20;
            *puVar9 = (uint)uVar19;
            puVar9 = puVar9 + 1;
          } while (lVar22 != 0);
          if (uVar16 != 0) {
            if (uVar20 == 0x28) goto code_r0x00aa3ce4;
            local_528[uVar20] = (uint)(uVar19 >> 0x20);
            uVar20 = uVar20 + 1;
          }
        }
        local_488 = uVar20;
        if (uVar23 != 0) {
          lVar22 = uVar23 << 2;
          uVar16 = 0;
          puVar9 = local_480;
          do {
            lVar22 = lVar22 + -4;
            uVar20 = uVar16 + (ulong)*puVar9 * 10;
            uVar16 = uVar20 >> 0x20;
            *puVar9 = (uint)uVar20;
            puVar9 = puVar9 + 1;
          } while (lVar22 != 0);
          if (uVar16 != 0) {
            if (uVar23 == 0x28) goto code_r0x00aa3ce4;
            local_480[uVar23] = (uint)(uVar20 >> 0x20);
            uVar23 = uVar23 + 1;
          }
        }
        local_3e0 = uVar23;
        uVar16 = uVar18;
        if (uVar18 <= uVar10) {
          uVar16 = uVar10;
        }
        __n = uVar2;
      } while (uVar16 < 0x29);
    }
  }
code_r0x00aa3be0:
                    /* WARNING: Subroutine does not return */
  slice::index::slice_index_fail(0,uVar16,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  while( true ) {
    uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
    uVar4 = *(uint *)((long)local_3d8 + lVar22 + -4);
    lVar22 = lVar22 + -4;
    if (uVar3 != uVar4) break;
LAB_00aa3adc:
    if (lVar22 == 0) goto LAB_00aa3b08;
  }
  puVar7 = local_5d8;
  if (uVar4 <= uVar3) {
LAB_00aa3b08:
    puVar7 = local_5d8;
    uVar16 = 0;
    do {
      if (__n + uVar16 == -1) {
        *param_3 = 0x31;
        memset(param_3 + 1,0x30,__n);
        if (param_4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar2,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afff70);
        }
        param_3[uVar2] = 0x30;
        uVar2 = __n + 2;
        local_5e0 = local_5e0 + 1;
        goto joined_r0x00aa3b00;
      }
      lVar22 = uVar16 + __n;
      uVar16 = uVar16 - 1;
    } while (param_3[lVar22] == '9');
    lVar22 = uVar16 + __n;
    param_3[lVar22 + 1] = param_3[lVar22 + 1] + '\x01';
    memset(param_3 + lVar22 + 2,0x30,~uVar16);
  }
joined_r0x00aa3b00:
  if (uVar2 <= param_4) {
    *puVar7 = param_3;
    puVar7[1] = uVar2;
    *(short *)(puVar7 + 2) = local_5e0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  slice::index::slice_index_fail(0,uVar2,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afff88);
}


// ===== 00aa3d2c  core::num::imp::flt2dec::strategy::dragon::mul_pow10 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::dragon::mul_pow10 */

void __rustcall core::num::imp::flt2dec::strategy::dragon::mul_pow10(uint *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  if (param_2 < 8) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if (uVar1 < 0x29) {
      if (uVar1 != 0) {
        lVar3 = uVar1 << 2;
        uVar7 = *(uint *)(&DAT_00395dc4 + param_2 * 4);
        uVar2 = 0;
        puVar4 = param_1;
        do {
          lVar3 = lVar3 + -4;
          uVar5 = uVar2 + (ulong)*puVar4 * (ulong)uVar7;
          uVar2 = uVar5 >> 0x20;
          *puVar4 = (uint)uVar5;
          puVar4 = puVar4 + 1;
        } while (lVar3 != 0);
        if (uVar2 != 0) {
          if (uVar1 == 0x28) {
code_r0x00aa3f08:
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (0x28,uVar1,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          param_1[uVar1] = (uint)(uVar5 >> 0x20);
          uVar1 = uVar1 + 1;
        }
      }
      *(ulong *)(param_1 + 0x28) = uVar1;
      return;
    }
code_r0x00aa3ef4:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar1,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  uVar2 = param_2 & 7;
  if (uVar2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if (0x28 < uVar1) goto code_r0x00aa3ef4;
    if (uVar1 != 0) {
      uVar5 = 0;
      uVar7 = *(uint *)(&DAT_00395dc4 + uVar2 * 4);
      lVar3 = uVar1 << 2;
      puVar4 = param_1;
      do {
        lVar3 = lVar3 + -4;
        uVar6 = uVar5 + (ulong)*puVar4 * (ulong)(uVar7 >> uVar2);
        uVar5 = uVar6 >> 0x20;
        *puVar4 = (uint)uVar6;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      if (uVar5 != 0) {
        if (uVar1 == 0x28) goto code_r0x00aa3f08;
        param_1[uVar1] = (uint)(uVar6 >> 0x20);
        uVar1 = uVar1 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  uVar7 = (uint)param_2;
  if ((uVar7 >> 3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if (0x28 < uVar1) goto code_r0x00aa3ef4;
    if (uVar1 != 0) {
      lVar3 = uVar1 << 2;
      uVar2 = 0;
      puVar4 = param_1;
      do {
        lVar3 = lVar3 + -4;
        uVar5 = uVar2 + (ulong)*puVar4 * 0x5f5e1;
        uVar2 = uVar5 >> 0x20;
        *puVar4 = (uint)uVar5;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      if (uVar2 != 0) {
        if (uVar1 == 0x28) goto code_r0x00aa3f08;
        param_1[uVar1] = (uint)(uVar5 >> 0x20);
        uVar1 = uVar1 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_00395dec,2);
  }
  if ((uVar7 >> 5 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_00395df4,3);
  }
  if ((uVar7 >> 6 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_00395e00,5);
  }
  if ((uVar7 >> 7 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_00395e14,10);
  }
  if ((uVar7 >> 8 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_00395e3c,0x13);
  }
  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(param_1,param_2);
  return;
}


// ===== 00aa3f14  <core::slice::[_]>::align_to_offsets::gcd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::[_]>::align_to_offsets::gcd */

void __rustcall <core::slice::[_]>::align_to_offsets::gcd(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    do {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = param_1 / param_2;
      }
      uVar1 = param_1 - uVar1 * param_2;
      param_1 = param_2;
      param_2 = uVar1;
    } while (uVar1 != 0);
  }
  return;
}


// ===== 00aa3f30  FUN_00aa3f30 =====

undefined1  [16] FUN_00aa3f30(long *param_1,undefined2 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if (param_3 == 0) {
    return ZEXT816(0) << 0x40;
  }
  pbVar8 = (byte *)*param_1;
  lVar11 = param_1[1];
  if (param_3 != 1) {
    uVar2 = FUN_00a956dc(param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = (uint)(uVar2 >> 8);
      uVar5 = (uint)(uVar2 >> 0x18);
      uVar2 = 0;
LAB_00aa3f80:
      uVar4 = 1;
      (param_2 + uVar2)[1] = (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff) << 8);
      param_2[uVar2] = (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
      param_3 = uVar2 + 2;
      goto LAB_00aa42f8;
    }
    *param_1 = (long)pbVar8;
    param_1[1] = lVar11;
  }
  if (lVar11 != 0) {
    pbVar10 = pbVar8 + 1;
    bVar1 = *pbVar8;
    uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
    if (bVar1 < 0x3a) {
      uVar5 = bVar1 - 0x30;
    }
    if (uVar5 < 0x10) {
      lVar9 = lVar11 + -1;
      if (lVar9 != 0) {
        bVar1 = pbVar8[1];
        uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        if (bVar1 < 0x3a) {
          uVar6 = bVar1 - 0x30;
        }
        if (uVar6 < 0x10) {
          uVar5 = uVar6 | uVar5 << 4;
          lVar9 = lVar11 + -2;
          if (lVar9 == 0) {
LAB_00aa42b4:
            lVar9 = 0;
            pbVar10 = pbVar8 + lVar11;
          }
          else {
            bVar1 = pbVar8[2];
            uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            if (bVar1 < 0x3a) {
              uVar6 = bVar1 - 0x30;
            }
            if (uVar6 < 0x10) {
              uVar5 = uVar6 | uVar5 << 4;
              lVar9 = lVar11 + -3;
              if (lVar9 == 0) goto LAB_00aa42b4;
              bVar1 = pbVar8[3];
              uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
              if (bVar1 < 0x3a) {
                uVar6 = bVar1 - 0x30;
              }
              if (uVar6 < 0x10) {
                uVar5 = uVar6 | uVar5 << 4;
                lVar9 = lVar11 + -4;
                if (lVar9 == 0) goto LAB_00aa42b4;
                pbVar10 = pbVar8 + 4;
                bVar1 = *pbVar10;
                uVar6 = (bVar1 - 0x41 & 0xffffffde) + 10;
                if (bVar1 < 0x3a) {
                  uVar6 = bVar1 - 0x30;
                }
                if (uVar6 < 0x10) goto LAB_00aa42ec;
              }
              else {
                pbVar10 = pbVar8 + 3;
              }
            }
            else {
              pbVar10 = pbVar8 + 2;
            }
          }
        }
      }
      *param_1 = (long)pbVar10;
      param_1[1] = lVar9;
      *param_2 = (short)uVar5;
      if (param_3 == 1) {
        uVar4 = 0;
        param_3 = 1;
      }
      else {
        uVar2 = 1;
        lVar11 = param_3 * 2 + -2;
        do {
          if (uVar2 < param_3 - 1) {
            if (lVar9 != 0) {
              bVar1 = *pbVar10;
              *param_1 = (long)(pbVar10 + 1);
              param_1[1] = lVar9 + -1;
              if ((bVar1 == 0x3a) && (uVar3 = FUN_00a956dc(param_1), (uVar3 & 1) != 0)) {
                uVar6 = (uint)(uVar3 >> 8);
                uVar5 = (uint)(uVar3 >> 0x18) & 0xffff;
                goto LAB_00aa3f80;
              }
            }
            *param_1 = (long)pbVar10;
            param_1[1] = lVar9;
          }
          if (lVar9 == 0) {
LAB_00aa42a8:
            uVar4 = 0;
            *param_1 = (long)pbVar10;
            param_1[1] = lVar9;
            param_3 = uVar2;
            goto LAB_00aa42f8;
          }
          bVar1 = *pbVar10;
          *param_1 = (long)(pbVar10 + 1);
          param_1[1] = lVar9 + -1;
          if ((bVar1 != 0x3a) || (lVar9 + -1 == 0)) goto LAB_00aa42a8;
          bVar1 = pbVar10[1];
          uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          if (bVar1 < 0x3a) {
            uVar5 = bVar1 - 0x30;
          }
          if (0xf < uVar5) goto LAB_00aa42a8;
          lVar7 = lVar9 + -2;
          pbVar8 = pbVar10 + 2;
          if (lVar7 != 0) {
            bVar1 = pbVar10[2];
            uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            if (bVar1 < 0x3a) {
              uVar6 = bVar1 - 0x30;
            }
            if (uVar6 < 0x10) {
              uVar5 = uVar6 | uVar5 << 4;
              lVar7 = lVar9 + -3;
              if (lVar7 == 0) {
LAB_00aa4250:
                lVar7 = 0;
                pbVar8 = pbVar10 + lVar9;
              }
              else {
                bVar1 = pbVar10[3];
                uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
                if (bVar1 < 0x3a) {
                  uVar6 = bVar1 - 0x30;
                }
                if (uVar6 < 0x10) {
                  uVar5 = uVar6 | uVar5 << 4;
                  lVar7 = lVar9 + -4;
                  if (lVar7 == 0) goto LAB_00aa4250;
                  bVar1 = pbVar10[4];
                  uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
                  if (bVar1 < 0x3a) {
                    uVar6 = bVar1 - 0x30;
                  }
                  if (uVar6 < 0x10) {
                    uVar5 = uVar6 | uVar5 << 4;
                    lVar7 = lVar9 + -5;
                    if (lVar7 == 0) goto LAB_00aa4250;
                    pbVar8 = pbVar10 + 5;
                    bVar1 = *pbVar8;
                    uVar6 = (bVar1 - 0x41 & 0xffffffde) + 10;
                    if (bVar1 < 0x3a) {
                      uVar6 = bVar1 - 0x30;
                    }
                    if (uVar6 < 0x10) goto LAB_00aa42a8;
                  }
                  else {
                    pbVar8 = pbVar10 + 4;
                  }
                }
                else {
                  pbVar8 = pbVar10 + 3;
                }
              }
            }
          }
          *param_1 = (long)pbVar8;
          param_1[1] = lVar7;
          param_2[uVar2] = (short)uVar5;
          lVar11 = lVar11 + -2;
          uVar2 = uVar2 + 1;
          lVar9 = lVar7;
          pbVar10 = pbVar8;
        } while (lVar11 != 0);
        uVar4 = 0;
      }
      goto LAB_00aa42f8;
    }
  }
LAB_00aa42ec:
  uVar4 = 0;
  *param_1 = (long)pbVar8;
  param_1[1] = lVar11;
  param_3 = 0;
LAB_00aa42f8:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = param_3;
  return auVar12;
}


// ===== 00aa4314  FUN_00aa4314 =====

undefined8 FUN_00aa4314(undefined8 param_1,long param_2,int param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_3 != -1) && (uVar1 = (**(code **)(param_2 + 0x20))(param_1,param_3), (uVar1 & 1) != 0))
  {
    return 1;
  }
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa4384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2 + 0x18))(param_1,param_4,param_5);
    return uVar2;
  }
  return 0;
}


// ===== 00aa439c  core::slice::copy_from_slice_impl::len_mismatch_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::copy_from_slice_impl::len_mismatch_fail */

void __rustcall
core::slice::copy_from_slice_impl::len_mismatch_fail(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  puStack_28 = PTR_fmt_00b00c60;
  local_20 = &uStack_38;
  puStack_18 = PTR_fmt_00b00c60;
  local_40 = param_2;
  uStack_38 = param_1;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002aa6c1,&local_30);
}


// ===== 00aa43d4  core::io::error::os_functions::set_functions::set_functions_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::io::error::os_functions::set_functions::set_functions_inner */

void __rustcall
core::io::error::os_functions::set_functions::set_functions_inner(undefined8 param_1)

{
  *(undefined8 *)PTR_PTR_00b01168 = param_1;
  return;
}


// ===== 00aa43e4  FUN_00aa43e4 =====

void FUN_00aa43e4(undefined8 *param_1,undefined1 *param_2,ulong param_3,ulong param_4,short param_5,
                 short param_6,ulong param_7,ulong param_8,ulong param_9)

{
  char *pcVar1;
  ulong uVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  size_t __n;
  undefined1 uVar6;
  
  if ((param_9 < param_8) && (param_9 < param_8 - param_9)) {
    if ((param_7 < param_8 - param_7) && (param_9 << 1 <= param_8 + param_7 * -2)) {
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,param_4,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00040);
      }
      *param_1 = param_2;
      param_1[1] = param_4;
      *(short *)(param_1 + 2) = param_5;
      return;
    }
    uVar2 = param_7 - param_9;
    if ((param_9 <= param_7 && uVar2 != 0) && (param_8 - uVar2 <= uVar2)) {
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,param_4,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00028);
      }
      puVar4 = param_2;
      sVar3 = 0;
      do {
        __n = sVar3;
        if (param_4 == __n) {
          uVar6 = 0x31;
          if (param_4 != 0) {
            *param_2 = 0x31;
            uVar6 = 0x30;
            memset(param_2 + 1,0x30,param_4 - 1);
          }
          param_5 = param_5 + 1;
          if ((param_6 < param_5) && (param_4 < param_3)) {
            param_2[param_4] = uVar6;
            param_4 = param_4 + 1;
          }
          goto LAB_00aa4580;
        }
        puVar5 = puVar4 + -1;
        pcVar1 = puVar4 + (param_4 - 1);
        puVar4 = puVar5;
        sVar3 = __n + 1;
      } while (*pcVar1 == '9');
      pcVar1 = puVar5 + param_4;
      *pcVar1 = *pcVar1 + '\x01';
      memset(pcVar1 + 1,0x30,__n);
LAB_00aa4580:
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,param_4,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00010);
      }
      *param_1 = param_2;
      param_1[1] = param_4;
      *(short *)(param_1 + 2) = param_5;
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00aa45e8  FUN_00aa45e8 =====

undefined4 FUN_00aa45e8(undefined8 param_1,long param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  ulong local_70;
  undefined8 uStack_68;
  
  uVar7 = 0;
  uVar6 = 0;
  bVar4 = false;
  pbVar1 = param_3 + param_4;
  local_8c = 0;
  do {
    if ((bVar4) && (uVar6 < uVar7)) {
      uVar8 = uVar6 + 1;
      uStack_94._0_5_ = CONCAT14((char)uVar8,(undefined4)uStack_94);
      if (uVar7 < 0x81) goto LAB_00aa475c;
LAB_00aa4644:
      uVar6 = uVar8;
      uVar5 = local_9c & 0xffffffff;
    }
    else {
      if (param_3 == pbVar1) {
        return 0;
      }
      bVar2 = *param_3;
      pbVar3 = param_3;
      while( true ) {
        uVar6 = (uint)bVar2;
        param_3 = pbVar3 + 1;
        if ((char)bVar2 < '\0') {
          if (uVar6 < 0xe0) {
            uVar6 = pbVar3[1] & 0x3f | (uVar6 & 0x1f) << 6;
            param_3 = pbVar3 + 2;
          }
          else {
            uVar7 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
            if (uVar6 < 0xf0) {
              uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
              param_3 = pbVar3 + 3;
            }
            else {
              param_3 = pbVar3 + 4;
              uVar6 = pbVar3[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
            }
          }
        }
        FUN_00a95e3c(&local_70,uVar6,0x10001);
        local_9c = local_70;
        uStack_94._4_1_ = (byte)((ulong)uStack_68 >> 0x20);
        uVar6 = (uint)uStack_94._4_1_;
        uStack_94._5_1_ = (byte)((ulong)uStack_68 >> 0x28);
        uVar7 = (uint)uStack_94._5_1_;
        if (uVar6 < uVar7) break;
        if (param_3 == pbVar1) {
          return 0;
        }
        bVar2 = *param_3;
        pbVar3 = param_3;
        uStack_94 = uStack_68;
      }
      uVar8 = uVar6 + 1;
      uStack_94._5_3_ = (undefined3)((ulong)uStack_68 >> 0x28);
      uStack_94._0_4_ = (undefined4)uStack_68;
      uStack_94._0_5_ = CONCAT14((char)uVar8,(undefined4)uStack_94);
      if (0x80 < uVar7) goto LAB_00aa4644;
LAB_00aa475c:
      uVar5 = (ulong)*(byte *)((long)&local_9c + (ulong)uVar6);
      uVar6 = uVar8;
    }
    uVar5 = (**(code **)(param_2 + 0x20))(param_1,uVar5);
    bVar4 = true;
    if ((uVar5 & 1) != 0) {
      return 1;
    }
  } while( true );
}


// ===== 00aa4788  FUN_00aa4788 =====

uint FUN_00aa4788(undefined8 *param_1,ulong param_2,uint param_3,uint param_4,undefined8 param_5,
                 long param_6,char *param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_c8;
  long lStack_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_a0;
  ulong local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  ulong *local_70;
  undefined8 *puStack_68;
  ulong *local_60;
  char **ppcStack_58;
  ulong local_38;
  
  uVar5 = *(uint *)(param_1 + 2);
  local_a0 = 0x30;
  local_a8 = 0x3030303030303030;
  local_c8 = param_5;
  lStack_c0 = param_6;
  local_b8 = param_7;
  local_b0 = param_8;
  if (param_3 == 0) {
    uVar9 = (ulong)*(ushort *)((long)param_1 + 0x16);
    local_98 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = (ulong)*(ushort *)((long)param_1 + 0x16);
    local_98 = 9;
    if ((uVar5 & 0x10000000) != 0) {
      local_98 = uVar9;
    }
    uVar7 = uVar9;
    if (local_98 == 0) {
      if (param_3 < param_4 * 5) {
        uVar7 = 0;
      }
      else {
        uVar12 = param_2 & 0xffffffff;
        if (param_3 == param_4 * 5) {
LAB_00aa49c4:
          if ((uVar12 & 1) == 0) goto LAB_00aa4a14;
        }
LAB_00aa49c8:
        uVar12 = uVar9;
        if (local_98 != 0) {
          do {
            uVar10 = uVar12 - 1;
            bVar3 = *(byte *)((long)&local_b0 + uVar12 + 7);
            cVar11 = '0';
            if (bVar3 < 0x39) {
              cVar11 = bVar3 + 1;
            }
            *(char *)((long)&local_b0 + uVar12 + 7) = cVar11;
          } while ((0x38 < bVar3) && (uVar12 = uVar10, uVar10 != 0));
          if (bVar3 < 0x39) goto LAB_00aa4a14;
        }
        if (param_2 == 0xffffffffffffffff) {
          local_90 = 0;
          bVar4 = false;
          goto LAB_00aa4a20;
        }
        param_2 = param_2 + 1;
      }
    }
    else {
      uVar8 = 0;
      if (param_4 != 0) {
        uVar8 = param_3 / param_4;
      }
      param_3 = param_3 - uVar8 * param_4;
      cVar11 = (char)uVar8 + '0';
      local_a8 = CONCAT71(0x30303030303030,cVar11);
      if (param_3 == 0) {
        local_98 = 1;
        uVar7 = 1;
      }
      else {
        uVar8 = param_4 / 10;
        if (local_98 == 1) {
LAB_00aa4958:
          if (uVar8 * 5 <= param_3) {
            uVar12 = (ulong)*(byte *)((long)&local_b0 + local_98 + 7);
            if (param_3 == uVar8 * 5) goto LAB_00aa49c4;
            goto LAB_00aa49c8;
          }
        }
        else {
          if (param_4 < 10) {
code_r0x00aa4d18:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_const::panic_const_div_by_zero
                      (&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00058);
          }
          uVar8 = 0;
          if (param_4 / 10 != 0) {
            uVar8 = param_3 / (param_4 / 10);
          }
          param_3 = param_3 - uVar8 * (param_4 / 10);
          local_a8._0_2_ = CONCAT11((char)uVar8 + '0',cVar11);
          local_a8 = CONCAT62(0x303030303030,(undefined2)local_a8);
          if (param_3 == 0) {
            local_98 = 2;
            uVar7 = 2;
          }
          else {
            uVar8 = param_4 / 100;
            if (local_98 == 2) goto LAB_00aa4958;
            if (param_4 < 100) goto code_r0x00aa4d18;
            uVar8 = 0;
            if (param_4 / 100 != 0) {
              uVar8 = param_3 / (param_4 / 100);
            }
            param_3 = param_3 - uVar8 * (param_4 / 100);
            local_a8._0_3_ = CONCAT12((char)uVar8 + '0',(undefined2)local_a8);
            local_a8 = CONCAT53(0x3030303030,(undefined3)local_a8);
            if (param_3 == 0) {
              local_98 = 3;
              uVar7 = 3;
            }
            else {
              uVar8 = param_4 / 1000;
              if (local_98 == 3) goto LAB_00aa4958;
              if (param_4 < 1000) goto code_r0x00aa4d18;
              uVar8 = 0;
              if (param_4 / 1000 != 0) {
                uVar8 = param_3 / (param_4 / 1000);
              }
              param_3 = param_3 - uVar8 * (param_4 / 1000);
              local_a8._0_4_ = CONCAT13((char)uVar8 + '0',(undefined3)local_a8);
              local_a8 = CONCAT44(0x30303030,(undefined4)local_a8);
              if (param_3 == 0) {
                local_98 = 4;
                uVar7 = 4;
              }
              else {
                uVar8 = param_4 / 10000;
                if (local_98 == 4) goto LAB_00aa4958;
                if (param_4 >> 4 < 0x271) goto code_r0x00aa4d18;
                uVar8 = 0;
                if (param_4 / 10000 != 0) {
                  uVar8 = param_3 / (param_4 / 10000);
                }
                param_3 = param_3 - uVar8 * (param_4 / 10000);
                local_a8._0_5_ = CONCAT14((char)uVar8 + '0',(undefined4)local_a8);
                local_a8 = CONCAT35(0x303030,(undefined5)local_a8);
                if (param_3 == 0) {
                  local_98 = 5;
                  uVar7 = 5;
                }
                else {
                  uVar15 = param_4 >> 5;
                  uVar8 = uVar15 / 0xc35;
                  if (local_98 == 5) goto LAB_00aa4958;
                  if (uVar15 < 0xc35) goto code_r0x00aa4d18;
                  uVar8 = 0;
                  if (uVar15 / 0xc35 != 0) {
                    uVar8 = (param_3 & 0xffff) / (uVar15 / 0xc35);
                  }
                  param_3 = (param_3 & 0xffff) - uVar8 * (uVar15 / 0xc35);
                  local_a8._0_6_ = CONCAT15((char)uVar8 + '0',(undefined5)local_a8);
                  local_a8 = CONCAT26(0x3030,(undefined6)local_a8);
                  if (param_3 == 0) {
                    local_98 = 6;
                    uVar7 = 6;
                  }
                  else {
                    uVar8 = param_4 / 1000000;
                    if (local_98 == 6) {
LAB_00aa4954:
                      param_3 = param_3 & 0xffff;
                      goto LAB_00aa4958;
                    }
                    if (param_4 < 1000000) goto code_r0x00aa4d18;
                    uVar8 = 0;
                    if (param_4 / 1000000 != 0) {
                      uVar8 = (param_3 & 0xffff) / (param_4 / 1000000);
                    }
                    param_3 = (param_3 & 0xffff) - uVar8 * (param_4 / 1000000);
                    local_a8._0_7_ = CONCAT16((char)uVar8 + '0',(undefined6)local_a8);
                    local_a8 = CONCAT17(0x30,(undefined7)local_a8);
                    if (param_3 == 0) {
                      local_98 = 7;
                      uVar7 = 7;
                    }
                    else {
                      uVar8 = param_4 / 10000000;
                      if (local_98 == 7) goto LAB_00aa4954;
                      if (param_4 < 10000000) goto code_r0x00aa4d18;
                      param_3 = param_3 & 0xff;
                      uVar8 = param_4 / 10000000 & 0xff;
                      uVar15 = 0;
                      if (param_4 / 10000000 != 0) {
                        uVar15 = param_3 / (param_4 / 10000000);
                      }
                      cVar11 = '\0';
                      if (uVar8 != 0) {
                        cVar11 = (char)(param_3 / uVar8);
                      }
                      param_3 = param_3 - uVar15 * (param_4 / 10000000);
                      local_a8 = CONCAT17(cVar11 + '0',(undefined7)local_a8);
                      if (param_3 == 0) {
                        local_98 = 8;
                        uVar7 = 8;
                      }
                      else {
                        uVar8 = (uint)(99999999 < param_4);
                        if (local_98 == 8) goto LAB_00aa4958;
                        if (param_4 < 100000000) goto code_r0x00aa4d18;
                        local_a0 = (byte)param_3 | 0x30;
                        local_98 = 9;
                        uVar7 = 9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00aa4a14:
  local_90 = 1;
  bVar4 = true;
  local_88 = param_2;
LAB_00aa4a20:
  uVar8 = (uint)uVar9;
  local_80 = &local_90;
  if (8 < uVar8) {
    uVar8 = 9;
  }
  puStack_78 = &local_c8;
  local_38 = uVar7;
  if ((uVar5 & 0x10000000) != 0) {
    local_38 = (ulong)uVar8;
  }
  local_70 = &local_38;
  puStack_68 = &local_a8;
  local_60 = &local_98;
  ppcStack_58 = &local_b8;
  if ((uVar5 >> 0x1b & 1) != 0) {
    iVar6 = (int)*param_7;
    uVar12 = (ulong)(iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41));
    if (param_8 != 1) {
      iVar6 = (int)param_7[1];
      if (iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41)) {
        uVar12 = uVar12 + 1;
      }
      if ((param_8 != 2) &&
         (iVar6 = (int)param_7[2], iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41))) {
        uVar12 = uVar12 + 1;
      }
    }
    if (bVar4) {
      if (param_2 == 0) {
        uVar10 = 1;
      }
      else {
        uVar10 = param_2 / 10000000000;
        if (param_2 < 10000000000) {
          uVar10 = param_2;
        }
        uVar8 = 10;
        if (param_2 < 10000000000) {
          uVar8 = 0;
        }
        if (0xc34 < uVar10 >> 5) {
          uVar8 = uVar8 | 5;
          uVar10 = (uVar10 >> 5) / 0xc35;
        }
        iVar6 = (int)uVar10;
        uVar10 = (ulong)(uVar8 + ((iVar6 + 0x5fff6U & iVar6 + 0x7ff9cU ^
                                  iVar6 + 0xdfc18U & iVar6 + 0x7d8f0U) >> 0x11) + 1);
      }
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar5 & 0x10000000) != 0) {
      uVar7 = uVar9;
    }
    lVar1 = 0;
    if (local_38 != 0) {
      lVar1 = uVar7 + 1;
    }
    uVar7 = uVar12 + param_6 + uVar10 + lVar1;
    if (uVar7 < *(ushort *)((long)param_1 + 0x14)) {
      uVar15 = uVar5 >> 0x1d & 3;
      uVar14 = 0;
      uVar8 = (uint)*(ushort *)((long)param_1 + 0x14) - (int)uVar7;
      if (uVar15 < 2) {
        if (uVar15 != 0) {
          uVar14 = uVar8;
        }
      }
      else if (uVar15 == 2) {
        uVar14 = uVar8 >> 1 & 0x7fff;
      }
      uVar2 = *param_1;
      lVar1 = param_1[1];
      uVar15 = 0;
      do {
        if ((uVar14 & 0xffff) <= (uVar15 & 0xffff)) {
          uVar7 = FUN_00a9541c(&local_80,param_1);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
          uVar15 = 0;
          do {
            bVar4 = (uVar8 - uVar14 & 0xffff) <= (uVar15 & 0xffff);
            uVar13 = (uint)!bVar4;
            if (bVar4) {
              return uVar13;
            }
            uVar15 = uVar15 + 1;
            iVar6 = (**(code **)(lVar1 + 0x20))(uVar2,uVar5 & 0x1fffff);
          } while (iVar6 == 0);
          return uVar13;
        }
        uVar15 = uVar15 + 1;
        uVar7 = (**(code **)(lVar1 + 0x20))(uVar2,uVar5 & 0x1fffff);
      } while ((uVar7 & 1) == 0);
      return 1;
    }
  }
  uVar5 = FUN_00a9541c(&local_80,param_1);
  return uVar5;
}


// ===== 00aa4d20  <core::ffi::c_void_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_void as core::fmt::Debug>::fmt */

void __rustcall <core::ffi::c_void_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa4d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00395e8b,6);
  return;
}


// ===== 00aa4d3c  <char_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <char as core::pat::RangePattern>::sub_one */

void __rustcall <char_as_core::pat::RangePattern>::sub_one(int param_1,undefined8 param_2)

{
  if (0xffef07ff < (param_1 - 1U ^ 0xd800) - 0x110000) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00395e91,0x4f,param_2);
}


// ===== 00aa4d7c  <core::io::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::fmt::Debug>::fmt */

void __rustcall <core::io::error::Error_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b07c28)();
  return;
}


// ===== 00aa4d80  <core::ffi::c_str::FromBytesWithNulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::FromBytesWithNulError as core::fmt::Display>::fmt */

void __rustcall
<core::ffi::c_str::FromBytesWithNulError_as_core::fmt::Display>::fmt
          (uint *param_1,undefined8 *param_2)

{
  uint *local_28;
  uint **ppuStack_20;
  code *local_18;
  
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa4d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00395eb8,0x23);
    return;
  }
  local_28 = param_1 + 2;
  ppuStack_20 = &local_28;
  local_18 = FUN_00aa768c;
  core::fmt::write(*param_2,param_2[1],&DAT_002b1ff1,&ppuStack_20);
  return;
}


// ===== 00aa4de4  <core::ffi::va_list::VaList_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::va_list::VaList as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::ffi::va_list::VaList_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  long local_28;
  
  uVar4 = *param_2;
  lVar1 = param_2[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar5)(uVar4,&DAT_00395edb,6);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x12) < '\0') {
      uVar3 = (*pcVar5)(uVar4,&DAT_003905ab,2);
      if ((uVar3 & 1) == 0) {
        uStack_48 = param_2[2];
        local_68 = local_5c;
        local_50 = &DAT_00aff790;
        local_28 = param_1 + 0x1c;
        local_58 = &local_78;
        local_5c[0] = 1;
        local_78 = uVar4;
        lStack_70 = lVar1;
        iVar2 = <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
                          (&local_58,"VaListInner",0xb,"stack",5,param_1,&DAT_00b002e0,"gr_top",6,
                           param_1 + 8,&DAT_00b002e0,"vr_top",6,param_1 + 0x10,&DAT_00b002e0,
                           "gr_offs",7,param_1 + 0x18,&DAT_00b00108,"vr_offs",7,&local_28,
                           &DAT_00b00300);
        if ((iVar2 == 0) &&
           (uVar3 = (**(code **)(local_50 + 0x18))(local_58,&DAT_003905a2,2), (uVar3 & 1) == 0))
        goto LAB_00aa5018;
      }
    }
    else {
      uVar3 = (*pcVar5)(uVar4,&DAT_003905aa,1);
      if ((uVar3 & 1) == 0) {
        local_58 = (undefined8 *)(param_1 + 0x1c);
        uVar3 = <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
                          (param_2,"VaListInner",0xb,"stack",5,param_1,&DAT_00b002e0,"gr_top",6,
                           param_1 + 8,&DAT_00b002e0,"vr_top",6,param_1 + 0x10,&DAT_00b002e0,
                           "gr_offs",7,param_1 + 0x18,&DAT_00b00108,"vr_offs",7,&local_58,
                           &DAT_00b00300);
        if ((uVar3 & 1) == 0) {
          uVar4 = *param_2;
          pcVar5 = *(code **)(param_2[1] + 0x18);
LAB_00aa5018:
          uVar4 = (*pcVar5)(uVar4,&DAT_003905a9,1);
          return uVar4;
        }
      }
    }
  }
  return 1;
}


// ===== 00aa5044  <u128_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::Display>::fmt */

void __rustcall <u128_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_57 [39];
  
  lVar1 = FUN_00a96f88(*param_1,param_1[1],auStack_57,0x27);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_57 + lVar1,0x27 - lVar1);
  return;
}


// ===== 00aa50a8  <core::ops::range::RangeFull_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeFull as core::fmt::Debug>::fmt */

void __rustcall
<core::ops::range::RangeFull_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa50c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00395ee1,2);
  return;
}


// ===== 00aa50c4  <u8_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::Display>::fmt */

void __rustcall <u8_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_14 [2];
  undefined2 local_12;
  
  uVar2 = (uint)*param_1;
  uVar3 = (uint)*param_1;
  if (uVar2 < 10) {
    lVar1 = 3;
  }
  else {
    uVar2 = uVar3 * 0x29 >> 0xc;
    local_12 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar2 * -100) & 0xff) * 2);
    lVar1 = 1;
  }
  if ((uVar3 == 0) || (uVar2 != 0)) {
    auStack_14[lVar1] = (&DAT_00390ba8)[((ulong)uVar2 & 0x7f) * 2];
    lVar1 = lVar1 + -1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_14 + lVar1 + 1,3 - lVar1);
  return;
}


// ===== 00aa5168  <core::panicking::assert_matches_failed::Pattern_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panicking::assert_matches_failed::Pattern as core::fmt::Debug>::fmt */

void __rustcall
<core::panicking::assert_matches_failed::Pattern_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa5178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,*param_1,param_1[1]);
  return;
}


// ===== 00aa517c  <<core[bcece726f298455b]::field::FieldRepresentingType<_,_,_>as_core[bcece726f298455b]::fmt::Debug>::fmt::Member_as_core[bcece726f298455b]::fmt::Display>::fmt =====

/* <<core[bcece726f298455b]::field::FieldRepresentingType<_, _, _> as
   core[bcece726f298455b]::fmt::Debug>::fmt::Member as core[bcece726f298455b]::fmt::Display>::fmt */

void <<core[bcece726f298455b]::field::FieldRepresentingType<_,_,_>as_core[bcece726f298455b]::fmt::Debug>::fmt::Member_as_core[bcece726f298455b]::fmt::Display>
     ::fmt(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*param_1,param_1[1]);
    return;
  }
  <u32_as_core::fmt::Display>::fmt();
  return;
}


// ===== 00aa5198  <<core[bcece726f298455b]::wtf8::EncodeWide_as_core[bcece726f298455b]::fmt::Debug>::fmt::CodeUnit_as_core[bcece726f298455b]::fmt::Debug>::fmt =====

/* <<core[bcece726f298455b]::wtf8::EncodeWide as core[bcece726f298455b]::fmt::Debug>::fmt::CodeUnit
   as core[bcece726f298455b]::fmt::Debug>::fmt */

void <<core[bcece726f298455b]::wtf8::EncodeWide_as_core[bcece726f298455b]::fmt::Debug>::fmt::CodeUnit_as_core[bcece726f298455b]::fmt::Debug>
     ::fmt(uint *param_1,undefined8 *param_2)

{
  uint local_24;
  uint *local_20;
  undefined *puStack_18;
  
  local_24 = (uint)(ushort)*param_1;
  if ((local_24 ^ 0xffefd800) < 0xffef0800) {
    puStack_18 = PTR_fmt_00b00e58;
    local_20 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_00395ee3,&local_20);
    return;
  }
  local_20 = &local_24;
  puStack_18 = PTR_fmt_00b00df8;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
  return;
}


// ===== 00aa5228  <dyn_Trait<Assoc=X>+core::any::Any+core::marker::Send_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + core::any::Any + core::marker::Send as core::fmt::Debug>::fmt */

undefined8 __rustcall
<dyn_Trait<Assoc=X>+core::any::Any+core::marker::Send_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_3;
  UNRECOVERED_JUMPTABLE = *(code **)(param_3[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00395eee,3);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00aa5284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00390587,7);
  return uVar2;
}


// ===== 00aa5288  <core::io::io_slice::IoSlice_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::io_slice::IoSlice as core::fmt::Debug>::fmt */

void __rustcall
<core::io::io_slice::IoSlice_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_00ab10e4(*param_1,param_1[1],param_2);
  return;
}


// ===== 00aa529c  <core::ffi::c_str::FromBytesUntilNulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::FromBytesUntilNulError as core::fmt::Display>::fmt */

void __rustcall
<core::ffi::c_str::FromBytesUntilNulError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa52b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00395ef1,0x24);
  return;
}


// ===== 00aa52b8  <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_char =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::PadAdapter as core::fmt::Write>::write_char */

undefined8 __rustcall
<core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_char(undefined8 *param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[1];
  pbVar2 = (byte *)param_1[2];
  uVar4 = *param_1;
  if ((*pbVar2 & 1) != 0) {
    iVar3 = (**(code **)(lVar1 + 0x18))(uVar4,&DAT_002bd1ec,4);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *pbVar2 = param_2 == 10;
                    /* WARNING: Could not recover jumptable at 0x00aa5334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar1 + 0x20))(uVar4);
  return uVar4;
}


// ===== 00aa5338  <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::PadAdapter as core::fmt::Write>::write_str */

undefined8 __rustcall
<core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
          (undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  pbVar11 = (byte *)param_1[2];
  uVar15 = 0;
  uVar2 = *param_1;
  lVar4 = param_1[1];
  bVar6 = false;
  uVar14 = 0;
  do {
    if (bVar6) {
      return 0;
    }
    do {
      uVar7 = uVar15;
      uVar15 = uVar7;
      if (param_3 < uVar7) {
LAB_00aa54fc:
        if (param_3 == uVar14) {
          return 0;
        }
        bVar6 = true;
        bVar5 = *pbVar11;
        uVar7 = uVar14;
        uVar9 = param_3;
        goto joined_r0x00aa551c;
      }
      uVar9 = param_3 - uVar7;
      lVar1 = param_2 + uVar7;
      uVar15 = param_3;
      if (0xf < uVar9) {
        uVar10 = (lVar1 + 7U & 0xfffffffffffffff8) - lVar1;
        if (uVar10 == 0) goto LAB_00aa5460;
        uVar12 = 0;
        do {
          if (*(char *)(lVar1 + uVar12) == '\n') goto LAB_00aa54bc;
          uVar12 = uVar12 + 1;
        } while (uVar10 != uVar12);
        for (; uVar12 = uVar10, uVar10 <= uVar9 - 0x10; uVar10 = uVar10 + 0x10) {
LAB_00aa5460:
          uVar3 = *(ulong *)(lVar1 + uVar10);
          uVar13 = ((ulong *)(lVar1 + uVar10))[1] ^ 0xa0a0a0a0a0a0a0a;
          uVar12 = uVar10;
          if ((((0x101010101010100 - (uVar3 ^ 0xa0a0a0a0a0a0a0a) | uVar3) &
                (0x101010101010100 - uVar13 | uVar13) ^ 0xffffffffffffffff) & 0x8080808080808080) !=
              0) break;
        }
        do {
          if (uVar9 == uVar12) goto LAB_00aa54fc;
          if (*(char *)(lVar1 + uVar12) == '\n') goto LAB_00aa54bc;
          uVar12 = uVar12 + 1;
        } while( true );
      }
      if (param_3 == uVar7) goto LAB_00aa54fc;
      uVar12 = 0;
      while (*(char *)(lVar1 + uVar12) != '\n') {
        uVar12 = uVar12 + 1;
        if (uVar9 == uVar12) goto LAB_00aa54fc;
      }
LAB_00aa54bc:
      uVar15 = uVar7 + uVar12 + 1;
    } while ((param_3 <= uVar7 + uVar12) || (*(char *)(param_2 + uVar7 + uVar12) != '\n'));
    bVar6 = false;
    bVar5 = *pbVar11;
    uVar7 = uVar15;
    uVar9 = uVar15;
joined_r0x00aa551c:
    if (((bVar5 & 1) != 0) &&
       (uVar10 = (**(code **)(lVar4 + 0x18))(uVar2,&DAT_002bd1ec,4), (uVar10 & 1) != 0)) {
      return 1;
    }
    if (uVar9 == uVar14) {
      bVar8 = false;
    }
    else {
      bVar8 = *(char *)(param_2 + uVar9 + -1) == '\n';
    }
    *pbVar11 = bVar8;
    uVar9 = (**(code **)(lVar4 + 0x18))(uVar2,param_2 + uVar14,uVar9 - uVar14);
    uVar14 = uVar7;
    if ((uVar9 & 1) != 0) {
      return 1;
    }
  } while( true );
}


// ===== 00aa5578  <core::net::ip_addr::IpAddr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::IpAddr as core::str::traits::FromStr>::from_str */

void __rustcall
<core::net::ip_addr::IpAddr_as_core::str::traits::FromStr>::from_str
          (undefined2 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 local_58;
  long local_50;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  undefined4 local_30;
  undefined1 uStack_2c;
  undefined4 local_2b;
  
  local_58 = param_2;
  local_50 = param_3;
  uVar1 = FUN_00a956dc(&local_58);
  if ((uVar1 & 1) == 0) {
    FUN_00a95a50(&local_38,&local_58);
    uVar2 = uStack_37;
    if (local_38 == '\x01') {
      if (local_50 == 0) {
        local_38 = (char)uStack_33;
        uStack_37 = (undefined4)(CONCAT43(local_30,uStack_33) >> 8);
        uStack_33 = (undefined3)(CONCAT17(uStack_2c,CONCAT43(local_30,uStack_33)) >> 0x28);
        uVar3 = 1;
        local_30 = local_2b;
        goto LAB_00aa55f8;
      }
    }
  }
  else if (local_50 == 0) {
    uVar2 = (undefined4)(uVar1 >> 8);
    uVar3 = 0;
LAB_00aa55f8:
    *(undefined1 *)param_1 = uVar3;
    *(undefined4 *)((long)param_1 + 1) = uVar2;
    *(ulong *)((long)param_1 + 5) = CONCAT35(uStack_33,CONCAT41(uStack_37,local_38));
    *(undefined4 *)((long)param_1 + 0xd) = local_30;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 00aa563c  <f16_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::str::traits::FromStr>::from_str */

uint __rustcall
<f16_as_core::str::traits::FromStr>::from_str(float2 param_1,ulong *param_2,long param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  uint3 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  float2 fVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined8 local_370;
  byte local_368;
  undefined7 uStack_367;
  byte local_35f;
  uint local_68;
  byte local_64;
  
  if (param_3 == 0) {
    return (uint)(ushort)param_1 << 0x10 | 1;
  }
  cVar1 = (char)*param_2;
  if ((cVar1 == '-') || (cVar1 == '+')) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      uVar11 = 1;
      uVar9 = 0x100;
      goto LAB_00aa58d8;
    }
    param_2 = (ulong *)((long)param_2 + 1);
  }
  param_1 = (float2)core::num::imp::dec2flt::parse::parse_number(&local_370);
  uVar8 = local_370;
  if (local_35f == 2) {
    fVar13 = DAT_0038ed38;
    if (param_3 == 3) {
      uVar5 = (uint3)*param_2 & 0xdfdfdf;
      if ((uVar5 != 0x464e49) && (fVar13 = DAT_0038ed3a, uVar5 != 0x4e414e)) {
LAB_00aa57b8:
        uVar11 = 1;
        uVar9 = 0x100;
        goto LAB_00aa58d8;
      }
    }
    else if ((param_3 != 8) || ((*param_2 & 0xdfdfdfdfdfdfdfdf) != 0x5954494e49464e49))
    goto LAB_00aa57b8;
    uVar9 = 0x100;
    param_1 = -fVar13;
  }
  else {
    uVar6 = CONCAT71(uStack_367,local_368);
    if (((local_370 - 8 < 0xfffffffffffffff4) || (0x800 < uVar6)) || ((local_35f & 1) != 0)) {
      auVar15 = FUN_00a95054(local_370,uVar6);
      iVar7 = auVar15._8_4_;
      if (((local_35f & 1) == 0) || (auVar14 = FUN_00a95054(uVar8,uVar6 + 1), auVar15 == auVar14)) {
joined_r0x00aa5770:
        if (iVar7 < 0) goto LAB_00aa5848;
      }
      else {
LAB_00aa5848:
        core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(&local_370,param_2,param_3);
        auVar15 = ZEXT812(0);
        if ((local_370 != 0) &&
           (auVar15 = ZEXT812(0), (int)(local_68 + 0x144) < 0 == SCARRY4(local_68,0x144))) {
          if ((int)local_68 < 0x136) {
            iVar7 = 0;
            while (uVar8 = (ulong)local_68, 0 < (int)local_68) {
              if (local_68 < 0x13) {
                uVar11 = (uint)(byte)""[uVar8];
              }
              else {
                uVar11 = 0x3c;
              }
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::right_shift(&local_370,uVar11);
              if (local_68 == 0xfffff800 || (int)(local_68 + 0x800) < 0 != SCARRY4(local_68,0x800))
              {
                auVar15 = ZEXT812(0);
                goto LAB_00aa5884;
              }
              iVar7 = iVar7 + uVar11;
            }
            do {
              if ((int)uVar8 == 0) {
                if (4 < local_368) break;
                uVar11 = 1;
                if (local_368 < 2) {
                  uVar11 = 2;
                }
              }
              else {
                uVar11 = -(int)uVar8;
                if (uVar11 < 0x13) {
                  uVar11 = (uint)(byte)""[uVar11];
                }
                else {
                  uVar11 = 0x3c;
                }
              }
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::left_shift(&local_370,uVar11);
              uVar8 = (ulong)local_68;
              if (0x7ff < (int)local_68) goto LAB_00aa587c;
              iVar7 = iVar7 - uVar11;
            } while ((int)local_68 < 1);
            iVar12 = iVar7 + -1;
            if (iVar12 == -0xf || iVar7 + 0xe < 0 != SCARRY4(iVar12,0xf)) {
              do {
                uVar11 = -iVar12 - 0xe;
                if (0x3b < uVar11) {
                  uVar11 = 0x3c;
                }
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::right_shift(&local_370,uVar11);
                iVar12 = uVar11 + iVar12;
              } while (iVar12 + 0xe < 0 != SCARRY4(iVar12,0xe));
            }
            if (iVar12 + 0xf < 0x1f) {
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::left_shift(&local_370,0xb);
              if ((local_370 == 0) || (uVar8 = (ulong)local_68, (int)local_68 < 0)) {
                auVar14._4_8_ = 0;
                auVar14._0_4_ = iVar12 + 0xe;
                auVar15 = auVar14 << 0x40;
                goto LAB_00aa5884;
              }
              if (local_68 < 0x13) {
                uVar6 = 0;
                if (local_68 != 0) {
                  uVar10 = 0;
                  do {
                    uVar6 = uVar6 * 10;
                    if (uVar10 < local_370) {
                      uVar6 = uVar6 + (&local_368)[uVar10];
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar8 != uVar10);
                }
                if (uVar8 < local_370) {
                  if ((uVar8 + 1 == local_370) && ((&local_368)[uVar8] == 5)) {
                    if (((local_64 & 1) != 0) ||
                       ((local_68 != 0 && ((*(byte *)((long)&local_370 + uVar8 + 7) & 1) != 0)))) {
LAB_00aa5ab0:
                      uVar6 = uVar6 + 1;
                    }
                  }
                  else if (4 < (&local_368)[uVar8]) goto LAB_00aa5ab0;
                }
                if (0x7ff < uVar6) goto LAB_00aa5abc;
              }
              else {
LAB_00aa5abc:
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::right_shift(&local_370,1);
                uVar6 = <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                        ::round(&local_370);
                if (0x1e < iVar12 + 0x10) goto LAB_00aa587c;
                iVar12 = iVar12 + 1;
              }
              iVar7 = 0xe;
              if (0x3ff < uVar6) {
                iVar7 = 0xf;
              }
              auVar15._8_4_ = iVar7 + iVar12;
              auVar15._0_8_ = uVar6 & 0x3ff;
              goto LAB_00aa5884;
            }
          }
LAB_00aa587c:
          auVar15 = ZEXT412(0x1f) << 0x40;
        }
      }
LAB_00aa5884:
      fVar13 = (float2)(auVar15._0_2_ | (ushort)(auVar15._8_4_ << 10));
      uVar9 = 0;
      param_1 = -fVar13;
    }
    else {
      if ((long)local_370 < 5) {
        if ((long)local_370 < 0) {
          fVar4 = (float)uVar6 / (float)*(float2 *)(&DAT_002a0f10 + local_370 * -2);
        }
        else {
          fVar4 = (float)*(float2 *)(&DAT_002a0f10 + local_370 * 2) * (float)uVar6;
        }
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                 local_370 * 8 + 0x61);
        if ((SUB168(auVar2 * auVar3,8) != 0) ||
           (uVar8 = uVar6 * *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                      local_370 * 8 + 0x61), 0x800 < uVar8)) {
          auVar15 = FUN_00a95054(local_370,uVar6);
          iVar7 = auVar15._8_4_;
          goto joined_r0x00aa5770;
        }
        fVar4 = (float)uVar8 * 10000.0;
      }
      fVar13 = (float2)fVar4;
      param_1 = -fVar13;
      uVar9 = 0x100;
    }
  }
  uVar11 = 0;
  if (cVar1 != '-') {
    param_1 = fVar13;
  }
LAB_00aa58d8:
  return uVar9 | (uint)(ushort)param_1 << 0x10 | uVar11;
}


// ===== 00aa5af8  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::lossy::Debug as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::str::lossy::Debug_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  undefined *puVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  code *pcVar20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte *local_a0;
  byte *local_98;
  undefined1 *puStack_90;
  long local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined4 uStack_78;
  byte bStack_74;
  byte bStack_73;
  undefined2 uStack_72;
  undefined1 *local_70;
  undefined *puStack_68;
  byte *pbVar14;
  
  uVar9 = *param_2;
  lVar2 = param_2[1];
  pcVar20 = *(code **)(lVar2 + 0x20);
  uVar8 = (*pcVar20)(uVar9,0x22);
  if ((uVar8 & 1) == 0) {
    local_b0 = *param_1;
    uStack_a8 = param_1[1];
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_a0,&local_b0);
    puVar15 = PTR_fmt_00b00c28;
    pbVar6 = local_a0;
    pbVar7 = local_98;
    puVar5 = puStack_90;
    lVar3 = local_88;
    while (pbVar6 != (byte *)0x0) {
      pbVar18 = (byte *)0x0;
      local_a0 = pbVar6;
      local_98 = pbVar7;
      puStack_90 = puVar5;
      local_88 = lVar3;
      if (pbVar7 != (byte *)0x0) {
        pbVar17 = (byte *)0x0;
        pbVar14 = pbVar6;
        do {
          while( true ) {
            pbVar13 = pbVar14 + 1;
            uVar19 = (uint)*pbVar14;
            if ((char)*pbVar14 < '\0') {
              if (uVar19 < 0xe0) {
                uVar19 = pbVar14[1] & 0x3f | (uVar19 & 0x1f) << 6;
                pbVar13 = pbVar14 + 2;
              }
              else {
                uVar16 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
                if (uVar19 < 0xf0) {
                  uVar19 = uVar16 | (uVar19 & 0x1f) << 0xc;
                  pbVar13 = pbVar14 + 3;
                }
                else {
                  pbVar13 = pbVar14 + 4;
                  uVar19 = pbVar14[3] & 0x3f | uVar16 << 6 | (uVar19 & 7) << 0x12;
                }
              }
            }
            FUN_00a95e3c(&local_80,uVar19,0x10001);
            if ((byte)(bStack_73 - bStack_74) != '\x01') break;
            pbVar17 = pbVar13 + ((long)pbVar17 - (long)pbVar14);
            pbVar14 = pbVar13;
            if (pbVar13 == pbVar6 + (long)pbVar7) goto LAB_00aa5d8c;
          }
          if (((pbVar7 < pbVar17) || (pbVar17 < pbVar18)) ||
             ((pbVar18 != pbVar7 &&
              (((pbVar18 != (byte *)0x0 &&
                (iVar11 = (int)(char)pbVar6[(long)pbVar18],
                iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))) ||
               ((pbVar17 != pbVar7 &&
                (iVar11 = (int)(char)pbVar6[(long)pbVar17],
                iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (pbVar6,pbVar7,pbVar18,pbVar17,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00088);
          }
          uVar8 = (**(code **)(lVar2 + 0x18))
                            (uVar9,pbVar6 + (long)pbVar18,(long)pbVar17 - (long)pbVar18);
          if ((uVar8 & 1) != 0) goto LAB_00aa5b34;
          puStack_68 = (undefined *)
                       CONCAT26(uStack_72,CONCAT15(bStack_73,CONCAT14(bStack_74,uStack_78)));
          puVar4 = (undefined1 *)CONCAT71(uStack_7f,local_80);
          local_70 = puVar4;
          uVar8 = (ulong)bStack_74;
          uVar16 = (uint)bStack_73;
          if (bStack_73 < 0x81) {
            uVar1 = (uint)bStack_74;
            if ((uint)bStack_74 < (uint)bStack_73 || bStack_74 == uVar16) {
              uVar1 = uVar16;
            }
            while (uVar1 != uVar8) {
              puVar4 = (undefined1 *)((long)&local_70 + uVar8);
              uVar8 = uVar8 + 1;
              uVar10 = (*pcVar20)(uVar9,*puVar4);
              if ((uVar10 & 1) != 0) goto LAB_00aa5b34;
            }
          }
          else {
            while ((byte)uVar8 < uVar16) {
              uVar8 = (ulong)((int)uVar8 + 1);
              uVar10 = (*pcVar20)(uVar9,(ulong)puVar4 & 0xffffffff);
              if ((uVar10 & 1) != 0) goto LAB_00aa5b34;
            }
          }
          if (uVar19 < 0x80) {
            lVar12 = 1;
          }
          else if (uVar19 < 0x800) {
            lVar12 = 2;
          }
          else {
            lVar12 = 3;
            if (0xffff < uVar19) {
              lVar12 = 4;
            }
          }
          pbVar18 = pbVar17 + lVar12;
          pbVar17 = pbVar13 + ((long)pbVar17 - (long)pbVar14);
          pbVar14 = pbVar13;
        } while (pbVar13 != pbVar6 + (long)pbVar7);
LAB_00aa5d8c:
        puVar15 = PTR_fmt_00b00c28;
        if (pbVar18 != (byte *)0x0) {
          if (pbVar18 < pbVar7) {
            if ((char)pbVar6[(long)pbVar18] + 0x40 < 0 !=
                SCARRY4((int)(char)pbVar6[(long)pbVar18],0x40)) {
LAB_00aa5e7c:
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (pbVar6,pbVar7,pbVar18,pbVar7,
                         &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00070);
            }
          }
          else if (pbVar18 != pbVar7) goto LAB_00aa5e7c;
        }
      }
      uVar8 = (**(code **)(lVar2 + 0x18))(uVar9,pbVar6 + (long)pbVar18,(long)pbVar7 - (long)pbVar18)
      ;
      if ((uVar8 & 1) != 0) goto LAB_00aa5b34;
      for (; lVar3 != 0; lVar3 = lVar3 + -1) {
        local_80 = *puVar5;
        local_70 = &local_80;
        puStack_68 = puVar15;
        uVar8 = core::fmt::write(uVar9,lVar2,&DAT_00395f15,&local_70);
        if ((uVar8 & 1) != 0) goto LAB_00aa5b34;
        puVar5 = puVar5 + 1;
      }
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_a0,&local_b0);
      pbVar6 = local_a0;
      pbVar7 = local_98;
      puVar5 = puStack_90;
      lVar3 = local_88;
    }
    uVar9 = (*pcVar20)(uVar9,0x22);
  }
  else {
LAB_00aa5b34:
    uVar9 = 1;
  }
  return uVar9;
}


// ===== 00aa5e94  <core::alloc::layout::LayoutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::alloc::layout::LayoutError as core::fmt::Display>::fmt */

void __rustcall
<core::alloc::layout::LayoutError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa5eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"invalid parameters to Layout::from_size_align",0x2d);
  return;
}


// ===== 00aa5eb0  <core::ascii::ascii_char::AsciiChar_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::ascii_char::AsciiChar as core::fmt::Display>::fmt */

void __rustcall
<core::ascii::ascii_char::AsciiChar_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,param_1,1);
  return;
}


// ===== 00aa5ec4  <core::slice::ascii::EscapeAscii_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::ascii::EscapeAscii as
   core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

undefined1  [16] __rustcall
<core::slice::ascii::EscapeAscii_as_core::iter::traits::double_ended::DoubleEndedIterator>::
next_back(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*param_1 == 0) {
    if (*(int *)((long)param_1 + 0x1c) == 1) {
      uVar6 = (uint)*(byte *)((long)param_1 + 0x25);
      if (*(byte *)((long)param_1 + 0x24) < *(byte *)((long)param_1 + 0x25)) goto LAB_00aa5fd0;
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
    }
  }
  else {
    if (*(int *)((long)param_1 + 0x1c) == 1) {
      uVar6 = (uint)*(byte *)((long)param_1 + 0x25);
      if (*(byte *)((long)param_1 + 0x24) < *(byte *)((long)param_1 + 0x25)) goto LAB_00aa5fd0;
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
    }
    if (*param_1 != param_1[1]) {
      pbVar3 = (byte *)(param_1[1] + -1);
      bVar1 = *pbVar3;
      param_1[1] = (long)pbVar3;
      uVar4 = (ulong)(byte)(&DAT_00390378)[bVar1] & 0x7f;
      if ((char)(&DAT_00390378)[bVar1] < '\0') {
        if ((int)uVar4 == 0) {
          uVar4 = (ulong)(byte)(&DAT_002a0ca0)[(ulong)bVar1 & 0xf] << 0x18 |
                  (ulong)(byte)(&DAT_002a0ca0)[bVar1 >> 4] << 0x10 | 0x785c;
          uVar5 = 0x40000000000;
        }
        else {
          uVar4 = uVar4 << 8 | 0x5c;
          uVar5 = 0x20000000000;
        }
      }
      else {
        uVar5 = 0x10000000000;
      }
      uVar6 = (uint)(uVar5 >> 0x28);
      *(undefined4 *)((long)param_1 + 0x1c) = 1;
      param_1[4] = uVar4 | uVar5;
LAB_00aa5fd0:
      *(char *)((long)param_1 + 0x25) = (char)(uVar6 - 1);
      auVar8._9_7_ = 0;
      auVar8[8] = *(byte *)((long)param_1 + ((ulong)(uVar6 - 1) & 0xff) + 0x20);
      auVar8._0_8_ = 1;
      return auVar8;
    }
  }
  if ((int)param_1[2] == 1) {
    if (*(byte *)(param_1 + 3) < *(byte *)((long)param_1 + 0x19)) {
      bVar1 = *(byte *)((long)param_1 + 0x19) - 1;
      *(byte *)((long)param_1 + 0x19) = bVar1;
      auVar7._9_7_ = 0;
      auVar7[8] = *(byte *)((long)param_1 + (ulong)bVar1 + 0x14);
      auVar7._0_8_ = 1;
      return auVar7;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 00aa5fec  <i128_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::LowerExp>::fmt */

void __rustcall <i128_as_core::fmt::LowerExp>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (long)uVar1 >> 0x3f;
  FUN_00a9dfd0(param_2,param_2,(*param_1 ^ uVar2) - uVar2,
               (uVar1 ^ uVar2) - (uVar2 + ((*param_1 ^ uVar2) < uVar2)),(uint)(uVar1 >> 0x3f) ^ 1,
               0x65);
  return;
}


// ===== 00aa6018  <u128_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::LowerExp>::fmt */

void __rustcall <u128_as_core::fmt::LowerExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_00a9dfd0(param_2,param_2,*param_1,param_1[1],1,0x65);
  return;
}


// ===== 00aa602c  <i128_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::UpperExp>::fmt */

void __rustcall <i128_as_core::fmt::UpperExp>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (long)uVar1 >> 0x3f;
  FUN_00a9dfd0(param_2,param_2,(*param_1 ^ uVar2) - uVar2,
               (uVar1 ^ uVar2) - (uVar2 + ((*param_1 ^ uVar2) < uVar2)),(uint)(uVar1 >> 0x3f) ^ 1,
               0x45);
  return;
}


// ===== 00aa6058  <core::num::niche_types::NonZeroI8Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI8Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI8Inner_as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_00aacff4(*param_1);
  return;
}


// ===== 00aa6060  <core::num::nonzero::NonZero<u64>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u64> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<u64>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_3 == 1) {
    bVar1 = *param_2;
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar1 = *param_2;
  }
  if (bVar1 == 0x2b) {
    param_2 = param_2 + 1;
  }
  uVar5 = param_3 - (ulong)(bVar1 == 0x2b);
  if (uVar5 < 0x11) {
    if (uVar5 == 0) goto LAB_00aa6160;
    uVar6 = 0;
    do {
      if (9 < *param_2 - 0x30) {
LAB_00aa614c:
        param_1[1] = 1;
        *param_1 = 1;
        return;
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 * 10 + (ulong)(*param_2 - 0x30);
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
  }
  else {
    uVar6 = 0;
    while (uVar5 != 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      if (SUB168(auVar3 * ZEXT816(10),8) != 0) {
        uVar4 = 1;
        if (*param_2 - 0x30 < 10) {
          uVar4 = 2;
        }
        param_1[1] = uVar4;
        *param_1 = 1;
        return;
      }
      uVar2 = *param_2 - 0x30;
      if (9 < uVar2) goto LAB_00aa614c;
      uVar5 = uVar5 - 1;
      uVar7 = uVar6 * 10;
      uVar6 = uVar7 + uVar2;
      param_2 = param_2 + 1;
      if (CARRY8(uVar7,(ulong)uVar2)) {
        param_1[1] = 2;
        *param_1 = 1;
        return;
      }
    }
  }
  if (uVar6 != 0) {
    *(ulong *)(param_1 + 8) = uVar6;
    *param_1 = 0;
    return;
  }
LAB_00aa6160:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00aa6194  <u128_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::UpperExp>::fmt */

void __rustcall <u128_as_core::fmt::UpperExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_00a9dfd0(param_2,param_2,*param_1,param_1[1],1,0x45);
  return;
}


// ===== 00aa61a8  <core::sync::atomic::Atomic<i128>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i128> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<i128>as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  
  do {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar1;
      param_1[1] = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_00aad84c(uVar1,uVar2,param_2);
  return;
}


// ===== 00aa61c0  <core[bcece726f298455b]::net::ip_addr::Ipv4Addr_as_core[bcece726f298455b]::ops::bit::BitAndAssign<&core[bcece726f298455b]::net::ip_addr::Ipv4Addr>>::bitand_assign =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[bcece726f298455b]::net::ip_addr::Ipv4Addr as
   core[bcece726f298455b]::ops::bit::BitAndAssign<&core[bcece726f298455b]::net::ip_addr::Ipv4Addr>>::bitand_assign
    */

void <core[bcece726f298455b]::net::ip_addr::Ipv4Addr_as_core[bcece726f298455b]::ops::bit::BitAndAssign<&core[bcece726f298455b]::net::ip_addr::Ipv4Addr>>
     ::bitand_assign(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  
  uVar1 = *param_2;
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar3 = NEON_ushl(auVar3,_s__002a07a0,4);
  uVar1 = *param_1;
  uVar4 = (undefined1)((uint)uVar1 >> 0x18);
  uVar2 = CONCAT17(uVar4,CONCAT16(uVar4,(uint6)CONCAT14((char)((uint)uVar1 >> 0x10),
                                                        (uint)CONCAT12((char)((uint)uVar1 >> 8),
                                                                       (ushort)(byte)uVar1)))) &
          CONCAT26(auVar3._12_2_,CONCAT24(auVar3._8_2_,CONCAT22(auVar3._4_2_,auVar3._0_2_)));
  *param_1 = CONCAT13((char)(uVar2 >> 0x30),
                      CONCAT12((char)(uVar2 >> 0x20),CONCAT11((char)(uVar2 >> 0x10),(char)uVar2)));
  return;
}


// ===== 00aa61ec  <core::sync::atomic::Atomic<u128>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u128> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<u128>as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  
  do {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar1;
      param_1[1] = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_00aae044(uVar1,uVar2,param_2);
  return;
}


// ===== 00aa6204  <core::num::nonzero::NonZero<u128>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u128> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<u128>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_3 == 1) {
    bVar2 = *param_2;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar2 = *param_2;
  }
  if (bVar2 == 0x2b) {
    param_2 = param_2 + 1;
  }
  uVar8 = param_3 - (ulong)(bVar2 == 0x2b);
  if (uVar8 < 0x21) {
    if (uVar8 == 0) goto LAB_00aa6358;
    uVar9 = 0;
    uVar11 = 0;
    do {
      uVar13 = *param_2 - 0x30;
      if (9 < uVar13) {
LAB_00aa6344:
        param_1[1] = 1;
        *param_1 = 1;
        return;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar8 = uVar8 - 1;
      uVar12 = uVar9 * 10;
      uVar9 = uVar12 + uVar13;
      uVar11 = SUB168(auVar3 * ZEXT816(10),8) + uVar11 * 10 + (ulong)CARRY8(uVar12,(ulong)uVar13);
      param_2 = param_2 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar9 = 0;
    uVar11 = 0;
    while (uVar8 != 0) {
      if (uVar11 == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        uVar12 = SUB168(auVar4 * ZEXT816(10),8);
        uVar13 = (uint)*param_2;
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar11;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar9;
        uVar10 = SUB168(auVar6 * ZEXT816(10),8);
        uVar12 = uVar10 + uVar11 * 10;
        uVar13 = (uint)*param_2;
        if (CARRY8(uVar10,uVar11 * 10) || SUB168(auVar5 * ZEXT816(10),8) != 0) {
          uVar7 = 1;
          if (uVar13 - 0x30 < 10) {
            uVar7 = 2;
          }
          param_1[1] = uVar7;
          *param_1 = 1;
          return;
        }
      }
      uVar10 = uVar9 * 10;
      param_2 = param_2 + 1;
      uVar13 = uVar13 - 0x30;
      if (9 < uVar13) goto LAB_00aa6344;
      uVar1 = (ulong)uVar13;
      uVar9 = uVar10 + uVar1;
      uVar8 = uVar8 - 1;
      uVar11 = uVar12 + CARRY8(uVar10,uVar1);
      if (CARRY8(uVar12,(ulong)CARRY8(uVar10,uVar1))) {
        param_1[1] = 2;
        *param_1 = 1;
        return;
      }
    }
  }
  if (uVar9 != 0 || uVar11 != 0) {
    *(ulong *)(param_1 + 0x10) = uVar9;
    *(ulong *)(param_1 + 0x18) = uVar11;
    *param_1 = 0;
    return;
  }
LAB_00aa6358:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00aa638c  <core::num::nonzero::NonZero<i128>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i128> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<i128>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte *pbVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  uVar13 = param_3 - 1;
  if (uVar13 == 0) {
    bVar2 = *param_2;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar2 = *param_2;
  }
  if (bVar2 == 0x2d) {
    if (param_3 < 0x21) {
      if (uVar13 == 0) goto LAB_00aa65c0;
      uVar10 = 0;
      lVar12 = 0;
      pbVar8 = param_2 + 1;
      do {
        uVar3 = *pbVar8 - 0x30;
        if (9 < uVar3) goto LAB_00aa65ac;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar10;
        uVar13 = uVar13 - 1;
        uVar11 = uVar10 * 10;
        uVar10 = uVar11 - uVar3;
        lVar12 = (SUB168(auVar5 * ZEXT816(10),8) + lVar12 * 10) - (ulong)(uVar11 < uVar3);
        pbVar8 = pbVar8 + 1;
      } while (uVar13 != 0);
    }
    else {
      uVar10 = 0;
      lVar12 = 0;
      param_2 = param_2 + 1;
      do {
        if (lVar12 == (long)uVar10 >> 0x3f) {
          lVar14 = SUB168(SEXT816((long)uVar10) * SEXT816(10),8);
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar10;
          uVar11 = SUB168(auVar7 * ZEXT816(10),8);
          lVar15 = SUB168(SEXT816(lVar12) * SEXT816(10),8);
          lVar14 = uVar11 + lVar12 * 10;
          if (CARRY8(uVar11,lVar12 * 10)) {
            lVar15 = lVar15 + 1;
          }
          if (lVar15 != lVar14 >> 0x3f || lVar14 >> 0x3f != lVar15 >> 0x3f) {
            uVar9 = 3;
            goto LAB_00aa65f4;
          }
        }
        uVar11 = uVar10 * 10;
        uVar3 = *param_2 - 0x30;
        if (9 < uVar3) goto LAB_00aa65ac;
        uVar1 = (ulong)uVar3;
        uVar10 = uVar11 - uVar1;
        lVar12 = lVar14 - (ulong)(uVar1 > uVar11);
        if (SCARRY8(lVar14,-1) != SCARRY8(lVar14 + -1,(ulong)(uVar1 <= uVar11))) {
          param_1[1] = 3;
          *param_1 = 1;
          return;
        }
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
      } while (uVar13 != 0);
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = uVar13;
    }
    if (param_3 < 0x20) {
      if (param_3 == 0) goto LAB_00aa65c0;
      uVar10 = 0;
      lVar12 = 0;
      do {
        uVar3 = *param_2 - 0x30;
        if (9 < uVar3) {
LAB_00aa65ac:
          param_1[1] = 1;
          *param_1 = 1;
          return;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10;
        param_3 = param_3 - 1;
        uVar13 = uVar10 * 10;
        uVar10 = uVar13 + uVar3;
        lVar12 = SUB168(auVar4 * ZEXT816(10),8) + lVar12 * 10 + (ulong)CARRY8(uVar13,(ulong)uVar3);
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    else {
      uVar10 = 0;
      lVar12 = 0;
      do {
        if (lVar12 == (long)uVar10 >> 0x3f) {
          lVar14 = SUB168(SEXT816((long)uVar10) * SEXT816(10),8);
        }
        else {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar10;
          uVar13 = SUB168(auVar6 * ZEXT816(10),8);
          lVar15 = SUB168(SEXT816(lVar12) * SEXT816(10),8);
          lVar14 = uVar13 + lVar12 * 10;
          if (CARRY8(uVar13,lVar12 * 10)) {
            lVar15 = lVar15 + 1;
          }
          if (lVar15 != lVar14 >> 0x3f || lVar14 >> 0x3f != lVar15 >> 0x3f) {
            uVar9 = 2;
LAB_00aa65f4:
            if (9 < *param_2 - 0x30) {
              uVar9 = 1;
            }
            param_1[1] = uVar9;
            *param_1 = 1;
            return;
          }
        }
        uVar13 = uVar10 * 10;
        uVar3 = *param_2 - 0x30;
        if (9 < uVar3) goto LAB_00aa65ac;
        uVar11 = (ulong)uVar3;
        uVar10 = uVar13 + uVar11;
        lVar12 = lVar14 + (ulong)CARRY8(uVar13,uVar11);
        if (SCARRY8(lVar14,0) != SCARRY8(lVar14,(ulong)CARRY8(uVar13,uVar11))) {
          param_1[1] = 2;
          *param_1 = 1;
          return;
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  if (uVar10 != 0 || lVar12 != 0) {
    *(ulong *)(param_1 + 0x10) = uVar10;
    *(long *)(param_1 + 0x18) = lVar12;
    *param_1 = 0;
    return;
  }
LAB_00aa65c0:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00aa6628  <core::num::niche_types::UsizeNoHighBit_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::UsizeNoHighBit as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::UsizeNoHighBit_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_00aadf44(*param_1);
  return;
}


// ===== 00aa6630  <core::num::nonzero::NonZero<isize>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<isize> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<isize>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  uVar5 = param_3 - 1;
  if (uVar5 == 0) {
    bVar1 = *param_2;
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar1 = *param_2;
  }
  if (bVar1 == 0x2d) {
    if (param_3 < 0x11) {
      if (uVar5 == 0) goto LAB_00aa67a4;
      lVar6 = 0;
      pbVar3 = param_2 + 1;
      do {
        if (9 < *pbVar3 - 0x30) goto LAB_00aa6790;
        uVar5 = uVar5 - 1;
        lVar6 = lVar6 * 10 - (ulong)(*pbVar3 - 0x30);
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
    }
    else {
      lVar6 = 0;
      param_2 = param_2 + 1;
      do {
        lVar7 = lVar6 * 10;
        if (SUB168(SEXT816(lVar6) * SEXT816(10),8) != lVar7 >> 0x3f) {
          uVar4 = 3;
          goto LAB_00aa67d8;
        }
        uVar2 = *param_2 - 0x30;
        if (9 < uVar2) goto LAB_00aa6790;
        lVar6 = lVar7 - (ulong)uVar2;
        if (SBORROW8(lVar7,(ulong)uVar2)) {
          param_1[1] = 3;
          *param_1 = 1;
          return;
        }
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (bVar1 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = uVar5;
    }
    if (param_3 < 0x10) {
      if (param_3 == 0) goto LAB_00aa67a4;
      lVar6 = 0;
      do {
        if (9 < *param_2 - 0x30) {
LAB_00aa6790:
          param_1[1] = 1;
          *param_1 = 1;
          return;
        }
        param_3 = param_3 - 1;
        lVar6 = lVar6 * 10 + (ulong)(*param_2 - 0x30);
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = lVar6 * 10;
        if (SUB168(SEXT816(lVar6) * SEXT816(10),8) != lVar7 >> 0x3f) {
          uVar4 = 2;
LAB_00aa67d8:
          if (9 < *param_2 - 0x30) {
            uVar4 = 1;
          }
          param_1[1] = uVar4;
          *param_1 = 1;
          return;
        }
        uVar2 = *param_2 - 0x30;
        if (9 < uVar2) goto LAB_00aa6790;
        lVar6 = lVar7 + (ulong)uVar2;
        if (SCARRY8(lVar7,(ulong)uVar2)) {
          param_1[1] = 2;
          *param_1 = 1;
          return;
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  if (lVar6 != 0) {
    *(long *)(param_1 + 8) = lVar6;
    *param_1 = 0;
    return;
  }
LAB_00aa67a4:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00aa680c  <core::num::niche_types::NonZeroU64Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU64Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU64Inner_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_00aadf44(*param_1);
  return;
}


// ===== 00aa6814  <core::num::niche_types::NonZeroIsizeInner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroIsizeInner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroIsizeInner_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_00aad568(*param_1);
  return;
}


// ===== 00aa681c  <core::wtf8::Wtf8_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::Wtf8 as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::wtf8::Wtf8_as_core::fmt::Debug>::fmt(long param_1,ulong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  ushort local_74 [2];
  ushort *local_70;
  undefined *puStack_68;
  
  uVar8 = *param_3;
  lVar3 = param_3[1];
  pcVar13 = *(code **)(lVar3 + 0x20);
  uVar6 = (*pcVar13)(uVar8,0x22);
  puVar5 = PTR_fmt_00b00e50;
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar6 = 0;
  pbVar2 = (byte *)(param_1 + param_2);
LAB_00aa687c:
  uVar7 = param_2;
  if (uVar6 == param_2) {
LAB_00aa69b4:
    uVar6 = FUN_00aa45e8(uVar8,lVar3,param_1 + uVar7,param_2 - uVar7);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    uVar8 = (*pcVar13)(uVar8,0x22);
    return uVar8;
  }
  pbVar9 = (byte *)(param_1 + uVar6);
  uVar12 = uVar6;
  do {
    pbVar10 = pbVar9 + 1;
    bVar4 = *pbVar9;
    uVar7 = uVar6;
    if ((char)bVar4 < '\0') {
      if (bVar4 < 0xe0) {
        pbVar1 = pbVar9 + 2;
        lVar11 = 2;
        pbVar9 = pbVar10;
        if (pbVar10 != pbVar2) {
          pbVar9 = pbVar1;
        }
      }
      else if (bVar4 == 0xed) {
        if ((pbVar10 == pbVar2) || (pbVar9 + 2 == pbVar2)) goto LAB_00aa69b4;
        if (0x9f < pbVar9[1]) break;
        lVar11 = 3;
        pbVar9 = pbVar9 + 3;
      }
      else {
        if (pbVar10 != pbVar2) {
          pbVar10 = pbVar9 + 2;
        }
        if (pbVar10 != pbVar2) {
          pbVar10 = pbVar10 + 1;
        }
        pbVar9 = pbVar10;
        if (bVar4 < 0xf0) {
          lVar11 = 3;
        }
        else {
          lVar11 = 4;
          if (pbVar10 != pbVar2) {
            pbVar9 = pbVar10 + 1;
          }
        }
      }
    }
    else {
      lVar11 = 1;
      pbVar9 = pbVar10;
    }
    uVar12 = lVar11 + uVar12;
    if (pbVar9 == pbVar2) goto LAB_00aa69b4;
  } while( true );
  local_74[0] = pbVar9[2] & 0x3f | (ushort)((pbVar9[1] & 0x1f) << 6) | 0xd800;
  if ((uVar12 < uVar6) || (param_2 < uVar12)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar6,uVar12,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b000a0);
  }
  uVar6 = FUN_00aa45e8(uVar8,lVar3,param_1 + uVar6,uVar12 - uVar6);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  puStack_68 = puVar5;
  local_70 = local_74;
  uVar6 = core::fmt::write(uVar8,lVar3,&DAT_002b3ba2,&local_70);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar6 = uVar12 + 3;
  if (param_2 < uVar6) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar6,param_2,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff778);
  }
  goto LAB_00aa687c;
}


// ===== 00aa6a14  <core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::CStr as core::clone::CloneToUninit>::clone_to_uninit */

void __rustcall
<core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit
          (void *param_1,size_t param_2,void *param_3)

{
  memcpy(param_3,param_1,param_2);
  return;
}


// ===== 00aa6a28  <core::ffi::c_str::CStr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::CStr as core::fmt::Debug>::fmt */

void __rustcall <core::ffi::c_str::CStr_as_core::fmt::Debug>::fmt(undefined8 param_1,long param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Debug>::fmt(param_1,param_2 + -1);
  return;
}


// ===== 00aa6a30  FUN_00aa6a30 =====

void FUN_00aa6a30(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 local_21;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = 0;
  if (lVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00396050,0x51,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b000b8);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = (uint)uVar6;
  if ((uVar5 >> 0x17 & 1) != 0) {
    if ((uVar5 >> 0x1b & 1) == 0) {
      uVar5 = uVar5 | 0x9000000;
      *(undefined2 *)(param_2 + 0x14) = 0x12;
    }
    else {
      uVar5 = uVar5 | 0x1000000;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar5 | 0x800000;
  lVar1 = 0;
  do {
    lVar3 = lVar1;
    uVar4 = uVar2 & 0xf;
    uVar2 = uVar2 >> 4;
    (&local_21)[lVar3] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar3 + -1;
  } while (uVar2 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_21 + lVar3,-(lVar3 + -1));
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  return;
}


// ===== 00aa6b08  <core::mem::transmutability::Assume_as_core::ops::arith::Sub>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::transmutability::Assume as core::ops::arith::Sub>::sub */

uint __rustcall
<core::mem::transmutability::Assume_as_core::ops::arith::Sub>::sub(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & (param_2 ^ 0xffffffff);
  uVar1 = uVar2 & 0x10000;
  if ((param_1 & 0x1000000) != 0) {
    uVar1 = (uVar1 | param_2 & 0x1000000) ^ 0x1000000;
  }
  return uVar2 & 0x101 | uVar1;
}


// ===== 00aa6b34  <f32_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::str::traits::FromStr>::from_str */

ulong __rustcall
<f32_as_core::str::traits::FromStr>::from_str(float param_1,ulong *param_2,long param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint3 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined8 local_370;
  byte local_368;
  undefined7 uStack_367;
  byte local_35f;
  uint local_68;
  byte local_64;
  
  if (param_3 == 0) {
    return (ulong)(uint)param_1 << 0x20 | 1;
  }
  cVar1 = (char)*param_2;
  if ((cVar1 == '-') || (cVar1 == '+')) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      uVar6 = 1;
      uVar7 = 0x100;
      goto LAB_00aa6db0;
    }
    param_2 = (ulong *)((long)param_2 + 1);
  }
  param_1 = (float)core::num::imp::dec2flt::parse::parse_number(&local_370,param_2,param_3);
  uVar6 = local_370;
  if (local_35f == 2) {
    if (param_3 == 3) {
      uVar4 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar4 == 0x464e49) goto LAB_00aa6cb8;
      if (uVar4 != 0x4e414e) goto LAB_00aa6cac;
      fVar11 = NAN;
    }
    else {
      if ((param_3 != 8) || ((*param_2 & 0xdfdfdfdfdfdfdfdf) != 0x5954494e49464e49)) {
LAB_00aa6cac:
        uVar6 = 1;
        uVar7 = 0x100;
        goto LAB_00aa6db0;
      }
LAB_00aa6cb8:
      fVar11 = INFINITY;
    }
    uVar7 = 0x100;
    param_1 = -fVar11;
  }
  else {
    uVar7 = CONCAT71(uStack_367,local_368);
    if (((local_370 - 0x12 < 0xffffffffffffffe4) || (0x1000000 < uVar7)) || ((local_35f & 1) != 0))
    {
      auVar13 = FUN_00a952cc(local_370,uVar7);
      iVar5 = auVar13._8_4_;
      if (((local_35f & 1) == 0) || (iVar5 < 0)) {
joined_r0x00aa6cd4:
        if (iVar5 < 0) {
LAB_00aa6d38:
          core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(&local_370,param_2,param_3);
          auVar13 = ZEXT812(0);
          if ((local_370 != 0) &&
             (auVar13 = ZEXT812(0), (int)(local_68 + 0x144) < 0 == SCARRY4(local_68,0x144))) {
            if ((int)local_68 < 0x136) {
              iVar5 = 0;
              while (uVar6 = (ulong)local_68, 0 < (int)local_68) {
                if (local_68 < 0x13) {
                  uVar9 = (uint)(byte)""[uVar6];
                }
                else {
                  uVar9 = 0x3c;
                }
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::right_shift(&local_370,uVar9);
                if (local_68 == 0xfffff800 || (int)(local_68 + 0x800) < 0 != SCARRY4(local_68,0x800)
                   ) {
                  auVar13 = ZEXT812(0);
                  goto LAB_00aa6d74;
                }
                iVar5 = iVar5 + uVar9;
              }
              do {
                if ((int)uVar6 == 0) {
                  if (4 < local_368) break;
                  uVar9 = 1;
                  if (local_368 < 2) {
                    uVar9 = 2;
                  }
                }
                else {
                  uVar9 = -(int)uVar6;
                  if (uVar9 < 0x13) {
                    uVar9 = (uint)(byte)""[uVar9];
                  }
                  else {
                    uVar9 = 0x3c;
                  }
                }
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::left_shift(&local_370,uVar9);
                uVar6 = (ulong)local_68;
                if (0x7ff < (int)local_68) goto LAB_00aa6d6c;
                iVar5 = iVar5 - uVar9;
              } while ((int)local_68 < 1);
              uVar9 = iVar5 - 1;
              if (uVar9 == 0xffffff81 || iVar5 + 0x7e < 0 != SCARRY4(uVar9,0x7f)) {
                do {
                  uVar10 = -uVar9 - 0x7e;
                  if (0x3b < uVar10) {
                    uVar10 = 0x3c;
                  }
                  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                  ::right_shift(&local_370,uVar10);
                  uVar9 = uVar10 + uVar9;
                } while (uVar9 < 0xffffff82);
              }
              if ((int)(uVar9 + 0x7f) < 0xff) {
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::left_shift(&local_370,0x18);
                if ((local_370 == 0) || (uVar6 = (ulong)local_68, (int)local_68 < 0)) {
                  auVar12._4_8_ = 0;
                  auVar12._0_4_ = uVar9 + 0x7e;
                  auVar13 = auVar12 << 0x40;
                  goto LAB_00aa6d74;
                }
                if (local_68 < 0x13) {
                  uVar7 = 0;
                  if (local_68 != 0) {
                    uVar8 = 0;
                    do {
                      uVar7 = uVar7 * 10;
                      if (uVar8 < local_370) {
                        uVar7 = uVar7 + (&local_368)[uVar8];
                      }
                      uVar8 = uVar8 + 1;
                    } while (uVar6 != uVar8);
                  }
                  if (uVar6 < local_370) {
                    if ((uVar6 + 1 == local_370) && ((&local_368)[uVar6] == 5)) {
                      if (((local_64 & 1) != 0) ||
                         ((local_68 != 0 && ((*(byte *)((long)&local_370 + uVar6 + 7) & 1) != 0))))
                      {
LAB_00aa6f88:
                        uVar7 = uVar7 + 1;
                      }
                    }
                    else if (4 < (&local_368)[uVar6]) goto LAB_00aa6f88;
                  }
                  if (uVar7 >> 0x18 != 0) goto LAB_00aa6f94;
                }
                else {
LAB_00aa6f94:
                  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                  ::right_shift(&local_370,1);
                  uVar7 = <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                          ::round(&local_370);
                  if (0xfe < (int)(uVar9 + 0x80)) goto LAB_00aa6d6c;
                  uVar9 = uVar9 + 1;
                }
                iVar5 = 0x7e;
                if (0x7fffff < uVar7) {
                  iVar5 = 0x7f;
                }
                auVar13._8_4_ = iVar5 + uVar9;
                auVar13._0_8_ = uVar7 & 0x7fffff;
                goto LAB_00aa6d74;
              }
            }
LAB_00aa6d6c:
            auVar13 = ZEXT412(0xff) << 0x40;
          }
        }
      }
      else {
        auVar12 = FUN_00a952cc(uVar6,uVar7 + 1);
        if (auVar13 != auVar12) goto LAB_00aa6d38;
      }
LAB_00aa6d74:
      fVar11 = (float)(auVar13._0_4_ | auVar13._8_4_ << 0x17);
      uVar7 = 0;
      param_1 = -fVar11;
    }
    else {
      if ((long)local_370 < 0xb) {
        if ((long)local_370 < 0) {
          fVar11 = (float)uVar7 / *(float *)(&DAT_00396394 + local_370 * -4);
        }
        else {
          fVar11 = *(float *)(&DAT_00396394 + local_370 * 4) * (float)uVar7;
        }
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                 local_370 * 8 + 0x31);
        if ((SUB168(auVar2 * auVar3,8) != 0) ||
           (uVar6 = uVar7 * *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                      local_370 * 8 + 0x31), 0x1000000 < uVar6)) {
          auVar13 = FUN_00a952cc(local_370,uVar7);
          iVar5 = auVar13._8_4_;
          goto joined_r0x00aa6cd4;
        }
        fVar11 = (float)uVar6 * 1e+10;
      }
      param_1 = -fVar11;
      uVar7 = 0x100;
    }
  }
  uVar6 = 0;
  if (cVar1 != '-') {
    param_1 = fVar11;
  }
LAB_00aa6db0:
  return uVar7 | (ulong)(uint)param_1 << 0x20 | uVar6;
}


// ===== 00aa6fd0  <core::str::error::ParseBoolError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::error::ParseBoolError as core::fmt::Display>::fmt */

void __rustcall
<core::str::error::ParseBoolError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00396078,0x29);
  return;
}


// ===== 00aa6fe4  <core::char::decode::DecodeUtf16Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::decode::DecodeUtf16Error as core::fmt::Display>::fmt */

void __rustcall
<core::char::decode::DecodeUtf16Error_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00e50;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002b9c90,&local_20);
  return;
}


// ===== 00aa7020  <core::task::wake::Context_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::task::wake::Context as core::fmt::Debug>::fmt */

byte __rustcall
<core::task::wake::Context_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003960a1,7);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_30,&DAT_003960a8,5,param_1,&DAT_00b000d0);
  bVar1 = local_27 | local_28;
  if ((local_27 == 1) && ((local_28 & 1) == 0)) {
    if (*(char *)((long)local_30 + 0x12) < '\0') {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00aa70e4  <core::ascii::ascii_char::AsciiChar_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::ascii_char::AsciiChar as core::fmt::Debug>::fmt */

void __rustcall
<core::ascii::ascii_char::AsciiChar_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  byte local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  
  local_17 = *param_1;
  if (local_17 < 0xd) {
    if (local_17 == 0) {
      local_16 = 0x30;
LAB_00aa715c:
      local_14 = 0;
      local_15 = 0x27;
      uVar1 = 4;
      local_17 = 0x5c;
      local_13 = local_14;
      goto LAB_00aa7200;
    }
    if (local_17 == 9) {
      local_16 = 0x74;
    }
    else {
      if (local_17 != 10) {
LAB_00aa7178:
        if ((local_17 < 0x20) || (local_17 == 0x7f)) {
          local_16 = 0x78;
          uVar1 = 6;
          local_15 = (&DAT_002a0ca0)[local_17 >> 4];
          local_14 = (&DAT_002a0ca0)[(ulong)local_17 & 0xf];
          local_17 = 0x5c;
          local_13 = 0x27;
        }
        else {
          local_13 = 0;
          local_14 = 0;
          local_15 = 0;
          local_16 = 0x27;
          uVar1 = 3;
        }
        goto LAB_00aa7200;
      }
      local_16 = 0x6e;
    }
  }
  else {
    if (local_17 != 0xd) {
      if (local_17 == 0x27) {
        local_13 = 0;
        local_14 = 0;
        local_17 = 0x5c;
        local_15 = 0x27;
        uVar1 = 4;
        local_16 = 0x27;
        goto LAB_00aa7200;
      }
      if (local_17 != 0x5c) goto LAB_00aa7178;
      local_16 = 0x5c;
      goto LAB_00aa715c;
    }
    local_16 = 0x72;
  }
  local_14 = 0;
  local_13 = 0;
  local_17 = 0x5c;
  local_15 = 0x27;
  uVar1 = 4;
LAB_00aa7200:
  local_18 = 0x27;
  (**(code **)(param_2[1] + 0x18))(*param_2,&local_18,uVar1);
  return;
}


// ===== 00aa7244  <core::panic::location::Location_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panic::location::Location as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<core::panic::location::Location_as_core::cmp::PartialOrd>::partial_cmp
          (undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_2[1];
  uVar3 = param_1[1];
  __n = uVar3;
  if (uVar2 <= uVar3) {
    __n = uVar2;
  }
  iVar4 = memcmp((void *)*param_1,(void *)*param_2,__n);
  lVar1 = uVar3 - uVar2;
  if (iVar4 != 0) {
    lVar1 = (long)iVar4;
  }
  uVar5 = (uint)(0 < lVar1);
  if (lVar1 < 0) {
    uVar5 = 0xffffffff;
  }
  if ((lVar1 == 0) &&
     (uVar5 = (uint)(*(uint *)(param_2 + 2) < *(uint *)(param_1 + 2)),
     *(uint *)(param_1 + 2) < *(uint *)(param_2 + 2))) {
    uVar5 = 0xffffffff;
  }
  if ((uVar5 & 0xff) == 0) {
    uVar5 = (uint)(*(uint *)((long)param_2 + 0x14) < *(uint *)((long)param_1 + 0x14));
    if (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)param_2 + 0x14)) {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  return uVar5;
}


// ===== 00aa72e4  <core::marker::variance::PhantomCovariantLifetime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::marker::variance::PhantomCovariantLifetime as core::fmt::Debug>::fmt */

void __rustcall
<core::marker::variance::PhantomCovariantLifetime_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa72fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_003960ad,0x18);
  return;
}


// ===== 00aa7300  <core::num::imp::bignum::tests::Big8x3_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::Big8x3 as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<core::num::imp::bignum::tests::Big8x3_as_core::cmp::PartialOrd>::partial_cmp
          (ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar2 = *param_2;
  if (*param_2 <= *param_1) {
    uVar2 = *param_1;
  }
  if (uVar2 < 4) {
    if (uVar2 == 0) {
      return 0;
    }
    lVar1 = uVar2 + 7;
    bVar4 = *(byte *)((long)param_1 + lVar1);
    bVar5 = *(byte *)((long)param_2 + lVar1);
    if (bVar4 == bVar5) {
      if (lVar1 == 8) {
        return 0;
      }
      lVar1 = uVar2 + 6;
      bVar4 = *(byte *)((long)param_1 + lVar1);
      bVar5 = *(byte *)((long)param_2 + lVar1);
      if (bVar4 == bVar5) {
        if (lVar1 == 8) {
          return 0;
        }
        lVar1 = uVar2 + 5;
        bVar4 = *(byte *)((long)param_1 + lVar1);
        bVar5 = *(byte *)((long)param_2 + lVar1);
        if (bVar4 == bVar5) {
          if (lVar1 == 8) {
            return 0;
          }
          bVar4 = *(byte *)((long)param_1 + (uVar2 | 4));
          bVar5 = *(byte *)((long)param_2 + (uVar2 | 4));
        }
      }
    }
    uVar3 = (uint)(bVar5 < bVar4);
    if (bVar4 < bVar5) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar2,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00aa73b4  <core::num::niche_types::NonZeroI16Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI16Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI16Inner_as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_00aad2d8(*param_1);
  return;
}


// ===== 00aa73bc  <core::sync::atomic::Atomic<isize>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<isize> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<isize>as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_00aad568(*param_1);
  return;
}


// ===== 00aa73c4  <core[bcece726f298455b]::net::ip_addr::Ipv4Addr_as_core[bcece726f298455b]::ops::bit::BitOrAssign<&core[bcece726f298455b]::net::ip_addr::Ipv4Addr>>::bitor_assign =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[bcece726f298455b]::net::ip_addr::Ipv4Addr as
   core[bcece726f298455b]::ops::bit::BitOrAssign<&core[bcece726f298455b]::net::ip_addr::Ipv4Addr>>::bitor_assign
    */

void <core[bcece726f298455b]::net::ip_addr::Ipv4Addr_as_core[bcece726f298455b]::ops::bit::BitOrAssign<&core[bcece726f298455b]::net::ip_addr::Ipv4Addr>>
     ::bitor_assign(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *param_2;
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = uVar1;
  auVar2._8_4_ = uVar1;
  auVar2._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar2,_s__002a07a0,4);
  uVar1 = *param_1;
  *param_1 = CONCAT13((byte)((uint)uVar1 >> 0x18) | auVar2[0xc],
                      CONCAT12((byte)((uint)uVar1 >> 0x10) | auVar2[8],
                               CONCAT11((byte)((uint)uVar1 >> 8) | auVar2[4],(byte)uVar1 | auVar2[0]
                                       )));
  return;
}


// ===== 00aa73f0  <core::sync::atomic::Atomic<usize>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<usize> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<usize>as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_00aadf44(*param_1);
  return;
}


// ===== 00aa73f8  FUN_00aa73f8 =====

void FUN_00aa73f8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aa7400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 00aa7404  FUN_00aa7404 =====

undefined8 FUN_00aa7404(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined1 local_24 [4];
  
  plVar6 = (long *)*param_1;
  if (*plVar6 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00aa7494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_002bd198,4);
    return uVar4;
  }
  uVar4 = *param_2;
  lVar1 = param_2[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar5)(uVar4,&DAT_002bd0bc,4);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x12) < '\0') {
      uVar3 = (*pcVar5)(uVar4,&DAT_003905ab,2);
      if ((uVar3 & 1) == 0) {
        local_24[0] = 1;
        local_60 = local_24;
        uStack_48 = param_2[2];
        local_50 = &DAT_00aff790;
        local_70 = uVar4;
        lStack_68 = lVar1;
        local_58 = (undefined1 *)&local_70;
        iVar2 = FUN_00aadf44(plVar6[1],&local_58);
        if ((iVar2 == 0) &&
           (uVar3 = (**(code **)(local_50 + 0x18))(local_58,&DAT_003905a2,2), (uVar3 & 1) == 0))
        goto LAB_00aa7550;
      }
    }
    else {
      uVar3 = (*pcVar5)(uVar4,&DAT_003905aa,1);
      if (((uVar3 & 1) == 0) && (uVar3 = FUN_00aadf44(plVar6[1],param_2), (uVar3 & 1) == 0)) {
        uVar4 = *param_2;
        pcVar5 = *(code **)(param_2[1] + 0x18);
LAB_00aa7550:
        uVar4 = (*pcVar5)(uVar4,&DAT_003905a9,1);
        return uVar4;
      }
    }
  }
  return 1;
}


// ===== 00aa757c  FUN_00aa757c =====

void FUN_00aa757c(undefined8 *param_1)

{
  <core::task::wake::Waker_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00aa7584  FUN_00aa7584 =====

void FUN_00aa7584(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00aa7598  FUN_00aa7598 =====

void FUN_00aa7598(undefined8 *param_1)

{
  FUN_00aadf44(*(undefined8 *)*param_1);
  return;
}


// ===== 00aa75a4  FUN_00aa75a4 =====

void FUN_00aa75a4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <i32_as_core::fmt::Display>::fmt();
      return;
    }
    uVar1 = *(uint *)*param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_0029f430)[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  else {
    uVar1 = *(uint *)*param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 00aa766c  FUN_00aa766c =====

void FUN_00aa766c(undefined8 *param_1)

{
  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00aa7674  FUN_00aa7674 =====

void FUN_00aa7674(undefined8 *param_1)

{
  <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00aa767c  FUN_00aa767c =====

void FUN_00aa767c(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*param_1,param_1[1]);
  return;
}


// ===== 00aa768c  FUN_00aa768c =====

void FUN_00aa768c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_44 [20];
  
  lVar1 = FUN_00a9c794(*(undefined8 *)*param_1,auStack_44,0x14);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_44 + lVar1,0x14 - lVar1);
  return;
}


// ===== 00aa76f0  <core::num::niche_types::NonZeroI32Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI32Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI32Inner_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint local_1c [2];
  undefined1 local_11;
  
  local_1c[0] = *param_1;
  uVar1 = (ulong)local_1c[0];
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <i32_as_core::fmt::Display>::fmt(local_1c);
      return;
    }
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  else {
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 00aa77bc  <core[bcece726f298455b]::net::ip_addr::Ipv6Addr_as_core[bcece726f298455b]::ops::bit::BitAndAssign<&core[bcece726f298455b]::net::ip_addr::Ipv6Addr>>::bitand_assign =====

/* <core[bcece726f298455b]::net::ip_addr::Ipv6Addr as
   core[bcece726f298455b]::ops::bit::BitAndAssign<&core[bcece726f298455b]::net::ip_addr::Ipv6Addr>>::bitand_assign
    */

void <core[bcece726f298455b]::net::ip_addr::Ipv6Addr_as_core[bcece726f298455b]::ops::bit::BitAndAssign<&core[bcece726f298455b]::net::ip_addr::Ipv6Addr>>
     ::bitand_assign(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = CONCAT17((byte)((ulong)uVar4 >> 0x38) & (byte)((ulong)uVar2 >> 0x38),
                        CONCAT16((byte)((ulong)uVar4 >> 0x30) & (byte)((ulong)uVar2 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar4 >> 0x28) &
                                          (byte)((ulong)uVar2 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar4 >> 0x20) &
                                                   (byte)((ulong)uVar2 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                            (byte)((ulong)uVar2 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar4 >> 0x10) &
                                                                     (byte)((ulong)uVar2 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar4 >>
                                                                                    8) &
                                                                              (byte)((ulong)uVar2 >>
                                                                                    8),(byte)uVar4 &
                                                                                       (byte)uVar2))
                                                           )))));
  *param_1 = CONCAT17((byte)((ulong)uVar3 >> 0x38) & (byte)((ulong)uVar1 >> 0x38),
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) & (byte)((ulong)uVar1 >> 0x30),
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) & (byte)((ulong)uVar1 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) &
                                                 (byte)((ulong)uVar1 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) &
                                                          (byte)((ulong)uVar1 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                   (byte)((ulong)uVar1 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar3 >> 8
                                                                                  ) & (byte)((ulong)
                                                  uVar1 >> 8),(byte)uVar3 & (byte)uVar1)))))));
  return;
}


// ===== 00aa77d0  <core::num::nonzero::NonZero<i8>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i8> as core::str::traits::FromStr>::from_str */

bool __rustcall
<core::num::nonzero::NonZero<i8>as_core::str::traits::FromStr>::from_str
          (byte *param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return true;
  }
  uVar7 = param_2 - 1;
  if (uVar7 == 0) {
    bVar2 = *param_1;
    if (bVar2 == 0x2b) {
      return true;
    }
    if (bVar2 == 0x2d) {
      return true;
    }
  }
  else {
    bVar2 = *param_1;
  }
  if (bVar2 == 0x2d) {
    if (2 < param_2) {
      uVar6 = 0;
      pbVar5 = param_1 + 1;
      do {
        iVar3 = ((int)(char)uVar6 + (char)uVar6 * 4) * 2;
        cVar1 = (char)iVar3;
        if (iVar3 != cVar1) {
          return true;
        }
        if (9 < *pbVar5 - 0x30) {
          return true;
        }
        uVar6 = (int)cVar1 - (int)(char)(*pbVar5 - 0x30);
        if ((int)(char)uVar6 != uVar6) {
          return true;
        }
        uVar7 = uVar7 - 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar7 != 0);
      goto LAB_00aa7948;
    }
    if (uVar7 != 0) {
      uVar6 = param_1[1] - 0x30;
      if (9 < uVar6) {
        return true;
      }
      uVar6 = -uVar6;
      goto LAB_00aa7948;
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar7;
    }
    if (1 < param_2) {
      uVar6 = 0;
      do {
        iVar3 = ((int)(char)uVar6 + (char)uVar6 * 4) * 2;
        cVar1 = (char)iVar3;
        if (iVar3 != cVar1) {
          return true;
        }
        if (9 < *param_1 - 0x30) {
          return true;
        }
        uVar6 = (int)cVar1 + (int)(char)(*param_1 - 0x30);
        if ((int)(char)uVar6 != uVar6) {
          return true;
        }
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      goto LAB_00aa7948;
    }
    if (param_2 != 0) {
      uVar4 = *param_1 - 0x30;
      uVar6 = uVar4;
      if (9 < uVar4) {
        uVar6 = 1;
      }
      return (uVar6 & 0xff) == 0 || 9 < uVar4;
    }
  }
  uVar6 = 0;
LAB_00aa7948:
  return (uVar6 & 0xff) == 0;
}


// ===== 00aa79dc  FUN_00aa79dc =====

void FUN_00aa79dc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*(ushort *)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aa7a54  <core[bcece726f298455b]::net::ip_addr::Ipv6Addr_as_core[bcece726f298455b]::ops::bit::BitOrAssign<&core[bcece726f298455b]::net::ip_addr::Ipv6Addr>>::bitor_assign =====

/* <core[bcece726f298455b]::net::ip_addr::Ipv6Addr as
   core[bcece726f298455b]::ops::bit::BitOrAssign<&core[bcece726f298455b]::net::ip_addr::Ipv6Addr>>::bitor_assign
    */

void <core[bcece726f298455b]::net::ip_addr::Ipv6Addr_as_core[bcece726f298455b]::ops::bit::BitOrAssign<&core[bcece726f298455b]::net::ip_addr::Ipv6Addr>>
     ::bitor_assign(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = CONCAT17((byte)((ulong)uVar4 >> 0x38) | (byte)((ulong)uVar2 >> 0x38),
                        CONCAT16((byte)((ulong)uVar4 >> 0x30) | (byte)((ulong)uVar2 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar4 >> 0x28) |
                                          (byte)((ulong)uVar2 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar4 >> 0x20) |
                                                   (byte)((ulong)uVar2 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar4 >> 0x18) |
                                                            (byte)((ulong)uVar2 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar4 >> 0x10) |
                                                                     (byte)((ulong)uVar2 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar4 >>
                                                                                    8) |
                                                                              (byte)((ulong)uVar2 >>
                                                                                    8),(byte)uVar4 |
                                                                                       (byte)uVar2))
                                                           )))));
  *param_1 = CONCAT17((byte)((ulong)uVar3 >> 0x38) | (byte)((ulong)uVar1 >> 0x38),
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) | (byte)((ulong)uVar1 >> 0x30),
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) | (byte)((ulong)uVar1 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) |
                                                 (byte)((ulong)uVar1 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) |
                                                          (byte)((ulong)uVar1 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) |
                                                                   (byte)((ulong)uVar1 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar3 >> 8
                                                                                  ) | (byte)((ulong)
                                                  uVar1 >> 8),(byte)uVar3 | (byte)uVar1)))))));
  return;
}


// ===== 00aa7a68  <core::num::nonzero::NonZero<i16>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i16> as core::str::traits::FromStr>::from_str */

uint __rustcall
<core::num::nonzero::NonZero<i16>as_core::str::traits::FromStr>::from_str
          (byte *param_1,ulong param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    uVar4 = 1;
    goto LAB_00aa7bec;
  }
  uVar5 = param_2 - 1;
  if (uVar5 == 0) {
    bVar6 = *param_1;
    uVar4 = 0x101;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) goto LAB_00aa7bec;
    if (bVar6 == 0x2d) goto LAB_00aa7b18;
LAB_00aa7a94:
    if (bVar6 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar5;
    }
    if (param_2 < 4) {
      if (param_2 == 0) {
        uVar4 = 0;
        goto LAB_00aa7bec;
      }
      uVar4 = *param_1 - 0x30;
      if (uVar4 < 10) {
        if (param_2 == 1) goto LAB_00aa7bd8;
        if (param_1[1] - 0x30 < 10) {
          uVar4 = (param_1[1] - 0x30) + uVar4 * 10;
          if (param_2 == 2) goto LAB_00aa7bd8;
          if (param_1[2] - 0x30 < 10) {
            uVar4 = ((param_1[2] - 0x30) + uVar4 * 10) * 0x10000;
            goto LAB_00aa7bec;
          }
        }
      }
LAB_00aa7be0:
      uVar4 = 0x101;
      goto LAB_00aa7bec;
    }
    uVar4 = 0;
    do {
      iVar3 = ((int)(short)uVar4 + (short)uVar4 * 4) * 2;
      sVar1 = (short)iVar3;
      if (iVar3 != sVar1) {
        uVar4 = 0x201;
LAB_00aa7c30:
        if (9 < *param_1 - 0x30) {
          uVar4 = 0x101;
        }
        goto LAB_00aa7bec;
      }
      if (9 < *param_1 - 0x30) goto LAB_00aa7be0;
      uVar4 = (*param_1 - 0x30) + (int)sVar1;
      if ((int)(short)uVar4 != uVar4) {
        uVar4 = 0x201;
        goto LAB_00aa7bec;
      }
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  else {
    bVar6 = *param_1;
    if (bVar6 != 0x2d) goto LAB_00aa7a94;
LAB_00aa7b18:
    param_1 = param_1 + 1;
    uVar4 = 0;
    if (param_2 < 5) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (9 < *param_1 - 0x30) goto LAB_00aa7be0;
        uVar4 = uVar4 * 10 - (*param_1 - 0x30);
        param_1 = param_1 + 1;
      }
    }
    else {
      do {
        iVar3 = ((int)(short)uVar4 + (short)uVar4 * 4) * 2;
        sVar1 = (short)iVar3;
        if (iVar3 != sVar1) {
          uVar4 = 0x301;
          goto LAB_00aa7c30;
        }
        if (9 < *param_1 - 0x30) goto LAB_00aa7be0;
        uVar4 = (int)sVar1 - (*param_1 - 0x30);
        if ((int)(short)uVar4 != uVar4) {
          uVar4 = 0x301;
          goto LAB_00aa7bec;
        }
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
    }
  }
LAB_00aa7bd8:
  uVar4 = uVar4 << 0x10;
LAB_00aa7bec:
  uVar7 = 0x400;
  if (uVar4 >= 0x10000) {
    uVar7 = 0;
  }
  uVar2 = uVar4 & 0xff00;
  if ((uVar4 & 1) == 0) {
    uVar2 = uVar7;
  }
  return uVar2 | uVar4 & 0xffff0000 | (uint)(uVar4 < 0x10000) | uVar4 & 1;
}


// ===== 00aa7c50  <core::num::nonzero::NonZero<i32>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i32> as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::num::nonzero::NonZero<i32>as_core::str::traits::FromStr>::from_str
          (byte *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    uVar9 = 0;
    bVar3 = true;
    goto LAB_00aa7e40;
  }
  uVar10 = param_2 - 1;
  if (uVar10 == 0) {
    bVar6 = *param_1;
    uVar9 = 0x101;
    bVar3 = true;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) goto LAB_00aa7e40;
    if (bVar6 == 0x2d) goto LAB_00aa7d70;
LAB_00aa7c7c:
    if (bVar6 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar10;
    }
    if (param_2 < 8) {
      if (param_2 == 0) {
        uVar9 = 0;
        bVar3 = false;
        goto LAB_00aa7e40;
      }
      uVar8 = *param_1 - 0x30;
      if (uVar8 < 10) {
        if (param_2 == 1) goto LAB_00aa7e28;
        if (param_1[1] - 0x30 < 10) {
          uVar8 = (param_1[1] - 0x30) + uVar8 * 10;
          if (param_2 == 2) goto LAB_00aa7e28;
          if (param_1[2] - 0x30 < 10) {
            uVar8 = (param_1[2] - 0x30) + uVar8 * 10;
            if (param_2 == 3) goto LAB_00aa7e28;
            if (param_1[3] - 0x30 < 10) {
              uVar8 = (param_1[3] - 0x30) + uVar8 * 10;
              if (param_2 == 4) goto LAB_00aa7e28;
              if (param_1[4] - 0x30 < 10) {
                uVar8 = (param_1[4] - 0x30) + uVar8 * 10;
                if (param_2 == 5) goto LAB_00aa7e28;
                if (param_1[5] - 0x30 < 10) {
                  uVar8 = (param_1[5] - 0x30) + uVar8 * 10;
                  if (param_2 == 6) goto LAB_00aa7e28;
                  if (param_1[6] - 0x30 < 10) {
                    uVar9 = (ulong)((param_1[6] - 0x30) + uVar8 * 10) << 0x20;
                    bVar3 = false;
                    goto LAB_00aa7e40;
                  }
                }
              }
            }
          }
        }
      }
      uVar9 = 0x101;
      bVar3 = true;
      goto LAB_00aa7e40;
    }
    uVar8 = 0;
    uVar9 = 0x101;
    bVar3 = true;
    do {
      iVar7 = (int)((long)(int)uVar8 * 10);
      uVar1 = 0x201;
      if ((long)(int)uVar8 * 10 - (long)iVar7 != 0) goto LAB_00aa7e74;
      uVar2 = *param_1 - 0x30;
      if (9 < uVar2) goto LAB_00aa7e40;
      uVar8 = iVar7 + uVar2;
      if (SCARRY4(iVar7,uVar2)) {
        uVar9 = 0x201;
        bVar3 = true;
        goto LAB_00aa7e40;
      }
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  else {
    bVar6 = *param_1;
    if (bVar6 != 0x2d) goto LAB_00aa7c7c;
LAB_00aa7d70:
    uVar8 = 0;
    if (param_2 < 9) {
      if (uVar10 != 0) {
        uVar9 = 0x101;
        bVar3 = true;
        pbVar5 = param_1 + 1;
        do {
          if (9 < *pbVar5 - 0x30) goto LAB_00aa7e40;
          uVar8 = uVar8 * 10 - (*pbVar5 - 0x30);
          uVar10 = uVar10 - 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar10 != 0);
      }
    }
    else {
      uVar9 = 0x101;
      bVar3 = true;
      param_1 = param_1 + 1;
      do {
        iVar7 = (int)((long)(int)uVar8 * 10);
        uVar1 = 0x301;
        if ((long)(int)uVar8 * 10 - (long)iVar7 != 0) goto LAB_00aa7e74;
        uVar2 = *param_1 - 0x30;
        if (9 < uVar2) goto LAB_00aa7e40;
        uVar8 = iVar7 - uVar2;
        if (SBORROW4(iVar7,uVar2)) {
          uVar9 = 0x301;
          bVar3 = true;
          goto LAB_00aa7e40;
        }
        uVar10 = uVar10 - 1;
        param_1 = param_1 + 1;
      } while (uVar10 != 0);
    }
  }
LAB_00aa7e28:
  uVar9 = (ulong)uVar8 << 0x20;
  bVar3 = false;
LAB_00aa7e40:
  bVar4 = uVar9 >> 0x20 == 0;
  uVar10 = 0x400;
  if (!bVar4) {
    uVar10 = 0;
  }
  uVar1 = uVar9 & 0xff00;
  if (!bVar3) {
    uVar1 = uVar10;
  }
  return uVar1 | uVar9 & 0xffffffff00000000 | (ulong)(byte)(bVar4 | bVar3);
LAB_00aa7e74:
  uVar9 = uVar1;
  if (9 < *param_1 - 0x30) {
    uVar9 = 0x101;
  }
  bVar3 = true;
  goto LAB_00aa7e40;
}


// ===== 00aa7e9c  <core::num::niche_types::NonZeroI128Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI128Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI128Inner_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  FUN_00aad84c(*param_1,param_1[1],param_2);
  return;
}


// ===== 00aa7eac  <core::str::iter::EscapeDebug_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EscapeDebug as core::fmt::Display>::fmt */

bool __rustcall
<core::str::iter::EscapeDebug_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte in_w8;
  ulong uVar8;
  byte in_w9;
  int iVar9;
  int in_w14;
  byte in_w15;
  int in_w16;
  char cVar10;
  int unaff_w22;
  byte unaff_w23;
  uint uVar11;
  byte unaff_w24;
  code *pcVar12;
  uint unaff_w26;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ulong unaff_x27;
  uint uVar16;
  ulong unaff_x28;
  uint local_154;
  byte *local_148;
  byte *local_140;
  byte local_134;
  ulong local_11c;
  undefined4 local_114;
  byte local_110;
  byte local_10f;
  int local_10c;
  ulong local_108;
  undefined4 local_100;
  byte local_fc;
  byte local_fb;
  int local_f8;
  ulong local_f4;
  undefined4 uStack_ec;
  byte bStack_e8;
  byte bStack_e7;
  int local_e4;
  ulong local_e0;
  undefined4 local_d8;
  byte local_d4;
  byte local_d3;
  int local_d0;
  ulong local_cc;
  undefined4 uStack_c4;
  byte bStack_c0;
  byte bStack_bf;
  ulong local_b8;
  undefined4 local_b0;
  ulong local_a8;
  undefined4 local_a0;
  ulong local_98;
  undefined4 local_90;
  ulong local_88;
  undefined4 local_80;
  ulong local_78;
  undefined4 local_70;
  
  iVar9 = *(int *)(param_1 + 7);
  if (iVar9 == 2) {
    iVar9 = *(int *)(param_1 + 2);
    local_f8 = 2;
joined_r0x00aa7f94:
    if (iVar9 == 2) goto LAB_00aa7ee8;
LAB_00aa7f98:
    local_140 = (byte *)param_1[1];
    if (iVar9 != 1) {
      iVar5 = *(int *)((long)param_1 + 0x24);
      local_148 = (byte *)*param_1;
    }
    else {
      unaff_x28 = (ulong)*(byte *)(param_1 + 4);
      local_88 = *(ulong *)((long)param_1 + 0x14);
      local_154 = (uint)*(byte *)((long)param_1 + 0x21);
      local_80 = *(undefined4 *)((long)param_1 + 0x1c);
      iVar5 = *(int *)((long)param_1 + 0x24);
      local_148 = (byte *)*param_1;
    }
    cVar10 = iVar9 == 1;
    if (iVar5 == 1) {
      in_w14 = 1;
      unaff_w24 = *(byte *)((long)param_1 + 0x34);
      local_134 = *(byte *)((long)param_1 + 0x35);
      local_78 = param_1[5];
      local_70 = *(undefined4 *)(param_1 + 6);
    }
    else {
      in_w14 = 0;
    }
  }
  else {
    unaff_w22 = *(int *)(param_1 + 0xc);
    if (unaff_w22 == 1) {
      in_w9 = *(byte *)(param_1 + 0xe);
      in_w8 = *(byte *)((long)param_1 + 0x71);
      local_98 = *(ulong *)((long)param_1 + 100);
      local_90 = *(undefined4 *)((long)param_1 + 0x6c);
      if (iVar9 == 1) goto LAB_00aa7f48;
LAB_00aa7f1c:
      local_f8 = 0;
      iVar9 = *(int *)((long)param_1 + 0x4c);
    }
    else {
      if (iVar9 != 1) goto LAB_00aa7f1c;
LAB_00aa7f48:
      unaff_x27 = (ulong)*(byte *)(param_1 + 9);
      unaff_w26 = (uint)*(byte *)((long)param_1 + 0x49);
      local_b8 = *(ulong *)((long)param_1 + 0x3c);
      local_f8 = 1;
      local_b0 = *(undefined4 *)((long)param_1 + 0x44);
      iVar9 = *(int *)((long)param_1 + 0x4c);
    }
    if (iVar9 == 1) {
      in_w16 = 1;
      unaff_w23 = *(byte *)((long)param_1 + 0x5c);
      in_w15 = *(byte *)((long)param_1 + 0x5d);
      local_a8 = param_1[10];
      local_a0 = *(undefined4 *)(param_1 + 0xb);
      iVar9 = *(int *)(param_1 + 2);
      goto joined_r0x00aa7f94;
    }
    in_w16 = 0;
    iVar9 = *(int *)(param_1 + 2);
    if (iVar9 != 2) goto LAB_00aa7f98;
LAB_00aa7ee8:
    cVar10 = '\x02';
  }
  uVar8 = local_b8;
  local_f4 = local_b8;
  uStack_ec = local_b0;
  local_d8 = local_a0;
  local_cc = local_98;
  uStack_c4 = local_90;
  local_114 = local_80;
  local_11c = local_88;
  local_e0 = local_a8;
  local_108 = local_78;
  local_100 = local_70;
  local_110 = (byte)unaff_x28;
  local_10f = (byte)local_154;
  local_10c = in_w14;
  local_fc = unaff_w24;
  local_fb = local_134;
  uVar11 = (uint)unaff_x27;
  bStack_e8 = (byte)unaff_x27;
  bStack_e7 = (byte)unaff_w26;
  local_e4 = in_w16;
  local_d4 = unaff_w23;
  local_d3 = in_w15;
  local_d0 = unaff_w22;
  bStack_c0 = in_w9;
  bStack_bf = in_w8;
  if (local_f8 != 2) {
    if (local_f8 == 1) {
      uVar15 = unaff_w26 & 0xff;
      if (uVar15 < 0x81) {
        uVar16 = uVar11 & 0xff;
        uVar13 = uVar16;
        if (uVar16 <= uVar15) {
          uVar13 = uVar15;
        }
        if (uVar16 < uVar15) {
          uVar8 = unaff_x27 & 0xff;
          uVar3 = *param_2;
          pcVar12 = *(code **)(param_2[1] + 0x20);
          do {
            uVar6 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_f4 + uVar8));
            if ((uVar6 & 1) != 0) {
              return true;
            }
            uVar8 = uVar8 + 1;
            uVar11 = uVar13;
          } while (uVar13 != uVar8);
        }
      }
      else if ((uVar11 & 0xff) < (unaff_w26 & 0xff)) {
        uVar3 = *param_2;
        pcVar12 = *(code **)(param_2[1] + 0x20);
        do {
          uVar6 = (*pcVar12)(uVar3,uVar8 & 0xffffffff);
          if ((uVar6 & 1) != 0) {
            return true;
          }
          uVar15 = (int)unaff_x27 + 1;
          unaff_x27 = (ulong)uVar15;
          uVar11 = unaff_w26;
        } while ((uVar15 & 0xff) < (unaff_w26 & 0xff));
      }
      bStack_e8 = (byte)uVar11;
    }
    uVar8 = local_cc;
    if ((unaff_w22 != 2) && (unaff_w22 == 1)) {
      bStack_e7 = bStack_bf;
      bStack_e8 = bStack_c0;
      uStack_ec = uStack_c4;
      local_f4 = local_cc;
      uVar6 = (ulong)bStack_c0;
      uVar11 = (uint)bStack_bf;
      uVar15 = (uint)bStack_bf;
      if (uVar11 < 0x81) {
        uVar13 = (uint)bStack_c0;
        uVar16 = (uint)bStack_c0;
        if (uVar13 < uVar11 || uVar13 == uVar15) {
          uVar16 = uVar15;
        }
        uVar8 = uVar6;
        if (uVar13 < uVar11) {
          uVar3 = *param_2;
          pcVar12 = *(code **)(param_2[1] + 0x20);
          do {
            uVar8 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_f4 + uVar6));
            if ((uVar8 & 1) != 0) {
              return true;
            }
            uVar6 = uVar6 + 1;
            uVar8 = (ulong)uVar16;
          } while (uVar16 != uVar6);
        }
        bStack_e8 = (byte)uVar8;
      }
      else {
        uVar3 = *param_2;
        lVar4 = param_2[1];
        while ((byte)uVar6 < uVar15) {
          uVar6 = (ulong)((int)uVar6 + 1);
          uVar7 = (**(code **)(lVar4 + 0x20))(uVar3,uVar8 & 0xffffffff);
          if ((uVar7 & 1) != 0) {
            return true;
          }
        }
      }
    }
    uVar8 = local_e0;
    if (in_w16 == 1) {
      uVar11 = (uint)in_w15;
      if (uVar11 < 0x81) {
        uVar3 = *param_2;
        lVar4 = param_2[1];
        uVar8 = (ulong)unaff_w23;
        uVar15 = (uint)unaff_w23;
        if (unaff_w23 <= uVar11) {
          uVar15 = uVar11;
        }
        do {
          if (uVar15 == uVar8) goto LAB_00aa82b4;
          puVar2 = (undefined1 *)((long)&local_e0 + uVar8);
          uVar8 = uVar8 + 1;
          uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,*puVar2);
        } while ((uVar6 & 1) == 0);
      }
      else {
        uVar3 = *param_2;
        lVar4 = param_2[1];
        do {
          if (in_w15 <= unaff_w23) goto LAB_00aa82b4;
          unaff_w23 = unaff_w23 + 1;
          uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,uVar8 & 0xffffffff);
        } while ((uVar6 & 1) == 0);
      }
      return true;
    }
  }
LAB_00aa82b4:
  uVar8 = local_11c;
  if (cVar10 == '\x02') {
    return false;
  }
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (cVar10 != '\x01') goto LAB_00aa835c;
  uVar11 = local_154 & 0xff;
  if (uVar11 < 0x81) {
    uVar15 = (uint)unaff_x28 & 0xff;
    uVar16 = uVar15;
    if (uVar15 <= uVar11) {
      uVar16 = uVar11;
    }
    if (uVar11 <= uVar15) goto LAB_00aa8354;
    pcVar12 = *(code **)(lVar4 + 0x20);
    unaff_x28 = unaff_x28 & 0xff;
    do {
      uVar8 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_11c + unaff_x28));
      if ((uVar8 & 1) != 0) {
        return true;
      }
      unaff_x28 = unaff_x28 + 1;
    } while (uVar16 != unaff_x28);
  }
  else if (((uint)unaff_x28 & 0xff) < (local_154 & 0xff)) {
    pcVar12 = *(code **)(lVar4 + 0x20);
    do {
      uVar11 = (int)unaff_x28 + 1;
      unaff_x28 = (ulong)uVar11;
      uVar6 = (*pcVar12)(uVar3,uVar8 & 0xffffffff);
      if ((uVar6 & 1) != 0) {
        return true;
      }
    } while ((uVar11 & 0xff) < (local_154 & 0xff));
  }
  else {
LAB_00aa8354:
    unaff_x28 = (ulong)local_110;
  }
  local_110 = (byte)unaff_x28;
LAB_00aa835c:
  if (local_148 == (byte *)0x0) {
LAB_00aa836c:
    uVar8 = local_108;
    if (in_w14 != 1) {
      return false;
    }
    uVar11 = (uint)local_134;
    if (0x80 < uVar11) {
      do {
        bVar1 = local_134 > unaff_w24;
        if (local_134 <= unaff_w24) {
          return bVar1;
        }
        unaff_w24 = unaff_w24 + 1;
        uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,uVar8 & 0xffffffff);
      } while ((uVar6 & 1) == 0);
      return bVar1;
    }
    uVar8 = (ulong)unaff_w24;
    uVar15 = (uint)unaff_w24;
    if (unaff_w24 <= uVar11) {
      uVar15 = uVar11;
    }
    do {
      bVar1 = uVar15 != uVar8;
      if (uVar15 == uVar8) {
        return bVar1;
      }
      puVar2 = (undefined1 *)((long)&local_108 + uVar8);
      uVar8 = uVar8 + 1;
      uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,*puVar2);
    } while ((uVar6 & 1) == 0);
    return bVar1;
  }
joined_r0x00aa8368:
  pbVar14 = local_148;
  if (local_148 != local_140) {
    do {
      local_148 = pbVar14 + 1;
      uVar11 = (uint)*pbVar14;
      if ((char)*pbVar14 < '\0') {
        if (uVar11 < 0xe0) {
          uVar11 = pbVar14[1] & 0x3f | (uVar11 & 0x1f) << 6;
          local_148 = pbVar14 + 2;
        }
        else {
          uVar15 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (uVar11 < 0xf0) {
            uVar11 = uVar15 | (uVar11 & 0x1f) << 0xc;
            local_148 = pbVar14 + 3;
          }
          else {
            local_148 = pbVar14 + 4;
            uVar11 = pbVar14[3] & 0x3f | uVar15 << 6 | (uVar11 & 7) << 0x12;
          }
        }
      }
      FUN_00a95e3c(&local_11c,uVar11,0x10100);
      uVar6 = local_11c;
      uVar8 = (ulong)local_110;
      uVar11 = (uint)local_10f;
      uVar15 = (uint)local_10f;
      uVar16 = (uint)local_110;
      if (uVar11 < 0x81) {
        uVar13 = uVar16;
        if (uVar16 < uVar11 || uVar16 == uVar15) {
          uVar13 = uVar15;
        }
        if (uVar16 >= uVar11) goto LAB_00aa84c8;
        pcVar12 = *(code **)(lVar4 + 0x20);
        do {
          uVar6 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_11c + uVar8));
          if ((uVar6 & 1) != 0) {
            return true;
          }
          uVar8 = uVar8 + 1;
        } while (uVar13 != uVar8);
      }
      else {
        if (uVar15 <= uVar16) goto LAB_00aa84c8;
        pcVar12 = *(code **)(lVar4 + 0x20);
        do {
          uVar11 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar11;
          uVar7 = (*pcVar12)(uVar3,uVar6 & 0xffffffff);
          if ((uVar7 & 1) != 0) {
            return true;
          }
        } while ((uVar11 & 0xff) < uVar15);
      }
      local_110 = (byte)uVar8;
      pbVar14 = local_148;
      if (local_148 == local_140) break;
    } while( true );
  }
  goto LAB_00aa836c;
LAB_00aa84c8:
  goto joined_r0x00aa8368;
}


// ===== 00aa8554  <core::str::iter::EscapeDefault_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EscapeDefault as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::str::iter::EscapeDefault_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  byte in_w13;
  byte in_w14;
  byte unaff_w22;
  ulong uVar14;
  byte *pbVar15;
  code *pcVar16;
  uint uVar17;
  undefined1 local_a4 [2];
  undefined6 uStack_a2;
  undefined2 local_9c;
  undefined2 uStack_9a;
  char local_98;
  byte local_97;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  byte local_84;
  byte local_83;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_72 [6];
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  
  uVar12 = *(uint *)(param_1 + 2);
  uVar10 = (ulong)uVar12;
  pbVar15 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if (uVar12 != 1) {
    iVar8 = *(int *)((long)param_1 + 0x24);
  }
  else {
    uVar10 = (ulong)*(byte *)(param_1 + 4);
    unaff_w22 = *(byte *)((long)param_1 + 0x21);
    local_80 = *(undefined8 *)((long)param_1 + 0x14);
    local_78 = *(undefined4 *)((long)param_1 + 0x1c);
    iVar8 = *(int *)((long)param_1 + 0x24);
  }
  if (iVar8 == 1) {
    lVar13 = param_1[5];
    uVar6 = (undefined4)param_1[6];
    in_w14 = *(byte *)((long)param_1 + 0x34);
    in_w13 = *(byte *)((long)param_1 + 0x35);
    auStack_72[2] = (undefined1)lVar13;
    auStack_72[3] = (undefined1)((ulong)lVar13 >> 8);
    auStack_72[4] = (undefined1)((ulong)lVar13 >> 0x10);
    auStack_72[5] = (undefined1)((ulong)lVar13 >> 0x18);
    uStack_6c = (undefined1)((ulong)lVar13 >> 0x20);
    uStack_6b = (undefined1)((ulong)lVar13 >> 0x28);
    uStack_6a = (undefined1)((ulong)lVar13 >> 0x30);
    uStack_69 = (undefined1)((ulong)lVar13 >> 0x38);
    local_68 = (undefined1)uVar6;
    uStack_67 = (undefined1)((uint)uVar6 >> 8);
    uStack_66 = (undefined2)((uint)uVar6 >> 0x10);
  }
  uVar17 = (uint)(iVar8 == 1);
  local_a4[0] = (undefined1)local_80;
  local_a4[1] = (undefined1)((ulong)local_80 >> 8);
  uStack_a2 = (undefined6)((ulong)local_80 >> 0x10);
  local_9c = (undefined2)local_78;
  uStack_9a = (undefined2)((uint)local_78 >> 0x10);
  local_88 = CONCAT22(uStack_66,CONCAT11(uStack_67,local_68));
  local_90 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT15(uStack_6b,
                                        CONCAT14(uStack_6c,
                                                 CONCAT13(auStack_72[5],
                                                          CONCAT12(auStack_72[4],
                                                                   CONCAT11(auStack_72[3],
                                                                            auStack_72[2])))))));
  local_98 = (char)uVar10;
  local_97 = unaff_w22;
  local_94 = uVar17;
  local_84 = in_w14;
  local_83 = in_w13;
  if (uVar12 == 1) {
    uVar12 = (uint)unaff_w22;
    uVar2 = (uint)uVar10 & 0xff;
    uVar3 = uVar2;
    if (uVar2 <= uVar12) {
      uVar3 = uVar12;
    }
    uVar9 = (uint)uVar10;
    if (uVar2 < uVar12) {
      uVar10 = uVar10 & 0xff;
      uVar4 = *param_2;
      pcVar16 = *(code **)(param_2[1] + 0x20);
      do {
        iVar8 = (*pcVar16)(uVar4,local_a4[uVar10]);
        if (iVar8 != 0) {
          local_98 = (char)uVar10 + '\x01';
          if (uVar10 < unaff_w22) {
            return 1;
          }
          goto LAB_00aa867c;
        }
        uVar10 = uVar10 + 1;
        uVar9 = uVar3;
      } while (uVar3 != uVar10);
    }
    local_98 = (char)uVar9;
  }
LAB_00aa867c:
  if ((pbVar15 != (byte *)0x0) && (pbVar15 != pbVar5)) {
    uVar4 = *param_2;
    pcVar16 = *(code **)(param_2[1] + 0x20);
    do {
      uVar12 = (uint)*pbVar15;
      pbVar1 = pbVar15 + 1;
      if ((char)*pbVar15 < '\0') {
        if (uVar12 < 0xe0) {
          uVar12 = pbVar15[1] & 0x3f | (uVar12 & 0x1f) << 6;
          pbVar1 = pbVar15 + 2;
          goto joined_r0x00aa87f4;
        }
        uVar2 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
        if (uVar12 < 0xf0) {
          uVar12 = uVar2 | (uVar12 & 0x1f) << 0xc;
          pbVar1 = pbVar15 + 3;
          goto joined_r0x00aa87f4;
        }
        pbVar1 = pbVar15 + 3;
        pbVar15 = pbVar15 + 4;
        uVar12 = *pbVar1 & 0x3f | uVar2 << 6 | (uVar12 & 7) << 0x12;
        uVar10 = (ulong)uVar12;
        if (uVar12 < 0x22) goto LAB_00aa86cc;
LAB_00aa8758:
        iVar8 = (int)uVar10;
        if (((iVar8 == 0x22) || (iVar8 == 0x27)) || (iVar8 == 0x5c)) {
LAB_00aa877c:
          uVar12 = 0;
          uVar14 = 2;
          uVar11 = 0;
          local_a4[0] = 0x5c;
          local_a4[1] = (char)uVar10;
        }
        else {
LAB_00aa879c:
          if ((uint)uVar10 - 0x20 < 0x5f) {
            bVar7 = (&DAT_00390378)[uVar10];
            if ((char)bVar7 < '\0') {
              if ((bVar7 & 0x7f) != 0) {
                uVar10 = (ulong)(bVar7 & 0x7f);
                goto LAB_00aa877c;
              }
              uVar12 = 0;
              uVar14 = 4;
              uVar11 = (ulong)CONCAT11((&DAT_002a0ca0)[uVar10 & 0xf],(&DAT_002a0ca0)[uVar10 >> 4]);
              local_a4[0] = 0x5c;
              local_a4[1] = 0x78;
            }
            else {
              uVar11 = 0;
              uVar12 = 0;
              uVar14 = 1;
              local_a4[0] = (char)(bVar7 & 0x7f);
              local_a4[1] = 0;
            }
          }
          else {
            auStack_72[4] = 0;
            auStack_72[2] = 0;
            auStack_72[3] = 0;
            uVar14 = 10;
            uStack_6c = (&DAT_002a0ca0)[uVar10 >> 0x10 & 0xf];
            uStack_6b = (&DAT_002a0ca0)[uVar10 >> 0xc & 0xf];
            auStack_72[5] = (&DAT_002a0ca0)[uVar10 >> 0x14];
            uVar11 = (ulong)LZCOUNT((uint)uVar10 | 1) >> 2;
            uStack_6a = (&DAT_002a0ca0)[uVar10 >> 8 & 0xf];
            uStack_69 = (&DAT_002a0ca0)[uVar10 >> 4 & 0xf];
            uVar12 = (int)uVar11 - 2;
            local_68 = (&DAT_002a0ca0)[uVar10 & 0xf];
            uStack_67 = 0x7d;
            auStack_72[uVar11] = 0x5c;
            auStack_72[uVar11 + 1] = 0x75;
            auStack_72[uVar11 + 2] = 0x7b;
            uVar11 = CONCAT17(uStack_67,
                              CONCAT16(local_68,CONCAT15(uStack_69,
                                                         CONCAT14(uStack_6a,
                                                                  CONCAT13(uStack_6b,
                                                                           CONCAT12(uStack_6c,
                                                                                    CONCAT11(
                                                  auStack_72[5],auStack_72[4])))))));
            local_a4[0] = auStack_72[2];
            local_a4[1] = auStack_72[3];
          }
        }
      }
      else {
joined_r0x00aa87f4:
        pbVar15 = pbVar1;
        uVar10 = (ulong)uVar12;
        if (0x21 < uVar12) goto LAB_00aa8758;
LAB_00aa86cc:
        iVar8 = (int)uVar10;
        if (iVar8 != 9) {
          if (iVar8 == 10) {
            uVar11 = 0;
            uVar12 = 0;
            uVar14 = 2;
            local_a4[0] = 0x5c;
            local_a4[1] = 0x6e;
            goto LAB_00aa88a0;
          }
          if (iVar8 == 0xd) {
            uVar11 = 0;
            uVar12 = 0;
            uVar14 = 2;
            local_a4[0] = 0x5c;
            local_a4[1] = 0x72;
            goto LAB_00aa88a0;
          }
          goto LAB_00aa879c;
        }
        uVar11 = 0;
        uVar12 = 0;
        uVar14 = 2;
        local_a4[0] = 0x5c;
        local_a4[1] = 0x74;
      }
LAB_00aa88a0:
      uVar10 = (ulong)(int)uVar12;
      if (uVar12 <= (uint)uVar14) {
        uVar12 = (uint)uVar14;
      }
      uStack_a2 = (undefined6)uVar11;
      local_9c = (undefined2)(uVar11 >> 0x30);
      do {
        iVar8 = (*pcVar16)(uVar4,local_a4[uVar10]);
        if (iVar8 != 0) {
          local_98 = (char)uVar10 + '\x01';
          if (uVar10 < uVar14) {
            return 1;
          }
          goto joined_r0x00aa86ac;
        }
        uVar10 = uVar10 + 1;
      } while (((ulong)uVar12 & 0xff) != uVar10);
      local_98 = (char)uVar12;
joined_r0x00aa86ac:
    } while (pbVar15 != pbVar5);
  }
  if (uVar17 != 0) {
    uVar12 = (uint)in_w13;
    uVar17 = (uint)in_w14;
    uVar2 = uVar17;
    if (uVar17 <= uVar12) {
      uVar2 = uVar12;
    }
    if (uVar17 < uVar12) {
      uVar10 = (ulong)in_w14;
      uVar4 = *param_2;
      pcVar16 = *(code **)(param_2[1] + 0x20);
      do {
        iVar8 = (*pcVar16)(uVar4,*(undefined1 *)((long)&local_90 + uVar10));
        if (iVar8 != 0) {
          if (in_w13 <= uVar10) {
            return 0;
          }
          return 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
  }
  return 0;
}


// ===== 00aa89d4  <core::num::niche_types::U32NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::U32NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::U32NotAllOnes_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(undefined *)((long)&local_14 + lVar4 + 1) = (&DAT_002a0ca0)[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
LAB_00aa8ae0:
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_2,1,"0x",2,(long)&local_12 + lVar5,-lVar5);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(undefined *)((long)&local_14 + lVar4 + 1) = (&DAT_0029f430)[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
    goto LAB_00aa8ae0;
  }
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_00aa8b54;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)uVar1;
    do {
      uVar9 = uVar3;
      lVar4 = lVar5;
      uVar6 = (uint)(uVar9 / 10000);
      uVar7 = (uint)(uVar9 / 10000);
      uVar2 = (uint)uVar9 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&local_14 + lVar4) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar8 * 2);
      *(undefined2 *)((long)&local_12 + lVar4) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar5 = lVar4 + -4;
      uVar3 = uVar9 / 10000;
    } while (9999999 < (uint)uVar9);
    lVar4 = lVar4 + 6;
    uVar8 = (uint)(uVar9 / 10000);
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_00aa8b54;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_00aa8b54:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_00390ba8)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 00aa8ba4  <core::str::iter::EscapeUnicode_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EscapeUnicode as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::str::iter::EscapeUnicode_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte in_w12;
  byte unaff_w22;
  byte *pbVar10;
  byte unaff_w24;
  ulong uVar11;
  uint uVar12;
  code *pcVar13;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  char local_a0;
  byte local_9f;
  uint local_9c;
  long local_98;
  undefined4 local_90;
  byte local_8c;
  byte local_8b;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined2 local_64;
  
  uVar12 = *(uint *)(param_1 + 2);
  uVar8 = (ulong)uVar12;
  pbVar10 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if (uVar12 != 1) {
    iVar6 = *(int *)((long)param_1 + 0x24);
  }
  else {
    uVar8 = (ulong)*(byte *)(param_1 + 4);
    unaff_w22 = *(byte *)((long)param_1 + 0x21);
    local_88 = *(undefined8 *)((long)param_1 + 0x14);
    local_80 = *(undefined4 *)((long)param_1 + 0x1c);
    iVar6 = *(int *)((long)param_1 + 0x24);
  }
  local_b0 = (uint)(uVar12 == 1);
  if (iVar6 == 1) {
    in_w12 = *(byte *)((long)param_1 + 0x34);
    unaff_w24 = *(byte *)((long)param_1 + 0x35);
    local_78 = param_1[5];
    local_70 = (int)param_1[6];
  }
  uVar12 = (uint)(iVar6 == 1);
  local_ac = local_88;
  local_a4 = local_80;
  local_98 = local_78;
  local_a0 = (char)uVar8;
  local_9f = unaff_w22;
  local_9c = uVar12;
  local_90 = local_70;
  local_8c = in_w12;
  local_8b = unaff_w24;
  if (local_b0 != 0) {
    uVar1 = (uint)unaff_w22;
    uVar2 = (uint)uVar8 & 0xff;
    uVar3 = uVar2;
    if (uVar2 <= uVar1) {
      uVar3 = uVar1;
    }
    uVar7 = (uint)uVar8;
    if (uVar2 < uVar1) {
      uVar4 = *param_2;
      uVar8 = uVar8 & 0xff;
      pcVar13 = *(code **)(param_2[1] + 0x20);
      do {
        iVar6 = (*pcVar13)(uVar4,*(undefined1 *)((long)&local_ac + uVar8));
        if (iVar6 != 0) {
          local_a0 = (char)uVar8 + '\x01';
          if (uVar8 < unaff_w22) {
            return 1;
          }
          goto LAB_00aa8cd4;
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar3;
      } while (uVar3 != uVar8);
    }
    local_a0 = (char)uVar7;
  }
LAB_00aa8cd4:
  if ((pbVar10 != (byte *)0x0) && (pbVar10 != pbVar5)) {
    uVar4 = *param_2;
    pcVar13 = *(code **)(param_2[1] + 0x20);
    do {
      pbVar9 = pbVar10 + 1;
      uVar1 = (uint)*pbVar10;
      uVar8 = (ulong)uVar1;
      if ((char)*pbVar10 < '\0') {
        if (uVar1 < 0xe0) {
          pbVar9 = pbVar10 + 2;
          uVar8 = (ulong)(pbVar10[1] & 0x3f | (uVar1 & 0x1f) << 6);
        }
        else {
          uVar2 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
          if (uVar1 < 0xf0) {
            uVar8 = (ulong)(uVar2 | (uVar1 & 0x1f) << 0xc);
            pbVar9 = pbVar10 + 3;
          }
          else {
            pbVar9 = pbVar10 + 4;
            uVar8 = (ulong)(pbVar10[3] & 0x3f | uVar2 << 6 | (uVar1 & 7) << 0x12);
          }
        }
      }
      uStack_6a = 0;
      local_6c = 0;
      uStack_68 = (&DAT_002a0ca0)[uVar8 >> 0x10 & 0xf];
      uStack_67 = (&DAT_002a0ca0)[uVar8 >> 0xc & 0xf];
      uStack_69 = (&DAT_002a0ca0)[uVar8 >> 0x14];
      uVar11 = (ulong)LZCOUNT((uint)uVar8 | 1) >> 2;
      uStack_66 = (&DAT_002a0ca0)[uVar8 >> 8 & 0xf];
      local_64 = CONCAT11(0x7d,(&DAT_002a0ca0)[uVar8 & 0xf]);
      uStack_65 = (&DAT_002a0ca0)[uVar8 >> 4 & 0xf];
      *(undefined1 *)((long)&local_70 + uVar11 + 2) = 0x5c;
      *(undefined1 *)((long)&local_70 + uVar11 + 3) = 0x75;
      *(undefined1 *)((long)&local_6c + uVar11) = 0x7b;
      local_ac = CONCAT17(uStack_65,
                          CONCAT16(uStack_66,
                                   CONCAT15(uStack_67,
                                            CONCAT14(uStack_68,
                                                     CONCAT13(uStack_69,CONCAT12(uStack_6a,local_6c)
                                                             )))));
      local_a4 = CONCAT22(local_a4._2_2_,local_64);
      do {
        uVar8 = (*pcVar13)(uVar4,*(undefined1 *)((long)&local_b0 + uVar11 + 2));
        if ((uVar8 & 1) != 0) {
          return 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0xc);
      local_a0 = '\n';
      pbVar10 = pbVar9;
    } while (pbVar9 != pbVar5);
  }
  if (uVar12 != 0) {
    uVar12 = (uint)unaff_w24;
    uVar1 = (uint)in_w12;
    uVar2 = uVar1;
    if (uVar1 <= uVar12) {
      uVar2 = uVar12;
    }
    if (uVar1 < uVar12) {
      uVar4 = *param_2;
      uVar8 = (ulong)in_w12;
      pcVar13 = *(code **)(param_2[1] + 0x20);
      do {
        iVar6 = (*pcVar13)(uVar4,*(undefined1 *)((long)&local_98 + uVar8));
        if (iVar6 != 0) {
          if (unaff_w24 <= uVar8) {
            return 0;
          }
          return 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
  }
  return 0;
}


// ===== 00aa8ef8  <core::num::niche_types::NonZeroCharInner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroCharInner as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::num::niche_types::NonZeroCharInner_as_core::fmt::Debug>::fmt
          (undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 local_40 [3];
  byte local_34;
  byte local_33;
  
  uVar4 = *param_2;
  lVar1 = param_2[1];
  uVar2 = *param_1;
  pcVar5 = *(code **)(lVar1 + 0x20);
  uVar3 = (*pcVar5)(uVar4,0x27);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  FUN_00a95e3c(local_40,uVar2,0x101);
  if ((ulong)local_33 < 0x81) {
    uVar3 = (**(code **)(lVar1 + 0x18))
                      (uVar4,(long)local_40 + (ulong)local_34,(ulong)local_33 - (ulong)local_34);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar3 = (*pcVar5)(uVar4,local_40[0]);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar5)(uVar4,0x27);
  return uVar4;
}


// ===== 00aa8fdc  <core::bstr::ByteStr_as_core::fmt::Debug>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::bstr::ByteStr as core::fmt::Debug>::fmt */

undefined4 __rustcall
<core::bstr::ByteStr_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  long lVar7;
  byte *pbVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined8 local_c8;
  undefined8 uStack_c0;
  byte *local_b8;
  long local_b0;
  undefined8 *******pppppppuStack_a8;
  long local_a0;
  undefined8 *******local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 local_7c;
  undefined8 *******local_70;
  undefined *local_68;
  
  uVar3 = *param_3;
  lVar4 = param_3[1];
  uVar9 = 1;
  pcVar13 = *(code **)(lVar4 + 0x18);
  uVar10 = (*pcVar13)(uVar3,&DAT_003960c5,1);
  if ((uVar10 & 1) == 0) {
    local_c8 = param_1;
    uStack_c0 = param_2;
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_b8,&local_c8);
    if (local_b8 != (byte *)0x0) {
      do {
        lVar7 = local_a0;
        pppppppuVar6 = pppppppuStack_a8;
        pbVar1 = local_b8 + local_b0;
        pbVar12 = local_b8;
        if (local_b0 != 0) {
          do {
            uVar2 = (uint)*pbVar12;
            pbVar8 = pbVar12 + 1;
            if ((char)*pbVar12 < '\0') {
              if (uVar2 < 0xe0) {
                uVar2 = pbVar12[1] & 0x3f | (uVar2 & 0x1f) << 6;
                pbVar8 = pbVar12 + 2;
                goto joined_r0x00aa912c;
              }
              uVar5 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
              if (0xef < uVar2) {
                uVar2 = pbVar12[3] & 0x3f | uVar5 << 6 | (uVar2 & 7) << 0x12;
                pbVar8 = pbVar12 + 4;
                goto joined_r0x00aa912c;
              }
              uVar2 = uVar5 | (uVar2 & 0x1f) << 0xc;
              pbVar12 = pbVar12 + 3;
              if (uVar2 != 0) goto LAB_00aa9154;
LAB_00aa90b8:
              uVar10 = (*pcVar13)(uVar3,&DAT_003960c6,2);
            }
            else {
joined_r0x00aa912c:
              pbVar12 = pbVar8;
              if (uVar2 == 0) goto LAB_00aa90b8;
LAB_00aa9154:
              uVar10 = (ulong)uVar2;
              if (uVar2 < 0x80) {
                uVar11 = (ulong)(byte)(&DAT_00390378)[uVar10] & 0x7f;
                if ((char)(&DAT_00390378)[uVar10] < '\0') {
                  if ((int)uVar11 == 0) {
                    uVar11 = (ulong)(byte)(&DAT_002a0ca0)[uVar10 & 0xf] << 0x18 |
                             (ulong)(byte)(&DAT_002a0ca0)[uVar2 >> 4] << 0x10 | 0x785c;
                    uVar10 = 0x40000000000;
                  }
                  else {
                    uVar11 = uVar11 << 8 | 0x5c;
                    uVar10 = 0x20000000000;
                  }
                }
                else {
                  uVar10 = 0x10000000000;
                }
                local_70 = (undefined8 *******)(uVar11 | uVar10);
                local_90 = (code *)PTR_fmt_00b01430;
              }
              else {
                FUN_00a95e3c(&local_70,uVar10,0x10101);
                local_90 = FUN_00aaf118;
              }
              local_98 = &local_70;
              uVar10 = core::fmt::write(uVar3,lVar4,&DAT_002ab692,&local_98);
            }
            if ((uVar10 & 1) != 0) {
              return 1;
            }
          } while (pbVar12 != pbVar1);
        }
        local_90 = (code *)((long)pppppppuVar6 + lVar7);
        local_88 = 0;
        local_98 = pppppppuVar6;
        local_70 = &local_98;
        local_7c = 0;
        local_68 = PTR_fmt_00b01428;
        uVar10 = core::fmt::write(uVar3,lVar4,&DAT_002ab692,&local_70);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                  (&local_b8,&local_c8);
      } while (local_b8 != (byte *)0x0);
    }
    uVar9 = (*pcVar13)(uVar3,&DAT_003960c5,1);
  }
  return uVar9;
}


// ===== 00aa9254  <core::char::EscapeUnicode_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::EscapeUnicode as core::fmt::Display>::fmt */

void __rustcall
<core::char::EscapeUnicode_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa9270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,param_1 + (ulong)*(byte *)(param_1 + 0xc),
             (ulong)*(byte *)(param_1 + 0xd) - (ulong)*(byte *)(param_1 + 0xc));
  return;
}


// ===== 00aa9274  <core::wtf8::Wtf8_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::Wtf8 as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::wtf8::Wtf8_as_core::fmt::Display>::fmt(long param_1,ulong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = *param_3;
  lVar3 = param_3[1];
  uVar5 = 0;
  pbVar2 = (byte *)(param_1 + param_2);
LAB_00aa929c:
  uVar6 = param_2;
  if (uVar5 == param_2) {
LAB_00aa93d4:
    if (uVar6 == 0) {
      uVar7 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_3,param_1,param_2 - uVar6);
      return uVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x00aa9400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(lVar3 + 0x18))(uVar7,param_1 + uVar6,param_2 - uVar6);
    return uVar7;
  }
  pbVar8 = (byte *)(param_1 + uVar5);
  uVar11 = uVar5;
  do {
    pbVar9 = pbVar8 + 1;
    bVar4 = *pbVar8;
    uVar6 = uVar5;
    if ((char)bVar4 < '\0') {
      if (bVar4 < 0xe0) {
        pbVar1 = pbVar8 + 2;
        lVar10 = 2;
        pbVar8 = pbVar9;
        if (pbVar9 != pbVar2) {
          pbVar8 = pbVar1;
        }
      }
      else if (bVar4 == 0xed) {
        if ((pbVar9 == pbVar2) || (pbVar8 + 2 == pbVar2)) goto LAB_00aa93d4;
        if (0x9f < pbVar8[1]) break;
        lVar10 = 3;
        pbVar8 = pbVar8 + 3;
      }
      else {
        if (pbVar9 != pbVar2) {
          pbVar9 = pbVar8 + 2;
        }
        if (pbVar9 != pbVar2) {
          pbVar9 = pbVar9 + 1;
        }
        pbVar8 = pbVar9;
        if (bVar4 < 0xf0) {
          lVar10 = 3;
        }
        else {
          lVar10 = 4;
          if (pbVar9 != pbVar2) {
            pbVar8 = pbVar9 + 1;
          }
        }
      }
    }
    else {
      lVar10 = 1;
      pbVar8 = pbVar9;
    }
    uVar11 = lVar10 + uVar11;
    if (pbVar8 == pbVar2) goto LAB_00aa93d4;
  } while( true );
  if ((uVar11 < uVar5) || (param_2 < uVar11)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar5,uVar11,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b000f0);
  }
  uVar5 = (**(code **)(lVar3 + 0x18))(uVar7,param_1 + uVar5,uVar11 - uVar5);
  if (((uVar5 & 1) != 0) || (uVar5 = (**(code **)(lVar3 + 0x20))(uVar7,0xfffd), (uVar5 & 1) != 0)) {
    return 1;
  }
  uVar5 = uVar11 + 3;
  if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar5,param_2,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff778);
  }
  goto LAB_00aa929c;
}


// ===== 00aa9458  <core::io::error::repr::Repr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::repr::Repr as core::fmt::Debug>::fmt */

ulong __rustcall
<core::io::error::repr::Repr_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  uint local_50;
  undefined1 local_4c [4];
  undefined1 *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined1 **local_30;
  
  uVar9 = *param_1;
  uVar7 = uVar9 & 3;
  if (uVar7 < 2) {
    if (uVar7 != 0) {
      uVar7 = <core::io::error::Custom_as_core::fmt::Debug>::fmt(uVar9 - 1,param_2);
      return uVar7;
    }
    bVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003960d1,5);
    uStack_38._0_2_ = (ushort)bVar1;
    local_40 = param_2;
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (&local_40,"kind",4,uVar9 + 0x10,&DAT_00b00128);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_003960ca,7,uVar9,&DAT_00b00168);
    bVar1 = uStack_38._1_1_ | (byte)uStack_38;
  }
  else {
    uVar2 = (uint)(uVar9 >> 0x20);
    if (uVar7 != 2) {
      uVar2 = uVar2 & 0xff;
      if (10 < uVar9 >> 0x22) {
        uVar2 = 0xff;
      }
      uVar7 = (**(code **)(param_2[1] + 0x18))(*param_2,"Kind",4);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      if (*(char *)((long)param_2 + 0x12) < '\0') {
        uVar7 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003905ab,2);
        uVar3 = 1;
        if ((uVar7 & 1) != 0) goto LAB_00aa9710;
        uStack_38 = param_2[1];
        local_40 = (undefined8 *)*param_2;
        local_48 = (undefined1 *)CONCAT71(local_48._1_7_,1);
        local_30 = &local_48;
        iVar4 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                          (&local_40,(&PTR_s_NotFound_00b004e0)[uVar2],
                           *(undefined8 *)(&DAT_003969d8 + (ulong)uVar2 * 8));
        if (iVar4 != 0) {
          return 1;
        }
        uVar7 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                          (&local_40,&DAT_003905a2,2);
      }
      else {
        uVar7 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003905aa,1);
        uVar3 = 1;
        if ((uVar7 & 1) != 0) goto LAB_00aa9710;
        uVar7 = (**(code **)(param_2[1] + 0x18))
                          (*param_2,(&PTR_s_NotFound_00b004e0)[uVar2],
                           *(undefined8 *)(&DAT_003969d8 + (ulong)uVar2 * 8));
      }
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      uVar5 = *param_2;
      puVar6 = &DAT_003905a9;
      pcVar8 = *(code **)(param_2[1] + 0x18);
      goto LAB_00aa96d0;
    }
    local_50 = uVar2;
    bVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003960c8,2);
    uStack_38._0_2_ = (ushort)bVar1;
    local_40 = param_2;
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_002bcfe4,4,&local_50,&DAT_00b00108);
    local_4c[0] = (**(code **)(*(long *)PTR_PTR_00b01168 + 8))(local_50);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (&local_40,"kind",4,local_4c,&DAT_00b00128);
    local_48 = (undefined1 *)&local_50;
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_003960ca,7,&local_48,&DAT_00b00148);
    bVar1 = uStack_38._1_1_ | (byte)uStack_38;
  }
  uVar3 = (uint)bVar1;
  if ((uStack_38._1_1_ != 1) || ((uStack_38 & 1) != 0)) {
LAB_00aa9710:
    return (ulong)(uVar3 & 1);
  }
  if (-1 < *(char *)((long)local_40 + 0x12)) {
    uVar2 = (**(code **)(local_40[1] + 0x18))(*local_40,&DAT_00390705,2);
    return (ulong)(uVar2 & 1);
  }
  uVar5 = *local_40;
  puVar6 = &DAT_00390597;
  pcVar8 = *(code **)(local_40[1] + 0x18);
LAB_00aa96d0:
  uVar2 = (*pcVar8)(uVar5,puVar6,1);
  return (ulong)(uVar2 & 1);
}


// ===== 00aa9788  <usize_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::Binary>::fmt */

void __rustcall <usize_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aa97f8  <f32_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::Debug>::fmt */

void __rustcall <f32_as_core::fmt::Debug>::fmt(float *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  fVar3 = *param_1;
  if ((uVar1 >> 0x1c & 1) != 0) {
    FUN_00a93290(param_2,uVar1 >> 0x15 & 1,*(undefined2 *)(param_2 + 0x16));
    return;
  }
  fVar4 = ABS(fVar3);
  bVar2 = true;
  if ((fVar4 < 0.0001) && (bVar2 = false, !NAN(fVar3))) {
    bVar2 = fVar3 == 0.0;
  }
  if ((fVar4 < 1e+16 != NAN(fVar4)) && (bVar2)) {
    FUN_00a93ad8(param_2,uVar1 >> 0x15 & 1,1);
    return;
  }
  FUN_00a94d20(param_2,uVar1 >> 0x15 & 1,0);
  return;
}


// ===== 00aa9870  <core::net::ip_addr::Ipv4Addr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv4Addr as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::net::ip_addr::Ipv4Addr_as_core::str::traits::FromStr>::from_str
          (undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long in_x10;
  undefined8 local_20;
  ulong local_18;
  
  if (0xf < param_2) {
    return in_x10 << 0x10 | 0x101;
  }
  local_20 = param_1;
  local_18 = param_2;
  uVar2 = FUN_00a956dc(&local_20);
  uVar1 = (uint)(local_18 == 0) & (uint)uVar2;
  if (uVar1 == 0) {
    uVar2 = 0x100;
  }
  return (uVar2 >> 0x10 & 0xffffff) << 0x10 | (uVar2 >> 8 & 0xff) << 8 | (ulong)(uVar1 ^ 1);
}


// ===== 00aa98e4  <core::net::ip_addr::IpAddr_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::IpAddr as core::fmt::Display>::fmt */

void __rustcall <core::net::ip_addr::IpAddr_as_core::fmt::Display>::fmt(char *param_1)

{
  if (*param_1 == '\x01') {
    <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt();
    return;
  }
  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 00aa98f8  <f64_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::str::traits::FromStr>::from_str */

void __rustcall
<f64_as_core::str::traits::FromStr>::from_str(undefined2 *param_1,ulong *param_2,long param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint3 uVar3;
  ulong uVar4;
  int iVar5;
  double dVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 local_370;
  byte local_368;
  undefined7 uStack_367;
  byte local_35f;
  uint local_68;
  byte local_64;
  
  if (param_3 == 0) {
    *param_1 = 1;
    return;
  }
  cVar1 = (char)*param_2;
  if ((cVar1 == '-') || (cVar1 == '+')) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      *param_1 = 0x101;
      return;
    }
    param_2 = (ulong *)((long)param_2 + 1);
  }
  core::num::imp::dec2flt::parse::parse_number(&local_370,param_2,param_3);
  uVar7 = local_370;
  if (local_35f == 2) {
    if (param_3 == 3) {
      uVar3 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar3 != 0x464e49) {
        if (uVar3 == 0x4e414e) {
          dVar6 = NAN;
          goto LAB_00aa9b2c;
        }
        goto LAB_00aa9a6c;
      }
    }
    else if ((param_3 != 8) || ((*param_2 & 0xdfdfdfdfdfdfdfdf) != 0x5954494e49464e49)) {
LAB_00aa9a6c:
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 1;
      return;
    }
    dVar6 = INFINITY;
    goto LAB_00aa9b2c;
  }
  uVar4 = CONCAT71(uStack_367,local_368);
  if (((local_370 - 0x26 < 0xffffffffffffffc4) || (0x20000000000000 < uVar4)) ||
     ((local_35f & 1) != 0)) {
    auVar13 = FUN_00a95180(local_370,uVar4);
    uVar9 = auVar13._0_8_;
    uVar10 = auVar13._8_8_ & 0xffffffff;
    iVar5 = auVar13._8_4_;
    if (((local_35f & 1) == 0) || (iVar5 < 0)) goto joined_r0x00aa9a84;
    auVar14 = FUN_00a95180(uVar7,uVar4 + 1);
    if (auVar14 != auVar13._0_12_) goto LAB_00aa9ae8;
  }
  else {
    if ((long)local_370 < 0x17) {
      if ((long)local_370 < 0) {
        dVar6 = (double)uVar4 / *(double *)(&DAT_00395f50 + local_370 * -8);
      }
      else {
        dVar6 = *(double *)(&DAT_00395f50 + local_370 * 8) * (double)uVar4;
      }
      goto LAB_00aa9b2c;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar4;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(core::unicode::unicode_data::lowercase::BITSET_CHUNKS_MAP +
                             local_370 * 8 + 0x4c);
    if ((SUB168(auVar13 * auVar2,8) == 0) &&
       (uVar7 = uVar4 * *(ulong *)(core::unicode::unicode_data::lowercase::BITSET_CHUNKS_MAP +
                                  local_370 * 8 + 0x4c), uVar7 < 0x20000000000001)) {
      dVar6 = (double)uVar7 * DAT_002a1168;
      goto LAB_00aa9b2c;
    }
    auVar13 = FUN_00a95180(local_370,uVar4);
    uVar9 = auVar13._0_8_;
    uVar10 = auVar13._8_8_ & 0xffffffff;
    iVar5 = auVar13._8_4_;
joined_r0x00aa9a84:
    if (iVar5 < 0) {
LAB_00aa9ae8:
      core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(&local_370,param_2,param_3);
      uVar9 = 0;
      uVar10 = 0;
      if ((local_370 != 0) && ((int)(local_68 + 0x144) < 0 == SCARRY4(local_68,0x144))) {
        if ((int)local_68 < 0x136) {
          iVar5 = 0;
          while (uVar7 = (ulong)local_68, 0 < (int)local_68) {
            if (local_68 < 0x13) {
              uVar8 = (uint)(byte)""[uVar7];
            }
            else {
              uVar8 = 0x3c;
            }
            <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
            ::right_shift(&local_370,uVar8);
            if (local_68 == 0xfffff800 || (int)(local_68 + 0x800) < 0 != SCARRY4(local_68,0x800)) {
              uVar10 = 0;
              uVar9 = 0;
              goto LAB_00aa9b24;
            }
            iVar5 = iVar5 + uVar8;
          }
          do {
            if ((int)uVar7 == 0) {
              if (4 < local_368) break;
              uVar8 = 1;
              if (local_368 < 2) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = -(int)uVar7;
              if (uVar8 < 0x13) {
                uVar8 = (uint)(byte)""[uVar8];
              }
              else {
                uVar8 = 0x3c;
              }
            }
            <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
            ::left_shift(&local_370,uVar8);
            uVar7 = (ulong)local_68;
            if (0x7ff < (int)local_68) goto LAB_00aa9b1c;
            iVar5 = iVar5 - uVar8;
          } while ((int)local_68 < 1);
          uVar8 = iVar5 - 1;
          if (uVar8 == 0xfffffc01 || iVar5 + 0x3fe < 0 != SCARRY4(uVar8,0x3ff)) {
            do {
              uVar11 = -uVar8 - 0x3fe;
              if (0x3b < uVar11) {
                uVar11 = 0x3c;
              }
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::right_shift(&local_370,uVar11);
              uVar8 = uVar11 + uVar8;
            } while (uVar8 < 0xfffffc02);
          }
          if ((int)(uVar8 + 0x3ff) < 0x7ff) {
            <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
            ::left_shift(&local_370,0x35);
            if ((local_370 == 0) || (uVar7 = (ulong)local_68, (int)local_68 < 0)) {
              uVar9 = 0;
              uVar10 = (ulong)(uVar8 + 0x3fe);
              goto LAB_00aa9b24;
            }
            if (local_68 < 0x13) {
              uVar4 = 0;
              if (local_68 != 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar4 * 10;
                  if (uVar10 < local_370) {
                    uVar4 = uVar4 + (&local_368)[uVar10];
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar7 != uVar10);
              }
              if (uVar7 < local_370) {
                if ((uVar7 + 1 == local_370) && ((&local_368)[uVar7] == 5)) {
                  if (((local_64 & 1) != 0) ||
                     ((local_68 != 0 && ((*(byte *)((long)&local_370 + uVar7 + 7) & 1) != 0)))) {
LAB_00aa9d1c:
                    uVar4 = uVar4 + 1;
                  }
                }
                else if (4 < (&local_368)[uVar7]) goto LAB_00aa9d1c;
              }
              if (uVar4 >> 0x35 != 0) goto LAB_00aa9d28;
            }
            else {
LAB_00aa9d28:
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::right_shift(&local_370,1);
              uVar4 = <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                      ::round(&local_370);
              if (0x7fe < (int)(uVar8 + 0x400)) goto LAB_00aa9b1c;
              uVar8 = uVar8 + 1;
            }
            uVar9 = uVar4 & 0xfffffffffffff;
            iVar5 = 0x3fe;
            if (uVar4 >> 0x34 != 0) {
              iVar5 = 0x3ff;
            }
            uVar10 = (ulong)(iVar5 + uVar8);
            goto LAB_00aa9b24;
          }
        }
LAB_00aa9b1c:
        uVar9 = 0;
        uVar10 = 0x7ff;
      }
    }
  }
LAB_00aa9b24:
  dVar6 = (double)(uVar9 | uVar10 << 0x34);
LAB_00aa9b2c:
  *(undefined1 *)param_1 = 0;
  dVar12 = -dVar6;
  if (cVar1 != '-') {
    dVar12 = dVar6;
  }
  *(double *)(param_1 + 4) = dVar12;
  return;
}


// ===== 00aa9d68  <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
          (long *param_1,long *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  
  uVar5 = param_2[1];
  if (uVar5 == 0) {
    *param_1 = 0;
    return;
  }
  lVar4 = *param_2;
  uVar6 = 0;
  do {
    bVar3 = *(byte *)(lVar4 + uVar6);
    uVar7 = uVar6 + 1;
    if ((char)bVar3 < '\0') {
      cVar2 = (&DAT_00390c72)[bVar3];
      uVar8 = (uint)bVar3;
      if (cVar2 == '\x04') {
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_002a8138;
        }
        bVar3 = *pbVar1;
        if (uVar8 == 0xf0) {
          if (0x2f < bVar3 - 0x90) break;
        }
        else if (uVar8 == 0xf4) {
          iVar9 = (int)(char)bVar3;
          if (iVar9 != -0x71 && iVar9 + 0x71 < 0 == SCARRY4(iVar9,0x71)) break;
        }
        else if ((2 < uVar8 - 0xf1) || ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)))
        break;
        uVar7 = uVar6 + 2;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_002a8138;
        }
        iVar9 = (int)(char)*pbVar1;
        if (iVar9 != -0x41 && iVar9 + 0x41 < 0 == SCARRY4(iVar9,0x41)) break;
        uVar7 = uVar6 + 3;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_002a8138;
        }
        iVar9 = (int)(char)*pbVar1;
        if (iVar9 != -0x41 && iVar9 + 0x41 < 0 == SCARRY4(iVar9,0x41)) break;
        uVar7 = uVar6 + 4;
      }
      else if (cVar2 == '\x03') {
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_002a8138;
        }
        if (uVar8 == 0xe0) {
          if ((*pbVar1 & 0xe0) != 0xa0) break;
        }
        else {
          iVar9 = (int)(char)*pbVar1;
          if (uVar8 == 0xed) {
            if (iVar9 != -0x61 && iVar9 + 0x61 < 0 == SCARRY4(iVar9,0x61)) break;
          }
          else if (((0xb < uVar8 - 0xe1) && ((uVar8 & 0xfe) != 0xee)) ||
                  (iVar9 + 0x40 < 0 == SCARRY4(iVar9,0x40))) break;
        }
        uVar7 = uVar6 + 2;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_002a8138;
        }
        if ((char)*pbVar1 + 0x40 < 0 == SCARRY4((int)(char)*pbVar1,0x40)) break;
        uVar7 = uVar6 + 3;
      }
      else {
        if (cVar2 != '\x02') break;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_002a8138;
        }
        if ((char)*pbVar1 + 0x40 < 0 == SCARRY4((int)(char)*pbVar1,0x40)) break;
        uVar7 = uVar6 + 2;
      }
    }
    uVar6 = uVar7;
    uVar7 = uVar6;
  } while (uVar6 < uVar5);
  *param_1 = lVar4;
  param_1[1] = uVar6;
  *param_2 = lVar4 + uVar7;
  param_2[1] = uVar5 - uVar7;
  param_1[2] = lVar4 + uVar6;
  param_1[3] = uVar7 - uVar6;
  return;
}


// ===== 00aa9f28  <core::slice::ascii::EscapeAscii_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::ascii::EscapeAscii as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::slice::ascii::EscapeAscii_as_core::fmt::Display>::fmt
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong local_68;
  
  if (*(int *)(param_1 + 2) == 1) {
    local_68 = (ulong)*(uint6 *)((long)param_1 + 0x14);
    iVar5 = *(int *)((long)param_1 + 0x1c);
    pbVar11 = (byte *)*param_1;
    lVar3 = param_1[1];
  }
  else {
    local_68 = 0;
    iVar5 = *(int *)((long)param_1 + 0x1c);
    pbVar11 = (byte *)*param_1;
    lVar3 = param_1[1];
  }
  if (iVar5 == 1) {
    uVar12 = (ulong)*(uint6 *)(param_1 + 4);
  }
  else {
    uVar12 = 0;
  }
  uVar10 = local_68 >> 0x20 & 0xff;
  uVar2 = *param_2;
  lVar4 = param_2[1];
  if (pbVar11 == (byte *)0x0) {
    lVar3 = 1;
    pbVar11 = &DAT_00000001;
  }
  uVar9 = (uint)uVar10;
  uVar7 = (uint)(local_68 >> 0x20);
  uVar13 = lVar3 - (long)pbVar11;
  if (uVar9 <= uVar7 >> 8) {
    uVar9 = uVar7 >> 8;
  }
  while (uVar9 != uVar10) {
    puVar1 = (undefined1 *)((long)&local_68 + uVar10);
    uVar10 = uVar10 + 1;
    uVar8 = (**(code **)(lVar4 + 0x20))(uVar2,*puVar1);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
  }
  if (uVar13 != 0) {
    pcVar14 = *(code **)(lVar4 + 0x18);
    do {
      uVar10 = 0;
      do {
        uVar8 = uVar10;
        if ((pbVar11[uVar10] - 0x7f < 0xffffffa1) ||
           (uVar9 = pbVar11[uVar10] - 0x22,
           uVar9 < 0x3b && (1L << ((ulong)uVar9 & 0x3f) & 0x400000000000021U) != 0)) break;
        uVar10 = uVar10 + 1;
        uVar8 = uVar13;
      } while (uVar13 != uVar10);
      uVar10 = (*pcVar14)(uVar2,pbVar11,uVar8);
      if ((uVar10 & 1) != 0) {
        return 1;
      }
      if (uVar13 == uVar8) break;
      bVar6 = pbVar11[uVar8];
      local_68 = (ulong)(byte)(&DAT_00390378)[bVar6] & 0x7f;
      if ((char)(&DAT_00390378)[bVar6] < '\0') {
        if ((int)local_68 == 0) {
          local_68 = (ulong)(byte)(&DAT_002a0ca0)[(ulong)bVar6 & 0xf] << 0x18 |
                     (ulong)(byte)(&DAT_002a0ca0)[bVar6 >> 4] << 0x10 | 0x785c;
          uVar10 = 0x40000000000;
        }
        else {
          local_68 = local_68 << 8 | 0x5c;
          uVar10 = 0x20000000000;
        }
      }
      else {
        uVar10 = 0x10000000000;
      }
      local_68 = local_68 | uVar10;
      uVar10 = (*pcVar14)(uVar2,&local_68,uVar10 >> 0x28);
      if ((uVar10 & 1) != 0) {
        return 1;
      }
      pbVar11 = pbVar11 + uVar8 + 1;
      uVar13 = uVar13 + ~uVar8;
    } while (uVar13 != 0);
  }
  uVar10 = uVar12 >> 0x20 & 0xff;
  local_68 = uVar12;
  uVar9 = (uint)uVar10;
  uVar7 = (uint)(uVar12 >> 0x20);
  if (uVar9 <= uVar7 >> 8) {
    uVar9 = uVar7 >> 8;
  }
  do {
    if (uVar9 == uVar10) {
      return 0;
    }
    puVar1 = (undefined1 *)((long)&local_68 + uVar10);
    uVar10 = uVar10 + 1;
    uVar12 = (**(code **)(lVar4 + 0x20))(uVar2,*puVar1);
  } while ((uVar12 & 1) == 0);
  return 1;
}


// ===== 00aaa164  <core::num::imp::bignum::tests::Big8x3_as_core::cmp::Ord>::cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::Big8x3 as core::cmp::Ord>::cmp */

uint __rustcall
<core::num::imp::bignum::tests::Big8x3_as_core::cmp::Ord>::cmp(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar2 = *param_2;
  if (*param_2 <= *param_1) {
    uVar2 = *param_1;
  }
  if (uVar2 < 4) {
    if (uVar2 == 0) {
      return 0;
    }
    lVar1 = uVar2 + 7;
    bVar4 = *(byte *)((long)param_1 + lVar1);
    bVar5 = *(byte *)((long)param_2 + lVar1);
    if (bVar4 == bVar5) {
      if (lVar1 == 8) {
        return 0;
      }
      lVar1 = uVar2 + 6;
      bVar4 = *(byte *)((long)param_1 + lVar1);
      bVar5 = *(byte *)((long)param_2 + lVar1);
      if (bVar4 == bVar5) {
        if (lVar1 == 8) {
          return 0;
        }
        lVar1 = uVar2 + 5;
        bVar4 = *(byte *)((long)param_1 + lVar1);
        bVar5 = *(byte *)((long)param_2 + lVar1);
        if (bVar4 == bVar5) {
          if (lVar1 == 8) {
            return 0;
          }
          bVar4 = *(byte *)((long)param_1 + (uVar2 | 4));
          bVar5 = *(byte *)((long)param_2 + (uVar2 | 4));
        }
      }
    }
    uVar3 = (uint)(bVar5 < bVar4);
    if (bVar4 < bVar5) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar2,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00aaa218  <core::num::niche_types::I32NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::I32NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::I32NotAllOnes_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint local_1c [2];
  undefined1 local_11;
  
  local_1c[0] = *param_1;
  uVar1 = (ulong)local_1c[0];
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <i32_as_core::fmt::Display>::fmt(local_1c);
      return;
    }
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  else {
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 00aaa2e4  <core::num::niche_types::U64NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::U64NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::U64NotAllOnes_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_00aadf44(*param_1);
  return;
}


// ===== 00aaa2ec  <core::num::niche_types::I64NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::I64NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::I64NotAllOnes_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_00aad568(*param_1);
  return;
}


// ===== 00aaa2f4  <core::num::niche_types::CodePointInner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::CodePointInner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::CodePointInner_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar4 = (ulong)uVar1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      if (uVar1 < 1000) {
        lVar5 = 10;
        uVar7 = uVar1;
      }
      else {
        uVar7 = (uint)((ulong)uVar1 * 0x1a36e3 >> 0x22);
        uVar3 = uVar1 + uVar7 * -10000;
        uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
        local_14 = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar2 * 2);
        local_12 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
        lVar5 = 6;
      }
      if (9 < uVar7) {
        uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
        *(undefined2 *)((long)&uStack_1c + lVar5) =
             *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
        lVar5 = lVar5 + -2;
        uVar7 = uVar2;
      }
      if ((uVar1 == 0) || (lVar6 = lVar5, uVar7 != 0)) {
        lVar6 = lVar5 + -1;
        *(undefined *)((long)&uStack_1c + lVar5 + 1) = (&DAT_00390ba8)[(uVar7 & 0xf) << 1];
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,auStack_1a + lVar6,10 - lVar6);
      return;
    }
    lVar5 = 0;
    do {
      uVar8 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      lVar6 = lVar5 + -1;
      *(undefined *)((long)&local_14 + lVar5 + 1) = (&DAT_0029f430)[uVar8];
      lVar5 = lVar6;
    } while ((int)uVar4 != 0);
  }
  else {
    lVar5 = 0;
    do {
      uVar8 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      lVar6 = lVar5 + -1;
      *(undefined *)((long)&local_14 + lVar5 + 1) = (&DAT_002a0ca0)[uVar8];
      lVar5 = lVar6;
    } while ((int)uVar4 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,(long)&local_12 + lVar6,-lVar6);
  return;
}


// ===== 00aaa49c  <core::bstr::ByteStr_as_core::fmt::Display>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::bstr::ByteStr as core::fmt::Display>::fmt */

bool __rustcall
<core::bstr::ByteStr_as_core::fmt::Display>::fmt
          (undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  uint3 uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  code *pcVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 local_a0;
  byte *pbStack_98;
  byte *local_90;
  ulong local_88;
  long local_78;
  
  uVar3 = *(uint *)(param_3 + 2);
  if ((uVar3 >> 0x1b & 1) == 0) {
LAB_00aaa680:
    if ((uVar3 >> 0x1c & 1) == 0) {
      uVar23 = *param_3;
      lVar2 = param_3[1];
      local_a0 = param_1;
      pbStack_98 = param_2;
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_90,&local_a0);
      if (local_90 != (byte *)0x0) {
        pcVar17 = *(code **)(lVar2 + 0x18);
        do {
          lVar2 = local_78;
          uVar19 = (*pcVar17)(uVar23,local_90,local_88);
          if ((uVar19 & 1) != 0) {
            return true;
          }
          if ((lVar2 != 0) && (uVar19 = (*pcVar17)(uVar23,&DAT_00395e88,3), (uVar19 & 1) != 0)) {
            return true;
          }
          <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                    (&local_90,&local_a0);
        } while (local_90 != (byte *)0x0);
      }
      return false;
    }
    uVar19 = 0;
  }
  else {
    uVar4 = *(ushort *)((long)param_3 + 0x14);
    uVar19 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_00aaa680;
    if ((uVar3 >> 0x1c & 1) == 0) {
      local_a0 = param_1;
      pbStack_98 = param_2;
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_90,&local_a0);
      if (local_90 == (byte *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar2 = local_78;
          if (local_88 < 0x20) {
            if (local_88 == 0) {
              lVar11 = 0;
            }
            else {
              if (local_88 < 8) {
                uVar13 = 0;
                lVar11 = 0;
              }
              else {
                uVar13 = local_88 & 0x18;
                uVar23 = NEON_cmgt(*(undefined8 *)local_90,0xbfbfbfbfbfbfbfbf,1);
                uVar6 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
                uVar24 = (ulong)((byte)((ulong)uVar23 >> 0x30) & 1);
                uVar25 = (ulong)((byte)((ulong)uVar23 >> 0x38) & 1);
                uVar28 = (ulong)((byte)((ulong)uVar23 >> 0x20) & 1);
                uVar29 = (ulong)((byte)((ulong)uVar23 >> 0x28) & 1);
                uVar26 = (ulong)((byte)((ulong)uVar23 >> 0x10) & 1);
                uVar27 = (ulong)((byte)((ulong)uVar23 >> 0x18) & 1);
                uVar30 = (ulong)((byte)uVar6 & 1);
                uVar31 = (ulong)((byte)(uVar6 >> 0x10) & 1);
                if (uVar13 != 8) {
                  uVar23 = NEON_cmgt(*(undefined8 *)(local_90 + 8),0xbfbfbfbfbfbfbfbf,1);
                  uVar6 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
                  uVar24 = uVar24 + ((byte)((ulong)uVar23 >> 0x30) & 1);
                  uVar25 = uVar25 + ((byte)((ulong)uVar23 >> 0x38) & 1);
                  uVar26 = uVar26 + ((byte)((ulong)uVar23 >> 0x10) & 1);
                  uVar27 = uVar27 + ((byte)((ulong)uVar23 >> 0x18) & 1);
                  uVar30 = uVar30 + ((byte)uVar6 & 1);
                  uVar31 = uVar31 + ((byte)(uVar6 >> 0x10) & 1);
                  uVar28 = uVar28 + ((byte)((ulong)uVar23 >> 0x20) & 1);
                  uVar29 = uVar29 + ((byte)((ulong)uVar23 >> 0x28) & 1);
                  if (uVar13 != 0x10) {
                    uVar23 = NEON_cmgt(*(undefined8 *)(local_90 + 0x10),0xbfbfbfbfbfbfbfbf,1);
                    uVar6 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
                    uVar24 = uVar24 + ((byte)((ulong)uVar23 >> 0x30) & 1);
                    uVar25 = uVar25 + ((byte)((ulong)uVar23 >> 0x38) & 1);
                    uVar26 = uVar26 + ((byte)((ulong)uVar23 >> 0x10) & 1);
                    uVar27 = uVar27 + ((byte)((ulong)uVar23 >> 0x18) & 1);
                    uVar30 = uVar30 + ((byte)uVar6 & 1);
                    uVar31 = uVar31 + ((byte)(uVar6 >> 0x10) & 1);
                    uVar28 = uVar28 + ((byte)((ulong)uVar23 >> 0x20) & 1);
                    uVar29 = uVar29 + ((byte)((ulong)uVar23 >> 0x28) & 1);
                  }
                }
                lVar11 = uVar30 + uVar28 + uVar26 + uVar24 + uVar31 + uVar29 + uVar27 + uVar25;
                if (local_88 == uVar13) goto LAB_00aaa518;
              }
              lVar14 = local_88 - uVar13;
              pbVar18 = local_90 + uVar13;
              do {
                iVar10 = (int)(char)*pbVar18;
                if (iVar10 != -0x41 && iVar10 + 0x41 < 0 == SCARRY4(iVar10,0x41)) {
                  lVar11 = lVar11 + 1;
                }
                lVar14 = lVar14 + -1;
                pbVar18 = pbVar18 + 1;
              } while (lVar14 != 0);
            }
          }
          else {
            lVar11 = core::str::count::do_count_chars();
          }
LAB_00aaa518:
          if (lVar2 != 0) {
            uVar21 = uVar21 + 1;
          }
          uVar21 = uVar21 + lVar11;
          <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                    (&local_90,&local_a0);
        } while (local_90 != (byte *)0x0);
      }
      uVar8 = 0;
      if (uVar21 <= uVar19) {
        uVar8 = (uint)uVar4 - (int)uVar21;
      }
      goto joined_r0x00aaa86c;
    }
  }
  uVar4 = *(ushort *)((long)param_3 + 0x16);
  uVar21 = (ulong)uVar4;
  iVar10 = (int)uVar19;
  if (uVar21 == 0) {
    param_2 = (byte *)0x0;
    param_1 = 1;
    uVar8 = iVar10 - (uint)uVar4;
  }
  else {
    local_a0 = param_1;
    pbStack_98 = param_2;
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_90,&local_a0);
    if (local_90 == (byte *)0x0) {
      uVar13 = 0;
    }
    else {
      pbVar18 = (byte *)0x0;
      uVar13 = 0;
      uVar24 = uVar21;
LAB_00aaa728:
      do {
        uVar25 = 0;
        pbVar15 = (byte *)0x0;
        pbVar12 = local_90;
        while (pbVar12 != local_90 + local_88) {
          pbVar16 = pbVar12 + 1;
          bVar5 = *pbVar12;
          if ((char)bVar5 < '\0') {
            if (bVar5 < 0xe0) {
              pbVar16 = pbVar12 + 2;
            }
            else {
              lVar2 = 3;
              if (0xef < bVar5) {
                lVar2 = 4;
              }
              pbVar16 = pbVar12 + lVar2;
            }
          }
          uVar25 = uVar25 + 1;
          pbVar15 = pbVar16 + ((long)pbVar15 - (long)pbVar12);
          pbVar12 = pbVar16;
          if (uVar24 == uVar25) goto LAB_00aaa820;
        }
        if (uVar24 - uVar25 == 0) {
LAB_00aaa820:
          pbVar15 = pbVar15 + (long)pbVar18;
          if (param_2 < pbVar15) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,pbVar15,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b001a0);
          }
          param_2 = pbVar15;
          uVar8 = 0;
          if (uVar21 <= uVar19) {
            uVar8 = iVar10 - (uint)uVar4;
          }
          goto joined_r0x00aaa86c;
        }
        pbVar18 = pbVar18 + local_88;
        uVar13 = uVar13 + uVar25;
        if (local_78 == 0) {
          <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                    (&local_90,&local_a0);
          uVar24 = uVar24 - uVar25;
          if (local_90 == (byte *)0x0) break;
          goto LAB_00aaa728;
        }
        pbVar18 = pbVar18 + local_78;
        if (uVar24 - 1 == uVar25) {
          if (param_2 < pbVar18) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,pbVar18,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00188);
          }
          param_2 = pbVar18;
          uVar8 = 0;
          if (uVar21 <= uVar19) {
            uVar8 = iVar10 - (uint)uVar4;
          }
          goto joined_r0x00aaa86c;
        }
        uVar13 = uVar13 + 1;
        <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                  (&local_90,&local_a0);
        uVar24 = ~uVar25 + uVar24;
      } while (local_90 != (byte *)0x0);
    }
    uVar8 = 0;
    if (uVar13 <= uVar19) {
      uVar8 = iVar10 - (int)uVar13;
    }
  }
joined_r0x00aaa86c:
  uVar7 = uVar3 >> 0x1d & 3;
  if ((uint)uVar7 < 2) {
    uVar20 = 0;
    if (uVar7 != 0) {
      uVar20 = uVar8;
    }
  }
  else {
    uVar20 = 0;
    if (uVar7 == 2) {
      uVar20 = uVar8 >> 1 & 0x7fff;
    }
  }
  uVar23 = *param_3;
  lVar2 = param_3[1];
  uVar22 = 0;
  while ((uVar22 & 0xffff) < (uVar20 & 0xffff)) {
    uVar22 = uVar22 + 1;
    uVar19 = (**(code **)(lVar2 + 0x20))(uVar23,uVar3 & 0x1fffff);
    if ((uVar19 & 1) != 0) {
      return true;
    }
  }
  local_a0 = param_1;
  pbStack_98 = param_2;
  <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
            (&local_90,&local_a0);
  if (local_90 != (byte *)0x0) {
    pcVar17 = *(code **)(lVar2 + 0x18);
    do {
      lVar11 = local_78;
      uVar19 = (*pcVar17)(uVar23,local_90,local_88);
      if (((uVar19 & 1) != 0) ||
         ((lVar11 != 0 && (uVar19 = (*pcVar17)(uVar23,&DAT_00395e88,3), (uVar19 & 1) != 0)))) {
        return true;
      }
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_90,&local_a0);
    } while (local_90 != (byte *)0x0);
  }
  uVar22 = 0;
  do {
    bVar9 = (uVar8 - uVar20 & 0xffff) <= (uVar22 & 0xffff);
    bVar1 = !bVar9;
    if (bVar9) {
      return bVar1;
    }
    uVar22 = uVar22 + 1;
    iVar10 = (**(code **)(lVar2 + 0x20))(uVar23,uVar3 & 0x1fffff);
  } while (iVar10 == 0);
  return bVar1;
}


// ===== 00aaa9e4  <core::ascii::EscapeDefault_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::EscapeDefault as core::fmt::Display>::fmt */

void __rustcall
<core::ascii::EscapeDefault_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aaaa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,param_1 + (ulong)*(byte *)(param_1 + 4),
             (ulong)*(byte *)(param_1 + 5) - (ulong)*(byte *)(param_1 + 4));
  return;
}


// ===== 00aaaa04  <core::io::util::Repeat_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::util::Repeat as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::io::util::Repeat_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_003960da,6);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00aaaa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00390587,7);
  return uVar2;
}


// ===== 00aaaa64  <core::io::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::fmt::Display>::fmt */

void __rustcall
<core::io::error::Error_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint local_3c;
  uint *local_38;
  undefined4 **ppuStack_30;
  code *local_28;
  uint *local_20;
  undefined *puStack_18;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = (ulong)param_1 & 3;
  if (1 < uVar1) {
    local_3c = (uint)((ulong)param_1 >> 0x20);
    if (uVar1 == 2) {
      local_38 = &local_3c;
      ppuStack_30 = &local_38;
      local_28 = FUN_00aac300;
      puStack_18 = PTR_fmt_00b00d18;
      local_20 = local_38;
      core::fmt::write(*param_2,param_2[1],&DAT_002acf4a,&ppuStack_30);
      return;
    }
    local_3c = local_3c & 0xff;
    if (10 < (ulong)param_1 >> 0x22) {
      local_3c = 0xff;
    }
                    /* WARNING: Could not recover jumptable at 0x00aaab2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))
              (*param_2,(&PTR_DAT_00b00380)[local_3c],
               *(undefined8 *)(&DAT_00396878 + (ulong)local_3c * 8));
    return;
  }
  if (uVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*param_1,param_1[1]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aaaaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)((long)param_1 + 7) + 0x20))(*(undefined8 *)((long)param_1 + -1));
  return;
}


// ===== 00aaab30  <isize_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as core::fmt::Binary>::fmt */

void __rustcall <isize_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaaba0  <f32_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::Display>::fmt */

void __rustcall <f32_as_core::fmt::Display>::fmt(undefined4 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a93ad8(param_2,uVar1,0);
    return;
  }
  FUN_00a93290(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16));
  return;
}


// ===== 00aaabcc  <core::mem::type_info::FieldId_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::type_info::FieldId as core::fmt::Debug>::fmt */

void __rustcall
<core::mem::type_info::FieldId_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = *param_1;
  local_28 = param_1[1];
  puStack_18 = PTR_fmt_00b01098;
  core::fmt::write(*param_2,param_2[1],&DAT_003960e0,&local_20);
  return;
}


// ===== 00aaac14  <core::net::ip_addr::IpAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::IpAddr as core::fmt::Debug>::fmt */

void __rustcall <core::net::ip_addr::IpAddr_as_core::fmt::Debug>::fmt(char *param_1)

{
  if (*param_1 == '\x01') {
    <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt();
    return;
  }
  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 00aaac28  <core::panic::location::Location_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panic::location::Location as core::fmt::Debug>::fmt */

byte __rustcall
<core::panic::location::Location_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_40;
  byte local_38;
  byte local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_002a11c0,8);
  local_30 = *param_1;
  uStack_28 = param_1[1];
  local_37 = 0;
  local_40 = param_2;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_002bd240,4,&local_30,&DAT_00b00168);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_002bd1a0,4,param_1 + 2,&DAT_00b001b8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_003960f3,6,(long)param_1 + 0x14,&DAT_00b001b8);
  bVar1 = local_37 | local_38;
  if ((local_37 == 1) && ((local_38 & 1) == 0)) {
    if (*(char *)((long)local_40 + 0x12) < '\0') {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00aaad34  <core::slice::ascii::EscapeAscii_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::ascii::EscapeAscii as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::slice::ascii::EscapeAscii_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_003960f9,0xb);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00aaad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00390587,7);
  return uVar2;
}


// ===== 00aaad94  <u16_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::Display>::fmt */

void __rustcall <u16_as_core::fmt::Display>::fmt(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_16 [2];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  if (uVar1 < 1000) {
    if (uVar1 < 10) {
      lVar4 = 5;
      uVar5 = (uint)uVar1;
      goto joined_r0x00aaae44;
    }
    uVar5 = (uVar1 >> 2) / 0x19;
    lVar4 = 3;
    local_12 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)((uint)uVar1 + uVar5 * -100) & 0xffff) * 2);
    if (uVar1 != 0) goto LAB_00aaae48;
  }
  else {
    uVar5 = (uVar1 >> 4) / 0x271;
    uVar3 = (uint)uVar1 + uVar5 * -10000;
    uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
    local_14 = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar2 * 2);
    lVar4 = 1;
    local_12 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
joined_r0x00aaae44:
    if (uVar1 != 0) {
LAB_00aaae48:
      if (uVar5 == 0) goto LAB_00aaae64;
    }
  }
  auStack_16[lVar4] = (&DAT_00390ba8)[(uVar5 & 0xf) << 1];
  lVar4 = lVar4 + -1;
LAB_00aaae64:
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_16 + lVar4 + 1,5 - lVar4);
  return;
}


// ===== 00aaae94  <i8_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::pat::RangePattern>::sub_one */

void __rustcall <i8_as_core::pat::RangePattern>::sub_one(char param_1,undefined8 param_2)

{
  if ((int)(char)(param_1 + -1) == param_1 + -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aaaec8  <core::ascii::EscapeDefault_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::EscapeDefault as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::ascii::EscapeDefault_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00396130,0xd);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00aaaf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00390587,7);
  return uVar2;
}


// ===== 00aaaf28  <core::error::Request_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::error::Request as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::error::Request_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_3;
  UNRECOVERED_JUMPTABLE = *(code **)(param_3[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_0039613d,7);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00aaaf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00390587,7);
  return uVar2;
}


// ===== 00aaaf88  <core::io::error::Error_as_core::error::Error>::cause =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::error::Error>::cause */

undefined8 __rustcall <core::io::error::Error_as_core::error::Error>::cause(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 3) - 2 < 2 || (uVar2 & 3) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)(uVar2 + 7) + 0x48))(*(undefined8 *)(uVar2 - 1));
  return uVar1;
}


// ===== 00aaafc8  <core::io::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::error::Error>::source */

undefined8 __rustcall <core::io::error::Error_as_core::error::Error>::source(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 3) - 2 < 2 || (uVar2 & 3) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)(uVar2 + 7) + 0x30))(*(undefined8 *)(uVar2 - 1));
  return uVar1;
}


// ===== 00aab008  <u64_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as core::fmt::Octal>::fmt */

void __rustcall <u64_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aab078  <f32_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::LowerExp>::fmt */

void __rustcall <f32_as_core::fmt::LowerExp>::fmt(undefined4 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a94d20(param_2,uVar1,0);
    return;
  }
  FUN_00a94394(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),0);
  return;
}


// ===== 00aab0a8  <core::net::socket_addr::SocketAddr_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt */

void __rustcall <core::net::socket_addr::SocketAddr_as_core::fmt::Display>::fmt(short *param_1)

{
  if (*param_1 == 1) {
    <core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt(param_1 + 2);
    return;
  }
  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 00aab0c4  <core::net::ip_addr::Ipv6Addr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv6Addr as core::str::traits::FromStr>::from_str */

void __rustcall
<core::net::ip_addr::Ipv6Addr_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_48;
  long local_40;
  byte local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  
  local_48 = param_2;
  local_40 = param_3;
  FUN_00a95a50(&local_34,&local_48);
  if ((local_40 == 0) && ((local_34 & 1) != 0)) {
    *(undefined8 *)(param_1 + 9) = uStack_2b;
    *(undefined8 *)(param_1 + 1) = local_33;
    *param_1 = 0;
    return;
  }
  param_1[1] = 2;
  *param_1 = 1;
  return;
}


// ===== 00aab134  <core::num::error::ParseIntError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::error::ParseIntError as core::fmt::Display>::fmt */

void __rustcall
<core::num::error::ParseIntError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,&DAT_00396818 + *(int *)(&DAT_00396818 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_003967e8 + (ulong)*param_1 * 8));
  return;
}


// ===== 00aab15c  <core::str::lossy::Utf8Chunks_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::lossy::Utf8Chunks as core::fmt::Debug>::fmt */

byte __rustcall
<core::str::lossy::Utf8Chunks_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_40;
  byte local_38;
  byte local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00396217,10);
  local_30 = *param_1;
  uStack_28 = param_1[1];
  local_37 = 0;
  local_40 = param_2;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_00396221,6,&local_30,&DAT_00b001d8);
  bVar1 = local_37 | local_38;
  if ((local_37 == 1) && ((local_38 & 1) == 0)) {
    if (*(char *)((long)local_40 + 0x12) < '\0') {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00aab228  <i16_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::Display>::fmt */

void __rustcall <i16_as_core::fmt::Display>::fmt(short *param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_16 [2];
  undefined2 local_14;
  undefined2 local_12;
  
  sVar1 = *param_1;
  uVar5 = (uint)sVar1;
  uVar4 = -(int)sVar1;
  if (-1 < sVar1) {
    uVar4 = uVar5;
  }
  if (uVar4 < 1000) {
    if ((uVar4 & 0xffff) < 10) {
      lVar6 = 5;
      uVar2 = uVar4;
    }
    else {
      uVar2 = (uVar4 >> 2 & 0x3fff) / 0x19;
      lVar6 = 3;
      local_12 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar4 + uVar2 * -100) & 0xffff) * 2);
    }
  }
  else {
    uVar2 = (uVar4 >> 4 & 0xfff) / 0x271;
    uVar4 = uVar4 + uVar2 * -10000;
    uVar3 = (uVar4 >> 2 & 0x3fff) / 0x19;
    local_14 = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar3 * 2);
    lVar6 = 1;
    local_12 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar4 + uVar3 * -100) & 0xffff) * 2);
  }
  if ((uVar5 == 0) || ((uVar2 & 0xffff) != 0)) {
    auStack_16[lVar6] = (&DAT_00390ba8)[(uVar2 & 0xf) << 1];
    lVar6 = lVar6 + -1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,uVar5 >> 0xf & 1 ^ 1,1,0,auStack_16 + lVar6 + 1,5 - lVar6);
  return;
}


// ===== 00aab340  <i16_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::pat::RangePattern>::sub_one */

void __rustcall <i16_as_core::pat::RangePattern>::sub_one(short param_1,undefined8 param_2)

{
  if ((int)(short)(param_1 + -1) == param_1 + -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aab374  <i64_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::Octal>::fmt */

void __rustcall <i64_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aab3e4  <f32_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::UpperExp>::fmt */

void __rustcall <f32_as_core::fmt::UpperExp>::fmt(undefined4 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a94d20(param_2,uVar1,1);
    return;
  }
  FUN_00a94394(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),1);
  return;
}


// ===== 00aab414  <core::net::socket_addr::SocketAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddr as core::fmt::Debug>::fmt */

void __rustcall <core::net::socket_addr::SocketAddr_as_core::fmt::Debug>::fmt(short *param_1)

{
  if (*param_1 == 1) {
    <core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt(param_1 + 2);
    return;
  }
  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 00aab430  <core::marker::variance::PhantomContravariantLifetime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::marker::variance::PhantomContravariantLifetime as core::fmt::Debug>::fmt */

void __rustcall
<core::marker::variance::PhantomContravariantLifetime_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aab448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00396227,0x1c);
  return;
}


// ===== 00aab44c  <core::num::imp::bignum::Big32x40_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::Big32x40 as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<core::num::imp::bignum::Big32x40_as_core::cmp::PartialOrd>::partial_cmp(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_2 + 0xa0);
  if (*(ulong *)(param_2 + 0xa0) <= *(ulong *)(param_1 + 0xa0)) {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  if (uVar1 < 0x29) {
    lVar5 = uVar1 << 2;
    do {
      if (lVar5 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + -4 + lVar5);
      uVar3 = *(uint *)(param_2 + -4 + lVar5);
      lVar5 = lVar5 + -4;
    } while (uVar2 == uVar3);
    uVar4 = (uint)(uVar3 <= uVar2 && uVar2 != uVar3);
    if (uVar3 > uVar2) {
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar1,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00aab4bc  <core::num::imp::bignum::tests::Big8x3_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::Big8x3 as core::fmt::Debug>::fmt */

ulong __rustcall
<core::num::imp::bignum::tests::Big8x3_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  
  puVar3 = PTR_fmt_00b00c20;
  uVar6 = *param_1;
  uVar5 = uVar6 - (uVar6 != 0);
  if (2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar5,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_60 = (undefined1 *)((long)param_1 + uVar5 + 8);
  local_58 = PTR_fmt_00b00c20;
  uVar4 = core::fmt::write(uVar1,uVar2,&DAT_00396243,&local_60);
  if ((uVar4 & 1) == 0) {
    if (uVar6 < 2) {
      return 0;
    }
    local_60 = local_64;
    local_64[0] = *(undefined1 *)((long)param_1 + uVar5 + 7);
    local_58 = puVar3;
    uStack_50 = 0;
    local_48 = 2;
    uVar6 = core::fmt::write(uVar1,uVar2,&DAT_00396249,&local_60);
    if (((uVar6 & 1) == 0) && (uVar5 + 7 != 8)) {
      local_60 = local_64;
      local_64[0] = *(undefined1 *)((long)param_1 + uVar5 + 6);
      local_58 = puVar3;
      uStack_50 = 0;
      local_48 = 2;
      uVar5 = core::fmt::write(uVar1,uVar2,&DAT_00396249,&local_60);
      return uVar5;
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 00aab60c  <i32_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::pat::RangePattern>::sub_one */

int __rustcall <i32_as_core::pat::RangePattern>::sub_one(int param_1,undefined8 param_2)

{
  if (!SBORROW4(param_1,1)) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aab634  <usize_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::LowerHex>::fmt */

void __rustcall <usize_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aab6a4  <f64_as_core::fmt::Debug>::fmt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::Debug>::fmt */

void __rustcall <f64_as_core::fmt::Debug>::fmt(double *param_1,long param_2)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 >> 0x1c & 1) != 0) {
    FUN_00a92f50(param_2,uVar1 >> 0x15 & 1,*(undefined2 *)(param_2 + 0x16));
    return;
  }
  dVar2 = ABS(*param_1);
  if ((dVar2 < _s__002a14d8 != (NAN(dVar2) || NAN(_s__002a14d8))) &&
     (DAT_002a1a70 <= dVar2 || *param_1 == 0.0)) {
    FUN_00a93854(param_2,uVar1 >> 0x15 & 1,1);
    return;
  }
  FUN_00a949e8(param_2,uVar1 >> 0x15 & 1,0);
  return;
}


// ===== 00aab714  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV4 as core::fmt::Display>::fmt */

void __rustcall
<core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt
          (undefined2 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 local_78 [12];
  undefined2 *local_60;
  ulong local_58;
  ulong uStack_50;
  undefined2 *local_48;
  undefined2 **local_40;
  code *local_38;
  undefined2 *local_30;
  undefined *puStack_28;
  undefined2 local_4;
  undefined1 uStack_1;
  
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
    local_78[0] = param_1[2];
    local_40 = &local_60;
    local_30 = local_78;
    local_38 = FUN_00aa766c;
    puStack_28 = PTR_fmt_00b00e10;
    local_60 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002a59d3,&local_40);
    return;
  }
  local_60 = local_78;
  local_4 = param_1[2];
  local_40 = &local_48;
  uStack_50 = _UNK_002a0a38;
  local_58 = _DAT_002a0a30;
  local_30 = &local_4;
  local_38 = FUN_00aa766c;
  puStack_28 = PTR_fmt_00b00e10;
  local_48 = param_1;
  iVar1 = core::fmt::write(&local_60,&DAT_00b001f8,&DAT_002a59d3,&local_40);
  if (iVar1 == 0) {
    if (uStack_50 <= local_58) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_60);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uStack_50,local_58,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00240);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0039066c,0x2b,&uStack_1,&DAT_00aff698,
             &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00228);
}


// ===== 00aab848  <core::net::socket_addr::SocketAddrV4_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV4 as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::net::socket_addr::SocketAddrV4_as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong extraout_x10;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  uVar4 = FUN_00a956dc(&local_30);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
    uVar6 = 0;
    goto LAB_00aab91c;
  }
  uVar5 = extraout_x10;
  if (local_28 == 0) {
LAB_00aab8e8:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((local_28 != 1) && (uVar5 = (ulong)*local_30, *local_30 == 0x3a)) {
      uVar5 = (ulong)(local_30[1] - 0x30);
      if (local_30[1] - 0x30 < 10) {
        lVar7 = 2;
        do {
          if ((local_28 - lVar7 == 0) || (pbVar1 = local_30 + lVar7, 9 < *pbVar1 - 0x30)) {
            bVar3 = true;
            local_28 = local_28 - lVar7;
            goto LAB_00aab904;
          }
          uVar2 = (((uint)uVar5 & 0xffff) + (uint)(ushort)uVar5 * 4) * 2;
          uVar5 = (ulong)uVar2;
          if ((uVar2 & 0xf0000) != 0) break;
          lVar7 = lVar7 + 1;
          uVar2 = (uVar2 & 0xfffe) + (*pbVar1 - 0x30 & 0xffff);
          uVar5 = (ulong)uVar2;
        } while ((uVar2 & 0xffff0000) == 0);
      }
      goto LAB_00aab8e8;
    }
  }
LAB_00aab904:
  if (bVar3) {
    param_2 = local_28;
  }
  uVar6 = 0;
  if (bVar3) {
    uVar6 = (uVar4 >> 8 & 0xffffffff) << 0x10 | uVar5 << 0x30;
  }
LAB_00aab91c:
  uVar6 = uVar6 | 0x400;
  if (!(bool)(param_2 == 0 & bVar3)) {
    uVar6 = 0x401;
  }
  return uVar6;
}


// ===== 00aab948  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv4Addr as core::fmt::Display>::fmt */

void __rustcall
<core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_87 [15];
  undefined1 *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined4 *local_60;
  undefined *puStack_58;
  ulong local_50;
  undefined *puStack_48;
  ulong local_40;
  undefined *puStack_38;
  ulong local_30;
  undefined *puStack_28;
  undefined4 local_8;
  undefined1 uStack_1;
  
  local_8 = *param_1;
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
    local_60 = &local_8;
    local_50 = (ulong)local_60 | 1;
    puStack_58 = PTR_fmt_00b00c18;
    puStack_48 = PTR_fmt_00b00c18;
    local_40 = (ulong)local_60 | 2;
    local_30 = (ulong)local_60 | 3;
    puStack_38 = PTR_fmt_00b00c18;
    puStack_28 = PTR_fmt_00b00c18;
    core::fmt::write(*param_2,param_2[1],&DAT_002b4b88,&local_60);
    return;
  }
  local_78 = auStack_87;
  local_60 = &local_8;
  local_50 = (ulong)local_60 | 1;
  puStack_48 = PTR_fmt_00b00c18;
  local_40 = (ulong)local_60 | 2;
  puStack_38 = PTR_fmt_00b00c18;
  local_30 = (ulong)local_60 | 3;
  puStack_58 = PTR_fmt_00b00c18;
  uStack_68 = _UNK_002a00c8;
  local_70 = _DAT_002a00c0;
  puStack_28 = PTR_fmt_00b00c18;
  iVar1 = core::fmt::write(&local_78,&DAT_00b001f8,&DAT_002b4b88,&local_60);
  if (iVar1 == 0) {
    if (uStack_68 <= local_70) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_78);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uStack_68,local_70,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00240);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0039066c,0x2b,&uStack_1,&DAT_00aff698,
             &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00258);
}


// ===== 00aaba7c  <core::char::convert::ParseCharError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::convert::ParseCharError as core::fmt::Display>::fmt */

void __rustcall
<core::char::convert::ParseCharError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"too many characters in string",0x1d);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"cannot parse char from empty string",0x23);
  return;
}


// ===== 00aabaac  <core::sync::atomic::Atomic<bool>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<bool> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<bool>as_core::fmt::Debug>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 != '\0') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"true",4);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"false",5);
  return;
}


// ===== 00aabad8  <core::num::imp::bignum::Big32x40_as_core::cmp::Ord>::cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::Big32x40 as core::cmp::Ord>::cmp */

uint __rustcall <core::num::imp::bignum::Big32x40_as_core::cmp::Ord>::cmp(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_2 + 0xa0);
  if (*(ulong *)(param_2 + 0xa0) <= *(ulong *)(param_1 + 0xa0)) {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  if (uVar1 < 0x29) {
    lVar5 = uVar1 << 2;
    do {
      if (lVar5 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + -4 + lVar5);
      uVar3 = *(uint *)(param_2 + -4 + lVar5);
      lVar5 = lVar5 + -4;
    } while (uVar2 == uVar3);
    uVar4 = (uint)(uVar3 <= uVar2 && uVar2 != uVar3);
    if (uVar3 > uVar2) {
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar1,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00aabb48  <core::fmt::Arguments_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Arguments as core::fmt::Debug>::fmt */

void __rustcall
<core::fmt::Arguments_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  core::fmt::write(*param_2,param_2[1],*param_1,param_1[1]);
  return;
}


// ===== 00aabb58  <isize_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as core::pat::RangePattern>::sub_one */

long __rustcall <isize_as_core::pat::RangePattern>::sub_one(long param_1,undefined8 param_2)

{
  if (!SBORROW8(param_1,1)) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aabb80  <isize_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as core::fmt::LowerHex>::fmt */

void __rustcall <isize_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aabbf0  <f64_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::Display>::fmt */

void __rustcall <f64_as_core::fmt::Display>::fmt(undefined8 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a93854(param_2,uVar1,0);
    return;
  }
  FUN_00a92f50(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16));
  return;
}


// ===== 00aabc1c  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV4 as core::fmt::Debug>::fmt */

void __rustcall <core::net::socket_addr::SocketAddrV4_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b07c50)();
  return;
}


// ===== 00aabc20  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv4Addr as core::fmt::Debug>::fmt */

void __rustcall <core::net::ip_addr::Ipv4Addr_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b03de0)();
  return;
}


// ===== 00aabc24  <core::fmt::Arguments_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Arguments as core::fmt::Display>::fmt */

void __rustcall
<core::fmt::Arguments_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  core::fmt::write(*param_2,param_2[1],*param_1,param_1[1]);
  return;
}


// ===== 00aabc34  <i128_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::pat::RangePattern>::sub_one */

undefined1  [16] __rustcall <i128_as_core::pat::RangePattern>::sub_one(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 + -1 + (ulong)(param_1 != 0);
  if (SCARRY8(param_2,-1) == SCARRY8(param_2 + -1,(ulong)(param_1 != 0))) {
    auVar1._0_8_ = param_1 + -1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59);
}


// ===== 00aabc64  <core::error::Source_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::error::Source as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<core::error::Source_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar1 = *param_2;
  if (*(long *)*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    auVar3 = (**(code **)(*(long *)(*param_2 + 8) + 0x30))(*(long *)*param_2);
    param_1 = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
  }
  *(undefined8 *)*param_2 = uVar2;
  *(undefined8 *)(*param_2 + 8) = param_1;
  return auVar1;
}


// ===== 00aabcb4  <core::io::error::Custom_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Custom as core::fmt::Debug>::fmt */

byte __rustcall
<core::io::error::Custom_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,"Custom",6);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_30,"kind",4,param_1 + 4,&DAT_00b00128);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_30,"error",5,*param_1,param_1[1]);
  bVar1 = local_27 | local_28;
  if ((local_27 == 1) && ((local_28 & 1) == 0)) {
    if (*(char *)((long)local_30 + 0x12) < '\0') {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00aabd90  <usize_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::UpperHex>::fmt */

void __rustcall <usize_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aabe00  <f64_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::LowerExp>::fmt */

void __rustcall <f64_as_core::fmt::LowerExp>::fmt(undefined8 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a949e8(param_2,uVar1,0);
    return;
  }
  FUN_00a94078(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),0);
  return;
}


// ===== 00aabe30  FUN_00aabe30 =====

void FUN_00aabe30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  local_28 = *param_1;
  puStack_20 = &local_28;
  local_18 = FUN_00aac300;
  core::fmt::write(*param_2,param_2[1],&DAT_002a80cf,&puStack_20);
  return;
}


// ===== 00aabe74  <core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV6 as core::fmt::Display>::fmt */

void __rustcall
<core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt
          (undefined8 **param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long **local_b0;
  code *pcStack_a8;
  undefined1 **local_a0;
  undefined *puStack_98;
  undefined8 **local_90;
  undefined *puStack_88;
  undefined1 *local_70;
  ulong local_68;
  ulong uStack_60;
  long *local_58;
  undefined8 **local_50;
  code *local_48;
  int *local_40;
  undefined *puStack_38;
  undefined2 *local_30;
  undefined *puStack_28;
  int local_8;
  undefined2 local_4;
  undefined1 uStack_1;
  
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
    local_50 = param_1;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,*(int *)((long)param_1 + 0x14));
      local_b0 = (long **)&local_50;
      local_90 = &local_58;
      local_58 = (long *)CONCAT62(local_58._2_6_,*(undefined2 *)(param_1 + 3));
      pcStack_a8 = FUN_00aa7674;
      local_a0 = &local_70;
      puStack_98 = PTR_fmt_00b00c40;
      puStack_88 = PTR_fmt_00b00e10;
      core::fmt::write(*param_2,param_2[1],&DAT_002bc112,&local_b0);
      return;
    }
    local_b0 = (long **)&local_50;
    local_70 = (undefined1 *)CONCAT62(local_70._2_6_,*(undefined2 *)(param_1 + 3));
    local_a0 = &local_70;
    pcStack_a8 = FUN_00aa7674;
    puStack_98 = PTR_fmt_00b00e10;
    core::fmt::write(*param_2,param_2[1],&DAT_002b9cad,&local_b0);
    return;
  }
  uStack_60 = _UNK_002a0c48;
  local_68 = _s___002a0c40;
  local_58 = (long *)param_1;
  if (*(int *)((long)param_1 + 0x14) == 0) {
    local_50 = &local_58;
    local_8 = CONCAT22(local_8._2_2_,*(undefined2 *)(param_1 + 3));
    local_48 = FUN_00aa7674;
    local_40 = &local_8;
    puStack_38 = PTR_fmt_00b00e10;
    local_70 = (undefined1 *)&local_b0;
    uVar2 = core::fmt::write(&local_70,&DAT_00b001f8,&DAT_002b9cad,&local_50);
    if ((uVar2 & 1) != 0) goto LAB_00aabff0;
  }
  else {
    local_4 = *(undefined2 *)(param_1 + 3);
    local_50 = &local_58;
    local_48 = FUN_00aa7674;
    local_40 = &local_8;
    puStack_38 = PTR_fmt_00b00c40;
    local_30 = &local_4;
    puStack_28 = PTR_fmt_00b00e10;
    local_70 = (undefined1 *)&local_b0;
    local_8 = *(int *)((long)param_1 + 0x14);
    iVar1 = core::fmt::write(&local_70,&DAT_00b001f8,&DAT_002bc112,&local_50);
    if (iVar1 != 0) {
LAB_00aabff0:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0039066c,0x2b,&uStack_1,&DAT_00aff698,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00270);
    }
  }
  if (uStack_60 <= local_68) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uStack_60,local_68,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00240);
}


// ===== 00aac07c  <core::net::socket_addr::SocketAddrV6_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV6 as core::str::traits::FromStr>::from_str */

void __rustcall
<core::net::socket_addr::SocketAddrV6_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_50;
  long local_48;
  uint local_40;
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  local_50 = param_2;
  local_48 = param_3;
  FUN_00a95ba4(&local_40,&local_50);
  if ((local_48 == 0) && ((local_40 & 1) != 0)) {
    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_30,uStack_34);
    *(undefined8 *)(param_1 + 4) = local_3c;
    *(undefined8 *)(param_1 + 0x18) = uStack_28;
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_2c,uStack_30);
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 1;
  return;
}


// ===== 00aac0f4  <u32_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::Display>::fmt */

void __rustcall <u32_as_core::fmt::Display>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14 [2];
  
  uVar1 = *param_1;
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_00aac1d0;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)uVar1;
    do {
      uVar9 = uVar3;
      lVar4 = lVar5;
      uVar6 = (uint)(uVar9 / 10000);
      uVar7 = (uint)(uVar9 / 10000);
      uVar2 = (uint)uVar9 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)local_14 + lVar4) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar8 * 2);
      *(undefined2 *)((long)local_14 + lVar4 + 2) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar5 = lVar4 + -4;
      uVar3 = uVar9 / 10000;
    } while (9999999 < (uint)uVar9);
    lVar4 = lVar4 + 6;
    uVar8 = (uint)(uVar9 / 10000);
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_00aac1d0;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_00aac1d0:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_00390ba8)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 00aac220  <core::slice::GetDisjointMutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::GetDisjointMutError as core::fmt::Display>::fmt */

void __rustcall
<core::slice::GetDisjointMutError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"there were overlapping indices",0x1e);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"an index is out of bounds",0x19);
  return;
}


// ===== 00aac250  <core::io::error::Custom_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Custom as core::ops::drop::Drop>::drop */

void __rustcall <core::io::error::Custom_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aac25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])(*param_1,param_1[1]);
  return;
}


// ===== 00aac260  <isize_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as core::fmt::UpperHex>::fmt */

void __rustcall <isize_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aac2d0  <f64_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::UpperExp>::fmt */

void __rustcall <f64_as_core::fmt::UpperExp>::fmt(undefined8 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a949e8(param_2,uVar1,1);
    return;
  }
  FUN_00a94078(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),1);
  return;
}


// ===== 00aac300  FUN_00aac300 =====

void FUN_00aac300(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aac318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)PTR_PTR_00b01168)(*(undefined4 *)*param_1);
  return;
}


// ===== 00aac31c  <core::net::socket_addr::SocketAddrV6_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV6 as core::fmt::Debug>::fmt */

void __rustcall <core::net::socket_addr::SocketAddrV6_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b07c48)();
  return;
}


// ===== 00aac320  <core::char::convert::CharTryFromError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::convert::CharTryFromError as core::fmt::Display>::fmt */

void __rustcall
<core::char::convert::CharTryFromError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"converted integer out of range for `char`",0x29);
  return;
}


// ===== 00aac334  <core::task::wake::Waker_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::task::wake::Waker as core::fmt::Debug>::fmt */

byte __rustcall
<core::task::wake::Waker_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_38 = *param_1;
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,"Waker",5);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_30,&DAT_002bd1f4,4,param_1 + 1,&DAT_00b00288);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_30,"vtablePhantomInvariantLifetime",6,&local_38,&DAT_00b002a8);
  bVar1 = local_27 | local_28;
  if ((local_27 == 1) && ((local_28 & 1) == 0)) {
    if (*(char *)((long)local_30 + 0x12) < '\0') {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00aac41c  <core::marker::variance::PhantomInvariantLifetime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::marker::variance::PhantomInvariantLifetime as core::fmt::Debug>::fmt */

void __rustcall
<core::marker::variance::PhantomInvariantLifetime_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aac434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"PhantomInvariantLifetime",0x18);
  return;
}


// ===== 00aac438  <i32_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::Display>::fmt */

void __rustcall <i32_as_core::fmt::Display>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14 [2];
  uint uVar6;
  
  uVar1 = *param_1;
  uVar5 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar5 = uVar1;
  }
  if (uVar5 < 1000) {
    lVar9 = 10;
    uVar6 = uVar5;
    if (uVar5 < 10) goto LAB_00aac518;
  }
  else {
    uVar4 = (ulong)uVar5;
    lVar10 = 0;
    do {
      lVar9 = lVar10;
      uVar8 = uVar4;
      uVar6 = (uint)(uVar8 / 10000);
      uVar5 = (uint)(uVar8 / 10000);
      uVar7 = (uint)(uVar8 / 10000);
      uVar3 = (uint)uVar8 + uVar7 * -10000;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)local_14 + lVar9) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar2 * 2);
      *(undefined2 *)((long)local_14 + lVar9 + 2) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      uVar4 = uVar8 / 10000;
      lVar10 = lVar9 + -4;
    } while (9999999 < (uint)uVar8);
    lVar9 = lVar9 + 6;
    if (uVar7 < 9 || (int)(uVar8 / 10000) == 9) goto LAB_00aac518;
  }
  uVar6 = (uVar5 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar9) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar5 + uVar6 * -100) & 0xffff) * 2);
  lVar9 = lVar9 + -2;
LAB_00aac518:
  if ((uVar1 == 0) || (lVar10 = lVar9, uVar6 != 0)) {
    lVar10 = lVar9 + -1;
    *(undefined *)((long)&uStack_1c + lVar9 + 1) = (&DAT_00390ba8)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,~uVar1 >> 0x1f,1,0,auStack_1a + lVar10,10 - lVar10);
  return;
}


// ===== 00aac56c  <core::num::imp::bignum::Big32x40_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::Big32x40 as core::fmt::Debug>::fmt */

ulong __rustcall
<core::num::imp::bignum::Big32x40_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_74;
  undefined4 *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined2 local_58;
  
  puVar3 = PTR_fmt_00b00c48;
  uVar6 = *(ulong *)(param_1 + 0xa0);
  uVar4 = uVar6 - (uVar6 != 0);
  if (0x27 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar4,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760)
    ;
  }
  local_70 = (undefined4 *)(param_1 + uVar4 * 4);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puStack_68 = PTR_fmt_00b00c48;
  uVar4 = core::fmt::write(uVar1,uVar2,&DAT_00396243,&local_70);
  if ((uVar4 & 1) == 0) {
    if (uVar6 < 2) {
      uVar6 = 0;
    }
    else {
      lVar5 = uVar6 * 4;
      if (uVar6 != 0) {
        uVar6 = 1;
      }
      lVar5 = lVar5 + uVar6 * -4;
      do {
        lVar5 = lVar5 + -4;
        local_74 = *(undefined4 *)(param_1 + lVar5);
        puStack_68 = puVar3;
        local_60 = 0;
        local_58 = 8;
        local_70 = &local_74;
        uVar6 = core::fmt::write(uVar1,uVar2,&DAT_00396249,&local_70);
        if ((uVar6 & 1) != 0) {
          return uVar6;
        }
      } while (lVar5 != 0);
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 00aac674  <usize_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::LowerExp>::fmt */

void __rustcall <usize_as_core::fmt::LowerExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x65);
  return;
}


// ===== 00aac68c  <core::sync::atomic::Atomic<u8>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u8> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<u8>as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_00aad97c(*param_1);
  return;
}


// ===== 00aac694  <i64_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::UpperExp>::fmt */

void __rustcall <i64_as_core::fmt::UpperExp>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  FUN_00a9fb28(param_2,lVar1,(uint)((ulong)lVar2 >> 0x3f) ^ 1,0x45);
  return;
}


// ===== 00aac6b8  <u64_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as core::fmt::UpperExp>::fmt */

void __rustcall <u64_as_core::fmt::UpperExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x45);
  return;
}


// ===== 00aac6d0  <i64_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::LowerExp>::fmt */

void __rustcall <i64_as_core::fmt::LowerExp>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  FUN_00a9fb28(param_2,lVar1,(uint)((ulong)lVar2 >> 0x3f) ^ 1,0x65);
  return;
}


// ===== 00aac6f4  <core::char::ToLowercase_as_core::iter::traits::iterator::Iterator>::advance_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToLowercase as core::iter::traits::iterator::Iterator>::advance_by */

long __rustcall
<core::char::ToLowercase_as_core::iter::traits::iterator::Iterator>::advance_by
          (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + param_2;
  lVar2 = param_1[1];
  if (param_2 <= (ulong)(param_1[1] - *param_1)) {
    lVar2 = lVar1;
  }
  *param_1 = lVar2;
  return lVar1 - lVar2;
}


// ===== 00aac718  <core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToCasefold as core::iter::traits::iterator::Iterator>::__iterator_get_unchecked */

undefined4 __rustcall
<core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked
          (long *param_1,long param_2)

{
  return *(undefined4 *)((long)param_1 + param_2 * 4 + *param_1 * 4 + 0x10);
}


// ===== 00aac72c  <core::char::ToUppercase_as_core::iter::traits::iterator::Iterator>::last =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::last */

undefined4 __rustcall
<core::char::ToUppercase_as_core::iter::traits::iterator::Iterator>::last(long *param_1)

{
  long lStack_10;
  long lStack_8;
  
  lStack_8 = param_1[3];
  lStack_10 = param_1[2];
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  return *(undefined4 *)((long)&lStack_10 + (param_1[1] + -1) * 4);
}


// ===== 00aac768  <core::char::ToUppercase_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::next */

undefined4 __rustcall
<core::char::ToUppercase_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] == lVar1) {
    return 0xffffffff;
  }
  *param_1 = lVar1 + 1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 00aac794  <core::char::ToUppercase_as_core::iter::traits::iterator::Iterator>::count =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::count */

long __rustcall
<core::char::ToUppercase_as_core::iter::traits::iterator::Iterator>::count(long *param_1)

{
  return param_1[1] - *param_1;
}


// ===== 00aac7a0  <core::num::niche_types::NonZeroU32Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU32Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU32Inner_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar3 = *param_1;
  uVar5 = (ulong)uVar3;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    lVar6 = 0;
    do {
      uVar8 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      lVar7 = lVar6 + -1;
      *(undefined *)((long)&local_14 + lVar6 + 1) = (&DAT_002a0ca0)[uVar8];
      lVar6 = lVar7;
    } while ((int)uVar5 != 0);
LAB_00aac8a8:
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_2,1,"0x",2,(long)&local_12 + lVar7,-lVar7);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) != 0) {
    lVar6 = 0;
    do {
      uVar8 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      lVar7 = lVar6 + -1;
      *(undefined *)((long)&local_14 + lVar6 + 1) = (&DAT_0029f430)[uVar8];
      lVar6 = lVar7;
    } while ((int)uVar5 != 0);
    goto LAB_00aac8a8;
  }
  if (uVar3 < 1000) {
    lVar6 = 10;
    if (uVar3 < 10) goto LAB_00aac918;
  }
  else {
    lVar7 = 0;
    do {
      lVar6 = lVar7;
      uVar8 = uVar5;
      uVar3 = (uint)(uVar8 / 10000);
      uVar4 = (uint)(uVar8 / 10000);
      uVar2 = (uint)uVar8 + uVar4 * -10000;
      uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&local_14 + lVar6) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar1 * 2);
      *(undefined2 *)((long)&local_12 + lVar6) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      uVar5 = uVar8 / 10000;
      lVar7 = lVar6 + -4;
    } while (9999999 < (uint)uVar8);
    lVar6 = lVar6 + 6;
    if (uVar4 < 9 || (int)(uVar8 / 10000) == 9) goto LAB_00aac918;
  }
  uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar6) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
  lVar6 = lVar6 + -2;
  uVar3 = uVar1;
LAB_00aac918:
  lVar7 = lVar6;
  if (uVar3 != 0) {
    lVar7 = lVar6 + -1;
    *(undefined *)((long)&uStack_1c + lVar6 + 1) = (&DAT_00390ba8)[(uVar3 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar7,10 - lVar7);
  return;
}


// ===== 00aac964  <core::char::ToTitlecase_as_core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToTitlecase as
   core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by */

long __rustcall
<core::char::ToTitlecase_as_core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by
          (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  lVar1 = *param_1;
  if (param_2 <= (ulong)(lVar2 - *param_1)) {
    lVar1 = lVar2 - param_2;
  }
  param_1[1] = lVar1;
  return (param_2 - lVar2) + lVar1;
}


// ===== 00aac98c  <core::char::ToUppercase_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToUppercase as core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

undefined4 __rustcall
<core::char::ToUppercase_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (long *param_1)

{
  long lVar1;
  
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  lVar1 = param_1[1] + -1;
  param_1[1] = lVar1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 00aac9b4  <core::sync::atomic::Atomic<i16>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i16> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<i16>as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_00aad2d8(*param_1);
  return;
}


// ===== 00aac9bc  <u128_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::Binary>::fmt */

void __rustcall <u128_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 1;
    uVar4 = uVar4 >> 1 | uVar3 << 0x3f;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaca34  <i128_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::Binary>::fmt */

void __rustcall <i128_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 1;
    uVar4 = uVar4 >> 1 | uVar3 << 0x3f;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aacaac  <core::num::nonzero::NonZero<u8>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u8> as core::str::traits::FromStr>::from_str */

undefined1  [16] __rustcall
<core::num::nonzero::NonZero<u8>as_core::str::traits::FromStr>::from_str(byte *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 == 0) {
    return ZEXT816(1);
  }
  if (param_2 == 1) {
    bVar1 = *param_1;
    if (bVar1 == 0x2b) {
      auVar9._8_8_ = 1;
      auVar9._0_8_ = 1;
      return auVar9;
    }
    if (bVar1 == 0x2d) {
      auVar6._8_8_ = 1;
      auVar6._0_8_ = 1;
      return auVar6;
    }
  }
  else {
    bVar1 = *param_1;
  }
  if (bVar1 == 0x2b) {
    param_1 = param_1 + 1;
  }
  uVar5 = param_2 - (ulong)(bVar1 == 0x2b);
  if (uVar5 < 3) {
    if (uVar5 != 0) {
      uVar4 = *param_1 - 0x30;
      if (uVar4 < 10) {
        if (uVar5 == 1) goto LAB_00aacb78;
        if (param_1[1] - 0x30 < 10) {
          uVar2 = (param_1[1] - 0x30) + uVar4 * 10;
          bVar3 = (uVar2 & 0xff) == 0;
          auVar11._1_7_ = 0;
          auVar11[0] = bVar3;
          uVar4 = 4;
          if (!bVar3) {
            uVar4 = uVar2;
          }
          auVar11._8_4_ = uVar4;
          auVar11._12_4_ = 0;
          return auVar11;
        }
      }
LAB_00aacb18:
      auVar7._8_8_ = 1;
      auVar7._0_8_ = 1;
      return auVar7;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    while (uVar5 != 0) {
      uVar4 = ((uVar4 & 0xff) + (uVar4 & 0xff) * 4) * 2;
      if ((uVar4 & 0xf00) != 0) {
        uVar4 = 1;
        if (*param_1 - 0x30 < 10) {
          uVar4 = 2;
        }
        auVar12._12_4_ = 0;
        auVar12._8_4_ = uVar4;
        auVar12._0_8_ = 1;
        return auVar12;
      }
      uVar2 = *param_1 - 0x30;
      if (9 < uVar2) goto LAB_00aacb18;
      uVar5 = uVar5 - 1;
      uVar4 = (uVar4 & 0xff) + (uVar2 & 0xff);
      param_1 = param_1 + 1;
      if (uVar4 >> 8 != 0) {
        auVar8._8_8_ = 2;
        auVar8._0_8_ = 1;
        return auVar8;
      }
    }
  }
LAB_00aacb78:
  bVar3 = (uVar4 & 0xff) == 0;
  auVar10._1_7_ = 0;
  auVar10[0] = bVar3;
  uVar2 = 4;
  if (!bVar3) {
    uVar2 = uVar4;
  }
  auVar10._8_4_ = uVar2;
  auVar10._12_4_ = 0;
  return auVar10;
}


// ===== 00aacbd4  <u128_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::Octal>::fmt */

void __rustcall <u128_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 7;
    uVar4 = uVar4 >> 3 | uVar3 << 0x3d;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aacc4c  <i128_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::Octal>::fmt */

void __rustcall <i128_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 7;
    uVar4 = uVar4 >> 3 | uVar3 << 0x3d;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaccc4  <core::sync::atomic::Atomic<u16>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u16> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<u16>as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_00aadae4(*param_1);
  return;
}


// ===== 00aacccc  FUN_00aacccc =====

void FUN_00aacccc(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aacce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003960d1,5);
  return;
}


// ===== 00aacce8  <u128_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::LowerHex>::fmt */

void __rustcall <u128_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aacd60  <i128_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::LowerHex>::fmt */

void __rustcall <i128_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aacdd8  <u128_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::UpperHex>::fmt */

void __rustcall <u128_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aace50  <i128_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::UpperHex>::fmt */

void __rustcall <i128_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aacec8  <core::str::iter::EncodeUtf16_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EncodeUtf16 as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::str::iter::EncodeUtf16_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,"EncodeUtf16memory allocation failed",0xb);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00aacf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00390587,7);
  return uVar2;
}


// ===== 00aacf28  <core::sync::atomic::Atomic<i32>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i32> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<i32>as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint local_1c [2];
  undefined1 local_11;
  
  local_1c[0] = *param_1;
  uVar1 = (ulong)local_1c[0];
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <i32_as_core::fmt::Display>::fmt(local_1c);
      return;
    }
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  else {
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 00aacff4  FUN_00aacff4 =====

void FUN_00aacff4(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 local_16 [2];
  undefined2 local_14;
  undefined1 local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar1 = (uint)(char)param_1;
      uVar2 = -uVar1;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      uVar5 = (ulong)uVar2;
      if (uVar2 < 10) {
        lVar3 = 3;
      }
      else {
        uVar5 = (ulong)(99 < (uVar2 & 0xff));
        uVar1 = uVar2 * 2;
        if (99 < (uVar2 & 0xff)) {
          uVar1 = uVar2 * 2 + 0x38;
        }
        local_14 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)uVar1 & 0xfe));
        lVar3 = 1;
      }
      if (((param_1 & 0xff) == 0) || ((uVar5 & 0xff) != 0)) {
        local_16[lVar3] = (&DAT_00390ba8)[(uVar5 & 0x7f) * 2];
        lVar3 = lVar3 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,(uint)param_1 >> 7 & 1 ^ 1,1,0,local_16 + lVar3 + 1,3 - lVar3);
      return;
    }
    lVar3 = 0;
    do {
      uVar5 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xf;
      lVar4 = lVar3 + -1;
      param_1 = (ulong)uVar2;
      (&local_11)[lVar3] = (&DAT_0029f430)[uVar5];
      lVar3 = lVar4;
    } while (uVar2 != 0);
    lVar3 = -2;
  }
  else {
    lVar3 = 0;
    do {
      uVar5 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xf;
      lVar4 = lVar3 + -1;
      param_1 = (ulong)uVar2;
      local_16[lVar3] = (&DAT_002a0ca0)[uVar5];
      lVar3 = lVar4;
    } while (uVar2 != 0);
    lVar3 = -7;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff2 + lVar4 + lVar3,-lVar4);
  return;
}


// ===== 00aad164  <core::num::nonzero::NonZero<u16>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u16> as core::str::traits::FromStr>::from_str */

uint __rustcall
<core::num::nonzero::NonZero<u16>as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    uVar3 = 1;
    goto LAB_00aad290;
  }
  if (param_2 == 1) {
    bVar2 = *param_1;
    uVar3 = 0x101;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_00aad290;
    uVar4 = (ulong)(bVar2 != 0x2b);
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar4 = param_2 - (ulong)(*param_1 == 0x2b);
    if (*param_1 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  if (4 < uVar4) {
    uVar3 = 0;
    do {
      if (uVar4 == 0) goto LAB_00aad28c;
      uVar3 = ((uVar3 & 0xffff) + (uVar3 & 0xffff) * 4) * 2;
      if ((uVar3 & 0xf0000) != 0) {
        uVar3 = 0x201;
        if (9 < *param_1 - 0x30) {
          uVar3 = 0x101;
        }
        goto LAB_00aad290;
      }
      uVar5 = *param_1 - 0x30;
      if (9 < uVar5) goto LAB_00aad280;
      uVar4 = uVar4 - 1;
      uVar3 = (uVar3 & 0xffff) + (uVar5 & 0xffff);
      param_1 = param_1 + 1;
    } while (uVar3 >> 0x10 == 0);
    uVar3 = 0x201;
    goto LAB_00aad290;
  }
  if (uVar4 == 0) {
    uVar3 = 0;
LAB_00aad28c:
    uVar3 = uVar3 << 0x10;
  }
  else {
    uVar3 = *param_1 - 0x30;
    if (uVar3 < 10) {
      if (uVar4 == 1) goto LAB_00aad28c;
      if (param_1[1] - 0x30 < 10) {
        uVar3 = (param_1[1] - 0x30) + uVar3 * 10;
        if (uVar4 == 2) goto LAB_00aad28c;
        if (param_1[2] - 0x30 < 10) {
          uVar3 = (param_1[2] - 0x30) + uVar3 * 10;
          if (uVar4 == 3) goto LAB_00aad28c;
          if (param_1[3] - 0x30 < 10) {
            uVar3 = ((param_1[3] - 0x30) + uVar3 * 10) * 0x10000;
            goto LAB_00aad290;
          }
        }
      }
    }
LAB_00aad280:
    uVar3 = 0x101;
  }
LAB_00aad290:
  uVar5 = 0x400;
  if (uVar3 >= 0x10000) {
    uVar5 = 0;
  }
  uVar1 = uVar3 & 0x300;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar5;
  }
  return uVar1 | uVar3 & 0xffff0000 | (uint)(uVar3 < 0x10000) | uVar3 & 1;
}


// ===== 00aad2d8  FUN_00aad2d8 =====

void FUN_00aad2d8(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_1d [3];
  undefined1 local_1a [2];
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [3];
  undefined1 local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar3 = (uint)(short)param_1;
      uVar2 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      if (uVar2 < 1000) {
        if ((uVar2 & 0xffff) < 10) {
          lVar5 = 5;
          uVar3 = uVar2;
        }
        else {
          uVar3 = (uVar2 >> 2 & 0x3fff) / 0x19;
          lVar5 = 3;
          local_16 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2);
        }
      }
      else {
        uVar3 = (uVar2 >> 4 & 0xfff) / 0x271;
        uVar2 = uVar2 + uVar3 * -10000;
        uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
        local_18 = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar1 * 2);
        lVar5 = 1;
        local_16 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      }
      if (((param_1 & 0xffff) == 0) || ((uVar3 & 0xffff) != 0)) {
        local_1a[lVar5] = (&DAT_00390ba8)[(uVar3 & 0xf) << 1];
        lVar5 = lVar5 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,(uint)param_1 >> 0xf & 1 ^ 1,1,0,local_1a + lVar5 + 1,5 - lVar5);
      return;
    }
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar2;
      (&local_11)[lVar5] = (&DAT_0029f430)[uVar7];
      lVar5 = lVar4;
    } while (uVar2 != 0);
    puVar6 = auStack_14;
  }
  else {
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar2;
      local_1a[lVar5] = (&DAT_002a0ca0)[uVar7];
      lVar5 = lVar4;
    } while (uVar2 != 0);
    puVar6 = auStack_1d;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,puVar6 + lVar4 + 4,-lVar4);
  return;
}


// ===== 00aad4a4  FUN_00aad4a4 =====

void FUN_00aad4a4(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <i32_as_core::fmt::Display>::fmt();
      return;
    }
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_0029f430)[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  else {
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 00aad568  FUN_00aad568 =====

void FUN_00aad568(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_44 [15];
  undefined1 local_35 [5];
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar3 = -param_1;
      if (-1 < (long)param_1) {
        uVar3 = param_1;
      }
      lVar1 = FUN_00a9c794(uVar3,auStack_44,0x14);
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,(uint)(param_1 >> 0x3f) ^ 1,1,0,auStack_44 + lVar1,0x14 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = (&DAT_0029f430)[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = (&DAT_002a0ca0)[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,local_35 + lVar2 + 1,-lVar2)
  ;
  return;
}


// ===== 00aad67c  <core::sync::atomic::Atomic<u32>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u32> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<u32>as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(undefined *)((long)&local_14 + lVar4 + 1) = (&DAT_002a0ca0)[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
LAB_00aad788:
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_2,1,"0x",2,(long)&local_12 + lVar5,-lVar5);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(undefined *)((long)&local_14 + lVar4 + 1) = (&DAT_0029f430)[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
    goto LAB_00aad788;
  }
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_00aad7fc;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)uVar1;
    do {
      uVar9 = uVar3;
      lVar4 = lVar5;
      uVar6 = (uint)(uVar9 / 10000);
      uVar7 = (uint)(uVar9 / 10000);
      uVar2 = (uint)uVar9 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&local_14 + lVar4) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar8 * 2);
      *(undefined2 *)((long)&local_12 + lVar4) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar5 = lVar4 + -4;
      uVar3 = uVar9 / 10000;
    } while (9999999 < (uint)uVar9);
    lVar4 = lVar4 + 6;
    uVar8 = (uint)(uVar9 / 10000);
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_00aad7fc;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_00aad7fc:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_00390ba8)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 00aad84c  FUN_00aad84c =====

void FUN_00aad84c(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_57 [31];
  undefined1 local_38 [8];
  
  if ((*(uint *)(param_3 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_3 + 0x10) >> 0x1a & 1) == 0) {
      uVar2 = (long)param_2 >> 0x3f;
      lVar1 = FUN_00a96f88((param_1 ^ uVar2) - uVar2,
                           (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),auStack_57,0x27
                          );
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_3,(uint)(param_2 >> 0x3f) ^ 1,1,0,auStack_57 + lVar1,0x27 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar2 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar3 = lVar1 + -1;
      local_38[lVar1] = (&DAT_0029f430)[uVar2];
      lVar1 = lVar3;
    } while (param_1 != 0 || param_2 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar2 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar3 = lVar1 + -1;
      local_38[lVar1] = (&DAT_002a0ca0)[uVar2];
      lVar1 = lVar3;
    } while (param_1 != 0 || param_2 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_3,1,"0x",2,local_38 + lVar3 + 1,-lVar3)
  ;
  return;
}


// ===== 00aad97c  FUN_00aad97c =====

void FUN_00aad97c(ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_16 [2];
  undefined2 local_14;
  undefined1 local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar1 = (uint)param_1 & 0xff;
      if (uVar1 < 10) {
        lVar2 = 3;
        uVar4 = param_1 & 0xffffffff;
      }
      else {
        uVar1 = uVar1 * 0x29 >> 0xc;
        uVar4 = (ulong)uVar1;
        local_14 = *(undefined2 *)
                    (&DAT_00390ba7 + ((ulong)((uint)param_1 + uVar1 * -100) & 0xff) * 2);
        lVar2 = 1;
      }
      if (((param_1 & 0xff) == 0) || ((uVar4 & 0xff) != 0)) {
        local_16[lVar2] = (&DAT_00390ba8)[(uVar4 & 0x7f) * 2];
        lVar2 = lVar2 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,local_16 + lVar2 + 1,3 - lVar2);
      return;
    }
    lVar2 = 0;
    do {
      uVar4 = param_1 & 0xf;
      uVar1 = (uint)param_1 >> 4 & 0xf;
      lVar3 = lVar2 + -1;
      param_1 = (ulong)uVar1;
      (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
      lVar2 = lVar3;
    } while (uVar1 != 0);
    lVar2 = -2;
  }
  else {
    lVar2 = 0;
    do {
      uVar4 = param_1 & 0xf;
      uVar1 = (uint)param_1 >> 4 & 0xf;
      lVar3 = lVar2 + -1;
      param_1 = (ulong)uVar1;
      local_16[lVar2] = (&DAT_002a0ca0)[uVar4];
      lVar2 = lVar3;
    } while (uVar1 != 0);
    lVar2 = -7;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff2 + lVar3 + lVar2,-lVar3);
  return;
}


// ===== 00aadad4  <core::num::niche_types::NonZeroU128Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU128Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU128Inner_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  FUN_00aae044(*param_1,param_1[1],param_2);
  return;
}


// ===== 00aadae4  FUN_00aadae4 =====

void FUN_00aadae4(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_1d [3];
  undefined1 local_1a [2];
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [3];
  undefined1 local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar3 = (uint)param_1;
      if ((uVar3 & 0xffff) < 1000) {
        if ((uVar3 & 0xffff) < 10) {
          lVar5 = 5;
          uVar1 = uVar3;
        }
        else {
          uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
          lVar5 = 3;
          local_16 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
        }
      }
      else {
        uVar1 = (uVar3 >> 4 & 0xfff) / 0x271;
        uVar3 = uVar3 + uVar1 * -10000;
        uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
        local_18 = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar2 * 2);
        lVar5 = 1;
        local_16 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      }
      if (((param_1 & 0xffff) == 0) || ((uVar1 & 0xffff) != 0)) {
        local_1a[lVar5] = (&DAT_00390ba8)[(uVar1 & 0xf) << 1];
        lVar5 = lVar5 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,local_1a + lVar5 + 1,5 - lVar5);
      return;
    }
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar3 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar3;
      (&local_11)[lVar5] = (&DAT_0029f430)[uVar7];
      lVar5 = lVar4;
    } while (uVar3 != 0);
    puVar6 = auStack_14;
  }
  else {
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar3 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar3;
      local_1a[lVar5] = (&DAT_002a0ca0)[uVar7];
      lVar5 = lVar4;
    } while (uVar3 != 0);
    puVar6 = auStack_1d;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,puVar6 + lVar4 + 4,-lVar4);
  return;
}


// ===== 00aadc9c  <core::num::nonzero::NonZero<u32>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u32> as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::num::nonzero::NonZero<u32>as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    uVar9 = 0;
    bVar4 = true;
    goto LAB_00aade34;
  }
  if (param_2 == 1) {
    bVar2 = *param_1;
    uVar9 = 0x101;
    bVar4 = true;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_00aade34;
    uVar6 = (ulong)(bVar2 != 0x2b);
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar6 = param_2 - (ulong)(*param_1 == 0x2b);
    if (*param_1 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  if (8 < uVar6) {
    uVar8 = 0;
    uVar9 = 0x101;
    bVar4 = true;
    do {
      if (uVar6 == 0) goto LAB_00aade30;
      if (((ulong)uVar8 * 10 & 0xffffffff00000000) != 0) {
        uVar9 = 0x201;
        if (9 < *param_1 - 0x30) {
          uVar9 = 0x101;
        }
        bVar4 = true;
        goto LAB_00aade34;
      }
      uVar3 = *param_1 - 0x30;
      if (9 < uVar3) goto LAB_00aade34;
      uVar7 = (uint)((ulong)uVar8 * 10);
      uVar8 = uVar3 + uVar7;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
    } while (!CARRY4(uVar3,uVar7));
    uVar9 = 0x201;
    bVar4 = true;
    goto LAB_00aade34;
  }
  if (uVar6 == 0) {
    uVar8 = 0;
LAB_00aade30:
    uVar9 = (ulong)uVar8 << 0x20;
    bVar4 = false;
  }
  else {
    uVar8 = *param_1 - 0x30;
    if (uVar8 < 10) {
      if (uVar6 == 1) goto LAB_00aade30;
      if (param_1[1] - 0x30 < 10) {
        uVar8 = (param_1[1] - 0x30) + uVar8 * 10;
        if (uVar6 == 2) goto LAB_00aade30;
        if (param_1[2] - 0x30 < 10) {
          uVar8 = (param_1[2] - 0x30) + uVar8 * 10;
          if (uVar6 == 3) goto LAB_00aade30;
          if (param_1[3] - 0x30 < 10) {
            uVar8 = (param_1[3] - 0x30) + uVar8 * 10;
            if (uVar6 == 4) goto LAB_00aade30;
            if (param_1[4] - 0x30 < 10) {
              uVar8 = (param_1[4] - 0x30) + uVar8 * 10;
              if (uVar6 == 5) goto LAB_00aade30;
              if (param_1[5] - 0x30 < 10) {
                uVar8 = (param_1[5] - 0x30) + uVar8 * 10;
                if (uVar6 == 6) goto LAB_00aade30;
                if (param_1[6] - 0x30 < 10) {
                  uVar8 = (param_1[6] - 0x30) + uVar8 * 10;
                  if (uVar6 == 7) goto LAB_00aade30;
                  if (param_1[7] - 0x30 < 10) {
                    uVar9 = (ulong)((param_1[7] - 0x30) + uVar8 * 10) << 0x20;
                    bVar4 = false;
                    goto LAB_00aade34;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar9 = 0x101;
    bVar4 = true;
  }
LAB_00aade34:
  bVar5 = uVar9 >> 0x20 == 0;
  uVar6 = 0x400;
  if (!bVar5) {
    uVar6 = 0;
  }
  uVar1 = uVar9 & 0x300;
  if (!bVar4) {
    uVar1 = uVar6;
  }
  return uVar1 | uVar9 & 0xffffffff00000000 | (ulong)(byte)(bVar5 | bVar4);
}


// ===== 00aade80  FUN_00aade80 =====

void FUN_00aade80(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <u32_as_core::fmt::Display>::fmt();
      return;
    }
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_0029f430)[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  else {
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 00aadf44  FUN_00aadf44 =====

void FUN_00aadf44(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_44 [15];
  undefined1 local_35 [5];
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      lVar1 = FUN_00a9c794(param_1,auStack_44,0x14);
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,auStack_44 + lVar1,0x14 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = (&DAT_0029f430)[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = (&DAT_002a0ca0)[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,local_35 + lVar2 + 1,-lVar2)
  ;
  return;
}


// ===== 00aae044  FUN_00aae044 =====

void FUN_00aae044(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_57 [31];
  undefined1 local_38 [8];
  
  if ((*(uint *)(param_3 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_3 + 0x10) >> 0x1a & 1) == 0) {
      lVar1 = FUN_00a96f88(param_1,param_2,auStack_57,0x27);
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_3,1,1,0,auStack_57 + lVar1,0x27 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar2 = lVar1 + -1;
      local_38[lVar1] = (&DAT_0029f430)[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0 || param_2 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar2 = lVar1 + -1;
      local_38[lVar1] = (&DAT_002a0ca0)[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0 || param_2 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_3,1,"0x",2,local_38 + lVar2 + 1,-lVar2)
  ;
  return;
}


// ===== 00aae154  <core::alloc::AllocError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::alloc::AllocError as core::fmt::Display>::fmt */

void __rustcall
<core::alloc::AllocError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aae16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"memory allocation failed",0x18);
  return;
}


// ===== 00aae170  <i128_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::Display>::fmt */

void __rustcall <i128_as_core::fmt::Display>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_57 [39];
  
  uVar1 = param_1[1];
  uVar3 = (long)uVar1 >> 0x3f;
  lVar2 = FUN_00a96f88((*param_1 ^ uVar3) - uVar3,
                       (uVar1 ^ uVar3) - (uVar3 + ((*param_1 ^ uVar3) < uVar3)),auStack_57,0x27);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,(uint)(uVar1 >> 0x3f) ^ 1,1,0,auStack_57 + lVar2,0x27 - lVar2);
  return;
}


// ===== 00aae1e8  <core::mem::alignment::Alignment_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::alignment::Alignment as core::fmt::Debug>::fmt */

void __rustcall
<core::mem::alignment::Alignment_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_34;
  undefined1 *local_30;
  code *pcStack_28;
  undefined4 *local_20;
  code *pcStack_18;
  
  local_30 = (undefined1 *)&local_40;
  local_40 = *param_1;
  uVar1 = (local_40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_40 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  pcStack_28 = FUN_00ab13f8;
  local_20 = &local_34;
  local_34 = (undefined4)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
  pcStack_18 = FUN_00aade80;
  core::fmt::write(*param_2,param_2[1],&DAT_002b5939,&local_30);
  return;
}


// ===== 00aae248  <core::net::display_buffer::DisplayBuffer_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::display_buffer::DisplayBuffer as core::fmt::Write>::write_str */

bool __rustcall
<core::net::display_buffer::DisplayBuffer_as_core::fmt::Write>::write_str
          (long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = uVar3 + param_3;
  if (uVar2 >= uVar1 && !CARRY8(uVar3,param_3)) {
    memcpy((void *)(*param_1 + uVar3),param_2,param_3);
    param_1[2] = uVar1;
  }
  return uVar2 < uVar1 || CARRY8(uVar3,param_3);
}


// ===== 00aae298  <core::num::float_parse::ParseFloatError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::float_parse::ParseFloatError as core::fmt::Display>::fmt */

void __rustcall
<core::num::float_parse::ParseFloatError_as_core::fmt::Display>::fmt
          (char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"invalid float literal",0x15);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"cannot parse float from empty string",0x24);
  return;
}


// ===== 00aae2c8  <core::num::error::TryFromIntError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::error::TryFromIntError as core::fmt::Display>::fmt */

void __rustcall
<core::num::error::TryFromIntError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = *param_1;
  if (3 < bVar3) {
    puVar1 = &UNK_003961d5;
    if (bVar3 != 4) {
      puVar1 = &DAT_003961fb;
    }
    uVar2 = 0x26;
    if (bVar3 != 4) {
      uVar2 = 0x1c;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar1,uVar2);
    return;
  }
  if (bVar3 != 2) {
    if (bVar3 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_003961af,0x26);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b002c8);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00396189,0x26);
  return;
}


// ===== 00aae364  FUN_00aae364 =====

undefined8 FUN_00aae364(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00aadf44(*param_1);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00395ee1,2), (uVar1 & 1) == 0)) {
    uVar2 = FUN_00aadf44(param_1[1],param_2);
    return uVar2;
  }
  return 1;
}


// ===== 00aae3c4  <core::str::iter::Chars_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::Chars as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::str::iter::Chars_as_core::fmt::Debug>::fmt(long *param_1,ulong *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  code *pcVar11;
  code *pcVar12;
  byte *pbVar13;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  char local_74 [4];
  int local_70 [3];
  byte local_64;
  byte local_63;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  pcVar12 = *(code **)(uVar8 + 0x18);
  uVar6 = (*pcVar12)(uVar1,"Chars(",6);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar7 = (*pcVar12)(uVar1,&DAT_00390c71,1);
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  uVar6 = uVar7 & 0xffffffff;
  if (pbVar2 == pbVar3) goto LAB_00aae5cc;
  pbVar13 = pbVar2 + 1;
  uVar10 = (uint)*pbVar2;
  if ((char)*pbVar2 < '\0') {
    if (uVar10 < 0xe0) {
      uVar10 = pbVar2[1] & 0x3f | (uVar10 & 0x1f) << 6;
      pbVar13 = pbVar2 + 2;
    }
    else {
      uVar4 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
      if (uVar10 < 0xf0) {
        uVar10 = uVar4 | (uVar10 & 0x1f) << 0xc;
        pbVar13 = pbVar2 + 3;
        goto joined_r0x00aae7fc;
      }
      pbVar13 = pbVar2 + 4;
      uVar10 = pbVar2[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12;
    }
    if ((uVar7 & 1) == 0) goto LAB_00aae800;
LAB_00aae444:
    uVar6 = 1;
  }
  else {
joined_r0x00aae7fc:
    if ((uVar7 & 1) != 0) goto LAB_00aae444;
LAB_00aae800:
    if (-1 < *(char *)((long)param_2 + 0x12)) {
      pcVar11 = *(code **)(uVar8 + 0x20);
      uVar6 = (*pcVar11)(uVar1,0x27);
      if ((uVar6 & 1) == 0) {
        FUN_00a95e3c(&local_90,uVar10,0x101);
        uVar6 = uStack_88 >> 0x28 & 0xff;
        if (uVar6 < 0x81) {
          uVar7 = uStack_88 >> 0x20 & 0xff;
          uVar6 = (*pcVar12)(uVar1,(long)&local_90 + uVar7,uVar6 - uVar7);
        }
        else {
          uVar6 = (*pcVar11)(uVar1,local_90 & 0xffffffff);
        }
        if ((uVar6 & 1) == 0) {
          uVar6 = (*pcVar11)(uVar1,0x27);
LAB_00aae938:
          uVar6 = uVar6 & 0xffffffff;
          goto LAB_00aae448;
        }
      }
      goto LAB_00aae444;
    }
    uVar6 = 1;
    uVar7 = (*pcVar12)(uVar1,&DAT_003905ae,1);
    if ((uVar7 & 1) == 0) {
      local_80 = local_74;
      local_74[0] = '\x01';
      local_90 = uVar1;
      uStack_88 = uVar8;
      uVar6 = (*pcVar12)(uVar1,&DAT_002bd1ec,4);
      if ((uVar6 & 1) == 0) {
        pcVar11 = *(code **)(uVar8 + 0x20);
        local_74[0] = '\0';
        uVar6 = (*pcVar11)(uVar1,0x27);
        if ((uVar6 & 1) == 0) {
          FUN_00a95e3c(local_70,uVar10,0x101);
          iVar5 = local_70[0];
          if ((ulong)local_63 < 0x81) {
            uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                              (&local_90,(long)local_70 + (ulong)local_64,
                               (ulong)local_63 - (ulong)local_64);
          }
          else {
            if ((local_74[0] == '\x01') &&
               (uVar6 = (*pcVar12)(uVar1,&DAT_002bd1ec,4), (uVar6 & 1) != 0)) goto LAB_00aae444;
            local_74[0] = iVar5 == 10;
            uVar6 = (*pcVar11)(uVar1,iVar5);
          }
          if (((uVar6 & 1) == 0) &&
             ((local_74[0] != '\x01' ||
              (uVar6 = (*pcVar12)(uVar1,&DAT_002bd1ec,4), (uVar6 & 1) == 0)))) {
            local_74[0] = '\0';
            uVar6 = (*pcVar11)(uVar1,0x27);
            if ((uVar6 & 1) == 0) {
              uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                                (&local_90,&DAT_003905a2,2);
              goto LAB_00aae938;
            }
          }
        }
      }
      goto LAB_00aae444;
    }
  }
LAB_00aae448:
  if (pbVar13 != pbVar3) {
    if (((uint)param_2[2] >> 0x17 & 1) == 0) {
      do {
        while( true ) {
          uVar10 = (uint)*pbVar13;
          pbVar2 = pbVar13 + 1;
          if ((char)*pbVar13 < '\0') break;
joined_r0x00aae47c:
          pbVar13 = pbVar2;
          if ((uVar6 & 1) == 0) goto LAB_00aae4e8;
LAB_00aae510:
          uVar6 = 1;
          if (pbVar13 == pbVar3) goto LAB_00aae5cc;
        }
        if (uVar10 < 0xe0) {
          uVar10 = pbVar13[1] & 0x3f | (uVar10 & 0x1f) << 6;
          pbVar13 = pbVar13 + 2;
        }
        else {
          uVar4 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (0xef < uVar10) {
            uVar10 = pbVar13[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12;
            pbVar2 = pbVar13 + 4;
            goto joined_r0x00aae47c;
          }
          uVar10 = uVar4 | (uVar10 & 0x1f) << 0xc;
          pbVar13 = pbVar13 + 3;
        }
        if ((uVar6 & 1) != 0) goto LAB_00aae510;
LAB_00aae4e8:
        uVar6 = (*pcVar12)(uVar1,&DAT_0039059b,2);
        if ((uVar6 & 1) != 0) goto LAB_00aae510;
        pcVar11 = *(code **)(uVar8 + 0x20);
        uVar6 = (*pcVar11)(uVar1,0x27);
        if ((uVar6 & 1) != 0) goto LAB_00aae510;
        FUN_00a95e3c(&local_90,uVar10,0x101);
        uVar6 = uStack_88 >> 0x28 & 0xff;
        if (uVar6 < 0x81) {
          uVar7 = uStack_88 >> 0x20 & 0xff;
          uVar6 = (*pcVar12)(uVar1,(long)&local_90 + uVar7,uVar6 - uVar7);
          if ((uVar6 & 1) == 0) goto LAB_00aae568;
          goto LAB_00aae510;
        }
        uVar6 = (*pcVar11)(uVar1,local_90 & 0xffffffff);
        if ((uVar6 & 1) != 0) goto LAB_00aae510;
LAB_00aae568:
        uVar6 = (*pcVar11)(uVar1,0x27);
        uVar6 = uVar6 & 0xffffffff;
      } while (pbVar13 != pbVar3);
    }
    else {
      do {
        uVar10 = (uint)*pbVar13;
        pbVar2 = pbVar13 + 1;
        if ((char)*pbVar13 < '\0') {
          if (uVar10 < 0xe0) {
            uVar10 = pbVar13[1] & 0x3f | (uVar10 & 0x1f) << 6;
            pbVar2 = pbVar13 + 2;
          }
          else {
            uVar4 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
            if (uVar10 < 0xf0) {
              uVar10 = uVar4 | (uVar10 & 0x1f) << 0xc;
              pbVar2 = pbVar13 + 3;
            }
            else {
              uVar10 = pbVar13[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12;
              pbVar2 = pbVar13 + 4;
            }
          }
        }
        pbVar13 = pbVar2;
        uVar7 = uVar6 & 1;
        uVar6 = 1;
        if (uVar7 == 0) {
          uVar6 = 1;
          local_74[0] = '\x01';
          local_90 = uVar1;
          uStack_88 = uVar8;
          local_80 = local_74;
          uVar7 = (*pcVar12)(uVar1,&DAT_002bd1ec,4);
          if ((uVar7 & 1) == 0) {
            pcVar11 = *(code **)(uVar8 + 0x20);
            local_74[0] = '\0';
            uVar7 = (*pcVar11)(uVar1,0x27);
            if ((uVar7 & 1) == 0) {
              FUN_00a95e3c(local_70,uVar10,0x101);
              iVar5 = local_70[0];
              if ((ulong)local_63 < 0x81) {
                uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                                  (&local_90,(long)local_70 + (ulong)local_64,
                                   (ulong)local_63 - (ulong)local_64);
joined_r0x00aae78c:
                if (((uVar6 & 1) == 0) &&
                   ((local_74[0] != '\x01' ||
                    (uVar6 = (*pcVar12)(uVar1,&DAT_002bd1ec,4), (uVar6 & 1) == 0)))) {
                  local_74[0] = '\0';
                  uVar6 = (*pcVar11)(uVar1,0x27);
                  if ((uVar6 & 1) == 0) {
                    uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                                      (&local_90,&DAT_003905a2,2);
                    uVar6 = uVar6 & 0xffffffff;
                    goto LAB_00aae640;
                  }
                }
              }
              else if ((local_74[0] != '\x01') ||
                      (uVar6 = (*pcVar12)(uVar1,&DAT_002bd1ec,4), (uVar6 & 1) == 0)) {
                local_74[0] = iVar5 == 10;
                uVar6 = (*pcVar11)(uVar1,iVar5);
                goto joined_r0x00aae78c;
              }
              uVar6 = 1;
            }
          }
        }
LAB_00aae640:
      } while (pbVar13 != pbVar3);
    }
  }
LAB_00aae5cc:
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar8 = (*pcVar12)(uVar1,&DAT_003905bf,1);
  if ((uVar8 & 1) == 0) {
    uVar9 = (*pcVar12)(uVar1,&DAT_003905a9,1);
    return uVar9;
  }
  return 1;
}


// ===== 00aae9a8  <core::str::error::Utf8Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::error::Utf8Error as core::fmt::Display>::fmt */

void __rustcall
<core::str::error::Utf8Error_as_core::fmt::Display>::fmt(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 local_34 [4];
  undefined1 *local_30;
  undefined *local_28;
  undefined1 *puStack_20;
  undefined *local_18;
  
  if (param_1[8] == '\x01') {
    local_34[0] = param_1[9];
    local_30 = local_34;
    local_28 = PTR_fmt_00b00c18;
    local_18 = PTR_fmt_00b00c60;
    puStack_20 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002b057d,&local_30);
    return;
  }
  local_28 = PTR_fmt_00b00c60;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab57c,&local_30);
  return;
}


// ===== 00aaea3c  <core::panic::panic_info::PanicInfo_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panic::panic_info::PanicInfo as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::panic::panic_info::PanicInfo_as_core::fmt::Display>::fmt
          (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  code *pcStack_58;
  undefined8 *local_50;
  undefined *local_48;
  long lStack_40;
  undefined *local_38;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar2 = (*pcVar5)(uVar3,"panicked at ",0xc);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  puVar4 = (undefined8 *)param_1[1];
  pcStack_58 = FUN_00aa767c;
  local_50 = puVar4 + 2;
  local_70 = *puVar4;
  uStack_68 = puVar4[1];
  lStack_40 = (long)puVar4 + 0x14;
  local_48 = PTR_fmt_00b00c40;
  local_38 = PTR_fmt_00b00c40;
  local_60 = (undefined1 *)&local_70;
  uVar2 = core::fmt::write(uVar3,lVar1,&DAT_002ba925,&local_60);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = (*pcVar5)(uVar3,":\n",2);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar3 = core::fmt::write(uVar3,lVar1,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
  return uVar3;
}


// ===== 00aaeb54  <i8_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::Display>::fmt */

void __rustcall <i8_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_14 [2];
  undefined2 local_12;
  
  cVar3 = *param_1;
  uVar4 = (uint)cVar3;
  uVar1 = -(int)cVar3;
  if (-1 < cVar3) {
    uVar1 = uVar4;
  }
  uVar6 = (ulong)uVar1;
  if (uVar1 < 10) {
    lVar5 = 3;
  }
  else {
    uVar6 = (ulong)(99 < (uVar1 & 0xff));
    uVar2 = uVar1 * 2;
    if (99 < (uVar1 & 0xff)) {
      uVar2 = uVar1 * 2 + 0x38;
    }
    local_12 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)uVar2 & 0xfe));
    lVar5 = 1;
  }
  if ((uVar4 == 0) || ((uVar6 & 0xff) != 0)) {
    auStack_14[lVar5] = (&DAT_00390ba8)[(uVar6 & 0x7f) * 2];
    lVar5 = lVar5 + -1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,uVar4 >> 7 & 1 ^ 1,1,0,auStack_14 + lVar5 + 1,3 - lVar5);
  return;
}


// ===== 00aaec14  <core::any::TypeId_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::any::TypeId as core::fmt::Debug>::fmt */

void __rustcall
<core::any::TypeId_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = *param_1;
  local_28 = param_1[1];
  puStack_18 = PTR_fmt_00b01098;
  core::fmt::write(*param_2,param_2[1],&DAT_003963d4,&local_20);
  return;
}


// ===== 00aaec5c  <u8_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::pat::RangePattern>::sub_one */

int __rustcall <u8_as_core::pat::RangePattern>::sub_one(uint param_1,undefined8 param_2)

{
  if ((param_1 & 0xff) != 0) {
    return param_1 - 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aaec88  <core::time::Duration_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::time::Duration as core::fmt::Debug>::fmt */

void __rustcall <core::time::Duration_as_core::fmt::Debug>::fmt(long *param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = (ulong)uVar2;
  uVar3 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  pcVar1 = "+";
  if ((*(uint *)(param_2 + 0x10) & 0x200000) == 0) {
    pcVar1 = (char *)0x1;
  }
  if (*param_1 != 0) {
    FUN_00aa4788(param_2,*param_1,uVar4,100000000,pcVar1,uVar3,"s",1);
    return;
  }
  if (999999 < uVar2) {
    FUN_00aa4788(param_2,uVar4 / 1000000,uVar2 % 1000000,100000,pcVar1,uVar3,"ms",2);
    return;
  }
  if (999 < uVar2) {
    FUN_00aa4788(param_2,(ulong)uVar2 / 1000,uVar2 % 1000,100,pcVar1,uVar3,&DAT_003963e8,3);
    return;
  }
  FUN_00aa4788(param_2,uVar4,0,1,pcVar1,uVar3,&DAT_003963e6,2);
  return;
}


// ===== 00aaed6c  <core::wtf8::Wtf8CodePoints_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::Wtf8CodePoints as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::wtf8::Wtf8CodePoints_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar6 = *param_2;
  lVar2 = param_2[1];
  pcVar7 = *(code **)(lVar2 + 0x18);
  uVar5 = (*pcVar7)(uVar6,"Wtf8CodePoints",0xe);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  lVar1 = *param_1;
  lVar3 = param_1[1];
  if (*(char *)((long)param_2 + 0x12) < '\0') {
    uVar5 = (*pcVar7)(uVar6,&DAT_003905ab,2);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    local_68 = local_5c;
    uStack_48 = param_2[2];
    local_5c[0] = 1;
    local_58 = &local_78;
    local_50 = &DAT_00aff790;
    local_78 = uVar6;
    lStack_70 = lVar2;
    iVar4 = <core::wtf8::Wtf8_as_core::fmt::Debug>::fmt(lVar1,lVar3 - lVar1,&local_58);
    if (iVar4 != 0) {
      return 1;
    }
    uVar5 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_78,&DAT_003905a2,2);
  }
  else {
    uVar5 = (*pcVar7)(uVar6,&DAT_003905aa,1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar5 = <core::wtf8::Wtf8_as_core::fmt::Debug>::fmt(lVar1,lVar3 - lVar1,param_2);
  }
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  uVar6 = (*pcVar7)(uVar6,&DAT_003905a9,1);
  return uVar6;
}


// ===== 00aaeeb0  <u8_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::Binary>::fmt */

void __rustcall <u8_as_core::fmt::Binary>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaef24  <f16_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::Debug>::fmt */

void __rustcall <f16_as_core::fmt::Debug>::fmt(float2 *param_1,long param_2)

{
  uint uVar1;
  float2 fVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  fVar2 = *param_1;
  if ((uVar1 >> 0x1c & 1) != 0) {
    FUN_00a92c0c(param_2,uVar1 >> 0x15 & 1,*(undefined2 *)(param_2 + 0x16));
    return;
  }
  if ((ABS(fVar2) != FLOAT_UNKNOWN) && (0.000100016594 <= (float)ABS(fVar2) || (float)fVar2 == 0.0))
  {
    FUN_00a935cc(param_2,uVar1 >> 0x15 & 1,1);
    return;
  }
  FUN_00a946ac(param_2,uVar1 >> 0x15 & 1,0);
  return;
}


// ===== 00aaefa8  <core::net::socket_addr::SocketAddr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddr as core::str::traits::FromStr>::from_str */

void __rustcall <core::net::socket_addr::SocketAddr_as_core::str::traits::FromStr>::from_str(void)

{
  (*(code *)PTR_parse_ascii_00b07bd0)();
  return;
}


// ===== 00aaefac  <core::fmt::Formatter_as_core::fmt::Write>::write_char =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Formatter as core::fmt::Write>::write_char */

void __rustcall <core::fmt::Formatter_as_core::fmt::Write>::write_char(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aaefb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 00aaefb8  <u16_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::pat::RangePattern>::sub_one */

int __rustcall <u16_as_core::pat::RangePattern>::sub_one(uint param_1,undefined8 param_2)

{
  if ((param_1 & 0xffff) != 0) {
    return param_1 - 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aaefe4  <core::time::TryFromFloatSecsError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::time::TryFromFloatSecsError as core::fmt::Display>::fmt */

void __rustcall
<core::time::TryFromFloatSecsError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad
              (param_2,
               "cannot convert float seconds to Duration: value is either too big or NaNinvalid IP address syntaxinvalid IPv4 address syntaxinvalid IPv6 address syntaxinvalid socket address syntaxinvalid IPv4 socket address syntaxinvalid IPv6 socket address syntax"
               ,0x48);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"cannot convert float seconds to Duration: value is negative",0x3b);
  return;
}


// ===== 00aaf014  <i8_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::Binary>::fmt */

void __rustcall <i8_as_core::fmt::Binary>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaf088  <f16_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::Display>::fmt */

void __rustcall <f16_as_core::fmt::Display>::fmt(undefined2 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a935cc(param_2,uVar1,0);
    return;
  }
  FUN_00a92c0c(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16));
  return;
}


// ===== 00aaf0b4  <core::net::parser::AddrParseError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::AddrParseError as core::fmt::Display>::fmt */

void __rustcall
<core::net::parser::AddrParseError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,&DAT_00396860 + *(int *)(&DAT_00396860 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_00396830 + (ulong)*param_1 * 8));
  return;
}


// ===== 00aaf0dc  <core::fmt::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Error as core::fmt::Display>::fmt */

void __rustcall <core::fmt::Error_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"an error occurred when formatting an argument",0x2d);
  return;
}


// ===== 00aaf0f0  <u32_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::pat::RangePattern>::sub_one */

int __rustcall <u32_as_core::pat::RangePattern>::sub_one(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aaf118  FUN_00aaf118 =====

void FUN_00aaf118(undefined4 *param_1,undefined8 *param_2)

{
  if (0x80 < (ulong)*(byte *)((long)param_1 + 0xd)) {
                    /* WARNING: Could not recover jumptable at 0x00aaf134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x20))(*param_2,*param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aaf14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,(long)param_1 + (ulong)*(byte *)(param_1 + 3),
             (ulong)*(byte *)((long)param_1 + 0xd) - (ulong)*(byte *)(param_1 + 3));
  return;
}


// ===== 00aaf150  <u8_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::Octal>::fmt */

void __rustcall <u8_as_core::fmt::Octal>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaf1c4  <f16_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::LowerExp>::fmt */

void __rustcall <f16_as_core::fmt::LowerExp>::fmt(undefined2 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a946ac(param_2,uVar1,0);
    return;
  }
  FUN_00a93d58(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),0);
  return;
}


// ===== 00aaf1f4  <usize_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::pat::RangePattern>::sub_one */

long __rustcall <usize_as_core::pat::RangePattern>::sub_one(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59,param_2);
}


// ===== 00aaf21c  <core::wtf8::EncodeWide_as_core::fmt::Debug>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::EncodeWide as core::fmt::Debug>::fmt */

undefined8 __rustcall <core::wtf8::EncodeWide_as_core::fmt::Debug>::fmt(long *param_1,long *param_2)

{
  uint **ppuVar1;
  undefined *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_94 [4];
  uint **local_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined1 local_78 [4];
  uint local_74;
  uint *local_70;
  undefined *local_68;
  
  ppuVar1 = (uint **)*param_2;
  puVar2 = (undefined *)param_2[1];
  pcVar13 = *(code **)(puVar2 + 0x18);
  uVar6 = (*pcVar13)(ppuVar1,"EncodeWide(",0xb);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar6 = (*pcVar13)(ppuVar1,&DAT_00390c71,1);
  pbVar12 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  pbVar11 = pbVar12;
  uVar14 = (uint)*(ushort *)(param_1 + 2);
  if (*(ushort *)(param_1 + 2) == 0) {
    if (pbVar12 == pbVar3) {
LAB_00aaf6e4:
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      uVar6 = (*pcVar13)(ppuVar1,&DAT_003905bf,1);
      if ((uVar6 & 1) == 0) {
        uVar8 = (*pcVar13)(ppuVar1,&DAT_003905a9,1);
        return uVar8;
      }
      return 1;
    }
    pbVar11 = pbVar12 + 1;
    uVar14 = (uint)*pbVar12;
    if (-1 < (char)*pbVar12) goto LAB_00aaf288;
    if (uVar14 < 0xe0) {
      uVar14 = pbVar12[1] & 0x3f | (uVar14 & 0x1f) << 6;
      pbVar11 = pbVar12 + 2;
      uVar15 = 0;
    }
    else {
      uVar15 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
      if (uVar14 < 0xf0) {
        uVar15 = uVar15 | (uVar14 & 0x1f) << 0xc;
        pbVar11 = pbVar12 + 3;
      }
      else {
        pbVar11 = pbVar12 + 4;
        uVar15 = pbVar12[3] & 0x3f | uVar15 << 6 | (uVar14 & 7) << 0x12;
      }
      uVar14 = uVar15;
      if (uVar15 < 0x10000) goto LAB_00aaf288;
      uVar14 = uVar15 + 0xff0000 >> 10 | 0xd800;
      uVar15 = uVar15 & 0x3ff | 0xdc00;
    }
  }
  else {
LAB_00aaf288:
    uVar15 = 0;
  }
  uVar4 = *(uint *)(param_2 + 2);
  local_94._0_2_ = (undefined2)uVar14;
  if ((uVar6 & 1) == 0) {
    if ((uVar4 >> 0x17 & 1) == 0) {
      if ((uVar14 ^ 0xffefd800) < 0xffef0800) {
        local_90 = (uint **)local_94;
        puVar9 = &DAT_00395ee3;
        local_88 = PTR_fmt_00b00e58;
      }
      else {
        local_70 = (uint *)CONCAT44(local_70._4_4_,uVar14);
        local_90 = &local_70;
        puVar9 = &DAT_002ab692;
        local_88 = PTR_fmt_00b00df8;
      }
      uVar6 = core::fmt::write(ppuVar1,puVar2,puVar9,&local_90);
    }
    else {
      uVar6 = 1;
      uVar7 = (*pcVar13)(ppuVar1,&DAT_003905ae,1);
      if ((uVar7 & 1) != 0) goto joined_r0x00aaf578;
      local_80 = local_78;
      local_78[0] = 1;
      if ((uVar14 ^ 0xffefd800) < 0xffef0800) {
        local_70 = (uint *)local_94;
        local_68 = PTR_fmt_00b00e58;
        local_90 = ppuVar1;
        local_88 = puVar2;
        uVar6 = core::fmt::write(&local_90,&DAT_00aff790,&DAT_00395ee3,&local_70);
      }
      else {
        local_70 = &local_74;
        local_68 = PTR_fmt_00b00df8;
        local_90 = ppuVar1;
        local_88 = puVar2;
        local_74 = uVar14;
        uVar6 = core::fmt::write(&local_90,&DAT_00aff790,&DAT_002ab692,&local_70);
      }
      if ((uVar6 & 1) != 0) goto LAB_00aaf2a0;
      uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                        (&local_90,&DAT_003905a2,2);
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
LAB_00aaf2a0:
    uVar6 = 1;
  }
joined_r0x00aaf578:
  if ((uVar4 >> 0x17 & 1) == 0) {
LAB_00aaf5c4:
    pbVar12 = pbVar11;
    if (uVar15 == 0) {
      if (pbVar11 == pbVar3) goto LAB_00aaf6e4;
      pbVar12 = pbVar11 + 1;
      uVar15 = (uint)*pbVar11;
      if (-1 < (char)*pbVar11) goto LAB_00aaf5ec;
      if (uVar15 < 0xe0) {
        local_94._0_2_ = (ushort)(pbVar11[1] & 0x3f) | (ushort)((uVar15 & 0x1f) << 6);
        pbVar12 = pbVar11 + 2;
        uVar15 = 0;
      }
      else {
        uVar14 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
        if (uVar15 < 0xf0) {
          uVar15 = uVar14 | (uVar15 & 0x1f) << 0xc;
          pbVar12 = pbVar11 + 3;
        }
        else {
          pbVar12 = pbVar11 + 4;
          uVar15 = pbVar11[3] & 0x3f | uVar14 << 6 | (uVar15 & 7) << 0x12;
        }
        if (uVar15 < 0x10000) goto LAB_00aaf5ec;
        local_94._0_2_ = (ushort)(uVar15 + 0xff0000 >> 10) | 0xd800;
        uVar15 = uVar15 & 0x3ff | 0xdc00;
      }
    }
    else {
LAB_00aaf5ec:
      local_94._0_2_ = (undefined2)uVar15;
      uVar15 = 0;
    }
    uVar7 = uVar6 & 1;
    uVar6 = 1;
    pbVar11 = pbVar12;
    if (uVar7 == 0) {
      uVar7 = (*pcVar13)(ppuVar1,&DAT_0039059b,2);
      uVar6 = 1;
      if ((uVar7 & 1) == 0) {
        if (((ushort)local_94._0_2_ ^ 0xffefd800) < 0xffef0800) {
          local_90 = (uint **)local_94;
          puVar9 = &DAT_00395ee3;
          local_88 = PTR_fmt_00b00e58;
        }
        else {
          local_70 = (uint *)CONCAT44(local_70._4_4_,(uint)(ushort)local_94._0_2_);
          local_90 = &local_70;
          puVar9 = &DAT_002ab692;
          local_88 = PTR_fmt_00b00df8;
        }
        uVar6 = core::fmt::write(ppuVar1,puVar2,puVar9,&local_90);
        uVar6 = uVar6 & 0xffffffff;
      }
    }
    goto LAB_00aaf5c4;
  }
LAB_00aaf2d8:
  do {
    if (uVar15 == 0) {
      if (pbVar11 == pbVar3) goto LAB_00aaf6e4;
      pbVar12 = pbVar11 + 1;
      bVar5 = *pbVar11;
      uVar15 = (uint)bVar5;
      if (-1 < (char)bVar5) {
        local_94._0_2_ = ZEXT12(bVar5);
        goto joined_r0x00aaf2f4;
      }
      if (uVar15 < 0xe0) {
        uVar15 = pbVar11[1] & 0x3f | (uVar15 & 0x1f) << 6;
        local_94._0_2_ = (undefined2)uVar15;
        pbVar12 = pbVar11 + 2;
        goto joined_r0x00aaf2f4;
      }
      uVar14 = (pbVar11[1] & 0x3f) << 6;
      uVar10 = pbVar11[2] & 0x3f | uVar14;
      if (uVar15 < 0xf0) {
        uVar14 = (uVar15 & 0x1f) << 0xc;
        uVar10 = uVar10 | uVar14;
        pbVar11 = pbVar11 + 3;
        if (uVar14 >> 0x10 == 0) goto LAB_00aaf3d8;
LAB_00aaf378:
        uVar14 = uVar10 + 0xff0000 >> 10 | 0xd800;
        local_94._0_2_ = (undefined2)uVar14;
        uVar4 = uVar10 & 0x3ff | 0xdc00;
      }
      else {
        pbVar12 = pbVar11 + 3;
        pbVar11 = pbVar11 + 4;
        uVar10 = *pbVar12 & 0x3f | uVar10 << 6 | (uVar15 & 7) << 0x12;
        if ((uVar14 & 0x3fffc00) != 0 || (bVar5 & 7) != 0) goto LAB_00aaf378;
LAB_00aaf3d8:
        local_94._0_2_ = (undefined2)uVar10;
        uVar4 = 0;
        uVar14 = uVar10;
      }
    }
    else {
      local_94._0_2_ = (undefined2)uVar15;
      pbVar12 = pbVar11;
joined_r0x00aaf2f4:
      pbVar11 = pbVar12;
      uVar4 = 0;
      uVar14 = uVar15;
    }
    uVar15 = uVar4;
    uVar7 = uVar6 & 1;
    uVar6 = 1;
    if (uVar7 == 0) {
      local_78[0] = 1;
      local_80 = local_78;
      if ((uVar14 ^ 0xffefd800) < 0xffef0800) {
        local_70 = (uint *)local_94;
        local_68 = PTR_fmt_00b00e58;
        local_90 = ppuVar1;
        local_88 = puVar2;
        uVar6 = core::fmt::write(&local_90,&DAT_00aff790,&DAT_00395ee3,&local_70);
        if ((uVar6 & 1) != 0) {
          uVar6 = 1;
          goto LAB_00aaf2d8;
        }
      }
      else {
        local_70 = &local_74;
        local_68 = PTR_fmt_00b00df8;
        local_90 = ppuVar1;
        local_88 = puVar2;
        local_74 = uVar14;
        uVar6 = core::fmt::write(&local_90,&DAT_00aff790,&DAT_002ab692,&local_70);
        if ((uVar6 & 1) != 0) {
          uVar6 = 1;
          goto LAB_00aaf2d8;
        }
      }
      uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                        (&local_90,&DAT_003905a2,2);
      uVar6 = uVar6 & 0xffffffff;
    }
  } while( true );
}


// ===== 00aaf810  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::CustomOwner as core::ops::drop::Drop>::drop */

void __rustcall <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aaf818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00aaf81c  <i8_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::Octal>::fmt */

void __rustcall <i8_as_core::fmt::Octal>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaf890  <f16_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::UpperExp>::fmt */

void __rustcall <f16_as_core::fmt::UpperExp>::fmt(undefined2 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00a946ac(param_2,uVar1,1);
    return;
  }
  FUN_00a93d58(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),1);
  return;
}


// ===== 00aaf8c0  <core::num::niche_types::Nanoseconds_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::Nanoseconds as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::Nanoseconds_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(undefined *)((long)&local_14 + lVar4 + 1) = (&DAT_002a0ca0)[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
LAB_00aaf9cc:
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_2,1,"0x",2,(long)&local_12 + lVar5,-lVar5);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(undefined *)((long)&local_14 + lVar4 + 1) = (&DAT_0029f430)[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
    goto LAB_00aaf9cc;
  }
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_00aafa40;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)uVar1;
    do {
      uVar9 = uVar3;
      lVar4 = lVar5;
      uVar6 = (uint)(uVar9 / 10000);
      uVar7 = (uint)(uVar9 / 10000);
      uVar2 = (uint)uVar9 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&local_14 + lVar4) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar8 * 2);
      *(undefined2 *)((long)&local_12 + lVar4) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar5 = lVar4 + -4;
      uVar3 = uVar9 / 10000;
    } while (9999999 < (uint)uVar9);
    lVar4 = lVar4 + 6;
    uVar8 = (uint)(uVar9 / 10000);
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_00aafa40;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_00aafa40:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_00390ba8)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 00aafa90  <usize_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::Display>::fmt */

void __rustcall <usize_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_44 [20];
  
  lVar1 = FUN_00a9c794(*param_1,auStack_44,0x14);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_44 + lVar1,0x14 - lVar1);
  return;
}


// ===== 00aafaf0  <u128_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::pat::RangePattern>::sub_one */

undefined1  [16] __rustcall <u128_as_core::pat::RangePattern>::sub_one(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if (param_1 != 0 || param_2 != 0) {
    auVar1._8_8_ = param_2 + -1 + (ulong)(param_1 != 0);
    auVar1._0_8_ = param_1 + -1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00396104,0x59);
}


// ===== 00aafb20  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::advance_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::advance_by */

long __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::advance_by
          (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + param_2;
  lVar2 = param_1[1];
  if (param_2 <= (ulong)(param_1[1] - *param_1)) {
    lVar2 = lVar1;
  }
  *param_1 = lVar2;
  return lVar1 - lVar2;
}


// ===== 00aafb44  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::__iterator_get_unchecked
    */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked
          (long *param_1,long param_2)

{
  return *(undefined4 *)((long)param_1 + param_2 * 4 + *param_1 * 4 + 0x10);
}


// ===== 00aafb58  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::last =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::last */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::last(long *param_1)

{
  long lStack_10;
  long lStack_8;
  
  lStack_8 = param_1[3];
  lStack_10 = param_1[2];
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  return *(undefined4 *)((long)&lStack_10 + (param_1[1] + -1) * 4);
}


// ===== 00aafb94  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::next */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] == lVar1) {
    return 0xffffffff;
  }
  *param_1 = lVar1 + 1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 00aafbc0  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::count =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::count */

long __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::count(long *param_1)

{
  return param_1[1] - *param_1;
}


// ===== 00aafbcc  <u8_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::LowerHex>::fmt */

void __rustcall <u8_as_core::fmt::LowerHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aafc40  <i64_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::Display>::fmt */

void __rustcall <i64_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_44 [20];
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  lVar1 = FUN_00a9c794(lVar1,auStack_44,0x14);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,(uint)((ulong)lVar2 >> 0x3f) ^ 1,1,0,auStack_44 + lVar1,0x14 - lVar1);
  return;
}


// ===== 00aafcac  <core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as
   core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by */

long __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::
advance_back_by(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  lVar1 = *param_1;
  if (param_2 <= (ulong)(lVar2 - *param_1)) {
    lVar1 = lVar2 - param_2;
  }
  param_1[1] = lVar1;
  return (param_2 - lVar2) + lVar1;
}


// ===== 00aafcd4  <core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::double_ended::DoubleEndedIterator>::next_back
    */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (long *param_1)

{
  long lVar1;
  
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  lVar1 = param_1[1] + -1;
  param_1[1] = lVar1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 00aafcfc  <i8_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::LowerHex>::fmt */

void __rustcall <i8_as_core::fmt::LowerHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aafd70  <core::task::wake::LocalWaker_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::task::wake::LocalWaker as core::fmt::Debug>::fmt */

byte __rustcall
<core::task::wake::LocalWaker_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_38 = *param_1;
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,"LocalWaker",10);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_30,&DAT_002bd1f4,4,param_1 + 1,&DAT_00b00288);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_30,"vtablePhantomInvariantLifetime",6,&local_38,&DAT_00b002a8);
  bVar1 = local_27 | local_28;
  if ((local_27 == 1) && ((local_28 & 1) == 0)) {
    if (*(char *)((long)local_30 + 0x12) < '\0') {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00aafe58  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as core::fmt::Display>::fmt */

void __rustcall <bool_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  if ((*param_1 & 1) != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"true",4);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"false",5);
  return;
}


// ===== 00aafe84  <core::io::error::ErrorKind_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::ErrorKind as core::fmt::Display>::fmt */

void __rustcall
<core::io::error::ErrorKind_as_core::fmt::Display>::fmt(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aafea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,(&PTR_DAT_00b00380)[*param_1],
             *(undefined8 *)(&DAT_00396878 + (ulong)*param_1 * 8));
  return;
}


// ===== 00aafeac  <u8_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::UpperHex>::fmt */

void __rustcall <u8_as_core::fmt::UpperHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00aaff20  <str_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::fmt::Debug>::fmt */

undefined8 __rustcall
<str_as_core::fmt::Debug>::fmt(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  code *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  code *pcVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined4 local_70 [3];
  byte local_64;
  byte local_63;
  
  uVar7 = *param_3;
  lVar2 = param_3[1];
  pcVar13 = *(code **)(lVar2 + 0x20);
  uVar5 = (*pcVar13)(uVar7,0x22);
  if ((uVar5 & 1) == 0) {
    if (param_2 == (byte *)0x0) {
      pbVar15 = (byte *)0x0;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar15 = (byte *)0x0;
      pbVar8 = param_2;
      pbVar1 = (byte *)0x0;
      pbVar14 = param_1;
      do {
        pbVar12 = pbVar1;
        pbVar19 = (byte *)0x0;
        while( true ) {
          bVar3 = pbVar14[(long)pbVar19];
          if (((bVar3 - 0x7f < 0xffffffa1) || (bVar3 == 0x22)) || (bVar3 == 0x5c)) break;
          pbVar19 = pbVar19 + 1;
          if (pbVar8 == pbVar19) {
            pbVar8 = pbVar8 + (long)pbVar12;
            if (pbVar15 <= pbVar8) goto LAB_00ab01a8;
            goto code_r0x00ab01e0;
          }
        }
        pbVar10 = pbVar14 + (long)pbVar19 + 1;
        bVar3 = pbVar14[(long)pbVar19];
        uVar16 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          bVar3 = *pbVar10;
          pbVar10 = pbVar14 + (long)(pbVar19 + 2);
          if (uVar16 < 0xe0) {
            uVar16 = bVar3 & 0x3f | (uVar16 & 0x1f) << 6;
          }
          else {
            uVar4 = *pbVar10 & 0x3f | (bVar3 & 0x3f) << 6;
            pbVar10 = pbVar14 + (long)(pbVar19 + 3);
            if (uVar16 < 0xf0) {
              uVar16 = uVar4 | (uVar16 & 0x1f) << 0xc;
            }
            else {
              bVar3 = *pbVar10;
              pbVar10 = pbVar14 + (long)(pbVar19 + 4);
              uVar16 = bVar3 & 0x3f | uVar4 << 6 | (uVar16 & 7) << 0x12;
            }
          }
        }
        FUN_00a95e3c(local_70,uVar16,0x10001);
        bVar3 = local_63;
        uVar18 = (ulong)local_63;
        uVar5 = (ulong)local_64;
        if ((byte)(local_63 - local_64) != '\x01') {
          pbVar1 = pbVar19 + (long)pbVar12;
          if (((pbVar1 < pbVar15) || (param_2 < pbVar1)) ||
             ((pbVar15 != param_2 &&
              (((pbVar15 != (byte *)0x0 &&
                (iVar9 = (int)(char)param_1[(long)pbVar15],
                iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))) ||
               ((pbVar1 != param_2 &&
                (iVar9 = (int)(char)param_1[(long)(pbVar19 + (long)pbVar12)],
                iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_1,param_2,pbVar15,pbVar12 + (long)pbVar19,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00320);
          }
          pcVar17 = *(code **)(lVar2 + 0x18);
          uVar6 = (*pcVar17)(uVar7,param_1 + (long)pbVar15,pbVar19 + ((long)pbVar12 - (long)pbVar15)
                            );
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          if (bVar3 < 0x81) {
            uVar5 = (*pcVar17)(uVar7,(long)local_70 + uVar5,uVar18 - uVar5);
          }
          else {
            uVar5 = (*pcVar13)(uVar7,local_70[0]);
          }
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          if (uVar16 < 0x80) {
            lVar11 = 1;
          }
          else if (uVar16 < 0x800) {
            lVar11 = 2;
          }
          else {
            lVar11 = 3;
            if (0xffff < uVar16) {
              lVar11 = 4;
            }
          }
          pbVar15 = pbVar19 + (long)(pbVar12 + lVar11);
        }
        if (uVar16 < 0x80) {
          lVar11 = 1;
        }
        else if (uVar16 < 0x800) {
          lVar11 = 2;
        }
        else {
          lVar11 = 3;
          if (0xffff < uVar16) {
            lVar11 = 4;
          }
        }
        pbVar8 = pbVar14 + ((long)pbVar8 - (long)pbVar10);
        pbVar1 = pbVar19 + (long)(pbVar12 + lVar11);
        pbVar14 = pbVar10;
      } while (pbVar8 != (byte *)0x0);
      pbVar8 = pbVar19 + (long)(pbVar12 + lVar11);
      if (pbVar8 < pbVar15) {
code_r0x00ab01e0:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_1,param_2,pbVar15,pbVar8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00338);
      }
LAB_00ab01a8:
      if ((param_2 < pbVar8) ||
         ((pbVar15 != param_2 &&
          (((pbVar15 != (byte *)0x0 &&
            (iVar9 = (int)(char)param_1[(long)pbVar15],
            iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))) ||
           ((pbVar8 != param_2 &&
            (iVar9 = (int)(char)param_1[(long)pbVar8],
            iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))))))))) goto code_r0x00ab01e0;
    }
    uVar5 = (**(code **)(lVar2 + 0x18))(uVar7,param_1 + (long)pbVar15,(long)pbVar8 - (long)pbVar15);
    if ((uVar5 & 1) == 0) {
      uVar7 = (*pcVar13)(uVar7,0x22);
      return uVar7;
    }
  }
  return 1;
}


// ===== 00ab0280  <i8_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::UpperHex>::fmt */

void __rustcall <i8_as_core::fmt::UpperHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab02f4  <str_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::fmt::Display>::fmt */

void __rustcall
<str_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_3,param_1,param_2);
  return;
}


// ===== 00ab0308  <u16_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::Binary>::fmt */

void __rustcall <u16_as_core::fmt::Binary>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab037c  <char_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <char as core::fmt::Debug>::fmt */

undefined8 __rustcall <char_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 local_40 [3];
  byte local_34;
  byte local_33;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  pcVar4 = *(code **)(lVar1 + 0x20);
  uVar2 = (*pcVar4)(uVar3,0x27);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  FUN_00a95e3c(local_40,*param_1,0x101);
  if ((ulong)local_33 < 0x81) {
    uVar2 = (**(code **)(lVar1 + 0x18))
                      (uVar3,(long)local_40 + (ulong)local_34,(ulong)local_33 - (ulong)local_34);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar2 = (*pcVar4)(uVar3,local_40[0]);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  uVar3 = (*pcVar4)(uVar3,0x27);
  return uVar3;
}


// ===== 00ab0460  <i16_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::Binary>::fmt */

void __rustcall <i16_as_core::fmt::Binary>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_003960d6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab04d4  <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv6Addr as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt(short *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  short **ppsVar17;
  code *pcVar18;
  long lVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  short *local_d0;
  short ***local_c8;
  code *pcStack_c0;
  undefined1 local_a0 [8];
  ulong uStack_98;
  ulong uStack_90;
  short **local_80;
  code *pcStack_78;
  short **local_70;
  undefined1 uStack_61;
  
  local_d0 = param_1;
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) != 0) {
    local_a0 = (undefined1  [8])&local_c8;
    local_80 = &local_d0;
    uStack_90 = _UNK_0029f8d8;
    uStack_98 = _s___0029f8d0;
    pcStack_78 = FUN_00aa7674;
    iVar8 = core::fmt::write(local_a0,&DAT_00b001f8,&DAT_002ab692,&local_80);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0039066c,0x2b,&uStack_61,&DAT_00aff698,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00368);
    }
    if (uStack_90 <= uStack_98) {
      uVar9 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_a0);
      return uVar9;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uStack_90,uStack_98,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00240);
  }
  uVar14 = *(ulong *)(param_1 + 1);
  bVar20 = (byte)uVar14;
  bVar21 = (byte)(uVar14 >> 0x10);
  bVar22 = (byte)(uVar14 >> 0x20);
  bVar23 = (byte)(uVar14 >> 0x30);
  auVar7._8_8_ = _UNK_0029f168;
  auVar7._0_8_ = _DAT_0029f160;
  sVar3 = *param_1;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar14;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar14;
  auVar28 = NEON_ext(auVar24,auVar28,0xe,1);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar24 = NEON_ext(auVar6,ZEXT416(*(uint *)(param_1 + 5)),6,1);
  uVar4 = param_1[5];
  auVar24 = NEON_bit(auVar24,auVar28,auVar7,1);
  auVar25._2_14_ = auVar24._2_14_;
  auVar25._0_2_ = sVar3;
  auVar26._0_14_ = auVar25._0_14_;
  auVar26._14_2_ = param_1[7];
  auVar27 = NEON_rev16(auVar26,1);
  uStack_98 = auVar27._8_8_;
  local_a0 = auVar27._0_8_;
  if (((sVar3 == 0) &&
      (auVar27._0_4_ =
            CONCAT13(bVar23 | (byte)(uVar14 >> 0x38),
                     CONCAT12(bVar22 | (byte)(uVar14 >> 0x28),
                              CONCAT11(bVar21 | (byte)(uVar14 >> 0x18),bVar20 | (byte)(uVar14 >> 8))
                             )), auVar27[4] = bVar20, auVar27[5] = bVar21, auVar27[6] = bVar22,
      auVar27[7] = bVar23, auVar27._8_8_ = 0, auVar27._0_4_ == 0)) && ((uVar4 & uVar4 >> 8) == 0xff)
     ) {
    local_c8 = &local_80;
    local_80 = (short **)CONCAT44(local_80._4_4_,*(undefined4 *)(param_1 + 6));
    pcStack_c0 = (code *)PTR_fmt_00b00fc8;
    uVar9 = core::fmt::write(bVar20,auVar27,auVar28,_DAT_0029f160,*param_2,param_2[1],&DAT_002a5fb4,
                             &local_c8);
    return uVar9;
  }
  sVar5 = (short)uVar14;
  uVar11 = 1;
  if (sVar3 == 0) {
    uVar11 = 2;
  }
  uVar1 = uVar11;
  if (sVar5 != 0) {
    uVar1 = (ulong)(sVar3 == 0);
  }
  uVar15 = 0;
  if (sVar3 != 0) {
    uVar15 = (uint)(sVar5 == 0);
  }
  uVar16 = (ulong)uVar15;
  if ((short)(uVar14 >> 0x10) == 0) {
    uVar10 = uVar16;
    if (sVar5 != 0) {
      uVar11 = 0;
      uVar10 = 2;
    }
    uVar12 = uVar11 + 1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar10;
    }
    if (uVar1 < uVar12) {
      uVar1 = uVar11 + 1;
    }
  }
  else {
    uVar10 = 0;
    uVar12 = 0;
  }
  if ((short)(uVar14 >> 0x20) == 0) {
    uVar13 = 3;
    if (uVar12 != 0) {
      uVar13 = uVar10;
    }
    uVar11 = uVar12 + 1;
    if (uVar1 <= uVar12) {
      uVar16 = uVar13;
    }
    if (uVar1 < uVar11) {
      uVar1 = uVar12 + 1;
    }
  }
  else {
    uVar13 = 0;
    uVar11 = 0;
  }
  if ((short)(uVar14 >> 0x30) == 0) {
    uVar14 = 4;
    if (uVar11 != 0) {
      uVar14 = uVar13;
    }
    uVar10 = uVar11 + 1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar14;
    }
    if (uVar1 < uVar10) {
      uVar1 = uVar11 + 1;
    }
  }
  else {
    uVar14 = 0;
    uVar10 = 0;
  }
  if (uVar4 == 0) {
    uVar11 = 5;
    if (uVar10 != 0) {
      uVar11 = uVar14;
    }
    uVar14 = uVar10 + 1;
    if (uVar1 <= uVar10) {
      uVar16 = uVar11;
    }
    if (uVar1 < uVar14) {
      uVar1 = uVar10 + 1;
    }
  }
  else {
    uVar11 = 0;
    uVar14 = 0;
  }
  if (param_1[6] == 0) {
    uVar10 = 6;
    if (uVar14 != 0) {
      uVar10 = uVar11;
    }
    uVar11 = uVar14 + 1;
    if (uVar1 <= uVar14) {
      uVar16 = uVar10;
    }
    if (uVar1 < uVar11) {
      uVar1 = uVar14 + 1;
    }
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
  }
  ppsVar17 = (short **)((ulong)local_a0 | 2);
  if (param_1[7] == 0) {
    uVar14 = 7;
    if (uVar11 != 0) {
      uVar14 = uVar10;
    }
    if (uVar1 <= uVar11) {
      uVar16 = uVar14;
    }
    if (uVar1 < uVar11 + 1) {
      uVar1 = uVar11 + 1;
    }
    uVar9 = *param_2;
    lVar2 = param_2[1];
  }
  else {
    uVar9 = *param_2;
    lVar2 = param_2[1];
  }
  if (uVar1 < 2) {
    local_70 = (short **)local_a0;
    local_c8 = &local_70;
    pcStack_c0 = FUN_00aa79dc;
    uVar14 = core::fmt::write(bVar20,auVar27,auVar28,_DAT_0029f160,uVar9,lVar2,&DAT_002ab692,
                              &local_c8);
    if ((uVar14 & 1) == 0) {
      pcVar18 = *(code **)(lVar2 + 0x20);
      local_80 = ppsVar17;
      uVar14 = (*pcVar18)(uVar9,0x3a);
      if ((uVar14 & 1) == 0) {
        local_c8 = &local_80;
        pcStack_c0 = FUN_00aa79dc;
        uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
        if ((uVar14 & 1) == 0) {
          local_80 = (short **)((ulong)local_a0 | 4);
          uVar14 = (*pcVar18)(uVar9,0x3a);
          if ((uVar14 & 1) == 0) {
            local_c8 = &local_80;
            pcStack_c0 = FUN_00aa79dc;
            uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
            if ((uVar14 & 1) == 0) {
              local_80 = (short **)((ulong)local_a0 | 6);
              uVar14 = (*pcVar18)(uVar9,0x3a);
              if ((uVar14 & 1) == 0) {
                local_c8 = &local_80;
                pcStack_c0 = FUN_00aa79dc;
                uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
                if ((uVar14 & 1) == 0) {
                  local_80 = (short **)((ulong)local_a0 | 8);
                  uVar14 = (*pcVar18)(uVar9,0x3a);
                  if ((uVar14 & 1) == 0) {
                    local_c8 = &local_80;
                    pcStack_c0 = FUN_00aa79dc;
                    uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
                    if ((uVar14 & 1) == 0) {
                      local_80 = (short **)((ulong)local_a0 | 10);
                      uVar14 = (*pcVar18)(uVar9,0x3a);
                      if ((uVar14 & 1) == 0) {
                        local_c8 = &local_80;
                        pcStack_c0 = FUN_00aa79dc;
                        uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
                        if ((uVar14 & 1) == 0) {
                          local_80 = (short **)((ulong)local_a0 | 0xc);
                          uVar14 = (*pcVar18)(uVar9,0x3a);
                          if ((uVar14 & 1) == 0) {
                            local_c8 = &local_80;
                            pcStack_c0 = FUN_00aa79dc;
                            uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
                            if ((uVar14 & 1) == 0) {
                              local_80 = (short **)((ulong)local_a0 | 0xe);
                              uVar14 = (*pcVar18)(uVar9,0x3a);
                              if ((uVar14 & 1) == 0) {
                                local_c8 = &local_80;
                                pcStack_c0 = FUN_00aa79dc;
                                uVar9 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
                                if ((int)uVar9 == 0) {
                                  return uVar9;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (uVar16 != 0) {
      local_70 = (short **)local_a0;
      local_c8 = &local_70;
      pcStack_c0 = FUN_00aa79dc;
      uVar14 = core::fmt::write(bVar20,auVar27,auVar28,_DAT_0029f160,uVar9,lVar2,&DAT_002ab692,
                                &local_c8);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
      if (uVar16 != 1) {
        pcVar18 = *(code **)(lVar2 + 0x20);
        lVar19 = uVar16 * 2 + -2;
        do {
          local_80 = ppsVar17;
          uVar14 = (*pcVar18)(uVar9,0x3a);
          if ((uVar14 & 1) != 0) {
            return 1;
          }
          pcStack_c0 = FUN_00aa79dc;
          local_c8 = &local_80;
          uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
          if ((uVar14 & 1) != 0) {
            return 1;
          }
          lVar19 = lVar19 + -2;
          ppsVar17 = (short **)((long)ppsVar17 + 2);
        } while (lVar19 != 0);
      }
    }
    uVar14 = (**(code **)(lVar2 + 0x18))(uVar9,"::",2);
    if ((uVar14 & 1) == 0) {
      uVar1 = uVar1 + uVar16;
      if (8 < uVar1) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar1,8,8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00b00350);
      }
      if (uVar1 != 8) {
        local_70 = (short **)(local_a0 + uVar1 * 2);
        local_c8 = &local_70;
        pcStack_c0 = FUN_00aa79dc;
        uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
        if ((uVar14 & 1) != 0) {
          return 1;
        }
        if (uVar1 != 7) {
          pcVar18 = *(code **)(lVar2 + 0x20);
          ppsVar17 = (short **)(local_a0 + uVar1 * 2 + 2);
          lVar19 = uVar1 * -2 + 0xe;
          do {
            local_80 = ppsVar17;
            uVar14 = (*pcVar18)(uVar9,0x3a);
            if ((uVar14 & 1) != 0) {
              return 1;
            }
            pcStack_c0 = FUN_00aa79dc;
            local_c8 = &local_80;
            uVar14 = core::fmt::write(uVar9,lVar2,&DAT_002ab692,&local_c8);
            if ((uVar14 & 1) != 0) {
              return 1;
            }
            lVar19 = lVar19 + -2;
            ppsVar17 = (short **)((long)ppsVar17 + 2);
          } while (lVar19 != 0);
        }
      }
      return 0;
    }
  }
  return 1;
}


// ===== 00ab0b38  <char_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <char as core::fmt::Display>::fmt */

void __rustcall <char_as_core::fmt::Display>::fmt(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  uint local_14;
  
  uVar1 = *param_1;
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ab0b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x20))(*param_2);
    return;
  }
  bVar4 = (byte)uVar1;
  if (uVar1 < 0x80) {
    local_14 = uVar1 & 0xff;
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&local_14,1);
    return;
  }
  if (uVar1 < 0x800) {
    local_14 = (uint)(bVar4 & 0xffff3f | 0x80) << 8;
    uVar3 = 2;
    bVar4 = (byte)(uVar1 >> 6) | 0xc0;
  }
  else {
    bVar2 = (byte)(uVar1 >> 6);
    if (uVar1 >> 0x10 != 0) {
      local_14 = CONCAT31(CONCAT21(CONCAT11(bVar4,bVar2),(char)(uVar1 >> 0xc)),(char)(uVar1 >> 0x12)
                         ) & 0x3f3f3fff | 0x808080f0;
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&local_14,4);
      return;
    }
    local_14._0_2_ = (bVar2 & 0xff3f | 0x80) << 8;
    uVar3 = 3;
    local_14 = CONCAT12(bVar4,(short)local_14) & 0xff3fffff | 0x800000;
    bVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
  }
  local_14 = CONCAT31(local_14._1_3_,bVar4);
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&local_14,uVar3);
  return;
}


// ===== 00ab0c30  <u16_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::Octal>::fmt */

void __rustcall <u16_as_core::fmt::Octal>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab0ca4  <core::net::ip_addr::Ipv6Addr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv6Addr as core::fmt::Debug>::fmt */

void __rustcall <core::net::ip_addr::Ipv6Addr_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b03dd8)();
  return;
}


// ===== 00ab0ca8  <i16_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::Octal>::fmt */

void __rustcall <i16_as_core::fmt::Octal>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_002a14e0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab0d1c  <core::char::TryFromCharError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::TryFromCharError as core::fmt::Display>::fmt */

void __rustcall
<core::char::TryFromCharError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"unicode code point out of range",0x1f);
  return;
}


// ===== 00ab0d30  <u16_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::LowerHex>::fmt */

void __rustcall <u16_as_core::fmt::LowerHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab0da4  FUN_00ab0da4 =====

void FUN_00ab0da4(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ab0dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,(&PTR_s_NotFound_00b004e0)[*param_1],
             *(undefined8 *)(&DAT_003969d8 + (ulong)*param_1 * 8));
  return;
}


// ===== 00ab0dcc  <i16_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::LowerHex>::fmt */

void __rustcall <i16_as_core::fmt::LowerHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab0e40  <i8_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::LowerExp>::fmt */

void __rustcall <i8_as_core::fmt::LowerExp>::fmt(char *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  iVar1 = -(int)cVar2;
  if (-1 < cVar2) {
    iVar1 = (int)cVar2;
  }
  FUN_00a9fb28(param_2,iVar1,(uint)(int)cVar2 >> 7 & 1 ^ 1,0x65);
  return;
}


// ===== 00ab0e64  <u16_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::UpperHex>::fmt */

void __rustcall <u16_as_core::fmt::UpperHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab0ed8  <core::num::niche_types::NonZeroU8Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU8Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU8Inner_as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_00aad97c(*param_1);
  return;
}


// ===== 00ab0ee0  <u8_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::LowerExp>::fmt */

void __rustcall <u8_as_core::fmt::LowerExp>::fmt(undefined1 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x65);
  return;
}


// ===== 00ab0ef8  FUN_00ab0ef8 =====

void FUN_00ab0ef8(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 local_21;
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *param_1;
  uVar5 = (uint)uVar6;
  if ((uVar5 >> 0x17 & 1) != 0) {
    if ((uVar5 >> 0x1b & 1) == 0) {
      uVar5 = uVar5 | 0x9000000;
      *(undefined2 *)(param_2 + 0x14) = 0x12;
    }
    else {
      uVar5 = uVar5 | 0x1000000;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar5 | 0x800000;
  lVar1 = 0;
  do {
    lVar3 = lVar1;
    uVar4 = uVar2 & 0xf;
    uVar2 = uVar2 >> 4;
    (&local_21)[lVar3] = (&DAT_002a0ca0)[uVar4];
    lVar1 = lVar3 + -1;
  } while (uVar2 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_21 + lVar3,-(lVar3 + -1));
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  return;
}


// ===== 00ab0fac  <i16_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::UpperHex>::fmt */

void __rustcall <i16_as_core::fmt::UpperHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = (&DAT_0029f430)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00ab1020  <i8_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::UpperExp>::fmt */

void __rustcall <i8_as_core::fmt::UpperExp>::fmt(char *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  iVar1 = -(int)cVar2;
  if (-1 < cVar2) {
    iVar1 = (int)cVar2;
  }
  FUN_00a9fb28(param_2,iVar1,(uint)(int)cVar2 >> 7 & 1 ^ 1,0x45);
  return;
}


// ===== 00ab1044  <core::cell::BorrowError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::cell::BorrowError as core::fmt::Display>::fmt */

void __rustcall
<core::cell::BorrowError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"RefCell already mutably borrowed",0x20);
  return;
}


// ===== 00ab1058  <u32_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::Binary>::fmt */

void __rustcall <u32_as_core::fmt::Binary>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 1;
    (&local_11)[lVar3] = (&DAT_003960d6)[uVar4 & 1];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab10cc  <u8_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::UpperExp>::fmt */

void __rustcall <u8_as_core::fmt::UpperExp>::fmt(undefined1 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x45);
  return;
}


// ===== 00ab10e4  FUN_00ab10e4 =====

undefined8 FUN_00ab10e4(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 local_90;
  long lStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 local_44 [4];
  
  uVar5 = *param_3;
  lVar1 = param_3[1];
  pcVar7 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar7)(uVar5,&DAT_00390c71,1);
  if (param_2 == 0) goto LAB_00ab117c;
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_3 + 0x12) < '\0') {
      uVar4 = (*pcVar7)(uVar5,&DAT_003905ae,1);
      uVar3 = 1;
      if ((uVar4 & 1) == 0) {
        local_44[0] = 1;
        local_80 = local_44;
        uStack_68 = param_3[2];
        local_70 = &DAT_00aff790;
        local_90 = uVar5;
        lStack_88 = lVar1;
        local_78 = (undefined1 *)&local_90;
        uVar3 = FUN_00aad97c(*param_1,&local_78);
        if ((uVar3 & 1) != 0) goto LAB_00ab1134;
        uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_003905a2,2);
      }
    }
    else {
      uVar3 = FUN_00aad97c(*param_1,param_3);
    }
  }
  else {
LAB_00ab1134:
    uVar3 = 1;
  }
  param_2 = param_2 + -1;
  if (param_2 != 0) {
    puVar6 = param_1 + 1;
LAB_00ab11fc:
    do {
      if ((uVar3 & 1) == 0) {
        if (-1 < *(char *)((long)param_3 + 0x12)) {
          uVar3 = (**(code **)(param_3[1] + 0x18))(*param_3,&DAT_0039059b,2);
          if ((uVar3 & 1) != 0) goto LAB_00ab11ec;
          uVar3 = FUN_00aad97c(*puVar6,param_3);
          param_2 = param_2 + -1;
          puVar6 = puVar6 + 1;
          if (param_2 == 0) break;
          goto LAB_00ab11fc;
        }
        lStack_88 = param_3[1];
        local_90 = *param_3;
        uStack_68 = param_3[2];
        local_44[0] = 1;
        local_70 = &DAT_00aff790;
        local_80 = local_44;
        local_78 = (undefined1 *)&local_90;
        iVar2 = FUN_00aad97c(*puVar6,&local_78);
        if (iVar2 != 0) goto LAB_00ab11ec;
        uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_003905a2,2);
      }
      else {
LAB_00ab11ec:
        uVar3 = 1;
      }
      puVar6 = puVar6 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
LAB_00ab117c:
  if ((uVar3 & 1) == 0) {
    uVar5 = (**(code **)(param_3[1] + 0x18))(*param_3,&DAT_003905bf,1);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 00ab12d8  <core::cell::BorrowMutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::cell::BorrowMutError as core::fmt::Display>::fmt */

void __rustcall
<core::cell::BorrowMutError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"RefCell already borrowed",0x18);
  return;
}


// ===== 00ab12ec  <i32_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::Binary>::fmt */

void __rustcall <i32_as_core::fmt::Binary>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 1;
    (&local_11)[lVar3] = (&DAT_003960d6)[uVar4 & 1];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_003960d8,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab1360  <i16_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::LowerExp>::fmt */

void __rustcall <i16_as_core::fmt::LowerExp>::fmt(short *param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *param_1;
  iVar1 = -(int)sVar2;
  if (-1 < sVar2) {
    iVar1 = (int)sVar2;
  }
  FUN_00a9fb28(param_2,iVar1,(uint)(int)sVar2 >> 0xf & 1 ^ 1,0x65);
  return;
}


// ===== 00ab1384  <u32_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::Octal>::fmt */

void __rustcall <u32_as_core::fmt::Octal>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 3;
    (&local_11)[lVar3] = (&DAT_002a14e0)[uVar4 & 7];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab13f8  FUN_00ab13f8 =====

void FUN_00ab13f8(undefined8 *param_1)

{
  FUN_00aadf44(*param_1);
  return;
}


// ===== 00ab1400  <u16_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::LowerExp>::fmt */

void __rustcall <u16_as_core::fmt::LowerExp>::fmt(undefined2 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x65);
  return;
}


// ===== 00ab1418  <i32_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::Octal>::fmt */

void __rustcall <i32_as_core::fmt::Octal>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 3;
    (&local_11)[lVar3] = (&DAT_002a14e0)[uVar4 & 7];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_00396144,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab148c  <i16_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::UpperExp>::fmt */

void __rustcall <i16_as_core::fmt::UpperExp>::fmt(short *param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *param_1;
  iVar1 = -(int)sVar2;
  if (-1 < sVar2) {
    iVar1 = (int)sVar2;
  }
  FUN_00a9fb28(param_2,iVar1,(uint)(int)sVar2 >> 0xf & 1 ^ 1,0x45);
  return;
}


// ===== 00ab14b0  <u32_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::LowerHex>::fmt */

void __rustcall <u32_as_core::fmt::LowerHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = (&DAT_002a0ca0)[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab1524  <u16_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::UpperExp>::fmt */

void __rustcall <u16_as_core::fmt::UpperExp>::fmt(undefined2 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x45);
  return;
}


// ===== 00ab153c  <i32_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::LowerHex>::fmt */

void __rustcall <i32_as_core::fmt::LowerHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = (&DAT_002a0ca0)[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab15b0  <i32_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::LowerExp>::fmt */

void __rustcall <i32_as_core::fmt::LowerExp>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  FUN_00a9fb28(param_2,uVar1,~uVar2 >> 0x1f,0x65);
  return;
}


// ===== 00ab15d4  <u32_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::UpperHex>::fmt */

void __rustcall <u32_as_core::fmt::UpperHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = (&DAT_0029f430)[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab1648  <core::num::niche_types::NonZeroU16Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU16Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU16Inner_as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_00aadae4(*param_1);
  return;
}


// ===== 00ab1650  <u32_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::LowerExp>::fmt */

void __rustcall <u32_as_core::fmt::LowerExp>::fmt(undefined4 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x65);
  return;
}


// ===== 00ab1668  <i32_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::UpperHex>::fmt */

void __rustcall <i32_as_core::fmt::UpperHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = (&DAT_0029f430)[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00ab16dc  <core::sync::atomic::Atomic<i8>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i8> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<i8>as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_00aacff4(*param_1);
  return;
}


// ===== 00ab16e4  <i32_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::UpperExp>::fmt */

void __rustcall <i32_as_core::fmt::UpperExp>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  FUN_00a9fb28(param_2,uVar1,~uVar2 >> 0x1f,0x45);
  return;
}


// ===== 00ab1708  <u32_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::UpperExp>::fmt */

void __rustcall <u32_as_core::fmt::UpperExp>::fmt(undefined4 *param_1,undefined8 param_2)

{
  FUN_00a9fb28(param_2,*param_1,1,0x45);
  return;
}


// ===== 00ab1720  FUN_00ab1720 =====

undefined8 FUN_00ab1720(void)

{
  return 0;
}


// ===== 00ab1728  FUN_00ab1728 =====

undefined8 FUN_00ab1728(void)

{
  return 0;
}


// ===== 00ab1730  FUN_00ab1730 =====

undefined8 FUN_00ab1730(void)

{
  return 0x2b;
}


// ===== 00ab1738  FUN_00ab1738 =====

undefined1  [16] FUN_00ab1738(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = PTR_VTABLE_00b01438;
  return auVar1;
}


// ===== 00ab174c  FUN_00ab174c =====

void FUN_00ab174c(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00ab174c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00ab1750  FUN_00ab1750 =====

void FUN_00ab1750(void)

{
  return;
}


// ===== 00ab1754  FUN_00ab1754 =====

undefined1  [16] FUN_00ab1754(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = PTR_VTABLE_00b01440;
  return auVar1;
}


// ===== 00ab1768  FUN_00ab1768 =====

void FUN_00ab1768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00aff790,param_2,param_3);
  return;
}


// ===== 00ab177c  FUN_00ab177c =====

bool FUN_00ab177c(long *param_1,uint param_2)

{
  byte bVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  uint local_14;
  
  bVar3 = (byte)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    __n = 1;
    uVar2 = param_1[2];
    uVar5 = uVar2 + 1;
    bVar4 = (ulong)param_1[1] < uVar5 || 0xfffffffffffffffe < uVar2;
    if (bVar4) {
      return bVar4;
    }
  }
  else {
    if (param_2 < 0x800) {
      local_14 = (uint)(bVar3 & 0xffff3f | 0x80) << 8;
      __n = 2;
      bVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 != 0) {
        __n = 4;
        local_14 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        uVar2 = param_1[2];
        uVar5 = uVar2 + 4;
        bVar4 = (ulong)param_1[1] < uVar5 || 0xfffffffffffffffb < uVar2;
        if (bVar4) {
          return bVar4;
        }
        goto LAB_00ab17b8;
      }
      local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_14 = CONCAT12(bVar3,(short)local_14) & 0xff3fffff | 0x800000;
      bVar3 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar3);
    uVar2 = param_1[2];
    uVar5 = uVar2 + __n;
    bVar4 = (ulong)param_1[1] < uVar5 || CARRY8(uVar2,__n);
    if (bVar4) {
      return bVar4;
    }
  }
LAB_00ab17b8:
  memcpy((void *)(*param_1 + uVar2),&local_14,__n);
  param_1[2] = uVar5;
  return bVar4;
}


// ===== 00ab188c  FUN_00ab188c =====

void FUN_00ab188c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00b001f8,param_2,param_3);
  return;
}


// ===== 00ab18a0  FUN_00ab18a0 =====

void FUN_00ab18a0(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner();
}


// ===== 00ab18bc  FUN_00ab18bc =====

undefined1  [16] FUN_00ab18bc(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = LZCOUNT(param_2);
  if (param_2 == 0) {
    uVar1 = LZCOUNT(param_1) + 0x40;
  }
  uVar5 = param_1 << (uVar1 & 0x3f);
  uVar2 = uVar5;
  uVar4 = 0;
  if ((uVar1 & 0x40) == 0) {
    uVar2 = param_2 << (uVar1 & 0x3f) | (param_1 >> 1) >> ((ulong)~(uint)uVar1 & 0x3f);
    uVar4 = uVar5;
  }
  lVar3 = 0;
  if (param_1 != 0 || param_2 != 0) {
    lVar3 = 0x47d0000000000000 - (uVar1 << 0x34);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (lVar3 + (uVar2 >> 0xb)) -
                 ((long)((uVar4 >> 0xb | uVar2 << 0x35 | uVar4 & 0xffffffff) -
                        ((uVar2 << 0x35) >> 0x3f & (uVar2 >> 0xb ^ 0xffffffffffffffff))) >> 0x3f);
  return auVar6;
}


// ===== 00ab1938  FUN_00ab1938 =====

undefined1  [16] FUN_00ab1938(void)

{
  undefined1 auStack_30 [16];
  undefined1 local_20 [16];
  
                    /* try { // try from 00ab1944 to 00ab194b has its CatchHandler @ 00ab195c */
  FUN_00ab1960(auStack_30);
  return local_20;
}


// ===== 00ab1960  FUN_00ab1960 =====

void FUN_00ab1960(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  uVar1 = (uint)LZCOUNT(param_5);
  if (param_5 == 0) {
    uVar1 = (int)LZCOUNT(param_4) + 0x40;
  }
  uVar19 = (uint)LZCOUNT(param_3);
  if (param_3 == 0) {
    uVar19 = (int)LZCOUNT(param_2) + 0x40;
  }
  if (uVar1 <= uVar19) {
    if (CARRY8(param_3,~param_5) || CARRY8(param_3 + ~param_5,(ulong)(param_4 <= param_2))) {
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = param_2 - param_4;
      param_1[3] = param_3 - (param_5 + (param_2 < param_4));
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_2;
    param_1[3] = param_3;
    return;
  }
  if (0x3f < uVar19) {
    uVar15 = 0;
    if (param_4 != 0) {
      uVar15 = param_2 / param_4;
    }
    *param_1 = uVar15;
    param_1[1] = 0;
    param_1[2] = param_2 - uVar15 * param_4;
    param_1[3] = 0;
    return;
  }
  if (uVar1 < 0x60) {
    if (0x1f < uVar1 - uVar19) {
      uVar3 = 0x60 - uVar1;
      uVar15 = 0;
      uVar14 = 0;
      uVar16 = param_5 >> ((ulong)uVar3 & 0x3f);
      if ((uVar3 & 0x40) == 0) {
        uVar16 = (param_5 << 1) << ((ulong)(uVar1 - 0x61) & 0x3f) | param_4 >> ((ulong)uVar3 & 0x3f)
        ;
      }
      uVar16 = (uVar16 & 0xffffffff) + 1;
      while( true ) {
        uVar4 = 0x40 - uVar19;
        uVar22 = (ulong)uVar4;
        uVar17 = param_3 >> (uVar22 & 0x3f);
        if ((uVar4 & 0x40) == 0) {
          uVar17 = (param_3 << 1) << ((ulong)(uVar19 - 1) & 0x3f) | param_2 >> (uVar22 & 0x3f);
        }
        uVar19 = uVar4 - uVar3;
        uVar20 = (ulong)uVar19;
        if (uVar4 < uVar3) {
          uVar16 = param_5 >> (uVar22 & 0x3f);
          if ((uVar4 & 0x40) == 0) {
            uVar16 = (param_5 << 1) << ((ulong)~uVar4 & 0x3f) | param_4 >> (uVar22 & 0x3f);
          }
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar17 / uVar16;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_4;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar22;
          uVar17 = param_4 * uVar22;
          uVar16 = SUB168(auVar8 * auVar12,8) + param_5 * uVar22;
          if (CARRY8(param_3,~uVar16) || CARRY8(param_3 + ~uVar16,(ulong)(uVar17 <= param_2))) {
            if (CARRY8(uVar15,uVar22)) {
              uVar14 = uVar14 + 1;
            }
            *param_1 = uVar15 + uVar22;
            param_1[1] = uVar14;
            param_1[2] = param_2 - uVar17;
            param_1[3] = param_3 - (uVar16 + (param_2 < uVar17));
            return;
          }
          if (CARRY8(uVar15,uVar22 - 1)) {
            uVar14 = uVar14 + 1;
          }
          *param_1 = uVar15 + (uVar22 - 1);
          param_1[1] = uVar14;
          param_1[2] = (param_2 + param_4) - uVar17;
          param_1[3] = (param_3 + param_5 + (ulong)CARRY8(param_2,param_4)) -
                       (uVar16 + (param_2 + param_4 < uVar17));
          return;
        }
        uVar22 = 0;
        if (uVar16 != 0) {
          uVar22 = uVar17 / uVar16;
        }
        bVar13 = (uVar19 & 0x40) == 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_4;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar22;
        uVar23 = uVar22 << (uVar20 & 0x3f);
        uVar21 = param_4 * uVar22 << (uVar20 & 0x3f);
        uVar17 = uVar23;
        if (bVar13) {
          uVar17 = (uVar22 >> 1) >> ((ulong)~uVar19 & 0x3f);
        }
        uVar2 = 0;
        if (bVar13) {
          uVar2 = uVar23;
        }
        uVar23 = uVar21;
        if (bVar13) {
          uVar23 = SUB168(auVar7 * auVar11,8) + param_5 * uVar22 << (uVar20 & 0x3f) |
                   (param_4 * uVar22 >> 1) >> ((ulong)~uVar19 & 0x3f);
        }
        uVar22 = 0;
        if (bVar13) {
          uVar22 = uVar21;
        }
        bVar13 = CARRY8(uVar2,uVar15);
        uVar15 = uVar2 + uVar15;
        uVar14 = uVar17 + uVar14 + (ulong)bVar13;
        bVar13 = param_2 < uVar22;
        param_2 = param_2 - uVar22;
        param_3 = param_3 - (uVar23 + bVar13);
        uVar19 = (uint)LZCOUNT(param_3);
        if (param_3 == 0) {
          uVar19 = (int)LZCOUNT(param_2) + 0x40;
        }
        if (uVar1 <= uVar19) break;
        if (0x3f < uVar19) {
          uVar16 = 0;
          if (param_4 != 0) {
            uVar16 = param_2 / param_4;
          }
          if (CARRY8(uVar15,uVar16)) {
            uVar14 = uVar14 + 1;
          }
          *param_1 = uVar15 + uVar16;
          param_1[1] = uVar14;
          param_1[2] = param_2 - uVar16 * param_4;
          param_1[3] = 0;
          return;
        }
      }
      if (CARRY8(param_3,~param_5) || CARRY8(param_3 + ~param_5,(ulong)(param_4 <= param_2))) {
        if (uVar15 == 0xffffffffffffffff) {
          uVar14 = uVar14 + 1;
        }
        *param_1 = uVar15 + 1;
        param_1[1] = uVar14;
        param_1[2] = param_2 - param_4;
        param_1[3] = param_3 - (param_5 + (param_2 < param_4));
        return;
      }
      *param_1 = uVar15;
      param_1[1] = uVar14;
      param_1[2] = param_2;
      param_1[3] = param_3;
      return;
    }
    uVar16 = (ulong)(0x40 - uVar19);
    uVar15 = param_5 >> (uVar16 & 0x3f);
    uVar14 = param_3 >> (uVar16 & 0x3f);
    if ((0x40 - uVar19 & 0x40) == 0) {
      uVar15 = (param_5 << 1) << ((ulong)(uVar19 - 1) & 0x3f) | param_4 >> (uVar16 & 0x3f);
      uVar14 = (param_3 << 1) << ((ulong)(uVar19 - 1) & 0x3f) | param_2 >> (uVar16 & 0x3f);
    }
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = uVar14 / uVar15;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar16;
    uVar14 = SUB168(auVar5 * auVar9,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_5;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar16;
    lVar18 = SUB168(auVar6 * auVar10,8);
    uVar17 = param_4 * uVar16;
    uVar15 = uVar14 + param_5 * uVar16;
    if (CARRY8(uVar14,param_5 * uVar16)) {
      lVar18 = lVar18 + 1;
    }
    if ((lVar18 == 0) &&
       (CARRY8(param_3,~uVar15) || CARRY8(param_3 + ~uVar15,(ulong)(uVar17 <= param_2)))) {
      *param_1 = uVar16;
      param_1[1] = 0;
      param_1[2] = param_2 - uVar17;
      param_1[3] = param_3 - (uVar15 + (param_2 < uVar17));
      return;
    }
    *param_1 = uVar16 - 1;
    param_1[1] = 0;
    param_1[2] = (param_4 + param_2) - uVar17;
    param_1[3] = (param_5 + param_3 + (ulong)CARRY8(param_4,param_2)) -
                 (uVar15 + (param_4 + param_2 < uVar17));
    return;
  }
  uVar14 = param_4 & 0xffffffff;
  uVar15 = 0;
  if (uVar14 != 0) {
    uVar15 = param_3 / uVar14;
  }
  uVar16 = 0;
  if (uVar14 != 0) {
    uVar16 = (param_2 >> 0x20 | (ulong)(uint)((int)param_3 - (int)uVar15 * (int)param_4) << 0x20) /
             uVar14;
  }
  uVar17 = param_2 & 0xffffffff |
           (ulong)(uint)((int)(param_2 >> 0x20) - (int)uVar16 * (int)param_4) << 0x20;
  uVar22 = 0;
  if (uVar14 != 0) {
    uVar22 = uVar17 / uVar14;
  }
  *param_1 = uVar22 | uVar16 << 0x20;
  param_1[1] = uVar15 | uVar16 >> 0x20;
  param_1[2] = uVar17 - uVar22 * uVar14;
  param_1[3] = 0;
  return;
}


// ===== 00ab1c88  FUN_00ab1c88 =====

undefined1  [16] FUN_00ab1c88(void)

{
  undefined1 local_30 [2] [16];
  
                    /* try { // try from 00ab1c94 to 00ab1c9b has its CatchHandler @ 00ab1cac */
  FUN_00ab1960(local_30);
  return local_30[0];
}


// ===== 00ab1cb0  FUN_00ab1cb0 =====

long FUN_00ab1cb0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00b108e8 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  return lVar3;
}


// ===== 00ab1ce0  FUN_00ab1ce0 =====

long FUN_00ab1ce0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00b108e8 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  LOAcquire();
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  LORelease();
  return lVar3;
}


// ===== 00ab1d0c  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00b108e8 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_00b108e8 = iVar2 != 0;
    return;
  }
  DAT_00b108e8 = 1;
  return;
}


// ===== 00ab1d94  FUN_00ab1d94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab1d94(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar1 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x10);
  }
  auVar23._8_8_ = param_1;
  auVar23._0_8_ = param_1;
  auVar29[8] = UNK_002a00d8;
  auVar29._0_8_ = _DAT_002a00d0;
  auVar20 = NEON_ushl(auVar23,_DAT_0029f2c0,8);
  auVar29[9] = (char)_UNK_002a00d9;
  auVar29[10] = (char)((uint7)_UNK_002a00d9 >> 8);
  auVar29[0xb] = (char)((uint7)_UNK_002a00d9 >> 0x10);
  auVar29[0xc] = (char)((uint7)_UNK_002a00d9 >> 0x18);
  auVar29[0xd] = (char)((uint7)_UNK_002a00d9 >> 0x20);
  auVar29[0xe] = (char)((uint7)_UNK_002a00d9 >> 0x28);
  auVar29[0xf] = (char)((uint7)_UNK_002a00d9 >> 0x30);
  auVar29 = NEON_ushl(auVar23,auVar29,8);
  auVar26[8] = UNK_0029f178;
  auVar26._0_8_ = _DAT_0029f170;
  auVar21 = NEON_ushl(auVar23,_DAT_002a0c50,8);
  auVar23 = NEON_ushl(auVar23,_DAT_002a0680,8);
  auVar25._8_8_ = uVar2;
  auVar25._0_8_ = uVar2;
  bVar4 = auVar29[0] & DAT_0029f590 | auVar20[0] & s__002a0290[0];
  bVar5 = auVar29[1] & UNK_0029f591 | auVar20[1] & s__002a0290[1];
  bVar6 = auVar29[2] & UNK_0029f592 | auVar20[2] & s__002a0290[2];
  bVar7 = auVar29[3] & UNK_0029f593 | auVar20[3] & s__002a0290[3];
  bVar8 = auVar29[4] & UNK_0029f594 | auVar20[4] & UNK_002a0294;
  bVar9 = auVar29[5] & UNK_0029f595 | auVar20[5] & UNK_002a0295;
  bVar10 = auVar29[6] & UNK_0029f596 | auVar20[6] & UNK_002a0296;
  bVar11 = auVar29[7] & UNK_0029f597 | auVar20[7] & UNK_002a0297;
  bVar12 = auVar29[8] & UNK_0029f598 | auVar20[8] & UNK_002a0298;
  bVar13 = auVar29[9] & UNK_0029f599 | auVar20[9] & UNK_002a0299;
  bVar14 = auVar29[10] & UNK_0029f59a | auVar20[10] & UNK_002a029a;
  bVar15 = auVar29[0xb] & UNK_0029f59b | auVar20[0xb] & UNK_002a029b;
  bVar16 = auVar29[0xc] & UNK_0029f59c | auVar20[0xc] & UNK_002a029c;
  bVar17 = auVar29[0xd] & UNK_0029f59d | auVar20[0xd] & UNK_002a029d;
  bVar18 = auVar29[0xe] & UNK_0029f59e | auVar20[0xe] & UNK_002a029e;
  bVar19 = auVar29[0xf] & UNK_0029f59f | auVar20[0xf] & UNK_002a029f;
  auVar28 = NEON_ushl(auVar25,_s___002a0d30,8);
  auVar24 = NEON_ushl(auVar25,_s__0029fb40,8);
  auVar30 = NEON_ushl(auVar25,_DAT_0029fd50,8);
  auVar26[9] = (char)_UNK_0029f179;
  auVar26[10] = (char)((uint7)_UNK_0029f179 >> 8);
  auVar26[0xb] = (char)((uint7)_UNK_0029f179 >> 0x10);
  auVar26[0xc] = (char)((uint7)_UNK_0029f179 >> 0x18);
  auVar26[0xd] = (char)((uint7)_UNK_0029f179 >> 0x20);
  auVar26[0xe] = (char)((uint7)_UNK_0029f179 >> 0x28);
  auVar26[0xf] = (char)((uint7)_UNK_0029f179 >> 0x30);
  auVar26 = NEON_ushl(auVar25,auVar26,8);
  auVar20[1] = bVar5;
  auVar20[0] = bVar4;
  auVar20[2] = bVar6;
  auVar20[3] = bVar7;
  auVar20[4] = bVar8;
  auVar20[5] = bVar9;
  auVar20[6] = bVar10;
  auVar20[7] = bVar11;
  auVar20[8] = bVar12;
  auVar20[9] = bVar13;
  auVar20[10] = bVar14;
  auVar20[0xb] = bVar15;
  auVar20[0xc] = bVar16;
  auVar20[0xd] = bVar17;
  auVar20[0xe] = bVar18;
  auVar20[0xf] = bVar19;
  auVar27[1] = bVar5;
  auVar27[0] = bVar4;
  auVar27[2] = bVar6;
  auVar27[3] = bVar7;
  auVar27[4] = bVar8;
  auVar27[5] = bVar9;
  auVar27[6] = bVar10;
  auVar27[7] = bVar11;
  auVar27[8] = bVar12;
  auVar27[9] = bVar13;
  auVar27[10] = bVar14;
  auVar27[0xb] = bVar15;
  auVar27[0xc] = bVar16;
  auVar27[0xd] = bVar17;
  auVar27[0xe] = bVar18;
  auVar27[0xf] = bVar19;
  auVar29 = NEON_ext(auVar20,auVar27,8,1);
  auVar22[0] = auVar21[0] & DAT_0029f180 | auVar23[0] & DAT_0029f2d0;
  auVar22[1] = auVar21[1] & UNK_0029f181 | auVar23[1] & UNK_0029f2d1;
  auVar22[2] = auVar21[2] & UNK_0029f182 | auVar23[2] & UNK_0029f2d2;
  auVar22[3] = auVar21[3] & UNK_0029f183 | auVar23[3] & UNK_0029f2d3;
  auVar22[4] = auVar21[4] & UNK_0029f184 | auVar23[4] & UNK_0029f2d4;
  auVar22[5] = auVar21[5] & UNK_0029f185 | auVar23[5] & UNK_0029f2d5;
  auVar22[6] = auVar21[6] & UNK_0029f186 | auVar23[6] & UNK_0029f2d6;
  auVar22[7] = auVar21[7] & UNK_0029f187 | auVar23[7] & UNK_0029f2d7;
  auVar22[8] = auVar21[8] & UNK_0029f188 | auVar23[8] & UNK_0029f2d8;
  auVar22[9] = auVar21[9] & UNK_0029f189 | auVar23[9] & UNK_0029f2d9;
  auVar22[10] = auVar21[10] & UNK_0029f18a | auVar23[10] & UNK_0029f2da;
  auVar22[0xb] = auVar21[0xb] & UNK_0029f18b | auVar23[0xb] & UNK_0029f2db;
  auVar22[0xc] = auVar21[0xc] & UNK_0029f18c | auVar23[0xc] & UNK_0029f2dc;
  auVar22[0xd] = auVar21[0xd] & UNK_0029f18d | auVar23[0xd] & UNK_0029f2dd;
  auVar22[0xe] = auVar21[0xe] & UNK_0029f18e | auVar23[0xe] & UNK_0029f2de;
  auVar22[0xf] = auVar21[0xf] & UNK_0029f18f | auVar23[0xf] & UNK_0029f2df;
  auVar27 = NEON_ext(auVar22,auVar22,8,1);
  auVar21[0] = auVar30[0] & DAT_002a0f20 | auVar26[0] & (byte)_s__0029f4a0 |
               auVar28[0] & DAT_0029f1a0 | auVar24[0] & DAT_0029f190;
  auVar21[1] = auVar30[1] & UNK_002a0f21 | auVar26[1] & (byte)((ulong)_s__0029f4a0 >> 8) |
               auVar28[1] & UNK_0029f1a1 | auVar24[1] & UNK_0029f191;
  auVar21[2] = auVar30[2] & UNK_002a0f22 | auVar26[2] & (byte)((ulong)_s__0029f4a0 >> 0x10) |
               auVar28[2] & UNK_0029f1a2 | auVar24[2] & UNK_0029f192;
  auVar21[3] = auVar30[3] & UNK_002a0f23 | auVar26[3] & (byte)((ulong)_s__0029f4a0 >> 0x18) |
               auVar28[3] & UNK_0029f1a3 | auVar24[3] & UNK_0029f193;
  auVar21[4] = auVar30[4] & UNK_002a0f24 | auVar26[4] & (byte)((ulong)_s__0029f4a0 >> 0x20) |
               auVar28[4] & UNK_0029f1a4 | auVar24[4] & UNK_0029f194;
  auVar21[5] = auVar30[5] & UNK_002a0f25 | auVar26[5] & (byte)((ulong)_s__0029f4a0 >> 0x28) |
               auVar28[5] & UNK_0029f1a5 | auVar24[5] & UNK_0029f195;
  auVar21[6] = auVar30[6] & UNK_002a0f26 | auVar26[6] & (byte)((ulong)_s__0029f4a0 >> 0x30) |
               auVar28[6] & UNK_0029f1a6 | auVar24[6] & UNK_0029f196;
  auVar21[7] = auVar30[7] & UNK_002a0f27 | auVar26[7] & (byte)((ulong)_s__0029f4a0 >> 0x38) |
               auVar28[7] & UNK_0029f1a7 | auVar24[7] & UNK_0029f197;
  auVar21[8] = auVar30[8] & UNK_002a0f28 | auVar26[8] & (byte)_UNK_0029f4a8 |
               auVar28[8] & UNK_0029f1a8 | auVar24[8] & UNK_0029f198;
  auVar21[9] = auVar30[9] & UNK_002a0f29 | auVar26[9] & (byte)((ulong)_UNK_0029f4a8 >> 8) |
               auVar28[9] & UNK_0029f1a9 | auVar24[9] & UNK_0029f199;
  auVar21[10] = auVar30[10] & UNK_002a0f2a | auVar26[10] & (byte)((ulong)_UNK_0029f4a8 >> 0x10) |
                auVar28[10] & UNK_0029f1aa | auVar24[10] & UNK_0029f19a;
  auVar21[0xb] = auVar30[0xb] & UNK_002a0f2b | auVar26[0xb] & (byte)((ulong)_UNK_0029f4a8 >> 0x18) |
                 auVar28[0xb] & UNK_0029f1ab | auVar24[0xb] & UNK_0029f19b;
  auVar21[0xc] = auVar30[0xc] & UNK_002a0f2c | auVar26[0xc] & (byte)((ulong)_UNK_0029f4a8 >> 0x20) |
                 auVar28[0xc] & UNK_0029f1ac | auVar24[0xc] & UNK_0029f19c;
  auVar21[0xd] = auVar30[0xd] & UNK_002a0f2d | auVar26[0xd] & (byte)((ulong)_UNK_0029f4a8 >> 0x28) |
                 auVar28[0xd] & UNK_0029f1ad | auVar24[0xd] & UNK_0029f19d;
  auVar21[0xe] = auVar30[0xe] & UNK_002a0f2e | auVar26[0xe] & (byte)((ulong)_UNK_0029f4a8 >> 0x30) |
                 auVar28[0xe] & UNK_0029f1ae | auVar24[0xe] & UNK_0029f19e;
  auVar21[0xf] = auVar30[0xf] & UNK_002a0f2f | auVar26[0xf] & (byte)((ulong)_UNK_0029f4a8 >> 0x38) |
                 auVar28[0xf] & UNK_0029f1af | auVar24[0xf] & UNK_0029f19f;
  auVar20 = NEON_ext(auVar21,auVar21,8,1);
  uVar3 = CONCAT17(auVar22[7] | auVar27[7],
                   CONCAT16(auVar22[6] | auVar27[6],
                            CONCAT15(auVar22[5] | auVar27[5],
                                     CONCAT14(auVar22[4] | auVar27[4],
                                              CONCAT13(auVar22[3] | auVar27[3],
                                                       CONCAT12(auVar22[2] | auVar27[2],
                                                                CONCAT11(auVar22[1] | auVar27[1],
                                                                         auVar22[0] | auVar27[0]))))
                                    ))) |
          CONCAT17(bVar11 | auVar29[7],
                   CONCAT16(bVar10 | auVar29[6],
                            CONCAT15(bVar9 | auVar29[5],
                                     CONCAT14(bVar8 | auVar29[4],
                                              CONCAT13(bVar7 | auVar29[3],
                                                       CONCAT12(bVar6 | auVar29[2],
                                                                CONCAT11(bVar5 | auVar29[1],
                                                                         bVar4 | auVar29[0]))))))) |
          auVar30._0_8_ & 0x800000000000000 | uVar2 >> 0x17 & 0x800 | (uVar2 >> 0xd & 1) << 0x1a |
          auVar26._0_8_ & 0x80000 | uVar2 >> 0x10 & 1 |
          (uVar2 & 0x40000) << 0x1a | (uVar2 >> 3 & 0xf) << 0x26 |
          uVar2 >> 5 & 4 | (param_1 & 0x100) >> 1 |
          (param_1 & 0x1000) >> 6 | (param_1 & 0x1000000) >> 7 |
          auVar23._0_8_ & 0x10000 | ((ulong)(uVar1 >> 4) & 1) << 0xf |
          (ulong)(uVar1 << 3) & 0x400 |
          CONCAT17(auVar21[7] | auVar20[7],
                   CONCAT16(auVar21[6] | auVar20[6],
                            CONCAT15(auVar21[5] | auVar20[5],
                                     CONCAT14(auVar21[4] | auVar20[4],
                                              CONCAT13(auVar21[3] | auVar20[3],
                                                       CONCAT12(auVar21[2] | auVar20[2],
                                                                CONCAT11(auVar21[1] | auVar20[1],
                                                                         auVar21[0] | auVar20[0]))))
                                    )));
  if ((param_1 & 1) != 0) {
    uVar3 = uVar3 | 0x300;
  }
  DAT_00b108f0 = ((ulong)(uVar1 >> 0x16) & 1) << 0x1e | (uVar2 >> 0x2e & 1) << 0x3a |
                 auVar23._0_8_ & 0x400000 | ((ulong)(uVar1 >> 0x10) & 1) << 0x12 |
                 (param_1 & 0x4000000) >> 3 | (param_1 & 0x20000) >> 4 | (uVar2 >> 0xe & 1) << 0x1b
                 | (uVar2 & 2) << 0x23 | uVar3 | 0x8000000000000000;
  return;
}


// ===== 00ab1fbc  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if ((DAT_00b108f0 == 0) &&
     ((iVar1 = __system_property_get("ro.arch",local_70), iVar1 < 1 ||
      (iVar1 = strncmp(local_70,"exynos9810",10), iVar1 != 0)))) {
    uVar2 = getauxval(0x10);
    local_60 = getauxval(0x1a);
    local_70[0] = '\x18';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    uStack_68 = uVar2;
    FUN_00ab1d94(uVar2 | 0x4000000000000000,local_70);
    return;
  }
  return;
}


// ===== 00ab2048  __emutls_get_address =====

void * __emutls_get_address(size_t *param_1)

{
  pthread_key_t __key;
  undefined8 *__ptr;
  void *pvVar1;
  void *__s;
  ulong uVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  
  sVar3 = param_1[2];
  if (sVar3 == 0) {
    pthread_once((pthread_once_t *)&DAT_00b10900,FUN_00ab2254);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00b10910);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_00b10908 + 1;
      DAT_00b10908 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00b10910);
    __ptr = (undefined8 *)pthread_getspecific(DAT_00b108fc);
    if (__ptr == (undefined8 *)0x0) goto LAB_00ab2124;
LAB_00ab2078:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_00ab216c;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_00b108fc);
    if (__ptr != (undefined8 *)0x0) goto LAB_00ab2078;
LAB_00ab2124:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_00b108fc;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_00ab216c:
  pvVar1 = (void *)__ptr[sVar3 + 1];
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    __n = *param_1;
    pvVar1 = malloc(uVar2 + 7 + __n);
    if (pvVar1 != (void *)0x0) {
      __s = (void *)((long)pvVar1 + uVar2 + 7 & -uVar2);
      *(void **)((long)__s + -8) = pvVar1;
      if ((void *)param_1[3] == (void *)0x0) {
        memset(__s,0,__n);
      }
      else {
        memcpy(__s,(void *)param_1[3],__n);
      }
      __ptr[sVar3 + 1] = __s;
      return __s;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab2224  FUN_00ab2224 =====

ulong FUN_00ab2224(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00b108f8 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00b108fc);
    param_1 = (ulong)uVar1;
    DAT_00b108f8 = '\0';
  }
  return param_1;
}


// ===== 00ab2254  FUN_00ab2254 =====

void FUN_00ab2254(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00b108fc,FUN_00ab2288);
  if (iVar1 == 0) {
    DAT_00b108f8 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab2288  FUN_00ab2288 =====

long * FUN_00ab2288(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00b108fc,param_1);
    return (long *)(ulong)uVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (param_1[uVar3 + 2] != 0) {
        free(*(void **)(param_1[uVar3 + 2] + -8));
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  free(param_1);
  return param_1;
}


// ===== 00ab2304  FUN_00ab2304 =====

undefined8 FUN_00ab2304(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_00ab6530(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00ab2774(auStack_4f0,auStack_280);
  iVar1 = FUN_00ab2984(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_00ab29ac(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00ab281c(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00ab23fc(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_00ab2984(auStack_4f0);
  }
  return 3;
}


// ===== 00ab23fc  FUN_00ab23fc =====

undefined8 FUN_00ab23fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00ab2774(param_2,param_1);
  iVar2 = FUN_00ab2998(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00ab281c(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00ab29ac(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00b01448;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00ab29ec(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_00ab2998(param_2);
  }
  return 2;
}


// ===== 00ab2530  FUN_00ab2530 =====

void FUN_00ab2530(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00ab6530(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00ab23fc(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00ab25b4(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00b01448;
  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab25b4  FUN_00ab25b4 =====

void FUN_00ab25b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00ab2774(param_2,param_1);
  iVar1 = FUN_00ab2998(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00ab29ac(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00ab29ec(param_2);
    }
    iVar1 = FUN_00ab2998(param_2);
  }
  return;
}


// ===== 00ab26a8  FUN_00ab26a8 =====

undefined8 FUN_00ab26a8(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_00ab29ac(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00ab26dc  FUN_00ab26dc =====

undefined8 FUN_00ab26dc(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_00ab29ac(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 00ab2710  FUN_00ab2710 =====

void FUN_00ab2710(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ab2724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 00ab272c  thunk_FUN_00ab2898 =====

void thunk_FUN_00ab2898(void)

{
  FUN_00ab2898();
  return;
}


// ===== 00ab2734  FUN_00ab2734 =====

undefined8 FUN_00ab2734(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00ab281c(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 00ab2764  FUN_00ab2764 =====

void FUN_00ab2764(undefined8 param_1,undefined8 param_2)

{
  FUN_00ab2898(param_1,0xffffffff,param_2);
  return;
}


// ===== 00ab2774  FUN_00ab2774 =====

undefined8 FUN_00ab2774(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00b00650;
  param_1[1] = &DAT_00b10938;
  memcpy(param_1 + 2,param_2,0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x130);
  uVar2 = *(undefined8 *)((long)param_2 + 0x148);
  uVar1 = *(undefined8 *)((long)param_2 + 0x140);
  uVar7 = *(undefined8 *)((long)param_2 + 0x118);
  uVar6 = *(undefined8 *)((long)param_2 + 0x110);
  uVar5 = *(undefined8 *)((long)param_2 + 0x128);
  uVar4 = *(undefined8 *)((long)param_2 + 0x120);
  param_1[0x29] = *(undefined8 *)((long)param_2 + 0x138);
  param_1[0x28] = uVar3;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar7;
  param_1[0x24] = uVar6;
  param_1[0x27] = uVar5;
  param_1[0x26] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x170);
  uVar2 = *(undefined8 *)((long)param_2 + 0x188);
  uVar1 = *(undefined8 *)((long)param_2 + 0x180);
  uVar7 = *(undefined8 *)((long)param_2 + 0x158);
  uVar6 = *(undefined8 *)((long)param_2 + 0x150);
  uVar5 = *(undefined8 *)((long)param_2 + 0x168);
  uVar4 = *(undefined8 *)((long)param_2 + 0x160);
  param_1[0x31] = *(undefined8 *)((long)param_2 + 0x178);
  param_1[0x30] = uVar3;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x2d] = uVar7;
  param_1[0x2c] = uVar6;
  param_1[0x2f] = uVar5;
  param_1[0x2e] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1b0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1c0);
  uVar7 = *(undefined8 *)((long)param_2 + 0x198);
  uVar6 = *(undefined8 *)((long)param_2 + 400);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1a8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1a0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1b8);
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar1;
  param_1[0x35] = uVar7;
  param_1[0x34] = uVar6;
  param_1[0x37] = uVar5;
  param_1[0x36] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1f0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x208);
  uVar1 = *(undefined8 *)((long)param_2 + 0x200);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1d8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1d0);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1e8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1e0);
  param_1[0x41] = *(undefined8 *)((long)param_2 + 0x1f8);
  param_1[0x40] = uVar3;
  param_1[0x43] = uVar2;
  param_1[0x42] = uVar1;
  param_1[0x3d] = uVar7;
  param_1[0x3c] = uVar6;
  param_1[0x3f] = uVar5;
  param_1[0x3e] = uVar4;
  *(undefined8 *)((long)param_1 + 0x263) = 0;
  *(undefined8 *)((long)param_1 + 0x25b) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_00ab3264(param_1,0);
  return 0;
}


// ===== 00ab281c  FUN_00ab281c =====

undefined8 FUN_00ab281c(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    *param_3 = uVar2;
    return 0;
  }
  return 0xffffe672;
}


// ===== 00ab2898  FUN_00ab2898 =====

undefined8 FUN_00ab2898(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_78 [32];
  long local_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
    if (param_2 == -1) {
      (**(code **)(*param_1 + 0x48))(param_1,auStack_78);
      (**(code **)(*param_1 + 0x68))(param_1,0);
      if (local_58 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
        (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,local_58 + lVar2);
      }
    }
    return 0;
  }
  return 0xffffe672;
}


// ===== 00ab2984  FUN_00ab2984 =====

void FUN_00ab2984(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ab2994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 00ab2998  FUN_00ab2998 =====

void FUN_00ab2998(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ab29a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00ab29ac  FUN_00ab29ac =====

undefined4 FUN_00ab29ac(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00ab29ec  FUN_00ab29ec =====

undefined8 FUN_00ab29ec(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00ab2a14  FUN_00ab2a14 =====

uint FUN_00ab2a14(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
  return uVar1 & 1;
}


// ===== 00ab2a3c  FUN_00ab2a3c =====

char * FUN_00ab2a3c(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
                   )

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *local_48;
  
  puVar10 = param_2 + 1;
  uVar9 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar9 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
  }
  if (uVar9 == 0) {
    pcVar7 = "FDE has zero length";
  }
  else if (*puVar10 == 0) {
    pcVar7 = "FDE is really a CIE";
  }
  else {
    lVar8 = (long)puVar10 - (ulong)*puVar10;
    if ((param_5 & 1) == 0) {
      pcVar7 = (char *)FUN_00ab2bcc(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00ab4a24(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00ab4a24(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00ab4db0(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00ab4a24(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00ab4a24(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
        param_3[5] = uVar6;
      }
    }
    pcVar7 = (char *)0x0;
    param_3[2] = puVar10;
    param_3[3] = lVar3;
    *param_3 = param_2;
    param_3[1] = lVar8 - (long)param_2;
    param_3[4] = lVar4 + lVar3;
  }
  return pcVar7;
}


// ===== 00ab2bcc  FUN_00ab2bcc =====

char * FUN_00ab2bcc(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar10 = param_2 + 1;
  uVar13 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar13 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
    pbVar1 = (byte *)(uVar13 + (long)puVar10);
  }
  else {
    pbVar1 = (byte *)((long)puVar10 + uVar13);
  }
  if (uVar13 == 0) {
    pcVar9 = (char *)0x0;
  }
  else if (*puVar10 == 0) {
    uVar4 = puVar10[1];
    if (((byte)uVar4 & 0xfd) == 1) {
      pbVar18 = (byte *)((long)puVar10 + 5);
      pbVar11 = pbVar18;
      do {
        local_48 = pbVar11 + 1;
        bVar2 = *pbVar11;
        pbVar11 = local_48;
      } while (bVar2 != 0);
      uVar7 = FUN_00ab4db0(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00b01448;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar16 = pbVar15 + 1;
        bVar2 = *pbVar15;
        pbVar11 = pbVar12 + 1;
        uVar3 = uVar13 & 0x3f;
        uVar13 = uVar13 + 7;
        uVar14 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar14;
        pbVar15 = pbVar16;
      } while ((char)bVar2 < '\0');
      uVar17 = (uint)(-1L << (uVar13 & 0x3f));
      if (0x38 < (int)uVar13 - 7U || bVar2 < 0x40) {
        uVar17 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar14 | uVar17;
      if ((byte)uVar4 == 1) {
        local_48 = pbVar12 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar16;
        bVar2 = *pbVar18;
      }
      else {
        local_48 = pbVar11;
        uVar6 = FUN_00ab4db0(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00ab4db0(&local_48,pbVar1);
LAB_00ab2d4c:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00ab2dec;
              goto LAB_00ab2e30;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00ab2d4c;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00ab2dec;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00ab2d4c;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00ab4a24(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00ab2d4c;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00ab2d4c;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00ab2d4c;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00ab2d4c;
          }
        }
LAB_00ab2dec:
        pbVar18 = pbVar18 + 1;
        goto LAB_00ab2d4c;
      }
LAB_00ab2e30:
      pcVar9 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar9 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar9 = "CIE ID is not zero";
  }
  return pcVar9;
}


// ===== 00ab2e94  FUN_00ab2e94 =====

void FUN_00ab2e94(void)

{
  return;
}


// ===== 00ab2e9c  FUN_00ab2e9c =====

void FUN_00ab2e9c(void)

{
  return;
}


// ===== 00ab2ea4  FUN_00ab2ea4 =====

bool FUN_00ab2ea4(undefined8 param_1,uint param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  if (param_2 == 0x22) {
    return true;
  }
  return param_2 - 0x40 < 0xffffffe1;
}


// ===== 00ab2ee8  FUN_00ab2ee8 =====

undefined8 FUN_00ab2ee8(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00b01448;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00ab2f50:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00ab2f44;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_00ab2f50;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00ab2f44:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 00ab2fd0  FUN_00ab2fd0 =====

void FUN_00ab2fd0(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00b01448;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00ab3038:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00ab302c;
    if (param_2 == 0x1d) {
      *(undefined8 *)(param_1 + 0xf8) = param_3;
      return;
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      *(undefined8 *)(param_1 + 0x100) = param_3;
      return;
    }
    if (param_2 == 0x1f) goto LAB_00ab3038;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00ab302c:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 00ab30b8  FUN_00ab30b8 =====

bool FUN_00ab30b8(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00ab30cc  FUN_00ab30cc =====

undefined1  [16] FUN_00ab30cc(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00ab30dc  FUN_00ab30dc =====

void FUN_00ab30dc(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00ab30ec  FUN_00ab30ec =====

ulong FUN_00ab30ec(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] != '\0') {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\0') {
    lVar1 = param_1[1];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_00ab3610(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00ab34f0(param_1,auStack_240);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 1) {
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] != '\0') {
      return 0;
    }
  }
  return uVar3;
}


// ===== 00ab31dc  FUN_00ab31dc =====

void FUN_00ab31dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x238);
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  param_2[8] = *(undefined8 *)(param_1 + 0x260);
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return;
}


// ===== 00ab3220  FUN_00ab3220 =====

void FUN_00ab3220(long param_1)

{
  FUN_00ab64a0(param_1 + 0x10);
  return;
}


// ===== 00ab322c  FUN_00ab322c =====

undefined1 FUN_00ab322c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00ab3238  FUN_00ab3238 =====

undefined8 FUN_00ab3238(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00ab3264  FUN_00ab3264 =====

void FUN_00ab3264(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long local_6e0 [4];
  long local_6c0;
  int local_6a8;
  int iStack_6a4;
  undefined4 uStack_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined1 auStack_678 [16];
  long local_668;
  int *local_648;
  undefined1 *puStack_640;
  ulong local_638;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    return;
  }
  local_648 = (int *)param_1[1];
  puStack_640 = auStack_678;
  uVar7 = lVar3 - (param_2 & 1);
  local_638 = uVar7;
  iVar1 = dl_iterate_phdr(FUN_00ab5c08,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00ab5934(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00b1093c);
    for (puVar6 = PTR_DAT_00b102c8; puVar6 < PTR_DAT_00b102d0; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00b1093c);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00ab2a3c(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00ab3a98(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
          if ((uVar7 & 1) != 0) {
            param_1[0x49] = 0;
            param_1[0x46] = local_680;
            param_1[0x47] = local_6c0;
            param_1[0x48] = local_638 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x45] = lStack_688;
            param_1[0x44] = local_690;
            param_1[0x4c] = 0;
            param_1[0x4b] = CONCAT44(iStack_6a4,local_6a8);
            *(undefined4 *)((long)param_1 + 0x254) = uStack_6a0;
            return;
          }
        }
        goto LAB_00ab33ec;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00b1093c);
LAB_00ab33ec:
    lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    local_648 = &local_6a8;
    puStack_640 = (undefined1 *)0x8;
    local_6e0[1] = 8;
    local_6e0[0] = lVar3;
    uVar2 = getpid();
    lVar5 = syscall(0x10e,(ulong)uVar2,&local_648,1,local_6e0,1,0);
    if (((lVar5 != 8) || (local_6a8 != -0x2d7fee98)) || (iStack_6a4 != -0x2bffffff)) {
      *(undefined1 *)(param_1 + 0x4d) = 1;
      return;
    }
    param_1[0x4c] = 0;
    param_1[0x45] = lVar3 + 4;
    param_1[0x44] = lVar3;
    *(undefined1 *)((long)param_1 + 0x26a) = 1;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
  }
  return;
}


// ===== 00ab34e4  FUN_00ab34e4 =====

void FUN_00ab34e4(undefined8 param_1,undefined4 param_2)

{
  FUN_00ab6288(param_2);
  return;
}


// ===== 00ab34f0  FUN_00ab34f0 =====

undefined8 FUN_00ab34f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x138);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x160);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x168);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x170);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x180);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x188);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 400);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x198);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar1 + 0x1c8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0x1d0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 0x1d8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x1e0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + 0x1e8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 0x1f0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0x1f8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0x200);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar1 + 0x210);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar1 + 0x218);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar1 + 0x220);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar1 + 0x228);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x230);
  uVar2 = *(undefined8 *)(lVar1 + 0x238);
  *(undefined1 *)(param_1 + 0x269) = 1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return 1;
}


// ===== 00ab3610  FUN_00ab3610 =====

undefined8
FUN_00ab3610(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 auStack_b20 [288];
  ulong local_a00 [96];
  undefined1 auStack_700 [24];
  int local_6e8 [2];
  long local_6e0 [67];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  byte local_b6;
  char local_b4;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = FUN_00ab2a3c(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00ab3a98(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00ab46e0(param_1,auStack_700,param_4);
      if (((param_6 & 1) != 0) && (local_b4 != '\0')) {
        for (uVar12 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar12 < uVar8;
            uVar12 = uVar12 + 0x10) {
        }
      }
      memcpy(local_a00 + 0x1e,param_4,0x210);
      uVar12 = 0;
      uVar14 = 0;
      piVar15 = local_6e8;
      puVar17 = local_a00 + 0x1e;
      local_a00[0x3d] = uVar8;
      do {
        puVar3 = PTR___sF_00b01448;
        iVar2 = *piVar15;
        if (iVar2 == 0) {
          uVar18 = local_a00[0x3d];
          uVar5 = local_a00[0x3b];
          uVar6 = local_a00[0x3c];
          uVar10 = local_a00[0x3f];
          if (uVar12 == local_b6) {
            if (local_b6 < 0x1f) {
              puVar13 = (undefined8 *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) &&
                 (puVar13 = (undefined8 *)((long)param_4 + 0xf0), local_b6 != 0x1e))
              goto LAB_00ab38f0;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00ab38f0:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                puVar13 = (undefined8 *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            uVar14 = *puVar13;
          }
        }
        else {
          uVar16 = (uint)uVar12;
          if ((uVar16 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar18 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_00ab39fc:
                  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n",
                          "getSavedFloatRegister","unsupported restore location for float register")
                  ;
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar18 = *(ulong *)(*(long *)(piVar15 + 2) + uVar8);
              }
            }
            else if (iVar2 == 5) {
              uVar18 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar15 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_00ab39fc;
              puVar9 = (ulong *)FUN_00ab4f78(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00ab4814(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00ab4814(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00ab4814(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00b01448;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00ab3944;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00ab3944:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","setRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *puVar17 = uVar11;
                uVar18 = local_a00[0x3d];
                uVar5 = local_a00[0x3b];
                uVar6 = local_a00[0x3c];
                uVar10 = local_a00[0x3f];
              }
            }
          }
        }
        local_a00[0x3f] = uVar10;
        local_a00[0x3c] = uVar6;
        local_a00[0x3b] = uVar5;
        local_a00[0x3d] = uVar18;
        uVar12 = uVar12 + 1;
        piVar15 = piVar15 + 4;
        puVar17 = puVar17 + 1;
        if (uVar12 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b20,param_4,0x210);
          uStack_78 = uStack_4c0;
          local_80 = local_4c8;
          uVar4 = local_80;
          local_80._0_4_ = (int)local_4c8;
          bVar1 = (int)local_80 != 0;
          if (bVar1) {
            local_80 = uVar4;
            FUN_00ab4814(param_1,auStack_b20,uVar8,&local_80);
          }
          local_a00[0x3e] = uVar14;
          memcpy(param_4,local_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 00ab3a98  FUN_00ab3a98 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00ab3a98(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 auStack_6e0 [4];
  int local_6dc;
  byte **local_6d8;
  undefined8 *puStack_6d0;
  undefined8 local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  ulong local_98 [7];
  
  puVar6 = (undefined8 *)auStack_6e0;
  lVar20 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6c8 = param_1;
  local_6c0 = (undefined8 *)0x0;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6d8 = apbStack_6a0 + 0x44;
  puStack_6d0 = (undefined8 *)(param_6 + 0x8e);
  while( true ) {
    pbVar21 = *(byte **)((long)local_98 + lVar20);
    pbVar2 = *(byte **)((long)local_98 + lVar20 + 8);
    uVar16 = *(ulong *)((long)local_98 + lVar20 + 0x10);
    apbStack_6a0[0xc0] = pbVar21;
    if (pbVar21 < pbVar2 && uVar16 != 0) break;
LAB_00ab3b1c:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00ab3b4c:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00b01448;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00ab4420;
  case 1:
    uVar17 = FUN_00ab4a24(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00ab3fd4;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00ab3fd4;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00ab3fd4:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00b01448 + 0x130);
      goto LAB_00ab45d0;
    }
    puVar12 = param_6 + uVar19 * 4;
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    lVar8 = lVar8 * iVar13;
LAB_00ab3f70:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00ab44c0:
      __s = (FILE *)(PTR___sF_00b01448 + 0x130);
      __size = 0x47;
      goto LAB_00ab45d0;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00ab4400:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00ab4420;
  case 7:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00ab45c4:
      __s = (FILE *)(PTR___sF_00b01448 + 0x130);
      __size = 0x40;
      goto LAB_00ab45d0;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 8:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00ab45a8:
      __s = (FILE *)(PTR___sF_00b01448 + 0x130);
      __size = 0x41;
      goto LAB_00ab45d0;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 0;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 9:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00b01448 + 0x130);
      goto LAB_00ab45d0;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00ab45c4;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    *(ulong *)(param_6 + uVar19 * 4 + 8) = uVar14;
    param_6[uVar19 * 4 + 6] = 5;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 10:
    puVar18 = (undefined8 *)((long)puVar6 + 0xfffffffffffff9e0);
    *puVar18 = local_6c0;
    memcpy((undefined1 *)((long)puVar6 + 0xfffffffffffff9e8),param_6,0x618);
    local_6c0 = puVar18;
    puVar6 = puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xb:
    if (local_6c0 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_6,local_6c0 + 1,0x618);
    local_6c0 = (undefined8 *)*puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xc:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00b01448 + 0x130);
      goto LAB_00ab45d0;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00ab44c0;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00ab4354;
  case 0x10:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00ab45a8;
    }
    puVar12 = param_6 + uVar19 * 4;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar7 = 6;
LAB_00ab434c:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00ab4354:
    lVar8 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00b01448;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00b01448 + 0x130);
      goto LAB_00ab45d0;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    puVar12 = param_6 + uVar19 * 4;
    uVar15 = -1L << (uVar14 & 0x3f);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
      uVar15 = 0;
    }
    apbStack_6a0[0xc0] = pbVar21;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar11 = uVar11 | uVar15;
    uVar7 = 2;
LAB_00ab42e0:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00b01448;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar21;
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto LAB_00ab45a8;
    }
    iVar13 = *(int *)((long)param_3 + 0x2c);
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    *param_6 = (int)uVar14;
    param_6[1] = iVar13 * ((uint)uVar11 | uVar9);
    break;
  case 0x13:
    uVar19 = 0;
    uVar14 = 0;
    pbVar21 = pbVar10;
    do {
      if (pbVar21 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar21;
      pbVar10 = pbVar10 + 1;
      uVar11 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar14 = ((ulong)bVar3 & 0x7f) << uVar11 | uVar14;
      pbVar21 = pbVar21 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar10;
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar14 | uVar9);
    pbVar21 = pbVar10;
    break;
  case 0x14:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00b01448 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00ab45d8;
    }
    lVar8 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 4;
    *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x15:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00b01448;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar3 = *pbVar10;
        pbVar21 = pbVar21 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
        pbVar10 = pbVar10 + 1;
      } while ((char)bVar3 < '\0');
      puVar12 = param_6 + uVar19 * 4;
      uVar15 = -1L << (uVar14 & 0x3f);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
        uVar15 = 0;
      }
      apbStack_6a0[0xc0] = pbVar21;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar11 = uVar11 | uVar15;
      uVar7 = 4;
      goto LAB_00ab42e0;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00b01448 + 0x130);
    goto LAB_00ab45d0;
  case 0x16:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      puVar12 = param_6 + uVar19 * 4;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar7 = 7;
      goto LAB_00ab434c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00b01448 + 0x130);
    goto LAB_00ab45d0;
  default:
    bVar1 = bVar3 & 0xc0;
    uVar19 = (ulong)bVar3 & 0x3f;
    if (bVar1 == 0x40) {
      uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar19);
      pbVar21 = pbVar10;
    }
    else {
      if (bVar1 == 0xc0) {
        cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
        goto joined_r0x00ab4400;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
        apbStack_6a0[uVar19 * 2] = pbVar21;
        *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      }
      param_6[uVar19 * 4 + 6] = 2;
      *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
      param_5 = local_6dc;
      pbVar21 = apbStack_6a0[0xc0];
    }
    break;
  case 0x2d:
    if (param_5 != 4) goto code_r0x00ab4420;
    if (*(char *)(param_6 + 0x8f) == '\0') {
      pbVar10 = (byte *)puStack_6d0[1];
      pbVar21 = (byte *)*puStack_6d0;
      *(undefined1 *)(param_6 + 0x8f) = 1;
      local_6d8[1] = pbVar10;
      *local_6d8 = pbVar21;
    }
    *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2e:
    uVar7 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00ab4db0(apbStack_6a0 + 0xc0,pbVar2);
      puVar12 = param_6 + uVar19 * 4;
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      lVar8 = -(lVar8 * iVar13);
      goto LAB_00ab3f70;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00b01448 + 0x130);
LAB_00ab45d0:
    fwrite(__ptr,__size,1,__s);
LAB_00ab45d8:
    fflush((FILE *)(PTR___sF_00b01448 + 0x130));
    return 0;
  }
joined_r0x00ab3f08:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00ab3b1c;
  goto LAB_00ab3b4c;
code_r0x00ab4420:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00ab3f08;
}


// ===== 00ab46e0  FUN_00ab46e0 =====

long FUN_00ab46e0(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00b01448;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00ab4720:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00ab4764;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00ab4f78(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
        return lVar3;
      }
      if (uVar1 == 0x1d) {
        return *(long *)(param_3 + 0xe8) + (long)(int)param_2[1];
      }
    }
  }
  else if ((int)uVar1 < 0x20) {
    if (uVar1 == 0x1e) {
      return *(long *)(param_3 + 0xf0) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x1f) goto LAB_00ab4720;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00ab4764:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00ab4814  FUN_00ab4814 =====

undefined8 FUN_00ab4814(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00b01448;
  iVar1 = *param_4;
  if (iVar1 < 5) {
    if (iVar1 == 1) {
      return 0;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
    }
  }
  else {
    if (iVar1 == 5) {
      uVar5 = (uint)*(ulong *)(param_4 + 2);
      if ((int)uVar5 < 0x1e) {
        if (uVar5 == 0xfffffffe) {
LAB_00ab4950:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00ab4938;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_00ab4950;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00ab4938:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00ab4f78(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00ab4f78(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab4a24  FUN_00ab4a24 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00ab4a24(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  puVar3 = PTR___sF_00b01448;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00ab4b70;
      if (uVar1 != 1) {
LAB_00ab4d7c:
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00ab4db0(param_2,param_3);
      puVar3 = PTR___sF_00b01448;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00b01448;
    }
    else {
      if (uVar1 != 3) goto LAB_00ab4d7c;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00b01448;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00ab4b70:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00b01448;
    }
    else {
      if (uVar1 != 9) goto LAB_00ab4d7c;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar9;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar8 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar5 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar5;
        puVar9 = (ulong *)((long)puVar9 + 1);
      } while ((char)bVar2 < '\0');
      *param_2 = (long)puVar6;
      uVar8 = -1L << (uVar7 & 0x3f);
      if (0x38 < (int)uVar7 - 7U || bVar2 < 0x40) {
        uVar8 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar8);
      puVar3 = PTR___sF_00b01448;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00b01448;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00ab4d7c;
      goto LAB_00ab4b70;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00b01448;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00b01448 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00ab4d48;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00ab4bfc:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar4;
    }
    return puVar4;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)((long)puVar4 + param_5);
      goto LAB_00ab4bfc;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_00ab4d48:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab4db0  FUN_00ab4db0 =====

ulong FUN_00ab4db0(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00b01448;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00ab4de0:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00ab4de0;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00ab4de0;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00ab4de0;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00ab4de0;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00ab4de0;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00ab4de0;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00ab4de0;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00ab4de0;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00ab4f10;
                      }
                      fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n",
                              "getULEB128","malformed uleb128 expression");
                      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00ab4f10:
  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab4f78  FUN_00ab4f78 =====

ulong FUN_00ab4f78(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  ulong local_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_00ab4db0(&local_68,param_1 + 0x14);
  local_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = local_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_00b01448;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00ab57f4:
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uint)bVar8;
      puVar14 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar16 = *(ulong *)(pbVar18 + 1);
        local_68 = pbVar18 + 9;
        goto LAB_00ab5460;
      case 4:
      case 5:
      case 7:
        goto code_r0x00ab57f4;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_00ab53f0:
        *puVar19 = *puVar14;
        goto LAB_00ab4ffc;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00ab53c4;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00ab53c4:
        local_68 = pbVar18 + 2;
        goto LAB_00ab5460;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00ab5460;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00ab5460;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00ab5460;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00ab5460;
      case 0x10:
        uVar16 = FUN_00ab4db0(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00ab4ffc;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar19 = puVar19 + 1;
        *puVar19 = uVar12 | uVar17;
        goto LAB_00ab4ffc;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00ab4ff8;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00ab4ffc;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00ab4ff8;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_00ab5460:
LAB_00ab4ff8:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00ab4ffc;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00ab4ffc;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00ab4ffc;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00ab4ffc;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00ab5598;
        goto LAB_00ab4ffc;
      case 0x1a:
        uVar16 = puVar19[-1] & *puVar19;
        break;
      case 0x1b:
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar16 = (long)puVar19[-1] / (long)*puVar19;
        }
        break;
      case 0x1c:
        uVar16 = puVar19[-1] - *puVar19;
        break;
      case 0x1d:
        uVar16 = *puVar19;
        lVar11 = 0;
        if (uVar16 != 0) {
          lVar11 = (long)puVar19[-1] / (long)uVar16;
        }
        uVar16 = puVar19[-1] - lVar11 * uVar16;
        break;
      case 0x1e:
        uVar16 = puVar19[-1] * *puVar19;
        break;
      case 0x1f:
        uVar16 = *puVar19;
LAB_00ab5598:
        *puVar19 = -uVar16;
        goto LAB_00ab4ffc;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00ab4ffc;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00ab4db0(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00ab4ffc;
      case 0x24:
        uVar16 = puVar19[-1] << (*puVar19 & 0x3f);
        break;
      case 0x25:
        uVar16 = puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x26:
        uVar16 = (long)puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x27:
        uVar16 = puVar19[-1] ^ *puVar19;
        break;
      case 0x28:
        puVar14 = puVar19 + -1;
        uVar16 = *puVar19;
        local_68 = pbVar18 + 3;
        puVar19 = puVar14;
        if (uVar16 != 0) {
          local_68 = pbVar18 + 3 + *(short *)(pbVar18 + 1);
        }
        goto LAB_00ab4ffc;
      case 0x29:
        uVar16 = (ulong)(puVar19[-1] == *puVar19);
        break;
      case 0x2a:
        uVar16 = (ulong)(*puVar19 <= puVar19[-1]);
        break;
      case 0x2b:
        uVar16 = (ulong)(*puVar19 < puVar19[-1]);
        break;
      case 0x2c:
        uVar16 = (ulong)(puVar19[-1] <= *puVar19);
        break;
      case 0x2d:
        uVar16 = (ulong)(puVar19[-1] < *puVar19);
        break;
      case 0x2e:
        uVar16 = (ulong)(puVar19[-1] != *puVar19);
        break;
      case 0x2f:
        local_68 = pbVar18 + (long)*(short *)(pbVar18 + 1) + 3;
        goto LAB_00ab4ffc;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00ab4ff8;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, bVar8 != 0x6e)) &&
           (puVar14 = puVar2, bVar8 != 0x6d)) {
          puVar14 = (ulong *)(param_3 + (ulong)(uVar15 - 0x50) * 8);
        }
        goto LAB_00ab4ff4;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar7 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar7 < 0x40) {
          uVar17 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar14 = puVar5, bVar8 != 0x6f)) &&
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00ab5134;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00ab5134:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00ab5134;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00ab4ff8;
      case 0x90:
        uVar10 = FUN_00ab4db0(&local_68,pbVar6);
        puVar9 = PTR___sF_00b01448;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00ab5698;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00ab5698:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00ab5698;
        }
LAB_00ab4ff4:
        uVar16 = *puVar14;
        goto LAB_00ab4ff8;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00ab4db0(&local_68,pbVar6);
        puVar9 = PTR___sF_00b01448;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar13;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar13 = pbVar13 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar18;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00ab56c0;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00ab56c0:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00ab56c0;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00ab4ff8;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar18 + 2;
        puVar14 = (ulong *)*puVar19;
        bVar8 = pbVar18[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar19 = (ulong)(byte)*puVar14;
          }
          else {
            if (bVar8 != 2) {
LAB_00ab5898:
              fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n",
                      "evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar19 = (ulong)(ushort)*puVar14;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_00ab5898;
            goto LAB_00ab53f0;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00ab4ffc;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00ab4ffc:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00ab5934  FUN_00ab5934 =====

undefined8 FUN_00ab5934(long param_1,ulong param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  undefined *__src;
  ulong uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar3 = FUN_00ab5e5c(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00ab6024(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00b1093c);
    if (PTR_DAT_00b102c8 < PTR_DAT_00b102d0) {
      plVar4 = (long *)PTR_DAT_00b102c8;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00ab5a3c;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00b102d0);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00ab5a3c;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00b102d0);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00b1093c);
    goto LAB_00ab5a84;
  }
LAB_00ab5aa4:
  bVar2 = 1;
LAB_00ab5aa8:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00ab3a98(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  bVar1 = (bool)(bVar2 ^ 1);
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(long *)(param_1 + 600) = local_6b0;
  *(long *)(param_1 + 0x260) = lVar5;
  if (!bVar1) {
    if (param_3[4] == 0) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00b1093c);
      __src = PTR_DAT_00b102c8;
      if (PTR_method_00b102d8 <= PTR_DAT_00b102d0) {
        __n = (long)PTR_method_00b102d8 - (long)PTR_DAT_00b102c8;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_00b10978) {
          free(__src);
        }
        PTR_method_00b102d8 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_00b102d0 = __dest + __n;
        PTR_DAT_00b102c8 = __dest;
      }
      *(long *)PTR_DAT_00b102d0 = lVar5;
      *(long *)((long)PTR_DAT_00b102d0 + 8) = local_698;
      *(long *)((long)PTR_DAT_00b102d0 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_00b102d0 + 0x10) = local_690;
      PTR_DAT_00b102d0 = (undefined *)((long)PTR_DAT_00b102d0 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00b1093c);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00ab5a3c:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00b1093c);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00ab5e5c(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00ab5aa8;
  }
LAB_00ab5a84:
  uVar3 = FUN_00ab5e5c(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00ab5aa4;
}


// ===== 00ab5c08  FUN_00ab5c08 =====

undefined8 FUN_00ab5c08(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70 [4];
  
  uVar12 = (ulong)(ushort)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      uVar5 = uVar12;
      piVar10 = (int *)param_1[2];
      do {
        if (((*piVar10 == 1) && (uVar1 = *(long *)(piVar10 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(ulong *)(piVar10 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (ulong *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            if (*(int *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38) == 0x6474e550) {
              lVar8 = param_1[2] + (uVar6 & 0xffffffff) * 0x38;
              uVar2 = *param_3;
              lVar3 = param_3[1];
              lVar9 = *(long *)(lVar8 + 0x28);
              lVar8 = *(long *)(lVar8 + 0x10) + uVar13;
              *(long *)(lVar3 + 0x20) = lVar8;
              *(long *)(lVar3 + 0x28) = lVar9;
              uVar5 = FUN_00ab5d3c(uVar2,lVar8,lVar9 + lVar8,local_70);
              if ((uVar5 & 1) != 0) {
                lVar8 = param_3[1];
                *(undefined8 *)(lVar8 + 0x10) = local_70[0];
                *(undefined8 *)(lVar8 + 0x18) = 0xffffffffffffffff;
                return 1;
              }
            }
            uVar4 = (int)uVar12 - 1;
            uVar12 = (ulong)uVar4;
            uVar6 = uVar6 - 1;
          } while ((uVar4 & 0xffff) != 0);
          return 0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


// ===== 00ab5d3c  FUN_00ab5d3c =====

undefined8 FUN_00ab5d3c(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00b01448;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00b01448 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00ab4a24(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00ab4a24(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00b01448 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00ab5e5c  FUN_00ab5e5c =====

undefined8
FUN_00ab5e5c(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *local_68;
  
  puVar9 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar9 = (uint *)0xffffffffffffffff;
  }
  while( true ) {
    puVar3 = puVar1;
    if (puVar9 <= puVar3) {
      return 0;
    }
    local_68 = puVar3 + 1;
    uVar8 = (ulong)*puVar3;
    if (*puVar3 == 0xffffffff) {
      uVar8 = *(ulong *)(puVar3 + 1);
      local_68 = puVar3 + 3;
    }
    if (uVar8 == 0) break;
    puVar1 = (uint *)((long)local_68 + uVar8);
    if ((((*local_68 != 0) &&
         (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), param_3 <= puVar7)) &&
        (puVar7 < puVar9)) && (lVar4 = FUN_00ab2bcc(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00ab4a24(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00ab4a24(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00ab4db0(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00ab4a24(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00ab4a24(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
            param_6[5] = uVar6;
          }
        }
        param_6[2] = puVar9;
        param_6[3] = uVar8;
        *param_6 = puVar3;
        param_6[1] = (long)puVar1 - (long)puVar3;
        param_6[4] = lVar4 + uVar8;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 00ab6024  FUN_00ab6024 =====

undefined8
FUN_00ab6024(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  long local_70;
  undefined1 local_68;
  
  lVar4 = param_3 + (param_4 & 0xffffffff);
  uVar1 = FUN_00ab5d3c(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00ab618c(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00ab4a24(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00ab4a24(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00ab4a24(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00ab2a3c(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00ab618c  FUN_00ab618c =====

undefined8 FUN_00ab618c(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00b01448;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00ab6254:
        fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
                "Can\'t binary search on variable length encoded data.");
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 3) {
        return 8;
      }
      if (param_1 == 4) {
        return 0x10;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 10) {
      return 4;
    }
    if (param_1 == 9) goto LAB_00ab6254;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab6288  FUN_00ab6288 =====

char * FUN_00ab6288(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00396cbc + *(int *)(&DAT_00396cbc + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00ab62b8  FUN_00ab62b8 =====

void FUN_00ab62b8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00b01448;
  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","_Unwind_GetDataRelBase",
          "_Unwind_GetDataRelBase() not implemented");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab62fc  FUN_00ab62fc =====

void FUN_00ab62fc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00b01448;
  fprintf((FILE *)(PTR___sF_00b01448 + 0x130),"libunwind: %s - %s\n","_Unwind_GetTextRelBase",
          "_Unwind_GetTextRelBase() not implemented");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00ab6340  FUN_00ab6340 =====

undefined8 FUN_00ab6340(undefined8 param_1)

{
  int iVar1;
  undefined8 local_4e8 [9];
  undefined1 auStack_4a0 [528];
  undefined1 auStack_290 [624];
  
  FUN_00ab6530(auStack_4a0);
  FUN_00ab2774(auStack_290,auStack_4a0);
  FUN_00ab2898(auStack_290,0xffffffff,param_1);
  iVar1 = FUN_00ab29ac(auStack_290,local_4e8);
  if (iVar1 != 0) {
    local_4e8[0] = 0;
  }
  return local_4e8[0];
}


// ===== 00ab63a8  FUN_00ab63a8 =====

undefined8 FUN_00ab63a8(code *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4b0 [528];
  undefined1 auStack_2a0 [624];
  
  FUN_00ab6530(auStack_4b0);
  FUN_00ab2774(auStack_2a0,auStack_4b0);
  do {
    iVar1 = FUN_00ab2984(auStack_2a0);
    if (iVar1 < 1) {
      return 5;
    }
    uVar2 = (*param_1)(auStack_2a0,param_2);
  } while ((int)uVar2 == 0);
  return uVar2;
}


// ===== 00ab6430  FUN_00ab6430 =====

undefined8 FUN_00ab6430(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00ab281c(param_1,0xfffffffe,&local_18);
  return local_18;
}


// ===== 00ab6460  FUN_00ab6460 =====

void FUN_00ab6460(undefined8 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ab2a14();
  *param_2 = (uint)(0 < iVar1);
  FUN_00ab2734(param_1);
  return;
}


// ===== 00ab64a0  FUN_00ab64a0 =====

undefined1  [16] FUN_00ab64a0(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00ab6530  FUN_00ab6530 =====

undefined8
FUN_00ab6530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 in_x11;
  undefined8 in_x12;
  undefined8 in_x13;
  undefined8 in_x14;
  undefined8 in_x15;
  undefined8 in_x16;
  undefined8 in_x17;
  undefined8 in_x18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *(long *)param_10 = param_10;
  *(undefined8 *)(param_10 + 8) = param_11;
  *(undefined8 *)(param_10 + 0x10) = param_12;
  *(undefined8 *)(param_10 + 0x18) = param_13;
  *(undefined8 *)(param_10 + 0x20) = param_14;
  *(undefined8 *)(param_10 + 0x28) = param_15;
  *(undefined8 *)(param_10 + 0x30) = param_16;
  *(undefined8 *)(param_10 + 0x38) = param_17;
  *(undefined8 *)(param_10 + 0x40) = param_1;
  *(undefined8 *)(param_10 + 0x48) = in_x9;
  *(undefined8 *)(param_10 + 0x50) = in_x10;
  *(undefined8 *)(param_10 + 0x58) = in_x11;
  *(undefined8 *)(param_10 + 0x60) = in_x12;
  *(undefined8 *)(param_10 + 0x68) = in_x13;
  *(undefined8 *)(param_10 + 0x70) = in_x14;
  *(undefined8 *)(param_10 + 0x78) = in_x15;
  *(undefined8 *)(param_10 + 0x80) = in_x16;
  *(undefined8 *)(param_10 + 0x88) = in_x17;
  *(undefined8 *)(param_10 + 0x90) = in_x18;
  *(undefined8 *)(param_10 + 0x98) = unaff_x19;
  *(undefined8 *)(param_10 + 0xa0) = unaff_x20;
  *(undefined8 *)(param_10 + 0xa8) = unaff_x21;
  *(undefined8 *)(param_10 + 0xb0) = unaff_x22;
  *(undefined8 *)(param_10 + 0xb8) = unaff_x23;
  *(undefined8 *)(param_10 + 0xc0) = unaff_x24;
  *(undefined8 *)(param_10 + 200) = unaff_x25;
  *(undefined8 *)(param_10 + 0xd0) = unaff_x26;
  *(undefined8 *)(param_10 + 0xd8) = unaff_x27;
  *(undefined8 *)(param_10 + 0xe0) = unaff_x28;
  *(undefined8 *)(param_10 + 0xe8) = unaff_x29;
  *(undefined8 *)(param_10 + 0xf0) = unaff_x30;
  *(BADSPACEBASE **)(param_10 + 0xf8) = register0x00000008;
  *(undefined8 *)(param_10 + 0x100) = unaff_x30;
  *(undefined8 *)(param_10 + 0x110) = param_2;
  *(undefined8 *)(param_10 + 0x118) = param_3;
  *(undefined8 *)(param_10 + 0x120) = param_4;
  *(undefined8 *)(param_10 + 0x128) = param_5;
  *(undefined8 *)(param_10 + 0x130) = param_6;
  *(undefined8 *)(param_10 + 0x138) = param_7;
  *(undefined8 *)(param_10 + 0x140) = param_8;
  *(undefined8 *)(param_10 + 0x148) = param_9;
  *(undefined8 *)(param_10 + 0x150) = unaff_d8;
  *(undefined8 *)(param_10 + 0x158) = unaff_d9;
  *(undefined8 *)(param_10 + 0x160) = unaff_d10;
  *(undefined8 *)(param_10 + 0x168) = unaff_d11;
  *(undefined8 *)(param_10 + 0x170) = unaff_d12;
  *(undefined8 *)(param_10 + 0x178) = unaff_d13;
  *(undefined8 *)(param_10 + 0x180) = unaff_d14;
  *(undefined8 *)(param_10 + 0x188) = unaff_d15;
  *(undefined8 *)(param_10 + 400) = in_d16;
  *(undefined8 *)(param_10 + 0x198) = in_d17;
  *(undefined8 *)(param_10 + 0x1a0) = in_d18;
  *(undefined8 *)(param_10 + 0x1a8) = in_d19;
  *(undefined8 *)(param_10 + 0x1b0) = in_d20;
  *(undefined8 *)(param_10 + 0x1b8) = in_d21;
  *(undefined8 *)(param_10 + 0x1c0) = in_d22;
  *(undefined8 *)(param_10 + 0x1c8) = in_d23;
  *(undefined8 *)(param_10 + 0x1d0) = in_d24;
  *(undefined8 *)(param_10 + 0x1d8) = in_d25;
  *(undefined8 *)(param_10 + 0x1e0) = in_d26;
  *(undefined8 *)(param_10 + 0x1e8) = in_d27;
  *(undefined8 *)(param_10 + 0x1f0) = in_d28;
  *(undefined8 *)(param_10 + 0x1f8) = in_d29;
  *(undefined8 *)(param_10 + 0x200) = in_d30;
  *(undefined8 *)(param_10 + 0x208) = in_d31;
  return 0;
}


// ===== 00ab65cc  libdiscorernjsimodule::initLibDiscore =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscorernjsimodule::initLibDiscore */

void __rustcall libdiscorernjsimodule::initLibDiscore(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    init_libdiscore();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab6604  libdiscorernjsimodule::bridgeJSIFunctions =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscorernjsimodule::bridgeJSIFunctions */

void __rustcall libdiscorernjsimodule::bridgeJSIFunctions(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    register_libdiscore_jsi();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab663c  libdiscorernjsimodule::tearDownJSIFunctionsOnJsThread =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscorernjsimodule::tearDownJSIFunctionsOnJsThread */

bool __rustcall libdiscorernjsimodule::tearDownJSIFunctionsOnJsThread(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long local_a8;
  long local_a0;
  char local_98;
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*param_2 == 0) {
    bVar3 = false;
    goto LAB_00ab6910;
  }
  plVar4 = (long *)operator_new(0x20);
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00b006d8;
  plVar4[1] = 0;
  plVar11 = plVar4 + 3;
  *(undefined1 *)plVar11 = 0;
                    /* try { // try from 00ab66a4 to 00ab66ab has its CatchHandler @ 00ab69b8 */
  plVar5 = (long *)operator_new(0x20);
  plVar5[2] = 0;
  plVar5[1] = 0;
  *plVar5 = (long)&PTR_FUN_00b00728;
                    /* try { // try from 00ab66cc to 00ab66d3 has its CatchHandler @ 00ab69a0 */
  std::__ndk1::promise<void>::promise();
                    /* try { // try from 00ab66d4 to 00ab66df has its CatchHandler @ 00ab6990 */
  std::__ndk1::promise<void>::get_future();
  param_2 = (long *)*param_2;
  FUN_00ab1cb0(1,plVar5 + 1);
  FUN_00ab1cb0(1,plVar4 + 1);
                    /* try { // try from 00ab6708 to 00ab670f has its CatchHandler @ 00ab6978 */
  local_80 = (long *)operator_new(0x30);
  local_80[2] = (long)(plVar5 + 3);
  local_80[3] = (long)plVar5;
  *local_80 = (long)&PTR_FUN_00b00778;
  local_80[1] = param_1;
  local_80[4] = (long)plVar11;
  local_80[5] = (long)plVar4;
  (**(code **)(*param_2 + 0x18))(param_2,&local_a0);
  if (local_80 == &local_a0) {
    lVar9 = 4;
    plVar6 = &local_a0;
LAB_00ab6774:
    (**(code **)(*plVar6 + lVar9 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar9 = 5;
    plVar6 = local_80;
    goto LAB_00ab6774;
  }
  lVar9 = std::__ndk1::chrono::steady_clock::now();
  local_a0 = local_a8 + 0x18;
  local_98 = '\x01';
                    /* try { // try from 00ab679c to 00ab67a3 has its CatchHandler @ 00ab6970 */
  std::__ndk1::mutex::lock();
  if ((*(uint *)(local_a8 + 0x70) >> 3 & 1) == 0) {
    if ((*(uint *)(local_a8 + 0x70) >> 2 & 1) != 0) {
      uVar10 = 0;
      goto LAB_00ab68a4;
    }
    lVar9 = lVar9 + 2000000000;
    do {
      lVar7 = std::__ndk1::chrono::steady_clock::now();
      if (lVar9 <= lVar7) {
        uVar10 = *(uint *)(local_a8 + 0x70);
        break;
      }
      lVar7 = std::__ndk1::chrono::steady_clock::now();
      if (lVar7 < lVar9) {
        lVar7 = std::__ndk1::chrono::steady_clock::now();
        uVar12 = lVar9 - lVar7;
        if (0 < (long)uVar12) {
          std::__ndk1::chrono::steady_clock::now();
          uVar8 = std::__ndk1::chrono::system_clock::now();
          if (uVar8 == 0) {
            lVar7 = 0;
LAB_00ab6878:
            if (lVar7 <= (long)(uVar12 ^ 0x7fffffffffffffff)) goto LAB_00ab67e4;
            lVar7 = 0x7fffffffffffffff;
          }
          else {
            if (0 < (long)uVar8) {
              if (uVar8 < 0x20c49ba5e353f8) goto LAB_00ab6870;
              lVar7 = 0x7fffffffffffffff;
              goto LAB_00ab6878;
            }
            if (0xffdf3b645a1cac08 < uVar8) {
LAB_00ab6870:
              lVar7 = uVar8 * 1000;
              goto LAB_00ab6878;
            }
            lVar7 = -0x8000000000000000;
LAB_00ab67e4:
            lVar7 = lVar7 + uVar12;
          }
          std::__ndk1::condition_variable::__do_timed_wait(local_a8 + 0x40,&local_a0,lVar7);
          std::__ndk1::chrono::steady_clock::now();
        }
        std::__ndk1::chrono::steady_clock::now();
      }
      uVar10 = *(uint *)(local_a8 + 0x70);
    } while ((uVar10 >> 2 & 1) == 0);
    uVar10 = (uVar10 >> 2 ^ 0xffffffff) & 1;
    if (local_98 != '\0') goto LAB_00ab68a4;
  }
  else {
    uVar10 = 2;
LAB_00ab68a4:
    std::__ndk1::mutex::unlock();
  }
  puVar2 = PTR_stderr_00b00aa8;
  bVar3 = uVar10 == 0;
  if (uVar10 != 0) {
    *(undefined4 *)plVar11 = 1;
    fwrite("[libdiscore] tearDownJSIFunctionsOnJsThread: timed out waiting for JS thread; future block will no-op\n"
           ,0x66,1,*(FILE **)puVar2);
  }
  std::__ndk1::future<void>::~future((future<void> *)&local_a8);
  lVar9 = FUN_00ab1ce0(0xffffffffffffffff,plVar5 + 1);
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  lVar9 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1);
  if (lVar9 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_00ab6910:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


// ===== 00ab69e0  FUN_00ab69e0 =====

void FUN_00ab69e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    plVar4 = *(long **)(param_1 + 0x10);
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
    plVar4 = *(long **)(param_1 + 0x10);
  }
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab6ab8  FUN_00ab6ab8 =====

void FUN_00ab6ab8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


