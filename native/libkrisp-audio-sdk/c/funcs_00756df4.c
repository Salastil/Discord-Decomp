// ===== 00756df4  FUN_00756df4 =====

void FUN_00756df4(undefined8 param_1,undefined4 param_2)

{
  FUN_00759ad8(param_2);
  return;
}


// ===== 00756e00  FUN_00756e00 =====

undefined8 FUN_00756e00(long param_1)

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


// ===== 00756f20  FUN_00756f20 =====

undefined8
FUN_00756f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_00756390(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_007573b4(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00757f2c(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_007a3898;
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
              goto LAB_0075720c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0075720c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_00757318:
                  fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_00757318;
              puVar9 = (ulong *)FUN_007587c4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00758060(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00758060(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00758060(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_007a3898;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00757260;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00757260:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00758060(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 007573b4  FUN_007573b4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_007573b4(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_6f0 [8];
  undefined8 *local_6e8;
  undefined8 *puStack_6e0;
  undefined8 local_6d8;
  int local_6cc;
  undefined8 *local_6c8;
  undefined1 *local_6c0;
  undefined1 auStack_6a0 [544];
  undefined8 local_480 [124];
  byte *local_a0;
  ulong local_98 [7];
  
  puVar5 = (undefined8 *)auStack_6f0;
  lVar19 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6cc = param_5;
  local_6d8 = param_1;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6c8 = (undefined8 *)0x0;
  local_6c0 = auStack_6a0;
  local_6e8 = local_480;
  puStack_6e0 = (undefined8 *)(param_6 + 0x8e);
  while( true ) {
    pbVar13 = *(byte **)((long)local_98 + lVar19);
    pbVar2 = *(byte **)((long)local_98 + lVar19 + 8);
    uVar20 = *(ulong *)((long)local_98 + lVar19 + 0x10);
    local_a0 = pbVar13;
    if (pbVar13 < pbVar2 && uVar20 != 0) break;
LAB_00757444:
    lVar19 = lVar19 + 0x18;
    if (lVar19 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00757474:
  puVar11 = local_6c8;
  puVar4 = PTR___sF_007a3898;
  pbVar9 = pbVar13 + 1;
  bVar3 = *pbVar13;
  local_a0 = pbVar9;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00757c6c;
  case 1:
    uVar17 = FUN_00758270(local_6d8,&local_a0,pbVar2,(char)param_3[3],0);
    pbVar13 = local_a0;
    break;
  case 2:
    uVar8 = (uint)pbVar13[1];
    iVar14 = (int)param_3[5];
    local_a0 = pbVar13 + 2;
    goto LAB_007578a4;
  case 3:
    uVar8 = (uint)*(ushort *)(pbVar13 + 1);
    iVar14 = (int)param_3[5];
    local_a0 = pbVar13 + 3;
    goto LAB_007578a4;
  case 4:
    uVar8 = *(uint *)(pbVar13 + 1);
    iVar14 = (int)param_3[5];
    local_a0 = pbVar13 + 5;
LAB_007578a4:
    uVar17 = uVar17 + iVar14 * uVar8;
    pbVar13 = local_a0;
    break;
  case 5:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    lVar7 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_007a3898 + 0x130);
      goto LAB_00757e1c;
    }
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    lVar12 = (long)*(int *)((long)param_3 + 0x2c);
    if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
      uVar21 = *puVar11;
      *(undefined1 *)((long)puVar11 + 4) = 1;
      *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
      *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
    }
LAB_00757a54:
    lVar7 = lVar7 * lVar12;
LAB_00757a58:
    *(undefined4 *)puVar11 = 2;
    puVar11[1] = lVar7;
    pbVar13 = local_a0;
    break;
  case 6:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00757d0c:
      __s = (FILE *)(PTR___sF_007a3898 + 0x130);
      __size = 0x47;
      goto LAB_00757e1c;
    }
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    if (*(char *)((long)puVar11 + 4) != '\0') {
      uVar22 = *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8);
      uVar21 = *(undefined8 *)(local_6c0 + uVar18 * 0x10);
LAB_00757c64:
      puVar11[1] = uVar22;
      *puVar11 = uVar21;
    }
    goto code_r0x00757c6c;
  case 7:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00757e10:
      __s = (FILE *)(PTR___sF_007a3898 + 0x130);
      __size = 0x40;
      goto LAB_00757e1c;
    }
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
      uVar21 = *puVar11;
      *(undefined1 *)((long)puVar11 + 4) = 1;
      *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
      *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
    }
    *(undefined4 *)puVar11 = 1;
    pbVar13 = local_a0;
    break;
  case 8:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00757df4:
      __s = (FILE *)(PTR___sF_007a3898 + 0x130);
      __size = 0x41;
      goto LAB_00757e1c;
    }
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
      uVar21 = *puVar11;
      *(undefined1 *)((long)puVar11 + 4) = 1;
      *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
      *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
    }
    *(undefined4 *)puVar11 = 0;
    pbVar13 = local_a0;
    break;
  case 9:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    uVar15 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_007a3898 + 0x130);
      goto LAB_00757e1c;
    }
    if (0x5f < uVar15) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00757e10;
    }
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
      uVar21 = *puVar11;
      *(undefined1 *)((long)puVar11 + 4) = 1;
      *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
      *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
    }
    puVar11[1] = uVar15;
    *(undefined4 *)puVar11 = 5;
    pbVar13 = local_a0;
    break;
  case 10:
    puVar11 = (undefined8 *)((long)puVar5 + -0x620);
    *puVar11 = local_6c8;
    memcpy((undefined1 *)((long)puVar5 + -0x618),param_6,0x618);
    local_6c8 = puVar11;
    puVar5 = puVar11;
    pbVar13 = local_a0;
    break;
  case 0xb:
    if (local_6c8 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_6,local_6c8 + 1,0x618);
    local_6c8 = (undefined8 *)*puVar11;
    pbVar13 = local_a0;
    break;
  case 0xc:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    uVar6 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_007a3898 + 0x130);
      goto LAB_00757e1c;
    }
    *param_6 = (int)uVar18;
    param_6[1] = uVar6;
    pbVar13 = local_a0;
    break;
  case 0xd:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00757d0c;
    }
    *param_6 = (int)uVar18;
    pbVar13 = local_a0;
    break;
  case 0xe:
    uVar6 = FUN_007585fc(&local_a0,pbVar2);
    param_6[1] = uVar6;
    pbVar13 = local_a0;
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar9;
    goto LAB_00757bbc;
  case 0x10:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00757df4;
    }
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
      uVar21 = *puVar11;
      *(undefined1 *)((long)puVar11 + 4) = 1;
      *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
      *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
    }
    uVar6 = 6;
LAB_00757bb4:
    *(undefined4 *)puVar11 = uVar6;
    puVar11[1] = local_a0;
LAB_00757bbc:
    lVar7 = FUN_007585fc(&local_a0,pbVar2);
    local_a0 = local_a0 + lVar7;
    pbVar13 = local_a0;
    break;
  case 0x11:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    puVar4 = PTR___sF_007a3898;
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_007a3898 + 0x130);
      goto LAB_00757e1c;
    }
    uVar15 = 0;
    uVar10 = 0;
    pbVar13 = local_a0;
    pbVar9 = local_a0;
    do {
      if (pbVar9 == pbVar2) {
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar9;
      pbVar13 = pbVar13 + 1;
      uVar16 = uVar15 & 0x3f;
      uVar15 = uVar15 + 7;
      uVar10 = ((ulong)bVar3 & 0x7f) << uVar16 | uVar10;
      pbVar9 = pbVar9 + 1;
    } while ((char)bVar3 < '\0');
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    local_a0 = pbVar13;
    uVar16 = -1L << (uVar15 & 0x3f);
    iVar14 = *(int *)((long)param_3 + 0x2c);
    if (0x38 < (int)uVar15 - 7U || bVar3 < 0x40) {
      uVar16 = 0;
    }
    if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
      uVar21 = *puVar11;
      *(undefined1 *)((long)puVar11 + 4) = 1;
      *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
      *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
    }
    uVar10 = uVar10 | uVar16;
    uVar6 = 2;
LAB_00757b58:
    *(undefined4 *)puVar11 = uVar6;
    puVar11[1] = uVar10 * (long)iVar14;
    pbVar13 = local_a0;
    break;
  case 0x12:
    uVar15 = FUN_007585fc(&local_a0,pbVar2);
    puVar4 = PTR___sF_007a3898;
    uVar18 = 0;
    uVar10 = 0;
    pbVar13 = local_a0;
    pbVar9 = local_a0;
    do {
      if (pbVar9 == pbVar2) {
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar9;
      pbVar13 = pbVar13 + 1;
      uVar16 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar10 = ((ulong)bVar3 & 0x7f) << uVar16 | uVar10;
      pbVar9 = pbVar9 + 1;
    } while ((char)bVar3 < '\0');
    local_a0 = pbVar13;
    if (0x5f < uVar15) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto LAB_00757df4;
    }
    iVar14 = *(int *)((long)param_3 + 0x2c);
    uVar8 = (uint)(-1L << (uVar18 & 0x3f));
    if (0x38 < (int)uVar18 - 7U || bVar3 < 0x40) {
      uVar8 = 0;
    }
    *param_6 = (int)uVar15;
    param_6[1] = iVar14 * ((uint)uVar10 | uVar8);
    break;
  case 0x13:
    uVar18 = 0;
    uVar15 = 0;
    pbVar13 = pbVar9;
    do {
      if (pbVar13 == pbVar2) {
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar13;
      pbVar9 = pbVar9 + 1;
      uVar10 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar15 = ((ulong)bVar3 & 0x7f) << uVar10 | uVar15;
      pbVar13 = pbVar13 + 1;
    } while ((char)bVar3 < '\0');
    local_a0 = pbVar9;
    uVar8 = (uint)(-1L << (uVar18 & 0x3f));
    if (0x38 < (int)uVar18 - 7U || bVar3 < 0x40) {
      uVar8 = 0;
    }
    param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar15 | uVar8);
    pbVar13 = pbVar9;
    break;
  case 0x14:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (0x5f < uVar18) {
      fprintf((FILE *)(PTR___sF_007a3898 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar18);
      goto LAB_00757e24;
    }
    lVar7 = FUN_007585fc(&local_a0,pbVar2);
    puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
    iVar14 = *(int *)((long)param_3 + 0x2c);
    if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
      uVar21 = *puVar11;
      *(undefined1 *)((long)puVar11 + 4) = 1;
      *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
      *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
    }
    *(undefined4 *)puVar11 = 4;
    puVar11[1] = lVar7 * iVar14;
    pbVar13 = local_a0;
    break;
  case 0x15:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    puVar4 = PTR___sF_007a3898;
    if (uVar18 < 0x60) {
      uVar15 = 0;
      uVar10 = 0;
      pbVar13 = local_a0;
      pbVar9 = local_a0;
      do {
        if (pbVar9 == pbVar2) {
          fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar3 = *pbVar9;
        pbVar13 = pbVar13 + 1;
        uVar16 = uVar15 & 0x3f;
        uVar15 = uVar15 + 7;
        uVar10 = ((ulong)bVar3 & 0x7f) << uVar16 | uVar10;
        pbVar9 = pbVar9 + 1;
      } while ((char)bVar3 < '\0');
      puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
      local_a0 = pbVar13;
      uVar16 = -1L << (uVar15 & 0x3f);
      iVar14 = *(int *)((long)param_3 + 0x2c);
      if (0x38 < (int)uVar15 - 7U || bVar3 < 0x40) {
        uVar16 = 0;
      }
      if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
        uVar21 = *puVar11;
        *(undefined1 *)((long)puVar11 + 4) = 1;
        *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
        *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
      }
      uVar10 = uVar10 | uVar16;
      uVar6 = 4;
      goto LAB_00757b58;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_007a3898 + 0x130);
    goto LAB_00757e1c;
  case 0x16:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (uVar18 < 0x60) {
      puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
      if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
        uVar21 = *puVar11;
        *(undefined1 *)((long)puVar11 + 4) = 1;
        *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
        *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
      }
      uVar6 = 7;
      goto LAB_00757bb4;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_007a3898 + 0x130);
    goto LAB_00757e1c;
  default:
    bVar1 = bVar3 & 0xc0;
    uVar18 = (ulong)bVar3 & 0x3f;
    if (bVar1 != 0x40) {
      if (bVar1 != 0xc0) {
        if (bVar1 != 0x80) {
          return 0;
        }
        lVar7 = FUN_007585fc(&local_a0,pbVar2);
        puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
        lVar12 = (long)*(int *)((long)param_3 + 0x2c);
        if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
          uVar21 = *puVar11;
          *(undefined1 *)((long)puVar11 + 4) = 1;
          *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
          *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
        }
        goto LAB_00757a54;
      }
      puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
      if (*(char *)((long)puVar11 + 4) != '\0') {
        uVar22 = *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8);
        uVar21 = *(undefined8 *)(local_6c0 + uVar18 * 0x10);
        goto LAB_00757c64;
      }
      goto code_r0x00757c6c;
    }
    uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar18);
    pbVar13 = pbVar9;
    break;
  case 0x2d:
    if (local_6cc != 4) goto code_r0x00757c6c;
    if ((*(byte *)(param_6 + 0x8f) & 1) == 0) {
      uVar22 = puStack_6e0[1];
      uVar21 = *puStack_6e0;
      *(undefined1 *)(param_6 + 0x8f) = 1;
      local_6e8[1] = uVar22;
      *local_6e8 = uVar21;
    }
    *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
    pbVar13 = local_a0;
    break;
  case 0x2e:
    uVar6 = FUN_007585fc(&local_a0,pbVar2);
    param_6[4] = uVar6;
    pbVar13 = local_a0;
    break;
  case 0x2f:
    uVar18 = FUN_007585fc(&local_a0,pbVar2);
    if (uVar18 < 0x60) {
      lVar7 = FUN_007585fc(&local_a0,pbVar2);
      puVar11 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
      iVar14 = *(int *)((long)param_3 + 0x2c);
      if ((*(byte *)((long)puVar11 + 4) & 1) == 0) {
        uVar21 = *puVar11;
        *(undefined1 *)((long)puVar11 + 4) = 1;
        *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar11[1];
        *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
      }
      lVar7 = -(lVar7 * iVar14);
      goto LAB_00757a58;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_007a3898 + 0x130);
LAB_00757e1c:
    fwrite(__ptr,__size,1,__s);
LAB_00757e24:
    fflush((FILE *)(PTR___sF_007a3898 + 0x130));
    return 0;
  }
joined_r0x007579f8:
  if ((pbVar2 <= pbVar13) || (uVar20 <= uVar17)) goto LAB_00757444;
  goto LAB_00757474;
code_r0x00757c6c:
  pbVar13 = local_a0;
  goto joined_r0x007579f8;
}


// ===== 00757f2c  FUN_00757f2c =====

long FUN_00757f2c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_007a3898;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00757f6c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00757fb0;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_007587c4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00757f6c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00757fb0:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00758060  FUN_00758060 =====

undefined8 FUN_00758060(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_007a3898;
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
LAB_0075819c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00758184;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0075819c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00758184:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0x1f) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_007587c4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_007587c4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00758270  FUN_00758270 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00758270(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_007a3898;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_007583bc;
      if (uVar1 != 1) {
LAB_007585c8:
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_007585fc(param_2,param_3);
      puVar3 = PTR___sF_007a3898;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_007a3898;
    }
    else {
      if (uVar1 != 3) goto LAB_007585c8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_007a3898;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_007583bc:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_007a3898;
    }
    else {
      if (uVar1 != 9) goto LAB_007585c8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_007a3898;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_007a3898;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_007585c8;
      goto LAB_007583bc;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_007a3898;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_007a3898 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00758594;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00758448:
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
      goto LAB_00758448;
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
LAB_00758594:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007585fc  FUN_007585fc =====

ulong FUN_007585fc(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_007a3898;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0075862c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0075862c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0075862c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0075862c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0075862c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0075862c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0075862c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0075862c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0075862c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0075875c;
                      }
                      fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n",
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
LAB_0075875c:
  fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007587c4  FUN_007587c4 =====

ulong FUN_007587c4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  ulong uVar13;
  byte *pbVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong *puVar20;
  undefined1 auVar21 [16];
  ulong auStack_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_007585fc(&local_68,param_1 + 0x14);
  auStack_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar20 = auStack_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar19 = local_68;
    do {
      puVar9 = PTR___sF_007a3898;
      pbVar14 = pbVar19 + 1;
      local_68 = pbVar14;
      bVar8 = *pbVar19;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00759048:
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = (uint)bVar8;
      puVar15 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar17 = *(ulong *)(pbVar19 + 1);
        local_68 = pbVar19 + 9;
        goto LAB_00758cac;
      case 4:
      case 5:
      case 7:
        goto code_r0x00759048;
      case 6:
        puVar15 = (ulong *)*puVar20;
LAB_00758c3c:
        *puVar20 = *puVar15;
        goto LAB_00758848;
      case 8:
        uVar17 = (ulong)pbVar19[1];
        goto LAB_00758c10;
      case 9:
        uVar17 = (ulong)(char)pbVar19[1];
LAB_00758c10:
        local_68 = pbVar19 + 2;
        goto LAB_00758cac;
      case 10:
        uVar17 = (ulong)*(ushort *)(pbVar19 + 1);
        local_68 = pbVar19 + 3;
        goto LAB_00758cac;
      case 0xb:
        uVar17 = (ulong)*(short *)(pbVar19 + 1);
        local_68 = pbVar19 + 3;
        goto LAB_00758cac;
      case 0xc:
        uVar17 = (ulong)*(uint *)(pbVar19 + 1);
        local_68 = pbVar19 + 5;
        goto LAB_00758cac;
      case 0xd:
        uVar17 = (ulong)*(int *)(pbVar19 + 1);
        local_68 = pbVar19 + 5;
        goto LAB_00758cac;
      case 0x10:
        uVar17 = FUN_007585fc(&local_68,pbVar6);
        puVar20 = puVar20 + 1;
        *puVar20 = uVar17;
        goto LAB_00758848;
      case 0x11:
        uVar17 = 0;
        uVar12 = 0;
        pbVar19 = pbVar14;
        do {
          if (pbVar19 == pbVar6) {
            fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar19;
          pbVar14 = pbVar14 + 1;
          uVar13 = uVar17 & 0x3f;
          uVar17 = uVar17 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar13 | uVar12;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar14;
        uVar13 = -1L << (uVar17 & 0x3f);
        if (0x38 < (int)uVar17 - 7U || bVar8 < 0x40) {
          uVar13 = 0;
        }
        puVar20 = puVar20 + 1;
        *puVar20 = uVar12 | uVar13;
        goto LAB_00758848;
      case 0x12:
        uVar17 = *puVar20;
        goto LAB_00758844;
      case 0x13:
        puVar20 = puVar20 + -1;
        goto LAB_00758848;
      case 0x14:
        uVar17 = puVar20[-1];
        goto LAB_00758844;
      case 0x15:
        local_68 = pbVar19 + 2;
        uVar17 = puVar20[-(ulong)pbVar19[1]];
LAB_00758cac:
LAB_00758844:
        puVar20[1] = uVar17;
        puVar20 = puVar20 + 1;
        goto LAB_00758848;
      case 0x16:
        auVar21 = NEON_ext(*(undefined1 (*) [16])(puVar20 + -1),*(undefined1 (*) [16])(puVar20 + -1)
                           ,8,1);
        *puVar20 = auVar21._8_8_;
        puVar20[-1] = auVar21._0_8_;
        goto LAB_00758848;
      case 0x17:
        uVar17 = *puVar20;
        *puVar20 = SUB168(*(undefined1 (*) [16])(puVar20 + -2),8);
        puVar20[-1] = SUB168(*(undefined1 (*) [16])(puVar20 + -2),0);
        puVar20[-2] = uVar17;
        goto LAB_00758848;
      case 0x18:
        puVar15 = (ulong *)*puVar20;
        puVar20 = puVar20 + -1;
        *puVar20 = *puVar15;
        goto LAB_00758848;
      case 0x19:
        uVar17 = *puVar20;
        if ((long)uVar17 < 0) goto LAB_00758de4;
        goto LAB_00758848;
      case 0x1a:
        uVar17 = puVar20[-1] & *puVar20;
        break;
      case 0x1b:
        uVar17 = 0;
        if (*puVar20 != 0) {
          uVar17 = (long)puVar20[-1] / (long)*puVar20;
        }
        break;
      case 0x1c:
        uVar17 = puVar20[-1] - *puVar20;
        break;
      case 0x1d:
        uVar17 = *puVar20;
        lVar11 = 0;
        if (uVar17 != 0) {
          lVar11 = (long)puVar20[-1] / (long)uVar17;
        }
        uVar17 = puVar20[-1] - lVar11 * uVar17;
        break;
      case 0x1e:
        uVar17 = puVar20[-1] * *puVar20;
        break;
      case 0x1f:
        uVar17 = *puVar20;
LAB_00758de4:
        *puVar20 = -uVar17;
        goto LAB_00758848;
      case 0x20:
        *puVar20 = ~*puVar20;
        goto LAB_00758848;
      case 0x21:
        uVar17 = puVar20[-1] | *puVar20;
        break;
      case 0x22:
        uVar17 = puVar20[-1] + *puVar20;
        break;
      case 0x23:
        lVar11 = FUN_007585fc(&local_68,pbVar6);
        *puVar20 = *puVar20 + lVar11;
        goto LAB_00758848;
      case 0x24:
        uVar17 = puVar20[-1] << (*puVar20 & 0x3f);
        break;
      case 0x25:
        uVar17 = puVar20[-1] >> (*puVar20 & 0x3f);
        break;
      case 0x26:
        uVar17 = (long)puVar20[-1] >> (*puVar20 & 0x3f);
        break;
      case 0x27:
        uVar17 = puVar20[-1] ^ *puVar20;
        break;
      case 0x28:
        puVar15 = puVar20 + -1;
        uVar17 = *puVar20;
        local_68 = pbVar19 + 3;
        puVar20 = puVar15;
        if (uVar17 != 0) {
          local_68 = pbVar19 + 3 + *(short *)(pbVar19 + 1);
        }
        goto LAB_00758848;
      case 0x29:
        uVar17 = (ulong)(puVar20[-1] == *puVar20);
        break;
      case 0x2a:
        uVar17 = (ulong)(*puVar20 <= puVar20[-1]);
        break;
      case 0x2b:
        uVar17 = (ulong)(*puVar20 < puVar20[-1]);
        break;
      case 0x2c:
        uVar17 = (ulong)(puVar20[-1] <= *puVar20);
        break;
      case 0x2d:
        uVar17 = (ulong)(puVar20[-1] < *puVar20);
        break;
      case 0x2e:
        uVar17 = (ulong)(puVar20[-1] != *puVar20);
        break;
      case 0x2f:
        local_68 = pbVar19 + (long)*(short *)(pbVar19 + 1) + 3;
        goto LAB_00758848;
      default:
        uVar17 = (ulong)(uVar16 - 0x30);
        goto LAB_00758844;
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
        if (((uVar16 != 0x6f) && (puVar15 = puVar1, bVar8 != 0x6e)) &&
           (puVar15 = puVar2, bVar8 != 0x6d)) {
          puVar15 = (ulong *)(param_3 + (ulong)(uVar16 - 0x50) * 8);
        }
        goto LAB_00758840;
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
        uVar17 = 0;
        uVar12 = 0;
        pbVar19 = pbVar14;
        do {
          if (pbVar19 == pbVar6) {
            fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar19;
          pbVar14 = pbVar14 + 1;
          uVar13 = uVar17 & 0x3f;
          uVar17 = uVar17 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar13 | uVar12;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar7 < '\0');
        local_68 = pbVar14;
        uVar13 = -1L << (uVar17 & 0x3f);
        if (0x38 < (int)uVar17 - 7U || bVar7 < 0x40) {
          uVar13 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar15 = puVar5, bVar8 != 0x6f)) &&
             (puVar15 = puVar2, bVar8 != 0x8d)) goto LAB_00758980;
        }
        else if (bVar8 < 0x90) {
          puVar15 = puVar1;
          if ((bVar8 != 0x8e) && (puVar15 = puVar4, uVar16 != 0x8f)) {
LAB_00758980:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar15 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar15 = puVar5;
          if ((bVar8 != 0x90) && (puVar15 = puVar3, bVar8 != 0x92)) goto LAB_00758980;
        }
        uVar17 = *puVar15 + (uVar12 | uVar13);
        goto LAB_00758844;
      case 0x90:
        uVar17 = FUN_007585fc(&local_68,pbVar6);
        puVar9 = PTR___sF_007a3898;
        uVar10 = (uint)uVar17;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar15 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar15 = puVar2, uVar10 != 0x1d)) goto LAB_00758ee4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar15 = puVar1;
          if ((uVar10 != 0x1e) && (puVar15 = puVar4, uVar10 != 0x1f)) {
LAB_00758ee4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar15 = (ulong *)(param_3 + (uVar17 & 0x1f) * 8);
          }
        }
        else {
          puVar15 = puVar5;
          if ((uVar10 != 0x20) && (puVar15 = puVar3, uVar10 != 0x22)) goto LAB_00758ee4;
        }
LAB_00758840:
        uVar17 = *puVar15;
        goto LAB_00758844;
      case 0x91:
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar12 = FUN_007585fc(&local_68,pbVar6);
        puVar9 = PTR___sF_007a3898;
        uVar17 = 0;
        uVar13 = 0;
        pbVar19 = local_68;
        pbVar14 = local_68;
        do {
          if (pbVar14 == pbVar6) {
            fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar14;
          pbVar19 = pbVar19 + 1;
          uVar18 = uVar17 & 0x3f;
          uVar17 = uVar17 + 7;
          uVar13 = ((ulong)bVar8 & 0x7f) << uVar18 | uVar13;
          pbVar14 = pbVar14 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar19;
        uVar18 = -1L << (uVar17 & 0x3f);
        if (0x38 < (int)uVar17 - 7U || bVar8 < 0x40) {
          uVar18 = 0;
        }
        uVar10 = (uint)uVar12;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar15 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar15 = puVar2, uVar10 != 0x1d)) goto LAB_00758f10;
        }
        else if ((int)uVar10 < 0x20) {
          puVar15 = puVar1;
          if ((uVar10 != 0x1e) && (puVar15 = puVar4, uVar10 != 0x1f)) {
LAB_00758f10:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar15 = (ulong *)(param_3 + (uVar12 & 0x1f) * 8);
          }
        }
        else {
          puVar15 = puVar5;
          if ((uVar10 != 0x20) && (puVar15 = puVar3, uVar10 != 0x22)) goto LAB_00758f10;
        }
        uVar17 = *puVar15 + (uVar13 | uVar18);
        goto LAB_00758844;
      case 0x93:
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar19 + 2;
        puVar15 = (ulong *)*puVar20;
        bVar8 = pbVar19[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar20 = (ulong)(byte)*puVar15;
          }
          else {
            if (bVar8 != 2) {
LAB_007590ec:
              fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n",
                      "evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar20 = (ulong)(ushort)*puVar15;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_007590ec;
            goto LAB_00758c3c;
          }
          *puVar20 = (ulong)(uint)*puVar15;
        }
        goto LAB_00758848;
      }
      puVar20[-1] = uVar17;
      puVar20 = puVar20 + -1;
LAB_00758848:
      pbVar19 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar20;
  }
  return param_4;
}


// ===== 00759188  FUN_00759188 =====

undefined8 FUN_00759188(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_007596ac(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00759874(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_007b196c);
    if (PTR_DAT_007aab90 < PTR_DAT_007aab98) {
      plVar4 = (long *)PTR_DAT_007aab90;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00759290;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_007aab98);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00759290;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_007aab98);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_007b196c);
    goto LAB_007592d8;
  }
LAB_007592f8:
  bVar2 = 1;
LAB_007592fc:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_007573b4(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_007b196c);
      __src = PTR_DAT_007aab90;
      if (DAT_007aaba0 <= PTR_DAT_007aab98) {
        __n = (long)DAT_007aaba0 - (long)PTR_DAT_007aab90;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_007b19a8) {
          free(__src);
        }
        DAT_007aaba0 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_007aab98 = __dest + __n;
        PTR_DAT_007aab90 = __dest;
      }
      *(long *)PTR_DAT_007aab98 = lVar5;
      *(long *)((long)PTR_DAT_007aab98 + 8) = local_698;
      *(long *)((long)PTR_DAT_007aab98 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_007aab98 + 0x10) = local_690;
      PTR_DAT_007aab98 = (undefined *)((long)PTR_DAT_007aab98 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_007b196c);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00759290:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_007b196c);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_007596ac(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_007592fc;
  }
LAB_007592d8:
  uVar3 = FUN_007596ac(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_007592f8;
}


// ===== 0075945c  FUN_0075945c =====

undefined8 FUN_0075945c(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70 [4];
  
  uVar12 = (ulong)(ushort)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      piVar9 = (int *)param_1[2];
      uVar5 = uVar12;
      do {
        if (((*piVar9 == 1) && (uVar1 = *(long *)(piVar9 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(ulong *)(piVar9 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (ulong *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            piVar9 = (int *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38);
            if (*piVar9 == 0x6474e550) {
              uVar2 = *param_3;
              lVar3 = param_3[1];
              lVar8 = *(long *)(piVar9 + 10);
              lVar10 = *(long *)(piVar9 + 4) + uVar13;
              *(long *)(lVar3 + 0x20) = lVar10;
              *(long *)(lVar3 + 0x28) = lVar8;
              uVar5 = FUN_0075958c(uVar2,lVar10,lVar8 + lVar10,local_70);
              if ((uVar5 & 1) != 0) {
                lVar10 = param_3[1];
                *(undefined8 *)(lVar10 + 0x10) = local_70[0];
                *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
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
        piVar9 = piVar9 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


// ===== 0075958c  FUN_0075958c =====

undefined8 FUN_0075958c(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_007a3898;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_007a3898 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00758270(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00758270(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_007a3898 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 007596ac  FUN_007596ac =====

undefined8
FUN_007596ac(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  byte bVar2;
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
        (puVar7 < puVar9)) && (lVar4 = FUN_00756520(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00758270(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00758270(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        bVar2 = *(byte *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if ((bVar2 & 1) != 0) {
          lVar5 = FUN_007585fc(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00758270(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00758270(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00759874  FUN_00759874 =====

undefined8
FUN_00759874(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_0075958c(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_007599dc(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00758270(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00758270(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00758270(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00756390(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 007599dc  FUN_007599dc =====

undefined8 FUN_007599dc(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_007a3898;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00759aa4:
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00759aa4;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00759ad8  FUN_00759ad8 =====

char * FUN_00759ad8(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00214cb4 + *(int *)(&DAT_00214cb4 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00759b08  FUN_00759b08 =====

undefined1  [16] FUN_00759b08(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00759b98  FUN_00759b98 =====

undefined8
FUN_00759b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 00759c34  FUN_00759c34 =====

void FUN_00759c34(void)

{
  FUN_00350008();
  return;
}


// ===== 00759c3c  FUN_00759c3c =====

void FUN_00759c3c(size_t param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  while( true ) {
    pvVar1 = malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return;
    }
    pcVar2 = (code *)FUN_00739f84();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  uVar3 = FUN_00753a74(8);
  FUN_0073a18c();
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar3,PTR_PTR_007a1e50,PTR_FUN_007a22e8);
}


// ===== 00759ca8  thunk_FUN_00759c3c =====

void thunk_FUN_00759c3c(void)

{
  FUN_00759c3c();
  return;
}


// ===== 00759cb0  FUN_00759cb0 =====

void FUN_00759cb0(size_t param_1,size_t param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  void *local_28;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  while( true ) {
    local_28 = (void *)0x0;
    posix_memalign(&local_28,param_2,param_1);
    if (local_28 != (void *)0x0) {
      return;
    }
    pcVar1 = (code *)FUN_00739f84();
    if (pcVar1 == (code *)0x0) break;
    (*pcVar1)();
  }
  uVar2 = FUN_00753a74(8);
  FUN_0073a18c();
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar2,PTR_PTR_007a1e50,PTR_FUN_007a22e8);
}


// ===== 00759d40  thunk_FUN_00759cb0 =====

void thunk_FUN_00759cb0(void)

{
  FUN_00759cb0();
  return;
}


// ===== 00759d50  FUN_00759d50 =====

void FUN_00759d50(void)

{
  (*(code *)PTR_007a3b28)();
  return;
}


// ===== 00759d70  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_007a3b30)();
  return;
}


// ===== 00759d80  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_007a3b38)();
  return;
}


// ===== 00759d90  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_007a3b40)();
  return;
}


// ===== 00759da0  Krisp::AudioSdk::getLogger =====

void __thiscall Krisp::AudioSdk::getLogger(AudioSdk *this)

{
  (*(code *)PTR_getLogger_007a3b48)();
  return;
}


// ===== 00759db0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_007a3b50)();
  return;
}


// ===== 00759dc0  Krisp::AudioSdk::KmsAdapter::getInstance =====

void __thiscall Krisp::AudioSdk::KmsAdapter::getInstance(KmsAdapter *this)

{
  (*(code *)PTR_getInstance_007a3b58)();
  return;
}


// ===== 00759dd0  <EXTERNAL>::wcslen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcslen(wchar_t *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcslen_007a3b60)();
  return sVar1;
}


// ===== 00759de0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_007a3b68)();
  return pvVar1;
}


// ===== 00759df0  Krisp::AudioSdk::Nc<float>::create =====

void __thiscall Krisp::AudioSdk::Nc<float>::create(Nc<float> *this,NcSessionConfig *param_1)

{
  (*(code *)PTR_create_007a3b70)();
  return;
}


// ===== 00759e00  Krisp::AudioSdk::NcSession<float>::NcSession =====

void __thiscall
Krisp::AudioSdk::NcSession<float>::NcSession(NcSession<float> *this,shared_ptr *param_1)

{
  (*(code *)PTR_NcSession_007a3b78)();
  return;
}


// ===== 00759e10  Krisp::AudioSdk::NcSession<float>::~NcSession =====

void __thiscall Krisp::AudioSdk::NcSession<float>::~NcSession(NcSession<float> *this)

{
  (*(code *)PTR__NcSession_007a3b80)();
  return;
}


// ===== 00759e20  Krisp::AudioSdk::NcSession<float>::initRtSession =====

void __thiscall Krisp::AudioSdk::NcSession<float>::initRtSession(void)

{
  (*(code *)PTR_initRtSession_007a3b88)();
  return;
}


// ===== 00759e30  Krisp::AudioSdk::NcSession<float>::initSession =====

void __thiscall Krisp::AudioSdk::NcSession<float>::initSession(void)

{
  (*(code *)PTR_initSession_007a3b90)();
  return;
}


// ===== 00759e40  Krisp::AudioSdk::NcSession<float>::startSession =====

void __thiscall Krisp::AudioSdk::NcSession<float>::startSession(NcSession<float> *this)

{
  (*(code *)PTR_startSession_007a3b98)();
  return;
}


// ===== 00759e50  Krisp::AudioSdk::Nc<short>::create =====

void __thiscall Krisp::AudioSdk::Nc<short>::create(Nc<short> *this,NcSessionConfig *param_1)

{
  (*(code *)PTR_create_007a3ba0)();
  return;
}


// ===== 00759e60  Krisp::AudioSdk::NcSession<short>::NcSession =====

void __thiscall
Krisp::AudioSdk::NcSession<short>::NcSession(NcSession<short> *this,shared_ptr *param_1)

{
  (*(code *)PTR_NcSession_007a3ba8)();
  return;
}


// ===== 00759e70  Krisp::AudioSdk::NcSession<short>::~NcSession =====

void __thiscall Krisp::AudioSdk::NcSession<short>::~NcSession(NcSession<short> *this)

{
  (*(code *)PTR__NcSession_007a3bb0)();
  return;
}


// ===== 00759e80  Krisp::AudioSdk::NcSession<short>::initRtSession =====

void __thiscall Krisp::AudioSdk::NcSession<short>::initRtSession(void)

{
  (*(code *)PTR_initRtSession_007a3bb8)();
  return;
}


// ===== 00759e90  Krisp::AudioSdk::NcSession<short>::initSession =====

void __thiscall Krisp::AudioSdk::NcSession<short>::initSession(void)

{
  (*(code *)PTR_initSession_007a3bc0)();
  return;
}


// ===== 00759ea0  Krisp::AudioSdk::NcSession<short>::startSession =====

void __thiscall Krisp::AudioSdk::NcSession<short>::startSession(NcSession<short> *this)

{
  (*(code *)PTR_startSession_007a3bc8)();
  return;
}


// ===== 00759eb0  Krisp::AudioSdk::Nc<short>::process =====

void __thiscall
Krisp::AudioSdk::Nc<short>::process
          (Nc<short> *this,short *param_1,ulong param_2,short *param_3,ulong param_4,float param_5,
          PerFrameStats *param_6)

{
  (*(code *)PTR_process_007a3bd0)();
  return;
}


// ===== 00759ec0  Krisp::AudioSdk::NcSession<short>::process =====

void __thiscall
Krisp::AudioSdk::NcSession<short>::process
          (NcSession<short> *this,short *param_1,ulong param_2,short *param_3,ulong param_4,
          float param_5,PerFrameStats *param_6)

{
  (*(code *)PTR_process_007a3bd8)();
  return;
}


// ===== 00759ed0  Krisp::AudioSdk::Nc<float>::process =====

void __thiscall
Krisp::AudioSdk::Nc<float>::process
          (Nc<float> *this,float *param_1,ulong param_2,float *param_3,ulong param_4,float param_5,
          PerFrameStats *param_6)

{
  (*(code *)PTR_process_007a3be0)();
  return;
}


// ===== 00759ee0  Krisp::AudioSdk::NcSession<float>::process =====

void __thiscall
Krisp::AudioSdk::NcSession<float>::process
          (NcSession<float> *this,float *param_1,ulong param_2,float *param_3,ulong param_4,
          float param_5,PerFrameStats *param_6)

{
  (*(code *)PTR_process_007a3be8)();
  return;
}


// ===== 00759ef0  Krisp::AudioSdk::Nc<short>::getSessionStats =====

void __thiscall Krisp::AudioSdk::Nc<short>::getSessionStats(Nc<short> *this,SessionStats *param_1)

{
  (*(code *)PTR_getSessionStats_007a3bf0)();
  return;
}


// ===== 00759f00  Krisp::AudioSdk::NcSession<short>::getStats =====

void __thiscall
Krisp::AudioSdk::NcSession<short>::getStats(NcSession<short> *this,SessionStats *param_1)

{
  (*(code *)PTR_getStats_007a3bf8)();
  return;
}


// ===== 00759f10  Krisp::AudioSdk::Nc<float>::getSessionStats =====

void __thiscall Krisp::AudioSdk::Nc<float>::getSessionStats(Nc<float> *this,SessionStats *param_1)

{
  (*(code *)PTR_getSessionStats_007a3c00)();
  return;
}


// ===== 00759f20  Krisp::AudioSdk::NcSession<float>::getStats =====

void __thiscall
Krisp::AudioSdk::NcSession<float>::getStats(NcSession<float> *this,SessionStats *param_1)

{
  (*(code *)PTR_getStats_007a3c08)();
  return;
}


// ===== 00759f30  Krisp::AudioSdk::Nc<float>::~Nc =====

void __thiscall Krisp::AudioSdk::Nc<float>::~Nc(Nc<float> *this)

{
  (*(code *)PTR__Nc_007a3c10)();
  return;
}


// ===== 00759f40  Krisp::AudioSdk::NcSession<float>::stopSession =====

void __thiscall Krisp::AudioSdk::NcSession<float>::stopSession(NcSession<float> *this)

{
  (*(code *)PTR_stopSession_007a3c18)();
  return;
}


// ===== 00759f50  Krisp::AudioSdk::NcSession<float>::destroySession =====

void __thiscall Krisp::AudioSdk::NcSession<float>::destroySession(NcSession<float> *this)

{
  (*(code *)PTR_destroySession_007a3c20)();
  return;
}


// ===== 00759f60  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_007a3c28)();
  return sVar1;
}


// ===== 00759f70  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_007a3c30)();
  return pvVar1;
}


// ===== 00759f80  Krisp::AudioSdk::Nc<short>::~Nc =====

void __thiscall Krisp::AudioSdk::Nc<short>::~Nc(Nc<short> *this)

{
  (*(code *)PTR__Nc_007a3c38)();
  return;
}


// ===== 00759f90  Krisp::AudioSdk::NcSession<short>::stopSession =====

void __thiscall Krisp::AudioSdk::NcSession<short>::stopSession(NcSession<short> *this)

{
  (*(code *)PTR_stopSession_007a3c40)();
  return;
}


// ===== 00759fa0  Krisp::AudioSdk::NcSession<short>::destroySession =====

void __thiscall Krisp::AudioSdk::NcSession<short>::destroySession(NcSession<short> *this)

{
  (*(code *)PTR_destroySession_007a3c48)();
  return;
}


// ===== 00759fb0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_007a3c50)(__s,__c);
  return pvVar1;
}


// ===== 00759fc0  Krisp::AudioSdk::Vad<float>::create =====

void __thiscall Krisp::AudioSdk::Vad<float>::create(Vad<float> *this,VadSessionConfig *param_1)

{
  (*(code *)PTR_create_007a3c58)();
  return;
}


// ===== 00759fd0  Krisp::AudioSdk::VadSession<float>::VadSession =====

void __thiscall
Krisp::AudioSdk::VadSession<float>::VadSession(VadSession<float> *this,shared_ptr *param_1)

{
  (*(code *)PTR_VadSession_007a3c60)();
  return;
}


// ===== 00759fe0  Krisp::AudioSdk::VadSession<float>::initSession =====

void __thiscall Krisp::AudioSdk::VadSession<float>::initSession(void)

{
  (*(code *)PTR_initSession_007a3c68)();
  return;
}


// ===== 00759ff0  Krisp::AudioSdk::VadSession<float>::startSession =====

void __thiscall Krisp::AudioSdk::VadSession<float>::startSession(VadSession<float> *this)

{
  (*(code *)PTR_startSession_007a3c70)();
  return;
}


// ===== 0075a000  Krisp::AudioSdk::Vad<short>::create =====

void __thiscall Krisp::AudioSdk::Vad<short>::create(Vad<short> *this,VadSessionConfig *param_1)

{
  (*(code *)PTR_create_007a3c78)();
  return;
}


// ===== 0075a010  Krisp::AudioSdk::VadSession<short>::VadSession =====

void __thiscall
Krisp::AudioSdk::VadSession<short>::VadSession(VadSession<short> *this,shared_ptr *param_1)

{
  (*(code *)PTR_VadSession_007a3c80)();
  return;
}


// ===== 0075a020  Krisp::AudioSdk::VadSession<short>::initSession =====

void __thiscall Krisp::AudioSdk::VadSession<short>::initSession(void)

{
  (*(code *)PTR_initSession_007a3c88)();
  return;
}


// ===== 0075a030  Krisp::AudioSdk::VadSession<short>::startSession =====

void __thiscall Krisp::AudioSdk::VadSession<short>::startSession(VadSession<short> *this)

{
  (*(code *)PTR_startSession_007a3c90)();
  return;
}


// ===== 0075a040  Krisp::AudioSdk::Vad<short>::process =====

void __thiscall
Krisp::AudioSdk::Vad<short>::process(Vad<short> *this,short *param_1,ulong param_2,float *param_3)

{
  (*(code *)PTR_process_007a3c98)();
  return;
}


// ===== 0075a050  Krisp::AudioSdk::VadSession<short>::process =====

void __thiscall
Krisp::AudioSdk::VadSession<short>::process
          (VadSession<short> *this,short *param_1,ulong param_2,float *param_3)

{
  (*(code *)PTR_process_007a3ca0)();
  return;
}


// ===== 0075a060  Krisp::AudioSdk::Vad<float>::process =====

void __thiscall
Krisp::AudioSdk::Vad<float>::process(Vad<float> *this,float *param_1,ulong param_2,float *param_3)

{
  (*(code *)PTR_process_007a3ca8)();
  return;
}


// ===== 0075a070  Krisp::AudioSdk::VadSession<float>::process =====

void __thiscall
Krisp::AudioSdk::VadSession<float>::process
          (VadSession<float> *this,float *param_1,ulong param_2,float *param_3)

{
  (*(code *)PTR_process_007a3cb0)();
  return;
}


// ===== 0075a080  Krisp::AudioSdk::Vad<float>::~Vad =====

void __thiscall Krisp::AudioSdk::Vad<float>::~Vad(Vad<float> *this)

{
  (*(code *)PTR__Vad_007a3cb8)();
  return;
}


// ===== 0075a090  Krisp::AudioSdk::VadSession<float>::stopSession =====

void __thiscall Krisp::AudioSdk::VadSession<float>::stopSession(VadSession<float> *this)

{
  (*(code *)PTR_stopSession_007a3cc0)();
  return;
}


// ===== 0075a0a0  Krisp::AudioSdk::VadSession<float>::destroySession =====

void __thiscall Krisp::AudioSdk::VadSession<float>::destroySession(VadSession<float> *this)

{
  (*(code *)PTR_destroySession_007a3cc8)();
  return;
}


// ===== 0075a0b0  Krisp::AudioSdk::Vad<short>::~Vad =====

void __thiscall Krisp::AudioSdk::Vad<short>::~Vad(Vad<short> *this)

{
  (*(code *)PTR__Vad_007a3cd0)();
  return;
}


// ===== 0075a0c0  Krisp::AudioSdk::VadSession<short>::stopSession =====

void __thiscall Krisp::AudioSdk::VadSession<short>::stopSession(VadSession<short> *this)

{
  (*(code *)PTR_stopSession_007a3cd8)();
  return;
}


// ===== 0075a0d0  Krisp::AudioSdk::VadSession<short>::destroySession =====

void __thiscall Krisp::AudioSdk::VadSession<short>::destroySession(VadSession<short> *this)

{
  (*(code *)PTR_destroySession_007a3ce0)();
  return;
}


// ===== 0075a0e0  Krisp::AudioSdk::globalInit =====

void Krisp::AudioSdk::globalInit(void)

{
  (*(code *)PTR_globalInit_007a3ce8)();
  return;
}


// ===== 0075a0f0  Krisp::AudioSdk::globalInitImpl =====

void Krisp::AudioSdk::globalInitImpl(void)

{
  (*(code *)PTR_globalInitImpl_007a3cf0)();
  return;
}


// ===== 0075a100  Krisp::AudioSdk::getVersion =====

void Krisp::AudioSdk::getVersion(VersionInfo *param_1)

{
  (*(code *)PTR_getVersion_007a3cf8)();
  return;
}


// ===== 0075a110  Krisp::AudioSdk::getVersionImpl =====

void Krisp::AudioSdk::getVersionImpl(VersionInfo *param_1)

{
  (*(code *)PTR_getVersionImpl_007a3d00)();
  return;
}


// ===== 0075a120  Krisp::AudioSdk::globalDestroy =====

void __thiscall Krisp::AudioSdk::globalDestroy(AudioSdk *this)

{
  (*(code *)PTR_globalDestroy_007a3d08)();
  return;
}


// ===== 0075a130  Krisp::AudioSdk::globalDestroyImpl =====

void Krisp::AudioSdk::globalDestroyImpl(shared_ptr *param_1)

{
  (*(code *)PTR_globalDestroyImpl_007a3d10)();
  return;
}


// ===== 0075a140  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_007a3d18)(__s,__c);
  return pvVar1;
}


// ===== 0075a150  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_007a3d20)((int)__s1);
  return iVar1;
}


// ===== 0075a160  <EXTERNAL>::hypotf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hypotf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_hypotf_007a3d28)();
  return fVar1;
}


// ===== 0075a170  <EXTERNAL>::log =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_log_007a3d30)();
  return dVar1;
}


// ===== 0075a180  <EXTERNAL>::localeconv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = (lconv *)(*(code *)PTR_localeconv_007a3d38)();
  return plVar1;
}


// ===== 0075a190  <EXTERNAL>::__errno =====

void __errno(void)

{
  (*(code *)PTR___errno_007a3d40)();
  return;
}


// ===== 0075a1a0  <EXTERNAL>::strtoull =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_007a3d48)(__nptr,__endptr,__base);
  return uVar1;
}


// ===== 0075a1b0  <EXTERNAL>::strtoll =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_007a3d50)(__nptr,__endptr,__base);
  return lVar1;
}


// ===== 0075a1c0  <EXTERNAL>::strtod =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_strtod_007a3d58)();
  return dVar1;
}


// ===== 0075a1d0  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_007a3d60)();
  return;
}


// ===== 0075a1e0  <EXTERNAL>::__vsnprintf_chk =====

void __vsnprintf_chk(void)

{
  (*(code *)PTR___vsnprintf_chk_007a3d68)();
  return;
}


// ===== 0075a1f0  <EXTERNAL>::exp2 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double exp2(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_exp2_007a3d70)();
  return dVar1;
}


// ===== 0075a200  <EXTERNAL>::powf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_powf_007a3d78)();
  return fVar1;
}


// ===== 0075a210  <EXTERNAL>::pow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_pow_007a3d80)();
  return dVar1;
}


// ===== 0075a220  <EXTERNAL>::log10 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_log10_007a3d88)();
  return dVar1;
}


// ===== 0075a230  <EXTERNAL>::exp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double exp(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_exp_007a3d90)();
  return dVar1;
}


// ===== 0075a240  <EXTERNAL>::logf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float logf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_logf_007a3d98)();
  return fVar1;
}


// ===== 0075a250  <EXTERNAL>::log10f =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float log10f(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_log10f_007a3da0)();
  return fVar1;
}


// ===== 0075a260  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_007a3da8)();
  return pvVar1;
}


// ===== 0075a270  <EXTERNAL>::sincos =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincos(double __x,double *__sinx,double *__cosx)

{
  (*(code *)PTR_sincos_007a3db0)();
  return;
}


// ===== 0075a280  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_007a3db8)();
  return sVar1;
}


// ===== 0075a290  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_007a3dc0)();
  return;
}


// ===== 0075a2a0  <EXTERNAL>::exit =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_007a3dc8)(__status);
  return;
}


// ===== 0075a2b0  <EXTERNAL>::cos =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_cos_007a3dd0)();
  return dVar1;
}


// ===== 0075a2c0  <EXTERNAL>::sin =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_sin_007a3dd8)();
  return dVar1;
}


// ===== 0075a2d0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_007a3de0)((int)__s1);
  return iVar1;
}


// ===== 0075a2e0  <EXTERNAL>::expf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float expf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_expf_007a3de8)();
  return fVar1;
}


// ===== 0075a2f0  <EXTERNAL>::tanhf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float tanhf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_tanhf_007a3df0)();
  return fVar1;
}


// ===== 0075a300  <EXTERNAL>::getenv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_007a3df8)();
  return pcVar1;
}


// ===== 0075a310  <EXTERNAL>::sincosf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincosf(float __x,float *__sinx,float *__cosx)

{
  (*(code *)PTR_sincosf_007a3e00)();
  return;
}


// ===== 0075a320  <EXTERNAL>::atan2f =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float atan2f(float __y,float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_atan2f_007a3e08)();
  return fVar1;
}


// ===== 0075a330  <EXTERNAL>::localtime_r =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_007a3e10)();
  return ptVar1;
}


// ===== 0075a340  <EXTERNAL>::backtrace =====

void backtrace(void)

{
  (*(code *)PTR_backtrace_007a3e18)();
  return;
}


// ===== 0075a350  <EXTERNAL>::backtrace_symbols =====

void backtrace_symbols(void)

{
  (*(code *)PTR_backtrace_symbols_007a3e20)();
  return;
}


// ===== 0075a360  <EXTERNAL>::strcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_007a3e28)();
  return pcVar1;
}


// ===== 0075a370  <EXTERNAL>::time =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_007a3e30)();
  return tVar1;
}


// ===== 0075a380  <EXTERNAL>::strchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_007a3e38)(__s,__c);
  return pcVar1;
}


// ===== 0075a390  <EXTERNAL>::strncpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_007a3e40)();
  return pcVar1;
}


// ===== 0075a3a0  <EXTERNAL>::qsort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_007a3e48)();
  return;
}


// ===== 0075a3b0  <EXTERNAL>::atoi =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_007a3e50)((int)__nptr);
  return iVar1;
}


// ===== 0075a3c0  <EXTERNAL>::strrchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_007a3e58)(__s,__c);
  return pcVar1;
}


// ===== 0075a3d0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_007a3e60)((int)__s1);
  return iVar1;
}


// ===== 0075a3e0  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_007a3e68)();
  return pvVar1;
}


// ===== 0075a3f0  <EXTERNAL>::stat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_007a3e70)((int)__file);
  return iVar1;
}


// ===== 0075a400  <EXTERNAL>::strtoul =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_007a3e78)(__nptr,__endptr,__base);
  return uVar1;
}


// ===== 0075a410  <EXTERNAL>::mktime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_007a3e80)();
  return tVar1;
}


// ===== 0075a420  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_007a3e88)();
  return;
}


// ===== 0075a430  <EXTERNAL>::strtol =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_007a3e90)(__nptr,__endptr,__base);
  return lVar1;
}


// ===== 0075a440  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_007a3e98)();
  return pvVar1;
}


// ===== 0075a450  <EXTERNAL>::sysconf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_007a3ea0)(__name);
  return lVar1;
}


// ===== 0075a460  <EXTERNAL>::mmap =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_007a3ea8)(__addr,__len,__prot,__flags,__fd);
  return pvVar1;
}


// ===== 0075a470  <EXTERNAL>::mprotect =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mprotect(void *__addr,size_t __len,int __prot)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mprotect_007a3eb0)((int)__addr,__len,__prot);
  return iVar1;
}


// ===== 0075a480  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_007a3eb8)();
  return lVar1;
}


// ===== 0075a490  <EXTERNAL>::mlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mlock(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mlock_007a3ec0)((int)__addr);
  return iVar1;
}


// ===== 0075a4a0  <EXTERNAL>::madvise =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int madvise(void *__addr,size_t __len,int __advice)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_madvise_007a3ec8)((int)__addr,__len,__advice);
  return iVar1;
}


// ===== 0075a4b0  <EXTERNAL>::munmap =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_007a3ed0)((int)__addr);
  return iVar1;
}


// ===== 0075a4c0  <EXTERNAL>::readdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_007a3ed8)();
  return pdVar1;
}


// ===== 0075a4d0  <EXTERNAL>::opendir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_007a3ee0)();
  return pDVar1;
}


// ===== 0075a4e0  <EXTERNAL>::closedir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_007a3ee8)((int)__dirp);
  return iVar1;
}


// ===== 0075a4f0  <EXTERNAL>::strerror =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_007a3ef0)(__errnum);
  return pcVar1;
}


// ===== 0075a500  <EXTERNAL>::gmtime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_007a3ef8)();
  return ptVar1;
}


// ===== 0075a510  <EXTERNAL>::sleep =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_007a3f00)(__seconds);
  return uVar1;
}


// ===== 0075a520  <EXTERNAL>::usleep =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_007a3f08)(__useconds);
  return iVar1;
}


// ===== 0075a530  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_007a3f10)();
  return _Var1;
}


// ===== 0075a540  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_007a3f18)();
  return;
}


// ===== 0075a550  <EXTERNAL>::strstr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_007a3f20)();
  return pcVar1;
}


// ===== 0075a560  <EXTERNAL>::fopen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_007a3f28)();
  return pFVar1;
}


// ===== 0075a570  <EXTERNAL>::fileno =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_007a3f30)((int)__stream);
  return iVar1;
}


// ===== 0075a580  <EXTERNAL>::tcgetattr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_007a3f38)(__fd);
  return iVar1;
}


// ===== 0075a590  <EXTERNAL>::fputs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_007a3f40)((int)__s);
  return iVar1;
}


// ===== 0075a5a0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_007a3f48)((int)__stream);
  return iVar1;
}


// ===== 0075a5b0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_007a3f50)((int)__stream);
  return iVar1;
}


// ===== 0075a5c0  <EXTERNAL>::fclose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_007a3f58)((int)__stream);
  return iVar1;
}


// ===== 0075a5d0  <EXTERNAL>::sigaction =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_007a3f60)(__sig);
  return iVar1;
}


// ===== 0075a5e0  <EXTERNAL>::signal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_007a3f68)(__sig);
  return p_Var1;
}


// ===== 0075a5f0  <EXTERNAL>::tcsetattr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_007a3f70)(__fd,__optional_actions);
  return iVar1;
}


// ===== 0075a600  <EXTERNAL>::fgets =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_007a3f78)(__s,__n);
  return pcVar1;
}


// ===== 0075a610  <EXTERNAL>::feof =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_007a3f80)((int)__stream);
  return iVar1;
}


// ===== 0075a620  <EXTERNAL>::ferror =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_007a3f88)((int)__stream);
  return iVar1;
}


// ===== 0075a630  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_007a3f90)(__c);
  return iVar1;
}


// ===== 0075a640  <EXTERNAL>::strspn =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_007a3f98)();
  return sVar1;
}


// ===== 0075a650  <EXTERNAL>::strcspn =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_007a3fa0)();
  return sVar1;
}


// ===== 0075a660  <EXTERNAL>::sscanf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_007a3fa8)((int)__s);
  return iVar1;
}


// ===== 0075a670  <EXTERNAL>::fstat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_007a3fb0)(__fd);
  return iVar1;
}


// ===== 0075a680  <EXTERNAL>::close =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_007a3fb8)(__fd);
  return iVar1;
}


// ===== 0075a690  <EXTERNAL>::getentropy =====

void getentropy(void)

{
  (*(code *)PTR_getentropy_007a3fc0)();
  return;
}


// ===== 0075a6a0  <EXTERNAL>::open =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_007a3fc8)((int)__file,__oflag);
  return iVar1;
}


// ===== 0075a6b0  <EXTERNAL>::read =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_007a3fd0)(__fd);
  return sVar1;
}


// ===== 0075a6c0  <EXTERNAL>::clock_gettime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_007a3fd8)(__clock_id);
  return iVar1;
}


// ===== 0075a6d0  <EXTERNAL>::gettimeofday =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_007a3fe0)((int)__tv);
  return iVar1;
}


// ===== 0075a6e0  <EXTERNAL>::wmemchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemchr(wchar_t *__s,wchar_t __c,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(*(code *)PTR_wmemchr_007a3fe8)(__s,__c);
  return pwVar1;
}


// ===== 0075a6f0  <EXTERNAL>::strftime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_007a3ff0)();
  return sVar1;
}


// ===== 0075a700  <EXTERNAL>::log1pf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float log1pf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_log1pf_007a3ff8)();
  return fVar1;
}


// ===== 0075a710  <EXTERNAL>::remainderf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_remainderf_007a4000)();
  return fVar1;
}


// ===== 0075a720  <EXTERNAL>::posix_memalign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_007a4008)((int)__memptr);
  return iVar1;
}


// ===== 0075a730  <EXTERNAL>::strnlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_007a4010)();
  return sVar1;
}


// ===== 0075a740  <EXTERNAL>::__memcpy_chk =====

void __memcpy_chk(void)

{
  (*(code *)PTR___memcpy_chk_007a4018)();
  return;
}


// ===== 0075a750  <EXTERNAL>::_ZTH15ThreadedBufSize =====

void _ZTH15ThreadedBufSize(void)

{
  (*(code *)PTR__ZTH15ThreadedBufSize_007a4020)();
  return;
}


// ===== 0075a760  <EXTERNAL>::ldexpf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float ldexpf(float __x,int __exponent)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_ldexpf_007a4028)(__exponent);
  return fVar1;
}


// ===== 0075a770  <EXTERNAL>::vsnprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_007a4030)((int)__s);
  return iVar1;
}


// ===== 0075a780  <EXTERNAL>::gmtime_r =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_007a4038)();
  return ptVar1;
}


// ===== 0075a790  <EXTERNAL>::difftime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_difftime_007a4040)();
  return dVar1;
}


// ===== 0075a7a0  <EXTERNAL>::llroundl =====

void llroundl(void)

{
  (*(code *)PTR_llroundl_007a4048)();
  return;
}


// ===== 0075a7b0  <EXTERNAL>::pthread_self =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_007a4050)();
  return pVar1;
}


// ===== 0075a7c0  <EXTERNAL>::__android_log_print =====

void __android_log_print(void)

{
  (*(code *)PTR___android_log_print_007a4058)();
  return;
}


// ===== 0075a7d0  <EXTERNAL>::dirname =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_dirname_007a4060)();
  return pcVar1;
}


// ===== 0075a7e0  <EXTERNAL>::pthread_attr_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_init(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_init_007a4068)((int)__attr);
  return iVar1;
}


// ===== 0075a7f0  <EXTERNAL>::pthread_attr_setstacksize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setstacksize(pthread_attr_t *__attr,size_t __stacksize)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setstacksize_007a4070)((int)__attr);
  return iVar1;
}


// ===== 0075a800  <EXTERNAL>::pthread_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_007a4078)((int)__newthread);
  return iVar1;
}


// ===== 0075a810  <EXTERNAL>::nanosleep =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_007a4080)((int)__requested_time);
  return iVar1;
}


// ===== 0075a820  <EXTERNAL>::__open_2 =====

void __open_2(void)

{
  (*(code *)PTR___open_2_007a4088)();
  return;
}


// ===== 0075a830  <EXTERNAL>::lseek =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_007a4090)(__fd,__offset,__whence);
  return _Var1;
}


// ===== 0075a840  <EXTERNAL>::mkdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_007a4098)((int)__path,__mode);
  return iVar1;
}


// ===== 0075a850  <EXTERNAL>::nftw =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nftw(char *__dir,__nftw_func_t __func,int __descriptors,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nftw_007a40a0)((int)__dir,__func,__descriptors,__flag);
  return iVar1;
}


// ===== 0075a860  <EXTERNAL>::realpath =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_007a40a8)();
  return pcVar1;
}


// ===== 0075a870  <EXTERNAL>::dlerror =====

void dlerror(void)

{
  (*(code *)PTR_dlerror_007a40b0)();
  return;
}


// ===== 0075a880  <EXTERNAL>::dlopen =====

void dlopen(void)

{
  (*(code *)PTR_dlopen_007a40b8)();
  return;
}


// ===== 0075a890  <EXTERNAL>::dlclose =====

void dlclose(void)

{
  (*(code *)PTR_dlclose_007a40c0)();
  return;
}


// ===== 0075a8a0  <EXTERNAL>::dlsym =====

void dlsym(void)

{
  (*(code *)PTR_dlsym_007a40c8)();
  return;
}


// ===== 0075a8b0  <EXTERNAL>::pthread_join =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_007a40d0)((int)__th);
  return iVar1;
}


// ===== 0075a8c0  <EXTERNAL>::remove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_remove_007a40d8)((int)__filename);
  return iVar1;
}


// ===== 0075a8d0  <EXTERNAL>::__gnu_strerror_r =====

void __gnu_strerror_r(void)

{
  (*(code *)PTR___gnu_strerror_r_007a40e0)();
  return;
}


// ===== 0075a8e0  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_007a40e8)();
  return;
}


// ===== 0075a8f0  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_007a40f0)(__key);
  return pvVar1;
}


// ===== 0075a900  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_007a40f8)(__key);
  return iVar1;
}


// ===== 0075a910  <EXTERNAL>::pthread_key_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_007a4100)((int)__key);
  return iVar1;
}


// ===== 0075a920  <EXTERNAL>::__android_log_write =====

void __android_log_write(void)

{
  (*(code *)PTR___android_log_write_007a4108)();
  return;
}


// ===== 0075a930  <EXTERNAL>::strtof =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_007a4110)();
  return fVar1;
}


// ===== 0075a940  <EXTERNAL>::printf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_007a4118)((int)__format);
  return iVar1;
}


// ===== 0075a950  <EXTERNAL>::sched_yield =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_yield(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_yield_007a4120)();
  return iVar1;
}


// ===== 0075a960  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_007a4128)((int)__mutex);
  return iVar1;
}


// ===== 0075a970  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_007a4130)((int)__mutex);
  return iVar1;
}


// ===== 0075a980  <EXTERNAL>::puts =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_007a4138)((int)__s);
  return iVar1;
}


// ===== 0075a990  <EXTERNAL>::perror =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_007a4140)();
  return;
}


// ===== 0075a9a0  <EXTERNAL>::pthread_cond_wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_007a4148)((int)__cond);
  return iVar1;
}


// ===== 0075a9b0  <EXTERNAL>::pthread_cond_broadcast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_007a4150)((int)__cond);
  return iVar1;
}


// ===== 0075a9c0  <EXTERNAL>::snprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_007a4158)((int)__s);
  return iVar1;
}


// ===== 0075a9d0  <EXTERNAL>::strerror_r =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror_r(int __errnum,char *__buf,size_t __buflen)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_r_007a4160)(__errnum);
  return pcVar1;
}


// ===== 0075a9e0  <EXTERNAL>::pthread_cond_timedwait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_007a4168)((int)__cond);
  return iVar1;
}


// ===== 0075a9f0  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_007a4170)((int)__mutex);
  return iVar1;
}


// ===== 0075aa00  <EXTERNAL>::fseek =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_007a4178)((int)__stream,__off,__whence);
  return iVar1;
}


// ===== 0075aa10  <EXTERNAL>::fread =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_007a4180)();
  return sVar1;
}


// ===== 0075aa20  <EXTERNAL>::fseeko =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko(FILE *__stream,__off_t __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseeko_007a4188)((int)__stream,__off,__whence);
  return iVar1;
}


// ===== 0075aa30  <EXTERNAL>::ftello =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t ftello(FILE *__stream)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_ftello_007a4190)();
  return _Var1;
}


// ===== 0075aa40  <EXTERNAL>::ungetc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ungetc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ungetc_007a4198)(__c);
  return iVar1;
}


// ===== 0075aa50  <EXTERNAL>::getc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getc_007a41a0)((int)__stream);
  return iVar1;
}


// ===== 0075aa60  <EXTERNAL>::ungetwc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t ungetwc(wint_t __wc,__FILE *__stream)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_ungetwc_007a41a8)(__wc);
  return wVar1;
}


// ===== 0075aa70  <EXTERNAL>::getwc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t getwc(__FILE *__stream)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_getwc_007a41b0)((int)__stream);
  return wVar1;
}


// ===== 0075aa80  <EXTERNAL>::fputwc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t fputwc(wchar_t __wc,__FILE *__stream)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_fputwc_007a41b8)(__wc);
  return wVar1;
}


// ===== 0075aa90  <EXTERNAL>::newlocale =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__locale_t newlocale(int __category_mask,char *__locale,__locale_t __base)

{
  __locale_t p_Var1;
  
  p_Var1 = (__locale_t)(*(code *)PTR_newlocale_007a41c0)(__category_mask);
  return p_Var1;
}


// ===== 0075aaa0  <EXTERNAL>::uselocale =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__locale_t uselocale(__locale_t __dataset)

{
  __locale_t p_Var1;
  
  p_Var1 = (__locale_t)(*(code *)PTR_uselocale_007a41c8)();
  return p_Var1;
}


// ===== 0075aab0  <EXTERNAL>::vsscanf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsscanf(char *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsscanf_007a41d0)((int)__s);
  return iVar1;
}


// ===== 0075aac0  <EXTERNAL>::strftime_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime_l(char *__s,size_t __maxsize,char *__format,tm *__tp,__locale_t __loc)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_l_007a41d8)();
  return sVar1;
}


// ===== 0075aad0  <EXTERNAL>::mbsrtowcs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbsrtowcs(wchar_t *__dst,char **__src,size_t __len,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbsrtowcs_007a41e0)();
  return sVar1;
}


// ===== 0075aae0  <EXTERNAL>::vasprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_007a41e8)((int)__ptr);
  return iVar1;
}


// ===== 0075aaf0  <EXTERNAL>::freelocale =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void freelocale(__locale_t __dataset)

{
  (*(code *)PTR_freelocale_007a41f0)();
  return;
}


// ===== 0075ab00  <EXTERNAL>::iswlower_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswlower_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswlower_l_007a41f8)(__wc);
  return iVar1;
}


// ===== 0075ab10  <EXTERNAL>::wcsnrtombs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcsnrtombs(char *__dst,wchar_t **__src,size_t __nwc,size_t __len,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcsnrtombs_007a4200)();
  return sVar1;
}


// ===== 0075ab20  <EXTERNAL>::wcrtomb =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcrtomb(char *__s,wchar_t __wc,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcrtomb_007a4208)(__s,__wc);
  return sVar1;
}


// ===== 0075ab30  <EXTERNAL>::mbsnrtowcs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbsnrtowcs(wchar_t *__dst,char **__src,size_t __nmc,size_t __len,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbsnrtowcs_007a4210)();
  return sVar1;
}


// ===== 0075ab40  <EXTERNAL>::mbrtowc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbrtowc_007a4218)();
  return sVar1;
}


// ===== 0075ab50  <EXTERNAL>::mbtowc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mbtowc(wchar_t *__pwc,char *__s,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mbtowc_007a4220)((int)__pwc);
  return iVar1;
}


// ===== 0075ab60  <EXTERNAL>::__ctype_get_mb_cur_max =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t __ctype_get_mb_cur_max(void)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR___ctype_get_mb_cur_max_007a4228)();
  return sVar1;
}


// ===== 0075ab70  <EXTERNAL>::mbrlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbrlen(char *__s,size_t __n,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbrlen_007a4230)();
  return sVar1;
}


// ===== 0075ab80  <EXTERNAL>::strtoll_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll_l(char *__nptr,char **__endptr,int __base,__locale_t __loc)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_l_007a4238)(__nptr,__endptr,__base);
  return lVar1;
}


// ===== 0075ab90  <EXTERNAL>::strtoull_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull_l(char *__nptr,char **__endptr,int __base,__locale_t __loc)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_l_007a4240)(__nptr,__endptr,__base);
  return uVar1;
}


// ===== 0075aba0  <EXTERNAL>::strtold_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtold_l(char *__nptr,char **__endptr,__locale_t __loc)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_strtold_l_007a4248)();
  return dVar1;
}


// ===== 0075abb0  <EXTERNAL>::pathconf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long pathconf(char *__path,int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_pathconf_007a4250)(__path,__name);
  return lVar1;
}


// ===== 0075abc0  <EXTERNAL>::getcwd =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_007a4258)();
  return pcVar1;
}


// ===== 0075abd0  <EXTERNAL>::vfprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_007a4260)((int)__s);
  return iVar1;
}


// ===== 0075abe0  <EXTERNAL>::android_set_abort_message =====

void android_set_abort_message(void)

{
  (*(code *)PTR_android_set_abort_message_007a4268)();
  return;
}


// ===== 0075abf0  <EXTERNAL>::openlog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_007a4270)(__ident,__option,__facility);
  return;
}


// ===== 0075ac00  <EXTERNAL>::syslog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_007a4278)(__pri);
  return;
}


// ===== 0075ac10  <EXTERNAL>::closelog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_007a4280)();
  return;
}


// ===== 0075ac20  <EXTERNAL>::__cxa_thread_atexit_impl =====

void __cxa_thread_atexit_impl(void)

{
  (*(code *)PTR___cxa_thread_atexit_impl_007a4288)();
  return;
}


// ===== 0075ac30  <EXTERNAL>::pthread_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_007a4290)((int)__once_control);
  return iVar1;
}


// ===== 0075ac40  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_007a4298)(__key);
  return iVar1;
}


// ===== 0075ac50  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_007a42a0)();
  return;
}


// ===== 0075ac60  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_007a42a8)((int)__rwlock);
  return iVar1;
}


// ===== 0075ac70  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_007a42b0)((int)__rwlock);
  return iVar1;
}


// ===== 0075ac80  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_007a42b8)((int)__rwlock);
  return iVar1;
}


// ===== 007b3000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3018  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3020  <EXTERNAL>::wcslen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcslen(wchar_t *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3028  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3030  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3038  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3040  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3048  <EXTERNAL>::memchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3050  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3058  <EXTERNAL>::hypotf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hypotf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3060  <EXTERNAL>::log =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3068  <EXTERNAL>::localeconv =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

lconv * localeconv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3070  <EXTERNAL>::__errno =====

/* WARNING: Control flow encountered bad instruction data */

void __errno(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3078  <EXTERNAL>::strtoull =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3080  <EXTERNAL>::strtoll =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3088  <EXTERNAL>::strtod =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3090  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3098  <EXTERNAL>::__vsnprintf_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __vsnprintf_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30a0  <EXTERNAL>::exp2 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double exp2(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30a8  <EXTERNAL>::powf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30b0  <EXTERNAL>::pow =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30b8  <EXTERNAL>::log10 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30c0  <EXTERNAL>::exp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double exp(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30c8  <EXTERNAL>::logf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float logf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30d0  <EXTERNAL>::log10f =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float log10f(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30d8  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30e0  <EXTERNAL>::sincos =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincos(double __x,double *__sinx,double *__cosx)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30f0  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b30f8  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3100  <EXTERNAL>::exit =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3108  <EXTERNAL>::cos =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3110  <EXTERNAL>::sin =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3118  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3120  <EXTERNAL>::expf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float expf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3128  <EXTERNAL>::tanhf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float tanhf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3130  <EXTERNAL>::getenv =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3138  <EXTERNAL>::sincosf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincosf(float __x,float *__sinx,float *__cosx)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3140  <EXTERNAL>::atan2f =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float atan2f(float __y,float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3148  <EXTERNAL>::localtime_r =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3150  <EXTERNAL>::backtrace =====

/* WARNING: Control flow encountered bad instruction data */

void backtrace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3158  <EXTERNAL>::backtrace_symbols =====

/* WARNING: Control flow encountered bad instruction data */

void backtrace_symbols(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3160  <EXTERNAL>::strcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3168  <EXTERNAL>::time =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3170  <EXTERNAL>::strchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3178  <EXTERNAL>::strncpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3180  <EXTERNAL>::qsort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3188  <EXTERNAL>::atoi =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3190  <EXTERNAL>::strrchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3198  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31a0  <EXTERNAL>::calloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31a8  <EXTERNAL>::stat =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31b0  <EXTERNAL>::strtoul =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31b8  <EXTERNAL>::mktime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31c8  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31d0  <EXTERNAL>::strtol =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31d8  <EXTERNAL>::realloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31e0  <EXTERNAL>::sysconf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31e8  <EXTERNAL>::mmap =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31f0  <EXTERNAL>::mprotect =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mprotect(void *__addr,size_t __len,int __prot)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b31f8  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3200  <EXTERNAL>::mlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mlock(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3208  <EXTERNAL>::madvise =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int madvise(void *__addr,size_t __len,int __advice)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3210  <EXTERNAL>::munmap =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3218  <EXTERNAL>::readdir =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3220  <EXTERNAL>::opendir =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3228  <EXTERNAL>::closedir =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3230  <EXTERNAL>::strerror =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3238  <EXTERNAL>::gmtime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3240  <EXTERNAL>::sleep =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3248  <EXTERNAL>::usleep =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3250  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3258  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3260  <EXTERNAL>::strstr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3268  <EXTERNAL>::fopen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3278  <EXTERNAL>::fileno =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3280  <EXTERNAL>::tcgetattr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3288  <EXTERNAL>::fputs =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3290  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3298  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32a0  <EXTERNAL>::fclose =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32a8  <EXTERNAL>::sigaction =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32b0  <EXTERNAL>::signal =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32b8  <EXTERNAL>::tcsetattr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32c0  <EXTERNAL>::fgets =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32c8  <EXTERNAL>::feof =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32d0  <EXTERNAL>::ferror =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32d8  <EXTERNAL>::fputc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32e0  <EXTERNAL>::strspn =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32e8  <EXTERNAL>::strcspn =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32f0  <EXTERNAL>::sscanf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b32f8  <EXTERNAL>::fstat =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3300  <EXTERNAL>::close =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3308  <EXTERNAL>::getentropy =====

/* WARNING: Control flow encountered bad instruction data */

void getentropy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3310  <EXTERNAL>::open =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3318  <EXTERNAL>::read =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3320  <EXTERNAL>::clock_gettime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3328  <EXTERNAL>::gettimeofday =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3330  <EXTERNAL>::wmemchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemchr(wchar_t *__s,wchar_t __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3338  <EXTERNAL>::strftime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3340  <EXTERNAL>::log1pf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float log1pf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3348  <EXTERNAL>::remainderf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3350  <EXTERNAL>::posix_memalign =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3358  <EXTERNAL>::strnlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3360  <EXTERNAL>::__memcpy_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __memcpy_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3368  <EXTERNAL>::_ZTH15ThreadedBufSize =====

/* WARNING: Control flow encountered bad instruction data */

void _ZTH15ThreadedBufSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3370  <EXTERNAL>::ldexpf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float ldexpf(float __x,int __exponent)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3378  <EXTERNAL>::vsnprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3380  <EXTERNAL>::gmtime_r =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3388  <EXTERNAL>::difftime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3390  <EXTERNAL>::llroundl =====

/* WARNING: Control flow encountered bad instruction data */

void llroundl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3398  <EXTERNAL>::pthread_self =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33a0  <EXTERNAL>::__android_log_print =====

/* WARNING: Control flow encountered bad instruction data */

void __android_log_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33a8  <EXTERNAL>::dirname =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33b0  <EXTERNAL>::pthread_attr_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_init(pthread_attr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33b8  <EXTERNAL>::pthread_attr_setstacksize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setstacksize(pthread_attr_t *__attr,size_t __stacksize)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33c0  <EXTERNAL>::pthread_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33c8  <EXTERNAL>::nanosleep =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33d0  <EXTERNAL>::__open_2 =====

/* WARNING: Control flow encountered bad instruction data */

void __open_2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33d8  <EXTERNAL>::lseek =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33e0  <EXTERNAL>::mkdir =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33e8  <EXTERNAL>::nftw =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nftw(char *__dir,__nftw_func_t __func,int __descriptors,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33f0  <EXTERNAL>::realpath =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b33f8  <EXTERNAL>::dlerror =====

/* WARNING: Control flow encountered bad instruction data */

void dlerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3400  <EXTERNAL>::dlopen =====

/* WARNING: Control flow encountered bad instruction data */

void dlopen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3408  <EXTERNAL>::dlclose =====

/* WARNING: Control flow encountered bad instruction data */

void dlclose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3410  <EXTERNAL>::dlsym =====

/* WARNING: Control flow encountered bad instruction data */

void dlsym(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3418  <EXTERNAL>::pthread_join =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3420  <EXTERNAL>::remove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3428  <EXTERNAL>::__gnu_strerror_r =====

/* WARNING: Control flow encountered bad instruction data */

void __gnu_strerror_r(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3430  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3438  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 007b3440  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


